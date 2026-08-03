; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_run_FUN_004d9440(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_FUN_004a4170 at 004a4a34
;   core_game.cpp_FUN_004a4b50 at 004a4ece
;   core_game.cpp_joinNetworkGame_FUN_004a5e40 at 004a5ec4
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00589dcb
;   TerminatedCString s_CDemonMission_run_hero_l_00589ddf
;   TerminatedCString s_core_mission_cpp_00589e04
;   TerminatedCString s_CDemonMission_run_no_gLo_00589e18
;   TerminatedCString s_hq_geo_00589e3b
;   TerminatedCString s_Press_any_key_to_continu_00589e42
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CLevelLoader* g_CLevelLoader_PTR_005baca0 = 01cc3160
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CBitFont* g_CBitFont_PTR_014b9900
;   CGame g_CGame_01c775ec
;   undefined4 g_CGame_01c775ec.act_completion_state
;   undefined4 DAT_01cae0d4
;   undefined4 DAT_01cae0e8
;   char* g_CHAR_PTR_01cc4800
;   ... and 2 more
;
; Called Functions:
;   core_game.cpp_CGame_displayActStats_FUN_004a6680
;   core_game.cpp_CGame_finishAct_FUN_004a6a10
;   core_game.cpp_CGame_runGameSession_FUN_0049da10
;   core_level.cpp_CLevelLoader_show_FUN_004c5640
;   core_main.c_FUN_004c8440
;   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180
;   core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80
;   core_mission.cpp_CDemonMission_load_FUN_004d7ee0
;   core_mission.cpp_CDemonMission_loadSet_FUN_004d9020
;   core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90
;   core_mission.cpp_CDemonMission_startMission_FUN_004d9780
;   core_mission.cpp_FUN_004d7ea0
;   core_mission.cpp_FUN_004d8cd0
;   crt_string.c__stricmp_FUN_00566fb0
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9440
        ;   Label: core_mission.cpp_CDemonMission_run_FUN_004d9440
    PUSH ESI                            ; 004d9441
    PUSH EDI                            ; 004d9442
    PUSH EBP                            ; 004d9443
    MOV EBX,dword ptr [ESP + 0x14]      ; 004d9444
    MOV EBP,0x1                         ; 004d9448
    CMP EBP,dword ptr [0x01cae0d4]      ; 004d944d | DAT_01cae0d4
        ;   Label: LAB_004d944d
    JG 0x004d9525                       ; 004d9453
        ;   XREF to: 004d9525 (CONDITIONAL_JUMP)  ; LAB_004d9525
    MOV EAX,[0x01cae0e8]                ; 004d9459 | DAT_01cae0e8
        ;   Label: LAB_004d9459
    CMP dword ptr [EAX*0x4 + 0x1cae0d8],0x0 ; 004d945e
    JNZ 0x004d948a                      ; 004d9466
        ;   XREF to: 004d948a (CONDITIONAL_JUMP)  ; LAB_004d948a
    MOV EAX,0x589e04                    ; 004d9468 | = "..\\core\\mission.cpp"
    MOV EDX,0x4c8                       ; 004d946d
    PUSH 0x589e18                       ; 004d9472 | = "CDemonMission::run - no gLocalHero"
    MOV [0x01cc4800],EAX                ; 004d9477 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004d947c | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d9482
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d9487
    MOV EAX,[0x01cae0e8]                ; 004d948a | DAT_01cae0e8
        ;   Label: LAB_004d948a
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d948f
    MOV ECX,dword ptr [EAX + 0x2c]      ; 004d9496
    PUSH ECX                            ; 004d9499
    PUSH EBX                            ; 004d949a
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_004d9020 ; 004d949b
        ;   XREF to: 004d9020 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_004d9020(CDemonMission * this_ptr, int set_index)
    ADD ESP,0x8                         ; 004d94a0
    XOR AH,AH                           ; 004d94a3
    PUSH EBX                            ; 004d94a5
    MOV byte ptr [0x01ccbbf0],AH        ; 004d94a6 | DAT_01ccbbf0
    CALL core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180 ; 004d94ac
        ;   XREF to: 004d9180 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004d94b1
    MOV ESI,dword ptr [0x005b9354]      ; 004d94b4 | g_CGame_PTR_005b9354
    PUSH ESI                            ; 004d94ba | g_CGame_01c775ec
    CALL core_game.cpp_CGame_runGameSession_FUN_0049da10 ; 004d94bb
        ;   XREF to: 0049da10 (UNCONDITIONAL_CALL)  ; int core_game.cpp_CGame_runGameSession_FUN_0049da10(CGame * this_ptr)
    MOV ESI,dword ptr [0x01cae0e8]      ; 004d94c0 | DAT_01cae0e8
    ADD ESP,0x4                         ; 004d94c6
    MOV ESI,dword ptr [ESI*0x4 + 0x1cae0d8] ; 004d94c9
    PUSH ESI                            ; 004d94d0
    PUSH EBX                            ; 004d94d1
    MOV EDI,EAX                         ; 004d94d2
    CALL core_mission.cpp_FUN_004d8cd0  ; 004d94d4
        ;   XREF to: 004d8cd0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004d8cd0()
    ADD ESP,0x8                         ; 004d94d9
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004d94dc
    PUSH ESI                            ; 004d94e2
    CALL dword ptr [EAX + 0x144]        ; 004d94e3
    ADD ESP,0x4                         ; 004d94e9
    PUSH EBX                            ; 004d94ec
    CALL core_mission.cpp_FUN_004d7ea0  ; 004d94ed
        ;   XREF to: 004d7ea0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004d7ea0()
    ADD ESP,0x4                         ; 004d94f2
    TEST EDI,EDI                        ; 004d94f5
    JZ 0x004d9502                       ; 004d94f7
        ;   XREF to: 004d9502 (CONDITIONAL_JUMP)  ; LAB_004d9502
    CMP byte ptr [0x01ccbbf0],0x0       ; 004d94f9 | DAT_01ccbbf0
    JNZ 0x004d954d                      ; 004d9500
        ;   XREF to: 004d954d (CONDITIONAL_JUMP)  ; LAB_004d954d
    PUSH 0x1                            ; 004d9502
        ;   Label: LAB_004d9502
    PUSH ESI                            ; 004d9504
    PUSH EBX                            ; 004d9505
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90 ; 004d9506
        ;   XREF to: 004d8f90 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    ADD ESP,0xc                         ; 004d950b
    MOV EAX,[0x005b9354]                ; 004d950e | g_CGame_PTR_005b9354 | g_CGame_01c775ec
        ;   Label: LAB_004d950e
    CMP dword ptr [EAX + 0x258],0x0     ; 004d9513 | g_CGame_01c775ec.act_completion_state
    JNZ 0x004d9636                      ; 004d951a
        ;   XREF to: 004d9636 (CONDITIONAL_JUMP)  ; LAB_004d9636
    POP EBP                             ; 004d9520
    POP EDI                             ; 004d9521
    POP ESI                             ; 004d9522
    POP EBX                             ; 004d9523
    RET                                 ; 004d9524
    MOV ECX,0x589dcb                    ; 004d9525 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004d9525
    MOV ESI,0x4c7                       ; 004d952a
    PUSH 0x589ddf                       ; 004d952f | = "CDemonMission::run - hero list empty"
    MOV dword ptr [0x01cc4800],ECX      ; 004d9534 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004d953a | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d9540
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d9545
    JMP 0x004d9459                      ; 004d9548
        ;   XREF to: 004d9459 (UNCONDITIONAL_JUMP)  ; LAB_004d9459
    MOV EAX,[0x005be368]                ; 004d954d | g_CDemonSet_PTR_005be368
        ;   Label: LAB_004d954d
    PUSH 0x589e3b                       ; 004d9552 | = "hq.geo"
    ADD EAX,0x14cd08                    ; 004d9557
    PUSH EAX                            ; 004d955c
    XOR EDI,EDI                         ; 004d955d
    CALL crt_string.c__stricmp_FUN_00566fb0 ; 004d955f
        ;   XREF to: 00566fb0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00566fb0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d9564
    TEST EAX,EAX                        ; 004d9567
    JNZ 0x004d9617                      ; 004d9569
        ;   XREF to: 004d9617 (CONDITIONAL_JUMP)  ; LAB_004d9617
    PUSH EBP                            ; 004d956f
    PUSH EAX                            ; 004d9570
    PUSH 0x9                            ; 004d9571
    MOV ECX,dword ptr [0x005baca0]      ; 004d9573 | g_CLevelLoader_PTR_005baca0
    PUSH ECX                            ; 004d9579
    MOV EDI,EBP                         ; 004d957a
    CALL core_level.cpp_CLevelLoader_show_FUN_004c5640 ; 004d957c
        ;   XREF to: 004c5640 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_show_FUN_004c5640(CLevelLoader * this_ptr, int total_frames, int use_custom_viewport, int image_variant)
        ;   Label: LAB_004d957c
    ADD ESP,0x10                        ; 004d9581
    PUSH 0x0                            ; 004d9584
    PUSH 0x1ccbbf0                      ; 004d9586 | DAT_01ccbbf0
    PUSH EBX                            ; 004d958b
    CALL core_mission.cpp_CDemonMission_load_FUN_004d7ee0 ; 004d958c
        ;   XREF to: 004d7ee0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_004d7ee0(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 004d9591
    PUSH ESI                            ; 004d9594
    PUSH EBX                            ; 004d9595
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80 ; 004d9596
        ;   XREF to: 004d9a80 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 004d959b
    TEST EAX,EAX                        ; 004d959e
    JZ 0x004d950e                       ; 004d95a0
        ;   XREF to: 004d950e (CONDITIONAL_JUMP)  ; LAB_004d950e
    PUSH EBX                            ; 004d95a6
    CALL core_mission.cpp_CDemonMission_startMission_FUN_004d9780 ; 004d95a7
        ;   XREF to: 004d9780 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_startMission_FUN_004d9780(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004d95ac
    TEST EAX,EAX                        ; 004d95af
    JZ 0x004d950e                       ; 004d95b1
        ;   XREF to: 004d950e (CONDITIONAL_JUMP)  ; LAB_004d950e
    TEST EDI,EDI                        ; 004d95b7
    JNZ 0x004d944d                      ; 004d95b9
        ;   XREF to: 004d944d (CONDITIONAL_JUMP)  ; LAB_004d944d
    PUSH 0x589e42                       ; 004d95bf | = "Press any key to continue..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d95c4
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d95c9
    PUSH EAX                            ; 004d95cc
    PUSH EDI                            ; 004d95cd
    PUSH 0xf8                           ; 004d95ce
    PUSH 0x58                           ; 004d95d3
    MOV ESI,dword ptr [0x014b9900]      ; 004d95d5 | g_CBitFont_PTR_014b9900
    PUSH ESI                            ; 004d95db
    MOV ESI,0x1df                       ; 004d95dc
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004d95e1
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    SUB ESI,EAX                         ; 004d95e6
    ADD ESP,0x8                         ; 004d95e8
    LEA EAX,[ESI + -0x4]                ; 004d95eb
    PUSH EAX                            ; 004d95ee
    PUSH 0x27f                          ; 004d95ef
    MOV EDI,dword ptr [0x014b9900]      ; 004d95f4 | g_CBitFont_PTR_014b9900
    PUSH EDI                            ; 004d95fa
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0 ; 004d95fb
        ;   XREF to: 00490be0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004d9600
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004d9603
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004d9608
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 004d960d
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
    JMP 0x004d944d                      ; 004d9612
        ;   XREF to: 004d944d (UNCONDITIONAL_JUMP)  ; LAB_004d944d
    MOV EAX,[0x005b9354]                ; 004d9617 | g_CGame_PTR_005b9354
        ;   Label: LAB_004d9617
    PUSH EAX                            ; 004d961c | g_CGame_01c775ec
    CALL core_game.cpp_CGame_displayActStats_FUN_004a6680 ; 004d961d
        ;   XREF to: 004a6680 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayActStats_FUN_004a6680(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d9622
    PUSH -0x1                           ; 004d9625
    PUSH EBP                            ; 004d9627
    PUSH 0x9                            ; 004d9628
    MOV EDX,dword ptr [0x005baca0]      ; 004d962a | g_CLevelLoader_PTR_005baca0
    PUSH EDX                            ; 004d9630
    JMP 0x004d957c                      ; 004d9631
        ;   XREF to: 004d957c (UNCONDITIONAL_JUMP)  ; LAB_004d957c
    PUSH EAX                            ; 004d9636 | g_CGame_01c775ec
        ;   Label: LAB_004d9636
    CALL core_game.cpp_CGame_finishAct_FUN_004a6a10 ; 004d9637
        ;   XREF to: 004a6a10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_finishAct_FUN_004a6a10(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d963c
    POP EBP                             ; 004d963f
    POP EDI                             ; 004d9640
    POP ESI                             ; 004d9641
    POP EBX                             ; 004d9642
    RET                                 ; 004d9643

