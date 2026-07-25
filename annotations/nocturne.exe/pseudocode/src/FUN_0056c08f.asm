; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c08f(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c08f
        ;   Label: FUN_0056c08f
    FXCH                                ; 0056c092
    FSTP extended double ptr [ESP + 0xc] ; 0056c094
    CALL FUN_0056be50                   ; 0056c098
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH                                ; 0056c09d
    ADD ESP,0x2c                        ; 0056c09f
    RET                                 ; 0056c0a2

