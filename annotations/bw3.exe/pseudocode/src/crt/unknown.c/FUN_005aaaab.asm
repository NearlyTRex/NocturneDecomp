; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aaaab(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aaaab
        ;   Label: crt_unknown.c_FUN_005aaaab
    FXCH ST6                            ; 005aaaaf
    FSTP extended double ptr [ESP]      ; 005aaab1
    CALL crt_unknown.c_FUN_005aa50c     ; 005aaab4
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST6                            ; 005aaab9
    ADD ESP,0x2c                        ; 005aaabb
    RET                                 ; 005aaabe

