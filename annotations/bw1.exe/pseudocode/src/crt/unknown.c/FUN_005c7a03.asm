; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7a03(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FXCH ST4                            ; 005c7a03
        ;   Label: crt_unknown.c_FUN_005c7a03
    FSTP extended double ptr [ESP + 0xc] ; 005c7a05
    FXCH ST3                            ; 005c7a09
    FLD ST0                             ; 005c7a0b
    FSTP extended double ptr [ESP]      ; 005c7a0d
    FSTP extended double ptr [ESP + 0x20] ; 005c7a10
    CALL crt_unknown.c_FUN_005c769c     ; 005c7a14
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST3                            ; 005c7a19
    FLD extended double ptr [ESP + 0x20] ; 005c7a1b
    ADD ESP,0x2c                        ; 005c7a1f
    RET                                 ; 005c7a22

