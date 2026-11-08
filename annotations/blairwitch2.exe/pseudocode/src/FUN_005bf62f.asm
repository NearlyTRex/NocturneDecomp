; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf62f(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf62f
        ;   Label: FUN_005bf62f
    FXCH                                ; 005bf633
    FSTP extended double ptr [ESP]      ; 005bf635
    CALL FUN_005bf3dc                   ; 005bf638
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH                                ; 005bf63d
    FLD extended double ptr [ESP + 0xc] ; 005bf63f
    ADD ESP,0x2c                        ; 005bf643
    RET                                 ; 005bf646

