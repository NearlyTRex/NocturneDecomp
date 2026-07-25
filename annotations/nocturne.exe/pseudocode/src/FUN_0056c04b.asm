; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c04b(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 0056c04b
        ;   Label: FUN_0056c04b
    INT 0x6                             ; 0056c04e
    FSTP extended double ptr [ESP]      ; 0056c050
        ;   Label: LAB_0056c050
    FXCH                                ; 0056c053
    FSTP extended double ptr [ESP + 0xc] ; 0056c055
    CALL FUN_0056be50                   ; 0056c059
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH                                ; 0056c05e
    FLD extended double ptr [ESP + 0xc] ; 0056c060
    FXCH ST2                            ; 0056c064
    ADD ESP,0x2c                        ; 0056c066
    RET                                 ; 0056c069

