; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa8d3(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa8d3
        ;   Label: crt_unknown.c_FUN_005aa8d3
    FXCH ST4                            ; 005aa8d7
    FLD ST0                             ; 005aa8d9
    FSTP extended double ptr [ESP]      ; 005aa8db
    FSTP extended double ptr [ESP + 0x20] ; 005aa8de
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa8e2
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST4                            ; 005aa8e7
    FLD extended double ptr [ESP + 0x20] ; 005aa8e9
    FXCH ST5                            ; 005aa8ed
    ADD ESP,0x2c                        ; 005aa8ef
    RET                                 ; 005aa8f2

