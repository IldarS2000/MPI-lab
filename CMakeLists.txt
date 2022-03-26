cmake_minimum_required(VERSION 3.9.1)
project(MPI-lab)

set(CMAKE_CXX_STANDARD 14)

find_package(MPI)
include_directories(${MPI_INCLUDE_PATH})

add_executable(task1 task1.cpp)
target_link_libraries(task1 PUBLIC MPI::MPI_CXX)

add_executable(task2 task2.cpp)
target_link_libraries(task2 PUBLIC MPI::MPI_CXX)

add_executable(task3 task3.cpp)
target_link_libraries(task3 PUBLIC MPI::MPI_CXX)

add_executable(task4 task4.cpp)
target_link_libraries(task4 PUBLIC MPI::MPI_CXX)

add_executable(task5 task5.cpp)
target_link_libraries(task5 PUBLIC MPI::MPI_CXX)

add_executable(task6 task6.cpp)
target_link_libraries(task6 PUBLIC MPI::MPI_CXX)

add_executable(task7 task7.cpp)
target_link_libraries(task7 PUBLIC MPI::MPI_CXX)

add_executable(task8 task8.cpp)
target_link_libraries(task8 PUBLIC MPI::MPI_CXX)

add_executable(task9 task9.cpp)
target_link_libraries(task9 PUBLIC MPI::MPI_CXX)

add_executable(task10 task10.cpp)
target_link_libraries(task10 PUBLIC MPI::MPI_CXX)

add_executable(task11 task11.cpp)
target_link_libraries(task11 PUBLIC MPI::MPI_CXX)

add_executable(task12 task12.cpp)
target_link_libraries(task12 PUBLIC MPI::MPI_CXX)

add_executable(task13 task13.cpp)
target_link_libraries(task13 PUBLIC MPI::MPI_CXX)