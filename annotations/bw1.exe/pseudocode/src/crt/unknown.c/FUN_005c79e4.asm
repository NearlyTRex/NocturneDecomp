; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c79e4(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c79e4
        ;   Label: crt_unknown.c_FUN_005c79e4
    FXCH ST3                            ; 005c79e7
    FSTP extended double ptr [ESP + 0xc] ; 005c79e9
    CALL crt_unknown.c_FUN_005c769c     ; 005c79ed
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST3                            ; 005c79f2
    FLD extended double ptr [ESP + 0xc] ; 005c79f4
    FXCH ST4                            ; 005c79f8
    ADD ESP,0x2c                        ; 005c79fa
    RET                                 ; 005c79fd

