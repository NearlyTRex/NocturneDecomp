; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vecdir_cpp_staticInit_FUN_005e7810(void)
;
;
; Referenced Globals:
;   UVector3 g_ZeroVector
;   undefined4 g_ZeroVector+4
;   undefined4 g_ZeroVector+8
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005e7810
        ;   Label: core_vecdir.cpp_staticInit_FUN_005e7810
    MOV dword ptr [0x03f8755c],EDX      ; 005e7812 | g_ZeroVector+4
    MOV dword ptr [0x03f87560],EDX      ; 005e7818 | g_ZeroVector+8
    MOV dword ptr [0x03f87558],EDX      ; 005e781e | g_ZeroVector
    RET                                 ; 005e7824

