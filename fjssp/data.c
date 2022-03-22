/*
Descri��o:           Ficheiro com fun��o para carregar dados
Desenvolvedor(es):   Lu�s Pereira (18446)
Cria��o:             14/03/2022
�ltima atualiza��o:  31/03/2022
*/

#include <stdio.h>
#include "header.h"

void loadData(Job** jobs, Machine** machines, Operation** operations, OperationExecution** operationsExecution)
{
	Job* job = NULL;
	Machine* machine = NULL;
	Operation* operation = NULL;
	OperationExecution* operationExecution = NULL;

	// jobs
	job = newJob(1);
	*jobs = insertJobAtStart(*jobs, job);
	job = newJob(2);
	*jobs = insertJobAtStart(*jobs, job);
	job = newJob(3);
	*jobs = insertJobAtStart(*jobs, job);
	job = newJob(4);
	*jobs = insertJobAtStart(*jobs, job);
	job = newJob(5);
	*jobs = insertJobAtStart(*jobs, job);
	job = newJob(6);
	*jobs = insertJobAtStart(*jobs, job);
	job = newJob(7);
	*jobs = insertJobAtStart(*jobs, job);
	job = newJob(8);
	*jobs = insertJobAtStart(*jobs, job);
	// machines
	machine = newMachine(1, false);
	*machines = insertMachineAtStart(*machines, machine);
	machine = newMachine(2, false);
	*machines = insertMachineAtStart(*machines, machine);
	machine = newMachine(3, false);
	*machines = insertMachineAtStart(*machines, machine);
	machine = newMachine(4, false);
	*machines = insertMachineAtStart(*machines, machine);
	machine = newMachine(5, false);
	*machines = insertMachineAtStart(*machines, machine);
	machine = newMachine(6, false);
	*machines = insertMachineAtStart(*machines, machine);
	machine = newMachine(7, false);
	*machines = insertMachineAtStart(*machines, machine);
	machine = newMachine(8, false);
	*machines = insertMachineAtStart(*machines, machine);
	// operations - job 1
	operation = newOperation(1, 1, 1);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(2, 1, 2);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(3, 1, 3);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(4, 1, 4);
	*operations = insertOperationAtStart(*operations, operation);
	// operations - job 2
	operation = newOperation(5, 2, 1);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(6, 2, 2);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(7, 2, 3);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(8, 2, 4);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(9, 2, 5);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(10, 2, 6);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(11, 2, 7);
	*operations = insertOperationAtStart(*operations, operation);
	// operations - job 3
	operation = newOperation(12, 3, 1);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(13, 3, 2);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(14, 3, 3);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(15, 3, 4);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(16, 3, 5);
	*operations = insertOperationAtStart(*operations, operation);
	// operations - job 4
	operation = newOperation(17, 4, 1);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(18, 4, 2);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(19, 4, 3);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(20, 4, 4);
	*operations = insertOperationAtStart(*operations, operation);
	// operations - job 5
	operation = newOperation(21, 5, 1);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(22, 5, 2);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(23, 5, 3);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(24, 5, 4);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(25, 5, 5);
	*operations = insertOperationAtStart(*operations, operation);
	// operations - job 6
	operation = newOperation(26, 6, 1);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(27, 6, 2);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(28, 6, 3);
	*operations = insertOperationAtStart(*operations, operation);
	// operations - job 7
	operation = newOperation(29, 7, 1);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(30, 7, 2);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(31, 7, 3);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(32, 7, 4);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(33, 7, 5);
	*operations = insertOperationAtStart(*operations, operation);
	// operations - job 8
	operation = newOperation(34, 8, 1);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(35, 8, 2);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(36, 8, 3);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(37, 8, 4);
	*operations = insertOperationAtStart(*operations, operation);
	operation = newOperation(38, 8, 5);
	*operations = insertOperationAtStart(*operations, operation);
	// operation execution - job 1
	operationExecution = newOperationExecution(1, 1, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(1, 3, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(2, 2, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(2, 4, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(3, 3, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(3, 5, 6);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(4, 4, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(4, 5, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(4, 6, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(4, 7, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(4, 8, 9);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	// operation execution - job 2
	operationExecution = newOperationExecution(5, 1, 1);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(5, 3, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(5, 5, 7);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(6, 4, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(6, 8, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(7, 4, 1);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(7, 6, 6);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(8, 4, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(8, 7, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(8, 8, 7);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(9, 4, 1);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(9, 6, 2);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(10, 1, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(10, 6, 6);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(10, 8, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(11, 4, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	// operation execution - job 3
	operationExecution = newOperationExecution(12, 2, 7);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(12, 3, 6);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(12, 8, 8);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(13, 4, 7);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(13, 8, 7);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(14, 3, 7);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(14, 5, 8);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(14, 7, 7);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(15, 4, 7);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(15, 6, 8);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(16, 1, 1);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(16, 2, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	// operation execution - job 4
	operationExecution = newOperationExecution(17, 1, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(17, 3, 3);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(17, 5, 7);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(18, 2, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(18, 8, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(19, 3, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(19, 4, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(19, 6, 6);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(19, 7, 7);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(20, 5, 3);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(20, 6, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(20, 8, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	// operation execution - job 5
	operationExecution = newOperationExecution(21, 1, 3);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(22, 2, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(22, 4, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(23, 3, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(23, 8, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(24, 5, 3);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(24, 6, 3);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(24, 8, 3);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(25, 4, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(25, 6, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	// operation execution - job 6
	operationExecution = newOperationExecution(26, 1, 3);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(26, 2, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(26, 3, 6);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(27, 4, 7);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(27, 5, 8);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(28, 3, 9);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(28, 6, 8);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	// operation execution - job 7
	operationExecution = newOperationExecution(29, 3, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(29, 5, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(29, 6, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(30, 4, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(30, 7, 6);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(30, 8, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(31, 1, 3);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(31, 3, 3);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(31, 4, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(31, 5, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(32, 4, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(32, 6, 6);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(32, 8, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(33, 1, 3);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(33, 3, 3);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	// operation execution - job 8
	operationExecution = newOperationExecution(34, 1, 3);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(34, 2, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(34, 6, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(35, 4, 6);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(35, 5, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(35, 8, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(36, 3, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(36, 7, 5);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(37, 4, 4);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(37, 6, 6);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(38, 7, 1);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
	operationExecution = newOperationExecution(38, 8, 2);
	*operationsExecution = insertOperationExecutionAtStart(*operationsExecution, operationExecution);
}