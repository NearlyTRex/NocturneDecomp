; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_showSoundFilesInMission_FUN_0053ec80(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x5ac]:1  local_5ac
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538910
;
; Referenced Globals:
;   TerminatedCString s_Setting_up_actors_0063d07f
;   TerminatedCString s_Finding_sound_files_in_m_0063d094
;   TerminatedCString s_s_s_s_0063d0b6
;   TerminatedCString s_Finding_sound_files_in_s_0063d0bf
;   TerminatedCString s_Sound_files_used_0063d0e0
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CScript* g_CScriptPtr = 0310f858
;   CEditorTools g_CEditorToolsInstance
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_actor.cpp_CActorProperty_renderValue_FUN_0040ea50
;   core_actor.cpp_CActorPropertyList_init_FUN_0040e130
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0
;   core_script.cpp_CScript_collectSoundReferences_FUN_00567bc0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ec80
        ;   Label: core_msnedit.cpp_CDemonMission_showSoundFilesInMission_FUN_0053ec80
    PUSH ESI                            ; 0053ec81
    PUSH EDI                            ; 0053ec82
    PUSH EBP                            ; 0053ec83
    SUB ESP,0x2aa0                      ; 0053ec84
    MOV EDI,dword ptr [ESP + 0x2ab4]    ; 0053ec8a
    LEA EAX,[ESP + 0x2504]              ; 0053ec91
    PUSH EAX                            ; 0053ec98
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053ec99
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV EDX,dword ptr [EDI + 0x884]     ; 0053ec9e
    ADD ESP,0x4                         ; 0053eca4
    TEST EDX,EDX                        ; 0053eca7
    JNZ 0x0053ecc8                      ; 0053eca9
        ;   XREF to: 0053ecc8 (CONDITIONAL_JUMP)  ; LAB_0053ecc8
    PUSH 0x63d07f                       ; 0053ecab | = "Setting up actors..."
    MOV ECX,dword ptr [0x00678a60]      ; 0053ecb0 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0053ecb6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053ecb7
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053ecbc
    PUSH EDI                            ; 0053ecbf
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0 ; 0053ecc0
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053ecc5
    PUSH 0x63d094                       ; 0053ecc8 | = "Finding sound files in mission..."
        ;   Label: LAB_0053ecc8
    MOV EBX,dword ptr [0x00678a60]      ; 0053eccd | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0053ecd3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053ecd4
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    MOV EDI,dword ptr [EDI + 0x548]     ; 0053ecd9
    ADD ESP,0x8                         ; 0053ecdf
    TEST EDI,EDI                        ; 0053ece2
    JZ 0x0053ed8e                       ; 0053ece4
        ;   XREF to: 0053ed8e (CONDITIONAL_JUMP)  ; LAB_0053ed8e
    MOV EAX,ESP                         ; 0053ecea
        ;   Label: LAB_0053ecea
    PUSH EAX                            ; 0053ecec
    CALL core_actor.cpp_CActorPropertyList_init_FUN_0040e130 ; 0053eced
        ;   XREF to: 0040e130 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_init_FUN_0040e130(CActorPropertyList * this_ptr)
    ADD ESP,0x4                         ; 0053ecf2
    MOV EAX,ESP                         ; 0053ecf5
    PUSH EAX                            ; 0053ecf7
    MOV EBX,dword ptr [EDI + 0x154]     ; 0053ecf8
    PUSH EDI                            ; 0053ecfe
    CALL dword ptr [EBX + 0xd4]         ; 0053ecff
    ADD ESP,0x8                         ; 0053ed05
    MOV EBP,dword ptr [ESP + 0x4]       ; 0053ed08
    XOR ESI,ESI                         ; 0053ed0c
    TEST EBP,EBP                        ; 0053ed0e
    JLE 0x0053ed80                      ; 0053ed10
        ;   XREF to: 0053ed80 (CONDITIONAL_JUMP)  ; LAB_0053ed80
    LEA EBX,[ESP + 0x8]                 ; 0053ed12
    CMP dword ptr [EBX],0x8             ; 0053ed16
        ;   Label: LAB_0053ed16
    JNZ 0x0053ed71                      ; 0053ed19
        ;   XREF to: 0053ed71 (CONDITIONAL_JUMP)  ; LAB_0053ed71
    LEA EAX,[ESP + 0x29d8]              ; 0053ed1b
    PUSH EAX                            ; 0053ed22
    PUSH EDI                            ; 0053ed23
    PUSH EBX                            ; 0053ed24
    CALL core_actor.cpp_CActorProperty_renderValue_FUN_0040ea50 ; 0053ed25
        ;   XREF to: 0040ea50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorProperty_renderValue_FUN_0040ea50(CActorProperty * this_ptr, CDemonActor * actor, char * output_buffer)
    ADD ESP,0xc                         ; 0053ed2a
    CMP byte ptr [ESP + 0x29d8],0x0     ; 0053ed2d
    JZ 0x0053ed71                       ; 0053ed35
        ;   XREF to: 0053ed71 (CONDITIONAL_JUMP)  ; LAB_0053ed71
    LEA EAX,[EBX + 0x4]                 ; 0053ed37
    PUSH EAX                            ; 0053ed3a
    PUSH EDI                            ; 0053ed3b
    LEA EAX,[ESP + 0x29e0]              ; 0053ed3c
    PUSH EAX                            ; 0053ed43
    PUSH 0x63d0b6                       ; 0053ed44 | = "%s\t%s %s"
    LEA EAX,[ESP + 0x28bc]              ; 0053ed49
    PUSH EAX                            ; 0053ed50
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053ed51
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0053ed56
    LEA EAX,[ESP + 0x28ac]              ; 0053ed59
    PUSH EAX                            ; 0053ed60
    LEA EAX,[ESP + 0x2508]              ; 0053ed61
    PUSH EAX                            ; 0053ed68
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053ed69
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053ed6e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ed71
        ;   Label: LAB_0053ed71
    INC ESI                             ; 0053ed75
    ADD EBX,0xec                        ; 0053ed76
    CMP ESI,EAX                         ; 0053ed7c
    JL 0x0053ed16                       ; 0053ed7e
        ;   XREF to: 0053ed16 (CONDITIONAL_JUMP)  ; LAB_0053ed16
    MOV EDI,dword ptr [EDI + 0x14c]     ; 0053ed80
        ;   Label: LAB_0053ed80
    TEST EDI,EDI                        ; 0053ed86
    JNZ 0x0053ecea                      ; 0053ed88
        ;   XREF to: 0053ecea (CONDITIONAL_JUMP)  ; LAB_0053ecea
    PUSH 0x63d0bf                       ; 0053ed8e | = "Finding sound files in script..."
        ;   Label: LAB_0053ed8e
    MOV ECX,dword ptr [0x00678a60]      ; 0053ed93 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0053ed99 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053ed9a
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053ed9f
    LEA EAX,[ESP + 0x2504]              ; 0053eda2
    PUSH EAX                            ; 0053eda9
    MOV EBX,dword ptr [0x00680d50]      ; 0053edaa | g_CScriptInstance | g_CScriptPtr
    PUSH EBX                            ; 0053edb0 | g_CScriptInstance
    CALL core_script.cpp_CScript_collectSoundReferences_FUN_00567bc0 ; 0053edb1
        ;   XREF to: 00567bc0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_collectSoundReferences_FUN_00567bc0(CScript * this_ptr, CStrList * sounds_out)
    ADD ESP,0x8                         ; 0053edb6
    LEA EAX,[ESP + 0x2504]              ; 0053edb9
    PUSH EAX                            ; 0053edc0
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0053edc1
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0053edc6
    PUSH 0x0                            ; 0053edc9
    PUSH -0x1                           ; 0053edcb
    PUSH 0x63d0e0                       ; 0053edcd | = "Sound files used"
    LEA EAX,[ESP + 0x2510]              ; 0053edd2
    PUSH EAX                            ; 0053edd9
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053edda
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0053eddf
    PUSH 0x0                            ; 0053ede2
    LEA EAX,[ESP + 0x2508]              ; 0053ede4
    PUSH EAX                            ; 0053edeb
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053edec
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053edf1
    ADD ESP,0x2aa0                      ; 0053edf4
    POP EBP                             ; 0053edfa
    POP EDI                             ; 0053edfb
    POP ESI                             ; 0053edfc
    POP EBX                             ; 0053edfd
    RET                                 ; 0053edfe

