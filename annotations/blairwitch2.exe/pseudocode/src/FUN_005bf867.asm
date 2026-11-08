; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf867(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005bf867
        ;   Label: FUN_005bf867
    INT 0x6                             ; 005bf86a
    FSTP extended double ptr [ESP]      ; 005bf86c
        ;   Label: LAB_005bf86c
    FXCH ST5                            ; 005bf86f
    FSTP extended double ptr [ESP + 0xc] ; 005bf871
    CALL FUN_005bf3dc                   ; 005bf875
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST5                            ; 005bf87a
    FLD extended double ptr [ESP + 0xc] ; 005bf87c
    FXCH ST6                            ; 005bf880
    ADD ESP,0x2c                        ; 005bf882
    RET                                 ; 005bf885

