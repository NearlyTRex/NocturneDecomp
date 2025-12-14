; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_level.cpp_staticInit_FUN_00503d80(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_LoadingMoonModelDestructorNode
;   CLevelLoader g_CLevelLoaderInstance
;   CKeyFramedModel g_LoadingMoonModel
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
;   core_level.cpp_CLevelLoader_reset_FUN_00503db0
;   crt_stdlib.c_atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x2dcd850                      ; 00503d80 | g_CLevelLoaderInstance
        ;   Label: core_level.cpp_staticInit_FUN_00503d80
    CALL core_level.cpp_CLevelLoader_reset_FUN_00503db0 ; 00503d85
        ;   XREF to: 00503db0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_reset_FUN_00503db0(CLevelLoader * this_ptr)
    ADD ESP,0x4                         ; 00503d8a
    PUSH 0x2dcd980                      ; 00503d8d | g_LoadingMoonModel
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0 ; 00503d92
        ;   XREF to: 00476cf0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00503d97
    PUSH 0x67cf70                       ; 00503d9a | g_LoadingMoonModelDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00503d9f
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00503da4
    RET                                 ; 00503da7

