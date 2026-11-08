; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004614d0(int param_1)
;
;
; XREF[1]:
;   FUN_00461760 at 004617a0
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004615d0
;   FUN_004e4500
;   FUN_005b7790
;   FUN_005b98d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004614d0
        ;   Label: FUN_004614d0
    PUSH EDI                            ; 004614d1
    PUSH EBP                            ; 004614d2
    SUB ESP,0x100                       ; 004614d3
    MOV EBX,dword ptr [ESP + 0x110]     ; 004614d9
    PUSH EBX                            ; 004614e0
    CALL FUN_004615d0                   ; 004614e1
        ;   XREF to: 004615d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004615d0()
    MOV EDX,dword ptr [EBX + 0x20]      ; 004614e6
    ADD ESP,0x4                         ; 004614e9
    TEST EDX,EDX                        ; 004614ec
    JNZ 0x00461505                      ; 004614ee
        ;   XREF to: 00461505 (CONDITIONAL_JUMP)  ; LAB_00461505
    MOV EBP,dword ptr [EBX + 0x24]      ; 004614f0
        ;   Label: LAB_004614f0
    TEST EBP,EBP                        ; 004614f3
    JNZ 0x0046158c                      ; 004614f5
        ;   XREF to: 0046158c (CONDITIONAL_JUMP)  ; LAB_0046158c
    ADD ESP,0x100                       ; 004614fb
        ;   Label: LAB_004614fb
    POP EBP                             ; 00461501
    POP EDI                             ; 00461502
    POP EBX                             ; 00461503
    RET                                 ; 00461504
    PUSH 0xc                            ; 00461505
        ;   Label: LAB_00461505
    PUSH EDX                            ; 00461507
    CALL FUN_005b98d0                   ; 00461508
        ;   XREF to: 005b98d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b98d0()
    ADD ESP,0x8                         ; 0046150d
    MOV dword ptr [EBX + 0x2c],EAX      ; 00461510
    TEST EAX,EAX                        ; 00461513
    JNZ 0x0046154d                      ; 00461515
        ;   XREF to: 0046154d (CONDITIONAL_JUMP)  ; LAB_0046154d
    MOV EDI,dword ptr [EBX + 0x20]      ; 00461517
    PUSH EDI                            ; 0046151a
    PUSH 0x5d0cd4                       ; 0046151b
    LEA EAX,[ESP + 0x8]                 ; 00461520
    PUSH EAX                            ; 00461524
    CALL FUN_005b7790                   ; 00461525
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    MOV EAX,0x8b                        ; 0046152a
    ADD ESP,0xc                         ; 0046152f
    MOV [0x01d046a4],EAX                ; 00461532 | DAT_01d046a4
    MOV EAX,ESP                         ; 00461537
    MOV EBP,0x5d0d01                    ; 00461539
    PUSH EAX                            ; 0046153e
    MOV dword ptr [0x01d046a0],EBP      ; 0046153f | DAT_01d046a0
    CALL FUN_004e4500                   ; 00461545
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0046154a
    PUSH 0xc                            ; 0046154d
        ;   Label: LAB_0046154d
    MOV EDX,dword ptr [EBX + 0x20]      ; 0046154f
    PUSH EDX                            ; 00461552
    CALL FUN_005b98d0                   ; 00461553
        ;   XREF to: 005b98d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b98d0()
    ADD ESP,0x8                         ; 00461558
    MOV dword ptr [EBX + 0x30],EAX      ; 0046155b
    TEST EAX,EAX                        ; 0046155e
    JNZ 0x004614f0                      ; 00461560
        ;   XREF to: 004614f0 (CONDITIONAL_JUMP)  ; LAB_004614f0
    PUSH ESI                            ; 00461562
    MOV ESI,0x5d0d13                    ; 00461563
    MOV EDI,0x91                        ; 00461568
    PUSH 0x5d0d25                       ; 0046156d
    MOV dword ptr [0x01d046a0],ESI      ; 00461572 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00461578 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0046157e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00461583
    POP ESI                             ; 00461586
    JMP 0x004614f0                      ; 00461587
        ;   XREF to: 004614f0 (UNCONDITIONAL_JUMP)  ; LAB_004614f0
    PUSH 0x20                           ; 0046158c
        ;   Label: LAB_0046158c
    PUSH EBP                            ; 0046158e
    CALL FUN_005b98d0                   ; 0046158f
        ;   XREF to: 005b98d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b98d0()
    ADD ESP,0x8                         ; 00461594
    MOV dword ptr [EBX + 0x34],EAX      ; 00461597
    TEST EAX,EAX                        ; 0046159a
    JNZ 0x004614fb                      ; 0046159c
        ;   XREF to: 004614fb (CONDITIONAL_JUMP)  ; LAB_004614fb
    MOV ECX,0x5d0d4f                    ; 004615a2
    MOV EBX,0x99                        ; 004615a7
    PUSH 0x5d0d61                       ; 004615ac
    MOV dword ptr [0x01d046a0],ECX      ; 004615b1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 004615b7 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004615bd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004615c2
    ADD ESP,0x100                       ; 004615c5
    POP EBP                             ; 004615cb
    POP EDI                             ; 004615cc
    POP EBX                             ; 004615cd
    RET                                 ; 004615ce

