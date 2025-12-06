; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0()
;
; Local Variables:
; undefined1       Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538730
;
; Referenced Globals:
;   TerminatedCString s_No_sets_to_walk_around_0063c23a
;   TerminatedCString s_Backing_up_to_s_0063c252
;   TerminatedCString s_Preparing_actors_0063c266
;   TerminatedCString s_Preparing_set_0063c27a
;   TerminatedCString s_Preparing_0063c28b
;   TerminatedCString s_Running_0063c298
;   TerminatedCString s_Reloading_mission_from_s_0063c2a3
;   TerminatedCString s_world_s_0063c2bd
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEventList* g_CEventListPtr = 02d05310
;   CGame* g_CGamePtr = 02d81a9c
;   TerminatedCString s_PLAYMSN_TMP_00680820
;   undefined4 s_YMSN.TMP_00680824
;   undefined4 s_.TMP_00680828
;   undefined4 s__0068082c
;   ... and 7 more
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004b0460
;   core_game.cpp_CGame_runGameSession_FUN_004daf80
;   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
;   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
;   core_mission.cpp_CDemonMission_FUN_00523cf0
;   core_mission.cpp_CDemonMission_FUN_00523fb0
;   core_mission.cpp_CDemonMission_FUN_00524760
;   core_mission.cpp_CDemonMission_load_FUN_00522d90
;   core_mission.cpp_CDemonMission_save_FUN_00522e30
;   crt_io.c_deleteFile_FUN_005ff9d0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538ba0
        ;   Label: core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0
    PUSH EBP                            ; 00538ba1
    SUB ESP,0x114                       ; 00538ba2
    MOV EBX,dword ptr [ESP + 0x120]     ; 00538ba8
    CMP dword ptr [EBX + 0x144],0x1     ; 00538baf
    JL 0x00538d41                       ; 00538bb6 | LAB_00538d41
        ;   XREF to: 00538d41 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00538bbc
    PUSH ESI                            ; 00538bbd
    LEA EAX,[ESP + 0x10c]               ; 00538bbe
    PUSH EAX                            ; 00538bc5
    LEA EDI,[ESP + 0x110]               ; 00538bc6
    PUSH 0x63c252                       ; 00538bcd | = "Backing up to %s..." | s_Backing_up_to_s_0063c252 = Backing up to %s...
    MOV ECX,dword ptr [0x00678a60]      ; 00538bd2 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    MOV ESI,0x680820                    ; 00538bd8 | = "$PLAYMSN.TMP" | s_PLAYMSN_TMP_00680820 = $PLAYMSN.TMP
    PUSH ECX                            ; 00538bdd | CEditorTools g_CEditorToolsPtr
    MOVSD ES:EDI,ESI                    ; 00538bde | = "$PLAYMSN.TMP" | s_PLAYMSN_TMP_00680820 = $PLAYMSN.TMP
    MOVSD ES:EDI,ESI                    ; 00538bdf | s_YMSN.TMP_00680824
    MOVSD ES:EDI,ESI                    ; 00538be0 | s_.TMP_00680828
    MOVSB ES:EDI,ESI                    ; 00538be1 | s__0068082c
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538be2 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00538be7
    LEA EAX,[ESP + 0x10c]               ; 00538bea
    PUSH EAX                            ; 00538bf1
    PUSH EBX                            ; 00538bf2
    CALL core_mission.cpp_CDemonMission_save_FUN_00522e30 ; 00538bf3 | void core_mission.cpp_CDemonMission_save_FUN_00522e30(CDemonMission * this_ptr)
        ;   XREF to: 00522e30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538bf8
    PUSH 0x0                            ; 00538bfb
    PUSH EBX                            ; 00538bfd
    MOV dword ptr [EBX + 0x4],0x0       ; 00538bfe
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 ; 00538c05 | int core_mission.cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission * this_ptr, int creation_flags)
        ;   XREF to: 00524a80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538c0a
    TEST EAX,EAX                        ; 00538c0d
    JZ 0x00538cc0                       ; 00538c0f | LAB_00538cc0
        ;   XREF to: 00538cc0 (CONDITIONAL_JUMP)
    PUSH 0x63c266                       ; 00538c15 | = "Preparing actors..." | s_Preparing_actors_0063c266 = Preparing actors...
    MOV ESI,dword ptr [0x00678a60]      ; 00538c1a | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 00538c20 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538c21 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538c26
    PUSH EBX                            ; 00538c29
    CALL core_mission.cpp_CDemonMission_FUN_00523cf0 ; 00538c2a | void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538c2f
    PUSH 0x63c27a                       ; 00538c32 | = "Preparing set..." | s_Preparing_set_0063c27a = Preparing set...
    MOV EDI,dword ptr [0x00678a60]      ; 00538c37 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 00538c3d | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538c3e | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02db87d0]                ; 00538c43 | int g_LocalHeroIndex
    MOV dword ptr [EBX],0xffffffff      ; 00538c48
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00538c4e | CHero *[4] g_HeroActors
    ADD ESP,0x8                         ; 00538c55
    MOV EBP,dword ptr [EAX + 0x2c]      ; 00538c58
    PUSH EBP                            ; 00538c5b
    PUSH EBX                            ; 00538c5c
    CALL core_mission.cpp_CDemonMission_FUN_00523fb0 ; 00538c5d | void core_mission.cpp_CDemonMission_FUN_00523fb0(CDemonMission * this_ptr)
        ;   XREF to: 00523fb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538c62
    PUSH 0x63c28b                       ; 00538c65 | = "Preparing..." | s_Preparing_0063c28b = Preparing...
    MOV EAX,[0x00678a60]                ; 00538c6a | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 00538c6f | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538c70 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538c75
    MOV EDX,dword ptr [0x006793d0]      ; 00538c78 | CEventList g_CEventListInstance | CEventList * g_CEventListPtr
    PUSH EDX                            ; 00538c7e | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004b0460 ; 00538c7f | void core_event.cpp_CEventList_FUN_004b0460(CEventList * this_ptr)
        ;   XREF to: 004b0460 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538c84
    PUSH EBX                            ; 00538c87
    CALL core_mission.cpp_CDemonMission_FUN_00524760 ; 00538c88 | int core_mission.cpp_CDemonMission_FUN_00524760(CDemonMission * this_ptr)
        ;   XREF to: 00524760 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538c8d
    TEST EAX,EAX                        ; 00538c90
    JZ 0x00538cc0                       ; 00538c92 | LAB_00538cc0
        ;   XREF to: 00538cc0 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00538c94
    CALL core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120 ; 00538c95 | void core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(CDemonMission * this_ptr)
        ;   XREF to: 00524120 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538c9a
    PUSH 0x63c298                       ; 00538c9d | = "Running..." | s_Running_0063c298 = Running...
    MOV ECX,dword ptr [0x00678a60]      ; 00538ca2 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 00538ca8 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538ca9 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538cae
    MOV ESI,dword ptr [0x0067b654]      ; 00538cb1 | CGame * g_CGamePtr
    PUSH ESI                            ; 00538cb7 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_runGameSession_FUN_004daf80 ; 00538cb8 | int core_game.cpp_CGame_runGameSession_FUN_004daf80(CGame * this_ptr)
        ;   XREF to: 004daf80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538cbd
    MOV EAX,[0x020a5724]                ; 00538cc0 | CBitFont * g_SmallEditorFont
        ;   Label: LAB_00538cc0
    MOV [0x02cf1cd0],EAX                ; 00538cc5 | CBitFont * g_EditorFont
    LEA EAX,[ESP + 0x10c]               ; 00538cca
    PUSH EAX                            ; 00538cd1
    PUSH 0x63c2a3                       ; 00538cd2 | = "Reloading mission from %s" | s_Reloading_mission_from_s_0063c2a3 = Reloading mission from %s
    MOV EDI,dword ptr [0x00678a60]      ; 00538cd7 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 00538cdd | CEditorTools g_CEditorToolsPtr
    MOV dword ptr [EBX + 0x4],0x1       ; 00538cde
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538ce5 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00538cea
    PUSH 0x1                            ; 00538ced
    LEA EAX,[ESP + 0x110]               ; 00538cef
    PUSH EAX                            ; 00538cf6
    PUSH EBX                            ; 00538cf7
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 00538cf8 | void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00538cfd
    LEA EAX,[ESP + 0x10c]               ; 00538d00
    PUSH EAX                            ; 00538d07
    PUSH 0x63c2bd                       ; 00538d08 | = "world\\%s" | s_world_s_0063c2bd = world\%s
    LEA EAX,[ESP + 0x10]                ; 00538d0d
    PUSH EAX                            ; 00538d11
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00538d12 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00538d17
    LEA EAX,[ESP + 0x8]                 ; 00538d1a
    PUSH EAX                            ; 00538d1e
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 00538d1f | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538d24
    MOV EBP,dword ptr [0x006793d0]      ; 00538d27 | CEventList * g_CEventListPtr
    PUSH EBP                            ; 00538d2d | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004b0460 ; 00538d2e | void core_event.cpp_CEventList_FUN_004b0460(CEventList * this_ptr)
        ;   XREF to: 004b0460 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538d33
    POP ESI                             ; 00538d36
    POP EDI                             ; 00538d37
    ADD ESP,0x114                       ; 00538d38
    POP EBP                             ; 00538d3e
    POP EBX                             ; 00538d3f
    RET                                 ; 00538d40
    PUSH 0x63c23a                       ; 00538d41 | = "No sets to walk around!" | s_No_sets_to_walk_around_0063c23a = No sets to walk around!
        ;   Label: LAB_00538d41
    MOV EAX,[0x00678a60]                ; 00538d46 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 00538d4b | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00538d4c | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538d51
    ADD ESP,0x114                       ; 00538d54
    POP EBP                             ; 00538d5a
    POP EBX                             ; 00538d5b
    RET                                 ; 00538d5c

