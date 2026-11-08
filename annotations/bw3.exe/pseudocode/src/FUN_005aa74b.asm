; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa74b(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa74b
        ;   Label: FUN_005aa74b
    FXCH                                ; 005aa74e
    FSTP extended double ptr [ESP + 0xc] ; 005aa750
    CALL FUN_005aa50c                   ; 005aa754
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH                                ; 005aa759
    ADD ESP,0x2c                        ; 005aa75b
    RET                                 ; 005aa75e

