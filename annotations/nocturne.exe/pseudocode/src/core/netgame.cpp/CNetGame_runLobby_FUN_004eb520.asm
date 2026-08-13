; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_004eb520(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_joinNetworkGame_FUN_004a5e40 at 004a5eb1
;
; Referenced Globals:
;   TerminatedCString s_You_have_been_disconnect_0058c160
;   TerminatedCString s_Mission_s_0058c18a
;   TerminatedCString s_MyGameSettigsId_d_0058c196
;   TerminatedCString s_Player_0058c1aa
;   TerminatedCString s_IP_0058c1b1
;   TerminatedCString s_Ping_0058c1b4
;   TerminatedCString s_Ready_0058c1b9
;   TerminatedCString s_heroType_0058c1bf
;   TerminatedCString s_gameSettings_0058c1c8
;   TerminatedCString s_Local_0058c1d5
;   TerminatedCString s_Local_0058c1dd
;   TerminatedCString s_dms_0058c1e5
;   TerminatedCString s_anon_0058c1ea
;   TerminatedCString s_Ready_0058c1ec
;   TerminatedCString s_Not_ready_0058c1f2
;   ... and 24 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040dd20
;   core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80
;   core_mission.cpp_CDemonMission_load_FUN_004d7ee0
;   core_mission.cpp_CDemonMission_startMission_FUN_004d9780
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90
;   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70
;   core_netgame.cpp_CNetGame_processChatOut_FUN_004ebfd0
;   core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740
;   core_netgame.cpp_CNetGame_sendGameSetting_FUN_004ecf50
;   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370
;   core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdlib.c_rand_FUN_0056488c
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb520
        ;   Label: core_netgame.cpp_CNetGame_runLobby_FUN_004eb520
    PUSH ESI                            ; 004eb521
    PUSH EDI                            ; 004eb522
    PUSH EBP                            ; 004eb523
    MOV EBP,ESP                         ; 004eb524
    SUB ESP,0x124                       ; 004eb526
    AND ESP,0xfffffff8                  ; 004eb52c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb52f
    CMP dword ptr [EAX],0x0             ; 004eb532
    JZ 0x004eb885                       ; 004eb535
        ;   XREF to: 004eb885 (CONDITIONAL_JUMP)  ; LAB_004eb885
    MOV EAX,[0x005c1664]                ; 004eb53b | DAT_005c1664
    MOV dword ptr [ESP + 0x108],EAX     ; 004eb540
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb547
    MOV EAX,dword ptr [EAX + 0x114]     ; 004eb54a
    SHL EAX,0x3                         ; 004eb550
    MOV EDX,EAX                         ; 004eb553
    SHL EAX,0x4                         ; 004eb555
    MOV EBX,dword ptr [EBP + 0x14]      ; 004eb558
    SUB EAX,EDX                         ; 004eb55b
    ADD EAX,EBX                         ; 004eb55d
    MOV dword ptr [EAX + 0x5c],0x1      ; 004eb55f
    MOV EAX,dword ptr [EBX + 0x114]     ; 004eb566
    SHL EAX,0x3                         ; 004eb56c
    MOV EDX,EAX                         ; 004eb56f
    SHL EAX,0x4                         ; 004eb571
    SUB EAX,EDX                         ; 004eb574
    ADD EAX,EBX                         ; 004eb576
    XOR ECX,ECX                         ; 004eb578
    MOV dword ptr [EAX + 0x64],ECX      ; 004eb57a
    MOV dword ptr [0x005c1664],ECX      ; 004eb57d | DAT_005c1664
    MOV EDI,dword ptr [EBX]             ; 004eb583
    MOV dword ptr [EBX + 0x4],0x1       ; 004eb585
    CMP EDI,0x1                         ; 004eb58c
    JZ 0x004eb837                       ; 004eb58f
        ;   XREF to: 004eb837 (CONDITIONAL_JUMP)  ; LAB_004eb837
    PUSH EBX                            ; 004eb595
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170 ; 004eb596
        ;   XREF to: 004ed170 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004eb59b
        ;   Label: LAB_004eb59b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb59e
    ADD EAX,0x118                       ; 004eb5a1
    MOV dword ptr [ESP + 0x10c],EAX     ; 004eb5a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb5ad
        ;   Label: LAB_004eb5ad
    CMP dword ptr [EAX],0x0             ; 004eb5b0
    JZ 0x004eb84d                       ; 004eb5b3
        ;   XREF to: 004eb84d (CONDITIONAL_JUMP)  ; LAB_004eb84d
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 004eb5b9
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    MOV EBX,dword ptr [ESP + 0x10c]     ; 004eb5be
    PUSH EBX                            ; 004eb5c5
    PUSH 0x58c18a                       ; 004eb5c6 | = "Mission: %s"
    LEA EAX,[ESP + 0x10]                ; 004eb5cb
    PUSH EAX                            ; 004eb5cf
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004eb5d0
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004eb5d5
    PUSH 0xb                            ; 004eb5d8
    PUSH 0x0                            ; 004eb5da
    LEA EAX,[ESP + 0x10]                ; 004eb5dc
    PUSH EAX                            ; 004eb5e0
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb5e1
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb5e6
    MOV ESI,dword ptr [0x01cea404]      ; 004eb5e9 | DAT_01cea404
    PUSH ESI                            ; 004eb5ef
    PUSH 0x58c196                       ; 004eb5f0 | = "MyGameSettigsId: %d"
    LEA EAX,[ESP + 0x10]                ; 004eb5f5
    PUSH EAX                            ; 004eb5f9
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004eb5fa
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004eb5ff
    PUSH 0xb                            ; 004eb602
    PUSH 0x190                          ; 004eb604
    LEA EAX,[ESP + 0x10]                ; 004eb609
    PUSH EAX                            ; 004eb60d
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb60e
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb613
    PUSH 0x21                           ; 004eb616
    PUSH 0x0                            ; 004eb618
    PUSH 0x58c1aa                       ; 004eb61a | = "Player"
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb61f
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb624
    PUSH 0x21                           ; 004eb627
    PUSH 0x64                           ; 004eb629
    PUSH 0x58c1b1                       ; 004eb62b | = "IP"
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb630
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb635
    PUSH 0x21                           ; 004eb638
    PUSH 0xc8                           ; 004eb63a
    PUSH 0x58c1b4                       ; 004eb63f | = "Ping"
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb644
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb649
    PUSH 0x21                           ; 004eb64c
    PUSH 0x12c                          ; 004eb64e
    PUSH 0x58c1b9                       ; 004eb653 | = "Ready"
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb658
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb65d
    PUSH 0x21                           ; 004eb660
    PUSH 0x190                          ; 004eb662
    PUSH 0x58c1bf                       ; 004eb667 | = "heroType"
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb66c
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb671
    PUSH 0x21                           ; 004eb674
    PUSH 0x1f4                          ; 004eb676
    PUSH 0x58c1c8                       ; 004eb67b | = "gameSettings"
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb680
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    MOV EAX,[0x005b761c]                ; 004eb685 | g_WindowWidth
    ADD ESP,0xc                         ; 004eb68a
    DEC EAX                             ; 004eb68d
    PUSH EAX                            ; 004eb68e
    PUSH 0x31                           ; 004eb68f
    MOV EDI,0xff                        ; 004eb691
    PUSH 0x0                            ; 004eb696
    MOV dword ptr [0x01c00c70],EDI      ; 004eb698 | g_ActiveRenderColor
    CALL engine_2d.c_drawHLine_FUN_00403bd0 ; 004eb69e
        ;   XREF to: 00403bd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00403bd0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 004eb6a3
    XOR EAX,EAX                         ; 004eb6a6
    MOV EBX,0x37                        ; 004eb6a8
    MOV dword ptr [ESP + 0x118],EAX     ; 004eb6ad
    MOV dword ptr [ESP + 0x114],EAX     ; 004eb6b4
    MOV ESI,dword ptr [0x005bdee0]      ; 004eb6bb | g_CNetGame_PTR_005bdee0
        ;   Label: LAB_004eb6bb
    MOV EAX,dword ptr [ESP + 0x118]     ; 004eb6c1
    CMP EAX,dword ptr [ESI + 0x1c]      ; 004eb6c8
    JGE 0x004eb938                      ; 004eb6cb
        ;   XREF to: 004eb938 (CONDITIONAL_JUMP)  ; LAB_004eb938
    PUSH EBX                            ; 004eb6d1
    MOV EAX,dword ptr [ESP + 0x118]     ; 004eb6d2
    ADD ESI,0x20                        ; 004eb6d9
    PUSH 0x0                            ; 004eb6dc
    ADD EAX,ESI                         ; 004eb6de
    PUSH EAX                            ; 004eb6e0
    MOV dword ptr [ESP + 0x128],EAX     ; 004eb6e1
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb6e8
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb6ed
    MOV ESI,dword ptr [ESP + 0x11c]     ; 004eb6f0
    MOV EDX,dword ptr [0x02dd10c4]      ; 004eb6f7 | DAT_02dd10c4
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004eb6fd
    ADD ESI,0x1c                        ; 004eb700
    CMP EAX,EDX                         ; 004eb703
    JNZ 0x004eb88e                      ; 004eb705
        ;   XREF to: 004eb88e (CONDITIONAL_JUMP)  ; LAB_004eb88e
    MOV ESI,0x58c1d5                    ; 004eb70b | = "(Local)"
    LEA EDI,[ESP + 0x8]                 ; 004eb710
    PUSH EDI                            ; 004eb714
    MOV AL,byte ptr [ESI]               ; 004eb715
        ;   Label: LAB_004eb715
    MOV byte ptr [EDI],AL               ; 004eb717
    CMP AL,0x0                          ; 004eb719
    JZ 0x004eb72d                       ; 004eb71b
        ;   XREF to: 004eb72d (CONDITIONAL_JUMP)  ; LAB_004eb72d
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb71d
    ADD ESI,0x2                         ; 004eb720
    MOV byte ptr [EDI + 0x1],AL         ; 004eb723
    ADD EDI,0x2                         ; 004eb726
    CMP AL,0x0                          ; 004eb729
    JNZ 0x004eb715                      ; 004eb72b
        ;   XREF to: 004eb715 (CONDITIONAL_JUMP)  ; LAB_004eb715
    POP EDI                             ; 004eb72d
        ;   Label: LAB_004eb72d
    PUSH EBX                            ; 004eb72e
        ;   Label: LAB_004eb72e
    PUSH 0x64                           ; 004eb72f
    LEA EAX,[ESP + 0x10]                ; 004eb731
    PUSH EAX                            ; 004eb735
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb736
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb73b
    MOV EAX,[0x005bdee0]                ; 004eb73e | g_CNetGame_PTR_005bdee0
    MOV EDX,dword ptr [ESP + 0x118]     ; 004eb743
    CMP EDX,dword ptr [EAX + 0x114]     ; 004eb74a
    JNZ 0x004eb8a1                      ; 004eb750
        ;   XREF to: 004eb8a1 (CONDITIONAL_JUMP)  ; LAB_004eb8a1
    MOV ESI,0x58c1dd                    ; 004eb756 | = "(Local)"
    LEA EDI,[ESP + 0x8]                 ; 004eb75b
        ;   Label: LAB_004eb75b
    PUSH EDI                            ; 004eb75f
    MOV AL,byte ptr [ESI]               ; 004eb760
        ;   Label: LAB_004eb760
    MOV byte ptr [EDI],AL               ; 004eb762
    CMP AL,0x0                          ; 004eb764
    JZ 0x004eb778                       ; 004eb766
        ;   XREF to: 004eb778 (CONDITIONAL_JUMP)  ; LAB_004eb778
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb768
    ADD ESI,0x2                         ; 004eb76b
    MOV byte ptr [EDI + 0x1],AL         ; 004eb76e
    ADD EDI,0x2                         ; 004eb771
    CMP AL,0x0                          ; 004eb774
    JNZ 0x004eb760                      ; 004eb776
        ;   XREF to: 004eb760 (CONDITIONAL_JUMP)  ; LAB_004eb760
    POP EDI                             ; 004eb778
        ;   Label: LAB_004eb778
    PUSH EBX                            ; 004eb779
        ;   Label: LAB_004eb779
    PUSH 0xc8                           ; 004eb77a
    LEA EAX,[ESP + 0x10]                ; 004eb77f
    PUSH EAX                            ; 004eb783
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb784
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb789
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004eb78c
    CMP dword ptr [EAX + 0x44],0x0      ; 004eb793
    JZ 0x004eb8f9                       ; 004eb797
        ;   XREF to: 004eb8f9 (CONDITIONAL_JUMP)  ; LAB_004eb8f9
    MOV ESI,0x58c1ec                    ; 004eb79d | = "Ready"
    LEA EDI,[ESP + 0x8]                 ; 004eb7a2
        ;   Label: LAB_004eb7a2
    PUSH EDI                            ; 004eb7a6
    MOV AL,byte ptr [ESI]               ; 004eb7a7
        ;   Label: LAB_004eb7a7
    MOV byte ptr [EDI],AL               ; 004eb7a9
    CMP AL,0x0                          ; 004eb7ab
    JZ 0x004eb7bf                       ; 004eb7ad
        ;   XREF to: 004eb7bf (CONDITIONAL_JUMP)  ; LAB_004eb7bf
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb7af
    ADD ESI,0x2                         ; 004eb7b2
    MOV byte ptr [EDI + 0x1],AL         ; 004eb7b5
    ADD EDI,0x2                         ; 004eb7b8
    CMP AL,0x0                          ; 004eb7bb
    JNZ 0x004eb7a7                      ; 004eb7bd
        ;   XREF to: 004eb7a7 (CONDITIONAL_JUMP)  ; LAB_004eb7a7
    POP EDI                             ; 004eb7bf
        ;   Label: LAB_004eb7bf
    PUSH EBX                            ; 004eb7c0
    PUSH 0x12c                          ; 004eb7c1
    LEA EAX,[ESP + 0x10]                ; 004eb7c6
    PUSH EAX                            ; 004eb7ca
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb7cb
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb7d0
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004eb7d3
    MOV EDX,dword ptr [EAX + 0x14]      ; 004eb7da
    PUSH EDX                            ; 004eb7dd
    PUSH 0x58c1fc                       ; 004eb7de | = "%d"
    LEA EAX,[ESP + 0x10]                ; 004eb7e3
    PUSH EAX                            ; 004eb7e7
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004eb7e8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004eb7ed
    PUSH EBX                            ; 004eb7f0
    PUSH 0x190                          ; 004eb7f1
    LEA EAX,[ESP + 0x10]                ; 004eb7f6
    PUSH EAX                            ; 004eb7fa
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb7fb
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb800
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb803
    CMP dword ptr [EAX],0x1             ; 004eb806
    JZ 0x004eb903                       ; 004eb809
        ;   XREF to: 004eb903 (CONDITIONAL_JUMP)  ; LAB_004eb903
    MOV EDI,dword ptr [ESP + 0x114]     ; 004eb80f
        ;   Label: LAB_004eb80f
    MOV EAX,dword ptr [ESP + 0x118]     ; 004eb816
    ADD EBX,0xb                         ; 004eb81d
    ADD EDI,0x78                        ; 004eb820
    INC EAX                             ; 004eb823
    MOV dword ptr [ESP + 0x114],EDI     ; 004eb824
    MOV dword ptr [ESP + 0x118],EAX     ; 004eb82b
    JMP 0x004eb6bb                      ; 004eb832
        ;   XREF to: 004eb6bb (UNCONDITIONAL_JUMP)  ; LAB_004eb6bb
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004eb837
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
        ;   Label: LAB_004eb837
    PUSH EBX                            ; 004eb83c
    MOV dword ptr [EBX + 0x16c],EAX     ; 004eb83d
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70 ; 004eb843
        ;   XREF to: 004ece70 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70(CNetGame * this_ptr)
    JMP 0x004eb59b                      ; 004eb848
        ;   XREF to: 004eb59b (UNCONDITIONAL_JUMP)  ; LAB_004eb59b
    PUSH 0x58c160                       ; 004eb84d | = "You have been disconnected from the g..."
        ;   Label: LAB_004eb84d
    MOV ECX,dword ptr [0x005b6d50]      ; 004eb852 | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 004eb858
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0046fe60 ; 004eb859
        ;   XREF to: 0046fe60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0046fe60(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004eb85e
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004eb861
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
        ;   Label: LAB_004eb861
    PUSH 0x1                            ; 004eb866
    MOV EBX,dword ptr [EBP + 0x14]      ; 004eb868
    PUSH EBX                            ; 004eb86b
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 004eb86c
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004eb871
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004eb874
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV EAX,dword ptr [ESP + 0x108]     ; 004eb879
    MOV [0x005c1664],EAX                ; 004eb880 | DAT_005c1664
    XOR EAX,EAX                         ; 004eb885
        ;   Label: LAB_004eb885
    MOV ESP,EBP                         ; 004eb887
    POP EBP                             ; 004eb889
    POP EDI                             ; 004eb88a
    POP ESI                             ; 004eb88b
    POP EBX                             ; 004eb88c
    RET                                 ; 004eb88d
    LEA EAX,[ESP + 0x8]                 ; 004eb88e
        ;   Label: LAB_004eb88e
    PUSH EAX                            ; 004eb892
    PUSH ESI                            ; 004eb893
    CALL support_trisock.cpp_formatIPAddress_FUN_00548bb0 ; 004eb894
        ;   XREF to: 00548bb0 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatIPAddress_FUN_00548bb0(char * output_buffer, uchar * ip_bytes)
    ADD ESP,0x8                         ; 004eb899
    JMP 0x004eb72e                      ; 004eb89c
        ;   XREF to: 004eb72e (UNCONDITIONAL_JUMP)  ; LAB_004eb72e
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004eb8a1
        ;   Label: LAB_004eb8a1
    FLD float ptr [EAX + 0x28]          ; 004eb8a8
    FLDZ                                ; 004eb8ab
    FCOMPP                              ; 004eb8ad
    FNSTSW AX                           ; 004eb8af
    SAHF                                ; 004eb8b1
    JA 0x004eb8ef                       ; 004eb8b2
        ;   XREF to: 004eb8ef (CONDITIONAL_JUMP)  ; LAB_004eb8ef
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004eb8b4
    FLD float ptr [EAX + 0x28]          ; 004eb8bb
    FMUL float ptr [0x0058c222]         ; 004eb8be | FLOAT_0058c222
    CALL crt_math.c_round_FUN_00563a30  ; 004eb8c4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x120]       ; 004eb8c9
    MOV ESI,dword ptr [ESP + 0x120]     ; 004eb8d0
    PUSH ESI                            ; 004eb8d7
    PUSH 0x58c1e5                       ; 004eb8d8 | = "%dms"
    LEA EAX,[ESP + 0x10]                ; 004eb8dd
    PUSH EAX                            ; 004eb8e1
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004eb8e2
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004eb8e7
    JMP 0x004eb779                      ; 004eb8ea
        ;   XREF to: 004eb779 (UNCONDITIONAL_JUMP)  ; LAB_004eb779
    MOV ESI,0x58c1ea                    ; 004eb8ef | = "?"
        ;   Label: LAB_004eb8ef
    JMP 0x004eb75b                      ; 004eb8f4
        ;   XREF to: 004eb75b (UNCONDITIONAL_JUMP)  ; LAB_004eb75b
    MOV ESI,0x58c1f2                    ; 004eb8f9 | = "Not ready"
        ;   Label: LAB_004eb8f9
    JMP 0x004eb7a2                      ; 004eb8fe
        ;   XREF to: 004eb7a2 (UNCONDITIONAL_JUMP)  ; LAB_004eb7a2
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004eb903
        ;   Label: LAB_004eb903
    MOV ESI,dword ptr [EAX + 0x34]      ; 004eb90a
    PUSH ESI                            ; 004eb90d
    PUSH 0x58c1ff                       ; 004eb90e | = "%d"
    LEA EAX,[ESP + 0x10]                ; 004eb913
    PUSH EAX                            ; 004eb917
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004eb918
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004eb91d
    PUSH EBX                            ; 004eb920
    PUSH 0x1f4                          ; 004eb921
    LEA EAX,[ESP + 0x10]                ; 004eb926
    PUSH EAX                            ; 004eb92a
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb92b
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb930
    JMP 0x004eb80f                      ; 004eb933
        ;   XREF to: 004eb80f (UNCONDITIONAL_JUMP)  ; LAB_004eb80f
    MOV EDX,dword ptr [0x005b7620]      ; 004eb938 | g_WindowHeight
        ;   Label: LAB_004eb938
    ADD EBX,0x2c                        ; 004eb93e
    SUB EDX,EBX                         ; 004eb941
    MOV ESI,0xb                         ; 004eb943
    MOV EAX,EDX                         ; 004eb948
    SAR EDX,0x1f                        ; 004eb94a
    IDIV ESI                            ; 004eb94d
    MOV ESI,dword ptr [0x01cea40c]      ; 004eb94f | DAT_01cea40c
    SUB ESI,EAX                         ; 004eb955
    INC ESI                             ; 004eb957
    TEST ESI,ESI                        ; 004eb958
    JL 0x004eb9c1                       ; 004eb95a
        ;   XREF to: 004eb9c1 (CONDITIONAL_JUMP)  ; LAB_004eb9c1
    IMUL EDI,ESI,0x120                  ; 004eb95c
        ;   Label: LAB_004eb95c
    LEA EAX,[EDI + 0x20]                ; 004eb962
    ADD EAX,0x1cea410                   ; 004eb965
    ADD EDI,0xc                         ; 004eb96a
    MOV dword ptr [ESP + 0x110],EAX     ; 004eb96d
    ADD EDI,0x1cea410                   ; 004eb974
    CMP ESI,dword ptr [0x01cea40c]      ; 004eb97a | DAT_01cea40c
        ;   Label: LAB_004eb97a
    JGE 0x004eb9c5                      ; 004eb980
        ;   XREF to: 004eb9c5 (CONDITIONAL_JUMP)  ; LAB_004eb9c5
    PUSH EBX                            ; 004eb982
    PUSH 0x0                            ; 004eb983
    PUSH EDI                            ; 004eb985
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb986
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb98b
    PUSH EBX                            ; 004eb98e
    PUSH 0x64                           ; 004eb98f
    MOV EAX,dword ptr [ESP + 0x118]     ; 004eb991
    PUSH EAX                            ; 004eb998
    CALL engine_2d.c_drawText_FUN_00402600 ; 004eb999
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb99e
    INC ESI                             ; 004eb9a1
    MOV EDX,dword ptr [ESP + 0x110]     ; 004eb9a2
    ADD EDI,0x120                       ; 004eb9a9
    ADD EDX,0x120                       ; 004eb9af
    ADD EBX,0xb                         ; 004eb9b5
    MOV dword ptr [ESP + 0x110],EDX     ; 004eb9b8
    JMP 0x004eb97a                      ; 004eb9bf
        ;   XREF to: 004eb97a (UNCONDITIONAL_JUMP)  ; LAB_004eb97a
    XOR ESI,ESI                         ; 004eb9c1
        ;   Label: LAB_004eb9c1
    JMP 0x004eb95c                      ; 004eb9c3
        ;   XREF to: 004eb95c (UNCONDITIONAL_JUMP)  ; LAB_004eb95c
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004eb9c5
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_004eb9c5
    MOV ECX,dword ptr [EBP + 0x14]      ; 004eb9ca
    PUSH ECX                            ; 004eb9cd
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740 ; 004eb9ce
        ;   XREF to: 004ea740 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004eb9d3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb9d6
    MOV ESI,dword ptr [EAX + 0x1c]      ; 004eb9d9
    XOR EBX,EBX                         ; 004eb9dc
    TEST ESI,ESI                        ; 004eb9de
    JLE 0x004eb9f9                      ; 004eb9e0
        ;   XREF to: 004eb9f9 (CONDITIONAL_JUMP)  ; LAB_004eb9f9
    MOV ESI,EAX                         ; 004eb9e2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb9e4
    MOV dword ptr [ESI + 0x68],0x0      ; 004eb9e7
        ;   Label: LAB_004eb9e7
    INC EBX                             ; 004eb9ee
    MOV ECX,dword ptr [EAX + 0x1c]      ; 004eb9ef
    ADD ESI,0x78                        ; 004eb9f2
    CMP EBX,ECX                         ; 004eb9f5
    JL 0x004eb9e7                       ; 004eb9f7
        ;   XREF to: 004eb9e7 (CONDITIONAL_JUMP)  ; LAB_004eb9e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb9f9
        ;   Label: LAB_004eb9f9
    MOV EBX,dword ptr [EAX]             ; 004eb9fc
    MOV dword ptr [EAX + 0x168],0x0     ; 004eb9fe
    CMP EBX,0x1                         ; 004eba08
    JNZ 0x004ebb87                      ; 004eba0b
        ;   XREF to: 004ebb87 (CONDITIONAL_JUMP)  ; LAB_004ebb87
    IMUL EAX,dword ptr [EAX + 0x114],0x78 ; 004eba11
    MOV EDX,dword ptr [EBP + 0x14]      ; 004eba18
    ADD EDX,EAX                         ; 004eba1b
    MOV EAX,[0x01cea404]                ; 004eba1d | DAT_01cea404
    MOV dword ptr [EDX + 0x54],EAX      ; 004eba22
    MOV EDX,dword ptr [EBP + 0x14]      ; 004eba25
    XOR ESI,ESI                         ; 004eba28
    MOV EDI,dword ptr [EDX + 0x1c]      ; 004eba2a
    MOV EAX,EBX                         ; 004eba2d
    TEST EDI,EDI                        ; 004eba2f
    JLE 0x004ebac2                      ; 004eba31
        ;   XREF to: 004ebac2 (CONDITIONAL_JUMP)  ; LAB_004ebac2
    MOV EBX,EDX                         ; 004eba37
    CMP dword ptr [EBX + 0x64],0x0      ; 004eba39
        ;   Label: LAB_004eba39
    JZ 0x004ebcb8                       ; 004eba3d
        ;   XREF to: 004ebcb8 (CONDITIONAL_JUMP)  ; LAB_004ebcb8
    MOV EDX,dword ptr [0x01cea404]      ; 004eba43 | DAT_01cea404
        ;   Label: LAB_004eba43
    CMP EDX,dword ptr [EBX + 0x54]      ; 004eba49
    JZ 0x004ebab0                       ; 004eba4c
        ;   XREF to: 004ebab0 (CONDITIONAL_JUMP)  ; LAB_004ebab0
    MOV EDX,dword ptr [0x01cea3f8]      ; 004eba4e | DAT_01cea3f8
    MOV EAX,dword ptr [EBX + 0x58]      ; 004eba54
    SUB EDX,EAX                         ; 004eba57
    MOV dword ptr [ESP + 0x120],EDX     ; 004eba59
    FILD dword ptr [ESP + 0x120]        ; 004eba60
    FMUL double ptr [0x0058c22a]        ; 004eba67 | DOUBLE_0058c22a
    FST float ptr [ESP]                 ; 004eba6d
    FLDZ                                ; 004eba70
    FCOMPP                              ; 004eba72
    FNSTSW AX                           ; 004eba74
    SAHF                                ; 004eba76
    JBE 0x004eba7e                      ; 004eba77
        ;   XREF to: 004eba7e (CONDITIONAL_JUMP)  ; LAB_004eba7e
    XOR ECX,ECX                         ; 004eba79
    MOV dword ptr [ESP],ECX             ; 004eba7b
    FLD float ptr [ESP]                 ; 004eba7e
        ;   Label: LAB_004eba7e
    FCOMP double ptr [0x0058c232]       ; 004eba81 | DOUBLE_0058c232
    FNSTSW AX                           ; 004eba87
    SAHF                                ; 004eba89
    JBE 0x004eba93                      ; 004eba8a
        ;   XREF to: 004eba93 (CONDITIONAL_JUMP)  ; LAB_004eba93
    MOV dword ptr [ESP],0x41f00000      ; 004eba8c
    FLD float ptr [ESP]                 ; 004eba93
        ;   Label: LAB_004eba93
    FCOMP double ptr [0x0058c23a]       ; 004eba96 | DOUBLE_0058c23a
    FNSTSW AX                           ; 004eba9c
    SAHF                                ; 004eba9e
    JBE 0x004ebaae                      ; 004eba9f
        ;   XREF to: 004ebaae (CONDITIONAL_JUMP)  ; LAB_004ebaae
    PUSH ESI                            ; 004ebaa1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebaa2
    PUSH EAX                            ; 004ebaa5
    CALL core_netgame.cpp_CNetGame_sendGameSetting_FUN_004ecf50 ; 004ebaa6
        ;   XREF to: 004ecf50 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendGameSetting_FUN_004ecf50(CNetGame * this_ptr, int player_index)
    ADD ESP,0x8                         ; 004ebaab
    XOR EAX,EAX                         ; 004ebaae
        ;   Label: LAB_004ebaae
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ebab0
        ;   Label: LAB_004ebab0
    INC ESI                             ; 004ebab3
    MOV ECX,dword ptr [EDX + 0x1c]      ; 004ebab4
    ADD EBX,0x78                        ; 004ebab7
    CMP ESI,ECX                         ; 004ebaba
    JL 0x004eba39                       ; 004ebabc
        ;   XREF to: 004eba39 (CONDITIONAL_JUMP)  ; LAB_004eba39
    TEST EAX,EAX                        ; 004ebac2
        ;   Label: LAB_004ebac2
    JZ 0x004ebb87                       ; 004ebac4
        ;   XREF to: 004ebb87 (CONDITIONAL_JUMP)  ; LAB_004ebb87
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebaca
    CMP dword ptr [EAX + 0x1c],0x1      ; 004ebacd
    JLE 0x004ebb87                      ; 004ebad1
        ;   XREF to: 004ebb87 (CONDITIONAL_JUMP)  ; LAB_004ebb87
    MOV dword ptr [EAX + 0x4],0x2       ; 004ebad7
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004ebade
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    PUSH 0x1                            ; 004ebae3
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ebae5
    PUSH ESI                            ; 004ebae8
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370 ; 004ebae9
        ;   XREF to: 004ea370 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 004ebaee
    TEST EAX,EAX                        ; 004ebaf1
    JZ 0x004ebb7d                       ; 004ebaf3
        ;   XREF to: 004ebb7d (CONDITIONAL_JUMP)  ; LAB_004ebb7d
    MOV EDI,dword ptr [ESP + 0x10c]     ; 004ebaf9
    PUSH EDI                            ; 004ebb00
    PUSH 0x58c202                       ; 004ebb01 | = "Loading %s"
    MOV EAX,[0x005b6d50]                ; 004ebb06 | g_CEditorTools_PTR_005b6d50
    PUSH EAX                            ; 004ebb0b
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0 ; 004ebb0c
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004ebb11
    MOV EDX,dword ptr [ESI + 0x16c]     ; 004ebb14
    PUSH EDX                            ; 004ebb1a
    CALL crt_stdlib.c_srand_FUN_005648b0 ; 004ebb1b
        ;   XREF to: 005648b0 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005648b0(uint seed)
    ADD ESP,0x4                         ; 004ebb20
    MOV ECX,dword ptr [ESI + 0x16c]     ; 004ebb23
    PUSH ECX                            ; 004ebb29
    CALL core_actor.cpp_setRandomSeed_FUN_0040dd20 ; 004ebb2a
        ;   XREF to: 0040dd20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040dd20(uint seed_value)
    ADD ESP,0x4                         ; 004ebb2f
    PUSH 0x0                            ; 004ebb32
    PUSH EDI                            ; 004ebb34
    MOV ESI,dword ptr [0x005baf90]      ; 004ebb35 | g_CDemonMission_PTR_005baf90
    PUSH ESI                            ; 004ebb3b
    CALL core_mission.cpp_CDemonMission_load_FUN_004d7ee0 ; 004ebb3c
        ;   XREF to: 004d7ee0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_004d7ee0(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 004ebb41
    PUSH 0x0                            ; 004ebb44
    MOV EDI,dword ptr [0x005baf90]      ; 004ebb46 | g_CDemonMission_PTR_005baf90
    PUSH EDI                            ; 004ebb4c
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80 ; 004ebb4d
        ;   XREF to: 004d9a80 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 004ebb52
    TEST EAX,EAX                        ; 004ebb55
    JZ 0x004ebb7d                       ; 004ebb57
        ;   XREF to: 004ebb7d (CONDITIONAL_JUMP)  ; LAB_004ebb7d
    MOV EAX,[0x005baf90]                ; 004ebb59 | g_CDemonMission_PTR_005baf90
    PUSH EAX                            ; 004ebb5e
    CALL core_mission.cpp_CDemonMission_startMission_FUN_004d9780 ; 004ebb5f
        ;   XREF to: 004d9780 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_startMission_FUN_004d9780(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004ebb64
    PUSH 0x2                            ; 004ebb67
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ebb69
    PUSH EDX                            ; 004ebb6c
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370 ; 004ebb6d
        ;   XREF to: 004ea370 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 004ebb72
    TEST EAX,EAX                        ; 004ebb75
    JNZ 0x004ebcbf                      ; 004ebb77
        ;   XREF to: 004ebcbf (CONDITIONAL_JUMP)  ; LAB_004ebcbf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebb7d
        ;   Label: LAB_004ebb7d
    MOV dword ptr [EAX + 0x4],0x1       ; 004ebb80
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebb87
        ;   Label: LAB_004ebb87
    MOV EDX,dword ptr [EAX]             ; 004ebb8a
    CMP EDX,0x2                         ; 004ebb8c
    JNZ 0x004ebb9a                      ; 004ebb8f
        ;   XREF to: 004ebb9a (CONDITIONAL_JUMP)  ; LAB_004ebb9a
    CMP EDX,dword ptr [EAX + 0x4]       ; 004ebb91
    JZ 0x004ebccb                       ; 004ebb94
        ;   XREF to: 004ebccb (CONDITIONAL_JUMP)  ; LAB_004ebccb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebb9a
        ;   Label: LAB_004ebb9a
    CMP dword ptr [EAX],0x2             ; 004ebb9d
    JNZ 0x004ebc1d                      ; 004ebba0
        ;   XREF to: 004ebc1d (CONDITIONAL_JUMP)  ; LAB_004ebc1d
    CMP dword ptr [0x005bdee4],0x0      ; 004ebba6 | g_INT_005bdee4
    JZ 0x004ebc1d                       ; 004ebbad
        ;   XREF to: 004ebc1d (CONDITIONAL_JUMP)  ; LAB_004ebc1d
    IMUL EAX,dword ptr [EAX + 0x114],0x78 ; 004ebbaf
    ADD EAX,dword ptr [EBP + 0x14]      ; 004ebbb6
    MOV EDX,dword ptr [0x01cea3f8]      ; 004ebbb9 | DAT_01cea3f8
    MOV EAX,dword ptr [EAX + 0x60]      ; 004ebbbf
    SUB EDX,EAX                         ; 004ebbc2
    MOV dword ptr [ESP + 0x120],EDX     ; 004ebbc4
    FILD dword ptr [ESP + 0x120]        ; 004ebbcb
    FMUL double ptr [0x0058c22a]        ; 004ebbd2 | DOUBLE_0058c22a
    FST float ptr [ESP + 0x4]           ; 004ebbd8
    FLDZ                                ; 004ebbdc
    FCOMPP                              ; 004ebbde
    FNSTSW AX                           ; 004ebbe0
    SAHF                                ; 004ebbe2
    JBE 0x004ebbeb                      ; 004ebbe3
        ;   XREF to: 004ebbeb (CONDITIONAL_JUMP)  ; LAB_004ebbeb
    XOR ECX,ECX                         ; 004ebbe5
    MOV dword ptr [ESP + 0x4],ECX       ; 004ebbe7
    FLD float ptr [ESP + 0x4]           ; 004ebbeb
        ;   Label: LAB_004ebbeb
    FCOMP double ptr [0x0058c232]       ; 004ebbef | DOUBLE_0058c232
    FNSTSW AX                           ; 004ebbf5
    SAHF                                ; 004ebbf7
    JBE 0x004ebc02                      ; 004ebbf8
        ;   XREF to: 004ebc02 (CONDITIONAL_JUMP)  ; LAB_004ebc02
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 004ebbfa
    FLD float ptr [ESP + 0x4]           ; 004ebc02
        ;   Label: LAB_004ebc02
    FCOMP double ptr [0x0058c23a]       ; 004ebc06 | DOUBLE_0058c23a
    FNSTSW AX                           ; 004ebc0c
    SAHF                                ; 004ebc0e
    JBE 0x004ebc1d                      ; 004ebc0f
        ;   XREF to: 004ebc1d (CONDITIONAL_JUMP)  ; LAB_004ebc1d
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ebc11
    PUSH ESI                            ; 004ebc14
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170 ; 004ebc15
        ;   XREF to: 004ed170 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004ebc1a
    PUSH 0x1                            ; 004ebc1d
        ;   Label: LAB_004ebc1d
    MOV EAX,[0x005bac64]                ; 004ebc1f | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004ebc24
    MOV EDX,dword ptr [EAX]             ; 004ebc25
    CALL dword ptr [EDX + 0x4]          ; 004ebc27
    ADD ESP,0x8                         ; 004ebc2a
    TEST EAX,EAX                        ; 004ebc2d
    JNZ 0x004eb861                      ; 004ebc2f
        ;   XREF to: 004eb861 (CONDITIONAL_JUMP)  ; LAB_004eb861
    PUSH 0x1c                           ; 004ebc35
    MOV EAX,[0x005bac64]                ; 004ebc37 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004ebc3c
    MOV EDX,dword ptr [EAX]             ; 004ebc3d
    CALL dword ptr [EDX + 0x4]          ; 004ebc3f
    ADD ESP,0x8                         ; 004ebc42
    TEST EAX,EAX                        ; 004ebc45
    JZ 0x004ebc7b                       ; 004ebc47
        ;   XREF to: 004ebc7b (CONDITIONAL_JUMP)  ; LAB_004ebc7b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebc49
    IMUL EAX,dword ptr [EAX + 0x114],0x78 ; 004ebc4c
    ADD EAX,dword ptr [EBP + 0x14]      ; 004ebc53
    CMP dword ptr [EAX + 0x64],0x0      ; 004ebc56
    SETZ DL                             ; 004ebc5a
    AND EDX,0xff                        ; 004ebc5d
    MOV dword ptr [EAX + 0x64],EDX      ; 004ebc63
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebc66
    CMP dword ptr [EAX],0x1             ; 004ebc69
    JNZ 0x004ebdbe                      ; 004ebc6c
        ;   XREF to: 004ebdbe (CONDITIONAL_JUMP)  ; LAB_004ebdbe
    PUSH EAX                            ; 004ebc72
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70 ; 004ebc73
        ;   XREF to: 004ece70 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004ebc78
        ;   Label: LAB_004ebc78
    PUSH 0x1f                           ; 004ebc7b
        ;   Label: LAB_004ebc7b
    MOV EAX,[0x005bac64]                ; 004ebc7d | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004ebc82
    MOV EDX,dword ptr [EAX]             ; 004ebc83
    CALL dword ptr [EDX + 0x4]          ; 004ebc85
    ADD ESP,0x8                         ; 004ebc88
    TEST EAX,EAX                        ; 004ebc8b
    JNZ 0x004ebdc9                      ; 004ebc8d
        ;   XREF to: 004ebdc9 (CONDITIONAL_JUMP)  ; LAB_004ebdc9
    XOR EBX,EBX                         ; 004ebc93
        ;   Label: LAB_004ebc93
    MOV EAX,[0x005bdee0]                ; 004ebc95 | g_CNetGame_PTR_005bdee0
        ;   Label: LAB_004ebc95
    CMP EBX,dword ptr [EAX + 0x1c]      ; 004ebc9a
    JGE 0x004eb5ad                      ; 004ebc9d
        ;   XREF to: 004eb5ad (CONDITIONAL_JUMP)  ; LAB_004eb5ad
    PUSH 0x40000000                     ; 004ebca3
    PUSH EBX                            ; 004ebca8
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ebca9
    PUSH ECX                            ; 004ebcac
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10 ; 004ebcad
        ;   XREF to: 004ebe10 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10(CNetGame * this_ptr, int player_index, float max_ping)
    INC EBX                             ; 004ebcb2
    ADD ESP,0xc                         ; 004ebcb3
    JMP 0x004ebc95                      ; 004ebcb6
        ;   XREF to: 004ebc95 (UNCONDITIONAL_JUMP)  ; LAB_004ebc95
    XOR EAX,EAX                         ; 004ebcb8
        ;   Label: LAB_004ebcb8
    JMP 0x004eba43                      ; 004ebcba
        ;   XREF to: 004eba43 (UNCONDITIONAL_JUMP)  ; LAB_004eba43
    MOV EAX,0x1                         ; 004ebcbf
        ;   Label: LAB_004ebcbf
    MOV ESP,EBP                         ; 004ebcc4
    POP EBP                             ; 004ebcc6
    POP EDI                             ; 004ebcc7
    POP ESI                             ; 004ebcc8
    POP EBX                             ; 004ebcc9
    RET                                 ; 004ebcca
    LEA EBX,[EAX + 0x118]               ; 004ebccb
        ;   Label: LAB_004ebccb
    PUSH EBX                            ; 004ebcd1
    PUSH 0x58c20d                       ; 004ebcd2 | = "Loading %s"
    MOV ECX,dword ptr [0x005b6d50]      ; 004ebcd7 | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 004ebcdd
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0 ; 004ebcde
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004ebce3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebce6
    MOV ESI,dword ptr [EAX + 0x16c]     ; 004ebce9
    PUSH ESI                            ; 004ebcef
    CALL crt_stdlib.c_srand_FUN_005648b0 ; 004ebcf0
        ;   XREF to: 005648b0 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005648b0(uint seed)
    ADD ESP,0x4                         ; 004ebcf5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebcf8
    MOV EDI,dword ptr [EAX + 0x16c]     ; 004ebcfb
    PUSH EDI                            ; 004ebd01
    CALL core_actor.cpp_setRandomSeed_FUN_0040dd20 ; 004ebd02
        ;   XREF to: 0040dd20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040dd20(uint seed_value)
    ADD ESP,0x4                         ; 004ebd07
    PUSH 0x0                            ; 004ebd0a
    PUSH EBX                            ; 004ebd0c
    MOV EAX,[0x005baf90]                ; 004ebd0d | g_CDemonMission_PTR_005baf90
    PUSH EAX                            ; 004ebd12
    CALL core_mission.cpp_CDemonMission_load_FUN_004d7ee0 ; 004ebd13
        ;   XREF to: 004d7ee0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_004d7ee0(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 004ebd18
    PUSH 0x0                            ; 004ebd1b
    MOV EDX,dword ptr [0x005baf90]      ; 004ebd1d | g_CDemonMission_PTR_005baf90
    PUSH EDX                            ; 004ebd23
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80 ; 004ebd24
        ;   XREF to: 004d9a80 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 004ebd29
    TEST EAX,EAX                        ; 004ebd2c
    JZ 0x004ebdaf                       ; 004ebd2e
        ;   XREF to: 004ebdaf (CONDITIONAL_JUMP)  ; LAB_004ebdaf
    MOV ECX,dword ptr [0x005baf90]      ; 004ebd34 | g_CDemonMission_PTR_005baf90
    PUSH ECX                            ; 004ebd3a
    CALL core_mission.cpp_CDemonMission_startMission_FUN_004d9780 ; 004ebd3b
        ;   XREF to: 004d9780 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_startMission_FUN_004d9780(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004ebd40
    PUSH 0x2                            ; 004ebd43
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ebd45
    PUSH EBX                            ; 004ebd48
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370 ; 004ebd49
        ;   XREF to: 004ea370 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 004ebd4e
    TEST EAX,EAX                        ; 004ebd51
    JZ 0x004ebdaf                       ; 004ebd53
        ;   XREF to: 004ebdaf (CONDITIONAL_JUMP)  ; LAB_004ebdaf
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004ebd55
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,EAX                         ; 004ebd5a
    MOV EBX,0x12                        ; 004ebd5c
    SAR EDX,0x1f                        ; 004ebd61
    IDIV EBX                            ; 004ebd64
    MOV ESI,dword ptr [0x01cea3f4]      ; 004ebd66 | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ebd6c
    SUB EAX,ESI                         ; 004ebd6e
    MOV dword ptr [0x01cea3f4],EDX      ; 004ebd70 | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ebd76
    JL 0x004ebdab                       ; 004ebd78
        ;   XREF to: 004ebdab (CONDITIONAL_JUMP)  ; LAB_004ebdab
    CMP EAX,0x20000                     ; 004ebd7a
    JLE 0x004ebd86                      ; 004ebd7f
        ;   XREF to: 004ebd86 (CONDITIONAL_JUMP)  ; LAB_004ebd86
    MOV EAX,0x20000                     ; 004ebd81
    MOV EDI,dword ptr [0x01cea3f8]      ; 004ebd86 | DAT_01cea3f8
        ;   Label: LAB_004ebd86
    ADD EDI,EAX                         ; 004ebd8c
    MOV dword ptr [0x01cea3f8],EDI      ; 004ebd8e | DAT_01cea3f8
    LEA EAX,[EDI + 0xffe20000]          ; 004ebd94
    MOV [0x01cea408],EAX                ; 004ebd9a | DAT_01cea408
    MOV EAX,0x1                         ; 004ebd9f
    MOV ESP,EBP                         ; 004ebda4
    POP EBP                             ; 004ebda6
    POP EDI                             ; 004ebda7
    POP ESI                             ; 004ebda8
    POP EBX                             ; 004ebda9
    RET                                 ; 004ebdaa
    XOR EAX,EAX                         ; 004ebdab
        ;   Label: LAB_004ebdab
    JMP 0x004ebd86                      ; 004ebdad
        ;   XREF to: 004ebd86 (UNCONDITIONAL_JUMP)  ; LAB_004ebd86
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebdaf
        ;   Label: LAB_004ebdaf
    MOV dword ptr [EAX + 0x4],0x1       ; 004ebdb2
    JMP 0x004eb861                      ; 004ebdb9
        ;   XREF to: 004eb861 (UNCONDITIONAL_JUMP)  ; LAB_004eb861
    PUSH EAX                            ; 004ebdbe
        ;   Label: LAB_004ebdbe
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170 ; 004ebdbf
        ;   XREF to: 004ed170 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170(CNetGame * this_ptr)
    JMP 0x004ebc78                      ; 004ebdc4
        ;   XREF to: 004ebc78 (UNCONDITIONAL_JUMP)  ; LAB_004ebc78
    PUSH 0x1                            ; 004ebdc9
        ;   Label: LAB_004ebdc9
    PUSH 0x100                          ; 004ebdcb
    PUSH 0x1cea180                      ; 004ebdd0
    PUSH 0x58c218                       ; 004ebdd5 | = "Send chat"
    MOV EAX,[0x005b6d50]                ; 004ebdda | g_CEditorTools_PTR_005b6d50
    PUSH EAX                            ; 004ebddf
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600 ; 004ebde0
        ;   XREF to: 00471600 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004ebde5
    TEST EAX,EAX                        ; 004ebde8
    JZ 0x004ebc93                       ; 004ebdea
        ;   XREF to: 004ebc93 (CONDITIONAL_JUMP)  ; LAB_004ebc93
    PUSH -0x1                           ; 004ebdf0
    PUSH 0x1cea180                      ; 004ebdf2
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ebdf7
    PUSH EDX                            ; 004ebdfa
    CALL core_netgame.cpp_CNetGame_processChatOut_FUN_004ebfd0 ; 004ebdfb
        ;   XREF to: 004ebfd0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processChatOut_FUN_004ebfd0(CNetGame * this_ptr, char * message, int target_player)
    ADD ESP,0xc                         ; 004ebe00
    JMP 0x004ebc93                      ; 004ebe03
        ;   XREF to: 004ebc93 (UNCONDITIONAL_JUMP)  ; LAB_004ebc93

