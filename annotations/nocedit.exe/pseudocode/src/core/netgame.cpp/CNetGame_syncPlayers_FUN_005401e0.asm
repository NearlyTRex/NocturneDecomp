; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame *this_ptr,int sync_stage)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sync_stage
; Local Variables:
; float            Stack[-0x198]:4  local_198
; char[256]        Stack[-0x194]:256  local_194
; char[100]        Stack[-0x94]:100  local_94
; SNetPacket_Simple Stack[-0x30]:9  local_30
; uint             Stack[-0x24]:4  local_24
; SNetPlayer *     Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db2d1
;   core_netgame.cpp_CNetGame_runLobby_FUN_00541390 at 00541959
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063d54d
;   TerminatedCString s_CNetGame_syncPlayers_don_0063d561
;   TerminatedCString s_Syncing_stage_d_0063d599
;   TerminatedCString s_Waiting_on_0063d5ab
;   TerminatedCString s_d_0063d5b7
;   TerminatedCString s_Waiting_on_sync_code_d_f_0063d5f8
;   TerminatedCString s_core_netgame_cpp_0063d61f
;   TerminatedCString s_CNetGame_syncPlayers_inv_0063d633
;   double g_TimeoutScale = 0.0000152587890625
;   double g_MaxTimeout = 30
;   double g_SyncTimeout = 0.100000000000000
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CKeys g_CKeysInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   ... and 3 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
;   core_netgame.cpp_CNetGame_send_FUN_005411c0
;   core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_special.cpp_clearScreen_FUN_005b3e70
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005401e0
        ;   Label: core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
    PUSH ESI                            ; 005401e1
    PUSH EDI                            ; 005401e2
    PUSH EBP                            ; 005401e3
    MOV EBP,ESP                         ; 005401e4
    SUB ESP,0x188                       ; 005401e6
    AND ESP,0xfffffff8                  ; 005401ec
    MOV ESI,dword ptr [EBP + 0x14]      ; 005401ef
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005401f2
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CMP dword ptr [EBP + 0x18],0x1      ; 005401f7
    JL 0x00540453                       ; 005401fb
        ;   XREF to: 00540453 (CONDITIONAL_JUMP)  ; LAB_00540453
    CMP dword ptr [ESI],0x0             ; 00540201
        ;   Label: LAB_00540201
    JZ 0x0054047b                       ; 00540204
        ;   XREF to: 0054047b (CONDITIONAL_JUMP)  ; LAB_0054047b
    MOV dword ptr [ESI + 0x4],0x2       ; 0054020a
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00540211
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 00540216
    MOV EBX,0x12                        ; 00540218
    SAR EDX,0x1f                        ; 0054021d
    IDIV EBX                            ; 00540220
    MOV ECX,dword ptr [0x02f7c8b4]      ; 00540222 | g_LastPingTime
    MOV EDX,EAX                         ; 00540228
    SUB EAX,ECX                         ; 0054022a
    MOV dword ptr [0x02f7c8b4],EDX      ; 0054022c | g_LastPingTime
    TEST EAX,EAX                        ; 00540232
    JL 0x00540487                       ; 00540234
        ;   XREF to: 00540487 (CONDITIONAL_JUMP)  ; LAB_00540487
    CMP EAX,0x20000                     ; 0054023a
    JLE 0x00540246                      ; 0054023f
        ;   XREF to: 00540246 (CONDITIONAL_JUMP)  ; LAB_00540246
    MOV EAX,0x20000                     ; 00540241
    MOV EBX,dword ptr [0x02f7c8b8]      ; 00540246 | g_CurrentGameTime
        ;   Label: LAB_00540246
    ADD EBX,EAX                         ; 0054024c
    MOV EAX,dword ptr [ESI + 0x114]     ; 0054024e
    SHL EAX,0x3                         ; 00540254
    MOV EDX,EAX                         ; 00540257
    SHL EAX,0x4                         ; 00540259
    SUB EAX,EDX                         ; 0054025c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0054025e
    MOV dword ptr [ESI + EAX*0x1 + 0x5c],EDX ; 00540261
    MOV EDI,dword ptr [ESI]             ; 00540265
    MOV dword ptr [0x02f7c8b8],EBX      ; 00540267 | g_CurrentGameTime
    CMP EDI,0x1                         ; 0054026d
    JNZ 0x0054049c                      ; 00540270
        ;   XREF to: 0054049c (CONDITIONAL_JUMP)  ; LAB_0054049c
    LEA EAX,[EBX + 0xffe20000]          ; 00540276
    MOV dword ptr [ESP + 0x174],EAX     ; 0054027c
    LEA EAX,[ESI + 0x20]                ; 00540283
    MOV dword ptr [ESP + 0x178],EAX     ; 00540286
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 0054028d
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0054028d
    MOV EBX,dword ptr [EBP + 0x18]      ; 00540292
    PUSH EBX                            ; 00540295
    PUSH 0x63d599                       ; 00540296 | = "Syncing stage %d."
    LEA EAX,[ESP + 0xc]                 ; 0054029b
    PUSH EAX                            ; 0054029f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005402a0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005402a5
    PUSH 0xb                            ; 005402a8
    PUSH 0x0                            ; 005402aa
    LEA EAX,[ESP + 0xc]                 ; 005402ac
    PUSH EAX                            ; 005402b0
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005402b1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005402b6
    PUSH 0x16                           ; 005402b9
    PUSH 0x0                            ; 005402bb
    PUSH 0x63d5ab                       ; 005402bd | = "Waiting on:"
    MOV EDI,0x1                         ; 005402c2
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005402c7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,0x21                        ; 005402cc
    ADD ESP,0xc                         ; 005402d1
    MOV EDX,dword ptr [ESI + 0x1c]      ; 005402d4
    MOV dword ptr [ESP + 0x17c],EDI     ; 005402d7
    MOV dword ptr [ESP + 0x180],EAX     ; 005402de
    XOR EDI,EDI                         ; 005402e5
    TEST EDX,EDX                        ; 005402e7
    JLE 0x0054035d                      ; 005402e9
        ;   XREF to: 0054035d (CONDITIONAL_JUMP)  ; LAB_0054035d
    MOV EBX,ESI                         ; 005402eb
    IMUL EAX,EDI,0x78                   ; 005402ed
        ;   Label: LAB_005402ed
    MOV ECX,dword ptr [EBP + 0x18]      ; 005402f0
    CMP ECX,dword ptr [EBX + 0x5c]      ; 005402f3
    JLE 0x00540352                      ; 005402f6
        ;   XREF to: 00540352 (CONDITIONAL_JUMP)  ; LAB_00540352
    MOV ECX,dword ptr [ESP + 0x180]     ; 005402f8
    XOR EDX,EDX                         ; 005402ff
    PUSH ECX                            ; 00540301
    MOV dword ptr [ESP + 0x180],EDX     ; 00540302
    PUSH EDX                            ; 00540309
    ADD EAX,dword ptr [ESP + 0x180]     ; 0054030a
    PUSH EAX                            ; 00540311
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00540312
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00540317
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0054031a
    PUSH ECX                            ; 0054031d
    PUSH 0x63d5b7                       ; 0054031e | = "%d"
    LEA EAX,[ESP + 0xc]                 ; 00540323
    PUSH EAX                            ; 00540327
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00540328
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054032d
    MOV EAX,dword ptr [ESP + 0x180]     ; 00540330
    PUSH EAX                            ; 00540337
    PUSH 0xc8                           ; 00540338
    LEA EAX,[ESP + 0xc]                 ; 0054033d
    PUSH EAX                            ; 00540341
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00540342
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00540347
    ADD dword ptr [ESP + 0x180],0xb     ; 0054034a
    INC EDI                             ; 00540352
        ;   Label: LAB_00540352
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00540353
    ADD EBX,0x78                        ; 00540356
    CMP EDI,ECX                         ; 00540359
    JL 0x005402ed                       ; 0054035b
        ;   XREF to: 005402ed (CONDITIONAL_JUMP)  ; LAB_005402ed
    MOV EBX,dword ptr [ESP + 0x17c]     ; 0054035d
        ;   Label: LAB_0054035d
    TEST EBX,EBX                        ; 00540364
    JNZ 0x0054053f                      ; 00540366
        ;   XREF to: 0054053f (CONDITIONAL_JUMP)  ; LAB_0054053f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0054036c
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH ESI                            ; 00540371
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 ; 00540372
        ;   XREF to: 005405b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00540377
    MOV EAX,[0x02f7c8b8]                ; 0054037a | g_CurrentGameTime
    MOV EDI,dword ptr [ESP + 0x174]     ; 0054037f
    SUB EAX,EDI                         ; 00540386
    MOV dword ptr [ESP + 0x184],EAX     ; 00540388
    FILD dword ptr [ESP + 0x184]        ; 0054038f
    FMUL double ptr [0x0063d65d]        ; 00540396 | g_TimeoutScale
    FST float ptr [ESP]                 ; 0054039c
    FLDZ                                ; 0054039f
    FCOMPP                              ; 005403a1
    FNSTSW AX                           ; 005403a3
    SAHF                                ; 005403a5
    JBE 0x005403ab                      ; 005403a6
        ;   XREF to: 005403ab (CONDITIONAL_JUMP)  ; LAB_005403ab
    MOV dword ptr [ESP],EBX             ; 005403a8
    FLD float ptr [ESP]                 ; 005403ab
        ;   Label: LAB_005403ab
    FCOMP double ptr [0x0063d665]       ; 005403ae | g_MaxTimeout
    FNSTSW AX                           ; 005403b4
    SAHF                                ; 005403b6
    JBE 0x005403c0                      ; 005403b7
        ;   XREF to: 005403c0 (CONDITIONAL_JUMP)  ; LAB_005403c0
    MOV dword ptr [ESP],0x41f00000      ; 005403b9
    FLD float ptr [ESP]                 ; 005403c0
        ;   Label: LAB_005403c0
    FCOMP double ptr [0x0063d66d]       ; 005403c3 | g_SyncTimeout
    FNSTSW AX                           ; 005403c9
    SAHF                                ; 005403cb
    JBE 0x0054042d                      ; 005403cc
        ;   XREF to: 0054042d (CONDITIONAL_JUMP)  ; LAB_0054042d
    MOV EAX,[0x02f7c8b8]                ; 005403ce | g_CurrentGameTime
    MOV dword ptr [ESP + 0x174],EAX     ; 005403d3
    MOV AH,0x8                          ; 005403da
    MOV ECX,0x9                         ; 005403dc
    MOV byte ptr [ESP + 0x16c],AH       ; 005403e1
    MOV EAX,dword ptr [EBP + 0x18]      ; 005403e8
    MOV dword ptr [ESP + 0x168],ECX     ; 005403eb
    MOV dword ptr [ESP + 0x16d],EAX     ; 005403f2
    MOV EDI,dword ptr [ESI + 0x1c]      ; 005403f9
    XOR EBX,EBX                         ; 005403fc
    TEST EDI,EDI                        ; 005403fe
    JLE 0x0054042d                      ; 00540400
        ;   XREF to: 0054042d (CONDITIONAL_JUMP)  ; LAB_0054042d
    MOV EDI,ESI                         ; 00540402
    MOV EDX,dword ptr [EBP + 0x18]      ; 00540404
        ;   Label: LAB_00540404
    CMP EDX,dword ptr [EDI + 0x5c]      ; 00540407
    JLE 0x0054048e                      ; 0054040a
        ;   XREF to: 0054048e (CONDITIONAL_JUMP)  ; LAB_0054048e
    LEA EAX,[ESP + 0x168]               ; 00540410
    PUSH EAX                            ; 00540417
    PUSH EBX                            ; 00540418
    PUSH ESI                            ; 00540419
    CALL core_netgame.cpp_CNetGame_send_FUN_005411c0 ; 0054041a
        ;   XREF to: 005411c0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_005411c0(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0054041f
        ;   Label: LAB_0054041f
    INC EBX                             ; 00540422
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00540423
    ADD EDI,0x78                        ; 00540426
    CMP EBX,ECX                         ; 00540429
    JL 0x00540404                       ; 0054042b
        ;   XREF to: 00540404 (CONDITIONAL_JUMP)  ; LAB_00540404
    PUSH 0x1                            ; 0054042d
        ;   Label: LAB_0054042d
    MOV EAX,[0x0067cf44]                ; 0054042f | g_CKeysPtr
    PUSH EAX                            ; 00540434 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00540435 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00540437
    ADD ESP,0x8                         ; 0054043a
    TEST EAX,EAX                        ; 0054043d
    JZ 0x0054028d                       ; 0054043f
        ;   XREF to: 0054028d (CONDITIONAL_JUMP)  ; LAB_0054028d
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00540445
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    XOR EAX,EAX                         ; 0054044a
    MOV ESP,EBP                         ; 0054044c
        ;   Label: caseD_e
    POP EBP                             ; 0054044e
    POP EDI                             ; 0054044f
    POP ESI                             ; 00540450
    POP EBX                             ; 00540451
    RET                                 ; 00540452
    MOV ECX,0x63d54d                    ; 00540453 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00540453
    MOV EBX,0x337                       ; 00540458
    PUSH 0x63d561                       ; 0054045d | = "CNetGame::syncPlayers - don't use 0!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00540462 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00540468 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054046e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00540473
    JMP 0x00540201                      ; 00540476
        ;   XREF to: 00540201 (UNCONDITIONAL_JUMP)  ; LAB_00540201
    MOV EAX,0x1                         ; 0054047b
        ;   Label: LAB_0054047b
    MOV ESP,EBP                         ; 00540480
    POP EBP                             ; 00540482
    POP EDI                             ; 00540483
    POP ESI                             ; 00540484
    POP EBX                             ; 00540485
    RET                                 ; 00540486
    XOR EAX,EAX                         ; 00540487
        ;   Label: LAB_00540487
    JMP 0x00540246                      ; 00540489
        ;   XREF to: 00540246 (UNCONDITIONAL_JUMP)  ; LAB_00540246
    PUSH 0x40000000                     ; 0054048e
        ;   Label: LAB_0054048e
    PUSH EBX                            ; 00540493
    PUSH ESI                            ; 00540494
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_00541c80 ; 00540495
        ;   XREF to: 00541c80 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_00541c80(CNetGame * this_ptr, int player_index, float max_ping)
    JMP 0x0054041f                      ; 0054049a
        ;   XREF to: 0054041f (UNCONDITIONAL_JUMP)  ; LAB_0054041f
    CMP EDI,0x2                         ; 0054049c
        ;   Label: LAB_0054049c
    JNZ 0x0054051c                      ; 0054049f
        ;   XREF to: 0054051c (CONDITIONAL_JUMP)  ; LAB_0054051c
    CMP EDX,0x4                         ; 005404a5
    JGE 0x0054047b                      ; 005404a8
        ;   XREF to: 0054047b (CONDITIONAL_JUMP)  ; LAB_0054047b
    XOR EDI,EDI                         ; 005404aa
    MOV EDX,dword ptr [EBP + 0x18]      ; 005404ac
        ;   Label: LAB_005404ac
    CMP EDX,dword ptr [0x02f7c8c0]      ; 005404af | g_RemoteSyncStage
    JLE 0x0054053f                      ; 005404b5
        ;   XREF to: 0054053f (CONDITIONAL_JUMP)  ; LAB_0054053f
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 005404bb
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,dword ptr [EBP + 0x18]      ; 005404c0
    PUSH ECX                            ; 005404c3
    PUSH 0x63d5f8                       ; 005404c4 | = "Waiting on sync code %d from server..."
    LEA EAX,[ESP + 0x10c]               ; 005404c9
    PUSH EAX                            ; 005404d0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005404d1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005404d6
    PUSH 0xb                            ; 005404d9
    PUSH EDI                            ; 005404db
    LEA EAX,[ESP + 0x10c]               ; 005404dc
    PUSH EAX                            ; 005404e3
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005404e4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005404e9
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005404ec
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH ESI                            ; 005404f1
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 ; 005404f2
        ;   XREF to: 005405b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 005404f7
    MOV EAX,[0x0067cf44]                ; 005404fa | g_CKeysPtr
    PUSH 0x1                            ; 005404ff
    MOV EBX,dword ptr [EAX]             ; 00540501 | g_CKeysInstance
    PUSH EAX                            ; 00540503 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00540504
    ADD ESP,0x8                         ; 00540507
    TEST EAX,EAX                        ; 0054050a
    JZ 0x005404ac                       ; 0054050c
        ;   XREF to: 005404ac (CONDITIONAL_JUMP)  ; LAB_005404ac
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0054050e
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    XOR EAX,EAX                         ; 00540513
    MOV ESP,EBP                         ; 00540515
    POP EBP                             ; 00540517
    POP EDI                             ; 00540518
    POP ESI                             ; 00540519
    POP EBX                             ; 0054051a
    RET                                 ; 0054051b
    MOV EDX,0x63d61f                    ; 0054051c | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0054051c
    MOV ECX,0x3c0                       ; 00540521
    PUSH 0x63d633                       ; 00540526 | = "CNetGame::syncPlayers - invalid mode"
    MOV dword ptr [0x02f0ca48],EDX      ; 0054052b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00540531 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00540537
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054053c
    MOV EAX,0x1                         ; 0054053f
        ;   Label: LAB_0054053f
    MOV ESP,EBP                         ; 00540544
    POP EBP                             ; 00540546
    POP EDI                             ; 00540547
    POP ESI                             ; 00540548
    POP EBX                             ; 00540549
    RET                                 ; 0054054a

