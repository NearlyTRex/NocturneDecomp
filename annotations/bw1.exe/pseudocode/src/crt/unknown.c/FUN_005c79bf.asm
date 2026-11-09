; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c79bf(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c79bf
        ;   Label: crt_unknown.c_FUN_005c79bf
    FXCH ST3                            ; 005c79c3
    FLD ST0                             ; 005c79c5
    FSTP extended double ptr [ESP]      ; 005c79c7
    FSTP extended double ptr [ESP + 0x20] ; 005c79ca
    CALL crt_unknown.c_FUN_005c769c     ; 005c79ce
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST3                            ; 005c79d3
    FLD extended double ptr [ESP + 0x20] ; 005c79d5
    FXCH ST4                            ; 005c79d9
    ADD ESP,0x2c                        ; 005c79db
    RET                                 ; 005c79de

