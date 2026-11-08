; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf92a(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005bf92a
        ;   Label: FUN_005bf92a
    INT 0x6                             ; 005bf92d
    FXCH ST7                            ; 005bf92f
        ;   Label: LAB_005bf92f
    FSTP extended double ptr [ESP + 0xc] ; 005bf931
    FXCH ST6                            ; 005bf935
    FLD ST0                             ; 005bf937
    FSTP extended double ptr [ESP]      ; 005bf939
    FSTP extended double ptr [ESP + 0x20] ; 005bf93c
    CALL FUN_005bf3dc                   ; 005bf940
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST6                            ; 005bf945
    FLD extended double ptr [ESP + 0x20] ; 005bf947
    ADD ESP,0x2c                        ; 005bf94b
    RET                                 ; 005bf94e

