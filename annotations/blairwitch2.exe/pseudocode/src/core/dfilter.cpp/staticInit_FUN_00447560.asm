; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_staticInit_FUN_00447560(void)
;
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_ctor_FUN_004475e0
;   core_dfilter.cpp_CFilterFX_ctor_FUN_00447bf0
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_stdlib.c__atexit_FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x5f3c00                       ; 00447560
        ;   Label: core_dfilter.cpp_staticInit_FUN_00447560
    PUSH 0x8                            ; 00447565
    PUSH 0x1510e18                      ; 00447567
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0044756c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00447571
    PUSH 0x60a044                       ; 00447574
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00447579
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0044757e
    PUSH 0x5f3c00                       ; 00447581
    PUSH 0x4                            ; 00447586
    PUSH 0x1511078                      ; 00447588
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0044758d
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00447592
    PUSH 0x60a054                       ; 00447595
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0044759a
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0044759f
    PUSH 0x15111a8                      ; 004475a2
    CALL core_dfilter.cpp_CFilterCache_ctor_FUN_004475e0 ; 004475a7
        ;   XREF to: 004475e0 (UNCONDITIONAL_CALL)  ; CFilterCache * core_dfilter.cpp_CFilterCache_ctor_FUN_004475e0(CFilterCache * this_ptr)
    ADD ESP,0x4                         ; 004475ac
    PUSH 0x60a064                       ; 004475af
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004475b4
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004475b9
    PUSH 0x1511cac                      ; 004475bc
    CALL core_dfilter.cpp_CFilterFX_ctor_FUN_00447bf0 ; 004475c1
        ;   XREF to: 00447bf0 (UNCONDITIONAL_CALL)  ; CFilterFX * core_dfilter.cpp_CFilterFX_ctor_FUN_00447bf0(CFilterFX * this_ptr)
    ADD ESP,0x4                         ; 004475c6
    PUSH 0x60a074                       ; 004475c9
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004475ce
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004475d3
    RET                                 ; 004475d6

