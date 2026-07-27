; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_colonel_cpp_FUN_0043ab30(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043ab30
        ;   Label: core_colonel.cpp_FUN_0043ab30
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043ab34
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 0043ab38
    RET                                 ; 0043ab3e

