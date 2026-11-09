; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c795f(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FXCH ST3                            ; 005c795f
        ;   Label: crt_unknown.c_FUN_005c795f
    FSTP extended double ptr [ESP + 0xc] ; 005c7961
    FXCH ST2                            ; 005c7965
    FLD ST0                             ; 005c7967
    FSTP extended double ptr [ESP]      ; 005c7969
    FSTP extended double ptr [ESP + 0x20] ; 005c796c
    CALL crt_unknown.c_FUN_005c769c     ; 005c7970
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST2                            ; 005c7975
    FLD extended double ptr [ESP + 0x20] ; 005c7977
    ADD ESP,0x2c                        ; 005c797b
    RET                                 ; 005c797e

