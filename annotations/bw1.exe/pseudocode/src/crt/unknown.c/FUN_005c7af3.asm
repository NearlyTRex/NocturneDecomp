; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7af3(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7af3
        ;   Label: crt_unknown.c_FUN_005c7af3
    FXCH ST4                            ; 005c7af7
    FSTP extended double ptr [ESP]      ; 005c7af9
    CALL crt_unknown.c_FUN_005c769c     ; 005c7afc
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST4                            ; 005c7b01
    ADD ESP,0x2c                        ; 005c7b03
    RET                                 ; 005c7b06

