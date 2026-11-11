; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_004a76f0_cpp_FUN_004a76f0(void)
;
;
; Called Functions:
;   core_fldnotes.cpp_CFieldNotes_ctor_FUN_004aa7d0
;   core_fldnotes.cpp_STextView_ctor_FUN_004a8dd0
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;
; *****************************************************************************

section .text

    PUSH 0x5e02e0                       ; 004a76f0
        ;   Label: unkaddr_004a76f0.cpp_FUN_004a76f0
    PUSH 0x6                            ; 004a76f5
    PUSH 0x1d0d214                      ; 004a76f7
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004a76fc
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 004a7701
    PUSH 0x5fe280                       ; 004a7704
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a7709
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a770e
    PUSH 0x5e0300                       ; 004a7711
    PUSH 0xa                            ; 004a7716
    PUSH 0x1d0e370                      ; 004a7718
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004a771d
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 004a7722
    PUSH 0x5fe290                       ; 004a7725
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a772a
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a772f
    PUSH 0x1d19bac                      ; 004a7732
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004a7737
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a773c
    PUSH 0x5fe2a0                       ; 004a773f
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a7744
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a7749
    PUSH 0x5dbf20                       ; 004a774c
    PUSH 0x6                            ; 004a7751
    PUSH 0x1d19bc0                      ; 004a7753
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004a7758
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 004a775d
    PUSH 0x5fe2b0                       ; 004a7760
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a7765
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a776a
    PUSH 0x1d19c38                      ; 004a776d
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004a7772
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a7777
    PUSH 0x5fe2c0                       ; 004a777a
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a777f
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a7784
    PUSH 0x1d19c4c                      ; 004a7787
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004a778c
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a7791
    PUSH 0x5fe2d0                       ; 004a7794
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a7799
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a779e
    PUSH 0x1d19c60                      ; 004a77a1
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004a77a6
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a77ab
    PUSH 0x5fe2e0                       ; 004a77ae
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a77b3
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a77b8
    PUSH 0x1d19c74                      ; 004a77bb
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004a77c0
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a77c5
    PUSH 0x5fe2f0                       ; 004a77c8
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a77cd
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a77d2
    PUSH 0x1d19c88                      ; 004a77d5
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004a77da
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a77df
    PUSH 0x5fe300                       ; 004a77e2
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a77e7
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a77ec
    PUSH 0x1d19c9c                      ; 004a77ef
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004a77f4
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a77f9
    PUSH 0x5fe310                       ; 004a77fc
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a7801
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a7806
    PUSH 0x1d19cb0                      ; 004a7809
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004a780e
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a7813
    PUSH 0x5fe320                       ; 004a7816
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a781b
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a7820
    PUSH 0x1d19cc4                      ; 004a7823
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004a7828
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a782d
    PUSH 0x5fe330                       ; 004a7830
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a7835
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a783a
    PUSH 0x1d19cd8                      ; 004a783d
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004a7842
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a7847
    PUSH 0x5fe340                       ; 004a784a
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a784f
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a7854
    PUSH 0x1d19d30                      ; 004a7857
    CALL core_fldnotes.cpp_STextView_ctor_FUN_004a8dd0 ; 004a785c
        ;   XREF to: 004a8dd0 (UNCONDITIONAL_CALL)  ; STextView * core_fldnotes.cpp_STextView_ctor_FUN_004a8dd0(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a7861
    PUSH 0x5fe350                       ; 004a7864
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a7869
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a786e
    PUSH 0x1d1a05c                      ; 004a7871
    CALL core_fldnotes.cpp_CFieldNotes_ctor_FUN_004aa7d0 ; 004a7876
        ;   XREF to: 004aa7d0 (UNCONDITIONAL_CALL)  ; CFieldNotes * core_fldnotes.cpp_CFieldNotes_ctor_FUN_004aa7d0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004a787b
    PUSH 0x5fe360                       ; 004a787e
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004a7883
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004a7888
    RET                                 ; 004a788b

