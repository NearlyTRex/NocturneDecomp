; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_004cbb70(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c777e0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbb70
        ;   Label: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_004cbb70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cbb71
    PUSH EBX                            ; 004cbb75
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004cbb76
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004cbb7b
    MOV EAX,[0x005b9354]                ; 004cbb7e | DAT_005b9354
    PUSH -0x1                           ; 004cbb83
    MOV dword ptr [EAX + 0x1f4],0x1     ; 004cbb85 | DAT_01c777e0
    LEA EAX,[EBX + 0x150]               ; 004cbb8f
    PUSH 0x0                            ; 004cbb95
    PUSH EAX                            ; 004cbb97
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004cbb98
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004cbb9d
    MOV EAX,[0x005b9354]                ; 004cbba0 | DAT_005b9354
    PUSH EBX                            ; 004cbba5
    MOV dword ptr [EAX + 0x1f4],0x0     ; 004cbba6 | DAT_01c777e0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004cbbb0
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 004cbbb5
    ADD ESP,0x4                         ; 004cbbba
    POP EBX                             ; 004cbbbd
    RET                                 ; 004cbbbe

