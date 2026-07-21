; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00455e10(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455e10
        ;   Label: FUN_00455e10
    SUB ESP,0x18                        ; 00455e11
    MOV EBX,dword ptr [ESP + 0x20]      ; 00455e14
    CMP dword ptr [ESP + 0x24],0x0      ; 00455e18
    JZ 0x00455e28                       ; 00455e1d
        ;   XREF to: 00455e28 (CONDITIONAL_JUMP)  ; LAB_00455e28
    CMP dword ptr [EBX + 0x9c0],0x2     ; 00455e1f
    JGE 0x00455e2d                      ; 00455e26
        ;   XREF to: 00455e2d (CONDITIONAL_JUMP)  ; LAB_00455e2d
    ADD ESP,0x18                        ; 00455e28
        ;   Label: LAB_00455e28
    POP EBX                             ; 00455e2b
    RET                                 ; 00455e2c
    PUSH EBX                            ; 00455e2d
        ;   Label: LAB_00455e2d
    MOV dword ptr [EBX + 0x9c0],0x3     ; 00455e2e
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00455e38
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 00455e3d
    PUSH 0x0                            ; 00455e40
    LEA EDX,[ESP + 0x4]                 ; 00455e42
    PUSH EDX                            ; 00455e46
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00455e47
    PUSH EBX                            ; 00455e4d
    CALL dword ptr [EAX + 0x14]         ; 00455e4e
    ADD ESP,0x8                         ; 00455e51
    PUSH EAX                            ; 00455e54
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00455e55
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 00455e5a
    TEST EAX,EAX                        ; 00455e5d
    JZ 0x00455e74                       ; 00455e5f
        ;   XREF to: 00455e74 (CONDITIONAL_JUMP)  ; LAB_00455e74
    PUSH -0x1                           ; 00455e61
    LEA EAX,[EBX + 0x150]               ; 00455e63
    PUSH 0x0                            ; 00455e69
    PUSH EAX                            ; 00455e6b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00455e6c
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 00455e71
    PUSH EBX                            ; 00455e74
        ;   Label: LAB_00455e74
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00455e75
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 00455e7a
    ADD ESP,0x18                        ; 00455e7d
    POP EBX                             ; 00455e80
    RET                                 ; 00455e81

