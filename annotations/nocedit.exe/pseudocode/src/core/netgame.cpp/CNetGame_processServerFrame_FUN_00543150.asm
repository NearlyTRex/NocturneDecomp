; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x90]:4  local_90
; undefined1       Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x8b]:4  local_8b
; undefined4       Stack[-0x87]:4  local_87
; undefined4       Stack[-0x83]:4  local_83
; undefined1       Stack[-0x7f]:1  local_7f
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da383
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db308
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063d277
;   TerminatedCString s_allocSimFrame_sim_histor_0063d28b
;   TerminatedCString s_core_netgame_cpp_0063dda6
;   TerminatedCString s_CNetGame_processServerFr_0063ddba
;   TerminatedCString s_core_netgame_cpp_0063ddf1
;   TerminatedCString s_CNetGame_processServerFr_0063de05
;   TerminatedCString s_core_netgame_cpp_0063de4b
;   TerminatedCString s_CNetGame_processServerFr_0063de5f
;   TerminatedCString s_core_netgame_cpp_0063dea0
;   TerminatedCString s_CNetGame_processServerFr_0063deb4
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_LastPingTime
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040cb90
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
;   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
;   core_netgame.cpp_CNetGame_send_FUN_005411c0
;   core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdlib.c_rand_FUN_005feb5c
;   crt_string.c_memmove_FUN_005fe5e0
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543150
        ;   Label: core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
    PUSH ESI                            ; 00543151
    PUSH EDI                            ; 00543152
    PUSH EBP                            ; 00543153
    SUB ESP,0x80                        ; 00543154
    MOV EBX,dword ptr [ESP + 0x94]      ; 0054315a
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00543161
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 00543166
    MOV ECX,0x12                        ; 00543168
    SAR EDX,0x1f                        ; 0054316d
    IDIV ECX                            ; 00543170
    MOV ECX,dword ptr [0x02f7c8b4]      ; 00543172 | g_LastPingTime
    MOV EDX,EAX                         ; 00543178
    SUB EAX,ECX                         ; 0054317a
    MOV dword ptr [0x02f7c8b4],EDX      ; 0054317c | g_LastPingTime
    TEST EAX,EAX                        ; 00543182
    JL 0x0054339a                       ; 00543184
        ;   XREF to: 0054339a (CONDITIONAL_JUMP)  ; LAB_0054339a
    CMP EAX,0x20000                     ; 0054318a
    JLE 0x00543196                      ; 0054318f
        ;   XREF to: 00543196 (CONDITIONAL_JUMP)  ; LAB_00543196
    MOV EAX,0x20000                     ; 00543191
    MOV ESI,dword ptr [0x02f7c8b8]      ; 00543196 | g_CurrentGameTime
        ;   Label: LAB_00543196
    ADD ESI,EAX                         ; 0054319c
    MOV EDI,dword ptr [EBX]             ; 0054319e
    MOV dword ptr [0x02f7c8b8],ESI      ; 005431a0 | g_CurrentGameTime
    TEST EDI,EDI                        ; 005431a6
    JZ 0x005433a1                       ; 005431a8
        ;   XREF to: 005433a1 (CONDITIONAL_JUMP)  ; LAB_005433a1
    CMP EDI,0x1                         ; 005431ae
    JNZ 0x0054338f                      ; 005431b1
        ;   XREF to: 0054338f (CONDITIONAL_JUMP)  ; LAB_0054338f
    CMP dword ptr [EBX + 0x4],0x3       ; 005431b7
    JNZ 0x0054338f                      ; 005431bb
        ;   XREF to: 0054338f (CONDITIONAL_JUMP)  ; LAB_0054338f
    CMP dword ptr [EBX + 0x114],0x0     ; 005431c1
    JL 0x005433c0                       ; 005431c8
        ;   XREF to: 005433c0 (CONDITIONAL_JUMP)  ; LAB_005433c0
    MOV EDI,dword ptr [EBX + 0x114]     ; 005431ce
        ;   Label: LAB_005431ce
    CMP EDI,dword ptr [EBX + 0x110]     ; 005431d4
    JZ 0x005431fe                       ; 005431da
        ;   XREF to: 005431fe (CONDITIONAL_JUMP)  ; LAB_005431fe
    MOV EBP,0x63ddf1                    ; 005431dc | = "..\\core\\netgame.cpp"
    MOV EAX,0x8f7                       ; 005431e1
    PUSH 0x63de05                       ; 005431e6 | = "CNetGame::processServerFrame - I'm no..."
    MOV dword ptr [0x02f0ca48],EBP      ; 005431eb | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005431f1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005431f6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005431fb
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005431fe
        ;   Label: LAB_005431fe
    XOR ESI,ESI                         ; 00543201
    TEST EDX,EDX                        ; 00543203
    JLE 0x00543220                      ; 00543205
        ;   XREF to: 00543220 (CONDITIONAL_JUMP)  ; LAB_00543220
    PUSH 0x41200000                     ; 00543207
        ;   Label: LAB_00543207
    PUSH ESI                            ; 0054320c
    PUSH EBX                            ; 0054320d
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_00541c80 ; 0054320e
        ;   XREF to: 00541c80 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_00541c80(CNetGame * this_ptr, int player_index, float max_ping)
    INC ESI                             ; 00543213
    MOV EDI,dword ptr [EBX + 0x1c]      ; 00543214
    ADD ESP,0xc                         ; 00543217
    CMP ESI,EDI                         ; 0054321a
    JL 0x00543207                       ; 0054321c
        ;   XREF to: 00543207 (CONDITIONAL_JUMP)  ; LAB_00543207
    MOV EAX,EAX                         ; 0054321e
    PUSH EBX                            ; 00543220
        ;   Label: LAB_00543220
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 ; 00543221
        ;   XREF to: 005405b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame * this_ptr)
    MOV EDX,0x7fffffff                  ; 00543226
    ADD ESP,0x4                         ; 0054322b
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0054322e
    XOR EAX,EAX                         ; 00543231
    TEST EBP,EBP                        ; 00543233
    JLE 0x0054324d                      ; 00543235
        ;   XREF to: 0054324d (CONDITIONAL_JUMP)  ; LAB_0054324d
    MOV ESI,EBX                         ; 00543237
    MOV EBP,dword ptr [ESI + 0x68]      ; 00543239
        ;   Label: LAB_00543239
    CMP EDX,EBP                         ; 0054323c
    JLE 0x00543242                      ; 0054323e
        ;   XREF to: 00543242 (CONDITIONAL_JUMP)  ; LAB_00543242
    MOV EDX,EBP                         ; 00543240
    INC EAX                             ; 00543242
        ;   Label: LAB_00543242
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00543243
    ADD ESI,0x78                        ; 00543246
    CMP EAX,ECX                         ; 00543249
    JL 0x00543239                       ; 0054324b
        ;   XREF to: 00543239 (CONDITIONAL_JUMP)  ; LAB_00543239
    MOV EDI,dword ptr [0x02f9c0c0]      ; 0054324d | g_SimFrameCount
        ;   Label: LAB_0054324d
    MOV dword ptr [ESP + 0x78],EDX      ; 00543253
    XOR ESI,ESI                         ; 00543257
    TEST EDI,EDI                        ; 00543259
    JLE 0x005432a1                      ; 0054325b
        ;   XREF to: 005432a1 (CONDITIONAL_JUMP)  ; LAB_005432a1
    MOV EDI,0x2f9c0c4                   ; 0054325d | g_SimFrameHistory
    XOR EBP,EBP                         ; 00543262
    ADD EDI,0x64                        ; 00543264
    MOV ECX,dword ptr [ESP + 0x78]      ; 00543267
        ;   Label: LAB_00543267
    CMP ECX,dword ptr [EBP + 0x2f9c0c4] ; 0054326b | g_SimFrameHistory
    JLE 0x005433e8                      ; 00543271
        ;   XREF to: 005433e8 (CONDITIONAL_JUMP)  ; LAB_005433e8
    MOV EAX,[0x02f9c0c0]                ; 00543277 | g_SimFrameCount
    DEC EAX                             ; 0054327c
    MOV [0x02f9c0c0],EAX                ; 0054327d | g_SimFrameCount
    SUB EAX,ESI                         ; 00543282
    IMUL EAX,EAX,0x64                   ; 00543284
    PUSH EAX                            ; 00543287
    MOV EAX,0x2f9c0c4                   ; 00543288 | g_SimFrameHistory
    PUSH EDI                            ; 0054328d | DAT_02f9c128
    ADD EAX,EBP                         ; 0054328e
    PUSH EAX                            ; 00543290 | g_SimFrameHistory
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00543291
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00543296
    CMP ESI,dword ptr [0x02f9c0c0]      ; 00543299 | g_SimFrameCount
        ;   Label: LAB_00543299
    JL 0x00543267                       ; 0054329f
        ;   XREF to: 00543267 (CONDITIONAL_JUMP)  ; LAB_00543267
    MOV EAX,dword ptr [EBX + 0x114]     ; 005432a1
        ;   Label: LAB_005432a1
    SHL EAX,0x3                         ; 005432a7
    MOV EDX,EAX                         ; 005432aa
    SHL EAX,0x4                         ; 005432ac
    SUB EAX,EDX                         ; 005432af
    LEA ESI,[EBX + EAX*0x1]             ; 005432b1
    XOR EDI,EDI                         ; 005432b4
    MOV ESI,dword ptr [ESI + 0x68]      ; 005432b6
    MOV EDX,dword ptr [0x02f9c0c0]      ; 005432b9 | g_SimFrameCount
    MOV EBP,ESI                         ; 005432bf
    TEST EDX,EDX                        ; 005432c1
    JLE 0x00543400                      ; 005432c3
        ;   XREF to: 00543400 (CONDITIONAL_JUMP)  ; LAB_00543400
    MOV ECX,EDX                         ; 005432c9
    SHL EDX,0x2                         ; 005432cb
    SUB EDX,ECX                         ; 005432ce
    SHL EDX,0x3                         ; 005432d0
    ADD EDX,ECX                         ; 005432d3
    XOR EAX,EAX                         ; 005432d5
    SHL EDX,0x2                         ; 005432d7
    CMP EBP,dword ptr [EAX + 0x2f9c0c4] ; 005432da | g_SimFrameHistory | DAT_02f9c128
        ;   Label: LAB_005432da
    JNZ 0x005433f4                      ; 005432e0
        ;   XREF to: 005433f4 (CONDITIONAL_JUMP)  ; LAB_005433f4
    TEST EDI,EDI                        ; 005432e6
    JL 0x00543400                       ; 005432e8
        ;   XREF to: 00543400 (CONDITIONAL_JUMP)  ; LAB_00543400
    MOV EBP,0x2f9c0c4                   ; 005432ee | g_SimFrameHistory
    ADD EBP,EAX                         ; 005432f3
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005432f5
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_005432f5
    MOV dword ptr [EBP + 0x4],EAX       ; 005432fa | DAT_02f9c0c8
    MOV EAX,[0x0067b654]                ; 005432fd | g_CGamePtr
    MOV dword ptr [ESP + 0x74],EBP      ; 00543302 | g_SimFrameHistory
    MOV EDX,dword ptr [EAX + 0x264]     ; 00543306 | g_CGameInstance.delta_time_float
    MOV dword ptr [EBP + 0x8],EDX       ; 0054330c | DAT_02f9c0cc
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0054330f
    XOR EAX,EAX                         ; 00543312
    TEST ECX,ECX                        ; 00543314
    JLE 0x00543340                      ; 00543316
        ;   XREF to: 00543340 (CONDITIONAL_JUMP)  ; LAB_00543340
    MOV EDX,EBX                         ; 00543318
    MOV ECX,0xb                         ; 0054331a
        ;   Label: LAB_0054331a
    LEA EDI,[EBP + 0xc]                 ; 0054331f | DAT_02f9c0d0
    LEA ESI,[EDX + 0x6c]                ; 00543322
    ADD EBP,0x2c                        ; 00543325
    MOVSD.REP ES:EDI,ESI                ; 00543328 | DAT_02f9c0d0 | DAT_02f9c0d4 | DAT_02f9c0fc
    INC EAX                             ; 0054332a
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0054332b
    ADD EDX,0x78                        ; 0054332e
    CMP EAX,ESI                         ; 00543331
    JL 0x0054331a                       ; 00543333
        ;   XREF to: 0054331a (CONDITIONAL_JUMP)  ; LAB_0054331a
    LEA EAX,[EAX]                       ; 00543335
    LEA EDX,[EDX]                       ; 0054333b
    MOV EBX,EBX                         ; 0054333e
    MOV EDI,dword ptr [ESP + 0x74]      ; 00543340
        ;   Label: LAB_00543340
    PUSH EDI                            ; 00543344 | g_SimFrameHistory
    PUSH EBX                            ; 00543345
    XOR EBP,EBP                         ; 00543346
    CALL core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800 ; 00543348
        ;   XREF to: 00543800 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800(CNetGame * this_ptr)
    ADD ESP,0x8                         ; 0054334d
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00543350
    MOV dword ptr [ESP + 0x6c],EBP      ; 00543353
    TEST EAX,EAX                        ; 00543357
    JLE 0x0054338f                      ; 00543359
        ;   XREF to: 0054338f (CONDITIONAL_JUMP)  ; LAB_0054338f
    LEA EAX,[EBX + 0x20]                ; 0054335b
    MOV dword ptr [ESP + 0x7c],EAX      ; 0054335e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00543362
        ;   Label: LAB_00543362
    MOV EDI,dword ptr [EBX + 0x114]     ; 00543366
    CMP EAX,EDI                         ; 0054336c
    JNZ 0x00543468                      ; 0054336e
        ;   XREF to: 00543468 (CONDITIONAL_JUMP)  ; LAB_00543468
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00543374
        ;   Label: LAB_00543374
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00543378
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0054337c
    ADD EDX,0x78                        ; 0054337f
    INC ECX                             ; 00543382
    MOV dword ptr [ESP + 0x7c],EDX      ; 00543383
    MOV dword ptr [ESP + 0x6c],ECX      ; 00543387
    CMP ECX,ESI                         ; 0054338b
    JL 0x00543362                       ; 0054338d
        ;   XREF to: 00543362 (CONDITIONAL_JUMP)  ; LAB_00543362
    ADD ESP,0x80                        ; 0054338f
        ;   Label: LAB_0054338f
    POP EBP                             ; 00543395
    POP EDI                             ; 00543396
    POP ESI                             ; 00543397
    POP EBX                             ; 00543398
    RET                                 ; 00543399
    XOR EAX,EAX                         ; 0054339a
        ;   Label: LAB_0054339a
    JMP 0x00543196                      ; 0054339c
        ;   XREF to: 00543196 (UNCONDITIONAL_JUMP)  ; LAB_00543196
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005433a1
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_005433a1
    PUSH EAX                            ; 005433a6
    MOV dword ptr [EBX + 0x16c],EAX     ; 005433a7
    CALL core_actor.cpp_setRandomSeed_FUN_0040cb90 ; 005433ad
        ;   XREF to: 0040cb90 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040cb90(uint seed_value)
    ADD ESP,0x4                         ; 005433b2
    ADD ESP,0x80                        ; 005433b5
    POP EBP                             ; 005433bb
    POP EDI                             ; 005433bc
    POP ESI                             ; 005433bd
    POP EBX                             ; 005433be
    RET                                 ; 005433bf
    MOV ECX,0x63dda6                    ; 005433c0 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_005433c0
    MOV ESI,0x8f6                       ; 005433c5
    PUSH 0x63ddba                       ; 005433ca | = "CNetGame::processServerFrame - I'm no..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005433cf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005433d5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005433db
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005433e0
    JMP 0x005431ce                      ; 005433e3
        ;   XREF to: 005431ce (UNCONDITIONAL_JUMP)  ; LAB_005431ce
    ADD EDI,0x64                        ; 005433e8
        ;   Label: LAB_005433e8
    INC ESI                             ; 005433eb
    ADD EBP,0x64                        ; 005433ec
    JMP 0x00543299                      ; 005433ef
        ;   XREF to: 00543299 (UNCONDITIONAL_JUMP)  ; LAB_00543299
    ADD EAX,0x64                        ; 005433f4
        ;   Label: LAB_005433f4
    INC EDI                             ; 005433f7
    CMP EAX,EDX                         ; 005433f8
    JL 0x005432da                       ; 005433fa
        ;   XREF to: 005432da (CONDITIONAL_JUMP)  ; LAB_005432da
    CMP dword ptr [0x02f9c0c0],0x200    ; 00543400 | g_SimFrameCount
        ;   Label: LAB_00543400
    JL 0x0054342e                       ; 0054340a
        ;   XREF to: 0054342e (CONDITIONAL_JUMP)  ; LAB_0054342e
    MOV EBP,0x63d277                    ; 0054340c | = "..\\core\\netgame.cpp"
    MOV EAX,0x12b                       ; 00543411
    PUSH 0x63d28b                       ; 00543416 | = "allocSimFrame - sim history list full"
    MOV dword ptr [0x02f0ca48],EBP      ; 0054341b | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00543421 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00543426
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054342b
    MOV EDX,dword ptr [0x02f9c0c0]      ; 0054342e | g_SimFrameCount
        ;   Label: LAB_0054342e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00543434
    SUB EAX,EDX                         ; 0054343b
    SHL EAX,0x3                         ; 0054343d
    MOV EBP,0x2f9c0c4                   ; 00543440 | g_SimFrameHistory
    ADD EAX,EDX                         ; 00543445
    PUSH 0x64                           ; 00543447
    SHL EAX,0x2                         ; 00543449
    PUSH 0x0                            ; 0054344c
    ADD EBP,EAX                         ; 0054344e
    INC EDX                             ; 00543450
    PUSH EBP                            ; 00543451
    MOV dword ptr [0x02f9c0c0],EDX      ; 00543452 | g_SimFrameCount
    CALL crt_memory.c_memset_FUN_005fde40 ; 00543458
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0054345d
    MOV dword ptr [EBP],ESI             ; 00543460 | g_SimFrameHistory
    JMP 0x005432f5                      ; 00543463
        ;   XREF to: 005432f5 (UNCONDITIONAL_JUMP)  ; LAB_005432f5
    IMUL EBP,EDI,0x78                   ; 00543468
        ;   Label: LAB_00543468
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0054346b
    MOV EDX,dword ptr [ESI + 0x48]      ; 0054346f
    MOV EBP,dword ptr [EBX + EBP*0x1 + 0x68] ; 00543472
    SUB EBP,EDX                         ; 00543476
    CMP EBP,0x1                         ; 00543478
    JGE 0x005434a0                      ; 0054347b
        ;   XREF to: 005434a0 (CONDITIONAL_JUMP)  ; LAB_005434a0
    MOV ECX,0x63de4b                    ; 0054347d | = "..\\core\\netgame.cpp"
    MOV EDI,0x93b                       ; 00543482
    PUSH 0x63de5f                       ; 00543487 | = "CNetGame::processServerFrame - player..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0054348c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00543492 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00543498
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054349d
    CMP EBP,0x5                         ; 005434a0
        ;   Label: LAB_005434a0
    JLE 0x005434aa                      ; 005434a3
        ;   XREF to: 005434aa (CONDITIONAL_JUMP)  ; LAB_005434aa
    MOV EBP,0x5                         ; 005434a5
    MOV EAX,dword ptr [ESI + 0x48]      ; 005434aa
        ;   Label: LAB_005434aa
    MOV dword ptr [ESP + 0x70],EAX      ; 005434ad
    TEST EBP,EBP                        ; 005434b1
        ;   Label: LAB_005434b1
    JLE 0x00543374                      ; 005434b3
        ;   XREF to: 00543374 (CONDITIONAL_JUMP)  ; LAB_00543374
    MOV ECX,dword ptr [ESP + 0x70]      ; 005434b9
    MOV ESI,dword ptr [0x02f9c0c0]      ; 005434bd | g_SimFrameCount
    XOR EDX,EDX                         ; 005434c3
    TEST ESI,ESI                        ; 005434c5
    JLE 0x00543564                      ; 005434c7
        ;   XREF to: 00543564 (CONDITIONAL_JUMP)  ; LAB_00543564
    XOR EAX,EAX                         ; 005434cd
    IMUL ESI,ESI,0x64                   ; 005434cf
    CMP ECX,dword ptr [EAX + 0x2f9c0c4] ; 005434d2 | g_SimFrameHistory | DAT_02f9c128
        ;   Label: LAB_005434d2
    JNZ 0x00543558                      ; 005434d8
        ;   XREF to: 00543558 (CONDITIONAL_JUMP)  ; LAB_00543558
    MOV ESI,EDX                         ; 005434de
        ;   Label: LAB_005434de
    TEST EDX,EDX                        ; 005434e0
    JL 0x0054356e                       ; 005434e2
        ;   XREF to: 0054356e (CONDITIONAL_JUMP)  ; LAB_0054356e
    IMUL EDX,ESI,0x64                   ; 005434e8
        ;   Label: LAB_005434e8
    MOV ECX,0x69                        ; 005434eb
    MOV AH,0xf                          ; 005434f0
    ADD EDX,0x2f9c0c4                   ; 005434f2 | g_SimFrameHistory
    MOV dword ptr [ESP],ECX             ; 005434f8
    MOV byte ptr [ESP + 0x4],AH         ; 005434fb
    MOV EAX,dword ptr [EDX]             ; 005434ff | DAT_02f9c060 | g_SimFrameHistory | DAT_02f9c128
    MOV dword ptr [ESP + 0x5],EAX       ; 00543501
    MOV EAX,dword ptr [EDX + 0x4]       ; 00543505 | DAT_02f9c064 | DAT_02f9c0c8 | DAT_02f9c12c
    MOV dword ptr [ESP + 0x9],EAX       ; 00543508
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054350c | DAT_02f9c068 | DAT_02f9c0cc | DAT_02f9c130
    MOV dword ptr [ESP + 0xd],EAX       ; 0054350f
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00543513
    XOR EAX,EAX                         ; 00543516
    TEST ESI,ESI                        ; 00543518
    JLE 0x00543538                      ; 0054351a
        ;   XREF to: 00543538 (CONDITIONAL_JUMP)  ; LAB_00543538
    IMUL ESI,EAX,0x2c                   ; 0054351c
        ;   Label: LAB_0054351c
    MOV ECX,0xb                         ; 0054351f
    LEA EDI,[ESP + ESI*0x1 + 0x11]      ; 00543524
    LEA ESI,[EDX + 0xc]                 ; 00543528 | DAT_02f9c0d0
    MOVSD.REP ES:EDI,ESI                ; 0054352b | DAT_02f9c0d0 | DAT_02f9c0d4 | DAT_02f9c0fc
    INC EAX                             ; 0054352d
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0054352e
    ADD EDX,0x2c                        ; 00543531 | DAT_02f9c0f0
    CMP EAX,EDI                         ; 00543534
    JL 0x0054351c                       ; 00543536
        ;   XREF to: 0054351c (CONDITIONAL_JUMP)  ; LAB_0054351c
    MOV EAX,ESP                         ; 00543538
        ;   Label: LAB_00543538
    PUSH EAX                            ; 0054353a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0054353b
    PUSH EAX                            ; 0054353f
    PUSH EBX                            ; 00543540
    CALL core_netgame.cpp_CNetGame_send_FUN_005411c0 ; 00543541
        ;   XREF to: 005411c0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_005411c0(CNetGame * this_ptr, int player_index)
    ADD ESP,0xc                         ; 00543546
    MOV EDX,dword ptr [ESP + 0x70]      ; 00543549
    INC EDX                             ; 0054354d
    DEC EBP                             ; 0054354e
    MOV dword ptr [ESP + 0x70],EDX      ; 0054354f
    JMP 0x005434b1                      ; 00543553
        ;   XREF to: 005434b1 (UNCONDITIONAL_JUMP)  ; LAB_005434b1
    ADD EAX,0x64                        ; 00543558
        ;   Label: LAB_00543558
    INC EDX                             ; 0054355b
    CMP EAX,ESI                         ; 0054355c
    JL 0x005434d2                       ; 0054355e
        ;   XREF to: 005434d2 (CONDITIONAL_JUMP)  ; LAB_005434d2
    MOV EDX,0xffffffff                  ; 00543564
        ;   Label: LAB_00543564
    JMP 0x005434de                      ; 00543569
        ;   XREF to: 005434de (UNCONDITIONAL_JUMP)  ; LAB_005434de
    MOV EAX,0x63dea0                    ; 0054356e | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0054356e
    MOV EDX,0x94d                       ; 00543573
    PUSH 0x63deb4                       ; 00543578 | = "CNetGame::processServerFrame - client..."
    MOV [0x02f0ca48],EAX                ; 0054357d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00543582 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00543588
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054358d
    JMP 0x005434e8                      ; 00543590
        ;   XREF to: 005434e8 (UNCONDITIONAL_JUMP)  ; LAB_005434e8

