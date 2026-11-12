; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_game_cpp_CGame_runGameSession_FUN_004cf5e0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x8a0]:1  local_8a0
; undefined        Stack[-0x4e0]:1  local_4e0
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_run_FUN_0051bad0 at 0051bb47
;
; Referenced Globals:
;   TerminatedCString s_Nocturne_is_alive_and_ki_005e17a0
;   TerminatedCString s_s_09_46_30_005e17bf
;   TerminatedCString s_Sep_11_2000_005e17c8
;   TerminatedCString s_game_cpp_built_on_s_s_005e17d4
;   TerminatedCString s_System_RAM_d_005e17ee
;   TerminatedCString s_Swap_file_d_005e17fe
;   TerminatedCString s_s_005e180d
;   TerminatedCString s_ESP_08X_005e1811
;   TerminatedCString s_VELOCITY_005e181c
;   TerminatedCString s_Flashlight_005e1825
;   undefined4 s_lashlight_005e1825+1
;   undefined4 s_ashlight_005e1825+2
;   undefined4 s_shlight_005e1825+3
;   TerminatedCString s_Leave_network_game_005e1830
;   TerminatedCString s_Return_to_game_005e1843
;   ... and 65 more
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_init_FUN_00462590
;   core_event.cpp_FUN_004a9870
;   core_fire.cpp_CFireEffect_init_FUN_004b4b30
;   core_game.cpp_CGame_beginFadeOut_FUN_004d6070
;   core_game.cpp_CGame_clearOverlay_FUN_004cc1f0
;   core_game.cpp_CGame_fadeIn_FUN_004d62e0
;   core_game.cpp_CGame_loadAssets_FUN_004d5e40
;   core_game.cpp_CGame_playerControls_FUN_004d0860
;   core_game.cpp_CGame_processFudge_FUN_004cc9c0
;   core_game.cpp_CGame_processHotkeys_FUN_004d1a80
;   core_game.cpp_CGame_promptLoadGame_FUN_004d85f0
;   core_game.cpp_CGame_saveClockTime_FUN_004cbf10
;   core_game.cpp_CGame_setGameRes_FUN_004cf430
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530
;   core_game.cpp_CGame_updateStatusDisplays_FUN_004cc810
;   ... and 48 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf5e0
        ;   Label: core_game.cpp_CGame_runGameSession_FUN_004cf5e0
    PUSH ESI                            ; 004cf5e1
    PUSH EDI                            ; 004cf5e2
    PUSH EBP                            ; 004cf5e3
    MOV EBP,ESP                         ; 004cf5e4
    SUB ESP,0x890                       ; 004cf5e6
    MOV ESI,dword ptr [0x00611100]      ; 004cf5ec | g_CConsolePtr
    XOR EDX,EDX                         ; 004cf5f2
    PUSH ESI                            ; 004cf5f4 | g_CConsoleInstance
    MOV dword ptr [EBP + -0x4],EDX      ; 004cf5f5
    MOV dword ptr [EBP + -0xc],EDX      ; 004cf5f8
    CALL engine_console.cpp_CConsole_reset_FUN_004455d0 ; 004cf5fb
        ;   XREF to: 004455d0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_reset_FUN_004455d0(CConsole * this_ptr)
    ADD ESP,0x4                         ; 004cf600
    PUSH 0x5e17a0                       ; 004cf603 | = "Nocturne is alive and kicking\n"
    MOV EDI,dword ptr [0x00611100]      ; 004cf608 | g_CConsolePtr
    PUSH EDI                            ; 004cf60e | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004cf60f
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 004cf614
    PUSH 0x5e17bf                       ; 004cf617 | = "09:46:30"
    PUSH 0x5e17c8                       ; 004cf61c | = "Sep 11 2000"
    PUSH 0x5e17d4                       ; 004cf621 | = "game.cpp built on %s %s\n\n"
    MOV EAX,[0x00611100]                ; 004cf626 | g_CConsolePtr
    PUSH EAX                            ; 004cf62b | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004cf62c
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 004cf631
    MOV EDX,dword ptr [0x02c9be78]      ; 004cf634 | DAT_02c9be78
    PUSH EDX                            ; 004cf63a
    PUSH 0x5e17ee                       ; 004cf63b | = "System RAM: %d\n"
    MOV ECX,dword ptr [0x00611100]      ; 004cf640 | g_CConsolePtr
    PUSH ECX                            ; 004cf646 | g_CConsoleInstance
    MOV EBX,0x1                         ; 004cf647
    CALL engine_console.cpp_FUN_00445430 ; 004cf64c
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004cf651
    MOV dword ptr [EBP + -0x8],EBX      ; 004cf654
    MOV EBX,dword ptr [0x02c9be7c]      ; 004cf657 | DAT_02c9be7c
    PUSH EBX                            ; 004cf65d
    PUSH 0x5e17fe                       ; 004cf65e | = "Swap file: %d\n"
    MOV ESI,dword ptr [0x00611100]      ; 004cf663 | g_CConsolePtr
    PUSH ESI                            ; 004cf669 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004cf66a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004cf66f
    LEA EAX,[EBP + 0xfffffef0]          ; 004cf672
    PUSH EAX                            ; 004cf678
    MOV EDI,dword ptr [0x0061abc0]      ; 004cf679 | g_CEditorToolsPtr
    PUSH EDI                            ; 004cf67f
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40 ; 004cf680
        ;   XREF to: 00498e40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40(CEditorTools * this_ptr, char * output_buffer)
    ADD ESP,0x8                         ; 004cf685
    LEA EAX,[EBP + 0xfffffef0]          ; 004cf688
    PUSH EAX                            ; 004cf68e
    PUSH 0x5e180d                       ; 004cf68f | = "%s\n"
    MOV EAX,[0x00611100]                ; 004cf694 | g_CConsolePtr
    PUSH EAX                            ; 004cf699 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004cf69a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004cf69f
    MOV dword ptr [EBP + 0xfffffff0],ESP ; 004cf6a2
    MOV EAX,dword ptr [EBP + -0x10]     ; 004cf6a8
    PUSH EAX                            ; 004cf6ab
    PUSH 0x5e1811                       ; 004cf6ac | = "ESP: %08X\n"
    MOV EDX,dword ptr [0x00611100]      ; 004cf6b1 | g_CConsolePtr
    PUSH EDX                            ; 004cf6b7 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004cf6b8
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf6bd
    MOV dword ptr [EAX + 0x2a0],0x0     ; 004cf6c0
    MOV dword ptr [EAX + 0x218],0x0     ; 004cf6ca
    MOV dword ptr [EAX + 0x2a4],0x1     ; 004cf6d4
    MOV dword ptr [EAX + 0x200],0x0     ; 004cf6de
    MOV dword ptr [EAX + 0x204],0x0     ; 004cf6e8
    MOV dword ptr [EAX + 0x2a8],0x0     ; 004cf6f2
    MOV dword ptr [EAX + 0x1ec],0x0     ; 004cf6fc
    MOV dword ptr [EAX + 0x1fc],0x0     ; 004cf706
    MOV dword ptr [EAX + 0x1f0],0x0     ; 004cf710
    MOV dword ptr [EAX + 0x1f4],0x0     ; 004cf71a
    MOV dword ptr [EAX + 0x1f8],0x0     ; 004cf724
    MOV dword ptr [EAX + 0x2ac],0x0     ; 004cf72e
    ADD ESP,0xc                         ; 004cf738
    MOV dword ptr [EAX + 0x2b0],0x0     ; 004cf73b
    MOV dword ptr [EAX + 0x208],0x3f800000 ; 004cf745
    MOV dword ptr [EAX + 0x20c],0x0     ; 004cf74f
    MOV dword ptr [EAX + 0x210],0x0     ; 004cf759
    MOV dword ptr [EAX + 0x214],0x0     ; 004cf763
    MOV byte ptr [EAX + 0x8e8],0x0      ; 004cf76d
    MOV dword ptr [EAX + 0x9e8],0x0     ; 004cf774
    MOV dword ptr [EAX + 0x9ec],0x0     ; 004cf77e
    MOV dword ptr [EAX + 0x258],0x0     ; 004cf788
    MOV dword ptr [EAX + 0xe0],0x0      ; 004cf792
    XOR ECX,ECX                         ; 004cf79c
    MOV dword ptr [EAX + 0x224],ECX     ; 004cf79e
    MOV dword ptr [EAX + 0x254],ECX     ; 004cf7a4
    MOV dword ptr [EAX + 0x228],ECX     ; 004cf7aa
    MOV dword ptr [EAX + 0xafc],ECX     ; 004cf7b0
    MOV dword ptr [EAX + 0x25c],ECX     ; 004cf7b6
    MOV dword ptr [EAX + 0x260],ECX     ; 004cf7bc
    MOV dword ptr [EAX + 0x264],ECX     ; 004cf7c2
    MOV dword ptr [EAX + 0x23c],ECX     ; 004cf7c8
    MOV dword ptr [EAX + 0x234],ECX     ; 004cf7ce
    MOV dword ptr [EAX + 0x238],ECX     ; 004cf7d4
    MOV EAX,[0x0061d418]                ; 004cf7da | g_CFieldNotesPtr
    MOV dword ptr [0x01cd01f8],ECX      ; 004cf7df | DAT_01cd01f8
    MOV dword ptr [EAX + 0x40],ECX      ; 004cf7e5 | g_CFieldNotesInstance.is_displayed
    CALL engine_alphabit.cpp_FUN_00415c80 ; 004cf7e8
        ;   XREF to: 00415c80 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_00415c80()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf7ed
    XOR EBX,EBX                         ; 004cf7f0
    PUSH EAX                            ; 004cf7f2
    MOV dword ptr [0x01cd0c24],EBX      ; 004cf7f3 | DAT_01cd0c24
    MOV dword ptr [EAX + 0x22c],0x0     ; 004cf7f9
    CALL core_game.cpp_CGame_setGameRes_FUN_004cf430 ; 004cf803
        ;   XREF to: 004cf430 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setGameRes_FUN_004cf430(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cf808
    PUSH 0x5e181c                       ; 004cf80b | = "VELOCITY"
    CALL crt_env.c_getenv_FUN_005c3050  ; 004cf810
        ;   XREF to: 005c3050 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005c3050(char * name)
    ADD ESP,0x4                         ; 004cf815
    TEST EAX,EAX                        ; 004cf818
    JZ 0x004cf829                       ; 004cf81a
        ;   XREF to: 004cf829 (CONDITIONAL_JUMP)  ; LAB_004cf829
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf81c
    MOV dword ptr [EAX + 0x22c],0x1     ; 004cf81f
    PUSH 0x1ccc3e4                      ; 004cf829
        ;   Label: LAB_004cf829
    CALL core_dlight.cpp_CDemonLight_init_FUN_00462590 ; 004cf82e
        ;   XREF to: 00462590 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_00462590(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 004cf833
    MOV EDI,dword ptr [EBP + 0x14]      ; 004cf836
    PUSH EDI                            ; 004cf839
    MOV ESI,0x5e1825                    ; 004cf83a | = "Flashlight"
    CALL core_game.cpp_FUN_004dc040     ; 004cf83f
        ;   XREF to: 004dc040 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004dc040()
    ADD ESP,0x4                         ; 004cf844
    MOV EDI,0x1ccc424                   ; 004cf847
    MOV EDX,0x42000000                  ; 004cf84c
    PUSH EDI                            ; 004cf851
    MOV AL,byte ptr [ESI]               ; 004cf852 | = "Flashlight" | s_ashlight_005e1825+2
        ;   Label: LAB_004cf852
    MOV byte ptr [EDI],AL               ; 004cf854 | g_CDemonLightInstance.base.camera_name[0] | g_CDemonLightInstance.base.camera_name[2]
    CMP AL,0x0                          ; 004cf856
    JZ 0x004cf86a                       ; 004cf858
        ;   XREF to: 004cf86a (CONDITIONAL_JUMP)  ; LAB_004cf86a
    MOV AL,byte ptr [ESI + 0x1]         ; 004cf85a | s_lashlight_005e1825+1 | s_shlight_005e1825+3
    ADD ESI,0x2                         ; 004cf85d
    MOV byte ptr [EDI + 0x1],AL         ; 004cf860 | g_CDemonLightInstance.base.camera_name[1] | g_CDemonLightInstance.base.camera_name[3]
    ADD EDI,0x2                         ; 004cf863
    CMP AL,0x0                          ; 004cf866
    JNZ 0x004cf852                      ; 004cf868
        ;   XREF to: 004cf852 (CONDITIONAL_JUMP)  ; LAB_004cf852
    POP EDI                             ; 004cf86a
        ;   Label: LAB_004cf86a
    MOV ECX,dword ptr [0x00622c18]      ; 004cf86b | g_CDemonSetPtr
    XOR EAX,EAX                         ; 004cf871
    PUSH ECX                            ; 004cf873 | g_CDemonSetInstance
    MOV dword ptr [0x01ccc524],EDX      ; 004cf874 | g_CDemonLightInstance.base.max_distance
    MOV [0x01cce098],EAX                ; 004cf87a | g_CDemonLightInstance.light_enabled_flag
    CALL core_set.cpp_CDemonSet_initScene_FUN_0054ec60 ; 004cf87f
        ;   XREF to: 0054ec60 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0054ec60(CDemonSet * this_ptr)
    MOV EBX,dword ptr [0x01cd06c0]      ; 004cf884 | DAT_01cd06c0
    ADD ESP,0x4                         ; 004cf88a
    TEST EBX,EBX                        ; 004cf88d
    JZ 0x004cfd36                       ; 004cf88f
        ;   XREF to: 004cfd36 (CONDITIONAL_JUMP)  ; LAB_004cfd36
    PUSH 0x1cd06c4                      ; 004cf895 | DAT_01cd06c4
    MOV EAX,[0x00622c18]                ; 004cf89a | g_CDemonSetPtr
    XOR EDI,EDI                         ; 004cf89f
    PUSH EAX                            ; 004cf8a1 | g_CDemonSetInstance
    MOV dword ptr [0x01cd06c0],EDI      ; 004cf8a2 | DAT_01cd06c0
    CALL core_set.cpp_CDemonSet_loadMasterLightStates_FUN_00555ca0 ; 004cf8a8
        ;   XREF to: 00555ca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_loadMasterLightStates_FUN_00555ca0(CDemonSet * this_ptr, int * light_state_buffer)
    ADD ESP,0x8                         ; 004cf8ad
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf8b0
        ;   Label: LAB_004cf8b0
    MOV EDX,dword ptr [EAX + 0x240]     ; 004cf8b3
    CMP EDX,0x8000                      ; 004cf8b9
    JGE 0x004cfd4a                      ; 004cf8bf
        ;   XREF to: 004cfd4a (CONDITIONAL_JUMP)  ; LAB_004cfd4a
    MOV dword ptr [EAX + 0x240],0x8000  ; 004cf8c5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf8cf
        ;   Label: LAB_004cf8cf
    MOV EBX,dword ptr [EAX + 0x240]     ; 004cf8d2
    PUSH EBX                            ; 004cf8d8
    MOV ESI,dword ptr [0x00622c18]      ; 004cf8d9 | g_CDemonSetPtr
    PUSH ESI                            ; 004cf8df | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setGamma_FUN_00555830 ; 004cf8e0
        ;   XREF to: 00555830 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setGamma_FUN_00555830(CDemonSet * this_ptr, int gamma)
    ADD ESP,0x8                         ; 004cf8e5
    MOV EDI,dword ptr [EBP + 0x14]      ; 004cf8e8
    PUSH EDI                            ; 004cf8eb
    CALL core_game.cpp_CGame_clearOverlay_FUN_004cc1f0 ; 004cf8ec
        ;   XREF to: 004cc1f0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_clearOverlay_FUN_004cc1f0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cf8f1
    PUSH 0x1cd01fc                      ; 004cf8f4 | g_CPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_0049c370 ; 004cf8f9
        ;   XREF to: 0049c370 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_0049c370(CPickList * this_ptr)
    MOV EDX,dword ptr [EDI + 0x2a4]     ; 004cf8fe
    ADD ESP,0x4                         ; 004cf904
    TEST EDX,EDX                        ; 004cf907
    JZ 0x004cfd65                       ; 004cf909
        ;   XREF to: 004cfd65 (CONDITIONAL_JUMP)  ; LAB_004cfd65
    MOV EAX,[0x00622ad0]                ; 004cf90f | g_CScriptPtr
    PUSH 0x1                            ; 004cf914
    MOV ESI,dword ptr [EAX + 0xc]       ; 004cf916 | g_CScriptInstance.focus_actor
    PUSH ESI                            ; 004cf919
    MOV EDI,dword ptr [0x00622c18]      ; 004cf91a | g_CDemonSetPtr
    PUSH EDI                            ; 004cf920 | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_00559f80   ; 004cf921
        ;   XREF to: 00559f80 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00559f80()
    ADD ESP,0xc                         ; 004cf926
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf929
        ;   Label: LAB_004cf929
    PUSH EAX                            ; 004cf92c
    CALL core_game.cpp_FUN_004d6030     ; 004cf92d
        ;   XREF to: 004d6030 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d6030(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cf932
    MOV EDX,dword ptr [EBP + 0x14]      ; 004cf935
    PUSH EDX                            ; 004cf938
    CALL core_game.cpp_CGame_loadAssets_FUN_004d5e40 ; 004cf939
        ;   XREF to: 004d5e40 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_loadAssets_FUN_004d5e40(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cf93e
    PUSH 0x3                            ; 004cf941
    MOV ECX,dword ptr [0x00622580]      ; 004cf943 | g_CNetGamePtr
    PUSH ECX                            ; 004cf949 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_0052cf90 ; 004cf94a
        ;   XREF to: 0052cf90 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_0052cf90(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 004cf94f
    TEST EAX,EAX                        ; 004cf952
    JZ 0x004cfbd7                       ; 004cf954
        ;   XREF to: 004cfbd7 (CONDITIONAL_JUMP)  ; LAB_004cfbd7
    PUSH 0x4                            ; 004cf95a
    MOV EBX,dword ptr [0x00622580]      ; 004cf95c | g_CNetGamePtr
    PUSH EBX                            ; 004cf962 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_0052cf90 ; 004cf963
        ;   XREF to: 0052cf90 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_0052cf90(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 004cf968
    TEST EAX,EAX                        ; 004cf96b
    JZ 0x004cfbd7                       ; 004cf96d
        ;   XREF to: 004cfbd7 (CONDITIONAL_JUMP)  ; LAB_004cfbd7
    MOV ESI,dword ptr [EBP + 0x14]      ; 004cf973
    MOV EAX,[0x00622580]                ; 004cf976 | g_CNetGamePtr
    PUSH ESI                            ; 004cf97b
    MOV dword ptr [EAX + 0x4],0x3       ; 004cf97c | g_CNetGameInstance.network_mode
    CALL core_game.cpp_CGame_saveClockTime_FUN_004cbf10 ; 004cf983
        ;   XREF to: 004cbf10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004cbf10(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cf988
    PUSH ESI                            ; 004cf98b
    CALL core_game.cpp_FUN_004d19d0     ; 004cf98c
        ;   XREF to: 004d19d0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d19d0()
    ADD ESP,0x4                         ; 004cf991
    MOV EAX,[0x00622580]                ; 004cf994 | g_CNetGamePtr
    PUSH EAX                            ; 004cf999 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_0052fee0 ; 004cf99a
        ;   XREF to: 0052fee0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_0052fee0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004cf99f
    MOV EDX,dword ptr [0x0061f2e0]      ; 004cf9a2 | DAT_0061f2e0
    PUSH EDX                            ; 004cf9a8
    CALL core_level.cpp_CLevelLoader_cleanup_FUN_004fefa0 ; 004cf9a9
        ;   XREF to: 004fefa0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_cleanup_FUN_004fefa0(CLevelLoader * this_ptr)
    MOV EAX,[0x01d06ab4]                ; 004cf9ae | DAT_01d06ab4
    ADD ESP,0x4                         ; 004cf9b3
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004cf9b6
    MOV EAX,dword ptr [ESI + 0xd8]      ; 004cf9bd
    XOR ECX,ECX                         ; 004cf9c3
    MOV dword ptr [EDX + 0x1fae4],EAX   ; 004cf9c5
    MOV dword ptr [0x01cd0c60],ECX      ; 004cf9cb | DAT_01cd0c60
    MOV dword ptr [ESI + 0x27c],0x0     ; 004cf9d1
    MOV EDI,0x1                         ; 004cf9db
    CMP dword ptr [0x01cd0c34],0x0      ; 004cf9e0 | DAT_01cd0c34
        ;   Label: LAB_004cf9e0
    JZ 0x004cfa47                       ; 004cf9e7
        ;   XREF to: 004cfa47 (CONDITIONAL_JUMP)  ; LAB_004cfa47
    CMP dword ptr [0x007c3978],0x0      ; 004cf9e9 | DAT_007c3978
    JZ 0x004cfd80                       ; 004cf9f0
        ;   XREF to: 004cfd80 (CONDITIONAL_JUMP)  ; LAB_004cfd80
    MOV EAX,EDI                         ; 004cf9f6
        ;   Label: LAB_004cf9f6
    MOV EBX,EAX                         ; 004cf9f8
        ;   Label: LAB_004cf9f8
    TEST EAX,EAX                        ; 004cf9fa
    JZ 0x004cfa13                       ; 004cf9fc
        ;   XREF to: 004cfa13 (CONDITIONAL_JUMP)  ; LAB_004cfa13
    CMP dword ptr [0x01cd0c60],0x0      ; 004cf9fe | DAT_01cd0c60
    JNZ 0x004cfa13                      ; 004cfa05
        ;   XREF to: 004cfa13 (CONDITIONAL_JUMP)  ; LAB_004cfa13
    MOV ESI,dword ptr [EBP + 0x14]      ; 004cfa07
    PUSH ESI                            ; 004cfa0a
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530 ; 004cfa0b
        ;   XREF to: 004cf530 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cfa10
    TEST EBX,EBX                        ; 004cfa13
        ;   Label: LAB_004cfa13
    JNZ 0x004cfa41                      ; 004cfa15
        ;   XREF to: 004cfa41 (CONDITIONAL_JUMP)  ; LAB_004cfa41
    CMP dword ptr [0x01cd0c60],0x0      ; 004cfa17 | DAT_01cd0c60
    JZ 0x004cfa41                       ; 004cfa1e
        ;   XREF to: 004cfa41 (CONDITIONAL_JUMP)  ; LAB_004cfa41
    MOV EDX,dword ptr [EBP + 0x14]      ; 004cfa20
    PUSH EDX                            ; 004cfa23
    CALL core_game.cpp_CGame_setGameRes_FUN_004cf430 ; 004cfa24
        ;   XREF to: 004cf430 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setGameRes_FUN_004cf430(CGame * this_ptr)
    MOV EAX,[0x00622c18]                ; 004cfa29 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004cfa2e
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004cfa31 | g_CDemonSetInstance.selected_camera_index
    PUSH EDX                            ; 004cfa37
    PUSH EAX                            ; 004cfa38 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 ; 004cfa39
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004cfa3e
    MOV dword ptr [0x01cd0c60],EBX      ; 004cfa41 | DAT_01cd0c60
        ;   Label: LAB_004cfa41
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfa47
        ;   Label: LAB_004cfa47
    CMP dword ptr [EAX + 0x218],0x0     ; 004cfa4a
    JZ 0x004cfd96                       ; 004cfa51
        ;   XREF to: 004cfd96 (CONDITIONAL_JUMP)  ; LAB_004cfd96
    XOR EAX,EAX                         ; 004cfa57
        ;   Label: LAB_004cfa57
    PUSH EAX                            ; 004cfa59
        ;   Label: LAB_004cfa59
    MOV ESI,dword ptr [0x0061f2a4]      ; 004cfa5a | DAT_0061f2a4
    PUSH ESI                            ; 004cfa60 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0 ; 004cfa61
        ;   XREF to: 004fd2b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0(CKeys * this_ptr, int enable_extended)
    ADD ESP,0x8                         ; 004cfa66
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfa69
    PUSH EAX                            ; 004cfa6c
    CALL core_game.cpp_CGame_processHotkeys_FUN_004d1a80 ; 004cfa6d
        ;   XREF to: 004d1a80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processHotkeys_FUN_004d1a80(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cfa72
    MOV EDX,dword ptr [EBP + 0x14]      ; 004cfa75
    PUSH EDX                            ; 004cfa78
    CALL core_game.cpp_CGame_updateStatusDisplays_FUN_004cc810 ; 004cfa79
        ;   XREF to: 004cc810 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateStatusDisplays_FUN_004cc810(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cfa7e
    MOV ECX,dword ptr [EBP + 0x14]      ; 004cfa81
    PUSH ECX                            ; 004cfa84
    CALL core_game.cpp_CGame_processFudge_FUN_004cc9c0 ; 004cfa85
        ;   XREF to: 004cc9c0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processFudge_FUN_004cc9c0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cfa8a
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cfa8d
    PUSH EBX                            ; 004cfa90
    CALL core_game.cpp_CGame_playerControls_FUN_004d0860 ; 004cfa91
        ;   XREF to: 004d0860 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_playerControls_FUN_004d0860(CGame * this_ptr)
    MOV EAX,[0x01d06ab4]                ; 004cfa96 | DAT_01d06ab4
    SHL EAX,0x2                         ; 004cfa9b
    MOV ESI,dword ptr [EAX + 0x1d06aa4] ; 004cfa9e
    ADD ESP,0x4                         ; 004cfaa4
    TEST ESI,ESI                        ; 004cfaa7
    JZ 0x004cfaf0                       ; 004cfaa9
        ;   XREF to: 004cfaf0 (CONDITIONAL_JUMP)  ; LAB_004cfaf0
    PUSH ESI                            ; 004cfaab
    MOV EDX,dword ptr [ESI + 0x154]     ; 004cfaac
    CALL dword ptr [EDX + 0x10c]        ; 004cfab2
    ADD ESP,0x4                         ; 004cfab8
    TEST EAX,EAX                        ; 004cfabb
    JZ 0x004cfaf0                       ; 004cfabd
        ;   XREF to: 004cfaf0 (CONDITIONAL_JUMP)  ; LAB_004cfaf0
    MOV EAX,[0x0061d418]                ; 004cfabf | g_CFieldNotesPtr
    MOV dword ptr [EBX + 0x25c],0x0     ; 004cfac4
    CMP dword ptr [EAX + 0x40],0x0      ; 004cface | g_CFieldNotesInstance.is_displayed
    JZ 0x004cfadb                       ; 004cfad2
        ;   XREF to: 004cfadb (CONDITIONAL_JUMP)  ; LAB_004cfadb
    MOV dword ptr [EAX + 0x40],0x0      ; 004cfad4 | g_CFieldNotesInstance.is_displayed
    MOV ECX,dword ptr [0x007c3978]      ; 004cfadb | DAT_007c3978
        ;   Label: LAB_004cfadb
    TEST ECX,ECX                        ; 004cfae1
    JZ 0x004cfaf0                       ; 004cfae3
        ;   XREF to: 004cfaf0 (CONDITIONAL_JUMP)  ; LAB_004cfaf0
    PUSH 0x0                            ; 004cfae5
    PUSH ECX                            ; 004cfae7
    CALL engine_alphabit.cpp_FUN_00415be0 ; 004cfae8
        ;   XREF to: 00415be0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_00415be0()
    ADD ESP,0x8                         ; 004cfaed
    MOV EAX,[0x00622c18]                ; 004cfaf0 | g_CDemonSetPtr
        ;   Label: LAB_004cfaf0
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004cfaf5 | g_CDemonSetInstance.selected_camera_index
    XOR EDX,EDX                         ; 004cfafb
    TEST EAX,EAX                        ; 004cfafd
    JL 0x004cfdaa                       ; 004cfaff
        ;   XREF to: 004cfdaa (CONDITIONAL_JUMP)  ; LAB_004cfdaa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfb05
    CMP dword ptr [EAX + 0x2a4],0x0     ; 004cfb08
    JZ 0x004cfb1e                       ; 004cfb0f
        ;   XREF to: 004cfb1e (CONDITIONAL_JUMP)  ; LAB_004cfb1e
    CMP dword ptr [EAX + 0xe0],0x0      ; 004cfb11
    JZ 0x004cfdbb                       ; 004cfb18
        ;   XREF to: 004cfdbb (CONDITIONAL_JUMP)  ; LAB_004cfdbb
    TEST EDX,EDX                        ; 004cfb1e
        ;   Label: LAB_004cfb1e
    JZ 0x004cfb5a                       ; 004cfb20
        ;   XREF to: 004cfb5a (CONDITIONAL_JUMP)  ; LAB_004cfb5a
    MOV EAX,[0x00622ad0]                ; 004cfb22 | g_CScriptPtr
        ;   Label: LAB_004cfb22
    MOV EDX,dword ptr [EAX + 0x10]      ; 004cfb27 | g_CScriptInstance.focus_actor_changed
    PUSH EDX                            ; 004cfb2a
    MOV ECX,dword ptr [EAX + 0xc]       ; 004cfb2b | g_CScriptInstance.focus_actor
    PUSH ECX                            ; 004cfb2e
    MOV EBX,dword ptr [0x00622c18]      ; 004cfb2f | g_CDemonSetPtr
    PUSH EBX                            ; 004cfb35 | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_00559f80   ; 004cfb36
        ;   XREF to: 00559f80 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00559f80()
    ADD ESP,0xc                         ; 004cfb3b
    TEST EAX,EAX                        ; 004cfb3e
    JZ 0x004cfb4e                       ; 004cfb40
        ;   XREF to: 004cfb4e (CONDITIONAL_JUMP)  ; LAB_004cfb4e
    MOV ESI,dword ptr [EBP + 0x14]      ; 004cfb42
    PUSH ESI                            ; 004cfb45
    CALL core_game.cpp_CGame_saveClockTime_FUN_004cbf10 ; 004cfb46
        ;   XREF to: 004cbf10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004cbf10(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cfb4b
    MOV EAX,[0x00622ad0]                ; 004cfb4e | g_CScriptPtr
        ;   Label: LAB_004cfb4e
    MOV dword ptr [EAX + 0x10],0x0      ; 004cfb53 | g_CScriptInstance.focus_actor_changed
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfb5a
        ;   Label: LAB_004cfb5a
    PUSH EAX                            ; 004cfb5d
    XOR EBX,EBX                         ; 004cfb5e
    CALL core_game.cpp_FUN_004ce580     ; 004cfb60
        ;   XREF to: 004ce580 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004ce580()
    MOV EDX,dword ptr [0x01cd01f8]      ; 004cfb65 | DAT_01cd01f8
    ADD ESP,0x4                         ; 004cfb6b
    TEST EDX,EDX                        ; 004cfb6e
    JZ 0x004cfe62                       ; 004cfb70
        ;   XREF to: 004cfe62 (CONDITIONAL_JUMP)  ; LAB_004cfe62
    MOV EAX,[0x01cd01fc]                ; 004cfb76 | g_CPickList
    TEST EAX,EAX                        ; 004cfb7b
    JLE 0x004cfde2                      ; 004cfb7d
        ;   XREF to: 004cfde2 (CONDITIONAL_JUMP)  ; LAB_004cfde2
    PUSH 0x1cd01fc                      ; 004cfb83 | g_CPickList
    CALL shape_edittool.cpp_CPickList_handleDialogInput_FUN_0049add0 ; 004cfb88
        ;   XREF to: 0049add0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_handleDialogInput_FUN_0049add0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004cfb8d
    MOV ESI,EAX                         ; 004cfb90
    CMP EAX,-0x2                        ; 004cfb92
    JZ 0x004cfbbe                       ; 004cfb95
        ;   XREF to: 004cfbbe (CONDITIONAL_JUMP)  ; LAB_004cfbbe
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004cfb97
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EDX,dword ptr [0x0061abc0]      ; 004cfb9c | g_CEditorToolsPtr
    PUSH EDX                            ; 004cfba2
    CALL shape_edittool.cpp_FUN_00496dd0 ; 004cfba3
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 004cfba8
    PUSH 0x1cd01fc                      ; 004cfbab | g_CPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_0049c370 ; 004cfbb0
        ;   XREF to: 0049c370 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_0049c370(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004cfbb5
    MOV dword ptr [0x01cd01f8],EBX      ; 004cfbb8 | DAT_01cd01f8
    TEST ESI,ESI                        ; 004cfbbe
        ;   Label: LAB_004cfbbe
    JNZ 0x004cfde8                      ; 004cfbc0
        ;   XREF to: 004cfde8 (CONDITIONAL_JUMP)  ; LAB_004cfde8
    PUSH 0x1                            ; 004cfbc6
    MOV EDX,dword ptr [0x00622580]      ; 004cfbc8 | g_CNetGamePtr
    PUSH EDX                            ; 004cfbce | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0 ; 004cfbcf
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004cfbd4
        ;   Label: LAB_004cfbd4
    MOV EAX,[0x01d06ab4]                ; 004cfbd7 | DAT_01d06ab4
        ;   Label: LAB_004cfbd7
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004cfbdc
    PUSH EAX                            ; 004cfbe3
    MOV EDX,dword ptr [EAX + 0x154]     ; 004cfbe4
    CALL dword ptr [EDX + 0x10c]        ; 004cfbea
    ADD ESP,0x4                         ; 004cfbf0
    CMP EAX,0x2                         ; 004cfbf3
    JNZ 0x004cfc9c                      ; 004cfbf6
        ;   XREF to: 004cfc9c (CONDITIONAL_JUMP)  ; LAB_004cfc9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfbfc
    CMP dword ptr [EAX + 0x9f8],0x0     ; 004cfbff
    JNZ 0x004cfc9c                      ; 004cfc06
        ;   XREF to: 004cfc9c (CONDITIONAL_JUMP)  ; LAB_004cfc9c
    LEA EAX,[EBP + 0xfffffb30]          ; 004cfc0c
    PUSH EAX                            ; 004cfc12
    CALL shape_edittool.cpp_CPickList_ctor_FUN_0049a620 ; 004cfc13
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_0049a620(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004cfc18
    PUSH 0x5e1960                       ; 004cfc1b | = "Load game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004cfc20
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004cfc25
    PUSH EAX                            ; 004cfc28
    LEA EAX,[EBP + 0xfffffb30]          ; 004cfc29
    PUSH EAX                            ; 004cfc2f
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004cfc30
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004cfc35
    PUSH 0x5e196a                       ; 004cfc38 | = "Quit"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004cfc3d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004cfc42
    PUSH EAX                            ; 004cfc45
    LEA EAX,[EBP + 0xfffffb30]          ; 004cfc46
    PUSH EAX                            ; 004cfc4c
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004cfc4d
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004cfc52
    XOR EBX,EBX                         ; 004cfc55
    PUSH EBX                            ; 004cfc57
        ;   Label: LAB_004cfc57
    PUSH -0x1                           ; 004cfc58
    PUSH 0x5e196f                       ; 004cfc5a | = "Game Over"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004cfc5f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004cfc64
    PUSH EAX                            ; 004cfc67
    LEA EAX,[EBP + 0xfffffb30]          ; 004cfc68
    PUSH EAX                            ; 004cfc6e
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0 ; 004cfc6f
        ;   XREF to: 0049a8b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004cfc74
    TEST EAX,EAX                        ; 004cfc77
    JNZ 0x004d03eb                      ; 004cfc79
        ;   XREF to: 004d03eb (CONDITIONAL_JUMP)  ; LAB_004d03eb
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cfc7f
    PUSH EBX                            ; 004cfc82
    CALL core_game.cpp_CGame_promptLoadGame_FUN_004d85f0 ; 004cfc83
        ;   XREF to: 004d85f0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_promptLoadGame_FUN_004d85f0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cfc88
    PUSH 0x0                            ; 004cfc8b
        ;   Label: LAB_004cfc8b
    LEA EAX,[EBP + 0xfffffb30]          ; 004cfc8d
    PUSH EAX                            ; 004cfc93
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 004cfc94
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cfc99
    MOV ESI,dword ptr [0x0061f650]      ; 004cfc9c | DAT_0061f650
        ;   Label: LAB_004cfc9c
    PUSH ESI                            ; 004cfca2 | DAT_01d2c900
    CALL core_mission.cpp_FUN_0051c410  ; 004cfca3
        ;   XREF to: 0051c410 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051c410()
    ADD ESP,0x4                         ; 004cfca8
    PUSH 0x0                            ; 004cfcab
    MOV EDI,dword ptr [0x0061f2a4]      ; 004cfcad | DAT_0061f2a4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004cfcb3
    PUSH EDI                            ; 004cfcb6 | DAT_01d1bca0
    MOV dword ptr [EDX + 0x26c],EAX     ; 004cfcb7
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0 ; 004cfcbd
        ;   XREF to: 004fd2b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0(CKeys * this_ptr, int enable_extended)
    ADD ESP,0x8                         ; 004cfcc2
    MOV EAX,[0x006236b8]                ; 004cfcc5 | DAT_006236b8
    PUSH EAX                            ; 004cfcca
    CALL core_sound.cpp_CSound_shutdown_FUN_0057cdb0 ; 004cfccb
        ;   XREF to: 0057cdb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_0057cdb0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004cfcd0
    CALL engine_alphabit.cpp_FUN_00415c80 ; 004cfcd3
        ;   XREF to: 00415c80 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_00415c80()
    MOV EDX,dword ptr [EBP + 0x14]      ; 004cfcd8
    PUSH EDX                            ; 004cfcdb
    CALL core_game.cpp_FUN_004dc180     ; 004cfcdc
        ;   XREF to: 004dc180 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004dc180()
    ADD ESP,0x4                         ; 004cfce1
    MOV ECX,dword ptr [EBP + 0x14]      ; 004cfce4
    PUSH ECX                            ; 004cfce7
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530 ; 004cfce8
        ;   XREF to: 004cf530 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530(CGame * this_ptr)
    ADD ESP,0x4                         ; 004cfced
    MOV EAX,[0x0061f2a4]                ; 004cfcf0 | DAT_0061f2a4
    PUSH EAX                            ; 004cfcf5 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004cfcf6 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x8]          ; 004cfcf8
    ADD ESP,0x4                         ; 004cfcfb
    MOV EBX,dword ptr [0x00622c18]      ; 004cfcfe | g_CDemonSetPtr
    PUSH EBX                            ; 004cfd04 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_clearLights_FUN_00551b90 ; 004cfd05
        ;   XREF to: 00551b90 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_00551b90(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004cfd0a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfd0d
    PUSH 0x1cd01fc                      ; 004cfd10 | g_CPickList
    MOV dword ptr [EAX + 0x208],0x3f800000 ; 004cfd15
    CALL shape_edittool.cpp_CPickList_clear_FUN_0049c370 ; 004cfd1f
        ;   XREF to: 0049c370 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_0049c370(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004cfd24
    CALL core_inv.cpp_freeInventory_FUN_004f75a0 ; 004cfd27
        ;   XREF to: 004f75a0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_freeInventory_FUN_004f75a0()
    MOV EAX,dword ptr [EBP + -0xc]      ; 004cfd2c
    MOV ESP,EBP                         ; 004cfd2f
    POP EBP                             ; 004cfd31
    POP EDI                             ; 004cfd32
    POP ESI                             ; 004cfd33
    POP EBX                             ; 004cfd34
    RET                                 ; 004cfd35
    MOV ESI,dword ptr [0x0061c010]      ; 004cfd36 | DAT_0061c010
        ;   Label: LAB_004cfd36
    PUSH ESI                            ; 004cfd3c
    CALL core_fire.cpp_CFireEffect_init_FUN_004b4b30 ; 004cfd3d
        ;   XREF to: 004b4b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_004b4b30(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004cfd42
    JMP 0x004cf8b0                      ; 004cfd45
        ;   XREF to: 004cf8b0 (UNCONDITIONAL_JUMP)  ; LAB_004cf8b0
    CMP EDX,0x10000                     ; 004cfd4a
        ;   Label: LAB_004cfd4a
    JLE 0x004cf8cf                      ; 004cfd50
        ;   XREF to: 004cf8cf (CONDITIONAL_JUMP)  ; LAB_004cf8cf
    MOV dword ptr [EAX + 0x240],0x10000 ; 004cfd56
    JMP 0x004cf8cf                      ; 004cfd60
        ;   XREF to: 004cf8cf (UNCONDITIONAL_JUMP)  ; LAB_004cf8cf
    MOV ECX,dword ptr [EDI + 0x2a0]     ; 004cfd65
        ;   Label: LAB_004cfd65
    PUSH ECX                            ; 004cfd6b
    MOV EBX,dword ptr [0x00622c18]      ; 004cfd6c | g_CDemonSetPtr
    PUSH EBX                            ; 004cfd72 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 ; 004cfd73
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004cfd78
    JMP 0x004cf929                      ; 004cfd7b
        ;   XREF to: 004cf929 (UNCONDITIONAL_JUMP)  ; LAB_004cf929
    MOV EAX,[0x0061d418]                ; 004cfd80 | g_CFieldNotesPtr
        ;   Label: LAB_004cfd80
    CMP dword ptr [EAX + 0x40],0x0      ; 004cfd85 | g_CFieldNotesInstance.is_displayed
    JNZ 0x004cf9f6                      ; 004cfd89
        ;   XREF to: 004cf9f6 (CONDITIONAL_JUMP)  ; LAB_004cf9f6
    XOR EAX,EAX                         ; 004cfd8f
    JMP 0x004cf9f8                      ; 004cfd91
        ;   XREF to: 004cf9f8 (UNCONDITIONAL_JUMP)  ; LAB_004cf9f8
    CMP dword ptr [0x01cd01f8],0x0      ; 004cfd96 | DAT_01cd01f8
        ;   Label: LAB_004cfd96
    JNZ 0x004cfa57                      ; 004cfd9d
        ;   XREF to: 004cfa57 (CONDITIONAL_JUMP)  ; LAB_004cfa57
    MOV EAX,EDI                         ; 004cfda3
    JMP 0x004cfa59                      ; 004cfda5
        ;   XREF to: 004cfa59 (UNCONDITIONAL_JUMP)  ; LAB_004cfa59
    MOV EAX,[0x00622ad0]                ; 004cfdaa | g_CScriptPtr
        ;   Label: LAB_004cfdaa
    MOV dword ptr [EAX + 0x10],0x2      ; 004cfdaf | g_CScriptInstance.focus_actor_changed
    JMP 0x004cfb22                      ; 004cfdb6
        ;   XREF to: 004cfb22 (UNCONDITIONAL_JUMP)  ; LAB_004cfb22
    MOV EAX,[0x00622580]                ; 004cfdbb | g_CNetGamePtr
        ;   Label: LAB_004cfdbb
    CMP dword ptr [EAX + 0x170],0x0     ; 004cfdc0 | g_CNetGameInstance.has_pending_sim_frame
    JNZ 0x004cfb1e                      ; 004cfdc7
        ;   XREF to: 004cfb1e (CONDITIONAL_JUMP)  ; LAB_004cfb1e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfdcd
    CMP dword ptr [EAX + 0x25c],0x0     ; 004cfdd0
    JNZ 0x004cfb1e                      ; 004cfdd7
        ;   XREF to: 004cfb1e (CONDITIONAL_JUMP)  ; LAB_004cfb1e
    JMP 0x004cfb22                      ; 004cfddd
        ;   XREF to: 004cfb22 (UNCONDITIONAL_JUMP)  ; LAB_004cfb22
    MOV dword ptr [0x01cd01f8],EBX      ; 004cfde2 | DAT_01cd01f8
        ;   Label: LAB_004cfde2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfde8
        ;   Label: LAB_004cfde8
    CMP dword ptr [EAX + 0xe0],0x0      ; 004cfdeb
    JZ 0x004d0258                       ; 004cfdf2
        ;   XREF to: 004d0258 (CONDITIONAL_JUMP)  ; LAB_004d0258
    CALL wincore_winrun.cpp_FUN_005b2cf0 ; 004cfdf8
        ;   XREF to: 005b2cf0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_005b2cf0()
        ;   Label: LAB_004cfdf8
    CMP dword ptr [0x02c9be74],0x0      ; 004cfdfd | DAT_02c9be74
        ;   Label: LAB_004cfdfd
    JZ 0x004cfe23                       ; 004cfe04
        ;   XREF to: 004cfe23 (CONDITIONAL_JUMP)  ; LAB_004cfe23
    MOV EAX,[0x00622c18]                ; 004cfe06 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004cfe0b | g_CDemonSetInstance.selected_camera_index
    PUSH EDX                            ; 004cfe11
    XOR EBX,EBX                         ; 004cfe12
    PUSH EAX                            ; 004cfe14 | g_CDemonSetInstance
    MOV dword ptr [0x02c9be74],EBX      ; 004cfe15 | DAT_02c9be74
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 ; 004cfe1b
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004cfe20
    MOV EAX,[0x01d06ab4]                ; 004cfe23 | DAT_01d06ab4
        ;   Label: LAB_004cfe23
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004cfe28
    PUSH EAX                            ; 004cfe2f
    MOV EDX,dword ptr [EAX + 0x154]     ; 004cfe30
    CALL dword ptr [EDX + 0x10c]        ; 004cfe36
    ADD ESP,0x4                         ; 004cfe3c
    CMP EAX,0x2                         ; 004cfe3f
    JZ 0x004d02c4                       ; 004cfe42
        ;   XREF to: 004d02c4 (CONDITIONAL_JUMP)  ; LAB_004d02c4
    MOV EAX,[0x00622ad0]                ; 004cfe48 | g_CScriptPtr
        ;   Label: LAB_004cfe48
    CMP dword ptr [EAX],0x0             ; 004cfe4d | g_CScriptInstance
    JZ 0x004d0338                       ; 004cfe50
        ;   XREF to: 004d0338 (CONDITIONAL_JUMP)  ; LAB_004d0338
    MOV dword ptr [EBP + -0xc],0x1      ; 004cfe56
    JMP 0x004cfbd7                      ; 004cfe5d
        ;   XREF to: 004cfbd7 (UNCONDITIONAL_JUMP)  ; LAB_004cfbd7
    PUSH EDI                            ; 004cfe62
        ;   Label: LAB_004cfe62
    MOV EAX,[0x0061f2a4]                ; 004cfe63 | DAT_0061f2a4
    PUSH EAX                            ; 004cfe68 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004cfe69 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004cfe6b
    ADD ESP,0x8                         ; 004cfe6e
    TEST EAX,EAX                        ; 004cfe71
    JZ 0x004cfde8                       ; 004cfe73
        ;   XREF to: 004cfde8 (CONDITIONAL_JUMP)  ; LAB_004cfde8
    MOV EAX,[0x0061f650]                ; 004cfe79 | DAT_0061f650
    CMP dword ptr [EAX + 0x1014],0x0    ; 004cfe7e | DAT_01d2d914
    JNZ 0x004cf9e0                      ; 004cfe85
        ;   XREF to: 004cf9e0 (CONDITIONAL_JUMP)  ; LAB_004cf9e0
    PUSH 0x1cd01fc                      ; 004cfe8b | g_CPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_0049c370 ; 004cfe90
        ;   XREF to: 0049c370 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_0049c370(CPickList * this_ptr)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfe95
    MOV dword ptr [EAX + 0x21c],EBX     ; 004cfe98
    MOV EAX,[0x0061d418]                ; 004cfe9e | g_CFieldNotesPtr
    MOV ESI,dword ptr [EAX + 0x40]      ; 004cfea3 | g_CFieldNotesInstance.is_displayed
    ADD ESP,0x4                         ; 004cfea6
    TEST ESI,ESI                        ; 004cfea9
    JZ 0x004cfeb5                       ; 004cfeab
        ;   XREF to: 004cfeb5 (CONDITIONAL_JUMP)  ; LAB_004cfeb5
    MOV dword ptr [EAX + 0x40],EBX      ; 004cfead | g_CFieldNotesInstance.is_displayed
    JMP 0x004cfde8                      ; 004cfeb0
        ;   XREF to: 004cfde8 (UNCONDITIONAL_JUMP)  ; LAB_004cfde8
    MOV EAX,[0x007c3978]                ; 004cfeb5 | DAT_007c3978
        ;   Label: LAB_004cfeb5
    TEST EAX,EAX                        ; 004cfeba
    JZ 0x004cfecd                       ; 004cfebc
        ;   XREF to: 004cfecd (CONDITIONAL_JUMP)  ; LAB_004cfecd
    PUSH EBX                            ; 004cfebe
    PUSH EAX                            ; 004cfebf
    CALL engine_alphabit.cpp_FUN_00415be0 ; 004cfec0
        ;   XREF to: 00415be0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_00415be0()
    ADD ESP,0x8                         ; 004cfec5
    JMP 0x004cfde8                      ; 004cfec8
        ;   XREF to: 004cfde8 (UNCONDITIONAL_JUMP)  ; LAB_004cfde8
    MOV EAX,[0x01d06ab4]                ; 004cfecd | DAT_01d06ab4
        ;   Label: LAB_004cfecd
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004cfed2
    PUSH EAX                            ; 004cfed9
    MOV EDX,dword ptr [EAX + 0x154]     ; 004cfeda
    CALL dword ptr [EDX + 0x10c]        ; 004cfee0
    ADD ESP,0x4                         ; 004cfee6
    CMP EAX,0x1                         ; 004cfee9
    JG 0x004cfbd7                       ; 004cfeec
        ;   XREF to: 004cfbd7 (CONDITIONAL_JUMP)  ; LAB_004cfbd7
    MOV EAX,[0x00622580]                ; 004cfef2 | g_CNetGamePtr
    MOV EDX,dword ptr [EAX]             ; 004cfef7 | g_CNetGameInstance
    CMP EDX,0x2                         ; 004cfef9
    JZ 0x004d017f                       ; 004cfefc
        ;   XREF to: 004d017f (CONDITIONAL_JUMP)  ; LAB_004d017f
    CMP EDI,EDX                         ; 004cff02
    JZ 0x004d01dd                       ; 004cff04
        ;   XREF to: 004d01dd (CONDITIONAL_JUMP)  ; LAB_004d01dd
    MOV EBX,dword ptr [0x006236b8]      ; 004cff0a | DAT_006236b8
    PUSH EBX                            ; 004cff10
    CALL core_sound.cpp_CSound_shutdown_FUN_0057cdb0 ; 004cff11
        ;   XREF to: 0057cdb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_0057cdb0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004cff16
    LEA EAX,[EBP + 0xfffff770]          ; 004cff19
    PUSH EAX                            ; 004cff1f
    CALL shape_edittool.cpp_CPickList_ctor_FUN_0049a620 ; 004cff20
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_0049a620(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004cff25
    PUSH 0x5e18f5                       ; 004cff28 | = "Return"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004cff2d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004cff32
    PUSH EAX                            ; 004cff35
    LEA EAX,[EBP + 0xfffff770]          ; 004cff36
    PUSH EAX                            ; 004cff3c
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004cff3d
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004cff42
    PUSH 0x5e18fc                       ; 004cff45 | = "Options"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004cff4a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004cff4f
    PUSH EAX                            ; 004cff52
    LEA EAX,[EBP + 0xfffff770]          ; 004cff53
    PUSH EAX                            ; 004cff59
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004cff5a
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004cff5f
    PUSH 0x5e1904                       ; 004cff62 | = "Load game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004cff67
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004cff6c
    PUSH EAX                            ; 004cff6f
    LEA EAX,[EBP + 0xfffff770]          ; 004cff70
    PUSH EAX                            ; 004cff76
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004cff77
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004cff7c
    PUSH 0x5e190e                       ; 004cff7f | = "Save game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004cff84
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004cff89
    PUSH EAX                            ; 004cff8c
    LEA EAX,[EBP + 0xfffff770]          ; 004cff8d
    PUSH EAX                            ; 004cff93
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004cff94
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004cff99
    PUSH 0x5e1918                       ; 004cff9c | = "Quit"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004cffa1
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004cffa6
    PUSH EAX                            ; 004cffa9
    LEA EAX,[EBP + 0xfffff770]          ; 004cffaa
    PUSH EAX                            ; 004cffb0
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004cffb1
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cffb6
    MOV ESI,dword ptr [EAX + 0x244]     ; 004cffb9
    ADD ESP,0x8                         ; 004cffbf
    CMP EDI,ESI                         ; 004cffc2
    JNZ 0x004cffe3                      ; 004cffc4
        ;   XREF to: 004cffe3 (CONDITIONAL_JUMP)  ; LAB_004cffe3
    PUSH 0x5e191d                       ; 004cffc6 | = "Skip cinematic."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004cffcb
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004cffd0
    PUSH EAX                            ; 004cffd3
    LEA EAX,[EBP + 0xfffff770]          ; 004cffd4
    PUSH EAX                            ; 004cffda
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004cffdb
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004cffe0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cffe3
        ;   Label: LAB_004cffe3
    CMP dword ptr [EAX + 0x244],0x0     ; 004cffe6
    JZ 0x004d0002                       ; 004cffed
        ;   XREF to: 004d0002 (CONDITIONAL_JUMP)  ; LAB_004d0002
    PUSH 0x0                            ; 004cffef
    PUSH 0x3                            ; 004cfff1
    LEA EAX,[EBP + 0xfffff770]          ; 004cfff3
    PUSH EAX                            ; 004cfff9
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_0049c030 ; 004cfffa
        ;   XREF to: 0049c030 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_0049c030(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 004cffff
    PUSH 0x0                            ; 004d0002
        ;   Label: LAB_004d0002
    PUSH -0x1                           ; 004d0004
    PUSH 0x5e192d                       ; 004d0006 | = "Game paused"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d000b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d0010
    PUSH EAX                            ; 004d0013
    LEA EAX,[EBP + 0xfffff770]          ; 004d0014
    PUSH EAX                            ; 004d001a
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0 ; 004d001b
        ;   XREF to: 0049a8b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004d0020
    MOV EBX,EAX                         ; 004d0023
    CMP EAX,0x1                         ; 004d0025
    JNZ 0x004d00ae                      ; 004d0028
        ;   XREF to: 004d00ae (CONDITIONAL_JUMP)  ; LAB_004d00ae
    PUSH 0x0                            ; 004d002e
    MOV ECX,dword ptr [0x0061f2a4]      ; 004d0030 | DAT_0061f2a4
    PUSH ECX                            ; 004d0036 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0 ; 004d0037
        ;   XREF to: 004fd2b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0(CKeys * this_ptr, int enable_extended)
    ADD ESP,0x8                         ; 004d003c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004d003f
    PUSH ESI                            ; 004d0042
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530 ; 004d0043
        ;   XREF to: 004cf530 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d0048
    PUSH EDI                            ; 004d004b
    CALL core_menu.cpp_FUN_0050c990     ; 004d004c
        ;   XREF to: 0050c990 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_FUN_0050c990()
    ADD ESP,0x4                         ; 004d0051
    PUSH ESI                            ; 004d0054
    CALL core_game.cpp_CGame_setGameRes_FUN_004cf430 ; 004d0055
        ;   XREF to: 004cf430 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setGameRes_FUN_004cf430(CGame * this_ptr)
    MOV EDX,dword ptr [ESI + 0x218]     ; 004d005a
    ADD ESP,0x4                         ; 004d0060
    TEST EDX,EDX                        ; 004d0063
    SETZ AL                             ; 004d0065
    AND EAX,0xff                        ; 004d0068
    PUSH EAX                            ; 004d006d
    MOV ECX,dword ptr [0x0061f2a4]      ; 004d006e | DAT_0061f2a4
    PUSH ECX                            ; 004d0074 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0 ; 004d0075
        ;   XREF to: 004fd2b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0(CKeys * this_ptr, int enable_extended)
    MOV EAX,[0x00622c18]                ; 004d007a | g_CDemonSetPtr
    ADD ESP,0x8                         ; 004d007f
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004d0082 | g_CDemonSetInstance.selected_camera_index
    PUSH EDX                            ; 004d0088
    PUSH EAX                            ; 004d0089 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 ; 004d008a
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet * this_ptr, int index)
    MOV ESI,dword ptr [0x0061b49c]      ; 004d008f | DAT_0061b49c
    ADD ESP,0x8                         ; 004d0095
    CMP ESI,0xf0                        ; 004d0098
    JLE 0x004d023b                      ; 004d009e
        ;   XREF to: 004d023b (CONDITIONAL_JUMP)  ; LAB_004d023b
    MOV EAX,[0x0152d244]                ; 004d00a4 | DAT_0152d244
    MOV [0x01c3eb50],EAX                ; 004d00a9 | DAT_01c3eb50
        ;   Label: LAB_004d00a9
    CMP EBX,0x2                         ; 004d00ae
        ;   Label: LAB_004d00ae
    JNZ 0x004d00bf                      ; 004d00b1
        ;   XREF to: 004d00bf (CONDITIONAL_JUMP)  ; LAB_004d00bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d00b3
    PUSH EAX                            ; 004d00b6
    CALL core_game.cpp_CGame_promptLoadGame_FUN_004d85f0 ; 004d00b7
        ;   XREF to: 004d85f0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_promptLoadGame_FUN_004d85f0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d00bc
    CMP EBX,0x3                         ; 004d00bf
        ;   Label: LAB_004d00bf
    JNZ 0x004d00d2                      ; 004d00c2
        ;   XREF to: 004d00d2 (CONDITIONAL_JUMP)  ; LAB_004d00d2
    PUSH 0x0                            ; 004d00c4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d00c6
    PUSH EDX                            ; 004d00c9
    CALL core_game.cpp_FUN_004d6420     ; 004d00ca
        ;   XREF to: 004d6420 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d6420(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004d00cf
    CMP EBX,0x4                         ; 004d00d2
        ;   Label: LAB_004d00d2
    JNZ 0x004d00fc                      ; 004d00d5
        ;   XREF to: 004d00fc (CONDITIONAL_JUMP)  ; LAB_004d00fc
    PUSH 0x5e1939                       ; 004d00d7 | = "Quit"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d00dc
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d00e1
    PUSH EAX                            ; 004d00e4
    MOV ECX,dword ptr [0x0061abc0]      ; 004d00e5 | g_CEditorToolsPtr
    PUSH ECX                            ; 004d00eb
    CALL shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20 ; 004d00ec
        ;   XREF to: 00494d20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 004d00f1
    TEST EAX,EAX                        ; 004d00f4
    JNZ 0x004d0245                      ; 004d00f6
        ;   XREF to: 004d0245 (CONDITIONAL_JUMP)  ; LAB_004d0245
    CMP EBX,0x5                         ; 004d00fc
        ;   Label: LAB_004d00fc
    JNZ 0x004d012c                      ; 004d00ff
        ;   XREF to: 004d012c (CONDITIONAL_JUMP)  ; LAB_004d012c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d0101
    PUSH EBX                            ; 004d0104
    CALL core_game.cpp_FUN_004d5e80     ; 004d0105
        ;   XREF to: 004d5e80 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d5e80()
    ADD ESP,0x4                         ; 004d010a
    MOV ESI,dword ptr [0x00622ad0]      ; 004d010d | g_CScriptPtr
    PUSH ESI                            ; 004d0113 | g_CScriptInstance
    CALL core_script.cpp_CScript_skipCinematic_FUN_0054ae40 ; 004d0114
        ;   XREF to: 0054ae40 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_skipCinematic_FUN_0054ae40(CScript * this_ptr)
    ADD ESP,0x4                         ; 004d0119
    TEST EAX,EAX                        ; 004d011c
    SETZ AL                             ; 004d011e
    AND EAX,0xff                        ; 004d0121
    MOV dword ptr [EBX + 0xe0],EAX      ; 004d0126
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004d012c
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_004d012c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d0131
    CMP dword ptr [EAX + 0xe0],0x0      ; 004d0134
    JNZ 0x004d014c                      ; 004d013b
        ;   XREF to: 004d014c (CONDITIONAL_JUMP)  ; LAB_004d014c
    MOV ECX,dword ptr [0x006236b8]      ; 004d013d | DAT_006236b8
    PUSH ECX                            ; 004d0143
    CALL core_sound.cpp_FUN_0057cc00    ; 004d0144
        ;   XREF to: 0057cc00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057cc00(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d0149
    MOV EAX,[0x01d06ab4]                ; 004d014c | DAT_01d06ab4
        ;   Label: LAB_004d014c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d0151
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d0154
    MOV EDX,dword ptr [EDX + 0xd8]      ; 004d015b
    PUSH 0x0                            ; 004d0161
    MOV dword ptr [EAX + 0x1fae4],EDX   ; 004d0163
    LEA EAX,[EBP + 0xfffff770]          ; 004d0169
    PUSH EAX                            ; 004d016f
    MOV EBX,EDI                         ; 004d0170
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 004d0172
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d0177
    JMP 0x004cfde8                      ; 004d017a
        ;   XREF to: 004cfde8 (UNCONDITIONAL_JUMP)  ; LAB_004cfde8
    PUSH 0x5e1830                       ; 004d017f | = "Leave network game"
        ;   Label: LAB_004d017f
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d0184
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d0189
    PUSH EAX                            ; 004d018c
    PUSH 0x1cd01fc                      ; 004d018d | g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004d0192
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004d0197
    PUSH 0x5e1843                       ; 004d019a | = "Return to game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d019f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d01a4
    PUSH EAX                            ; 004d01a7
    PUSH 0x1cd01fc                      ; 004d01a8 | g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004d01ad
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004d01b2
    PUSH EDI                            ; 004d01b5
    PUSH EBX                            ; 004d01b6
    PUSH 0x5e1852                       ; 004d01b7 | = "You are connect to a network game.\nD..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d01bc
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d01c1
    PUSH EAX                            ; 004d01c4
    PUSH 0x1cd01fc                      ; 004d01c5 | g_CPickList
    CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_0049a980 ; 004d01ca
        ;   XREF to: 0049a980 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_initializeDialog_FUN_0049a980(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004d01cf
    MOV dword ptr [0x01cd01f8],EDI      ; 004d01d2 | DAT_01cd01f8
    JMP 0x004cfde8                      ; 004d01d8
        ;   XREF to: 004cfde8 (UNCONDITIONAL_JUMP)  ; LAB_004cfde8
    PUSH 0x5e1894                       ; 004d01dd | = "Abort network game"
        ;   Label: LAB_004d01dd
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d01e2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d01e7
    PUSH EAX                            ; 004d01ea
    PUSH 0x1cd01fc                      ; 004d01eb | g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004d01f0
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004d01f5
    PUSH 0x5e18a7                       ; 004d01f8 | = "Return to game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d01fd
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d0202
    PUSH EAX                            ; 004d0205
    PUSH 0x1cd01fc                      ; 004d0206 | g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004d020b
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004d0210
    PUSH EDI                            ; 004d0213
    PUSH EBX                            ; 004d0214
    PUSH 0x5e18b6                       ; 004d0215 | = "You are hosting a network game.\nDo y..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d021a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d021f
    PUSH EAX                            ; 004d0222
    PUSH 0x1cd01fc                      ; 004d0223 | g_CPickList
    CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_0049a980 ; 004d0228
        ;   XREF to: 0049a980 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_initializeDialog_FUN_0049a980(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004d022d
    MOV dword ptr [0x01cd01f8],EDI      ; 004d0230 | DAT_01cd01f8
    JMP 0x004cfde8                      ; 004d0236
        ;   XREF to: 004cfde8 (UNCONDITIONAL_JUMP)  ; LAB_004cfde8
    MOV EAX,[0x0152d248]                ; 004d023b | DAT_0152d248
        ;   Label: LAB_004d023b
    JMP 0x004d00a9                      ; 004d0240
        ;   XREF to: 004d00a9 (UNCONDITIONAL_JUMP)  ; LAB_004d00a9
    PUSH 0x0                            ; 004d0245
        ;   Label: LAB_004d0245
    LEA EAX,[EBP + 0xfffff770]          ; 004d0247
    PUSH EAX                            ; 004d024d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 004d024e
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    JMP 0x004cfbd4                      ; 004d0253
        ;   XREF to: 004cfbd4 (UNCONDITIONAL_JUMP)  ; LAB_004cfbd4
    MOV EAX,[0x00622580]                ; 004d0258 | g_CNetGamePtr
        ;   Label: LAB_004d0258
    CMP dword ptr [EAX + 0x170],0x0     ; 004d025d | g_CNetGameInstance.has_pending_sim_frame
    JNZ 0x004cfdf8                      ; 004d0264
        ;   XREF to: 004cfdf8 (CONDITIONAL_JUMP)  ; LAB_004cfdf8
    TEST EBX,EBX                        ; 004d026a
    JNZ 0x004cfdf8                      ; 004d026c
        ;   XREF to: 004cfdf8 (CONDITIONAL_JUMP)  ; LAB_004cfdf8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d0272
    CMP dword ptr [EAX + 0x278],0x3     ; 004d0275
    JGE 0x004d028c                      ; 004d027c
        ;   XREF to: 004d028c (CONDITIONAL_JUMP)  ; LAB_004d028c
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 004d027e
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d0283
    INC dword ptr [EAX + 0x278]         ; 004d0286
    CMP dword ptr [0x01c50948],0x0      ; 004d028c | DAT_01c50948
        ;   Label: LAB_004d028c
    JZ 0x004d02b1                       ; 004d0293
        ;   XREF to: 004d02b1 (CONDITIONAL_JUMP)  ; LAB_004d02b1
    PUSH EDI                            ; 004d0295
    CALL engine_special.cpp_presentToExternalRenderer_FUN_00582990 ; 004d0296
        ;   XREF to: 00582990 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_presentToExternalRenderer_FUN_00582990(int skip_buffer_copy)
    ADD ESP,0x4                         ; 004d029b
    CALL wincore_winrun.cpp_FUN_005b2cf0 ; 004d029e
        ;   XREF to: 005b2cf0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_005b2cf0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d02a3
    INC dword ptr [EAX + 0x29c]         ; 004d02a6
    JMP 0x004cfdfd                      ; 004d02ac
        ;   XREF to: 004cfdfd (UNCONDITIONAL_JUMP)  ; LAB_004cfdfd
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 004d02b1
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
        ;   Label: LAB_004d02b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d02b6
    INC dword ptr [EAX + 0x29c]         ; 004d02b9
    JMP 0x004cfdfd                      ; 004d02bf
        ;   XREF to: 004cfdfd (UNCONDITIONAL_JUMP)  ; LAB_004cfdfd
    PUSH 0x1c                           ; 004d02c4
        ;   Label: LAB_004d02c4
    MOV EAX,[0x0061f2a4]                ; 004d02c6 | DAT_0061f2a4
    PUSH EAX                            ; 004d02cb | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 004d02cc | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 004d02ce
    ADD ESP,0x8                         ; 004d02d1
    TEST EAX,EAX                        ; 004d02d4
    JNZ 0x004cfbd7                      ; 004d02d6
        ;   XREF to: 004cfbd7 (CONDITIONAL_JUMP)  ; LAB_004cfbd7
    FLD float ptr [EBP + -0x4]          ; 004d02dc
    FLDZ                                ; 004d02df
    FCOMPP                              ; 004d02e1
    FNSTSW AX                           ; 004d02e3
    SAHF                                ; 004d02e5
    JA 0x004d031f                       ; 004d02e6
        ;   XREF to: 004d031f (CONDITIONAL_JUMP)  ; LAB_004d031f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d02e8
    FLD float ptr [EBP + -0x4]          ; 004d02eb
    FADD float ptr [EAX + 0x294]        ; 004d02ee
    FST float ptr [EBP + -0x4]          ; 004d02f4
    FCOMP double ptr [0x005e197c]       ; 004d02f7 | DAT_005e197c
    FNSTSW AX                           ; 004d02fd
    SAHF                                ; 004d02ff
    JBE 0x004cfe48                      ; 004d0300
        ;   XREF to: 004cfe48 (CONDITIONAL_JUMP)  ; LAB_004cfe48
    MOV ESI,dword ptr [EBP + 0x14]      ; 004d0306
    PUSH ESI                            ; 004d0309
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004d6070 ; 004d030a
        ;   XREF to: 004d6070 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeOut_FUN_004d6070(CGame * this_ptr)
    MOV EAX,0xbf800000                  ; 004d030f
    ADD ESP,0x4                         ; 004d0314
    MOV dword ptr [EBP + -0x4],EAX      ; 004d0317
    JMP 0x004cfe48                      ; 004d031a
        ;   XREF to: 004cfe48 (UNCONDITIONAL_JUMP)  ; LAB_004cfe48
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d031f
        ;   Label: LAB_004d031f
    PUSH EDX                            ; 004d0322
    CALL core_game.cpp_CGame_fadeIn_FUN_004d62e0 ; 004d0323
        ;   XREF to: 004d62e0 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004d62e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d0328
    TEST EAX,EAX                        ; 004d032b
    JNZ 0x004cfbd7                      ; 004d032d
        ;   XREF to: 004cfbd7 (CONDITIONAL_JUMP)  ; LAB_004cfbd7
    JMP 0x004cfe48                      ; 004d0333
        ;   XREF to: 004cfe48 (UNCONDITIONAL_JUMP)  ; LAB_004cfe48
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d0338
        ;   Label: LAB_004d0338
    PUSH EBX                            ; 004d033b
    CALL core_game.cpp_FUN_004d77d0     ; 004d033c
        ;   XREF to: 004d77d0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d77d0()
    MOV ESI,dword ptr [EBX + 0x21c]     ; 004d0341
    ADD ESP,0x4                         ; 004d0347
    TEST ESI,ESI                        ; 004d034a
    JZ 0x004d0353                       ; 004d034c
        ;   XREF to: 004d0353 (CONDITIONAL_JUMP)  ; LAB_004d0353
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005b2510 ; 004d034e
        ;   XREF to: 005b2510 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005b2510()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d0353
        ;   Label: LAB_004d0353
    MOV EDX,dword ptr [EAX + 0x9f8]     ; 004d0356
    TEST EDX,EDX                        ; 004d035c
    JZ 0x004d036a                       ; 004d035e
        ;   XREF to: 004d036a (CONDITIONAL_JUMP)  ; LAB_004d036a
    XOR EDI,EDI                         ; 004d0360
    MOV dword ptr [EBP + -0xc],EDI      ; 004d0362
    JMP 0x004cfbd7                      ; 004d0365
        ;   XREF to: 004cfbd7 (UNCONDITIONAL_JUMP)  ; LAB_004cfbd7
    CMP dword ptr [EBP + -0x8],0x0      ; 004d036a
        ;   Label: LAB_004d036a
    JZ 0x004d0382                       ; 004d036e
        ;   XREF to: 004d0382 (CONDITIONAL_JUMP)  ; LAB_004d0382
    MOV ESI,dword ptr [0x006236b8]      ; 004d0370 | DAT_006236b8
    PUSH ESI                            ; 004d0376
    MOV dword ptr [EBP + -0x8],EDX      ; 004d0377
    CALL core_sound.cpp_FUN_0057cc00    ; 004d037a
        ;   XREF to: 0057cc00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057cc00(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d037f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d0382
        ;   Label: LAB_004d0382
    CMP dword ptr [EAX + 0x22c],0x0     ; 004d0385
    JZ 0x004d03b1                       ; 004d038c
        ;   XREF to: 004d03b1 (CONDITIONAL_JUMP)  ; LAB_004d03b1
    PUSH 0x1d                           ; 004d038e
    MOV EAX,[0x0061f2a4]                ; 004d0390 | DAT_0061f2a4
    PUSH EAX                            ; 004d0395 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004d0396 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 004d0398
    ADD ESP,0x8                         ; 004d039a
    TEST EAX,EAX                        ; 004d039d
    JZ 0x004d03b1                       ; 004d039f
        ;   XREF to: 004d03b1 (CONDITIONAL_JUMP)  ; LAB_004d03b1
    PUSH 0x19                           ; 004d03a1
    MOV EAX,[0x0061f2a4]                ; 004d03a3 | DAT_0061f2a4
    PUSH EAX                            ; 004d03a8 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004d03a9 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d03ab
    ADD ESP,0x8                         ; 004d03ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d03b1
        ;   Label: LAB_004d03b1
    CMP dword ptr [EAX + 0x288],0x0     ; 004d03b4
    JZ 0x004cf9e0                       ; 004d03bb
        ;   XREF to: 004cf9e0 (CONDITIONAL_JUMP)  ; LAB_004cf9e0
    PUSH EDI                            ; 004d03c1
    PUSH 0x5e1959                       ; 004d03c2 | = "NewSet"
    MOV EBX,dword ptr [0x0061b4d0]      ; 004d03c7 | DAT_0061b4d0
    PUSH EBX                            ; 004d03cd
    CALL core_event.cpp_FUN_004a9870    ; 004d03ce
        ;   XREF to: 004a9870 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9870()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d03d3
    MOV ESI,dword ptr [EAX + 0x288]     ; 004d03d6
    DEC ESI                             ; 004d03dc
    ADD ESP,0xc                         ; 004d03dd
    MOV dword ptr [EAX + 0x288],ESI     ; 004d03e0
    JMP 0x004cf9e0                      ; 004d03e6
        ;   XREF to: 004cf9e0 (UNCONDITIONAL_JUMP)  ; LAB_004cf9e0
    CMP EAX,0x1                         ; 004d03eb
        ;   Label: LAB_004d03eb
    JZ 0x004cfc8b                       ; 004d03ee
        ;   XREF to: 004cfc8b (CONDITIONAL_JUMP)  ; LAB_004cfc8b
    JMP 0x004cfc57                      ; 004d03f4
        ;   XREF to: 004cfc57 (UNCONDITIONAL_JUMP)  ; LAB_004cfc57

