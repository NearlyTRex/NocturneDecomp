; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00431610(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00431610
        ;   Label: core_charactr.cpp_FUN_00431610
    MOV EAX,dword ptr [ESP + 0x8]       ; 00431614
    MOV dword ptr [EDX + 0x2710],EAX    ; 00431618
    RET                                 ; 0043161e

