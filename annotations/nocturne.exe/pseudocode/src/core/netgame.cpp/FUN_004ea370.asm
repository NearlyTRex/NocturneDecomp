; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ea370(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x198]:4  local_198
; undefined        Stack[-0x194]:1  local_194
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x30]:4  local_30
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x2b]:4  local_2b
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0049da10 at 0049dd51
;
; Referenced Globals:
;   undefined4 s_..\\core\\netgame.cpp_0058bd29+1
;   string s_CNetGame::syncPlayers_-_don't_us_0058bd3e
;   string s_Syncing_stage_%d._0058bd76
;   string s_Waiting_on:_0058bd88
;   undefined4 DAT_0058bd94
;   string s_Waiting_on_sync_code_%d_from_ser_0058bdd5
;   string s_..\\core\\netgame.cpp_0058bdfc
;   string s_CNetGame::syncPlayers_-_invalid_m_0058be10
;   undefined4 DAT_0058be3a
;   undefined4 DAT_0058be42
;   undefined4 DAT_0058be4a
;   undefined4 DAT_005bac64
;   undefined4 DAT_01cc30e4
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   ... and 3 more
;
; Called Functions:
;   FUN_00402600
;   FUN_00403f50
;   FUN_004c8440
;   FUN_004ea740
;   FUN_004eb350
;   FUN_004ebe10
;   FUN_0052ee70
;   FUN_00553910
;   FUN_00558a30
;   FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea370
        ;   Label: FUN_004ea370
    PUSH ESI                            ; 004ea371
    PUSH EDI                            ; 004ea372
    PUSH EBP                            ; 004ea373
    MOV EBP,ESP                         ; 004ea374
    SUB ESP,0x188                       ; 004ea376
    AND ESP,0xfffffff8                  ; 004ea37c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ea37f
    CALL FUN_00403f50                   ; 004ea382
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00403f50()
    CMP dword ptr [EBP + 0x18],0x1      ; 004ea387
    JL 0x004ea5e3                       ; 004ea38b
        ;   XREF to: 004ea5e3 (CONDITIONAL_JUMP)  ; LAB_004ea5e3
    CMP dword ptr [ESI],0x0             ; 004ea391
        ;   Label: LAB_004ea391
    JZ 0x004ea60b                       ; 004ea394
        ;   XREF to: 004ea60b (CONDITIONAL_JUMP)  ; LAB_004ea60b
    MOV dword ptr [ESI + 0x4],0x2       ; 004ea39a
    CALL FUN_00558a30                   ; 004ea3a1
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00558a30()
    MOV EDX,EAX                         ; 004ea3a6
    MOV EBX,0x12                        ; 004ea3a8
    SAR EDX,0x1f                        ; 004ea3ad
    IDIV EBX                            ; 004ea3b0
    MOV ECX,dword ptr [0x01cea3f4]      ; 004ea3b2 | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ea3b8
    SUB EAX,ECX                         ; 004ea3ba
    MOV dword ptr [0x01cea3f4],EDX      ; 004ea3bc | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ea3c2
    JL 0x004ea617                       ; 004ea3c4
        ;   XREF to: 004ea617 (CONDITIONAL_JUMP)  ; LAB_004ea617
    CMP EAX,0x20000                     ; 004ea3ca
    JLE 0x004ea3d6                      ; 004ea3cf
        ;   XREF to: 004ea3d6 (CONDITIONAL_JUMP)  ; LAB_004ea3d6
    MOV EAX,0x20000                     ; 004ea3d1
    MOV EBX,dword ptr [0x01cea3f8]      ; 004ea3d6 | DAT_01cea3f8
        ;   Label: LAB_004ea3d6
    ADD EBX,EAX                         ; 004ea3dc
    MOV EAX,dword ptr [ESI + 0x114]     ; 004ea3de
    SHL EAX,0x3                         ; 004ea3e4
    MOV EDX,EAX                         ; 004ea3e7
    SHL EAX,0x4                         ; 004ea3e9
    SUB EAX,EDX                         ; 004ea3ec
    MOV EDX,dword ptr [EBP + 0x18]      ; 004ea3ee
    MOV dword ptr [ESI + EAX*0x1 + 0x5c],EDX ; 004ea3f1
    MOV EDI,dword ptr [ESI]             ; 004ea3f5
    MOV dword ptr [0x01cea3f8],EBX      ; 004ea3f7 | DAT_01cea3f8
    CMP EDI,0x1                         ; 004ea3fd
    JNZ 0x004ea62c                      ; 004ea400
        ;   XREF to: 004ea62c (CONDITIONAL_JUMP)  ; LAB_004ea62c
    LEA EAX,[EBX + 0xffe20000]          ; 004ea406
    MOV dword ptr [ESP + 0x174],EAX     ; 004ea40c
    LEA EAX,[ESI + 0x20]                ; 004ea413
    MOV dword ptr [ESP + 0x178],EAX     ; 004ea416
    CALL FUN_0052ee70                   ; 004ea41d
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ee70()
        ;   Label: LAB_004ea41d
    MOV EBX,dword ptr [EBP + 0x18]      ; 004ea422
    PUSH EBX                            ; 004ea425
    PUSH 0x58bd76                       ; 004ea426 | = "Syncing stage %d."
    LEA EAX,[ESP + 0xc]                 ; 004ea42b
    PUSH EAX                            ; 004ea42f
    CALL FUN_00563c90                   ; 004ea430
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 004ea435
    PUSH 0xb                            ; 004ea438
    PUSH 0x0                            ; 004ea43a
    LEA EAX,[ESP + 0xc]                 ; 004ea43c
    PUSH EAX                            ; 004ea440
    CALL FUN_00402600                   ; 004ea441
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined FUN_00402600()
    ADD ESP,0xc                         ; 004ea446
    PUSH 0x16                           ; 004ea449
    PUSH 0x0                            ; 004ea44b
    PUSH 0x58bd88                       ; 004ea44d | = "Waiting on:"
    MOV EDI,0x1                         ; 004ea452
    CALL FUN_00402600                   ; 004ea457
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined FUN_00402600()
    MOV EAX,0x21                        ; 004ea45c
    ADD ESP,0xc                         ; 004ea461
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004ea464
    MOV dword ptr [ESP + 0x17c],EDI     ; 004ea467
    MOV dword ptr [ESP + 0x180],EAX     ; 004ea46e
    XOR EDI,EDI                         ; 004ea475
    TEST EDX,EDX                        ; 004ea477
    JLE 0x004ea4ed                      ; 004ea479
        ;   XREF to: 004ea4ed (CONDITIONAL_JUMP)  ; LAB_004ea4ed
    MOV EBX,ESI                         ; 004ea47b
    IMUL EAX,EDI,0x78                   ; 004ea47d
        ;   Label: LAB_004ea47d
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ea480
    CMP ECX,dword ptr [EBX + 0x5c]      ; 004ea483
    JLE 0x004ea4e2                      ; 004ea486
        ;   XREF to: 004ea4e2 (CONDITIONAL_JUMP)  ; LAB_004ea4e2
    MOV ECX,dword ptr [ESP + 0x180]     ; 004ea488
    XOR EDX,EDX                         ; 004ea48f
    PUSH ECX                            ; 004ea491
    MOV dword ptr [ESP + 0x180],EDX     ; 004ea492
    PUSH EDX                            ; 004ea499
    ADD EAX,dword ptr [ESP + 0x180]     ; 004ea49a
    PUSH EAX                            ; 004ea4a1
    CALL FUN_00402600                   ; 004ea4a2
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined FUN_00402600()
    ADD ESP,0xc                         ; 004ea4a7
    MOV ECX,dword ptr [EBX + 0x5c]      ; 004ea4aa
    PUSH ECX                            ; 004ea4ad
    PUSH 0x58bd94                       ; 004ea4ae | DAT_0058bd94
    LEA EAX,[ESP + 0xc]                 ; 004ea4b3
    PUSH EAX                            ; 004ea4b7
    CALL FUN_00563c90                   ; 004ea4b8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 004ea4bd
    MOV EAX,dword ptr [ESP + 0x180]     ; 004ea4c0
    PUSH EAX                            ; 004ea4c7
    PUSH 0xc8                           ; 004ea4c8
    LEA EAX,[ESP + 0xc]                 ; 004ea4cd
    PUSH EAX                            ; 004ea4d1
    CALL FUN_00402600                   ; 004ea4d2
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined FUN_00402600()
    ADD ESP,0xc                         ; 004ea4d7
    ADD dword ptr [ESP + 0x180],0xb     ; 004ea4da
    INC EDI                             ; 004ea4e2
        ;   Label: LAB_004ea4e2
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004ea4e3
    ADD EBX,0x78                        ; 004ea4e6
    CMP EDI,ECX                         ; 004ea4e9
    JL 0x004ea47d                       ; 004ea4eb
        ;   XREF to: 004ea47d (CONDITIONAL_JUMP)  ; LAB_004ea47d
    MOV EBX,dword ptr [ESP + 0x17c]     ; 004ea4ed
        ;   Label: LAB_004ea4ed
    TEST EBX,EBX                        ; 004ea4f4
    JNZ 0x004ea6cf                      ; 004ea4f6
        ;   XREF to: 004ea6cf (CONDITIONAL_JUMP)  ; LAB_004ea6cf
    CALL FUN_00553910                   ; 004ea4fc
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined FUN_00553910()
    PUSH ESI                            ; 004ea501
    CALL FUN_004ea740                   ; 004ea502
        ;   XREF to: 004ea740 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea740()
    ADD ESP,0x4                         ; 004ea507
    MOV EAX,[0x01cea3f8]                ; 004ea50a | DAT_01cea3f8
    MOV EDI,dword ptr [ESP + 0x174]     ; 004ea50f
    SUB EAX,EDI                         ; 004ea516
    MOV dword ptr [ESP + 0x184],EAX     ; 004ea518
    FILD dword ptr [ESP + 0x184]        ; 004ea51f
    FMUL double ptr [0x0058be3a]        ; 004ea526 | DAT_0058be3a
    FST float ptr [ESP]                 ; 004ea52c
    FLDZ                                ; 004ea52f
    FCOMPP                              ; 004ea531
    FNSTSW AX                           ; 004ea533
    SAHF                                ; 004ea535
    JBE 0x004ea53b                      ; 004ea536
        ;   XREF to: 004ea53b (CONDITIONAL_JUMP)  ; LAB_004ea53b
    MOV dword ptr [ESP],EBX             ; 004ea538
    FLD float ptr [ESP]                 ; 004ea53b
        ;   Label: LAB_004ea53b
    FCOMP double ptr [0x0058be42]       ; 004ea53e | DAT_0058be42
    FNSTSW AX                           ; 004ea544
    SAHF                                ; 004ea546
    JBE 0x004ea550                      ; 004ea547
        ;   XREF to: 004ea550 (CONDITIONAL_JUMP)  ; LAB_004ea550
    MOV dword ptr [ESP],0x41f00000      ; 004ea549
    FLD float ptr [ESP]                 ; 004ea550
        ;   Label: LAB_004ea550
    FCOMP double ptr [0x0058be4a]       ; 004ea553 | DAT_0058be4a
    FNSTSW AX                           ; 004ea559
    SAHF                                ; 004ea55b
    JBE 0x004ea5bd                      ; 004ea55c
        ;   XREF to: 004ea5bd (CONDITIONAL_JUMP)  ; LAB_004ea5bd
    MOV EAX,[0x01cea3f8]                ; 004ea55e | DAT_01cea3f8
    MOV dword ptr [ESP + 0x174],EAX     ; 004ea563
    MOV AH,0x8                          ; 004ea56a
    MOV ECX,0x9                         ; 004ea56c
    MOV byte ptr [ESP + 0x16c],AH       ; 004ea571
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ea578
    MOV dword ptr [ESP + 0x168],ECX     ; 004ea57b
    MOV dword ptr [ESP + 0x16d],EAX     ; 004ea582
    MOV EDI,dword ptr [ESI + 0x1c]      ; 004ea589
    XOR EBX,EBX                         ; 004ea58c
    TEST EDI,EDI                        ; 004ea58e
    JLE 0x004ea5bd                      ; 004ea590
        ;   XREF to: 004ea5bd (CONDITIONAL_JUMP)  ; LAB_004ea5bd
    MOV EDI,ESI                         ; 004ea592
    MOV EDX,dword ptr [EBP + 0x18]      ; 004ea594
        ;   Label: LAB_004ea594
    CMP EDX,dword ptr [EDI + 0x5c]      ; 004ea597
    JLE 0x004ea61e                      ; 004ea59a
        ;   XREF to: 004ea61e (CONDITIONAL_JUMP)  ; LAB_004ea61e
    LEA EAX,[ESP + 0x168]               ; 004ea5a0
    PUSH EAX                            ; 004ea5a7
    PUSH EBX                            ; 004ea5a8
    PUSH ESI                            ; 004ea5a9
    CALL FUN_004eb350                   ; 004ea5aa
        ;   XREF to: 004eb350 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb350()
    ADD ESP,0xc                         ; 004ea5af
        ;   Label: LAB_004ea5af
    INC EBX                             ; 004ea5b2
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004ea5b3
    ADD EDI,0x78                        ; 004ea5b6
    CMP EBX,ECX                         ; 004ea5b9
    JL 0x004ea594                       ; 004ea5bb
        ;   XREF to: 004ea594 (CONDITIONAL_JUMP)  ; LAB_004ea594
    PUSH 0x1                            ; 004ea5bd
        ;   Label: LAB_004ea5bd
    MOV EAX,[0x005bac64]                ; 004ea5bf | DAT_005bac64
    PUSH EAX                            ; 004ea5c4 | DAT_01cc30e4
    MOV EBX,dword ptr [EAX]             ; 004ea5c5 | DAT_01cc30e4
    CALL dword ptr [EBX + 0x4]          ; 004ea5c7
    ADD ESP,0x8                         ; 004ea5ca
    TEST EAX,EAX                        ; 004ea5cd
    JZ 0x004ea41d                       ; 004ea5cf
        ;   XREF to: 004ea41d (CONDITIONAL_JUMP)  ; LAB_004ea41d
    CALL FUN_00403f50                   ; 004ea5d5
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00403f50()
    XOR EAX,EAX                         ; 004ea5da
    MOV ESP,EBP                         ; 004ea5dc
        ;   Label: caseD_0
    POP EBP                             ; 004ea5de
    POP EDI                             ; 004ea5df
    POP ESI                             ; 004ea5e0
    POP EBX                             ; 004ea5e1
    RET                                 ; 004ea5e2
    MOV ECX,0x58bd2a                    ; 004ea5e3 | s_..\core\netgame.cpp_0058bd29+1
        ;   Label: LAB_004ea5e3
    MOV EBX,0x337                       ; 004ea5e8
    PUSH 0x58bd3e                       ; 004ea5ed | = "CNetGame::syncPlayers - don't use 0!"
    MOV dword ptr [0x01cc4800],ECX      ; 004ea5f2 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004ea5f8 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004ea5fe
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004ea603
    JMP 0x004ea391                      ; 004ea606
        ;   XREF to: 004ea391 (UNCONDITIONAL_JUMP)  ; LAB_004ea391
    MOV EAX,0x1                         ; 004ea60b
        ;   Label: LAB_004ea60b
    MOV ESP,EBP                         ; 004ea610
    POP EBP                             ; 004ea612
    POP EDI                             ; 004ea613
    POP ESI                             ; 004ea614
    POP EBX                             ; 004ea615
    RET                                 ; 004ea616
    XOR EAX,EAX                         ; 004ea617
        ;   Label: LAB_004ea617
    JMP 0x004ea3d6                      ; 004ea619
        ;   XREF to: 004ea3d6 (UNCONDITIONAL_JUMP)  ; LAB_004ea3d6
    PUSH 0x40000000                     ; 004ea61e
        ;   Label: LAB_004ea61e
    PUSH EBX                            ; 004ea623
    PUSH ESI                            ; 004ea624
    CALL FUN_004ebe10                   ; 004ea625
        ;   XREF to: 004ebe10 (UNCONDITIONAL_CALL)  ; undefined FUN_004ebe10()
    JMP 0x004ea5af                      ; 004ea62a
        ;   XREF to: 004ea5af (UNCONDITIONAL_JUMP)  ; LAB_004ea5af
    CMP EDI,0x2                         ; 004ea62c
        ;   Label: LAB_004ea62c
    JNZ 0x004ea6ac                      ; 004ea62f
        ;   XREF to: 004ea6ac (CONDITIONAL_JUMP)  ; LAB_004ea6ac
    CMP EDX,0x4                         ; 004ea635
    JGE 0x004ea60b                      ; 004ea638
        ;   XREF to: 004ea60b (CONDITIONAL_JUMP)  ; LAB_004ea60b
    XOR EDI,EDI                         ; 004ea63a
    MOV EDX,dword ptr [EBP + 0x18]      ; 004ea63c
        ;   Label: LAB_004ea63c
    CMP EDX,dword ptr [0x01cea400]      ; 004ea63f | DAT_01cea400
    JLE 0x004ea6cf                      ; 004ea645
        ;   XREF to: 004ea6cf (CONDITIONAL_JUMP)  ; LAB_004ea6cf
    CALL FUN_0052ee70                   ; 004ea64b
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ee70()
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ea650
    PUSH ECX                            ; 004ea653
    PUSH 0x58bdd5                       ; 004ea654 | = "Waiting on sync code %d from server..."
    LEA EAX,[ESP + 0x10c]               ; 004ea659
    PUSH EAX                            ; 004ea660
    CALL FUN_00563c90                   ; 004ea661
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 004ea666
    PUSH 0xb                            ; 004ea669
    PUSH EDI                            ; 004ea66b
    LEA EAX,[ESP + 0x10c]               ; 004ea66c
    PUSH EAX                            ; 004ea673
    CALL FUN_00402600                   ; 004ea674
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined FUN_00402600()
    ADD ESP,0xc                         ; 004ea679
    CALL FUN_00553910                   ; 004ea67c
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined FUN_00553910()
    PUSH ESI                            ; 004ea681
    CALL FUN_004ea740                   ; 004ea682
        ;   XREF to: 004ea740 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea740()
    ADD ESP,0x4                         ; 004ea687
    MOV EAX,[0x005bac64]                ; 004ea68a | DAT_005bac64
    PUSH 0x1                            ; 004ea68f
    MOV EBX,dword ptr [EAX]             ; 004ea691 | DAT_01cc30e4
    PUSH EAX                            ; 004ea693 | DAT_01cc30e4
    CALL dword ptr [EBX + 0x4]          ; 004ea694
    ADD ESP,0x8                         ; 004ea697
    TEST EAX,EAX                        ; 004ea69a
    JZ 0x004ea63c                       ; 004ea69c
        ;   XREF to: 004ea63c (CONDITIONAL_JUMP)  ; LAB_004ea63c
    CALL FUN_00403f50                   ; 004ea69e
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00403f50()
    XOR EAX,EAX                         ; 004ea6a3
    MOV ESP,EBP                         ; 004ea6a5
    POP EBP                             ; 004ea6a7
    POP EDI                             ; 004ea6a8
    POP ESI                             ; 004ea6a9
    POP EBX                             ; 004ea6aa
    RET                                 ; 004ea6ab
    MOV EDX,0x58bdfc                    ; 004ea6ac | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004ea6ac
    MOV ECX,0x3c0                       ; 004ea6b1
    PUSH 0x58be10                       ; 004ea6b6 | = "CNetGame::syncPlayers - invalid mode"
    MOV dword ptr [0x01cc4800],EDX      ; 004ea6bb | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004ea6c1 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004ea6c7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004ea6cc
    MOV EAX,0x1                         ; 004ea6cf
        ;   Label: LAB_004ea6cf
    MOV ESP,EBP                         ; 004ea6d4
    POP EBP                             ; 004ea6d6
    POP EDI                             ; 004ea6d7
    POP ESI                             ; 004ea6d8
    POP EBX                             ; 004ea6d9
    RET                                 ; 004ea6da

