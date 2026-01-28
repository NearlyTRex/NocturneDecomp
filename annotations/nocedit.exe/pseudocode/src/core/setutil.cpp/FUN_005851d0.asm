; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_setutil_cpp_FUN_005851d0(void)
;
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005851d0
        ;   Label: core_setutil.cpp_FUN_005851d0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005851d4
    PUSH EDX                            ; 005851d8
    ADD EAX,0x10                        ; 005851d9
    PUSH EAX                            ; 005851dc
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 005851dd
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005851e2
    RET                                 ; 005851e5

