; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_run_FUN_00524420(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e1b80
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e2058
;   core_game.cpp_hostNetworkGame_FUN_004e2f10 at 004e2f77
;   core_game.cpp_joinNetworkGame_FUN_004e2fc0 at 004e3044
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_006392aa
;   TerminatedCString s_CDemonMission_run_hero_l_006392be
;   TerminatedCString s_core_mission_cpp_006392e3
;   TerminatedCString s_CDemonMission_run_no_gLo_006392f7
;   TerminatedCString s_hq_geo_0063931a
;   TerminatedCString s_Press_any_key_to_continu_00639321
;   CGame* g_CGamePtr = 02d81a9c
;   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CBitFont* g_ThemeFont
;   CGame g_CGameInstance
;   undefined4 DAT_02d81cf4
;   int g_HeroCount
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   ... and 5 more
;
; Called Functions:
;   core_game.cpp_CGame_displayActStats_FUN_004e3800
;   core_game.cpp_CGame_finishAct_FUN_004e3b90
;   core_game.cpp_CGame_runGameSession_FUN_004daf80
;   core_level.cpp_CLevelLoader_show_FUN_00503dc0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
;   core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
;   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
;   core_mission.cpp_CDemonMission_FUN_00524760
;   core_mission.cpp_CDemonMission_load_FUN_00522d90
;   core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0
;   core_mission.cpp_CDemonMission_removeActor_FUN_00523f20
;   core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524420
        ;   Label: core_mission.cpp_CDemonMission_run_FUN_00524420
    PUSH ESI                            ; 00524421
    PUSH EDI                            ; 00524422
    PUSH EBP                            ; 00524423
    MOV EBX,dword ptr [ESP + 0x14]      ; 00524424
    MOV EBP,0x1                         ; 00524428
    CMP EBP,dword ptr [0x02db87bc]      ; 0052442d | g_HeroCount
        ;   Label: LAB_0052442d
    JG 0x00524505                       ; 00524433
        ;   XREF to: 00524505 (CONDITIONAL_JUMP)  ; LAB_00524505
    MOV EAX,[0x02db87d0]                ; 00524439 | g_LocalHeroIndex
        ;   Label: LAB_00524439
    CMP dword ptr [EAX*0x4 + 0x2db87c0],0x0 ; 0052443e | g_HeroActors
    JNZ 0x0052446a                      ; 00524446
        ;   XREF to: 0052446a (CONDITIONAL_JUMP)  ; LAB_0052446a
    MOV EAX,0x6392e3                    ; 00524448 | = "..\\core\\mission.cpp"
    MOV EDX,0x4c6                       ; 0052444d
    PUSH 0x6392f7                       ; 00524452 | = "CDemonMission::run - no gLocalHero"
    MOV [0x02f0ca48],EAX                ; 00524457 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0052445c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00524462
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00524467
    MOV EAX,[0x02db87d0]                ; 0052446a | g_LocalHeroIndex
        ;   Label: LAB_0052446a
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0052446f | g_HeroActors
    MOV ECX,dword ptr [EAX + 0x2c]      ; 00524476
    PUSH ECX                            ; 00524479
    PUSH EBX                            ; 0052447a
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0 ; 0052447b
        ;   XREF to: 00523fb0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0(CDemonMission * this_ptr, int set_index)
    ADD ESP,0x8                         ; 00524480
    XOR AH,AH                           ; 00524483
    PUSH EBX                            ; 00524485
    MOV byte ptr [0x02f35f10],AH        ; 00524486 | g_PendingMissionName
    CALL core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120 ; 0052448c
        ;   XREF to: 00524120 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00524491
    MOV ESI,dword ptr [0x0067b654]      ; 00524494 | g_CGamePtr
    PUSH ESI                            ; 0052449a | g_CGameInstance
    CALL core_game.cpp_CGame_runGameSession_FUN_004daf80 ; 0052449b
        ;   XREF to: 004daf80 (UNCONDITIONAL_CALL)  ; int core_game.cpp_CGame_runGameSession_FUN_004daf80(CGame * this_ptr)
    MOV ESI,dword ptr [0x02db87d0]      ; 005244a0 | g_LocalHeroIndex
    ADD ESP,0x4                         ; 005244a6
    MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0] ; 005244a9 | g_HeroActors
    PUSH ESI                            ; 005244b0
    PUSH EBX                            ; 005244b1
    MOV EDI,EAX                         ; 005244b2
    CALL core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0 ; 005244b4
        ;   XREF to: 00523be0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0(CDemonMission * this_ptr, CDemonActor * actor_ptr)
    ADD ESP,0x8                         ; 005244b9
    MOV EAX,dword ptr [ESI + 0x154]     ; 005244bc
    PUSH ESI                            ; 005244c2
    CALL dword ptr [EAX + 0x160]        ; 005244c3
    ADD ESP,0x4                         ; 005244c9
    PUSH EBX                            ; 005244cc
    CALL core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30 ; 005244cd
        ;   XREF to: 00522d30 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 005244d2
    TEST EDI,EDI                        ; 005244d5
    JZ 0x005244e2                       ; 005244d7
        ;   XREF to: 005244e2 (CONDITIONAL_JUMP)  ; LAB_005244e2
    CMP byte ptr [0x02f35f10],0x0       ; 005244d9 | g_PendingMissionName
    JNZ 0x0052452d                      ; 005244e0
        ;   XREF to: 0052452d (CONDITIONAL_JUMP)  ; LAB_0052452d
    PUSH 0x1                            ; 005244e2
        ;   Label: LAB_005244e2
    PUSH ESI                            ; 005244e4
    PUSH EBX                            ; 005244e5
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_00523f20 ; 005244e6
        ;   XREF to: 00523f20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_00523f20(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    ADD ESP,0xc                         ; 005244eb
    MOV EAX,[0x0067b654]                ; 005244ee | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_005244ee
    CMP dword ptr [EAX + 0x258],0x0     ; 005244f3 | DAT_02d81cf4
    JNZ 0x00524616                      ; 005244fa
        ;   XREF to: 00524616 (CONDITIONAL_JUMP)  ; LAB_00524616
    POP EBP                             ; 00524500
    POP EDI                             ; 00524501
    POP ESI                             ; 00524502
    POP EBX                             ; 00524503
    RET                                 ; 00524504
    MOV ECX,0x6392aa                    ; 00524505 | = "..\\core\\mission.cpp"
        ;   Label: LAB_00524505
    MOV ESI,0x4c5                       ; 0052450a
    PUSH 0x6392be                       ; 0052450f | = "CDemonMission::run - hero list empty"
    MOV dword ptr [0x02f0ca48],ECX      ; 00524514 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0052451a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00524520
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00524525
    JMP 0x00524439                      ; 00524528
        ;   XREF to: 00524439 (UNCONDITIONAL_JUMP)  ; LAB_00524439
    MOV EAX,[0x006810c8]                ; 0052452d | g_CDemonSetPtr
        ;   Label: LAB_0052452d
    PUSH 0x63931a                       ; 00524532 | = "hq.geo"
    ADD EAX,0x14d0f0                    ; 00524537
    PUSH EAX                            ; 0052453c | DAT_03261368
    XOR EDI,EDI                         ; 0052453d
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0052453f
        ;   XREF to: 006020fc (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00524544
    TEST EAX,EAX                        ; 00524547
    JNZ 0x005245f7                      ; 00524549
        ;   XREF to: 005245f7 (CONDITIONAL_JUMP)  ; LAB_005245f7
    PUSH EBP                            ; 0052454f
    PUSH EAX                            ; 00524550
    PUSH 0x9                            ; 00524551
    MOV ECX,dword ptr [0x0067cf80]      ; 00524553 | g_CLevelLoaderInstance | g_CLevelLoaderPtr
    PUSH ECX                            ; 00524559 | g_CLevelLoaderInstance
    MOV EDI,EBP                         ; 0052455a
    CALL core_level.cpp_CLevelLoader_show_FUN_00503dc0 ; 0052455c
        ;   XREF to: 00503dc0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_show_FUN_00503dc0(CLevelLoader * this_ptr, int total_frames, int use_custom_viewport, int image_variant)
        ;   Label: LAB_0052455c
    ADD ESP,0x10                        ; 00524561
    PUSH 0x0                            ; 00524564
    PUSH 0x2f35f10                      ; 00524566 | g_PendingMissionName
    PUSH EBX                            ; 0052456b
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 0052456c
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 00524571
    PUSH ESI                            ; 00524574
    PUSH EBX                            ; 00524575
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 ; 00524576
        ;   XREF to: 00524a80 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission * this_ptr, int creation_flags)
    ADD ESP,0x8                         ; 0052457b
    TEST EAX,EAX                        ; 0052457e
    JZ 0x005244ee                       ; 00524580
        ;   XREF to: 005244ee (CONDITIONAL_JUMP)  ; LAB_005244ee
    PUSH EBX                            ; 00524586
    CALL core_mission.cpp_CDemonMission_FUN_00524760 ; 00524587
        ;   XREF to: 00524760 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_FUN_00524760(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0052458c
    TEST EAX,EAX                        ; 0052458f
    JZ 0x005244ee                       ; 00524591
        ;   XREF to: 005244ee (CONDITIONAL_JUMP)  ; LAB_005244ee
    TEST EDI,EDI                        ; 00524597
    JNZ 0x0052442d                      ; 00524599
        ;   XREF to: 0052442d (CONDITIONAL_JUMP)  ; LAB_0052442d
    PUSH 0x639321                       ; 0052459f | = "Press any key to continue..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005245a4
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 005245a9
    PUSH EAX                            ; 005245ac
    PUSH EDI                            ; 005245ad
    PUSH 0xf8                           ; 005245ae
    PUSH 0x58                           ; 005245b3
    MOV ESI,dword ptr [0x020a5720]      ; 005245b5 | g_ThemeFont
    PUSH ESI                            ; 005245bb
    MOV ESI,0x1df                       ; 005245bc
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 005245c1
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    SUB ESI,EAX                         ; 005245c6
    ADD ESP,0x8                         ; 005245c8
    LEA EAX,[ESI + -0x4]                ; 005245cb
    PUSH EAX                            ; 005245ce
    PUSH 0x27f                          ; 005245cf
    MOV EDI,dword ptr [0x020a5720]      ; 005245d4 | g_ThemeFont
    PUSH EDI                            ; 005245da
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0 ; 005245db
        ;   XREF to: 004cdce0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 005245e0
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005245e3
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005245e8
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 005245ed
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x0052442d                      ; 005245f2
        ;   XREF to: 0052442d (UNCONDITIONAL_JUMP)  ; LAB_0052442d
    MOV EAX,[0x0067b654]                ; 005245f7 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_005245f7
    PUSH EAX                            ; 005245fc | g_CGameInstance
    CALL core_game.cpp_CGame_displayActStats_FUN_004e3800 ; 005245fd
        ;   XREF to: 004e3800 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayActStats_FUN_004e3800(CGame * this_ptr)
    ADD ESP,0x4                         ; 00524602
    PUSH -0x1                           ; 00524605
    PUSH EBP                            ; 00524607
    PUSH 0x9                            ; 00524608
    MOV EDX,dword ptr [0x0067cf80]      ; 0052460a | g_CLevelLoaderInstance | g_CLevelLoaderPtr
    PUSH EDX                            ; 00524610 | g_CLevelLoaderInstance
    JMP 0x0052455c                      ; 00524611
        ;   XREF to: 0052455c (UNCONDITIONAL_JUMP)  ; LAB_0052455c
    PUSH EAX                            ; 00524616 | g_CGameInstance
        ;   Label: LAB_00524616
    CALL core_game.cpp_CGame_finishAct_FUN_004e3b90 ; 00524617
        ;   XREF to: 004e3b90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_finishAct_FUN_004e3b90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0052461c
    POP EBP                             ; 0052461f
    POP EDI                             ; 00524620
    POP ESI                             ; 00524621
    POP EBX                             ; 00524622
    RET                                 ; 00524623

