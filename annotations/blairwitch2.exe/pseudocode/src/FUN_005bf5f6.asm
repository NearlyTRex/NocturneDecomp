; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf5f6(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005bf5f6
        ;   Label: FUN_005bf5f6
    INT 0x6                             ; 005bf5f9
    FXCH ST2                            ; 005bf5fb
        ;   Label: LAB_005bf5fb
    FSTP extended double ptr [ESP + 0xc] ; 005bf5fd
    FXCH                                ; 005bf601
    FLD ST0                             ; 005bf603
    FSTP extended double ptr [ESP]      ; 005bf605
    FSTP extended double ptr [ESP + 0x20] ; 005bf608
    CALL FUN_005bf3dc                   ; 005bf60c
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH                                ; 005bf611
    FLD extended double ptr [ESP + 0x20] ; 005bf613
    ADD ESP,0x2c                        ; 005bf617
    RET                                 ; 005bf61a

