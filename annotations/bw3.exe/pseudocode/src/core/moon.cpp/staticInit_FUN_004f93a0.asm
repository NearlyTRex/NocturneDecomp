; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_staticInit_FUN_004f93a0(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;
; *****************************************************************************

section .text

    PUSH 0x1d883a8                      ; 004f93a0
        ;   Label: core_moon.cpp_staticInit_FUN_004f93a0
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004f93a5
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004f93aa
    PUSH 0x6006b8                       ; 004f93ad
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004f93b2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004f93b7
    PUSH 0x5dbf20                       ; 004f93ba
    PUSH 0x1e                           ; 004f93bf
    PUSH 0x1d883bc                      ; 004f93c1
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004f93c6
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f93cb
    PUSH 0x6006c8                       ; 004f93ce
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004f93d3
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004f93d8
    PUSH 0x1d88614                      ; 004f93db
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004f93e0
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004f93e5
    PUSH 0x6006d8                       ; 004f93e8
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004f93ed
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004f93f2
    PUSH 0x1d88628                      ; 004f93f5
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004f93fa
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004f93ff
    PUSH 0x6006e8                       ; 004f9402
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004f9407
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004f940c
    RET                                 ; 004f940f

