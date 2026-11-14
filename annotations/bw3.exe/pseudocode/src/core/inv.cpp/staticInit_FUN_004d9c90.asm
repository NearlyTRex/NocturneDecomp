; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_staticInit_FUN_004d9c90(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;
; *****************************************************************************

section .text

    PUSH 0x1d70890                      ; 004d9c90
        ;   Label: core_inv.cpp_staticInit_FUN_004d9c90
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004d9c95
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004d9c9a
    PUSH 0x600130                       ; 004d9c9d
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004d9ca2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004d9ca7
    PUSH 0x1d708a4                      ; 004d9caa
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004d9caf
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004d9cb4
    PUSH 0x600140                       ; 004d9cb7
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004d9cbc
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004d9cc1
    PUSH 0x1d708b8                      ; 004d9cc4
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004d9cc9
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004d9cce
    PUSH 0x600150                       ; 004d9cd1
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004d9cd6
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004d9cdb
    PUSH 0x1d708cc                      ; 004d9cde
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004d9ce3
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004d9ce8
    PUSH 0x600160                       ; 004d9ceb
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004d9cf0
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004d9cf5
    PUSH 0x5dbf20                       ; 004d9cf8
    PUSH 0x10                           ; 004d9cfd
    PUSH 0x1d708e0                      ; 004d9cff
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004d9d04
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004d9d09
    PUSH 0x600170                       ; 004d9d0c
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004d9d11
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004d9d16
    RET                                 ; 004d9d19

