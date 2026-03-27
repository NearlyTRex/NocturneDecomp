; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_replicateActor_FUN_0053bd80(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; char[100]        Stack[-0xa4]:100  local_a4
; char[32]         Stack[-0x40]:32  local_40
; char[4]          Stack[-0x20]:4  local_20
; char[4]          Stack[-0x1c]:4  acStack_1c
; char[4]          Stack[-0x18]:4  acStack_18
; char             Stack[-0x14]:1  cStack_14
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053a710
;
; Referenced Globals:
;   TerminatedCString s_Confirm_new_actor_name_0063b7b6
;   TerminatedCString s_core_msnedit_cpp_0063c732
;   TerminatedCString s_wt_0063c746
;   TerminatedCString s_Can_t_create_temp_file_t_0063c749
;   TerminatedCString s_core_msnedit_cpp_0063c774
;   TerminatedCString s_core_msnedit_cpp_0063c788
;   TerminatedCString s_rt_0063c79c
;   TerminatedCString s_core_msnedit_cpp_0063c79f
;   TerminatedCString s_Can_t_reopen_s_0063c7b3
;   TerminatedCString s_core_msnedit_cpp_0063c7c3
;   TerminatedCString s_core_msnedit_cpp_0063c7d7
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char* g_CurrentDebugFilename = 0067d200
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   int g_ConfirmNewActorNames = 0x1
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_actor.cpp_CDemonActor_load_FUN_0040b050
;   core_actor.cpp_CDemonActor_save_FUN_0040af30
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
;   core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_00524660
;   core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140
;   core_msnedit.cpp_CDemonMission_validateNewActorName_FUN_0053d220
;   crt_stdio.c_remove_FUN_005ff9d0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053bd80
        ;   Label: core_msnedit.cpp_CDemonMission_replicateActor_FUN_0053bd80
    PUSH ESI                            ; 0053bd81
    PUSH EDI                            ; 0053bd82
    PUSH EBP                            ; 0053bd83
    SUB ESP,0x94                        ; 0053bd84
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0053bd8a
    CMP dword ptr [EAX + 0x28],0x0      ; 0053bd91
    JNZ 0x0053bda2                      ; 0053bd95
        ;   XREF to: 0053bda2 (CONDITIONAL_JUMP)  ; LAB_0053bda2
    ADD ESP,0x94                        ; 0053bd97
        ;   Label: LAB_0053bd97
    POP EBP                             ; 0053bd9d
    POP EDI                             ; 0053bd9e
    POP ESI                             ; 0053bd9f
    POP EBX                             ; 0053bda0
    RET                                 ; 0053bda1
    LEA EDI,[ESP + 0x84]                ; 0053bda2
        ;   Label: LAB_0053bda2
    JMP 0x03fc5aea                      ; 0053bda9
        ;   XREF to: 03fc5aea (UNCONDITIONAL_JUMP)  ; LAB_03fc5aea
    CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0 ; 0053bdb2
        ;   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0()
        ;   Label: LAB_0053bdb2
    PUSH 0x965                          ; 0053bdb7
    PUSH 0x63c732                       ; 0053bdbc | = "..\\core\\msnedit.cpp"
    PUSH 0x63c746                       ; 0053bdc1 | = "wt"
    PUSH 0x0                            ; 0053bdc6
    LEA EAX,[ESP + 0x94]                ; 0053bdc8
    PUSH EAX                            ; 0053bdcf
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0053bdd0
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 0053bdd5
    ADD ESP,0x14                        ; 0053bdd7
    TEST EAX,EAX                        ; 0053bdda
    JZ 0x0053bfba                       ; 0053bddc
        ;   XREF to: 0053bfba (CONDITIONAL_JUMP)  ; LAB_0053bfba
    PUSH EAX                            ; 0053bde2
    MOV EAX,dword ptr [ESP + 0xac]      ; 0053bde3
    MOV ECX,dword ptr [EAX + 0x28]      ; 0053bdea
    PUSH ECX                            ; 0053bded
    CALL core_actor.cpp_CDemonActor_save_FUN_0040af30 ; 0053bdee
        ;   XREF to: 0040af30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_save_FUN_0040af30(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0053bdf3
    PUSH 0x96b                          ; 0053bdf6
    PUSH 0x63c774                       ; 0053bdfb | = "..\\core\\msnedit.cpp"
    PUSH EBX                            ; 0053be00
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0053be01
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0053be06
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0053be09
    MOV EBX,dword ptr [EAX + 0x28]      ; 0053be10
    PUSH EBX                            ; 0053be13
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 0053be14
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053be19
    PUSH EAX                            ; 0053be1c
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 0053be1d
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 0053be22
    PUSH 0x973                          ; 0053be25
    PUSH 0x63c788                       ; 0053be2a | = "..\\core\\msnedit.cpp"
    PUSH 0x63c79c                       ; 0053be2f | = "rt"
    PUSH 0x0                            ; 0053be34
    MOV EBP,EAX                         ; 0053be36
    LEA EAX,[ESP + 0x94]                ; 0053be38
    PUSH EAX                            ; 0053be3f
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0053be40
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0053be45
    MOV EBX,EAX                         ; 0053be48
    TEST EAX,EAX                        ; 0053be4a
    JNZ 0x0053be79                      ; 0053be4c
        ;   XREF to: 0053be79 (CONDITIONAL_JUMP)  ; LAB_0053be79
    LEA EAX,[ESP + 0x84]                ; 0053be4e
    PUSH EAX                            ; 0053be55
    MOV ESI,0x63c79f                    ; 0053be56 | = "..\\core\\msnedit.cpp"
    MOV EDI,0x974                       ; 0053be5b
    PUSH 0x63c7b3                       ; 0053be60 | = "Can't reopen %s"
    MOV dword ptr [0x02f0ca48],ESI      ; 0053be65 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0053be6b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053be71
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0053be76
    PUSH EBX                            ; 0053be79
        ;   Label: LAB_0053be79
    PUSH EBP                            ; 0053be7a
    CALL core_actor.cpp_CDemonActor_load_FUN_0040b050 ; 0053be7b
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_load_FUN_0040b050(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0053be80
    PUSH 0x976                          ; 0053be83
    PUSH 0x63c7c3                       ; 0053be88 | = "..\\core\\msnedit.cpp"
    PUSH EBX                            ; 0053be8d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0053be8e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0053be93
    LEA EAX,[ESP + 0x84]                ; 0053be96
    PUSH EAX                            ; 0053be9d
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 0053be9e
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 0053bea3
    MOV ESI,dword ptr [ESP + 0xa8]      ; 0053bea6
    MOV EDI,ESP                         ; 0053bead
    MOV ESI,dword ptr [ESI + 0x28]      ; 0053beaf
    PUSH EDI                            ; 0053beb2
    MOV AL,byte ptr [ESI]               ; 0053beb3
        ;   Label: LAB_0053beb3
    MOV byte ptr [EDI],AL               ; 0053beb5
    CMP AL,0x0                          ; 0053beb7
    JZ 0x0053becb                       ; 0053beb9
        ;   XREF to: 0053becb (CONDITIONAL_JUMP)  ; LAB_0053becb
    MOV AL,byte ptr [ESI + 0x1]         ; 0053bebb
    ADD ESI,0x2                         ; 0053bebe
    MOV byte ptr [EDI + 0x1],AL         ; 0053bec1
    ADD EDI,0x2                         ; 0053bec4
    CMP AL,0x0                          ; 0053bec7
    JNZ 0x0053beb3                      ; 0053bec9
        ;   XREF to: 0053beb3 (CONDITIONAL_JUMP)  ; LAB_0053beb3
    POP EDI                             ; 0053becb
        ;   Label: LAB_0053becb
    MOV EDI,ESP                         ; 0053becc
    SUB ECX,ECX                         ; 0053bece
    DEC ECX                             ; 0053bed0
    XOR EAX,EAX                         ; 0053bed1
    SCASB.REPNE ES:EDI                  ; 0053bed3
    NOT ECX                             ; 0053bed5
    DEC ECX                             ; 0053bed7
    MOV EAX,ECX                         ; 0053bed8
    TEST ECX,ECX                        ; 0053beda
    JLE 0x0053befd                      ; 0053bedc
        ;   XREF to: 0053befd (CONDITIONAL_JUMP)  ; LAB_0053befd
    MOV DL,byte ptr [ESP + EAX*0x1 + -0x1] ; 0053bede
        ;   Label: LAB_0053bede
    DEC EAX                             ; 0053bee2
    INC DL                              ; 0053bee3
    AND EDX,0xff                        ; 0053bee5
    TEST byte ptr [EDX + 0x6849c4],0x20 ; 0053beeb | g_CharacterClassificationTable
    JZ 0x0053befd                       ; 0053bef2
        ;   XREF to: 0053befd (CONDITIONAL_JUMP)  ; LAB_0053befd
    XOR DL,DL                           ; 0053bef4
    MOV byte ptr [ESP + EAX*0x1],DL     ; 0053bef6
    TEST EAX,EAX                        ; 0053bef9
    JG 0x0053bede                       ; 0053befb
        ;   XREF to: 0053bede (CONDITIONAL_JUMP)  ; LAB_0053bede
    TEST EAX,EAX                        ; 0053befd
        ;   Label: LAB_0053befd
    JLE 0x0053bfd9                      ; 0053beff
        ;   XREF to: 0053bfd9 (CONDITIONAL_JUMP)  ; LAB_0053bfd9
    MOV EAX,ESP                         ; 0053bf05
    PUSH EAX                            ; 0053bf07
    PUSH EBP                            ; 0053bf08
    MOV EDX,dword ptr [ESP + 0xb0]      ; 0053bf09
    PUSH EDX                            ; 0053bf10
    CALL core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_00524660 ; 0053bf11
        ;   XREF to: 00524660 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_00524660(CDemonMission * this_ptr, char * out_buf, char * base_name)
    ADD ESP,0xc                         ; 0053bf16
    MOV ECX,dword ptr [0x00680814]      ; 0053bf19 | g_ConfirmNewActorNames
        ;   Label: LAB_0053bf19
    MOV EBX,EBP                         ; 0053bf1f
    TEST ECX,ECX                        ; 0053bf21
    JNZ 0x0053bfef                      ; 0053bf23
        ;   XREF to: 0053bfef (CONDITIONAL_JUMP)  ; LAB_0053bfef
    PUSH EBP                            ; 0053bf29
        ;   Label: LAB_0053bf29
    MOV ECX,dword ptr [ESP + 0xac]      ; 0053bf2a
    PUSH ECX                            ; 0053bf31
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70 ; 0053bf32
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053bf37
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0053bf3a
    PUSH EBX                            ; 0053bf41
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 0053bf42
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053bf47
    MOV ESI,dword ptr [0x00823c4c]      ; 0053bf4a | g_CCharacterClassInfo.name_hash
    PUSH ESI                            ; 0053bf50
    PUSH EBP                            ; 0053bf51
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0053bf52
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EAX                         ; 0053bf57
    ADD ESP,0x8                         ; 0053bf59
    TEST EAX,EAX                        ; 0053bf5c
    JZ 0x0053bf80                       ; 0053bf5e
        ;   XREF to: 0053bf80 (CONDITIONAL_JUMP)  ; LAB_0053bf80
    LEA EDX,[EAX + 0x88]                ; 0053bf60
    ADD EAX,0x44                        ; 0053bf66
        ;   Label: LAB_0053bf66
    MOV dword ptr [EAX + 0x2470],0x0    ; 0053bf69
    CMP EAX,EDX                         ; 0053bf73
    JNZ 0x0053bf66                      ; 0053bf75
        ;   XREF to: 0053bf66 (CONDITIONAL_JUMP)  ; LAB_0053bf66
    LEA EAX,[EAX]                       ; 0053bf77
    LEA EDX,[EDX]                       ; 0053bf7d
    PUSH EBP                            ; 0053bf80
        ;   Label: LAB_0053bf80
    MOV EAX,dword ptr [EBP + 0x154]     ; 0053bf81
    CALL dword ptr [EAX]                ; 0053bf87
    ADD ESP,0x4                         ; 0053bf89
    PUSH 0x0                            ; 0053bf8c
    MOV EAX,dword ptr [EBP + 0x154]     ; 0053bf8e
    PUSH EBP                            ; 0053bf94
    CALL dword ptr [EAX + 0x84]         ; 0053bf95
    ADD ESP,0x8                         ; 0053bf9b
    PUSH EBP                            ; 0053bf9e
    MOV EDI,dword ptr [ESP + 0xac]      ; 0053bf9f
    PUSH EDI                            ; 0053bfa6
    CALL core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140 ; 0053bfa7
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053bfac
    ADD ESP,0x94                        ; 0053bfaf
    POP EBP                             ; 0053bfb5
    POP EDI                             ; 0053bfb6
    POP ESI                             ; 0053bfb7
    POP EBX                             ; 0053bfb8
    RET                                 ; 0053bfb9
    PUSH 0x63c749                       ; 0053bfba | = "Can't create temp file to replicate a..."
        ;   Label: LAB_0053bfba
    MOV EBP,dword ptr [0x00678a60]      ; 0053bfbf | g_CEditorToolsPtr
    PUSH EBP                            ; 0053bfc5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053bfc6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053bfcb
    ADD ESP,0x94                        ; 0053bfce
    POP EBP                             ; 0053bfd4
    POP EDI                             ; 0053bfd5
    POP ESI                             ; 0053bfd6
    POP EBX                             ; 0053bfd7
    RET                                 ; 0053bfd8
    PUSH EBP                            ; 0053bfd9
        ;   Label: LAB_0053bfd9
    MOV EAX,dword ptr [ESP + 0xac]      ; 0053bfda
    PUSH EAX                            ; 0053bfe1
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 0053bfe2
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053bfe7
    JMP 0x0053bf19                      ; 0053bfea
        ;   XREF to: 0053bf19 (UNCONDITIONAL_JUMP)  ; LAB_0053bf19
    LEA EDI,[ESP + 0x64]                ; 0053bfef
        ;   Label: LAB_0053bfef
    MOV ESI,EBP                         ; 0053bff3
    PUSH EDI                            ; 0053bff5
    MOV AL,byte ptr [ESI]               ; 0053bff6
        ;   Label: LAB_0053bff6
    MOV byte ptr [EDI],AL               ; 0053bff8
    CMP AL,0x0                          ; 0053bffa
    JZ 0x0053c00e                       ; 0053bffc
        ;   XREF to: 0053c00e (CONDITIONAL_JUMP)  ; LAB_0053c00e
    MOV AL,byte ptr [ESI + 0x1]         ; 0053bffe
    ADD ESI,0x2                         ; 0053c001
    MOV byte ptr [EDI + 0x1],AL         ; 0053c004
    ADD EDI,0x2                         ; 0053c007
    CMP AL,0x0                          ; 0053c00a
    JNZ 0x0053bff6                      ; 0053c00c
        ;   XREF to: 0053bff6 (CONDITIONAL_JUMP)  ; LAB_0053bff6
    POP EDI                             ; 0053c00e
        ;   Label: LAB_0053c00e
    PUSH 0x1                            ; 0053c00f
        ;   Label: LAB_0053c00f
    PUSH 0x1e                           ; 0053c011
    LEA EAX,[ESP + 0x6c]                ; 0053c013
    PUSH EAX                            ; 0053c017
    PUSH 0x63b7b6                       ; 0053c018 | = "Confirm new actor name"
    MOV ESI,dword ptr [0x00678a60]      ; 0053c01d | g_CEditorToolsPtr
    PUSH ESI                            ; 0053c023 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0053c024
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0053c029
    TEST EAX,EAX                        ; 0053c02c
    JNZ 0x0053c06a                      ; 0053c02e
        ;   XREF to: 0053c06a (CONDITIONAL_JUMP)  ; LAB_0053c06a
    MOV EAX,0x994                       ; 0053c030
    MOV EDI,0x63c7d7                    ; 0053c035 | = "..\\core\\msnedit.cpp"
    MOV [0x02f0d944],EAX                ; 0053c03a | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EDI      ; 0053c03f | g_CurrentDebugFilename
    TEST EBP,EBP                        ; 0053c045
    JZ 0x0053bd97                       ; 0053c047
        ;   XREF to: 0053bd97 (CONDITIONAL_JUMP)  ; LAB_0053bd97
    PUSH 0x2                            ; 0053c04d
    MOV EAX,dword ptr [EBP + 0x154]     ; 0053c04f
    PUSH EBP                            ; 0053c055
    CALL dword ptr [EAX + 0xe4]         ; 0053c056
    ADD ESP,0x8                         ; 0053c05c
    ADD ESP,0x94                        ; 0053c05f
    POP EBP                             ; 0053c065
    POP EDI                             ; 0053c066
    POP ESI                             ; 0053c067
    POP EBX                             ; 0053c068
    RET                                 ; 0053c069
    LEA EAX,[ESP + 0x64]                ; 0053c06a
        ;   Label: LAB_0053c06a
    PUSH EAX                            ; 0053c06e
    PUSH EBX                            ; 0053c06f
    MOV EDX,dword ptr [0x0067d550]      ; 0053c070 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EDX                            ; 0053c076 | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_validateNewActorName_FUN_0053d220 ; 0053c077
        ;   XREF to: 0053d220 (UNCONDITIONAL_CALL)  ; int core_msnedit.cpp_CDemonMission_validateNewActorName_FUN_0053d220(CDemonMission * this_ptr, char * orig_name, char * new_name)
    ADD ESP,0xc                         ; 0053c07c
    TEST EAX,EAX                        ; 0053c07f
    JZ 0x0053c00f                       ; 0053c081
        ;   XREF to: 0053c00f (CONDITIONAL_JUMP)  ; LAB_0053c00f
    LEA ESI,[ESP + 0x64]                ; 0053c083
    MOV EDI,EBX                         ; 0053c087
    PUSH EDI                            ; 0053c089
    MOV AL,byte ptr [ESI]               ; 0053c08a
        ;   Label: LAB_0053c08a
    MOV byte ptr [EDI],AL               ; 0053c08c
    CMP AL,0x0                          ; 0053c08e
    JZ 0x0053c0a2                       ; 0053c090
        ;   XREF to: 0053c0a2 (CONDITIONAL_JUMP)  ; LAB_0053c0a2
    MOV AL,byte ptr [ESI + 0x1]         ; 0053c092
    ADD ESI,0x2                         ; 0053c095
    MOV byte ptr [EDI + 0x1],AL         ; 0053c098
    ADD EDI,0x2                         ; 0053c09b
    CMP AL,0x0                          ; 0053c09e
    JNZ 0x0053c08a                      ; 0053c0a0
        ;   XREF to: 0053c08a (CONDITIONAL_JUMP)  ; LAB_0053c08a
    POP EDI                             ; 0053c0a2
        ;   Label: LAB_0053c0a2
    JMP 0x0053bf29                      ; 0053c0a3
        ;   XREF to: 0053bf29 (UNCONDITIONAL_JUMP)  ; LAB_0053bf29
    MOV ESI,0x6808f8                    ; 03fc5aea
        ;   Label: LAB_03fc5aea
    MOV ECX,dword ptr [ESI]             ; 03fc5aef
    MOV dword ptr [EDI],ECX             ; 03fc5af1
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc5af3
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc5af6
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc5af9
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc5afc
    ADD ESI,0xc                         ; 03fc5aff
    ADD EDI,0xc                         ; 03fc5b02
    MOVSB ES:EDI,ESI                    ; 03fc5b05
    JMP 0x0053bdb2                      ; 03fc5b06
        ;   XREF to: 0053bdb2 (UNCONDITIONAL_JUMP)  ; LAB_0053bdb2

