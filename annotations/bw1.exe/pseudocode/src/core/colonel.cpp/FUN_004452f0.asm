; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_colonel_cpp_FUN_004452f0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004452f0
        ;   Label: core_colonel.cpp_FUN_004452f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004452f4
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 004452f8
    RET                                 ; 004452fe

