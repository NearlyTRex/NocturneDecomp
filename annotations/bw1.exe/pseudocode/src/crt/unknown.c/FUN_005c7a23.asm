; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7a23(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c7a23
        ;   Label: crt_unknown.c_FUN_005c7a23
    FXCH ST3                            ; 005c7a26
    FSTP extended double ptr [ESP + 0xc] ; 005c7a28
    CALL crt_unknown.c_FUN_005c769c     ; 005c7a2c
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST3                            ; 005c7a31
    ADD ESP,0x2c                        ; 005c7a33
    RET                                 ; 005c7a36

