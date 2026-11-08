; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e4490(void)
;
;
; Called Functions:
;   FUN_0040d420
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1d046ac                      ; 004e4490
        ;   Label: FUN_004e4490
    CALL FUN_0040d420                   ; 004e4495
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004e449a
    PUSH 0x617e7e                       ; 004e449d
    CALL FUN_005b8d8c                   ; 004e44a2
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004e44a7
    PUSH 0x1d046c0                      ; 004e44aa
    CALL FUN_0040d420                   ; 004e44af
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004e44b4
    PUSH 0x617e8e                       ; 004e44b7
    CALL FUN_005b8d8c                   ; 004e44bc
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004e44c1
    PUSH 0x1d046d4                      ; 004e44c4
    CALL FUN_0040d420                   ; 004e44c9
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004e44ce
    PUSH 0x617e9e                       ; 004e44d1
    CALL FUN_005b8d8c                   ; 004e44d6
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004e44db
    PUSH 0x1d046e8                      ; 004e44de
    CALL FUN_0040d420                   ; 004e44e3
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004e44e8
    PUSH 0x617eae                       ; 004e44eb
    CALL FUN_005b8d8c                   ; 004e44f0
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004e44f5
    RET                                 ; 004e44f8

