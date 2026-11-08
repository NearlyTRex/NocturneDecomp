; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00436650(void)
;
;
; Called Functions:
;   FUN_00436680
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00436650
        ;   Label: FUN_00436650
    PUSH 0x1                            ; 00436652
    PUSH 0x20                           ; 00436654
    PUSH 0x28                           ; 00436656
    PUSH 0x7c158c                       ; 00436658
    CALL FUN_00436680                   ; 0043665d
        ;   XREF to: 00436680 (UNCONDITIONAL_CALL)  ; undefined FUN_00436680()
    ADD ESP,0x14                        ; 00436662
    PUSH 0x609ec0                       ; 00436665
    CALL FUN_005b8d8c                   ; 0043666a
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0043666f
    RET                                 ; 00436672

