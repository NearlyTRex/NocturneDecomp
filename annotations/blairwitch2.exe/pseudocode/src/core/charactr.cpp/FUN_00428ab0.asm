; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00428ab0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00428ab0
        ;   Label: core_charactr.cpp_FUN_00428ab0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00428ab4
    MOV dword ptr [EDX + 0x27b0],EAX    ; 00428ab8
    RET                                 ; 00428abe

