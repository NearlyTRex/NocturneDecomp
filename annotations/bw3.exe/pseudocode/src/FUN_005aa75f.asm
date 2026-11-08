; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa75f(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa75f
        ;   Label: FUN_005aa75f
    FXCH                                ; 005aa763
    FSTP extended double ptr [ESP]      ; 005aa765
    CALL FUN_005aa50c                   ; 005aa768
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH                                ; 005aa76d
    FLD extended double ptr [ESP + 0xc] ; 005aa76f
    ADD ESP,0x2c                        ; 005aa773
    RET                                 ; 005aa776

