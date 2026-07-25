; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c0bb(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c0bb
        ;   Label: FUN_0056c0bb
    FXCH                                ; 0056c0bf
    FSTP extended double ptr [ESP]      ; 0056c0c1
    CALL FUN_0056be50                   ; 0056c0c4
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH                                ; 0056c0c9
    ADD ESP,0x2c                        ; 0056c0cb
    RET                                 ; 0056c0ce

