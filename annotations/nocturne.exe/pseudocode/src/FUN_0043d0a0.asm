; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0043d0a0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0043d810
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d0a0
        ;   Label: FUN_0043d0a0
    PUSH ESI                            ; 0043d0a1
    SUB ESP,0x1c                        ; 0043d0a2
    MOV EBX,dword ptr [ESP + 0x28]      ; 0043d0a5
    PUSH EBX                            ; 0043d0a9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0043d0aa
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 0043d0af
    PUSH 0x0                            ; 0043d0b2
    LEA EAX,[ESP + 0x4]                 ; 0043d0b4
    PUSH EAX                            ; 0043d0b8
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0043d0b9
    PUSH EBX                            ; 0043d0bf
    CALL dword ptr [ESI + 0x14]         ; 0043d0c0
    ADD ESP,0x8                         ; 0043d0c3
    PUSH EAX                            ; 0043d0c6
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0043d0c7
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 0043d0cc
    MOV ESI,EAX                         ; 0043d0cf
    TEST EAX,EAX                        ; 0043d0d1
    JNZ 0x0043d0e6                      ; 0043d0d3
        ;   XREF to: 0043d0e6 (CONDITIONAL_JUMP)  ; LAB_0043d0e6
    PUSH EBX                            ; 0043d0d5
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0043d0d6
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 0043d0db
    MOV EAX,ESI                         ; 0043d0de
    ADD ESP,0x1c                        ; 0043d0e0
    POP ESI                             ; 0043d0e3
    POP EBX                             ; 0043d0e4
    RET                                 ; 0043d0e5
    PUSH -0x1                           ; 0043d0e6
        ;   Label: LAB_0043d0e6
    PUSH EBX                            ; 0043d0e8
    CALL core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0043d810 ; 0043d0e9
        ;   XREF to: 0043d810 (UNCONDITIONAL_CALL)  ; undefined core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0043d810()
    MOV dword ptr [ESP + 0x20],EAX      ; 0043d0ee
    FLD float ptr [ESP + 0x20]          ; 0043d0f2
    ADD ESP,0x4                         ; 0043d0f6
    SUB ESP,0x4                         ; 0043d0f9
    LEA EAX,[EBX + 0x150]               ; 0043d0fc
    FSTP float ptr [ESP]                ; 0043d102
    PUSH EAX                            ; 0043d105
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0043d106
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 0043d10b
    PUSH EBX                            ; 0043d10e
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0043d10f
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 0043d114
    MOV EAX,ESI                         ; 0043d117
    ADD ESP,0x1c                        ; 0043d119
    POP ESI                             ; 0043d11c
    POP EBX                             ; 0043d11d
    RET                                 ; 0043d11e

