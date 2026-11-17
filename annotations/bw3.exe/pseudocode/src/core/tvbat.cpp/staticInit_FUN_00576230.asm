; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_staticInit_FUN_00576230(void)
;
;
; Referenced Globals:
;   CVector3f g_CVector3f_02cfd900
;   undefined4 g_CVector3f_02cfd900.y
;   undefined4 g_CVector3f_02cfd900.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00576230
        ;   Label: core_tvbat.cpp_staticInit_FUN_00576230
    MOV dword ptr [0x02cfd904],EDX      ; 00576232 | g_CVector3f_02cfd900.y
    MOV dword ptr [0x02cfd908],EDX      ; 00576238 | g_CVector3f_02cfd900.z
    MOV dword ptr [0x02cfd900],EDX      ; 0057623e | g_CVector3f_02cfd900
    RET                                 ; 00576244

