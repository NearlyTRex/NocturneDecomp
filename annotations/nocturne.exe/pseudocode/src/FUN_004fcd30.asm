; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fcd30(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fcd30
        ;   Label: FUN_004fcd30
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fcd34
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 004fcd38
    RET                                 ; 004fcd3e

