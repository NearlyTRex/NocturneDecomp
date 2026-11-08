; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3cd0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2668460                      ; 005a3cd0
        ;   Label: FUN_005a3cd0
    PUSH 0x1                            ; 005a3cd5
    PUSH 0x61eb40                       ; 005a3cd7
    PUSH 0x5a3d00                       ; 005a3cdc
    PUSH 0x5f0212                       ; 005a3ce1
    PUSH 0x266858c                      ; 005a3ce6
    CALL FUN_0040c450                   ; 005a3ceb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005a3cf0
    RET                                 ; 005a3cf3

