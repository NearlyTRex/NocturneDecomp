; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c78ef(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c78ef
        ;   Label: FUN_005c78ef
    FXCH                                ; 005c78f3
    FSTP extended double ptr [ESP]      ; 005c78f5
    CALL FUN_005c769c                   ; 005c78f8
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH                                ; 005c78fd
    FLD extended double ptr [ESP + 0xc] ; 005c78ff
    ADD ESP,0x2c                        ; 005c7903
    RET                                 ; 005c7906

