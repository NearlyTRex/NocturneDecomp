; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * core_xform_cpp_FUN_0055d5e0(CVector3f *param_1,CQuaternion4f *param_2)
;
;
; Called Functions:
;   core_xform.cpp_matrixToEulerAnglesZYX_FUN_0055b6c0
;   core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d5e0
        ;   Label: core_xform.cpp_FUN_0055d5e0
    SUB ESP,0x30                        ; 0055d5e1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0055d5e4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0055d5e8
    PUSH EDX                            ; 0055d5ec
    LEA EAX,[ESP + 0x4]                 ; 0055d5ed
    PUSH EAX                            ; 0055d5f1
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70 ; 0055d5f2
        ;   XREF to: 0055cd70 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 0055d5f7
    PUSH EBX                            ; 0055d5fa
    LEA EAX,[ESP + 0x4]                 ; 0055d5fb
    PUSH EAX                            ; 0055d5ff
    CALL core_xform.cpp_matrixToEulerAnglesZYX_FUN_0055b6c0 ; 0055d600
        ;   XREF to: 0055b6c0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAnglesZYX_FUN_0055b6c0(CMatrix3x4f * matrix_ptr, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0055d605
    MOV EAX,EBX                         ; 0055d608
    ADD ESP,0x30                        ; 0055d60a
    POP EBX                             ; 0055d60d
    RET                                 ; 0055d60e

