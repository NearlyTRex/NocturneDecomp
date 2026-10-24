nocturne_test_suite(shims_watcom
    SUBJECTS
        shims/watcom/path.cpp
        # Unlike crt.cpp beside it, this adds names rather than taking over the
        # C library's, so a fixture asking the filesystem still gets the truth.
        shims/watcom/watcom.cpp
        # Takes over rand() and srand(), which nothing here relies on the C
        # library's for; its other names are Watcom's own, with a leading _.
        shims/watcom/crt.cpp
        shims/watcom/crt_stubs.cpp
        shims/core/file_search.cpp
    SUPPORT
        libc_faults.cpp
        rng_audit_support.cpp
)
