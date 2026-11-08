; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004222a0(void)
;
;
; Called Functions:
;   FUN_0040c450
;   FUN_0044fc80
;
; *****************************************************************************

section .text

    PUSH 0x7bdadc                       ; 004222a0
        ;   Label: FUN_004222a0
    CALL FUN_0044fc80                   ; 004222a5
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 004222aa
    PUSH 0x7bbff8                       ; 004222ad
    PUSH 0x9                            ; 004222b2
    PUSH 0x609ab8                       ; 004222b4
    PUSH 0x0                            ; 004222b9
    PUSH 0x5ccaa6                       ; 004222bb
    PUSH 0x7bdc5c                       ; 004222c0
    CALL FUN_0040c450                   ; 004222c5
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004222ca
    RET                                 ; 004222cd

