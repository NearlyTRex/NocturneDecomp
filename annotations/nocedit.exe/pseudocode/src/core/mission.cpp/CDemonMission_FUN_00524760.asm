; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_mission.cpp_CDemonMission_FUN_00524760(CDemonMission * this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e1a0f
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e2049
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 00524587
;   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 at 00538c88
;   core_netgame.cpp_FUN_00541390 at 005419cf
;
; Referenced Globals:
;   TerminatedCString s_Can_t_run_mission_no_her_00639346
;   TerminatedCString s_Can_t_run_mission_no_loc_00639363
;   TerminatedCString s_Loading_script_00639385
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEventList* g_CEventListPtr = 02d05310
;   CGame* g_CGamePtr = 02d81a9c
;   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
;   CScript* g_CScriptPtr = 0310f858
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEditorTools g_CEditorToolsPtr
;   CEventList g_CEventListInstance
;   CGame g_CGameInstance
;   undefined4 DAT_02d81cc4
;   undefined4 DAT_02d81cd0
;   int g_HeroCount
;   ... and 5 more
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004aaa70
;   core_level.cpp_CLevelLoader_update_FUN_00504160
;   core_mission.cpp_CDemonMission_FUN_005235b0
;   core_mission.cpp_CDemonMission_FUN_00523cf0
;   core_mission.cpp_CDemonMission_FUN_00523fb0
;   core_script.cpp_CScript_checkInitSection_FUN_0055a6c0
;   core_script.cpp_FUN_0055a540
;   core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524760
        ;   Label: core_mission.cpp_CDemonMission_FUN_00524760
    PUSH ESI                            ; 00524761
    PUSH EDI                            ; 00524762
    PUSH EBP                            ; 00524763
    MOV EBX,dword ptr [ESP + 0x14]      ; 00524764
    CMP dword ptr [0x02db87bc],0x1      ; 00524768 | g_HeroCount
    JL 0x00524827                       ; 0052476f
        ;   XREF to: 00524827 (CONDITIONAL_JUMP)  ; LAB_00524827
    MOV EAX,[0x02db87d0]                ; 00524775 | g_LocalHeroIndex
    CMP dword ptr [EAX*0x4 + 0x2db87c0],0x0 ; 0052477a | g_HeroActors
    JZ 0x00524842                       ; 00524782
        ;   XREF to: 00524842 (CONDITIONAL_JUMP)  ; LAB_00524842
    PUSH EBX                            ; 00524788
    CALL core_mission.cpp_CDemonMission_FUN_00523cf0 ; 00524789
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0052478e
    LEA EAX,[EBX + 0x550]               ; 00524791
    MOV dword ptr [EBX + 0x55c],0xffffffff ; 00524797
    MOV ESI,dword ptr [0x006793d0]      ; 005247a1 | g_CEventListPtr
    MOV dword ptr [EAX + 0x8],0x0       ; 005247a7
    PUSH ESI                            ; 005247ae | g_CEventListInstance
    MOV EDX,dword ptr [EAX + 0x8]       ; 005247af
    MOV dword ptr [EAX + 0x4],EDX       ; 005247b2
    MOV EDX,dword ptr [EAX + 0x4]       ; 005247b5
    MOV dword ptr [EAX],EDX             ; 005247b8
    CALL core_event.cpp_CEventList_FUN_004aaa70 ; 005247ba
        ;   XREF to: 004aaa70 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_FUN_004aaa70(CEventList * this_ptr)
    MOV EAX,[0x0067b654]                ; 005247bf | g_CGamePtr
    MOV dword ptr [EAX + 0x228],0x0     ; 005247c4 | DAT_02d81cc4
    MOV EAX,[0x02db87d0]                ; 005247ce | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005247d3 | g_HeroActors
    ADD ESP,0x4                         ; 005247da
    MOV EDI,dword ptr [EAX + 0x2c]      ; 005247dd
    PUSH EDI                            ; 005247e0
    PUSH EBX                            ; 005247e1
    CALL core_mission.cpp_CDemonMission_FUN_00523fb0 ; 005247e2
        ;   XREF to: 00523fb0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523fb0(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 005247e7
    PUSH 0x0                            ; 005247ea
    PUSH 0x639385                       ; 005247ec | = "Loading script"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005247f1
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 005247f6
    PUSH EAX                            ; 005247f9
    MOV EBP,dword ptr [0x0067cf80]      ; 005247fa | g_CLevelLoaderPtr
    PUSH EBP                            ; 00524800 | g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_update_FUN_00504160 ; 00524801
        ;   XREF to: 00504160 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen)
    MOV EAX,[0x0067b654]                ; 00524806 | g_CGameInstance | g_CGamePtr
    ADD ESP,0xc                         ; 0052480b
    MOV EDX,dword ptr [EAX + 0x234]     ; 0052480e | DAT_02d81cd0
    PUSH EDX                            ; 00524814
    PUSH EBX                            ; 00524815
    CALL core_mission.cpp_CDemonMission_FUN_005235b0 ; 00524816
        ;   XREF to: 005235b0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_005235b0(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0052481b
    TEST EAX,EAX                        ; 0052481e
    JNZ 0x0052485d                      ; 00524820
        ;   XREF to: 0052485d (CONDITIONAL_JUMP)  ; LAB_0052485d
    POP EBP                             ; 00524822
    POP EDI                             ; 00524823
    POP ESI                             ; 00524824
    POP EBX                             ; 00524825
    RET                                 ; 00524826
    PUSH 0x639346                       ; 00524827 | = "Can't run mission - no heros"
        ;   Label: LAB_00524827
    MOV EBP,dword ptr [0x00678a60]      ; 0052482c | g_CEditorToolsPtr
    PUSH EBP                            ; 00524832 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00524833
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00524838
    XOR EAX,EAX                         ; 0052483b
    POP EBP                             ; 0052483d
    POP EDI                             ; 0052483e
    POP ESI                             ; 0052483f
    POP EBX                             ; 00524840
    RET                                 ; 00524841
    PUSH 0x639363                       ; 00524842 | = "Can't run mission - no local hero"
        ;   Label: LAB_00524842
    MOV EDI,dword ptr [0x00678a60]      ; 00524847 | g_CEditorToolsPtr
    PUSH EDI                            ; 0052484d | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0052484e
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00524853
    XOR EAX,EAX                         ; 00524856
    POP EBP                             ; 00524858
    POP EDI                             ; 00524859
    POP ESI                             ; 0052485a
    POP EBX                             ; 0052485b
    RET                                 ; 0052485c
    MOV ECX,dword ptr [0x00680d50]      ; 0052485d | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_0052485d
    PUSH ECX                            ; 00524863 | g_CScriptInstance
    CALL core_script.cpp_FUN_0055a540   ; 00524864
        ;   XREF to: 0055a540 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_0055a540()
    ADD ESP,0x4                         ; 00524869
    MOV EBX,dword ptr [0x00680d50]      ; 0052486c | g_CScriptInstance | g_CScriptPtr
    PUSH EBX                            ; 00524872 | g_CScriptInstance
    CALL core_script.cpp_CScript_checkInitSection_FUN_0055a6c0 ; 00524873
        ;   XREF to: 0055a6c0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_checkInitSection_FUN_0055a6c0()
    ADD ESP,0x4                         ; 00524878
    MOV ESI,dword ptr [0x006810c8]      ; 0052487b | g_CDemonSetPtr
    PUSH ESI                            ; 00524881 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20 ; 00524882
        ;   XREF to: 00575b20 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(CDemonSet * this_ptr)
    MOV EAX,0x1                         ; 00524887
    ADD ESP,0x4                         ; 0052488c
    POP EBP                             ; 0052488f
    POP EDI                             ; 00524890
    POP ESI                             ; 00524891
    POP EBX                             ; 00524892
    RET                                 ; 00524893

