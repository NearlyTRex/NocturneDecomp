; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa803(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa803
        ;   Label: crt_unknown.c_FUN_005aa803
    FXCH ST2                            ; 005aa807
    FSTP extended double ptr [ESP]      ; 005aa809
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa80c
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST2                            ; 005aa811
    FLD extended double ptr [ESP + 0xc] ; 005aa813
    ADD ESP,0x2c                        ; 005aa817
    RET                                 ; 005aa81a

