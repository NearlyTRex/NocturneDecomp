; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_haystack_cpp_FUN_004ea270(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ea270
        ;   Label: core_haystack.cpp_FUN_004ea270
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ea274
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 004ea278
    RET                                 ; 004ea27e

