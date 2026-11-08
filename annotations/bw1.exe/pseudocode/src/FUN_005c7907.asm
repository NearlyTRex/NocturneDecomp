; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7907(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7907
        ;   Label: FUN_005c7907
    FXCH                                ; 005c790b
    FSTP extended double ptr [ESP]      ; 005c790d
    CALL FUN_005c769c                   ; 005c7910
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH                                ; 005c7915
    ADD ESP,0x2c                        ; 005c7917
    RET                                 ; 005c791a

