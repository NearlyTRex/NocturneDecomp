; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051fca0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051fca0
        ;   Label: FUN_0051fca0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051fca4
    MOV dword ptr [EDX + 0x25640],EAX   ; 0051fca8
    RET                                 ; 0051fcae

