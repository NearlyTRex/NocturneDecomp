; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf910(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf910
        ;   Label: crt_unknown.c_FUN_005bf910
    FXCH ST6                            ; 005bf913
    FSTP extended double ptr [ESP + 0xc] ; 005bf915
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf919
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST6                            ; 005bf91e
    FLD extended double ptr [ESP + 0xc] ; 005bf920
    FXCH ST7                            ; 005bf924
    ADD ESP,0x2c                        ; 005bf926
    RET                                 ; 005bf929

