; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00592da0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1d06ad8                      ; 00592da0
        ;   Label: FUN_00592da0
    PUSH 0x1                            ; 00592da5
    PUSH 0x625960                       ; 00592da7
    PUSH 0x592dd0                       ; 00592dac
    PUSH 0x5f73df                       ; 00592db1
    PUSH 0x2c83754                      ; 00592db6
    CALL FUN_0040c160                   ; 00592dbb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 00592dc0
    RET                                 ; 00592dc3

