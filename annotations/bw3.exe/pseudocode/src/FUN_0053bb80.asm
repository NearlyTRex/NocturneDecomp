; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053bb80(void)
;
;
; Called Functions:
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH 0x5e3cc0                       ; 0053bb80
        ;   Label: FUN_0053bb80
    PUSH 0x5                            ; 0053bb85
    PUSH 0x21221f4                      ; 0053bb87
    CALL FUN_005a30d7                   ; 0053bb8c
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 0053bb91
    RET                                 ; 0053bb94

