; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056df40(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0056df40
        ;   Label: FUN_0056df40
    PUSH 0xd                            ; 0056df45
    PUSH 0x606964                       ; 0056df47
    PUSH 0x56df70                       ; 0056df4c
    PUSH 0x5d65e3                       ; 0056df51
    PUSH 0x2cfd85c                      ; 0056df56
    CALL FUN_0040c3a0                   ; 0056df5b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0056df60
    RET                                 ; 0056df63

