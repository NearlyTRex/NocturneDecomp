; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf647(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf647
        ;   Label: FUN_005bf647
    FXCH                                ; 005bf64b
    FSTP extended double ptr [ESP]      ; 005bf64d
    CALL FUN_005bf3dc                   ; 005bf650
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH                                ; 005bf655
    ADD ESP,0x2c                        ; 005bf657
    RET                                 ; 005bf65a

