; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_0055d470(int param_1)
;
; Local Variables:
; undefined        Stack[-0x148]:1  local_148
;
; XREF[1]:
;   FUN_00558730 at 005587ac
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_create_DirectSound_objec_005d4efc
;   TerminatedCString s_Set_cooperative_level_005d4f16
;   TerminatedCString s_Create_the_primary_buffe_005d4f2c
;   TerminatedCString s_Create_the_primary_buffe_005d4f46
;   undefined4 DAT_00608bc8
;   undefined4 DAT_02cf49c4
;   undefined4 DAT_02cf49c8
;   undefined4 DAT_02cf49d0
;   undefined4 DAT_02d21b78
;
; Called Functions:
;   FUN_005586e0
;   FUN_0055a560
;   FUN_0055a670
;   FUN_0055ac00
;   FUN_0055d3c0
;   FUN_005a28c0
;   FUN_005a28f0
;   Ordinal_1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d470
        ;   Label: FUN_0055d470
    PUSH ESI                            ; 0055d471
    PUSH EDI                            ; 0055d472
    SUB ESP,0x77c                       ; 0055d473
    MOV EBX,dword ptr [ESP + 0x78c]     ; 0055d479
    PUSH 0x2cf5468                      ; 0055d480
    CALL FUN_0055ac00                   ; 0055d485
        ;   XREF to: 0055ac00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ac00()
    ADD ESP,0x4                         ; 0055d48a
    TEST EAX,EAX                        ; 0055d48d
    JNZ 0x0055d49b                      ; 0055d48f
        ;   XREF to: 0055d49b (CONDITIONAL_JUMP)  ; LAB_0055d49b
    ADD ESP,0x77c                       ; 0055d491
        ;   Label: LAB_0055d491
    POP EDI                             ; 0055d497
    POP ESI                             ; 0055d498
    POP EBX                             ; 0055d499
    RET                                 ; 0055d49a
    LEA EAX,[ESP + 0x640]               ; 0055d49b
        ;   Label: LAB_0055d49b
    PUSH EAX                            ; 0055d4a2
    PUSH EBX                            ; 0055d4a3
    CALL FUN_0055d3c0                   ; 0055d4a4
        ;   XREF to: 0055d3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d3c0()
    ADD ESP,0x8                         ; 0055d4a9
    TEST EAX,EAX                        ; 0055d4ac
    JZ 0x0055d491                       ; 0055d4ae
        ;   XREF to: 0055d491 (CONDITIONAL_JUMP)  ; LAB_0055d491
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055d4b0
    ADD EAX,EBX                         ; 0055d4b7
    SHL EAX,0x3                         ; 0055d4b9
    SUB EAX,EBX                         ; 0055d4bc
    SHL EAX,0x2                         ; 0055d4be
    MOV EDX,dword ptr [EAX + 0x2cf3c74] ; 0055d4c1
    XOR ECX,ECX                         ; 0055d4c7
    TEST EDX,EDX                        ; 0055d4c9
    JNZ 0x0055d4d5                      ; 0055d4cb
        ;   XREF to: 0055d4d5 (CONDITIONAL_JUMP)  ; LAB_0055d4d5
    ADD EAX,0x2cf3c74                   ; 0055d4cd
    LEA ECX,[EAX + 0x4]                 ; 0055d4d2
    PUSH 0x0                            ; 0055d4d5
        ;   Label: LAB_0055d4d5
    PUSH 0x2cf49c4                      ; 0055d4d7 | DAT_02cf49c4
    PUSH ECX                            ; 0055d4dc
    CALL Ordinal_1                      ; 0055d4dd
        ;   XREF to: 005b25f2 (UNCONDITIONAL_CALL)  ; undefined Ordinal_1()
    TEST EAX,EAX                        ; 0055d4e2
    JZ 0x0055d533                       ; 0055d4e4
        ;   XREF to: 0055d533 (CONDITIONAL_JUMP)  ; LAB_0055d533
    PUSH EAX                            ; 0055d4e6
    CALL FUN_0055a670                   ; 0055d4e7
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a670()
    ADD ESP,0x4                         ; 0055d4ec
    PUSH EAX                            ; 0055d4ef
    PUSH 0x5d4efc                       ; 0055d4f0 | = "create DirectSound object"
    PUSH 0x5d452f                       ; 0055d4f5 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0055d4fa
    PUSH EAX                            ; 0055d501
    CALL FUN_005a28c0                   ; 0055d502
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0055d507
    LEA EAX,[ESP + 0x190]               ; 0055d50a
    PUSH EAX                            ; 0055d511
        ;   Label: LAB_0055d511
    CALL FUN_0055a560                   ; 0055d512
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055d517
    PUSH 0x2cf5468                      ; 0055d51a
    CALL FUN_0055ac00                   ; 0055d51f
        ;   XREF to: 0055ac00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ac00()
    ADD ESP,0x4                         ; 0055d524
    XOR EAX,EAX                         ; 0055d527
    ADD ESP,0x77c                       ; 0055d529
    POP EDI                             ; 0055d52f
    POP ESI                             ; 0055d530
    POP EBX                             ; 0055d531
    RET                                 ; 0055d532
    PUSH 0x2                            ; 0055d533
        ;   Label: LAB_0055d533
    MOV ECX,dword ptr [0x02d21b78]      ; 0055d535 | DAT_02d21b78
    MOV EAX,[0x02cf49c4]                ; 0055d53b | DAT_02cf49c4
    PUSH ECX                            ; 0055d540
    MOV EDX,dword ptr [EAX]             ; 0055d541
    PUSH EAX                            ; 0055d543
    CALL dword ptr [EDX + 0x18]         ; 0055d544
    TEST EAX,EAX                        ; 0055d547
    JNZ 0x0055d5dd                      ; 0055d549
        ;   XREF to: 0055d5dd (CONDITIONAL_JUMP)  ; LAB_0055d5dd
    PUSH 0x24                           ; 0055d54f
    PUSH EAX                            ; 0055d551
    LEA EAX,[ESP + 0x760]               ; 0055d552
    PUSH EAX                            ; 0055d559
    CALL FUN_005a28f0                   ; 0055d55a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0055d55f
    MOV ESI,0x24                        ; 0055d562
    MOV EDI,0x11                        ; 0055d567
    PUSH 0x0                            ; 0055d56c
    LEA EDX,[ESP + 0x75c]               ; 0055d56e
    MOV EAX,[0x02cf49c4]                ; 0055d575 | DAT_02cf49c4
    PUSH 0x2cf49c8                      ; 0055d57a | DAT_02cf49c8
    MOV dword ptr [ESP + 0x760],ESI     ; 0055d57f
    MOV dword ptr [ESP + 0x764],EDI     ; 0055d586
    PUSH EDX                            ; 0055d58d
    MOV ECX,dword ptr [EAX]             ; 0055d58e
    PUSH EAX                            ; 0055d590
    CALL dword ptr [ECX + 0xc]          ; 0055d591
    TEST EAX,EAX                        ; 0055d594
    JNZ 0x0055d60d                      ; 0055d596
        ;   XREF to: 0055d60d (CONDITIONAL_JUMP)  ; LAB_0055d60d
    CALL FUN_005586e0                   ; 0055d598
        ;   XREF to: 005586e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005586e0()
        ;   Label: LAB_0055d598
    CMP EAX,0x2                         ; 0055d59d
    JL 0x0055d5ce                       ; 0055d5a0
        ;   XREF to: 0055d5ce (CONDITIONAL_JUMP)  ; LAB_0055d5ce
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055d5a2
    ADD EAX,EBX                         ; 0055d5a9
    SHL EAX,0x3                         ; 0055d5ab
    SUB EAX,EBX                         ; 0055d5ae
    CMP dword ptr [EAX*0x4 + 0x2cf3d8c],0x2 ; 0055d5b0
    JL 0x0055d5ce                       ; 0055d5b8
        ;   XREF to: 0055d5ce (CONDITIONAL_JUMP)  ; LAB_0055d5ce
    PUSH 0x2cf49d0                      ; 0055d5ba | DAT_02cf49d0
    MOV EAX,[0x02cf49c8]                ; 0055d5bf | DAT_02cf49c8
    PUSH 0x608bc8                       ; 0055d5c4 | DAT_00608bc8
    MOV EDX,dword ptr [EAX]             ; 0055d5c9
    PUSH EAX                            ; 0055d5cb
    CALL dword ptr [EDX]                ; 0055d5cc
    MOV EAX,0x2cf5468                   ; 0055d5ce
        ;   Label: LAB_0055d5ce
    ADD ESP,0x77c                       ; 0055d5d3
    POP EDI                             ; 0055d5d9
    POP ESI                             ; 0055d5da
    POP EBX                             ; 0055d5db
    RET                                 ; 0055d5dc
    PUSH EAX                            ; 0055d5dd
        ;   Label: LAB_0055d5dd
    CALL FUN_0055a670                   ; 0055d5de
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a670()
    ADD ESP,0x4                         ; 0055d5e3
    PUSH EAX                            ; 0055d5e6
    PUSH 0x5d4f16                       ; 0055d5e7 | = "Set cooperative level"
    PUSH 0x5d452f                       ; 0055d5ec | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 0055d5f1
    PUSH EAX                            ; 0055d5f8
    CALL FUN_005a28c0                   ; 0055d5f9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0055d5fe
    LEA EAX,[ESP + 0x4b0]               ; 0055d601
    JMP 0x0055d511                      ; 0055d608
        ;   XREF to: 0055d511 (UNCONDITIONAL_JUMP)  ; LAB_0055d511
    PUSH EAX                            ; 0055d60d
        ;   Label: LAB_0055d60d
    CALL FUN_0055a670                   ; 0055d60e
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a670()
    ADD ESP,0x4                         ; 0055d613
    PUSH EAX                            ; 0055d616
    PUSH 0x5d4f2c                       ; 0055d617 | = "Create the primary buffer"
    PUSH 0x5d452f                       ; 0055d61c | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055d621
    PUSH EAX                            ; 0055d625
    CALL FUN_005a28c0                   ; 0055d626
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0055d62b
    MOV EAX,ESP                         ; 0055d62e
    PUSH EAX                            ; 0055d630
    CALL FUN_0055a560                   ; 0055d631
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055d636
    PUSH 0x0                            ; 0055d639
    MOV AH,byte ptr [ESP + 0x760]       ; 0055d63b
    PUSH 0x2cf49c8                      ; 0055d642 | DAT_02cf49c8
    LEA EDX,[ESP + 0x760]               ; 0055d647
    AND AH,0xef                         ; 0055d64e
    PUSH EDX                            ; 0055d651
    MOV byte ptr [ESP + 0x768],AH       ; 0055d652
    MOV EAX,[0x02cf49c4]                ; 0055d659 | DAT_02cf49c4
    PUSH EAX                            ; 0055d65e
    MOV ECX,dword ptr [EAX]             ; 0055d65f
    CALL dword ptr [ECX + 0xc]          ; 0055d661
    TEST EAX,EAX                        ; 0055d664
    JZ 0x0055d598                       ; 0055d666
        ;   XREF to: 0055d598 (CONDITIONAL_JUMP)  ; LAB_0055d598
    PUSH EAX                            ; 0055d66c
    CALL FUN_0055a670                   ; 0055d66d
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a670()
    ADD ESP,0x4                         ; 0055d672
    PUSH EAX                            ; 0055d675
    PUSH 0x5d4f46                       ; 0055d676 | = "Create the primary buffer"
    PUSH 0x5d452f                       ; 0055d67b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 0055d680
    PUSH EAX                            ; 0055d687
    CALL FUN_005a28c0                   ; 0055d688
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0055d68d
    LEA EAX,[ESP + 0x320]               ; 0055d690
    JMP 0x0055d511                      ; 0055d697
        ;   XREF to: 0055d511 (UNCONDITIONAL_JUMP)  ; LAB_0055d511

