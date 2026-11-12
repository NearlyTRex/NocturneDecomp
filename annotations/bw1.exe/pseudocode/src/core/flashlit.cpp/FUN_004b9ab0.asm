; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004b9ab0(void)
;
;
; Called Functions:
;   core_fldnotes.cpp_CFieldNotes_ctor_FUN_004bcb60
;   core_fldnotes.cpp_STextView_ctor_FUN_004bb190
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;
; *****************************************************************************

section .text

    PUSH 0x600980                       ; 004b9ab0
        ;   Label: core_flashlit.cpp_FUN_004b9ab0
    PUSH 0x6                            ; 004b9ab5
    PUSH 0x1cc4474                      ; 004b9ab7
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004b9abc
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b9ac1
    PUSH 0x61d1f0                       ; 004b9ac4
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9ac9
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9ace
    PUSH 0x6009a0                       ; 004b9ad1
    PUSH 0x4                            ; 004b9ad6
    PUSH 0x1cc55d0                      ; 004b9ad8
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004b9add
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b9ae2
    PUSH 0x61d200                       ; 004b9ae5
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9aea
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9aef
    PUSH 0x1cc7b94                      ; 004b9af2
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004b9af7
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004b9afc
    PUSH 0x61d210                       ; 004b9aff
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9b04
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9b09
    PUSH 0x5fca10                       ; 004b9b0c
    PUSH 0x6                            ; 004b9b11
    PUSH 0x1cc7ba8                      ; 004b9b13
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004b9b18
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b9b1d
    PUSH 0x61d220                       ; 004b9b20
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9b25
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9b2a
    PUSH 0x1cc7c20                      ; 004b9b2d
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004b9b32
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004b9b37
    PUSH 0x61d230                       ; 004b9b3a
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9b3f
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9b44
    PUSH 0x1cc7c34                      ; 004b9b47
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004b9b4c
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004b9b51
    PUSH 0x61d240                       ; 004b9b54
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9b59
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9b5e
    PUSH 0x1cc7c48                      ; 004b9b61
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004b9b66
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004b9b6b
    PUSH 0x61d250                       ; 004b9b6e
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9b73
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9b78
    PUSH 0x1cc7c5c                      ; 004b9b7b
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004b9b80
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004b9b85
    PUSH 0x61d260                       ; 004b9b88
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9b8d
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9b92
    PUSH 0x1cc7c70                      ; 004b9b95
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004b9b9a
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004b9b9f
    PUSH 0x61d270                       ; 004b9ba2
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9ba7
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9bac
    PUSH 0x1cc7c84                      ; 004b9baf
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004b9bb4
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004b9bb9
    PUSH 0x61d280                       ; 004b9bbc
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9bc1
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9bc6
    PUSH 0x1cc7c98                      ; 004b9bc9
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004b9bce
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004b9bd3
    PUSH 0x61d290                       ; 004b9bd6
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9bdb
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9be0
    PUSH 0x1cc7cac                      ; 004b9be3
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004b9be8
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004b9bed
    PUSH 0x61d2a0                       ; 004b9bf0
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9bf5
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9bfa
    PUSH 0x1cc7cc0                      ; 004b9bfd
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004b9c02
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004b9c07
    PUSH 0x61d2b0                       ; 004b9c0a
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9c0f
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9c14
    PUSH 0x1cc7cd4                      ; 004b9c17
    CALL core_fldnotes.cpp_STextView_ctor_FUN_004bb190 ; 004b9c1c
        ;   XREF to: 004bb190 (UNCONDITIONAL_CALL)  ; STextView * core_fldnotes.cpp_STextView_ctor_FUN_004bb190(STextView * this_ptr)
    ADD ESP,0x4                         ; 004b9c21
    PUSH 0x61d2c0                       ; 004b9c24
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9c29
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9c2e
    PUSH 0x1cc8004                      ; 004b9c31
    CALL core_fldnotes.cpp_CFieldNotes_ctor_FUN_004bcb60 ; 004b9c36
        ;   XREF to: 004bcb60 (UNCONDITIONAL_CALL)  ; CFieldNotes * core_fldnotes.cpp_CFieldNotes_ctor_FUN_004bcb60(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004b9c3b
    PUSH 0x61d2d0                       ; 004b9c3e
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004b9c43
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b9c48
    RET                                 ; 004b9c4b

