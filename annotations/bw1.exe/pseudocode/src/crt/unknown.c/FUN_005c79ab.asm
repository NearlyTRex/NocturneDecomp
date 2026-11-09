; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c79ab(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c79ab
        ;   Label: crt_unknown.c_FUN_005c79ab
    FXCH ST2                            ; 005c79af
    FSTP extended double ptr [ESP]      ; 005c79b1
    CALL crt_unknown.c_FUN_005c769c     ; 005c79b4
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST2                            ; 005c79b9
    ADD ESP,0x2c                        ; 005c79bb
    RET                                 ; 005c79be

