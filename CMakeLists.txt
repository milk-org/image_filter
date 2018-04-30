project(lib_image_filter_project)

include_directories ("${PROJECT_SOURCE_DIR}/src")
include_directories ("${PROJECT_SOURCE_DIR}/..")
add_library(image_filter SHARED image_filter.c)

install(TARGETS image_filter DESTINATION lib)
install(FILES image_filter.h DESTINATION include)

