; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a5e10(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x26685c8                      ; 005a5e10
        ;   Label: FUN_005a5e10
    PUSH 0x1                            ; 005a5e15
    PUSH 0x61eb98                       ; 005a5e17
    PUSH 0x5a5e40                       ; 005a5e1c
    PUSH 0x5f0626                       ; 005a5e21
    PUSH 0x266867c                      ; 005a5e26
    CALL FUN_0040c450                   ; 005a5e2b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005a5e30
    RET                                 ; 005a5e33

