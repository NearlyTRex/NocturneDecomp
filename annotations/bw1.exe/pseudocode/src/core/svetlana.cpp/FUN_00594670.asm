; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_svetlana_cpp_FUN_00594670(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00594670
        ;   Label: core_svetlana.cpp_FUN_00594670
    MOV EAX,dword ptr [ESP + 0x8]       ; 00594674
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 00594678
    RET                                 ; 0059467e

