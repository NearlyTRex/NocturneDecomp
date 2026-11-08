; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045fdb0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 0045fdb0
        ;   Label: FUN_0045fdb0
    PUSH 0x2                            ; 0045fdb5
    PUSH 0x612274                       ; 0045fdb7
    PUSH 0x45fde0                       ; 0045fdbc
    PUSH 0x5d8ac0                       ; 0045fdc1
    PUSH 0x152d268                      ; 0045fdc6
    CALL FUN_0040c160                   ; 0045fdcb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 0045fdd0
    RET                                 ; 0045fdd3

