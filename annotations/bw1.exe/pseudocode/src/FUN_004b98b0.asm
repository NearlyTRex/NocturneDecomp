; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b98b0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 004b98b0
        ;   Label: FUN_004b98b0
    PUSH 0x1                            ; 004b98b5
    PUSH 0x61d1b8                       ; 004b98b7
    PUSH 0x4b98e0                       ; 004b98bc
    PUSH 0x5df7fa                       ; 004b98c1
    PUSH 0x1cc41c4                      ; 004b98c6
    CALL FUN_0040c160                   ; 004b98cb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004b98d0
    RET                                 ; 004b98d3

