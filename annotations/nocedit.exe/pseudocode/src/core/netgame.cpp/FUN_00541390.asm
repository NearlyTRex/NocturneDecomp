; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_FUN_00541390()
;
; Local Variables:
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0x130]:1  local_130
; undefined1       Stack[-0x12f]:1  local_12f
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_game.cpp_FUN_004e2f10 at 004e2f64
;   core_game.cpp_FUN_004e2fc0 at 004e3031
;
; Referenced Globals:
;   TerminatedCString s_You_have_been_disconnect_0063d983
;   TerminatedCString s_Mission_s_0063d9ad
;   TerminatedCString s_MyGameSettigsId_d_0063d9b9
;   TerminatedCString s_Player_0063d9cd
;   TerminatedCString s_IP_0063d9d4
;   TerminatedCString s_Ping_0063d9d7
;   TerminatedCString s_Ready_0063d9dc
;   TerminatedCString s_heroType_0063d9e2
;   TerminatedCString s_gameSettings_0063d9eb
;   TerminatedCString s_Local_0063d9f8
;   undefined4 s_Local)_0063d9f9
;   undefined4 s_ocal)_0063d9fa
;   undefined4 s_cal)_0063d9fb
;   TerminatedCString s_Local_0063da00
;   undefined4 s_Local)_0063da01
;   ... and 49 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040cb90
;   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
;   core_mission.cpp_CDemonMission_FUN_00524760
;   core_mission.cpp_CDemonMission_load_FUN_00522d90
;   core_netgame.cpp_CNetGame_FUN_0053fd00
;   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
;   core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40
;   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
;   core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
;   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
;   core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdlib.c_rand_FUN_005feb5c
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541390
        ;   Label: core_netgame.cpp_FUN_00541390
    PUSH ESI                            ; 00541391
    PUSH EDI                            ; 00541392
    PUSH EBP                            ; 00541393
    MOV EBP,ESP                         ; 00541394
    SUB ESP,0x124                       ; 00541396
    AND ESP,0xfffffff8                  ; 0054139c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054139f
    CMP dword ptr [EAX],0x0             ; 005413a2
    JZ 0x005416f5                       ; 005413a5 | LAB_005416f5
        ;   XREF to: 005416f5 (CONDITIONAL_JUMP)
    MOV EAX,[0x006849a8]                ; 005413ab | int g_ForceMessagePump
    MOV dword ptr [ESP + 0x108],EAX     ; 005413b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005413b7
    MOV EAX,dword ptr [EAX + 0x114]     ; 005413ba
    SHL EAX,0x3                         ; 005413c0
    MOV EDX,EAX                         ; 005413c3
    SHL EAX,0x4                         ; 005413c5
    MOV EBX,dword ptr [EBP + 0x14]      ; 005413c8
    SUB EAX,EDX                         ; 005413cb
    ADD EAX,EBX                         ; 005413cd
    MOV dword ptr [EAX + 0x5c],0x1      ; 005413cf
    MOV EAX,dword ptr [EBX + 0x114]     ; 005413d6
    SHL EAX,0x3                         ; 005413dc
    MOV EDX,EAX                         ; 005413df
    SHL EAX,0x4                         ; 005413e1
    SUB EAX,EDX                         ; 005413e4
    ADD EAX,EBX                         ; 005413e6
    XOR ECX,ECX                         ; 005413e8
    MOV dword ptr [EAX + 0x64],ECX      ; 005413ea
    MOV dword ptr [0x006849a8],ECX      ; 005413ed | int g_ForceMessagePump
    MOV EDI,dword ptr [EBX]             ; 005413f3
    MOV dword ptr [EBX + 0x4],0x1       ; 005413f5
    CMP EDI,0x1                         ; 005413fc
    JZ 0x005416a7                       ; 005413ff | LAB_005416a7
        ;   XREF to: 005416a7 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00541405
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0 ; 00541406 | undefined core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0()
        ;   XREF to: 00542ff0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054140b
        ;   Label: LAB_0054140b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054140e
    ADD EAX,0x118                       ; 00541411
    MOV dword ptr [ESP + 0x10c],EAX     ; 00541416
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054141d
        ;   Label: LAB_0054141d
    CMP dword ptr [EAX],0x0             ; 00541420
    JZ 0x005416bd                       ; 00541423 | LAB_005416bd
        ;   XREF to: 005416bd (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00541429 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [ESP + 0x10c]     ; 0054142e
    PUSH EBX                            ; 00541435
    PUSH 0x63d9ad                       ; 00541436 | = "Mission: %s" | s_Mission_s_0063d9ad = Mission: %s
    LEA EAX,[ESP + 0x10]                ; 0054143b
    PUSH EAX                            ; 0054143f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00541440 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00541445
    PUSH 0xb                            ; 00541448
    PUSH 0x0                            ; 0054144a
    LEA EAX,[ESP + 0x10]                ; 0054144c
    PUSH EAX                            ; 00541450
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00541451 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00541456
    MOV ESI,dword ptr [0x02f7c8c4]      ; 00541459 | undefined4 DAT_02f7c8c4
    PUSH ESI                            ; 0054145f
    PUSH 0x63d9b9                       ; 00541460 | = "MyGameSettigsId: %d" | s_MyGameSettigsId_d_0063d9b9 = MyGameSettigsId: %d
    LEA EAX,[ESP + 0x10]                ; 00541465
    PUSH EAX                            ; 00541469
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054146a | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054146f
    PUSH 0xb                            ; 00541472
    PUSH 0x190                          ; 00541474
    LEA EAX,[ESP + 0x10]                ; 00541479
    PUSH EAX                            ; 0054147d
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054147e | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00541483
    PUSH 0x21                           ; 00541486
    PUSH 0x0                            ; 00541488
    PUSH 0x63d9cd                       ; 0054148a | = "Player" | s_Player_0063d9cd = Player
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054148f | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00541494
    PUSH 0x21                           ; 00541497
    PUSH 0x64                           ; 00541499
    PUSH 0x63d9d4                       ; 0054149b | = "IP" | s_IP_0063d9d4 = IP
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005414a0 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005414a5
    PUSH 0x21                           ; 005414a8
    PUSH 0xc8                           ; 005414aa
    PUSH 0x63d9d7                       ; 005414af | = "Ping" | s_Ping_0063d9d7 = Ping
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005414b4 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005414b9
    PUSH 0x21                           ; 005414bc
    PUSH 0x12c                          ; 005414be
    PUSH 0x63d9dc                       ; 005414c3 | = "Ready" | s_Ready_0063d9dc = Ready
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005414c8 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005414cd
    PUSH 0x21                           ; 005414d0
    PUSH 0x190                          ; 005414d2
    PUSH 0x63d9e2                       ; 005414d7 | = "heroType" | s_heroType_0063d9e2 = heroType
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005414dc | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005414e1
    PUSH 0x21                           ; 005414e4
    PUSH 0x1f4                          ; 005414e6
    PUSH 0x63d9eb                       ; 005414eb | = "gameSettings" | s_gameSettings_0063d9eb = gameSettings
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005414f0 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679394]                ; 005414f5 | int g_WindowWidth
    ADD ESP,0xc                         ; 005414fa
    DEC EAX                             ; 005414fd
    PUSH EAX                            ; 005414fe
    PUSH 0x31                           ; 005414ff
    MOV EDI,0xff                        ; 00541501
    PUSH 0x0                            ; 00541506
    MOV dword ptr [0x02d02570],EDI      ; 00541508 | int g_ActiveRenderColor
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 0054150e | void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00541513
    XOR EAX,EAX                         ; 00541516
    MOV EBX,0x37                        ; 00541518
    MOV dword ptr [ESP + 0x118],EAX     ; 0054151d
    MOV dword ptr [ESP + 0x114],EAX     ; 00541524
    MOV ESI,dword ptr [0x00680a00]      ; 0054152b | CNetGame * g_CNetGameInstance
        ;   Label: LAB_0054152b
    MOV EAX,dword ptr [ESP + 0x118]     ; 00541531
    CMP EAX,dword ptr [ESI + 0x1c]      ; 00541538 | undefined4 DAT_02f7c75c
    JGE 0x005417a8                      ; 0054153b | LAB_005417a8
        ;   XREF to: 005417a8 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00541541
    MOV EAX,dword ptr [ESP + 0x118]     ; 00541542
    ADD ESI,0x20                        ; 00541549
    PUSH 0x0                            ; 0054154c
    ADD EAX,ESI                         ; 0054154e
    PUSH EAX                            ; 00541550
    MOV dword ptr [ESP + 0x128],EAX     ; 00541551
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00541558 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054155d
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00541560
    MOV EDX,dword ptr [0x03f87498]      ; 00541567 | uchar[4] g_AnyAddressIP
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0054156d | DAT_02f7c77c
    ADD ESI,0x1c                        ; 00541570
    CMP EAX,EDX                         ; 00541573
    JNZ 0x005416fe                      ; 00541575 | LAB_005416fe
        ;   XREF to: 005416fe (CONDITIONAL_JUMP)
    MOV ESI,0x63d9f8                    ; 0054157b | = "(Local)" | s_Local_0063d9f8 = (Local)
    LEA EDI,[ESP + 0x8]                 ; 00541580
    PUSH EDI                            ; 00541584
    MOV AL,byte ptr [ESI]               ; 00541585 | = "(Local)" | s_Local_0063d9f8 = (Local)
        ;   Label: LAB_00541585
    MOV byte ptr [EDI],AL               ; 00541587
    CMP AL,0x0                          ; 00541589
    JZ 0x0054159d                       ; 0054158b | LAB_0054159d
        ;   XREF to: 0054159d (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054158d | s_Local)_0063d9f9
    ADD ESI,0x2                         ; 00541590
    MOV byte ptr [EDI + 0x1],AL         ; 00541593
    ADD EDI,0x2                         ; 00541596
    CMP AL,0x0                          ; 00541599
    JNZ 0x00541585                      ; 0054159b | LAB_00541585
        ;   XREF to: 00541585 (CONDITIONAL_JUMP)
    POP EDI                             ; 0054159d
        ;   Label: LAB_0054159d
    PUSH EBX                            ; 0054159e
        ;   Label: LAB_0054159e
    PUSH 0x64                           ; 0054159f
    LEA EAX,[ESP + 0x10]                ; 005415a1
    PUSH EAX                            ; 005415a5
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005415a6 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005415ab
    MOV EAX,[0x00680a00]                ; 005415ae | CNetGame * g_CNetGameInstance
    MOV EDX,dword ptr [ESP + 0x118]     ; 005415b3
    CMP EDX,dword ptr [EAX + 0x114]     ; 005415ba | undefined4 DAT_02f7c854
    JNZ 0x00541711                      ; 005415c0 | LAB_00541711
        ;   XREF to: 00541711 (CONDITIONAL_JUMP)
    MOV ESI,0x63da00                    ; 005415c6 | = "(Local)" | s_Local_0063da00 = (Local)
    LEA EDI,[ESP + 0x8]                 ; 005415cb
        ;   Label: LAB_005415cb
    PUSH EDI                            ; 005415cf
    MOV AL,byte ptr [ESI]               ; 005415d0 | = "(Local)" | s_Local_0063da00 = (Local) | s_anon_0063da0d = ?
        ;   Label: LAB_005415d0
    MOV byte ptr [EDI],AL               ; 005415d2
    CMP AL,0x0                          ; 005415d4
    JZ 0x005415e8                       ; 005415d6 | LAB_005415e8
        ;   XREF to: 005415e8 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005415d8 | s_Local)_0063da01
    ADD ESI,0x2                         ; 005415db
    MOV byte ptr [EDI + 0x1],AL         ; 005415de
    ADD EDI,0x2                         ; 005415e1
    CMP AL,0x0                          ; 005415e4
    JNZ 0x005415d0                      ; 005415e6 | LAB_005415d0
        ;   XREF to: 005415d0 (CONDITIONAL_JUMP)
    POP EDI                             ; 005415e8
        ;   Label: LAB_005415e8
    PUSH EBX                            ; 005415e9
        ;   Label: LAB_005415e9
    PUSH 0xc8                           ; 005415ea
    LEA EAX,[ESP + 0x10]                ; 005415ef
    PUSH EAX                            ; 005415f3
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005415f4 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005415f9
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005415fc
    CMP dword ptr [EAX + 0x44],0x0      ; 00541603 | DAT_02f7c7a4
    JZ 0x00541769                       ; 00541607 | LAB_00541769
        ;   XREF to: 00541769 (CONDITIONAL_JUMP)
    MOV ESI,0x63da0f                    ; 0054160d | = "Ready" | s_Ready_0063da0f = Ready
    LEA EDI,[ESP + 0x8]                 ; 00541612
        ;   Label: LAB_00541612
    PUSH EDI                            ; 00541616
    MOV AL,byte ptr [ESI]               ; 00541617 | = "Ready" | s_Ready_0063da0f = Ready | s_Not_ready_0063da15 = Not ready
        ;   Label: LAB_00541617
    MOV byte ptr [EDI],AL               ; 00541619
    CMP AL,0x0                          ; 0054161b
    JZ 0x0054162f                       ; 0054161d | LAB_0054162f
        ;   XREF to: 0054162f (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054161f | s_eady_0063da10
    ADD ESI,0x2                         ; 00541622
    MOV byte ptr [EDI + 0x1],AL         ; 00541625
    ADD EDI,0x2                         ; 00541628
    CMP AL,0x0                          ; 0054162b
    JNZ 0x00541617                      ; 0054162d | LAB_00541617
        ;   XREF to: 00541617 (CONDITIONAL_JUMP)
    POP EDI                             ; 0054162f
        ;   Label: LAB_0054162f
    PUSH EBX                            ; 00541630
    PUSH 0x12c                          ; 00541631
    LEA EAX,[ESP + 0x10]                ; 00541636
    PUSH EAX                            ; 0054163a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054163b | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00541640
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00541643
    MOV EDX,dword ptr [EAX + 0x14]      ; 0054164a | undefined4 DAT_02f7c774
    PUSH EDX                            ; 0054164d
    PUSH 0x63da1f                       ; 0054164e | = "%d" | s_d_0063da1f = %d
    LEA EAX,[ESP + 0x10]                ; 00541653
    PUSH EAX                            ; 00541657
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00541658 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054165d
    PUSH EBX                            ; 00541660
    PUSH 0x190                          ; 00541661
    LEA EAX,[ESP + 0x10]                ; 00541666
    PUSH EAX                            ; 0054166a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054166b | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00541670
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541673
    CMP dword ptr [EAX],0x1             ; 00541676
    JZ 0x00541773                       ; 00541679 | LAB_00541773
        ;   XREF to: 00541773 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x114]     ; 0054167f
        ;   Label: LAB_0054167f
    MOV EAX,dword ptr [ESP + 0x118]     ; 00541686
    ADD EBX,0xb                         ; 0054168d
    ADD EDI,0x78                        ; 00541690
    INC EAX                             ; 00541693
    MOV dword ptr [ESP + 0x114],EDI     ; 00541694
    MOV dword ptr [ESP + 0x118],EAX     ; 0054169b
    JMP 0x0054152b                      ; 005416a2 | LAB_0054152b
        ;   XREF to: 0054152b (UNCONDITIONAL_JUMP)
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005416a7 | int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_005416a7
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 005416ac
    MOV dword ptr [EBX + 0x16c],EAX     ; 005416ad
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0 ; 005416b3 | undefined core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0()
        ;   XREF to: 00542cf0 (UNCONDITIONAL_CALL)
    JMP 0x0054140b                      ; 005416b8 | LAB_0054140b
        ;   XREF to: 0054140b (UNCONDITIONAL_JUMP)
    PUSH 0x63d983                       ; 005416bd | = "You have been disconnected from the g..." | s_You_have_been_disconnect_0063d983 = You have been disconnected from the game.
        ;   Label: LAB_005416bd
    MOV ECX,dword ptr [0x00678a60]      ; 005416c2 | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 005416c8 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 005416c9 | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005416ce
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005416d1 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_005416d1
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    PUSH 0x1                            ; 005416d6
    MOV EBX,dword ptr [EBP + 0x14]      ; 005416d8
    PUSH EBX                            ; 005416db
    CALL core_netgame.cpp_CNetGame_FUN_0053fd00 ; 005416dc | void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005416e1
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005416e4 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [ESP + 0x108]     ; 005416e9
    MOV [0x006849a8],EAX                ; 005416f0 | int g_ForceMessagePump
    XOR EAX,EAX                         ; 005416f5
        ;   Label: LAB_005416f5
    MOV ESP,EBP                         ; 005416f7
    POP EBP                             ; 005416f9
    POP EDI                             ; 005416fa
    POP ESI                             ; 005416fb
    POP EBX                             ; 005416fc
    RET                                 ; 005416fd
    LEA EAX,[ESP + 0x8]                 ; 005416fe
        ;   Label: LAB_005416fe
    PUSH EAX                            ; 00541702
    PUSH ESI                            ; 00541703
    CALL support_trisock.cpp_formatIPAddress_FUN_005e17c0 ; 00541704 | void support_trisock.cpp_formatIPAddress_FUN_005e17c0(char * output_buffer, uchar * ip_bytes)
        ;   XREF to: 005e17c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00541709
    JMP 0x0054159e                      ; 0054170c | LAB_0054159e
        ;   XREF to: 0054159e (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00541711
        ;   Label: LAB_00541711
    FLD float ptr [EAX + 0x28]          ; 00541718 | DAT_02f7c788
    FLDZ                                ; 0054171b
    FCOMPP                              ; 0054171d
    FNSTSW AX                           ; 0054171f
    SAHF                                ; 00541721
    JA 0x0054175f                       ; 00541722 | LAB_0054175f
        ;   XREF to: 0054175f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00541724
    FLD float ptr [EAX + 0x28]          ; 0054172b | DAT_02f7c788
    FMUL float ptr [0x0063da45]         ; 0054172e | DAT_0063da45
    CALL crt_math.c_round_FUN_005fe6b0  ; 00541734 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x120]       ; 00541739
    MOV ESI,dword ptr [ESP + 0x120]     ; 00541740
    PUSH ESI                            ; 00541747
    PUSH 0x63da08                       ; 00541748 | = "%dms" | s_dms_0063da08 = %dms
    LEA EAX,[ESP + 0x10]                ; 0054174d
    PUSH EAX                            ; 00541751
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00541752 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00541757
    JMP 0x005415e9                      ; 0054175a | LAB_005415e9
        ;   XREF to: 005415e9 (UNCONDITIONAL_JUMP)
    MOV ESI,0x63da0d                    ; 0054175f | = "?" | s_anon_0063da0d = ?
        ;   Label: LAB_0054175f
    JMP 0x005415cb                      ; 00541764 | LAB_005415cb
        ;   XREF to: 005415cb (UNCONDITIONAL_JUMP)
    MOV ESI,0x63da15                    ; 00541769 | = "Not ready" | s_Not_ready_0063da15 = Not ready
        ;   Label: LAB_00541769
    JMP 0x00541612                      ; 0054176e | LAB_00541612
        ;   XREF to: 00541612 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00541773
        ;   Label: LAB_00541773
    MOV ESI,dword ptr [EAX + 0x34]      ; 0054177a | DAT_02f7c794
    PUSH ESI                            ; 0054177d
    PUSH 0x63da22                       ; 0054177e | = "%d" | s_d_0063da22 = %d
    LEA EAX,[ESP + 0x10]                ; 00541783
    PUSH EAX                            ; 00541787
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00541788 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054178d
    PUSH EBX                            ; 00541790
    PUSH 0x1f4                          ; 00541791
    LEA EAX,[ESP + 0x10]                ; 00541796
    PUSH EAX                            ; 0054179a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054179b | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005417a0
    JMP 0x0054167f                      ; 005417a3 | LAB_0054167f
        ;   XREF to: 0054167f (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x00679398]      ; 005417a8 | int g_WindowHeight
        ;   Label: LAB_005417a8
    ADD EBX,0x2c                        ; 005417ae
    SUB EDX,EBX                         ; 005417b1
    MOV ESI,0xb                         ; 005417b3
    MOV EAX,EDX                         ; 005417b8
    SAR EDX,0x1f                        ; 005417ba
    IDIV ESI                            ; 005417bd
    MOV ESI,dword ptr [0x02f7c8cc]      ; 005417bf | int g_ChatHistoryCount
    SUB ESI,EAX                         ; 005417c5
    INC ESI                             ; 005417c7
    TEST ESI,ESI                        ; 005417c8
    JL 0x00541831                       ; 005417ca | LAB_00541831
        ;   XREF to: 00541831 (CONDITIONAL_JUMP)
    IMUL EDI,ESI,0x120                  ; 005417cc
        ;   Label: LAB_005417cc
    LEA EAX,[EDI + 0x20]                ; 005417d2
    ADD EAX,0x2f7c8d0                   ; 005417d5 | SChatHistory[400] g_ChatHistory
    ADD EDI,0xc                         ; 005417da
    MOV dword ptr [ESP + 0x110],EAX     ; 005417dd | DAT_02f7c8f0
    ADD EDI,0x2f7c8d0                   ; 005417e4 | SChatHistory[400] g_ChatHistory
    CMP ESI,dword ptr [0x02f7c8cc]      ; 005417ea | int g_ChatHistoryCount
        ;   Label: LAB_005417ea
    JGE 0x00541835                      ; 005417f0 | LAB_00541835
        ;   XREF to: 00541835 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005417f2
    PUSH 0x0                            ; 005417f3
    PUSH EDI                            ; 005417f5 | DAT_02f7c8dc
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005417f6 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005417fb
    PUSH EBX                            ; 005417fe
    PUSH 0x64                           ; 005417ff
    MOV EAX,dword ptr [ESP + 0x118]     ; 00541801
    PUSH EAX                            ; 00541808
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00541809 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054180e
    INC ESI                             ; 00541811
    MOV EDX,dword ptr [ESP + 0x110]     ; 00541812
    ADD EDI,0x120                       ; 00541819
    ADD EDX,0x120                       ; 0054181f
    ADD EBX,0xb                         ; 00541825
    MOV dword ptr [ESP + 0x110],EDX     ; 00541828
    JMP 0x005417ea                      ; 0054182f | LAB_005417ea
        ;   XREF to: 005417ea (UNCONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00541831
        ;   Label: LAB_00541831
    JMP 0x005417cc                      ; 00541833 | LAB_005417cc
        ;   XREF to: 005417cc (UNCONDITIONAL_JUMP)
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00541835 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_00541835
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054183a
    PUSH ECX                            ; 0054183d
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 ; 0054183e | void core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame * this_ptr)
        ;   XREF to: 005405b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00541843
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541846
    MOV ESI,dword ptr [EAX + 0x1c]      ; 00541849
    XOR EBX,EBX                         ; 0054184c
    TEST ESI,ESI                        ; 0054184e
    JLE 0x00541869                      ; 00541850 | LAB_00541869
        ;   XREF to: 00541869 (CONDITIONAL_JUMP)
    MOV ESI,EAX                         ; 00541852
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541854
    MOV dword ptr [ESI + 0x68],0x0      ; 00541857
        ;   Label: LAB_00541857
    INC EBX                             ; 0054185e
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0054185f
    ADD ESI,0x78                        ; 00541862
    CMP EBX,ECX                         ; 00541865
    JL 0x00541857                       ; 00541867 | LAB_00541857
        ;   XREF to: 00541857 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541869
        ;   Label: LAB_00541869
    MOV EBX,dword ptr [EAX]             ; 0054186c
    MOV dword ptr [EAX + 0x168],0x0     ; 0054186e
    CMP EBX,0x1                         ; 00541878
    JNZ 0x005419f7                      ; 0054187b | LAB_005419f7
        ;   XREF to: 005419f7 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EAX + 0x114],0x78 ; 00541881
    MOV EDX,dword ptr [EBP + 0x14]      ; 00541888
    ADD EDX,EAX                         ; 0054188b
    MOV EAX,[0x02f7c8c4]                ; 0054188d | undefined4 DAT_02f7c8c4
    MOV dword ptr [EDX + 0x54],EAX      ; 00541892
    MOV EDX,dword ptr [EBP + 0x14]      ; 00541895
    XOR ESI,ESI                         ; 00541898
    MOV EDI,dword ptr [EDX + 0x1c]      ; 0054189a
    MOV EAX,EBX                         ; 0054189d
    TEST EDI,EDI                        ; 0054189f
    JLE 0x00541932                      ; 005418a1 | LAB_00541932
        ;   XREF to: 00541932 (CONDITIONAL_JUMP)
    MOV EBX,EDX                         ; 005418a7
    CMP dword ptr [EBX + 0x64],0x0      ; 005418a9
        ;   Label: LAB_005418a9
    JZ 0x00541b28                       ; 005418ad | LAB_00541b28
        ;   XREF to: 00541b28 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02f7c8c4]      ; 005418b3 | undefined4 DAT_02f7c8c4
        ;   Label: LAB_005418b3
    CMP EDX,dword ptr [EBX + 0x54]      ; 005418b9
    JZ 0x00541920                       ; 005418bc | LAB_00541920
        ;   XREF to: 00541920 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02f7c8b8]      ; 005418be | uint g_CurrentGameTime
    MOV EAX,dword ptr [EBX + 0x58]      ; 005418c4
    SUB EDX,EAX                         ; 005418c7
    MOV dword ptr [ESP + 0x120],EDX     ; 005418c9
    FILD dword ptr [ESP + 0x120]        ; 005418d0
    FMUL double ptr [0x0063da4d]        ; 005418d7 | double DOUBLE_0063da4d
    FST float ptr [ESP]                 ; 005418dd
    FLDZ                                ; 005418e0
    FCOMPP                              ; 005418e2
    FNSTSW AX                           ; 005418e4
    SAHF                                ; 005418e6
    JBE 0x005418ee                      ; 005418e7 | LAB_005418ee
        ;   XREF to: 005418ee (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 005418e9
    MOV dword ptr [ESP],ECX             ; 005418eb
    FLD float ptr [ESP]                 ; 005418ee
        ;   Label: LAB_005418ee
    FCOMP double ptr [0x0063da55]       ; 005418f1 | double DOUBLE_0063da55
    FNSTSW AX                           ; 005418f7
    SAHF                                ; 005418f9
    JBE 0x00541903                      ; 005418fa | LAB_00541903
        ;   XREF to: 00541903 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP],0x41f00000      ; 005418fc
    FLD float ptr [ESP]                 ; 00541903
        ;   Label: LAB_00541903
    FCOMP double ptr [0x0063da5d]       ; 00541906 | double DOUBLE_0063da5d
    FNSTSW AX                           ; 0054190c
    SAHF                                ; 0054190e
    JBE 0x0054191e                      ; 0054190f | LAB_0054191e
        ;   XREF to: 0054191e (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00541911
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541912
    PUSH EAX                            ; 00541915
    CALL core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0 ; 00541916 | undefined core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0()
        ;   XREF to: 00542dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054191b
    XOR EAX,EAX                         ; 0054191e
        ;   Label: LAB_0054191e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00541920
        ;   Label: LAB_00541920
    INC ESI                             ; 00541923
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00541924
    ADD EBX,0x78                        ; 00541927
    CMP ESI,ECX                         ; 0054192a
    JL 0x005418a9                       ; 0054192c | LAB_005418a9
        ;   XREF to: 005418a9 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 00541932
        ;   Label: LAB_00541932
    JZ 0x005419f7                       ; 00541934 | LAB_005419f7
        ;   XREF to: 005419f7 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054193a
    CMP dword ptr [EAX + 0x1c],0x1      ; 0054193d
    JLE 0x005419f7                      ; 00541941 | LAB_005419f7
        ;   XREF to: 005419f7 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x4],0x2       ; 00541947
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0054194e | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    PUSH 0x1                            ; 00541953
    MOV ESI,dword ptr [EBP + 0x14]      ; 00541955
    PUSH ESI                            ; 00541958
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 ; 00541959 | int core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame * this_ptr, int sync_stage)
        ;   XREF to: 005401e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054195e
    TEST EAX,EAX                        ; 00541961
    JZ 0x005419ed                       ; 00541963 | LAB_005419ed
        ;   XREF to: 005419ed (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00541969
    PUSH EDI                            ; 00541970
    PUSH 0x63da25                       ; 00541971 | = "Loading %s" | s_Loading_s_0063da25 = Loading %s
    MOV EAX,[0x00678a60]                ; 00541976 | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 0054197b | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0054197c | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00541981
    MOV EDX,dword ptr [ESI + 0x16c]     ; 00541984
    PUSH EDX                            ; 0054198a
    CALL crt_stdlib.c_srand_FUN_005feb80 ; 0054198b | void crt_stdlib.c_srand_FUN_005feb80(uint seed)
        ;   XREF to: 005feb80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00541990
    MOV ECX,dword ptr [ESI + 0x16c]     ; 00541993
    PUSH ECX                            ; 00541999
    CALL core_actor.cpp_setRandomSeed_FUN_0040cb90 ; 0054199a | void core_actor.cpp_setRandomSeed_FUN_0040cb90(uint seed_value)
        ;   XREF to: 0040cb90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054199f
    PUSH 0x0                            ; 005419a2
    PUSH EDI                            ; 005419a4
    MOV ESI,dword ptr [0x0067d550]      ; 005419a5 | CDemonMission * g_CDemonMissionPtr
    PUSH ESI                            ; 005419ab | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 005419ac | void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005419b1
    PUSH 0x0                            ; 005419b4
    MOV EDI,dword ptr [0x0067d550]      ; 005419b6 | CDemonMission * g_CDemonMissionPtr
    PUSH EDI                            ; 005419bc | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 ; 005419bd | int core_mission.cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission * this_ptr, int creation_flags)
        ;   XREF to: 00524a80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005419c2
    TEST EAX,EAX                        ; 005419c5
    JZ 0x005419ed                       ; 005419c7 | LAB_005419ed
        ;   XREF to: 005419ed (CONDITIONAL_JUMP)
    MOV EAX,[0x0067d550]                ; 005419c9 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    PUSH EAX                            ; 005419ce | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_FUN_00524760 ; 005419cf | int core_mission.cpp_CDemonMission_FUN_00524760(CDemonMission * this_ptr)
        ;   XREF to: 00524760 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005419d4
    PUSH 0x2                            ; 005419d7
    MOV EDX,dword ptr [EBP + 0x14]      ; 005419d9
    PUSH EDX                            ; 005419dc
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 ; 005419dd | int core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame * this_ptr, int sync_stage)
        ;   XREF to: 005401e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005419e2
    TEST EAX,EAX                        ; 005419e5
    JNZ 0x00541b2f                      ; 005419e7 | LAB_00541b2f
        ;   XREF to: 00541b2f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005419ed
        ;   Label: LAB_005419ed
    MOV dword ptr [EAX + 0x4],0x1       ; 005419f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005419f7
        ;   Label: LAB_005419f7
    MOV EDX,dword ptr [EAX]             ; 005419fa
    CMP EDX,0x2                         ; 005419fc
    JNZ 0x00541a0a                      ; 005419ff | LAB_00541a0a
        ;   XREF to: 00541a0a (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [EAX + 0x4]       ; 00541a01
    JZ 0x00541b3b                       ; 00541a04 | LAB_00541b3b
        ;   XREF to: 00541b3b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541a0a
        ;   Label: LAB_00541a0a
    CMP dword ptr [EAX],0x2             ; 00541a0d
    JNZ 0x00541a8d                      ; 00541a10 | LAB_00541a8d
        ;   XREF to: 00541a8d (CONDITIONAL_JUMP)
    CMP dword ptr [0x00680a04],0x0      ; 00541a16 | undefined4 DAT_00680a04
    JZ 0x00541a8d                       ; 00541a1d | LAB_00541a8d
        ;   XREF to: 00541a8d (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EAX + 0x114],0x78 ; 00541a1f
    ADD EAX,dword ptr [EBP + 0x14]      ; 00541a26
    MOV EDX,dword ptr [0x02f7c8b8]      ; 00541a29 | uint g_CurrentGameTime
    MOV EAX,dword ptr [EAX + 0x60]      ; 00541a2f
    SUB EDX,EAX                         ; 00541a32
    MOV dword ptr [ESP + 0x120],EDX     ; 00541a34
    FILD dword ptr [ESP + 0x120]        ; 00541a3b
    FMUL double ptr [0x0063da4d]        ; 00541a42 | double DOUBLE_0063da4d
    FST float ptr [ESP + 0x4]           ; 00541a48
    FLDZ                                ; 00541a4c
    FCOMPP                              ; 00541a4e
    FNSTSW AX                           ; 00541a50
    SAHF                                ; 00541a52
    JBE 0x00541a5b                      ; 00541a53 | LAB_00541a5b
        ;   XREF to: 00541a5b (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 00541a55
    MOV dword ptr [ESP + 0x4],ECX       ; 00541a57
    FLD float ptr [ESP + 0x4]           ; 00541a5b
        ;   Label: LAB_00541a5b
    FCOMP double ptr [0x0063da55]       ; 00541a5f | double DOUBLE_0063da55
    FNSTSW AX                           ; 00541a65
    SAHF                                ; 00541a67
    JBE 0x00541a72                      ; 00541a68 | LAB_00541a72
        ;   XREF to: 00541a72 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 00541a6a
    FLD float ptr [ESP + 0x4]           ; 00541a72
        ;   Label: LAB_00541a72
    FCOMP double ptr [0x0063da5d]       ; 00541a76 | double DOUBLE_0063da5d
    FNSTSW AX                           ; 00541a7c
    SAHF                                ; 00541a7e
    JBE 0x00541a8d                      ; 00541a7f | LAB_00541a8d
        ;   XREF to: 00541a8d (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + 0x14]      ; 00541a81
    PUSH ESI                            ; 00541a84
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0 ; 00541a85 | undefined core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0()
        ;   XREF to: 00542ff0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00541a8a
    PUSH 0x1                            ; 00541a8d
        ;   Label: LAB_00541a8d
    MOV EAX,[0x0067cf44]                ; 00541a8f | CKeys * g_CKeysPtr
    PUSH EAX                            ; 00541a94 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 00541a95 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 00541a97
    ADD ESP,0x8                         ; 00541a9a
    TEST EAX,EAX                        ; 00541a9d
    JNZ 0x005416d1                      ; 00541a9f | LAB_005416d1
        ;   XREF to: 005416d1 (CONDITIONAL_JUMP)
    PUSH 0x1c                           ; 00541aa5
    MOV EAX,[0x0067cf44]                ; 00541aa7 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 00541aac | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 00541aad | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 00541aaf
    ADD ESP,0x8                         ; 00541ab2
    TEST EAX,EAX                        ; 00541ab5
    JZ 0x00541aeb                       ; 00541ab7 | LAB_00541aeb
        ;   XREF to: 00541aeb (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541ab9
    IMUL EAX,dword ptr [EAX + 0x114],0x78 ; 00541abc
    ADD EAX,dword ptr [EBP + 0x14]      ; 00541ac3
    CMP dword ptr [EAX + 0x64],0x0      ; 00541ac6
    SETZ DL                             ; 00541aca
    AND EDX,0xff                        ; 00541acd
    MOV dword ptr [EAX + 0x64],EDX      ; 00541ad3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541ad6
    CMP dword ptr [EAX],0x1             ; 00541ad9
    JNZ 0x00541c2e                      ; 00541adc | LAB_00541c2e
        ;   XREF to: 00541c2e (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00541ae2
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0 ; 00541ae3 | undefined core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0()
        ;   XREF to: 00542cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00541ae8
        ;   Label: LAB_00541ae8
    PUSH 0x1f                           ; 00541aeb
        ;   Label: LAB_00541aeb
    MOV EAX,[0x0067cf44]                ; 00541aed | CKeys * g_CKeysPtr
    PUSH EAX                            ; 00541af2 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 00541af3 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 00541af5
    ADD ESP,0x8                         ; 00541af8
    TEST EAX,EAX                        ; 00541afb
    JNZ 0x00541c39                      ; 00541afd | LAB_00541c39
        ;   XREF to: 00541c39 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00541b03
        ;   Label: LAB_00541b03
    MOV EAX,[0x00680a00]                ; 00541b05 | CNetGame * g_CNetGameInstance
        ;   Label: LAB_00541b05
    CMP EBX,dword ptr [EAX + 0x1c]      ; 00541b0a | undefined4 DAT_02f7c75c
    JGE 0x0054141d                      ; 00541b0d | LAB_0054141d
        ;   XREF to: 0054141d (CONDITIONAL_JUMP)
    PUSH 0x40000000                     ; 00541b13
    PUSH EBX                            ; 00541b18
    MOV ECX,dword ptr [EBP + 0x14]      ; 00541b19
    PUSH ECX                            ; 00541b1c
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_00541c80 ; 00541b1d | void core_netgame.cpp_CNetGame_updatePing_FUN_00541c80(CNetGame * this_ptr, int player_index, float max_ping)
        ;   XREF to: 00541c80 (UNCONDITIONAL_CALL)
    INC EBX                             ; 00541b22
    ADD ESP,0xc                         ; 00541b23
    JMP 0x00541b05                      ; 00541b26 | LAB_00541b05
        ;   XREF to: 00541b05 (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00541b28
        ;   Label: LAB_00541b28
    JMP 0x005418b3                      ; 00541b2a | LAB_005418b3
        ;   XREF to: 005418b3 (UNCONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00541b2f
        ;   Label: LAB_00541b2f
    MOV ESP,EBP                         ; 00541b34
    POP EBP                             ; 00541b36
    POP EDI                             ; 00541b37
    POP ESI                             ; 00541b38
    POP EBX                             ; 00541b39
    RET                                 ; 00541b3a
    LEA EBX,[EAX + 0x118]               ; 00541b3b
        ;   Label: LAB_00541b3b
    PUSH EBX                            ; 00541b41
    PUSH 0x63da30                       ; 00541b42 | = "Loading %s" | s_Loading_s_0063da30 = Loading %s
    MOV ECX,dword ptr [0x00678a60]      ; 00541b47 | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 00541b4d | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00541b4e | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00541b53
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541b56
    MOV ESI,dword ptr [EAX + 0x16c]     ; 00541b59
    PUSH ESI                            ; 00541b5f
    CALL crt_stdlib.c_srand_FUN_005feb80 ; 00541b60 | void crt_stdlib.c_srand_FUN_005feb80(uint seed)
        ;   XREF to: 005feb80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00541b65
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541b68
    MOV EDI,dword ptr [EAX + 0x16c]     ; 00541b6b
    PUSH EDI                            ; 00541b71
    CALL core_actor.cpp_setRandomSeed_FUN_0040cb90 ; 00541b72 | void core_actor.cpp_setRandomSeed_FUN_0040cb90(uint seed_value)
        ;   XREF to: 0040cb90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00541b77
    PUSH 0x0                            ; 00541b7a
    PUSH EBX                            ; 00541b7c
    MOV EAX,[0x0067d550]                ; 00541b7d | CDemonMission * g_CDemonMissionPtr
    PUSH EAX                            ; 00541b82 | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 00541b83 | void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00541b88
    PUSH 0x0                            ; 00541b8b
    MOV EDX,dword ptr [0x0067d550]      ; 00541b8d | CDemonMission * g_CDemonMissionPtr
    PUSH EDX                            ; 00541b93 | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 ; 00541b94 | int core_mission.cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission * this_ptr, int creation_flags)
        ;   XREF to: 00524a80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00541b99
    TEST EAX,EAX                        ; 00541b9c
    JZ 0x00541c1f                       ; 00541b9e | LAB_00541c1f
        ;   XREF to: 00541c1f (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x0067d550]      ; 00541ba4 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    PUSH ECX                            ; 00541baa | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_FUN_00524760 ; 00541bab | int core_mission.cpp_CDemonMission_FUN_00524760(CDemonMission * this_ptr)
        ;   XREF to: 00524760 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00541bb0
    PUSH 0x2                            ; 00541bb3
    MOV EBX,dword ptr [EBP + 0x14]      ; 00541bb5
    PUSH EBX                            ; 00541bb8
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 ; 00541bb9 | int core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame * this_ptr, int sync_stage)
        ;   XREF to: 005401e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00541bbe
    TEST EAX,EAX                        ; 00541bc1
    JZ 0x00541c1f                       ; 00541bc3 | LAB_00541c1f
        ;   XREF to: 00541c1f (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00541bc5 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 00541bca
    MOV EBX,0x12                        ; 00541bcc
    SAR EDX,0x1f                        ; 00541bd1
    IDIV EBX                            ; 00541bd4
    MOV ESI,dword ptr [0x02f7c8b4]      ; 00541bd6 | int g_LastPingTime
    MOV EDX,EAX                         ; 00541bdc
    SUB EAX,ESI                         ; 00541bde
    MOV dword ptr [0x02f7c8b4],EDX      ; 00541be0 | int g_LastPingTime
    TEST EAX,EAX                        ; 00541be6
    JL 0x00541c1b                       ; 00541be8 | LAB_00541c1b
        ;   XREF to: 00541c1b (CONDITIONAL_JUMP)
    CMP EAX,0x20000                     ; 00541bea
    JLE 0x00541bf6                      ; 00541bef | LAB_00541bf6
        ;   XREF to: 00541bf6 (CONDITIONAL_JUMP)
    MOV EAX,0x20000                     ; 00541bf1
    MOV EDI,dword ptr [0x02f7c8b8]      ; 00541bf6 | uint g_CurrentGameTime
        ;   Label: LAB_00541bf6
    ADD EDI,EAX                         ; 00541bfc
    MOV dword ptr [0x02f7c8b8],EDI      ; 00541bfe | uint g_CurrentGameTime
    LEA EAX,[EDI + 0xffe20000]          ; 00541c04
    MOV [0x02f7c8c8],EAX                ; 00541c0a | undefined4 DAT_02f7c8c8
    MOV EAX,0x1                         ; 00541c0f
    MOV ESP,EBP                         ; 00541c14
    POP EBP                             ; 00541c16
    POP EDI                             ; 00541c17
    POP ESI                             ; 00541c18
    POP EBX                             ; 00541c19
    RET                                 ; 00541c1a
    XOR EAX,EAX                         ; 00541c1b
        ;   Label: LAB_00541c1b
    JMP 0x00541bf6                      ; 00541c1d | LAB_00541bf6
        ;   XREF to: 00541bf6 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541c1f
        ;   Label: LAB_00541c1f
    MOV dword ptr [EAX + 0x4],0x1       ; 00541c22
    JMP 0x005416d1                      ; 00541c29 | LAB_005416d1
        ;   XREF to: 005416d1 (UNCONDITIONAL_JUMP)
    PUSH EAX                            ; 00541c2e
        ;   Label: LAB_00541c2e
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0 ; 00541c2f | undefined core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0()
        ;   XREF to: 00542ff0 (UNCONDITIONAL_CALL)
    JMP 0x00541ae8                      ; 00541c34 | LAB_00541ae8
        ;   XREF to: 00541ae8 (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 00541c39
        ;   Label: LAB_00541c39
    PUSH 0x100                          ; 00541c3b
    PUSH 0x2f7c640                      ; 00541c40 | DAT_02f7c640
    PUSH 0x63da3b                       ; 00541c45 | = "Send chat" | s_Send_chat_0063da3b = Send chat
    MOV EAX,[0x00678a60]                ; 00541c4a | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 00541c4f | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 00541c50 | int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00541c55
    TEST EAX,EAX                        ; 00541c58
    JZ 0x00541b03                       ; 00541c5a | LAB_00541b03
        ;   XREF to: 00541b03 (CONDITIONAL_JUMP)
    PUSH -0x1                           ; 00541c60
    PUSH 0x2f7c640                      ; 00541c62 | DAT_02f7c640
    MOV EDX,dword ptr [EBP + 0x14]      ; 00541c67
    PUSH EDX                            ; 00541c6a
    CALL core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40 ; 00541c6b | undefined core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40()
        ;   XREF to: 00541e40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00541c70
    JMP 0x00541b03                      ; 00541c73 | LAB_00541b03
        ;   XREF to: 00541b03 (UNCONDITIONAL_JUMP)

