; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_rebuildWaypointConnectivity_FUN_0053d7b0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538a49
;
; Referenced Globals:
;   TerminatedCString s_Preparing_actors_0063ccf4
;   TerminatedCString s_Rebuilding_waypoint_conn_0063cd06
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEditorTools g_CEditorToolsInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_032690dc
;   undefined4 DAT_032690e0
;
; Called Functions:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
;   core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0
;   core_waypoint.cpp_CWayPoint_rebuildConnectivity_FUN_005ec4f0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d7b0
        ;   Label: core_msnedit.cpp_CDemonMission_rebuildWaypointConnectivity_FUN_0053d7b0
    PUSH ESI                            ; 0053d7b1
    PUSH EDI                            ; 0053d7b2
    PUSH EBP                            ; 0053d7b3
    SUB ESP,0x4                         ; 0053d7b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0053d7b7
    PUSH 0x63ccf4                       ; 0053d7bb | = "Preparing actors."
    MOV EDX,dword ptr [0x00678a60]      ; 0053d7c0 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0053d7c6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053d7c7
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053d7cc
    PUSH EBP                            ; 0053d7cf
    XOR EDI,EDI                         ; 0053d7d0
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0 ; 0053d7d2
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0(CDemonMission * this_ptr)
    MOV ECX,dword ptr [EBP + 0x144]     ; 0053d7d7
    ADD ESP,0x4                         ; 0053d7dd
    TEST ECX,ECX                        ; 0053d7e0
    JLE 0x0053d840                      ; 0053d7e2
        ;   XREF to: 0053d840 (CONDITIONAL_JUMP)  ; LAB_0053d840
    LEA EAX,[EBP + 0x148]               ; 0053d7e4
    MOV dword ptr [ESP],EAX             ; 0053d7ea
    MOV EAX,dword ptr [ESP]             ; 0053d7ed
        ;   Label: LAB_0053d7ed
    PUSH EAX                            ; 0053d7f0
    PUSH 0x63cd06                       ; 0053d7f1 | = "Rebuilding waypoint connectivity in s..."
    MOV EDX,dword ptr [0x00678a60]      ; 0053d7f6 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0053d7fc | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053d7fd
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053d802
    PUSH EDI                            ; 0053d805
    PUSH EBP                            ; 0053d806
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0 ; 0053d807
        ;   XREF to: 00523fb0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0(CDemonMission * this_ptr, int set_index)
    ADD ESP,0x8                         ; 0053d80c
    PUSH EBP                            ; 0053d80f
    XOR ESI,ESI                         ; 0053d810
    XOR EBX,EBX                         ; 0053d812
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 0053d814
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053d819
        ;   Label: LAB_0053d819
    MOV EAX,[0x006810c8]                ; 0053d81c | g_CDemonSetInstance | g_CDemonSetPtr
    CMP ESI,dword ptr [EAX + 0x154e64]  ; 0053d821 | DAT_032690dc
    JL 0x0053d848                       ; 0053d827
        ;   XREF to: 0053d848 (CONDITIONAL_JUMP)  ; LAB_0053d848
    MOV EBX,dword ptr [ESP]             ; 0053d829
    INC EDI                             ; 0053d82c
    ADD EBX,0x100                       ; 0053d82d
    MOV ESI,dword ptr [EBP + 0x144]     ; 0053d833
    MOV dword ptr [ESP],EBX             ; 0053d839
    CMP EDI,ESI                         ; 0053d83c
    JL 0x0053d7ed                       ; 0053d83e
        ;   XREF to: 0053d7ed (CONDITIONAL_JUMP)  ; LAB_0053d7ed
    ADD ESP,0x4                         ; 0053d840
        ;   Label: LAB_0053d840
    POP EBP                             ; 0053d843
    POP EDI                             ; 0053d844
    POP ESI                             ; 0053d845
    POP EBX                             ; 0053d846
    RET                                 ; 0053d847
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x154e68] ; 0053d848 | DAT_032690e0
        ;   Label: LAB_0053d848
    PUSH EDX                            ; 0053d84f
    ADD EBX,0x4                         ; 0053d850
    INC ESI                             ; 0053d853
    CALL core_waypoint.cpp_CWayPoint_rebuildConnectivity_FUN_005ec4f0 ; 0053d854
        ;   XREF to: 005ec4f0 (UNCONDITIONAL_CALL)  ; void core_waypoint.cpp_CWayPoint_rebuildConnectivity_FUN_005ec4f0(CWayPoint * this_ptr)
    JMP 0x0053d819                      ; 0053d859
        ;   XREF to: 0053d819 (UNCONDITIONAL_JUMP)  ; LAB_0053d819

