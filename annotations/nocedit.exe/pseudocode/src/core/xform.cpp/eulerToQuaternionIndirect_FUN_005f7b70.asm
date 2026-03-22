; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternionIndirect_FUN_005f7b70(CVector3f *euler_angles,CQuaternion4f *quat_out)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   euler_angles
; Local Variables:
; undefined4[1512] Stack[-0x1804]:6048  auStackY_1804
; CMatrix3x4f      Stack[-0x58]:48  local_58
; CQuaternion4f    Stack[-0x28]:16  local_28
; CVector3f        Stack[-0x18]:12  local_18
;
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_matrixToQuaternion_FUN_005f7420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7b70
        ;   Label: core_xform.cpp_eulerToQuaternionIndirect_FUN_005f7b70
    PUSH EDI                            ; 005f7b71
    PUSH EBP                            ; 005f7b72
    MOV EBP,ESP                         ; 005f7b73
    SUB ESP,0x4c                        ; 005f7b75
    MOV EBX,ESI                         ; 005f7b78
    MOV EDX,dword ptr [EBP + 0x10]      ; 005f7b7a
    PUSH EDX                            ; 005f7b7d
    LEA ESI,[EBP + -0xc]                ; 005f7b7e
    XOR ECX,ECX                         ; 005f7b81
    PUSH ESI                            ; 005f7b83
    LEA ESI,[EBP + -0x4c]               ; 005f7b84
    MOV dword ptr [EBP + -0xc],ECX      ; 005f7b87
    PUSH ESI                            ; 005f7b8a
    MOV dword ptr [EBP + -0x8],ECX      ; 005f7b8b
    MOV dword ptr [EBP + -0x4],ECX      ; 005f7b8e
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 005f7b91
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005f7b96
    LEA ESI,[EBP + -0x4c]               ; 005f7b99
    PUSH ESI                            ; 005f7b9c
    LEA ESI,[EBP + -0x1c]               ; 005f7b9d
    MOV EDI,EBX                         ; 005f7ba0
    CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420 ; 005f7ba2
        ;   XREF to: 005f7420 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f * matrix_in, CQuaternion4f * quat_out)
    LEA ESI,[EBP + -0x1c]               ; 005f7ba7
    ADD ESP,0x4                         ; 005f7baa
    JMP 0x00604bf5                      ; 005f7bad
        ;   XREF to: 00604bf5 (UNCONDITIONAL_JUMP)  ; LAB_00604bf5
    MOV ESP,EBP                         ; 005f7bb3
        ;   Label: LAB_005f7bb3
    POP EBP                             ; 005f7bb5
    POP EDI                             ; 005f7bb6
    POP EBX                             ; 005f7bb7
    RET                                 ; 005f7bb8
    MOV ECX,dword ptr [ESI]             ; 00604bf5
        ;   Label: LAB_00604bf5
    MOV dword ptr [EDI],ECX             ; 00604bf7
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604bf9
    MOV dword ptr [EDI + 0x4],ECX       ; 00604bfc
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604bff
    MOV dword ptr [EDI + 0x8],ECX       ; 00604c02
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604c05
    MOV dword ptr [EDI + 0xc],ECX       ; 00604c08
    ADD ESI,0x10                        ; 00604c0b
    ADD EDI,0x10                        ; 00604c0e
    MOV EAX,EBX                         ; 00604c11
    JMP 0x005f7bb3                      ; 00604c13
        ;   XREF to: 005f7bb3 (UNCONDITIONAL_JUMP)  ; LAB_005f7bb3

