file(GLOB SOURCES "*.c" "*.h")
add_library(criterion_playground_lib ${SOURCES})
target_link_libraries(criterion_playground_lib m)
