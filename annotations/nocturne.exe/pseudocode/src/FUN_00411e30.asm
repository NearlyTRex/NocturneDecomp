; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00411e30(int param_1)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411e30
        ;   Label: FUN_00411e30
    PUSH ESI                            ; 00411e31
    SUB ESP,0x18                        ; 00411e32
    MOV EBX,dword ptr [ESP + 0x24]      ; 00411e35
    PUSH EBX                            ; 00411e39
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00411e3a
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 00411e3f
    PUSH 0x0                            ; 00411e42
    LEA EAX,[ESP + 0x4]                 ; 00411e44
    PUSH EAX                            ; 00411e48
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00411e49
    PUSH EBX                            ; 00411e4f
    CALL dword ptr [ESI + 0x14]         ; 00411e50
    ADD ESP,0x8                         ; 00411e53
    PUSH EAX                            ; 00411e56
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00411e57
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 00411e5c
    MOV ESI,EAX                         ; 00411e5f
    TEST EAX,EAX                        ; 00411e61
    JNZ 0x00411e76                      ; 00411e63
        ;   XREF to: 00411e76 (CONDITIONAL_JUMP)  ; LAB_00411e76
    PUSH EBX                            ; 00411e65
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00411e66
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 00411e6b
    MOV EAX,ESI                         ; 00411e6e
    ADD ESP,0x18                        ; 00411e70
    POP ESI                             ; 00411e73
    POP EBX                             ; 00411e74
    RET                                 ; 00411e75
    PUSH -0x1                           ; 00411e76
        ;   Label: LAB_00411e76
    LEA EAX,[EBX + 0x180]               ; 00411e78
    PUSH dword ptr [EBX + 0x17c]        ; 00411e7e
    PUSH EAX                            ; 00411e84
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00411e85
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 00411e8a
    PUSH EBX                            ; 00411e8d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00411e8e
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 00411e93
    MOV EAX,ESI                         ; 00411e96
    ADD ESP,0x18                        ; 00411e98
    POP ESI                             ; 00411e9b
    POP EBX                             ; 00411e9c
    RET                                 ; 00411e9d

