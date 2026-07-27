; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_svetlana_cpp_FUN_00543040(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00543040
        ;   Label: core_svetlana.cpp_FUN_00543040
    MOV EAX,dword ptr [ESP + 0x8]       ; 00543044
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 00543048
    RET                                 ; 0054304e

