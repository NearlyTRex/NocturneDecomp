; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aaae5(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005aaae5
        ;   Label: FUN_005aaae5
    FSTP extended double ptr [ESP + 0xc] ; 005aaae8
    FSTP extended double ptr [ESP]      ; 005aaaec
    CALL FUN_005aa50c                   ; 005aaaef
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    ADD ESP,0x2c                        ; 005aaaf4
    RET                                 ; 005aaaf7

