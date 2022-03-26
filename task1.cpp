#include <cstdio>
#include "mpi.h"


int main(int argc, char *argv[]) {
    int ProcNum;
    int ProcRank;

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &ProcNum);
    MPI_Comm_rank(MPI_COMM_WORLD, &ProcRank);

    printf("From process %i: Hello, World!\n", ProcRank);

    MPI_Finalize();
    return 0;
}
