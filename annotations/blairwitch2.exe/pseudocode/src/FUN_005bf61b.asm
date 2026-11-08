; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf61b(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf61b
        ;   Label: FUN_005bf61b
    FXCH                                ; 005bf61e
    FSTP extended double ptr [ESP + 0xc] ; 005bf620
    CALL FUN_005bf3dc                   ; 005bf624
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH                                ; 005bf629
    ADD ESP,0x2c                        ; 005bf62b
    RET                                 ; 005bf62e

