; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf92f(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FXCH ST7                            ; 005bf92f
        ;   Label: crt_unknown.c_FUN_005bf92f
    FSTP extended double ptr [ESP + 0xc] ; 005bf931
    FXCH ST6                            ; 005bf935
    FLD ST0                             ; 005bf937
    FSTP extended double ptr [ESP]      ; 005bf939
    FSTP extended double ptr [ESP + 0x20] ; 005bf93c
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf940
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST6                            ; 005bf945
    FLD extended double ptr [ESP + 0x20] ; 005bf947
    ADD ESP,0x2c                        ; 005bf94b
    RET                                 ; 005bf94e

