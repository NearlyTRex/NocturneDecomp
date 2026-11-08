; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aceb0(void)
;
;
; Called Functions:
;   FUN_005acecc
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005aceb0
        ;   Label: FUN_005aceb0
    CALL FUN_005acecc                   ; 005aceb2
        ;   XREF to: 005acecc (UNCONDITIONAL_CALL)  ; undefined FUN_005acecc()
    ADD ESP,0x4                         ; 005aceb7
    JMP 0x005a9988                      ; 005aceba
        ;   XREF to: 005a9988 (UNCONDITIONAL_JUMP)

