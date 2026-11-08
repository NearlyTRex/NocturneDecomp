; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf5d7(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005bf5d7
        ;   Label: FUN_005bf5d7
    INT 0x6                             ; 005bf5da
    FSTP extended double ptr [ESP]      ; 005bf5dc
        ;   Label: LAB_005bf5dc
    FXCH                                ; 005bf5df
    FSTP extended double ptr [ESP + 0xc] ; 005bf5e1
    CALL FUN_005bf3dc                   ; 005bf5e5
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH                                ; 005bf5ea
    FLD extended double ptr [ESP + 0xc] ; 005bf5ec
    FXCH ST2                            ; 005bf5f0
    ADD ESP,0x2c                        ; 005bf5f2
    RET                                 ; 005bf5f5

