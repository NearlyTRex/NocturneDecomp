; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0053a3d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_00421670
;   FUN_004688a0
;   FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a3d0
        ;   Label: FUN_0053a3d0
    PUSH ESI                            ; 0053a3d1
    PUSH EDI                            ; 0053a3d2
    PUSH EBP                            ; 0053a3d3
    SUB ESP,0x60                        ; 0053a3d4
    MOV EBX,dword ptr [ESP + 0x74]      ; 0053a3d7
    MOV EDX,dword ptr [0x00612560]      ; 0053a3db | DAT_00612560
    PUSH EDX                            ; 0053a3e1 | DAT_01bc120c
    CALL FUN_00483e60                   ; 0053a3e2
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 0053a3e7
    TEST EAX,EAX                        ; 0053a3ea
    JZ 0x0053a3fb                       ; 0053a3ec
        ;   XREF to: 0053a3fb (CONDITIONAL_JUMP)  ; LAB_0053a3fb
    CMP dword ptr [EBX + 0x518],0x0     ; 0053a3ee
    JZ 0x0053a4da                       ; 0053a3f5
        ;   XREF to: 0053a4da (CONDITIONAL_JUMP)  ; LAB_0053a4da
    CMP dword ptr [EBX + 0x4c0],0x2     ; 0053a3fb
        ;   Label: LAB_0053a3fb
    JG 0x0053a4de                       ; 0053a402
        ;   XREF to: 0053a4de (CONDITIONAL_JUMP)  ; LAB_0053a4de
    CMP dword ptr [EBX + 0x4c8],0x0     ; 0053a408
        ;   Label: LAB_0053a408
    JZ 0x0053a441                       ; 0053a40f
        ;   XREF to: 0053a441 (CONDITIONAL_JUMP)  ; LAB_0053a441
    MOV EAX,dword ptr [EBX + 0x2d4]     ; 0053a411
    CMP EAX,0x3                         ; 0053a417
    JZ 0x0053a441                       ; 0053a41a
        ;   XREF to: 0053a441 (CONDITIONAL_JUMP)  ; LAB_0053a441
    CMP EAX,0x4                         ; 0053a41c
    JZ 0x0053a441                       ; 0053a41f
        ;   XREF to: 0053a441 (CONDITIONAL_JUMP)  ; LAB_0053a441
    CMP dword ptr [EBX + 0x724],0x0     ; 0053a421
    JZ 0x0053a441                       ; 0053a428
        ;   XREF to: 0053a441 (CONDITIONAL_JUMP)  ; LAB_0053a441
    MOV ESI,dword ptr [0x00612560]      ; 0053a42a | DAT_00612560
    PUSH ESI                            ; 0053a430 | DAT_01bc120c
    CALL FUN_00483e60                   ; 0053a431
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 0053a436
    TEST EAX,EAX                        ; 0053a439
    JZ 0x0053a4d2                       ; 0053a43b
        ;   XREF to: 0053a4d2 (CONDITIONAL_JUMP)  ; LAB_0053a4d2
    PUSH EBX                            ; 0053a441
        ;   Label: LAB_0053a441
    CALL FUN_004087b0                   ; 0053a442
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 0053a447
    PUSH 0x0                            ; 0053a44a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053a44c
    PUSH EBX                            ; 0053a452
    LEA ESI,[ESP + 0x8]                 ; 0053a453
    LEA EDI,[ESP + 0x20]                ; 0053a457
    CALL dword ptr [EAX + 0x1c]         ; 0053a45b
    MOV ECX,0x6                         ; 0053a45e
    ADD ESP,0x4                         ; 0053a463
    LEA EAX,[ESP + 0x1c]                ; 0053a466
    LEA ESI,[ESP + 0x4]                 ; 0053a46a
    PUSH EAX                            ; 0053a46e
    MOVSD.REP ES:EDI,ESI                ; 0053a46f
    CALL FUN_004207b0                   ; 0053a471
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 0053a476
    MOV EBP,EAX                         ; 0053a479
    TEST EAX,EAX                        ; 0053a47b
    JZ 0x0053a4c7                       ; 0053a47d
        ;   XREF to: 0053a4c7 (CONDITIONAL_JUMP)  ; LAB_0053a4c7
    CMP dword ptr [EBX + 0x50c],0x0     ; 0053a47f
    JZ 0x0053a4f7                       ; 0053a486
        ;   XREF to: 0053a4f7 (CONDITIONAL_JUMP)  ; LAB_0053a4f7
    MOV EAX,[0x00612560]                ; 0053a488 | DAT_00612560
    PUSH EAX                            ; 0053a48d | DAT_01bc120c
    CALL FUN_00483e60                   ; 0053a48e
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 0053a493
    TEST EAX,EAX                        ; 0053a496
    JZ 0x0053a4f7                       ; 0053a498
        ;   XREF to: 0053a4f7 (CONDITIONAL_JUMP)  ; LAB_0053a4f7
    PUSH EBX                            ; 0053a49a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053a49b
    LEA ESI,[ESP + 0x34]                ; 0053a4a1
    LEA EDI,[ESP + 0x4c]                ; 0053a4a5
    CALL dword ptr [EAX + 0x1c]         ; 0053a4a9
    MOV ECX,0x6                         ; 0053a4ac
    ADD ESP,0x4                         ; 0053a4b1
    LEA EAX,[ESP + 0x48]                ; 0053a4b4
    LEA ESI,[ESP + 0x30]                ; 0053a4b8
    PUSH EAX                            ; 0053a4bc
    MOVSD.REP ES:EDI,ESI                ; 0053a4bd
    CALL FUN_00421670                   ; 0053a4bf
        ;   XREF to: 00421670 (UNCONDITIONAL_CALL)  ; undefined FUN_00421670()
    ADD ESP,0x4                         ; 0053a4c4
    PUSH EBX                            ; 0053a4c7
        ;   Label: LAB_0053a4c7
    CALL FUN_004087f0                   ; 0053a4c8
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0053a4cd
    MOV EAX,EBP                         ; 0053a4d0
    ADD ESP,0x60                        ; 0053a4d2
        ;   Label: LAB_0053a4d2
    POP EBP                             ; 0053a4d5
    POP EDI                             ; 0053a4d6
    POP ESI                             ; 0053a4d7
    POP EBX                             ; 0053a4d8
    RET                                 ; 0053a4d9
    XOR EAX,EAX                         ; 0053a4da
        ;   Label: LAB_0053a4da
    JMP 0x0053a4d2                      ; 0053a4dc
        ;   XREF to: 0053a4d2 (UNCONDITIONAL_JUMP)  ; LAB_0053a4d2
    MOV EDI,dword ptr [0x00612560]      ; 0053a4de | DAT_00612560
        ;   Label: LAB_0053a4de
    PUSH EDI                            ; 0053a4e4 | DAT_01bc120c
    CALL FUN_00483e60                   ; 0053a4e5
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 0053a4ea
    TEST EAX,EAX                        ; 0053a4ed
    JNZ 0x0053a408                      ; 0053a4ef
        ;   XREF to: 0053a408 (CONDITIONAL_JUMP)  ; LAB_0053a408
    JMP 0x0053a4d2                      ; 0053a4f5
        ;   XREF to: 0053a4d2 (UNCONDITIONAL_JUMP)  ; LAB_0053a4d2
    PUSH -0x1                           ; 0053a4f7
        ;   Label: LAB_0053a4f7
    LEA EAX,[EBX + 0x158]               ; 0053a4f9
    PUSH 0x0                            ; 0053a4ff
    PUSH EAX                            ; 0053a501
    CALL FUN_004688a0                   ; 0053a502
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 0053a507
    PUSH EBX                            ; 0053a50a
    CALL FUN_004087f0                   ; 0053a50b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0053a510
    MOV EAX,EBP                         ; 0053a513
    ADD ESP,0x60                        ; 0053a515
    POP EBP                             ; 0053a518
    POP EDI                             ; 0053a519
    POP ESI                             ; 0053a51a
    POP EBX                             ; 0053a51b
    RET                                 ; 0053a51c

