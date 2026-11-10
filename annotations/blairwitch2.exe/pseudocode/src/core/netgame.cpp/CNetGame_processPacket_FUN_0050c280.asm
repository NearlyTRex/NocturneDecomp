; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_0050c280(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   source_addr
; UNetPacket *     Stack[0xc]:4   packet
; Local Variables:
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined1       Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xe7]:1  local_e7
; undefined1       Stack[-0xe6]:1  local_e6
; undefined        Stack[-0xd3]:1  local_d3
; undefined1       Stack[-0xd2]:1  local_d2
; undefined        Stack[-0x83]:1  local_83
; undefined4       Stack[-0x78]:4  local_78
; undefined1       Stack[-0x74]:1  local_74
; undefined4       Stack[-0x73]:4  local_73
; undefined4       Stack[-0x6c]:4  local_6c
; undefined1       Stack[-0x68]:1  local_68
; undefined4       Stack[-0x67]:4  local_67
; undefined4       Stack[-0x60]:4  local_60
; undefined1       Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x5b]:4  local_5b
; undefined4       Stack[-0x54]:4  local_54
; undefined1       Stack[-0x50]:1  local_50
; undefined4       Stack[-0x4f]:4  local_4f
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x44]:1  local_44
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190 at 0050c21a
;
; Referenced Globals:
;   undefined4 caseD_0
;   void* switchdataD_0050c234 = 0050c026
;   TerminatedCString s_core_netgame_cpp_005e03cf
;   TerminatedCString s_allocSimFrame_sim_histor_005e03e3
;   TerminatedCString s_You_have_been_disconnect_005e09ab
;   undefined4 DAT_005e09d4
;   TerminatedCString s_core_netgame_cpp_005e09d5
;   TerminatedCString s_Player_list_mismatch_pro_005e09e9
;   TerminatedCString s_core_netgame_cpp_005e0a21
;   TerminatedCString s_Player_list_mismatch_005e0a35
;   undefined4 DAT_005e0a4d
;   undefined4 DAT_005e0a55
;   undefined4 DAT_005e0a5d
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   ... and 13 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_netgame.cpp_CNetGame_addChatHistory_FUN_0050df20
;   core_netgame.cpp_CNetGame_addPlayer_FUN_0050ce70
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0050e020
;   core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0
;   core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_0050ce20
;   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890
;   core_netgame.cpp_CNetGame_removePlayer_FUN_0050e6c0
;   core_netgame.cpp_CNetGame_send_FUN_0050cd90
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0
;   core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0
;   crt_memory.c_memset_FUN_005b77c0
;   crt_string.c__strcmp_FUN_005b8c30
;   support_trisock.cpp_createNetworkAddr_FUN_00578e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c280
        ;   Label: core_netgame.cpp_CNetGame_processPacket_FUN_0050c280
    PUSH ESI                            ; 0050c281
    PUSH EDI                            ; 0050c282
    PUSH EBP                            ; 0050c283
    MOV EBP,ESP                         ; 0050c284
    SUB ESP,0xe4                        ; 0050c286
    AND ESP,0xfffffff8                  ; 0050c28c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0050c28f
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050c292
    PUSH EDX                            ; 0050c295
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050c296
    PUSH ECX                            ; 0050c299
    XOR EDI,EDI                         ; 0050c29a
    CALL core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_0050ce20 ; 0050c29c
        ;   XREF to: 0050ce20 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_0050ce20(CNetGame * this_ptr, SNetworkAddr * addr)
    ADD ESP,0x8                         ; 0050c2a1
    MOV EBX,EAX                         ; 0050c2a4
    MOV dword ptr [ESP + 0xd8],EDI      ; 0050c2a6
    TEST EAX,EAX                        ; 0050c2ad
    JL 0x0050c2cb                       ; 0050c2af
        ;   XREF to: 0050c2cb (CONDITIONAL_JUMP)  ; LAB_0050c2cb
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050c2b1
    SHL EAX,0x7                         ; 0050c2b4
    ADD EDX,0x20                        ; 0050c2b7
    ADD EDX,EAX                         ; 0050c2ba
    MOV EAX,[0x01d34e38]                ; 0050c2bc | DAT_01d34e38
    MOV dword ptr [ESP + 0xd8],EDX      ; 0050c2c1
    MOV dword ptr [EDX + 0x24],EAX      ; 0050c2c8
    MOV AL,byte ptr [ESI + 0x4]         ; 0050c2cb
        ;   Label: LAB_0050c2cb
    CMP AL,0x10                         ; 0050c2ce
    JA 0x0050c026                       ; 0050c2d0
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    AND EAX,0xff                        ; 0050c2d6
    JMP dword ptr [EAX*0x4 + 0x50c234]  ; 0050c2db | caseD_e | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c2e2
        ;   Label: caseD_1
    MOV ECX,dword ptr [EAX + 0x4]       ; 0050c2e5
    MOV dword ptr [ESP + 0xcc],ESI      ; 0050c2e8
    CMP ECX,0x1                         ; 0050c2ef
    JNZ 0x0050c410                      ; 0050c2f2
        ;   XREF to: 0050c410 (CONDITIONAL_JUMP)  ; LAB_0050c410
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050c2f8
        ;   Label: LAB_0050c2f8
    ADD EAX,0xd                         ; 0050c2ff
    TEST EBX,EBX                        ; 0050c302
    JL 0x0050c442                       ; 0050c304
        ;   XREF to: 0050c442 (CONDITIONAL_JUMP)  ; LAB_0050c442
    PUSH EAX                            ; 0050c30a
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0050c30b
    PUSH EAX                            ; 0050c312
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0050c313
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050c318
    TEST EAX,EAX                        ; 0050c31b
    JZ 0x0050c469                       ; 0050c31d
        ;   XREF to: 0050c469 (CONDITIONAL_JUMP)  ; LAB_0050c469
    MOV ESI,dword ptr [ESP + 0xcc]      ; 0050c323
        ;   Label: LAB_0050c323
    MOV EDI,dword ptr [ESP + 0xd8]      ; 0050c32a
    ADD ESI,0xd                         ; 0050c331
    PUSH EDI                            ; 0050c334
    MOV AL,byte ptr [ESI]               ; 0050c335
        ;   Label: LAB_0050c335
    MOV byte ptr [EDI],AL               ; 0050c337
    CMP AL,0x0                          ; 0050c339
    JZ 0x0050c34d                       ; 0050c33b
        ;   XREF to: 0050c34d (CONDITIONAL_JUMP)  ; LAB_0050c34d
    MOV AL,byte ptr [ESI + 0x1]         ; 0050c33d
    ADD ESI,0x2                         ; 0050c340
    MOV byte ptr [EDI + 0x1],AL         ; 0050c343
    ADD EDI,0x2                         ; 0050c346
    CMP AL,0x0                          ; 0050c349
    JNZ 0x0050c335                      ; 0050c34b
        ;   XREF to: 0050c335 (CONDITIONAL_JUMP)  ; LAB_0050c335
    POP EDI                             ; 0050c34d
        ;   Label: LAB_0050c34d
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050c34e
    MOV EAX,dword ptr [EAX + 0x21]      ; 0050c355
    MOV dword ptr [EDI + 0x14],EAX      ; 0050c358
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050c35b
    MOV EAX,dword ptr [EAX + 0x25]      ; 0050c362
    MOV dword ptr [EDI + 0x18],EAX      ; 0050c365
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050c368
    PUSH EDI                            ; 0050c36b
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890 ; 0050c36c
        ;   XREF to: 0050e890 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050c371
    MOV EAX,0x71                        ; 0050c374
        ;   Label: LAB_0050c374
    MOV DH,0x2                          ; 0050c379
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050c37b
    LEA EDI,[ESP + 0x25]                ; 0050c37e
    MOV dword ptr [ESP + 0xc],EAX       ; 0050c382
    ADD ESI,0x128                       ; 0050c386
    MOV byte ptr [ESP + 0x10],DH        ; 0050c38c
    PUSH EDI                            ; 0050c390
    MOV AL,byte ptr [ESI]               ; 0050c391
        ;   Label: LAB_0050c391
    MOV byte ptr [EDI],AL               ; 0050c393
    CMP AL,0x0                          ; 0050c395
    JZ 0x0050c3a9                       ; 0050c397
        ;   XREF to: 0050c3a9 (CONDITIONAL_JUMP)  ; LAB_0050c3a9
    MOV AL,byte ptr [ESI + 0x1]         ; 0050c399
    ADD ESI,0x2                         ; 0050c39c
    MOV byte ptr [EDI + 0x1],AL         ; 0050c39f
    ADD EDI,0x2                         ; 0050c3a2
    CMP AL,0x0                          ; 0050c3a5
    JNZ 0x0050c391                      ; 0050c3a7
        ;   XREF to: 0050c391 (CONDITIONAL_JUMP)  ; LAB_0050c391
    POP EDI                             ; 0050c3a9
        ;   Label: LAB_0050c3a9
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050c3aa
    LEA EDI,[ESP + 0x11]                ; 0050c3ad
    ADD ESI,0x8                         ; 0050c3b1
    PUSH EDI                            ; 0050c3b4
    MOV AL,byte ptr [ESI]               ; 0050c3b5
        ;   Label: LAB_0050c3b5
    MOV byte ptr [EDI],AL               ; 0050c3b7
    CMP AL,0x0                          ; 0050c3b9
    JZ 0x0050c3cd                       ; 0050c3bb
        ;   XREF to: 0050c3cd (CONDITIONAL_JUMP)  ; LAB_0050c3cd
    MOV AL,byte ptr [ESI + 0x1]         ; 0050c3bd
    ADD ESI,0x2                         ; 0050c3c0
    MOV byte ptr [EDI + 0x1],AL         ; 0050c3c3
    ADD EDI,0x2                         ; 0050c3c6
    CMP AL,0x0                          ; 0050c3c9
    JNZ 0x0050c3b5                      ; 0050c3cb
        ;   XREF to: 0050c3b5 (CONDITIONAL_JUMP)  ; LAB_0050c3b5
    POP EDI                             ; 0050c3cd
        ;   Label: LAB_0050c3cd
    LEA EAX,[ESP + 0xc]                 ; 0050c3ce
    PUSH EAX                            ; 0050c3d2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050c3d3
    PUSH EBX                            ; 0050c3d6
    LEA EDI,[ESP + 0x7d]                ; 0050c3d7
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050c3db
    PUSH EDX                            ; 0050c3de
    MOVSD ES:EDI,ESI                    ; 0050c3df
    MOVSD ES:EDI,ESI                    ; 0050c3e0
    CALL core_netgame.cpp_CNetGame_send_FUN_0050cd90 ; 0050c3e1
        ;   XREF to: 0050cd90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0050cd90(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0050c3e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c3e9
    MOV EAX,dword ptr [EAX + 0x124]     ; 0050c3ec
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050c3f2
    SHL EAX,0x7                         ; 0050c3f5
    MOV ESI,dword ptr [ESP + 0xcc]      ; 0050c3f8
    ADD EAX,ECX                         ; 0050c3ff
    LEA ESI,[ESI + 0x5]                 ; 0050c401
    LEA EDI,[EAX + 0x3c]                ; 0050c404
    MOVSD ES:EDI,ESI                    ; 0050c407
    MOVSD ES:EDI,ESI                    ; 0050c408
    MOV ESP,EBP                         ; 0050c409
    POP EBP                             ; 0050c40b
    POP EDI                             ; 0050c40c
    POP ESI                             ; 0050c40d
    POP EBX                             ; 0050c40e
    RET                                 ; 0050c40f
    MOV EAX,0x9                         ; 0050c410
        ;   Label: LAB_0050c410
    MOV dword ptr [ESP + 0xb0],EAX      ; 0050c415
    LEA EAX,[ESP + 0xb0]                ; 0050c41c
    PUSH EAX                            ; 0050c423
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050c424
    PUSH ESI                            ; 0050c427
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050c428
    MOV DL,0x3                          ; 0050c42b
    PUSH EDI                            ; 0050c42d
    MOV byte ptr [ESP + 0xc0],DL        ; 0050c42e
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0 ; 0050c435
        ;   XREF to: 0050cdf0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0050c43a
    JMP 0x0050c2f8                      ; 0050c43d
        ;   XREF to: 0050c2f8 (UNCONDITIONAL_JUMP)  ; LAB_0050c2f8
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0050c442
        ;   Label: LAB_0050c442
    MOV ECX,dword ptr [EDX + 0x25]      ; 0050c449
    PUSH ECX                            ; 0050c44c
    MOV EBX,dword ptr [EDX + 0x21]      ; 0050c44d
    PUSH EBX                            ; 0050c450
    PUSH EAX                            ; 0050c451
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050c452
    PUSH ESI                            ; 0050c455
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050c456
    PUSH EDI                            ; 0050c459
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_0050ce70 ; 0050c45a
        ;   XREF to: 0050ce70 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_0050ce70(CNetGame * this_ptr, SNetworkAddr * addr, char * name, int hero_number, ...)
    ADD ESP,0x14                        ; 0050c45f
    MOV EBX,EAX                         ; 0050c462
    JMP 0x0050c374                      ; 0050c464
        ;   XREF to: 0050c374 (UNCONDITIONAL_JUMP)  ; LAB_0050c374
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0050c469
        ;   Label: LAB_0050c469
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0050c470
    MOV ECX,dword ptr [EDX + 0x21]      ; 0050c477
    CMP ECX,dword ptr [EAX + 0x14]      ; 0050c47a
    JNZ 0x0050c323                      ; 0050c47d
        ;   XREF to: 0050c323 (CONDITIONAL_JUMP)  ; LAB_0050c323
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0050c483
    MOV ESI,dword ptr [EDX + 0x25]      ; 0050c48a
    CMP ESI,dword ptr [EAX + 0x18]      ; 0050c48d
    JNZ 0x0050c323                      ; 0050c490
        ;   XREF to: 0050c323 (CONDITIONAL_JUMP)  ; LAB_0050c323
    JMP 0x0050c374                      ; 0050c496
        ;   XREF to: 0050c374 (UNCONDITIONAL_JUMP)  ; LAB_0050c374
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c49b
        ;   Label: caseD_3
    CMP dword ptr [EAX],0x2             ; 0050c49e
    JNZ 0x0050c026                      ; 0050c4a1
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    TEST EBX,EBX                        ; 0050c4a7
    JL 0x0050c026                       ; 0050c4a9
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    CMP dword ptr [EAX + 0x4],0x1       ; 0050c4af
    JNZ 0x0050c026                      ; 0050c4b3
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    CMP EBX,dword ptr [EAX + 0x120]     ; 0050c4b9
    JNZ 0x0050c026                      ; 0050c4bf
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESI + 0x5]       ; 0050c4c5
    MOV [0x01d34e3c],EAX                ; 0050c4c8 | DAT_01d34e3c
    MOV ESP,EBP                         ; 0050c4cd
    POP EBP                             ; 0050c4cf
    POP EDI                             ; 0050c4d0
    POP ESI                             ; 0050c4d1
    POP EBX                             ; 0050c4d2
    RET                                 ; 0050c4d3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c4d4
        ;   Label: caseD_2
    MOV EDX,ESI                         ; 0050c4d7
    CMP dword ptr [EAX],0x2             ; 0050c4d9
    JNZ 0x0050c54a                      ; 0050c4dc
        ;   XREF to: 0050c54a (CONDITIONAL_JUMP)  ; LAB_0050c54a
    TEST EBX,EBX                        ; 0050c4de
    JL 0x0050c54a                       ; 0050c4e0
        ;   XREF to: 0050c54a (CONDITIONAL_JUMP)  ; LAB_0050c54a
    CMP EBX,dword ptr [EAX + 0x120]     ; 0050c4e2
    JNZ 0x0050c54a                      ; 0050c4e8
        ;   XREF to: 0050c54a (CONDITIONAL_JUMP)  ; LAB_0050c54a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0050c4ea
    CMP ECX,0x1                         ; 0050c4ed
    JNZ 0x0050c026                      ; 0050c4f0
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,dword ptr [ESP + 0xd8]      ; 0050c4f6
    LEA ESI,[EDX + 0x5]                 ; 0050c4fd
    MOV dword ptr [0x01d34e3c],ECX      ; 0050c500 | DAT_01d34e3c
    PUSH EDI                            ; 0050c506
    MOV AL,byte ptr [ESI]               ; 0050c507
        ;   Label: LAB_0050c507
    MOV byte ptr [EDI],AL               ; 0050c509
    CMP AL,0x0                          ; 0050c50b
    JZ 0x0050c51f                       ; 0050c50d
        ;   XREF to: 0050c51f (CONDITIONAL_JUMP)  ; LAB_0050c51f
    MOV AL,byte ptr [ESI + 0x1]         ; 0050c50f
    ADD ESI,0x2                         ; 0050c512
    MOV byte ptr [EDI + 0x1],AL         ; 0050c515
    ADD EDI,0x2                         ; 0050c518
    CMP AL,0x0                          ; 0050c51b
    JNZ 0x0050c507                      ; 0050c51d
        ;   XREF to: 0050c507 (CONDITIONAL_JUMP)  ; LAB_0050c507
    POP EDI                             ; 0050c51f
        ;   Label: LAB_0050c51f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c520
    MOV EAX,dword ptr [EAX + 0x124]     ; 0050c523
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050c529
    SHL EAX,0x7                         ; 0050c52c
    ADD EAX,ESI                         ; 0050c52f
    LEA EDI,[EAX + 0x3c]                ; 0050c531
    LEA ESI,[EDX + 0x69]                ; 0050c534
    MOVSD ES:EDI,ESI                    ; 0050c537
    MOVSD ES:EDI,ESI                    ; 0050c538
    MOV dword ptr [0x01d34e44],0xffffffff ; 0050c539 | DAT_01d34e44
    MOV ESP,EBP                         ; 0050c543
    POP EBP                             ; 0050c545
    POP EDI                             ; 0050c546
    POP ESI                             ; 0050c547
    POP EBX                             ; 0050c548
    RET                                 ; 0050c549
    PUSH 0x0                            ; 0050c54a
        ;   Label: LAB_0050c54a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050c54c
    PUSH EAX                            ; 0050c54f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050c550
    PUSH EDX                            ; 0050c553
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0 ; 0050c554
        ;   XREF to: 0050f4b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0050c559
    MOV ESP,EBP                         ; 0050c55c
    POP EBP                             ; 0050c55e
    POP EDI                             ; 0050c55f
    POP ESI                             ; 0050c560
    POP EBX                             ; 0050c561
    RET                                 ; 0050c562
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c563
        ;   Label: caseD_4
    MOV EDI,dword ptr [EAX]             ; 0050c566
    TEST EDI,EDI                        ; 0050c568
    JNZ 0x0050c581                      ; 0050c56a
        ;   XREF to: 0050c581 (CONDITIONAL_JUMP)  ; LAB_0050c581
    PUSH EDI                            ; 0050c56c
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050c56d
    PUSH ECX                            ; 0050c570
    PUSH EAX                            ; 0050c571
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0 ; 0050c572
        ;   XREF to: 0050f4b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0050c577
    MOV ESP,EBP                         ; 0050c57a
    POP EBP                             ; 0050c57c
    POP EDI                             ; 0050c57d
    POP ESI                             ; 0050c57e
    POP EBX                             ; 0050c57f
    RET                                 ; 0050c580
    MOV EAX,0x9                         ; 0050c581
        ;   Label: LAB_0050c581
    MOV DL,0x5                          ; 0050c586
    MOV dword ptr [ESP + 0x98],EAX      ; 0050c588
    MOV byte ptr [ESP + 0x9c],DL        ; 0050c58f
    MOV EAX,dword ptr [ESI + 0x5]       ; 0050c596
    MOV dword ptr [ESP + 0x9d],EAX      ; 0050c599
    LEA EAX,[ESP + 0x98]                ; 0050c5a0
    PUSH EAX                            ; 0050c5a7
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050c5a8
    PUSH EAX                            ; 0050c5ab
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050c5ac
    PUSH EDX                            ; 0050c5af
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0 ; 0050c5b0
        ;   XREF to: 0050cdf0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0050c5b5
    MOV ESP,EBP                         ; 0050c5b8
    POP EBP                             ; 0050c5ba
    POP EDI                             ; 0050c5bb
    POP ESI                             ; 0050c5bc
    POP EBX                             ; 0050c5bd
    RET                                 ; 0050c5be
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c5bf
        ;   Label: caseD_5
    CMP dword ptr [EAX],0x0             ; 0050c5c2
    JZ 0x0050c6a9                       ; 0050c5c5
        ;   XREF to: 0050c6a9 (CONDITIONAL_JUMP)  ; LAB_0050c6a9
    TEST EBX,EBX                        ; 0050c5cb
    JL 0x0050c6a9                       ; 0050c5cd
        ;   XREF to: 0050c6a9 (CONDITIONAL_JUMP)  ; LAB_0050c6a9
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0050c5d3
    FLD float ptr [EAX + 0x28]          ; 0050c5da
    FLDZ                                ; 0050c5dd
    FCOMPP                              ; 0050c5df
    FNSTSW AX                           ; 0050c5e1
    SAHF                                ; 0050c5e3
    JA 0x0050c643                       ; 0050c5e4
        ;   XREF to: 0050c643 (CONDITIONAL_JUMP)  ; LAB_0050c643
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0050c5e6
    MOV EDX,dword ptr [ESI + 0x5]       ; 0050c5ed
    MOV EAX,dword ptr [EAX + 0x30]      ; 0050c5f0
    SUB EDX,EAX                         ; 0050c5f3
    MOV dword ptr [ESP + 0xe0],EDX      ; 0050c5f5
    FILD dword ptr [ESP + 0xe0]         ; 0050c5fc
    FMUL double ptr [0x005e0a4d]        ; 0050c603 | DAT_005e0a4d
    FST float ptr [ESP]                 ; 0050c609
    FCOMP double ptr [0x005e0a55]       ; 0050c60c | DAT_005e0a55
    FNSTSW AX                           ; 0050c612
    SAHF                                ; 0050c614
    JNC 0x0050c61e                      ; 0050c615
        ;   XREF to: 0050c61e (CONDITIONAL_JUMP)  ; LAB_0050c61e
    MOV dword ptr [ESP],0xc1f00000      ; 0050c617
    FLD float ptr [ESP]                 ; 0050c61e
        ;   Label: LAB_0050c61e
    FCOMP double ptr [0x005e0a5d]       ; 0050c621 | DAT_005e0a5d
    FNSTSW AX                           ; 0050c627
    SAHF                                ; 0050c629
    JBE 0x0050c633                      ; 0050c62a
        ;   XREF to: 0050c633 (CONDITIONAL_JUMP)  ; LAB_0050c633
    MOV dword ptr [ESP],0x41f00000      ; 0050c62c
    FLD float ptr [ESP]                 ; 0050c633
        ;   Label: LAB_0050c633
    FLDZ                                ; 0050c636
    FCOMPP                              ; 0050c638
    FNSTSW AX                           ; 0050c63a
    SAHF                                ; 0050c63c
    JNC 0x0050c026                      ; 0050c63d
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [0x01d34e38]      ; 0050c643 | DAT_01d34e38
        ;   Label: LAB_0050c643
    MOV EAX,dword ptr [ESI + 0x5]       ; 0050c649
    SUB EDX,EAX                         ; 0050c64c
    MOV dword ptr [ESP + 0xe0],EDX      ; 0050c64e
    FILD dword ptr [ESP + 0xe0]         ; 0050c655
    FMUL double ptr [0x005e0a4d]        ; 0050c65c | DAT_005e0a4d
    FST float ptr [ESP + 0x4]           ; 0050c662
    FLDZ                                ; 0050c666
    FCOMPP                              ; 0050c668
    FNSTSW AX                           ; 0050c66a
    SAHF                                ; 0050c66c
    JBE 0x0050c675                      ; 0050c66d
        ;   XREF to: 0050c675 (CONDITIONAL_JUMP)  ; LAB_0050c675
    XOR EAX,EAX                         ; 0050c66f
    MOV dword ptr [ESP + 0x4],EAX       ; 0050c671
    FLD float ptr [ESP + 0x4]           ; 0050c675
        ;   Label: LAB_0050c675
    FCOMP double ptr [0x005e0a5d]       ; 0050c679 | DAT_005e0a5d
    FNSTSW AX                           ; 0050c67f
    SAHF                                ; 0050c681
    JBE 0x0050c68c                      ; 0050c682
        ;   XREF to: 0050c68c (CONDITIONAL_JUMP)  ; LAB_0050c68c
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 0050c684
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0050c68c
        ;   Label: LAB_0050c68c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050c693
    MOV dword ptr [EDX + 0x28],EAX      ; 0050c697
    MOV EAX,[0x01d34e38]                ; 0050c69a | DAT_01d34e38
    MOV dword ptr [EDX + 0x30],EAX      ; 0050c69f
    MOV ESP,EBP                         ; 0050c6a2
    POP EBP                             ; 0050c6a4
    POP EDI                             ; 0050c6a5
    POP ESI                             ; 0050c6a6
    POP EBX                             ; 0050c6a7
    RET                                 ; 0050c6a8
    PUSH 0x0                            ; 0050c6a9
        ;   Label: LAB_0050c6a9
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050c6ab
    PUSH ECX                            ; 0050c6ae
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050c6af
    PUSH EBX                            ; 0050c6b2
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0 ; 0050c6b3
        ;   XREF to: 0050f4b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0050c6b8
    MOV ESP,EBP                         ; 0050c6bb
    POP EBP                             ; 0050c6bd
    POP EDI                             ; 0050c6be
    POP ESI                             ; 0050c6bf
    POP EBX                             ; 0050c6c0
    RET                                 ; 0050c6c1
    MOV EDI,ESI                         ; 0050c6c2
        ;   Label: caseD_6
    TEST EBX,EBX                        ; 0050c6c4
    JL 0x0050c026                       ; 0050c6c6
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [0x01d34e4c]      ; 0050c6cc | DAT_01d34e4c
    XOR EAX,EAX                         ; 0050c6d2
    CMP EAX,EDX                         ; 0050c6d4
    JGE 0x0050c710                      ; 0050c6d6
        ;   XREF to: 0050c710 (CONDITIONAL_JUMP)  ; LAB_0050c710
    LEA EBX,[EAX*0x8 + 0x0]             ; 0050c6d8
    SHL EBX,0x5                         ; 0050c6df
    ADD EBX,0x1d34e50                   ; 0050c6e2
    IMUL EDX,EAX,0x120                  ; 0050c6e8
        ;   Label: LAB_0050c6e8
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050c6ee
    MOV SI,word ptr [EBX + 0x4]         ; 0050c6f1
    CMP SI,word ptr [ECX + 0x4]         ; 0050c6f5
    JNZ 0x0050c776                      ; 0050c6f9
        ;   XREF to: 0050c776 (CONDITIONAL_JUMP)  ; LAB_0050c776
    MOV ESI,dword ptr [ECX]             ; 0050c6ff
    CMP ESI,dword ptr [EBX]             ; 0050c701
    JNZ 0x0050c776                      ; 0050c703
        ;   XREF to: 0050c776 (CONDITIONAL_JUMP)  ; LAB_0050c776
    MOV ESI,dword ptr [EDI + 0x5]       ; 0050c705
    CMP ESI,dword ptr [EDX + 0x1d34e58] ; 0050c708 | DAT_01d34f78
    JNZ 0x0050c776                      ; 0050c70e
        ;   XREF to: 0050c776 (CONDITIONAL_JUMP)  ; LAB_0050c776
    CMP EAX,dword ptr [0x01d34e4c]      ; 0050c710 | DAT_01d34e4c
        ;   Label: LAB_0050c710
    JNZ 0x0050c738                      ; 0050c716
        ;   XREF to: 0050c738 (CONDITIONAL_JUMP)  ; LAB_0050c738
    LEA EAX,[EDI + 0x9]                 ; 0050c718
    PUSH EAX                            ; 0050c71b
    MOV ECX,dword ptr [ESP + 0xdc]      ; 0050c71c
    PUSH ECX                            ; 0050c723
    MOV EBX,dword ptr [EDI + 0x5]       ; 0050c724
    PUSH EBX                            ; 0050c727
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050c728
    PUSH ESI                            ; 0050c72b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c72c
    PUSH EAX                            ; 0050c72f
    CALL core_netgame.cpp_CNetGame_addChatHistory_FUN_0050df20 ; 0050c730
        ;   XREF to: 0050df20 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_addChatHistory_FUN_0050df20(CNetGame * this_ptr, SNetworkAddr * sender_addr, int message_id, char * sender_name, ...)
    ADD ESP,0x14                        ; 0050c735
    MOV EDX,0x9                         ; 0050c738
        ;   Label: LAB_0050c738
    MOV CH,0x7                          ; 0050c73d
    MOV dword ptr [ESP + 0x80],EDX      ; 0050c73f
    MOV byte ptr [ESP + 0x84],CH        ; 0050c746
    MOV EAX,dword ptr [EDI + 0x5]       ; 0050c74d
    MOV dword ptr [ESP + 0x85],EAX      ; 0050c750
    LEA EAX,[ESP + 0x80]                ; 0050c757
    PUSH EAX                            ; 0050c75e
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050c75f
    PUSH ECX                            ; 0050c762
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050c763
    PUSH EBX                            ; 0050c766
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0 ; 0050c767
        ;   XREF to: 0050cdf0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0050c76c
    MOV ESP,EBP                         ; 0050c76f
    POP EBP                             ; 0050c771
    POP EDI                             ; 0050c772
    POP ESI                             ; 0050c773
    POP EBX                             ; 0050c774
    RET                                 ; 0050c775
    MOV ESI,dword ptr [0x01d34e4c]      ; 0050c776 | DAT_01d34e4c
        ;   Label: LAB_0050c776
    INC EAX                             ; 0050c77c
    ADD EBX,0x120                       ; 0050c77d
    CMP EAX,ESI                         ; 0050c783
    JL 0x0050c6e8                       ; 0050c785
        ;   XREF to: 0050c6e8 (CONDITIONAL_JUMP)  ; LAB_0050c6e8
    JMP 0x0050c710                      ; 0050c78b
        ;   XREF to: 0050c710 (UNCONDITIONAL_JUMP)  ; LAB_0050c710
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c78d
        ;   Label: caseD_7
    MOV ECX,dword ptr [EAX]             ; 0050c790
    MOV dword ptr [ESP + 0xd4],ESI      ; 0050c792
    TEST ECX,ECX                        ; 0050c799
    JZ 0x0050c026                       ; 0050c79b
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    TEST EBX,EBX                        ; 0050c7a1
    JL 0x0050c026                       ; 0050c7a3
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,dword ptr [0x01d51050]      ; 0050c7a9 | DAT_01d51050
    XOR ESI,ESI                         ; 0050c7af
    CMP ESI,EDI                         ; 0050c7b1
    JGE 0x0050c026                      ; 0050c7b3
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,EDI                         ; 0050c7b9
    SHL EDI,0x4                         ; 0050c7bb
    MOV EAX,ESI                         ; 0050c7be
    ADD EDI,EDX                         ; 0050c7c0
    SHL EAX,0x4                         ; 0050c7c2
    SHL EDI,0x2                         ; 0050c7c5
    SHL EAX,0x2                         ; 0050c7c8
    ADD EDI,EDX                         ; 0050c7cb
    SHL EAX,0x2                         ; 0050c7cd
    SHL EDI,0x2                         ; 0050c7d0
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0050c7d3
        ;   Label: LAB_0050c7d3
    MOV EDX,dword ptr [EAX + 0x1d51058] ; 0050c7da | DAT_01d51058
    CMP EDX,dword ptr [ECX + 0x5]       ; 0050c7e0
    JZ 0x0050c7f5                       ; 0050c7e3
        ;   XREF to: 0050c7f5 (CONDITIONAL_JUMP)  ; LAB_0050c7f5
    ADD EAX,0x114                       ; 0050c7e5
    INC ESI                             ; 0050c7ea
    CMP EAX,EDI                         ; 0050c7eb
    JGE 0x0050c026                      ; 0050c7ed
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    JMP 0x0050c7d3                      ; 0050c7f3
        ;   XREF to: 0050c7d3 (UNCONDITIONAL_JUMP)  ; LAB_0050c7d3
    LEA EDX,[EAX + EBX*0x1]             ; 0050c7f5
        ;   Label: LAB_0050c7f5
    MOV byte ptr [EDX + 0x1d5105c],0x1  ; 0050c7f8
    ADD EAX,0x114                       ; 0050c7ff
    INC ESI                             ; 0050c804
    CMP EAX,EDI                         ; 0050c805
    JGE 0x0050c026                      ; 0050c807
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    JMP 0x0050c7d3                      ; 0050c80d
        ;   XREF to: 0050c7d3 (UNCONDITIONAL_JUMP)  ; LAB_0050c7d3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c80f
        ;   Label: caseD_8
    MOV EDI,dword ptr [EAX]             ; 0050c812
    CMP EDI,0x2                         ; 0050c814
    JNZ 0x0050c54a                      ; 0050c817
        ;   XREF to: 0050c54a (CONDITIONAL_JUMP)  ; LAB_0050c54a
    TEST EBX,EBX                        ; 0050c81d
    JL 0x0050c54a                       ; 0050c81f
        ;   XREF to: 0050c54a (CONDITIONAL_JUMP)  ; LAB_0050c54a
    CMP EBX,dword ptr [EAX + 0x120]     ; 0050c825
    JNZ 0x0050c54a                      ; 0050c82b
        ;   XREF to: 0050c54a (CONDITIONAL_JUMP)  ; LAB_0050c54a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0050c831
    CMP ECX,0x1                         ; 0050c834
    JNZ 0x0050c841                      ; 0050c837
        ;   XREF to: 0050c841 (CONDITIONAL_JUMP)  ; LAB_0050c841
    CMP ECX,dword ptr [ESI + 0x5]       ; 0050c839
    JNZ 0x0050c841                      ; 0050c83c
        ;   XREF to: 0050c841 (CONDITIONAL_JUMP)  ; LAB_0050c841
    MOV dword ptr [EAX + 0x4],EDI       ; 0050c83e
    MOV EDI,0x9                         ; 0050c841
        ;   Label: LAB_0050c841
    MOV DL,0x9                          ; 0050c846
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c848
    MOV dword ptr [ESP + 0x8c],EDI      ; 0050c84b
    MOV byte ptr [ESP + 0x90],DL        ; 0050c852
    MOV EAX,dword ptr [EAX + 0x124]     ; 0050c859
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050c85f
    SHL EAX,0x7                         ; 0050c862
    ADD EAX,EDX                         ; 0050c865
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0050c867
    MOV dword ptr [ESP + 0x91],EAX      ; 0050c86a
    LEA EAX,[ESP + 0x8c]                ; 0050c871
    PUSH EAX                            ; 0050c878
    MOV ECX,dword ptr [EDX + 0x120]     ; 0050c879
    PUSH ECX                            ; 0050c87f
    PUSH EDX                            ; 0050c880
    CALL core_netgame.cpp_CNetGame_send_FUN_0050cd90 ; 0050c881
        ;   XREF to: 0050cd90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0050cd90(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    MOV EDI,dword ptr [0x01d34e40]      ; 0050c886 | DAT_01d34e40
    MOV EAX,dword ptr [ESI + 0x5]       ; 0050c88c
    ADD ESP,0xc                         ; 0050c88f
    CMP EAX,EDI                         ; 0050c892
    JLE 0x0050c026                      ; 0050c894
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV [0x01d34e40],EAX                ; 0050c89a | DAT_01d34e40
    MOV ESP,EBP                         ; 0050c89f
    POP EBP                             ; 0050c8a1
    POP EDI                             ; 0050c8a2
    POP ESI                             ; 0050c8a3
    POP EBX                             ; 0050c8a4
    RET                                 ; 0050c8a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c8a6
        ;   Label: caseD_9
    CMP dword ptr [EAX],0x1             ; 0050c8a9
    JNZ 0x0050c8d9                      ; 0050c8ac
        ;   XREF to: 0050c8d9 (CONDITIONAL_JUMP)  ; LAB_0050c8d9
    TEST EBX,EBX                        ; 0050c8ae
    JL 0x0050c8d9                       ; 0050c8b0
        ;   XREF to: 0050c8d9 (CONDITIONAL_JUMP)  ; LAB_0050c8d9
    CMP dword ptr [EAX + 0x4],0x2       ; 0050c8b2
    JNZ 0x0050c026                      ; 0050c8b6
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0050c8bc
    MOV EAX,dword ptr [ESI + 0x5]       ; 0050c8c3
    CMP EAX,dword ptr [EDX + 0x3c]      ; 0050c8c6
    JL 0x0050c026                       ; 0050c8c9
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV dword ptr [EDX + 0x3c],EAX      ; 0050c8cf
    MOV ESP,EBP                         ; 0050c8d2
    POP EBP                             ; 0050c8d4
    POP EDI                             ; 0050c8d5
    POP ESI                             ; 0050c8d6
    POP EBX                             ; 0050c8d7
    RET                                 ; 0050c8d8
    PUSH 0x0                            ; 0050c8d9
        ;   Label: LAB_0050c8d9
    MOV EBX,dword ptr [EBP + 0x18]      ; 0050c8db
    PUSH EBX                            ; 0050c8de
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050c8df
    PUSH ESI                            ; 0050c8e2
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0 ; 0050c8e3
        ;   XREF to: 0050f4b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0050c8e8
    MOV ESP,EBP                         ; 0050c8eb
    POP EBP                             ; 0050c8ed
    POP EDI                             ; 0050c8ee
    POP ESI                             ; 0050c8ef
    POP EBX                             ; 0050c8f0
    RET                                 ; 0050c8f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c8f2
        ;   Label: caseD_a
    MOV EDI,dword ptr [EAX]             ; 0050c8f5
    MOV EDX,ESI                         ; 0050c8f7
    CMP EDI,0x1                         ; 0050c8f9
    JNZ 0x0050c9bd                      ; 0050c8fc
        ;   XREF to: 0050c9bd (CONDITIONAL_JUMP)  ; LAB_0050c9bd
    TEST EBX,EBX                        ; 0050c902
    JL 0x0050c9bd                       ; 0050c904
        ;   XREF to: 0050c9bd (CONDITIONAL_JUMP)  ; LAB_0050c9bd
    CMP EDI,dword ptr [EAX + 0x4]       ; 0050c90a
    JNZ 0x0050c026                      ; 0050c90d
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0050c913
    CMP dword ptr [EAX + 0x40],0x0      ; 0050c91a
    JZ 0x0050c97e                       ; 0050c91e
        ;   XREF to: 0050c97e (CONDITIONAL_JUMP)  ; LAB_0050c97e
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0050c920
    MOV EAX,dword ptr [ESI + 0x5]       ; 0050c927
    MOV EBX,dword ptr [EBX + 0x40]      ; 0050c92a
    SUB EBX,EAX                         ; 0050c92d
    MOV dword ptr [ESP + 0xe0],EBX      ; 0050c92f
    FILD dword ptr [ESP + 0xe0]         ; 0050c936
    FMUL double ptr [0x005e0a4d]        ; 0050c93d | DAT_005e0a4d
    FST float ptr [ESP + 0x8]           ; 0050c943
    FCOMP double ptr [0x005e0a55]       ; 0050c947 | DAT_005e0a55
    FNSTSW AX                           ; 0050c94d
    SAHF                                ; 0050c94f
    JC 0x0050c9d6                       ; 0050c950
        ;   XREF to: 0050c9d6 (CONDITIONAL_JUMP)  ; LAB_0050c9d6
    FLD float ptr [ESP + 0x8]           ; 0050c956
        ;   Label: LAB_0050c956
    FCOMP double ptr [0x005e0a5d]       ; 0050c95a | DAT_005e0a5d
    FNSTSW AX                           ; 0050c960
    SAHF                                ; 0050c962
    JBE 0x0050c96d                      ; 0050c963
        ;   XREF to: 0050c96d (CONDITIONAL_JUMP)  ; LAB_0050c96d
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 0050c965
    FLD float ptr [ESP + 0x8]           ; 0050c96d
        ;   Label: LAB_0050c96d
    FLDZ                                ; 0050c971
    FCOMPP                              ; 0050c973
    FNSTSW AX                           ; 0050c975
    SAHF                                ; 0050c977
    JNC 0x0050c026                      ; 0050c978
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV ECX,dword ptr [ESP + 0xd8]      ; 0050c97e
        ;   Label: LAB_0050c97e
    LEA ESI,[EDX + 0x9]                 ; 0050c985
    MOV EAX,dword ptr [EDX + 0x1d]      ; 0050c988
    MOV EDI,ECX                         ; 0050c98b
    MOV dword ptr [ECX + 0x44],EAX      ; 0050c98d
    PUSH EDI                            ; 0050c990
    MOV AL,byte ptr [ESI]               ; 0050c991
        ;   Label: LAB_0050c991
    MOV byte ptr [EDI],AL               ; 0050c993
    CMP AL,0x0                          ; 0050c995
    JZ 0x0050c9a9                       ; 0050c997
        ;   XREF to: 0050c9a9 (CONDITIONAL_JUMP)  ; LAB_0050c9a9
    MOV AL,byte ptr [ESI + 0x1]         ; 0050c999
    ADD ESI,0x2                         ; 0050c99c
    MOV byte ptr [EDI + 0x1],AL         ; 0050c99f
    ADD EDI,0x2                         ; 0050c9a2
    CMP AL,0x0                          ; 0050c9a5
    JNZ 0x0050c991                      ; 0050c9a7
        ;   XREF to: 0050c991 (CONDITIONAL_JUMP)  ; LAB_0050c991
    POP EDI                             ; 0050c9a9
        ;   Label: LAB_0050c9a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c9aa
    PUSH EAX                            ; 0050c9ad
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890 ; 0050c9ae
        ;   XREF to: 0050e890 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050c9b3
    MOV ESP,EBP                         ; 0050c9b6
    POP EBP                             ; 0050c9b8
    POP EDI                             ; 0050c9b9
    POP ESI                             ; 0050c9ba
    POP EBX                             ; 0050c9bb
    RET                                 ; 0050c9bc
    PUSH 0x0                            ; 0050c9bd
        ;   Label: LAB_0050c9bd
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050c9bf
    PUSH EDX                            ; 0050c9c2
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050c9c3
    PUSH ECX                            ; 0050c9c6
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0 ; 0050c9c7
        ;   XREF to: 0050f4b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0050c9cc
    MOV ESP,EBP                         ; 0050c9cf
    POP EBP                             ; 0050c9d1
    POP EDI                             ; 0050c9d2
    POP ESI                             ; 0050c9d3
    POP EBX                             ; 0050c9d4
    RET                                 ; 0050c9d5
    MOV dword ptr [ESP + 0x8],0xc1f00000 ; 0050c9d6
        ;   Label: LAB_0050c9d6
    JMP 0x0050c956                      ; 0050c9de
        ;   XREF to: 0050c956 (UNCONDITIONAL_JUMP)  ; LAB_0050c956
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c9e3
        ;   Label: caseD_b
    CMP dword ptr [EAX],0x2             ; 0050c9e6
    JNZ 0x0050c8d9                      ; 0050c9e9
        ;   XREF to: 0050c8d9 (CONDITIONAL_JUMP)  ; LAB_0050c8d9
    TEST EBX,EBX                        ; 0050c9ef
    JL 0x0050c8d9                       ; 0050c9f1
        ;   XREF to: 0050c8d9 (CONDITIONAL_JUMP)  ; LAB_0050c8d9
    CMP EBX,dword ptr [EAX + 0x120]     ; 0050c9f7
    JNZ 0x0050c8d9                      ; 0050c9fd
        ;   XREF to: 0050c8d9 (CONDITIONAL_JUMP)  ; LAB_0050c8d9
    CMP dword ptr [EAX + 0x4],0x1       ; 0050ca03
    JNZ 0x0050c026                      ; 0050ca07
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,[0x01d34e44]                ; 0050ca0d | DAT_01d34e44
    CMP EAX,dword ptr [ESI + 0x5]       ; 0050ca12
    JGE 0x0050ca34                      ; 0050ca15
        ;   XREF to: 0050ca34 (CONDITIONAL_JUMP)  ; LAB_0050ca34
    PUSH ESI                            ; 0050ca17
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050ca18
    PUSH EDI                            ; 0050ca1b
    CALL core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0050e020 ; 0050ca1c
        ;   XREF to: 0050e020 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0050e020(CNetGame * this_ptr, UNetPacket * packet)
    ADD ESP,0x8                         ; 0050ca21
    TEST EAX,EAX                        ; 0050ca24
    JZ 0x0050c026                       ; 0050ca26
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESI + 0x5]       ; 0050ca2c
    MOV [0x01d34e44],EAX                ; 0050ca2f | DAT_01d34e44
    MOV dword ptr [ESP + 0xa4],0x9      ; 0050ca34
        ;   Label: LAB_0050ca34
    MOV byte ptr [ESP + 0xa8],0xc       ; 0050ca3f
    MOV EAX,[0x01d34e44]                ; 0050ca47 | DAT_01d34e44
    MOV dword ptr [ESP + 0xa9],EAX      ; 0050ca4c
    LEA EAX,[ESP + 0xa4]                ; 0050ca53
    PUSH EAX                            ; 0050ca5a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050ca5b
    MOV EDX,dword ptr [EAX + 0x120]     ; 0050ca5e
    PUSH EDX                            ; 0050ca64
    PUSH EAX                            ; 0050ca65
    CALL core_netgame.cpp_CNetGame_send_FUN_0050cd90 ; 0050ca66
        ;   XREF to: 0050cd90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0050cd90(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0050ca6b
    MOV ESP,EBP                         ; 0050ca6e
    POP EBP                             ; 0050ca70
    POP EDI                             ; 0050ca71
    POP ESI                             ; 0050ca72
    POP EBX                             ; 0050ca73
    RET                                 ; 0050ca74
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050ca75
        ;   Label: caseD_c
    MOV EDI,dword ptr [EAX]             ; 0050ca78
    CMP EDI,0x1                         ; 0050ca7a
    JNZ 0x0050c8d9                      ; 0050ca7d
        ;   XREF to: 0050c8d9 (CONDITIONAL_JUMP)  ; LAB_0050c8d9
    TEST EBX,EBX                        ; 0050ca83
    JL 0x0050c8d9                       ; 0050ca85
        ;   XREF to: 0050c8d9 (CONDITIONAL_JUMP)  ; LAB_0050c8d9
    CMP EDI,dword ptr [EAX + 0x4]       ; 0050ca8b
    JNZ 0x0050c026                      ; 0050ca8e
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0050ca94
    MOV ECX,dword ptr [ESI + 0x5]       ; 0050ca9b
    CMP ECX,dword ptr [EAX + 0x34]      ; 0050ca9e
    JL 0x0050c026                       ; 0050caa1
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0050caa7
    MOV dword ptr [EDX + 0x34],ECX      ; 0050caae
    MOV ESP,EBP                         ; 0050cab1
    POP EBP                             ; 0050cab3
    POP EDI                             ; 0050cab4
    POP ESI                             ; 0050cab5
    POP EBX                             ; 0050cab6
    RET                                 ; 0050cab7
    CMP dword ptr [ESI + 0x5],0x0       ; 0050cab8
        ;   Label: caseD_d
    JNZ 0x0050cb48                      ; 0050cabc
        ;   XREF to: 0050cb48 (CONDITIONAL_JUMP)  ; LAB_0050cb48
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050cac2
        ;   Label: LAB_0050cac2
    CMP dword ptr [EAX],0x1             ; 0050cac5
    JNZ 0x0050cae4                      ; 0050cac8
        ;   XREF to: 0050cae4 (CONDITIONAL_JUMP)  ; LAB_0050cae4
    TEST EBX,EBX                        ; 0050caca
    JL 0x0050cad8                       ; 0050cacc
        ;   XREF to: 0050cad8 (CONDITIONAL_JUMP)  ; LAB_0050cad8
    PUSH EBX                            ; 0050cace
    PUSH EAX                            ; 0050cacf
    CALL core_netgame.cpp_CNetGame_removePlayer_FUN_0050e6c0 ; 0050cad0
        ;   XREF to: 0050e6c0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_removePlayer_FUN_0050e6c0(CNetGame * this_ptr, int player_index)
    ADD ESP,0x8                         ; 0050cad5
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050cad8
        ;   Label: LAB_0050cad8
    PUSH ESI                            ; 0050cadb
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890 ; 0050cadc
        ;   XREF to: 0050e890 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050cae1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050cae4
        ;   Label: LAB_0050cae4
    CMP dword ptr [EAX],0x2             ; 0050cae7
    JNZ 0x0050c026                      ; 0050caea
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    TEST EBX,EBX                        ; 0050caf0
    JL 0x0050c026                       ; 0050caf2
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    CMP EBX,dword ptr [EAX + 0x120]     ; 0050caf8
    JNZ 0x0050c026                      ; 0050cafe
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x0                            ; 0050cb04
    PUSH EAX                            ; 0050cb06
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0 ; 0050cb07
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 0050cb0c
    PUSH 0x5e09ab                       ; 0050cb0f | = "You have been disconnected from the game"
    PUSH 0x5e09d4                       ; 0050cb14 | DAT_005e09d4
    PUSH 0x0                            ; 0050cb19
    PUSH 0x0                            ; 0050cb1b
    MOV EBX,dword ptr [0x02653630]      ; 0050cb1d | DAT_02653630
    PUSH EBX                            ; 0050cb23
    LEA EAX,[ESP + 0xd0]                ; 0050cb24
    PUSH EAX                            ; 0050cb2b
    CALL support_trisock.cpp_createNetworkAddr_FUN_00578e60 ; 0050cb2c
        ;   XREF to: 00578e60 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_createNetworkAddr_FUN_00578e60()
    ADD ESP,0xc                         ; 0050cb31
    PUSH EAX                            ; 0050cb34
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050cb35
    PUSH ESI                            ; 0050cb38
    CALL core_netgame.cpp_CNetGame_addChatHistory_FUN_0050df20 ; 0050cb39
        ;   XREF to: 0050df20 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_addChatHistory_FUN_0050df20(CNetGame * this_ptr, SNetworkAddr * sender_addr, int message_id, char * sender_name, ...)
    ADD ESP,0x14                        ; 0050cb3e
    MOV ESP,EBP                         ; 0050cb41
    POP EBP                             ; 0050cb43
    POP EDI                             ; 0050cb44
    POP ESI                             ; 0050cb45
    POP EBX                             ; 0050cb46
    RET                                 ; 0050cb47
    PUSH 0x0                            ; 0050cb48
        ;   Label: LAB_0050cb48
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050cb4a
    PUSH ESI                            ; 0050cb4d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050cb4e
    PUSH EDI                            ; 0050cb51
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0 ; 0050cb52
        ;   XREF to: 0050f4b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0050cb57
    JMP 0x0050cac2                      ; 0050cb5a
        ;   XREF to: 0050cac2 (UNCONDITIONAL_JUMP)  ; LAB_0050cac2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050cb5f
        ;   Label: caseD_f
    MOV EDX,dword ptr [EAX]             ; 0050cb62
    MOV dword ptr [ESP + 0xc8],ESI      ; 0050cb64
    CMP EDX,0x2                         ; 0050cb6b
    JNZ 0x0050c54a                      ; 0050cb6e
        ;   XREF to: 0050c54a (CONDITIONAL_JUMP)  ; LAB_0050c54a
    TEST EBX,EBX                        ; 0050cb74
    JL 0x0050c54a                       ; 0050cb76
        ;   XREF to: 0050c54a (CONDITIONAL_JUMP)  ; LAB_0050c54a
    MOV ECX,dword ptr [EAX + 0x120]     ; 0050cb7c
    CMP EBX,ECX                         ; 0050cb82
    JNZ 0x0050c54a                      ; 0050cb84
        ;   XREF to: 0050c54a (CONDITIONAL_JUMP)  ; LAB_0050c54a
    MOV EDI,dword ptr [0x01d54640]      ; 0050cb8a | DAT_01d54640
    MOV EAX,dword ptr [ESI + 0x5]       ; 0050cb90
    XOR EBX,ECX                         ; 0050cb93
    MOV ESI,EAX                         ; 0050cb95
    MOV dword ptr [ESP + 0xc4],EAX      ; 0050cb97
    TEST EDI,EDI                        ; 0050cb9e
    JLE 0x0050cc87                      ; 0050cba0
        ;   XREF to: 0050cc87 (CONDITIONAL_JUMP)  ; LAB_0050cc87
    LEA EDX,[EDI*0x8 + 0x0]             ; 0050cba6
    SUB EDX,EDI                         ; 0050cbad
    SHL EDX,0x2                         ; 0050cbaf
    ADD EDX,EDI                         ; 0050cbb2
    XOR EAX,EAX                         ; 0050cbb4
    SHL EDX,0x2                         ; 0050cbb6
    CMP ESI,dword ptr [EAX + 0x1d54644] ; 0050cbb9 | DAT_01d546b8
        ;   Label: LAB_0050cbb9
    JNZ 0x0050cc7b                      ; 0050cbbf
        ;   XREF to: 0050cc7b (CONDITIONAL_JUMP)  ; LAB_0050cc7b
    TEST EBX,EBX                        ; 0050cbc5
    JL 0x0050cc87                       ; 0050cbc7
        ;   XREF to: 0050cc87 (CONDITIONAL_JUMP)  ; LAB_0050cc87
    ADD EAX,0x1d54644                   ; 0050cbcd
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0050cbd2
        ;   Label: LAB_0050cbd2
    MOV EDX,dword ptr [EDX + 0x9]       ; 0050cbd9
    MOV dword ptr [EAX + 0x4],EDX       ; 0050cbdc | DAT_01d546bc
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0050cbdf
    MOV dword ptr [ESP + 0xd0],EAX      ; 0050cbe6 | DAT_01d546b8
    MOV ECX,dword ptr [EDX + 0xd]       ; 0050cbed
    MOV dword ptr [EAX + 0x8],ECX       ; 0050cbf0 | DAT_01d546c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050cbf3
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0050cbf6
    XOR EBX,EBX                         ; 0050cbf9
    TEST EDI,EDI                        ; 0050cbfb
    JLE 0x0050c026                      ; 0050cbfd
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV dword ptr [ESP + 0xdc],EDX      ; 0050cc03
    MOV ESI,EBX                         ; 0050cc0a
        ;   Label: LAB_0050cc0a
    TEST EBX,EBX                        ; 0050cc0c
    JL 0x0050ccfa                       ; 0050cc0e
        ;   XREF to: 0050ccfa (CONDITIONAL_JUMP)  ; LAB_0050ccfa
    CMP ESI,EBX                         ; 0050cc14
        ;   Label: LAB_0050cc14
    JZ 0x0050cc3b                       ; 0050cc16
        ;   XREF to: 0050cc3b (CONDITIONAL_JUMP)  ; LAB_0050cc3b
    MOV EDX,0x5e0a21                    ; 0050cc18 | = "..\\core\\netgame.cpp"
    MOV ECX,0x597                       ; 0050cc1d
    PUSH 0x5e0a35                       ; 0050cc22 | = "Player list mismatch!"
    MOV dword ptr [0x01d046a0],EDX      ; 0050cc27 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0050cc2d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050cc33
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050cc38
    IMUL ESI,ESI,0x34                   ; 0050cc3b
        ;   Label: LAB_0050cc3b
    ADD ESI,dword ptr [ESP + 0xd0]      ; 0050cc3e
    LEA EDI,[ESI + 0xc]                 ; 0050cc45
    MOV ESI,dword ptr [ESP + 0xdc]      ; 0050cc48
    MOV ECX,0xd                         ; 0050cc4f
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0050cc54
    LEA ESI,[ESI + 0x11]                ; 0050cc5b
    INC EBX                             ; 0050cc5e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050cc5f
    MOVSD.REP ES:EDI,ESI                ; 0050cc62
    ADD EDX,0x34                        ; 0050cc64
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0050cc67
    MOV dword ptr [ESP + 0xdc],EDX      ; 0050cc6a
    CMP EBX,ECX                         ; 0050cc71
    JGE 0x0050c026                      ; 0050cc73
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    JMP 0x0050cc0a                      ; 0050cc79
        ;   XREF to: 0050cc0a (UNCONDITIONAL_JUMP)  ; LAB_0050cc0a
    ADD EAX,0x74                        ; 0050cc7b
        ;   Label: LAB_0050cc7b
    INC EBX                             ; 0050cc7e
    CMP EAX,EDX                         ; 0050cc7f
    JL 0x0050cbb9                       ; 0050cc81
        ;   XREF to: 0050cbb9 (CONDITIONAL_JUMP)  ; LAB_0050cbb9
    CMP dword ptr [0x01d54640],0x200    ; 0050cc87 | DAT_01d54640
        ;   Label: LAB_0050cc87
    JL 0x0050ccb6                       ; 0050cc91
        ;   XREF to: 0050ccb6 (CONDITIONAL_JUMP)  ; LAB_0050ccb6
    MOV EDX,0x5e03cf                    ; 0050cc93 | = "..\\core\\netgame.cpp"
    MOV ECX,0x12b                       ; 0050cc98
    PUSH 0x5e03e3                       ; 0050cc9d | = "allocSimFrame - sim history list full"
    MOV dword ptr [0x01d046a0],EDX      ; 0050cca2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0050cca8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050ccae
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050ccb3
    MOV EDX,dword ptr [0x01d54640]      ; 0050ccb6 | DAT_01d54640
        ;   Label: LAB_0050ccb6
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050ccbc
    SUB EAX,EDX                         ; 0050ccc3
    SHL EAX,0x2                         ; 0050ccc5
    MOV EBX,0x1d54644                   ; 0050ccc8
    ADD EAX,EDX                         ; 0050cccd
    PUSH 0x74                           ; 0050cccf
    SHL EAX,0x2                         ; 0050ccd1
    PUSH 0x0                            ; 0050ccd4
    ADD EBX,EAX                         ; 0050ccd6
    LEA ESI,[EDX + 0x1]                 ; 0050ccd8
    PUSH EBX                            ; 0050ccdb
    MOV dword ptr [0x01d54640],ESI      ; 0050ccdc | DAT_01d54640
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0050cce2
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050cce7
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0050ccea
    MOV dword ptr [EBX],EAX             ; 0050ccf1
    MOV EAX,EBX                         ; 0050ccf3
    JMP 0x0050cbd2                      ; 0050ccf5
        ;   XREF to: 0050cbd2 (UNCONDITIONAL_JUMP)  ; LAB_0050cbd2
    MOV EDI,0x5e09d5                    ; 0050ccfa | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050ccfa
    MOV EAX,0x596                       ; 0050ccff
    PUSH 0x5e09e9                       ; 0050cd04 | = "Player list mismatch processing SimFr..."
    MOV dword ptr [0x01d046a0],EDI      ; 0050cd09 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0050cd0f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050cd14
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050cd19
    JMP 0x0050cc14                      ; 0050cd1c
        ;   XREF to: 0050cc14 (UNCONDITIONAL_JUMP)  ; LAB_0050cc14
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050cd21
        ;   Label: caseD_10
    CMP dword ptr [EAX],0x1             ; 0050cd24
    JNZ 0x0050cd6a                      ; 0050cd27
        ;   XREF to: 0050cd6a (CONDITIONAL_JUMP)  ; LAB_0050cd6a
    TEST EBX,EBX                        ; 0050cd29
    JL 0x0050cd6a                       ; 0050cd2b
        ;   XREF to: 0050cd6a (CONDITIONAL_JUMP)  ; LAB_0050cd6a
    CMP dword ptr [EAX + 0x4],0x3       ; 0050cd2d
    JNZ 0x0050c026                      ; 0050cd31
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0050cd37
    MOV EBX,dword ptr [ESI + 0x5]       ; 0050cd3e
    CMP EBX,dword ptr [EAX + 0x48]      ; 0050cd41
    JLE 0x0050c026                      ; 0050cd44
        ;   XREF to: 0050c026 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0050cd4a
    MOV EDI,EDX                         ; 0050cd51
    MOV dword ptr [EDX + 0x48],EBX      ; 0050cd53
    MOV ECX,0xd                         ; 0050cd56
    LEA EDI,[EDI + 0x4c]                ; 0050cd5b
    LEA ESI,[ESI + 0x9]                 ; 0050cd5e
    MOVSD.REP ES:EDI,ESI                ; 0050cd61
    MOV ESP,EBP                         ; 0050cd63
    POP EBP                             ; 0050cd65
    POP EDI                             ; 0050cd66
    POP ESI                             ; 0050cd67
    POP EBX                             ; 0050cd68
    RET                                 ; 0050cd69
    PUSH 0x0                            ; 0050cd6a
        ;   Label: LAB_0050cd6a
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050cd6c
    PUSH ESI                            ; 0050cd6f
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050cd70
    PUSH EDI                            ; 0050cd73
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0 ; 0050cd74
        ;   XREF to: 0050f4b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0050cd79
    MOV ESP,EBP                         ; 0050cd7c
    POP EBP                             ; 0050cd7e
    POP EDI                             ; 0050cd7f
    POP ESI                             ; 0050cd80
    POP EBX                             ; 0050cd81
    RET                                 ; 0050cd82

