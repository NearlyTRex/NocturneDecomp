; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf547(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005bf547
        ;   Label: FUN_005bf547
    INT 0x6                             ; 005bf54a
    FSTP extended double ptr [ESP]      ; 005bf54c
        ;   Label: LAB_005bf54c
    FSTP extended double ptr [ESP + 0xc] ; 005bf54f
    CALL FUN_005bf3dc                   ; 005bf553
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FLD extended double ptr [ESP + 0xc] ; 005bf558
    FXCH                                ; 005bf55c
    ADD ESP,0x2c                        ; 005bf55e
    RET                                 ; 005bf561

