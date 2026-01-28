; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_msnedit_cpp_DeleteActors_FUN_0053df90(void)
;
; Local Variables:
; undefined1       Stack[-0x764]:1  local_764
; undefined1       Stack[-0x3bc]:1  local_3bc
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a6ed
;
; Referenced Globals:
;   TerminatedCString s_Delete_actors_using_list_0063ce65
;   TerminatedCString s_Delete_actors_using_wild_0063ce7f
;   TerminatedCString s_Delete_actors_by_type_0063ce9c
;   TerminatedCString s_Delete_actors_0063ceb2
;   TerminatedCString s_Delete_actors_Press_ESC__0063cec0
;   TerminatedCString s_core_msnedit_cpp_0063cee5
;   TerminatedCString s_Hell_froze_0063cef9
;   TerminatedCString s_Delete_actors_by_name_us_0063cf05
;   TerminatedCString s_d_actors_deleted_0063cf2a
;   TerminatedCString s_Delete_actors_by_type_0063cf3c
;   TerminatedCString s_d_actors_deleted_0063cf52
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   undefined4 DAT_00680730
;   undefined4 DAT_00680798
;   CEditorTools g_CEditorToolsInstance
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_FUN_00524030
;   core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
;   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
;   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053df90
        ;   Label: core_msnedit.cpp_DeleteActors_FUN_0053df90
    PUSH ESI                            ; 0053df91
    PUSH EDI                            ; 0053df92
    PUSH EBP                            ; 0053df93
    SUB ESP,0x754                       ; 0053df94
    MOV EBX,dword ptr [ESP + 0x768]     ; 0053df9a
    XOR EDX,EDX                         ; 0053dfa1
    MOV dword ptr [ESP + 0x750],EDX     ; 0053dfa3
    LEA EAX,[ESP + 0x3a8]               ; 0053dfaa
        ;   Label: LAB_0053dfaa
    PUSH EAX                            ; 0053dfb1
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053dfb2
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0053dfb7
    PUSH 0x63ce65                       ; 0053dfba | = "Delete actors using list."
    LEA EAX,[ESP + 0x3ac]               ; 0053dfbf
    PUSH EAX                            ; 0053dfc6
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053dfc7
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053dfcc
    PUSH 0x63ce7f                       ; 0053dfcf | = "Delete actors using wildcard"
    LEA EAX,[ESP + 0x3ac]               ; 0053dfd4
    PUSH EAX                            ; 0053dfdb
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053dfdc
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053dfe1
    PUSH 0x63ce9c                       ; 0053dfe4 | = "Delete actors by type"
    LEA EAX,[ESP + 0x3ac]               ; 0053dfe9
    PUSH EAX                            ; 0053dff0
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053dff1
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053dff6
    PUSH 0x0                            ; 0053dff9
    MOV ECX,dword ptr [ESP + 0x754]     ; 0053dffb
    PUSH ECX                            ; 0053e002
    PUSH 0x63ceb2                       ; 0053e003 | = "Delete actors"
    LEA EAX,[ESP + 0x3b4]               ; 0053e008
    PUSH EAX                            ; 0053e00f
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053e010
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0053e015
    MOV dword ptr [ESP + 0x750],EAX     ; 0053e018
    TEST EAX,EAX                        ; 0053e01f
    JL 0x0053e200                       ; 0053e021
        ;   XREF to: 0053e200 (CONDITIONAL_JUMP)  ; LAB_0053e200
    JNZ 0x0053e0f0                      ; 0053e027
        ;   XREF to: 0053e0f0 (CONDITIONAL_JUMP)  ; LAB_0053e0f0
    MOV EAX,ESP                         ; 0053e02d
    PUSH EAX                            ; 0053e02f
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053e030
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV ESI,dword ptr [EBX + 0x548]     ; 0053e035
    ADD ESP,0x4                         ; 0053e03b
    TEST ESI,ESI                        ; 0053e03e
    JZ 0x0053e05a                       ; 0053e040
        ;   XREF to: 0053e05a (CONDITIONAL_JUMP)  ; LAB_0053e05a
    PUSH ESI                            ; 0053e042
        ;   Label: LAB_0053e042
    LEA EAX,[ESP + 0x4]                 ; 0053e043
    PUSH EAX                            ; 0053e047
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053e048
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV ESI,dword ptr [ESI + 0x14c]     ; 0053e04d
    ADD ESP,0x8                         ; 0053e053
    TEST ESI,ESI                        ; 0053e056
    JNZ 0x0053e042                      ; 0053e058
        ;   XREF to: 0053e042 (CONDITIONAL_JUMP)  ; LAB_0053e042
    MOV EAX,ESP                         ; 0053e05a
        ;   Label: LAB_0053e05a
    PUSH EAX                            ; 0053e05c
    XOR ESI,ESI                         ; 0053e05d
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0053e05f
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0053e064
    XOR EBP,EBP                         ; 0053e067
    PUSH EBP                            ; 0053e069
        ;   Label: LAB_0053e069
    PUSH ESI                            ; 0053e06a
    PUSH 0x63cec0                       ; 0053e06b | = "Delete actors.  Press ESC When done."
    LEA EAX,[ESP + 0xc]                 ; 0053e070
    PUSH EAX                            ; 0053e074
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053e075
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0053e07a
    MOV ESI,EAX                         ; 0053e07d
    TEST EAX,EAX                        ; 0053e07f
    JL 0x0053e0e1                       ; 0053e081
        ;   XREF to: 0053e0e1 (CONDITIONAL_JUMP)  ; LAB_0053e0e1
    PUSH EAX                            ; 0053e083
    LEA EAX,[ESP + 0x4]                 ; 0053e084
    PUSH EAX                            ; 0053e088
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053e089
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053e08e
    PUSH EAX                            ; 0053e091
    PUSH EBX                            ; 0053e092
    CALL core_mission.cpp_CDemonMission_FUN_00524030 ; 0053e093
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; char * core_mission.cpp_CDemonMission_FUN_00524030(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053e098
    MOV EDI,EAX                         ; 0053e09b
    TEST EAX,EAX                        ; 0053e09d
    JZ 0x0053e0bd                       ; 0053e09f
        ;   XREF to: 0053e0bd (CONDITIONAL_JUMP)  ; LAB_0053e0bd
    PUSH 0x1                            ; 0053e0a1
        ;   Label: LAB_0053e0a1
    PUSH EDI                            ; 0053e0a3
    PUSH EBX                            ; 0053e0a4
    CALL core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80 ; 0053e0a5
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80()
    ADD ESP,0xc                         ; 0053e0aa
    PUSH ESI                            ; 0053e0ad
    LEA EAX,[ESP + 0x4]                 ; 0053e0ae
    PUSH EAX                            ; 0053e0b2
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 0053e0b3
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053e0b8
    JMP 0x0053e069                      ; 0053e0bb
        ;   XREF to: 0053e069 (UNCONDITIONAL_JUMP)  ; LAB_0053e069
    MOV EAX,0x63cee5                    ; 0053e0bd | = "..\\core\\msnedit.cpp"
        ;   Label: LAB_0053e0bd
    MOV EDX,0xe1a                       ; 0053e0c2
    PUSH 0x63cef9                       ; 0053e0c7 | = "Hell froze."
    MOV [0x02f0ca48],EAX                ; 0053e0cc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0053e0d1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053e0d7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0053e0dc
    JMP 0x0053e0a1                      ; 0053e0df
        ;   XREF to: 0053e0a1 (UNCONDITIONAL_JUMP)  ; LAB_0053e0a1
    PUSH 0x0                            ; 0053e0e1
        ;   Label: LAB_0053e0e1
    LEA EAX,[ESP + 0x4]                 ; 0053e0e3
    PUSH EAX                            ; 0053e0e7
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053e0e8
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0053e0ed
    MOV ECX,dword ptr [ESP + 0x750]     ; 0053e0f0
        ;   Label: LAB_0053e0f0
    CMP ECX,0x1                         ; 0053e0f7
    JNZ 0x0053e16e                      ; 0053e0fa
        ;   XREF to: 0053e16e (CONDITIONAL_JUMP)  ; LAB_0053e16e
    PUSH ECX                            ; 0053e100
    PUSH 0x64                           ; 0053e101
    PUSH 0x680730                       ; 0053e103 | DAT_00680730
    PUSH 0x63cf05                       ; 0053e108 | = "Delete actors by name using wildcard"
    MOV ESI,dword ptr [0x00678a60]      ; 0053e10d | g_CEditorToolsPtr
    PUSH ESI                            ; 0053e113 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0053e114
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0053e119
    TEST EAX,EAX                        ; 0053e11c
    JZ 0x0053e16e                       ; 0053e11e
        ;   XREF to: 0053e16e (CONDITIONAL_JUMP)  ; LAB_0053e16e
    MOV ESI,dword ptr [EBX + 0x548]     ; 0053e120
    XOR EBP,EBP                         ; 0053e126
    TEST ESI,ESI                        ; 0053e128
    JZ 0x0053e159                       ; 0053e12a
        ;   XREF to: 0053e159 (CONDITIONAL_JUMP)  ; LAB_0053e159
    PUSH 0x0                            ; 0053e12c
        ;   Label: LAB_0053e12c
    PUSH ESI                            ; 0053e12e
    PUSH 0x680730                       ; 0053e12f | DAT_00680730
    MOV EDI,dword ptr [ESI + 0x14c]     ; 0053e134
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 0053e13a
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0053e13f
    TEST EAX,EAX                        ; 0053e142
    JZ 0x0053e153                       ; 0053e144
        ;   XREF to: 0053e153 (CONDITIONAL_JUMP)  ; LAB_0053e153
    PUSH 0x1                            ; 0053e146
    PUSH ESI                            ; 0053e148
    PUSH EBX                            ; 0053e149
    INC EBP                             ; 0053e14a
    CALL core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80 ; 0053e14b
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80()
    ADD ESP,0xc                         ; 0053e150
    MOV ESI,EDI                         ; 0053e153
        ;   Label: LAB_0053e153
    TEST EDI,EDI                        ; 0053e155
    JNZ 0x0053e12c                      ; 0053e157
        ;   XREF to: 0053e12c (CONDITIONAL_JUMP)  ; LAB_0053e12c
    PUSH EBP                            ; 0053e159
        ;   Label: LAB_0053e159
    PUSH 0x63cf2a                       ; 0053e15a | = "%d actors deleted"
    MOV EDI,dword ptr [0x00678a60]      ; 0053e15f | g_CEditorToolsPtr
    PUSH EDI                            ; 0053e165 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0053e166
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053e16b
    CMP dword ptr [ESP + 0x750],0x2     ; 0053e16e
        ;   Label: LAB_0053e16e
    JZ 0x0053e18f                       ; 0053e176
        ;   XREF to: 0053e18f (CONDITIONAL_JUMP)  ; LAB_0053e18f
    PUSH 0x0                            ; 0053e178
        ;   Label: LAB_0053e178
    LEA EAX,[ESP + 0x3ac]               ; 0053e17a
    PUSH EAX                            ; 0053e181
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053e182
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0053e187
    JMP 0x0053dfaa                      ; 0053e18a
        ;   XREF to: 0053dfaa (UNCONDITIONAL_JUMP)  ; LAB_0053dfaa
    PUSH 0x1                            ; 0053e18f
        ;   Label: LAB_0053e18f
    PUSH 0x64                           ; 0053e191
    PUSH 0x680798                       ; 0053e193 | DAT_00680798
    PUSH 0x63cf3c                       ; 0053e198 | = "Delete actors by type"
    MOV EAX,[0x00678a60]                ; 0053e19d | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0053e1a2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0053e1a3
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0053e1a8
    TEST EAX,EAX                        ; 0053e1ab
    JZ 0x0053e178                       ; 0053e1ad
        ;   XREF to: 0053e178 (CONDITIONAL_JUMP)  ; LAB_0053e178
    MOV ESI,dword ptr [EBX + 0x548]     ; 0053e1af
    XOR EBP,EBP                         ; 0053e1b5
    TEST ESI,ESI                        ; 0053e1b7
    JZ 0x0053e1e6                       ; 0053e1b9
        ;   XREF to: 0053e1e6 (CONDITIONAL_JUMP)  ; LAB_0053e1e6
    PUSH 0x680798                       ; 0053e1bb | DAT_00680798
        ;   Label: LAB_0053e1bb
    PUSH ESI                            ; 0053e1c0
    MOV EDI,dword ptr [ESI + 0x14c]     ; 0053e1c1
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0053e1c7
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0053e1cc
    TEST EAX,EAX                        ; 0053e1cf
    JZ 0x0053e1e0                       ; 0053e1d1
        ;   XREF to: 0053e1e0 (CONDITIONAL_JUMP)  ; LAB_0053e1e0
    PUSH 0x1                            ; 0053e1d3
    PUSH ESI                            ; 0053e1d5
    PUSH EBX                            ; 0053e1d6
    INC EBP                             ; 0053e1d7
    CALL core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80 ; 0053e1d8
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80()
    ADD ESP,0xc                         ; 0053e1dd
    MOV ESI,EDI                         ; 0053e1e0
        ;   Label: LAB_0053e1e0
    TEST EDI,EDI                        ; 0053e1e2
    JNZ 0x0053e1bb                      ; 0053e1e4
        ;   XREF to: 0053e1bb (CONDITIONAL_JUMP)  ; LAB_0053e1bb
    PUSH EBP                            ; 0053e1e6
        ;   Label: LAB_0053e1e6
    PUSH 0x63cf52                       ; 0053e1e7 | = "%d actors deleted"
    MOV EDX,dword ptr [0x00678a60]      ; 0053e1ec | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0053e1f2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0053e1f3
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053e1f8
    JMP 0x0053e178                      ; 0053e1fb
        ;   XREF to: 0053e178 (UNCONDITIONAL_JUMP)  ; LAB_0053e178
    PUSH 0x0                            ; 0053e200
        ;   Label: LAB_0053e200
    LEA EAX,[ESP + 0x3ac]               ; 0053e202
    PUSH EAX                            ; 0053e209
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053e20a
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0053e20f
    ADD ESP,0x754                       ; 0053e212
    POP EBP                             ; 0053e218
    POP EDI                             ; 0053e219
    POP ESI                             ; 0053e21a
    POP EBX                             ; 0053e21b
    RET                                 ; 0053e21c

