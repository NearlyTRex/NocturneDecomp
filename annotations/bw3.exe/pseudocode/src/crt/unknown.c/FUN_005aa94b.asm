; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa94b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa94b
        ;   Label: crt_unknown.c_FUN_005aa94b
    FXCH ST4                            ; 005aa94f
    FSTP extended double ptr [ESP]      ; 005aa951
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa954
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST4                            ; 005aa959
    FLD extended double ptr [ESP + 0xc] ; 005aa95b
    ADD ESP,0x2c                        ; 005aa95f
    RET                                 ; 005aa962

