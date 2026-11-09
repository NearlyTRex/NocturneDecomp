; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7aa7(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FXCH ST5                            ; 005c7aa7
        ;   Label: crt_unknown.c_FUN_005c7aa7
    FSTP extended double ptr [ESP + 0xc] ; 005c7aa9
    FXCH ST4                            ; 005c7aad
    FLD ST0                             ; 005c7aaf
    FSTP extended double ptr [ESP]      ; 005c7ab1
    FSTP extended double ptr [ESP + 0x20] ; 005c7ab4
    CALL crt_unknown.c_FUN_005c769c     ; 005c7ab8
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST4                            ; 005c7abd
    FLD extended double ptr [ESP + 0x20] ; 005c7abf
    ADD ESP,0x2c                        ; 005c7ac3
    RET                                 ; 005c7ac6

