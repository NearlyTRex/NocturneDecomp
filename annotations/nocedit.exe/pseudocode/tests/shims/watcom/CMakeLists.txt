nocturne_test_suite(shims_watcom
    SUBJECTS
        shims/watcom/path.cpp
        # Unlike crt.cpp beside it, this adds names rather than taking over the
        # C library's, so a fixture asking the filesystem still gets the truth.
        shims/watcom/watcom.cpp
        shims/core/file_search.cpp
)
