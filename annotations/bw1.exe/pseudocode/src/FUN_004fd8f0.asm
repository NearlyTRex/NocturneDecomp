; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd8f0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 004fd8f0
        ;   Label: FUN_004fd8f0
    PUSH 0x2                            ; 004fd8f5
    PUSH 0x61f2bc                       ; 004fd8f7
    PUSH 0x4fd920                       ; 004fd8fc
    PUSH 0x5e6bab                       ; 004fd901
    PUSH 0x1d1bce0                      ; 004fd906
    CALL FUN_0040c160                   ; 004fd90b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004fd910
    RET                                 ; 004fd913

