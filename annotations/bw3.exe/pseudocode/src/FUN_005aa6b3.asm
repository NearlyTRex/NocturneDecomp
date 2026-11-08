; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa6b3(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa6b3
        ;   Label: FUN_005aa6b3
    FSTP extended double ptr [ESP + 0xc] ; 005aa6b6
    CALL FUN_005aa50c                   ; 005aa6ba
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    ADD ESP,0x2c                        ; 005aa6bf
    RET                                 ; 005aa6c2

