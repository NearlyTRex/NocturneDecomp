; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7867(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7867
        ;   Label: crt_unknown.c_FUN_005c7867
    FSTP extended double ptr [ESP]      ; 005c786b
    CALL crt_unknown.c_FUN_005c769c     ; 005c786e
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    ADD ESP,0x2c                        ; 005c7873
    RET                                 ; 005c7876

