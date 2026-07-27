; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_004efc10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e4008c
;   undefined4 DAT_01e40090
;   undefined4 DAT_01e4280c
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004efc10
        ;   Label: core_path.cpp_FUN_004efc10
    MOV dword ptr [0x01e4008c],EDX      ; 004efc12 | DAT_01e4008c
    MOV dword ptr [0x01e40090],EDX      ; 004efc18 | DAT_01e40090
    MOV dword ptr [0x01e4280c],EDX      ; 004efc1e | DAT_01e4280c
    RET                                 ; 004efc24

