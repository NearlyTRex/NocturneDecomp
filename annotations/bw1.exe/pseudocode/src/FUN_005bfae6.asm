; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bfae6(void)
;
;
; Called Functions:
;   FUN_005c32d4
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005bfae6
        ;   Label: FUN_005bfae6
    PUSH 0x5fa9c6                       ; 005bfae8
    CALL FUN_005c32d4                   ; 005bfaed
        ;   XREF to: 005c32d4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c32d4()
    ADD ESP,0x8                         ; 005bfaf2
    RET                                 ; 005bfaf5

