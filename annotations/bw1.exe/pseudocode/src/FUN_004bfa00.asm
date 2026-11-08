; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bfa00(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004bfa00
        ;   Label: FUN_004bfa00
    PUSH 0x3                            ; 004bfa05
    PUSH 0x61d824                       ; 004bfa07
    PUSH 0x4bfa30                       ; 004bfa0c
    PUSH 0x5e071a                       ; 004bfa11
    PUSH 0x1cc8088                      ; 004bfa16
    CALL FUN_0040c160                   ; 004bfa1b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004bfa20
    RET                                 ; 004bfa23

