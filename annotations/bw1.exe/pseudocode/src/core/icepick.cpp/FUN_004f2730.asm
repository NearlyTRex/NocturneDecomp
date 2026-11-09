; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_FUN_004f2730(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2730
        ;   Label: core_icepick.cpp_FUN_004f2730
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f2734
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 004f2738
    RET                                 ; 004f273e

