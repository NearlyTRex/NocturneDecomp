; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_staticInit_FUN_004b3cd0(void)
;
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_ctor_FUN_004598a0
;   core_dlight.cpp_CDemonLight_ctor_FUN_0045c180
;   core_game.cpp_CGame_ctor_FUN_004b4180
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;   shape_edittool.cpp_CPickList_ctor_FUN_004831c0
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 004b3cd0
        ;   Label: core_game.cpp_staticInit_FUN_004b3cd0
    PUSH 0x100                          ; 004b3cd5
    PUSH 0x1d1e360                      ; 004b3cda
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_0045c180 ; 004b3cdf
        ;   XREF to: 0045c180 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_0045c180(CDemonLight * this_ptr, int shadow_map_width, int shadow_map_height)
    ADD ESP,0xc                         ; 004b3ce4
    PUSH 0x5fe920                       ; 004b3ce7
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004b3cec
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b3cf1
    PUSH 0x1d2130c                      ; 004b3cf4
    CALL core_game.cpp_CGame_ctor_FUN_004b4180 ; 004b3cf9
        ;   XREF to: 004b4180 (UNCONDITIONAL_CALL)  ; CGame * core_game.cpp_CGame_ctor_FUN_004b4180(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b3cfe
    PUSH 0x5fe930                       ; 004b3d01
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004b3d06
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b3d0b
    PUSH 0x1d22204                      ; 004b3d0e
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004831c0 ; 004b3d13
        ;   XREF to: 004831c0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004831c0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b3d18
    PUSH 0x5fe940                       ; 004b3d1b
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004b3d20
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b3d25
    PUSH 0x1d22af8                      ; 004b3d28
    CALL core_dfilter.cpp_CDemonFilter_ctor_FUN_004598a0 ; 004b3d2d
        ;   XREF to: 004598a0 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CDemonFilter_ctor_FUN_004598a0(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 004b3d32
    PUSH 0x5fe950                       ; 004b3d35
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004b3d3a
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b3d3f
    PUSH 0x5dbf20                       ; 004b3d42
    PUSH 0x8                            ; 004b3d47
    PUSH 0x1d22b4c                      ; 004b3d49
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004b3d4e
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b3d53
    PUSH 0x5fe960                       ; 004b3d56
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004b3d5b
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b3d60
    RET                                 ; 004b3d63

