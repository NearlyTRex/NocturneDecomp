; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa78b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa78b
        ;   Label: crt_unknown.c_FUN_005aa78b
    FXCH ST2                            ; 005aa78f
    FLD ST0                             ; 005aa791
    FSTP extended double ptr [ESP]      ; 005aa793
    FSTP extended double ptr [ESP + 0x20] ; 005aa796
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa79a
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST2                            ; 005aa79f
    FLD extended double ptr [ESP + 0x20] ; 005aa7a1
    FXCH ST3                            ; 005aa7a5
    ADD ESP,0x2c                        ; 005aa7a7
    RET                                 ; 005aa7aa

