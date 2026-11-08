; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa8bf(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa8bf
        ;   Label: FUN_005aa8bf
    FXCH ST3                            ; 005aa8c3
    FSTP extended double ptr [ESP]      ; 005aa8c5
    CALL FUN_005aa50c                   ; 005aa8c8
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST3                            ; 005aa8cd
    ADD ESP,0x2c                        ; 005aa8cf
    RET                                 ; 005aa8d2

