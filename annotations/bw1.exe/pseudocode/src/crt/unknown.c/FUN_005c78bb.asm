; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c78bb(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FXCH ST2                            ; 005c78bb
        ;   Label: crt_unknown.c_FUN_005c78bb
    FSTP extended double ptr [ESP + 0xc] ; 005c78bd
    FXCH                                ; 005c78c1
    FLD ST0                             ; 005c78c3
    FSTP extended double ptr [ESP]      ; 005c78c5
    FSTP extended double ptr [ESP + 0x20] ; 005c78c8
    CALL crt_unknown.c_FUN_005c769c     ; 005c78cc
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH                                ; 005c78d1
    FLD extended double ptr [ESP + 0x20] ; 005c78d3
    ADD ESP,0x2c                        ; 005c78d7
    RET                                 ; 005c78da

