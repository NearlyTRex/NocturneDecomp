; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf71f(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005bf71f
        ;   Label: FUN_005bf71f
    INT 0x6                             ; 005bf722
    FSTP extended double ptr [ESP]      ; 005bf724
        ;   Label: LAB_005bf724
    FXCH ST3                            ; 005bf727
    FSTP extended double ptr [ESP + 0xc] ; 005bf729
    CALL FUN_005bf3dc                   ; 005bf72d
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST3                            ; 005bf732
    FLD extended double ptr [ESP + 0xc] ; 005bf734
    FXCH ST4                            ; 005bf738
    ADD ESP,0x2c                        ; 005bf73a
    RET                                 ; 005bf73d

