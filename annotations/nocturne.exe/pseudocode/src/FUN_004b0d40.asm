; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0d40(int param_1,int param_2)
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

    PUSH EBX                            ; 004b0d40
        ;   Label: FUN_004b0d40
    SUB ESP,0x18                        ; 004b0d41
    MOV EBX,dword ptr [ESP + 0x20]      ; 004b0d44
    CMP dword ptr [ESP + 0x24],0x0      ; 004b0d48
    JZ 0x004b0db5                       ; 004b0d4d
        ;   XREF to: 004b0db5 (CONDITIONAL_JUMP)  ; LAB_004b0db5
    CMP dword ptr [EBX + 0x2d4],0x0     ; 004b0d4f
    JNZ 0x004b0d6b                      ; 004b0d56
        ;   XREF to: 004b0d6b (CONDITIONAL_JUMP)  ; LAB_004b0d6b
    CMP dword ptr [EBX + 0x2d8],0x2     ; 004b0d58
    JNZ 0x004b0db5                      ; 004b0d5f
        ;   XREF to: 004b0db5 (CONDITIONAL_JUMP)  ; LAB_004b0db5
    MOV dword ptr [EBX + 0x2d4],0x1     ; 004b0d61
    PUSH EBX                            ; 004b0d6b
        ;   Label: LAB_004b0d6b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004b0d6c
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 004b0d71
    PUSH 0x0                            ; 004b0d74
    LEA EDX,[ESP + 0x4]                 ; 004b0d76
    PUSH EDX                            ; 004b0d7a
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b0d7b
    PUSH EBX                            ; 004b0d81
    CALL dword ptr [EAX + 0x14]         ; 004b0d82
    ADD ESP,0x8                         ; 004b0d85
    PUSH EAX                            ; 004b0d88
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004b0d89
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 004b0d8e
    TEST EAX,EAX                        ; 004b0d91
    JZ 0x004b0dac                       ; 004b0d93
        ;   XREF to: 004b0dac (CONDITIONAL_JUMP)  ; LAB_004b0dac
    PUSH -0x1                           ; 004b0d95
    LEA EAX,[EBX + 0x150]               ; 004b0d97
    PUSH dword ptr [EBX + 0x2cc]        ; 004b0d9d
    PUSH EAX                            ; 004b0da3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004b0da4
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 004b0da9
    PUSH EBX                            ; 004b0dac
        ;   Label: LAB_004b0dac
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004b0dad
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 004b0db2
    ADD ESP,0x18                        ; 004b0db5
        ;   Label: LAB_004b0db5
    POP EBX                             ; 004b0db8
    RET                                 ; 004b0db9

