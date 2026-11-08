; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ada50(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bc9b0                       ; 005ada50
        ;   Label: FUN_005ada50
    PUSH 0x1                            ; 005ada55
    PUSH 0x61ed0c                       ; 005ada57
    PUSH 0x5ada80                       ; 005ada5c
    PUSH 0x5f0f2b                       ; 005ada61
    PUSH 0x26689d4                      ; 005ada66
    CALL FUN_0040c450                   ; 005ada6b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005ada70
    RET                                 ; 005ada73

