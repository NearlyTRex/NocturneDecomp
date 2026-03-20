; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_staticInit_FUN_00472680(void)
;
;
; Referenced Globals:
;   CVector3f CVector3f_026a72d8
;   undefined4 CVector3f_026a72d8.y
;   undefined4 CVector3f_026a72d8.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00472680
        ;   Label: core_dlight.cpp_staticInit_FUN_00472680
    MOV dword ptr [0x026a72dc],EDX      ; 00472682 | CVector3f_026a72d8.y
    MOV dword ptr [0x026a72e0],EDX      ; 00472688 | CVector3f_026a72d8.z
    MOV dword ptr [0x026a72d8],EDX      ; 0047268e | CVector3f_026a72d8
    RET                                 ; 00472694

