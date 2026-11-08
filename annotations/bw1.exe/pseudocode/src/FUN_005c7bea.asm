; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7bea(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005c7bea
        ;   Label: FUN_005c7bea
    INT 0x6                             ; 005c7bed
    FXCH ST7                            ; 005c7bef
        ;   Label: LAB_005c7bef
    FSTP extended double ptr [ESP + 0xc] ; 005c7bf1
    FXCH ST6                            ; 005c7bf5
    FLD ST0                             ; 005c7bf7
    FSTP extended double ptr [ESP]      ; 005c7bf9
    FSTP extended double ptr [ESP + 0x20] ; 005c7bfc
    CALL FUN_005c769c                   ; 005c7c00
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST6                            ; 005c7c05
    FLD extended double ptr [ESP + 0x20] ; 005c7c07
    ADD ESP,0x2c                        ; 005c7c0b
    RET                                 ; 005c7c0e

