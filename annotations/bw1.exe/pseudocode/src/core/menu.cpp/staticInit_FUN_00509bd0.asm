; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_staticInit_FUN_00509bd0(void)
;
;
; Called Functions:
;   core_moon.cpp_CMoon_ctor_FUN_00521bc0
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 00509bd0
        ;   Label: core_menu.cpp_staticInit_FUN_00509bd0
    PUSH 0x8                            ; 00509bd5
    PUSH 0x1d1e2e0                      ; 00509bd7
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00509bdc
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00509be1
    PUSH 0x61f450                       ; 00509be4
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00509be9
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00509bee
    PUSH 0x1d1e380                      ; 00509bf1
    CALL core_moon.cpp_CMoon_ctor_FUN_00521bc0 ; 00509bf6
        ;   XREF to: 00521bc0 (UNCONDITIONAL_CALL)  ; CMoon * core_moon.cpp_CMoon_ctor_FUN_00521bc0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 00509bfb
    PUSH 0x61f460                       ; 00509bfe
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00509c03
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00509c08
    PUSH 0x1d1ee50                      ; 00509c0b
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 00509c10
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00509c15
    PUSH 0x61f470                       ; 00509c18
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00509c1d
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00509c22
    PUSH 0x1d1ee64                      ; 00509c25
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 00509c2a
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00509c2f
    PUSH 0x61f480                       ; 00509c32
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00509c37
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00509c3c
    PUSH 0x1d1ee78                      ; 00509c3f
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 00509c44
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00509c49
    PUSH 0x61f490                       ; 00509c4c
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00509c51
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00509c56
    PUSH 0x1d1eea0                      ; 00509c59
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 00509c5e
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00509c63
    PUSH 0x61f4a0                       ; 00509c66
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00509c6b
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00509c70
    RET                                 ; 00509c73

