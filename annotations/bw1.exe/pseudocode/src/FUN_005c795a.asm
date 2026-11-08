; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c795a(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005c795a
        ;   Label: FUN_005c795a
    INT 0x6                             ; 005c795d
    FXCH ST3                            ; 005c795f
        ;   Label: LAB_005c795f
    FSTP extended double ptr [ESP + 0xc] ; 005c7961
    FXCH ST2                            ; 005c7965
    FLD ST0                             ; 005c7967
    FSTP extended double ptr [ESP]      ; 005c7969
    FSTP extended double ptr [ESP + 0x20] ; 005c796c
    CALL FUN_005c769c                   ; 005c7970
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST2                            ; 005c7975
    FLD extended double ptr [ESP + 0x20] ; 005c7977
    ADD ESP,0x2c                        ; 005c797b
    RET                                 ; 005c797e

