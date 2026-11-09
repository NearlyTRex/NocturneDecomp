; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aaabf(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005aab44 at 005aab62
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005aaabf
        ;   Label: crt_unknown.c_FUN_005aaabf
    FSTP extended double ptr [ESP]      ; 005aaac2
    FSTP extended double ptr [ESP + 0xc] ; 005aaac5
    CALL crt_unknown.c_FUN_005aa50c     ; 005aaac9
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    ADD ESP,0x2c                        ; 005aaace
    RET                                 ; 005aaad1

