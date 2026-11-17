; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_staticInit_FUN_00449c50(void)
;
;
; Referenced Globals:
;   CVector3f g_CVector3f_01b1387c
;   undefined4 g_CVector3f_01b1387c.y
;   undefined4 g_CVector3f_01b1387c.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00449c50
        ;   Label: core_dlight.cpp_staticInit_FUN_00449c50
    MOV dword ptr [0x01b13880],EDX      ; 00449c52 | g_CVector3f_01b1387c.y
    MOV dword ptr [0x01b13884],EDX      ; 00449c58 | g_CVector3f_01b1387c.z
    MOV dword ptr [0x01b1387c],EDX      ; 00449c5e | g_CVector3f_01b1387c
    RET                                 ; 00449c64

