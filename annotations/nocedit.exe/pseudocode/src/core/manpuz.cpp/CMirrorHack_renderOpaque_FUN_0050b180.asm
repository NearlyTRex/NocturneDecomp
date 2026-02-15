; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_0050b180(CMirrorHack *this_ptr)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 DAT_02d81c90
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b180
        ;   Label: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_0050b180
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050b181
    PUSH EBX                            ; 0050b185
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0050b186
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0050b18b
    MOV EAX,[0x0067b654]                ; 0050b18e | g_CGamePtr
    PUSH -0x1                           ; 0050b193
    MOV dword ptr [EAX + 0x1f4],0x1     ; 0050b195 | DAT_02d81c90
    LEA EAX,[EBX + 0x158]               ; 0050b19f
    PUSH 0x0                            ; 0050b1a5
    PUSH EAX                            ; 0050b1a7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 0050b1a8
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0050b1ad
    MOV EAX,[0x0067b654]                ; 0050b1b0 | g_CGameInstance | g_CGamePtr
    PUSH EBX                            ; 0050b1b5
    MOV dword ptr [EAX + 0x1f4],0x0     ; 0050b1b6 | DAT_02d81c90
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0050b1c0
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 0050b1c5
    ADD ESP,0x4                         ; 0050b1ca
    POP EBX                             ; 0050b1cd
    RET                                 ; 0050b1ce

