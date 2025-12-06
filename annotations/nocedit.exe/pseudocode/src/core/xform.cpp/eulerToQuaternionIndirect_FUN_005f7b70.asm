; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CQuaternion4f * core_xform.cpp_eulerToQuaternionIndirect_FUN_005f7b70(CQuaternion4f * quat_out, CVector3f * euler_angles)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat_out
; CVector3f *      Stack[0x8]:4   euler_angles
; Local Variables:
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
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
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 005f7b91 | void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005f7b96
    LEA ESI,[EBP + -0x4c]               ; 005f7b99
    PUSH ESI                            ; 005f7b9c
    LEA ESI,[EBP + -0x1c]               ; 005f7b9d
    MOV EDI,EBX                         ; 005f7ba0
    CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420 ; 005f7ba2 | CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CQuaternion4f * quat_out, CMatrix3x3f * matrix_ptr)
        ;   XREF to: 005f7420 (UNCONDITIONAL_CALL)
    LEA ESI,[EBP + -0x1c]               ; 005f7ba7
    ADD ESP,0x4                         ; 005f7baa
    MOVSD ES:EDI,ESI                    ; 005f7bad
    MOVSD ES:EDI,ESI                    ; 005f7bae
    MOVSD ES:EDI,ESI                    ; 005f7baf
    MOVSD ES:EDI,ESI                    ; 005f7bb0
    MOV EAX,EBX                         ; 005f7bb1
    MOV ESP,EBP                         ; 005f7bb3
    POP EBP                             ; 005f7bb5
    POP EDI                             ; 005f7bb6
    POP EBX                             ; 005f7bb7
    RET                                 ; 005f7bb8

