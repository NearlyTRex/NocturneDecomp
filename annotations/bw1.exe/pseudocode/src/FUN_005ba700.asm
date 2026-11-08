; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ba700(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 005ba700
        ;   Label: FUN_005ba700
    PUSH 0xb                            ; 005ba705
    PUSH 0x626100                       ; 005ba707
    PUSH 0x5baae0                       ; 005ba70c
    PUSH 0x5fa3c4                       ; 005ba711
    PUSH 0x2c9eaf8                      ; 005ba716
    CALL FUN_0040c160                   ; 005ba71b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 005ba720
    RET                                 ; 005ba723

