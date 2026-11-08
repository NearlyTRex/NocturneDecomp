; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052a6c0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 0052a6c0
        ;   Label: FUN_0052a6c0
    PUSH 0x2                            ; 0052a6c5
    PUSH 0x61b550                       ; 0052a6c7
    PUSH 0x52a6f0                       ; 0052a6cc
    PUSH 0x5e5295                       ; 0052a6d1
    PUSH 0x1e6617c                      ; 0052a6d6
    CALL FUN_0040c450                   ; 0052a6db
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0052a6e0
    RET                                 ; 0052a6e3

