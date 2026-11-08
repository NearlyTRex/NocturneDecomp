; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eae70(void)
;
;
; Called Functions:
;   FUN_0040d420
;   FUN_00502350
;   FUN_005b7f5f
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 004eae70
        ;   Label: FUN_004eae70
    PUSH 0x8                            ; 004eae75
    PUSH 0x1d05580                      ; 004eae77
    CALL FUN_005b7f5f                   ; 004eae7c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 004eae81
    PUSH 0x617f68                       ; 004eae84
    CALL FUN_005b8d8c                   ; 004eae89
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004eae8e
    PUSH 0x1d05620                      ; 004eae91
    CALL FUN_00502350                   ; 004eae96
        ;   XREF to: 00502350 (UNCONDITIONAL_CALL)  ; undefined FUN_00502350()
    ADD ESP,0x4                         ; 004eae9b
    PUSH 0x617f78                       ; 004eae9e
    CALL FUN_005b8d8c                   ; 004eaea3
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004eaea8
    PUSH 0x1d060f0                      ; 004eaeab
    CALL FUN_0040d420                   ; 004eaeb0
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004eaeb5
    PUSH 0x617f88                       ; 004eaeb8
    CALL FUN_005b8d8c                   ; 004eaebd
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004eaec2
    PUSH 0x1d06104                      ; 004eaec5
    CALL FUN_0040d420                   ; 004eaeca
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004eaecf
    PUSH 0x617f98                       ; 004eaed2
    CALL FUN_005b8d8c                   ; 004eaed7
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004eaedc
    PUSH 0x1d06118                      ; 004eaedf
    CALL FUN_0040d420                   ; 004eaee4
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004eaee9
    PUSH 0x617fa8                       ; 004eaeec
    CALL FUN_005b8d8c                   ; 004eaef1
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004eaef6
    PUSH 0x1d0613c                      ; 004eaef9
    CALL FUN_0040d420                   ; 004eaefe
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004eaf03
    PUSH 0x617fb8                       ; 004eaf06
    CALL FUN_005b8d8c                   ; 004eaf0b
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004eaf10
    RET                                 ; 004eaf13

