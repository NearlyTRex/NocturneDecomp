; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c78b6(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005c78b6
        ;   Label: FUN_005c78b6
    INT 0x6                             ; 005c78b9
    FXCH ST2                            ; 005c78bb
        ;   Label: LAB_005c78bb
    FSTP extended double ptr [ESP + 0xc] ; 005c78bd
    FXCH                                ; 005c78c1
    FLD ST0                             ; 005c78c3
    FSTP extended double ptr [ESP]      ; 005c78c5
    FSTP extended double ptr [ESP + 0x20] ; 005c78c8
    CALL FUN_005c769c                   ; 005c78cc
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH                                ; 005c78d1
    FLD extended double ptr [ESP + 0x20] ; 005c78d3
    ADD ESP,0x2c                        ; 005c78d7
    RET                                 ; 005c78da

