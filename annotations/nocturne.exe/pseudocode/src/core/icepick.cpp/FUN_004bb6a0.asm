; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_FUN_004bb6a0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bb6a0
        ;   Label: core_icepick.cpp_FUN_004bb6a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004bb6a4
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 004bb6a8
    RET                                 ; 004bb6ae

