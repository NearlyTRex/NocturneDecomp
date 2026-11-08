; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aaad2(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005aaad2
        ;   Label: FUN_005aaad2
    FSTP extended double ptr [ESP + 0xc] ; 005aaad5
    FSTP extended double ptr [ESP]      ; 005aaad9
    CALL FUN_005aa50c                   ; 005aaadc
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    ADD ESP,0x2c                        ; 005aaae1
    RET                                 ; 005aaae4

