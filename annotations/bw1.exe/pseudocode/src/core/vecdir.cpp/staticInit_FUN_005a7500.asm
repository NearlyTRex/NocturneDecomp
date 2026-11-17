; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vecdir_cpp_staticInit_FUN_005a7500(void)
;
;
; Referenced Globals:
;   CVector3f g_CVector3f_02c8af28
;   undefined4 g_CVector3f_02c8af28.y
;   undefined4 g_CVector3f_02c8af28.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005a7500
        ;   Label: core_vecdir.cpp_staticInit_FUN_005a7500
    MOV dword ptr [0x02c8af2c],EDX      ; 005a7502 | g_CVector3f_02c8af28.y
    MOV dword ptr [0x02c8af30],EDX      ; 005a7508 | g_CVector3f_02c8af28.z
    MOV dword ptr [0x02c8af28],EDX      ; 005a750e | g_CVector3f_02c8af28
    RET                                 ; 005a7514

