; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_staticInit_FUN_00459610(void)
;
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_ctor_FUN_00459690
;   core_dfilter.cpp_CFilterFX_ctor_FUN_00459ca0
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x5dcb50                       ; 00459610
        ;   Label: core_dfilter.cpp_staticInit_FUN_00459610
    PUSH 0x8                            ; 00459615
    PUSH 0x1548c00                      ; 00459617
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0045961c
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00459621
    PUSH 0x5f189c                       ; 00459624
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 00459629
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0045962e
    PUSH 0x5dcb50                       ; 00459631
    PUSH 0x4                            ; 00459636
    PUSH 0x1548e60                      ; 00459638
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0045963d
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00459642
    PUSH 0x5f18ac                       ; 00459645
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 0045964a
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0045964f
    PUSH 0x1548f90                      ; 00459652
    CALL core_dfilter.cpp_CFilterCache_ctor_FUN_00459690 ; 00459657
        ;   XREF to: 00459690 (UNCONDITIONAL_CALL)  ; CFilterCache * core_dfilter.cpp_CFilterCache_ctor_FUN_00459690(CFilterCache * this_ptr)
    ADD ESP,0x4                         ; 0045965c
    PUSH 0x5f18bc                       ; 0045965f
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 00459664
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00459669
    PUSH 0x1549a94                      ; 0045966c
    CALL core_dfilter.cpp_CFilterFX_ctor_FUN_00459ca0 ; 00459671
        ;   XREF to: 00459ca0 (UNCONDITIONAL_CALL)  ; CFilterFX * core_dfilter.cpp_CFilterFX_ctor_FUN_00459ca0(CFilterFX * this_ptr)
    ADD ESP,0x4                         ; 00459676
    PUSH 0x5f18cc                       ; 00459679
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 0045967e
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00459683
    RET                                 ; 00459686

