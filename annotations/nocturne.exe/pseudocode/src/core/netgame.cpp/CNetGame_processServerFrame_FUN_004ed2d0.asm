; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x90]:4  local_90
; undefined1       Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x8b]:4  local_8b
; undefined4       Stack[-0x87]:4  local_87
; undefined4       Stack[-0x83]:4  local_83
; undefined        Stack[-0x7f]:1  local_7f
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049ccb4
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dda1
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058ba54
;   TerminatedCString s_allocSimFrame_sim_histor_0058ba68
;   TerminatedCString s_core_netgame_cpp_0058c583
;   TerminatedCString s_CNetGame_processServerFr_0058c597
;   TerminatedCString s_core_netgame_cpp_0058c5ce
;   TerminatedCString s_CNetGame_processServerFr_0058c5e2
;   TerminatedCString s_core_netgame_cpp_0058c628
;   TerminatedCString s_CNetGame_processServerFr_0058c63c
;   TerminatedCString s_core_netgame_cpp_0058c67d
;   TerminatedCString s_CNetGame_processServerFr_0058c691
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77850
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01cea3f4
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040dd20
;   core_main.c_FUN_004c8440
;   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_004ed980
;   core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740
;   core_netgame.cpp_CNetGame_send_FUN_004eb350
;   core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdlib.c_rand_FUN_0056488c
;   crt_string.c_memmove_FUN_00566170
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed2d0
        ;   Label: core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0
    PUSH ESI                            ; 004ed2d1
    PUSH EDI                            ; 004ed2d2
    PUSH EBP                            ; 004ed2d3
    SUB ESP,0x80                        ; 004ed2d4
    MOV EBX,dword ptr [ESP + 0x94]      ; 004ed2da
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004ed2e1
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,EAX                         ; 004ed2e6
    MOV ECX,0x12                        ; 004ed2e8
    SAR EDX,0x1f                        ; 004ed2ed
    IDIV ECX                            ; 004ed2f0
    MOV ECX,dword ptr [0x01cea3f4]      ; 004ed2f2 | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ed2f8
    SUB EAX,ECX                         ; 004ed2fa
    MOV dword ptr [0x01cea3f4],EDX      ; 004ed2fc | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ed302
    JL 0x004ed51a                       ; 004ed304
        ;   XREF to: 004ed51a (CONDITIONAL_JUMP)  ; LAB_004ed51a
    CMP EAX,0x20000                     ; 004ed30a
    JLE 0x004ed316                      ; 004ed30f
        ;   XREF to: 004ed316 (CONDITIONAL_JUMP)  ; LAB_004ed316
    MOV EAX,0x20000                     ; 004ed311
    MOV ESI,dword ptr [0x01cea3f8]      ; 004ed316 | DAT_01cea3f8
        ;   Label: LAB_004ed316
    ADD ESI,EAX                         ; 004ed31c
    MOV EDI,dword ptr [EBX]             ; 004ed31e
    MOV dword ptr [0x01cea3f8],ESI      ; 004ed320 | DAT_01cea3f8
    TEST EDI,EDI                        ; 004ed326
    JZ 0x004ed521                       ; 004ed328
        ;   XREF to: 004ed521 (CONDITIONAL_JUMP)  ; LAB_004ed521
    CMP EDI,0x1                         ; 004ed32e
    JNZ 0x004ed50f                      ; 004ed331
        ;   XREF to: 004ed50f (CONDITIONAL_JUMP)  ; LAB_004ed50f
    CMP dword ptr [EBX + 0x4],0x3       ; 004ed337
    JNZ 0x004ed50f                      ; 004ed33b
        ;   XREF to: 004ed50f (CONDITIONAL_JUMP)  ; LAB_004ed50f
    CMP dword ptr [EBX + 0x114],0x0     ; 004ed341
    JL 0x004ed540                       ; 004ed348
        ;   XREF to: 004ed540 (CONDITIONAL_JUMP)  ; LAB_004ed540
    MOV EDI,dword ptr [EBX + 0x114]     ; 004ed34e
        ;   Label: LAB_004ed34e
    CMP EDI,dword ptr [EBX + 0x110]     ; 004ed354
    JZ 0x004ed37e                       ; 004ed35a
        ;   XREF to: 004ed37e (CONDITIONAL_JUMP)  ; LAB_004ed37e
    MOV EBP,0x58c5ce                    ; 004ed35c | = "..\\core\\netgame.cpp"
    MOV EAX,0x8f7                       ; 004ed361
    PUSH 0x58c5e2                       ; 004ed366 | = "CNetGame::processServerFrame - I'm no..."
    MOV dword ptr [0x01cc4800],EBP      ; 004ed36b | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004ed371 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ed376
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ed37b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004ed37e
        ;   Label: LAB_004ed37e
    XOR ESI,ESI                         ; 004ed381
    TEST EDX,EDX                        ; 004ed383
    JLE 0x004ed3a0                      ; 004ed385
        ;   XREF to: 004ed3a0 (CONDITIONAL_JUMP)  ; LAB_004ed3a0
    PUSH 0x41200000                     ; 004ed387
        ;   Label: LAB_004ed387
    PUSH ESI                            ; 004ed38c
    PUSH EBX                            ; 004ed38d
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10 ; 004ed38e
        ;   XREF to: 004ebe10 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10(CNetGame * this_ptr, int player_index, float max_ping)
    INC ESI                             ; 004ed393
    MOV EDI,dword ptr [EBX + 0x1c]      ; 004ed394
    ADD ESP,0xc                         ; 004ed397
    CMP ESI,EDI                         ; 004ed39a
    JL 0x004ed387                       ; 004ed39c
        ;   XREF to: 004ed387 (CONDITIONAL_JUMP)  ; LAB_004ed387
    MOV EAX,EAX                         ; 004ed39e
    PUSH EBX                            ; 004ed3a0
        ;   Label: LAB_004ed3a0
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740 ; 004ed3a1
        ;   XREF to: 004ea740 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740(CNetGame * this_ptr)
    MOV EDX,0x7fffffff                  ; 004ed3a6
    ADD ESP,0x4                         ; 004ed3ab
    MOV EBP,dword ptr [EBX + 0x1c]      ; 004ed3ae
    XOR EAX,EAX                         ; 004ed3b1
    TEST EBP,EBP                        ; 004ed3b3
    JLE 0x004ed3cd                      ; 004ed3b5
        ;   XREF to: 004ed3cd (CONDITIONAL_JUMP)  ; LAB_004ed3cd
    MOV ESI,EBX                         ; 004ed3b7
    MOV EBP,dword ptr [ESI + 0x68]      ; 004ed3b9
        ;   Label: LAB_004ed3b9
    CMP EDX,EBP                         ; 004ed3bc
    JLE 0x004ed3c2                      ; 004ed3be
        ;   XREF to: 004ed3c2 (CONDITIONAL_JUMP)  ; LAB_004ed3c2
    MOV EDX,EBP                         ; 004ed3c0
    INC EAX                             ; 004ed3c2
        ;   Label: LAB_004ed3c2
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004ed3c3
    ADD ESI,0x78                        ; 004ed3c6
    CMP EAX,ECX                         ; 004ed3c9
    JL 0x004ed3b9                       ; 004ed3cb
        ;   XREF to: 004ed3b9 (CONDITIONAL_JUMP)  ; LAB_004ed3b9
    MOV EDI,dword ptr [0x01d09c00]      ; 004ed3cd | DAT_01d09c00
        ;   Label: LAB_004ed3cd
    MOV dword ptr [ESP + 0x78],EDX      ; 004ed3d3
    XOR ESI,ESI                         ; 004ed3d7
    TEST EDI,EDI                        ; 004ed3d9
    JLE 0x004ed421                      ; 004ed3db
        ;   XREF to: 004ed421 (CONDITIONAL_JUMP)  ; LAB_004ed421
    MOV EDI,0x1d09c04                   ; 004ed3dd
    XOR EBP,EBP                         ; 004ed3e2
    ADD EDI,0x64                        ; 004ed3e4
    MOV ECX,dword ptr [ESP + 0x78]      ; 004ed3e7
        ;   Label: LAB_004ed3e7
    CMP ECX,dword ptr [EBP + 0x1d09c04] ; 004ed3eb
    JLE 0x004ed568                      ; 004ed3f1
        ;   XREF to: 004ed568 (CONDITIONAL_JUMP)  ; LAB_004ed568
    MOV EAX,[0x01d09c00]                ; 004ed3f7 | DAT_01d09c00
    DEC EAX                             ; 004ed3fc
    MOV [0x01d09c00],EAX                ; 004ed3fd | DAT_01d09c00
    SUB EAX,ESI                         ; 004ed402
    IMUL EAX,EAX,0x64                   ; 004ed404
    PUSH EAX                            ; 004ed407
    MOV EAX,0x1d09c04                   ; 004ed408
    PUSH EDI                            ; 004ed40d | DAT_01d09c68
    ADD EAX,EBP                         ; 004ed40e
    PUSH EAX                            ; 004ed410
    CALL crt_string.c_memmove_FUN_00566170 ; 004ed411
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ed416
    CMP ESI,dword ptr [0x01d09c00]      ; 004ed419 | DAT_01d09c00
        ;   Label: LAB_004ed419
    JL 0x004ed3e7                       ; 004ed41f
        ;   XREF to: 004ed3e7 (CONDITIONAL_JUMP)  ; LAB_004ed3e7
    MOV EAX,dword ptr [EBX + 0x114]     ; 004ed421
        ;   Label: LAB_004ed421
    SHL EAX,0x3                         ; 004ed427
    MOV EDX,EAX                         ; 004ed42a
    SHL EAX,0x4                         ; 004ed42c
    SUB EAX,EDX                         ; 004ed42f
    LEA ESI,[EBX + EAX*0x1]             ; 004ed431
    XOR EDI,EDI                         ; 004ed434
    MOV ESI,dword ptr [ESI + 0x68]      ; 004ed436
    MOV EDX,dword ptr [0x01d09c00]      ; 004ed439 | DAT_01d09c00
    MOV EBP,ESI                         ; 004ed43f
    TEST EDX,EDX                        ; 004ed441
    JLE 0x004ed580                      ; 004ed443
        ;   XREF to: 004ed580 (CONDITIONAL_JUMP)  ; LAB_004ed580
    MOV ECX,EDX                         ; 004ed449
    SHL EDX,0x2                         ; 004ed44b
    SUB EDX,ECX                         ; 004ed44e
    SHL EDX,0x3                         ; 004ed450
    ADD EDX,ECX                         ; 004ed453
    XOR EAX,EAX                         ; 004ed455
    SHL EDX,0x2                         ; 004ed457
    CMP EBP,dword ptr [EAX + 0x1d09c04] ; 004ed45a | DAT_01d09c68
        ;   Label: LAB_004ed45a
    JNZ 0x004ed574                      ; 004ed460
        ;   XREF to: 004ed574 (CONDITIONAL_JUMP)  ; LAB_004ed574
    TEST EDI,EDI                        ; 004ed466
    JL 0x004ed580                       ; 004ed468
        ;   XREF to: 004ed580 (CONDITIONAL_JUMP)  ; LAB_004ed580
    MOV EBP,0x1d09c04                   ; 004ed46e
    ADD EBP,EAX                         ; 004ed473
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004ed475
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
        ;   Label: LAB_004ed475
    MOV dword ptr [EBP + 0x4],EAX       ; 004ed47a
    MOV EAX,[0x005b9354]                ; 004ed47d | DAT_005b9354
    MOV dword ptr [ESP + 0x74],EBP      ; 004ed482
    MOV EDX,dword ptr [EAX + 0x264]     ; 004ed486 | DAT_01c77850
    MOV dword ptr [EBP + 0x8],EDX       ; 004ed48c
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004ed48f
    XOR EAX,EAX                         ; 004ed492
    TEST ECX,ECX                        ; 004ed494
    JLE 0x004ed4c0                      ; 004ed496
        ;   XREF to: 004ed4c0 (CONDITIONAL_JUMP)  ; LAB_004ed4c0
    MOV EDX,EBX                         ; 004ed498
    MOV ECX,0xb                         ; 004ed49a
        ;   Label: LAB_004ed49a
    LEA EDI,[EBP + 0xc]                 ; 004ed49f
    LEA ESI,[EDX + 0x6c]                ; 004ed4a2
    ADD EBP,0x2c                        ; 004ed4a5
    MOVSD.REP ES:EDI,ESI                ; 004ed4a8
    INC EAX                             ; 004ed4aa
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004ed4ab
    ADD EDX,0x78                        ; 004ed4ae
    CMP EAX,ESI                         ; 004ed4b1
    JL 0x004ed49a                       ; 004ed4b3
        ;   XREF to: 004ed49a (CONDITIONAL_JUMP)  ; LAB_004ed49a
    LEA EAX,[EAX]                       ; 004ed4b5
    LEA EDX,[EDX]                       ; 004ed4bb
    MOV EBX,EBX                         ; 004ed4be
    MOV EDI,dword ptr [ESP + 0x74]      ; 004ed4c0
        ;   Label: LAB_004ed4c0
    PUSH EDI                            ; 004ed4c4
    PUSH EBX                            ; 004ed4c5
    XOR EBP,EBP                         ; 004ed4c6
    CALL core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_004ed980 ; 004ed4c8
        ;   XREF to: 004ed980 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_004ed980(CNetGame * this_ptr, SSimFrame * sim_frame)
    ADD ESP,0x8                         ; 004ed4cd
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004ed4d0
    MOV dword ptr [ESP + 0x6c],EBP      ; 004ed4d3
    TEST EAX,EAX                        ; 004ed4d7
    JLE 0x004ed50f                      ; 004ed4d9
        ;   XREF to: 004ed50f (CONDITIONAL_JUMP)  ; LAB_004ed50f
    LEA EAX,[EBX + 0x20]                ; 004ed4db
    MOV dword ptr [ESP + 0x7c],EAX      ; 004ed4de
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004ed4e2
        ;   Label: LAB_004ed4e2
    MOV EDI,dword ptr [EBX + 0x114]     ; 004ed4e6
    CMP EAX,EDI                         ; 004ed4ec
    JNZ 0x004ed5e8                      ; 004ed4ee
        ;   XREF to: 004ed5e8 (CONDITIONAL_JUMP)  ; LAB_004ed5e8
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004ed4f4
        ;   Label: LAB_004ed4f4
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004ed4f8
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004ed4fc
    ADD EDX,0x78                        ; 004ed4ff
    INC ECX                             ; 004ed502
    MOV dword ptr [ESP + 0x7c],EDX      ; 004ed503
    MOV dword ptr [ESP + 0x6c],ECX      ; 004ed507
    CMP ECX,ESI                         ; 004ed50b
    JL 0x004ed4e2                       ; 004ed50d
        ;   XREF to: 004ed4e2 (CONDITIONAL_JUMP)  ; LAB_004ed4e2
    ADD ESP,0x80                        ; 004ed50f
        ;   Label: LAB_004ed50f
    POP EBP                             ; 004ed515
    POP EDI                             ; 004ed516
    POP ESI                             ; 004ed517
    POP EBX                             ; 004ed518
    RET                                 ; 004ed519
    XOR EAX,EAX                         ; 004ed51a
        ;   Label: LAB_004ed51a
    JMP 0x004ed316                      ; 004ed51c
        ;   XREF to: 004ed316 (UNCONDITIONAL_JUMP)  ; LAB_004ed316
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004ed521
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
        ;   Label: LAB_004ed521
    PUSH EAX                            ; 004ed526
    MOV dword ptr [EBX + 0x16c],EAX     ; 004ed527
    CALL core_actor.cpp_setRandomSeed_FUN_0040dd20 ; 004ed52d
        ;   XREF to: 0040dd20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040dd20(uint seed_value)
    ADD ESP,0x4                         ; 004ed532
    ADD ESP,0x80                        ; 004ed535
    POP EBP                             ; 004ed53b
    POP EDI                             ; 004ed53c
    POP ESI                             ; 004ed53d
    POP EBX                             ; 004ed53e
    RET                                 ; 004ed53f
    MOV ECX,0x58c583                    ; 004ed540 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004ed540
    MOV ESI,0x8f6                       ; 004ed545
    PUSH 0x58c597                       ; 004ed54a | = "CNetGame::processServerFrame - I'm no..."
    MOV dword ptr [0x01cc4800],ECX      ; 004ed54f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004ed555 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ed55b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ed560
    JMP 0x004ed34e                      ; 004ed563
        ;   XREF to: 004ed34e (UNCONDITIONAL_JUMP)  ; LAB_004ed34e
    ADD EDI,0x64                        ; 004ed568
        ;   Label: LAB_004ed568
    INC ESI                             ; 004ed56b
    ADD EBP,0x64                        ; 004ed56c
    JMP 0x004ed419                      ; 004ed56f
        ;   XREF to: 004ed419 (UNCONDITIONAL_JUMP)  ; LAB_004ed419
    ADD EAX,0x64                        ; 004ed574
        ;   Label: LAB_004ed574
    INC EDI                             ; 004ed577
    CMP EAX,EDX                         ; 004ed578
    JL 0x004ed45a                       ; 004ed57a
        ;   XREF to: 004ed45a (CONDITIONAL_JUMP)  ; LAB_004ed45a
    CMP dword ptr [0x01d09c00],0x200    ; 004ed580 | DAT_01d09c00
        ;   Label: LAB_004ed580
    JL 0x004ed5ae                       ; 004ed58a
        ;   XREF to: 004ed5ae (CONDITIONAL_JUMP)  ; LAB_004ed5ae
    MOV EBP,0x58ba54                    ; 004ed58c | = "..\\core\\netgame.cpp"
    MOV EAX,0x12b                       ; 004ed591
    PUSH 0x58ba68                       ; 004ed596 | = "allocSimFrame - sim history list full"
    MOV dword ptr [0x01cc4800],EBP      ; 004ed59b | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004ed5a1 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ed5a6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ed5ab
    MOV EDX,dword ptr [0x01d09c00]      ; 004ed5ae | DAT_01d09c00
        ;   Label: LAB_004ed5ae
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ed5b4
    SUB EAX,EDX                         ; 004ed5bb
    SHL EAX,0x3                         ; 004ed5bd
    MOV EBP,0x1d09c04                   ; 004ed5c0
    ADD EAX,EDX                         ; 004ed5c5
    PUSH 0x64                           ; 004ed5c7
    SHL EAX,0x2                         ; 004ed5c9
    PUSH 0x0                            ; 004ed5cc
    ADD EBP,EAX                         ; 004ed5ce
    INC EDX                             ; 004ed5d0
    PUSH EBP                            ; 004ed5d1
    MOV dword ptr [0x01d09c00],EDX      ; 004ed5d2 | DAT_01d09c00
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004ed5d8
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004ed5dd
    MOV dword ptr [EBP],ESI             ; 004ed5e0
    JMP 0x004ed475                      ; 004ed5e3
        ;   XREF to: 004ed475 (UNCONDITIONAL_JUMP)  ; LAB_004ed475
    IMUL EBP,EDI,0x78                   ; 004ed5e8
        ;   Label: LAB_004ed5e8
    MOV ESI,dword ptr [ESP + 0x7c]      ; 004ed5eb
    MOV EDX,dword ptr [ESI + 0x48]      ; 004ed5ef
    MOV EBP,dword ptr [EBX + EBP*0x1 + 0x68] ; 004ed5f2
    SUB EBP,EDX                         ; 004ed5f6
    CMP EBP,0x1                         ; 004ed5f8
    JGE 0x004ed620                      ; 004ed5fb
        ;   XREF to: 004ed620 (CONDITIONAL_JUMP)  ; LAB_004ed620
    MOV ECX,0x58c628                    ; 004ed5fd | = "..\\core\\netgame.cpp"
    MOV EDI,0x93b                       ; 004ed602
    PUSH 0x58c63c                       ; 004ed607 | = "CNetGame::processServerFrame - player..."
    MOV dword ptr [0x01cc4800],ECX      ; 004ed60c | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004ed612 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ed618
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ed61d
    CMP EBP,0x5                         ; 004ed620
        ;   Label: LAB_004ed620
    JLE 0x004ed62a                      ; 004ed623
        ;   XREF to: 004ed62a (CONDITIONAL_JUMP)  ; LAB_004ed62a
    MOV EBP,0x5                         ; 004ed625
    MOV EAX,dword ptr [ESI + 0x48]      ; 004ed62a
        ;   Label: LAB_004ed62a
    MOV dword ptr [ESP + 0x70],EAX      ; 004ed62d
    TEST EBP,EBP                        ; 004ed631
        ;   Label: LAB_004ed631
    JLE 0x004ed4f4                      ; 004ed633
        ;   XREF to: 004ed4f4 (CONDITIONAL_JUMP)  ; LAB_004ed4f4
    MOV ECX,dword ptr [ESP + 0x70]      ; 004ed639
    MOV ESI,dword ptr [0x01d09c00]      ; 004ed63d | DAT_01d09c00
    XOR EDX,EDX                         ; 004ed643
    TEST ESI,ESI                        ; 004ed645
    JLE 0x004ed6e4                      ; 004ed647
        ;   XREF to: 004ed6e4 (CONDITIONAL_JUMP)  ; LAB_004ed6e4
    XOR EAX,EAX                         ; 004ed64d
    IMUL ESI,ESI,0x64                   ; 004ed64f
    CMP ECX,dword ptr [EAX + 0x1d09c04] ; 004ed652
        ;   Label: LAB_004ed652
    JNZ 0x004ed6d8                      ; 004ed658
        ;   XREF to: 004ed6d8 (CONDITIONAL_JUMP)  ; LAB_004ed6d8
    MOV ESI,EDX                         ; 004ed65e
        ;   Label: LAB_004ed65e
    TEST EDX,EDX                        ; 004ed660
    JL 0x004ed6ee                       ; 004ed662
        ;   XREF to: 004ed6ee (CONDITIONAL_JUMP)  ; LAB_004ed6ee
    IMUL EDX,ESI,0x64                   ; 004ed668
        ;   Label: LAB_004ed668
    MOV ECX,0x69                        ; 004ed66b
    MOV AH,0xf                          ; 004ed670
    ADD EDX,0x1d09c04                   ; 004ed672
    MOV dword ptr [ESP],ECX             ; 004ed678
    MOV byte ptr [ESP + 0x4],AH         ; 004ed67b
    MOV EAX,dword ptr [EDX]             ; 004ed67f | DAT_01d09ba0 | DAT_01d09c68
    MOV dword ptr [ESP + 0x5],EAX       ; 004ed681
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ed685 | DAT_01d09ba4 | DAT_01d09c6c
    MOV dword ptr [ESP + 0x9],EAX       ; 004ed688
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ed68c | DAT_01d09ba8 | DAT_01d09c70
    MOV dword ptr [ESP + 0xd],EAX       ; 004ed68f
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004ed693
    XOR EAX,EAX                         ; 004ed696
    TEST ESI,ESI                        ; 004ed698
    JLE 0x004ed6b8                      ; 004ed69a
        ;   XREF to: 004ed6b8 (CONDITIONAL_JUMP)  ; LAB_004ed6b8
    IMUL ESI,EAX,0x2c                   ; 004ed69c
        ;   Label: LAB_004ed69c
    MOV ECX,0xb                         ; 004ed69f
    LEA EDI,[ESP + ESI*0x1 + 0x11]      ; 004ed6a4
    LEA ESI,[EDX + 0xc]                 ; 004ed6a8
    MOVSD.REP ES:EDI,ESI                ; 004ed6ab
    INC EAX                             ; 004ed6ad
    MOV EDI,dword ptr [EBX + 0x1c]      ; 004ed6ae
    ADD EDX,0x2c                        ; 004ed6b1
    CMP EAX,EDI                         ; 004ed6b4
    JL 0x004ed69c                       ; 004ed6b6
        ;   XREF to: 004ed69c (CONDITIONAL_JUMP)  ; LAB_004ed69c
    MOV EAX,ESP                         ; 004ed6b8
        ;   Label: LAB_004ed6b8
    PUSH EAX                            ; 004ed6ba
    MOV EAX,dword ptr [ESP + 0x70]      ; 004ed6bb
    PUSH EAX                            ; 004ed6bf
    PUSH EBX                            ; 004ed6c0
    CALL core_netgame.cpp_CNetGame_send_FUN_004eb350 ; 004ed6c1
        ;   XREF to: 004eb350 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_004eb350(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 004ed6c6
    MOV EDX,dword ptr [ESP + 0x70]      ; 004ed6c9
    INC EDX                             ; 004ed6cd
    DEC EBP                             ; 004ed6ce
    MOV dword ptr [ESP + 0x70],EDX      ; 004ed6cf
    JMP 0x004ed631                      ; 004ed6d3
        ;   XREF to: 004ed631 (UNCONDITIONAL_JUMP)  ; LAB_004ed631
    ADD EAX,0x64                        ; 004ed6d8
        ;   Label: LAB_004ed6d8
    INC EDX                             ; 004ed6db
    CMP EAX,ESI                         ; 004ed6dc
    JL 0x004ed652                       ; 004ed6de
        ;   XREF to: 004ed652 (CONDITIONAL_JUMP)  ; LAB_004ed652
    MOV EDX,0xffffffff                  ; 004ed6e4
        ;   Label: LAB_004ed6e4
    JMP 0x004ed65e                      ; 004ed6e9
        ;   XREF to: 004ed65e (UNCONDITIONAL_JUMP)  ; LAB_004ed65e
    MOV EAX,0x58c67d                    ; 004ed6ee | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004ed6ee
    MOV EDX,0x94d                       ; 004ed6f3
    PUSH 0x58c691                       ; 004ed6f8 | = "CNetGame::processServerFrame - client..."
    MOV [0x01cc4800],EAX                ; 004ed6fd | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004ed702 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ed708
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ed70d
    JMP 0x004ed668                      ; 004ed710
        ;   XREF to: 004ed668 (UNCONDITIONAL_JUMP)  ; LAB_004ed668

