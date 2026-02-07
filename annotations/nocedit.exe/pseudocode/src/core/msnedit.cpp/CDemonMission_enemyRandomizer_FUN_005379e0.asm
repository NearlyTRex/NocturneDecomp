; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_msnedit_cpp_CDemonMission_enemyRandomizer_FUN_005379e0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
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
;   float FLOAT_006804b0 = 0.9000000
;   float FLOAT_006804b4 = 1.100000
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
        ;   Label: core_msnedit.cpp_CDemonMission_enemyRandomizer_FUN_005379e0
    PUSH ESI                            ; 005379e1
    PUSH EDI                            ; 005379e2
    PUSH EBP                            ; 005379e3
    SUB ESP,0xcf0                       ; 005379e4
    MOV EBP,dword ptr [ESP + 0xd04]     ; 005379ea
    XOR EDI,EDI                         ; 005379f1
    LEA EAX,[ESP + 0x750]               ; 005379f3
        ;   Label: LAB_005379f3
    PUSH EAX                            ; 005379fa
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 005379fb
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00537a00
    PUSH 0x63ba9d                       ; 00537a03 | = "Randomize all enemies with randomizeM..."
    LEA EAX,[ESP + 0x754]               ; 00537a08
    PUSH EAX                            ; 00537a0f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00537a10
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00537a15
    PUSH 0x63bace                       ; 00537a18 | = "Randomize enemy speeds for specific e..."
    LEA EAX,[ESP + 0x754]               ; 00537a1d
    PUSH EAX                            ; 00537a24
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00537a25
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00537a2a
    PUSH 0x0                            ; 00537a2d
    PUSH EDI                            ; 00537a2f
    PUSH 0x63bafb                       ; 00537a30 | = "Enemy randomizer"
    LEA EAX,[ESP + 0x75c]               ; 00537a35
    PUSH EAX                            ; 00537a3c
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00537a3d
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00537a42
    MOV EDI,EAX                         ; 00537a45
    TEST EAX,EAX                        ; 00537a47
    JL 0x00537da5                       ; 00537a49
        ;   XREF to: 00537da5 (CONDITIONAL_JUMP)  ; LAB_00537da5
    JNZ 0x00537aa0                      ; 00537a4f
        ;   XREF to: 00537aa0 (CONDITIONAL_JUMP)  ; LAB_00537aa0
    MOV ESI,dword ptr [EBP + 0x548]     ; 00537a51
    TEST ESI,ESI                        ; 00537a57
    JZ 0x00537aa0                       ; 00537a59
        ;   XREF to: 00537aa0 (CONDITIONAL_JUMP)  ; LAB_00537aa0
    MOV EDX,dword ptr [0x02cf2bf0]      ; 00537a5b | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_00537a5b
    PUSH EDX                            ; 00537a61
    PUSH ESI                            ; 00537a62
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00537a63
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 00537a68
    ADD ESP,0x8                         ; 00537a6a
    TEST EAX,EAX                        ; 00537a6d
    JZ 0x00537a96                       ; 00537a6f
        ;   XREF to: 00537a96 (CONDITIONAL_JUMP)  ; LAB_00537a96
    CMP dword ptr [EAX + 0xbe2c],0x0    ; 00537a71
    JZ 0x00537a96                       ; 00537a78
        ;   XREF to: 00537a96 (CONDITIONAL_JUMP)  ; LAB_00537a96
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
    JNZ 0x00537a5b                      ; 00537a9e
        ;   XREF to: 00537a5b (CONDITIONAL_JUMP)  ; LAB_00537a5b
    CMP EDI,0x1                         ; 00537aa0
        ;   Label: LAB_00537aa0
    JZ 0x00537abc                       ; 00537aa3
        ;   XREF to: 00537abc (CONDITIONAL_JUMP)  ; LAB_00537abc
    PUSH 0x0                            ; 00537aa5
        ;   Label: LAB_00537aa5
    LEA EAX,[ESP + 0x754]               ; 00537aa7
    PUSH EAX                            ; 00537aae
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537aaf
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00537ab4
    JMP 0x005379f3                      ; 00537ab7
        ;   XREF to: 005379f3 (UNCONDITIONAL_JUMP)  ; LAB_005379f3
    PUSH EDI                            ; 00537abc
        ;   Label: LAB_00537abc
    PUSH 0xc8                           ; 00537abd
    PUSH 0x6804b8                       ; 00537ac2 | = "CEnemy"
    PUSH 0x63bb0c                       ; 00537ac7 | = "Enter enemy types to process"
    MOV EBX,dword ptr [0x00678a60]      ; 00537acc | g_CEditorToolsPtr | g_CEditorToolsInstance
    PUSH EBX                            ; 00537ad2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 00537ad3
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 00537ad8
    TEST EAX,EAX                        ; 00537adb
    JNZ 0x00537af5                      ; 00537add
        ;   XREF to: 00537af5 (CONDITIONAL_JUMP)  ; LAB_00537af5
    PUSH EAX                            ; 00537adf
    LEA EAX,[ESP + 0x754]               ; 00537ae0
    PUSH EAX                            ; 00537ae7
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537ae8
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00537aed
    JMP 0x005379f3                      ; 00537af0
        ;   XREF to: 005379f3 (UNCONDITIONAL_JUMP)  ; LAB_005379f3
    PUSH EDI                            ; 00537af5
        ;   Label: LAB_00537af5
    PUSH 0xc8                           ; 00537af6
    PUSH 0x680580                       ; 00537afb | DAT_00680580
    PUSH 0x63bb29                       ; 00537b00 | = "Enter actor name wildcard"
    MOV ESI,dword ptr [0x00678a60]      ; 00537b05 | g_CEditorToolsPtr
    PUSH ESI                            ; 00537b0b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 00537b0c
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 00537b11
    TEST EAX,EAX                        ; 00537b14
    JNZ 0x00537b2e                      ; 00537b16
        ;   XREF to: 00537b2e (CONDITIONAL_JUMP)  ; LAB_00537b2e
    PUSH EAX                            ; 00537b18
    LEA EAX,[ESP + 0x754]               ; 00537b19
    PUSH EAX                            ; 00537b20
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537b21
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00537b26
    JMP 0x005379f3                      ; 00537b29
        ;   XREF to: 005379f3 (UNCONDITIONAL_JUMP)  ; LAB_005379f3
    PUSH EDI                            ; 00537b2e
        ;   Label: LAB_00537b2e
    PUSH 0x42c80000                     ; 00537b2f
    PUSH 0x3c23d70a                     ; 00537b34
    PUSH EDI                            ; 00537b39
    PUSH 0x6804b0                       ; 00537b3a | FLOAT_006804b0
    PUSH 0x63bb43                       ; 00537b3f | = "Enter minimum random speed"
    MOV EAX,[0x00678a60]                ; 00537b44 | g_CEditorToolsPtr
    PUSH EAX                            ; 00537b49 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 00537b4a
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 00537b4f
    TEST EAX,EAX                        ; 00537b52
    JNZ 0x00537b6c                      ; 00537b54
        ;   XREF to: 00537b6c (CONDITIONAL_JUMP)  ; LAB_00537b6c
    PUSH EAX                            ; 00537b56
    LEA EAX,[ESP + 0x754]               ; 00537b57
    PUSH EAX                            ; 00537b5e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537b5f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00537b64
    JMP 0x005379f3                      ; 00537b67
        ;   XREF to: 005379f3 (UNCONDITIONAL_JUMP)  ; LAB_005379f3
    PUSH EDI                            ; 00537b6c
        ;   Label: LAB_00537b6c
    PUSH 0x42c80000                     ; 00537b6d
    PUSH dword ptr [0x006804b0]         ; 00537b72 | FLOAT_006804b0
    PUSH EDI                            ; 00537b78
    PUSH 0x6804b4                       ; 00537b79 | FLOAT_006804b4
    PUSH 0x63bb5e                       ; 00537b7e | = "Enter maximum random speed"
    MOV EDX,dword ptr [0x00678a60]      ; 00537b83 | g_CEditorToolsPtr
    PUSH EDX                            ; 00537b89 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 00537b8a
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 00537b8f
    TEST EAX,EAX                        ; 00537b92
    JNZ 0x00537bac                      ; 00537b94
        ;   XREF to: 00537bac (CONDITIONAL_JUMP)  ; LAB_00537bac
    PUSH EAX                            ; 00537b96
    LEA EAX,[ESP + 0x754]               ; 00537b97
    PUSH EAX                            ; 00537b9e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537b9f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00537ba4
    JMP 0x005379f3                      ; 00537ba7
        ;   XREF to: 005379f3 (UNCONDITIONAL_JUMP)  ; LAB_005379f3
    LEA EAX,[ESP + 0x3a8]               ; 00537bac
        ;   Label: LAB_00537bac
    PUSH EAX                            ; 00537bb3
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00537bb4
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00537bb9
    PUSH 0x63bb79                       ; 00537bbc | = "Randomize speed for specified enemies..."
    LEA EAX,[ESP + 0x3ac]               ; 00537bc1
    PUSH EAX                            ; 00537bc8
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00537bc9
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00537bce
    PUSH 0x63bbb9                       ; 00537bd1 | = "Randomize speed for all specified ene..."
    LEA EAX,[ESP + 0x3ac]               ; 00537bd6
    PUSH EAX                            ; 00537bdd
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00537bde
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00537be3
    PUSH 0x0                            ; 00537be6
    MOV ECX,dword ptr [0x02f797e0]      ; 00537be8 | DAT_02f797e0
    PUSH ECX                            ; 00537bee
    PUSH 0x63bbe3                       ; 00537bef | = "Randomize speeds"
    LEA EAX,[ESP + 0x3b4]               ; 00537bf4
    PUSH EAX                            ; 00537bfb
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00537bfc
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00537c01
    TEST EAX,EAX                        ; 00537c04
    JL 0x00537c8b                       ; 00537c06
        ;   XREF to: 00537c8b (CONDITIONAL_JUMP)  ; LAB_00537c8b
    MOV [0x02f797e0],EAX                ; 00537c0c | DAT_02f797e0
    MOV EAX,ESP                         ; 00537c11
    PUSH EAX                            ; 00537c13
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00537c14
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV ESI,dword ptr [EBP + 0x548]     ; 00537c19
    ADD ESP,0x4                         ; 00537c1f
    TEST ESI,ESI                        ; 00537c22
    JZ 0x00537c46                       ; 00537c24
        ;   XREF to: 00537c46 (CONDITIONAL_JUMP)  ; LAB_00537c46
    MOV EDX,dword ptr [0x02cf2bf0]      ; 00537c26 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_00537c26
    PUSH EDX                            ; 00537c2c
    PUSH ESI                            ; 00537c2d
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00537c2e
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00537c33
    MOV EBX,EAX                         ; 00537c36
    TEST EAX,EAX                        ; 00537c38
    JNZ 0x00537cb4                      ; 00537c3a
        ;   XREF to: 00537cb4 (CONDITIONAL_JUMP)  ; LAB_00537cb4
    MOV ESI,dword ptr [ESI + 0x14c]     ; 00537c3c
        ;   Label: LAB_00537c3c
    TEST ESI,ESI                        ; 00537c42
    JNZ 0x00537c26                      ; 00537c44
        ;   XREF to: 00537c26 (CONDITIONAL_JUMP)  ; LAB_00537c26
    MOV EBX,dword ptr [ESP]             ; 00537c46
        ;   Label: LAB_00537c46
    CMP EBX,0x1                         ; 00537c49
    JGE 0x00537d71                      ; 00537c4c
        ;   XREF to: 00537d71 (CONDITIONAL_JUMP)  ; LAB_00537d71
    PUSH 0x63bbfd                       ; 00537c52 | = "No enemies matched criteria, no speed..."
    MOV EAX,[0x00678a60]                ; 00537c57 | g_CEditorToolsPtr
    PUSH EAX                            ; 00537c5c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00537c5d
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00537c62
    PUSH 0x0                            ; 00537c65
        ;   Label: LAB_00537c65
    LEA EAX,[ESP + 0x4]                 ; 00537c67
    PUSH EAX                            ; 00537c6b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537c6c
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00537c71
    PUSH 0x0                            ; 00537c74
    LEA EAX,[ESP + 0x3ac]               ; 00537c76
    PUSH EAX                            ; 00537c7d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537c7e
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00537c83
    JMP 0x00537aa5                      ; 00537c86
        ;   XREF to: 00537aa5 (UNCONDITIONAL_JUMP)  ; LAB_00537aa5
    PUSH 0x0                            ; 00537c8b
        ;   Label: LAB_00537c8b
    LEA EAX,[ESP + 0x3ac]               ; 00537c8d
    PUSH EAX                            ; 00537c94
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537c95
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00537c9a
    PUSH 0x0                            ; 00537c9d
    LEA EAX,[ESP + 0x754]               ; 00537c9f
    PUSH EAX                            ; 00537ca6
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537ca7
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00537cac
    JMP 0x005379f3                      ; 00537caf
        ;   XREF to: 005379f3 (UNCONDITIONAL_JUMP)  ; LAB_005379f3
    CMP dword ptr [0x02f797e0],0x0      ; 00537cb4 | DAT_02f797e0
        ;   Label: LAB_00537cb4
    JZ 0x00537d5f                       ; 00537cbb
        ;   XREF to: 00537d5f (CONDITIONAL_JUMP)  ; LAB_00537d5f
    PUSH 0x6804b8                       ; 00537cc1 | = "CEnemy"
        ;   Label: LAB_00537cc1
    PUSH EBX                            ; 00537cc6
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00537cc7
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00537ccc
    TEST EAX,EAX                        ; 00537ccf
    JZ 0x00537c3c                       ; 00537cd1
        ;   XREF to: 00537c3c (CONDITIONAL_JUMP)  ; LAB_00537c3c
    PUSH 0x0                            ; 00537cd7
    PUSH EBX                            ; 00537cd9
    PUSH 0x680580                       ; 00537cda | DAT_00680580
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 00537cdf
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 00537ce4
    TEST EAX,EAX                        ; 00537ce7
    JZ 0x00537c3c                       ; 00537ce9
        ;   XREF to: 00537c3c (CONDITIONAL_JUMP)  ; LAB_00537c3c
    PUSH dword ptr [0x006804b4]         ; 00537cef | FLOAT_006804b4
    PUSH dword ptr [0x006804b0]         ; 00537cf5 | FLOAT_006804b0
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00537cfb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    CMP dword ptr [EAX + 0xbe2c],0x0    ; 00537d5f
        ;   Label: LAB_00537d5f
    JNZ 0x00537cc1                      ; 00537d66
        ;   XREF to: 00537cc1 (CONDITIONAL_JUMP)  ; LAB_00537cc1
    JMP 0x00537c3c                      ; 00537d6c
        ;   XREF to: 00537c3c (UNCONDITIONAL_JUMP)  ; LAB_00537c3c
    PUSH EBX                            ; 00537d71
        ;   Label: LAB_00537d71
    PUSH 0x63bc30                       ; 00537d72 | = "%d enemy speeds randomized"
    LEA EAX,[ESP + 0xc2c]               ; 00537d77
    PUSH EAX                            ; 00537d7e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00537d7f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00537d84
    PUSH 0x0                            ; 00537d87
    PUSH -0x1                           ; 00537d89
    LEA EAX,[ESP + 0xc2c]               ; 00537d8b
    PUSH EAX                            ; 00537d92
    LEA EAX,[ESP + 0xc]                 ; 00537d93
    PUSH EAX                            ; 00537d97
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00537d98
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00537d9d
    JMP 0x00537c65                      ; 00537da0
        ;   XREF to: 00537c65 (UNCONDITIONAL_JUMP)  ; LAB_00537c65
    PUSH 0x0                            ; 00537da5
        ;   Label: LAB_00537da5
    LEA EAX,[ESP + 0x754]               ; 00537da7
    PUSH EAX                            ; 00537dae
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00537daf
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00537db4
    ADD ESP,0xcf0                       ; 00537db7
    POP EBP                             ; 00537dbd
    POP EDI                             ; 00537dbe
    POP ESI                             ; 00537dbf
    POP EBX                             ; 00537dc0
    RET                                 ; 00537dc1

