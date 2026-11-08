; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d94d0(void)
;
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
;
; XREF[2]:
;   FUN_004e4e20 at 004e4ea0
;   FUN_004ee1a0 at 004ee33a
;
; Referenced Globals:
;   TerminatedCString s_gamePIXX_005db095
;   TerminatedCString s_gamePIXY_005db09e
;   TerminatedCString s_gameBPP_005db0a7
;   TerminatedCString s_useDirect3D_005db0af
;   TerminatedCString s_useAGPFlag_005db0bb
;   TerminatedCString s_rendererDLLPath_005db0c6
;   TerminatedCString s_gamma_005db0d6
;   TerminatedCString s_heroNumber_005db0dc
;   TerminatedCString s_haloMode_005db0e7
;   TerminatedCString s_firstTimeFlag_005db0f0
;   TerminatedCString s_subtitleMode_005db0fe
;   TerminatedCString s_bloodFlag_005db10b
;   TerminatedCString s_nudityFlag_005db115
;   TerminatedCString s_foulLanguageFlag_005db120
;   TerminatedCString s_shadowFlag_005db131
;   ... and 111 more
;
; Called Functions:
;   FUN_004d8910
;   FUN_004d8940
;   FUN_004d89d0
;   FUN_004d8aa0
;   FUN_004d8b80
;   FUN_00553980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d94d0
        ;   Label: FUN_004d94d0
    PUSH ESI                            ; 004d94d1
    PUSH EDI                            ; 004d94d2
    PUSH EBP                            ; 004d94d3
    SUB ESP,0x204                       ; 004d94d4
    PUSH 0x0                            ; 004d94da
    PUSH 0x617b50                       ; 004d94dc | = ".\\system\\nocturne.ini"
    LEA EAX,[ESP + 0x8]                 ; 004d94e1
    PUSH EAX                            ; 004d94e5
    CALL FUN_004d8910                   ; 004d94e6
        ;   XREF to: 004d8910 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8910()
    ADD ESP,0xc                         ; 004d94eb
    PUSH 0x617b78                       ; 004d94ee | = "Graphics"
    LEA EAX,[ESP + 0x4]                 ; 004d94f3
    PUSH EAX                            ; 004d94f7
    CALL FUN_004d89d0                   ; 004d94f8
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d89d0()
    MOV EAX,[0x00616494]                ; 004d94fd | DAT_00616494
    ADD ESP,0x8                         ; 004d9502
    MOV EDX,dword ptr [EAX]             ; 004d9505 | DAT_01cb6900
    PUSH EDX                            ; 004d9507
    PUSH 0x5db095                       ; 004d9508 | = "gamePIXX"
    LEA EAX,[ESP + 0x8]                 ; 004d950d
    PUSH EAX                            ; 004d9511
    CALL FUN_004d8b80                   ; 004d9512
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9517 | DAT_00616494
    ADD ESP,0xc                         ; 004d951c
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d951f | DAT_01cb6904
    PUSH ECX                            ; 004d9522
    PUSH 0x5db09e                       ; 004d9523 | = "gamePIXY"
    LEA EAX,[ESP + 0x8]                 ; 004d9528
    PUSH EAX                            ; 004d952c
    CALL FUN_004d8b80                   ; 004d952d
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9532 | DAT_00616494
    ADD ESP,0xc                         ; 004d9537
    MOV EBX,dword ptr [EAX + 0x8]       ; 004d953a | DAT_01cb6908
    PUSH EBX                            ; 004d953d
    PUSH 0x5db0a7                       ; 004d953e | = "gameBPP"
    LEA EAX,[ESP + 0x8]                 ; 004d9543
    PUSH EAX                            ; 004d9547
    CALL FUN_004d8b80                   ; 004d9548
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d954d
    MOV ESI,dword ptr [0x0264bba0]      ; 004d9550 | DAT_0264bba0
    PUSH ESI                            ; 004d9556
    PUSH 0x5db0af                       ; 004d9557 | = "useDirect3D"
    LEA EAX,[ESP + 0x8]                 ; 004d955c
    PUSH EAX                            ; 004d9560
    CALL FUN_004d8b80                   ; 004d9561
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d9566
    MOV EDI,dword ptr [0x0264bbac]      ; 004d9569 | DAT_0264bbac
    PUSH EDI                            ; 004d956f
    PUSH 0x5db0bb                       ; 004d9570 | = "useAGPFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d9575
    PUSH EAX                            ; 004d9579
    CALL FUN_004d8b80                   ; 004d957a
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d957f
    PUSH 0x61e180                       ; 004d9582 | DAT_0061e180
    PUSH 0x5db0c6                       ; 004d9587 | = "rendererDLLPath"
    LEA EAX,[ESP + 0x8]                 ; 004d958c
    PUSH EAX                            ; 004d9590
    CALL FUN_004d8aa0                   ; 004d9591
        ;   XREF to: 004d8aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8aa0()
    MOV EAX,[0x00616494]                ; 004d9596 | DAT_00616494
    ADD ESP,0xc                         ; 004d959b
    MOV EBP,dword ptr [EAX + 0x240]     ; 004d959e | DAT_01cb6b40
    PUSH EBP                            ; 004d95a4
    PUSH 0x5db0d6                       ; 004d95a5 | = "gamma"
    LEA EAX,[ESP + 0x8]                 ; 004d95aa
    PUSH EAX                            ; 004d95ae
    CALL FUN_004d8b80                   ; 004d95af
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d95b4 | DAT_00616494
    ADD ESP,0xc                         ; 004d95b9
    MOV EDX,dword ptr [EAX + 0xd4]      ; 004d95bc | DAT_01cb69d4
    PUSH EDX                            ; 004d95c2
    PUSH 0x5db0dc                       ; 004d95c3 | = "heroNumber"
    LEA EAX,[ESP + 0x8]                 ; 004d95c8
    PUSH EAX                            ; 004d95cc
    CALL FUN_004d8b80                   ; 004d95cd
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d95d2
    MOV EAX,[0x00616494]                ; 004d95d5 | DAT_00616494
    MOV ECX,dword ptr [EAX + 0xc]       ; 004d95da | DAT_01cb690c
    PUSH ECX                            ; 004d95dd
    PUSH 0x5db0e7                       ; 004d95de | = "haloMode"
    LEA EAX,[ESP + 0x8]                 ; 004d95e3
    PUSH EAX                            ; 004d95e7
    CALL FUN_004d8b80                   ; 004d95e8
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d95ed
    MOV EBX,dword ptr [0x01cee1a8]      ; 004d95f0 | DAT_01cee1a8
    PUSH EBX                            ; 004d95f6
    PUSH 0x5db0f0                       ; 004d95f7 | = "firstTimeFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d95fc
    PUSH EAX                            ; 004d9600
    CALL FUN_004d8b80                   ; 004d9601
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9606 | DAT_00616494
    ADD ESP,0xc                         ; 004d960b
    MOV ESI,dword ptr [EAX + 0x10]      ; 004d960e | DAT_01cb6910
    PUSH ESI                            ; 004d9611
    PUSH 0x5db0fe                       ; 004d9612 | = "subtitleMode"
    LEA EAX,[ESP + 0x8]                 ; 004d9617
    PUSH EAX                            ; 004d961b
    CALL FUN_004d8b80                   ; 004d961c
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9621 | DAT_00616494
    ADD ESP,0xc                         ; 004d9626
    MOV EDI,dword ptr [EAX + 0x14]      ; 004d9629 | DAT_01cb6914
    PUSH EDI                            ; 004d962c
    PUSH 0x5db10b                       ; 004d962d | = "bloodFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d9632
    PUSH EAX                            ; 004d9636
    CALL FUN_004d8b80                   ; 004d9637
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d963c | DAT_00616494
    MOV EBP,dword ptr [EAX + 0x20]      ; 004d9641 | DAT_01cb6920
    ADD ESP,0xc                         ; 004d9644
    TEST EBP,EBP                        ; 004d9647
    JZ 0x004d9ba6                       ; 004d9649
        ;   XREF to: 004d9ba6 (CONDITIONAL_JUMP)  ; LAB_004d9ba6
    MOV EAX,[0x00616494]                ; 004d964f | DAT_00616494
        ;   Label: LAB_004d964f
    MOV ESI,dword ptr [EAX + 0x20]      ; 004d9654 | DAT_01cb6920
    PUSH ESI                            ; 004d9657
    PUSH 0x5db13c                       ; 004d9658 | = "quimbyFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d965d
    PUSH EAX                            ; 004d9661
    CALL FUN_004d8b80                   ; 004d9662
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d9667
    MOV EDI,dword ptr [0x0061ec60]      ; 004d966a | DAT_0061ec60
    PUSH EDI                            ; 004d9670
    PUSH 0x5db147                       ; 004d9671 | = "particleDensity"
    LEA EAX,[ESP + 0x8]                 ; 004d9676
    PUSH EAX                            ; 004d967a
    CALL FUN_004d8b80                   ; 004d967b
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d9680
    MOV EBP,dword ptr [0x01d06a74]      ; 004d9683 | DAT_01d06a74
    PUSH EBP                            ; 004d9689
    PUSH 0x5db157                       ; 004d968a | = "currentBoard"
    LEA EAX,[ESP + 0x8]                 ; 004d968f
    PUSH EAX                            ; 004d9693
    CALL FUN_004d8b80                   ; 004d9694
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9699 | DAT_00616494
    ADD ESP,0xc                         ; 004d969e
    MOV EDX,dword ptr [EAX + 0xe4]      ; 004d96a1 | DAT_01cb69e4
    PUSH EDX                            ; 004d96a7
    PUSH 0x5db164                       ; 004d96a8 | = "puzzleDifficultyMode"
    LEA EAX,[ESP + 0x8]                 ; 004d96ad
    PUSH EAX                            ; 004d96b1
    CALL FUN_004d8b80                   ; 004d96b2
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d96b7 | DAT_00616494
    ADD ESP,0xc                         ; 004d96bc
    MOV ECX,dword ptr [EAX + 0xe8]      ; 004d96bf | DAT_01cb69e8
    PUSH ECX                            ; 004d96c5
    PUSH 0x5db179                       ; 004d96c6 | = "combatDifficultyMode"
    LEA EAX,[ESP + 0x8]                 ; 004d96cb
    PUSH EAX                            ; 004d96cf
    CALL FUN_004d8b80                   ; 004d96d0
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d96d5
    PUSH 0x617b70                       ; 004d96d8 | = "Sound"
    LEA EAX,[ESP + 0x4]                 ; 004d96dd
    PUSH EAX                            ; 004d96e1
    CALL FUN_004d89d0                   ; 004d96e2
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d89d0()
    ADD ESP,0x8                         ; 004d96e7
    MOV EAX,ESP                         ; 004d96ea
    PUSH EAX                            ; 004d96ec
    CALL FUN_00553980                   ; 004d96ed
        ;   XREF to: 00553980 (UNCONDITIONAL_CALL)  ; undefined FUN_00553980()
    ADD ESP,0x4                         ; 004d96f2
    PUSH 0x617b88                       ; 004d96f5 | = "Control"
    LEA EAX,[ESP + 0x4]                 ; 004d96fa
    PUSH EAX                            ; 004d96fe
    CALL FUN_004d89d0                   ; 004d96ff
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d89d0()
    MOV EAX,[0x00616494]                ; 004d9704 | DAT_00616494
    ADD ESP,0x8                         ; 004d9709
    MOV EBX,dword ptr [EAX + 0xd0]      ; 004d970c | DAT_01cb69d0
    PUSH EBX                            ; 004d9712
    PUSH 0x5db18e                       ; 004d9713 | = "gameControl"
    LEA EAX,[ESP + 0x8]                 ; 004d9718
    PUSH EAX                            ; 004d971c
    CALL FUN_004d8b80                   ; 004d971d
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9722 | DAT_00616494
    ADD ESP,0xc                         ; 004d9727
    MOV ESI,dword ptr [EAX + 0x28]      ; 004d972a | DAT_01cb6928
    PUSH ESI                            ; 004d972d
    PUSH 0x5db19a                       ; 004d972e | = "keyWalk"
    LEA EAX,[ESP + 0x8]                 ; 004d9733
    PUSH EAX                            ; 004d9737
    CALL FUN_004d8b80                   ; 004d9738
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d973d | DAT_00616494
    ADD ESP,0xc                         ; 004d9742
    MOV EDI,dword ptr [EAX + 0x2c]      ; 004d9745 | DAT_01cb692c
    PUSH EDI                            ; 004d9748
    PUSH 0x5db1a2                       ; 004d9749 | = "keyBackup"
    LEA EAX,[ESP + 0x8]                 ; 004d974e
    PUSH EAX                            ; 004d9752
    CALL FUN_004d8b80                   ; 004d9753
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d9758
    MOV EAX,[0x00616494]                ; 004d975b | DAT_00616494
    MOV EBP,dword ptr [EAX + 0x30]      ; 004d9760 | DAT_01cb6930
    PUSH EBP                            ; 004d9763
    PUSH 0x5db1ac                       ; 004d9764 | = "keyRun"
    LEA EAX,[ESP + 0x8]                 ; 004d9769
    PUSH EAX                            ; 004d976d
    CALL FUN_004d8b80                   ; 004d976e
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9773 | DAT_00616494
    ADD ESP,0xc                         ; 004d9778
    MOV EDX,dword ptr [EAX + 0x34]      ; 004d977b | DAT_01cb6934
    PUSH EDX                            ; 004d977e
    PUSH 0x5db1b3                       ; 004d977f | = "keyStrafe"
    LEA EAX,[ESP + 0x8]                 ; 004d9784
    PUSH EAX                            ; 004d9788
    CALL FUN_004d8b80                   ; 004d9789
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d978e | DAT_00616494
    ADD ESP,0xc                         ; 004d9793
    MOV ECX,dword ptr [EAX + 0x38]      ; 004d9796 | DAT_01cb6938
    PUSH ECX                            ; 004d9799
    PUSH 0x5db1bd                       ; 004d979a | = "keyStrafeLeft"
    LEA EAX,[ESP + 0x8]                 ; 004d979f
    PUSH EAX                            ; 004d97a3
    CALL FUN_004d8b80                   ; 004d97a4
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d97a9 | DAT_00616494
    ADD ESP,0xc                         ; 004d97ae
    MOV EBX,dword ptr [EAX + 0x3c]      ; 004d97b1 | DAT_01cb693c
    PUSH EBX                            ; 004d97b4
    PUSH 0x5db1cb                       ; 004d97b5 | = "keyStrafeRight"
    LEA EAX,[ESP + 0x8]                 ; 004d97ba
    PUSH EAX                            ; 004d97be
    CALL FUN_004d8b80                   ; 004d97bf
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d97c4 | DAT_00616494
    ADD ESP,0xc                         ; 004d97c9
    MOV ESI,dword ptr [EAX + 0x40]      ; 004d97cc | DAT_01cb6940
    PUSH ESI                            ; 004d97cf
    PUSH 0x5db1da                       ; 004d97d0 | = "keyRight"
    LEA EAX,[ESP + 0x8]                 ; 004d97d5
    PUSH EAX                            ; 004d97d9
    CALL FUN_004d8b80                   ; 004d97da
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d97df | DAT_00616494
    ADD ESP,0xc                         ; 004d97e4
    MOV EDI,dword ptr [EAX + 0x44]      ; 004d97e7 | DAT_01cb6944
    PUSH EDI                            ; 004d97ea
    PUSH 0x5db1e3                       ; 004d97eb | = "keyLeft"
    LEA EAX,[ESP + 0x8]                 ; 004d97f0
    PUSH EAX                            ; 004d97f4
    CALL FUN_004d8b80                   ; 004d97f5
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d97fa | DAT_00616494
    ADD ESP,0xc                         ; 004d97ff
    MOV EBP,dword ptr [EAX + 0x48]      ; 004d9802 | DAT_01cb6948
    PUSH EBP                            ; 004d9805
    PUSH 0x5db1eb                       ; 004d9806 | = "keyFire"
    LEA EAX,[ESP + 0x8]                 ; 004d980b
    PUSH EAX                            ; 004d980f
    CALL FUN_004d8b80                   ; 004d9810
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9815 | DAT_00616494
    ADD ESP,0xc                         ; 004d981a
    MOV EDX,dword ptr [EAX + 0x4c]      ; 004d981d | DAT_01cb694c
    PUSH EDX                            ; 004d9820
    PUSH 0x5db1f3                       ; 004d9821 | = "keyUseItem"
    LEA EAX,[ESP + 0x8]                 ; 004d9826
    PUSH EAX                            ; 004d982a
    CALL FUN_004d8b80                   ; 004d982b
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9830 | DAT_00616494
    ADD ESP,0xc                         ; 004d9835
    MOV ECX,dword ptr [EAX + 0x50]      ; 004d9838 | DAT_01cb6950
    PUSH ECX                            ; 004d983b
    PUSH 0x5db1fe                       ; 004d983c | = "keyLight"
    LEA EAX,[ESP + 0x8]                 ; 004d9841
    PUSH EAX                            ; 004d9845
    CALL FUN_004d8b80                   ; 004d9846
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d984b | DAT_00616494
    ADD ESP,0xc                         ; 004d9850
    MOV EBX,dword ptr [EAX + 0x68]      ; 004d9853 | DAT_01cb6968
    PUSH EBX                            ; 004d9856
    PUSH 0x5db207                       ; 004d9857 | = "keyDraw"
    LEA EAX,[ESP + 0x8]                 ; 004d985c
    PUSH EAX                            ; 004d9860
    CALL FUN_004d8b80                   ; 004d9861
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d9866
    MOV EAX,[0x00616494]                ; 004d9869 | DAT_00616494
    MOV ESI,dword ptr [EAX + 0x74]      ; 004d986e | DAT_01cb6974
    PUSH ESI                            ; 004d9871
    PUSH 0x5db20f                       ; 004d9872 | = "keyPointUp"
    LEA EAX,[ESP + 0x8]                 ; 004d9877
    PUSH EAX                            ; 004d987b
    CALL FUN_004d8b80                   ; 004d987c
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9881 | DAT_00616494
    ADD ESP,0xc                         ; 004d9886
    MOV EDI,dword ptr [EAX + 0x78]      ; 004d9889 | DAT_01cb6978
    PUSH EDI                            ; 004d988c
    PUSH 0x5db21a                       ; 004d988d | = "keyPointDown"
    LEA EAX,[ESP + 0x8]                 ; 004d9892
    PUSH EAX                            ; 004d9896
    CALL FUN_004d8b80                   ; 004d9897
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d989c | DAT_00616494
    ADD ESP,0xc                         ; 004d98a1
    MOV EBP,dword ptr [EAX + 0x7c]      ; 004d98a4 | DAT_01cb697c
    PUSH EBP                            ; 004d98a7
    PUSH 0x5db227                       ; 004d98a8 | = "keyWeapon1"
    LEA EAX,[ESP + 0x8]                 ; 004d98ad
    PUSH EAX                            ; 004d98b1
    CALL FUN_004d8b80                   ; 004d98b2
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d98b7 | DAT_00616494
    ADD ESP,0xc                         ; 004d98bc
    MOV EDX,dword ptr [EAX + 0x80]      ; 004d98bf | DAT_01cb6980
    PUSH EDX                            ; 004d98c5
    PUSH 0x5db232                       ; 004d98c6 | = "keyWeapon2"
    LEA EAX,[ESP + 0x8]                 ; 004d98cb
    PUSH EAX                            ; 004d98cf
    CALL FUN_004d8b80                   ; 004d98d0
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d98d5 | DAT_00616494
    ADD ESP,0xc                         ; 004d98da
    MOV ECX,dword ptr [EAX + 0x84]      ; 004d98dd | DAT_01cb6984
    PUSH ECX                            ; 004d98e3
    PUSH 0x5db23d                       ; 004d98e4 | = "keyWeapon3"
    LEA EAX,[ESP + 0x8]                 ; 004d98e9
    PUSH EAX                            ; 004d98ed
    CALL FUN_004d8b80                   ; 004d98ee
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d98f3 | DAT_00616494
    ADD ESP,0xc                         ; 004d98f8
    MOV EBX,dword ptr [EAX + 0xaf0]     ; 004d98fb | DAT_01cb73f0
    PUSH EBX                            ; 004d9901
    PUSH 0x5db248                       ; 004d9902 | = "keyDrop"
    LEA EAX,[ESP + 0x8]                 ; 004d9907
    PUSH EAX                            ; 004d990b
    CALL FUN_004d8b80                   ; 004d990c
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9911 | DAT_00616494
    ADD ESP,0xc                         ; 004d9916
    MOV ESI,dword ptr [EAX + 0x90]      ; 004d9919 | DAT_01cb6990
    PUSH ESI                            ; 004d991f
    PUSH 0x5db250                       ; 004d9920 | = "keyNextWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004d9925
    PUSH EAX                            ; 004d9929
    CALL FUN_004d8b80                   ; 004d992a
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d992f | DAT_00616494
    ADD ESP,0xc                         ; 004d9934
    MOV EDI,dword ptr [EAX + 0x94]      ; 004d9937 | DAT_01cb6994
    PUSH EDI                            ; 004d993d
    PUSH 0x5db25e                       ; 004d993e | = "keyPrevWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004d9943
    PUSH EAX                            ; 004d9947
    CALL FUN_004d8b80                   ; 004d9948
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d994d | DAT_00616494
    ADD ESP,0xc                         ; 004d9952
    MOV EBP,dword ptr [EAX + 0x98]      ; 004d9955 | DAT_01cb6998
    PUSH EBP                            ; 004d995b
    PUSH 0x5db26c                       ; 004d995c | = "keyNextItem"
    LEA EAX,[ESP + 0x8]                 ; 004d9961
    PUSH EAX                            ; 004d9965
    CALL FUN_004d8b80                   ; 004d9966
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d996b | DAT_00616494
    ADD ESP,0xc                         ; 004d9970
    MOV EDX,dword ptr [EAX + 0x9c]      ; 004d9973 | DAT_01cb699c
    PUSH EDX                            ; 004d9979
    PUSH 0x5db278                       ; 004d997a | = "keyPrevItem"
    LEA EAX,[ESP + 0x8]                 ; 004d997f
    PUSH EAX                            ; 004d9983
    CALL FUN_004d8b80                   ; 004d9984
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d9989
    MOV EAX,[0x00616494]                ; 004d998c | DAT_00616494
    MOV ECX,dword ptr [EAX + 0xa0]      ; 004d9991 | DAT_01cb69a0
    PUSH ECX                            ; 004d9997
    PUSH 0x5db284                       ; 004d9998 | = "keyItemDesc"
    LEA EAX,[ESP + 0x8]                 ; 004d999d
    PUSH EAX                            ; 004d99a1
    CALL FUN_004d8b80                   ; 004d99a2
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d99a7 | DAT_00616494
    ADD ESP,0xc                         ; 004d99ac
    MOV EBX,dword ptr [EAX + 0xa4]      ; 004d99af | DAT_01cb69a4
    PUSH EBX                            ; 004d99b5
    PUSH 0x5db290                       ; 004d99b6 | = "keyNextAmmo"
    LEA EAX,[ESP + 0x8]                 ; 004d99bb
    PUSH EAX                            ; 004d99bf
    CALL FUN_004d8b80                   ; 004d99c0
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d99c5 | DAT_00616494
    ADD ESP,0xc                         ; 004d99ca
    MOV ESI,dword ptr [EAX + 0xa8]      ; 004d99cd | DAT_01cb69a8
    PUSH ESI                            ; 004d99d3
    PUSH 0x5db29c                       ; 004d99d4 | = "invertMouseYAxis"
    LEA EAX,[ESP + 0x8]                 ; 004d99d9
    PUSH EAX                            ; 004d99dd
    CALL FUN_004d8b80                   ; 004d99de
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d99e3 | DAT_00616494
    ADD ESP,0xc                         ; 004d99e8
    MOV EDI,dword ptr [EAX + 0xac]      ; 004d99eb | DAT_01cb69ac
    PUSH EDI                            ; 004d99f1
    PUSH 0x5db2ad                       ; 004d99f2 | = "alwaysRun"
    LEA EAX,[ESP + 0x8]                 ; 004d99f7
    PUSH EAX                            ; 004d99fb
    CALL FUN_004d8b80                   ; 004d99fc
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9a01 | DAT_00616494
    ADD ESP,0xc                         ; 004d9a06
    MOV EBP,dword ptr [EAX + 0xb0]      ; 004d9a09 | DAT_01cb69b0
    PUSH EBP                            ; 004d9a0f
    PUSH 0x5db2b7                       ; 004d9a10 | = "xMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004d9a15
    PUSH EAX                            ; 004d9a19
    CALL FUN_004d8b80                   ; 004d9a1a
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9a1f | DAT_00616494
    ADD ESP,0xc                         ; 004d9a24
    MOV EDX,dword ptr [EAX + 0xb4]      ; 004d9a27 | DAT_01cb69b4
    PUSH EDX                            ; 004d9a2d
    PUSH 0x5db2c9                       ; 004d9a2e | = "yMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004d9a33
    PUSH EAX                            ; 004d9a37
    CALL FUN_004d8b80                   ; 004d9a38
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9a3d | DAT_00616494
    ADD ESP,0xc                         ; 004d9a42
    MOV ECX,dword ptr [EAX + 0xb8]      ; 004d9a45 | DAT_01cb69b8
    PUSH ECX                            ; 004d9a4b
    PUSH 0x5db2db                       ; 004d9a4c | = "xCenter"
    LEA EAX,[ESP + 0x8]                 ; 004d9a51
    PUSH EAX                            ; 004d9a55
    CALL FUN_004d8b80                   ; 004d9a56
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9a5b | DAT_00616494
    ADD ESP,0xc                         ; 004d9a60
    MOV EBX,dword ptr [EAX + 0xbc]      ; 004d9a63 | DAT_01cb69bc
    PUSH EBX                            ; 004d9a69
    PUSH 0x5db2e3                       ; 004d9a6a | = "yCenter"
    LEA EAX,[ESP + 0x8]                 ; 004d9a6f
    PUSH EAX                            ; 004d9a73
    CALL FUN_004d8b80                   ; 004d9a74
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9a79 | DAT_00616494
    ADD ESP,0xc                         ; 004d9a7e
    MOV ESI,dword ptr [EAX + 0xc0]      ; 004d9a81 | DAT_01cb69c0
    PUSH ESI                            ; 004d9a87
    PUSH 0x5db2eb                       ; 004d9a88 | = "xStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004d9a8d
    PUSH EAX                            ; 004d9a91
    CALL FUN_004d8b80                   ; 004d9a92
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9a97 | DAT_00616494
    ADD ESP,0xc                         ; 004d9a9c
    MOV EDI,dword ptr [EAX + 0xc4]      ; 004d9a9f | DAT_01cb69c4
    PUSH EDI                            ; 004d9aa5
    PUSH 0x5db2f5                       ; 004d9aa6 | = "xStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004d9aab
    PUSH EAX                            ; 004d9aaf
    CALL FUN_004d8b80                   ; 004d9ab0
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d9ab5
    MOV EAX,[0x00616494]                ; 004d9ab8 | DAT_00616494
    MOV EBP,dword ptr [EAX + 0xc8]      ; 004d9abd | DAT_01cb69c8
    PUSH EBP                            ; 004d9ac3
    PUSH 0x5db2ff                       ; 004d9ac4 | = "yStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004d9ac9
    PUSH EAX                            ; 004d9acd
    CALL FUN_004d8b80                   ; 004d9ace
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9ad3 | DAT_00616494
    ADD ESP,0xc                         ; 004d9ad8
    MOV EDX,dword ptr [EAX + 0xcc]      ; 004d9adb | DAT_01cb69cc
    PUSH EDX                            ; 004d9ae1
    PUSH 0x5db309                       ; 004d9ae2 | = "yStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004d9ae7
    PUSH EAX                            ; 004d9aeb
    CALL FUN_004d8b80                   ; 004d9aec
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9af1 | DAT_00616494
    ADD ESP,0xc                         ; 004d9af6
    MOV ECX,dword ptr [EAX + 0xd8]      ; 004d9af9 | DAT_01cb69d8
    PUSH ECX                            ; 004d9aff
    PUSH 0x5db313                       ; 004d9b00 | = "aimMode"
    LEA EAX,[ESP + 0x8]                 ; 004d9b05
    PUSH EAX                            ; 004d9b09
    CALL FUN_004d8b80                   ; 004d9b0a
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9b0f | DAT_00616494
    ADD ESP,0xc                         ; 004d9b14
    MOV EBX,dword ptr [EAX + 0xdc]      ; 004d9b17 | DAT_01cb69dc
    PUSH EBX                            ; 004d9b1d
    PUSH 0x5db31b                       ; 004d9b1e | = "autoUseHealth"
    LEA EAX,[ESP + 0x8]                 ; 004d9b23
    PUSH EAX                            ; 004d9b27
    CALL FUN_004d8b80                   ; 004d9b28
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d9b2d
    PUSH 0x617bc0                       ; 004d9b30 | = "Debug"
    LEA EAX,[ESP + 0x4]                 ; 004d9b35
    PUSH EAX                            ; 004d9b39
    CALL FUN_004d89d0                   ; 004d9b3a
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d89d0()
    MOV EAX,[0x00609ed0]                ; 004d9b3f | PTR_DAT_00609ed0
    ADD ESP,0x8                         ; 004d9b44
    MOV ESI,dword ptr [EAX]             ; 004d9b47 | DAT_007c158c
    PUSH ESI                            ; 004d9b49
    PUSH 0x5db329                       ; 004d9b4a | = "logConsoleFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d9b4f
    PUSH EAX                            ; 004d9b53
    CALL FUN_004d8b80                   ; 004d9b54
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9b59 | DAT_00616494
    ADD ESP,0xc                         ; 004d9b5e
    MOV EDI,dword ptr [EAX + 0x230]     ; 004d9b61 | DAT_01cb6b30
    PUSH EDI                            ; 004d9b67
    PUSH 0x5db338                       ; 004d9b68 | = "headOfHorrorCheat"
    LEA EAX,[ESP + 0x8]                 ; 004d9b6d
    PUSH EAX                            ; 004d9b71
    CALL FUN_004d8b80                   ; 004d9b72
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d9b77
    PUSH 0x617bc8                       ; 004d9b7a | = "Editor"
    LEA EAX,[ESP + 0x4]                 ; 004d9b7f
    PUSH EAX                            ; 004d9b83
    CALL FUN_004d89d0                   ; 004d9b84
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d89d0()
    ADD ESP,0x8                         ; 004d9b89
    PUSH 0x0                            ; 004d9b8c
    LEA EAX,[ESP + 0x4]                 ; 004d9b8e
    PUSH EAX                            ; 004d9b92
    CALL FUN_004d8940                   ; 004d9b93
        ;   XREF to: 004d8940 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8940()
    ADD ESP,0x8                         ; 004d9b98
    ADD ESP,0x204                       ; 004d9b9b
    POP EBP                             ; 004d9ba1
    POP EDI                             ; 004d9ba2
    POP ESI                             ; 004d9ba3
    POP EBX                             ; 004d9ba4
    RET                                 ; 004d9ba5
    MOV EDX,dword ptr [EAX + 0x18]      ; 004d9ba6 | DAT_01cb6918
        ;   Label: LAB_004d9ba6
    PUSH EDX                            ; 004d9ba9
    PUSH 0x5db115                       ; 004d9baa | = "nudityFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d9baf
    PUSH EAX                            ; 004d9bb3
    CALL FUN_004d8b80                   ; 004d9bb4
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9bb9 | DAT_00616494
    ADD ESP,0xc                         ; 004d9bbe
    MOV ECX,dword ptr [EAX + 0x1c]      ; 004d9bc1 | DAT_01cb691c
    PUSH ECX                            ; 004d9bc4
    PUSH 0x5db120                       ; 004d9bc5 | = "foulLanguageFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d9bca
    PUSH EAX                            ; 004d9bce
    CALL FUN_004d8b80                   ; 004d9bcf
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    MOV EAX,[0x00616494]                ; 004d9bd4 | DAT_00616494
    ADD ESP,0xc                         ; 004d9bd9
    MOV EBX,dword ptr [EAX + 0x24]      ; 004d9bdc | DAT_01cb6924
    PUSH EBX                            ; 004d9bdf
    PUSH 0x5db131                       ; 004d9be0 | = "shadowFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d9be5
    PUSH EAX                            ; 004d9be9
    CALL FUN_004d8b80                   ; 004d9bea
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b80()
    ADD ESP,0xc                         ; 004d9bef
    JMP 0x004d964f                      ; 004d9bf2
        ;   XREF to: 004d964f (UNCONDITIONAL_JUMP)  ; LAB_004d964f

