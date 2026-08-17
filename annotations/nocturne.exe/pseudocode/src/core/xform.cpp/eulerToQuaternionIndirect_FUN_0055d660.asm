; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternionIndirect_FUN_0055d660(CVector3f *euler_angles,CQuaternion4f *quat_out)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   euler_angles
;
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
;   core_xform.cpp_matrixToQuaternion_FUN_0055cf10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d660
        ;   Label: core_xform.cpp_eulerToQuaternionIndirect_FUN_0055d660
    PUSH EDI                            ; 0055d661
    PUSH EBP                            ; 0055d662
    MOV EBP,ESP                         ; 0055d663
    SUB ESP,0x4c                        ; 0055d665
    MOV EBX,ESI                         ; 0055d668
    MOV EDX,dword ptr [EBP + 0x10]      ; 0055d66a
    PUSH EDX                            ; 0055d66d
    LEA ESI,[EBP + -0xc]                ; 0055d66e
    XOR ECX,ECX                         ; 0055d671
    PUSH ESI                            ; 0055d673
    LEA ESI,[EBP + -0x4c]               ; 0055d674
    MOV dword ptr [EBP + -0xc],ECX      ; 0055d677
    PUSH ESI                            ; 0055d67a
    MOV dword ptr [EBP + -0x8],ECX      ; 0055d67b
    MOV dword ptr [EBP + -0x4],ECX      ; 0055d67e
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 0055d681
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0055d686
    LEA ESI,[EBP + -0x4c]               ; 0055d689
    PUSH ESI                            ; 0055d68c
    LEA ESI,[EBP + -0x1c]               ; 0055d68d
    MOV EDI,EBX                         ; 0055d690
    CALL core_xform.cpp_matrixToQuaternion_FUN_0055cf10 ; 0055d692
        ;   XREF to: 0055cf10 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_0055cf10(CMatrix3x3f * matrix_in, CQuaternion4f * quat_out)
    LEA ESI,[EBP + -0x1c]               ; 0055d697
    ADD ESP,0x4                         ; 0055d69a
    MOVSD ES:EDI,ESI                    ; 0055d69d
    MOVSD ES:EDI,ESI                    ; 0055d69e
    MOVSD ES:EDI,ESI                    ; 0055d69f
    MOVSD ES:EDI,ESI                    ; 0055d6a0
    MOV EAX,EBX                         ; 0055d6a1
    MOV ESP,EBP                         ; 0055d6a3
    POP EBP                             ; 0055d6a5
    POP EDI                             ; 0055d6a6
    POP EBX                             ; 0055d6a7
    RET                                 ; 0055d6a8

