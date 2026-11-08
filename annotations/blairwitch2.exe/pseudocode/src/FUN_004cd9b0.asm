; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cd9b0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cd9b0
        ;   Label: FUN_004cd9b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cd9b4
    MOV dword ptr [EDX + 0x25640],EAX   ; 004cd9b8
    RET                                 ; 004cd9be

