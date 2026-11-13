; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_staticInit_FUN_00449c50(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01b1387c
;   undefined4 DAT_01b13880
;   undefined4 DAT_01b13884
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00449c50
        ;   Label: core_dlight.cpp_staticInit_FUN_00449c50
    MOV dword ptr [0x01b13880],EDX      ; 00449c52 | DAT_01b13880
    MOV dword ptr [0x01b13884],EDX      ; 00449c58 | DAT_01b13884
    MOV dword ptr [0x01b1387c],EDX      ; 00449c5e | DAT_01b1387c
    RET                                 ; 00449c64

