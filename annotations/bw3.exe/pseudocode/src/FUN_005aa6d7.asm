; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa6d7(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa6d7
        ;   Label: FUN_005aa6d7
    FSTP extended double ptr [ESP]      ; 005aa6db
    CALL FUN_005aa50c                   ; 005aa6de
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    ADD ESP,0x2c                        ; 005aa6e3
    RET                                 ; 005aa6e6

