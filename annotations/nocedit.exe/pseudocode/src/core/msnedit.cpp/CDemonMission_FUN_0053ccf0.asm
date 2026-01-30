; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ccf0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x448]:4  local_448
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 0053882e
;
; Referenced Globals:
;   TerminatedCString s_Use_a_saved_game_file_in_0063c8ea
;   TerminatedCString s_noc_0063c916
;   TerminatedCString s_save_0063c91c
;   TerminatedCString s_Select_mission_file_to_i_0063c921
;   TerminatedCString s_msn_0063c94b
;   TerminatedCString s_world_0063c951
;   TerminatedCString s_Select_mission_file_to_i_0063c957
;   TerminatedCString s_Creating_temp_mission_0063c981
;   TerminatedCString s_core_msnedit_cpp_0063c997
;   TerminatedCString s_core_msnedit_cpp_0063c9ab
;   TerminatedCString s_Can_t_create_temp_missio_0063c9bf
;   TerminatedCString s_Loading_s_0063c9da
;   TerminatedCString s_No_more_actors_to_import_0063c9e5
;   TerminatedCString s_Import_by_choosing_from__0063ca11
;   TerminatedCString s_Import_using_wildcard_on_0063ca35
;   ... and 19 more
;
; Called Functions:
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20
;   core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80
;   core_mission.cpp_CDemonMission_FUN_00523b70
;   core_mission.cpp_CDemonMission_FUN_00523cc0
;   core_mission.cpp_CDemonMission_FUN_00523cf0
;   core_mission.cpp_CDemonMission_FUN_00524030
;   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
;   core_mission.cpp_CDemonMission_load_FUN_00522d90
;   core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
;   core_msnedit.cpp_CDemonMission_FUN_00538ea0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ccf0
        ;   Label: core_msnedit.cpp_CDemonMission_FUN_0053ccf0
    PUSH ESI                            ; 0053ccf1
    PUSH EBP                            ; 0053ccf2
    SUB ESP,0x43c                       ; 0053ccf3
    MOV EBP,dword ptr [ESP + 0x44c]     ; 0053ccf9
    PUSH 0x63c8ea                       ; 0053cd00 | = "Use a saved game file instead of a mi..."
    MOV EDX,dword ptr [0x00678a60]      ; 0053cd05 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0053cd0b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 0053cd0c
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0053cd11
    MOV EBX,EAX                         ; 0053cd14
    TEST EAX,EAX                        ; 0053cd16
    JZ 0x0053cd50                       ; 0053cd18
        ;   XREF to: 0053cd50 (CONDITIONAL_JUMP)  ; LAB_0053cd50
    PUSH 0x0                            ; 0053cd1a
    LEA EAX,[ESP + 0x410]               ; 0053cd1c
    PUSH EAX                            ; 0053cd23
    PUSH 0x63c916                       ; 0053cd24 | = "*.noc"
    PUSH 0x63c91c                       ; 0053cd29 | = "save"
    PUSH 0x63c921                       ; 0053cd2e | = "Select mission file to import actors ..."
    MOV ESI,dword ptr [0x00678a60]      ; 0053cd33 | g_CEditorToolsPtr
    PUSH ESI                            ; 0053cd39 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0053cd3a
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 0053cd3f
    TEST EAX,EAX                        ; 0053cd42
    JNZ 0x0053cd7b                      ; 0053cd44
        ;   XREF to: 0053cd7b (CONDITIONAL_JUMP)  ; LAB_0053cd7b
    ADD ESP,0x43c                       ; 0053cd46
        ;   Label: LAB_0053cd46
    POP EBP                             ; 0053cd4c
    POP ESI                             ; 0053cd4d
    POP EBX                             ; 0053cd4e
    RET                                 ; 0053cd4f
    PUSH EAX                            ; 0053cd50
        ;   Label: LAB_0053cd50
    LEA EAX,[ESP + 0x410]               ; 0053cd51
    PUSH EAX                            ; 0053cd58
    PUSH 0x63c94b                       ; 0053cd59 | = "*.msn"
    PUSH 0x63c951                       ; 0053cd5e | = "world"
    PUSH 0x63c957                       ; 0053cd63 | = "Select mission file to import actors ..."
    MOV ECX,dword ptr [0x00678a60]      ; 0053cd68 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0053cd6e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0053cd6f
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 0053cd74
    TEST EAX,EAX                        ; 0053cd77
    JZ 0x0053cd46                       ; 0053cd79
        ;   XREF to: 0053cd46 (CONDITIONAL_JUMP)  ; LAB_0053cd46
    PUSH EDI                            ; 0053cd7b
        ;   Label: LAB_0053cd7b
    PUSH EBP                            ; 0053cd7c
    CALL core_mission.cpp_CDemonMission_FUN_00523cf0 ; 0053cd7d
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053cd82
    PUSH 0x63c981                       ; 0053cd85 | = "Creating temp mission"
    MOV EDI,dword ptr [0x00678a60]      ; 0053cd8a | g_CEditorToolsPtr
    PUSH EDI                            ; 0053cd90 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053cd91
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 0053cd96
    PUSH 0xbef                          ; 0053cd99
    PUSH 0x63c997                       ; 0053cd9e | = "..\\core\\msnedit.cpp"
    PUSH 0x27d0                         ; 0053cda3
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0053cda8
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0053cdad
    MOV dword ptr [ESP + 0x43c],EAX     ; 0053cdb0
    TEST EAX,EAX                        ; 0053cdb7
    JNZ 0x0053cddd                      ; 0053cdb9
        ;   XREF to: 0053cddd (CONDITIONAL_JUMP)  ; LAB_0053cddd
    MOV EAX,0x63c9ab                    ; 0053cdbb | = "..\\core\\msnedit.cpp"
    MOV EDX,0xbf0                       ; 0053cdc0
    PUSH 0x63c9bf                       ; 0053cdc5 | = "Can't create temp mission!"
    MOV [0x02f0ca48],EAX                ; 0053cdca | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0053cdcf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053cdd5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0053cdda
    MOV ECX,dword ptr [ESP + 0x43c]     ; 0053cddd
        ;   Label: LAB_0053cddd
    PUSH ECX                            ; 0053cde4
    CALL core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80 ; 0053cde5
        ;   XREF to: 00522c80 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053cdea
    LEA EAX,[ESP + 0x410]               ; 0053cded
    PUSH EAX                            ; 0053cdf4
    PUSH 0x63c9da                       ; 0053cdf5 | = "Loading %s"
    MOV ESI,dword ptr [0x00678a60]      ; 0053cdfa | g_CEditorToolsPtr
    PUSH ESI                            ; 0053ce00 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053ce01
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 0053ce06
    MOV EAX,dword ptr [ESP + 0x43c]     ; 0053ce09
    MOV dword ptr [EBP + 0x3c],0x1      ; 0053ce10
    MOV [0x0067d550],EAX                ; 0053ce17 | g_CDemonMissionPtr
    TEST EBX,EBX                        ; 0053ce1c
    JZ 0x0053cf29                       ; 0053ce1e
        ;   XREF to: 0053cf29 (CONDITIONAL_JUMP)  ; LAB_0053cf29
    PUSH 0x0                            ; 0053ce24
    LEA EAX,[ESP + 0x414]               ; 0053ce26
    PUSH EAX                            ; 0053ce2d
    MOV EAX,[0x0067b654]                ; 0053ce2e | g_CGameInstance | g_CGamePtr
    PUSH EAX                            ; 0053ce33 | g_CGameInstance
    CALL core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 ; 0053ce34
        ;   XREF to: 004e12b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_loadSaveGame_FUN_004e12b0(CGame * this_ptr, char * save_filename, int load_mode, char * chapter_name)
    ADD ESP,0xc                         ; 0053ce39
        ;   Label: LAB_0053ce39
    MOV EDX,dword ptr [ESP + 0x43c]     ; 0053ce3c
    PUSH EDX                            ; 0053ce43
    LEA EDI,[ESP + 0x3b0]               ; 0053ce44
    CALL core_mission.cpp_CDemonMission_FUN_00523cf0 ; 0053ce4b
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053ce50
    XOR ECX,ECX                         ; 0053ce53
    MOV ESI,0x680970                    ; 0053ce55 | DAT_00680970
    MOV dword ptr [ESP + 0x438],ECX     ; 0053ce5a
    MOV ECX,0x19                        ; 0053ce61
    MOV dword ptr [EBP + 0x3c],0x0      ; 0053ce66
    MOV dword ptr [0x0067d550],EBP      ; 0053ce6d | g_CDemonMissionPtr
    MOVSD.REP ES:EDI,ESI                ; 0053ce73 | DAT_00680970 | DAT_00680974
    MOV EBX,dword ptr [ESP + 0x43c]     ; 0053ce75
        ;   Label: LAB_0053ce75
    PUSH EBX                            ; 0053ce7c
    CALL core_mission.cpp_CDemonMission_FUN_00523cc0 ; 0053ce7d
        ;   XREF to: 00523cc0 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_FUN_00523cc0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053ce82
    CMP EAX,0x1                         ; 0053ce85
    JGE 0x0053cf45                      ; 0053ce88
        ;   XREF to: 0053cf45 (CONDITIONAL_JUMP)  ; LAB_0053cf45
    PUSH 0x63c9e5                       ; 0053ce8e | = "No more actors to import from this mi..."
    MOV EDI,dword ptr [0x00678a60]      ; 0053ce93 | g_CEditorToolsPtr
    PUSH EDI                            ; 0053ce99 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0053ce9a
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053ce9f
        ;   Label: LAB_0053ce9f
    PUSH 0x63caf2                       ; 0053cea2 | = "Cleaning up."
    MOV EAX,[0x00678a60]                ; 0053cea7 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0053ceac | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053cead
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 0053ceb2
    MOV EBX,dword ptr [ESP + 0x43c]     ; 0053ceb5
    MOV EBX,dword ptr [EBX + 0x548]     ; 0053cebc
    TEST EBX,EBX                        ; 0053cec2
    JZ 0x0053cee0                       ; 0053cec4
        ;   XREF to: 0053cee0 (CONDITIONAL_JUMP)  ; LAB_0053cee0
    PUSH EBX                            ; 0053cec6
        ;   Label: LAB_0053cec6
    PUSH EBP                            ; 0053cec7
    CALL core_msnedit.cpp_CDemonMission_FUN_00538ea0 ; 0053cec8
        ;   XREF to: 00538ea0 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_00538ea0(CDemonMission * this_ptr, int param_2)
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0053cecd
    ADD ESP,0x8                         ; 0053ced3
    TEST EBX,EBX                        ; 0053ced6
    JNZ 0x0053cec6                      ; 0053ced8
        ;   XREF to: 0053cec6 (CONDITIONAL_JUMP)  ; LAB_0053cec6
    LEA EAX,[EAX]                       ; 0053ceda
    MOV EAX,dword ptr [ESP + 0x43c]     ; 0053cee0
        ;   Label: LAB_0053cee0
    MOV ESI,0x63caff                    ; 0053cee7 | = "..\\core\\msnedit.cpp"
    PUSH EAX                            ; 0053ceec
    MOV [0x0067d550],EAX                ; 0053ceed | g_CDemonMissionPtr
    MOV EBX,EAX                         ; 0053cef2
    CALL core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20 ; 0053cef4
        ;   XREF to: 00522d20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053cef9
    MOV EAX,EBX                         ; 0053cefc
    MOV EDI,0xc85                       ; 0053cefe
    PUSH EAX                            ; 0053cf03
    MOV dword ptr [0x0067d20c],ESI      ; 0053cf04 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 0053cf0a | g_CurrentDebugLine
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0053cf10
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0053cf15
    MOV dword ptr [0x0067d550],EBP      ; 0053cf18 | g_CDemonMissionPtr
    POP EDI                             ; 0053cf1e
    ADD ESP,0x43c                       ; 0053cf1f
    POP EBP                             ; 0053cf25
    POP ESI                             ; 0053cf26
    POP EBX                             ; 0053cf27
    RET                                 ; 0053cf28
    PUSH 0x1                            ; 0053cf29
        ;   Label: LAB_0053cf29
    LEA EAX,[ESP + 0x414]               ; 0053cf2b
    PUSH EAX                            ; 0053cf32
    MOV EDI,dword ptr [ESP + 0x444]     ; 0053cf33
    PUSH EDI                            ; 0053cf3a
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 0053cf3b
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    JMP 0x0053ce39                      ; 0053cf40
        ;   XREF to: 0053ce39 (UNCONDITIONAL_JUMP)  ; LAB_0053ce39
    LEA EAX,[ESP + 0x4]                 ; 0053cf45
        ;   Label: LAB_0053cf45
    PUSH EAX                            ; 0053cf49
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053cf4a
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0053cf4f
    PUSH 0x63ca11                       ; 0053cf52 | = "Import by choosing from actor list."
    LEA EAX,[ESP + 0x8]                 ; 0053cf57
    PUSH EAX                            ; 0053cf5b
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053cf5c
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053cf61
    PUSH 0x63ca35                       ; 0053cf64 | = "Import using wildcard on actor name."
    LEA EAX,[ESP + 0x8]                 ; 0053cf69
    PUSH EAX                            ; 0053cf6d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053cf6e
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053cf73
    PUSH 0x0                            ; 0053cf76
    PUSH -0x1                           ; 0053cf78
    PUSH 0x63ca5a                       ; 0053cf7a | = "Import actors."
    LEA EAX,[ESP + 0x10]                ; 0053cf7f
    PUSH EAX                            ; 0053cf83
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053cf84
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0053cf89
    TEST EAX,EAX                        ; 0053cf8c
    JL 0x0053d08b                       ; 0053cf8e
        ;   XREF to: 0053d08b (CONDITIONAL_JUMP)  ; LAB_0053d08b
    JNZ 0x0053d0a8                      ; 0053cf94
        ;   XREF to: 0053d0a8 (CONDITIONAL_JUMP)  ; LAB_0053d0a8
    MOV EDI,0x63ca76                    ; 0053cf9a | = "..\\core\\msnedit.cpp"
    LEA EAX,[ESP + 0x4]                 ; 0053cf9f
        ;   Label: LAB_0053cf9f
    PUSH EAX                            ; 0053cfa3
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 0053cfa4
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0053cfa9
    MOV EBX,dword ptr [ESP + 0x43c]     ; 0053cfac
    MOV EBX,dword ptr [EBX + 0x548]     ; 0053cfb3
    TEST EBX,EBX                        ; 0053cfb9
    JZ 0x0053cfd5                       ; 0053cfbb
        ;   XREF to: 0053cfd5 (CONDITIONAL_JUMP)  ; LAB_0053cfd5
    PUSH EBX                            ; 0053cfbd
        ;   Label: LAB_0053cfbd
    LEA EAX,[ESP + 0x8]                 ; 0053cfbe
    PUSH EAX                            ; 0053cfc2
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053cfc3
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0053cfc8
    ADD ESP,0x8                         ; 0053cfce
    TEST EBX,EBX                        ; 0053cfd1
    JNZ 0x0053cfbd                      ; 0053cfd3
        ;   XREF to: 0053cfbd (CONDITIONAL_JUMP)  ; LAB_0053cfbd
    MOV EAX,dword ptr [ESP + 0x438]     ; 0053cfd5
        ;   Label: LAB_0053cfd5
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053cfdc
    CMP EAX,EDX                         ; 0053cfe0
    JL 0x0053cfee                       ; 0053cfe2
        ;   XREF to: 0053cfee (CONDITIONAL_JUMP)  ; LAB_0053cfee
    LEA EAX,[EDX + -0x1]                ; 0053cfe4
    MOV dword ptr [ESP + 0x438],EAX     ; 0053cfe7
    PUSH 0x0                            ; 0053cfee
        ;   Label: LAB_0053cfee
    MOV ECX,dword ptr [ESP + 0x43c]     ; 0053cff0
    PUSH ECX                            ; 0053cff7
    PUSH 0x63ca69                       ; 0053cff8 | = "Import actor"
    LEA EAX,[ESP + 0x10]                ; 0053cffd
    PUSH EAX                            ; 0053d001
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053d002
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0053d007
    MOV ESI,EAX                         ; 0053d00a
    TEST EAX,EAX                        ; 0053d00c
    JL 0x0053d103                       ; 0053d00e
        ;   XREF to: 0053d103 (CONDITIONAL_JUMP)  ; LAB_0053d103
    PUSH EAX                            ; 0053d014
    LEA EAX,[ESP + 0x8]                 ; 0053d015
    PUSH EAX                            ; 0053d019
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053d01a
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053d01f
    PUSH EAX                            ; 0053d022
    MOV EBX,dword ptr [ESP + 0x440]     ; 0053d023
    PUSH EBX                            ; 0053d02a
    CALL core_mission.cpp_CDemonMission_FUN_00524030 ; 0053d02b
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; char * core_mission.cpp_CDemonMission_FUN_00524030(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053d030
    MOV EBX,EAX                         ; 0053d033
    TEST EAX,EAX                        ; 0053d035
    JNZ 0x0053d056                      ; 0053d037
        ;   XREF to: 0053d056 (CONDITIONAL_JUMP)  ; LAB_0053d056
    MOV EAX,0xc2b                       ; 0053d039
    PUSH 0x63ca8a                       ; 0053d03e | = "Hell froze finding actor in temp miss..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0053d043 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0053d049 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053d04e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0053d053
    PUSH EBX                            ; 0053d056
        ;   Label: LAB_0053d056
    MOV EDX,dword ptr [ESP + 0x440]     ; 0053d057
    PUSH EDX                            ; 0053d05e
    CALL core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0 ; 0053d05f
        ;   XREF to: 00523be0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0(CDemonMission * this_ptr, CDemonActor * actor_ptr)
    ADD ESP,0x8                         ; 0053d064
    PUSH EBX                            ; 0053d067
    PUSH EBP                            ; 0053d068
    CALL core_mission.cpp_CDemonMission_FUN_00524030 ; 0053d069
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; char * core_mission.cpp_CDemonMission_FUN_00524030(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053d06e
    TEST EAX,EAX                        ; 0053d071
    JNZ 0x0053d09c                      ; 0053d073
        ;   XREF to: 0053d09c (CONDITIONAL_JUMP)  ; LAB_0053d09c
    PUSH EBX                            ; 0053d075
        ;   Label: LAB_0053d075
    PUSH EBP                            ; 0053d076
    CALL core_mission.cpp_CDemonMission_FUN_00523b70 ; 0053d077
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523b70(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053d07c
    MOV dword ptr [ESP + 0x438],ESI     ; 0053d07f
    JMP 0x0053cf9f                      ; 0053d086
        ;   XREF to: 0053cf9f (UNCONDITIONAL_JUMP)  ; LAB_0053cf9f
    PUSH 0x0                            ; 0053d08b
        ;   Label: LAB_0053d08b
    LEA EAX,[ESP + 0x8]                 ; 0053d08d
    PUSH EAX                            ; 0053d091
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053d092
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    JMP 0x0053ce9f                      ; 0053d097
        ;   XREF to: 0053ce9f (UNCONDITIONAL_JUMP)  ; LAB_0053ce9f
    PUSH EBX                            ; 0053d09c
        ;   Label: LAB_0053d09c
    PUSH EBP                            ; 0053d09d
    CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700 ; 0053d09e
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053d0a3
    JMP 0x0053d075                      ; 0053d0a6
        ;   XREF to: 0053d075 (UNCONDITIONAL_JUMP)  ; LAB_0053d075
    CMP EAX,0x1                         ; 0053d0a8
        ;   Label: LAB_0053d0a8
    JNZ 0x0053d103                      ; 0053d0ab
        ;   XREF to: 0053d103 (CONDITIONAL_JUMP)  ; LAB_0053d103
    PUSH EAX                            ; 0053d0ad
    PUSH 0x64                           ; 0053d0ae
    LEA EAX,[ESP + 0x3b4]               ; 0053d0b0
    PUSH EAX                            ; 0053d0b7
    PUSH 0x63cab4                       ; 0053d0b8 | = "Enter actor name wildcard pattern"
    MOV ESI,dword ptr [0x00678a60]      ; 0053d0bd | g_CEditorToolsPtr
    PUSH ESI                            ; 0053d0c3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0053d0c4
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0053d0c9
    TEST EAX,EAX                        ; 0053d0cc
    JZ 0x0053d117                       ; 0053d0ce
        ;   XREF to: 0053d117 (CONDITIONAL_JUMP)  ; LAB_0053d117
    MOV EBX,dword ptr [EBX + 0x548]     ; 0053d0d0
    XOR EDI,EDI                         ; 0053d0d6
    TEST EBX,EBX                        ; 0053d0d8
    JZ 0x0053d0e6                       ; 0053d0da
        ;   XREF to: 0053d0e6 (CONDITIONAL_JUMP)  ; LAB_0053d0e6
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0053d0dc
        ;   Label: LAB_0053d0dc
    TEST EBX,EBX                        ; 0053d0e2
    JNZ 0x0053d12a                      ; 0053d0e4
        ;   XREF to: 0053d12a (CONDITIONAL_JUMP)  ; LAB_0053d12a
    LEA EAX,[ESP + 0x410]               ; 0053d0e6
        ;   Label: LAB_0053d0e6
    PUSH EAX                            ; 0053d0ed
    PUSH EDI                            ; 0053d0ee
    PUSH 0x63cad6                       ; 0053d0ef | = "Imported %d actors from %s."
    MOV ECX,dword ptr [0x00678a60]      ; 0053d0f4 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0053d0fa | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0053d0fb
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0053d100
    PUSH 0x0                            ; 0053d103
        ;   Label: LAB_0053d103
    LEA EAX,[ESP + 0x8]                 ; 0053d105
    PUSH EAX                            ; 0053d109
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053d10a
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0053d10f
    JMP 0x0053ce75                      ; 0053d112
        ;   XREF to: 0053ce75 (UNCONDITIONAL_JUMP)  ; LAB_0053ce75
    PUSH EAX                            ; 0053d117
        ;   Label: LAB_0053d117
    LEA EAX,[ESP + 0x8]                 ; 0053d118
    PUSH EAX                            ; 0053d11c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053d11d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0053d122
    JMP 0x0053ce75                      ; 0053d125
        ;   XREF to: 0053ce75 (UNCONDITIONAL_JUMP)  ; LAB_0053ce75
    PUSH 0x0                            ; 0053d12a
        ;   Label: LAB_0053d12a
    PUSH EBX                            ; 0053d12c
    LEA EAX,[ESP + 0x3b4]               ; 0053d12d
    PUSH EAX                            ; 0053d134
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 0053d135
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0053d13a
    TEST EAX,EAX                        ; 0053d13d
    JZ 0x0053d175                       ; 0053d13f
        ;   XREF to: 0053d175 (CONDITIONAL_JUMP)  ; LAB_0053d175
    PUSH EBX                            ; 0053d141
    MOV EDX,dword ptr [ESP + 0x440]     ; 0053d142
    PUSH EDX                            ; 0053d149
    CALL core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0 ; 0053d14a
        ;   XREF to: 00523be0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0(CDemonMission * this_ptr, CDemonActor * actor_ptr)
    ADD ESP,0x8                         ; 0053d14f
    PUSH EBX                            ; 0053d152
    PUSH EBP                            ; 0053d153
    CALL core_mission.cpp_CDemonMission_FUN_00524030 ; 0053d154
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; char * core_mission.cpp_CDemonMission_FUN_00524030(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053d159
    TEST EAX,EAX                        ; 0053d15c
    JZ 0x0053d16a                       ; 0053d15e
        ;   XREF to: 0053d16a (CONDITIONAL_JUMP)  ; LAB_0053d16a
    PUSH EBX                            ; 0053d160
    PUSH EBP                            ; 0053d161
    CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700 ; 0053d162
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053d167
    PUSH EBX                            ; 0053d16a
        ;   Label: LAB_0053d16a
    PUSH EBP                            ; 0053d16b
    INC EDI                             ; 0053d16c
    CALL core_mission.cpp_CDemonMission_FUN_00523b70 ; 0053d16d
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523b70(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053d172
    MOV EBX,ESI                         ; 0053d175
        ;   Label: LAB_0053d175
    TEST ESI,ESI                        ; 0053d177
    JNZ 0x0053d0dc                      ; 0053d179
        ;   XREF to: 0053d0dc (CONDITIONAL_JUMP)  ; LAB_0053d0dc
    JMP 0x0053d0e6                      ; 0053d17f
        ;   XREF to: 0053d0e6 (UNCONDITIONAL_JUMP)  ; LAB_0053d0e6

