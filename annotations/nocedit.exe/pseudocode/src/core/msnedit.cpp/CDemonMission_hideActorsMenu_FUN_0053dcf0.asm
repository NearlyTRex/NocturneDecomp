; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_hideActorsMenu_FUN_0053dcf0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x760]:1  local_760
; undefined1       Stack[-0x3b8]:1  local_3b8
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053a7f8
;
; Referenced Globals:
;   TerminatedCString s_Hide_actors_using_list_0063cd76
;   TerminatedCString s_Hide_actors_using_wildca_0063cd8e
;   TerminatedCString s_Hide_actors_by_type_0063cda9
;   TerminatedCString s_Hide_actors_0063cdbd
;   TerminatedCString s_Hide_actors_Press_ESC_Wh_0063cdc9
;   TerminatedCString s_core_msnedit_cpp_0063cdec
;   TerminatedCString s_Hell_froze_0063ce00
;   TerminatedCString s_Hide_actors_by_name_usin_0063ce0c
;   TerminatedCString s_d_actors_hidden_0063ce2f
;   TerminatedCString s_Hide_actors_by_type_0063ce40
;   TerminatedCString s_d_actors_hidden_0063ce54
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char[104] g_HideActorsWildcardBuffer
;   char[104] g_MsnEditHideByTypeBuffer
;   CEditorTools g_CEditorToolsInstance
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
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

    PUSH EBX                            ; 0053dcf0
        ;   Label: core_msnedit.cpp_CDemonMission_hideActorsMenu_FUN_0053dcf0
    PUSH ESI                            ; 0053dcf1
    PUSH EDI                            ; 0053dcf2
    PUSH EBP                            ; 0053dcf3
    SUB ESP,0x750                       ; 0053dcf4
    MOV EDI,dword ptr [ESP + 0x764]     ; 0053dcfa
    XOR EBP,EBP                         ; 0053dd01
    MOV EAX,ESP                         ; 0053dd03
        ;   Label: LAB_0053dd03
    PUSH EAX                            ; 0053dd05
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053dd06
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0053dd0b
    PUSH 0x63cd76                       ; 0053dd0e | = "Hide actors using list."
    LEA EAX,[ESP + 0x4]                 ; 0053dd13
    PUSH EAX                            ; 0053dd17
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053dd18
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053dd1d
    PUSH 0x63cd8e                       ; 0053dd20 | = "Hide actors using wildcard"
    LEA EAX,[ESP + 0x4]                 ; 0053dd25
    PUSH EAX                            ; 0053dd29
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053dd2a
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053dd2f
    PUSH 0x63cda9                       ; 0053dd32 | = "Hide actors by type"
    LEA EAX,[ESP + 0x4]                 ; 0053dd37
    PUSH EAX                            ; 0053dd3b
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053dd3c
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053dd41
    PUSH 0x0                            ; 0053dd44
    PUSH EBP                            ; 0053dd46
    PUSH 0x63cdbd                       ; 0053dd47 | = "Hide actors"
    LEA EAX,[ESP + 0xc]                 ; 0053dd4c
    PUSH EAX                            ; 0053dd50
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053dd51
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0053dd56
    MOV EBP,EAX                         ; 0053dd59
    TEST EAX,EAX                        ; 0053dd5b
    JL 0x0053df73                       ; 0053dd5d
        ;   XREF to: 0053df73 (CONDITIONAL_JUMP)  ; LAB_0053df73
    JNZ 0x0053de58                      ; 0053dd63
        ;   XREF to: 0053de58 (CONDITIONAL_JUMP)  ; LAB_0053de58
    LEA EAX,[ESP + 0x3a8]               ; 0053dd69
    PUSH EAX                            ; 0053dd70
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053dd71
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV EBX,dword ptr [EDI + 0x548]     ; 0053dd76
    ADD ESP,0x4                         ; 0053dd7c
    TEST EBX,EBX                        ; 0053dd7f
    JZ 0x0053dd9a                       ; 0053dd81
        ;   XREF to: 0053dd9a (CONDITIONAL_JUMP)  ; LAB_0053dd9a
    CMP dword ptr [EBX + 0x148],0x0     ; 0053dd83
        ;   Label: LAB_0053dd83
    JZ 0x0053de0c                       ; 0053dd8a
        ;   XREF to: 0053de0c (CONDITIONAL_JUMP)  ; LAB_0053de0c
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0053dd90
        ;   Label: LAB_0053dd90
    TEST EBX,EBX                        ; 0053dd96
    JNZ 0x0053dd83                      ; 0053dd98
        ;   XREF to: 0053dd83 (CONDITIONAL_JUMP)  ; LAB_0053dd83
    LEA EAX,[ESP + 0x3a8]               ; 0053dd9a
        ;   Label: LAB_0053dd9a
    PUSH EAX                            ; 0053dda1
    XOR EBX,EBX                         ; 0053dda2
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0053dda4
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0053dda9
    PUSH 0x0                            ; 0053ddac
        ;   Label: LAB_0053ddac
    PUSH EBX                            ; 0053ddae
    PUSH 0x63cdc9                       ; 0053ddaf | = "Hide actors.  Press ESC When done."
    LEA EAX,[ESP + 0x3b4]               ; 0053ddb4
    PUSH EAX                            ; 0053ddbb
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053ddbc
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0053ddc1
    MOV EBX,EAX                         ; 0053ddc4
    TEST EAX,EAX                        ; 0053ddc6
    JL 0x0053de46                       ; 0053ddc8
        ;   XREF to: 0053de46 (CONDITIONAL_JUMP)  ; LAB_0053de46
    PUSH EAX                            ; 0053ddce
    LEA EAX,[ESP + 0x3ac]               ; 0053ddcf
    PUSH EAX                            ; 0053ddd6
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053ddd7
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053dddc
    PUSH EAX                            ; 0053dddf
    PUSH EDI                            ; 0053dde0
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 0053dde1
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0053dde6
    MOV ESI,EAX                         ; 0053dde9
    TEST EAX,EAX                        ; 0053ddeb
    JZ 0x0053de22                       ; 0053dded
        ;   XREF to: 0053de22 (CONDITIONAL_JUMP)  ; LAB_0053de22
    PUSH EBX                            ; 0053ddef
        ;   Label: LAB_0053ddef
    LEA EAX,[ESP + 0x3ac]               ; 0053ddf0
    PUSH EAX                            ; 0053ddf7
    MOV dword ptr [ESI + 0x148],0x1     ; 0053ddf8
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 0053de02
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053de07
    JMP 0x0053ddac                      ; 0053de0a
        ;   XREF to: 0053ddac (UNCONDITIONAL_JUMP)  ; LAB_0053ddac
    PUSH EBX                            ; 0053de0c
        ;   Label: LAB_0053de0c
    LEA EAX,[ESP + 0x3ac]               ; 0053de0d
    PUSH EAX                            ; 0053de14
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053de15
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053de1a
    JMP 0x0053dd90                      ; 0053de1d
        ;   XREF to: 0053dd90 (UNCONDITIONAL_JUMP)  ; LAB_0053dd90
    MOV ECX,0x63cdec                    ; 0053de22 | = "..\\core\\msnedit.cpp"
        ;   Label: LAB_0053de22
    MOV EAX,0xdd9                       ; 0053de27
    PUSH 0x63ce00                       ; 0053de2c | = "Hell froze."
    MOV dword ptr [0x02f0ca48],ECX      ; 0053de31 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0053de37 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053de3c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0053de41
    JMP 0x0053ddef                      ; 0053de44
        ;   XREF to: 0053ddef (UNCONDITIONAL_JUMP)  ; LAB_0053ddef
    PUSH 0x0                            ; 0053de46
        ;   Label: LAB_0053de46
    LEA EAX,[ESP + 0x3ac]               ; 0053de48
    PUSH EAX                            ; 0053de4f
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053de50
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053de55
    CMP EBP,0x1                         ; 0053de58
        ;   Label: LAB_0053de58
    JNZ 0x0053deb2                      ; 0053de5b
        ;   XREF to: 0053deb2 (CONDITIONAL_JUMP)  ; LAB_0053deb2
    PUSH EBP                            ; 0053de5d
    PUSH 0x64                           ; 0053de5e
    PUSH 0x680660                       ; 0053de60 | g_HideActorsWildcardBuffer
    PUSH 0x63ce0c                       ; 0053de65 | = "Hide actors by name using wildcard"
    MOV EDX,dword ptr [0x00678a60]      ; 0053de6a | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0053de70 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0053de71
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0053de76
    TEST EAX,EAX                        ; 0053de79
    JZ 0x0053deb2                       ; 0053de7b
        ;   XREF to: 0053deb2 (CONDITIONAL_JUMP)  ; LAB_0053deb2
    MOV EBX,dword ptr [EDI + 0x548]     ; 0053de7d
    XOR ESI,ESI                         ; 0053de83
    TEST EBX,EBX                        ; 0053de85
    JZ 0x0053de9d                       ; 0053de87
        ;   XREF to: 0053de9d (CONDITIONAL_JUMP)  ; LAB_0053de9d
    MOV EAX,dword ptr [EBX + 0x148]     ; 0053de89
        ;   Label: LAB_0053de89
    TEST EAX,EAX                        ; 0053de8f
    JZ 0x0053decb                       ; 0053de91
        ;   XREF to: 0053decb (CONDITIONAL_JUMP)  ; LAB_0053decb
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0053de93
        ;   Label: LAB_0053de93
    TEST EBX,EBX                        ; 0053de99
    JNZ 0x0053de89                      ; 0053de9b
        ;   XREF to: 0053de89 (CONDITIONAL_JUMP)  ; LAB_0053de89
    PUSH ESI                            ; 0053de9d
        ;   Label: LAB_0053de9d
    PUSH 0x63ce2f                       ; 0053de9e | = "%d actors hidden"
    MOV ECX,dword ptr [0x00678a60]      ; 0053dea3 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0053dea9 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0053deaa
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053deaf
    CMP EBP,0x2                         ; 0053deb2
        ;   Label: LAB_0053deb2
    JZ 0x0053deeb                       ; 0053deb5
        ;   XREF to: 0053deeb (CONDITIONAL_JUMP)  ; LAB_0053deeb
    PUSH 0x0                            ; 0053deb7
        ;   Label: LAB_0053deb7
    LEA EAX,[ESP + 0x4]                 ; 0053deb9
    PUSH EAX                            ; 0053debd
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053debe
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053dec3
    JMP 0x0053dd03                      ; 0053dec6
        ;   XREF to: 0053dd03 (UNCONDITIONAL_JUMP)  ; LAB_0053dd03
    PUSH EAX                            ; 0053decb
        ;   Label: LAB_0053decb
    PUSH EBX                            ; 0053decc
    PUSH 0x680660                       ; 0053decd | g_HideActorsWildcardBuffer
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 0053ded2
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0053ded7
    TEST EAX,EAX                        ; 0053deda
    JZ 0x0053de93                       ; 0053dedc
        ;   XREF to: 0053de93 (CONDITIONAL_JUMP)  ; LAB_0053de93
    INC ESI                             ; 0053dede
    MOV dword ptr [EBX + 0x148],0x1     ; 0053dedf
    JMP 0x0053de93                      ; 0053dee9
        ;   XREF to: 0053de93 (UNCONDITIONAL_JUMP)  ; LAB_0053de93
    PUSH 0x1                            ; 0053deeb
        ;   Label: LAB_0053deeb
    PUSH 0x64                           ; 0053deed
    PUSH 0x6806c8                       ; 0053deef | g_MsnEditHideByTypeBuffer
    PUSH 0x63ce40                       ; 0053def4 | = "Hide actors by type"
    MOV EDX,dword ptr [0x00678a60]      ; 0053def9 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0053deff | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0053df00
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0053df05
    TEST EAX,EAX                        ; 0053df08
    JZ 0x0053deb7                       ; 0053df0a
        ;   XREF to: 0053deb7 (CONDITIONAL_JUMP)  ; LAB_0053deb7
    MOV EBX,dword ptr [EDI + 0x548]     ; 0053df0c
    XOR ESI,ESI                         ; 0053df12
    TEST EBX,EBX                        ; 0053df14
    JZ 0x0053df2b                       ; 0053df16
        ;   XREF to: 0053df2b (CONDITIONAL_JUMP)  ; LAB_0053df2b
    CMP dword ptr [EBX + 0x148],0x0     ; 0053df18
        ;   Label: LAB_0053df18
    JZ 0x0053df54                       ; 0053df1f
        ;   XREF to: 0053df54 (CONDITIONAL_JUMP)  ; LAB_0053df54
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0053df21
        ;   Label: LAB_0053df21
    TEST EBX,EBX                        ; 0053df27
    JNZ 0x0053df18                      ; 0053df29
        ;   XREF to: 0053df18 (CONDITIONAL_JUMP)  ; LAB_0053df18
    PUSH ESI                            ; 0053df2b
        ;   Label: LAB_0053df2b
    PUSH 0x63ce54                       ; 0053df2c | = "%d actors hidden"
    MOV ECX,dword ptr [0x00678a60]      ; 0053df31 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0053df37 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0053df38
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053df3d
    PUSH 0x0                            ; 0053df40
    LEA EAX,[ESP + 0x4]                 ; 0053df42
    PUSH EAX                            ; 0053df46
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053df47
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053df4c
    JMP 0x0053dd03                      ; 0053df4f
        ;   XREF to: 0053dd03 (UNCONDITIONAL_JUMP)  ; LAB_0053dd03
    PUSH 0x6806c8                       ; 0053df54 | g_MsnEditHideByTypeBuffer
        ;   Label: LAB_0053df54
    PUSH EBX                            ; 0053df59
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0053df5a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0053df5f
    TEST EAX,EAX                        ; 0053df62
    JZ 0x0053df21                       ; 0053df64
        ;   XREF to: 0053df21 (CONDITIONAL_JUMP)  ; LAB_0053df21
    INC ESI                             ; 0053df66
    MOV dword ptr [EBX + 0x148],0x1     ; 0053df67
    JMP 0x0053df21                      ; 0053df71
        ;   XREF to: 0053df21 (UNCONDITIONAL_JUMP)  ; LAB_0053df21
    PUSH 0x0                            ; 0053df73
        ;   Label: LAB_0053df73
    LEA EAX,[ESP + 0x4]                 ; 0053df75
    PUSH EAX                            ; 0053df79
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053df7a
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053df7f
    ADD ESP,0x750                       ; 0053df82
    POP EBP                             ; 0053df88
    POP EDI                             ; 0053df89
    POP ESI                             ; 0053df8a
    POP EBX                             ; 0053df8b
    RET                                 ; 0053df8c

