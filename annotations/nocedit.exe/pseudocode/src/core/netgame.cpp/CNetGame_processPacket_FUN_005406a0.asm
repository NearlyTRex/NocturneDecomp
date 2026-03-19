; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_005406a0(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   source_addr
; UNetPacket *     Stack[0xc]:4   packet
; Local Variables:
; float            Stack[-0xf0]:4  local_f0
; float            Stack[-0xec]:4  local_ec
; float            Stack[-0xe8]:4  local_e8
; SNetPacketHeader Stack[-0xe4]:5  local_e4
; char[20]         Stack[-0xdf]:20  local_df
; char[80]         Stack[-0xcb]:80  local_cb
; uint             Stack[-0x7b]:4  local_7b
; undefined4       Stack[-0x77]:4  uStack_77
; SNetPacketHeader Stack[-0x70]:5  local_70
; uint             Stack[-0x6b]:4  local_6b
; SNetPacketHeader Stack[-0x64]:5  local_64
; int              Stack[-0x5f]:4  local_5f
; SNetPacketHeader[2] Stack[-0x58]:10  local_58
; SNetPacketHeader Stack[-0x4c]:5  local_4c
; int              Stack[-0x47]:4  local_47
; SNetPacketHeader Stack[-0x40]:5  local_40
; uint             Stack[-0x3b]:4  local_3b
; SNetworkAddr     Stack[-0x34]:8  local_34
; uint             Stack[-0x2c]:4  local_2c
; UNetPacket *     Stack[-0x28]:4  local_28
; SSimFrame *      Stack[-0x24]:4  local_24
; SNetPlayer *     Stack[-0x1c]:4  local_1c
; UNetPacket *     Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 at 0054063a
;
; Referenced Globals:
;   undefined4 caseD_e
;   void* switchdataD_00540654 = 0054044c
;   TerminatedCString s_core_netgame_cpp_0063d277
;   TerminatedCString s_allocSimFrame_sim_histor_0063d28b
;   TerminatedCString s_You_have_been_disconnect_0063d853
;   char s_EmptyChar_0063d87c = \x00
;   TerminatedCString s_core_netgame_cpp_0063d87d
;   TerminatedCString s_Player_list_mismatch_pro_0063d891
;   TerminatedCString s_core_netgame_cpp_0063d8c9
;   TerminatedCString s_Player_list_mismatch_0063d8dd
;   double DOUBLE_0063d8f5 = 0.0000152587890625
;   double DOUBLE_0063d8fd = -30
;   double DOUBLE_0063d905 = 30
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   ... and 28 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_netgame.cpp_CNetGame_addChatHistory_FUN_00542370
;   core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
;   core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00
;   core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_00541260
;   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
;   core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
;   core_netgame.cpp_CNetGame_send_FUN_005411c0
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930
;   core_netgame.cpp_CNetGame_sendPacket_FUN_00541230
;   crt_memory.c_memset_FUN_005fde40
;   crt_string.c__strcmp_FUN_005fef20
;   support_trisock.cpp_createNetworkAddr_FUN_005e1940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005406a0
        ;   Label: core_netgame.cpp_CNetGame_processPacket_FUN_005406a0
    PUSH ESI                            ; 005406a1
    PUSH EDI                            ; 005406a2
    PUSH EBP                            ; 005406a3
    MOV EBP,ESP                         ; 005406a4
    SUB ESP,0xe0                        ; 005406a6
    AND ESP,0xfffffff8                  ; 005406ac
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005406af
    MOV EDX,dword ptr [EBP + 0x18]      ; 005406b2
    PUSH EDX                            ; 005406b5
    MOV ECX,dword ptr [EBP + 0x14]      ; 005406b6
    PUSH ECX                            ; 005406b9
    XOR EDI,EDI                         ; 005406ba
    CALL core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_00541260 ; 005406bc
        ;   XREF to: 00541260 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_00541260(CNetGame * this_ptr, SNetworkAddr * addr)
    ADD ESP,0x8                         ; 005406c1
    MOV EBX,EAX                         ; 005406c4
    MOV dword ptr [ESP + 0xd4],EDI      ; 005406c6
    TEST EAX,EAX                        ; 005406cd
    JL 0x005406f2                       ; 005406cf
        ;   XREF to: 005406f2 (CONDITIONAL_JUMP)  ; LAB_005406f2
    SHL EAX,0x3                         ; 005406d1
    MOV EDX,EAX                         ; 005406d4
    SHL EAX,0x4                         ; 005406d6
    SUB EAX,EDX                         ; 005406d9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005406db
    ADD EDX,0x20                        ; 005406de
    ADD EDX,EAX                         ; 005406e1
    MOV EAX,[0x02f7c8b8]                ; 005406e3 | g_CurrentGameTime
    MOV dword ptr [ESP + 0xd4],EDX      ; 005406e8
    MOV dword ptr [EDX + 0x24],EAX      ; 005406ef
    MOV AL,byte ptr [ESI + 0x4]         ; 005406f2
        ;   Label: LAB_005406f2
    CMP AL,0x10                         ; 005406f5
    JA 0x0054044c                       ; 005406f7
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    AND EAX,0xff                        ; 005406fd
    JMP dword ptr [EAX*0x4 + 0x540654]  ; 00540702 | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540709
        ;   Label: caseD_1
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054070c
    MOV dword ptr [ESP + 0xc8],ESI      ; 0054070f
    CMP ECX,0x1                         ; 00540716
    JNZ 0x0054083e                      ; 00540719
        ;   XREF to: 0054083e (CONDITIONAL_JUMP)  ; LAB_0054083e
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0054071f
        ;   Label: LAB_0054071f
    ADD EAX,0xd                         ; 00540726
    TEST EBX,EBX                        ; 00540729
    JL 0x00540870                       ; 0054072b
        ;   XREF to: 00540870 (CONDITIONAL_JUMP)  ; LAB_00540870
    PUSH EAX                            ; 00540731
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00540732
    PUSH EAX                            ; 00540739
    CALL crt_string.c__strcmp_FUN_005fef20 ; 0054073a
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054073f
    TEST EAX,EAX                        ; 00540742
    JZ 0x00540897                       ; 00540744
        ;   XREF to: 00540897 (CONDITIONAL_JUMP)  ; LAB_00540897
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0054074a
        ;   Label: LAB_0054074a
    MOV EDI,dword ptr [ESP + 0xd4]      ; 00540751
    ADD ESI,0xd                         ; 00540758
    PUSH EDI                            ; 0054075b
    MOV AL,byte ptr [ESI]               ; 0054075c
        ;   Label: LAB_0054075c
    MOV byte ptr [EDI],AL               ; 0054075e
    CMP AL,0x0                          ; 00540760
    JZ 0x00540774                       ; 00540762
        ;   XREF to: 00540774 (CONDITIONAL_JUMP)  ; LAB_00540774
    MOV AL,byte ptr [ESI + 0x1]         ; 00540764
    ADD ESI,0x2                         ; 00540767
    MOV byte ptr [EDI + 0x1],AL         ; 0054076a
    ADD EDI,0x2                         ; 0054076d
    CMP AL,0x0                          ; 00540770
    JNZ 0x0054075c                      ; 00540772
        ;   XREF to: 0054075c (CONDITIONAL_JUMP)  ; LAB_0054075c
    POP EDI                             ; 00540774
        ;   Label: LAB_00540774
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00540775
    MOV EAX,dword ptr [EAX + 0x21]      ; 0054077c
    MOV dword ptr [EDI + 0x14],EAX      ; 0054077f
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00540782
    MOV EAX,dword ptr [EAX + 0x25]      ; 00540789
    MOV dword ptr [EDI + 0x18],EAX      ; 0054078c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054078f
    PUSH EDI                            ; 00540792
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0 ; 00540793
        ;   XREF to: 00542cf0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00540798
    MOV EAX,0x71                        ; 0054079b
        ;   Label: LAB_0054079b
    MOV DH,0x2                          ; 005407a0
    MOV ESI,dword ptr [EBP + 0x14]      ; 005407a2
    LEA EDI,[ESP + 0x25]                ; 005407a5
    MOV dword ptr [ESP + 0xc],EAX       ; 005407a9
    ADD ESI,0x118                       ; 005407ad
    MOV byte ptr [ESP + 0x10],DH        ; 005407b3
    PUSH EDI                            ; 005407b7
    MOV AL,byte ptr [ESI]               ; 005407b8
        ;   Label: LAB_005407b8
    MOV byte ptr [EDI],AL               ; 005407ba
    CMP AL,0x0                          ; 005407bc
    JZ 0x005407d0                       ; 005407be
        ;   XREF to: 005407d0 (CONDITIONAL_JUMP)  ; LAB_005407d0
    MOV AL,byte ptr [ESI + 0x1]         ; 005407c0
    ADD ESI,0x2                         ; 005407c3
    MOV byte ptr [EDI + 0x1],AL         ; 005407c6
    ADD EDI,0x2                         ; 005407c9
    CMP AL,0x0                          ; 005407cc
    JNZ 0x005407b8                      ; 005407ce
        ;   XREF to: 005407b8 (CONDITIONAL_JUMP)  ; LAB_005407b8
    POP EDI                             ; 005407d0
        ;   Label: LAB_005407d0
    MOV ESI,dword ptr [EBP + 0x14]      ; 005407d1
    LEA EDI,[ESP + 0x11]                ; 005407d4
    ADD ESI,0x8                         ; 005407d8
    PUSH EDI                            ; 005407db
    MOV AL,byte ptr [ESI]               ; 005407dc
        ;   Label: LAB_005407dc
    MOV byte ptr [EDI],AL               ; 005407de
    CMP AL,0x0                          ; 005407e0
    JZ 0x005407f4                       ; 005407e2
        ;   XREF to: 005407f4 (CONDITIONAL_JUMP)  ; LAB_005407f4
    MOV AL,byte ptr [ESI + 0x1]         ; 005407e4
    ADD ESI,0x2                         ; 005407e7
    MOV byte ptr [EDI + 0x1],AL         ; 005407ea
    ADD EDI,0x2                         ; 005407ed
    CMP AL,0x0                          ; 005407f0
    JNZ 0x005407dc                      ; 005407f2
        ;   XREF to: 005407dc (CONDITIONAL_JUMP)  ; LAB_005407dc
    POP EDI                             ; 005407f4
        ;   Label: LAB_005407f4
    LEA EAX,[ESP + 0xc]                 ; 005407f5
    PUSH EAX                            ; 005407f9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005407fa
    PUSH EBX                            ; 005407fd
    LEA EDI,[ESP + 0x7d]                ; 005407fe
    MOV ESI,dword ptr [EBP + 0x18]      ; 00540802
    PUSH EDX                            ; 00540805
    MOVSD ES:EDI,ESI                    ; 00540806
    MOVSD ES:EDI,ESI                    ; 00540807
    CALL core_netgame.cpp_CNetGame_send_FUN_005411c0 ; 00540808
        ;   XREF to: 005411c0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_005411c0(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0054080d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540810
    MOV EAX,dword ptr [EAX + 0x114]     ; 00540813
    SHL EAX,0x3                         ; 00540819
    MOV EDX,EAX                         ; 0054081c
    SHL EAX,0x4                         ; 0054081e
    MOV ECX,dword ptr [EBP + 0x14]      ; 00540821
    SUB EAX,EDX                         ; 00540824
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00540826
    ADD EAX,ECX                         ; 0054082d
    LEA ESI,[ESI + 0x5]                 ; 0054082f
    LEA EDI,[EAX + 0x3c]                ; 00540832
    MOVSD ES:EDI,ESI                    ; 00540835
    MOVSD ES:EDI,ESI                    ; 00540836
    MOV ESP,EBP                         ; 00540837
    POP EBP                             ; 00540839
    POP EDI                             ; 0054083a
    POP ESI                             ; 0054083b
    POP EBX                             ; 0054083c
    RET                                 ; 0054083d
    MOV AL,0x3                          ; 0054083e
        ;   Label: LAB_0054083e
    MOV byte ptr [ESP + 0x9c],AL        ; 00540840
    LEA EAX,[ESP + 0x98]                ; 00540847
    PUSH EAX                            ; 0054084e
    MOV ESI,dword ptr [EBP + 0x18]      ; 0054084f
    PUSH ESI                            ; 00540852
    MOV EDI,dword ptr [EBP + 0x14]      ; 00540853
    MOV EDX,0x9                         ; 00540856
    PUSH EDI                            ; 0054085b
    MOV dword ptr [ESP + 0xa4],EDX      ; 0054085c
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_00541230 ; 00540863
        ;   XREF to: 00541230 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_00541230(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 00540868
    JMP 0x0054071f                      ; 0054086b
        ;   XREF to: 0054071f (UNCONDITIONAL_JUMP)  ; LAB_0054071f
    MOV EDX,dword ptr [ESP + 0xc8]      ; 00540870
        ;   Label: LAB_00540870
    MOV ECX,dword ptr [EDX + 0x25]      ; 00540877
    PUSH ECX                            ; 0054087a
    MOV EBX,dword ptr [EDX + 0x21]      ; 0054087b
    PUSH EBX                            ; 0054087e
    PUSH EAX                            ; 0054087f
    MOV ESI,dword ptr [EBP + 0x18]      ; 00540880
    PUSH ESI                            ; 00540883
    MOV EDI,dword ptr [EBP + 0x14]      ; 00540884
    PUSH EDI                            ; 00540887
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0 ; 00540888
        ;   XREF to: 005412b0 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0(CNetGame * this_ptr, SNetworkAddr * addr, char * name, int hero_number, ...)
    ADD ESP,0x14                        ; 0054088d
    MOV EBX,EAX                         ; 00540890
    JMP 0x0054079b                      ; 00540892
        ;   XREF to: 0054079b (UNCONDITIONAL_JUMP)  ; LAB_0054079b
    MOV EDX,dword ptr [ESP + 0xc8]      ; 00540897
        ;   Label: LAB_00540897
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0054089e
    MOV ECX,dword ptr [EDX + 0x21]      ; 005408a5
    CMP ECX,dword ptr [EAX + 0x14]      ; 005408a8
    JNZ 0x0054074a                      ; 005408ab
        ;   XREF to: 0054074a (CONDITIONAL_JUMP)  ; LAB_0054074a
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005408b1
    MOV ESI,dword ptr [EDX + 0x25]      ; 005408b8
    CMP ESI,dword ptr [EAX + 0x18]      ; 005408bb
    JNZ 0x0054074a                      ; 005408be
        ;   XREF to: 0054074a (CONDITIONAL_JUMP)  ; LAB_0054074a
    JMP 0x0054079b                      ; 005408c4
        ;   XREF to: 0054079b (UNCONDITIONAL_JUMP)  ; LAB_0054079b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005408c9
        ;   Label: caseD_3
    CMP dword ptr [EAX],0x2             ; 005408cc
    JNZ 0x0054044c                      ; 005408cf
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    TEST EBX,EBX                        ; 005408d5
    JL 0x0054044c                       ; 005408d7
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    CMP dword ptr [EAX + 0x4],0x1       ; 005408dd
    JNZ 0x0054044c                      ; 005408e1
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    CMP EBX,dword ptr [EAX + 0x110]     ; 005408e7
    JNZ 0x0054044c                      ; 005408ed
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [ESI + 0x5]       ; 005408f3
    MOV [0x02f7c8bc],EAX                ; 005408f6 | g_ConnectionStatus
    MOV ESP,EBP                         ; 005408fb
    POP EBP                             ; 005408fd
    POP EDI                             ; 005408fe
    POP ESI                             ; 005408ff
    POP EBX                             ; 00540900
    RET                                 ; 00540901
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540902
        ;   Label: caseD_2
    MOV ECX,ESI                         ; 00540905
    CMP dword ptr [EAX],0x2             ; 00540907
    JNZ 0x0054097f                      ; 0054090a
        ;   XREF to: 0054097f (CONDITIONAL_JUMP)  ; LAB_0054097f
    TEST EBX,EBX                        ; 0054090c
    JL 0x0054097f                       ; 0054090e
        ;   XREF to: 0054097f (CONDITIONAL_JUMP)  ; LAB_0054097f
    CMP EBX,dword ptr [EAX + 0x110]     ; 00540910
    JNZ 0x0054097f                      ; 00540916
        ;   XREF to: 0054097f (CONDITIONAL_JUMP)  ; LAB_0054097f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00540918
    CMP EDX,0x1                         ; 0054091b
    JNZ 0x0054044c                      ; 0054091e
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EDI,dword ptr [ESP + 0xd4]      ; 00540924
    LEA ESI,[ECX + 0x5]                 ; 0054092b
    MOV dword ptr [0x02f7c8bc],EDX      ; 0054092e | g_ConnectionStatus
    PUSH EDI                            ; 00540934
    MOV AL,byte ptr [ESI]               ; 00540935
        ;   Label: LAB_00540935
    MOV byte ptr [EDI],AL               ; 00540937
    CMP AL,0x0                          ; 00540939
    JZ 0x0054094d                       ; 0054093b
        ;   XREF to: 0054094d (CONDITIONAL_JUMP)  ; LAB_0054094d
    MOV AL,byte ptr [ESI + 0x1]         ; 0054093d
    ADD ESI,0x2                         ; 00540940
    MOV byte ptr [EDI + 0x1],AL         ; 00540943
    ADD EDI,0x2                         ; 00540946
    CMP AL,0x0                          ; 00540949
    JNZ 0x00540935                      ; 0054094b
        ;   XREF to: 00540935 (CONDITIONAL_JUMP)  ; LAB_00540935
    POP EDI                             ; 0054094d
        ;   Label: LAB_0054094d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054094e
    MOV EAX,dword ptr [EAX + 0x114]     ; 00540951
    SHL EAX,0x3                         ; 00540957
    MOV EDX,EAX                         ; 0054095a
    SHL EAX,0x4                         ; 0054095c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054095f
    SUB EAX,EDX                         ; 00540962
    ADD EAX,ESI                         ; 00540964
    LEA EDI,[EAX + 0x3c]                ; 00540966
    LEA ESI,[ECX + 0x69]                ; 00540969
    MOVSD ES:EDI,ESI                    ; 0054096c
    MOVSD ES:EDI,ESI                    ; 0054096d
    MOV dword ptr [0x02f7c8c4],0xffffffff ; 0054096e | INT_02f7c8c4
    MOV ESP,EBP                         ; 00540978
    POP EBP                             ; 0054097a
    POP EDI                             ; 0054097b
    POP ESI                             ; 0054097c
    POP EBX                             ; 0054097d
    RET                                 ; 0054097e
    PUSH 0x0                            ; 0054097f
        ;   Label: LAB_0054097f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00540981
    PUSH EAX                            ; 00540984
    MOV EDX,dword ptr [EBP + 0x14]      ; 00540985
    PUSH EDX                            ; 00540988
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930 ; 00540989
        ;   XREF to: 00543930 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0054098e
    MOV ESP,EBP                         ; 00540991
    POP EBP                             ; 00540993
    POP EDI                             ; 00540994
    POP ESI                             ; 00540995
    POP EBX                             ; 00540996
    RET                                 ; 00540997
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540998
        ;   Label: caseD_4
    MOV EDI,dword ptr [EAX]             ; 0054099b
    TEST EDI,EDI                        ; 0054099d
    JNZ 0x005409b6                      ; 0054099f
        ;   XREF to: 005409b6 (CONDITIONAL_JUMP)  ; LAB_005409b6
    PUSH EDI                            ; 005409a1
    MOV ECX,dword ptr [EBP + 0x18]      ; 005409a2
    PUSH ECX                            ; 005409a5
    PUSH EAX                            ; 005409a6
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930 ; 005409a7
        ;   XREF to: 00543930 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 005409ac
    MOV ESP,EBP                         ; 005409af
    POP EBP                             ; 005409b1
    POP EDI                             ; 005409b2
    POP ESI                             ; 005409b3
    POP EBX                             ; 005409b4
    RET                                 ; 005409b5
    MOV EAX,0x9                         ; 005409b6
        ;   Label: LAB_005409b6
    MOV DL,0x5                          ; 005409bb
    MOV dword ptr [ESP + 0xb0],EAX      ; 005409bd
    MOV byte ptr [ESP + 0xb4],DL        ; 005409c4
    MOV EAX,dword ptr [ESI + 0x5]       ; 005409cb
    MOV dword ptr [ESP + 0xb5],EAX      ; 005409ce
    LEA EAX,[ESP + 0xb0]                ; 005409d5
    PUSH EAX                            ; 005409dc
    MOV EAX,dword ptr [EBP + 0x18]      ; 005409dd
    PUSH EAX                            ; 005409e0
    MOV EDX,dword ptr [EBP + 0x14]      ; 005409e1
    PUSH EDX                            ; 005409e4
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_00541230 ; 005409e5
        ;   XREF to: 00541230 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_00541230(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 005409ea
    MOV ESP,EBP                         ; 005409ed
    POP EBP                             ; 005409ef
    POP EDI                             ; 005409f0
    POP ESI                             ; 005409f1
    POP EBX                             ; 005409f2
    RET                                 ; 005409f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 005409f4
        ;   Label: caseD_5
    CMP dword ptr [EAX],0x0             ; 005409f7
    JZ 0x00540ae3                       ; 005409fa
        ;   XREF to: 00540ae3 (CONDITIONAL_JUMP)  ; LAB_00540ae3
    TEST EBX,EBX                        ; 00540a00
    JL 0x00540ae3                       ; 00540a02
        ;   XREF to: 00540ae3 (CONDITIONAL_JUMP)  ; LAB_00540ae3
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00540a08
    FLD float ptr [EAX + 0x28]          ; 00540a0f
    FLDZ                                ; 00540a12
    FCOMPP                              ; 00540a14
    FNSTSW AX                           ; 00540a16
    SAHF                                ; 00540a18
    JA 0x00540a7d                       ; 00540a19
        ;   XREF to: 00540a7d (CONDITIONAL_JUMP)  ; LAB_00540a7d
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00540a1b
    MOV EDX,dword ptr [ESI + 0x5]       ; 00540a22
    MOV EAX,dword ptr [EAX + 0x30]      ; 00540a25
    SUB EDX,EAX                         ; 00540a28
    MOV dword ptr [ESP + 0xdc],EDX      ; 00540a2a
    FILD dword ptr [ESP + 0xdc]         ; 00540a31
    FMUL double ptr [0x0063d8f5]        ; 00540a38 | DOUBLE_0063d8f5
    FST float ptr [ESP + 0x4]           ; 00540a3e
    FCOMP double ptr [0x0063d8fd]       ; 00540a42 | DOUBLE_0063d8fd
    FNSTSW AX                           ; 00540a48
    SAHF                                ; 00540a4a
    JNC 0x00540a55                      ; 00540a4b
        ;   XREF to: 00540a55 (CONDITIONAL_JUMP)  ; LAB_00540a55
    MOV dword ptr [ESP + 0x4],0xc1f00000 ; 00540a4d
    FLD float ptr [ESP + 0x4]           ; 00540a55
        ;   Label: LAB_00540a55
    FCOMP double ptr [0x0063d905]       ; 00540a59 | DOUBLE_0063d905
    FNSTSW AX                           ; 00540a5f
    SAHF                                ; 00540a61
    JBE 0x00540a6c                      ; 00540a62
        ;   XREF to: 00540a6c (CONDITIONAL_JUMP)  ; LAB_00540a6c
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 00540a64
    FLD float ptr [ESP + 0x4]           ; 00540a6c
        ;   Label: LAB_00540a6c
    FLDZ                                ; 00540a70
    FCOMPP                              ; 00540a72
    FNSTSW AX                           ; 00540a74
    SAHF                                ; 00540a76
    JNC 0x0054044c                      ; 00540a77
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,dword ptr [0x02f7c8b8]      ; 00540a7d | g_CurrentGameTime
        ;   Label: LAB_00540a7d
    MOV EAX,dword ptr [ESI + 0x5]       ; 00540a83
    SUB EDX,EAX                         ; 00540a86
    MOV dword ptr [ESP + 0xdc],EDX      ; 00540a88
    FILD dword ptr [ESP + 0xdc]         ; 00540a8f
    FMUL double ptr [0x0063d8f5]        ; 00540a96 | DOUBLE_0063d8f5
    FST float ptr [ESP + 0x8]           ; 00540a9c
    FLDZ                                ; 00540aa0
    FCOMPP                              ; 00540aa2
    FNSTSW AX                           ; 00540aa4
    SAHF                                ; 00540aa6
    JBE 0x00540aaf                      ; 00540aa7
        ;   XREF to: 00540aaf (CONDITIONAL_JUMP)  ; LAB_00540aaf
    XOR EAX,EAX                         ; 00540aa9
    MOV dword ptr [ESP + 0x8],EAX       ; 00540aab
    FLD float ptr [ESP + 0x8]           ; 00540aaf
        ;   Label: LAB_00540aaf
    FCOMP double ptr [0x0063d905]       ; 00540ab3 | DOUBLE_0063d905
    FNSTSW AX                           ; 00540ab9
    SAHF                                ; 00540abb
    JBE 0x00540ac6                      ; 00540abc
        ;   XREF to: 00540ac6 (CONDITIONAL_JUMP)  ; LAB_00540ac6
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 00540abe
    MOV EDX,dword ptr [ESP + 0xd4]      ; 00540ac6
        ;   Label: LAB_00540ac6
    MOV EAX,dword ptr [ESP + 0x8]       ; 00540acd
    MOV dword ptr [EDX + 0x28],EAX      ; 00540ad1
    MOV EAX,[0x02f7c8b8]                ; 00540ad4 | g_CurrentGameTime
    MOV dword ptr [EDX + 0x30],EAX      ; 00540ad9
    MOV ESP,EBP                         ; 00540adc
    POP EBP                             ; 00540ade
    POP EDI                             ; 00540adf
    POP ESI                             ; 00540ae0
    POP EBX                             ; 00540ae1
    RET                                 ; 00540ae2
    PUSH 0x0                            ; 00540ae3
        ;   Label: LAB_00540ae3
    MOV ECX,dword ptr [EBP + 0x18]      ; 00540ae5
    PUSH ECX                            ; 00540ae8
    MOV EBX,dword ptr [EBP + 0x14]      ; 00540ae9
    PUSH EBX                            ; 00540aec
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930 ; 00540aed
        ;   XREF to: 00543930 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 00540af2
    MOV ESP,EBP                         ; 00540af5
    POP EBP                             ; 00540af7
    POP EDI                             ; 00540af8
    POP ESI                             ; 00540af9
    POP EBX                             ; 00540afa
    RET                                 ; 00540afb
    MOV EDI,ESI                         ; 00540afc
        ;   Label: caseD_6
    TEST EBX,EBX                        ; 00540afe
    JL 0x0054044c                       ; 00540b00
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,dword ptr [0x02f7c8cc]      ; 00540b06 | g_ChatHistoryCount
    XOR EAX,EAX                         ; 00540b0c
    CMP EAX,EDX                         ; 00540b0e
    JGE 0x00540b4a                      ; 00540b10
        ;   XREF to: 00540b4a (CONDITIONAL_JUMP)  ; LAB_00540b4a
    LEA EBX,[EAX*0x8 + 0x0]             ; 00540b12
    SHL EBX,0x5                         ; 00540b19
    ADD EBX,0x2f7c8d0                   ; 00540b1c | g_ChatHistory
    IMUL ESI,EAX,0x120                  ; 00540b22
        ;   Label: LAB_00540b22
    MOV ECX,dword ptr [EBP + 0x18]      ; 00540b28
    MOV DX,word ptr [EBX + 0x4]         ; 00540b2b | g_ChatHistory[0].sender_addr.port | g_ChatHistory[1].sender_addr.port
    CMP DX,word ptr [ECX + 0x4]         ; 00540b2f
    JNZ 0x00540bae                      ; 00540b33
        ;   XREF to: 00540bae (CONDITIONAL_JUMP)  ; LAB_00540bae
    MOV EDX,dword ptr [EBX]             ; 00540b39 | g_ChatHistory | g_ChatHistory[1].sender_addr.ip_address
    CMP EDX,dword ptr [ECX]             ; 00540b3b
    JNZ 0x00540bae                      ; 00540b3d
        ;   XREF to: 00540bae (CONDITIONAL_JUMP)  ; LAB_00540bae
    MOV EDX,dword ptr [EDI + 0x5]       ; 00540b3f
    CMP EDX,dword ptr [ESI + 0x2f7c8d8] ; 00540b42 | g_ChatHistory[0].message_id | g_ChatHistory[1].message_id
    JNZ 0x00540bae                      ; 00540b48
        ;   XREF to: 00540bae (CONDITIONAL_JUMP)  ; LAB_00540bae
    CMP EAX,dword ptr [0x02f7c8cc]      ; 00540b4a | g_ChatHistoryCount
        ;   Label: LAB_00540b4a
    JNZ 0x00540b72                      ; 00540b50
        ;   XREF to: 00540b72 (CONDITIONAL_JUMP)  ; LAB_00540b72
    LEA EAX,[EDI + 0x9]                 ; 00540b52
    PUSH EAX                            ; 00540b55
    MOV EBX,dword ptr [ESP + 0xd8]      ; 00540b56
    PUSH EBX                            ; 00540b5d
    MOV ESI,dword ptr [EDI + 0x5]       ; 00540b5e
    PUSH ESI                            ; 00540b61
    MOV EAX,dword ptr [EBP + 0x18]      ; 00540b62
    PUSH EAX                            ; 00540b65
    MOV EDX,dword ptr [EBP + 0x14]      ; 00540b66
    PUSH EDX                            ; 00540b69
    CALL core_netgame.cpp_CNetGame_addChatHistory_FUN_00542370 ; 00540b6a
        ;   XREF to: 00542370 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_addChatHistory_FUN_00542370(CNetGame * this_ptr, SNetworkAddr * sender_addr, int message_id, char * sender_name, ...)
    ADD ESP,0x14                        ; 00540b6f
    MOV dword ptr [ESP + 0x80],0x9      ; 00540b72
        ;   Label: LAB_00540b72
    MOV byte ptr [ESP + 0x84],0x7       ; 00540b7d
    MOV EAX,dword ptr [EDI + 0x5]       ; 00540b85
    MOV dword ptr [ESP + 0x85],EAX      ; 00540b88
    LEA EAX,[ESP + 0x80]                ; 00540b8f
    PUSH EAX                            ; 00540b96
    MOV EBX,dword ptr [EBP + 0x18]      ; 00540b97
    PUSH EBX                            ; 00540b9a
    MOV ESI,dword ptr [EBP + 0x14]      ; 00540b9b
    PUSH ESI                            ; 00540b9e
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_00541230 ; 00540b9f
        ;   XREF to: 00541230 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_00541230(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 00540ba4
    MOV ESP,EBP                         ; 00540ba7
    POP EBP                             ; 00540ba9
    POP EDI                             ; 00540baa
    POP ESI                             ; 00540bab
    POP EBX                             ; 00540bac
    RET                                 ; 00540bad
    MOV ECX,dword ptr [0x02f7c8cc]      ; 00540bae | g_ChatHistoryCount
        ;   Label: LAB_00540bae
    INC EAX                             ; 00540bb4
    ADD EBX,0x120                       ; 00540bb5
    CMP EAX,ECX                         ; 00540bbb
    JL 0x00540b22                       ; 00540bbd
        ;   XREF to: 00540b22 (CONDITIONAL_JUMP)  ; LAB_00540b22
    JMP 0x00540b4a                      ; 00540bc3
        ;   XREF to: 00540b4a (UNCONDITIONAL_JUMP)  ; LAB_00540b4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540bc5
        ;   Label: caseD_7
    MOV ECX,dword ptr [EAX]             ; 00540bc8
    MOV dword ptr [ESP + 0xd0],ESI      ; 00540bca
    TEST ECX,ECX                        ; 00540bd1
    JZ 0x0054044c                       ; 00540bd3
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    TEST EBX,EBX                        ; 00540bd9
    JL 0x0054044c                       ; 00540bdb
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EDI,dword ptr [0x02f98ad0]      ; 00540be1 | g_ChatOutCount
    XOR ESI,ESI                         ; 00540be7
    CMP ESI,EDI                         ; 00540be9
    JGE 0x0054044c                      ; 00540beb
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,EDI                         ; 00540bf1
    SHL EDI,0x4                         ; 00540bf3
    MOV EAX,ESI                         ; 00540bf6
    ADD EDI,EDX                         ; 00540bf8
    SHL EAX,0x4                         ; 00540bfa
    SHL EDI,0x2                         ; 00540bfd
    SHL EAX,0x2                         ; 00540c00
    ADD EDI,EDX                         ; 00540c03
    SHL EAX,0x2                         ; 00540c05
    SHL EDI,0x2                         ; 00540c08
    MOV ECX,dword ptr [ESP + 0xd0]      ; 00540c0b
        ;   Label: LAB_00540c0b
    MOV EDX,dword ptr [EAX + 0x2f98ad8] ; 00540c12 | g_ChatOutMessages[0].sequence_number | g_ChatOutMessages[1].sequence_number | g_ChatOutMessages[2].sequence_number
    CMP EDX,dword ptr [ECX + 0x5]       ; 00540c18
    JZ 0x00540c2d                       ; 00540c1b
        ;   XREF to: 00540c2d (CONDITIONAL_JUMP)  ; LAB_00540c2d
    ADD EAX,0x114                       ; 00540c1d
    INC ESI                             ; 00540c22
    CMP EAX,EDI                         ; 00540c23
    JGE 0x0054044c                      ; 00540c25
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x00540c0b                      ; 00540c2b
        ;   XREF to: 00540c0b (UNCONDITIONAL_JUMP)  ; LAB_00540c0b
    LEA EDX,[EAX + EBX*0x1]             ; 00540c2d
        ;   Label: LAB_00540c2d
    MOV byte ptr [EDX + 0x2f98adc],0x1  ; 00540c30 | g_ChatOutMessages[0].ack_flags | g_ChatOutMessages[1].ack_flags
    ADD EAX,0x114                       ; 00540c37
    INC ESI                             ; 00540c3c
    CMP EAX,EDI                         ; 00540c3d
    JGE 0x0054044c                      ; 00540c3f
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x00540c0b                      ; 00540c45
        ;   XREF to: 00540c0b (UNCONDITIONAL_JUMP)  ; LAB_00540c0b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540c47
        ;   Label: caseD_8
    MOV EDI,dword ptr [EAX]             ; 00540c4a
    CMP EDI,0x2                         ; 00540c4c
    JNZ 0x0054097f                      ; 00540c4f
        ;   XREF to: 0054097f (CONDITIONAL_JUMP)  ; LAB_0054097f
    TEST EBX,EBX                        ; 00540c55
    JL 0x0054097f                       ; 00540c57
        ;   XREF to: 0054097f (CONDITIONAL_JUMP)  ; LAB_0054097f
    CMP EBX,dword ptr [EAX + 0x110]     ; 00540c5d
    JNZ 0x0054097f                      ; 00540c63
        ;   XREF to: 0054097f (CONDITIONAL_JUMP)  ; LAB_0054097f
    MOV ECX,dword ptr [EAX + 0x4]       ; 00540c69
    CMP ECX,0x1                         ; 00540c6c
    JNZ 0x00540c79                      ; 00540c6f
        ;   XREF to: 00540c79 (CONDITIONAL_JUMP)  ; LAB_00540c79
    CMP ECX,dword ptr [ESI + 0x5]       ; 00540c71
    JNZ 0x00540c79                      ; 00540c74
        ;   XREF to: 00540c79 (CONDITIONAL_JUMP)  ; LAB_00540c79
    MOV dword ptr [EAX + 0x4],EDI       ; 00540c76
    MOV EDI,0x9                         ; 00540c79
        ;   Label: LAB_00540c79
    MOV DL,0x9                          ; 00540c7e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540c80
    MOV dword ptr [ESP + 0xa4],EDI      ; 00540c83
    MOV byte ptr [ESP + 0xa8],DL        ; 00540c8a
    MOV EAX,dword ptr [EAX + 0x114]     ; 00540c91
    SHL EAX,0x3                         ; 00540c97
    MOV EDX,EAX                         ; 00540c9a
    SHL EAX,0x4                         ; 00540c9c
    SUB EAX,EDX                         ; 00540c9f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00540ca1
    ADD EAX,EDX                         ; 00540ca4
    MOV EAX,dword ptr [EAX + 0x5c]      ; 00540ca6
    MOV dword ptr [ESP + 0xa9],EAX      ; 00540ca9
    LEA EAX,[ESP + 0xa4]                ; 00540cb0
    PUSH EAX                            ; 00540cb7
    MOV ECX,dword ptr [EDX + 0x110]     ; 00540cb8
    PUSH ECX                            ; 00540cbe
    PUSH EDX                            ; 00540cbf
    CALL core_netgame.cpp_CNetGame_send_FUN_005411c0 ; 00540cc0
        ;   XREF to: 005411c0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_005411c0(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    MOV EDI,dword ptr [0x02f7c8c0]      ; 00540cc5 | g_RemoteSyncStage
    MOV EAX,dword ptr [ESI + 0x5]       ; 00540ccb
    ADD ESP,0xc                         ; 00540cce
    CMP EAX,EDI                         ; 00540cd1
    JLE 0x0054044c                      ; 00540cd3
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV [0x02f7c8c0],EAX                ; 00540cd9 | g_RemoteSyncStage
    MOV ESP,EBP                         ; 00540cde
    POP EBP                             ; 00540ce0
    POP EDI                             ; 00540ce1
    POP ESI                             ; 00540ce2
    POP EBX                             ; 00540ce3
    RET                                 ; 00540ce4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540ce5
        ;   Label: caseD_9
    CMP dword ptr [EAX],0x1             ; 00540ce8
    JNZ 0x00540d18                      ; 00540ceb
        ;   XREF to: 00540d18 (CONDITIONAL_JUMP)  ; LAB_00540d18
    TEST EBX,EBX                        ; 00540ced
    JL 0x00540d18                       ; 00540cef
        ;   XREF to: 00540d18 (CONDITIONAL_JUMP)  ; LAB_00540d18
    CMP dword ptr [EAX + 0x4],0x2       ; 00540cf1
    JNZ 0x0054044c                      ; 00540cf5
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,dword ptr [ESP + 0xd4]      ; 00540cfb
    MOV EAX,dword ptr [ESI + 0x5]       ; 00540d02
    CMP EAX,dword ptr [EDX + 0x3c]      ; 00540d05
    JL 0x0054044c                       ; 00540d08
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [EDX + 0x3c],EAX      ; 00540d0e
    MOV ESP,EBP                         ; 00540d11
    POP EBP                             ; 00540d13
    POP EDI                             ; 00540d14
    POP ESI                             ; 00540d15
    POP EBX                             ; 00540d16
    RET                                 ; 00540d17
    PUSH 0x0                            ; 00540d18
        ;   Label: LAB_00540d18
    MOV EBX,dword ptr [EBP + 0x18]      ; 00540d1a
    PUSH EBX                            ; 00540d1d
    MOV ESI,dword ptr [EBP + 0x14]      ; 00540d1e
    PUSH ESI                            ; 00540d21
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930 ; 00540d22
        ;   XREF to: 00543930 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 00540d27
    MOV ESP,EBP                         ; 00540d2a
    POP EBP                             ; 00540d2c
    POP EDI                             ; 00540d2d
    POP ESI                             ; 00540d2e
    POP EBX                             ; 00540d2f
    RET                                 ; 00540d30
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540d31
        ;   Label: caseD_a
    MOV EDI,dword ptr [EAX]             ; 00540d34
    MOV EDX,ESI                         ; 00540d36
    CMP EDI,0x1                         ; 00540d38
    JNZ 0x00540df8                      ; 00540d3b
        ;   XREF to: 00540df8 (CONDITIONAL_JUMP)  ; LAB_00540df8
    TEST EBX,EBX                        ; 00540d41
    JL 0x00540df8                       ; 00540d43
        ;   XREF to: 00540df8 (CONDITIONAL_JUMP)  ; LAB_00540df8
    CMP EDI,dword ptr [EAX + 0x4]       ; 00540d49
    JNZ 0x0054044c                      ; 00540d4c
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00540d52
    CMP dword ptr [EAX + 0x40],0x0      ; 00540d59
    JZ 0x00540db9                       ; 00540d5d
        ;   XREF to: 00540db9 (CONDITIONAL_JUMP)  ; LAB_00540db9
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00540d5f
    MOV EAX,dword ptr [ESI + 0x5]       ; 00540d66
    MOV ECX,dword ptr [ECX + 0x40]      ; 00540d69
    SUB ECX,EAX                         ; 00540d6c
    MOV dword ptr [ESP + 0xdc],ECX      ; 00540d6e
    FILD dword ptr [ESP + 0xdc]         ; 00540d75
    FMUL double ptr [0x0063d8f5]        ; 00540d7c | DOUBLE_0063d8f5
    FST float ptr [ESP]                 ; 00540d82
    FCOMP double ptr [0x0063d8fd]       ; 00540d85 | DOUBLE_0063d8fd
    FNSTSW AX                           ; 00540d8b
    SAHF                                ; 00540d8d
    JC 0x00540e11                       ; 00540d8e
        ;   XREF to: 00540e11 (CONDITIONAL_JUMP)  ; LAB_00540e11
    FLD float ptr [ESP]                 ; 00540d94
        ;   Label: LAB_00540d94
    FCOMP double ptr [0x0063d905]       ; 00540d97 | DOUBLE_0063d905
    FNSTSW AX                           ; 00540d9d
    SAHF                                ; 00540d9f
    JBE 0x00540da9                      ; 00540da0
        ;   XREF to: 00540da9 (CONDITIONAL_JUMP)  ; LAB_00540da9
    MOV dword ptr [ESP],0x41f00000      ; 00540da2
    FLD float ptr [ESP]                 ; 00540da9
        ;   Label: LAB_00540da9
    FLDZ                                ; 00540dac
    FCOMPP                              ; 00540dae
    FNSTSW AX                           ; 00540db0
    SAHF                                ; 00540db2
    JNC 0x0054044c                      ; 00540db3
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00540db9
        ;   Label: LAB_00540db9
    LEA ESI,[EDX + 0x9]                 ; 00540dc0
    MOV EAX,dword ptr [EDX + 0x1d]      ; 00540dc3
    MOV EDI,ECX                         ; 00540dc6
    MOV dword ptr [ECX + 0x44],EAX      ; 00540dc8
    PUSH EDI                            ; 00540dcb
    MOV AL,byte ptr [ESI]               ; 00540dcc
        ;   Label: LAB_00540dcc
    MOV byte ptr [EDI],AL               ; 00540dce
    CMP AL,0x0                          ; 00540dd0
    JZ 0x00540de4                       ; 00540dd2
        ;   XREF to: 00540de4 (CONDITIONAL_JUMP)  ; LAB_00540de4
    MOV AL,byte ptr [ESI + 0x1]         ; 00540dd4
    ADD ESI,0x2                         ; 00540dd7
    MOV byte ptr [EDI + 0x1],AL         ; 00540dda
    ADD EDI,0x2                         ; 00540ddd
    CMP AL,0x0                          ; 00540de0
    JNZ 0x00540dcc                      ; 00540de2
        ;   XREF to: 00540dcc (CONDITIONAL_JUMP)  ; LAB_00540dcc
    POP EDI                             ; 00540de4
        ;   Label: LAB_00540de4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540de5
    PUSH EAX                            ; 00540de8
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0 ; 00540de9
        ;   XREF to: 00542cf0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00540dee
    MOV ESP,EBP                         ; 00540df1
    POP EBP                             ; 00540df3
    POP EDI                             ; 00540df4
    POP ESI                             ; 00540df5
    POP EBX                             ; 00540df6
    RET                                 ; 00540df7
    PUSH 0x0                            ; 00540df8
        ;   Label: LAB_00540df8
    MOV EDX,dword ptr [EBP + 0x18]      ; 00540dfa
    PUSH EDX                            ; 00540dfd
    MOV ECX,dword ptr [EBP + 0x14]      ; 00540dfe
    PUSH ECX                            ; 00540e01
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930 ; 00540e02
        ;   XREF to: 00543930 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 00540e07
    MOV ESP,EBP                         ; 00540e0a
    POP EBP                             ; 00540e0c
    POP EDI                             ; 00540e0d
    POP ESI                             ; 00540e0e
    POP EBX                             ; 00540e0f
    RET                                 ; 00540e10
    MOV dword ptr [ESP],0xc1f00000      ; 00540e11
        ;   Label: LAB_00540e11
    JMP 0x00540d94                      ; 00540e18
        ;   XREF to: 00540d94 (UNCONDITIONAL_JUMP)  ; LAB_00540d94
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540e1d
        ;   Label: caseD_b
    CMP dword ptr [EAX],0x2             ; 00540e20
    JNZ 0x00540d18                      ; 00540e23
        ;   XREF to: 00540d18 (CONDITIONAL_JUMP)  ; LAB_00540d18
    TEST EBX,EBX                        ; 00540e29
    JL 0x00540d18                       ; 00540e2b
        ;   XREF to: 00540d18 (CONDITIONAL_JUMP)  ; LAB_00540d18
    CMP EBX,dword ptr [EAX + 0x110]     ; 00540e31
    JNZ 0x00540d18                      ; 00540e37
        ;   XREF to: 00540d18 (CONDITIONAL_JUMP)  ; LAB_00540d18
    CMP dword ptr [EAX + 0x4],0x1       ; 00540e3d
    JNZ 0x0054044c                      ; 00540e41
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,[0x02f7c8c4]                ; 00540e47 | INT_02f7c8c4
    CMP EAX,dword ptr [ESI + 0x5]       ; 00540e4c
    JGE 0x00540e6e                      ; 00540e4f
        ;   XREF to: 00540e6e (CONDITIONAL_JUMP)  ; LAB_00540e6e
    PUSH ESI                            ; 00540e51
    MOV EDI,dword ptr [EBP + 0x14]      ; 00540e52
    PUSH EDI                            ; 00540e55
    CALL core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470 ; 00540e56
        ;   XREF to: 00542470 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470(CNetGame * this_ptr, UNetPacket * packet)
    ADD ESP,0x8                         ; 00540e5b
    TEST EAX,EAX                        ; 00540e5e
    JZ 0x0054044c                       ; 00540e60
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [ESI + 0x5]       ; 00540e66
    MOV [0x02f7c8c4],EAX                ; 00540e69 | INT_02f7c8c4
    MOV dword ptr [ESP + 0x8c],0x9      ; 00540e6e
        ;   Label: LAB_00540e6e
    MOV byte ptr [ESP + 0x90],0xc       ; 00540e79
    MOV EAX,[0x02f7c8c4]                ; 00540e81 | INT_02f7c8c4
    MOV dword ptr [ESP + 0x91],EAX      ; 00540e86
    LEA EAX,[ESP + 0x8c]                ; 00540e8d
    PUSH EAX                            ; 00540e94
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540e95
    MOV EDX,dword ptr [EAX + 0x110]     ; 00540e98
    PUSH EDX                            ; 00540e9e
    PUSH EAX                            ; 00540e9f
    CALL core_netgame.cpp_CNetGame_send_FUN_005411c0 ; 00540ea0
        ;   XREF to: 005411c0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_005411c0(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 00540ea5
    MOV ESP,EBP                         ; 00540ea8
    POP EBP                             ; 00540eaa
    POP EDI                             ; 00540eab
    POP ESI                             ; 00540eac
    POP EBX                             ; 00540ead
    RET                                 ; 00540eae
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540eaf
        ;   Label: caseD_c
    MOV EDI,dword ptr [EAX]             ; 00540eb2
    CMP EDI,0x1                         ; 00540eb4
    JNZ 0x00540d18                      ; 00540eb7
        ;   XREF to: 00540d18 (CONDITIONAL_JUMP)  ; LAB_00540d18
    TEST EBX,EBX                        ; 00540ebd
    JL 0x00540d18                       ; 00540ebf
        ;   XREF to: 00540d18 (CONDITIONAL_JUMP)  ; LAB_00540d18
    CMP EDI,dword ptr [EAX + 0x4]       ; 00540ec5
    JNZ 0x0054044c                      ; 00540ec8
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00540ece
    MOV ECX,dword ptr [ESI + 0x5]       ; 00540ed5
    CMP ECX,dword ptr [EAX + 0x34]      ; 00540ed8
    JL 0x0054044c                       ; 00540edb
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,dword ptr [ESP + 0xd4]      ; 00540ee1
    MOV dword ptr [EDX + 0x34],ECX      ; 00540ee8
    MOV ESP,EBP                         ; 00540eeb
    POP EBP                             ; 00540eed
    POP EDI                             ; 00540eee
    POP ESI                             ; 00540eef
    POP EBX                             ; 00540ef0
    RET                                 ; 00540ef1
    CMP dword ptr [ESI + 0x5],0x0       ; 00540ef2
        ;   Label: caseD_d
    JNZ 0x00540f81                      ; 00540ef6
        ;   XREF to: 00540f81 (CONDITIONAL_JUMP)  ; LAB_00540f81
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540efc
        ;   Label: LAB_00540efc
    CMP dword ptr [EAX],0x1             ; 00540eff
    JNZ 0x00540f1e                      ; 00540f02
        ;   XREF to: 00540f1e (CONDITIONAL_JUMP)  ; LAB_00540f1e
    TEST EBX,EBX                        ; 00540f04
    JL 0x00540f12                       ; 00540f06
        ;   XREF to: 00540f12 (CONDITIONAL_JUMP)  ; LAB_00540f12
    PUSH EBX                            ; 00540f08
    PUSH EAX                            ; 00540f09
    CALL core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00 ; 00540f0a
        ;   XREF to: 00542b00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00(CNetGame * this_ptr, int player_index)
    ADD ESP,0x8                         ; 00540f0f
    MOV EDI,dword ptr [EBP + 0x14]      ; 00540f12
        ;   Label: LAB_00540f12
    PUSH EDI                            ; 00540f15
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0 ; 00540f16
        ;   XREF to: 00542cf0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00540f1b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540f1e
        ;   Label: LAB_00540f1e
    CMP dword ptr [EAX],0x2             ; 00540f21
    JNZ 0x0054044c                      ; 00540f24
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    TEST EBX,EBX                        ; 00540f2a
    JL 0x0054044c                       ; 00540f2c
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    CMP EBX,dword ptr [EAX + 0x110]     ; 00540f32
    JNZ 0x0054044c                      ; 00540f38
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    PUSH 0x0                            ; 00540f3e
    PUSH EAX                            ; 00540f40
    MOV EBX,EAX                         ; 00540f41
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00 ; 00540f43
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 00540f48
    PUSH 0x63d853                       ; 00540f4b | = "You have been disconnected from the game"
    PUSH 0x63d87c                       ; 00540f50 | s_EmptyChar_0063d87c
    PUSH 0x0                            ; 00540f55
    PUSH 0x0                            ; 00540f57
    PUSH 0x3f87498                      ; 00540f59 | g_AnyAddressIP
    LEA EAX,[ESP + 0xd0]                ; 00540f5e
    PUSH EAX                            ; 00540f65
    CALL support_trisock.cpp_createNetworkAddr_FUN_005e1940 ; 00540f66
        ;   XREF to: 005e1940 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_createNetworkAddr_FUN_005e1940(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port)
    ADD ESP,0xc                         ; 00540f6b
    PUSH EAX                            ; 00540f6e
    MOV ESI,EBX                         ; 00540f6f
    PUSH ESI                            ; 00540f71
    CALL core_netgame.cpp_CNetGame_addChatHistory_FUN_00542370 ; 00540f72
        ;   XREF to: 00542370 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_addChatHistory_FUN_00542370(CNetGame * this_ptr, SNetworkAddr * sender_addr, int message_id, char * sender_name, ...)
    ADD ESP,0x14                        ; 00540f77
    MOV ESP,EBP                         ; 00540f7a
    POP EBP                             ; 00540f7c
    POP EDI                             ; 00540f7d
    POP ESI                             ; 00540f7e
    POP EBX                             ; 00540f7f
    RET                                 ; 00540f80
    PUSH 0x0                            ; 00540f81
        ;   Label: LAB_00540f81
    MOV EAX,dword ptr [EBP + 0x18]      ; 00540f83
    PUSH EAX                            ; 00540f86
    MOV EDX,dword ptr [EBP + 0x14]      ; 00540f87
    PUSH EDX                            ; 00540f8a
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930 ; 00540f8b
        ;   XREF to: 00543930 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 00540f90
    JMP 0x00540efc                      ; 00540f93
        ;   XREF to: 00540efc (UNCONDITIONAL_JUMP)  ; LAB_00540efc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00540f98
        ;   Label: caseD_f
    MOV EDX,dword ptr [EAX]             ; 00540f9b
    MOV EDI,ESI                         ; 00540f9d
    CMP EDX,0x2                         ; 00540f9f
    JNZ 0x00540df8                      ; 00540fa2
        ;   XREF to: 00540df8 (CONDITIONAL_JUMP)  ; LAB_00540df8
    TEST EBX,EBX                        ; 00540fa8
    JL 0x00540df8                       ; 00540faa
        ;   XREF to: 00540df8 (CONDITIONAL_JUMP)  ; LAB_00540df8
    MOV ECX,dword ptr [EAX + 0x110]     ; 00540fb0
    CMP EBX,ECX                         ; 00540fb6
    JNZ 0x00540df8                      ; 00540fb8
        ;   XREF to: 00540df8 (CONDITIONAL_JUMP)  ; LAB_00540df8
    MOV EAX,dword ptr [ESI + 0x5]       ; 00540fbe
    MOV ESI,EAX                         ; 00540fc1
    MOV dword ptr [ESP + 0xc4],EAX      ; 00540fc3
    MOV EAX,[0x02f9c0c0]                ; 00540fca | g_SimFrameCount
    XOR EBX,ECX                         ; 00540fcf
    TEST EAX,EAX                        ; 00540fd1
    JLE 0x005410b9                      ; 00540fd3
        ;   XREF to: 005410b9 (CONDITIONAL_JUMP)  ; LAB_005410b9
    MOV EDX,dword ptr [0x02f9c0c0]      ; 00540fd9 | g_SimFrameCount
    MOV dword ptr [ESP + 0xdc],EDX      ; 00540fdf
    MOV ECX,dword ptr [ESP + 0xdc]      ; 00540fe6
    SHL EDX,0x2                         ; 00540fed
    SUB EDX,ECX                         ; 00540ff0
    SHL EDX,0x3                         ; 00540ff2
    ADD EDX,ECX                         ; 00540ff5
    XOR EAX,EAX                         ; 00540ff7
    SHL EDX,0x2                         ; 00540ff9
    CMP ESI,dword ptr [EAX + 0x2f9c0c4] ; 00540ffc | g_SimFrameHistory | g_SimFrameHistory[1].sequence_number
        ;   Label: LAB_00540ffc
    JNZ 0x005410ad                      ; 00541002
        ;   XREF to: 005410ad (CONDITIONAL_JUMP)  ; LAB_005410ad
    TEST EBX,EBX                        ; 00541008
    JL 0x005410b9                       ; 0054100a
        ;   XREF to: 005410b9 (CONDITIONAL_JUMP)  ; LAB_005410b9
    ADD EAX,0x2f9c0c4                   ; 00541010 | g_SimFrameHistory
    MOV EDX,dword ptr [EDI + 0x9]       ; 00541015
        ;   Label: LAB_00541015
    MOV dword ptr [EAX + 0x4],EDX       ; 00541018 | g_SimFrameHistory[0].random_seed | g_SimFrameHistory[1].random_seed
    MOV dword ptr [ESP + 0xcc],EAX      ; 0054101b | g_SimFrameHistory | g_SimFrameHistory[1].sequence_number
    MOV EDX,dword ptr [EDI + 0xd]       ; 00541022
    MOV dword ptr [EAX + 0x8],EDX       ; 00541025 | g_SimFrameHistory[0].delta_time | g_SimFrameHistory[1].delta_time
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541028
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0054102b
    XOR EBX,EBX                         ; 0054102e
    TEST ECX,ECX                        ; 00541030
    JLE 0x0054044c                      ; 00541032
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0xd8],EDI      ; 00541038
    MOV ESI,EBX                         ; 0054103f
        ;   Label: LAB_0054103f
    TEST EBX,EBX                        ; 00541041
    JL 0x00541129                       ; 00541043
        ;   XREF to: 00541129 (CONDITIONAL_JUMP)  ; LAB_00541129
    CMP ESI,EBX                         ; 00541049
        ;   Label: LAB_00541049
    JZ 0x0054106f                       ; 0054104b
        ;   XREF to: 0054106f (CONDITIONAL_JUMP)  ; LAB_0054106f
    MOV EAX,0x63d8c9                    ; 0054104d | = "..\\core\\netgame.cpp"
    MOV EDX,0x597                       ; 00541052
    PUSH 0x63d8dd                       ; 00541057 | = "Player list mismatch!"
    MOV [0x02f0ca48],EAX                ; 0054105c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00541061 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00541067
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054106c
    IMUL ESI,ESI,0x2c                   ; 0054106f
        ;   Label: LAB_0054106f
    ADD ESI,dword ptr [ESP + 0xcc]      ; 00541072
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00541079
    LEA EDI,[ESI + 0xc]                 ; 00541080 | g_SimFrameHistory[0].player_controls[0].action_states[0]
    MOV ESI,dword ptr [ESP + 0xd8]      ; 00541083
    MOV ECX,0xb                         ; 0054108a
    ADD EAX,0x2c                        ; 0054108f
    LEA ESI,[ESI + 0x11]                ; 00541092
    MOV dword ptr [ESP + 0xd8],EAX      ; 00541095
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054109c
    MOVSD.REP ES:EDI,ESI                ; 0054109f | g_SimFrameHistory[0].player_controls[0].action_states[0] | g_SimFrameHistory[0].player_controls[0].action_states[1] | g_SimFrameHistory[0].player_controls[1].action_states[0]
    INC EBX                             ; 005410a1
    CMP EBX,dword ptr [EAX + 0x1c]      ; 005410a2
    JGE 0x0054044c                      ; 005410a5
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x0054103f                      ; 005410ab
        ;   XREF to: 0054103f (UNCONDITIONAL_JUMP)  ; LAB_0054103f
    ADD EAX,0x64                        ; 005410ad
        ;   Label: LAB_005410ad
    INC EBX                             ; 005410b0
    CMP EAX,EDX                         ; 005410b1
    JL 0x00540ffc                       ; 005410b3
        ;   XREF to: 00540ffc (CONDITIONAL_JUMP)  ; LAB_00540ffc
    CMP dword ptr [0x02f9c0c0],0x200    ; 005410b9 | g_SimFrameCount
        ;   Label: LAB_005410b9
    JL 0x005410e7                       ; 005410c3
        ;   XREF to: 005410e7 (CONDITIONAL_JUMP)  ; LAB_005410e7
    MOV ESI,0x63d277                    ; 005410c5 | = "..\\core\\netgame.cpp"
    MOV EAX,0x12b                       ; 005410ca
    PUSH 0x63d28b                       ; 005410cf | = "allocSimFrame - sim history list full"
    MOV dword ptr [0x02f0ca48],ESI      ; 005410d4 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005410da | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005410df
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005410e4
    MOV EDX,dword ptr [0x02f9c0c0]      ; 005410e7 | g_SimFrameCount
        ;   Label: LAB_005410e7
    LEA EAX,[EDX*0x4 + 0x0]             ; 005410ed
    SUB EAX,EDX                         ; 005410f4
    SHL EAX,0x3                         ; 005410f6
    MOV EBX,0x2f9c0c4                   ; 005410f9 | g_SimFrameHistory
    ADD EAX,EDX                         ; 005410fe
    PUSH 0x64                           ; 00541100
    SHL EAX,0x2                         ; 00541102
    PUSH 0x0                            ; 00541105
    ADD EBX,EAX                         ; 00541107
    INC EDX                             ; 00541109
    PUSH EBX                            ; 0054110a
    MOV dword ptr [0x02f9c0c0],EDX      ; 0054110b | g_SimFrameCount
    CALL crt_memory.c_memset_FUN_005fde40 ; 00541111
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00541116
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00541119
    MOV dword ptr [EBX],EAX             ; 00541120 | g_SimFrameHistory
    MOV EAX,EBX                         ; 00541122
    JMP 0x00541015                      ; 00541124
        ;   XREF to: 00541015 (UNCONDITIONAL_JUMP)  ; LAB_00541015
    MOV ECX,0x63d87d                    ; 00541129 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00541129
    MOV EDI,0x596                       ; 0054112e
    PUSH 0x63d891                       ; 00541133 | = "Player list mismatch processing SimFr..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00541138 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0054113e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00541144
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00541149
    JMP 0x00541049                      ; 0054114c
        ;   XREF to: 00541049 (UNCONDITIONAL_JUMP)  ; LAB_00541049
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541151
        ;   Label: caseD_10
    CMP dword ptr [EAX],0x1             ; 00541154
    JNZ 0x0054119a                      ; 00541157
        ;   XREF to: 0054119a (CONDITIONAL_JUMP)  ; LAB_0054119a
    TEST EBX,EBX                        ; 00541159
    JL 0x0054119a                       ; 0054115b
        ;   XREF to: 0054119a (CONDITIONAL_JUMP)  ; LAB_0054119a
    CMP dword ptr [EAX + 0x4],0x3       ; 0054115d
    JNZ 0x0054044c                      ; 00541161
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00541167
    MOV EBX,dword ptr [ESI + 0x5]       ; 0054116e
    CMP EBX,dword ptr [EAX + 0x48]      ; 00541171
    JLE 0x0054044c                      ; 00541174
        ;   XREF to: 0054044c (CONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0054117a
    MOV EDI,EDX                         ; 00541181
    MOV dword ptr [EDX + 0x48],EBX      ; 00541183
    MOV ECX,0xb                         ; 00541186
    LEA EDI,[EDI + 0x4c]                ; 0054118b
    LEA ESI,[ESI + 0x9]                 ; 0054118e
    MOVSD.REP ES:EDI,ESI                ; 00541191
    MOV ESP,EBP                         ; 00541193
    POP EBP                             ; 00541195
    POP EDI                             ; 00541196
    POP ESI                             ; 00541197
    POP EBX                             ; 00541198
    RET                                 ; 00541199
    PUSH 0x0                            ; 0054119a
        ;   Label: LAB_0054119a
    MOV ESI,dword ptr [EBP + 0x18]      ; 0054119c
    PUSH ESI                            ; 0054119f
    MOV EDI,dword ptr [EBP + 0x14]      ; 005411a0
    PUSH EDI                            ; 005411a3
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930 ; 005411a4
        ;   XREF to: 00543930 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 005411a9
    MOV ESP,EBP                         ; 005411ac
    POP EBP                             ; 005411ae
    POP EDI                             ; 005411af
    POP ESI                             ; 005411b0
    POP EBX                             ; 005411b1
    RET                                 ; 005411b2

