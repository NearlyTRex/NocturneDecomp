; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa9bb(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FXCH ST6                            ; 005aa9bb
        ;   Label: crt_unknown.c_FUN_005aa9bb
    FSTP extended double ptr [ESP + 0xc] ; 005aa9bd
    FXCH ST5                            ; 005aa9c1
    FLD ST0                             ; 005aa9c3
    FSTP extended double ptr [ESP]      ; 005aa9c5
    FSTP extended double ptr [ESP + 0x20] ; 005aa9c8
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa9cc
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST5                            ; 005aa9d1
    FLD extended double ptr [ESP + 0x20] ; 005aa9d3
    ADD ESP,0x2c                        ; 005aa9d7
    RET                                 ; 005aa9da

