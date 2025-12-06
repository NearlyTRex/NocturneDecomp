; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_game.cpp_CGame_runGameSession_FUN_004daf80(CGame * this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x870]:1  local_870
; undefined1       Stack[-0x4c8]:1  local_4c8
; undefined1       Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 0052449b
;   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 at 00538cb8
;
; Referenced Globals:
;   TerminatedCString s_Nocturne_is_alive_and_ki_0062b641
;   TerminatedCString s_s_12_05_01_0062b660
;   TerminatedCString s_Jan_10_2000_0062b669
;   TerminatedCString s_game_cpp_built_on_s_s_0062b675
;   TerminatedCString s_System_RAM_d_0062b68f
;   TerminatedCString s_Swap_file_d_0062b69f
;   TerminatedCString s_s_0062b6ae
;   TerminatedCString s_ESP_08X_0062b6b2
;   TerminatedCString s_VELOCITY_0062b6bd
;   TerminatedCString s_Flashlight_0062b6c6
;   undefined4 s_lashlight_0062b6c7
;   undefined4 s_shlight_0062b6c9
;   TerminatedCString s_core_game_cpp_0062b6d1
;   TerminatedCString s_Leave_network_game_0062b6e2
;   TerminatedCString s_Return_to_game_0062b6f5
;   ... and 63 more
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_init_FUN_004727c0
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80
;   core_game.cpp_adjustFudgePosition_FUN_004d8750
;   core_game.cpp_CGame_beginFadeIn_FUN_004e0920
;   core_game.cpp_CGame_beginFadeOut_FUN_004e0960
;   core_game.cpp_CGame_fadeIn_FUN_004e0b90
;   core_game.cpp_CGame_FUN_004d7f80
;   core_game.cpp_CGame_FUN_004d85a0
;   core_game.cpp_CGame_FUN_004e07a0
;   core_game.cpp_CGame_FUN_004e36f0
;   core_game.cpp_CGame_openSomething_FUN_004e2910
;   core_game.cpp_CGame_playerControls_FUN_004dbd80
;   core_game.cpp_CGame_processFrame_FUN_004da100
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   ... and 42 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004daf80
        ;   Label: core_game.cpp_CGame_runGameSession_FUN_004daf80
    PUSH ESI                            ; 004daf81
    PUSH EDI                            ; 004daf82
    PUSH EBP                            ; 004daf83
    MOV EBP,ESP                         ; 004daf84
    SUB ESP,0x860                       ; 004daf86
    MOV ESI,dword ptr [0x0066e8e0]      ; 004daf8c | CConsole * g_CConsolePtr
    XOR EDX,EDX                         ; 004daf92
    PUSH ESI                            ; 004daf94 | CConsole g_ConsolePtr
    MOV dword ptr [EBP + -0x4],EDX      ; 004daf95
    MOV dword ptr [EBP + -0xc],EDX      ; 004daf98
    CALL engine_console.cpp_CConsole_reset_FUN_00441a40 ; 004daf9b | void engine_console.cpp_CConsole_reset_FUN_00441a40(CConsole * this_ptr)
        ;   XREF to: 00441a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004dafa0
    PUSH 0x62b641                       ; 004dafa3 | = "Nocturne is alive and kicking\n" | s_Nocturne_is_alive_and_ki_0062b641 = Nocturne is alive and kicking

    MOV EDI,dword ptr [0x0066e8e0]      ; 004dafa8 | CConsole * g_CConsolePtr
    PUSH EDI                            ; 004dafae | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004dafaf | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dafb4
    PUSH 0x62b660                       ; 004dafb7 | = "12:05:01" | s_s_12_05_01_0062b660 = 12:05:01
    PUSH 0x62b669                       ; 004dafbc | = "Jan 10 2000" | s_Jan_10_2000_0062b669 = Jan 10 2000
    PUSH 0x62b675                       ; 004dafc1 | = "game.cpp built on %s %s\n\n" | s_game_cpp_built_on_s_s_0062b675 = game.cpp built on %s %s


    MOV EAX,[0x0066e8e0]                ; 004dafc6 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EAX                            ; 004dafcb | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004dafcc | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004dafd1
    MOV EDX,dword ptr [0x03f98474]      ; 004dafd4 | int g_TotalPhysicalMemory
    PUSH EDX                            ; 004dafda
    PUSH 0x62b68f                       ; 004dafdb | = "System RAM: %d\n" | s_System_RAM_d_0062b68f = System RAM: %d

    MOV ECX,dword ptr [0x0066e8e0]      ; 004dafe0 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH ECX                            ; 004dafe6 | CConsole g_ConsolePtr
    MOV EBX,0x1                         ; 004dafe7
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004dafec | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004daff1
    MOV dword ptr [EBP + -0x8],EBX      ; 004daff4
    MOV EBX,dword ptr [0x03f98478]      ; 004daff7 | int[513] g_MessageFlags
    PUSH EBX                            ; 004daffd
    PUSH 0x62b69f                       ; 004daffe | = "Swap file: %d\n" | s_Swap_file_d_0062b69f = Swap file: %d

    MOV ESI,dword ptr [0x0066e8e0]      ; 004db003 | CConsole * g_CConsolePtr
    PUSH ESI                            ; 004db009 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004db00a | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004db00f
    LEA EAX,[EBP + 0xfffffef0]          ; 004db012
    PUSH EAX                            ; 004db018
    MOV EDI,dword ptr [0x00678a60]      ; 004db019 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 004db01f | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590 ; 004db020 | void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(CEditorTools * this_ptr, char * output_buffer)
        ;   XREF to: 004a2590 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db025
    LEA EAX,[EBP + 0xfffffef0]          ; 004db028
    PUSH EAX                            ; 004db02e
    PUSH 0x62b6ae                       ; 004db02f | = "%s\n" | s_s_0062b6ae = %s

    MOV EAX,[0x0066e8e0]                ; 004db034 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EAX                            ; 004db039 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004db03a | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004db03f
    MOV dword ptr [EBP + 0xfffffff0],ESP ; 004db042
    MOV EAX,dword ptr [EBP + -0x10]     ; 004db048
    PUSH EAX                            ; 004db04b
    PUSH 0x62b6b2                       ; 004db04c | = "ESP: %08X\n" | s_ESP_08X_0062b6b2 = ESP: %08X

    MOV EDX,dword ptr [0x0066e8e0]      ; 004db051 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EDX                            ; 004db057 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004db058 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db05d
    MOV dword ptr [EAX + 0x270],0x0     ; 004db060
    MOV dword ptr [EAX + 0x1fc],0x0     ; 004db06a
    MOV dword ptr [EAX + 0x274],0x1     ; 004db074
    MOV dword ptr [EAX + 0x1e4],0x0     ; 004db07e
    MOV dword ptr [EAX + 0x1e8],0x0     ; 004db088
    MOV dword ptr [EAX + 0x278],0x0     ; 004db092
    MOV dword ptr [EAX + 0x1d0],0x0     ; 004db09c
    MOV dword ptr [EAX + 0x1e0],0x0     ; 004db0a6
    MOV dword ptr [EAX + 0x1d4],0x0     ; 004db0b0
    MOV dword ptr [EAX + 0x1d8],0x0     ; 004db0ba
    MOV dword ptr [EAX + 0x1dc],0x0     ; 004db0c4
    MOV dword ptr [EAX + 0x27c],0x0     ; 004db0ce
    ADD ESP,0xc                         ; 004db0d8
    MOV dword ptr [EAX + 0x280],0x0     ; 004db0db
    MOV dword ptr [EAX + 0x1ec],0x3f800000 ; 004db0e5
    MOV dword ptr [EAX + 0x1f0],0x0     ; 004db0ef
    MOV dword ptr [EAX + 0x1f4],0x0     ; 004db0f9
    MOV dword ptr [EAX + 0x1f8],0x0     ; 004db103
    MOV byte ptr [EAX + 0x8b4],0x0      ; 004db10d
    MOV dword ptr [EAX + 0x9b4],0x0     ; 004db114
    MOV dword ptr [EAX + 0x9b8],0x0     ; 004db11e
    MOV dword ptr [EAX + 0x23c],0x0     ; 004db128
    MOV dword ptr [EAX + 0xcc],0x0      ; 004db132
    XOR ECX,ECX                         ; 004db13c
    MOV dword ptr [EAX + 0x208],ECX     ; 004db13e
    MOV dword ptr [EAX + 0x238],ECX     ; 004db144
    MOV dword ptr [EAX + 0x20c],ECX     ; 004db14a
    MOV dword ptr [EAX + 0xac8],ECX     ; 004db150
    MOV dword ptr [EAX + 0x240],ECX     ; 004db156
    MOV dword ptr [EAX + 0x244],ECX     ; 004db15c
    MOV dword ptr [EAX + 0x220],ECX     ; 004db162
    MOV dword ptr [EAX + 0x218],ECX     ; 004db168
    PUSH EAX                            ; 004db16e
    MOV dword ptr [EAX + 0x21c],ECX     ; 004db16f
    MOV dword ptr [0x02d828d0],ECX      ; 004db175 | int g_CheatSystemEnabled
    MOV dword ptr [EAX + 0x210],ECX     ; 004db17b
    CALL core_game.cpp_CGame_setGameRes_FUN_004dade0 ; 004db181 | void core_game.cpp_CGame_setGameRes_FUN_004dade0(CGame * this_ptr)
        ;   XREF to: 004dade0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db186
    PUSH 0x62b6bd                       ; 004db189 | = "VELOCITY" | s_VELOCITY_0062b6bd = VELOCITY
    CALL crt_env.c_getenv_FUN_006013f0  ; 004db18e | char * crt_env.c_getenv_FUN_006013f0(char * name)
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db193
    TEST EAX,EAX                        ; 004db196
    JZ 0x004db1a7                       ; 004db198 | LAB_004db1a7
        ;   XREF to: 004db1a7 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db19a
    MOV dword ptr [EAX + 0x210],0x1     ; 004db19d
    PUSH 0x2d7eaf0                      ; 004db1a7 | CDemonLight g_CDemonLightInstance
        ;   Label: LAB_004db1a7
    CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0 ; 004db1ac | void core_dlight.cpp_CDemonLight_init_FUN_004727c0(CDemonLight * this_ptr)
        ;   XREF to: 004727c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db1b1
    MOV ESI,0x62b6c6                    ; 004db1b4 | = "Flashlight" | s_Flashlight_0062b6c6 = Flashlight
    MOV EDI,0x2d7eb30                   ; 004db1b9 | DAT_02d7eb30
    PUSH EDI                            ; 004db1be | DAT_02d7eb30
    MOV AL,byte ptr [ESI]               ; 004db1bf | = "Flashlight" | s_Flashlight_0062b6c6 = Flashlight
        ;   Label: LAB_004db1bf
    MOV byte ptr [EDI],AL               ; 004db1c1 | DAT_02d7eb30
    CMP AL,0x0                          ; 004db1c3
    JZ 0x004db1d7                       ; 004db1c5 | LAB_004db1d7
        ;   XREF to: 004db1d7 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004db1c7 | s_lashlight_0062b6c7
    ADD ESI,0x2                         ; 004db1ca
    MOV byte ptr [EDI + 0x1],AL         ; 004db1cd | DAT_02d7eb31
    ADD EDI,0x2                         ; 004db1d0
    CMP AL,0x0                          ; 004db1d3
    JNZ 0x004db1bf                      ; 004db1d5 | LAB_004db1bf
        ;   XREF to: 004db1bf (CONDITIONAL_JUMP)
    POP EDI                             ; 004db1d7
        ;   Label: LAB_004db1d7
    MOV EDI,0x42800000                  ; 004db1d8
    MOV EAX,[0x006810c8]                ; 004db1dd | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    XOR ESI,ESI                         ; 004db1e2
    PUSH EAX                            ; 004db1e4 | CDemonSet g_CDemonSetInstance
    MOV dword ptr [0x02d807a4],ESI      ; 004db1e5 | g_CDemonLightInstance.light_enabled_flag
    MOV dword ptr [0x02d7ec30],EDI      ; 004db1eb | g_CDemonLightInstance.base.max_distance
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 004db1f1 | void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x02d82d80]      ; 004db1f6 | undefined4 DAT_02d82d80
    ADD ESP,0x4                         ; 004db1fc
    TEST EDX,EDX                        ; 004db1ff
    JZ 0x004db5a7                       ; 004db201 | LAB_004db5a7
        ;   XREF to: 004db5a7 (CONDITIONAL_JUMP)
    PUSH 0x2d82d84                      ; 004db207 | undefined4 DAT_02d82d84
    MOV dword ptr [0x02d82d80],ESI      ; 004db20c | undefined4 DAT_02d82d80
    MOV ESI,dword ptr [0x006810c8]      ; 004db212 | CDemonSet * g_CDemonSetPtr
    PUSH ESI                            ; 004db218 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00571130 ; 004db219 | void core_set.cpp_CDemonSet_FUN_00571130(CDemonSet * this_ptr)
        ;   XREF to: 00571130 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db21e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db221
        ;   Label: LAB_004db221
    MOV EDI,dword ptr [EAX + 0x224]     ; 004db224
    CMP EDI,0x8000                      ; 004db22a
    JGE 0x004db5bb                      ; 004db230 | LAB_004db5bb
        ;   XREF to: 004db5bb (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x224],0x8000  ; 004db236
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db240
        ;   Label: LAB_004db240
    MOV ECX,dword ptr [EAX + 0x224]     ; 004db243
    PUSH ECX                            ; 004db249
    MOV EBX,dword ptr [0x006810c8]      ; 004db24a | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EBX                            ; 004db250 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setGamma_FUN_00570d60 ; 004db251 | void core_set.cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet * this_ptr, int gamma)
        ;   XREF to: 00570d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db256
    MOV ESI,dword ptr [EBP + 0x14]      ; 004db259
    PUSH ESI                            ; 004db25c
    CALL core_game.cpp_CGame_FUN_004d7f80 ; 004db25d | void core_game.cpp_CGame_FUN_004d7f80(CGame * this_ptr)
        ;   XREF to: 004d7f80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db262
    PUSH 0x2d828d4                      ; 004db265 | CPickList g_CPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 004db26a | void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [ESI + 0x274]     ; 004db26f
    ADD ESP,0x4                         ; 004db275
    TEST EDI,EDI                        ; 004db278
    JZ 0x004db5d6                       ; 004db27a | LAB_004db5d6
        ;   XREF to: 004db5d6 (CONDITIONAL_JUMP)
    MOV EAX,[0x00680d50]                ; 004db280 | CScript g_CScriptInstance | CScript * g_CScriptPtr
    PUSH 0x1                            ; 004db285
    MOV EBX,dword ptr [EAX + 0xc]       ; 004db287 | DAT_0310f864
    PUSH EBX                            ; 004db28a
    MOV ESI,dword ptr [0x006810c8]      ; 004db28b | CDemonSet * g_CDemonSetPtr
    PUSH ESI                            ; 004db291 | CDemonSet g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 004db292 | int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004db297
    MOV EDI,dword ptr [EBP + 0x14]      ; 004db29a
        ;   Label: LAB_004db29a
    PUSH EDI                            ; 004db29d
    CALL core_game.cpp_CGame_beginFadeIn_FUN_004e0920 ; 004db29e | void core_game.cpp_CGame_beginFadeIn_FUN_004e0920(CGame * this_ptr)
        ;   XREF to: 004e0920 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db2a3
    PUSH EDI                            ; 004db2a6
    CALL core_game.cpp_CGame_FUN_004e07a0 ; 004db2a7 | void core_game.cpp_CGame_FUN_004e07a0(CGame * this_ptr)
        ;   XREF to: 004e07a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db2ac
    PUSH 0x3                            ; 004db2af
    MOV EDX,dword ptr [0x00680a00]      ; 004db2b1 | undefined4 DAT_02f7c740 | CNetGame * g_CNetGameInstance
    PUSH EDX                            ; 004db2b7 | undefined4 DAT_02f7c740
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 ; 004db2b8 | int core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame * this_ptr, int sync_stage)
        ;   XREF to: 005401e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db2bd
    TEST EAX,EAX                        ; 004db2c0
    JZ 0x004db434                       ; 004db2c2 | LAB_004db434
        ;   XREF to: 004db434 (CONDITIONAL_JUMP)
    PUSH 0x4                            ; 004db2c8
    MOV ECX,dword ptr [0x00680a00]      ; 004db2ca | undefined4 DAT_02f7c740 | CNetGame * g_CNetGameInstance
    PUSH ECX                            ; 004db2d0 | undefined4 DAT_02f7c740
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 ; 004db2d1 | int core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame * this_ptr, int sync_stage)
        ;   XREF to: 005401e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db2d6
    TEST EAX,EAX                        ; 004db2d9
    JZ 0x004db434                       ; 004db2db | LAB_004db434
        ;   XREF to: 004db434 (CONDITIONAL_JUMP)
    MOV EAX,[0x00680a00]                ; 004db2e1 | undefined4 DAT_02f7c740 | CNetGame * g_CNetGameInstance
    PUSH EDI                            ; 004db2e6
    MOV dword ptr [EAX + 0x4],0x3       ; 004db2e7 | undefined4 DAT_02f7c744
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 004db2ee | void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db2f3
    PUSH EDI                            ; 004db2f6
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 ; 004db2f7 | void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame * this_ptr)
        ;   XREF to: 004dce70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db2fc
    MOV EBX,EDI                         ; 004db2ff
    MOV EDI,dword ptr [0x00680a00]      ; 004db301 | CNetGame * g_CNetGameInstance
    PUSH EDI                            ; 004db307 | undefined4 DAT_02f7c740
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 ; 004db308 | void core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame * this_ptr)
        ;   XREF to: 00543150 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db30d
    MOV EAX,[0x0067cf80]                ; 004db310 | CLevelLoader g_CLevelLoaderInstance | CLevelLoader * g_CLevelLoaderPtr
    PUSH EAX                            ; 004db315 | CLevelLoader g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_cleanup_FUN_00504720 ; 004db316 | void core_level.cpp_CLevelLoader_cleanup_FUN_00504720(CLevelLoader * this_ptr)
        ;   XREF to: 00504720 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db31b
    PUSH 0x581                          ; 004db31e
    PUSH 0x62b6d1                       ; 004db323 | = "..\\core\\game.cpp" | s_core_game_cpp_0062b6d1 = ..\core\game.cpp
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 004db328 | void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02db87d0]                ; 004db32d | int g_LocalHeroIndex
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004db332 | CHero *[4] g_HeroActors
    MOV EAX,dword ptr [EBX + 0xc4]      ; 004db339
    MOV dword ptr [EDX + 0x1f734],EAX   ; 004db33f
    ADD ESP,0x8                         ; 004db345
    MOV dword ptr [EBX + 0x258],0x0     ; 004db348
    MOV EDI,0x1                         ; 004db352
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db357
        ;   Label: LAB_004db357
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004db35a
    JZ 0x004db5f1                       ; 004db361 | LAB_004db5f1
        ;   XREF to: 004db5f1 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004db367
        ;   Label: LAB_004db367
    PUSH EAX                            ; 004db369
        ;   Label: LAB_004db369
    MOV EBX,dword ptr [0x0067cf44]      ; 004db36a | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH EBX                            ; 004db370 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0 ; 004db371 | void engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this, int enableExtended)
        ;   XREF to: 005024b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db376
    MOV ESI,dword ptr [EBP + 0x14]      ; 004db379
    PUSH ESI                            ; 004db37c
    CALL core_game.cpp_SaveRelated_FUN_004dcee0 ; 004db37d | void core_game.cpp_SaveRelated_FUN_004dcee0(CGame * this_ptr)
        ;   XREF to: 004dcee0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db382
    PUSH ESI                            ; 004db385
    CALL core_game.cpp_CGame_FUN_004d85a0 ; 004db386 | void core_game.cpp_CGame_FUN_004d85a0(CGame * this_ptr)
        ;   XREF to: 004d85a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db38b
    PUSH ESI                            ; 004db38e
    CALL core_game.cpp_adjustFudgePosition_FUN_004d8750 ; 004db38f | int core_game.cpp_adjustFudgePosition_FUN_004d8750(CGame * this_ptr, float delta_time, int additional_param)
        ;   XREF to: 004d8750 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db394
    PUSH ESI                            ; 004db397
    CALL core_game.cpp_CGame_playerControls_FUN_004dbd80 ; 004db398 | void core_game.cpp_CGame_playerControls_FUN_004dbd80(CGame * this_ptr)
        ;   XREF to: 004dbd80 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [ESI + 0x274]     ; 004db39d
    ADD ESP,0x4                         ; 004db3a3
    TEST EBX,EBX                        ; 004db3a6
    JZ 0x004db3b7                       ; 004db3a8 | LAB_004db3b7
        ;   XREF to: 004db3b7 (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0xcc],0x0      ; 004db3aa
    JZ 0x004db605                       ; 004db3b1 | LAB_004db605
        ;   XREF to: 004db605 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + 0x14]      ; 004db3b7
        ;   Label: LAB_004db3b7
    PUSH ECX                            ; 004db3ba
    XOR EBX,EBX                         ; 004db3bb
    CALL core_game.cpp_CGame_processFrame_FUN_004da100 ; 004db3bd | void core_game.cpp_CGame_processFrame_FUN_004da100(CGame * this_ptr)
        ;   XREF to: 004da100 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x02d828d0]      ; 004db3c2 | int g_CheatSystemEnabled
    ADD ESP,0x4                         ; 004db3c8
    TEST ESI,ESI                        ; 004db3cb
    JZ 0x004db6e3                       ; 004db3cd | LAB_004db6e3
        ;   XREF to: 004db6e3 (CONDITIONAL_JUMP)
    MOV EAX,[0x02d828d4]                ; 004db3d3 | CPickList g_CPickList
    TEST EAX,EAX                        ; 004db3d8
    JLE 0x004db663                      ; 004db3da | LAB_004db663
        ;   XREF to: 004db663 (CONDITIONAL_JUMP)
    PUSH 0x2d828d4                      ; 004db3e0 | CPickList g_CPickList
    CALL shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 ; 004db3e5 | int shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340(CPickList * this_ptr)
        ;   XREF to: 004a4340 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db3ea
    MOV ESI,EAX                         ; 004db3ed
    CMP EAX,-0x2                        ; 004db3ef
    JZ 0x004db41b                       ; 004db3f2 | LAB_004db41b
        ;   XREF to: 004db41b (CONDITIONAL_JUMP)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004db3f4 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x00678a60]      ; 004db3f9 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 004db3ff | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004db400 | void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db405
    PUSH 0x2d828d4                      ; 004db408 | CPickList g_CPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 004db40d | void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db412
    MOV dword ptr [0x02d828d0],EBX      ; 004db415 | int g_CheatSystemEnabled
    TEST ESI,ESI                        ; 004db41b
        ;   Label: LAB_004db41b
    JNZ 0x004db669                      ; 004db41d | LAB_004db669
        ;   XREF to: 004db669 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004db423
    MOV EDI,dword ptr [0x00680a00]      ; 004db425 | CNetGame * g_CNetGameInstance
    PUSH EDI                            ; 004db42b | undefined4 DAT_02f7c740
    CALL core_netgame.cpp_CNetGame_FUN_0053fd00 ; 004db42c | void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db431
        ;   Label: LAB_004db431
    MOV EAX,[0x02db87d0]                ; 004db434 | int g_LocalHeroIndex
        ;   Label: LAB_004db434
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004db439 | CHero *[4] g_HeroActors
    PUSH EAX                            ; 004db440
    MOV EDX,dword ptr [EAX + 0x154]     ; 004db441
    CALL dword ptr [EDX + 0x120]        ; 004db447
    ADD ESP,0x4                         ; 004db44d
    CMP EAX,0x2                         ; 004db450
    JNZ 0x004db4f9                      ; 004db453 | LAB_004db4f9
        ;   XREF to: 004db4f9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db459
    CMP dword ptr [EAX + 0x9c4],0x0     ; 004db45c
    JNZ 0x004db4f9                      ; 004db463 | LAB_004db4f9
        ;   XREF to: 004db4f9 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xfffffb48]          ; 004db469
    PUSH EAX                            ; 004db46f
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004db470 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db475
    PUSH 0x62b7f0                       ; 004db478 | = "Load game" | s_Load_game_0062b7f0 = Load game
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db47d | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db482
    PUSH EAX                            ; 004db485
    LEA EAX,[EBP + 0xfffffb48]          ; 004db486
    PUSH EAX                            ; 004db48c
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db48d | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db492
    PUSH 0x62b7fa                       ; 004db495 | = "Quit" | s_Quit_0062b7fa = Quit
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db49a | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db49f
    PUSH EAX                            ; 004db4a2
    LEA EAX,[EBP + 0xfffffb48]          ; 004db4a3
    PUSH EAX                            ; 004db4a9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db4aa | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db4af
    XOR EBX,EBX                         ; 004db4b2
    PUSH EBX                            ; 004db4b4
        ;   Label: LAB_004db4b4
    PUSH -0x1                           ; 004db4b5
    PUSH 0x62b7ff                       ; 004db4b7 | = "Game Over" | s_Game_Over_0062b7ff = Game Over
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db4bc | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db4c1
    PUSH EAX                            ; 004db4c4
    LEA EAX,[EBP + 0xfffffb48]          ; 004db4c5
    PUSH EAX                            ; 004db4cb
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004db4cc | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004db4d1
    TEST EAX,EAX                        ; 004db4d4
    JNZ 0x004dbbae                      ; 004db4d6 | LAB_004dbbae
        ;   XREF to: 004dbbae (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + 0x14]      ; 004db4dc
    PUSH ECX                            ; 004db4df
    CALL core_game.cpp_CGame_FUN_004e36f0 ; 004db4e0 | void core_game.cpp_CGame_FUN_004e36f0(CGame * this_ptr)
        ;   XREF to: 004e36f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db4e5
    PUSH 0x0                            ; 004db4e8
        ;   Label: LAB_004db4e8
    LEA EAX,[EBP + 0xfffffb48]          ; 004db4ea
    PUSH EAX                            ; 004db4f0
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004db4f1 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db4f6
    MOV EBX,dword ptr [0x0067d550]      ; 004db4f9 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
        ;   Label: LAB_004db4f9
    PUSH EBX                            ; 004db4ff | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_FUN_00524e00 ; 004db500 | int core_mission.cpp_CDemonMission_FUN_00524e00(CDemonMission * this_ptr)
        ;   XREF to: 00524e00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db505
    PUSH 0x683                          ; 004db508
    MOV EDX,dword ptr [EBP + 0x14]      ; 004db50d
    PUSH 0x62b809                       ; 004db510 | = "..\\core\\game.cpp" | s_core_game_cpp_0062b809 = ..\core\game.cpp
    MOV dword ptr [EDX + 0x24c],EAX     ; 004db515
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 004db51b | void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db520
    PUSH 0x0                            ; 004db523
    MOV ESI,dword ptr [0x0067cf44]      ; 004db525 | CKeys * g_CKeysPtr
    PUSH ESI                            ; 004db52b | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0 ; 004db52c | void engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this, int enableExtended)
        ;   XREF to: 005024b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db531
    MOV EDI,dword ptr [0x00681ef8]      ; 004db534 | CSound * g_CSoundPtr
    PUSH EDI                            ; 004db53a | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_shutdown_FUN_005b2f70 ; 004db53b | void core_sound.cpp_CSound_shutdown_FUN_005b2f70(CSound * this_ptr)
        ;   XREF to: 005b2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db540
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db543
    PUSH EAX                            ; 004db546
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 ; 004db547 | void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame * this_ptr)
        ;   XREF to: 004daed0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db54c
    MOV EAX,[0x0067cf44]                ; 004db54f | CKeys * g_CKeysPtr
    PUSH EAX                            ; 004db554 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 004db555 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x8]          ; 004db557
    ADD ESP,0x4                         ; 004db55a
    MOV EDX,dword ptr [0x006810c8]      ; 004db55d | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EDX                            ; 004db563 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056d2d0 ; 004db564 | void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db569
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db56c
    PUSH 0x2d828d4                      ; 004db56f | CPickList g_CPickList
    MOV dword ptr [EAX + 0x1ec],0x3f800000 ; 004db574
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 004db57e | void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db583
    CALL core_inv.cpp_freeInventory_FUN_004fd510 ; 004db586 | void core_inv.cpp_freeInventory_FUN_004fd510()
        ;   XREF to: 004fd510 (UNCONDITIONAL_CALL)
    PUSH 0x6a7                          ; 004db58b
    PUSH 0x62b81a                       ; 004db590 | = "..\\core\\game.cpp" | s_core_game_cpp_0062b81a = ..\core\game.cpp
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 004db595 | void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + -0xc]      ; 004db59a
    ADD ESP,0x8                         ; 004db59d
    MOV ESP,EBP                         ; 004db5a0
    POP EBP                             ; 004db5a2
    POP EDI                             ; 004db5a3
    POP ESI                             ; 004db5a4
    POP EBX                             ; 004db5a5
    RET                                 ; 004db5a6
    MOV ECX,dword ptr [0x0067a3d0]      ; 004db5a7 | CFireEffect g_CFireEffectInstance | CFireEffect * g_CFireEffectPtr
        ;   Label: LAB_004db5a7
    PUSH ECX                            ; 004db5ad | CFireEffect g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_init_FUN_004c6c80 ; 004db5ae | void core_fire.cpp_CFireEffect_init_FUN_004c6c80(CFireEffect * this_ptr)
        ;   XREF to: 004c6c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db5b3
    JMP 0x004db221                      ; 004db5b6 | LAB_004db221
        ;   XREF to: 004db221 (UNCONDITIONAL_JUMP)
    CMP EDI,0x10000                     ; 004db5bb
        ;   Label: LAB_004db5bb
    JLE 0x004db240                      ; 004db5c1 | LAB_004db240
        ;   XREF to: 004db240 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x224],0x10000 ; 004db5c7
    JMP 0x004db240                      ; 004db5d1 | LAB_004db240
        ;   XREF to: 004db240 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESI + 0x270]     ; 004db5d6
        ;   Label: LAB_004db5d6
    PUSH EDX                            ; 004db5dc
    MOV ECX,dword ptr [0x006810c8]      ; 004db5dd | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ECX                            ; 004db5e3 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 004db5e4 | void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db5e9
    JMP 0x004db29a                      ; 004db5ec | LAB_004db29a
        ;   XREF to: 004db29a (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x02d828d0],0x0      ; 004db5f1 | int g_CheatSystemEnabled
        ;   Label: LAB_004db5f1
    JNZ 0x004db367                      ; 004db5f8 | LAB_004db367
        ;   XREF to: 004db367 (CONDITIONAL_JUMP)
    MOV EAX,EDI                         ; 004db5fe
    JMP 0x004db369                      ; 004db600 | LAB_004db369
        ;   XREF to: 004db369 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x00680a00]                ; 004db605 | undefined4 DAT_02f7c740 | CNetGame * g_CNetGameInstance
        ;   Label: LAB_004db605
    CMP dword ptr [EAX + 0x168],0x0     ; 004db60a | undefined4 DAT_02f7c8a8
    JNZ 0x004db3b7                      ; 004db611 | LAB_004db3b7
        ;   XREF to: 004db3b7 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db617
    CMP dword ptr [EAX + 0x240],0x0     ; 004db61a
    JNZ 0x004db3b7                      ; 004db621 | LAB_004db3b7
        ;   XREF to: 004db3b7 (CONDITIONAL_JUMP)
    MOV EAX,[0x00680d50]                ; 004db627 | CScript * g_CScriptPtr
    MOV EBX,dword ptr [EAX + 0x10]      ; 004db62c | DAT_0310f868
    PUSH EBX                            ; 004db62f
    MOV ESI,dword ptr [EAX + 0xc]       ; 004db630 | DAT_0310f864
    PUSH ESI                            ; 004db633
    MOV EAX,[0x006810c8]                ; 004db634 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EAX                            ; 004db639 | CDemonSet g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 004db63a | int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004db63f
    TEST EAX,EAX                        ; 004db642
    JZ 0x004db652                       ; 004db644 | LAB_004db652
        ;   XREF to: 004db652 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + 0x14]      ; 004db646
    PUSH EDX                            ; 004db649
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 004db64a | void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db64f
    MOV EAX,[0x00680d50]                ; 004db652 | CScript g_CScriptInstance | CScript * g_CScriptPtr
        ;   Label: LAB_004db652
    MOV dword ptr [EAX + 0x10],0x0      ; 004db657 | DAT_0310f868
    JMP 0x004db3b7                      ; 004db65e | LAB_004db3b7
        ;   XREF to: 004db3b7 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d828d0],EBX      ; 004db663 | int g_CheatSystemEnabled
        ;   Label: LAB_004db663
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db669
        ;   Label: LAB_004db669
    CMP dword ptr [EAX + 0xcc],0x0      ; 004db66c
    JZ 0x004dba92                       ; 004db673 | LAB_004dba92
        ;   XREF to: 004dba92 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0 ; 004db679 | void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0()
        ;   Label: LAB_004db679
        ;   XREF to: 005f35e0 (UNCONDITIONAL_CALL)
    CMP dword ptr [0x03f98470],0x0      ; 004db67e | int g_ApplicationActive
        ;   Label: LAB_004db67e
    JZ 0x004db6a4                       ; 004db685 | LAB_004db6a4
        ;   XREF to: 004db6a4 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 004db687
    MOV EAX,[0x006810c8]                ; 004db689 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    MOV dword ptr [0x03f98470],EDX      ; 004db68e | int g_ApplicationActive
    MOV EDX,dword ptr [EAX + 0x15aea4]  ; 004db694 | g_CDemonSetInstance.selected_camera_index
    PUSH EDX                            ; 004db69a
    PUSH EAX                            ; 004db69b | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 004db69c | void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db6a1
    MOV EAX,[0x02db87d0]                ; 004db6a4 | int g_LocalHeroIndex
        ;   Label: LAB_004db6a4
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004db6a9 | CHero *[4] g_HeroActors
    PUSH EAX                            ; 004db6b0
    MOV EBX,dword ptr [EAX + 0x154]     ; 004db6b1
    CALL dword ptr [EBX + 0x120]        ; 004db6b7
    ADD ESP,0x4                         ; 004db6bd
    CMP EAX,0x2                         ; 004db6c0
    JZ 0x004dbae4                       ; 004db6c3 | LAB_004dbae4
        ;   XREF to: 004dbae4 (CONDITIONAL_JUMP)
    MOV EAX,[0x00680d50]                ; 004db6c9 | CScript g_CScriptInstance | CScript * g_CScriptPtr
        ;   Label: LAB_004db6c9
    CMP dword ptr [EAX],0x0             ; 004db6ce | CScript g_CScriptInstance
    JZ 0x004dbb58                       ; 004db6d1 | LAB_004dbb58
        ;   XREF to: 004dbb58 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x1      ; 004db6d7
    JMP 0x004db434                      ; 004db6de | LAB_004db434
        ;   XREF to: 004db434 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 004db6e3
        ;   Label: LAB_004db6e3
    MOV EAX,[0x0067cf44]                ; 004db6e4 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 004db6e9 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 004db6ea | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004db6ec
    ADD ESP,0x8                         ; 004db6ef
    TEST EAX,EAX                        ; 004db6f2
    JZ 0x004db669                       ; 004db6f4 | LAB_004db669
        ;   XREF to: 004db669 (CONDITIONAL_JUMP)
    PUSH 0x2d828d4                      ; 004db6fa | CPickList g_CPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 004db6ff | void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db704
    MOV dword ptr [EAX + 0x200],EBX     ; 004db707
    MOV EAX,[0x02db87d0]                ; 004db70d | int g_LocalHeroIndex
    ADD ESP,0x4                         ; 004db712
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004db715 | CHero *[4] g_HeroActors
    PUSH EAX                            ; 004db71c
    MOV EDX,dword ptr [EAX + 0x154]     ; 004db71d
    CALL dword ptr [EDX + 0x120]        ; 004db723
    ADD ESP,0x4                         ; 004db729
    CMP EAX,0x1                         ; 004db72c
    JG 0x004db434                       ; 004db72f | LAB_004db434
        ;   XREF to: 004db434 (CONDITIONAL_JUMP)
    MOV EAX,[0x00680a00]                ; 004db735 | undefined4 DAT_02f7c740 | CNetGame * g_CNetGameInstance
    MOV EDX,dword ptr [EAX]             ; 004db73a | undefined4 DAT_02f7c740
    CMP EDX,0x2                         ; 004db73c
    JZ 0x004db9b9                       ; 004db73f | LAB_004db9b9
        ;   XREF to: 004db9b9 (CONDITIONAL_JUMP)
    CMP EDI,EDX                         ; 004db745
    JZ 0x004dba17                       ; 004db747 | LAB_004dba17
        ;   XREF to: 004dba17 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00681ef8]      ; 004db74d | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH EBX                            ; 004db753 | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_shutdown_FUN_005b2f70 ; 004db754 | void core_sound.cpp_CSound_shutdown_FUN_005b2f70(CSound * this_ptr)
        ;   XREF to: 005b2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db759
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db75c
    PUSH EAX                            ; 004db762
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004db763 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db768
    PUSH 0x62b7a7                       ; 004db76b | = "Return" | s_Return_0062b7a7 = Return
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db770 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db775
    PUSH EAX                            ; 004db778
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db779
    PUSH EAX                            ; 004db77f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db780 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db785
    PUSH 0x62b7ae                       ; 004db788 | = "Options" | s_Options_0062b7ae = Options
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db78d | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db792
    PUSH EAX                            ; 004db795
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db796
    PUSH EAX                            ; 004db79c
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db79d | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db7a2
    PUSH 0x62b7b6                       ; 004db7a5 | = "Load game" | s_Load_game_0062b7b6 = Load game
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db7aa | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db7af
    PUSH EAX                            ; 004db7b2
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db7b3
    PUSH EAX                            ; 004db7b9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db7ba | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db7bf
    PUSH 0x62b7c0                       ; 004db7c2 | = "Save game" | s_Save_game_0062b7c0 = Save game
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db7c7 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db7cc
    PUSH EAX                            ; 004db7cf
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db7d0
    PUSH EAX                            ; 004db7d6
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db7d7 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db7dc
    PUSH 0x62b7ca                       ; 004db7df | = "Quit" | s_Quit_0062b7ca = Quit
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db7e4 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db7e9
    PUSH EAX                            ; 004db7ec
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db7ed
    PUSH EAX                            ; 004db7f3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db7f4 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db7f9
    MOV ESI,dword ptr [EAX + 0x228]     ; 004db7fc
    ADD ESP,0x8                         ; 004db802
    CMP EDI,ESI                         ; 004db805
    JNZ 0x004db826                      ; 004db807 | LAB_004db826
        ;   XREF to: 004db826 (CONDITIONAL_JUMP)
    PUSH 0x62b7cf                       ; 004db809 | = "Skip cinematic." | s_Skip_cinematic_0062b7cf = Skip cinematic.
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db80e | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db813
    PUSH EAX                            ; 004db816
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db817
    PUSH EAX                            ; 004db81d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db81e | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db823
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db826
        ;   Label: LAB_004db826
    CMP dword ptr [EAX + 0x228],0x0     ; 004db829
    JZ 0x004db845                       ; 004db830 | LAB_004db845
        ;   XREF to: 004db845 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004db832
    PUSH 0x3                            ; 004db834
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db836
    PUSH EAX                            ; 004db83c
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410 ; 004db83d | void shape_edittool.cpp_CPickList_enableItem_FUN_004a5410(CPickList * this_ptr, int item_index, bool enable_flag)
        ;   XREF to: 004a5410 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004db842
    PUSH 0x0                            ; 004db845
        ;   Label: LAB_004db845
    PUSH -0x1                           ; 004db847
    PUSH 0x62b7df                       ; 004db849 | = "Game paused" | s_Game_paused_0062b7df = Game paused
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db84e | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db853
    PUSH EAX                            ; 004db856
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db857
    PUSH EAX                            ; 004db85d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004db85e | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004db863
    MOV EBX,EAX                         ; 004db866
    CMP EAX,0x1                         ; 004db868
    JNZ 0x004db8f1                      ; 004db86b | LAB_004db8f1
        ;   XREF to: 004db8f1 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004db871
    MOV ECX,dword ptr [0x0067cf44]      ; 004db873 | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH ECX                            ; 004db879 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0 ; 004db87a | void engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this, int enableExtended)
        ;   XREF to: 005024b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db87f
    MOV ESI,dword ptr [EBP + 0x14]      ; 004db882
    PUSH ESI                            ; 004db885
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 ; 004db886 | void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame * this_ptr)
        ;   XREF to: 004daed0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db88b
    PUSH EDI                            ; 004db88e
    CALL core_menu.cpp_showOptionsScreen_FUN_00512d30 ; 004db88f | void core_menu.cpp_showOptionsScreen_FUN_00512d30(int initialize_systems)
        ;   XREF to: 00512d30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db894
    PUSH ESI                            ; 004db897
    CALL core_game.cpp_CGame_setGameRes_FUN_004dade0 ; 004db898 | void core_game.cpp_CGame_setGameRes_FUN_004dade0(CGame * this_ptr)
        ;   XREF to: 004dade0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [ESI + 0x1fc]     ; 004db89d
    ADD ESP,0x4                         ; 004db8a3
    TEST EDX,EDX                        ; 004db8a6
    SETZ AL                             ; 004db8a8
    AND EAX,0xff                        ; 004db8ab
    PUSH EAX                            ; 004db8b0
    MOV ECX,dword ptr [0x0067cf44]      ; 004db8b1 | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH ECX                            ; 004db8b7 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0 ; 004db8b8 | void engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this, int enableExtended)
        ;   XREF to: 005024b0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x006810c8]                ; 004db8bd | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    ADD ESP,0x8                         ; 004db8c2
    MOV EDX,dword ptr [EAX + 0x15aea4]  ; 004db8c5 | g_CDemonSetInstance.selected_camera_index
    PUSH EDX                            ; 004db8cb
    PUSH EAX                            ; 004db8cc | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 004db8cd | void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x00679398]      ; 004db8d2 | int g_WindowHeight
    ADD ESP,0x8                         ; 004db8d8
    CMP ESI,0xf0                        ; 004db8db
    JLE 0x004dba75                      ; 004db8e1 | LAB_004dba75
        ;   XREF to: 004dba75 (CONDITIONAL_JUMP)
    MOV EAX,[0x020a5720]                ; 004db8e7 | CBitFont * g_ThemeFont
    MOV [0x02cf1cd0],EAX                ; 004db8ec | CBitFont * g_EditorFont
        ;   Label: LAB_004db8ec
    CMP EBX,0x2                         ; 004db8f1
        ;   Label: LAB_004db8f1
    JNZ 0x004db902                      ; 004db8f4 | LAB_004db902
        ;   XREF to: 004db902 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db8f6
    PUSH EAX                            ; 004db8f9
    CALL core_game.cpp_CGame_FUN_004e36f0 ; 004db8fa | void core_game.cpp_CGame_FUN_004e36f0(CGame * this_ptr)
        ;   XREF to: 004e36f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db8ff
    CMP EBX,0x3                         ; 004db902
        ;   Label: LAB_004db902
    JNZ 0x004db915                      ; 004db905 | LAB_004db915
        ;   XREF to: 004db915 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004db907
    MOV EDX,dword ptr [EBP + 0x14]      ; 004db909
    PUSH EDX                            ; 004db90c
    CALL core_game.cpp_CGame_saveGame_FUN_004e0cd0 ; 004db90d | void core_game.cpp_CGame_saveGame_FUN_004e0cd0(CGame * this_ptr, char * save_filename)
        ;   XREF to: 004e0cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db912
    CMP EBX,0x4                         ; 004db915
        ;   Label: LAB_004db915
    JNZ 0x004db93f                      ; 004db918 | LAB_004db93f
        ;   XREF to: 004db93f (CONDITIONAL_JUMP)
    PUSH 0x62b7eb                       ; 004db91a | = "Quit" | s_Quit_0062b7eb = Quit
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db91f | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db924
    PUSH EAX                            ; 004db927
    MOV ECX,dword ptr [0x00678a60]      ; 004db928 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 004db92e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 004db92f | int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db934
    TEST EAX,EAX                        ; 004db937
    JNZ 0x004dba7f                      ; 004db939 | LAB_004dba7f
        ;   XREF to: 004dba7f (CONDITIONAL_JUMP)
    CMP EBX,0x5                         ; 004db93f
        ;   Label: LAB_004db93f
    JNZ 0x004db966                      ; 004db942 | LAB_004db966
        ;   XREF to: 004db966 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00680d50]      ; 004db944 | CScript g_CScriptInstance | CScript * g_CScriptPtr
    PUSH EBX                            ; 004db94a | CScript g_CScriptInstance
    CALL core_script.cpp_CScript_SkipCinematic_FUN_005602e0 ; 004db94b | undefined core_script.cpp_CScript_SkipCinematic_FUN_005602e0()
        ;   XREF to: 005602e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db950
    TEST EAX,EAX                        ; 004db953
    SETZ AL                             ; 004db955
    MOV EDX,dword ptr [EBP + 0x14]      ; 004db958
    AND EAX,0xff                        ; 004db95b
    MOV dword ptr [EDX + 0xcc],EAX      ; 004db960
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004db966 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_004db966
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db96b
    CMP dword ptr [EAX + 0xcc],0x0      ; 004db96e
    JNZ 0x004db985                      ; 004db975 | LAB_004db985
        ;   XREF to: 004db985 (CONDITIONAL_JUMP)
    MOV EAX,[0x00681ef8]                ; 004db977 | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH EAX                            ; 004db97c | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_init_FUN_005b2dd0 ; 004db97d | void core_sound.cpp_CSound_init_FUN_005b2dd0(CSound * this_ptr)
        ;   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db982
    MOV EDX,dword ptr [0x02db87d0]      ; 004db985 | int g_LocalHeroIndex
        ;   Label: LAB_004db985
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db98b
    MOV EDX,dword ptr [EDX*0x4 + 0x2db87c0] ; 004db98e | CHero *[4] g_HeroActors
    MOV EAX,dword ptr [EAX + 0xc4]      ; 004db995
    PUSH 0x0                            ; 004db99b
    MOV dword ptr [EDX + 0x1f734],EAX   ; 004db99d
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db9a3
    PUSH EAX                            ; 004db9a9
    MOV EBX,EDI                         ; 004db9aa
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004db9ac | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db9b1
    JMP 0x004db669                      ; 004db9b4 | LAB_004db669
        ;   XREF to: 004db669 (UNCONDITIONAL_JUMP)
    PUSH 0x62b6e2                       ; 004db9b9 | = "Leave network game" | s_Leave_network_game_0062b6e2 = Leave network game
        ;   Label: LAB_004db9b9
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db9be | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db9c3
    PUSH EAX                            ; 004db9c6
    PUSH 0x2d828d4                      ; 004db9c7 | CPickList g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db9cc | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db9d1
    PUSH 0x62b6f5                       ; 004db9d4 | = "Return to game" | s_Return_to_game_0062b6f5 = Return to game
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db9d9 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db9de
    PUSH EAX                            ; 004db9e1
    PUSH 0x2d828d4                      ; 004db9e2 | CPickList g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db9e7 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004db9ec
    PUSH EDI                            ; 004db9ef
    PUSH EBX                            ; 004db9f0
    PUSH 0x62b704                       ; 004db9f1 | = "You are connect to a network game.\nD..." | s_You_are_connect_to_a_net_0062b704 = You are connect to a network game.
        ; Do you want to leave the game?
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db9f6 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004db9fb
    PUSH EAX                            ; 004db9fe
    PUSH 0x2d828d4                      ; 004db9ff | CPickList g_CPickList
    CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0 ; 004dba04 | void shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, int config_parameter)
        ;   XREF to: 004a3ef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004dba09
    MOV dword ptr [0x02d828d0],EDI      ; 004dba0c | int g_CheatSystemEnabled
    JMP 0x004db669                      ; 004dba12 | LAB_004db669
        ;   XREF to: 004db669 (UNCONDITIONAL_JUMP)
    PUSH 0x62b746                       ; 004dba17 | = "Abort network game" | s_Abort_network_game_0062b746 = Abort network game
        ;   Label: LAB_004dba17
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dba1c | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004dba21
    PUSH EAX                            ; 004dba24
    PUSH 0x2d828d4                      ; 004dba25 | CPickList g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004dba2a | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dba2f
    PUSH 0x62b759                       ; 004dba32 | = "Return to game" | s_Return_to_game_0062b759 = Return to game
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dba37 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004dba3c
    PUSH EAX                            ; 004dba3f
    PUSH 0x2d828d4                      ; 004dba40 | CPickList g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004dba45 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dba4a
    PUSH EDI                            ; 004dba4d
    PUSH EBX                            ; 004dba4e
    PUSH 0x62b768                       ; 004dba4f | = "You are hosting a network game.\nDo y..." | s_You_are_hosting_a_networ_0062b768 = You are hosting a network game.
        ; Do you want to abort the game?
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dba54 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004dba59
    PUSH EAX                            ; 004dba5c
    PUSH 0x2d828d4                      ; 004dba5d | CPickList g_CPickList
    CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0 ; 004dba62 | void shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, int config_parameter)
        ;   XREF to: 004a3ef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004dba67
    MOV dword ptr [0x02d828d0],EDI      ; 004dba6a | int g_CheatSystemEnabled
    JMP 0x004db669                      ; 004dba70 | LAB_004db669
        ;   XREF to: 004db669 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x020a5724]                ; 004dba75 | CBitFont * g_SmallEditorFont
        ;   Label: LAB_004dba75
    JMP 0x004db8ec                      ; 004dba7a | LAB_004db8ec
        ;   XREF to: 004db8ec (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 004dba7f
        ;   Label: LAB_004dba7f
    LEA EAX,[EBP + 0xfffff7a0]          ; 004dba81
    PUSH EAX                            ; 004dba87
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004dba88 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    JMP 0x004db431                      ; 004dba8d | LAB_004db431
        ;   XREF to: 004db431 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x00680a00]                ; 004dba92 | undefined4 DAT_02f7c740 | CNetGame * g_CNetGameInstance
        ;   Label: LAB_004dba92
    CMP dword ptr [EAX + 0x168],0x0     ; 004dba97 | undefined4 DAT_02f7c8a8
    JNZ 0x004db679                      ; 004dba9e | LAB_004db679
        ;   XREF to: 004db679 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004dbaa4
    JNZ 0x004db679                      ; 004dbaa6 | LAB_004db679
        ;   XREF to: 004db679 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d03e94],0x0      ; 004dbaac | int g_UseExternalRenderer
    JZ 0x004dbad1                       ; 004dbab3 | LAB_004dbad1
        ;   XREF to: 004dbad1 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004dbab5
    CALL wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30 ; 004dbab6 | void wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30(int skip_buffer_copy)
        ;   XREF to: 005b7c30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004dbabb
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0 ; 004dbabe | void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0()
        ;   XREF to: 005f35e0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbac3
    INC dword ptr [EAX + 0x26c]         ; 004dbac6
    JMP 0x004db67e                      ; 004dbacc | LAB_004db67e
        ;   XREF to: 004db67e (UNCONDITIONAL_JUMP)
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004dbad1 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_004dbad1
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbad6
    INC dword ptr [EAX + 0x26c]         ; 004dbad9
    JMP 0x004db67e                      ; 004dbadf | LAB_004db67e
        ;   XREF to: 004db67e (UNCONDITIONAL_JUMP)
    PUSH 0x1c                           ; 004dbae4
        ;   Label: LAB_004dbae4
    MOV EAX,[0x0067cf44]                ; 004dbae6 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 004dbaeb | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 004dbaec | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dbaee
    ADD ESP,0x8                         ; 004dbaf1
    TEST EAX,EAX                        ; 004dbaf4
    JNZ 0x004db434                      ; 004dbaf6 | LAB_004db434
        ;   XREF to: 004db434 (CONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 004dbafc
    FLDZ                                ; 004dbaff
    FCOMPP                              ; 004dbb01
    FNSTSW AX                           ; 004dbb03
    SAHF                                ; 004dbb05
    JA 0x004dbb3f                       ; 004dbb06 | LAB_004dbb3f
        ;   XREF to: 004dbb3f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbb08
    FLD float ptr [EBP + -0x4]          ; 004dbb0b
    FADD float ptr [EAX + 0x264]        ; 004dbb0e
    FST float ptr [EBP + -0x4]          ; 004dbb14
    FCOMP double ptr [0x0062b82d]       ; 004dbb17 | double DOUBLE_0062b82d
    FNSTSW AX                           ; 004dbb1d
    SAHF                                ; 004dbb1f
    JBE 0x004db6c9                      ; 004dbb20 | LAB_004db6c9
        ;   XREF to: 004db6c9 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + 0x14]      ; 004dbb26
    PUSH ECX                            ; 004dbb29
    MOV EBX,0xbf800000                  ; 004dbb2a
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004e0960 ; 004dbb2f | void core_game.cpp_CGame_beginFadeOut_FUN_004e0960(CGame * this_ptr)
        ;   XREF to: 004e0960 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x4],EBX      ; 004dbb34
    ADD ESP,0x4                         ; 004dbb37
    JMP 0x004db6c9                      ; 004dbb3a | LAB_004db6c9
        ;   XREF to: 004db6c9 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + 0x14]      ; 004dbb3f
        ;   Label: LAB_004dbb3f
    PUSH ESI                            ; 004dbb42
    CALL core_game.cpp_CGame_fadeIn_FUN_004e0b90 ; 004dbb43 | undefined4 core_game.cpp_CGame_fadeIn_FUN_004e0b90(CGame * this_ptr)
        ;   XREF to: 004e0b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004dbb48
    TEST EAX,EAX                        ; 004dbb4b
    JNZ 0x004db434                      ; 004dbb4d | LAB_004db434
        ;   XREF to: 004db434 (CONDITIONAL_JUMP)
    JMP 0x004db6c9                      ; 004dbb53 | LAB_004db6c9
        ;   XREF to: 004db6c9 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + 0x14]      ; 004dbb58
        ;   Label: LAB_004dbb58
    PUSH ECX                            ; 004dbb5b
    CALL core_game.cpp_CGame_openSomething_FUN_004e2910 ; 004dbb5c | void core_game.cpp_CGame_openSomething_FUN_004e2910(CGame * this_ptr)
        ;   XREF to: 004e2910 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbb61
    MOV EBX,dword ptr [EAX + 0x200]     ; 004dbb64
    ADD ESP,0x4                         ; 004dbb6a
    TEST EBX,EBX                        ; 004dbb6d
    JZ 0x004dbb76                       ; 004dbb6f | LAB_004dbb76
        ;   XREF to: 004dbb76 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004dbb71 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbb76
        ;   Label: LAB_004dbb76
    MOV ESI,dword ptr [EAX + 0x9c4]     ; 004dbb79
    TEST ESI,ESI                        ; 004dbb7f
    JZ 0x004dbb8d                       ; 004dbb81 | LAB_004dbb8d
        ;   XREF to: 004dbb8d (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 004dbb83
    MOV dword ptr [EBP + -0xc],EBX      ; 004dbb85
    JMP 0x004db434                      ; 004dbb88 | LAB_004db434
        ;   XREF to: 004db434 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x8],0x0      ; 004dbb8d
        ;   Label: LAB_004dbb8d
    JZ 0x004db357                       ; 004dbb91 | LAB_004db357
        ;   XREF to: 004db357 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x00681ef8]      ; 004dbb97 | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH ECX                            ; 004dbb9d | CSound g_CSoundInstance
    MOV dword ptr [EBP + -0x8],ESI      ; 004dbb9e
    CALL core_sound.cpp_CSound_init_FUN_005b2dd0 ; 004dbba1 | void core_sound.cpp_CSound_init_FUN_005b2dd0(CSound * this_ptr)
        ;   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004dbba6
    JMP 0x004db357                      ; 004dbba9 | LAB_004db357
        ;   XREF to: 004db357 (UNCONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 004dbbae
        ;   Label: LAB_004dbbae
    JZ 0x004db4e8                       ; 004dbbb1 | LAB_004db4e8
        ;   XREF to: 004db4e8 (CONDITIONAL_JUMP)
    JMP 0x004db4b4                      ; 004dbbb7 | LAB_004db4b4
        ;   XREF to: 004db4b4 (UNCONDITIONAL_JUMP)

