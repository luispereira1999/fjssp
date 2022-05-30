/**
 * @brief	Ficheiro com todas as assinaturas globais necess�rios para a utiliza��o dos tipos e estruturas de dados
 * @file	data-types.h
 * @author	Lu�s Pereira
 * @email	a18446@alunos.ipca.pt
 * @date	25/03/2022
*/


#ifndef DATATYPES
#define DATATYPES 1

#pragma region constantes

// tamanho relativos �s estruturas de dados
#define HASH_TABLE_SIZE 13
#define NUMBER_MACHINES 8
#define MAX_TIME 18

// tamanhos e nomes relativos a ficheiros de texto
#define FILE_LINE_SIZE 50
#define JOBS_FILENAME_TEXT "text/jobs.csv"
#define MACHINES_FILENAME_TEXT "text/machines.csv"
#define OPERATIONS_FILENAME_TEXT "text/operations.csv"
#define EXECUTIONS_FILENAME_TEXT "text/executions.csv"
#define PLAN_FILENAME_TEXT "text/plan.csv"

// tamanho da quantidade de opera��es que s�o guardadas em cada linha do plano exportado
#define OPEARATIONS_TEXT_SIZE 50

// nomes para os ficheiros bin�rios onde os dados s�o armazenados durante a execu��o do programa
#define JOBS_FILENAME_BINARY "binary/jobs.bin"
#define MACHINES_FILENAME_BINARY "binary/machines.bin"
#define OPERATIONS_FILENAME_BINARY "binary/operations.bin"
#define EXECUTIONS_FILENAME_BINARY "binary/executions.bin"

#pragma endregion


#pragma region representa��es

/**
 * @brief	Criar tipo de dados booleano
 */
typedef enum bool
{
   false = 0,
   true = 1
} bool;

#pragma endregion


#pragma region estruturas de dados em mem�ria

/**
 * @brief	Estrutura de dados para representar a lista de trabalhos (em mem�ria)
 */
typedef struct Job
{
	int id;
	struct Job* next;
} Job;

// lista de trabalhos
extern Job* jobs; // extern: informa o compilador que esta vari�vel est� definida algures no c�digo

/**
 * @brief	Estrutura de dados para representar a lista de m�quinas (em mem�ria)
 */
typedef struct Machine
{
	int id;
	bool isBusy; // se a m�quina est� ou n�o em utiliza��o
	struct Machine* next;
} Machine;

// lista de m�quinas
extern Machine* machines;

/**
 * @brief	Estrutura de dados para representar a lista de opera��es (em mem�ria)
 */
typedef struct Operation
{
	int id;
	int jobID;
	int position; // posi��o da opera��o (se � a 1�, 2�, 3�... a ser executada)
	struct Operation* next;
} Operation;

// lista de opera��es
extern Operation* operations;

/**
 * @brief	Estrutura de dados para representar a lista das execu��es das opera��es em m�quinas (em mem�ria)
 */
typedef struct Execution
{
	int operationID;
	int machineID;
	int runtime; // unidades de tempo necess�rias para a execu��o da opera��o
	struct Execution* next;
} Execution;

// lista de execu��es
extern Execution* executions;

/**
 * @brief	Estrutura de dados para representar cada n� (posi��o) da tabela hash das execu��es (em mem�ria)
 */
typedef struct {
	Execution* start; // apontador para o primeiro elemento de cada posi��o da tabela
	int numberOfExecutions; // quantidade de execu��es de cada posi��o da tabela
} ExecutionNode;

// tabela hash para armazenar as execu��es e fazer buscas de forma mais eficiente,
// � um array de apontadores para listas de execu��es
extern ExecutionNode* executionsTable[HASH_TABLE_SIZE];

/**
 * @brief	Estrutura de dados para representar um plano de produ��o
 */
typedef struct Cell
{
	int jobID;
	int operationID;
	int initialTime;
	int finalTime;
} Cell;

// matriz do plano
extern Cell plan[NUMBER_MACHINES][MAX_TIME];

typedef struct CellExported
{
	int jobID;
	char operationsIDs[OPEARATIONS_TEXT_SIZE];
	int initialTime;
	int finalTime;
	struct CellExported* next;
} CellExported;

///**
// * @brief	Estrutura de dados para representar um plano de produ��o
// */
//typedef struct CellList
//{
//	int jobID;
//	int operationID;
//	int initialTime;
//	int finalTime;
//	CellList* next;
//} CellList;

#pragma endregion


#pragma region estruturas de dados em ficheiros

/**
 * @brief	Estrutura de dados para armazenar em ficheiro a lista de trabalhos
 */
typedef struct FileJob
{
	int id;
} FileJob;

/**
 * @brief	Estrutura de dados para armazenar em ficheiro a lista de m�quinas
 */
typedef struct FileMachine
{
	int id;
	bool isBusy; // se a m�quina est� ou n�o em utiliza��o
} FileMachine;

/**
 * @brief	Estrutura de dados para armazenar em ficheiro a lista de opera��es
 */
typedef struct FileOperation
{
	int id;
	int jobID;
	int position; // posi��o da opera��o (se � a 1�, 2�, 3�... a ser executada)
} FileOperation;

/**
 * @brief	Estrutura de dados para armazenar em ficheiro a lista de execu��es das opera��es em m�quinas
 */
typedef struct FileExecution
{
	int operationID;
	int machineID;
	int runtime; // unidades de tempo necess�rias para a execu��o da opera��o
} FileExecution;

#pragma endregion

#endif