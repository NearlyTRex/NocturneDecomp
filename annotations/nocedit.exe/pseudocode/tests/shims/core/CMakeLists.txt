nocturne_test_suite(shims_core
    SUBJECTS
        # Reaches the filesystem but nothing else; tested against a directory
        # the test builds itself.
        shims/core/file_search.cpp
        # Where each root's copy of the directory is.
        shims/watcom/path.cpp
)
