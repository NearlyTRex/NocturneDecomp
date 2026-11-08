; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a5490(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00489670 at 0048dded
;
; Referenced Globals:
;   TerminatedCString s_CFieldNotes_turnToEntry_005d638d
;   undefined4 DAT_006138e0
;   undefined4 DAT_00616014
;   undefined4 DAT_01cab7f0
;   undefined4 DAT_01cab9f0
;   undefined4 DAT_01caf110
;
; Called Functions:
;   FUN_0047be40
;   FUN_004a27e0
;   FUN_004a2890
;   FUN_004a35e0
;   FUN_004a3740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5490
        ;   Label: FUN_004a5490
    PUSH ESI                            ; 004a5491
    PUSH EDI                            ; 004a5492
    PUSH EBP                            ; 004a5493
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a5494
    MOV EDX,dword ptr [0x01cab9f0]      ; 004a5498 | DAT_01cab9f0
    XOR EBP,EBP                         ; 004a549e
    XOR EBX,EBX                         ; 004a54a0
    TEST EDX,EDX                        ; 004a54a2
    JLE 0x004a5570                      ; 004a54a4
        ;   XREF to: 004a5570 (CONDITIONAL_JUMP)  ; LAB_004a5570
    MOV ESI,0x1cab9f4                   ; 004a54aa
    PUSH EDI                            ; 004a54af
        ;   Label: LAB_004a54af
    PUSH ESI                            ; 004a54b0
    CALL FUN_004a35e0                   ; 004a54b1
        ;   XREF to: 004a35e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a35e0()
    ADD ESP,0x8                         ; 004a54b6
    MOV EDX,EAX                         ; 004a54b9
    TEST EAX,EAX                        ; 004a54bb
    JZ 0x004a555b                       ; 004a54bd
        ;   XREF to: 004a555b (CONDITIONAL_JUMP)  ; LAB_004a555b
    TEST EBP,EBP                        ; 004a54c3
    JZ 0x004a54ca                       ; 004a54c5
        ;   XREF to: 004a54ca (CONDITIONAL_JUMP)  ; LAB_004a54ca
    MOV dword ptr [EBP],EBX             ; 004a54c7
    MOV EAX,EDX                         ; 004a54ca
        ;   Label: LAB_004a54ca
    MOV EDI,EAX                         ; 004a54cc
        ;   Label: LAB_004a54cc
    TEST EAX,EAX                        ; 004a54ce
    JZ 0x004a5577                       ; 004a54d0
        ;   XREF to: 004a5577 (CONDITIONAL_JUMP)  ; LAB_004a5577
    CMP dword ptr [0x00616014],0x0      ; 004a54d6 | DAT_00616014
    JZ 0x004a554b                       ; 004a54dd
        ;   XREF to: 004a554b (CONDITIONAL_JUMP)  ; LAB_004a554b
    PUSH 0x1b8                          ; 004a54df
    PUSH 0x1eb                          ; 004a54e4
    PUSH 0x40                           ; 004a54e9
    PUSH 0x60                           ; 004a54eb
    PUSH 0x1caf240                      ; 004a54ed
    CALL FUN_004a2890                   ; 004a54f2
        ;   XREF to: 004a2890 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2890()
    ADD ESP,0x14                        ; 004a54f7
    PUSH 0x1caf240                      ; 004a54fa
    XOR ESI,ESI                         ; 004a54ff
    CALL FUN_004a27e0                   ; 004a5501
        ;   XREF to: 004a27e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a27e0()
    MOV EBP,dword ptr [0x01cab9f0]      ; 004a5506 | DAT_01cab9f0
    XOR AH,AH                           ; 004a550c
    ADD ESP,0x4                         ; 004a550e
    MOV byte ptr [0x01cab7f0],AH        ; 004a5511 | DAT_01cab7f0
    TEST EBP,EBP                        ; 004a5517
    JLE 0x004a5543                      ; 004a5519
        ;   XREF to: 004a5543 (CONDITIONAL_JUMP)  ; LAB_004a5543
    MOV EBX,0x1cab9f4                   ; 004a551b
    PUSH 0x1caf240                      ; 004a5520
        ;   Label: LAB_004a5520
    PUSH EBX                            ; 004a5525
    CALL FUN_004a3740                   ; 004a5526
        ;   XREF to: 004a3740 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3740()
    ADD ESP,0x8                         ; 004a552b
    TEST EAX,EAX                        ; 004a552e
    JZ 0x004a554b                       ; 004a5530
        ;   XREF to: 004a554b (CONDITIONAL_JUMP)  ; LAB_004a554b
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a5532 | DAT_01cab9f0
    INC ESI                             ; 004a5538
    ADD EBX,0x2e4                       ; 004a5539
    CMP ESI,ECX                         ; 004a553f
    JL 0x004a5520                       ; 004a5541
        ;   XREF to: 004a5520 (CONDITIONAL_JUMP)  ; LAB_004a5520
    XOR EBX,EBX                         ; 004a5543
        ;   Label: LAB_004a5543
    MOV dword ptr [0x00616014],EBX      ; 004a5545 | DAT_00616014
    MOV EAX,dword ptr [EDI + 0x144]     ; 004a554b
        ;   Label: LAB_004a554b
    MOV [0x01caf110],EAX                ; 004a5551 | DAT_01caf110
    POP EBP                             ; 004a5556
    POP EDI                             ; 004a5557
    POP ESI                             ; 004a5558
    POP EBX                             ; 004a5559
    RET                                 ; 004a555a
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a555b | DAT_01cab9f0
        ;   Label: LAB_004a555b
    INC EBX                             ; 004a5561
    ADD ESI,0x2e4                       ; 004a5562
    CMP EBX,ECX                         ; 004a5568
    JL 0x004a54af                       ; 004a556a
        ;   XREF to: 004a54af (CONDITIONAL_JUMP)  ; LAB_004a54af
    XOR EAX,EAX                         ; 004a5570
        ;   Label: LAB_004a5570
    JMP 0x004a54cc                      ; 004a5572
        ;   XREF to: 004a54cc (UNCONDITIONAL_JUMP)  ; LAB_004a54cc
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a5577
        ;   Label: LAB_004a5577
    PUSH EAX                            ; 004a557b
    PUSH 0x5d638d                       ; 004a557c | = "CFieldNotes::turnToEntry - entry '%s'..."
    MOV EDX,dword ptr [0x006138e0]      ; 004a5581 | DAT_006138e0
    PUSH EDX                            ; 004a5587
    CALL FUN_0047be40                   ; 004a5588
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be40()
    ADD ESP,0xc                         ; 004a558d
    POP EBP                             ; 004a5590
    POP EDI                             ; 004a5591
    POP ESI                             ; 004a5592
    POP EBX                             ; 004a5593
    RET                                 ; 004a5594

