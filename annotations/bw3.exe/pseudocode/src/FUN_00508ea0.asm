; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00508ea0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00508b50 at 00508b6c
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 00508ea0
        ;   Label: FUN_00508ea0
    PUSH 0x7                            ; 00508ea5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00508ea7
    PUSH EDX                            ; 00508eab
    CALL FUN_005a3de6                   ; 00508eac
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 00508eb1
    RET                                 ; 00508eb4

