; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame * this_ptr)
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
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00543161 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 00543166
    MOV ECX,0x12                        ; 00543168
    SAR EDX,0x1f                        ; 0054316d
    IDIV ECX                            ; 00543170
    MOV ECX,dword ptr [0x02f7c8b4]      ; 00543172 | int g_LastPingTime
    MOV EDX,EAX                         ; 00543178
    SUB EAX,ECX                         ; 0054317a
    MOV dword ptr [0x02f7c8b4],EDX      ; 0054317c | int g_LastPingTime
    TEST EAX,EAX                        ; 00543182
    JL 0x0054339a                       ; 00543184 | LAB_0054339a
        ;   XREF to: 0054339a (CONDITIONAL_JUMP)
    CMP EAX,0x20000                     ; 0054318a
    JLE 0x00543196                      ; 0054318f | LAB_00543196
        ;   XREF to: 00543196 (CONDITIONAL_JUMP)
    MOV EAX,0x20000                     ; 00543191
    MOV ESI,dword ptr [0x02f7c8b8]      ; 00543196 | uint g_CurrentGameTime
        ;   Label: LAB_00543196
    ADD ESI,EAX                         ; 0054319c
    MOV EDI,dword ptr [EBX]             ; 0054319e
    MOV dword ptr [0x02f7c8b8],ESI      ; 005431a0 | uint g_CurrentGameTime
    TEST EDI,EDI                        ; 005431a6
    JZ 0x005433a1                       ; 005431a8 | LAB_005433a1
        ;   XREF to: 005433a1 (CONDITIONAL_JUMP)
    CMP EDI,0x1                         ; 005431ae
    JNZ 0x0054338f                      ; 005431b1 | LAB_0054338f
        ;   XREF to: 0054338f (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x4],0x3       ; 005431b7
    JNZ 0x0054338f                      ; 005431bb | LAB_0054338f
        ;   XREF to: 0054338f (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x114],0x0     ; 005431c1
    JL 0x005433c0                       ; 005431c8 | LAB_005433c0
        ;   XREF to: 005433c0 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0x114]     ; 005431ce
        ;   Label: LAB_005431ce
    CMP EDI,dword ptr [EBX + 0x110]     ; 005431d4
    JZ 0x005431fe                       ; 005431da | LAB_005431fe
        ;   XREF to: 005431fe (CONDITIONAL_JUMP)
    MOV EBP,0x63ddf1                    ; 005431dc | = "..\\core\\netgame.cpp" | s_core_netgame_cpp_0063ddf1 = ..\core\netgame.cpp
    MOV EAX,0x8f7                       ; 005431e1
    PUSH 0x63de05                       ; 005431e6 | = "CNetGame::processServerFrame - I'm no..." | s_CNetGame_processServerFr_0063de05 = CNetGame::processServerFrame - I'm not the server in the player list!
    MOV dword ptr [0x02f0ca48],EBP      ; 005431eb | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005431f1 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005431f6 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005431fb
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005431fe
        ;   Label: LAB_005431fe
    XOR ESI,ESI                         ; 00543201
    TEST EDX,EDX                        ; 00543203
    JLE 0x00543220                      ; 00543205 | LAB_00543220
        ;   XREF to: 00543220 (CONDITIONAL_JUMP)
    PUSH 0x41200000                     ; 00543207
        ;   Label: LAB_00543207
    PUSH ESI                            ; 0054320c
    PUSH EBX                            ; 0054320d
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_00541c80 ; 0054320e | void core_netgame.cpp_CNetGame_updatePing_FUN_00541c80(CNetGame * this_ptr, int player_index, float max_ping)
        ;   XREF to: 00541c80 (UNCONDITIONAL_CALL)
    INC ESI                             ; 00543213
    MOV EDI,dword ptr [EBX + 0x1c]      ; 00543214
    ADD ESP,0xc                         ; 00543217
    CMP ESI,EDI                         ; 0054321a
    JL 0x00543207                       ; 0054321c | LAB_00543207
        ;   XREF to: 00543207 (CONDITIONAL_JUMP)
    MOV EAX,EAX                         ; 0054321e
    PUSH EBX                            ; 00543220
        ;   Label: LAB_00543220
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 ; 00543221 | void core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame * this_ptr)
        ;   XREF to: 005405b0 (UNCONDITIONAL_CALL)
    MOV EDX,0x7fffffff                  ; 00543226
    ADD ESP,0x4                         ; 0054322b
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0054322e
    XOR EAX,EAX                         ; 00543231
    TEST EBP,EBP                        ; 00543233
    JLE 0x0054324d                      ; 00543235 | LAB_0054324d
        ;   XREF to: 0054324d (CONDITIONAL_JUMP)
    MOV ESI,EBX                         ; 00543237
    MOV EBP,dword ptr [ESI + 0x68]      ; 00543239
        ;   Label: LAB_00543239
    CMP EDX,EBP                         ; 0054323c
    JLE 0x00543242                      ; 0054323e | LAB_00543242
        ;   XREF to: 00543242 (CONDITIONAL_JUMP)
    MOV EDX,EBP                         ; 00543240
    INC EAX                             ; 00543242
        ;   Label: LAB_00543242
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00543243
    ADD ESI,0x78                        ; 00543246
    CMP EAX,ECX                         ; 00543249
    JL 0x00543239                       ; 0054324b | LAB_00543239
        ;   XREF to: 00543239 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x02f9c0c0]      ; 0054324d | int g_SimFrameCount
        ;   Label: LAB_0054324d
    MOV dword ptr [ESP + 0x78],EDX      ; 00543253
    XOR ESI,ESI                         ; 00543257
    TEST EDI,EDI                        ; 00543259
    JLE 0x005432a1                      ; 0054325b | LAB_005432a1
        ;   XREF to: 005432a1 (CONDITIONAL_JUMP)
    MOV EDI,0x2f9c0c4                   ; 0054325d | undefined4 g_SimFrameHistory
    XOR EBP,EBP                         ; 00543262
    ADD EDI,0x64                        ; 00543264
    MOV ECX,dword ptr [ESP + 0x78]      ; 00543267
        ;   Label: LAB_00543267
    CMP ECX,dword ptr [EBP + 0x2f9c0c4] ; 0054326b | undefined4 g_SimFrameHistory
    JLE 0x005433e8                      ; 00543271 | LAB_005433e8
        ;   XREF to: 005433e8 (CONDITIONAL_JUMP)
    MOV EAX,[0x02f9c0c0]                ; 00543277 | int g_SimFrameCount
    DEC EAX                             ; 0054327c
    MOV [0x02f9c0c0],EAX                ; 0054327d | int g_SimFrameCount
    SUB EAX,ESI                         ; 00543282
    IMUL EAX,EAX,0x64                   ; 00543284
    PUSH EAX                            ; 00543287
    MOV EAX,0x2f9c0c4                   ; 00543288 | undefined4 g_SimFrameHistory
    PUSH EDI                            ; 0054328d | undefined4 DAT_02f9c128
    ADD EAX,EBP                         ; 0054328e
    PUSH EAX                            ; 00543290 | undefined4 g_SimFrameHistory
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00543291 | void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00543296
    CMP ESI,dword ptr [0x02f9c0c0]      ; 00543299 | int g_SimFrameCount
        ;   Label: LAB_00543299
    JL 0x00543267                       ; 0054329f | LAB_00543267
        ;   XREF to: 00543267 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x114]     ; 005432a1
        ;   Label: LAB_005432a1
    SHL EAX,0x3                         ; 005432a7
    MOV EDX,EAX                         ; 005432aa
    SHL EAX,0x4                         ; 005432ac
    SUB EAX,EDX                         ; 005432af
    LEA ESI,[EBX + EAX*0x1]             ; 005432b1
    XOR EDI,EDI                         ; 005432b4
    MOV ESI,dword ptr [ESI + 0x68]      ; 005432b6
    MOV EDX,dword ptr [0x02f9c0c0]      ; 005432b9 | int g_SimFrameCount
    MOV EBP,ESI                         ; 005432bf
    TEST EDX,EDX                        ; 005432c1
    JLE 0x00543400                      ; 005432c3 | LAB_00543400
        ;   XREF to: 00543400 (CONDITIONAL_JUMP)
    MOV ECX,EDX                         ; 005432c9
    SHL EDX,0x2                         ; 005432cb
    SUB EDX,ECX                         ; 005432ce
    SHL EDX,0x3                         ; 005432d0
    ADD EDX,ECX                         ; 005432d3
    XOR EAX,EAX                         ; 005432d5
    SHL EDX,0x2                         ; 005432d7
    CMP EBP,dword ptr [EAX + 0x2f9c0c4] ; 005432da | undefined4 g_SimFrameHistory | DAT_02f9c128
        ;   Label: LAB_005432da
    JNZ 0x005433f4                      ; 005432e0 | LAB_005433f4
        ;   XREF to: 005433f4 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 005432e6
    JL 0x00543400                       ; 005432e8 | LAB_00543400
        ;   XREF to: 00543400 (CONDITIONAL_JUMP)
    MOV EBP,0x2f9c0c4                   ; 005432ee | undefined4 g_SimFrameHistory
    ADD EBP,EAX                         ; 005432f3
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005432f5 | int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_005432f5
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + 0x4],EAX       ; 005432fa | undefined4 DAT_02f9c0c8
    MOV EAX,[0x0067b654]                ; 005432fd | CGame * g_CGamePtr
    MOV dword ptr [ESP + 0x74],EBP      ; 00543302 | undefined4 g_SimFrameHistory
    MOV EDX,dword ptr [EAX + 0x264]     ; 00543306 | g_CGameInstance.delta_time_float
    MOV dword ptr [EBP + 0x8],EDX       ; 0054330c | undefined4 DAT_02f9c0cc
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0054330f
    XOR EAX,EAX                         ; 00543312
    TEST ECX,ECX                        ; 00543314
    JLE 0x00543340                      ; 00543316 | LAB_00543340
        ;   XREF to: 00543340 (CONDITIONAL_JUMP)
    MOV EDX,EBX                         ; 00543318
    MOV ECX,0xb                         ; 0054331a
        ;   Label: LAB_0054331a
    LEA EDI,[EBP + 0xc]                 ; 0054331f | undefined4 DAT_02f9c0d0
    LEA ESI,[EDX + 0x6c]                ; 00543322
    ADD EBP,0x2c                        ; 00543325
    MOVSD.REP ES:EDI,ESI                ; 00543328 | undefined4 DAT_02f9c0d0 | DAT_02f9c0d4 | DAT_02f9c0fc
    INC EAX                             ; 0054332a
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0054332b
    ADD EDX,0x78                        ; 0054332e
    CMP EAX,ESI                         ; 00543331
    JL 0x0054331a                       ; 00543333 | LAB_0054331a
        ;   XREF to: 0054331a (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00543335
    LEA EDX,[EDX]                       ; 0054333b
    MOV EBX,EBX                         ; 0054333e
    MOV EDI,dword ptr [ESP + 0x74]      ; 00543340
        ;   Label: LAB_00543340
    PUSH EDI                            ; 00543344 | undefined4 g_SimFrameHistory
    PUSH EBX                            ; 00543345
    XOR EBP,EBP                         ; 00543346
    CALL core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800 ; 00543348 | undefined core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800()
        ;   XREF to: 00543800 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054334d
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00543350
    MOV dword ptr [ESP + 0x6c],EBP      ; 00543353
    TEST EAX,EAX                        ; 00543357
    JLE 0x0054338f                      ; 00543359 | LAB_0054338f
        ;   XREF to: 0054338f (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x20]                ; 0054335b
    MOV dword ptr [ESP + 0x7c],EAX      ; 0054335e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00543362
        ;   Label: LAB_00543362
    MOV EDI,dword ptr [EBX + 0x114]     ; 00543366
    CMP EAX,EDI                         ; 0054336c
    JNZ 0x00543468                      ; 0054336e | LAB_00543468
        ;   XREF to: 00543468 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00543374
        ;   Label: LAB_00543374
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00543378
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0054337c
    ADD EDX,0x78                        ; 0054337f
    INC ECX                             ; 00543382
    MOV dword ptr [ESP + 0x7c],EDX      ; 00543383
    MOV dword ptr [ESP + 0x6c],ECX      ; 00543387
    CMP ECX,ESI                         ; 0054338b
    JL 0x00543362                       ; 0054338d | LAB_00543362
        ;   XREF to: 00543362 (CONDITIONAL_JUMP)
    ADD ESP,0x80                        ; 0054338f
        ;   Label: LAB_0054338f
    POP EBP                             ; 00543395
    POP EDI                             ; 00543396
    POP ESI                             ; 00543397
    POP EBX                             ; 00543398
    RET                                 ; 00543399
    XOR EAX,EAX                         ; 0054339a
        ;   Label: LAB_0054339a
    JMP 0x00543196                      ; 0054339c | LAB_00543196
        ;   XREF to: 00543196 (UNCONDITIONAL_JUMP)
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005433a1 | int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_005433a1
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)
    PUSH EAX                            ; 005433a6
    MOV dword ptr [EBX + 0x16c],EAX     ; 005433a7
    CALL core_actor.cpp_setRandomSeed_FUN_0040cb90 ; 005433ad | void core_actor.cpp_setRandomSeed_FUN_0040cb90(uint seed_value)
        ;   XREF to: 0040cb90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005433b2
    ADD ESP,0x80                        ; 005433b5
    POP EBP                             ; 005433bb
    POP EDI                             ; 005433bc
    POP ESI                             ; 005433bd
    POP EBX                             ; 005433be
    RET                                 ; 005433bf
    MOV ECX,0x63dda6                    ; 005433c0 | = "..\\core\\netgame.cpp" | s_core_netgame_cpp_0063dda6 = ..\core\netgame.cpp
        ;   Label: LAB_005433c0
    MOV ESI,0x8f6                       ; 005433c5
    PUSH 0x63ddba                       ; 005433ca | = "CNetGame::processServerFrame - I'm no..." | s_CNetGame_processServerFr_0063ddba = CNetGame::processServerFrame - I'm not in player list!
    MOV dword ptr [0x02f0ca48],ECX      ; 005433cf | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005433d5 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005433db | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005433e0
    JMP 0x005431ce                      ; 005433e3 | LAB_005431ce
        ;   XREF to: 005431ce (UNCONDITIONAL_JUMP)
    ADD EDI,0x64                        ; 005433e8
        ;   Label: LAB_005433e8
    INC ESI                             ; 005433eb
    ADD EBP,0x64                        ; 005433ec
    JMP 0x00543299                      ; 005433ef | LAB_00543299
        ;   XREF to: 00543299 (UNCONDITIONAL_JUMP)
    ADD EAX,0x64                        ; 005433f4
        ;   Label: LAB_005433f4
    INC EDI                             ; 005433f7
    CMP EAX,EDX                         ; 005433f8
    JL 0x005432da                       ; 005433fa | LAB_005432da
        ;   XREF to: 005432da (CONDITIONAL_JUMP)
    CMP dword ptr [0x02f9c0c0],0x200    ; 00543400 | int g_SimFrameCount
        ;   Label: LAB_00543400
    JL 0x0054342e                       ; 0054340a | LAB_0054342e
        ;   XREF to: 0054342e (CONDITIONAL_JUMP)
    MOV EBP,0x63d277                    ; 0054340c | = "..\\core\\netgame.cpp" | s_core_netgame_cpp_0063d277 = ..\core\netgame.cpp
    MOV EAX,0x12b                       ; 00543411
    PUSH 0x63d28b                       ; 00543416 | = "allocSimFrame - sim history list full" | s_allocSimFrame_sim_histor_0063d28b = allocSimFrame - sim history list full
    MOV dword ptr [0x02f0ca48],EBP      ; 0054341b | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00543421 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00543426 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054342b
    MOV EDX,dword ptr [0x02f9c0c0]      ; 0054342e | int g_SimFrameCount
        ;   Label: LAB_0054342e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00543434
    SUB EAX,EDX                         ; 0054343b
    SHL EAX,0x3                         ; 0054343d
    MOV EBP,0x2f9c0c4                   ; 00543440 | undefined4 g_SimFrameHistory
    ADD EAX,EDX                         ; 00543445
    PUSH 0x64                           ; 00543447
    SHL EAX,0x2                         ; 00543449
    PUSH 0x0                            ; 0054344c
    ADD EBP,EAX                         ; 0054344e
    INC EDX                             ; 00543450
    PUSH EBP                            ; 00543451
    MOV dword ptr [0x02f9c0c0],EDX      ; 00543452 | int g_SimFrameCount
    CALL crt_memory.c_memset_FUN_005fde40 ; 00543458 | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054345d
    MOV dword ptr [EBP],ESI             ; 00543460 | undefined4 g_SimFrameHistory
    JMP 0x005432f5                      ; 00543463 | LAB_005432f5
        ;   XREF to: 005432f5 (UNCONDITIONAL_JUMP)
    IMUL EBP,EDI,0x78                   ; 00543468
        ;   Label: LAB_00543468
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0054346b
    MOV EDX,dword ptr [ESI + 0x48]      ; 0054346f
    MOV EBP,dword ptr [EBX + EBP*0x1 + 0x68] ; 00543472
    SUB EBP,EDX                         ; 00543476
    CMP EBP,0x1                         ; 00543478
    JGE 0x005434a0                      ; 0054347b | LAB_005434a0
        ;   XREF to: 005434a0 (CONDITIONAL_JUMP)
    MOV ECX,0x63de4b                    ; 0054347d | = "..\\core\\netgame.cpp" | s_core_netgame_cpp_0063de4b = ..\core\netgame.cpp
    MOV EDI,0x93b                       ; 00543482
    PUSH 0x63de5f                       ; 00543487 | = "CNetGame::processServerFrame - player..." | s_CNetGame_processServerFr_0063de5f = CNetGame::processServerFrame - player is ahead of the server!?!!
    MOV dword ptr [0x02f0ca48],ECX      ; 0054348c | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00543492 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00543498 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054349d
    CMP EBP,0x5                         ; 005434a0
        ;   Label: LAB_005434a0
    JLE 0x005434aa                      ; 005434a3 | LAB_005434aa
        ;   XREF to: 005434aa (CONDITIONAL_JUMP)
    MOV EBP,0x5                         ; 005434a5
    MOV EAX,dword ptr [ESI + 0x48]      ; 005434aa
        ;   Label: LAB_005434aa
    MOV dword ptr [ESP + 0x70],EAX      ; 005434ad
    TEST EBP,EBP                        ; 005434b1
        ;   Label: LAB_005434b1
    JLE 0x00543374                      ; 005434b3 | LAB_00543374
        ;   XREF to: 00543374 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x70]      ; 005434b9
    MOV ESI,dword ptr [0x02f9c0c0]      ; 005434bd | int g_SimFrameCount
    XOR EDX,EDX                         ; 005434c3
    TEST ESI,ESI                        ; 005434c5
    JLE 0x00543564                      ; 005434c7 | LAB_00543564
        ;   XREF to: 00543564 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005434cd
    IMUL ESI,ESI,0x64                   ; 005434cf
    CMP ECX,dword ptr [EAX + 0x2f9c0c4] ; 005434d2 | undefined4 g_SimFrameHistory | DAT_02f9c128
        ;   Label: LAB_005434d2
    JNZ 0x00543558                      ; 005434d8 | LAB_00543558
        ;   XREF to: 00543558 (CONDITIONAL_JUMP)
    MOV ESI,EDX                         ; 005434de
        ;   Label: LAB_005434de
    TEST EDX,EDX                        ; 005434e0
    JL 0x0054356e                       ; 005434e2 | LAB_0054356e
        ;   XREF to: 0054356e (CONDITIONAL_JUMP)
    IMUL EDX,ESI,0x64                   ; 005434e8
        ;   Label: LAB_005434e8
    MOV ECX,0x69                        ; 005434eb
    MOV AH,0xf                          ; 005434f0
    ADD EDX,0x2f9c0c4                   ; 005434f2 | undefined4 g_SimFrameHistory
    MOV dword ptr [ESP],ECX             ; 005434f8
    MOV byte ptr [ESP + 0x4],AH         ; 005434fb
    MOV EAX,dword ptr [EDX]             ; 005434ff | undefined4 g_SimFrameHistory | DAT_02f9c060 | DAT_02f9c128
    MOV dword ptr [ESP + 0x5],EAX       ; 00543501
    MOV EAX,dword ptr [EDX + 0x4]       ; 00543505 | undefined4 DAT_02f9c0c8 | DAT_02f9c064 | DAT_02f9c12c
    MOV dword ptr [ESP + 0x9],EAX       ; 00543508
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054350c | undefined4 DAT_02f9c0cc | DAT_02f9c068 | DAT_02f9c130
    MOV dword ptr [ESP + 0xd],EAX       ; 0054350f
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00543513
    XOR EAX,EAX                         ; 00543516
    TEST ESI,ESI                        ; 00543518
    JLE 0x00543538                      ; 0054351a | LAB_00543538
        ;   XREF to: 00543538 (CONDITIONAL_JUMP)
    IMUL ESI,EAX,0x2c                   ; 0054351c
        ;   Label: LAB_0054351c
    MOV ECX,0xb                         ; 0054351f
    LEA EDI,[ESP + ESI*0x1 + 0x11]      ; 00543524
    LEA ESI,[EDX + 0xc]                 ; 00543528 | undefined4 DAT_02f9c0d0
    MOVSD.REP ES:EDI,ESI                ; 0054352b | undefined4 DAT_02f9c0d0 | DAT_02f9c0d4 | DAT_02f9c0fc
    INC EAX                             ; 0054352d
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0054352e
    ADD EDX,0x2c                        ; 00543531 | DAT_02f9c0f0
    CMP EAX,EDI                         ; 00543534
    JL 0x0054351c                       ; 00543536 | LAB_0054351c
        ;   XREF to: 0054351c (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00543538
        ;   Label: LAB_00543538
    PUSH EAX                            ; 0054353a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0054353b
    PUSH EAX                            ; 0054353f
    PUSH EBX                            ; 00543540
    CALL core_netgame.cpp_CNetGame_send_FUN_005411c0 ; 00543541 | undefined core_netgame.cpp_CNetGame_send_FUN_005411c0()
        ;   XREF to: 005411c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00543546
    MOV EDX,dword ptr [ESP + 0x70]      ; 00543549
    INC EDX                             ; 0054354d
    DEC EBP                             ; 0054354e
    MOV dword ptr [ESP + 0x70],EDX      ; 0054354f
    JMP 0x005434b1                      ; 00543553 | LAB_005434b1
        ;   XREF to: 005434b1 (UNCONDITIONAL_JUMP)
    ADD EAX,0x64                        ; 00543558
        ;   Label: LAB_00543558
    INC EDX                             ; 0054355b
    CMP EAX,ESI                         ; 0054355c
    JL 0x005434d2                       ; 0054355e | LAB_005434d2
        ;   XREF to: 005434d2 (CONDITIONAL_JUMP)
    MOV EDX,0xffffffff                  ; 00543564
        ;   Label: LAB_00543564
    JMP 0x005434de                      ; 00543569 | LAB_005434de
        ;   XREF to: 005434de (UNCONDITIONAL_JUMP)
    MOV EAX,0x63dea0                    ; 0054356e | = "..\\core\\netgame.cpp" | s_core_netgame_cpp_0063dea0 = ..\core\netgame.cpp
        ;   Label: LAB_0054356e
    MOV EDX,0x94d                       ; 00543573
    PUSH 0x63deb4                       ; 00543578 | = "CNetGame::processServerFrame - client..." | s_CNetGame_processServerFr_0063deb4 = CNetGame::processServerFrame - client needs frame, but we don't have it in history!
    MOV [0x02f0ca48],EAX                ; 0054357d | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00543582 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00543588 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054358d
    JMP 0x005434e8                      ; 00543590 | LAB_005434e8
        ;   XREF to: 005434e8 (UNCONDITIONAL_JUMP)

