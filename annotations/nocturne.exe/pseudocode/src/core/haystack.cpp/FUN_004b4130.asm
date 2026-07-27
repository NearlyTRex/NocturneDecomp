; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_haystack_cpp_FUN_004b4130(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b4130
        ;   Label: core_haystack.cpp_FUN_004b4130
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b4134
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 004b4138
    RET                                 ; 004b413e

