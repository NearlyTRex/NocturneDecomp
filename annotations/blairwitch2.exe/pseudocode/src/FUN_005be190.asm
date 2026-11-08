; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005be190(void)
;
;
; XREF[1]:
;   FUN_005c57ad at 005c57dc
;
; Called Functions:
;   FUN_005be180
;
; *****************************************************************************

section .text

    PUSH 0xd                            ; 005be190
        ;   Label: FUN_005be190
    CALL FUN_005be180                   ; 005be192
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
    ADD ESP,0x4                         ; 005be197
    RET                                 ; 005be19a

