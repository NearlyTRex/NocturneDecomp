; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * core_bride_cpp_CBride_getTargetPoint_FUN_00420eb0(int param_1,CVector3f *param_2)
;
; Local Variables:
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_00764b2c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420eb0
        ;   Label: core_bride.cpp_CBride_getTargetPoint_FUN_00420eb0
    PUSH ESI                            ; 00420eb1
    PUSH EDI                            ; 00420eb2
    PUSH EBP                            ; 00420eb3
    MOV EBP,ESP                         ; 00420eb4
    SUB ESP,0x6c                        ; 00420eb6
    MOV EBX,dword ptr [EBP + 0x18]      ; 00420eb9
    MOV EDX,dword ptr [0x00764b2c]      ; 00420ebc | DAT_00764b2c
    MOV ESI,dword ptr [EBP + 0x14]      ; 00420ec2
    PUSH EDX                            ; 00420ec5
    ADD ESI,0x150                       ; 00420ec6
    PUSH ESI                            ; 00420ecc
    LEA ESI,[EBP + -0x3c]               ; 00420ecd
    LEA EDI,[EBP + -0x6c]               ; 00420ed0
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0 ; 00420ed3
        ;   XREF to: 0051d0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0()
    MOV ECX,0xc                         ; 00420ed8
    LEA ESI,[EBP + -0x3c]               ; 00420edd
    MOVSD.REP ES:EDI,ESI                ; 00420ee0
    ADD ESP,0x8                         ; 00420ee2
    LEA ESI,[EBP + -0x6c]               ; 00420ee5
    PUSH ESI                            ; 00420ee8
    MOV dword ptr [EBP + -0x8],0x3f333333 ; 00420ee9
    LEA ESI,[EBP + -0xc]                ; 00420ef0
    PUSH ESI                            ; 00420ef3
    MOV EDI,0x3e99999a                  ; 00420ef4
    XOR ECX,ECX                         ; 00420ef9
    PUSH EBX                            ; 00420efb
    MOV dword ptr [EBP + -0xc],ECX      ; 00420efc
    MOV dword ptr [EBP + -0x4],EDI      ; 00420eff
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00420f02
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00420f07
    MOV EAX,EBX                         ; 00420f0a
    MOV ESP,EBP                         ; 00420f0c
    POP EBP                             ; 00420f0e
    POP EDI                             ; 00420f0f
    POP ESI                             ; 00420f10
    POP EBX                             ; 00420f11
    RET                                 ; 00420f12

