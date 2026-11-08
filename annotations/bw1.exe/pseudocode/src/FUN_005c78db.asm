; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c78db(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c78db
        ;   Label: FUN_005c78db
    FXCH                                ; 005c78de
    FSTP extended double ptr [ESP + 0xc] ; 005c78e0
    CALL FUN_005c769c                   ; 005c78e4
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH                                ; 005c78e9
    ADD ESP,0x2c                        ; 005c78eb
    RET                                 ; 005c78ee

