; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d5370(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 004d5370
        ;   Label: FUN_004d5370
    PUSH 0x1                            ; 004d5375
    PUSH 0x600020                       ; 004d5377
    PUSH 0x4d5400                       ; 004d537c
    PUSH 0x5c5231                       ; 004d5381
    PUSH 0x1d5bb1c                      ; 004d5386
    CALL FUN_0040c3a0                   ; 004d538b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004d5390
    PUSH 0x1d5bb1c                      ; 004d5393
    PUSH 0x1                            ; 004d5398
    PUSH 0x600024                       ; 004d539a
    PUSH 0x4d62e0                       ; 004d539f
    PUSH 0x5c523b                       ; 004d53a4
    PUSH 0x1d5bb58                      ; 004d53a9
    CALL FUN_0040c3a0                   ; 004d53ae
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004d53b3
    PUSH 0x1d5bb1c                      ; 004d53b6
    PUSH 0x1                            ; 004d53bb
    PUSH 0x600028                       ; 004d53bd
    PUSH 0x4d6360                       ; 004d53c2
    PUSH 0x5c5249                       ; 004d53c7
    PUSH 0x1d5bb94                      ; 004d53cc
    CALL FUN_0040c3a0                   ; 004d53d1
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004d53d6
    PUSH 0x1d5bb1c                      ; 004d53d9
    PUSH 0x1                            ; 004d53de
    PUSH 0x60002c                       ; 004d53e0
    PUSH 0x4d63e0                       ; 004d53e5
    PUSH 0x5c5257                       ; 004d53ea
    PUSH 0x1d5bbd0                      ; 004d53ef
    CALL FUN_0040c3a0                   ; 004d53f4
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004d53f9
    RET                                 ; 004d53fc

