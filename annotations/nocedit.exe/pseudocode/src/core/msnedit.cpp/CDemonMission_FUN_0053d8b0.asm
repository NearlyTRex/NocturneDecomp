; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053d8b0 (CDemonMission *this_ptr,int param_2,CDemonMission *param_3,int param_4)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; CDemonMission *  Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
; Local Variables:
; undefined1       Stack[-0x624]:1  local_624
; undefined1       Stack[-0x27c]:1  local_27c
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053a756
;
; Referenced Globals:
;   void* switchdataD_0053d85c = 0053dc42
;   TerminatedCString s_Change_s_of_type_s_to_ne_0063cd31
;   TerminatedCString s_C_s_0063cd52
;   TerminatedCString s_Attempt_to_transfer_prop_0063cd56
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_NumActorClassTypes
;   CDemonActorType*[200] g_ActorClassRegistrations
;   undefined4 g_ActorClassRegistrations[1]
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_init_FUN_0040e130
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
;   core_mission.cpp_CDemonMission_removeActor_FUN_00523f20
;   core_msnedit.cpp_CDemonMission_deleteActor_FUN_00538ea0
;   core_msnedit.cpp_CDemonMission_FUN_0053c140
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c_stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d8b0
        ;   Label: core_msnedit.cpp_CDemonMission_FUN_0053d8b0
    PUSH ESI                            ; 0053d8b1
    PUSH EDI                            ; 0053d8b2
    PUSH EBP                            ; 0053d8b3
    SUB ESP,0x501c                      ; 0053d8b4
    MOV EAX,dword ptr [ESP + 0x5030]    ; 0053d8ba
    CMP dword ptr [EAX + 0x28],0x0      ; 0053d8c1
    JNZ 0x0053d8d2                      ; 0053d8c5
        ;   XREF to: 0053d8d2 (CONDITIONAL_JUMP)  ; LAB_0053d8d2
    ADD ESP,0x501c                      ; 0053d8c7
    POP EBP                             ; 0053d8cd
    POP EDI                             ; 0053d8ce
    POP ESI                             ; 0053d8cf
    POP EBX                             ; 0053d8d0
    RET                                 ; 0053d8d1
    LEA EAX,[ESP + 0x4a08]              ; 0053d8d2
        ;   Label: LAB_0053d8d2
    PUSH EAX                            ; 0053d8d9
    XOR ESI,ESI                         ; 0053d8da
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053d8dc
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV ECX,dword ptr [0x00822044]      ; 0053d8e1 | g_NumActorClassTypes
    ADD ESP,0x4                         ; 0053d8e7
    TEST ECX,ECX                        ; 0053d8ea
    JLE 0x0053d949                      ; 0053d8ec
        ;   XREF to: 0053d949 (CONDITIONAL_JUMP)  ; LAB_0053d949
    XOR EBX,EBX                         ; 0053d8ee
    MOV EAX,dword ptr [EBX + 0x822048]  ; 0053d8f0 | g_ActorClassRegistrations | g_ActorClassRegistrations[1]
        ;   Label: LAB_0053d8f0
    CMP dword ptr [EAX + 0x2c],0x0      ; 0053d8f6
    JZ 0x0053d93b                       ; 0053d8fa
        ;   XREF to: 0053d93b (CONDITIONAL_JUMP)  ; LAB_0053d93b
    MOV EAX,dword ptr [ESP + 0x5030]    ; 0053d8fc
    MOV EBP,dword ptr [EAX + 0x28]      ; 0053d903
    PUSH EBP                            ; 0053d906
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 0053d907
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053d90c
    PUSH EAX                            ; 0053d90f
    MOV EAX,dword ptr [EBX + 0x822048]  ; 0053d910 | g_ActorClassRegistrations
    PUSH EAX                            ; 0053d916
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0053d917
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053d91c
    TEST EAX,EAX                        ; 0053d91f
    JZ 0x0053d93b                       ; 0053d921
        ;   XREF to: 0053d93b (CONDITIONAL_JUMP)  ; LAB_0053d93b
    MOV EAX,dword ptr [EBX + 0x822048]  ; 0053d923 | g_ActorClassRegistrations
    INC EAX                             ; 0053d929
    PUSH EAX                            ; 0053d92a
    LEA EAX,[ESP + 0x4a0c]              ; 0053d92b
    PUSH EAX                            ; 0053d932
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053d933
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053d938
    MOV EDI,dword ptr [0x00822044]      ; 0053d93b | g_NumActorClassTypes
        ;   Label: LAB_0053d93b
    INC ESI                             ; 0053d941
    ADD EBX,0x4                         ; 0053d942
    CMP ESI,EDI                         ; 0053d945
    JL 0x0053d8f0                       ; 0053d947
        ;   XREF to: 0053d8f0 (CONDITIONAL_JUMP)  ; LAB_0053d8f0
    LEA EAX,[ESP + 0x4a08]              ; 0053d949
        ;   Label: LAB_0053d949
    PUSH EAX                            ; 0053d950
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0053d951
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0053d956
    MOV EAX,dword ptr [ESP + 0x5030]    ; 0053d959
    MOV EBP,dword ptr [EAX + 0x28]      ; 0053d960
    PUSH EBP                            ; 0053d963
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 0053d964
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053d969
    PUSH EAX                            ; 0053d96c
    MOV EAX,dword ptr [ESP + 0x5034]    ; 0053d96d
    MOV EDX,dword ptr [EAX + 0x28]      ; 0053d974
    PUSH EDX                            ; 0053d977
    PUSH 0x63cd31                       ; 0053d978 | = "Change %s of type %s to new type"
    LEA EAX,[ESP + 0x4dbc]              ; 0053d97d
    PUSH EAX                            ; 0053d984
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053d985
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0053d98a
    PUSH 0x0                            ; 0053d98d
    PUSH -0x1                           ; 0053d98f
    LEA EAX,[ESP + 0x4db8]              ; 0053d991
    PUSH EAX                            ; 0053d998
    LEA EAX,[ESP + 0x4a14]              ; 0053d999
    PUSH EAX                            ; 0053d9a0
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053d9a1
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0053d9a6
    TEST EAX,EAX                        ; 0053d9a9
    JL 0x0053dbf7                       ; 0053d9ab
        ;   XREF to: 0053dbf7 (CONDITIONAL_JUMP)  ; LAB_0053dbf7
    PUSH EAX                            ; 0053d9b1
    LEA EAX,[ESP + 0x4a0c]              ; 0053d9b2
    PUSH EAX                            ; 0053d9b9
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053d9ba
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053d9bf
    PUSH EAX                            ; 0053d9c2
    PUSH 0x63cd52                       ; 0053d9c3 | = "C%s"
    LEA EAX,[ESP + 0x4fac]              ; 0053d9c8
    PUSH EAX                            ; 0053d9cf
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053d9d0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053d9d5
    LEA EAX,[ESP + 0x4fa4]              ; 0053d9d8
    PUSH EAX                            ; 0053d9df
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 0053d9e0
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 0053d9e5
    MOV EBX,EAX                         ; 0053d9e8
    PUSH EBX                            ; 0053d9ea
    MOV dword ptr [ESP + 0x5010],EAX    ; 0053d9eb
    MOV EAX,dword ptr [EAX + 0x154]     ; 0053d9f2
    CALL dword ptr [EAX]                ; 0053d9f8
    ADD ESP,0x4                         ; 0053d9fa
    PUSH 0x63cd56                       ; 0053d9fd | = "Attempt to transfer properties?"
    MOV ECX,dword ptr [0x00678a60]      ; 0053da02 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0053da08 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 0053da09
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0053da0e
    TEST EAX,EAX                        ; 0053da11
    JZ 0x0053db0f                       ; 0053da13
        ;   XREF to: 0053db0f (CONDITIONAL_JUMP)  ; LAB_0053db0f
    LEA EAX,[ESP + 0x2504]              ; 0053da19
    PUSH EAX                            ; 0053da20
    CALL core_actor.cpp_CActorPropertyList_init_FUN_0040e130 ; 0053da21
        ;   XREF to: 0040e130 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_init_FUN_0040e130(CActorPropertyList * this_ptr)
    ADD ESP,0x4                         ; 0053da26
    MOV EAX,ESP                         ; 0053da29
    PUSH EAX                            ; 0053da2b
    CALL core_actor.cpp_CActorPropertyList_init_FUN_0040e130 ; 0053da2c
        ;   XREF to: 0040e130 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_init_FUN_0040e130(CActorPropertyList * this_ptr)
    ADD ESP,0x4                         ; 0053da31
    LEA EAX,[ESP + 0x2504]              ; 0053da34
    PUSH EAX                            ; 0053da3b
    MOV EDX,dword ptr [EBX + 0x154]     ; 0053da3c
    PUSH EBX                            ; 0053da42
    CALL dword ptr [EDX + 0xd4]         ; 0053da43
    ADD ESP,0x8                         ; 0053da49
    MOV EBX,ESP                         ; 0053da4c
    MOV EAX,dword ptr [ESP + 0x5030]    ; 0053da4e
    PUSH EBX                            ; 0053da55
    MOV EAX,dword ptr [EAX + 0x28]      ; 0053da56
    PUSH EAX                            ; 0053da59
    MOV EDX,dword ptr [EAX + 0x154]     ; 0053da5a
    CALL dword ptr [EDX + 0xd4]         ; 0053da60
    ADD ESP,0x8                         ; 0053da66
    XOR EBX,EBX                         ; 0053da69
    MOV ESI,dword ptr [ESP + 0x2508]    ; 0053da6b
    MOV dword ptr [ESP + 0x5010],EBX    ; 0053da72
    TEST ESI,ESI                        ; 0053da79
    JLE 0x0053db0f                      ; 0053da7b
        ;   XREF to: 0053db0f (CONDITIONAL_JUMP)  ; LAB_0053db0f
    LEA EAX,[ESP + 0x250c]              ; 0053da81
    MOV dword ptr [ESP + 0x5014],EAX    ; 0053da88
    MOV EDI,dword ptr [ESP + 0x4]       ; 0053da8f
        ;   Label: LAB_0053da8f
    XOR ESI,ESI                         ; 0053da93
    MOV EBP,dword ptr [ESP + 0x5014]    ; 0053da95
    MOV dword ptr [ESP + 0x5008],ESI    ; 0053da9c
    TEST EDI,EDI                        ; 0053daa3
    JLE 0x0053dae1                      ; 0053daa5
        ;   XREF to: 0053dae1 (CONDITIONAL_JUMP)  ; LAB_0053dae1
    LEA EAX,[EBP + 0x4]                 ; 0053daa7
    LEA EBX,[ESP + 0x8]                 ; 0053daaa
    MOV dword ptr [ESP + 0x5018],EAX    ; 0053daae
    MOV EAX,dword ptr [EBX]             ; 0053dab5
        ;   Label: LAB_0053dab5
    MOV ECX,dword ptr [EBP]             ; 0053dab7
    MOV ESI,EBX                         ; 0053daba
    CMP EAX,ECX                         ; 0053dabc
    JZ 0x0053dc14                       ; 0053dabe
        ;   XREF to: 0053dc14 (CONDITIONAL_JUMP)  ; LAB_0053dc14
    MOV EAX,dword ptr [ESP + 0x5008]    ; 0053dac4
        ;   Label: caseD_11
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053dacb
    INC EAX                             ; 0053dacf
    ADD EBX,0xec                        ; 0053dad0
    MOV dword ptr [ESP + 0x5008],EAX    ; 0053dad6
    CMP EAX,EDX                         ; 0053dadd
    JL 0x0053dab5                       ; 0053dadf
        ;   XREF to: 0053dab5 (CONDITIONAL_JUMP)  ; LAB_0053dab5
    MOV EDX,dword ptr [ESP + 0x5014]    ; 0053dae1
        ;   Label: LAB_0053dae1
    MOV ECX,dword ptr [ESP + 0x5010]    ; 0053dae8
    MOV EBX,dword ptr [ESP + 0x2508]    ; 0053daef
    ADD EDX,0xec                        ; 0053daf6
    INC ECX                             ; 0053dafc
    MOV dword ptr [ESP + 0x5014],EDX    ; 0053dafd
    MOV dword ptr [ESP + 0x5010],ECX    ; 0053db04
    CMP ECX,EBX                         ; 0053db0b
    JL 0x0053da8f                       ; 0053db0d
        ;   XREF to: 0053da8f (CONDITIONAL_JUMP)  ; LAB_0053da8f
    MOV ESI,dword ptr [ESP + 0x5030]    ; 0053db0f
        ;   Label: LAB_0053db0f
    MOV EDI,dword ptr [ESP + 0x500c]    ; 0053db16
    MOV ESI,dword ptr [ESI + 0x28]      ; 0053db1d
    PUSH EDI                            ; 0053db20
    MOV AL,byte ptr [ESI]               ; 0053db21
        ;   Label: LAB_0053db21
    MOV byte ptr [EDI],AL               ; 0053db23
    CMP AL,0x0                          ; 0053db25
    JZ 0x0053db39                       ; 0053db27
        ;   XREF to: 0053db39 (CONDITIONAL_JUMP)  ; LAB_0053db39
    MOV AL,byte ptr [ESI + 0x1]         ; 0053db29
    ADD ESI,0x2                         ; 0053db2c
    MOV byte ptr [EDI + 0x1],AL         ; 0053db2f
    ADD EDI,0x2                         ; 0053db32
    CMP AL,0x0                          ; 0053db35
    JNZ 0x0053db21                      ; 0053db37
        ;   XREF to: 0053db21 (CONDITIONAL_JUMP)  ; LAB_0053db21
    POP EDI                             ; 0053db39
        ;   Label: LAB_0053db39
    MOV EAX,dword ptr [ESP + 0x5030]    ; 0053db3a
    MOV EAX,dword ptr [EAX + 0x28]      ; 0053db41
    MOV EDX,dword ptr [EAX + 0x20]      ; 0053db44
    MOV dword ptr [EDI + 0x20],EDX      ; 0053db47
    MOV EDX,dword ptr [EAX + 0x24]      ; 0053db4a
    MOV dword ptr [EDI + 0x24],EDX      ; 0053db4d
    MOV EDX,dword ptr [EAX + 0x28]      ; 0053db50
    MOV dword ptr [EDI + 0x28],EDX      ; 0053db53
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0053db56
    MOV EDX,dword ptr [ESP + 0x5030]    ; 0053db59
    MOV dword ptr [EDI + 0x2c],EAX      ; 0053db60
    MOV EDX,dword ptr [EDX + 0x28]      ; 0053db63
    LEA EAX,[EDI + 0x30]                ; 0053db66
    ADD EDX,0x30                        ; 0053db69
    CMP EAX,EDX                         ; 0053db6c
    JZ 0x0053db80                       ; 0053db6e
        ;   XREF to: 0053db80 (CONDITIONAL_JUMP)  ; LAB_0053db80
    MOV ECX,dword ptr [EDX]             ; 0053db70
    MOV dword ptr [EAX],ECX             ; 0053db72
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053db74
    MOV dword ptr [EAX + 0x4],ECX       ; 0053db77
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053db7a
    MOV dword ptr [EAX + 0x8],ECX       ; 0053db7d
    MOV ECX,dword ptr [ESP + 0x500c]    ; 0053db80
        ;   Label: LAB_0053db80
    MOV EAX,dword ptr [ESP + 0x500c]    ; 0053db87
    PUSH ECX                            ; 0053db8e
    MOV EAX,dword ptr [EAX + 0x154]     ; 0053db8f
    CALL dword ptr [EAX]                ; 0053db95
    ADD ESP,0x4                         ; 0053db97
    PUSH 0x0                            ; 0053db9a
    MOV ESI,dword ptr [ESP + 0x5034]    ; 0053db9c
    MOV EBX,dword ptr [ESP + 0x5034]    ; 0053dba3
    PUSH ESI                            ; 0053dbaa
    MOV EBX,dword ptr [EBX + 0x28]      ; 0053dbab
    CALL core_msnedit.cpp_CDemonMission_FUN_0053c140 ; 0053dbae
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_0053c140(CDemonMission * this_ptr, int param_2)
    ADD ESP,0x8                         ; 0053dbb3
    PUSH EBX                            ; 0053dbb6
    PUSH ESI                            ; 0053dbb7
    CALL core_msnedit.cpp_CDemonMission_deleteActor_FUN_00538ea0 ; 0053dbb8
        ;   XREF to: 00538ea0 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_deleteActor_FUN_00538ea0(CDemonMission * this_ptr, int param_2)
    ADD ESP,0x8                         ; 0053dbbd
    PUSH 0x1                            ; 0053dbc0
    PUSH EBX                            ; 0053dbc2
    PUSH ESI                            ; 0053dbc3
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_00523f20 ; 0053dbc4
        ;   XREF to: 00523f20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_00523f20(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    ADD ESP,0xc                         ; 0053dbc9
    MOV EAX,dword ptr [ESP + 0x500c]    ; 0053dbcc
    PUSH EAX                            ; 0053dbd3
    PUSH ESI                            ; 0053dbd4
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70 ; 0053dbd5
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053dbda
    PUSH ESI                            ; 0053dbdd
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 0053dbde
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053dbe3
    MOV EBX,dword ptr [ESP + 0x500c]    ; 0053dbe6
    PUSH EBX                            ; 0053dbed
    PUSH ESI                            ; 0053dbee
    CALL core_msnedit.cpp_CDemonMission_FUN_0053c140 ; 0053dbef
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_0053c140(CDemonMission * this_ptr, int param_2)
    ADD ESP,0x8                         ; 0053dbf4
    PUSH 0x0                            ; 0053dbf7
        ;   Label: LAB_0053dbf7
    LEA EAX,[ESP + 0x4a0c]              ; 0053dbf9
    PUSH EAX                            ; 0053dc00
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053dc01
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053dc06
    ADD ESP,0x501c                      ; 0053dc09
    POP EBP                             ; 0053dc0f
    POP EDI                             ; 0053dc10
    POP ESI                             ; 0053dc11
    POP EBX                             ; 0053dc12
    RET                                 ; 0053dc13
    MOV EDI,dword ptr [ESP + 0x5018]    ; 0053dc14
        ;   Label: LAB_0053dc14
    PUSH EDI                            ; 0053dc1b
    LEA EAX,[EBX + 0x4]                 ; 0053dc1c
    PUSH EAX                            ; 0053dc1f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0053dc20
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053dc25
    TEST EAX,EAX                        ; 0053dc28
    JNZ 0x0053dac4                      ; 0053dc2a
        ;   XREF to: 0053dac4 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [EBX]             ; 0053dc30
    CMP EAX,0x11                        ; 0053dc32
    JA 0x0053dac4                       ; 0053dc35
        ;   XREF to: 0053dac4 (CONDITIONAL_JUMP)  ; caseD_e
    JMP dword ptr [EAX*0x4 + 0x53d85c]  ; 0053dc3b | caseD_e | caseD_0 | caseD_1
        ;   Label: switchD
    MOV EAX,dword ptr [ESI + 0x68]      ; 0053dc42
        ;   Label: caseD_f
    MOV EDX,dword ptr [EBP + 0x68]      ; 0053dc45
    MOV EAX,dword ptr [EAX]             ; 0053dc48
    MOV dword ptr [EDX],EAX             ; 0053dc4a
    JMP 0x0053dac4                      ; 0053dc4c
        ;   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [EBX + 0x68]      ; 0053dc51
        ;   Label: caseD_1
    MOV EDX,dword ptr [EBP + 0x68]      ; 0053dc54
    MOV ECX,dword ptr [EAX]             ; 0053dc57
    MOV dword ptr [EDX],ECX             ; 0053dc59
    JMP 0x0053dac4                      ; 0053dc5b
        ;   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [EBX + 0x68]      ; 0053dc60
        ;   Label: caseD_2
    MOV EDX,dword ptr [EBP + 0x68]      ; 0053dc63
    CMP EDX,EAX                         ; 0053dc66
    JZ 0x0053dac4                       ; 0053dc68
        ;   XREF to: 0053dac4 (CONDITIONAL_JUMP)  ; caseD_e
    MOV ECX,dword ptr [EAX]             ; 0053dc6e
    MOV dword ptr [EDX],ECX             ; 0053dc70
    MOV ECX,dword ptr [EAX + 0x4]       ; 0053dc72
    MOV dword ptr [EDX + 0x4],ECX       ; 0053dc75
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053dc78
    MOV dword ptr [EDX + 0x8],ECX       ; 0053dc7b
    JMP 0x0053dac4                      ; 0053dc7e
        ;   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [EBX + 0x68]      ; 0053dc83
        ;   Label: caseD_9
    MOV EDX,dword ptr [EBP + 0x68]      ; 0053dc86
    MOV EAX,dword ptr [EAX]             ; 0053dc89
    MOV dword ptr [EDX],EAX             ; 0053dc8b
    JMP 0x0053dac4                      ; 0053dc8d
        ;   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV ESI,dword ptr [ESI + 0x68]      ; 0053dc92
        ;   Label: caseD_c
    MOV EDI,dword ptr [EBP + 0x68]      ; 0053dc95
    PUSH EDI                            ; 0053dc98
    MOV AL,byte ptr [ESI]               ; 0053dc99
        ;   Label: LAB_0053dc99
    MOV byte ptr [EDI],AL               ; 0053dc9b
    CMP AL,0x0                          ; 0053dc9d
    JZ 0x0053dcb1                       ; 0053dc9f
        ;   XREF to: 0053dcb1 (CONDITIONAL_JUMP)  ; LAB_0053dcb1
    MOV AL,byte ptr [ESI + 0x1]         ; 0053dca1
    ADD ESI,0x2                         ; 0053dca4
    MOV byte ptr [EDI + 0x1],AL         ; 0053dca7
    ADD EDI,0x2                         ; 0053dcaa
    CMP AL,0x0                          ; 0053dcad
    JNZ 0x0053dc99                      ; 0053dcaf
        ;   XREF to: 0053dc99 (CONDITIONAL_JUMP)  ; LAB_0053dc99
    POP EDI                             ; 0053dcb1
        ;   Label: LAB_0053dcb1
    JMP 0x0053dac4                      ; 0053dcb2
        ;   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [EBX + 0x68]      ; 0053dcb7
        ;   Label: caseD_6
    ADD EAX,0x78                        ; 0053dcba
    PUSH EAX                            ; 0053dcbd
    MOV EDX,dword ptr [EBP + 0x68]      ; 0053dcbe
    PUSH EDX                            ; 0053dcc1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0053dcc2
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0053dcc7
    JMP 0x0053dac4                      ; 0053dcca
        ;   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [EBX + 0x68]      ; 0053dccf
        ;   Label: caseD_7
    ADD EAX,0x2260                      ; 0053dcd2
    PUSH EAX                            ; 0053dcd7
    MOV EAX,dword ptr [EBP + 0x68]      ; 0053dcd8
    PUSH EAX                            ; 0053dcdb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0053dcdc
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0053dce1
    JMP 0x0053dac4                      ; 0053dce4
        ;   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)  ; caseD_e

