# A platform data directory, read when it is asked for from a variable the test
# sets, so a build with one and a build without are both reachable from here.
set_source_files_properties("${NOCTURNE_PSEUDOCODE_DIR}/shims/core/path_roots.cpp"
    PROPERTIES COMPILE_DEFINITIONS
        "NOCTURNE_DEFAULT_DATA_DIR=getenv(\"NOCTURNE_TEST_DEFAULT_DATA_DIR\")")

nocturne_test_suite(shims_core
    SUBJECTS
        # Reaches the filesystem but nothing else; tested against a directory
        # the test builds itself.
        shims/core/file_search.cpp
        # Where each root's copy of the directory is.
        shims/watcom/path.cpp
        # Asks the host, and fills MEMORYSTATUS from any figures it is given.
        shims/core/host_memory.cpp
        # Which directories those are.
        shims/core/path_roots.cpp
)
