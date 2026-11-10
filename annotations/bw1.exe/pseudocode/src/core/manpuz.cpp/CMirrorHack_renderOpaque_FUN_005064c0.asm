; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_005064c0(CMirrorHack *this_ptr)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005064c0
        ;   Label: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_005064c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005064c1
    PUSH EBX                            ; 005064c5
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 005064c6
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005064cb
    MOV EAX,[0x0061d95c]                ; 005064ce | g_CGamePtr
    PUSH -0x1                           ; 005064d3
    MOV dword ptr [EAX + 0x210],0x1     ; 005064d5
    LEA EAX,[EBX + 0x158]               ; 005064df
    PUSH 0x0                            ; 005064e5
    PUSH EAX                            ; 005064e7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 005064e8
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005064ed
    MOV EAX,[0x0061d95c]                ; 005064f0 | g_CGamePtr
    PUSH EBX                            ; 005064f5
    MOV dword ptr [EAX + 0x210],0x0     ; 005064f6
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00506500
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 00506505
    ADD ESP,0x4                         ; 0050650a
    POP EBX                             ; 0050650d
    RET                                 ; 0050650e

