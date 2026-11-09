; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00415730(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00415730
        ;   Label: core_bodypart.cpp_FUN_00415730
    MOV EAX,dword ptr [ESP + 0x8]       ; 00415734
    MOV dword ptr [EDX + 0xf2c],EAX     ; 00415738
    RET                                 ; 0041573e

