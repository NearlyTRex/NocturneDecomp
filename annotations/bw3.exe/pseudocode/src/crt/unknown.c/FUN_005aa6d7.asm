; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa6d7(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa6d7
        ;   Label: crt_unknown.c_FUN_005aa6d7
    FSTP extended double ptr [ESP]      ; 005aa6db
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa6de
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    ADD ESP,0x2c                        ; 005aa6e3
    RET                                 ; 005aa6e6

