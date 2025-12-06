; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_0053b9f0()
;
; Local Variables:
; undefined1       Stack[-0x448]:1  local_448
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x3b]:1  local_3b
; undefined1       Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a6b3
;
; Referenced Globals:
;   TerminatedCString s_Confirm_new_actor_name_0063b7b6
;   TerminatedCString s_Choose_type_of_actor_to__0063c6d0
;   TerminatedCString s_C_s_0063c6ef
;   TerminatedCString s_core_msnedit_cpp_0063c6f3
;   TerminatedCString s_core_msnedit_cpp_0063c707
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char* g_CurrentDebugFilename = 0067d200
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   undefined4 DAT_00680648
;   int g_ConfirmNewActorNames = 0x1
;   int g_NumActorClassTypes
;   CDemonActorType*[200] g_ActorClassRegistrations
;   undefined4 g_ActorClassRegistrations[1]
;   CEditorTools g_CEditorToolsPtr
;   int g_CurrentDebugLine
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
;   core_mission.cpp_CDemonMission_FUN_00523b70
;   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
;   core_msnedit.cpp_FUN_00535c60
;   core_msnedit.cpp_FUN_0053d220
;   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b9f0
        ;   Label: core_msnedit.cpp_FUN_0053b9f0
    PUSH ESI                            ; 0053b9f1
    PUSH EDI                            ; 0053b9f2
    PUSH EBP                            ; 0053b9f3
    SUB ESP,0x438                       ; 0053b9f4
    MOV EAX,ESP                         ; 0053b9fa
    PUSH EAX                            ; 0053b9fc
    XOR ESI,ESI                         ; 0053b9fd
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053b9ff | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x00822044]      ; 0053ba04 | int g_NumActorClassTypes
    ADD ESP,0x4                         ; 0053ba0a
    TEST EDX,EDX                        ; 0053ba0d
    JLE 0x0053ba3c                      ; 0053ba0f | LAB_0053ba3c
        ;   XREF to: 0053ba3c (CONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 0053ba11
    MOV EAX,dword ptr [EDI + 0x822048]  ; 0053ba13 | CDemonActorType *[200] g_ActorClassRegistrations
        ;   Label: LAB_0053ba13
    CMP dword ptr [EAX + 0x2c],0x0      ; 0053ba19
    JZ 0x0053ba2e                       ; 0053ba1d | LAB_0053ba2e
        ;   XREF to: 0053ba2e (CONDITIONAL_JUMP)
    INC EAX                             ; 0053ba1f
    PUSH EAX                            ; 0053ba20
    LEA EAX,[ESP + 0x4]                 ; 0053ba21
    PUSH EAX                            ; 0053ba25
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053ba26 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053ba2b
    MOV ECX,dword ptr [0x00822044]      ; 0053ba2e | int g_NumActorClassTypes
        ;   Label: LAB_0053ba2e
    INC ESI                             ; 0053ba34
    ADD EDI,0x4                         ; 0053ba35
    CMP ESI,ECX                         ; 0053ba38
    JL 0x0053ba13                       ; 0053ba3a | LAB_0053ba13
        ;   XREF to: 0053ba13 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0053ba3c
        ;   Label: LAB_0053ba3c
    PUSH EAX                            ; 0053ba3e
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0053ba3f | void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053ba44
    PUSH 0x0                            ; 0053ba47
    MOV EBX,dword ptr [0x00680648]      ; 0053ba49 | undefined4 DAT_00680648
    PUSH EBX                            ; 0053ba4f
    PUSH 0x63c6d0                       ; 0053ba50 | = "Choose type of actor to create" | s_Choose_type_of_actor_to__0063c6d0 = Choose type of actor to create
    LEA EAX,[ESP + 0xc]                 ; 0053ba55
    PUSH EAX                            ; 0053ba59
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053ba5a | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0053ba5f
    TEST EAX,EAX                        ; 0053ba62
    JL 0x0053bc0f                       ; 0053ba64 | LAB_0053bc0f
        ;   XREF to: 0053bc0f (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0053ba6a
    MOV [0x00680648],EAX                ; 0053ba6b | undefined4 DAT_00680648
    LEA EAX,[ESP + 0x4]                 ; 0053ba70
    PUSH EAX                            ; 0053ba74
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053ba75 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053ba7a
    PUSH EAX                            ; 0053ba7d
    PUSH 0x63c6ef                       ; 0053ba7e | = "C%s" | s_C_s_0063c6ef = C%s
    LEA EAX,[ESP + 0x3b0]               ; 0053ba83
    PUSH EAX                            ; 0053ba8a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053ba8b | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053ba90
    LEA EAX,[ESP + 0x3a8]               ; 0053ba93
    PUSH EAX                            ; 0053ba9a
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 0053ba9b | CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053baa0
    PUSH EAX                            ; 0053baa3
    MOV EDI,dword ptr [ESP + 0x450]     ; 0053baa4
    PUSH EDI                            ; 0053baab
    MOV ESI,EAX                         ; 0053baac
    MOV EBP,EAX                         ; 0053baae
    CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700 ; 0053bab0 | void core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700(CDemonMission * this_ptr)
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053bab5
    PUSH 0x1                            ; 0053bab8
    PUSH 0x32758e4                      ; 0053baba | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 0053babf | void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EDI]             ; 0053bac4
    MOV dword ptr [ESI + 0x2c],EAX      ; 0053bac6
    MOV EDX,dword ptr [EDI + 0x18]      ; 0053bac9
    MOV ECX,dword ptr [EDI + 0x20]      ; 0053bacc
    ADD EDX,ECX                         ; 0053bacf
    MOV EAX,EDX                         ; 0053bad1
    SAR EDX,0x1f                        ; 0053bad3
    SUB EAX,EDX                         ; 0053bad6
    SAR EAX,0x1                         ; 0053bad8
    MOV EBX,dword ptr [EDI + 0x1c]      ; 0053bada
    MOV EDX,dword ptr [EDI + 0x14]      ; 0053badd
    ADD ESP,0x8                         ; 0053bae0
    ADD EDX,EBX                         ; 0053bae3
    PUSH EAX                            ; 0053bae5
    MOV EAX,EDX                         ; 0053bae6
    SAR EDX,0x1f                        ; 0053bae8
    SUB EAX,EDX                         ; 0053baeb
    SAR EAX,0x1                         ; 0053baed
    PUSH EAX                            ; 0053baef
    LEA EAX,[ESP + 0x434]               ; 0053baf0
    PUSH EAX                            ; 0053baf7
    CALL core_msnedit.cpp_FUN_00535c60  ; 0053baf8 | undefined core_msnedit.cpp_FUN_00535c60()
        ;   XREF to: 00535c60 (UNCONDITIONAL_CALL)
    LEA EDX,[ESI + 0x20]                ; 0053bafd
    FLD float ptr [EAX]                 ; 0053bb00
    ADD ESP,0xc                         ; 0053bb02
    FSTP float ptr [EDX]                ; 0053bb05
    PUSH 0x0                            ; 0053bb07
    MOV EBX,ESI                         ; 0053bb09
    MOV ECX,dword ptr [EAX + 0x4]       ; 0053bb0b
    MOV dword ptr [EDX + 0x4],ECX       ; 0053bb0e
    PUSH 0x32758e4                      ; 0053bb11 | CDemonCamera g_CDemonCameraInstance
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053bb16
    MOV dword ptr [EDX + 0x8],ECX       ; 0053bb19
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 0053bb1c | void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x00680814]      ; 0053bb21 | int g_ConfirmNewActorNames
    ADD ESP,0x8                         ; 0053bb27
    TEST EDI,EDI                        ; 0053bb2a
    JZ 0x0053bbb9                       ; 0053bb2c | LAB_0053bbb9
        ;   XREF to: 0053bbb9 (CONDITIONAL_JUMP)
    LEA EDI,[ESP + 0x40c]               ; 0053bb32
    PUSH EDI                            ; 0053bb39
    MOV AL,byte ptr [ESI]               ; 0053bb3a
        ;   Label: LAB_0053bb3a
    MOV byte ptr [EDI],AL               ; 0053bb3c
    CMP AL,0x0                          ; 0053bb3e
    JZ 0x0053bb52                       ; 0053bb40 | LAB_0053bb52
        ;   XREF to: 0053bb52 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0053bb42
    ADD ESI,0x2                         ; 0053bb45
    MOV byte ptr [EDI + 0x1],AL         ; 0053bb48
    ADD EDI,0x2                         ; 0053bb4b
    CMP AL,0x0                          ; 0053bb4e
    JNZ 0x0053bb3a                      ; 0053bb50 | LAB_0053bb3a
        ;   XREF to: 0053bb3a (CONDITIONAL_JUMP)
    POP EDI                             ; 0053bb52
        ;   Label: LAB_0053bb52
    PUSH 0x1                            ; 0053bb53
        ;   Label: LAB_0053bb53
    PUSH 0x1e                           ; 0053bb55
    LEA EAX,[ESP + 0x414]               ; 0053bb57
    PUSH EAX                            ; 0053bb5e
    PUSH 0x63b7b6                       ; 0053bb5f | = "Confirm new actor name" | s_Confirm_new_actor_name_0063b7b6 = Confirm new actor name
    MOV EAX,[0x00678a60]                ; 0053bb64 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 0053bb69 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0053bb6a | int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0053bb6f
    TEST EAX,EAX                        ; 0053bb72
    JZ 0x0053bc29                       ; 0053bb74 | LAB_0053bc29
        ;   XREF to: 0053bc29 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x40c]               ; 0053bb7a
    PUSH EAX                            ; 0053bb81
    PUSH EBX                            ; 0053bb82
    MOV ESI,dword ptr [0x0067d550]      ; 0053bb83 | CDemonMission * g_CDemonMissionPtr
    PUSH ESI                            ; 0053bb89 | CDemonMission g_CDemonMissionInstance
    CALL core_msnedit.cpp_FUN_0053d220  ; 0053bb8a | int core_msnedit.cpp_FUN_0053d220(CDemonMission * this_ptr)
        ;   XREF to: 0053d220 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053bb8f
    TEST EAX,EAX                        ; 0053bb92
    JZ 0x0053bb53                       ; 0053bb94 | LAB_0053bb53
        ;   XREF to: 0053bb53 (CONDITIONAL_JUMP)
    LEA ESI,[ESP + 0x40c]               ; 0053bb96
    MOV EDI,EBX                         ; 0053bb9d
    PUSH EDI                            ; 0053bb9f
    MOV AL,byte ptr [ESI]               ; 0053bba0
        ;   Label: LAB_0053bba0
    MOV byte ptr [EDI],AL               ; 0053bba2
    CMP AL,0x0                          ; 0053bba4
    JZ 0x0053bbb8                       ; 0053bba6 | LAB_0053bbb8
        ;   XREF to: 0053bbb8 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0053bba8
    ADD ESI,0x2                         ; 0053bbab
    MOV byte ptr [EDI + 0x1],AL         ; 0053bbae
    ADD EDI,0x2                         ; 0053bbb1
    CMP AL,0x0                          ; 0053bbb4
    JNZ 0x0053bba0                      ; 0053bbb6 | LAB_0053bba0
        ;   XREF to: 0053bba0 (CONDITIONAL_JUMP)
    POP EDI                             ; 0053bbb8
        ;   Label: LAB_0053bbb8
    PUSH EBP                            ; 0053bbb9
        ;   Label: LAB_0053bbb9
    MOV EAX,dword ptr [EBP + 0x154]     ; 0053bbba
    CALL dword ptr [EAX + 0xd8]         ; 0053bbc0
    ADD ESP,0x4                         ; 0053bbc6
    TEST EAX,EAX                        ; 0053bbc9
    JZ 0x0053bc54                       ; 0053bbcb | LAB_0053bc54
        ;   XREF to: 0053bc54 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 0053bbd1
    MOV EDX,dword ptr [ESP + 0x450]     ; 0053bbd2
    PUSH EDX                            ; 0053bbd9
    CALL core_mission.cpp_CDemonMission_FUN_00523b70 ; 0053bbda | void core_mission.cpp_CDemonMission_FUN_00523b70(CDemonMission * this_ptr)
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053bbdf
    MOV ECX,dword ptr [ESP + 0x44c]     ; 0053bbe2
    PUSH ECX                            ; 0053bbe9
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 0053bbea | void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053bbef
    MOV EAX,dword ptr [EBP + 0x154]     ; 0053bbf2
    PUSH EBP                            ; 0053bbf8
    CALL dword ptr [EAX]                ; 0053bbf9
    ADD ESP,0x4                         ; 0053bbfb
    PUSH EBP                            ; 0053bbfe
    MOV EBX,dword ptr [ESP + 0x450]     ; 0053bbff
    PUSH EBX                            ; 0053bc06
    CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 ; 0053bc07 | undefined core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140()
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053bc0c
        ;   Label: LAB_0053bc0c
    PUSH 0x0                            ; 0053bc0f
        ;   Label: LAB_0053bc0f
    LEA EAX,[ESP + 0x4]                 ; 0053bc11
    PUSH EAX                            ; 0053bc15
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053bc16 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053bc1b
    ADD ESP,0x438                       ; 0053bc1e
    POP EBP                             ; 0053bc24
    POP EDI                             ; 0053bc25
    POP ESI                             ; 0053bc26
    POP EBX                             ; 0053bc27
    RET                                 ; 0053bc28
    MOV ECX,0x8ff                       ; 0053bc29
        ;   Label: LAB_0053bc29
    MOV EDX,0x63c6f3                    ; 0053bc2e | = "..\\core\\msnedit.cpp" | s_core_msnedit_cpp_0063c6f3 = ..\core\msnedit.cpp
    MOV dword ptr [0x02f0d944],ECX      ; 0053bc33 | int g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EDX      ; 0053bc39 | char * g_CurrentDebugFilename
    TEST EBP,EBP                        ; 0053bc3f
    JZ 0x0053bc0f                       ; 0053bc41 | LAB_0053bc0f
        ;   XREF to: 0053bc0f (CONDITIONAL_JUMP)
    PUSH 0x2                            ; 0053bc43
    MOV EAX,dword ptr [EBP + 0x154]     ; 0053bc45
    PUSH EBP                            ; 0053bc4b
    CALL dword ptr [EAX + 0xe4]         ; 0053bc4c
    JMP 0x0053bc0c                      ; 0053bc52 | LAB_0053bc0c
        ;   XREF to: 0053bc0c (UNCONDITIONAL_JUMP)
    MOV EAX,0x906                       ; 0053bc54
        ;   Label: LAB_0053bc54
    PUSH 0x2                            ; 0053bc59
    MOV EDI,0x63c707                    ; 0053bc5b | = "..\\core\\msnedit.cpp" | s_core_msnedit_cpp_0063c707 = ..\core\msnedit.cpp
    MOV [0x02f0d944],EAX                ; 0053bc60 | int g_CurrentDebugLine
    PUSH EBP                            ; 0053bc65
    MOV EAX,dword ptr [EBP + 0x154]     ; 0053bc66
    MOV dword ptr [0x0067d20c],EDI      ; 0053bc6c | char * g_CurrentDebugFilename
    CALL dword ptr [EAX + 0xe4]         ; 0053bc72
    JMP 0x0053bc0c                      ; 0053bc78 | LAB_0053bc0c
        ;   XREF to: 0053bc0c (UNCONDITIONAL_JUMP)

