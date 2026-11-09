; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7c62(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005c7c62
        ;   Label: crt_unknown.c_FUN_005c7c62
    FSTP extended double ptr [ESP + 0xc] ; 005c7c65
    FSTP extended double ptr [ESP]      ; 005c7c69
    CALL crt_unknown.c_FUN_005c769c     ; 005c7c6c
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    ADD ESP,0x2c                        ; 005c7c71
    RET                                 ; 005c7c74

