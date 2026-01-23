; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0(CQuaternion4f * quat_in, CVector3f * vector_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat_in
; CVector3f *      Stack[0x8]:4   vector_out
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
;
; Called Functions:
;   core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7af0
        ;   Label: core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0
    SUB ESP,0x30                        ; 005f7af1
    MOV EBX,dword ptr [ESP + 0x38]      ; 005f7af4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005f7af8
    PUSH EDX                            ; 005f7afc
    LEA EAX,[ESP + 0x4]                 ; 005f7afd
    PUSH EAX                            ; 005f7b01
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280 ; 005f7b02
        ;   XREF to: 005f7280 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 005f7b07
    PUSH EBX                            ; 005f7b0a
    LEA EAX,[ESP + 0x4]                 ; 005f7b0b
    PUSH EAX                            ; 005f7b0f
    CALL core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0 ; 005f7b10
        ;   XREF to: 005f5bd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CMatrix3x3f * matrix_ptr, CVector3f * euler_out)
    ADD ESP,0x8                         ; 005f7b15
    MOV EAX,EBX                         ; 005f7b18
    ADD ESP,0x30                        ; 005f7b1a
    POP EBX                             ; 005f7b1d
    RET                                 ; 005f7b1e

