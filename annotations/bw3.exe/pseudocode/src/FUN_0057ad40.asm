; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057ad40(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0057ad40
        ;   Label: FUN_0057ad40
    PUSH 0xc                            ; 0057ad45
    PUSH 0x6071dc                       ; 0057ad47
    PUSH 0x0                            ; 0057ad4c
    PUSH 0x5d780b                       ; 0057ad4e
    PUSH 0x2d0c118                      ; 0057ad53
    CALL FUN_0040c3a0                   ; 0057ad58
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0057ad5d
    RET                                 ; 0057ad60

