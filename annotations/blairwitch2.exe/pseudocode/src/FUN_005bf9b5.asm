; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf9b5(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005bf9b5
        ;   Label: FUN_005bf9b5
    FSTP extended double ptr [ESP + 0xc] ; 005bf9b8
    FSTP extended double ptr [ESP]      ; 005bf9bc
    CALL FUN_005bf3dc                   ; 005bf9bf
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    ADD ESP,0x2c                        ; 005bf9c4
    RET                                 ; 005bf9c7

