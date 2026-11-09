; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf88b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FXCH ST6                            ; 005bf88b
        ;   Label: crt_unknown.c_FUN_005bf88b
    FSTP extended double ptr [ESP + 0xc] ; 005bf88d
    FXCH ST5                            ; 005bf891
    FLD ST0                             ; 005bf893
    FSTP extended double ptr [ESP]      ; 005bf895
    FSTP extended double ptr [ESP + 0x20] ; 005bf898
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf89c
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST5                            ; 005bf8a1
    FLD extended double ptr [ESP + 0x20] ; 005bf8a3
    ADD ESP,0x2c                        ; 005bf8a7
    RET                                 ; 005bf8aa

