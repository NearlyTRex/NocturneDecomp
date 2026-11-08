; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad360(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bc9b0                       ; 005ad360
        ;   Label: FUN_005ad360
    PUSH 0x1                            ; 005ad365
    PUSH 0x61ecf4                       ; 005ad367
    PUSH 0x5ad390                       ; 005ad36c
    PUSH 0x5f0ed3                       ; 005ad371
    PUSH 0x2668998                      ; 005ad376
    CALL FUN_0040c450                   ; 005ad37b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005ad380
    RET                                 ; 005ad383

