; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf9a2(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005bf9a2
        ;   Label: crt_unknown.c_FUN_005bf9a2
    FSTP extended double ptr [ESP + 0xc] ; 005bf9a5
    FSTP extended double ptr [ESP]      ; 005bf9a9
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf9ac
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    ADD ESP,0x2c                        ; 005bf9b1
    RET                                 ; 005bf9b4

