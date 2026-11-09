; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf6ff(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf6ff
        ;   Label: crt_unknown.c_FUN_005bf6ff
    FXCH ST3                            ; 005bf703
    FLD ST0                             ; 005bf705
    FSTP extended double ptr [ESP]      ; 005bf707
    FSTP extended double ptr [ESP + 0x20] ; 005bf70a
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf70e
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST3                            ; 005bf713
    FLD extended double ptr [ESP + 0x20] ; 005bf715
    FXCH ST4                            ; 005bf719
    ADD ESP,0x2c                        ; 005bf71b
    RET                                 ; 005bf71e

