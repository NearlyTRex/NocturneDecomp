# -----------------------------------------------------------------------------
# Version header, rewritten on every build so `git describe` cannot go stale.
# Only shims/core/version.cpp includes it, so a new commit recompiles one file.
# The writing itself is cmake/write_version.cmake.
# -----------------------------------------------------------------------------
set(NOCTURNE_VERSION_HEADER "${NOCTURNE_GEN_DIR}/nocturne_version.h")
if(DEFINED NOCTURNE_BUILD_TAG)
    set(_version_build_tag "${NOCTURNE_BUILD_TAG}")
else()
    set(_version_build_tag "${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_PROCESSOR}")
endif()
add_custom_target(nocturne_version ALL
    COMMAND "${CMAKE_COMMAND}"
            -DVERSION=${PROJECT_VERSION}
            -DSOURCE_DIR=${CMAKE_SOURCE_DIR}
            -DOUT=${NOCTURNE_VERSION_HEADER}
            -DTEMPLATE=${CMAKE_SOURCE_DIR}/cmake/nocturne_version.h.in
            -DBUILD_TAG=${_version_build_tag}
            -P "${CMAKE_SOURCE_DIR}/cmake/write_version.cmake"
    BYPRODUCTS "${NOCTURNE_VERSION_HEADER}"
    COMMENT "Stamping version ${PROJECT_VERSION}"
    VERBATIM)
# The header must exist before the first compile, not merely before the first
# build — a fresh configure has no generated/ contents yet and the dependency
# below only orders the two, it does not create the file.
execute_process(COMMAND "${CMAKE_COMMAND}"
        -DVERSION=${PROJECT_VERSION}
        -DSOURCE_DIR=${CMAKE_SOURCE_DIR}
        -DOUT=${NOCTURNE_VERSION_HEADER}
        -DTEMPLATE=${CMAKE_SOURCE_DIR}/cmake/nocturne_version.h.in
        -DBUILD_TAG=${_version_build_tag}
        -P "${CMAKE_SOURCE_DIR}/cmake/write_version.cmake")
message(STATUS "version: ${PROJECT_VERSION} (${_version_build_tag})")
