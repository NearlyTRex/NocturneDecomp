; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_005379e0()
;
; Local Variables:
; undefined1       Stack[-0x5b0]:1  local_5b0
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538820
;
; Referenced Globals:
;   TerminatedCString s_Randomize_all_enemies_wi_0063ba9d
;   TerminatedCString s_Randomize_enemy_speeds_f_0063bace
;   TerminatedCString s_Enemy_randomizer_0063bafb
;   TerminatedCString s_Enter_enemy_types_to_pro_0063bb0c
;   TerminatedCString s_Enter_actor_name_wildcar_0063bb29
;   TerminatedCString s_Enter_minimum_random_spe_0063bb43
;   TerminatedCString s_Enter_maximum_random_spe_0063bb5e
;   TerminatedCString s_Randomize_speed_for_spec_0063bb79
;   TerminatedCString s_Randomize_speed_for_all__0063bbb9
;   TerminatedCString s_Randomize_speeds_0063bbe3
;   TerminatedCString s_No_enemies_matched_crite_0063bbfd
;   TerminatedCString s_d_enemy_speeds_randomize_0063bc30
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   undefined4 DAT_006804b0
;   undefined4 DAT_006804b4
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005379e0
        ;   Label: core_msnedit.cpp_FUN_005379e0
    PUSH ESI                            ; 005379e1
    PUSH EDI                            ; 005379e2
    PUSH EBP                            ; 005379e3
    SUB ESP,0xcf0                       ; 005379e4
    MOV EBP,dword ptr [ESP + 0xd04]     ; 005379ea
    XOR EDI,EDI                         ; 005379f1
    LEA EAX,[ESP + 0x750]               ; 005379f3
        ;   Label: LAB_005379f3
    PUSH EAX                            ; 005379fa
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 005379fb | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00537a00
    PUSH 0x63ba9d                       ; 00537a03 | = "Randomize all enemies with randomizeM..." | s_Randomize_all_enemies_wi_0063ba9d = Randomize all enemies with randomizeMe flag set.
    LEA EAX,[ESP + 0x754]               ; 00537a08
    PUSH EAX                            ; 00537a0f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00537a10 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537a15
    PUSH 0x63bace                       ; 00537a18 | = "Randomize enemy speeds for specific e..." | s_Randomize_enemy_speeds_f_0063bace = Randomize enemy speeds for specific enemies.
    LEA EAX,[ESP + 0x754]               ; 00537a1d
    PUSH EAX                            ; 00537a24
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00537a25 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537a2a
    PUSH 0x0                            ; 00537a2d
    PUSH EDI                            ; 00537a2f
    PUSH 0x63bafb                       ; 00537a30 | = "Enemy randomizer" | s_Enemy_randomizer_0063bafb = Enemy randomizer
    LEA EAX,[ESP + 0x75c]               ; 00537a35
    PUSH EAX                            ; 00537a3c
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00537a3d | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00537a42
    MOV EDI,EAX                         ; 00537a45
    TEST EAX,EAX                        ; 00537a47
    JL 0x00537da5                       ; 00537a49 | LAB_00537da5
        ;   XREF to: 00537da5 (CONDITIONAL_JUMP)
    JNZ 0x00537aa0                      ; 00537a4f | LAB_00537aa0
        ;   XREF to: 00537aa0 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + 0x548]     ; 00537a51
    TEST ESI,ESI                        ; 00537a57
    JZ 0x00537aa0                       ; 00537a59 | LAB_00537aa0
        ;   XREF to: 00537aa0 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02cf2bf0]      ; 00537a5b | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_00537a5b
    PUSH EDX                            ; 00537a61
    PUSH ESI                            ; 00537a62
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00537a63 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 00537a68
    ADD ESP,0x8                         ; 00537a6a
    TEST EAX,EAX                        ; 00537a6d
    JZ 0x00537a96                       ; 00537a6f | LAB_00537a96
        ;   XREF to: 00537a96 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0xbe2c],0x0    ; 00537a71
    JZ 0x00537a96                       ; 00537a78 | LAB_00537a96
        ;   XREF to: 00537a96 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00537a7a
    MOV EAX,dword ptr [EAX + 0x154]     ; 00537a7b
    CALL dword ptr [EAX + 0x15c]        ; 00537a81
    ADD ESP,0x4                         ; 00537a87
    MOV EAX,dword ptr [EBX + 0x154]     ; 00537a8a
    PUSH EBX                            ; 00537a90
    CALL dword ptr [EAX]                ; 00537a91
    ADD ESP,0x4                         ; 00537a93
    MOV ESI,dword ptr [ESI + 0x14c]     ; 00537a96
        ;   Label: LAB_00537a96
    TEST ESI,ESI                        ; 00537a9c
    JNZ 0x00537a5b                      ; 00537a9e | LAB_00537a5b
        ;   XREF to: 00537a5b (CONDITIONAL_JUMP)
    CMP EDI,0x1                         ; 00537aa0
        ;   Label: LAB_00537aa0
    JZ 0x00537abc                       ; 00537aa3 | LAB_00537abc
        ;   XREF to: 00537abc (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00537aa5
        ;   Label: LAB_00537aa5
    LEA EAX,[ESP + 0x754]               ; 00537aa7
    PUSH EAX                            ; 00537aae
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537aaf | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537ab4
    JMP 0x005379f3                      ; 00537ab7 | LAB_005379f3
        ;   XREF to: 005379f3 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 00537abc
        ;   Label: LAB_00537abc
    PUSH 0xc8                           ; 00537abd
    PUSH 0x6804b8                       ; 00537ac2 | = "CEnemy" | s_CEnemy_006804b8 = CEnemy
    PUSH 0x63bb0c                       ; 00537ac7 | = "Enter enemy types to process" | s_Enter_enemy_types_to_pro_0063bb0c = Enter enemy types to process
    MOV EBX,dword ptr [0x00678a60]      ; 00537acc | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 00537ad2 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 00537ad3 | int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00537ad8
    TEST EAX,EAX                        ; 00537adb
    JNZ 0x00537af5                      ; 00537add | LAB_00537af5
        ;   XREF to: 00537af5 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00537adf
    LEA EAX,[ESP + 0x754]               ; 00537ae0
    PUSH EAX                            ; 00537ae7
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537ae8 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537aed
    JMP 0x005379f3                      ; 00537af0 | LAB_005379f3
        ;   XREF to: 005379f3 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 00537af5
        ;   Label: LAB_00537af5
    PUSH 0xc8                           ; 00537af6
    PUSH 0x680580                       ; 00537afb | DAT_00680580
    PUSH 0x63bb29                       ; 00537b00 | = "Enter actor name wildcard" | s_Enter_actor_name_wildcar_0063bb29 = Enter actor name wildcard
    MOV ESI,dword ptr [0x00678a60]      ; 00537b05 | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 00537b0b | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 00537b0c | int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00537b11
    TEST EAX,EAX                        ; 00537b14
    JNZ 0x00537b2e                      ; 00537b16 | LAB_00537b2e
        ;   XREF to: 00537b2e (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00537b18
    LEA EAX,[ESP + 0x754]               ; 00537b19
    PUSH EAX                            ; 00537b20
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537b21 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537b26
    JMP 0x005379f3                      ; 00537b29 | LAB_005379f3
        ;   XREF to: 005379f3 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 00537b2e
        ;   Label: LAB_00537b2e
    PUSH 0x42c80000                     ; 00537b2f
    PUSH 0x3c23d70a                     ; 00537b34
    PUSH EDI                            ; 00537b39
    PUSH 0x6804b0                       ; 00537b3a | undefined4 DAT_006804b0
    PUSH 0x63bb43                       ; 00537b3f | = "Enter minimum random speed" | s_Enter_minimum_random_spe_0063bb43 = Enter minimum random speed
    MOV EAX,[0x00678a60]                ; 00537b44 | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 00537b49 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 00537b4a | int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, ...)
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 00537b4f
    TEST EAX,EAX                        ; 00537b52
    JNZ 0x00537b6c                      ; 00537b54 | LAB_00537b6c
        ;   XREF to: 00537b6c (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00537b56
    LEA EAX,[ESP + 0x754]               ; 00537b57
    PUSH EAX                            ; 00537b5e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537b5f | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537b64
    JMP 0x005379f3                      ; 00537b67 | LAB_005379f3
        ;   XREF to: 005379f3 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 00537b6c
        ;   Label: LAB_00537b6c
    PUSH 0x42c80000                     ; 00537b6d
    PUSH dword ptr [0x006804b0]         ; 00537b72 | undefined4 DAT_006804b0
    PUSH EDI                            ; 00537b78
    PUSH 0x6804b4                       ; 00537b79 | undefined4 DAT_006804b4
    PUSH 0x63bb5e                       ; 00537b7e | = "Enter maximum random speed" | s_Enter_maximum_random_spe_0063bb5e = Enter maximum random speed
    MOV EDX,dword ptr [0x00678a60]      ; 00537b83 | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 00537b89 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 00537b8a | int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, ...)
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 00537b8f
    TEST EAX,EAX                        ; 00537b92
    JNZ 0x00537bac                      ; 00537b94 | LAB_00537bac
        ;   XREF to: 00537bac (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00537b96
    LEA EAX,[ESP + 0x754]               ; 00537b97
    PUSH EAX                            ; 00537b9e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537b9f | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537ba4
    JMP 0x005379f3                      ; 00537ba7 | LAB_005379f3
        ;   XREF to: 005379f3 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x3a8]               ; 00537bac
        ;   Label: LAB_00537bac
    PUSH EAX                            ; 00537bb3
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00537bb4 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00537bb9
    PUSH 0x63bb79                       ; 00537bbc | = "Randomize speed for specified enemies..." | s_Randomize_speed_for_spec_0063bb79 = Randomize speed for specified enemies with randomizeMe flag set
    LEA EAX,[ESP + 0x3ac]               ; 00537bc1
    PUSH EAX                            ; 00537bc8
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00537bc9 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537bce
    PUSH 0x63bbb9                       ; 00537bd1 | = "Randomize speed for all specified ene..." | s_Randomize_speed_for_all__0063bbb9 = Randomize speed for all specified enemies
    LEA EAX,[ESP + 0x3ac]               ; 00537bd6
    PUSH EAX                            ; 00537bdd
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00537bde | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537be3
    PUSH 0x0                            ; 00537be6
    MOV ECX,dword ptr [0x02f797e0]      ; 00537be8 | undefined4 DAT_02f797e0
    PUSH ECX                            ; 00537bee
    PUSH 0x63bbe3                       ; 00537bef | = "Randomize speeds" | s_Randomize_speeds_0063bbe3 = Randomize speeds
    LEA EAX,[ESP + 0x3b4]               ; 00537bf4
    PUSH EAX                            ; 00537bfb
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00537bfc | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00537c01
    TEST EAX,EAX                        ; 00537c04
    JL 0x00537c8b                       ; 00537c06 | LAB_00537c8b
        ;   XREF to: 00537c8b (CONDITIONAL_JUMP)
    MOV [0x02f797e0],EAX                ; 00537c0c | undefined4 DAT_02f797e0
    MOV EAX,ESP                         ; 00537c11
    PUSH EAX                            ; 00537c13
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00537c14 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBP + 0x548]     ; 00537c19
    ADD ESP,0x4                         ; 00537c1f
    TEST ESI,ESI                        ; 00537c22
    JZ 0x00537c46                       ; 00537c24 | LAB_00537c46
        ;   XREF to: 00537c46 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02cf2bf0]      ; 00537c26 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_00537c26
    PUSH EDX                            ; 00537c2c
    PUSH ESI                            ; 00537c2d
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00537c2e | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537c33
    MOV EBX,EAX                         ; 00537c36
    TEST EAX,EAX                        ; 00537c38
    JNZ 0x00537cb4                      ; 00537c3a | LAB_00537cb4
        ;   XREF to: 00537cb4 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESI + 0x14c]     ; 00537c3c
        ;   Label: LAB_00537c3c
    TEST ESI,ESI                        ; 00537c42
    JNZ 0x00537c26                      ; 00537c44 | LAB_00537c26
        ;   XREF to: 00537c26 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP]             ; 00537c46
        ;   Label: LAB_00537c46
    CMP EBX,0x1                         ; 00537c49
    JGE 0x00537d71                      ; 00537c4c | LAB_00537d71
        ;   XREF to: 00537d71 (CONDITIONAL_JUMP)
    PUSH 0x63bbfd                       ; 00537c52 | = "No enemies matched criteria, no speed..." | s_No_enemies_matched_crite_0063bbfd = No enemies matched criteria, no speeds randomized.
    MOV EAX,[0x00678a60]                ; 00537c57 | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 00537c5c | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00537c5d | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537c62
    PUSH 0x0                            ; 00537c65
        ;   Label: LAB_00537c65
    LEA EAX,[ESP + 0x4]                 ; 00537c67
    PUSH EAX                            ; 00537c6b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537c6c | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537c71
    PUSH 0x0                            ; 00537c74
    LEA EAX,[ESP + 0x3ac]               ; 00537c76
    PUSH EAX                            ; 00537c7d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537c7e | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537c83
    JMP 0x00537aa5                      ; 00537c86 | LAB_00537aa5
        ;   XREF to: 00537aa5 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00537c8b
        ;   Label: LAB_00537c8b
    LEA EAX,[ESP + 0x3ac]               ; 00537c8d
    PUSH EAX                            ; 00537c94
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537c95 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537c9a
    PUSH 0x0                            ; 00537c9d
    LEA EAX,[ESP + 0x754]               ; 00537c9f
    PUSH EAX                            ; 00537ca6
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537ca7 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537cac
    JMP 0x005379f3                      ; 00537caf | LAB_005379f3
        ;   XREF to: 005379f3 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x02f797e0],0x0      ; 00537cb4 | undefined4 DAT_02f797e0
        ;   Label: LAB_00537cb4
    JZ 0x00537d5f                       ; 00537cbb | LAB_00537d5f
        ;   XREF to: 00537d5f (CONDITIONAL_JUMP)
    PUSH 0x6804b8                       ; 00537cc1 | = "CEnemy" | s_CEnemy_006804b8 = CEnemy
        ;   Label: LAB_00537cc1
    PUSH EBX                            ; 00537cc6
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00537cc7 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537ccc
    TEST EAX,EAX                        ; 00537ccf
    JZ 0x00537c3c                       ; 00537cd1 | LAB_00537c3c
        ;   XREF to: 00537c3c (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00537cd7
    PUSH EBX                            ; 00537cd9
    PUSH 0x680580                       ; 00537cda | DAT_00680580
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 00537cdf | int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00537ce4
    TEST EAX,EAX                        ; 00537ce7
    JZ 0x00537c3c                       ; 00537ce9 | LAB_00537c3c
        ;   XREF to: 00537c3c (CONDITIONAL_JUMP)
    PUSH dword ptr [0x006804b4]         ; 00537cef | undefined4 DAT_006804b4
    PUSH dword ptr [0x006804b0]         ; 00537cf5 | undefined4 DAT_006804b0
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00537cfb | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    CMP dword ptr [EAX + 0xbe2c],0x0    ; 00537d5f
        ;   Label: LAB_00537d5f
    JNZ 0x00537cc1                      ; 00537d66 | LAB_00537cc1
        ;   XREF to: 00537cc1 (CONDITIONAL_JUMP)
    JMP 0x00537c3c                      ; 00537d6c | LAB_00537c3c
        ;   XREF to: 00537c3c (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00537d71
        ;   Label: LAB_00537d71
    PUSH 0x63bc30                       ; 00537d72 | = "%d enemy speeds randomized" | s_d_enemy_speeds_randomize_0063bc30 = %d enemy speeds randomized
    LEA EAX,[ESP + 0xc2c]               ; 00537d77
    PUSH EAX                            ; 00537d7e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00537d7f | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00537d84
    PUSH 0x0                            ; 00537d87
    PUSH -0x1                           ; 00537d89
    LEA EAX,[ESP + 0xc2c]               ; 00537d8b
    PUSH EAX                            ; 00537d92
    LEA EAX,[ESP + 0xc]                 ; 00537d93
    PUSH EAX                            ; 00537d97
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00537d98 | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00537d9d
    JMP 0x00537c65                      ; 00537da0 | LAB_00537c65
        ;   XREF to: 00537c65 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00537da5
        ;   Label: LAB_00537da5
    LEA EAX,[ESP + 0x754]               ; 00537da7
    PUSH EAX                            ; 00537dae
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537daf | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537db4
    ADD ESP,0xcf0                       ; 00537db7
    POP EBP                             ; 00537dbd
    POP EDI                             ; 00537dbe
    POP ESI                             ; 00537dbf
    POP EBX                             ; 00537dc0
    RET                                 ; 00537dc1

