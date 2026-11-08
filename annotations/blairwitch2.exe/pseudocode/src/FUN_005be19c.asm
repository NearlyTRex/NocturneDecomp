; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005be19c(void)
;
;
; XREF[3]:
;   FUN_005c1f32 at 005c1f72
;   FUN_005c5581 at 005c5dcc
;   FUN_005c57ad at 005c57e3
;
; Called Functions:
;   FUN_005be180
;
; *****************************************************************************

section .text

    PUSH 0xe                            ; 005be19c
        ;   Label: FUN_005be19c
    CALL FUN_005be180                   ; 005be19e
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
    ADD ESP,0x4                         ; 005be1a3
    RET                                 ; 005be1a6

