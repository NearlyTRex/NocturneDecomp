; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_staticInit_FUN_004b28b0(void)
;
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_ctor_FUN_004477f0
;   core_dlight.cpp_CDemonLight_ctor_FUN_00449c70
;   core_game.cpp_CGame_ctor_FUN_004b2d80
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   shape_edittool.cpp_CPickList_ctor_FUN_00481fc0
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 004b28b0
        ;   Label: core_game.cpp_staticInit_FUN_004b28b0
    PUSH 0x100                          ; 004b28b5
    PUSH 0x1cb3950                      ; 004b28ba
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_00449c70 ; 004b28bf
        ;   XREF to: 00449c70 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_00449c70(CDemonLight * this_ptr, int shadow_map_width, int shadow_map_height)
    ADD ESP,0xc                         ; 004b28c4
    PUSH 0x6163f0                       ; 004b28c7
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004b28cc
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b28d1
    PUSH 0x1cb6900                      ; 004b28d4
    CALL core_game.cpp_CGame_ctor_FUN_004b2d80 ; 004b28d9
        ;   XREF to: 004b2d80 (UNCONDITIONAL_CALL)  ; CGame * core_game.cpp_CGame_ctor_FUN_004b2d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b28de
    PUSH 0x616400                       ; 004b28e1
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004b28e6
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b28eb
    PUSH 0x1cb778c                      ; 004b28ee
    CALL shape_edittool.cpp_CPickList_ctor_FUN_00481fc0 ; 004b28f3
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_00481fc0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b28f8
    PUSH 0x616410                       ; 004b28fb
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004b2900
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b2905
    PUSH 0x1cb8080                      ; 004b2908
    CALL core_dfilter.cpp_CDemonFilter_ctor_FUN_004477f0 ; 004b290d
        ;   XREF to: 004477f0 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CDemonFilter_ctor_FUN_004477f0(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 004b2912
    PUSH 0x616420                       ; 004b2915
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004b291a
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004b291f
    RET                                 ; 004b2922

