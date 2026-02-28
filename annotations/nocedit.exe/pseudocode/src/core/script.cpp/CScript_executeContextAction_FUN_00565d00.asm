; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_executeContextAction_FUN_00565d00(CScript *this_ptr,int column,int line)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   line
;
; XREF[1]:
;   core_script.cpp_CScript_processEditorInput_FUN_00565130 at 00565684
;
; Referenced Globals:
;   void* switchdataD_00565c70 = 00565d10
;   TerminatedCString s_No_such_actor_s_00643e99
;   TerminatedCString s_No_such_label_s_00643eaa
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   char*[141] g_CommandTemplates
;   CEditorTools g_CEditorToolsInstance
;   CDemonMission g_CDemonMissionInstance
;   CCmdParse CCmdParse_0310aa4c
;   undefined4 DAT_0310ab1c
;   undefined4 DAT_0310ad74
;   int g_CurrentEditingColumn
;   int g_CurrentEditingLine
;
; Called Functions:
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
;   core_msnedit.cpp_CDemonMission_playSound_FUN_0053eb40
;   core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140
;   core_script.cpp_CCmdParse_bestParse_FUN_00561db0
;   core_script.cpp_clearSelections_FUN_005644e0
;   core_script.cpp_CScript_buildParsedLines_FUN_0055a370
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90
;   core_script.cpp_CScript_findLabelIndex_FUN_00560160
;   core_script.cpp_CScript_updateCursorBounds_FUN_00566910
;   core_script.cpp_CScript_updateScrollPosition_FUN_005669a0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565d00
        ;   Label: core_script.cpp_CScript_executeContextAction_FUN_00565d00
    PUSH ESI                            ; 00565d01
    PUSH EDI                            ; 00565d02
    PUSH EBP                            ; 00565d03
    MOV EBX,dword ptr [ESP + 0x14]      ; 00565d04
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00565d08
    TEST EDI,EDI                        ; 00565d0c
    JGE 0x00565d15                      ; 00565d0e
        ;   XREF to: 00565d15 (CONDITIONAL_JUMP)  ; LAB_00565d15
    POP EBP                             ; 00565d10
        ;   Label: caseD_20
    POP EDI                             ; 00565d11
    POP ESI                             ; 00565d12
    POP EBX                             ; 00565d13
    RET                                 ; 00565d14
    LEA ESI,[EBX + 0x38]                ; 00565d15
        ;   Label: LAB_00565d15
    PUSH ESI                            ; 00565d18
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00565d19
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00565d1e
    CMP EDI,EAX                         ; 00565d21
    JGE 0x00565d10                      ; 00565d23
        ;   XREF to: 00565d10 (CONDITIONAL_JUMP)  ; caseD_f
    MOV EDX,dword ptr [ESP + 0x18]      ; 00565d25
    PUSH EDX                            ; 00565d29
    PUSH EDI                            ; 00565d2a
    PUSH EBX                            ; 00565d2b
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00565d2c
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    ADD ESP,0xc                         ; 00565d31
    PUSH 0x78                           ; 00565d34
    PUSH 0x680e28                       ; 00565d36 | g_CommandTemplates
    PUSH EAX                            ; 00565d3b
    PUSH EDI                            ; 00565d3c
    PUSH ESI                            ; 00565d3d
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00565d3e
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00565d43
    PUSH EAX                            ; 00565d46
    PUSH 0x310aa4c                      ; 00565d47 | CCmdParse_0310aa4c
    CALL core_script.cpp_CCmdParse_bestParse_FUN_00561db0 ; 00565d4c
        ;   XREF to: 00561db0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CCmdParse_bestParse_FUN_00561db0(CCmdParse * this_ptr, char * input_text, int cursor_position, char * * templates, ...)
    ADD ESP,0x14                        ; 00565d51
    MOV ESI,EAX                         ; 00565d54
    TEST EAX,EAX                        ; 00565d56
    JL 0x00565d10                       ; 00565d58
        ;   XREF to: 00565d10 (CONDITIONAL_JUMP)  ; caseD_f
    IMUL EAX,EAX,0x328                  ; 00565d5a
    MOV EAX,dword ptr [EAX + 0x310ad74] ; 00565d60 | DAT_0310ad74
    CMP EAX,0x20                        ; 00565d66
    JA 0x00565d10                       ; 00565d69
        ;   XREF to: 00565d10 (CONDITIONAL_JUMP)  ; caseD_f
    JMP dword ptr [EAX*0x4 + 0x565c70]  ; 00565d6b | caseD_f | caseD_3 | caseD_5
        ;   Label: switchD
    IMUL EAX,ESI,0x328                  ; 00565d72
        ;   Label: caseD_3
    MOV EBX,0x310ab1c                   ; 00565d78 | DAT_0310ab1c
    ADD EAX,EBX                         ; 00565d7d
    ADD EAX,0x64                        ; 00565d7f
    PUSH EAX                            ; 00565d82
    MOV EBP,dword ptr [0x0067d550]      ; 00565d83 | g_CDemonMissionPtr
    PUSH EBP                            ; 00565d89 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 00565d8a
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 00565d8f
    TEST EAX,EAX                        ; 00565d92
    JNZ 0x00565dbc                      ; 00565d94
        ;   XREF to: 00565dbc (CONDITIONAL_JUMP)  ; LAB_00565dbc
    IMUL ESI,ESI,0x328                  ; 00565d96
    ADD ESI,EBX                         ; 00565d9c
    ADD ESI,0x64                        ; 00565d9e
    PUSH ESI                            ; 00565da1
    MOV EAX,0x643e99                    ; 00565da2 | = "No such actor %s"
    PUSH EAX                            ; 00565da7 | = "No such actor %s"
    MOV EDX,dword ptr [0x00678a60]      ; 00565da8 | g_CEditorToolsPtr
    PUSH EDX                            ; 00565dae | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00565daf
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00565db4
    POP EBP                             ; 00565db7
    POP EDI                             ; 00565db8
    POP ESI                             ; 00565db9
    POP EBX                             ; 00565dba
    RET                                 ; 00565dbb
    PUSH EAX                            ; 00565dbc
        ;   Label: LAB_00565dbc
    MOV EAX,[0x0067d550]                ; 00565dbd | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EAX                            ; 00565dc2 | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140 ; 00565dc3
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00565dc8
    POP EBP                             ; 00565dcb
    POP EDI                             ; 00565dcc
    POP ESI                             ; 00565dcd
    POP EBX                             ; 00565dce
    RET                                 ; 00565dcf
    PUSH EBX                            ; 00565dd0
        ;   Label: caseD_5
    CALL core_script.cpp_CScript_buildParsedLines_FUN_0055a370 ; 00565dd1
        ;   XREF to: 0055a370 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_buildParsedLines_FUN_0055a370(CScript * this_ptr)
    IMUL EAX,ESI,0x328                  ; 00565dd6
    MOV EDI,0x310ab1c                   ; 00565ddc | DAT_0310ab1c
    ADD EAX,EDI                         ; 00565de1
    ADD ESP,0x4                         ; 00565de3
    ADD EAX,0x64                        ; 00565de6
    PUSH EAX                            ; 00565de9
    PUSH EBX                            ; 00565dea
    CALL core_script.cpp_CScript_findLabelIndex_FUN_00560160 ; 00565deb
        ;   XREF to: 00560160 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_00560160(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 00565df0
    TEST EAX,EAX                        ; 00565df3
    JL 0x00565e27                       ; 00565df5
        ;   XREF to: 00565e27 (CONDITIONAL_JUMP)  ; LAB_00565e27
    MOV ESI,dword ptr [EBX + 0x34]      ; 00565df7
    MOV EAX,dword ptr [ESI + EAX*0x8]   ; 00565dfa
    DEC EAX                             ; 00565dfd
    XOR ESI,ESI                         ; 00565dfe
    MOV [0x0310fd48],EAX                ; 00565e00 | g_CurrentEditingLine
    MOV dword ptr [0x0310fd44],ESI      ; 00565e05 | g_CurrentEditingColumn
    CALL core_script.cpp_clearSelections_FUN_005644e0 ; 00565e0b
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_clearSelections_FUN_005644e0()
    PUSH EBX                            ; 00565e10
    CALL core_script.cpp_CScript_updateCursorBounds_FUN_00566910 ; 00565e11
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateCursorBounds_FUN_00566910(CScript * this_ptr)
    ADD ESP,0x4                         ; 00565e16
    PUSH EBX                            ; 00565e19
    CALL core_script.cpp_CScript_updateScrollPosition_FUN_005669a0 ; 00565e1a
        ;   XREF to: 005669a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateScrollPosition_FUN_005669a0(CScript * this_ptr)
    ADD ESP,0x4                         ; 00565e1f
    POP EBP                             ; 00565e22
    POP EDI                             ; 00565e23
    POP ESI                             ; 00565e24
    POP EBX                             ; 00565e25
    RET                                 ; 00565e26
    IMUL ESI,ESI,0x328                  ; 00565e27
        ;   Label: LAB_00565e27
    LEA EAX,[EDI + ESI*0x1 + 0x64]      ; 00565e2d
    PUSH EAX                            ; 00565e31
    MOV EAX,0x643eaa                    ; 00565e32 | = "No such label %s"
    PUSH EAX                            ; 00565e37 | = "No such label %s"
    MOV EDI,dword ptr [0x00678a60]      ; 00565e38 | g_CEditorToolsPtr
    PUSH EDI                            ; 00565e3e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00565e3f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00565e44
    POP EBP                             ; 00565e47
    POP EDI                             ; 00565e48
    POP ESI                             ; 00565e49
    POP EBX                             ; 00565e4a
    RET                                 ; 00565e4b
    IMUL ESI,ESI,0x328                  ; 00565e4c
        ;   Label: caseD_19
    ADD ESI,0x310ab1c                   ; 00565e52 | DAT_0310ab1c
    ADD ESI,0x64                        ; 00565e58
    PUSH ESI                            ; 00565e5b
    MOV ECX,dword ptr [0x0067d550]      ; 00565e5c | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 00565e62 | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_playSound_FUN_0053eb40 ; 00565e63
        ;   XREF to: 0053eb40 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_playSound_FUN_0053eb40(CDemonMission * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00565e68
    POP EBP                             ; 00565e6b
    POP EDI                             ; 00565e6c
    POP ESI                             ; 00565e6d
    POP EBX                             ; 00565e6e
    RET                                 ; 00565e6f

