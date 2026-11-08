; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ca040(void)
;
;
; Called Functions:
;   FUN_005ca05c
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005ca040
        ;   Label: FUN_005ca040
    CALL FUN_005ca05c                   ; 005ca042
        ;   XREF to: 005ca05c (UNCONDITIONAL_CALL)  ; undefined FUN_005ca05c()
    ADD ESP,0x4                         ; 005ca047
    JMP 0x005c6b18                      ; 005ca04a
        ;   XREF to: 005c6b18 (UNCONDITIONAL_JUMP)

