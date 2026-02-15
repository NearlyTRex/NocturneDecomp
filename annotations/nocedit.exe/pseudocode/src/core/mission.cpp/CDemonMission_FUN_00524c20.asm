; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_FUN_00524c20(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3b4]:4  local_3b4
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_load_FUN_00522d90 at 00522dfa
;
; Referenced Globals:
;   TerminatedCString s_CHero_006394d8
;   TerminatedCString s_Warning_mission_has_no_h_006394de
;   TerminatedCString s_Mission_has_no_hero_plac_00639517
;   TerminatedCString s_core_mission_cpp_006395d9
;   TerminatedCString s_Hell_froze_finding_hero_006395ed
;   TerminatedCString s_core_mission_cpp_00639606
;   TerminatedCString s_Replaced_hero_OK_You_wil_0063961a
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   undefined4 g_CHeroPlaceholderClassInfo.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_hero.cpp_CHeroPlaceholder_ctor_FUN_004f3c00
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
;   core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
;   core_mission.cpp_CDemonMission_removeActor_FUN_00523f20
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524c20
        ;   Label: core_mission.cpp_CDemonMission_FUN_00524c20
    PUSH EDI                            ; 00524c21
    PUSH EBP                            ; 00524c22
    SUB ESP,0x3a8                       ; 00524c23
    MOV EDI,dword ptr [ESP + 0x3b8]     ; 00524c29
    MOV EAX,ESP                         ; 00524c30
    PUSH EAX                            ; 00524c32
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00524c33
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV EBX,dword ptr [EDI + 0x548]     ; 00524c38
    ADD ESP,0x4                         ; 00524c3e
    TEST EBX,EBX                        ; 00524c41
    JZ 0x00524c87                       ; 00524c43
        ;   XREF to: 00524c87 (CONDITIONAL_JUMP)  ; LAB_00524c87
    PUSH 0x6394d8                       ; 00524c45 | = "CHero"
        ;   Label: LAB_00524c45
    PUSH EBX                            ; 00524c4a
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00524c4b
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00524c50
    TEST EAX,EAX                        ; 00524c53
    JZ 0x00524c65                       ; 00524c55
        ;   XREF to: 00524c65 (CONDITIONAL_JUMP)  ; LAB_00524c65
    PUSH EBX                            ; 00524c57
    LEA EAX,[ESP + 0x4]                 ; 00524c58
    PUSH EAX                            ; 00524c5c
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00524c5d
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00524c62
    MOV EBP,dword ptr [0x02db8848]      ; 00524c65 | g_CHeroPlaceholderClassInfo.name_hash
        ;   Label: LAB_00524c65
    PUSH EBP                            ; 00524c6b
    PUSH EBX                            ; 00524c6c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00524c6d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00524c72
    TEST EAX,EAX                        ; 00524c75
    JNZ 0x00524da5                      ; 00524c77
        ;   XREF to: 00524da5 (CONDITIONAL_JUMP)  ; LAB_00524da5
    MOV EBX,dword ptr [EBX + 0x14c]     ; 00524c7d
        ;   Label: LAB_00524c7d
    TEST EBX,EBX                        ; 00524c83
    JNZ 0x00524c45                      ; 00524c85
        ;   XREF to: 00524c45 (CONDITIONAL_JUMP)  ; LAB_00524c45
    CMP dword ptr [ESP],0x1             ; 00524c87
        ;   Label: LAB_00524c87
    JL 0x00524dcb                       ; 00524c8b
        ;   XREF to: 00524dcb (CONDITIONAL_JUMP)  ; LAB_00524dcb
    PUSH 0x0                            ; 00524c91
    PUSH -0x1                           ; 00524c93
    PUSH 0x639517                       ; 00524c95 | = "Mission has no hero placeholders.\n\n..."
    LEA EAX,[ESP + 0xc]                 ; 00524c9a
    PUSH EAX                            ; 00524c9e
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00524c9f
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00524ca4
    TEST EAX,EAX                        ; 00524ca7
    JL 0x00524ddf                       ; 00524ca9
        ;   XREF to: 00524ddf (CONDITIONAL_JUMP)  ; LAB_00524ddf
    PUSH ESI                            ; 00524caf
    PUSH EAX                            ; 00524cb0
    LEA EAX,[ESP + 0x8]                 ; 00524cb1
    PUSH EAX                            ; 00524cb5
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00524cb6
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00524cbb
    PUSH EAX                            ; 00524cbe
    PUSH EDI                            ; 00524cbf
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 00524cc0
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 00524cc5
    MOV ESI,EAX                         ; 00524cc8
    TEST EAX,EAX                        ; 00524cca
    JNZ 0x00524cf1                      ; 00524ccc
        ;   XREF to: 00524cf1 (CONDITIONAL_JUMP)  ; LAB_00524cf1
    MOV ECX,0x6395d9                    ; 00524cce | = "..\\core\\mission.cpp"
    MOV EBX,0x685                       ; 00524cd3
    PUSH 0x6395ed                       ; 00524cd8 | = "Hell froze finding hero."
    MOV dword ptr [0x02f0ca48],ECX      ; 00524cdd | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00524ce3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00524ce9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00524cee
    PUSH 0x689                          ; 00524cf1
        ;   Label: LAB_00524cf1
    PUSH 0x639606                       ; 00524cf6 | = "..\\core\\mission.cpp"
    PUSH 0x15c                          ; 00524cfb
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00524d00
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00524d05
    TEST EAX,EAX                        ; 00524d08
    JZ 0x00524d15                       ; 00524d0a
        ;   XREF to: 00524d15 (CONDITIONAL_JUMP)  ; LAB_00524d15
    PUSH EAX                            ; 00524d0c
    CALL core_hero.cpp_CHeroPlaceholder_ctor_FUN_004f3c00 ; 00524d0d
        ;   XREF to: 004f3c00 (UNCONDITIONAL_CALL)  ; CHeroPlaceholder * core_hero.cpp_CHeroPlaceholder_ctor_FUN_004f3c00(CHeroPlaceholder * this_ptr)
    ADD ESP,0x4                         ; 00524d12
    MOV EBP,EAX                         ; 00524d15
        ;   Label: LAB_00524d15
    LEA EDX,[ESI + 0x20]                ; 00524d17
    MOV dword ptr [EAX + 0x158],0x0     ; 00524d1a
    LEA EBX,[EAX + 0x20]                ; 00524d24
    MOV ECX,dword ptr [EDX]             ; 00524d27
    MOV dword ptr [EBX],ECX             ; 00524d29
    MOV ECX,dword ptr [EDX + 0x4]       ; 00524d2b
    MOV dword ptr [EBX + 0x4],ECX       ; 00524d2e
    MOV ECX,dword ptr [EDX + 0x8]       ; 00524d31
    MOV dword ptr [EBX + 0x8],ECX       ; 00524d34
    MOV EDX,dword ptr [EDX + 0xc]       ; 00524d37
    ADD EAX,0x30                        ; 00524d3a
    MOV dword ptr [EBX + 0xc],EDX       ; 00524d3d
    LEA EBX,[ESI + 0x30]                ; 00524d40
    CMP EAX,EBX                         ; 00524d43
    JZ 0x00524d57                       ; 00524d45
        ;   XREF to: 00524d57 (CONDITIONAL_JUMP)  ; LAB_00524d57
    MOV EDX,dword ptr [EBX]             ; 00524d47
    MOV dword ptr [EAX],EDX             ; 00524d49
    MOV EDX,dword ptr [EBX + 0x4]       ; 00524d4b
    MOV dword ptr [EAX + 0x4],EDX       ; 00524d4e
    MOV EDX,dword ptr [EBX + 0x8]       ; 00524d51
    MOV dword ptr [EAX + 0x8],EDX       ; 00524d54
    PUSH EBP                            ; 00524d57
        ;   Label: LAB_00524d57
    PUSH EDI                            ; 00524d58
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 00524d59
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00524d5e
    PUSH 0x1                            ; 00524d61
    PUSH ESI                            ; 00524d63
    PUSH EDI                            ; 00524d64
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_00523f20 ; 00524d65
        ;   XREF to: 00523f20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_00523f20(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    ADD ESP,0xc                         ; 00524d6a
    PUSH EBP                            ; 00524d6d
    PUSH EDI                            ; 00524d6e
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70 ; 00524d6f
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00524d74
    PUSH 0x63961a                       ; 00524d77 | = "Replaced hero OK.  You will need to s..."
    MOV ESI,dword ptr [0x00678a60]      ; 00524d7c | g_CEditorToolsPtr
    PUSH ESI                            ; 00524d82 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00524d83
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00524d88
    PUSH 0x0                            ; 00524d8b
    LEA EAX,[ESP + 0x8]                 ; 00524d8d
    PUSH EAX                            ; 00524d91
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00524d92
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00524d97
    POP ESI                             ; 00524d9a
    ADD ESP,0x3a8                       ; 00524d9b
    POP EBP                             ; 00524da1
    POP EDI                             ; 00524da2
    POP EBX                             ; 00524da3
    RET                                 ; 00524da4
    MOV EDX,dword ptr [EAX + 0x158]     ; 00524da5
        ;   Label: LAB_00524da5
    TEST EDX,EDX                        ; 00524dab
    JNZ 0x00524c7d                      ; 00524dad
        ;   XREF to: 00524c7d (CONDITIONAL_JUMP)  ; LAB_00524c7d
    PUSH EDX                            ; 00524db3
    LEA EAX,[ESP + 0x4]                 ; 00524db4
    PUSH EAX                            ; 00524db8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00524db9
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00524dbe
    ADD ESP,0x3a8                       ; 00524dc1
    POP EBP                             ; 00524dc7
    POP EDI                             ; 00524dc8
    POP EBX                             ; 00524dc9
    RET                                 ; 00524dca
    PUSH 0x6394de                       ; 00524dcb | = "Warning: mission has no hero placehol..."
        ;   Label: LAB_00524dcb
    MOV EDI,dword ptr [0x00678a60]      ; 00524dd0 | g_CEditorToolsPtr
    PUSH EDI                            ; 00524dd6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00524dd7
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00524ddc
    PUSH 0x0                            ; 00524ddf
        ;   Label: LAB_00524ddf
    LEA EAX,[ESP + 0x4]                 ; 00524de1
    PUSH EAX                            ; 00524de5
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00524de6
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00524deb
    ADD ESP,0x3a8                       ; 00524dee
    POP EBP                             ; 00524df4
    POP EDI                             ; 00524df5
    POP EBX                             ; 00524df6
    RET                                 ; 00524df7

