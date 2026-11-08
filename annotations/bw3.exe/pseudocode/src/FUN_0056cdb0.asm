; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056cdb0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056cdb0
        ;   Label: FUN_0056cdb0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056cdb4
    MOV dword ptr [EDX + 0x2d4],EAX     ; 0056cdb8
    RET                                 ; 0056cdbe

