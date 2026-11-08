; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa726(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aa726
        ;   Label: FUN_005aa726
    INT 0x6                             ; 005aa729
    FXCH ST2                            ; 005aa72b
        ;   Label: LAB_005aa72b
    FSTP extended double ptr [ESP + 0xc] ; 005aa72d
    FXCH                                ; 005aa731
    FLD ST0                             ; 005aa733
    FSTP extended double ptr [ESP]      ; 005aa735
    FSTP extended double ptr [ESP + 0x20] ; 005aa738
    CALL FUN_005aa50c                   ; 005aa73c
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH                                ; 005aa741
    FLD extended double ptr [ESP + 0x20] ; 005aa743
    ADD ESP,0x2c                        ; 005aa747
    RET                                 ; 005aa74a

