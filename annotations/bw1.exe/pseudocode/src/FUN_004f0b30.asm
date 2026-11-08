; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f0b30(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1d06ad8                      ; 004f0b30
        ;   Label: FUN_004f0b30
    PUSH 0x1                            ; 004f0b35
    PUSH 0x61efd8                       ; 004f0b37
    PUSH 0x4f0b60                       ; 004f0b3c
    PUSH 0x5e524f                       ; 004f0b41
    PUSH 0x1d06cbc                      ; 004f0b46
    CALL FUN_0040c160                   ; 004f0b4b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004f0b50
    RET                                 ; 004f0b53

