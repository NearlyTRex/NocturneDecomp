; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056bf9f(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056bf9f
        ;   Label: FUN_0056bf9f
    FLD ST0                             ; 0056bfa3
    FSTP extended double ptr [ESP]      ; 0056bfa5
    FSTP extended double ptr [ESP + 0x20] ; 0056bfa8
    CALL FUN_0056be50                   ; 0056bfac
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FLD extended double ptr [ESP + 0x20] ; 0056bfb1
    FXCH                                ; 0056bfb5
    ADD ESP,0x2c                        ; 0056bfb7
    RET                                 ; 0056bfba

