; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd5f0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 004fd5f0
        ;   Label: FUN_004fd5f0
    PUSH 0x7                            ; 004fd5f5
    PUSH 0x6182e4                       ; 004fd5f7
    PUSH 0x4fd7e0                       ; 004fd5fc
    PUSH 0x5debdd                       ; 004fd601
    PUSH 0x1d1c740                      ; 004fd606
    CALL FUN_0040c450                   ; 004fd60b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004fd610
    RET                                 ; 004fd613

