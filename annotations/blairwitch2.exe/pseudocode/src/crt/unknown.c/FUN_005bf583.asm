; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf583(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf583
        ;   Label: crt_unknown.c_FUN_005bf583
    FSTP extended double ptr [ESP + 0xc] ; 005bf586
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf58a
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    ADD ESP,0x2c                        ; 005bf58f
    RET                                 ; 005bf592

