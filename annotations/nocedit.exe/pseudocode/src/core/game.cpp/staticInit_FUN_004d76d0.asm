; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_staticInit_FUN_004d76d0(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_GameDestructorNode1
;   WatcomStaticDestructorNode g_GameDestructorNode2
;   WatcomStaticDestructorNode g_GameDestructorNode3
;   CDemonLight g_CDemonLightInstance
;   CGame g_CGameInstance
;   CPickList g_CPickList
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
;   core_game.cpp_CGame_ctor_FUN_004d7b40
;   crt_stdlib.c_atexit_FUN_005ff060
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 004d76d0
        ;   Label: core_game.cpp_staticInit_FUN_004d76d0
    PUSH 0x100                          ; 004d76d5
    PUSH 0x2d7eaf0                      ; 004d76da | CDemonLight g_CDemonLightInstance
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_004726a0 ; 004d76df | CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_004726a0(CDemonLight * this_ptr)
        ;   XREF to: 004726a0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004d76e4
    PUSH 0x67b5c0                       ; 004d76e7 | WatcomStaticDestructorNode g_GameDestructorNode1
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004d76ec | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d76f1
    PUSH 0x2d81a9c                      ; 004d76f4 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_ctor_FUN_004d7b40 ; 004d76f9 | CGame * core_game.cpp_CGame_ctor_FUN_004d7b40(CGame * this_ptr)
        ;   XREF to: 004d7b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d76fe
    PUSH 0x67b5d0                       ; 004d7701 | WatcomStaticDestructorNode g_GameDestructorNode2
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004d7706 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d770b
    PUSH 0x2d828d4                      ; 004d770e | CPickList g_CPickList
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004d7713 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d7718
    PUSH 0x67b5e0                       ; 004d771b | WatcomStaticDestructorNode g_GameDestructorNode3
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004d7720 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d7725
    RET                                 ; 004d7728

