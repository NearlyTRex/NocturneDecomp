; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_FUN_00492a50(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00492a50
        ;   Label: core_filmreel.cpp_FUN_00492a50
    MOV EAX,dword ptr [ESP + 0x8]       ; 00492a54
    MOV dword ptr [EDX + 0x430],EAX     ; 00492a58
    RET                                 ; 00492a5e

