; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_svetlana_cpp_FUN_00571a20(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00571a20
        ;   Label: core_svetlana.cpp_FUN_00571a20
    MOV EAX,dword ptr [ESP + 0x8]       ; 00571a24
    MOV dword ptr [EDX + 0x25640],EAX   ; 00571a28
    RET                                 ; 00571a2e

