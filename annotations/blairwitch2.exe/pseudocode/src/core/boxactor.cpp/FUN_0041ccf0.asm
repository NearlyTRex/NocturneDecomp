; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_FUN_0041ccf0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041ccf0
        ;   Label: core_boxactor.cpp_FUN_0041ccf0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041ccf4
    MOV dword ptr [EDX + 0x474],EAX     ; 0041ccf8
    RET                                 ; 0041ccfe

