; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vecdir_cpp_staticInit_FUN_0054e480(void)
;
;
; Referenced Globals:
;   UVector3 g_ZeroVector
;   undefined4 g_ZeroVector+4
;   undefined4 g_ZeroVector+8
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0054e480
        ;   Label: core_vecdir.cpp_staticInit_FUN_0054e480
    MOV dword ptr [0x02dd1188],EDX      ; 0054e482 | g_ZeroVector+4
    MOV dword ptr [0x02dd118c],EDX      ; 0054e488 | g_ZeroVector+8
    MOV dword ptr [0x02dd1184],EDX      ; 0054e48e | g_ZeroVector
    RET                                 ; 0054e494

