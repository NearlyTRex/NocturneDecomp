# write_version.cmake — regenerate the version header, run at build time.
#
# Run with -P, so it sees none of the configure-time cache. Everything it needs
# arrives as -D: SOURCE_DIR, OUT, TEMPLATE, VERSION, BUILD_TAG.
#
# It runs on every build because `git describe` answers differently after every
# commit, and a version that only refreshes when cmake happens to reconfigure is
# worse than no version at all — it reports a commit that is not the one in the
# binary. The write goes through copy_if_different, so an unchanged answer
# leaves the timestamp alone and nothing rebuilds.

if(NOT DEFINED VERSION OR NOT DEFINED OUT OR NOT DEFINED TEMPLATE)
    message(FATAL_ERROR "write_version.cmake needs -DVERSION, -DOUT and -DTEMPLATE")
endif()

string(REPLACE "." ";" _parts "${VERSION}")
list(LENGTH _parts _count)
if(_count LESS 3)
    message(FATAL_ERROR "VERSION must be major.minor.patch, got '${VERSION}'")
endif()
list(GET _parts 0 NOCTURNE_VERSION_MAJOR)
list(GET _parts 1 NOCTURNE_VERSION_MINOR)
list(GET _parts 2 NOCTURNE_VERSION_PATCH)
set(NOCTURNE_VERSION "${VERSION}")

# A release archive has no .git, and a shallow CI checkout has no tags. Neither
# is an error: the bare version is still true, it just cannot name the commit.
set(NOCTURNE_VERSION_GIT "${VERSION}")
find_package(Git QUIET)
if(GIT_FOUND AND DEFINED SOURCE_DIR AND EXISTS "${SOURCE_DIR}/.git")
    execute_process(
        COMMAND "${GIT_EXECUTABLE}" describe --tags --always --dirty
        WORKING_DIRECTORY "${SOURCE_DIR}"
        OUTPUT_VARIABLE _described
        OUTPUT_STRIP_TRAILING_WHITESPACE
        ERROR_QUIET
        RESULT_VARIABLE _git_result)
    if(_git_result EQUAL 0 AND _described)
        set(NOCTURNE_VERSION_GIT "${_described}")
    endif()
endif()

set(NOCTURNE_VERSION_BUILD "${BUILD_TAG}")

configure_file("${TEMPLATE}" "${OUT}.tmp" @ONLY)
execute_process(COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${OUT}.tmp" "${OUT}")
file(REMOVE "${OUT}.tmp")
