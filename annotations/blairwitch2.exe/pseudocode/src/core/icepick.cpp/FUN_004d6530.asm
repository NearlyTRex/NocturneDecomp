; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_FUN_004d6530(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d6530
        ;   Label: core_icepick.cpp_FUN_004d6530
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d6534
    MOV dword ptr [EDX + 0x25640],EAX   ; 004d6538
    RET                                 ; 004d653e

