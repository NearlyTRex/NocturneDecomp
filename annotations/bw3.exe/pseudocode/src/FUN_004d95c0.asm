; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d95c0(void)
;
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
;
; XREF[2]:
;   FUN_004e4c70 at 004e4cf0
;   FUN_004ea280 at 004ea401
;
; Referenced Globals:
;   TerminatedCString s_gamePIXX_005c5bad
;   TerminatedCString s_gamePIXY_005c5bb6
;   TerminatedCString s_gameBPP_005c5bbf
;   TerminatedCString s_useDirect3D_005c5bc7
;   TerminatedCString s_useAGPFlag_005c5bd3
;   TerminatedCString s_rendererDLLPath_005c5bde
;   TerminatedCString s_gamma_005c5bee
;   TerminatedCString s_heroNumber_005c5bf4
;   TerminatedCString s_haloMode_005c5bff
;   TerminatedCString s_firstTimeFlag_005c5c08
;   TerminatedCString s_subtitleMode_005c5c16
;   TerminatedCString s_bloodFlag_005c5c23
;   TerminatedCString s_currentBoard_005c5c2d
;   TerminatedCString s_gameControl_005c5c3a
;   TerminatedCString s_keyWalk_005c5c46
;   ... and 105 more
;
; Called Functions:
;   FUN_004d8a20
;   FUN_004d8a50
;   FUN_004d8ae0
;   FUN_004d8bb0
;   FUN_004d8c90
;   FUN_00559520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d95c0
        ;   Label: FUN_004d95c0
    PUSH ESI                            ; 004d95c1
    PUSH EDI                            ; 004d95c2
    PUSH EBP                            ; 004d95c3
    SUB ESP,0x204                       ; 004d95c4
    PUSH 0x0                            ; 004d95ca
    PUSH 0x6000b0                       ; 004d95cc | = ".\\system\\bw3.ini"
    LEA EAX,[ESP + 0x8]                 ; 004d95d1
    PUSH EAX                            ; 004d95d5
    CALL FUN_004d8a20                   ; 004d95d6
        ;   XREF to: 004d8a20 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8a20()
    ADD ESP,0xc                         ; 004d95db
    PUSH 0x6000d8                       ; 004d95de | = "Graphics"
    LEA EAX,[ESP + 0x4]                 ; 004d95e3
    PUSH EAX                            ; 004d95e7
    CALL FUN_004d8ae0                   ; 004d95e8
        ;   XREF to: 004d8ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8ae0()
    MOV EAX,[0x005fe9dc]                ; 004d95ed | DAT_005fe9dc
    ADD ESP,0x8                         ; 004d95f2
    MOV EDX,dword ptr [EAX]             ; 004d95f5 | DAT_01d2130c
    PUSH EDX                            ; 004d95f7
    PUSH 0x5c5bad                       ; 004d95f8 | = "gamePIXX"
    LEA EAX,[ESP + 0x8]                 ; 004d95fd
    PUSH EAX                            ; 004d9601
    CALL FUN_004d8c90                   ; 004d9602
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9607 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d960c
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d960f | DAT_01d21310
    PUSH ECX                            ; 004d9612
    PUSH 0x5c5bb6                       ; 004d9613 | = "gamePIXY"
    LEA EAX,[ESP + 0x8]                 ; 004d9618
    PUSH EAX                            ; 004d961c
    CALL FUN_004d8c90                   ; 004d961d
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9622 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9627
    MOV EBX,dword ptr [EAX + 0x8]       ; 004d962a | DAT_01d21314
    PUSH EBX                            ; 004d962d
    PUSH 0x5c5bbf                       ; 004d962e | = "gameBPP"
    LEA EAX,[ESP + 0x8]                 ; 004d9633
    PUSH EAX                            ; 004d9637
    CALL FUN_004d8c90                   ; 004d9638
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d963d
    MOV ESI,dword ptr [0x02cf5fcc]      ; 004d9640 | DAT_02cf5fcc
    PUSH ESI                            ; 004d9646
    PUSH 0x5c5bc7                       ; 004d9647 | = "useDirect3D"
    LEA EAX,[ESP + 0x8]                 ; 004d964c
    PUSH EAX                            ; 004d9650
    CALL FUN_004d8c90                   ; 004d9651
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d9656
    MOV EDI,dword ptr [0x02cf5fd8]      ; 004d9659 | DAT_02cf5fd8
    PUSH EDI                            ; 004d965f
    PUSH 0x5c5bd3                       ; 004d9660 | = "useAGPFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d9665
    PUSH EAX                            ; 004d9669
    CALL FUN_004d8c90                   ; 004d966a
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d966f
    PUSH 0x606730                       ; 004d9672 | DAT_00606730
    PUSH 0x5c5bde                       ; 004d9677 | = "rendererDLLPath"
    LEA EAX,[ESP + 0x8]                 ; 004d967c
    PUSH EAX                            ; 004d9680
    CALL FUN_004d8bb0                   ; 004d9681
        ;   XREF to: 004d8bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8bb0()
    MOV EAX,[0x005fe9dc]                ; 004d9686 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d968b
    MOV EBP,dword ptr [EAX + 0x248]     ; 004d968e | DAT_01d21554
    PUSH EBP                            ; 004d9694
    PUSH 0x5c5bee                       ; 004d9695 | = "gamma"
    LEA EAX,[ESP + 0x8]                 ; 004d969a
    PUSH EAX                            ; 004d969e
    CALL FUN_004d8c90                   ; 004d969f
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d96a4 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d96a9
    MOV EDX,dword ptr [EAX + 0xd8]      ; 004d96ac | DAT_01d213e4
    PUSH EDX                            ; 004d96b2
    PUSH 0x5c5bf4                       ; 004d96b3 | = "heroNumber"
    LEA EAX,[ESP + 0x8]                 ; 004d96b8
    PUSH EAX                            ; 004d96bc
    CALL FUN_004d8c90                   ; 004d96bd
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d96c2
    MOV EAX,[0x005fe9dc]                ; 004d96c5 | DAT_005fe9dc
    MOV ECX,dword ptr [EAX + 0xc]       ; 004d96ca | DAT_01d21318
    PUSH ECX                            ; 004d96cd
    PUSH 0x5c5bff                       ; 004d96ce | = "haloMode"
    LEA EAX,[ESP + 0x8]                 ; 004d96d3
    PUSH EAX                            ; 004d96d7
    CALL FUN_004d8c90                   ; 004d96d8
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d96dd
    MOV EBX,dword ptr [0x01d5bc7c]      ; 004d96e0 | DAT_01d5bc7c
    PUSH EBX                            ; 004d96e6
    PUSH 0x5c5c08                       ; 004d96e7 | = "firstTimeFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d96ec
    PUSH EAX                            ; 004d96f0
    CALL FUN_004d8c90                   ; 004d96f1
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d96f6 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d96fb
    MOV ESI,dword ptr [EAX + 0x10]      ; 004d96fe | DAT_01d2131c
    PUSH ESI                            ; 004d9701
    PUSH 0x5c5c16                       ; 004d9702 | = "subtitleMode"
    LEA EAX,[ESP + 0x8]                 ; 004d9707
    PUSH EAX                            ; 004d970b
    CALL FUN_004d8c90                   ; 004d970c
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9711 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9716
    MOV EDI,dword ptr [EAX + 0x14]      ; 004d9719 | DAT_01d21320
    PUSH EDI                            ; 004d971c
    PUSH 0x5c5c23                       ; 004d971d | = "bloodFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d9722
    PUSH EAX                            ; 004d9726
    CALL FUN_004d8c90                   ; 004d9727
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d972c
    MOV EBP,dword ptr [0x01d74020]      ; 004d972f | DAT_01d74020
    PUSH EBP                            ; 004d9735
    PUSH 0x5c5c2d                       ; 004d9736 | = "currentBoard"
    LEA EAX,[ESP + 0x8]                 ; 004d973b
    PUSH EAX                            ; 004d973f
    CALL FUN_004d8c90                   ; 004d9740
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d9745
    PUSH 0x6000d0                       ; 004d9748 | = "Sound"
    LEA EAX,[ESP + 0x4]                 ; 004d974d
    PUSH EAX                            ; 004d9751
    CALL FUN_004d8ae0                   ; 004d9752
        ;   XREF to: 004d8ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8ae0()
    ADD ESP,0x8                         ; 004d9757
    MOV EAX,ESP                         ; 004d975a
    PUSH EAX                            ; 004d975c
    CALL FUN_00559520                   ; 004d975d
        ;   XREF to: 00559520 (UNCONDITIONAL_CALL)  ; undefined FUN_00559520()
    ADD ESP,0x4                         ; 004d9762
    PUSH 0x6000e8                       ; 004d9765 | = "Control"
    LEA EAX,[ESP + 0x4]                 ; 004d976a
    PUSH EAX                            ; 004d976e
    CALL FUN_004d8ae0                   ; 004d976f
        ;   XREF to: 004d8ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8ae0()
    MOV EAX,[0x005fe9dc]                ; 004d9774 | DAT_005fe9dc
    ADD ESP,0x8                         ; 004d9779
    MOV EDX,dword ptr [EAX + 0xd4]      ; 004d977c | DAT_01d213e0
    PUSH EDX                            ; 004d9782
    PUSH 0x5c5c3a                       ; 004d9783 | = "gameControl"
    LEA EAX,[ESP + 0x8]                 ; 004d9788
    PUSH EAX                            ; 004d978c
    CALL FUN_004d8c90                   ; 004d978d
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9792 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9797
    MOV ECX,dword ptr [EAX + 0x28]      ; 004d979a | DAT_01d21334
    PUSH ECX                            ; 004d979d
    PUSH 0x5c5c46                       ; 004d979e | = "keyWalk"
    LEA EAX,[ESP + 0x8]                 ; 004d97a3
    PUSH EAX                            ; 004d97a7
    CALL FUN_004d8c90                   ; 004d97a8
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d97ad | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d97b2
    MOV EBX,dword ptr [EAX + 0x2c]      ; 004d97b5 | DAT_01d21338
    PUSH EBX                            ; 004d97b8
    PUSH 0x5c5c4e                       ; 004d97b9 | = "keyBackup"
    LEA EAX,[ESP + 0x8]                 ; 004d97be
    PUSH EAX                            ; 004d97c2
    CALL FUN_004d8c90                   ; 004d97c3
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d97c8
    MOV EAX,[0x005fe9dc]                ; 004d97cb | DAT_005fe9dc
    MOV ESI,dword ptr [EAX + 0x30]      ; 004d97d0 | DAT_01d2133c
    PUSH ESI                            ; 004d97d3
    PUSH 0x5c5c58                       ; 004d97d4 | = "keyRun"
    LEA EAX,[ESP + 0x8]                 ; 004d97d9
    PUSH EAX                            ; 004d97dd
    CALL FUN_004d8c90                   ; 004d97de
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d97e3 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d97e8
    MOV EDI,dword ptr [EAX + 0x34]      ; 004d97eb | DAT_01d21340
    PUSH EDI                            ; 004d97ee
    PUSH 0x5c5c5f                       ; 004d97ef | = "keyStrafe"
    LEA EAX,[ESP + 0x8]                 ; 004d97f4
    PUSH EAX                            ; 004d97f8
    CALL FUN_004d8c90                   ; 004d97f9
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d97fe | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9803
    MOV EBP,dword ptr [EAX + 0x38]      ; 004d9806 | DAT_01d21344
    PUSH EBP                            ; 004d9809
    PUSH 0x5c5c69                       ; 004d980a | = "keyStrafeLeft"
    LEA EAX,[ESP + 0x8]                 ; 004d980f
    PUSH EAX                            ; 004d9813
    CALL FUN_004d8c90                   ; 004d9814
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9819 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d981e
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004d9821 | DAT_01d21348
    PUSH EDX                            ; 004d9824
    PUSH 0x5c5c77                       ; 004d9825 | = "keyStrafeRight"
    LEA EAX,[ESP + 0x8]                 ; 004d982a
    PUSH EAX                            ; 004d982e
    CALL FUN_004d8c90                   ; 004d982f
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9834 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9839
    MOV ECX,dword ptr [EAX + 0x40]      ; 004d983c | DAT_01d2134c
    PUSH ECX                            ; 004d983f
    PUSH 0x5c5c86                       ; 004d9840 | = "keyRight"
    LEA EAX,[ESP + 0x8]                 ; 004d9845
    PUSH EAX                            ; 004d9849
    CALL FUN_004d8c90                   ; 004d984a
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d984f | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9854
    MOV EBX,dword ptr [EAX + 0x44]      ; 004d9857 | DAT_01d21350
    PUSH EBX                            ; 004d985a
    PUSH 0x5c5c8f                       ; 004d985b | = "keyLeft"
    LEA EAX,[ESP + 0x8]                 ; 004d9860
    PUSH EAX                            ; 004d9864
    CALL FUN_004d8c90                   ; 004d9865
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d986a | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d986f
    MOV ESI,dword ptr [EAX + 0x48]      ; 004d9872 | DAT_01d21354
    PUSH ESI                            ; 004d9875
    PUSH 0x5c5c97                       ; 004d9876 | = "keyFire"
    LEA EAX,[ESP + 0x8]                 ; 004d987b
    PUSH EAX                            ; 004d987f
    CALL FUN_004d8c90                   ; 004d9880
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9885 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d988a
    MOV EDI,dword ptr [EAX + 0x4c]      ; 004d988d | DAT_01d21358
    PUSH EDI                            ; 004d9890
    PUSH 0x5c5c9f                       ; 004d9891 | = "keyAction"
    LEA EAX,[ESP + 0x8]                 ; 004d9896
    PUSH EAX                            ; 004d989a
    CALL FUN_004d8c90                   ; 004d989b
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d98a0 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d98a5
    MOV EBP,dword ptr [EAX + 0x50]      ; 004d98a8 | DAT_01d2135c
    PUSH EBP                            ; 004d98ab
    PUSH 0x5c5ca9                       ; 004d98ac | = "keyUseItem"
    LEA EAX,[ESP + 0x8]                 ; 004d98b1
    PUSH EAX                            ; 004d98b5
    CALL FUN_004d8c90                   ; 004d98b6
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d98bb | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d98c0
    MOV EDX,dword ptr [EAX + 0x54]      ; 004d98c3 | DAT_01d21360
    PUSH EDX                            ; 004d98c6
    PUSH 0x5c5cb4                       ; 004d98c7 | = "keyLight"
    LEA EAX,[ESP + 0x8]                 ; 004d98cc
    PUSH EAX                            ; 004d98d0
    CALL FUN_004d8c90                   ; 004d98d1
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d98d6
    MOV EAX,[0x005fe9dc]                ; 004d98d9 | DAT_005fe9dc
    MOV ECX,dword ptr [EAX + 0x5c]      ; 004d98de | DAT_01d21368
    PUSH ECX                            ; 004d98e1
    PUSH 0x5c5cbd                       ; 004d98e2 | = "keyFieldNotes"
    LEA EAX,[ESP + 0x8]                 ; 004d98e7
    PUSH EAX                            ; 004d98eb
    CALL FUN_004d8c90                   ; 004d98ec
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d98f1 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d98f6
    MOV EBX,dword ptr [EAX + 0x60]      ; 004d98f9 | DAT_01d2136c
    PUSH EBX                            ; 004d98fc
    PUSH 0x5c5ccb                       ; 004d98fd | = "keyMap"
    LEA EAX,[ESP + 0x8]                 ; 004d9902
    PUSH EAX                            ; 004d9906
    CALL FUN_004d8c90                   ; 004d9907
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d990c | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9911
    MOV ESI,dword ptr [EAX + 0x68]      ; 004d9914 | DAT_01d21374
    PUSH ESI                            ; 004d9917
    PUSH 0x5c5cd2                       ; 004d9918 | = "keyVoodooDoll"
    LEA EAX,[ESP + 0x8]                 ; 004d991d
    PUSH EAX                            ; 004d9921
    CALL FUN_004d8c90                   ; 004d9922
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9927 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d992c
    MOV EDI,dword ptr [EAX + 0x6c]      ; 004d992f | DAT_01d21378
    PUSH EDI                            ; 004d9932
    PUSH 0x5c5ce0                       ; 004d9933 | = "keyDraw"
    LEA EAX,[ESP + 0x8]                 ; 004d9938
    PUSH EAX                            ; 004d993c
    CALL FUN_004d8c90                   ; 004d993d
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9942 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9947
    MOV EBP,dword ptr [EAX + 0x74]      ; 004d994a | DAT_01d21380
    PUSH EBP                            ; 004d994d
    PUSH 0x5c5ce8                       ; 004d994e | = "keyQuickTurn"
    LEA EAX,[ESP + 0x8]                 ; 004d9953
    PUSH EAX                            ; 004d9957
    CALL FUN_004d8c90                   ; 004d9958
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d995d | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9962
    MOV EDX,dword ptr [EAX + 0x78]      ; 004d9965 | DAT_01d21384
    PUSH EDX                            ; 004d9968
    PUSH 0x5c5cf5                       ; 004d9969 | = "keyPointUp"
    LEA EAX,[ESP + 0x8]                 ; 004d996e
    PUSH EAX                            ; 004d9972
    CALL FUN_004d8c90                   ; 004d9973
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9978 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d997d
    MOV ECX,dword ptr [EAX + 0x7c]      ; 004d9980 | DAT_01d21388
    PUSH ECX                            ; 004d9983
    PUSH 0x5c5d00                       ; 004d9984 | = "keyPointDown"
    LEA EAX,[ESP + 0x8]                 ; 004d9989
    PUSH EAX                            ; 004d998d
    CALL FUN_004d8c90                   ; 004d998e
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9993 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9998
    MOV EBX,dword ptr [EAX + 0x80]      ; 004d999b | DAT_01d2138c
    PUSH EBX                            ; 004d99a1
    PUSH 0x5c5d0d                       ; 004d99a2 | = "keyWeapon1"
    LEA EAX,[ESP + 0x8]                 ; 004d99a7
    PUSH EAX                            ; 004d99ab
    CALL FUN_004d8c90                   ; 004d99ac
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d99b1 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d99b6
    MOV ESI,dword ptr [EAX + 0x84]      ; 004d99b9 | DAT_01d21390
    PUSH ESI                            ; 004d99bf
    PUSH 0x5c5d18                       ; 004d99c0 | = "keyWeapon2"
    LEA EAX,[ESP + 0x8]                 ; 004d99c5
    PUSH EAX                            ; 004d99c9
    CALL FUN_004d8c90                   ; 004d99ca
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d99cf | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d99d4
    MOV EDI,dword ptr [EAX + 0x88]      ; 004d99d7 | DAT_01d21394
    PUSH EDI                            ; 004d99dd
    PUSH 0x5c5d23                       ; 004d99de | = "keyWeapon3"
    LEA EAX,[ESP + 0x8]                 ; 004d99e3
    PUSH EAX                            ; 004d99e7
    CALL FUN_004d8c90                   ; 004d99e8
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d99ed
    MOV EAX,[0x005fe9dc]                ; 004d99f0 | DAT_005fe9dc
    MOV EBP,dword ptr [EAX + 0x8c]      ; 004d99f5 | DAT_01d21398
    PUSH EBP                            ; 004d99fb
    PUSH 0x5c5d2e                       ; 004d99fc | = "keyWeapon4"
    LEA EAX,[ESP + 0x8]                 ; 004d9a01
    PUSH EAX                            ; 004d9a05
    CALL FUN_004d8c90                   ; 004d9a06
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9a0b | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9a10
    MOV EDX,dword ptr [EAX + 0x90]      ; 004d9a13 | DAT_01d2139c
    PUSH EDX                            ; 004d9a19
    PUSH 0x5c5d39                       ; 004d9a1a | = "keyWeapon5"
    LEA EAX,[ESP + 0x8]                 ; 004d9a1f
    PUSH EAX                            ; 004d9a23
    CALL FUN_004d8c90                   ; 004d9a24
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9a29 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9a2e
    MOV ECX,dword ptr [EAX + 0x94]      ; 004d9a31 | DAT_01d213a0
    PUSH ECX                            ; 004d9a37
    PUSH 0x5c5d44                       ; 004d9a38 | = "keyNextWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004d9a3d
    PUSH EAX                            ; 004d9a41
    CALL FUN_004d8c90                   ; 004d9a42
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9a47 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9a4c
    MOV EBX,dword ptr [EAX + 0x98]      ; 004d9a4f | DAT_01d213a4
    PUSH EBX                            ; 004d9a55
    PUSH 0x5c5d52                       ; 004d9a56 | = "keyPrevWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004d9a5b
    PUSH EAX                            ; 004d9a5f
    CALL FUN_004d8c90                   ; 004d9a60
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9a65 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9a6a
    MOV ESI,dword ptr [EAX + 0x9c]      ; 004d9a6d | DAT_01d213a8
    PUSH ESI                            ; 004d9a73
    PUSH 0x5c5d60                       ; 004d9a74 | = "keyNextItem"
    LEA EAX,[ESP + 0x8]                 ; 004d9a79
    PUSH EAX                            ; 004d9a7d
    CALL FUN_004d8c90                   ; 004d9a7e
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9a83 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9a88
    MOV EDI,dword ptr [EAX + 0xa0]      ; 004d9a8b | DAT_01d213ac
    PUSH EDI                            ; 004d9a91
    PUSH 0x5c5d6c                       ; 004d9a92 | = "keyPrevItem"
    LEA EAX,[ESP + 0x8]                 ; 004d9a97
    PUSH EAX                            ; 004d9a9b
    CALL FUN_004d8c90                   ; 004d9a9c
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9aa1 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9aa6
    MOV EBP,dword ptr [EAX + 0xac]      ; 004d9aa9 | DAT_01d213b8
    PUSH EBP                            ; 004d9aaf
    PUSH 0x5c5d78                       ; 004d9ab0 | = "invertMouseYAxis"
    LEA EAX,[ESP + 0x8]                 ; 004d9ab5
    PUSH EAX                            ; 004d9ab9
    CALL FUN_004d8c90                   ; 004d9aba
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9abf | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9ac4
    MOV EDX,dword ptr [EAX + 0xb0]      ; 004d9ac7 | DAT_01d213bc
    PUSH EDX                            ; 004d9acd
    PUSH 0x5c5d89                       ; 004d9ace | = "alwaysRun"
    LEA EAX,[ESP + 0x8]                 ; 004d9ad3
    PUSH EAX                            ; 004d9ad7
    CALL FUN_004d8c90                   ; 004d9ad8
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9add | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9ae2
    MOV ECX,dword ptr [EAX + 0xb4]      ; 004d9ae5 | DAT_01d213c0
    PUSH ECX                            ; 004d9aeb
    PUSH 0x5c5d93                       ; 004d9aec | = "xMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004d9af1
    PUSH EAX                            ; 004d9af5
    CALL FUN_004d8c90                   ; 004d9af6
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9afb | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9b00
    MOV EBX,dword ptr [EAX + 0xb8]      ; 004d9b03 | DAT_01d213c4
    PUSH EBX                            ; 004d9b09
    PUSH 0x5c5da5                       ; 004d9b0a | = "yMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004d9b0f
    PUSH EAX                            ; 004d9b13
    CALL FUN_004d8c90                   ; 004d9b14
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d9b19
    MOV EAX,[0x005fe9dc]                ; 004d9b1c | DAT_005fe9dc
    MOV ESI,dword ptr [EAX + 0xbc]      ; 004d9b21 | DAT_01d213c8
    PUSH ESI                            ; 004d9b27
    PUSH 0x5c5db7                       ; 004d9b28 | = "xCenter"
    LEA EAX,[ESP + 0x8]                 ; 004d9b2d
    PUSH EAX                            ; 004d9b31
    CALL FUN_004d8c90                   ; 004d9b32
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9b37 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9b3c
    MOV EDI,dword ptr [EAX + 0xc0]      ; 004d9b3f | DAT_01d213cc
    PUSH EDI                            ; 004d9b45
    PUSH 0x5c5dbf                       ; 004d9b46 | = "yCenter"
    LEA EAX,[ESP + 0x8]                 ; 004d9b4b
    PUSH EAX                            ; 004d9b4f
    CALL FUN_004d8c90                   ; 004d9b50
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9b55 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9b5a
    MOV EBP,dword ptr [EAX + 0xc4]      ; 004d9b5d | DAT_01d213d0
    PUSH EBP                            ; 004d9b63
    PUSH 0x5c5dc7                       ; 004d9b64 | = "xStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004d9b69
    PUSH EAX                            ; 004d9b6d
    CALL FUN_004d8c90                   ; 004d9b6e
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9b73 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9b78
    MOV EDX,dword ptr [EAX + 0xc8]      ; 004d9b7b | DAT_01d213d4
    PUSH EDX                            ; 004d9b81
    PUSH 0x5c5dd1                       ; 004d9b82 | = "xStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004d9b87
    PUSH EAX                            ; 004d9b8b
    CALL FUN_004d8c90                   ; 004d9b8c
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9b91 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9b96
    MOV ECX,dword ptr [EAX + 0xcc]      ; 004d9b99 | DAT_01d213d8
    PUSH ECX                            ; 004d9b9f
    PUSH 0x5c5ddb                       ; 004d9ba0 | = "yStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004d9ba5
    PUSH EAX                            ; 004d9ba9
    CALL FUN_004d8c90                   ; 004d9baa
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9baf | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9bb4
    MOV EBX,dword ptr [EAX + 0xd0]      ; 004d9bb7 | DAT_01d213dc
    PUSH EBX                            ; 004d9bbd
    PUSH 0x5c5de5                       ; 004d9bbe | = "yStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004d9bc3
    PUSH EAX                            ; 004d9bc7
    CALL FUN_004d8c90                   ; 004d9bc8
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9bcd | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9bd2
    MOV ESI,dword ptr [EAX + 0xdc]      ; 004d9bd5 | DAT_01d213e8
    PUSH ESI                            ; 004d9bdb
    PUSH 0x5c5def                       ; 004d9bdc | = "aimMode"
    LEA EAX,[ESP + 0x8]                 ; 004d9be1
    PUSH EAX                            ; 004d9be5
    CALL FUN_004d8c90                   ; 004d9be6
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9beb | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9bf0
    MOV EDI,dword ptr [EAX + 0xe0]      ; 004d9bf3 | DAT_01d213ec
    PUSH EDI                            ; 004d9bf9
    PUSH 0x5c5df7                       ; 004d9bfa | = "show_hero_numbers"
    LEA EAX,[ESP + 0x8]                 ; 004d9bff
    PUSH EAX                            ; 004d9c03
    CALL FUN_004d8c90                   ; 004d9c04
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EAX,[0x005fe9dc]                ; 004d9c09 | DAT_005fe9dc
    ADD ESP,0xc                         ; 004d9c0e
    MOV EBP,dword ptr [EAX + 0xe4]      ; 004d9c11 | DAT_01d213f0
    PUSH EBP                            ; 004d9c17
    PUSH 0x5c5e09                       ; 004d9c18 | = "show_crosshair"
    LEA EAX,[ESP + 0x8]                 ; 004d9c1d
    PUSH EAX                            ; 004d9c21
    CALL FUN_004d8c90                   ; 004d9c22
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d9c27
    PUSH 0x600120                       ; 004d9c2a | = "Debug"
    LEA EAX,[ESP + 0x4]                 ; 004d9c2f
    PUSH EAX                            ; 004d9c33
    CALL FUN_004d8ae0                   ; 004d9c34
        ;   XREF to: 004d8ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8ae0()
    MOV EAX,[0x005f1690]                ; 004d9c39 | PTR_DAT_005f1690
    ADD ESP,0x8                         ; 004d9c3e
    MOV EDX,dword ptr [EAX]             ; 004d9c41 | DAT_007f7ea4
    PUSH EDX                            ; 004d9c43
    PUSH 0x5c5e18                       ; 004d9c44 | = "logConsoleFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d9c49
    PUSH EAX                            ; 004d9c4d
    CALL FUN_004d8c90                   ; 004d9c4e
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 004d9c53
    PUSH 0x600128                       ; 004d9c56 | = "Editor"
    LEA EAX,[ESP + 0x4]                 ; 004d9c5b
    PUSH EAX                            ; 004d9c5f
    CALL FUN_004d8ae0                   ; 004d9c60
        ;   XREF to: 004d8ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8ae0()
    ADD ESP,0x8                         ; 004d9c65
    PUSH 0x0                            ; 004d9c68
    LEA EAX,[ESP + 0x4]                 ; 004d9c6a
    PUSH EAX                            ; 004d9c6e
    CALL FUN_004d8a50                   ; 004d9c6f
        ;   XREF to: 004d8a50 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8a50()
    ADD ESP,0x8                         ; 004d9c74
    ADD ESP,0x204                       ; 004d9c77
    POP EBP                             ; 004d9c7d
    POP EDI                             ; 004d9c7e
    POP ESI                             ; 004d9c7f
    POP EBX                             ; 004d9c80
    RET                                 ; 004d9c81

