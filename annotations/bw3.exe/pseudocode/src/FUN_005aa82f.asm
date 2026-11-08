; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa82f(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa82f
        ;   Label: FUN_005aa82f
    FXCH ST3                            ; 005aa833
    FLD ST0                             ; 005aa835
    FSTP extended double ptr [ESP]      ; 005aa837
    FSTP extended double ptr [ESP + 0x20] ; 005aa83a
    CALL FUN_005aa50c                   ; 005aa83e
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST3                            ; 005aa843
    FLD extended double ptr [ESP + 0x20] ; 005aa845
    FXCH ST4                            ; 005aa849
    ADD ESP,0x2c                        ; 005aa84b
    RET                                 ; 005aa84e

