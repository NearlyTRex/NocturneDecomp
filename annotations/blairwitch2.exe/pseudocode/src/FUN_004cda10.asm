; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cda10(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004cda10
        ;   Label: FUN_004cda10
    PUSH 0x3                            ; 004cda15
    PUSH 0x617a44                       ; 004cda17
    PUSH 0x4cda40                       ; 004cda1c
    PUSH 0x5d99a4                       ; 004cda21
    PUSH 0x1cedea0                      ; 004cda26
    CALL FUN_0040c450                   ; 004cda2b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004cda30
    RET                                 ; 004cda33

