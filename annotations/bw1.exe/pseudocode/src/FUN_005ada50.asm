; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ada50(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ada50
        ;   Label: FUN_005ada50
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ada54
    MOV dword ptr [EDX + 0x304],EAX     ; 005ada58
    RET                                 ; 005ada5e

