; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_game_cpp_CGame_runGameSession_FUN_004daf80(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; CPickList        Stack[-0x870]:936  local_870
; CPickList        Stack[-0x4c8]:936  local_4c8
; char[256]        Stack[-0x120]:256  local_120
; undefined1 *     Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 0052449b
;   core_msnedit.cpp_CDemonMission_playMission_FUN_00538ba0 at 00538cb8
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
;   undefined4 s_ashlight_0062b6c8
;   undefined4 s_shlight_0062b6c9
;   TerminatedCString s_core_game_cpp_0062b6d1
;   TerminatedCString s_Leave_network_game_0062b6e2
;   ... and 65 more
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_init_FUN_004727c0
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80
;   core_game.cpp_CGame_beginFadeIn_FUN_004e0920
;   core_game.cpp_CGame_beginFadeOut_FUN_004e0960
;   core_game.cpp_CGame_clearOverlay_FUN_004d7f80
;   core_game.cpp_CGame_fadeIn_FUN_004e0b90
;   core_game.cpp_CGame_loadAssets_FUN_004e07a0
;   core_game.cpp_CGame_playerControls_FUN_004dbd80
;   core_game.cpp_CGame_processFrame_FUN_004da100
;   core_game.cpp_CGame_processFudge_FUN_004d8750
;   core_game.cpp_CGame_processHotkeys_FUN_004dcee0
;   core_game.cpp_CGame_promptLoadGame_FUN_004e36f0
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0
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
    MOV ESI,dword ptr [0x0066e8e0]      ; 004daf8c | g_CConsolePtr
    XOR EDX,EDX                         ; 004daf92
    PUSH ESI                            ; 004daf94 | g_CConsoleInstance
    MOV dword ptr [EBP + -0x4],EDX      ; 004daf95
    MOV dword ptr [EBP + -0xc],EDX      ; 004daf98
    CALL engine_console.cpp_CConsole_reset_FUN_00441a40 ; 004daf9b
        ;   XREF to: 00441a40 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_reset_FUN_00441a40(CConsole * this_ptr)
    ADD ESP,0x4                         ; 004dafa0
    PUSH 0x62b641                       ; 004dafa3 | = "Nocturne is alive and kicking\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 004dafa8 | g_CConsolePtr
    PUSH EDI                            ; 004dafae | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004dafaf
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004dafb4
    PUSH 0x62b660                       ; 004dafb7 | = "12:05:01"
    PUSH 0x62b669                       ; 004dafbc | = "Jan 10 2000"
    PUSH 0x62b675                       ; 004dafc1 | = "game.cpp built on %s %s\n\n"
    MOV EAX,[0x0066e8e0]                ; 004dafc6 | g_CConsoleInstance | g_CConsolePtr
    PUSH EAX                            ; 004dafcb | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004dafcc
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 004dafd1
    MOV EDX,dword ptr [0x03f98474]      ; 004dafd4 | g_TotalPhysicalMemory
    PUSH EDX                            ; 004dafda
    PUSH 0x62b68f                       ; 004dafdb | = "System RAM: %d\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 004dafe0 | g_CConsoleInstance | g_CConsolePtr
    PUSH ECX                            ; 004dafe6 | g_CConsoleInstance
    MOV EBX,0x1                         ; 004dafe7
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004dafec
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004daff1
    MOV dword ptr [EBP + -0x8],EBX      ; 004daff4
    MOV EBX,dword ptr [0x03f98478]      ; 004daff7 | g_MessageFlags
    PUSH EBX                            ; 004daffd
    PUSH 0x62b69f                       ; 004daffe | = "Swap file: %d\n"
    MOV ESI,dword ptr [0x0066e8e0]      ; 004db003 | g_CConsolePtr
    PUSH ESI                            ; 004db009 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004db00a
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004db00f
    LEA EAX,[EBP + 0xfffffef0]          ; 004db012
    PUSH EAX                            ; 004db018
    MOV EDI,dword ptr [0x00678a60]      ; 004db019 | g_CEditorToolsPtr
    PUSH EDI                            ; 004db01f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590 ; 004db020
        ;   XREF to: 004a2590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(CEditorTools * this_ptr, char * output_buffer)
    ADD ESP,0x8                         ; 004db025
    LEA EAX,[EBP + 0xfffffef0]          ; 004db028
    PUSH EAX                            ; 004db02e
    PUSH 0x62b6ae                       ; 004db02f | = "%s\n"
    MOV EAX,[0x0066e8e0]                ; 004db034 | g_CConsoleInstance | g_CConsolePtr
    PUSH EAX                            ; 004db039 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004db03a
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004db03f
    MOV dword ptr [EBP + 0xfffffff0],ESP ; 004db042
    MOV EAX,dword ptr [EBP + -0x10]     ; 004db048
    PUSH EAX                            ; 004db04b
    PUSH 0x62b6b2                       ; 004db04c | = "ESP: %08X\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 004db051 | g_CConsoleInstance | g_CConsolePtr
    PUSH EDX                            ; 004db057 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004db058
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
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
    MOV dword ptr [0x02d828d0],ECX      ; 004db175 | g_CheatSystemEnabled
    MOV dword ptr [EAX + 0x210],ECX     ; 004db17b
    CALL core_game.cpp_CGame_setGameRes_FUN_004dade0 ; 004db181
        ;   XREF to: 004dade0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setGameRes_FUN_004dade0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db186
    PUSH 0x62b6bd                       ; 004db189 | = "VELOCITY"
    CALL crt_env.c_getenv_FUN_006013f0  ; 004db18e
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    ADD ESP,0x4                         ; 004db193
    TEST EAX,EAX                        ; 004db196
    JZ 0x004db1a7                       ; 004db198
        ;   XREF to: 004db1a7 (CONDITIONAL_JUMP)  ; LAB_004db1a7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db19a
    MOV dword ptr [EAX + 0x210],0x1     ; 004db19d
    PUSH 0x2d7eaf0                      ; 004db1a7 | g_CDemonLightInstance
        ;   Label: LAB_004db1a7
    CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0 ; 004db1ac
        ;   XREF to: 004727c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_004727c0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 004db1b1
    MOV ESI,0x62b6c6                    ; 004db1b4 | = "Flashlight"
    MOV EDI,0x2d7eb30                   ; 004db1b9 | g_CDemonLightInstance.base.camera_name[0]
    PUSH EDI                            ; 004db1be | g_CDemonLightInstance.base.camera_name[0]
    MOV AL,byte ptr [ESI]               ; 004db1bf | = "Flashlight" | s_ashlight_0062b6c8
        ;   Label: LAB_004db1bf
    MOV byte ptr [EDI],AL               ; 004db1c1 | g_CDemonLightInstance.base.camera_name[0] | g_CDemonLightInstance.base.camera_name[2]
    CMP AL,0x0                          ; 004db1c3
    JZ 0x004db1d7                       ; 004db1c5
        ;   XREF to: 004db1d7 (CONDITIONAL_JUMP)  ; LAB_004db1d7
    MOV AL,byte ptr [ESI + 0x1]         ; 004db1c7 | s_lashlight_0062b6c7 | s_shlight_0062b6c9
    ADD ESI,0x2                         ; 004db1ca
    MOV byte ptr [EDI + 0x1],AL         ; 004db1cd | g_CDemonLightInstance.base.camera_name[1] | g_CDemonLightInstance.base.camera_name[3]
    ADD EDI,0x2                         ; 004db1d0
    CMP AL,0x0                          ; 004db1d3
    JNZ 0x004db1bf                      ; 004db1d5
        ;   XREF to: 004db1bf (CONDITIONAL_JUMP)  ; LAB_004db1bf
    POP EDI                             ; 004db1d7
        ;   Label: LAB_004db1d7
    MOV EDI,0x42800000                  ; 004db1d8
    MOV EAX,[0x006810c8]                ; 004db1dd | g_CDemonSetInstance | g_CDemonSetPtr
    XOR ESI,ESI                         ; 004db1e2
    PUSH EAX                            ; 004db1e4 | g_CDemonSetInstance
    MOV dword ptr [0x02d807a4],ESI      ; 004db1e5 | g_CDemonLightInstance.light_enabled_flag
    MOV dword ptr [0x02d7ec30],EDI      ; 004db1eb | g_CDemonLightInstance.base.max_distance
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 004db1f1
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    MOV EDX,dword ptr [0x02d82d80]      ; 004db1f6 | g_HasSavedLightState
    ADD ESP,0x4                         ; 004db1fc
    TEST EDX,EDX                        ; 004db1ff
    JZ 0x004db5a7                       ; 004db201
        ;   XREF to: 004db5a7 (CONDITIONAL_JUMP)  ; LAB_004db5a7
    PUSH 0x2d82d84                      ; 004db207 | g_MasterLightStateSaveBuffer
    MOV dword ptr [0x02d82d80],ESI      ; 004db20c | g_HasSavedLightState
    MOV ESI,dword ptr [0x006810c8]      ; 004db212 | g_CDemonSetPtr
    PUSH ESI                            ; 004db218 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_loadMasterLightStates_FUN_00571130 ; 004db219
        ;   XREF to: 00571130 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_loadMasterLightStates_FUN_00571130(CDemonSet * this_ptr, int * light_state_buffer)
    ADD ESP,0x8                         ; 004db21e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db221
        ;   Label: LAB_004db221
    MOV EDI,dword ptr [EAX + 0x224]     ; 004db224
    CMP EDI,0x8000                      ; 004db22a
    JGE 0x004db5bb                      ; 004db230
        ;   XREF to: 004db5bb (CONDITIONAL_JUMP)  ; LAB_004db5bb
    MOV dword ptr [EAX + 0x224],0x8000  ; 004db236
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db240
        ;   Label: LAB_004db240
    MOV ECX,dword ptr [EAX + 0x224]     ; 004db243
    PUSH ECX                            ; 004db249
    MOV EBX,dword ptr [0x006810c8]      ; 004db24a | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 004db250 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setGamma_FUN_00570d60 ; 004db251
        ;   XREF to: 00570d60 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet * this_ptr, int gamma)
    ADD ESP,0x8                         ; 004db256
    MOV ESI,dword ptr [EBP + 0x14]      ; 004db259
    PUSH ESI                            ; 004db25c
    CALL core_game.cpp_CGame_clearOverlay_FUN_004d7f80 ; 004db25d
        ;   XREF to: 004d7f80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_clearOverlay_FUN_004d7f80(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db262
    PUSH 0x2d828d4                      ; 004db265 | g_CPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 004db26a
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    MOV EDI,dword ptr [ESI + 0x274]     ; 004db26f
    ADD ESP,0x4                         ; 004db275
    TEST EDI,EDI                        ; 004db278
    JZ 0x004db5d6                       ; 004db27a
        ;   XREF to: 004db5d6 (CONDITIONAL_JUMP)  ; LAB_004db5d6
    MOV EAX,[0x00680d50]                ; 004db280 | g_CScriptInstance | g_CScriptPtr
    PUSH 0x1                            ; 004db285
    MOV EBX,dword ptr [EAX + 0xc]       ; 004db287 | g_CScriptInstance.focus_actor
    PUSH EBX                            ; 004db28a
    MOV ESI,dword ptr [0x006810c8]      ; 004db28b | g_CDemonSetPtr
    PUSH ESI                            ; 004db291 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 004db292
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
    ADD ESP,0xc                         ; 004db297
    MOV EDI,dword ptr [EBP + 0x14]      ; 004db29a
        ;   Label: LAB_004db29a
    PUSH EDI                            ; 004db29d
    CALL core_game.cpp_CGame_beginFadeIn_FUN_004e0920 ; 004db29e
        ;   XREF to: 004e0920 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeIn_FUN_004e0920(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db2a3
    PUSH EDI                            ; 004db2a6
    CALL core_game.cpp_CGame_loadAssets_FUN_004e07a0 ; 004db2a7
        ;   XREF to: 004e07a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_loadAssets_FUN_004e07a0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db2ac
    PUSH 0x3                            ; 004db2af
    MOV EDX,dword ptr [0x00680a00]      ; 004db2b1 | g_CNetGameInstance | g_CNetGamePtr
    PUSH EDX                            ; 004db2b7 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 ; 004db2b8
        ;   XREF to: 005401e0 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 004db2bd
    TEST EAX,EAX                        ; 004db2c0
    JZ 0x004db434                       ; 004db2c2
        ;   XREF to: 004db434 (CONDITIONAL_JUMP)  ; LAB_004db434
    PUSH 0x4                            ; 004db2c8
    MOV ECX,dword ptr [0x00680a00]      ; 004db2ca | g_CNetGameInstance | g_CNetGamePtr
    PUSH ECX                            ; 004db2d0 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 ; 004db2d1
        ;   XREF to: 005401e0 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 004db2d6
    TEST EAX,EAX                        ; 004db2d9
    JZ 0x004db434                       ; 004db2db
        ;   XREF to: 004db434 (CONDITIONAL_JUMP)  ; LAB_004db434
    MOV EAX,[0x00680a00]                ; 004db2e1 | g_CNetGameInstance | g_CNetGamePtr
    PUSH EDI                            ; 004db2e6
    MOV dword ptr [EAX + 0x4],0x3       ; 004db2e7 | g_CNetGameInstance.network_mode
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 004db2ee
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db2f3
    PUSH EDI                            ; 004db2f6
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 ; 004db2f7
        ;   XREF to: 004dce70 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db2fc
    MOV EBX,EDI                         ; 004db2ff
    MOV EDI,dword ptr [0x00680a00]      ; 004db301 | g_CNetGamePtr
    PUSH EDI                            ; 004db307 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 ; 004db308
        ;   XREF to: 00543150 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004db30d
    MOV EAX,[0x0067cf80]                ; 004db310 | g_CLevelLoaderInstance | g_CLevelLoaderPtr
    PUSH EAX                            ; 004db315 | g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_cleanup_FUN_00504720 ; 004db316
        ;   XREF to: 00504720 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_cleanup_FUN_00504720(CLevelLoader * this_ptr)
    ADD ESP,0x4                         ; 004db31b
    PUSH 0x581                          ; 004db31e
    PUSH 0x62b6d1                       ; 004db323 | = "..\\core\\game.cpp"
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 004db328
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * source_filename, int source_line)
    MOV EAX,[0x02db87d0]                ; 004db32d | g_LocalHeroIndex
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004db332 | g_HeroActors
    MOV EAX,dword ptr [EBX + 0xc4]      ; 004db339
    MOV dword ptr [EDX + 0x1f734],EAX   ; 004db33f
    ADD ESP,0x8                         ; 004db345
    MOV dword ptr [EBX + 0x258],0x0     ; 004db348
    MOV EDI,0x1                         ; 004db352
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db357
        ;   Label: LAB_004db357
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004db35a
    JZ 0x004db5f1                       ; 004db361
        ;   XREF to: 004db5f1 (CONDITIONAL_JUMP)  ; LAB_004db5f1
    XOR EAX,EAX                         ; 004db367
        ;   Label: LAB_004db367
    PUSH EAX                            ; 004db369
        ;   Label: LAB_004db369
    MOV EBX,dword ptr [0x0067cf44]      ; 004db36a | g_CKeysInstance | g_CKeysPtr
    PUSH EBX                            ; 004db370 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0 ; 004db371
        ;   XREF to: 005024b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this_ptr, int enable_extended)
    ADD ESP,0x8                         ; 004db376
    MOV ESI,dword ptr [EBP + 0x14]      ; 004db379
    PUSH ESI                            ; 004db37c
    CALL core_game.cpp_CGame_processHotkeys_FUN_004dcee0 ; 004db37d
        ;   XREF to: 004dcee0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processHotkeys_FUN_004dcee0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db382
    PUSH ESI                            ; 004db385
    CALL core_game.cpp_CGame_updateStatusDisplays_FUN_004d85a0 ; 004db386
        ;   XREF to: 004d85a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateStatusDisplays_FUN_004d85a0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db38b
    PUSH ESI                            ; 004db38e
    CALL core_game.cpp_CGame_processFudge_FUN_004d8750 ; 004db38f
        ;   XREF to: 004d8750 (UNCONDITIONAL_CALL)  ; int core_game.cpp_CGame_processFudge_FUN_004d8750(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db394
    PUSH ESI                            ; 004db397
    CALL core_game.cpp_CGame_playerControls_FUN_004dbd80 ; 004db398
        ;   XREF to: 004dbd80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_playerControls_FUN_004dbd80(CGame * this_ptr)
    MOV EBX,dword ptr [ESI + 0x274]     ; 004db39d
    ADD ESP,0x4                         ; 004db3a3
    TEST EBX,EBX                        ; 004db3a6
    JZ 0x004db3b7                       ; 004db3a8
        ;   XREF to: 004db3b7 (CONDITIONAL_JUMP)  ; LAB_004db3b7
    CMP dword ptr [ESI + 0xcc],0x0      ; 004db3aa
    JZ 0x004db605                       ; 004db3b1
        ;   XREF to: 004db605 (CONDITIONAL_JUMP)  ; LAB_004db605
    MOV ECX,dword ptr [EBP + 0x14]      ; 004db3b7
        ;   Label: LAB_004db3b7
    PUSH ECX                            ; 004db3ba
    XOR EBX,EBX                         ; 004db3bb
    CALL core_game.cpp_CGame_processFrame_FUN_004da100 ; 004db3bd
        ;   XREF to: 004da100 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processFrame_FUN_004da100(CGame * this_ptr)
    MOV ESI,dword ptr [0x02d828d0]      ; 004db3c2 | g_CheatSystemEnabled
    ADD ESP,0x4                         ; 004db3c8
    TEST ESI,ESI                        ; 004db3cb
    JZ 0x004db6e3                       ; 004db3cd
        ;   XREF to: 004db6e3 (CONDITIONAL_JUMP)  ; LAB_004db6e3
    MOV EAX,[0x02d828d4]                ; 004db3d3 | g_CPickList
    TEST EAX,EAX                        ; 004db3d8
    JLE 0x004db663                      ; 004db3da
        ;   XREF to: 004db663 (CONDITIONAL_JUMP)  ; LAB_004db663
    PUSH 0x2d828d4                      ; 004db3e0 | g_CPickList
    CALL shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 ; 004db3e5
        ;   XREF to: 004a4340 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004db3ea
    MOV ESI,EAX                         ; 004db3ed
    CMP EAX,-0x2                        ; 004db3ef
    JZ 0x004db41b                       ; 004db3f2
        ;   XREF to: 004db41b (CONDITIONAL_JUMP)  ; LAB_004db41b
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004db3f4
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ECX,dword ptr [0x00678a60]      ; 004db3f9 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004db3ff | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004db400
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004db405
    PUSH 0x2d828d4                      ; 004db408 | g_CPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 004db40d
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004db412
    MOV dword ptr [0x02d828d0],EBX      ; 004db415 | g_CheatSystemEnabled
    TEST ESI,ESI                        ; 004db41b
        ;   Label: LAB_004db41b
    JNZ 0x004db669                      ; 004db41d
        ;   XREF to: 004db669 (CONDITIONAL_JUMP)  ; LAB_004db669
    PUSH 0x1                            ; 004db423
    MOV EDI,dword ptr [0x00680a00]      ; 004db425 | g_CNetGamePtr
    PUSH EDI                            ; 004db42b | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00 ; 004db42c
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004db431
        ;   Label: LAB_004db431
    MOV EAX,[0x02db87d0]                ; 004db434 | g_LocalHeroIndex
        ;   Label: LAB_004db434
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004db439 | g_HeroActors
    PUSH EAX                            ; 004db440
    MOV EDX,dword ptr [EAX + 0x154]     ; 004db441
    CALL dword ptr [EDX + 0x120]        ; 004db447
    ADD ESP,0x4                         ; 004db44d
    CMP EAX,0x2                         ; 004db450
    JNZ 0x004db4f9                      ; 004db453
        ;   XREF to: 004db4f9 (CONDITIONAL_JUMP)  ; LAB_004db4f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db459
    CMP dword ptr [EAX + 0x9c4],0x0     ; 004db45c
    JNZ 0x004db4f9                      ; 004db463
        ;   XREF to: 004db4f9 (CONDITIONAL_JUMP)  ; LAB_004db4f9
    LEA EAX,[EBP + 0xfffffb48]          ; 004db469
    PUSH EAX                            ; 004db46f
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004db470
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004db475
    PUSH 0x62b7f0                       ; 004db478 | = "Load game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db47d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db482
    PUSH EAX                            ; 004db485
    LEA EAX,[EBP + 0xfffffb48]          ; 004db486
    PUSH EAX                            ; 004db48c
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db48d
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004db492
    PUSH 0x62b7fa                       ; 004db495 | = "Quit"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db49a
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db49f
    PUSH EAX                            ; 004db4a2
    LEA EAX,[EBP + 0xfffffb48]          ; 004db4a3
    PUSH EAX                            ; 004db4a9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db4aa
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004db4af
    XOR EBX,EBX                         ; 004db4b2
    PUSH EBX                            ; 004db4b4
        ;   Label: LAB_004db4b4
    PUSH -0x1                           ; 004db4b5
    PUSH 0x62b7ff                       ; 004db4b7 | = "Game Over"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db4bc
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db4c1
    PUSH EAX                            ; 004db4c4
    LEA EAX,[EBP + 0xfffffb48]          ; 004db4c5
    PUSH EAX                            ; 004db4cb
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004db4cc
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004db4d1
    TEST EAX,EAX                        ; 004db4d4
    JNZ 0x004dbbae                      ; 004db4d6
        ;   XREF to: 004dbbae (CONDITIONAL_JUMP)  ; LAB_004dbbae
    MOV ECX,dword ptr [EBP + 0x14]      ; 004db4dc
    PUSH ECX                            ; 004db4df
    CALL core_game.cpp_CGame_promptLoadGame_FUN_004e36f0 ; 004db4e0
        ;   XREF to: 004e36f0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_promptLoadGame_FUN_004e36f0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db4e5
    PUSH 0x0                            ; 004db4e8
        ;   Label: LAB_004db4e8
    LEA EAX,[EBP + 0xfffffb48]          ; 004db4ea
    PUSH EAX                            ; 004db4f0
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004db4f1
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004db4f6
    MOV EBX,dword ptr [0x0067d550]      ; 004db4f9 | g_CDemonMissionInstance | g_CDemonMissionPtr
        ;   Label: LAB_004db4f9
    PUSH EBX                            ; 004db4ff | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_countDamageableEnemies_FUN_00524e00 ; 004db500
        ;   XREF to: 00524e00 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_countDamageableEnemies_FUN_00524e00(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004db505
    PUSH 0x683                          ; 004db508
    MOV EDX,dword ptr [EBP + 0x14]      ; 004db50d
    PUSH 0x62b809                       ; 004db510 | = "..\\core\\game.cpp"
    MOV dword ptr [EDX + 0x24c],EAX     ; 004db515
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 004db51b
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * source_filename, int source_line)
    ADD ESP,0x8                         ; 004db520
    PUSH 0x0                            ; 004db523
    MOV ESI,dword ptr [0x0067cf44]      ; 004db525 | g_CKeysPtr
    PUSH ESI                            ; 004db52b | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0 ; 004db52c
        ;   XREF to: 005024b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this_ptr, int enable_extended)
    ADD ESP,0x8                         ; 004db531
    MOV EDI,dword ptr [0x00681ef8]      ; 004db534 | g_CSoundPtr
    PUSH EDI                            ; 004db53a | g_CSoundInstance
    CALL core_sound.cpp_CSound_shutdown_FUN_005b2f70 ; 004db53b
        ;   XREF to: 005b2f70 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_005b2f70(CSound * this_ptr)
    ADD ESP,0x4                         ; 004db540
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db543
    PUSH EAX                            ; 004db546
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 ; 004db547
        ;   XREF to: 004daed0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db54c
    MOV EAX,[0x0067cf44]                ; 004db54f | g_CKeysPtr
    PUSH EAX                            ; 004db554 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004db555 | g_CKeysInstance
    CALL dword ptr [EDX + 0x8]          ; 004db557
    ADD ESP,0x4                         ; 004db55a
    MOV EDX,dword ptr [0x006810c8]      ; 004db55d | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004db563 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0 ; 004db564
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004db569
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db56c
    PUSH 0x2d828d4                      ; 004db56f | g_CPickList
    MOV dword ptr [EAX + 0x1ec],0x3f800000 ; 004db574
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 004db57e
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004db583
    CALL core_inv.cpp_freeInventory_FUN_004fd510 ; 004db586
        ;   XREF to: 004fd510 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_freeInventory_FUN_004fd510()
    PUSH 0x6a7                          ; 004db58b
    PUSH 0x62b81a                       ; 004db590 | = "..\\core\\game.cpp"
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 004db595
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * source_filename, int source_line)
    MOV EAX,dword ptr [EBP + -0xc]      ; 004db59a
    ADD ESP,0x8                         ; 004db59d
    MOV ESP,EBP                         ; 004db5a0
    POP EBP                             ; 004db5a2
    POP EDI                             ; 004db5a3
    POP ESI                             ; 004db5a4
    POP EBX                             ; 004db5a5
    RET                                 ; 004db5a6
    MOV ECX,dword ptr [0x0067a3d0]      ; 004db5a7 | g_CFireEffectInstance | g_CFireEffectPtr
        ;   Label: LAB_004db5a7
    PUSH ECX                            ; 004db5ad | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_init_FUN_004c6c80 ; 004db5ae
        ;   XREF to: 004c6c80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_004c6c80(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004db5b3
    JMP 0x004db221                      ; 004db5b6
        ;   XREF to: 004db221 (UNCONDITIONAL_JUMP)  ; LAB_004db221
    CMP EDI,0x10000                     ; 004db5bb
        ;   Label: LAB_004db5bb
    JLE 0x004db240                      ; 004db5c1
        ;   XREF to: 004db240 (CONDITIONAL_JUMP)  ; LAB_004db240
    MOV dword ptr [EAX + 0x224],0x10000 ; 004db5c7
    JMP 0x004db240                      ; 004db5d1
        ;   XREF to: 004db240 (UNCONDITIONAL_JUMP)  ; LAB_004db240
    MOV EDX,dword ptr [ESI + 0x270]     ; 004db5d6
        ;   Label: LAB_004db5d6
    PUSH EDX                            ; 004db5dc
    MOV ECX,dword ptr [0x006810c8]      ; 004db5dd | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004db5e3 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 004db5e4
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004db5e9
    JMP 0x004db29a                      ; 004db5ec
        ;   XREF to: 004db29a (UNCONDITIONAL_JUMP)  ; LAB_004db29a
    CMP dword ptr [0x02d828d0],0x0      ; 004db5f1 | g_CheatSystemEnabled
        ;   Label: LAB_004db5f1
    JNZ 0x004db367                      ; 004db5f8
        ;   XREF to: 004db367 (CONDITIONAL_JUMP)  ; LAB_004db367
    MOV EAX,EDI                         ; 004db5fe
    JMP 0x004db369                      ; 004db600
        ;   XREF to: 004db369 (UNCONDITIONAL_JUMP)  ; LAB_004db369
    MOV EAX,[0x00680a00]                ; 004db605 | g_CNetGameInstance | g_CNetGamePtr
        ;   Label: LAB_004db605
    CMP dword ptr [EAX + 0x168],0x0     ; 004db60a | g_CNetGameInstance.has_pending_sim_frame
    JNZ 0x004db3b7                      ; 004db611
        ;   XREF to: 004db3b7 (CONDITIONAL_JUMP)  ; LAB_004db3b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db617
    CMP dword ptr [EAX + 0x240],0x0     ; 004db61a
    JNZ 0x004db3b7                      ; 004db621
        ;   XREF to: 004db3b7 (CONDITIONAL_JUMP)  ; LAB_004db3b7
    MOV EAX,[0x00680d50]                ; 004db627 | g_CScriptPtr
    MOV EBX,dword ptr [EAX + 0x10]      ; 004db62c | g_CScriptInstance.focus_actor_changed
    PUSH EBX                            ; 004db62f
    MOV ESI,dword ptr [EAX + 0xc]       ; 004db630 | g_CScriptInstance.focus_actor
    PUSH ESI                            ; 004db633
    MOV EAX,[0x006810c8]                ; 004db634 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 004db639 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 004db63a
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
    ADD ESP,0xc                         ; 004db63f
    TEST EAX,EAX                        ; 004db642
    JZ 0x004db652                       ; 004db644
        ;   XREF to: 004db652 (CONDITIONAL_JUMP)  ; LAB_004db652
    MOV EDX,dword ptr [EBP + 0x14]      ; 004db646
    PUSH EDX                            ; 004db649
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 004db64a
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db64f
    MOV EAX,[0x00680d50]                ; 004db652 | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_004db652
    MOV dword ptr [EAX + 0x10],0x0      ; 004db657 | g_CScriptInstance.focus_actor_changed
    JMP 0x004db3b7                      ; 004db65e
        ;   XREF to: 004db3b7 (UNCONDITIONAL_JUMP)  ; LAB_004db3b7
    MOV dword ptr [0x02d828d0],EBX      ; 004db663 | g_CheatSystemEnabled
        ;   Label: LAB_004db663
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db669
        ;   Label: LAB_004db669
    CMP dword ptr [EAX + 0xcc],0x0      ; 004db66c
    JZ 0x004dba92                       ; 004db673
        ;   XREF to: 004dba92 (CONDITIONAL_JUMP)  ; LAB_004dba92
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0 ; 004db679
        ;   XREF to: 005f35e0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0()
        ;   Label: LAB_004db679
    CMP dword ptr [0x03f98470],0x0      ; 004db67e | g_ApplicationActive
        ;   Label: LAB_004db67e
    JZ 0x004db6a4                       ; 004db685
        ;   XREF to: 004db6a4 (CONDITIONAL_JUMP)  ; LAB_004db6a4
    XOR EDX,EDX                         ; 004db687
    MOV EAX,[0x006810c8]                ; 004db689 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [0x03f98470],EDX      ; 004db68e | g_ApplicationActive
    MOV EDX,dword ptr [EAX + 0x15aea4]  ; 004db694 | g_CDemonSetInstance.selected_camera_index
    PUSH EDX                            ; 004db69a
    PUSH EAX                            ; 004db69b | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 004db69c
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004db6a1
    MOV EAX,[0x02db87d0]                ; 004db6a4 | g_LocalHeroIndex
        ;   Label: LAB_004db6a4
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004db6a9 | g_HeroActors
    PUSH EAX                            ; 004db6b0
    MOV EBX,dword ptr [EAX + 0x154]     ; 004db6b1
    CALL dword ptr [EBX + 0x120]        ; 004db6b7
    ADD ESP,0x4                         ; 004db6bd
    CMP EAX,0x2                         ; 004db6c0
    JZ 0x004dbae4                       ; 004db6c3
        ;   XREF to: 004dbae4 (CONDITIONAL_JUMP)  ; LAB_004dbae4
    MOV EAX,[0x00680d50]                ; 004db6c9 | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_004db6c9
    CMP dword ptr [EAX],0x0             ; 004db6ce | g_CScriptInstance
    JZ 0x004dbb58                       ; 004db6d1
        ;   XREF to: 004dbb58 (CONDITIONAL_JUMP)  ; LAB_004dbb58
    MOV dword ptr [EBP + -0xc],0x1      ; 004db6d7
    JMP 0x004db434                      ; 004db6de
        ;   XREF to: 004db434 (UNCONDITIONAL_JUMP)  ; LAB_004db434
    PUSH EDI                            ; 004db6e3
        ;   Label: LAB_004db6e3
    MOV EAX,[0x0067cf44]                ; 004db6e4 | g_CKeysPtr
    PUSH EAX                            ; 004db6e9 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004db6ea | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004db6ec
    ADD ESP,0x8                         ; 004db6ef
    TEST EAX,EAX                        ; 004db6f2
    JZ 0x004db669                       ; 004db6f4
        ;   XREF to: 004db669 (CONDITIONAL_JUMP)  ; LAB_004db669
    PUSH 0x2d828d4                      ; 004db6fa | g_CPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 004db6ff
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db704
    MOV dword ptr [EAX + 0x200],EBX     ; 004db707
    MOV EAX,[0x02db87d0]                ; 004db70d | g_LocalHeroIndex
    ADD ESP,0x4                         ; 004db712
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004db715 | g_HeroActors
    PUSH EAX                            ; 004db71c
    MOV EDX,dword ptr [EAX + 0x154]     ; 004db71d
    CALL dword ptr [EDX + 0x120]        ; 004db723
    ADD ESP,0x4                         ; 004db729
    CMP EAX,0x1                         ; 004db72c
    JG 0x004db434                       ; 004db72f
        ;   XREF to: 004db434 (CONDITIONAL_JUMP)  ; LAB_004db434
    MOV EAX,[0x00680a00]                ; 004db735 | g_CNetGameInstance | g_CNetGamePtr
    MOV EDX,dword ptr [EAX]             ; 004db73a | g_CNetGameInstance
    CMP EDX,0x2                         ; 004db73c
    JZ 0x004db9b9                       ; 004db73f
        ;   XREF to: 004db9b9 (CONDITIONAL_JUMP)  ; LAB_004db9b9
    CMP EDI,EDX                         ; 004db745
    JZ 0x004dba17                       ; 004db747
        ;   XREF to: 004dba17 (CONDITIONAL_JUMP)  ; LAB_004dba17
    MOV EBX,dword ptr [0x00681ef8]      ; 004db74d | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 004db753 | g_CSoundInstance
    CALL core_sound.cpp_CSound_shutdown_FUN_005b2f70 ; 004db754
        ;   XREF to: 005b2f70 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_005b2f70(CSound * this_ptr)
    ADD ESP,0x4                         ; 004db759
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db75c
    PUSH EAX                            ; 004db762
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004db763
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004db768
    PUSH 0x62b7a7                       ; 004db76b | = "Return"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db770
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db775
    PUSH EAX                            ; 004db778
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db779
    PUSH EAX                            ; 004db77f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db780
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004db785
    PUSH 0x62b7ae                       ; 004db788 | = "Options"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db78d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db792
    PUSH EAX                            ; 004db795
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db796
    PUSH EAX                            ; 004db79c
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db79d
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004db7a2
    PUSH 0x62b7b6                       ; 004db7a5 | = "Load game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db7aa
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db7af
    PUSH EAX                            ; 004db7b2
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db7b3
    PUSH EAX                            ; 004db7b9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db7ba
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004db7bf
    PUSH 0x62b7c0                       ; 004db7c2 | = "Save game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db7c7
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db7cc
    PUSH EAX                            ; 004db7cf
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db7d0
    PUSH EAX                            ; 004db7d6
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db7d7
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004db7dc
    PUSH 0x62b7ca                       ; 004db7df | = "Quit"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db7e4
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db7e9
    PUSH EAX                            ; 004db7ec
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db7ed
    PUSH EAX                            ; 004db7f3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db7f4
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db7f9
    MOV ESI,dword ptr [EAX + 0x228]     ; 004db7fc
    ADD ESP,0x8                         ; 004db802
    CMP EDI,ESI                         ; 004db805
    JNZ 0x004db826                      ; 004db807
        ;   XREF to: 004db826 (CONDITIONAL_JUMP)  ; LAB_004db826
    PUSH 0x62b7cf                       ; 004db809 | = "Skip cinematic."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db80e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db813
    PUSH EAX                            ; 004db816
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db817
    PUSH EAX                            ; 004db81d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db81e
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004db823
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db826
        ;   Label: LAB_004db826
    CMP dword ptr [EAX + 0x228],0x0     ; 004db829
    JZ 0x004db845                       ; 004db830
        ;   XREF to: 004db845 (CONDITIONAL_JUMP)  ; LAB_004db845
    PUSH 0x0                            ; 004db832
    PUSH 0x3                            ; 004db834
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db836
    PUSH EAX                            ; 004db83c
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410 ; 004db83d
        ;   XREF to: 004a5410 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_004a5410(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 004db842
    PUSH 0x0                            ; 004db845
        ;   Label: LAB_004db845
    PUSH -0x1                           ; 004db847
    PUSH 0x62b7df                       ; 004db849 | = "Game paused"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db84e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db853
    PUSH EAX                            ; 004db856
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db857
    PUSH EAX                            ; 004db85d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004db85e
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004db863
    MOV EBX,EAX                         ; 004db866
    CMP EAX,0x1                         ; 004db868
    JNZ 0x004db8f1                      ; 004db86b
        ;   XREF to: 004db8f1 (CONDITIONAL_JUMP)  ; LAB_004db8f1
    PUSH 0x0                            ; 004db871
    MOV ECX,dword ptr [0x0067cf44]      ; 004db873 | g_CKeysInstance | g_CKeysPtr
    PUSH ECX                            ; 004db879 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0 ; 004db87a
        ;   XREF to: 005024b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this_ptr, int enable_extended)
    ADD ESP,0x8                         ; 004db87f
    MOV ESI,dword ptr [EBP + 0x14]      ; 004db882
    PUSH ESI                            ; 004db885
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 ; 004db886
        ;   XREF to: 004daed0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db88b
    PUSH EDI                            ; 004db88e
    CALL core_menu.cpp_showOptionsScreen_FUN_00512d30 ; 004db88f
        ;   XREF to: 00512d30 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showOptionsScreen_FUN_00512d30(int initialize_systems)
    ADD ESP,0x4                         ; 004db894
    PUSH ESI                            ; 004db897
    CALL core_game.cpp_CGame_setGameRes_FUN_004dade0 ; 004db898
        ;   XREF to: 004dade0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setGameRes_FUN_004dade0(CGame * this_ptr)
    MOV EDX,dword ptr [ESI + 0x1fc]     ; 004db89d
    ADD ESP,0x4                         ; 004db8a3
    TEST EDX,EDX                        ; 004db8a6
    SETZ AL                             ; 004db8a8
    AND EAX,0xff                        ; 004db8ab
    PUSH EAX                            ; 004db8b0
    MOV ECX,dword ptr [0x0067cf44]      ; 004db8b1 | g_CKeysInstance | g_CKeysPtr
    PUSH ECX                            ; 004db8b7 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0 ; 004db8b8
        ;   XREF to: 005024b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this_ptr, int enable_extended)
    MOV EAX,[0x006810c8]                ; 004db8bd | g_CDemonSetInstance | g_CDemonSetPtr
    ADD ESP,0x8                         ; 004db8c2
    MOV EDX,dword ptr [EAX + 0x15aea4]  ; 004db8c5 | g_CDemonSetInstance.selected_camera_index
    PUSH EDX                            ; 004db8cb
    PUSH EAX                            ; 004db8cc | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 004db8cd
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    MOV ESI,dword ptr [0x00679398]      ; 004db8d2 | g_WindowHeight
    ADD ESP,0x8                         ; 004db8d8
    CMP ESI,0xf0                        ; 004db8db
    JLE 0x004dba75                      ; 004db8e1
        ;   XREF to: 004dba75 (CONDITIONAL_JUMP)  ; LAB_004dba75
    MOV EAX,[0x020a5720]                ; 004db8e7 | g_ThemeFont
    MOV [0x02cf1cd0],EAX                ; 004db8ec | g_EditorFont
        ;   Label: LAB_004db8ec
    CMP EBX,0x2                         ; 004db8f1
        ;   Label: LAB_004db8f1
    JNZ 0x004db902                      ; 004db8f4
        ;   XREF to: 004db902 (CONDITIONAL_JUMP)  ; LAB_004db902
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db8f6
    PUSH EAX                            ; 004db8f9
    CALL core_game.cpp_CGame_promptLoadGame_FUN_004e36f0 ; 004db8fa
        ;   XREF to: 004e36f0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_promptLoadGame_FUN_004e36f0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004db8ff
    CMP EBX,0x3                         ; 004db902
        ;   Label: LAB_004db902
    JNZ 0x004db915                      ; 004db905
        ;   XREF to: 004db915 (CONDITIONAL_JUMP)  ; LAB_004db915
    PUSH 0x0                            ; 004db907
    MOV EDX,dword ptr [EBP + 0x14]      ; 004db909
    PUSH EDX                            ; 004db90c
    CALL core_game.cpp_CGame_saveGame_FUN_004e0cd0 ; 004db90d
        ;   XREF to: 004e0cd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveGame_FUN_004e0cd0(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004db912
    CMP EBX,0x4                         ; 004db915
        ;   Label: LAB_004db915
    JNZ 0x004db93f                      ; 004db918
        ;   XREF to: 004db93f (CONDITIONAL_JUMP)  ; LAB_004db93f
    PUSH 0x62b7eb                       ; 004db91a | = "Quit"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db91f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db924
    PUSH EAX                            ; 004db927
    MOV ECX,dword ptr [0x00678a60]      ; 004db928 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004db92e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f060 ; 004db92f
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 004db934
    TEST EAX,EAX                        ; 004db937
    JNZ 0x004dba7f                      ; 004db939
        ;   XREF to: 004dba7f (CONDITIONAL_JUMP)  ; LAB_004dba7f
    CMP EBX,0x5                         ; 004db93f
        ;   Label: LAB_004db93f
    JNZ 0x004db966                      ; 004db942
        ;   XREF to: 004db966 (CONDITIONAL_JUMP)  ; LAB_004db966
    MOV EBX,dword ptr [0x00680d50]      ; 004db944 | g_CScriptInstance | g_CScriptPtr
    PUSH EBX                            ; 004db94a | g_CScriptInstance
    CALL core_script.cpp_CScript_skipCinematic_FUN_005602e0 ; 004db94b
        ;   XREF to: 005602e0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_skipCinematic_FUN_005602e0(CScript * this_ptr)
    ADD ESP,0x4                         ; 004db950
    TEST EAX,EAX                        ; 004db953
    SETZ AL                             ; 004db955
    MOV EDX,dword ptr [EBP + 0x14]      ; 004db958
    AND EAX,0xff                        ; 004db95b
    MOV dword ptr [EDX + 0xcc],EAX      ; 004db960
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004db966
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_004db966
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db96b
    CMP dword ptr [EAX + 0xcc],0x0      ; 004db96e
    JNZ 0x004db985                      ; 004db975
        ;   XREF to: 004db985 (CONDITIONAL_JUMP)  ; LAB_004db985
    MOV EAX,[0x00681ef8]                ; 004db977 | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 004db97c | g_CSoundInstance
    CALL core_sound.cpp_CSound_init_FUN_005b2dd0 ; 004db97d
        ;   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_init_FUN_005b2dd0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004db982
    MOV EDX,dword ptr [0x02db87d0]      ; 004db985 | g_LocalHeroIndex
        ;   Label: LAB_004db985
    MOV EAX,dword ptr [EBP + 0x14]      ; 004db98b
    MOV EDX,dword ptr [EDX*0x4 + 0x2db87c0] ; 004db98e | g_HeroActors
    MOV EAX,dword ptr [EAX + 0xc4]      ; 004db995
    PUSH 0x0                            ; 004db99b
    MOV dword ptr [EDX + 0x1f734],EAX   ; 004db99d
    LEA EAX,[EBP + 0xfffff7a0]          ; 004db9a3
    PUSH EAX                            ; 004db9a9
    MOV EBX,EDI                         ; 004db9aa
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004db9ac
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004db9b1
    JMP 0x004db669                      ; 004db9b4
        ;   XREF to: 004db669 (UNCONDITIONAL_JUMP)  ; LAB_004db669
    PUSH 0x62b6e2                       ; 004db9b9 | = "Leave network game"
        ;   Label: LAB_004db9b9
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db9be
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db9c3
    PUSH EAX                            ; 004db9c6
    PUSH 0x2d828d4                      ; 004db9c7 | g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db9cc
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004db9d1
    PUSH 0x62b6f5                       ; 004db9d4 | = "Return to game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db9d9
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db9de
    PUSH EAX                            ; 004db9e1
    PUSH 0x2d828d4                      ; 004db9e2 | g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004db9e7
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004db9ec
    PUSH EDI                            ; 004db9ef
    PUSH EBX                            ; 004db9f0
    PUSH 0x62b704                       ; 004db9f1 | = "You are connect to a network game.\nD..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004db9f6
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004db9fb
    PUSH EAX                            ; 004db9fe
    PUSH 0x2d828d4                      ; 004db9ff | g_CPickList
    CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0 ; 004dba04
        ;   XREF to: 004a3ef0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004dba09
    MOV dword ptr [0x02d828d0],EDI      ; 004dba0c | g_CheatSystemEnabled
    JMP 0x004db669                      ; 004dba12
        ;   XREF to: 004db669 (UNCONDITIONAL_JUMP)  ; LAB_004db669
    PUSH 0x62b746                       ; 004dba17 | = "Abort network game"
        ;   Label: LAB_004dba17
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dba1c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004dba21
    PUSH EAX                            ; 004dba24
    PUSH 0x2d828d4                      ; 004dba25 | g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004dba2a
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004dba2f
    PUSH 0x62b759                       ; 004dba32 | = "Return to game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dba37
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004dba3c
    PUSH EAX                            ; 004dba3f
    PUSH 0x2d828d4                      ; 004dba40 | g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004dba45
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004dba4a
    PUSH EDI                            ; 004dba4d
    PUSH EBX                            ; 004dba4e
    PUSH 0x62b768                       ; 004dba4f | = "You are hosting a network game.\nDo y..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dba54
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004dba59
    PUSH EAX                            ; 004dba5c
    PUSH 0x2d828d4                      ; 004dba5d | g_CPickList
    CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0 ; 004dba62
        ;   XREF to: 004a3ef0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004dba67
    MOV dword ptr [0x02d828d0],EDI      ; 004dba6a | g_CheatSystemEnabled
    JMP 0x004db669                      ; 004dba70
        ;   XREF to: 004db669 (UNCONDITIONAL_JUMP)  ; LAB_004db669
    MOV EAX,[0x020a5724]                ; 004dba75 | g_SmallEditorFont
        ;   Label: LAB_004dba75
    JMP 0x004db8ec                      ; 004dba7a
        ;   XREF to: 004db8ec (UNCONDITIONAL_JUMP)  ; LAB_004db8ec
    PUSH 0x0                            ; 004dba7f
        ;   Label: LAB_004dba7f
    LEA EAX,[EBP + 0xfffff7a0]          ; 004dba81
    PUSH EAX                            ; 004dba87
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004dba88
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    JMP 0x004db431                      ; 004dba8d
        ;   XREF to: 004db431 (UNCONDITIONAL_JUMP)  ; LAB_004db431
    MOV EAX,[0x00680a00]                ; 004dba92 | g_CNetGameInstance | g_CNetGamePtr
        ;   Label: LAB_004dba92
    CMP dword ptr [EAX + 0x168],0x0     ; 004dba97 | g_CNetGameInstance.has_pending_sim_frame
    JNZ 0x004db679                      ; 004dba9e
        ;   XREF to: 004db679 (CONDITIONAL_JUMP)  ; LAB_004db679
    TEST EBX,EBX                        ; 004dbaa4
    JNZ 0x004db679                      ; 004dbaa6
        ;   XREF to: 004db679 (CONDITIONAL_JUMP)  ; LAB_004db679
    CMP dword ptr [0x02d03e94],0x0      ; 004dbaac | g_UseExternalRenderer
    JZ 0x004dbad1                       ; 004dbab3
        ;   XREF to: 004dbad1 (CONDITIONAL_JUMP)  ; LAB_004dbad1
    PUSH EDI                            ; 004dbab5
    CALL wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30 ; 004dbab6
        ;   XREF to: 005b7c30 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30(int skip_buffer_copy)
    ADD ESP,0x4                         ; 004dbabb
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0 ; 004dbabe
        ;   XREF to: 005f35e0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbac3
    INC dword ptr [EAX + 0x26c]         ; 004dbac6
    JMP 0x004db67e                      ; 004dbacc
        ;   XREF to: 004db67e (UNCONDITIONAL_JUMP)  ; LAB_004db67e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004dbad1
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_004dbad1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbad6
    INC dword ptr [EAX + 0x26c]         ; 004dbad9
    JMP 0x004db67e                      ; 004dbadf
        ;   XREF to: 004db67e (UNCONDITIONAL_JUMP)  ; LAB_004db67e
    PUSH 0x1c                           ; 004dbae4
        ;   Label: LAB_004dbae4
    MOV EAX,[0x0067cf44]                ; 004dbae6 | g_CKeysPtr
    PUSH EAX                            ; 004dbaeb | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004dbaec | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004dbaee
    ADD ESP,0x8                         ; 004dbaf1
    TEST EAX,EAX                        ; 004dbaf4
    JNZ 0x004db434                      ; 004dbaf6
        ;   XREF to: 004db434 (CONDITIONAL_JUMP)  ; LAB_004db434
    FLD float ptr [EBP + -0x4]          ; 004dbafc
    FLDZ                                ; 004dbaff
    FCOMPP                              ; 004dbb01
    FNSTSW AX                           ; 004dbb03
    SAHF                                ; 004dbb05
    JA 0x004dbb3f                       ; 004dbb06
        ;   XREF to: 004dbb3f (CONDITIONAL_JUMP)  ; LAB_004dbb3f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbb08
    FLD float ptr [EBP + -0x4]          ; 004dbb0b
    FADD float ptr [EAX + 0x264]        ; 004dbb0e
    FST float ptr [EBP + -0x4]          ; 004dbb14
    FCOMP double ptr [0x0062b82d]       ; 004dbb17 | DOUBLE_0062b82d
    FNSTSW AX                           ; 004dbb1d
    SAHF                                ; 004dbb1f
    JBE 0x004db6c9                      ; 004dbb20
        ;   XREF to: 004db6c9 (CONDITIONAL_JUMP)  ; LAB_004db6c9
    MOV ECX,dword ptr [EBP + 0x14]      ; 004dbb26
    PUSH ECX                            ; 004dbb29
    MOV EBX,0xbf800000                  ; 004dbb2a
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004e0960 ; 004dbb2f
        ;   XREF to: 004e0960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeOut_FUN_004e0960(CGame * this_ptr)
    MOV dword ptr [EBP + -0x4],EBX      ; 004dbb34
    ADD ESP,0x4                         ; 004dbb37
    JMP 0x004db6c9                      ; 004dbb3a
        ;   XREF to: 004db6c9 (UNCONDITIONAL_JUMP)  ; LAB_004db6c9
    MOV ESI,dword ptr [EBP + 0x14]      ; 004dbb3f
        ;   Label: LAB_004dbb3f
    PUSH ESI                            ; 004dbb42
    CALL core_game.cpp_CGame_fadeIn_FUN_004e0b90 ; 004dbb43
        ;   XREF to: 004e0b90 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004e0b90(CGame * this_ptr)
    ADD ESP,0x4                         ; 004dbb48
    TEST EAX,EAX                        ; 004dbb4b
    JNZ 0x004db434                      ; 004dbb4d
        ;   XREF to: 004db434 (CONDITIONAL_JUMP)  ; LAB_004db434
    JMP 0x004db6c9                      ; 004dbb53
        ;   XREF to: 004db6c9 (UNCONDITIONAL_JUMP)  ; LAB_004db6c9
    MOV ECX,dword ptr [EBP + 0x14]      ; 004dbb58
        ;   Label: LAB_004dbb58
    PUSH ECX                            ; 004dbb5b
    CALL core_game.cpp_CGame_showFullscreenBitmap_FUN_004e2910 ; 004dbb5c
        ;   XREF to: 004e2910 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_showFullscreenBitmap_FUN_004e2910(CGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbb61
    MOV EBX,dword ptr [EAX + 0x200]     ; 004dbb64
    ADD ESP,0x4                         ; 004dbb6a
    TEST EBX,EBX                        ; 004dbb6d
    JZ 0x004dbb76                       ; 004dbb6f
        ;   XREF to: 004dbb76 (CONDITIONAL_JUMP)  ; LAB_004dbb76
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004dbb71
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbb76
        ;   Label: LAB_004dbb76
    MOV ESI,dword ptr [EAX + 0x9c4]     ; 004dbb79
    TEST ESI,ESI                        ; 004dbb7f
    JZ 0x004dbb8d                       ; 004dbb81
        ;   XREF to: 004dbb8d (CONDITIONAL_JUMP)  ; LAB_004dbb8d
    XOR EBX,EBX                         ; 004dbb83
    MOV dword ptr [EBP + -0xc],EBX      ; 004dbb85
    JMP 0x004db434                      ; 004dbb88
        ;   XREF to: 004db434 (UNCONDITIONAL_JUMP)  ; LAB_004db434
    CMP dword ptr [EBP + -0x8],0x0      ; 004dbb8d
        ;   Label: LAB_004dbb8d
    JZ 0x004db357                       ; 004dbb91
        ;   XREF to: 004db357 (CONDITIONAL_JUMP)  ; LAB_004db357
    MOV ECX,dword ptr [0x00681ef8]      ; 004dbb97 | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 004dbb9d | g_CSoundInstance
    MOV dword ptr [EBP + -0x8],ESI      ; 004dbb9e
    CALL core_sound.cpp_CSound_init_FUN_005b2dd0 ; 004dbba1
        ;   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_init_FUN_005b2dd0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004dbba6
    JMP 0x004db357                      ; 004dbba9
        ;   XREF to: 004db357 (UNCONDITIONAL_JUMP)  ; LAB_004db357
    CMP EAX,0x1                         ; 004dbbae
        ;   Label: LAB_004dbbae
    JZ 0x004db4e8                       ; 004dbbb1
        ;   XREF to: 004db4e8 (CONDITIONAL_JUMP)  ; LAB_004db4e8
    JMP 0x004db4b4                      ; 004dbbb7
        ;   XREF to: 004db4b4 (UNCONDITIONAL_JUMP)  ; LAB_004db4b4

