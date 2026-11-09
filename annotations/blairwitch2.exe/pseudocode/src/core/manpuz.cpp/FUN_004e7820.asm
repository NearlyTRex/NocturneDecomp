; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_manpuz_cpp_FUN_004e7820(CDemonActor *param_1)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7820
        ;   Label: core_manpuz.cpp_FUN_004e7820
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e7821
    PUSH EBX                            ; 004e7825
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004e7826
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e782b
    MOV EAX,[0x00616494]                ; 004e782e | g_CGamePtr
    PUSH -0x1                           ; 004e7833
    MOV dword ptr [EAX + 0x210],0x1     ; 004e7835
    LEA EAX,[EBX + 0x2b4]               ; 004e783f
    PUSH 0x0                            ; 004e7845
    PUSH EAX                            ; 004e7847
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004e7848
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004e784d
    MOV EAX,[0x00616494]                ; 004e7850 | g_CGamePtr
    PUSH EBX                            ; 004e7855
    MOV dword ptr [EAX + 0x210],0x0     ; 004e7856
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004e7860
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 004e7865
    ADD ESP,0x4                         ; 004e786a
    POP EBX                             ; 004e786d
    RET                                 ; 004e786e

