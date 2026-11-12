; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_staticInit_FUN_004cb7d0(void)
;
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_ctor_FUN_0045d950
;   core_dlight.cpp_CDemonLight_ctor_FUN_00462470
;   core_game.cpp_CGame_ctor_FUN_004cbc80
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;   shape_edittool.cpp_CPickList_ctor_FUN_0049a620
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 004cb7d0
        ;   Label: core_game.cpp_staticInit_FUN_004cb7d0
    PUSH 0x100                          ; 004cb7d5
    PUSH 0x1ccc3e4                      ; 004cb7da
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_00462470 ; 004cb7df
        ;   XREF to: 00462470 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_00462470(CDemonLight * this_ptr, int shadow_map_width, int shadow_map_height)
    ADD ESP,0xc                         ; 004cb7e4
    PUSH 0x61d8a0                       ; 004cb7e7
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004cb7ec
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004cb7f1
    PUSH 0x1ccf390                      ; 004cb7f4
    CALL core_game.cpp_CGame_ctor_FUN_004cbc80 ; 004cb7f9
        ;   XREF to: 004cbc80 (UNCONDITIONAL_CALL)  ; CGame * core_game.cpp_CGame_ctor_FUN_004cbc80(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cb7fe
    PUSH 0x61d8b0                       ; 004cb801
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004cb806
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004cb80b
    PUSH 0x1cd01fc                      ; 004cb80e
    CALL shape_edittool.cpp_CPickList_ctor_FUN_0049a620 ; 004cb813
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_0049a620(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004cb818
    PUSH 0x61d8c0                       ; 004cb81b
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004cb820
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004cb825
    PUSH 0x1cd0af0                      ; 004cb828
    CALL core_dfilter.cpp_CDemonFilter_ctor_FUN_0045d950 ; 004cb82d
        ;   XREF to: 0045d950 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CDemonFilter_ctor_FUN_0045d950(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 004cb832
    PUSH 0x61d8d0                       ; 004cb835
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004cb83a
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004cb83f
    PUSH 0x5fca10                       ; 004cb842
    PUSH 0x8                            ; 004cb847
    PUSH 0x1cd0b44                      ; 004cb849
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004cb84e
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004cb853
    PUSH 0x61d8e0                       ; 004cb856
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004cb85b
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004cb860
    RET                                 ; 004cb863

