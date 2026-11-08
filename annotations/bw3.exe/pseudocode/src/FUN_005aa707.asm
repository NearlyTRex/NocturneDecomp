; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa707(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aa707
        ;   Label: FUN_005aa707
    INT 0x6                             ; 005aa70a
    FSTP extended double ptr [ESP]      ; 005aa70c
        ;   Label: LAB_005aa70c
    FXCH                                ; 005aa70f
    FSTP extended double ptr [ESP + 0xc] ; 005aa711
    CALL FUN_005aa50c                   ; 005aa715
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH                                ; 005aa71a
    FLD extended double ptr [ESP + 0xc] ; 005aa71c
    FXCH ST2                            ; 005aa720
    ADD ESP,0x2c                        ; 005aa722
    RET                                 ; 005aa725

