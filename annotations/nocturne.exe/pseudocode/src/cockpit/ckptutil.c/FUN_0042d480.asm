; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042d480(char *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_0042d3f0 at 0042d404
;
; Referenced Globals:
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00456a60
;   FUN_004c8440
;   FUN_00563380
;   FUN_005636d0
;   FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d480
        ;   Label: FUN_0042d480
    PUSH ESI                            ; 0042d481
    PUSH EDI                            ; 0042d482
    SUB ESP,0xa0                        ; 0042d483
    MOV ESI,dword ptr [ESP + 0xb0]      ; 0042d489
    MOV EBX,dword ptr [ESP + 0xb4]      ; 0042d490
    MOV EDI,ESP                         ; 0042d497
    MOV DL,0x2e                         ; 0042d499
    PUSH EDI                            ; 0042d49b
    MOV AL,byte ptr [ESI]               ; 0042d49c
        ;   Label: LAB_0042d49c
    MOV byte ptr [EDI],AL               ; 0042d49e
    CMP AL,0x0                          ; 0042d4a0
    JZ 0x0042d4b4                       ; 0042d4a2
        ;   XREF to: 0042d4b4 (CONDITIONAL_JUMP)  ; LAB_0042d4b4
    MOV AL,byte ptr [ESI + 0x1]         ; 0042d4a4
    ADD ESI,0x2                         ; 0042d4a7
    MOV byte ptr [EDI + 0x1],AL         ; 0042d4aa
    ADD EDI,0x2                         ; 0042d4ad
    CMP AL,0x0                          ; 0042d4b0
    JNZ 0x0042d49c                      ; 0042d4b2
        ;   XREF to: 0042d49c (CONDITIONAL_JUMP)  ; LAB_0042d49c
    POP EDI                             ; 0042d4b4
        ;   Label: LAB_0042d4b4
    MOV ESI,ESP                         ; 0042d4b5
    MOV AL,byte ptr [ESI]               ; 0042d4b7
        ;   Label: LAB_0042d4b7
    CMP AL,DL                           ; 0042d4b9
    JZ 0x0042d4cf                       ; 0042d4bb
        ;   XREF to: 0042d4cf (CONDITIONAL_JUMP)  ; LAB_0042d4cf
    CMP AL,0x0                          ; 0042d4bd
    JZ 0x0042d4cd                       ; 0042d4bf
        ;   XREF to: 0042d4cd (CONDITIONAL_JUMP)  ; LAB_0042d4cd
    INC ESI                             ; 0042d4c1
    MOV AL,byte ptr [ESI]               ; 0042d4c2
    CMP AL,DL                           ; 0042d4c4
    JZ 0x0042d4cf                       ; 0042d4c6
        ;   XREF to: 0042d4cf (CONDITIONAL_JUMP)  ; LAB_0042d4cf
    INC ESI                             ; 0042d4c8
    CMP AL,0x0                          ; 0042d4c9
    JNZ 0x0042d4b7                      ; 0042d4cb
        ;   XREF to: 0042d4b7 (CONDITIONAL_JUMP)  ; LAB_0042d4b7
    SUB ESI,ESI                         ; 0042d4cd
        ;   Label: LAB_0042d4cd
    MOV EDI,ESI                         ; 0042d4cf
        ;   Label: LAB_0042d4cf
    TEST ESI,ESI                        ; 0042d4d1
    JNZ 0x0042d4f3                      ; 0042d4d3
        ;   XREF to: 0042d4f3 (CONDITIONAL_JUMP)  ; LAB_0042d4f3
    MOV ESI,ESP                         ; 0042d4d5
    XOR DL,DL                           ; 0042d4d7
    MOV AL,byte ptr [ESI]               ; 0042d4d9
        ;   Label: LAB_0042d4d9
    CMP AL,DL                           ; 0042d4db
    JZ 0x0042d4f1                       ; 0042d4dd
        ;   XREF to: 0042d4f1 (CONDITIONAL_JUMP)  ; LAB_0042d4f1
    CMP AL,0x0                          ; 0042d4df
    JZ 0x0042d4ef                       ; 0042d4e1
        ;   XREF to: 0042d4ef (CONDITIONAL_JUMP)  ; LAB_0042d4ef
    INC ESI                             ; 0042d4e3
    MOV AL,byte ptr [ESI]               ; 0042d4e4
    CMP AL,DL                           ; 0042d4e6
    JZ 0x0042d4f1                       ; 0042d4e8
        ;   XREF to: 0042d4f1 (CONDITIONAL_JUMP)  ; LAB_0042d4f1
    INC ESI                             ; 0042d4ea
    CMP AL,0x0                          ; 0042d4eb
    JNZ 0x0042d4d9                      ; 0042d4ed
        ;   XREF to: 0042d4d9 (CONDITIONAL_JUMP)  ; LAB_0042d4d9
    SUB ESI,ESI                         ; 0042d4ef
        ;   Label: LAB_0042d4ef
    MOV EDI,ESI                         ; 0042d4f1
        ;   Label: LAB_0042d4f1
    MOV ESI,0x57a6e2                    ; 0042d4f3
        ;   Label: LAB_0042d4f3
    PUSH EDI                            ; 0042d4f8
    MOV AL,byte ptr [ESI]               ; 0042d4f9
        ;   Label: LAB_0042d4f9
    MOV byte ptr [EDI],AL               ; 0042d4fb
    CMP AL,0x0                          ; 0042d4fd
    JZ 0x0042d511                       ; 0042d4ff
        ;   XREF to: 0042d511 (CONDITIONAL_JUMP)  ; LAB_0042d511
    MOV AL,byte ptr [ESI + 0x1]         ; 0042d501
    ADD ESI,0x2                         ; 0042d504
    MOV byte ptr [EDI + 0x1],AL         ; 0042d507
    ADD EDI,0x2                         ; 0042d50a
    CMP AL,0x0                          ; 0042d50d
    JNZ 0x0042d4f9                      ; 0042d50f
        ;   XREF to: 0042d4f9 (CONDITIONAL_JUMP)  ; LAB_0042d4f9
    POP EDI                             ; 0042d511
        ;   Label: LAB_0042d511
    PUSH 0x57a6e7                       ; 0042d512
    LEA EAX,[ESP + 0x4]                 ; 0042d517
    PUSH EAX                            ; 0042d51b
    PUSH 0x57a6ea                       ; 0042d51c
    CALL FUN_00456a60                   ; 0042d521
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456a60()
    ADD ESP,0xc                         ; 0042d526
    MOV ESI,EAX                         ; 0042d529
    TEST EAX,EAX                        ; 0042d52b
    JZ 0x0042d590                       ; 0042d52d
        ;   XREF to: 0042d590 (CONDITIONAL_JUMP)  ; LAB_0042d590
    PUSH EAX                            ; 0042d52f
    PUSH 0x3                            ; 0042d530
    PUSH 0x100                          ; 0042d532
    PUSH EBX                            ; 0042d537
    CALL FUN_005636d0                   ; 0042d538
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 0042d53d
    CMP EAX,0x3                         ; 0042d540
    JZ 0x0042d57d                       ; 0042d543
        ;   XREF to: 0042d57d (CONDITIONAL_JUMP)  ; LAB_0042d57d
    MOV EAX,ESP                         ; 0042d545
    PUSH EAX                            ; 0042d547
    PUSH 0x57a6ee                       ; 0042d548
    LEA EAX,[ESP + 0x58]                ; 0042d54d
    PUSH EAX                            ; 0042d551
    CALL FUN_00563c90                   ; 0042d552
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    MOV EDX,0x57a700                    ; 0042d557
    ADD ESP,0xc                         ; 0042d55c
    LEA EAX,[ESP + 0x50]                ; 0042d55f
    MOV ECX,0x135                       ; 0042d563
    PUSH EAX                            ; 0042d568
    MOV dword ptr [0x01cc4800],EDX      ; 0042d569 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0042d56f | DAT_01cc4804
    CALL FUN_004c8440                   ; 0042d575
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0042d57a
    PUSH ESI                            ; 0042d57d
        ;   Label: LAB_0042d57d
    CALL FUN_00563380                   ; 0042d57e
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 0042d583
    ADD ESP,0xa0                        ; 0042d586
    POP EDI                             ; 0042d58c
    POP ESI                             ; 0042d58d
    POP EBX                             ; 0042d58e
    RET                                 ; 0042d58f
    MOV ECX,0x300                       ; 0042d590
        ;   Label: LAB_0042d590
    MOV ESI,0x1c00948                   ; 0042d595
    MOV EDI,EBX                         ; 0042d59a
    PUSH EDI                            ; 0042d59c
    MOV EAX,ECX                         ; 0042d59d
    SHR ECX,0x2                         ; 0042d59f
    MOVSD.REP ES:EDI,ESI                ; 0042d5a2
    MOV CL,AL                           ; 0042d5a4
    AND CL,0x3                          ; 0042d5a6
    MOVSB.REP ES:EDI,ESI                ; 0042d5a9
    POP EDI                             ; 0042d5ab
    ADD ESP,0xa0                        ; 0042d5ac
    POP EDI                             ; 0042d5b2
    POP ESI                             ; 0042d5b3
    POP EBX                             ; 0042d5b4
    RET                                 ; 0042d5b5

