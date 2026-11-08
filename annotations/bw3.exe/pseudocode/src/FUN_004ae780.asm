; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ae780(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 004ae780
        ;   Label: FUN_004ae780
    PUSH 0x2                            ; 004ae785
    PUSH 0x5fe904                       ; 004ae787
    PUSH 0x4ae7b0                       ; 004ae78c
    PUSH 0x5c1c95                       ; 004ae791
    PUSH 0x1d1a924                      ; 004ae796
    CALL FUN_0040c3a0                   ; 004ae79b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004ae7a0
    RET                                 ; 004ae7a3

