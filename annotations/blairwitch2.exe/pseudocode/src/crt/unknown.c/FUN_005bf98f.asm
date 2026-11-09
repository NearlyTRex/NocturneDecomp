; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf98f(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bfa14 at 005bfa32
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005bf98f
        ;   Label: crt_unknown.c_FUN_005bf98f
    FSTP extended double ptr [ESP]      ; 005bf992
    FSTP extended double ptr [ESP + 0xc] ; 005bf995
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf999
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    ADD ESP,0x2c                        ; 005bf99e
    RET                                 ; 005bf9a1

