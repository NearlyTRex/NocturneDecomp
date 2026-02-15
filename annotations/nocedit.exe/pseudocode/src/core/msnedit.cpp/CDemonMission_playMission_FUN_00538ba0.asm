; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_playMission_FUN_00538ba0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; char[260]        Stack[-0x11c]:260  local_11c
; char[16]         Stack[-0x18]:16  local_18
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
;   core_event.cpp_CEventList_resetGameFlags_FUN_004b0460
;   core_game.cpp_CGame_runGameSession_FUN_004daf80
;   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
;   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
;   core_mission.cpp_CDemonMission_FUN_00524760
;   core_mission.cpp_CDemonMission_load_FUN_00522d90
;   core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0
;   core_mission.cpp_CDemonMission_save_FUN_00522e30
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_remove_FUN_005ff9d0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538ba0
        ;   Label: core_msnedit.cpp_CDemonMission_playMission_FUN_00538ba0
    PUSH EBP                            ; 00538ba1
    SUB ESP,0x114                       ; 00538ba2
    MOV EBX,dword ptr [ESP + 0x120]     ; 00538ba8
    CMP dword ptr [EBX + 0x144],0x1     ; 00538baf
    JL 0x00538d41                       ; 00538bb6
        ;   XREF to: 00538d41 (CONDITIONAL_JUMP)  ; LAB_00538d41
    PUSH EDI                            ; 00538bbc
    PUSH ESI                            ; 00538bbd
    LEA EAX,[ESP + 0x10c]               ; 00538bbe
    PUSH EAX                            ; 00538bc5
    LEA EDI,[ESP + 0x110]               ; 00538bc6
    PUSH 0x63c252                       ; 00538bcd | = "Backing up to %s..."
    MOV ECX,dword ptr [0x00678a60]      ; 00538bd2 | g_CEditorToolsInstance | g_CEditorToolsPtr
    MOV ESI,0x680820                    ; 00538bd8 | = "$PLAYMSN.TMP"
    PUSH ECX                            ; 00538bdd | g_CEditorToolsInstance
    MOVSD ES:EDI,ESI                    ; 00538bde | = "$PLAYMSN.TMP"
    MOVSD ES:EDI,ESI                    ; 00538bdf | s_YMSN.TMP_00680824
    MOVSD ES:EDI,ESI                    ; 00538be0 | s_.TMP_00680828
    MOVSB ES:EDI,ESI                    ; 00538be1 | s__0068082c
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538be2
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 00538be7
    LEA EAX,[ESP + 0x10c]               ; 00538bea
    PUSH EAX                            ; 00538bf1
    PUSH EBX                            ; 00538bf2
    CALL core_mission.cpp_CDemonMission_save_FUN_00522e30 ; 00538bf3
        ;   XREF to: 00522e30 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_save_FUN_00522e30(CDemonMission * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00538bf8
    PUSH 0x0                            ; 00538bfb
    PUSH EBX                            ; 00538bfd
    MOV dword ptr [EBX + 0x4],0x0       ; 00538bfe
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 ; 00538c05
        ;   XREF to: 00524a80 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission * this_ptr, int creation_flags)
    ADD ESP,0x8                         ; 00538c0a
    TEST EAX,EAX                        ; 00538c0d
    JZ 0x00538cc0                       ; 00538c0f
        ;   XREF to: 00538cc0 (CONDITIONAL_JUMP)  ; LAB_00538cc0
    PUSH 0x63c266                       ; 00538c15 | = "Preparing actors..."
    MOV ESI,dword ptr [0x00678a60]      ; 00538c1a | g_CEditorToolsPtr
    PUSH ESI                            ; 00538c20 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538c21
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 00538c26
    PUSH EBX                            ; 00538c29
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0 ; 00538c2a
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00538c2f
    PUSH 0x63c27a                       ; 00538c32 | = "Preparing set..."
    MOV EDI,dword ptr [0x00678a60]      ; 00538c37 | g_CEditorToolsPtr
    PUSH EDI                            ; 00538c3d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538c3e
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    MOV EAX,[0x02db87d0]                ; 00538c43 | g_LocalHeroIndex
    MOV dword ptr [EBX],0xffffffff      ; 00538c48
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00538c4e | g_HeroActors
    ADD ESP,0x8                         ; 00538c55
    MOV EBP,dword ptr [EAX + 0x2c]      ; 00538c58
    PUSH EBP                            ; 00538c5b
    PUSH EBX                            ; 00538c5c
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0 ; 00538c5d
        ;   XREF to: 00523fb0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0(CDemonMission * this_ptr, int set_index)
    ADD ESP,0x8                         ; 00538c62
    PUSH 0x63c28b                       ; 00538c65 | = "Preparing..."
    MOV EAX,[0x00678a60]                ; 00538c6a | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00538c6f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538c70
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 00538c75
    MOV EDX,dword ptr [0x006793d0]      ; 00538c78 | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 00538c7e | g_CEventListInstance
    CALL core_event.cpp_CEventList_resetGameFlags_FUN_004b0460 ; 00538c7f
        ;   XREF to: 004b0460 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_resetGameFlags_FUN_004b0460(CEventList * this_ptr)
    ADD ESP,0x4                         ; 00538c84
    PUSH EBX                            ; 00538c87
    CALL core_mission.cpp_CDemonMission_FUN_00524760 ; 00538c88
        ;   XREF to: 00524760 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_FUN_00524760(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00538c8d
    TEST EAX,EAX                        ; 00538c90
    JZ 0x00538cc0                       ; 00538c92
        ;   XREF to: 00538cc0 (CONDITIONAL_JUMP)  ; LAB_00538cc0
    PUSH EBX                            ; 00538c94
    CALL core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120 ; 00538c95
        ;   XREF to: 00524120 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00538c9a
    PUSH 0x63c298                       ; 00538c9d | = "Running..."
    MOV ECX,dword ptr [0x00678a60]      ; 00538ca2 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00538ca8 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538ca9
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 00538cae
    MOV ESI,dword ptr [0x0067b654]      ; 00538cb1 | g_CGamePtr
    PUSH ESI                            ; 00538cb7 | g_CGameInstance
    CALL core_game.cpp_CGame_runGameSession_FUN_004daf80 ; 00538cb8
        ;   XREF to: 004daf80 (UNCONDITIONAL_CALL)  ; int core_game.cpp_CGame_runGameSession_FUN_004daf80(CGame * this_ptr)
    ADD ESP,0x4                         ; 00538cbd
    MOV EAX,[0x020a5724]                ; 00538cc0 | g_SmallEditorFont
        ;   Label: LAB_00538cc0
    MOV [0x02cf1cd0],EAX                ; 00538cc5 | g_EditorFont
    LEA EAX,[ESP + 0x10c]               ; 00538cca
    PUSH EAX                            ; 00538cd1
    PUSH 0x63c2a3                       ; 00538cd2 | = "Reloading mission from %s"
    MOV EDI,dword ptr [0x00678a60]      ; 00538cd7 | g_CEditorToolsPtr
    PUSH EDI                            ; 00538cdd | g_CEditorToolsInstance
    MOV dword ptr [EBX + 0x4],0x1       ; 00538cde
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538ce5
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 00538cea
    PUSH 0x1                            ; 00538ced
    LEA EAX,[ESP + 0x110]               ; 00538cef
    PUSH EAX                            ; 00538cf6
    PUSH EBX                            ; 00538cf7
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 00538cf8
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 00538cfd
    LEA EAX,[ESP + 0x10c]               ; 00538d00
    PUSH EAX                            ; 00538d07
    PUSH 0x63c2bd                       ; 00538d08 | = "world\\%s"
    LEA EAX,[ESP + 0x10]                ; 00538d0d
    PUSH EAX                            ; 00538d11
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00538d12
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00538d17
    LEA EAX,[ESP + 0x8]                 ; 00538d1a
    PUSH EAX                            ; 00538d1e
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 00538d1f
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00538d24
    MOV EBP,dword ptr [0x006793d0]      ; 00538d27 | g_CEventListPtr
    PUSH EBP                            ; 00538d2d | g_CEventListInstance
    CALL core_event.cpp_CEventList_resetGameFlags_FUN_004b0460 ; 00538d2e
        ;   XREF to: 004b0460 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_resetGameFlags_FUN_004b0460(CEventList * this_ptr)
    ADD ESP,0x4                         ; 00538d33
    POP ESI                             ; 00538d36
    POP EDI                             ; 00538d37
    ADD ESP,0x114                       ; 00538d38
    POP EBP                             ; 00538d3e
    POP EBX                             ; 00538d3f
    RET                                 ; 00538d40
    PUSH 0x63c23a                       ; 00538d41 | = "No sets to walk around!"
        ;   Label: LAB_00538d41
    MOV EAX,[0x00678a60]                ; 00538d46 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00538d4b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00538d4c
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00538d51
    ADD ESP,0x114                       ; 00538d54
    POP EBP                             ; 00538d5a
    POP EBX                             ; 00538d5b
    RET                                 ; 00538d5c

