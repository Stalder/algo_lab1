project(sort_lib)

set(HEADER_FILES
        sort.h
        )

set(SOURCE_FILES
        sort.cpp
        )

add_library(sort_lib_run STATIC ${SOURCE_FILES} ${HEADER_FILES})