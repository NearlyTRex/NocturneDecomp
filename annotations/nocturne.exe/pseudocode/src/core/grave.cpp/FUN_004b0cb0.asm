; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_grave_cpp_FUN_004b0cb0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_005baf90
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0cb0
        ;   Label: core_grave.cpp_FUN_004b0cb0
    SUB ESP,0x18                        ; 004b0cb1
    MOV EBX,dword ptr [ESP + 0x20]      ; 004b0cb4
    CMP dword ptr [EBX + 0x2d4],0x0     ; 004b0cb8
    JNZ 0x004b0d37                      ; 004b0cbf
        ;   XREF to: 004b0d37 (CONDITIONAL_JUMP)  ; LAB_004b0d37
    MOV EAX,[0x005baf90]                ; 004b0cc5 | DAT_005baf90
    CMP dword ptr [EAX + 0x4],0x0       ; 004b0cca | DAT_01cc9454
    JNZ 0x004b0ce2                      ; 004b0cce
        ;   XREF to: 004b0ce2 (CONDITIONAL_JUMP)  ; LAB_004b0ce2
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004b0cd0
    JZ 0x004b0ce2                       ; 004b0cd7
        ;   XREF to: 004b0ce2 (CONDITIONAL_JUMP)  ; LAB_004b0ce2
    CMP dword ptr [EBX + 0x2d8],0x0     ; 004b0cd9
    JZ 0x004b0d37                       ; 004b0ce0
        ;   XREF to: 004b0d37 (CONDITIONAL_JUMP)  ; LAB_004b0d37
    PUSH ESI                            ; 004b0ce2
        ;   Label: LAB_004b0ce2
    PUSH EBX                            ; 004b0ce3
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004b0ce4
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 004b0ce9
    PUSH 0x0                            ; 004b0cec
    LEA EAX,[ESP + 0x8]                 ; 004b0cee
    PUSH EAX                            ; 004b0cf2
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004b0cf3
    PUSH EBX                            ; 004b0cf9
    CALL dword ptr [EDX + 0x14]         ; 004b0cfa
    ADD ESP,0x8                         ; 004b0cfd
    PUSH EAX                            ; 004b0d00
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004b0d01
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 004b0d06
    MOV ESI,EAX                         ; 004b0d09
    TEST EAX,EAX                        ; 004b0d0b
    JZ 0x004b0d26                       ; 004b0d0d
        ;   XREF to: 004b0d26 (CONDITIONAL_JUMP)  ; LAB_004b0d26
    PUSH -0x1                           ; 004b0d0f
    LEA EAX,[EBX + 0x150]               ; 004b0d11
    PUSH dword ptr [EBX + 0x2cc]        ; 004b0d17
    PUSH EAX                            ; 004b0d1d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004b0d1e
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 004b0d23
    PUSH EBX                            ; 004b0d26
        ;   Label: LAB_004b0d26
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004b0d27
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 004b0d2c
    MOV EAX,ESI                         ; 004b0d2f
    POP ESI                             ; 004b0d31
    ADD ESP,0x18                        ; 004b0d32
    POP EBX                             ; 004b0d35
    RET                                 ; 004b0d36
    XOR EAX,EAX                         ; 004b0d37
        ;   Label: LAB_004b0d37
    ADD ESP,0x18                        ; 004b0d39
    POP EBX                             ; 004b0d3c
    RET                                 ; 004b0d3d

