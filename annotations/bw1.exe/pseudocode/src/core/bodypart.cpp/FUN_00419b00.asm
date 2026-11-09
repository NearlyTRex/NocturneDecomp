; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00419b00(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00419b00
        ;   Label: core_bodypart.cpp_FUN_00419b00
    MOV EAX,dword ptr [ESP + 0x8]       ; 00419b04
    MOV dword ptr [EDX + 0xf2c],EAX     ; 00419b08
    RET                                 ; 00419b0e

