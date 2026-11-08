; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc660(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004cc660
        ;   Label: FUN_004cc660
    PUSH 0x1                            ; 004cc665
    PUSH 0x5fecf0                       ; 004cc667
    PUSH 0x4cc690                       ; 004cc66c
    PUSH 0x5c45f8                       ; 004cc671
    PUSH 0x1d22e08                      ; 004cc676
    CALL FUN_0040c3a0                   ; 004cc67b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004cc680
    RET                                 ; 004cc683

