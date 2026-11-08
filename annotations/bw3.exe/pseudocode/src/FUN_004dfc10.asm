; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dfc10(void)
;
;
; Called Functions:
;   FUN_0040d2e0
;   FUN_004dfc40
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x1d70ab8                      ; 004dfc10
        ;   Label: FUN_004dfc10
    CALL FUN_004dfc40                   ; 004dfc15
        ;   XREF to: 004dfc40 (UNCONDITIONAL_CALL)  ; undefined FUN_004dfc40()
    ADD ESP,0x4                         ; 004dfc1a
    PUSH 0x1d70be8                      ; 004dfc1d
    CALL FUN_0040d2e0                   ; 004dfc22
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 004dfc27
    PUSH 0x60029c                       ; 004dfc2a
    CALL FUN_005a3e13                   ; 004dfc2f
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 004dfc34
    RET                                 ; 004dfc37

