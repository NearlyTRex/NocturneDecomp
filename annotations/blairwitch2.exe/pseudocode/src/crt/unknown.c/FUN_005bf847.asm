; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf847(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf847
        ;   Label: crt_unknown.c_FUN_005bf847
    FXCH ST5                            ; 005bf84b
    FLD ST0                             ; 005bf84d
    FSTP extended double ptr [ESP]      ; 005bf84f
    FSTP extended double ptr [ESP + 0x20] ; 005bf852
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf856
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST5                            ; 005bf85b
    FLD extended double ptr [ESP + 0x20] ; 005bf85d
    FXCH ST6                            ; 005bf861
    ADD ESP,0x2c                        ; 005bf863
    RET                                 ; 005bf866

