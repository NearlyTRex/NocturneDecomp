; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_checkSyntax_FUN_00566080(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053aa39
;
; Referenced Globals:
;   TerminatedCString s_d_sound_files_missing_00643f0e
;   TerminatedCString s_The_following_sound_file_00643f26
;   TerminatedCString s_Syntax_check_OK_00643f4d
;   undefined4 s_yntax_check_OK._00643f4e
;   undefined4 s_ntax_check_OK._00643f4f
;   undefined4 s_tax_check_OK._00643f50
;   CPickList g_ScriptPickList
;   int g_CurrentEditingColumn
;   int g_CurrentEditingLine
;   char[1023] g_ScriptEditorStatusText
;   undefined4 g_ScriptEditorStatusText+1
;   undefined4 g_ScriptEditorStatusText+2
;   undefined4 g_ScriptEditorStatusText+3
;
; Called Functions:
;   core_script.cpp_clearSelections_FUN_005644e0
;   core_script.cpp_CScript_buildParsedLines_FUN_0055a370
;   core_script.cpp_CScript_updateCursorBounds_FUN_00566910
;   core_script.cpp_CScript_updateScrollPosition_FUN_005669a0
;   core_script.cpp_CScript_validateSyntax_FUN_0055a4b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CPickList_clear_FUN_004a5770
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566080
        ;   Label: core_script.cpp_CScript_checkSyntax_FUN_00566080
    PUSH ESI                            ; 00566081
    PUSH EDI                            ; 00566082
    SUB ESP,0x4                         ; 00566083
    MOV EBX,dword ptr [ESP + 0x14]      ; 00566086
    PUSH EBX                            ; 0056608a
    CALL core_script.cpp_CScript_buildParsedLines_FUN_0055a370 ; 0056608b
        ;   XREF to: 0055a370 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_buildParsedLines_FUN_0055a370(CScript * this_ptr)
    ADD ESP,0x4                         ; 00566090
    MOV EAX,ESP                         ; 00566093
    PUSH EAX                            ; 00566095
    PUSH EBX                            ; 00566096
    CALL core_script.cpp_CScript_validateSyntax_FUN_0055a4b0 ; 00566097
        ;   XREF to: 0055a4b0 (UNCONDITIONAL_CALL)  ; int * core_script.cpp_CScript_validateSyntax_FUN_0055a4b0(CScript * this_ptr, int * error_line_out)
    MOV ESI,EAX                         ; 0056609c
    ADD ESP,0x8                         ; 0056609e
    TEST EAX,EAX                        ; 005660a1
    JNZ 0x0056612e                      ; 005660a3
        ;   XREF to: 0056612e (CONDITIONAL_JUMP)  ; LAB_0056612e
    PUSH 0x310f4b0                      ; 005660a9 | g_ScriptPickList
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 005660ae
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 005660b3
    TEST EAX,EAX                        ; 005660b6
    JLE 0x00566103                      ; 005660b8
        ;   XREF to: 00566103 (CONDITIONAL_JUMP)  ; LAB_00566103
    PUSH 0x310f4b0                      ; 005660ba | g_ScriptPickList
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 005660bf
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 005660c4
    PUSH EAX                            ; 005660c7
    PUSH 0x643f0e                       ; 005660c8 | = "%d sound files missing."
    PUSH 0x310fdc0                      ; 005660cd | g_ScriptEditorStatusText
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005660d2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005660d7
    PUSH ESI                            ; 005660da
    PUSH -0x1                           ; 005660db
    PUSH 0x643f26                       ; 005660dd | = "The following sound files are missing."
    PUSH 0x310f4b0                      ; 005660e2 | g_ScriptPickList
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005660e7
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 005660ec
    PUSH 0x310f4b0                      ; 005660ef | g_ScriptPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 005660f4
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005660f9
    ADD ESP,0x4                         ; 005660fc
    POP EDI                             ; 005660ff
    POP ESI                             ; 00566100
    POP EBX                             ; 00566101
    RET                                 ; 00566102
    MOV ESI,0x643f4d                    ; 00566103 | = "Syntax check OK."
        ;   Label: LAB_00566103
    MOV EDI,0x310fdc0                   ; 00566108 | g_ScriptEditorStatusText
    PUSH EDI                            ; 0056610d | g_ScriptEditorStatusText
    MOV AL,byte ptr [ESI]               ; 0056610e | = "Syntax check OK." | s_ntax_check_OK._00643f4f
        ;   Label: LAB_0056610e
    MOV byte ptr [EDI],AL               ; 00566110 | g_ScriptEditorStatusText | g_ScriptEditorStatusText+2
    CMP AL,0x0                          ; 00566112
    JZ 0x00566126                       ; 00566114
        ;   XREF to: 00566126 (CONDITIONAL_JUMP)  ; LAB_00566126
    MOV AL,byte ptr [ESI + 0x1]         ; 00566116 | s_yntax_check_OK._00643f4e | s_tax_check_OK._00643f50
    ADD ESI,0x2                         ; 00566119
    MOV byte ptr [EDI + 0x1],AL         ; 0056611c | g_ScriptEditorStatusText+1 | g_ScriptEditorStatusText+3
    ADD EDI,0x2                         ; 0056611f
    CMP AL,0x0                          ; 00566122
    JNZ 0x0056610e                      ; 00566124
        ;   XREF to: 0056610e (CONDITIONAL_JUMP)  ; LAB_0056610e
    POP EDI                             ; 00566126
        ;   Label: LAB_00566126
    ADD ESP,0x4                         ; 00566127
    POP EDI                             ; 0056612a
    POP ESI                             ; 0056612b
    POP EBX                             ; 0056612c
    RET                                 ; 0056612d
    CALL core_script.cpp_clearSelections_FUN_005644e0 ; 0056612e
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_clearSelections_FUN_005644e0()
        ;   Label: LAB_0056612e
    MOV EAX,dword ptr [ESP]             ; 00566133
    PUSH EBX                            ; 00566136
    XOR EDX,EDX                         ; 00566137
    MOV [0x0310fd48],EAX                ; 00566139 | g_CurrentEditingLine
    MOV dword ptr [0x0310fd44],EDX      ; 0056613e | g_CurrentEditingColumn
    CALL core_script.cpp_CScript_updateCursorBounds_FUN_00566910 ; 00566144
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateCursorBounds_FUN_00566910(CScript * this_ptr)
    ADD ESP,0x4                         ; 00566149
    PUSH EBX                            ; 0056614c
    CALL core_script.cpp_CScript_updateScrollPosition_FUN_005669a0 ; 0056614d
        ;   XREF to: 005669a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateScrollPosition_FUN_005669a0(CScript * this_ptr)
    ADD ESP,0x4                         ; 00566152
    MOV EDI,0x310fdc0                   ; 00566155 | g_ScriptEditorStatusText
    PUSH EDI                            ; 0056615a | g_ScriptEditorStatusText
    MOV AL,byte ptr [ESI]               ; 0056615b
        ;   Label: LAB_0056615b
    MOV byte ptr [EDI],AL               ; 0056615d | g_ScriptEditorStatusText | g_ScriptEditorStatusText+2
    CMP AL,0x0                          ; 0056615f
    JZ 0x00566173                       ; 00566161
        ;   XREF to: 00566173 (CONDITIONAL_JUMP)  ; LAB_00566173
    MOV AL,byte ptr [ESI + 0x1]         ; 00566163
    ADD ESI,0x2                         ; 00566166
    MOV byte ptr [EDI + 0x1],AL         ; 00566169 | g_ScriptEditorStatusText+1 | g_ScriptEditorStatusText+3
    ADD EDI,0x2                         ; 0056616c
    CMP AL,0x0                          ; 0056616f
    JNZ 0x0056615b                      ; 00566171
        ;   XREF to: 0056615b (CONDITIONAL_JUMP)  ; LAB_0056615b
    POP EDI                             ; 00566173
        ;   Label: LAB_00566173
    ADD ESP,0x4                         ; 00566174
    POP EDI                             ; 00566177
    POP ESI                             ; 00566178
    POP EBX                             ; 00566179
    RET                                 ; 0056617a

