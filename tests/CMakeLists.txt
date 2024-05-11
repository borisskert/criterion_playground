include(Criterion)

link_directories(${CMAKE_BINARY_DIR}/Criterion)
include_directories(${CMAKE_BINARY_DIR}/Criterion-src/include)

file(GLOB testfiles "*.c")
add_executable(criterion_playground_tests ${testfiles})
target_link_libraries(criterion_playground_tests criterion_playground_lib criterion)
add_dependencies(criterion_playground_lib Criterion)
