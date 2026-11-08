; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005771c0(void)
;
;
; Called Functions:
;   FUN_00577230
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x2cfd950                      ; 005771c0
        ;   Label: FUN_005771c0
    CALL FUN_00577230                   ; 005771c5
        ;   XREF to: 00577230 (UNCONDITIONAL_CALL)  ; undefined FUN_00577230()
    ADD ESP,0x4                         ; 005771ca
    PUSH 0x606b10                       ; 005771cd
    CALL FUN_005a3e13                   ; 005771d2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 005771d7
    RET                                 ; 005771da

