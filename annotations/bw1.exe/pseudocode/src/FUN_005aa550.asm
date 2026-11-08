; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa550(void)
;
;
; Called Functions:
;   FUN_0040c160
;   FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH 0x5fb430                       ; 005aa550
        ;   Label: FUN_005aa550
    PUSH 0x64                           ; 005aa555
    PUSH 0x2c93018                      ; 005aa557
    CALL FUN_005c0357                   ; 005aa55c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 005aa561
    PUSH 0x5fe590                       ; 005aa564
    PUSH 0x64                           ; 005aa569
    PUSH 0x2c934c8                      ; 005aa56b
    CALL FUN_005c0357                   ; 005aa570
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 005aa575
    PUSH 0x7c2ff8                       ; 005aa578
    PUSH 0x6                            ; 005aa57d
    PUSH 0x625ff4                       ; 005aa57f
    PUSH 0x5aa5a0                       ; 005aa584
    PUSH 0x5f9272                       ; 005aa589
    PUSH 0x2c97348                      ; 005aa58e
    CALL FUN_0040c160                   ; 005aa593
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 005aa598
    RET                                 ; 005aa59b

