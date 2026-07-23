; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_004ea830(int *param_1,int *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined1       Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xdf]:1  local_df
; undefined1       Stack[-0xde]:1  local_de
; undefined        Stack[-0xcb]:1  local_cb
; undefined1       Stack[-0xca]:1  local_ca
; undefined        Stack[-0x7b]:1  local_7b
; undefined4       Stack[-0x70]:4  local_70
; undefined1       Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x6b]:4  local_6b
; undefined4       Stack[-0x64]:4  local_64
; undefined1       Stack[-0x60]:1  local_60
; undefined4       Stack[-0x5f]:4  local_5f
; undefined4       Stack[-0x58]:4  local_58
; undefined1       Stack[-0x54]:1  local_54
; undefined4       Stack[-0x4c]:4  local_4c
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x47]:4  local_47
; undefined4       Stack[-0x40]:4  local_40
; undefined1       Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x3b]:4  local_3b
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740 at 004ea7ca
;
; Referenced Globals:
;   undefined4 caseD_0
;   void* switchdataD_004ea7e4 = 004ea5dc
;   TerminatedCString s_core_netgame_cpp_0058ba54
;   TerminatedCString s_allocSimFrame_sim_histor_0058ba68
;   TerminatedCString s_You_have_been_disconnect_0058c030
;   char CHAR_00h_0058c059 = \x00
;   TerminatedCString s_core_netgame_cpp_0058c05a
;   TerminatedCString s_Player_list_mismatch_pro_0058c06e
;   TerminatedCString s_core_netgame_cpp_0058c0a6
;   TerminatedCString s_Player_list_mismatch_0058c0ba
;   double DOUBLE_0058c0d2 = 0.0000152587890625
;   double DOUBLE_0058c0da = -30
;   double DOUBLE_0058c0e2 = 30
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   ... and 8 more
;
; Called Functions:
;   core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500
;   core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_004ec600
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90
;   core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_004eb3f0
;   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70
;   core_netgame.cpp_CNetGame_removePlayer_FUN_004ecc80
;   core_netgame.cpp_CNetGame_send_FUN_004eb350
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0
;   core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0
;   crt_memory.c_memset_FUN_00563cc0
;   crt_string.c__strcmp_FUN_005649c0
;   FUN_004c8440
;   support_trisock.cpp_createNetworkAddr_FUN_00548d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea830
        ;   Label: core_netgame.cpp_CNetGame_processPacket_FUN_004ea830
    PUSH ESI                            ; 004ea831
    PUSH EDI                            ; 004ea832
    PUSH EBP                            ; 004ea833
    MOV EBP,ESP                         ; 004ea834
    SUB ESP,0xe0                        ; 004ea836
    AND ESP,0xfffffff8                  ; 004ea83c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004ea83f
    MOV EDX,dword ptr [EBP + 0x18]      ; 004ea842
    PUSH EDX                            ; 004ea845
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ea846
    PUSH ECX                            ; 004ea849
    XOR EDI,EDI                         ; 004ea84a
    CALL core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_004eb3f0 ; 004ea84c
        ;   XREF to: 004eb3f0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_004eb3f0()
    ADD ESP,0x8                         ; 004ea851
    MOV EBX,EAX                         ; 004ea854
    MOV dword ptr [ESP + 0xd4],EDI      ; 004ea856
    TEST EAX,EAX                        ; 004ea85d
    JL 0x004ea882                       ; 004ea85f
        ;   XREF to: 004ea882 (CONDITIONAL_JUMP)  ; LAB_004ea882
    SHL EAX,0x3                         ; 004ea861
    MOV EDX,EAX                         ; 004ea864
    SHL EAX,0x4                         ; 004ea866
    SUB EAX,EDX                         ; 004ea869
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ea86b
    ADD EDX,0x20                        ; 004ea86e
    ADD EDX,EAX                         ; 004ea871
    MOV EAX,[0x01cea3f8]                ; 004ea873 | DAT_01cea3f8
    MOV dword ptr [ESP + 0xd4],EDX      ; 004ea878
    MOV dword ptr [EDX + 0x24],EAX      ; 004ea87f
    MOV AL,byte ptr [ESI + 0x4]         ; 004ea882
        ;   Label: LAB_004ea882
    CMP AL,0x10                         ; 004ea885
    JA 0x004ea5dc                       ; 004ea887
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    AND EAX,0xff                        ; 004ea88d
    JMP dword ptr [EAX*0x4 + 0x4ea7e4]  ; 004ea892 | caseD_e | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ea899
        ;   Label: caseD_1
    MOV ECX,dword ptr [EAX + 0x4]       ; 004ea89c
    MOV dword ptr [ESP + 0xc8],ESI      ; 004ea89f
    CMP ECX,0x1                         ; 004ea8a6
    JNZ 0x004ea9ce                      ; 004ea8a9
        ;   XREF to: 004ea9ce (CONDITIONAL_JUMP)  ; LAB_004ea9ce
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004ea8af
        ;   Label: LAB_004ea8af
    ADD EAX,0xd                         ; 004ea8b6
    TEST EBX,EBX                        ; 004ea8b9
    JL 0x004eaa00                       ; 004ea8bb
        ;   XREF to: 004eaa00 (CONDITIONAL_JUMP)  ; LAB_004eaa00
    PUSH EAX                            ; 004ea8c1
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ea8c2
    PUSH EAX                            ; 004ea8c9
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004ea8ca
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 004ea8cf
    TEST EAX,EAX                        ; 004ea8d2
    JZ 0x004eaa27                       ; 004ea8d4
        ;   XREF to: 004eaa27 (CONDITIONAL_JUMP)  ; LAB_004eaa27
    MOV ESI,dword ptr [ESP + 0xc8]      ; 004ea8da
        ;   Label: LAB_004ea8da
    MOV EDI,dword ptr [ESP + 0xd4]      ; 004ea8e1
    ADD ESI,0xd                         ; 004ea8e8
    PUSH EDI                            ; 004ea8eb
    MOV AL,byte ptr [ESI]               ; 004ea8ec
        ;   Label: LAB_004ea8ec
    MOV byte ptr [EDI],AL               ; 004ea8ee
    CMP AL,0x0                          ; 004ea8f0
    JZ 0x004ea904                       ; 004ea8f2
        ;   XREF to: 004ea904 (CONDITIONAL_JUMP)  ; LAB_004ea904
    MOV AL,byte ptr [ESI + 0x1]         ; 004ea8f4
    ADD ESI,0x2                         ; 004ea8f7
    MOV byte ptr [EDI + 0x1],AL         ; 004ea8fa
    ADD EDI,0x2                         ; 004ea8fd
    CMP AL,0x0                          ; 004ea900
    JNZ 0x004ea8ec                      ; 004ea902
        ;   XREF to: 004ea8ec (CONDITIONAL_JUMP)  ; LAB_004ea8ec
    POP EDI                             ; 004ea904
        ;   Label: LAB_004ea904
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004ea905
    MOV EAX,dword ptr [EAX + 0x21]      ; 004ea90c
    MOV dword ptr [EDI + 0x14],EAX      ; 004ea90f
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004ea912
    MOV EAX,dword ptr [EAX + 0x25]      ; 004ea919
    MOV dword ptr [EDI + 0x18],EAX      ; 004ea91c
    MOV EDI,dword ptr [EBP + 0x14]      ; 004ea91f
    PUSH EDI                            ; 004ea922
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70 ; 004ea923
        ;   XREF to: 004ece70 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70()
    ADD ESP,0x4                         ; 004ea928
    MOV EAX,0x71                        ; 004ea92b
        ;   Label: LAB_004ea92b
    MOV DH,0x2                          ; 004ea930
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ea932
    LEA EDI,[ESP + 0x25]                ; 004ea935
    MOV dword ptr [ESP + 0xc],EAX       ; 004ea939
    ADD ESI,0x118                       ; 004ea93d
    MOV byte ptr [ESP + 0x10],DH        ; 004ea943
    PUSH EDI                            ; 004ea947
    MOV AL,byte ptr [ESI]               ; 004ea948
        ;   Label: LAB_004ea948
    MOV byte ptr [EDI],AL               ; 004ea94a
    CMP AL,0x0                          ; 004ea94c
    JZ 0x004ea960                       ; 004ea94e
        ;   XREF to: 004ea960 (CONDITIONAL_JUMP)  ; LAB_004ea960
    MOV AL,byte ptr [ESI + 0x1]         ; 004ea950
    ADD ESI,0x2                         ; 004ea953
    MOV byte ptr [EDI + 0x1],AL         ; 004ea956
    ADD EDI,0x2                         ; 004ea959
    CMP AL,0x0                          ; 004ea95c
    JNZ 0x004ea948                      ; 004ea95e
        ;   XREF to: 004ea948 (CONDITIONAL_JUMP)  ; LAB_004ea948
    POP EDI                             ; 004ea960
        ;   Label: LAB_004ea960
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ea961
    LEA EDI,[ESP + 0x11]                ; 004ea964
    ADD ESI,0x8                         ; 004ea968
    PUSH EDI                            ; 004ea96b
    MOV AL,byte ptr [ESI]               ; 004ea96c
        ;   Label: LAB_004ea96c
    MOV byte ptr [EDI],AL               ; 004ea96e
    CMP AL,0x0                          ; 004ea970
    JZ 0x004ea984                       ; 004ea972
        ;   XREF to: 004ea984 (CONDITIONAL_JUMP)  ; LAB_004ea984
    MOV AL,byte ptr [ESI + 0x1]         ; 004ea974
    ADD ESI,0x2                         ; 004ea977
    MOV byte ptr [EDI + 0x1],AL         ; 004ea97a
    ADD EDI,0x2                         ; 004ea97d
    CMP AL,0x0                          ; 004ea980
    JNZ 0x004ea96c                      ; 004ea982
        ;   XREF to: 004ea96c (CONDITIONAL_JUMP)  ; LAB_004ea96c
    POP EDI                             ; 004ea984
        ;   Label: LAB_004ea984
    LEA EAX,[ESP + 0xc]                 ; 004ea985
    PUSH EAX                            ; 004ea989
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ea98a
    PUSH EBX                            ; 004ea98d
    LEA EDI,[ESP + 0x7d]                ; 004ea98e
    MOV ESI,dword ptr [EBP + 0x18]      ; 004ea992
    PUSH EDX                            ; 004ea995
    MOVSD ES:EDI,ESI                    ; 004ea996
    MOVSD ES:EDI,ESI                    ; 004ea997
    CALL core_netgame.cpp_CNetGame_send_FUN_004eb350 ; 004ea998
        ;   XREF to: 004eb350 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_send_FUN_004eb350()
    ADD ESP,0xc                         ; 004ea99d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ea9a0
    MOV EAX,dword ptr [EAX + 0x114]     ; 004ea9a3
    SHL EAX,0x3                         ; 004ea9a9
    MOV EDX,EAX                         ; 004ea9ac
    SHL EAX,0x4                         ; 004ea9ae
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ea9b1
    SUB EAX,EDX                         ; 004ea9b4
    MOV ESI,dword ptr [ESP + 0xc8]      ; 004ea9b6
    ADD EAX,ECX                         ; 004ea9bd
    LEA ESI,[ESI + 0x5]                 ; 004ea9bf
    LEA EDI,[EAX + 0x3c]                ; 004ea9c2
    MOVSD ES:EDI,ESI                    ; 004ea9c5
    MOVSD ES:EDI,ESI                    ; 004ea9c6
    MOV ESP,EBP                         ; 004ea9c7
    POP EBP                             ; 004ea9c9
    POP EDI                             ; 004ea9ca
    POP ESI                             ; 004ea9cb
    POP EBX                             ; 004ea9cc
    RET                                 ; 004ea9cd
    MOV AL,0x3                          ; 004ea9ce
        ;   Label: LAB_004ea9ce
    MOV byte ptr [ESP + 0x9c],AL        ; 004ea9d0
    LEA EAX,[ESP + 0x98]                ; 004ea9d7
    PUSH EAX                            ; 004ea9de
    MOV ESI,dword ptr [EBP + 0x18]      ; 004ea9df
    PUSH ESI                            ; 004ea9e2
    MOV EDI,dword ptr [EBP + 0x14]      ; 004ea9e3
    MOV EDX,0x9                         ; 004ea9e6
    PUSH EDI                            ; 004ea9eb
    MOV dword ptr [ESP + 0xa4],EDX      ; 004ea9ec
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0 ; 004ea9f3
        ;   XREF to: 004eb3c0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0()
    ADD ESP,0xc                         ; 004ea9f8
    JMP 0x004ea8af                      ; 004ea9fb
        ;   XREF to: 004ea8af (UNCONDITIONAL_JUMP)  ; LAB_004ea8af
    MOV EDX,dword ptr [ESP + 0xc8]      ; 004eaa00
        ;   Label: LAB_004eaa00
    MOV ECX,dword ptr [EDX + 0x25]      ; 004eaa07
    PUSH ECX                            ; 004eaa0a
    MOV EBX,dword ptr [EDX + 0x21]      ; 004eaa0b
    PUSH EBX                            ; 004eaa0e
    PUSH EAX                            ; 004eaa0f
    MOV ESI,dword ptr [EBP + 0x18]      ; 004eaa10
    PUSH ESI                            ; 004eaa13
    MOV EDI,dword ptr [EBP + 0x14]      ; 004eaa14
    PUSH EDI                            ; 004eaa17
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440 ; 004eaa18
        ;   XREF to: 004eb440 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440()
    ADD ESP,0x14                        ; 004eaa1d
    MOV EBX,EAX                         ; 004eaa20
    JMP 0x004ea92b                      ; 004eaa22
        ;   XREF to: 004ea92b (UNCONDITIONAL_JUMP)  ; LAB_004ea92b
    MOV EDX,dword ptr [ESP + 0xc8]      ; 004eaa27
        ;   Label: LAB_004eaa27
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004eaa2e
    MOV ECX,dword ptr [EDX + 0x21]      ; 004eaa35
    CMP ECX,dword ptr [EAX + 0x14]      ; 004eaa38
    JNZ 0x004ea8da                      ; 004eaa3b
        ;   XREF to: 004ea8da (CONDITIONAL_JUMP)  ; LAB_004ea8da
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004eaa41
    MOV ESI,dword ptr [EDX + 0x25]      ; 004eaa48
    CMP ESI,dword ptr [EAX + 0x18]      ; 004eaa4b
    JNZ 0x004ea8da                      ; 004eaa4e
        ;   XREF to: 004ea8da (CONDITIONAL_JUMP)  ; LAB_004ea8da
    JMP 0x004ea92b                      ; 004eaa54
        ;   XREF to: 004ea92b (UNCONDITIONAL_JUMP)  ; LAB_004ea92b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eaa59
        ;   Label: caseD_3
    CMP dword ptr [EAX],0x2             ; 004eaa5c
    JNZ 0x004ea5dc                      ; 004eaa5f
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    TEST EBX,EBX                        ; 004eaa65
    JL 0x004ea5dc                       ; 004eaa67
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    CMP dword ptr [EAX + 0x4],0x1       ; 004eaa6d
    JNZ 0x004ea5dc                      ; 004eaa71
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    CMP EBX,dword ptr [EAX + 0x110]     ; 004eaa77
    JNZ 0x004ea5dc                      ; 004eaa7d
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESI + 0x5]       ; 004eaa83
    MOV [0x01cea3fc],EAX                ; 004eaa86 | DAT_01cea3fc
    MOV ESP,EBP                         ; 004eaa8b
    POP EBP                             ; 004eaa8d
    POP EDI                             ; 004eaa8e
    POP ESI                             ; 004eaa8f
    POP EBX                             ; 004eaa90
    RET                                 ; 004eaa91
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eaa92
        ;   Label: caseD_2
    MOV ECX,ESI                         ; 004eaa95
    CMP dword ptr [EAX],0x2             ; 004eaa97
    JNZ 0x004eab0f                      ; 004eaa9a
        ;   XREF to: 004eab0f (CONDITIONAL_JUMP)  ; LAB_004eab0f
    TEST EBX,EBX                        ; 004eaa9c
    JL 0x004eab0f                       ; 004eaa9e
        ;   XREF to: 004eab0f (CONDITIONAL_JUMP)  ; LAB_004eab0f
    CMP EBX,dword ptr [EAX + 0x110]     ; 004eaaa0
    JNZ 0x004eab0f                      ; 004eaaa6
        ;   XREF to: 004eab0f (CONDITIONAL_JUMP)  ; LAB_004eab0f
    MOV EDX,dword ptr [EAX + 0x4]       ; 004eaaa8
    CMP EDX,0x1                         ; 004eaaab
    JNZ 0x004ea5dc                      ; 004eaaae
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,dword ptr [ESP + 0xd4]      ; 004eaab4
    LEA ESI,[ECX + 0x5]                 ; 004eaabb
    MOV dword ptr [0x01cea3fc],EDX      ; 004eaabe | DAT_01cea3fc
    PUSH EDI                            ; 004eaac4
    MOV AL,byte ptr [ESI]               ; 004eaac5
        ;   Label: LAB_004eaac5
    MOV byte ptr [EDI],AL               ; 004eaac7
    CMP AL,0x0                          ; 004eaac9
    JZ 0x004eaadd                       ; 004eaacb
        ;   XREF to: 004eaadd (CONDITIONAL_JUMP)  ; LAB_004eaadd
    MOV AL,byte ptr [ESI + 0x1]         ; 004eaacd
    ADD ESI,0x2                         ; 004eaad0
    MOV byte ptr [EDI + 0x1],AL         ; 004eaad3
    ADD EDI,0x2                         ; 004eaad6
    CMP AL,0x0                          ; 004eaad9
    JNZ 0x004eaac5                      ; 004eaadb
        ;   XREF to: 004eaac5 (CONDITIONAL_JUMP)  ; LAB_004eaac5
    POP EDI                             ; 004eaadd
        ;   Label: LAB_004eaadd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eaade
    MOV EAX,dword ptr [EAX + 0x114]     ; 004eaae1
    SHL EAX,0x3                         ; 004eaae7
    MOV EDX,EAX                         ; 004eaaea
    SHL EAX,0x4                         ; 004eaaec
    MOV ESI,dword ptr [EBP + 0x14]      ; 004eaaef
    SUB EAX,EDX                         ; 004eaaf2
    ADD EAX,ESI                         ; 004eaaf4
    LEA EDI,[EAX + 0x3c]                ; 004eaaf6
    LEA ESI,[ECX + 0x69]                ; 004eaaf9
    MOVSD ES:EDI,ESI                    ; 004eaafc
    MOVSD ES:EDI,ESI                    ; 004eaafd
    MOV dword ptr [0x01cea404],0xffffffff ; 004eaafe | DAT_01cea404
    MOV ESP,EBP                         ; 004eab08
    POP EBP                             ; 004eab0a
    POP EDI                             ; 004eab0b
    POP ESI                             ; 004eab0c
    POP EBX                             ; 004eab0d
    RET                                 ; 004eab0e
    PUSH 0x0                            ; 004eab0f
        ;   Label: LAB_004eab0f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004eab11
    PUSH EAX                            ; 004eab14
    MOV EDX,dword ptr [EBP + 0x14]      ; 004eab15
    PUSH EDX                            ; 004eab18
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0 ; 004eab19
        ;   XREF to: 004edab0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0()
    ADD ESP,0xc                         ; 004eab1e
    MOV ESP,EBP                         ; 004eab21
    POP EBP                             ; 004eab23
    POP EDI                             ; 004eab24
    POP ESI                             ; 004eab25
    POP EBX                             ; 004eab26
    RET                                 ; 004eab27
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eab28
        ;   Label: caseD_4
    MOV EDI,dword ptr [EAX]             ; 004eab2b
    TEST EDI,EDI                        ; 004eab2d
    JNZ 0x004eab46                      ; 004eab2f
        ;   XREF to: 004eab46 (CONDITIONAL_JUMP)  ; LAB_004eab46
    PUSH EDI                            ; 004eab31
    MOV ECX,dword ptr [EBP + 0x18]      ; 004eab32
    PUSH ECX                            ; 004eab35
    PUSH EAX                            ; 004eab36
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0 ; 004eab37
        ;   XREF to: 004edab0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0()
    ADD ESP,0xc                         ; 004eab3c
    MOV ESP,EBP                         ; 004eab3f
    POP EBP                             ; 004eab41
    POP EDI                             ; 004eab42
    POP ESI                             ; 004eab43
    POP EBX                             ; 004eab44
    RET                                 ; 004eab45
    MOV EAX,0x9                         ; 004eab46
        ;   Label: LAB_004eab46
    MOV DL,0x5                          ; 004eab4b
    MOV dword ptr [ESP + 0xb0],EAX      ; 004eab4d
    MOV byte ptr [ESP + 0xb4],DL        ; 004eab54
    MOV EAX,dword ptr [ESI + 0x5]       ; 004eab5b
    MOV dword ptr [ESP + 0xb5],EAX      ; 004eab5e
    LEA EAX,[ESP + 0xb0]                ; 004eab65
    PUSH EAX                            ; 004eab6c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004eab6d
    PUSH EAX                            ; 004eab70
    MOV EDX,dword ptr [EBP + 0x14]      ; 004eab71
    PUSH EDX                            ; 004eab74
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0 ; 004eab75
        ;   XREF to: 004eb3c0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0()
    ADD ESP,0xc                         ; 004eab7a
    MOV ESP,EBP                         ; 004eab7d
    POP EBP                             ; 004eab7f
    POP EDI                             ; 004eab80
    POP ESI                             ; 004eab81
    POP EBX                             ; 004eab82
    RET                                 ; 004eab83
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eab84
        ;   Label: caseD_5
    CMP dword ptr [EAX],0x0             ; 004eab87
    JZ 0x004eac73                       ; 004eab8a
        ;   XREF to: 004eac73 (CONDITIONAL_JUMP)  ; LAB_004eac73
    TEST EBX,EBX                        ; 004eab90
    JL 0x004eac73                       ; 004eab92
        ;   XREF to: 004eac73 (CONDITIONAL_JUMP)  ; LAB_004eac73
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004eab98
    FLD float ptr [EAX + 0x28]          ; 004eab9f
    FLDZ                                ; 004eaba2
    FCOMPP                              ; 004eaba4
    FNSTSW AX                           ; 004eaba6
    SAHF                                ; 004eaba8
    JA 0x004eac0d                       ; 004eaba9
        ;   XREF to: 004eac0d (CONDITIONAL_JUMP)  ; LAB_004eac0d
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004eabab
    MOV EDX,dword ptr [ESI + 0x5]       ; 004eabb2
    MOV EAX,dword ptr [EAX + 0x30]      ; 004eabb5
    SUB EDX,EAX                         ; 004eabb8
    MOV dword ptr [ESP + 0xdc],EDX      ; 004eabba
    FILD dword ptr [ESP + 0xdc]         ; 004eabc1
    FMUL double ptr [0x0058c0d2]        ; 004eabc8 | DOUBLE_0058c0d2
    FST float ptr [ESP + 0x4]           ; 004eabce
    FCOMP double ptr [0x0058c0da]       ; 004eabd2 | DOUBLE_0058c0da
    FNSTSW AX                           ; 004eabd8
    SAHF                                ; 004eabda
    JNC 0x004eabe5                      ; 004eabdb
        ;   XREF to: 004eabe5 (CONDITIONAL_JUMP)  ; LAB_004eabe5
    MOV dword ptr [ESP + 0x4],0xc1f00000 ; 004eabdd
    FLD float ptr [ESP + 0x4]           ; 004eabe5
        ;   Label: LAB_004eabe5
    FCOMP double ptr [0x0058c0e2]       ; 004eabe9 | DOUBLE_0058c0e2
    FNSTSW AX                           ; 004eabef
    SAHF                                ; 004eabf1
    JBE 0x004eabfc                      ; 004eabf2
        ;   XREF to: 004eabfc (CONDITIONAL_JUMP)  ; LAB_004eabfc
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 004eabf4
    FLD float ptr [ESP + 0x4]           ; 004eabfc
        ;   Label: LAB_004eabfc
    FLDZ                                ; 004eac00
    FCOMPP                              ; 004eac02
    FNSTSW AX                           ; 004eac04
    SAHF                                ; 004eac06
    JNC 0x004ea5dc                      ; 004eac07
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [0x01cea3f8]      ; 004eac0d | DAT_01cea3f8
        ;   Label: LAB_004eac0d
    MOV EAX,dword ptr [ESI + 0x5]       ; 004eac13
    SUB EDX,EAX                         ; 004eac16
    MOV dword ptr [ESP + 0xdc],EDX      ; 004eac18
    FILD dword ptr [ESP + 0xdc]         ; 004eac1f
    FMUL double ptr [0x0058c0d2]        ; 004eac26 | DOUBLE_0058c0d2
    FST float ptr [ESP + 0x8]           ; 004eac2c
    FLDZ                                ; 004eac30
    FCOMPP                              ; 004eac32
    FNSTSW AX                           ; 004eac34
    SAHF                                ; 004eac36
    JBE 0x004eac3f                      ; 004eac37
        ;   XREF to: 004eac3f (CONDITIONAL_JUMP)  ; LAB_004eac3f
    XOR EAX,EAX                         ; 004eac39
    MOV dword ptr [ESP + 0x8],EAX       ; 004eac3b
    FLD float ptr [ESP + 0x8]           ; 004eac3f
        ;   Label: LAB_004eac3f
    FCOMP double ptr [0x0058c0e2]       ; 004eac43 | DOUBLE_0058c0e2
    FNSTSW AX                           ; 004eac49
    SAHF                                ; 004eac4b
    JBE 0x004eac56                      ; 004eac4c
        ;   XREF to: 004eac56 (CONDITIONAL_JUMP)  ; LAB_004eac56
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 004eac4e
    MOV EDX,dword ptr [ESP + 0xd4]      ; 004eac56
        ;   Label: LAB_004eac56
    MOV EAX,dword ptr [ESP + 0x8]       ; 004eac5d
    MOV dword ptr [EDX + 0x28],EAX      ; 004eac61
    MOV EAX,[0x01cea3f8]                ; 004eac64 | DAT_01cea3f8
    MOV dword ptr [EDX + 0x30],EAX      ; 004eac69
    MOV ESP,EBP                         ; 004eac6c
    POP EBP                             ; 004eac6e
    POP EDI                             ; 004eac6f
    POP ESI                             ; 004eac70
    POP EBX                             ; 004eac71
    RET                                 ; 004eac72
    PUSH 0x0                            ; 004eac73
        ;   Label: LAB_004eac73
    MOV ECX,dword ptr [EBP + 0x18]      ; 004eac75
    PUSH ECX                            ; 004eac78
    MOV EBX,dword ptr [EBP + 0x14]      ; 004eac79
    PUSH EBX                            ; 004eac7c
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0 ; 004eac7d
        ;   XREF to: 004edab0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0()
    ADD ESP,0xc                         ; 004eac82
    MOV ESP,EBP                         ; 004eac85
    POP EBP                             ; 004eac87
    POP EDI                             ; 004eac88
    POP ESI                             ; 004eac89
    POP EBX                             ; 004eac8a
    RET                                 ; 004eac8b
    MOV EDI,ESI                         ; 004eac8c
        ;   Label: caseD_6
    TEST EBX,EBX                        ; 004eac8e
    JL 0x004ea5dc                       ; 004eac90
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [0x01cea40c]      ; 004eac96 | DAT_01cea40c
    XOR EAX,EAX                         ; 004eac9c
    CMP EAX,EDX                         ; 004eac9e
    JGE 0x004eacda                      ; 004eaca0
        ;   XREF to: 004eacda (CONDITIONAL_JUMP)  ; LAB_004eacda
    LEA EBX,[EAX*0x8 + 0x0]             ; 004eaca2
    SHL EBX,0x5                         ; 004eaca9
    ADD EBX,0x1cea410                   ; 004eacac
    IMUL ESI,EAX,0x120                  ; 004eacb2
        ;   Label: LAB_004eacb2
    MOV ECX,dword ptr [EBP + 0x18]      ; 004eacb8
    MOV DX,word ptr [EBX + 0x4]         ; 004eacbb
    CMP DX,word ptr [ECX + 0x4]         ; 004eacbf
    JNZ 0x004ead3e                      ; 004eacc3
        ;   XREF to: 004ead3e (CONDITIONAL_JUMP)  ; LAB_004ead3e
    MOV EDX,dword ptr [EBX]             ; 004eacc9
    CMP EDX,dword ptr [ECX]             ; 004eaccb
    JNZ 0x004ead3e                      ; 004eaccd
        ;   XREF to: 004ead3e (CONDITIONAL_JUMP)  ; LAB_004ead3e
    MOV EDX,dword ptr [EDI + 0x5]       ; 004eaccf
    CMP EDX,dword ptr [ESI + 0x1cea418] ; 004eacd2 | DAT_01cea538
    JNZ 0x004ead3e                      ; 004eacd8
        ;   XREF to: 004ead3e (CONDITIONAL_JUMP)  ; LAB_004ead3e
    CMP EAX,dword ptr [0x01cea40c]      ; 004eacda | DAT_01cea40c
        ;   Label: LAB_004eacda
    JNZ 0x004ead02                      ; 004eace0
        ;   XREF to: 004ead02 (CONDITIONAL_JUMP)  ; LAB_004ead02
    LEA EAX,[EDI + 0x9]                 ; 004eace2
    PUSH EAX                            ; 004eace5
    MOV EBX,dword ptr [ESP + 0xd8]      ; 004eace6
    PUSH EBX                            ; 004eaced
    MOV ESI,dword ptr [EDI + 0x5]       ; 004eacee
    PUSH ESI                            ; 004eacf1
    MOV EAX,dword ptr [EBP + 0x18]      ; 004eacf2
    PUSH EAX                            ; 004eacf5
    MOV EDX,dword ptr [EBP + 0x14]      ; 004eacf6
    PUSH EDX                            ; 004eacf9
    CALL core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500 ; 004eacfa
        ;   XREF to: 004ec500 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500()
    ADD ESP,0x14                        ; 004eacff
    MOV dword ptr [ESP + 0x80],0x9      ; 004ead02
        ;   Label: LAB_004ead02
    MOV byte ptr [ESP + 0x84],0x7       ; 004ead0d
    MOV EAX,dword ptr [EDI + 0x5]       ; 004ead15
    MOV dword ptr [ESP + 0x85],EAX      ; 004ead18
    LEA EAX,[ESP + 0x80]                ; 004ead1f
    PUSH EAX                            ; 004ead26
    MOV EBX,dword ptr [EBP + 0x18]      ; 004ead27
    PUSH EBX                            ; 004ead2a
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ead2b
    PUSH ESI                            ; 004ead2e
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0 ; 004ead2f
        ;   XREF to: 004eb3c0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0()
    ADD ESP,0xc                         ; 004ead34
    MOV ESP,EBP                         ; 004ead37
    POP EBP                             ; 004ead39
    POP EDI                             ; 004ead3a
    POP ESI                             ; 004ead3b
    POP EBX                             ; 004ead3c
    RET                                 ; 004ead3d
    MOV ECX,dword ptr [0x01cea40c]      ; 004ead3e | DAT_01cea40c
        ;   Label: LAB_004ead3e
    INC EAX                             ; 004ead44
    ADD EBX,0x120                       ; 004ead45
    CMP EAX,ECX                         ; 004ead4b
    JL 0x004eacb2                       ; 004ead4d
        ;   XREF to: 004eacb2 (CONDITIONAL_JUMP)  ; LAB_004eacb2
    JMP 0x004eacda                      ; 004ead53
        ;   XREF to: 004eacda (UNCONDITIONAL_JUMP)  ; LAB_004eacda
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ead55
        ;   Label: caseD_7
    MOV ECX,dword ptr [EAX]             ; 004ead58
    MOV dword ptr [ESP + 0xd0],ESI      ; 004ead5a
    TEST ECX,ECX                        ; 004ead61
    JZ 0x004ea5dc                       ; 004ead63
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    TEST EBX,EBX                        ; 004ead69
    JL 0x004ea5dc                       ; 004ead6b
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,dword ptr [0x01d06610]      ; 004ead71 | DAT_01d06610
    XOR ESI,ESI                         ; 004ead77
    CMP ESI,EDI                         ; 004ead79
    JGE 0x004ea5dc                      ; 004ead7b
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,EDI                         ; 004ead81
    SHL EDI,0x4                         ; 004ead83
    MOV EAX,ESI                         ; 004ead86
    ADD EDI,EDX                         ; 004ead88
    SHL EAX,0x4                         ; 004ead8a
    SHL EDI,0x2                         ; 004ead8d
    SHL EAX,0x2                         ; 004ead90
    ADD EDI,EDX                         ; 004ead93
    SHL EAX,0x2                         ; 004ead95
    SHL EDI,0x2                         ; 004ead98
    MOV ECX,dword ptr [ESP + 0xd0]      ; 004ead9b
        ;   Label: LAB_004ead9b
    MOV EDX,dword ptr [EAX + 0x1d06618] ; 004eada2
    CMP EDX,dword ptr [ECX + 0x5]       ; 004eada8
    JZ 0x004eadbd                       ; 004eadab
        ;   XREF to: 004eadbd (CONDITIONAL_JUMP)  ; LAB_004eadbd
    ADD EAX,0x114                       ; 004eadad
    INC ESI                             ; 004eadb2
    CMP EAX,EDI                         ; 004eadb3
    JGE 0x004ea5dc                      ; 004eadb5
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    JMP 0x004ead9b                      ; 004eadbb
        ;   XREF to: 004ead9b (UNCONDITIONAL_JUMP)  ; LAB_004ead9b
    LEA EDX,[EAX + EBX*0x1]             ; 004eadbd
        ;   Label: LAB_004eadbd
    MOV byte ptr [EDX + 0x1d0661c],0x1  ; 004eadc0
    ADD EAX,0x114                       ; 004eadc7
    INC ESI                             ; 004eadcc
    CMP EAX,EDI                         ; 004eadcd
    JGE 0x004ea5dc                      ; 004eadcf
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    JMP 0x004ead9b                      ; 004eadd5
        ;   XREF to: 004ead9b (UNCONDITIONAL_JUMP)  ; LAB_004ead9b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eadd7
        ;   Label: caseD_8
    MOV EDI,dword ptr [EAX]             ; 004eadda
    CMP EDI,0x2                         ; 004eaddc
    JNZ 0x004eab0f                      ; 004eaddf
        ;   XREF to: 004eab0f (CONDITIONAL_JUMP)  ; LAB_004eab0f
    TEST EBX,EBX                        ; 004eade5
    JL 0x004eab0f                       ; 004eade7
        ;   XREF to: 004eab0f (CONDITIONAL_JUMP)  ; LAB_004eab0f
    CMP EBX,dword ptr [EAX + 0x110]     ; 004eaded
    JNZ 0x004eab0f                      ; 004eadf3
        ;   XREF to: 004eab0f (CONDITIONAL_JUMP)  ; LAB_004eab0f
    MOV ECX,dword ptr [EAX + 0x4]       ; 004eadf9
    CMP ECX,0x1                         ; 004eadfc
    JNZ 0x004eae09                      ; 004eadff
        ;   XREF to: 004eae09 (CONDITIONAL_JUMP)  ; LAB_004eae09
    CMP ECX,dword ptr [ESI + 0x5]       ; 004eae01
    JNZ 0x004eae09                      ; 004eae04
        ;   XREF to: 004eae09 (CONDITIONAL_JUMP)  ; LAB_004eae09
    MOV dword ptr [EAX + 0x4],EDI       ; 004eae06
    MOV EDI,0x9                         ; 004eae09
        ;   Label: LAB_004eae09
    MOV DL,0x9                          ; 004eae0e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eae10
    MOV dword ptr [ESP + 0xa4],EDI      ; 004eae13
    MOV byte ptr [ESP + 0xa8],DL        ; 004eae1a
    MOV EAX,dword ptr [EAX + 0x114]     ; 004eae21
    SHL EAX,0x3                         ; 004eae27
    MOV EDX,EAX                         ; 004eae2a
    SHL EAX,0x4                         ; 004eae2c
    SUB EAX,EDX                         ; 004eae2f
    MOV EDX,dword ptr [EBP + 0x14]      ; 004eae31
    ADD EAX,EDX                         ; 004eae34
    MOV EAX,dword ptr [EAX + 0x5c]      ; 004eae36
    MOV dword ptr [ESP + 0xa9],EAX      ; 004eae39
    LEA EAX,[ESP + 0xa4]                ; 004eae40
    PUSH EAX                            ; 004eae47
    MOV ECX,dword ptr [EDX + 0x110]     ; 004eae48
    PUSH ECX                            ; 004eae4e
    PUSH EDX                            ; 004eae4f
    CALL core_netgame.cpp_CNetGame_send_FUN_004eb350 ; 004eae50
        ;   XREF to: 004eb350 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_send_FUN_004eb350()
    MOV EDI,dword ptr [0x01cea400]      ; 004eae55 | DAT_01cea400
    MOV EAX,dword ptr [ESI + 0x5]       ; 004eae5b
    ADD ESP,0xc                         ; 004eae5e
    CMP EAX,EDI                         ; 004eae61
    JLE 0x004ea5dc                      ; 004eae63
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV [0x01cea400],EAX                ; 004eae69 | DAT_01cea400
    MOV ESP,EBP                         ; 004eae6e
    POP EBP                             ; 004eae70
    POP EDI                             ; 004eae71
    POP ESI                             ; 004eae72
    POP EBX                             ; 004eae73
    RET                                 ; 004eae74
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eae75
        ;   Label: caseD_9
    CMP dword ptr [EAX],0x1             ; 004eae78
    JNZ 0x004eaea8                      ; 004eae7b
        ;   XREF to: 004eaea8 (CONDITIONAL_JUMP)  ; LAB_004eaea8
    TEST EBX,EBX                        ; 004eae7d
    JL 0x004eaea8                       ; 004eae7f
        ;   XREF to: 004eaea8 (CONDITIONAL_JUMP)  ; LAB_004eaea8
    CMP dword ptr [EAX + 0x4],0x2       ; 004eae81
    JNZ 0x004ea5dc                      ; 004eae85
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [ESP + 0xd4]      ; 004eae8b
    MOV EAX,dword ptr [ESI + 0x5]       ; 004eae92
    CMP EAX,dword ptr [EDX + 0x3c]      ; 004eae95
    JL 0x004ea5dc                       ; 004eae98
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV dword ptr [EDX + 0x3c],EAX      ; 004eae9e
    MOV ESP,EBP                         ; 004eaea1
    POP EBP                             ; 004eaea3
    POP EDI                             ; 004eaea4
    POP ESI                             ; 004eaea5
    POP EBX                             ; 004eaea6
    RET                                 ; 004eaea7
    PUSH 0x0                            ; 004eaea8
        ;   Label: LAB_004eaea8
    MOV EBX,dword ptr [EBP + 0x18]      ; 004eaeaa
    PUSH EBX                            ; 004eaead
    MOV ESI,dword ptr [EBP + 0x14]      ; 004eaeae
    PUSH ESI                            ; 004eaeb1
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0 ; 004eaeb2
        ;   XREF to: 004edab0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0()
    ADD ESP,0xc                         ; 004eaeb7
    MOV ESP,EBP                         ; 004eaeba
    POP EBP                             ; 004eaebc
    POP EDI                             ; 004eaebd
    POP ESI                             ; 004eaebe
    POP EBX                             ; 004eaebf
    RET                                 ; 004eaec0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eaec1
        ;   Label: caseD_a
    MOV EDI,dword ptr [EAX]             ; 004eaec4
    MOV EDX,ESI                         ; 004eaec6
    CMP EDI,0x1                         ; 004eaec8
    JNZ 0x004eaf88                      ; 004eaecb
        ;   XREF to: 004eaf88 (CONDITIONAL_JUMP)  ; LAB_004eaf88
    TEST EBX,EBX                        ; 004eaed1
    JL 0x004eaf88                       ; 004eaed3
        ;   XREF to: 004eaf88 (CONDITIONAL_JUMP)  ; LAB_004eaf88
    CMP EDI,dword ptr [EAX + 0x4]       ; 004eaed9
    JNZ 0x004ea5dc                      ; 004eaedc
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004eaee2
    CMP dword ptr [EAX + 0x40],0x0      ; 004eaee9
    JZ 0x004eaf49                       ; 004eaeed
        ;   XREF to: 004eaf49 (CONDITIONAL_JUMP)  ; LAB_004eaf49
    MOV ECX,dword ptr [ESP + 0xd4]      ; 004eaeef
    MOV EAX,dword ptr [ESI + 0x5]       ; 004eaef6
    MOV ECX,dword ptr [ECX + 0x40]      ; 004eaef9
    SUB ECX,EAX                         ; 004eaefc
    MOV dword ptr [ESP + 0xdc],ECX      ; 004eaefe
    FILD dword ptr [ESP + 0xdc]         ; 004eaf05
    FMUL double ptr [0x0058c0d2]        ; 004eaf0c | DOUBLE_0058c0d2
    FST float ptr [ESP]                 ; 004eaf12
    FCOMP double ptr [0x0058c0da]       ; 004eaf15 | DOUBLE_0058c0da
    FNSTSW AX                           ; 004eaf1b
    SAHF                                ; 004eaf1d
    JC 0x004eafa1                       ; 004eaf1e
        ;   XREF to: 004eafa1 (CONDITIONAL_JUMP)  ; LAB_004eafa1
    FLD float ptr [ESP]                 ; 004eaf24
        ;   Label: LAB_004eaf24
    FCOMP double ptr [0x0058c0e2]       ; 004eaf27 | DOUBLE_0058c0e2
    FNSTSW AX                           ; 004eaf2d
    SAHF                                ; 004eaf2f
    JBE 0x004eaf39                      ; 004eaf30
        ;   XREF to: 004eaf39 (CONDITIONAL_JUMP)  ; LAB_004eaf39
    MOV dword ptr [ESP],0x41f00000      ; 004eaf32
    FLD float ptr [ESP]                 ; 004eaf39
        ;   Label: LAB_004eaf39
    FLDZ                                ; 004eaf3c
    FCOMPP                              ; 004eaf3e
    FNSTSW AX                           ; 004eaf40
    SAHF                                ; 004eaf42
    JNC 0x004ea5dc                      ; 004eaf43
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV ECX,dword ptr [ESP + 0xd4]      ; 004eaf49
        ;   Label: LAB_004eaf49
    LEA ESI,[EDX + 0x9]                 ; 004eaf50
    MOV EAX,dword ptr [EDX + 0x1d]      ; 004eaf53
    MOV EDI,ECX                         ; 004eaf56
    MOV dword ptr [ECX + 0x44],EAX      ; 004eaf58
    PUSH EDI                            ; 004eaf5b
    MOV AL,byte ptr [ESI]               ; 004eaf5c
        ;   Label: LAB_004eaf5c
    MOV byte ptr [EDI],AL               ; 004eaf5e
    CMP AL,0x0                          ; 004eaf60
    JZ 0x004eaf74                       ; 004eaf62
        ;   XREF to: 004eaf74 (CONDITIONAL_JUMP)  ; LAB_004eaf74
    MOV AL,byte ptr [ESI + 0x1]         ; 004eaf64
    ADD ESI,0x2                         ; 004eaf67
    MOV byte ptr [EDI + 0x1],AL         ; 004eaf6a
    ADD EDI,0x2                         ; 004eaf6d
    CMP AL,0x0                          ; 004eaf70
    JNZ 0x004eaf5c                      ; 004eaf72
        ;   XREF to: 004eaf5c (CONDITIONAL_JUMP)  ; LAB_004eaf5c
    POP EDI                             ; 004eaf74
        ;   Label: LAB_004eaf74
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eaf75
    PUSH EAX                            ; 004eaf78
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70 ; 004eaf79
        ;   XREF to: 004ece70 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70()
    ADD ESP,0x4                         ; 004eaf7e
    MOV ESP,EBP                         ; 004eaf81
    POP EBP                             ; 004eaf83
    POP EDI                             ; 004eaf84
    POP ESI                             ; 004eaf85
    POP EBX                             ; 004eaf86
    RET                                 ; 004eaf87
    PUSH 0x0                            ; 004eaf88
        ;   Label: LAB_004eaf88
    MOV EDX,dword ptr [EBP + 0x18]      ; 004eaf8a
    PUSH EDX                            ; 004eaf8d
    MOV ECX,dword ptr [EBP + 0x14]      ; 004eaf8e
    PUSH ECX                            ; 004eaf91
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0 ; 004eaf92
        ;   XREF to: 004edab0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0()
    ADD ESP,0xc                         ; 004eaf97
    MOV ESP,EBP                         ; 004eaf9a
    POP EBP                             ; 004eaf9c
    POP EDI                             ; 004eaf9d
    POP ESI                             ; 004eaf9e
    POP EBX                             ; 004eaf9f
    RET                                 ; 004eafa0
    MOV dword ptr [ESP],0xc1f00000      ; 004eafa1
        ;   Label: LAB_004eafa1
    JMP 0x004eaf24                      ; 004eafa8
        ;   XREF to: 004eaf24 (UNCONDITIONAL_JUMP)  ; LAB_004eaf24
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eafad
        ;   Label: caseD_b
    CMP dword ptr [EAX],0x2             ; 004eafb0
    JNZ 0x004eaea8                      ; 004eafb3
        ;   XREF to: 004eaea8 (CONDITIONAL_JUMP)  ; LAB_004eaea8
    TEST EBX,EBX                        ; 004eafb9
    JL 0x004eaea8                       ; 004eafbb
        ;   XREF to: 004eaea8 (CONDITIONAL_JUMP)  ; LAB_004eaea8
    CMP EBX,dword ptr [EAX + 0x110]     ; 004eafc1
    JNZ 0x004eaea8                      ; 004eafc7
        ;   XREF to: 004eaea8 (CONDITIONAL_JUMP)  ; LAB_004eaea8
    CMP dword ptr [EAX + 0x4],0x1       ; 004eafcd
    JNZ 0x004ea5dc                      ; 004eafd1
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,[0x01cea404]                ; 004eafd7 | DAT_01cea404
    CMP EAX,dword ptr [ESI + 0x5]       ; 004eafdc
    JGE 0x004eaffe                      ; 004eafdf
        ;   XREF to: 004eaffe (CONDITIONAL_JUMP)  ; LAB_004eaffe
    PUSH ESI                            ; 004eafe1
    MOV EDI,dword ptr [EBP + 0x14]      ; 004eafe2
    PUSH EDI                            ; 004eafe5
    CALL core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_004ec600 ; 004eafe6
        ;   XREF to: 004ec600 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_004ec600()
    ADD ESP,0x8                         ; 004eafeb
    TEST EAX,EAX                        ; 004eafee
    JZ 0x004ea5dc                       ; 004eaff0
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESI + 0x5]       ; 004eaff6
    MOV [0x01cea404],EAX                ; 004eaff9 | DAT_01cea404
    MOV dword ptr [ESP + 0x8c],0x9      ; 004eaffe
        ;   Label: LAB_004eaffe
    MOV byte ptr [ESP + 0x90],0xc       ; 004eb009
    MOV EAX,[0x01cea404]                ; 004eb011 | DAT_01cea404
    MOV dword ptr [ESP + 0x91],EAX      ; 004eb016
    LEA EAX,[ESP + 0x8c]                ; 004eb01d
    PUSH EAX                            ; 004eb024
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb025
    MOV EDX,dword ptr [EAX + 0x110]     ; 004eb028
    PUSH EDX                            ; 004eb02e
    PUSH EAX                            ; 004eb02f
    CALL core_netgame.cpp_CNetGame_send_FUN_004eb350 ; 004eb030
        ;   XREF to: 004eb350 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_send_FUN_004eb350()
    ADD ESP,0xc                         ; 004eb035
    MOV ESP,EBP                         ; 004eb038
    POP EBP                             ; 004eb03a
    POP EDI                             ; 004eb03b
    POP ESI                             ; 004eb03c
    POP EBX                             ; 004eb03d
    RET                                 ; 004eb03e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb03f
        ;   Label: caseD_c
    MOV EDI,dword ptr [EAX]             ; 004eb042
    CMP EDI,0x1                         ; 004eb044
    JNZ 0x004eaea8                      ; 004eb047
        ;   XREF to: 004eaea8 (CONDITIONAL_JUMP)  ; LAB_004eaea8
    TEST EBX,EBX                        ; 004eb04d
    JL 0x004eaea8                       ; 004eb04f
        ;   XREF to: 004eaea8 (CONDITIONAL_JUMP)  ; LAB_004eaea8
    CMP EDI,dword ptr [EAX + 0x4]       ; 004eb055
    JNZ 0x004ea5dc                      ; 004eb058
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004eb05e
    MOV ECX,dword ptr [ESI + 0x5]       ; 004eb065
    CMP ECX,dword ptr [EAX + 0x34]      ; 004eb068
    JL 0x004ea5dc                       ; 004eb06b
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [ESP + 0xd4]      ; 004eb071
    MOV dword ptr [EDX + 0x34],ECX      ; 004eb078
    MOV ESP,EBP                         ; 004eb07b
    POP EBP                             ; 004eb07d
    POP EDI                             ; 004eb07e
    POP ESI                             ; 004eb07f
    POP EBX                             ; 004eb080
    RET                                 ; 004eb081
    CMP dword ptr [ESI + 0x5],0x0       ; 004eb082
        ;   Label: caseD_d
    JNZ 0x004eb111                      ; 004eb086
        ;   XREF to: 004eb111 (CONDITIONAL_JUMP)  ; LAB_004eb111
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb08c
        ;   Label: LAB_004eb08c
    CMP dword ptr [EAX],0x1             ; 004eb08f
    JNZ 0x004eb0ae                      ; 004eb092
        ;   XREF to: 004eb0ae (CONDITIONAL_JUMP)  ; LAB_004eb0ae
    TEST EBX,EBX                        ; 004eb094
    JL 0x004eb0a2                       ; 004eb096
        ;   XREF to: 004eb0a2 (CONDITIONAL_JUMP)  ; LAB_004eb0a2
    PUSH EBX                            ; 004eb098
    PUSH EAX                            ; 004eb099
    CALL core_netgame.cpp_CNetGame_removePlayer_FUN_004ecc80 ; 004eb09a
        ;   XREF to: 004ecc80 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_removePlayer_FUN_004ecc80()
    ADD ESP,0x8                         ; 004eb09f
    MOV EDI,dword ptr [EBP + 0x14]      ; 004eb0a2
        ;   Label: LAB_004eb0a2
    PUSH EDI                            ; 004eb0a5
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70 ; 004eb0a6
        ;   XREF to: 004ece70 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70()
    ADD ESP,0x4                         ; 004eb0ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb0ae
        ;   Label: LAB_004eb0ae
    CMP dword ptr [EAX],0x2             ; 004eb0b1
    JNZ 0x004ea5dc                      ; 004eb0b4
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    TEST EBX,EBX                        ; 004eb0ba
    JL 0x004ea5dc                       ; 004eb0bc
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    CMP EBX,dword ptr [EAX + 0x110]     ; 004eb0c2
    JNZ 0x004ea5dc                      ; 004eb0c8
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x0                            ; 004eb0ce
    PUSH EAX                            ; 004eb0d0
    MOV EBX,EAX                         ; 004eb0d1
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 004eb0d3
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90()
    ADD ESP,0x8                         ; 004eb0d8
    PUSH 0x58c030                       ; 004eb0db | = "You have been disconnected from the game"
    PUSH 0x58c059                       ; 004eb0e0 | CHAR_00h_0058c059
    PUSH 0x0                            ; 004eb0e5
    PUSH 0x0                            ; 004eb0e7
    PUSH 0x2dd10c4                      ; 004eb0e9
    LEA EAX,[ESP + 0xd0]                ; 004eb0ee
    PUSH EAX                            ; 004eb0f5
    CALL support_trisock.cpp_createNetworkAddr_FUN_00548d30 ; 004eb0f6
        ;   XREF to: 00548d30 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_createNetworkAddr_FUN_00548d30()
    ADD ESP,0xc                         ; 004eb0fb
    PUSH EAX                            ; 004eb0fe
    MOV ESI,EBX                         ; 004eb0ff
    PUSH ESI                            ; 004eb101
    CALL core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500 ; 004eb102
        ;   XREF to: 004ec500 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500()
    ADD ESP,0x14                        ; 004eb107
    MOV ESP,EBP                         ; 004eb10a
    POP EBP                             ; 004eb10c
    POP EDI                             ; 004eb10d
    POP ESI                             ; 004eb10e
    POP EBX                             ; 004eb10f
    RET                                 ; 004eb110
    PUSH 0x0                            ; 004eb111
        ;   Label: LAB_004eb111
    MOV EAX,dword ptr [EBP + 0x18]      ; 004eb113
    PUSH EAX                            ; 004eb116
    MOV EDX,dword ptr [EBP + 0x14]      ; 004eb117
    PUSH EDX                            ; 004eb11a
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0 ; 004eb11b
        ;   XREF to: 004edab0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0()
    ADD ESP,0xc                         ; 004eb120
    JMP 0x004eb08c                      ; 004eb123
        ;   XREF to: 004eb08c (UNCONDITIONAL_JUMP)  ; LAB_004eb08c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb128
        ;   Label: caseD_f
    MOV EDX,dword ptr [EAX]             ; 004eb12b
    MOV EDI,ESI                         ; 004eb12d
    CMP EDX,0x2                         ; 004eb12f
    JNZ 0x004eaf88                      ; 004eb132
        ;   XREF to: 004eaf88 (CONDITIONAL_JUMP)  ; LAB_004eaf88
    TEST EBX,EBX                        ; 004eb138
    JL 0x004eaf88                       ; 004eb13a
        ;   XREF to: 004eaf88 (CONDITIONAL_JUMP)  ; LAB_004eaf88
    MOV ECX,dword ptr [EAX + 0x110]     ; 004eb140
    CMP EBX,ECX                         ; 004eb146
    JNZ 0x004eaf88                      ; 004eb148
        ;   XREF to: 004eaf88 (CONDITIONAL_JUMP)  ; LAB_004eaf88
    MOV EAX,dword ptr [ESI + 0x5]       ; 004eb14e
    MOV ESI,EAX                         ; 004eb151
    MOV dword ptr [ESP + 0xc4],EAX      ; 004eb153
    MOV EAX,[0x01d09c00]                ; 004eb15a | DAT_01d09c00
    XOR EBX,ECX                         ; 004eb15f
    TEST EAX,EAX                        ; 004eb161
    JLE 0x004eb249                      ; 004eb163
        ;   XREF to: 004eb249 (CONDITIONAL_JUMP)  ; LAB_004eb249
    MOV EDX,dword ptr [0x01d09c00]      ; 004eb169 | DAT_01d09c00
    MOV dword ptr [ESP + 0xdc],EDX      ; 004eb16f
    MOV ECX,dword ptr [ESP + 0xdc]      ; 004eb176
    SHL EDX,0x2                         ; 004eb17d
    SUB EDX,ECX                         ; 004eb180
    SHL EDX,0x3                         ; 004eb182
    ADD EDX,ECX                         ; 004eb185
    XOR EAX,EAX                         ; 004eb187
    SHL EDX,0x2                         ; 004eb189
    CMP ESI,dword ptr [EAX + 0x1d09c04] ; 004eb18c
        ;   Label: LAB_004eb18c
    JNZ 0x004eb23d                      ; 004eb192
        ;   XREF to: 004eb23d (CONDITIONAL_JUMP)  ; LAB_004eb23d
    TEST EBX,EBX                        ; 004eb198
    JL 0x004eb249                       ; 004eb19a
        ;   XREF to: 004eb249 (CONDITIONAL_JUMP)  ; LAB_004eb249
    ADD EAX,0x1d09c04                   ; 004eb1a0
    MOV EDX,dword ptr [EDI + 0x9]       ; 004eb1a5
        ;   Label: LAB_004eb1a5
    MOV dword ptr [EAX + 0x4],EDX       ; 004eb1a8
    MOV dword ptr [ESP + 0xcc],EAX      ; 004eb1ab
    MOV EDX,dword ptr [EDI + 0xd]       ; 004eb1b2
    MOV dword ptr [EAX + 0x8],EDX       ; 004eb1b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb1b8
    MOV ECX,dword ptr [EAX + 0x1c]      ; 004eb1bb
    XOR EBX,EBX                         ; 004eb1be
    TEST ECX,ECX                        ; 004eb1c0
    JLE 0x004ea5dc                      ; 004eb1c2
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV dword ptr [ESP + 0xd8],EDI      ; 004eb1c8
    MOV ESI,EBX                         ; 004eb1cf
        ;   Label: LAB_004eb1cf
    TEST EBX,EBX                        ; 004eb1d1
    JL 0x004eb2b9                       ; 004eb1d3
        ;   XREF to: 004eb2b9 (CONDITIONAL_JUMP)  ; LAB_004eb2b9
    CMP ESI,EBX                         ; 004eb1d9
        ;   Label: LAB_004eb1d9
    JZ 0x004eb1ff                       ; 004eb1db
        ;   XREF to: 004eb1ff (CONDITIONAL_JUMP)  ; LAB_004eb1ff
    MOV EAX,0x58c0a6                    ; 004eb1dd | = "..\\core\\netgame.cpp"
    MOV EDX,0x597                       ; 004eb1e2
    PUSH 0x58c0ba                       ; 004eb1e7 | = "Player list mismatch!"
    MOV [0x01cc4800],EAX                ; 004eb1ec | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004eb1f1 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004eb1f7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004eb1fc
    IMUL ESI,ESI,0x2c                   ; 004eb1ff
        ;   Label: LAB_004eb1ff
    ADD ESI,dword ptr [ESP + 0xcc]      ; 004eb202
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004eb209
    LEA EDI,[ESI + 0xc]                 ; 004eb210
    MOV ESI,dword ptr [ESP + 0xd8]      ; 004eb213
    MOV ECX,0xb                         ; 004eb21a
    ADD EAX,0x2c                        ; 004eb21f
    LEA ESI,[ESI + 0x11]                ; 004eb222
    MOV dword ptr [ESP + 0xd8],EAX      ; 004eb225
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb22c
    MOVSD.REP ES:EDI,ESI                ; 004eb22f
    INC EBX                             ; 004eb231
    CMP EBX,dword ptr [EAX + 0x1c]      ; 004eb232
    JGE 0x004ea5dc                      ; 004eb235
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    JMP 0x004eb1cf                      ; 004eb23b
        ;   XREF to: 004eb1cf (UNCONDITIONAL_JUMP)  ; LAB_004eb1cf
    ADD EAX,0x64                        ; 004eb23d
        ;   Label: LAB_004eb23d
    INC EBX                             ; 004eb240
    CMP EAX,EDX                         ; 004eb241
    JL 0x004eb18c                       ; 004eb243
        ;   XREF to: 004eb18c (CONDITIONAL_JUMP)  ; LAB_004eb18c
    CMP dword ptr [0x01d09c00],0x200    ; 004eb249 | DAT_01d09c00
        ;   Label: LAB_004eb249
    JL 0x004eb277                       ; 004eb253
        ;   XREF to: 004eb277 (CONDITIONAL_JUMP)  ; LAB_004eb277
    MOV ESI,0x58ba54                    ; 004eb255 | = "..\\core\\netgame.cpp"
    MOV EAX,0x12b                       ; 004eb25a
    PUSH 0x58ba68                       ; 004eb25f | = "allocSimFrame - sim history list full"
    MOV dword ptr [0x01cc4800],ESI      ; 004eb264 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004eb26a | DAT_01cc4804
    CALL FUN_004c8440                   ; 004eb26f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004eb274
    MOV EDX,dword ptr [0x01d09c00]      ; 004eb277 | DAT_01d09c00
        ;   Label: LAB_004eb277
    LEA EAX,[EDX*0x4 + 0x0]             ; 004eb27d
    SUB EAX,EDX                         ; 004eb284
    SHL EAX,0x3                         ; 004eb286
    MOV EBX,0x1d09c04                   ; 004eb289
    ADD EAX,EDX                         ; 004eb28e
    PUSH 0x64                           ; 004eb290
    SHL EAX,0x2                         ; 004eb292
    PUSH 0x0                            ; 004eb295
    ADD EBX,EAX                         ; 004eb297
    INC EDX                             ; 004eb299
    PUSH EBX                            ; 004eb29a
    MOV dword ptr [0x01d09c00],EDX      ; 004eb29b | DAT_01d09c00
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004eb2a1
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 004eb2a6
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004eb2a9
    MOV dword ptr [EBX],EAX             ; 004eb2b0
    MOV EAX,EBX                         ; 004eb2b2
    JMP 0x004eb1a5                      ; 004eb2b4
        ;   XREF to: 004eb1a5 (UNCONDITIONAL_JUMP)  ; LAB_004eb1a5
    MOV ECX,0x58c05a                    ; 004eb2b9 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004eb2b9
    MOV EDI,0x596                       ; 004eb2be
    PUSH 0x58c06e                       ; 004eb2c3 | = "Player list mismatch processing SimFr..."
    MOV dword ptr [0x01cc4800],ECX      ; 004eb2c8 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004eb2ce | DAT_01cc4804
    CALL FUN_004c8440                   ; 004eb2d4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004eb2d9
    JMP 0x004eb1d9                      ; 004eb2dc
        ;   XREF to: 004eb1d9 (UNCONDITIONAL_JUMP)  ; LAB_004eb1d9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb2e1
        ;   Label: caseD_10
    CMP dword ptr [EAX],0x1             ; 004eb2e4
    JNZ 0x004eb32a                      ; 004eb2e7
        ;   XREF to: 004eb32a (CONDITIONAL_JUMP)  ; LAB_004eb32a
    TEST EBX,EBX                        ; 004eb2e9
    JL 0x004eb32a                       ; 004eb2eb
        ;   XREF to: 004eb32a (CONDITIONAL_JUMP)  ; LAB_004eb32a
    CMP dword ptr [EAX + 0x4],0x3       ; 004eb2ed
    JNZ 0x004ea5dc                      ; 004eb2f1
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004eb2f7
    MOV EBX,dword ptr [ESI + 0x5]       ; 004eb2fe
    CMP EBX,dword ptr [EAX + 0x48]      ; 004eb301
    JLE 0x004ea5dc                      ; 004eb304
        ;   XREF to: 004ea5dc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [ESP + 0xd4]      ; 004eb30a
    MOV EDI,EDX                         ; 004eb311
    MOV dword ptr [EDX + 0x48],EBX      ; 004eb313
    MOV ECX,0xb                         ; 004eb316
    LEA EDI,[EDI + 0x4c]                ; 004eb31b
    LEA ESI,[ESI + 0x9]                 ; 004eb31e
    MOVSD.REP ES:EDI,ESI                ; 004eb321
    MOV ESP,EBP                         ; 004eb323
    POP EBP                             ; 004eb325
    POP EDI                             ; 004eb326
    POP ESI                             ; 004eb327
    POP EBX                             ; 004eb328
    RET                                 ; 004eb329
    PUSH 0x0                            ; 004eb32a
        ;   Label: LAB_004eb32a
    MOV ESI,dword ptr [EBP + 0x18]      ; 004eb32c
    PUSH ESI                            ; 004eb32f
    MOV EDI,dword ptr [EBP + 0x14]      ; 004eb330
    PUSH EDI                            ; 004eb333
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0 ; 004eb334
        ;   XREF to: 004edab0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0()
    ADD ESP,0xc                         ; 004eb339
    MOV ESP,EBP                         ; 004eb33c
    POP EBP                             ; 004eb33e
    POP EDI                             ; 004eb33f
    POP ESI                             ; 004eb340
    POP EBX                             ; 004eb341
    RET                                 ; 004eb342

