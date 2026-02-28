; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_teleport_cpp_CTeleportDest_processInEditor_FUN_005da870(CTeleportDest *this_ptr)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CTeleport_00654c4a
;   TerminatedCString s_No_teleporters_go_to_s_00654c54
;   TerminatedCString s_Teleporters_which_go_to__00654c6c
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CEditorTools g_CEditorToolsInstance
;   CKeys g_CKeysInstance
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
;   core_msnedit.cpp_CDemonMission_buildFilteredActorList_FUN_0053cc30
;   core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005da870
        ;   Label: core_teleport.cpp_CTeleportDest_processInEditor_FUN_005da870
    SUB ESP,0x470                       ; 005da871
    MOV EBX,dword ptr [ESP + 0x478]     ; 005da877
    PUSH 0x14                           ; 005da87e
    MOV EAX,[0x0067cf44]                ; 005da880 | g_CKeysPtr
    PUSH EAX                            ; 005da885 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005da886 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005da888
    ADD ESP,0x8                         ; 005da88b
    TEST EAX,EAX                        ; 005da88e
    JZ 0x005da95c                       ; 005da890
        ;   XREF to: 005da95c (CONDITIONAL_JUMP)  ; LAB_005da95c
    PUSH EDI                            ; 005da896
    LEA EAX,[ESP + 0x4]                 ; 005da897
    PUSH EAX                            ; 005da89b
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 005da89c
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005da8a1
    PUSH 0x5da850                       ; 005da8a4
    PUSH 0x654c4a                       ; 005da8a9 | = "CTeleport"
    PUSH EBX                            ; 005da8ae
    LEA EAX,[ESP + 0x10]                ; 005da8af
    PUSH EAX                            ; 005da8b3
    MOV EDX,dword ptr [0x0067d550]      ; 005da8b4 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EDX                            ; 005da8ba | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_buildFilteredActorList_FUN_0053cc30 ; 005da8bb
        ;   XREF to: 0053cc30 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_buildFilteredActorList_FUN_0053cc30(CDemonMission * this_ptr, CStrList * name_list, CDemonActor * class_type, char * class_name, ...)
    ADD ESP,0x14                        ; 005da8c0
    CMP dword ptr [ESP + 0x4],0x1       ; 005da8c3
    JGE 0x005da8f7                      ; 005da8c8
        ;   XREF to: 005da8f7 (CONDITIONAL_JUMP)  ; LAB_005da8f7
    PUSH EBX                            ; 005da8ca
    PUSH 0x654c54                       ; 005da8cb | = "No teleporters go to %s"
    MOV EDI,dword ptr [0x00678a60]      ; 005da8d0 | g_CEditorToolsPtr
    PUSH EDI                            ; 005da8d6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005da8d7
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005da8dc
    PUSH 0x0                            ; 005da8df
        ;   Label: LAB_005da8df
    LEA EAX,[ESP + 0x8]                 ; 005da8e1
    PUSH EAX                            ; 005da8e5
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005da8e6
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005da8eb
    POP EDI                             ; 005da8ee
    ADD ESP,0x470                       ; 005da8ef
    POP EBX                             ; 005da8f5
    RET                                 ; 005da8f6
    PUSH EBX                            ; 005da8f7
        ;   Label: LAB_005da8f7
    PUSH 0x654c6c                       ; 005da8f8 | = "Teleporters which go to %s"
    LEA EAX,[ESP + 0x3b4]               ; 005da8fd
    PUSH EAX                            ; 005da904
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005da905
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005da90a
    PUSH 0x0                            ; 005da90d
    PUSH -0x1                           ; 005da90f
    LEA EAX,[ESP + 0x3b4]               ; 005da911
    PUSH EAX                            ; 005da918
    LEA EAX,[ESP + 0x10]                ; 005da919
    PUSH EAX                            ; 005da91d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005da91e
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 005da923
    TEST EAX,EAX                        ; 005da926
    JL 0x005da8df                       ; 005da928
        ;   XREF to: 005da8df (CONDITIONAL_JUMP)  ; LAB_005da8df
    PUSH ESI                            ; 005da92a
    PUSH EAX                            ; 005da92b
    LEA EAX,[ESP + 0xc]                 ; 005da92c
    PUSH EAX                            ; 005da930
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005da931
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005da936
    PUSH EAX                            ; 005da939
    MOV EBX,dword ptr [0x0067d550]      ; 005da93a | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EBX                            ; 005da940 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 005da941
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 005da946
    PUSH EAX                            ; 005da949
    MOV ESI,dword ptr [0x0067d550]      ; 005da94a | g_CDemonMissionPtr
    PUSH ESI                            ; 005da950 | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140 ; 005da951
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005da956
    POP ESI                             ; 005da959
    JMP 0x005da8df                      ; 005da95a
        ;   XREF to: 005da8df (UNCONDITIONAL_JUMP)  ; LAB_005da8df
    PUSH EBX                            ; 005da95c
        ;   Label: LAB_005da95c
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 005da95d
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005da962
    ADD ESP,0x470                       ; 005da965
    POP EBX                             ; 005da96b
    RET                                 ; 005da96c

