; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vecdir_cpp_staticInit_FUN_005a7500(void)
;
;
; Referenced Globals:
;   CVector3f g_ZeroVector
;   undefined4 g_ZeroVector.y
;   undefined4 g_ZeroVector.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005a7500
        ;   Label: core_vecdir.cpp_staticInit_FUN_005a7500
    MOV dword ptr [0x02c8af2c],EDX      ; 005a7502 | g_ZeroVector.y
    MOV dword ptr [0x02c8af30],EDX      ; 005a7508 | g_ZeroVector.z
    MOV dword ptr [0x02c8af28],EDX      ; 005a750e | g_ZeroVector
    RET                                 ; 005a7514

