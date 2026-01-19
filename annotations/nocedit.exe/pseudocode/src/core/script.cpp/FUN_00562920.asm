; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_00562920()
;
; Local Variables:
; undefined8       Stack[-0x3760]:8  local_3760
; undefined4       Stack[-0x3758]:4  local_3758
; undefined1       Stack[-0x3754]:1  local_3754
; undefined1       Stack[-0x33ac]:1  local_33ac
; undefined1       Stack[-0x3004]:1  local_3004
; undefined1       Stack[-0x2c5c]:1  local_2c5c
; undefined1       Stack[-0x28b4]:1  local_28b4
; undefined1       Stack[-0x250c]:1  local_250c
; undefined1       Stack[-0x2164]:1  local_2164
; undefined1       Stack[-0x1dbc]:1  local_1dbc
; undefined1       Stack[-0x1a14]:1  local_1a14
; undefined1       Stack[-0x166c]:1  local_166c
; undefined1       Stack[-0x12c4]:1  local_12c4
; undefined1       Stack[-0xf1c]:1  local_f1c
; undefined1       Stack[-0xb74]:1  local_b74
; undefined1       Stack[-0x7cc]:1  local_7cc
; undefined1       Stack[-0x6a0]:1  local_6a0
; undefined1       Stack[-0x574]:1  local_574
; undefined1       Stack[-0x470]:1  local_470
; undefined1       Stack[-0x370]:1  local_370
; undefined1       Stack[-0x270]:1  local_270
; undefined1       Stack[-0x170]:1  local_170
; undefined1       Stack[-0xa8]:1  local_a8
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_FUN_00565ae0 at 00565b76
;
; Referenced Globals:
;   void* switchdataD_00562888 = 005636c1
;   void* switchdataD_0056289c = 00562964
;   TerminatedCString s_Enter_s_00643b92
;   TerminatedCString s_d_00643b9b
;   TerminatedCString s_d_00643b9e
;   TerminatedCString s_f_00643ba1
;   TerminatedCString s_g_00643ba4
;   TerminatedCString s_CHeroPlaceHolder_00643ba7
;   TerminatedCString s_anon_00643bb8
;   TerminatedCString s_walk_00643bba
;   TerminatedCString s_backup_00643bbf
;   TerminatedCString s_run_00643bc6
;   TerminatedCString s_fire_00643bca
;   TerminatedCString s_useItem_00643bcf
;   TerminatedCString s_light_00643bd7
;   ... and 70 more
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_actor.cpp_matchesClassName_FUN_0040c740
;   core_charactr.cpp_CCharacter_FUN_0042f9c0
;   core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0
;   core_script.cpp_CScript_removeEventXRef_FUN_005676e0
;   core_script.cpp_FUN_00559730
;   core_script.cpp_FUN_005627f0
;   core_script.cpp_FUN_00562860
;   core_script.cpp_FUN_00567630
;   core_script.cpp_FUN_005677a0
;   core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   crt_file.c_makepath_FUN_005febfc
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   ... and 18 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562920
        ;   Label: core_script.cpp_FUN_00562920
    PUSH ESI                            ; 00562921
    PUSH EDI                            ; 00562922
    PUSH EBP                            ; 00562923
    MOV EBP,ESP                         ; 00562924
    SUB ESP,0x3748                      ; 00562926
    AND ESP,0xfffffff8                  ; 0056292c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056292f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00562932
    MOV ESI,dword ptr [EBP + 0x20]      ; 00562935
    LEA EAX,[EBX + 0x2c0]               ; 00562938
    PUSH EAX                            ; 0056293e
    PUSH 0x643b92                       ; 0056293f | = "Enter %s"
    LEA EAX,[ESP + 0x2f94]              ; 00562944
    PUSH EAX                            ; 0056294b
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0056294c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00562951
    CMP EDI,0x20                        ; 00562954
    JA 0x00563fe7                       ; 00562957
        ;   XREF to: 00563fe7 (CONDITIONAL_JUMP)  ; caseD_1d
    JMP dword ptr [EDI*0x4 + 0x56289c]  ; 0056295d | caseD_0 | caseD_1 | caseD_1f
        ;   Label: switchD
    LEA EAX,[ESP + 0x3728]              ; 00562964
        ;   Label: caseD_0
    PUSH EAX                            ; 0056296b
    MOV EAX,0x643b9b                    ; 0056296c | = "%d"
    PUSH EAX                            ; 00562971 | = "%d"
    MOV ESI,dword ptr [EBP + 0x14]      ; 00562972
    PUSH ESI                            ; 00562975
    XOR EBX,EBX                         ; 00562976
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00562978
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 0056297d
    CMP EAX,0x1                         ; 00562980
    JNZ 0x00562988                      ; 00562983
        ;   XREF to: 00562988 (CONDITIONAL_JUMP)  ; LAB_00562988
    OR BL,0x1                           ; 00562985
    PUSH EBX                            ; 00562988
        ;   Label: LAB_00562988
    PUSH 0x0                            ; 00562989
    PUSH 0x0                            ; 0056298b
    PUSH 0x0                            ; 0056298d
    LEA EAX,[ESP + 0x3738]              ; 0056298f
    PUSH EAX                            ; 00562996
    LEA EAX,[ESP + 0x2fa0]              ; 00562997
    PUSH EAX                            ; 0056299e
    MOV EDI,dword ptr [0x00678a60]      ; 0056299f | g_CEditorToolsPtr
    PUSH EDI                            ; 005629a5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 005629a6
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 005629ab
    TEST EAX,EAX                        ; 005629ae
    JNZ 0x005629bd                      ; 005629b0
        ;   XREF to: 005629bd (CONDITIONAL_JUMP)  ; LAB_005629bd
    XOR ESI,ESI                         ; 005629b2
        ;   Label: LAB_005629b2
    MOV EAX,ESI                         ; 005629b4
    MOV ESP,EBP                         ; 005629b6
    POP EBP                             ; 005629b8
    POP EDI                             ; 005629b9
    POP ESI                             ; 005629ba
    POP EBX                             ; 005629bb
    RET                                 ; 005629bc
    MOV EAX,dword ptr [ESP + 0x3728]    ; 005629bd
        ;   Label: LAB_005629bd
    PUSH EAX                            ; 005629c4
    PUSH 0x643b9e                       ; 005629c5 | = "%d"
    MOV EDX,dword ptr [EBP + 0x14]      ; 005629ca
    PUSH EDX                            ; 005629cd
    MOV ESI,0x1                         ; 005629ce
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005629d3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005629d8
    MOV EAX,ESI                         ; 005629db
    MOV ESP,EBP                         ; 005629dd
    POP EBP                             ; 005629df
    POP EDI                             ; 005629e0
    POP ESI                             ; 005629e1
    POP EBX                             ; 005629e2
    RET                                 ; 005629e3
    MOV EAX,ESP                         ; 005629e4
        ;   Label: caseD_1
    PUSH EAX                            ; 005629e6
    MOV EAX,0x643ba1                    ; 005629e7 | = "%f"
    PUSH EAX                            ; 005629ec | = "%f"
    MOV EDX,dword ptr [EBP + 0x14]      ; 005629ed
    PUSH EDX                            ; 005629f0
    XOR EBX,EBX                         ; 005629f1
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005629f3
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 005629f8
    CMP EAX,0x1                         ; 005629fb
    JNZ 0x00562a03                      ; 005629fe
        ;   XREF to: 00562a03 (CONDITIONAL_JUMP)  ; LAB_00562a03
    OR BL,0x1                           ; 00562a00
    PUSH EBX                            ; 00562a03
        ;   Label: LAB_00562a03
    PUSH 0x0                            ; 00562a04
    PUSH 0x0                            ; 00562a06
    PUSH 0x0                            ; 00562a08
    LEA EAX,[ESP + 0x10]                ; 00562a0a
    PUSH EAX                            ; 00562a0e
    LEA EAX,[ESP + 0x2fa0]              ; 00562a0f
    PUSH EAX                            ; 00562a16
    MOV ECX,dword ptr [0x00678a60]      ; 00562a17 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00562a1d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 00562a1e
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 00562a23
    TEST EAX,EAX                        ; 00562a26
    JZ 0x005629b2                       ; 00562a28
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    FLD float ptr [ESP]                 ; 00562a2a
    SUB ESP,0x8                         ; 00562a2d
    FSTP double ptr [ESP]               ; 00562a30
    PUSH 0x643ba4                       ; 00562a33 | = "%g"
    MOV EBX,dword ptr [EBP + 0x14]      ; 00562a38
    PUSH EBX                            ; 00562a3b
    MOV ESI,0x1                         ; 00562a3c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00562a41
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00562a46
    MOV EAX,ESI                         ; 00562a49
    MOV ESP,EBP                         ; 00562a4b
    POP EBP                             ; 00562a4d
    POP EDI                             ; 00562a4e
    POP ESI                             ; 00562a4f
    POP EBX                             ; 00562a50
    RET                                 ; 00562a51
    PUSH 0x1                            ; 00562a52
        ;   Label: caseD_2
    PUSH 0x64                           ; 00562a54
    MOV EDI,dword ptr [EBP + 0x14]      ; 00562a56
    PUSH EDI                            ; 00562a59
    LEA EAX,[ESP + 0x2f98]              ; 00562a5a
    PUSH EAX                            ; 00562a61
    MOV EAX,[0x00678a60]                ; 00562a62 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00562a67 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 00562a68
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 00562a6d
    TEST EAX,EAX                        ; 00562a70
    JZ 0x005629b2                       ; 00562a72
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    MOV ESI,0x1                         ; 00562a78
    MOV EAX,ESI                         ; 00562a7d
    MOV ESP,EBP                         ; 00562a7f
    POP EBP                             ; 00562a81
    POP EDI                             ; 00562a82
    POP ESI                             ; 00562a83
    POP EBX                             ; 00562a84
    RET                                 ; 00562a85
    LEA EAX,[ESP + 0x754]               ; 00562a86
        ;   Label: caseD_3
    PUSH EAX                            ; 00562a8d
    XOR EDI,EDI                         ; 00562a8e
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00562a90
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00562a95
    LEA EAX,[EBX + 0x25c]               ; 00562a98
    LEA ESI,[EDI*0x4 + 0x0]             ; 00562a9e
    MOV dword ptr [ESP + 0x3740],EAX    ; 00562aa5
    MOV EAX,[0x006810c8]                ; 00562aac | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00562aac
    CMP EDI,dword ptr [EAX + 0x14d154]  ; 00562ab1 | g_CDemonSetInstance.actor_list_ptr
    JGE 0x00562b21                      ; 00562ab7
        ;   XREF to: 00562b21 (CONDITIONAL_JUMP)  ; LAB_00562b21
    CMP byte ptr [EBX + 0x25c],0x0      ; 00562ab9
    JZ 0x00562ae4                       ; 00562ac0
        ;   XREF to: 00562ae4 (CONDITIONAL_JUMP)  ; LAB_00562ae4
    MOV EDX,dword ptr [ESP + 0x3740]    ; 00562ac2
    PUSH EDX                            ; 00562ac9
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 00562aca | g_CDemonSetInstance.actor_list_data[0] | DAT_032613d4
    PUSH ECX                            ; 00562ad1
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00562ad2
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00562ad7
    TEST EAX,EAX                        ; 00562ada
    JNZ 0x00562ae4                      ; 00562adc
        ;   XREF to: 00562ae4 (CONDITIONAL_JUMP)  ; LAB_00562ae4
    INC EDI                             ; 00562ade
        ;   Label: LAB_00562ade
    ADD ESI,0x4                         ; 00562adf
    JMP 0x00562aac                      ; 00562ae2
        ;   XREF to: 00562aac (UNCONDITIONAL_JUMP)  ; LAB_00562aac
    MOV EAX,[0x006810c8]                ; 00562ae4 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00562ae4
    PUSH 0x643ba7                       ; 00562ae9 | = "CHeroPlaceHolder"
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 00562aee | g_CDemonSetInstance.actor_list_data[0] | DAT_032613d4
    PUSH EDX                            ; 00562af5
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00562af6
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00562afb
    TEST EAX,EAX                        ; 00562afe
    JNZ 0x00562ade                      ; 00562b00
        ;   XREF to: 00562ade (CONDITIONAL_JUMP)  ; LAB_00562ade
    MOV EAX,[0x006810c8]                ; 00562b02 | g_CDemonSetPtr
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 00562b07 | DAT_032613d4
    PUSH ECX                            ; 00562b0e
    LEA EAX,[ESP + 0x758]               ; 00562b0f
    PUSH EAX                            ; 00562b16
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00562b17
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00562b1c
    JMP 0x00562ade                      ; 00562b1f
        ;   XREF to: 00562ade (UNCONDITIONAL_JUMP)  ; LAB_00562ade
    CMP byte ptr [EBX + 0x25c],0x0      ; 00562b21
        ;   Label: LAB_00562b21
    JNZ 0x00562bd5                      ; 00562b28
        ;   XREF to: 00562bd5 (CONDITIONAL_JUMP)  ; LAB_00562bd5
    PUSH 0x643bb8                       ; 00562b2e | = "$"
        ;   Label: LAB_00562b2e
    LEA EAX,[ESP + 0x758]               ; 00562b33
    PUSH EAX                            ; 00562b3a
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00562b3b
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00562b40
    LEA EAX,[ESP + 0x754]               ; 00562b43
        ;   Label: LAB_00562b43
    PUSH EAX                            ; 00562b4a
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 00562b4b
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00562b50
    PUSH 0x0                            ; 00562b53
    MOV EBX,dword ptr [EBP + 0x14]      ; 00562b55
    PUSH EBX                            ; 00562b58
    LEA EAX,[ESP + 0x75c]               ; 00562b59
    PUSH EAX                            ; 00562b60
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 00562b61
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 00562b66
    PUSH EAX                            ; 00562b69
    LEA EAX,[ESP + 0x2f94]              ; 00562b6a
    PUSH EAX                            ; 00562b71
    LEA EAX,[ESP + 0x760]               ; 00562b72
    PUSH EAX                            ; 00562b79
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00562b7a
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00562b7f
    TEST EAX,EAX                        ; 00562b82
    JL 0x00562bf7                       ; 00562b84
        ;   XREF to: 00562bf7 (CONDITIONAL_JUMP)  ; LAB_00562bf7
    PUSH EAX                            ; 00562b86
    LEA EAX,[ESP + 0x758]               ; 00562b87
    PUSH EAX                            ; 00562b8e
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00562b8f
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00562b94
    MOV EDI,EBX                         ; 00562b97
    MOV ESI,EAX                         ; 00562b99
    PUSH EDI                            ; 00562b9b
    MOV AL,byte ptr [ESI]               ; 00562b9c
        ;   Label: LAB_00562b9c
    MOV byte ptr [EDI],AL               ; 00562b9e
    CMP AL,0x0                          ; 00562ba0
    JZ 0x00562bb4                       ; 00562ba2
        ;   XREF to: 00562bb4 (CONDITIONAL_JUMP)  ; LAB_00562bb4
    MOV AL,byte ptr [ESI + 0x1]         ; 00562ba4
    ADD ESI,0x2                         ; 00562ba7
    MOV byte ptr [EDI + 0x1],AL         ; 00562baa
    ADD EDI,0x2                         ; 00562bad
    CMP AL,0x0                          ; 00562bb0
    JNZ 0x00562b9c                      ; 00562bb2
        ;   XREF to: 00562b9c (CONDITIONAL_JUMP)  ; LAB_00562b9c
    POP EDI                             ; 00562bb4
        ;   Label: LAB_00562bb4
    PUSH 0x0                            ; 00562bb5
    LEA EAX,[ESP + 0x758]               ; 00562bb7
    PUSH EAX                            ; 00562bbe
    MOV ESI,0x1                         ; 00562bbf
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00562bc4
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00562bc9
    MOV EAX,ESI                         ; 00562bcc
    MOV ESP,EBP                         ; 00562bce
    POP EBP                             ; 00562bd0
    POP EDI                             ; 00562bd1
    POP ESI                             ; 00562bd2
    POP EBX                             ; 00562bd3
    RET                                 ; 00562bd4
    MOV ECX,dword ptr [ESP + 0x3740]    ; 00562bd5
        ;   Label: LAB_00562bd5
    PUSH ECX                            ; 00562bdc
    PUSH 0x2db87d4                      ; 00562bdd | g_CHeroClassInfo
    CALL core_actor.cpp_matchesClassName_FUN_0040c740 ; 00562be2
        ;   XREF to: 0040c740 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchesClassName_FUN_0040c740(CDemonActorType * type_ptr, char * class_name)
    ADD ESP,0x8                         ; 00562be7
    TEST EAX,EAX                        ; 00562bea
    JNZ 0x00562b2e                      ; 00562bec
        ;   XREF to: 00562b2e (CONDITIONAL_JUMP)  ; LAB_00562b2e
    JMP 0x00562b43                      ; 00562bf2
        ;   XREF to: 00562b43 (UNCONDITIONAL_JUMP)  ; LAB_00562b43
    PUSH 0x0                            ; 00562bf7
        ;   Label: LAB_00562bf7
    LEA EAX,[ESP + 0x758]               ; 00562bf9
    PUSH EAX                            ; 00562c00
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00562c01
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00562c06
    XOR ESI,ESI                         ; 00562c09
    MOV EAX,ESI                         ; 00562c0b
    MOV ESP,EBP                         ; 00562c0d
    POP EBP                             ; 00562c0f
    POP EDI                             ; 00562c10
    POP ESI                             ; 00562c11
    POP EBX                             ; 00562c12
    RET                                 ; 00562c13
    PUSH 0x1                            ; 00562c14
        ;   Label: caseD_4
    PUSH 0x4                            ; 00562c16
    MOV EBX,dword ptr [EBP + 0x14]      ; 00562c18
    PUSH EBX                            ; 00562c1b
    LEA EAX,[ESP + 0x2f98]              ; 00562c1c
    PUSH EAX                            ; 00562c23
    MOV ESI,dword ptr [0x00678a60]      ; 00562c24 | g_CEditorToolsPtr
    PUSH ESI                            ; 00562c2a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 00562c2b
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 00562c30
    TEST EAX,EAX                        ; 00562c33
    JZ 0x005629b2                       ; 00562c35
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    MOV ESI,0x1                         ; 00562c3b
    MOV EAX,ESI                         ; 00562c40
    MOV ESP,EBP                         ; 00562c42
    POP EBP                             ; 00562c44
    POP EDI                             ; 00562c45
    POP ESI                             ; 00562c46
    POP EBX                             ; 00562c47
    RET                                 ; 00562c48
    LEA EAX,[ESP + 0xea4]               ; 00562c49
        ;   Label: caseD_5
    PUSH EAX                            ; 00562c50
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00562c51
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00562c56
    LEA EAX,[ESP + 0xea4]               ; 00562c59
    PUSH EAX                            ; 00562c60
    MOV EDX,dword ptr [0x00680d50]      ; 00562c61 | g_CScriptInstance | g_CScriptPtr
    PUSH EDX                            ; 00562c67 | g_CScriptInstance
    CALL core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0 ; 00562c68
        ;   XREF to: 00566fa0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0()
    ADD ESP,0x8                         ; 00562c6d
    PUSH 0x0                            ; 00562c70
    MOV ECX,dword ptr [EBP + 0x14]      ; 00562c72
    PUSH ECX                            ; 00562c75
    LEA EAX,[ESP + 0xeac]               ; 00562c76
    PUSH EAX                            ; 00562c7d
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 00562c7e
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 00562c83
    PUSH EAX                            ; 00562c86
    LEA EAX,[ESP + 0x2f94]              ; 00562c87
    PUSH EAX                            ; 00562c8e
    LEA EAX,[ESP + 0xeb0]               ; 00562c8f
    PUSH EAX                            ; 00562c96
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00562c97
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00562c9c
    MOV EBX,EAX                         ; 00562c9f
    TEST EAX,EAX                        ; 00562ca1
    JL 0x00562cf5                       ; 00562ca3
        ;   XREF to: 00562cf5 (CONDITIONAL_JUMP)  ; LAB_00562cf5
    PUSH EAX                            ; 00562ca5
    LEA EAX,[ESP + 0xea8]               ; 00562ca6
    PUSH EAX                            ; 00562cad
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00562cae
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00562cb3
    MOV ESI,EAX                         ; 00562cb6
    MOV EDI,dword ptr [EBP + 0x14]      ; 00562cb8
    PUSH EDI                            ; 00562cbb
    MOV AL,byte ptr [ESI]               ; 00562cbc
        ;   Label: LAB_00562cbc
    MOV byte ptr [EDI],AL               ; 00562cbe
    CMP AL,0x0                          ; 00562cc0
    JZ 0x00562cd4                       ; 00562cc2
        ;   XREF to: 00562cd4 (CONDITIONAL_JUMP)  ; LAB_00562cd4
    MOV AL,byte ptr [ESI + 0x1]         ; 00562cc4
    ADD ESI,0x2                         ; 00562cc7
    MOV byte ptr [EDI + 0x1],AL         ; 00562cca
    ADD EDI,0x2                         ; 00562ccd
    CMP AL,0x0                          ; 00562cd0
    JNZ 0x00562cbc                      ; 00562cd2
        ;   XREF to: 00562cbc (CONDITIONAL_JUMP)  ; LAB_00562cbc
    POP EDI                             ; 00562cd4
        ;   Label: LAB_00562cd4
    PUSH 0x0                            ; 00562cd5
    LEA EAX,[ESP + 0xea8]               ; 00562cd7
    PUSH EAX                            ; 00562cde
    MOV ESI,0x1                         ; 00562cdf
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00562ce4
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00562ce9
    MOV EAX,ESI                         ; 00562cec
    MOV ESP,EBP                         ; 00562cee
    POP EBP                             ; 00562cf0
    POP EDI                             ; 00562cf1
    POP ESI                             ; 00562cf2
    POP EBX                             ; 00562cf3
    RET                                 ; 00562cf4
    PUSH 0x0                            ; 00562cf5
        ;   Label: LAB_00562cf5
    LEA EAX,[ESP + 0xea8]               ; 00562cf7
    PUSH EAX                            ; 00562cfe
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00562cff
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00562d04
    XOR ESI,ESI                         ; 00562d07
    MOV EAX,ESI                         ; 00562d09
    MOV ESP,EBP                         ; 00562d0b
    POP EBP                             ; 00562d0d
    POP EDI                             ; 00562d0e
    POP ESI                             ; 00562d0f
    POP EBX                             ; 00562d10
    RET                                 ; 00562d11
    LEA EAX,[ESP + 0x2be4]              ; 00562d12
        ;   Label: caseD_6
    PUSH EAX                            ; 00562d19
    XOR ESI,ESI                         ; 00562d1a
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00562d1c
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00562d21
    IMUL EDI,ESI,0x1a4                  ; 00562d24
    MOV EAX,[0x006810c8]                ; 00562d2a | g_CDemonSetPtr
        ;   Label: LAB_00562d2a
    CMP ESI,dword ptr [EAX]             ; 00562d2f | g_CDemonSetInstance
    JGE 0x00562d52                      ; 00562d31
        ;   XREF to: 00562d52 (CONDITIONAL_JUMP)  ; LAB_00562d52
    ADD EAX,0x4                         ; 00562d33
    ADD EAX,EDI                         ; 00562d36
    PUSH EAX                            ; 00562d38 | DAT_0311427c | DAT_03114420
    LEA EAX,[ESP + 0x2be8]              ; 00562d39
    PUSH EAX                            ; 00562d40
    INC ESI                             ; 00562d41
    ADD EDI,0x1a4                       ; 00562d42
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00562d48
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00562d4d
    JMP 0x00562d2a                      ; 00562d50
        ;   XREF to: 00562d2a (UNCONDITIONAL_JUMP)  ; LAB_00562d2a
    PUSH 0x0                            ; 00562d52
        ;   Label: LAB_00562d52
    MOV ECX,dword ptr [EBP + 0x14]      ; 00562d54
    PUSH ECX                            ; 00562d57
    LEA EAX,[ESP + 0x2bec]              ; 00562d58
    PUSH EAX                            ; 00562d5f
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 00562d60
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 00562d65
    PUSH EAX                            ; 00562d68
    LEA EAX,[ESP + 0x2f94]              ; 00562d69
    PUSH EAX                            ; 00562d70
    LEA EAX,[ESP + 0x2bf0]              ; 00562d71
    PUSH EAX                            ; 00562d78
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00562d79
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00562d7e
    TEST EAX,EAX                        ; 00562d81
    JL 0x00562dd5                       ; 00562d83
        ;   XREF to: 00562dd5 (CONDITIONAL_JUMP)  ; LAB_00562dd5
    PUSH EAX                            ; 00562d85
    LEA EAX,[ESP + 0x2be8]              ; 00562d86
    PUSH EAX                            ; 00562d8d
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00562d8e
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00562d93
    MOV ESI,EAX                         ; 00562d96
    MOV EDI,dword ptr [EBP + 0x14]      ; 00562d98
    PUSH EDI                            ; 00562d9b
    MOV AL,byte ptr [ESI]               ; 00562d9c
        ;   Label: LAB_00562d9c
    MOV byte ptr [EDI],AL               ; 00562d9e
    CMP AL,0x0                          ; 00562da0
    JZ 0x00562db4                       ; 00562da2
        ;   XREF to: 00562db4 (CONDITIONAL_JUMP)  ; LAB_00562db4
    MOV AL,byte ptr [ESI + 0x1]         ; 00562da4
    ADD ESI,0x2                         ; 00562da7
    MOV byte ptr [EDI + 0x1],AL         ; 00562daa
    ADD EDI,0x2                         ; 00562dad
    CMP AL,0x0                          ; 00562db0
    JNZ 0x00562d9c                      ; 00562db2
        ;   XREF to: 00562d9c (CONDITIONAL_JUMP)  ; LAB_00562d9c
    POP EDI                             ; 00562db4
        ;   Label: LAB_00562db4
    PUSH 0x0                            ; 00562db5
    LEA EAX,[ESP + 0x2be8]              ; 00562db7
    PUSH EAX                            ; 00562dbe
    MOV ESI,0x1                         ; 00562dbf
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00562dc4
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00562dc9
    MOV EAX,ESI                         ; 00562dcc
    MOV ESP,EBP                         ; 00562dce
    POP EBP                             ; 00562dd0
    POP EDI                             ; 00562dd1
    POP ESI                             ; 00562dd2
    POP EBX                             ; 00562dd3
    RET                                 ; 00562dd4
    PUSH 0x0                            ; 00562dd5
        ;   Label: LAB_00562dd5
    LEA EAX,[ESP + 0x2be8]              ; 00562dd7
    PUSH EAX                            ; 00562dde
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00562ddf
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00562de4
    XOR ESI,ESI                         ; 00562de7
    MOV EAX,ESI                         ; 00562de9
    MOV ESP,EBP                         ; 00562deb
    POP EBP                             ; 00562ded
    POP EDI                             ; 00562dee
    POP ESI                             ; 00562def
    POP EBX                             ; 00562df0
    RET                                 ; 00562df1
    XOR ESI,ESI                         ; 00562df2
        ;   Label: caseD_7
    MOV EAX,[0x00680d50]                ; 00562df4 | g_CScriptInstance | g_CScriptPtr
    MOV EDI,ESI                         ; 00562df9
    PUSH EAX                            ; 00562dfb | g_CScriptInstance
    SHL EDI,0x4                         ; 00562dfc
    CALL core_script.cpp_FUN_00567630   ; 00562dff
        ;   XREF to: 00567630 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00567630()
    SHL EDI,0x2                         ; 00562e04
    ADD ESP,0x4                         ; 00562e07
    SHL EDI,0x2                         ; 00562e0a
    MOV EAX,[0x00680d50]                ; 00562e0d | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_00562e0d
    CMP ESI,dword ptr [EAX + 0x28]      ; 00562e12 | g_CScriptInstance.padding_0x18[16]
    JGE 0x00562e4a                      ; 00562e15
        ;   XREF to: 00562e4a (CONDITIONAL_JUMP)  ; LAB_00562e4a
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00562e17 | g_CScriptInstance.padding_0x18[20]
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100] ; 00562e1a
    CMP EAX,0xa                         ; 00562e21
    JNC 0x00562e41                      ; 00562e24
        ;   XREF to: 00562e41 (CONDITIONAL_JUMP)  ; LAB_00562e41
    PUSH ESI                            ; 00562e26
        ;   Label: LAB_00562e26
    MOV EBX,dword ptr [0x00680d50]      ; 00562e27 | g_CScriptInstance | g_CScriptPtr
    PUSH EBX                            ; 00562e2d | g_CScriptInstance
    CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0 ; 00562e2e
        ;   XREF to: 005676e0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_removeEventXRef_FUN_005676e0()
    ADD ESP,0x8                         ; 00562e33
    JMP 0x00562e0d                      ; 00562e36
        ;   XREF to: 00562e0d (UNCONDITIONAL_JUMP)  ; LAB_00562e0d
    INC ESI                             ; 00562e38
        ;   Label: LAB_00562e38
    ADD EDI,0x114                       ; 00562e39
    JMP 0x00562e0d                      ; 00562e3f
        ;   XREF to: 00562e0d (UNCONDITIONAL_JUMP)  ; LAB_00562e0d
    JBE 0x00562e38                      ; 00562e41
        ;   XREF to: 00562e38 (CONDITIONAL_JUMP)  ; LAB_00562e38
        ;   Label: LAB_00562e41
    CMP EAX,0xb                         ; 00562e43
    JZ 0x00562e38                       ; 00562e46
        ;   XREF to: 00562e38 (CONDITIONAL_JUMP)  ; LAB_00562e38
    JMP 0x00562e26                      ; 00562e48
        ;   XREF to: 00562e26 (UNCONDITIONAL_JUMP)  ; LAB_00562e26
    MOV ECX,dword ptr [EBP + 0x14]      ; 00562e4a
        ;   Label: LAB_00562e4a
    PUSH ECX                            ; 00562e4d
    LEA EBX,[ESP + 0x2f90]              ; 00562e4e
    PUSH EBX                            ; 00562e55
    PUSH EAX                            ; 00562e56 | g_CScriptInstance
    CALL core_script.cpp_FUN_005677a0   ; 00562e57
        ;   XREF to: 005677a0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005677a0()
    ADD ESP,0xc                         ; 00562e5c
    TEST EAX,EAX                        ; 00562e5f
    JZ 0x005629b2                       ; 00562e61
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    MOV ESI,0x1                         ; 00562e67
    MOV EAX,ESI                         ; 00562e6c
    MOV ESP,EBP                         ; 00562e6e
    POP EBP                             ; 00562e70
    POP EDI                             ; 00562e71
    POP ESI                             ; 00562e72
    POP EBX                             ; 00562e73
    RET                                 ; 00562e74
    LEA EAX,[ESP + 0x124c]              ; 00562e75
        ;   Label: caseD_8
    PUSH EAX                            ; 00562e7c
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00562e7d
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00562e82
    MOV EAX,0x643bba                    ; 00562e85 | = "walk"
    PUSH EAX                            ; 00562e8a | = "walk"
    LEA EAX,[ESP + 0x1250]              ; 00562e8b
    PUSH EAX                            ; 00562e92
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00562e93
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00562e98
    MOV EAX,0x643bbf                    ; 00562e9b | = "backup"
    PUSH EAX                            ; 00562ea0 | = "backup"
    LEA EAX,[ESP + 0x1250]              ; 00562ea1
    PUSH EAX                            ; 00562ea8
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00562ea9
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00562eae
    MOV EAX,0x643bc6                    ; 00562eb1 | = "run"
    PUSH EAX                            ; 00562eb6 | = "run"
    LEA EAX,[ESP + 0x1250]              ; 00562eb7
    PUSH EAX                            ; 00562ebe
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00562ebf
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00562ec4
    MOV EAX,0x643bca                    ; 00562ec7 | = "fire"
    PUSH EAX                            ; 00562ecc | = "fire"
    LEA EAX,[ESP + 0x1250]              ; 00562ecd
    PUSH EAX                            ; 00562ed4
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00562ed5
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00562eda
    MOV EAX,0x643bcf                    ; 00562edd | = "useItem"
    PUSH EAX                            ; 00562ee2 | = "useItem"
    LEA EAX,[ESP + 0x1250]              ; 00562ee3
    PUSH EAX                            ; 00562eea
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00562eeb
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00562ef0
    MOV EAX,0x643bd7                    ; 00562ef3 | = "light"
    PUSH EAX                            ; 00562ef8 | = "light"
    LEA EAX,[ESP + 0x1250]              ; 00562ef9
    PUSH EAX                            ; 00562f00
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00562f01
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00562f06
    MOV EAX,0x643bdd                    ; 00562f09 | = "draw"
    PUSH EAX                            ; 00562f0e | = "draw"
    LEA EAX,[ESP + 0x1250]              ; 00562f0f
    PUSH EAX                            ; 00562f16
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00562f17
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00562f1c
    MOV EAX,0x643be2                    ; 00562f1f | = "jump"
    PUSH EAX                            ; 00562f24 | = "jump"
    LEA EAX,[ESP + 0x1250]              ; 00562f25
    PUSH EAX                            ; 00562f2c
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00562f2d
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00562f32
    PUSH 0x0                            ; 00562f35
    MOV EDI,dword ptr [EBP + 0x14]      ; 00562f37
    PUSH EDI                            ; 00562f3a
    LEA EAX,[ESP + 0x1254]              ; 00562f3b
    PUSH EAX                            ; 00562f42
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 00562f43
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 00562f48
    PUSH EAX                            ; 00562f4b
    LEA EAX,[ESP + 0x2f94]              ; 00562f4c
    PUSH EAX                            ; 00562f53
    LEA EAX,[ESP + 0x1258]              ; 00562f54
    PUSH EAX                            ; 00562f5b
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00562f5c
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00562f61
    MOV EBX,EAX                         ; 00562f64
    TEST EAX,EAX                        ; 00562f66
    JL 0x00562fb7                       ; 00562f68
        ;   XREF to: 00562fb7 (CONDITIONAL_JUMP)  ; LAB_00562fb7
    PUSH EAX                            ; 00562f6a
    LEA EAX,[ESP + 0x1250]              ; 00562f6b
    PUSH EAX                            ; 00562f72
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00562f73
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00562f78
    MOV ESI,EAX                         ; 00562f7b
    PUSH EDI                            ; 00562f7d
    MOV AL,byte ptr [ESI]               ; 00562f7e
        ;   Label: LAB_00562f7e
    MOV byte ptr [EDI],AL               ; 00562f80
    CMP AL,0x0                          ; 00562f82
    JZ 0x00562f96                       ; 00562f84
        ;   XREF to: 00562f96 (CONDITIONAL_JUMP)  ; LAB_00562f96
    MOV AL,byte ptr [ESI + 0x1]         ; 00562f86
    ADD ESI,0x2                         ; 00562f89
    MOV byte ptr [EDI + 0x1],AL         ; 00562f8c
    ADD EDI,0x2                         ; 00562f8f
    CMP AL,0x0                          ; 00562f92
    JNZ 0x00562f7e                      ; 00562f94
        ;   XREF to: 00562f7e (CONDITIONAL_JUMP)  ; LAB_00562f7e
    POP EDI                             ; 00562f96
        ;   Label: LAB_00562f96
    PUSH 0x0                            ; 00562f97
    LEA EAX,[ESP + 0x1250]              ; 00562f99
    PUSH EAX                            ; 00562fa0
    MOV ESI,0x1                         ; 00562fa1
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00562fa6
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00562fab
    MOV EAX,ESI                         ; 00562fae
    MOV ESP,EBP                         ; 00562fb0
    POP EBP                             ; 00562fb2
    POP EDI                             ; 00562fb3
    POP ESI                             ; 00562fb4
    POP EBX                             ; 00562fb5
    RET                                 ; 00562fb6
    PUSH 0x0                            ; 00562fb7
        ;   Label: LAB_00562fb7
    LEA EAX,[ESP + 0x1250]              ; 00562fb9
    PUSH EAX                            ; 00562fc0
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00562fc1
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00562fc6
    XOR ESI,ESI                         ; 00562fc9
    MOV EAX,ESI                         ; 00562fcb
    MOV ESP,EBP                         ; 00562fcd
    POP EBP                             ; 00562fcf
    POP EDI                             ; 00562fd0
    POP ESI                             ; 00562fd1
    POP EBX                             ; 00562fd2
    RET                                 ; 00562fd3
    LEA EAX,[ESP + 0x15f4]              ; 00562fd4
        ;   Label: caseD_9
    PUSH EAX                            ; 00562fdb
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00562fdc
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00562fe1
    MOV EAX,0x643be7                    ; 00562fe4 | = "generic"
    PUSH EAX                            ; 00562fe9 | = "generic"
    LEA EAX,[ESP + 0x15f8]              ; 00562fea
    PUSH EAX                            ; 00562ff1
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00562ff2
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00562ff7
    MOV EAX,0x643bef                    ; 00562ffa | = "drown"
    PUSH EAX                            ; 00562fff | = "drown"
    LEA EAX,[ESP + 0x15f8]              ; 00563000
    PUSH EAX                            ; 00563007
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563008
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0056300d
    MOV EAX,0x643bf5                    ; 00563010 | = "fall"
    PUSH EAX                            ; 00563015 | = "fall"
    LEA EAX,[ESP + 0x15f8]              ; 00563016
    PUSH EAX                            ; 0056301d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0056301e
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563023
    MOV EAX,0x643bfa                    ; 00563026 | = "explode"
    PUSH EAX                            ; 0056302b | = "explode"
    LEA EAX,[ESP + 0x15f8]              ; 0056302c
    PUSH EAX                            ; 00563033
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563034
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563039
    MOV EAX,0x643c02                    ; 0056303c | = "shatter"
    PUSH EAX                            ; 00563041 | = "shatter"
    LEA EAX,[ESP + 0x15f8]              ; 00563042
    PUSH EAX                            ; 00563049
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0056304a
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0056304f
    MOV EAX,0x643c0a                    ; 00563052 | = "fallApart"
    PUSH EAX                            ; 00563057 | = "fallApart"
    LEA EAX,[ESP + 0x15f8]              ; 00563058
    PUSH EAX                            ; 0056305f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563060
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563065
    MOV EAX,0x643c14                    ; 00563068 | = "electrocute"
    PUSH EAX                            ; 0056306d | = "electrocute"
    LEA EAX,[ESP + 0x15f8]              ; 0056306e
    PUSH EAX                            ; 00563075
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563076
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0056307b
    MOV EAX,0x643c20                    ; 0056307e | = "chopped"
    PUSH EAX                            ; 00563083 | = "chopped"
    LEA EAX,[ESP + 0x15f8]              ; 00563084
    PUSH EAX                            ; 0056308b
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0056308c
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563091
    MOV EAX,0x643c28                    ; 00563094 | = "crushed"
    PUSH EAX                            ; 00563099 | = "crushed"
    LEA EAX,[ESP + 0x15f8]              ; 0056309a
    PUSH EAX                            ; 005630a1
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005630a2
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005630a7
    MOV EAX,0x643c30                    ; 005630aa | = "impale"
    PUSH EAX                            ; 005630af | = "impale"
    LEA EAX,[ESP + 0x15f8]              ; 005630b0
    PUSH EAX                            ; 005630b7
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005630b8
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005630bd
    MOV EAX,0x643c37                    ; 005630c0 | = "fire"
    PUSH EAX                            ; 005630c5 | = "fire"
    LEA EAX,[ESP + 0x15f8]              ; 005630c6
    PUSH EAX                            ; 005630cd
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005630ce
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005630d3
    PUSH 0x0                            ; 005630d6
    MOV ESI,dword ptr [EBP + 0x14]      ; 005630d8
    PUSH ESI                            ; 005630db
    LEA EAX,[ESP + 0x15fc]              ; 005630dc
    PUSH EAX                            ; 005630e3
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 005630e4
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 005630e9
    PUSH EAX                            ; 005630ec
    LEA EAX,[ESP + 0x2f94]              ; 005630ed
    PUSH EAX                            ; 005630f4
    LEA EAX,[ESP + 0x1600]              ; 005630f5
    PUSH EAX                            ; 005630fc
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005630fd
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00563102
    TEST EAX,EAX                        ; 00563105
    JL 0x00563159                       ; 00563107
        ;   XREF to: 00563159 (CONDITIONAL_JUMP)  ; LAB_00563159
    PUSH EAX                            ; 00563109
    LEA EAX,[ESP + 0x15f8]              ; 0056310a
    PUSH EAX                            ; 00563111
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00563112
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00563117
    MOV ESI,EAX                         ; 0056311a
    MOV EDI,dword ptr [EBP + 0x14]      ; 0056311c
    PUSH EDI                            ; 0056311f
    MOV AL,byte ptr [ESI]               ; 00563120
        ;   Label: LAB_00563120
    MOV byte ptr [EDI],AL               ; 00563122
    CMP AL,0x0                          ; 00563124
    JZ 0x00563138                       ; 00563126
        ;   XREF to: 00563138 (CONDITIONAL_JUMP)  ; LAB_00563138
    MOV AL,byte ptr [ESI + 0x1]         ; 00563128
    ADD ESI,0x2                         ; 0056312b
    MOV byte ptr [EDI + 0x1],AL         ; 0056312e
    ADD EDI,0x2                         ; 00563131
    CMP AL,0x0                          ; 00563134
    JNZ 0x00563120                      ; 00563136
        ;   XREF to: 00563120 (CONDITIONAL_JUMP)  ; LAB_00563120
    POP EDI                             ; 00563138
        ;   Label: LAB_00563138
    PUSH 0x0                            ; 00563139
    LEA EAX,[ESP + 0x15f8]              ; 0056313b
    PUSH EAX                            ; 00563142
    MOV ESI,0x1                         ; 00563143
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563148
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0056314d
    MOV EAX,ESI                         ; 00563150
    MOV ESP,EBP                         ; 00563152
    POP EBP                             ; 00563154
    POP EDI                             ; 00563155
    POP ESI                             ; 00563156
    POP EBX                             ; 00563157
    RET                                 ; 00563158
    PUSH 0x0                            ; 00563159
        ;   Label: LAB_00563159
    LEA EAX,[ESP + 0x15f8]              ; 0056315b
    PUSH EAX                            ; 00563162
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563163
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563168
    XOR ESI,ESI                         ; 0056316b
    MOV EAX,ESI                         ; 0056316d
    MOV ESP,EBP                         ; 0056316f
    POP EBP                             ; 00563171
    POP EDI                             ; 00563172
    POP ESI                             ; 00563173
    POP EBX                             ; 00563174
    RET                                 ; 00563175
    LEA EAX,[ESP + 0x1d44]              ; 00563176
        ;   Label: caseD_a
    PUSH EAX                            ; 0056317d
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0056317e
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00563183
    MOV EAX,0x643c3c                    ; 00563186 | = "generic"
    PUSH EAX                            ; 0056318b | = "generic"
    LEA EAX,[ESP + 0x1d48]              ; 0056318c
    PUSH EAX                            ; 00563193
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563194
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563199
    MOV EAX,0x643c44                    ; 0056319c | = "bullet"
    PUSH EAX                            ; 005631a1 | = "bullet"
    LEA EAX,[ESP + 0x1d48]              ; 005631a2
    PUSH EAX                            ; 005631a9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005631aa
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005631af
    MOV EAX,0x643c4b                    ; 005631b2 | = "fire"
    PUSH EAX                            ; 005631b7 | = "fire"
    LEA EAX,[ESP + 0x1d48]              ; 005631b8
    PUSH EAX                            ; 005631bf
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005631c0
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005631c5
    MOV EAX,0x643c50                    ; 005631c8 | = "blade"
    PUSH EAX                            ; 005631cd | = "blade"
    LEA EAX,[ESP + 0x1d48]              ; 005631ce
    PUSH EAX                            ; 005631d5
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005631d6
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005631db
    MOV EAX,0x643c56                    ; 005631de | = "stake"
    PUSH EAX                            ; 005631e3 | = "stake"
    LEA EAX,[ESP + 0x1d48]              ; 005631e4
    PUSH EAX                            ; 005631eb
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005631ec
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005631f1
    MOV EAX,0x643c5c                    ; 005631f4 | = "gas"
    PUSH EAX                            ; 005631f9 | = "gas"
    LEA EAX,[ESP + 0x1d48]              ; 005631fa
    PUSH EAX                            ; 00563201
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563202
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563207
    MOV EAX,0x643c60                    ; 0056320a | = "electrocute"
    PUSH EAX                            ; 0056320f | = "electrocute"
    LEA EAX,[ESP + 0x1d48]              ; 00563210
    PUSH EAX                            ; 00563217
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563218
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0056321d
    PUSH 0x0                            ; 00563220
    MOV EBX,dword ptr [EBP + 0x14]      ; 00563222
    PUSH EBX                            ; 00563225
    LEA EAX,[ESP + 0x1d4c]              ; 00563226
    PUSH EAX                            ; 0056322d
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 0056322e
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 00563233
    PUSH EAX                            ; 00563236
    LEA EAX,[ESP + 0x2f94]              ; 00563237
    PUSH EAX                            ; 0056323e
    LEA EAX,[ESP + 0x1d50]              ; 0056323f
    PUSH EAX                            ; 00563246
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00563247
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0056324c
    MOV EBX,EAX                         ; 0056324f
    TEST EAX,EAX                        ; 00563251
    JL 0x005632a5                       ; 00563253
        ;   XREF to: 005632a5 (CONDITIONAL_JUMP)  ; LAB_005632a5
    PUSH EAX                            ; 00563255
    LEA EAX,[ESP + 0x1d48]              ; 00563256
    PUSH EAX                            ; 0056325d
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0056325e
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00563263
    MOV ESI,EAX                         ; 00563266
    MOV EDI,dword ptr [EBP + 0x14]      ; 00563268
    PUSH EDI                            ; 0056326b
    MOV AL,byte ptr [ESI]               ; 0056326c
        ;   Label: LAB_0056326c
    MOV byte ptr [EDI],AL               ; 0056326e
    CMP AL,0x0                          ; 00563270
    JZ 0x00563284                       ; 00563272
        ;   XREF to: 00563284 (CONDITIONAL_JUMP)  ; LAB_00563284
    MOV AL,byte ptr [ESI + 0x1]         ; 00563274
    ADD ESI,0x2                         ; 00563277
    MOV byte ptr [EDI + 0x1],AL         ; 0056327a
    ADD EDI,0x2                         ; 0056327d
    CMP AL,0x0                          ; 00563280
    JNZ 0x0056326c                      ; 00563282
        ;   XREF to: 0056326c (CONDITIONAL_JUMP)  ; LAB_0056326c
    POP EDI                             ; 00563284
        ;   Label: LAB_00563284
    PUSH 0x0                            ; 00563285
    LEA EAX,[ESP + 0x1d48]              ; 00563287
    PUSH EAX                            ; 0056328e
    MOV ESI,0x1                         ; 0056328f
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563294
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563299
    MOV EAX,ESI                         ; 0056329c
    MOV ESP,EBP                         ; 0056329e
    POP EBP                             ; 005632a0
    POP EDI                             ; 005632a1
    POP ESI                             ; 005632a2
    POP EBX                             ; 005632a3
    RET                                 ; 005632a4
    PUSH 0x0                            ; 005632a5
        ;   Label: LAB_005632a5
    LEA EAX,[ESP + 0x1d48]              ; 005632a7
    PUSH EAX                            ; 005632ae
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005632af
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 005632b4
    XOR ESI,ESI                         ; 005632b7
    MOV EAX,ESI                         ; 005632b9
    MOV ESP,EBP                         ; 005632bb
    POP EBP                             ; 005632bd
    POP EDI                             ; 005632be
    POP ESI                             ; 005632bf
    POP EBX                             ; 005632c0
    RET                                 ; 005632c1
    MOV ECX,dword ptr [0x00680d50]      ; 005632c2 | g_CScriptInstance | g_CScriptPtr
        ;   Label: caseD_b
    PUSH ECX                            ; 005632c8 | g_CScriptInstance
    XOR ESI,ESI                         ; 005632c9
    XOR EDI,EDI                         ; 005632cb
    CALL core_script.cpp_FUN_00567630   ; 005632cd
        ;   XREF to: 00567630 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00567630()
    ADD ESP,0x4                         ; 005632d2
    MOV EAX,[0x00680d50]                ; 005632d5 | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_005632d5
    CMP ESI,dword ptr [EAX + 0x28]      ; 005632da | g_CScriptInstance.padding_0x18[16]
    JGE 0x00563312                      ; 005632dd
        ;   XREF to: 00563312 (CONDITIONAL_JUMP)  ; LAB_00563312
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005632df | g_CScriptInstance.padding_0x18[20]
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100] ; 005632e2
    CMP EAX,0x8                         ; 005632e9
    JNC 0x00563309                      ; 005632ec
        ;   XREF to: 00563309 (CONDITIONAL_JUMP)  ; LAB_00563309
    PUSH ESI                            ; 005632ee
        ;   Label: LAB_005632ee
    MOV EBX,dword ptr [0x00680d50]      ; 005632ef | g_CScriptInstance | g_CScriptPtr
    PUSH EBX                            ; 005632f5 | g_CScriptInstance
    CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0 ; 005632f6
        ;   XREF to: 005676e0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_removeEventXRef_FUN_005676e0()
    ADD ESP,0x8                         ; 005632fb
    JMP 0x005632d5                      ; 005632fe
        ;   XREF to: 005632d5 (UNCONDITIONAL_JUMP)  ; LAB_005632d5
    INC ESI                             ; 00563300
        ;   Label: LAB_00563300
    ADD EDI,0x114                       ; 00563301
    JMP 0x005632d5                      ; 00563307
        ;   XREF to: 005632d5 (UNCONDITIONAL_JUMP)  ; LAB_005632d5
    JBE 0x00563300                      ; 00563309
        ;   XREF to: 00563300 (CONDITIONAL_JUMP)  ; LAB_00563300
        ;   Label: LAB_00563309
    CMP EAX,0x9                         ; 0056330b
    JZ 0x00563300                       ; 0056330e
        ;   XREF to: 00563300 (CONDITIONAL_JUMP)  ; LAB_00563300
    JMP 0x005632ee                      ; 00563310
        ;   XREF to: 005632ee (UNCONDITIONAL_JUMP)  ; LAB_005632ee
    MOV ECX,dword ptr [EBP + 0x14]      ; 00563312
        ;   Label: LAB_00563312
    PUSH ECX                            ; 00563315
    LEA EBX,[ESP + 0x2f90]              ; 00563316
    PUSH EBX                            ; 0056331d
    PUSH EAX                            ; 0056331e | g_CScriptInstance
    CALL core_script.cpp_FUN_005677a0   ; 0056331f
        ;   XREF to: 005677a0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005677a0()
    ADD ESP,0xc                         ; 00563324
    TEST EAX,EAX                        ; 00563327
    JZ 0x005629b2                       ; 00563329
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    MOV ESI,0x1                         ; 0056332f
    MOV EAX,ESI                         ; 00563334
    MOV ESP,EBP                         ; 00563336
    POP EBP                             ; 00563338
    POP EDI                             ; 00563339
    POP ESI                             ; 0056333a
    POP EBX                             ; 0056333b
    RET                                 ; 0056333c
    PUSH 0x1                            ; 0056333d
        ;   Label: caseD_d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056333f
    PUSH EAX                            ; 00563342
    PUSH 0x643c6c                       ; 00563343 | = "*.wav"
    PUSH 0x643c72                       ; 00563348 | = "sound"
    LEA EAX,[ESP + 0x2f9c]              ; 0056334d
    PUSH EAX                            ; 00563354
    MOV EDX,dword ptr [0x00678a60]      ; 00563355 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0056335b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0056335c
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 00563361
    TEST EAX,EAX                        ; 00563364
    JZ 0x005629b2                       ; 00563366
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    MOV ESI,0x1                         ; 0056336c
    MOV EAX,ESI                         ; 00563371
    MOV ESP,EBP                         ; 00563373
    POP EBP                             ; 00563375
    POP EDI                             ; 00563376
    POP ESI                             ; 00563377
    POP EBX                             ; 00563378
    RET                                 ; 00563379
    PUSH 0x643c78                       ; 0056337a | = "Can't pick this yet"
        ;   Label: caseD_e
    MOV EDI,dword ptr [0x00678a60]      ; 0056337f | g_CEditorToolsPtr
    PUSH EDI                            ; 00563385 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00563386
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0056338b
    XOR ESI,ESI                         ; 0056338e
    MOV EAX,ESI                         ; 00563390
    MOV ESP,EBP                         ; 00563392
    POP EBP                             ; 00563394
    POP EDI                             ; 00563395
    POP ESI                             ; 00563396
    POP EBX                             ; 00563397
    RET                                 ; 00563398
    MOV ESI,dword ptr [0x00680d50]      ; 00563399 | g_CScriptPtr
        ;   Label: caseD_f
    PUSH ESI                            ; 0056339f | g_CScriptInstance
    XOR EDI,EDI                         ; 005633a0
    CALL core_script.cpp_FUN_00567630   ; 005633a2
        ;   XREF to: 00567630 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00567630()
    ADD ESP,0x4                         ; 005633a7
    XOR ESI,ESI                         ; 005633aa
    MOV EAX,[0x00680d50]                ; 005633ac | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_005633ac
    CMP ESI,dword ptr [EAX + 0x28]      ; 005633b1 | g_CScriptInstance.padding_0x18[16]
    JGE 0x005633e8                      ; 005633b4
        ;   XREF to: 005633e8 (CONDITIONAL_JUMP)  ; LAB_005633e8
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005633b6 | g_CScriptInstance.padding_0x18[20]
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100] ; 005633b9
    CMP EAX,0x5                         ; 005633c0
    JNC 0x005633df                      ; 005633c3
        ;   XREF to: 005633df (CONDITIONAL_JUMP)  ; LAB_005633df
    PUSH ESI                            ; 005633c5
        ;   Label: LAB_005633c5
    MOV EAX,[0x00680d50]                ; 005633c6 | g_CScriptInstance | g_CScriptPtr
    PUSH EAX                            ; 005633cb | g_CScriptInstance
    CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0 ; 005633cc
        ;   XREF to: 005676e0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_removeEventXRef_FUN_005676e0()
    ADD ESP,0x8                         ; 005633d1
    JMP 0x005633ac                      ; 005633d4
        ;   XREF to: 005633ac (UNCONDITIONAL_JUMP)  ; LAB_005633ac
    INC ESI                             ; 005633d6
        ;   Label: LAB_005633d6
    ADD EDI,0x114                       ; 005633d7
    JMP 0x005633ac                      ; 005633dd
        ;   XREF to: 005633ac (UNCONDITIONAL_JUMP)  ; LAB_005633ac
    JBE 0x005633d6                      ; 005633df
        ;   XREF to: 005633d6 (CONDITIONAL_JUMP)  ; LAB_005633d6
        ;   Label: LAB_005633df
    CMP EAX,0x6                         ; 005633e1
    JZ 0x005633d6                       ; 005633e4
        ;   XREF to: 005633d6 (CONDITIONAL_JUMP)  ; LAB_005633d6
    JMP 0x005633c5                      ; 005633e6
        ;   XREF to: 005633c5 (UNCONDITIONAL_JUMP)  ; LAB_005633c5
    MOV EBX,dword ptr [EBP + 0x14]      ; 005633e8
        ;   Label: LAB_005633e8
    PUSH EBX                            ; 005633eb
    LEA EBX,[ESP + 0x2f90]              ; 005633ec
    PUSH EBX                            ; 005633f3
    PUSH EAX                            ; 005633f4 | g_CScriptInstance
    CALL core_script.cpp_FUN_005677a0   ; 005633f5
        ;   XREF to: 005677a0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005677a0()
    ADD ESP,0xc                         ; 005633fa
    TEST EAX,EAX                        ; 005633fd
    JZ 0x005629b2                       ; 005633ff
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    MOV ESI,0x1                         ; 00563405
    MOV EAX,ESI                         ; 0056340a
    MOV ESP,EBP                         ; 0056340c
    POP EBP                             ; 0056340e
    POP EDI                             ; 0056340f
    POP ESI                             ; 00563410
    POP EBX                             ; 00563411
    RET                                 ; 00563412
    LEA EAX,[ESP + 0x20ec]              ; 00563413
        ;   Label: caseD_11
    PUSH EAX                            ; 0056341a
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0056341b
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00563420
    PUSH 0x643c8c                       ; 00563423 | = "true"
    LEA EAX,[ESP + 0x20f0]              ; 00563428
    PUSH EAX                            ; 0056342f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563430
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563435
    PUSH 0x643c91                       ; 00563438 | = "false"
    LEA EAX,[ESP + 0x20f0]              ; 0056343d
    PUSH EAX                            ; 00563444
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563445
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0056344a
    PUSH 0x643c97                       ; 0056344d | = "bottom"
    LEA EAX,[ESP + 0x20f0]              ; 00563452
    PUSH EAX                            ; 00563459
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0056345a
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0056345f
    PUSH 0x0                            ; 00563462
    MOV EBX,dword ptr [EBP + 0x14]      ; 00563464
    PUSH EBX                            ; 00563467
    LEA EAX,[ESP + 0x20f4]              ; 00563468
    PUSH EAX                            ; 0056346f
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 00563470
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 00563475
    PUSH EAX                            ; 00563478
    LEA EAX,[ESP + 0x2f94]              ; 00563479
    PUSH EAX                            ; 00563480
    LEA EAX,[ESP + 0x20f8]              ; 00563481
    PUSH EAX                            ; 00563488
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00563489
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0056348e
    TEST EAX,EAX                        ; 00563491
    JL 0x005634e4                       ; 00563493
        ;   XREF to: 005634e4 (CONDITIONAL_JUMP)  ; LAB_005634e4
    PUSH EAX                            ; 00563495
    LEA EAX,[ESP + 0x20f0]              ; 00563496
    PUSH EAX                            ; 0056349d
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0056349e
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005634a3
    MOV EDI,EBX                         ; 005634a6
    MOV ESI,EAX                         ; 005634a8
    PUSH EDI                            ; 005634aa
    MOV AL,byte ptr [ESI]               ; 005634ab
        ;   Label: LAB_005634ab
    MOV byte ptr [EDI],AL               ; 005634ad
    CMP AL,0x0                          ; 005634af
    JZ 0x005634c3                       ; 005634b1
        ;   XREF to: 005634c3 (CONDITIONAL_JUMP)  ; LAB_005634c3
    MOV AL,byte ptr [ESI + 0x1]         ; 005634b3
    ADD ESI,0x2                         ; 005634b6
    MOV byte ptr [EDI + 0x1],AL         ; 005634b9
    ADD EDI,0x2                         ; 005634bc
    CMP AL,0x0                          ; 005634bf
    JNZ 0x005634ab                      ; 005634c1
        ;   XREF to: 005634ab (CONDITIONAL_JUMP)  ; LAB_005634ab
    POP EDI                             ; 005634c3
        ;   Label: LAB_005634c3
    PUSH 0x0                            ; 005634c4
    LEA EAX,[ESP + 0x20f0]              ; 005634c6
    PUSH EAX                            ; 005634cd
    MOV ESI,0x1                         ; 005634ce
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005634d3
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 005634d8
    MOV EAX,ESI                         ; 005634db
    MOV ESP,EBP                         ; 005634dd
    POP EBP                             ; 005634df
    POP EDI                             ; 005634e0
    POP ESI                             ; 005634e1
    POP EBX                             ; 005634e2
    RET                                 ; 005634e3
    PUSH 0x0                            ; 005634e4
        ;   Label: LAB_005634e4
    LEA EAX,[ESP + 0x20f0]              ; 005634e6
    PUSH EAX                            ; 005634ed
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005634ee
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 005634f3
    XOR ESI,ESI                         ; 005634f6
    MOV EAX,ESI                         ; 005634f8
    MOV ESP,EBP                         ; 005634fa
    POP EBP                             ; 005634fc
    POP EDI                             ; 005634fd
    POP ESI                             ; 005634fe
    POP EBX                             ; 005634ff
    RET                                 ; 00563500
    LEA EAX,[ESP + 0x34e8]              ; 00563501
        ;   Label: caseD_12
    PUSH EAX                            ; 00563508
    LEA EAX,[ESP + 0x32ec]              ; 00563509
    PUSH EAX                            ; 00563510
    LEA EAX,[ESP + 0x33f0]              ; 00563511
    PUSH EAX                            ; 00563518
    PUSH 0x0                            ; 00563519
    ADD EBX,0x25c                       ; 0056351b
    PUSH EBX                            ; 00563521
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00563522
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00563527
    LEA EAX,[ESP + 0x34e8]              ; 0056352a
    PUSH EAX                            ; 00563531
    LEA EAX,[ESP + 0x32ec]              ; 00563532
    PUSH EAX                            ; 00563539
    PUSH 0x0                            ; 0056353a
    PUSH 0x0                            ; 0056353c
    LEA EAX,[ESP + 0x31f4]              ; 0056353e
    PUSH EAX                            ; 00563545
    CALL crt_file.c_makepath_FUN_005febfc ; 00563546
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0056354b
    PUSH 0x1                            ; 0056354e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00563550
    PUSH EDX                            ; 00563553
    LEA EAX,[ESP + 0x31ec]              ; 00563554
    PUSH EAX                            ; 0056355b
    LEA EAX,[ESP + 0x33f4]              ; 0056355c
    PUSH EAX                            ; 00563563
    LEA EAX,[ESP + 0x2f9c]              ; 00563564
    PUSH EAX                            ; 0056356b
    MOV ECX,dword ptr [0x00678a60]      ; 0056356c | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00563572 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 00563573
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 00563578
    TEST EAX,EAX                        ; 0056357b
    JZ 0x005629b2                       ; 0056357d
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    MOV ESI,0x1                         ; 00563583
    MOV EAX,ESI                         ; 00563588
    MOV ESP,EBP                         ; 0056358a
    POP EBP                             ; 0056358c
    POP EDI                             ; 0056358d
    POP ESI                             ; 0056358e
    POP EBX                             ; 0056358f
    RET                                 ; 00563590
    LEA EAX,[ESP + 0x2494]              ; 00563591
        ;   Label: caseD_13
    PUSH EAX                            ; 00563598
    XOR EDI,EDI                         ; 00563599
    XOR ESI,ESI                         ; 0056359b
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0056359d
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005635a2
    MOV EAX,[0x006810c8]                ; 005635a5 | g_CDemonSetPtr
        ;   Label: LAB_005635a5
    CMP EDI,dword ptr [EAX + 0x19a2c]   ; 005635aa | g_CDemonSetInstance.light_count
    JGE 0x005635e4                      ; 005635b0
        ;   XREF to: 005635e4 (CONDITIONAL_JUMP)  ; LAB_005635e4
    LEA EBX,[EAX + ESI*0x1]             ; 005635b2 | g_CDemonSetInstance | DAT_03115b10
    CMP dword ptr [EBX + 0x19a30],0x0   ; 005635b5 | g_CDemonSetInstance.lights[0].light_type | DAT_0312f540
    JZ 0x005635c7                       ; 005635bc
        ;   XREF to: 005635c7 (CONDITIONAL_JUMP)  ; LAB_005635c7
    INC EDI                             ; 005635be
        ;   Label: LAB_005635be
    ADD ESI,0x1898                      ; 005635bf
    JMP 0x005635a5                      ; 005635c5
        ;   XREF to: 005635a5 (UNCONDITIONAL_JUMP)  ; LAB_005635a5
    ADD EAX,0x19a30                     ; 005635c7
        ;   Label: LAB_005635c7
    ADD EAX,ESI                         ; 005635cc
    ADD EAX,0x4                         ; 005635ce
    PUSH EAX                            ; 005635d1 | DAT_0312f544
    LEA EAX,[ESP + 0x2498]              ; 005635d2
    PUSH EAX                            ; 005635d9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005635da
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005635df
    JMP 0x005635be                      ; 005635e2
        ;   XREF to: 005635be (UNCONDITIONAL_JUMP)  ; LAB_005635be
    PUSH 0x0                            ; 005635e4
        ;   Label: LAB_005635e4
    MOV ECX,dword ptr [EBP + 0x14]      ; 005635e6
    PUSH ECX                            ; 005635e9
    LEA EAX,[ESP + 0x249c]              ; 005635ea
    PUSH EAX                            ; 005635f1
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 005635f2
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 005635f7
    PUSH EAX                            ; 005635fa
    LEA EAX,[ESP + 0x2f94]              ; 005635fb
    PUSH EAX                            ; 00563602
    LEA EAX,[ESP + 0x24a0]              ; 00563603
    PUSH EAX                            ; 0056360a
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0056360b
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00563610
    TEST EAX,EAX                        ; 00563613
    JL 0x00563667                       ; 00563615
        ;   XREF to: 00563667 (CONDITIONAL_JUMP)  ; LAB_00563667
    PUSH EAX                            ; 00563617
    LEA EAX,[ESP + 0x2498]              ; 00563618
    PUSH EAX                            ; 0056361f
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00563620
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00563625
    MOV ESI,EAX                         ; 00563628
    MOV EDI,dword ptr [EBP + 0x14]      ; 0056362a
    PUSH EDI                            ; 0056362d
    MOV AL,byte ptr [ESI]               ; 0056362e
        ;   Label: LAB_0056362e
    MOV byte ptr [EDI],AL               ; 00563630
    CMP AL,0x0                          ; 00563632
    JZ 0x00563646                       ; 00563634
        ;   XREF to: 00563646 (CONDITIONAL_JUMP)  ; LAB_00563646
    MOV AL,byte ptr [ESI + 0x1]         ; 00563636
    ADD ESI,0x2                         ; 00563639
    MOV byte ptr [EDI + 0x1],AL         ; 0056363c
    ADD EDI,0x2                         ; 0056363f
    CMP AL,0x0                          ; 00563642
    JNZ 0x0056362e                      ; 00563644
        ;   XREF to: 0056362e (CONDITIONAL_JUMP)  ; LAB_0056362e
    POP EDI                             ; 00563646
        ;   Label: LAB_00563646
    PUSH 0x0                            ; 00563647
    LEA EAX,[ESP + 0x2498]              ; 00563649
    PUSH EAX                            ; 00563650
    MOV ESI,0x1                         ; 00563651
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563656
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0056365b
    MOV EAX,ESI                         ; 0056365e
    MOV ESP,EBP                         ; 00563660
    POP EBP                             ; 00563662
    POP EDI                             ; 00563663
    POP ESI                             ; 00563664
    POP EBX                             ; 00563665
    RET                                 ; 00563666
    PUSH 0x0                            ; 00563667
        ;   Label: LAB_00563667
    LEA EAX,[ESP + 0x2498]              ; 00563669
    PUSH EAX                            ; 00563670
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563671
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563676
    XOR ESI,ESI                         ; 00563679
    MOV EAX,ESI                         ; 0056367b
    MOV ESP,EBP                         ; 0056367d
    POP EBP                             ; 0056367f
    POP EDI                             ; 00563680
    POP ESI                             ; 00563681
    POP EBX                             ; 00563682
    RET                                 ; 00563683
    MOV ECX,dword ptr [0x00680d50]      ; 00563684 | g_CScriptInstance | g_CScriptPtr
        ;   Label: caseD_20
    PUSH ECX                            ; 0056368a | g_CScriptInstance
    XOR ESI,ESI                         ; 0056368b
    XOR EDI,EDI                         ; 0056368d
    CALL core_script.cpp_FUN_00567630   ; 0056368f
        ;   XREF to: 00567630 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00567630()
    ADD ESP,0x4                         ; 00563694
    MOV EAX,[0x00680d50]                ; 00563697 | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_00563697
    CMP ESI,dword ptr [EAX + 0x28]      ; 0056369c | g_CScriptInstance.padding_0x18[16]
    JGE 0x005636d1                      ; 0056369f
        ;   XREF to: 005636d1 (CONDITIONAL_JUMP)  ; LAB_005636d1
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005636a1 | g_CScriptInstance.padding_0x18[20]
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100] ; 005636a4
    CMP EAX,0x4                         ; 005636ab
    JBE 0x005636ca                      ; 005636ae
        ;   XREF to: 005636ca (CONDITIONAL_JUMP)  ; switchD
    PUSH ESI                            ; 005636b0
        ;   Label: default
    MOV EAX,[0x00680d50]                ; 005636b1 | g_CScriptInstance | g_CScriptPtr
    PUSH EAX                            ; 005636b6 | g_CScriptInstance
    CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0 ; 005636b7
        ;   XREF to: 005676e0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_removeEventXRef_FUN_005676e0()
    ADD ESP,0x8                         ; 005636bc
    JMP 0x00563697                      ; 005636bf
        ;   XREF to: 00563697 (UNCONDITIONAL_JUMP)  ; LAB_00563697
    INC ESI                             ; 005636c1
        ;   Label: caseD_0
    ADD EDI,0x114                       ; 005636c2
    JMP 0x00563697                      ; 005636c8
        ;   XREF to: 00563697 (UNCONDITIONAL_JUMP)  ; LAB_00563697
    JMP dword ptr [EAX*0x4 + 0x562888]  ; 005636ca | caseD_4 | switchdataD_00562888
        ;   Label: switchD
    MOV EBX,dword ptr [EBP + 0x14]      ; 005636d1
        ;   Label: LAB_005636d1
    PUSH EBX                            ; 005636d4
    LEA EBX,[ESP + 0x2f90]              ; 005636d5
    PUSH EBX                            ; 005636dc
    PUSH EAX                            ; 005636dd | g_CScriptInstance
    CALL core_script.cpp_FUN_005677a0   ; 005636de
        ;   XREF to: 005677a0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005677a0()
    ADD ESP,0xc                         ; 005636e3
    TEST EAX,EAX                        ; 005636e6
    JZ 0x005629b2                       ; 005636e8
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    MOV ESI,0x1                         ; 005636ee
    MOV EAX,ESI                         ; 005636f3
    MOV ESP,EBP                         ; 005636f5
    POP EBP                             ; 005636f7
    POP EDI                             ; 005636f8
    POP ESI                             ; 005636f9
    POP EBX                             ; 005636fa
    RET                                 ; 005636fb
    MOV ESI,dword ptr [0x00680d50]      ; 005636fc | g_CScriptPtr
        ;   Label: caseD_15
    PUSH ESI                            ; 00563702 | g_CScriptInstance
    XOR EDI,EDI                         ; 00563703
    CALL core_script.cpp_FUN_00567630   ; 00563705
        ;   XREF to: 00567630 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00567630()
    ADD ESP,0x4                         ; 0056370a
    XOR ESI,ESI                         ; 0056370d
    MOV EAX,[0x00680d50]                ; 0056370f | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_0056370f
    CMP ESI,dword ptr [EAX + 0x28]      ; 00563714 | g_CScriptInstance.padding_0x18[16]
    JGE 0x00563747                      ; 00563717
        ;   XREF to: 00563747 (CONDITIONAL_JUMP)  ; LAB_00563747
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00563719 | g_CScriptInstance.padding_0x18[20]
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100] ; 0056371c
    TEST EAX,EAX                        ; 00563723
    JBE 0x0056372c                      ; 00563725
        ;   XREF to: 0056372c (CONDITIONAL_JUMP)  ; LAB_0056372c
    CMP EAX,0x2                         ; 00563727
    JNZ 0x00563735                      ; 0056372a
        ;   XREF to: 00563735 (CONDITIONAL_JUMP)  ; LAB_00563735
    INC ESI                             ; 0056372c
        ;   Label: LAB_0056372c
    ADD EDI,0x114                       ; 0056372d
    JMP 0x0056370f                      ; 00563733
        ;   XREF to: 0056370f (UNCONDITIONAL_JUMP)  ; LAB_0056370f
    PUSH ESI                            ; 00563735
        ;   Label: LAB_00563735
    MOV EBX,dword ptr [0x00680d50]      ; 00563736 | g_CScriptInstance | g_CScriptPtr
    PUSH EBX                            ; 0056373c | g_CScriptInstance
    CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0 ; 0056373d
        ;   XREF to: 005676e0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_removeEventXRef_FUN_005676e0()
    ADD ESP,0x8                         ; 00563742
    JMP 0x0056370f                      ; 00563745
        ;   XREF to: 0056370f (UNCONDITIONAL_JUMP)  ; LAB_0056370f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00563747
        ;   Label: LAB_00563747
    PUSH ECX                            ; 0056374a
    LEA EBX,[ESP + 0x2f90]              ; 0056374b
    PUSH EBX                            ; 00563752
    PUSH EAX                            ; 00563753 | g_CScriptInstance
    CALL core_script.cpp_FUN_005677a0   ; 00563754
        ;   XREF to: 005677a0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005677a0()
    ADD ESP,0xc                         ; 00563759
    TEST EAX,EAX                        ; 0056375c
    JZ 0x005629b2                       ; 0056375e
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    MOV ESI,0x1                         ; 00563764
    MOV EAX,ESI                         ; 00563769
    MOV ESP,EBP                         ; 0056376b
    POP EBP                             ; 0056376d
    POP EDI                             ; 0056376e
    POP ESI                             ; 0056376f
    POP EBX                             ; 00563770
    RET                                 ; 00563771
    MOV EBX,dword ptr [0x00680d50]      ; 00563772 | g_CScriptInstance | g_CScriptPtr
        ;   Label: caseD_16
    PUSH EBX                            ; 00563778 | g_CScriptInstance
    XOR ESI,ESI                         ; 00563779
    XOR EDI,EDI                         ; 0056377b
    CALL core_script.cpp_FUN_00567630   ; 0056377d
        ;   XREF to: 00567630 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00567630()
    ADD ESP,0x4                         ; 00563782
    MOV EAX,[0x00680d50]                ; 00563785 | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_00563785
    CMP ESI,dword ptr [EAX + 0x28]      ; 0056378a | g_CScriptInstance.padding_0x18[16]
    JGE 0x005637bd                      ; 0056378d
        ;   XREF to: 005637bd (CONDITIONAL_JUMP)  ; LAB_005637bd
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0056378f | g_CScriptInstance.padding_0x18[20]
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100] ; 00563792
    TEST EAX,EAX                        ; 00563799
    JBE 0x005637a2                      ; 0056379b
        ;   XREF to: 005637a2 (CONDITIONAL_JUMP)  ; LAB_005637a2
    CMP EAX,0x3                         ; 0056379d
    JNZ 0x005637ab                      ; 005637a0
        ;   XREF to: 005637ab (CONDITIONAL_JUMP)  ; LAB_005637ab
    INC ESI                             ; 005637a2
        ;   Label: LAB_005637a2
    ADD EDI,0x114                       ; 005637a3
    JMP 0x00563785                      ; 005637a9
        ;   XREF to: 00563785 (UNCONDITIONAL_JUMP)  ; LAB_00563785
    PUSH ESI                            ; 005637ab
        ;   Label: LAB_005637ab
    MOV EBX,dword ptr [0x00680d50]      ; 005637ac | g_CScriptInstance | g_CScriptPtr
    PUSH EBX                            ; 005637b2 | g_CScriptInstance
    CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0 ; 005637b3
        ;   XREF to: 005676e0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_removeEventXRef_FUN_005676e0()
    ADD ESP,0x8                         ; 005637b8
    JMP 0x00563785                      ; 005637bb
        ;   XREF to: 00563785 (UNCONDITIONAL_JUMP)  ; LAB_00563785
    MOV ECX,dword ptr [EBP + 0x14]      ; 005637bd
        ;   Label: LAB_005637bd
    PUSH ECX                            ; 005637c0
    LEA EBX,[ESP + 0x2f90]              ; 005637c1
    PUSH EBX                            ; 005637c8
    PUSH EAX                            ; 005637c9 | g_CScriptInstance
    CALL core_script.cpp_FUN_005677a0   ; 005637ca
        ;   XREF to: 005677a0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005677a0()
    ADD ESP,0xc                         ; 005637cf
    TEST EAX,EAX                        ; 005637d2
    JZ 0x005629b2                       ; 005637d4
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    MOV ESI,0x1                         ; 005637da
    MOV EAX,ESI                         ; 005637df
    MOV ESP,EBP                         ; 005637e1
    POP EBP                             ; 005637e3
    POP EDI                             ; 005637e4
    POP ESI                             ; 005637e5
    POP EBX                             ; 005637e6
    RET                                 ; 005637e7
    PUSH 0x1                            ; 005637e8
        ;   Label: caseD_14
    PUSH 0x4                            ; 005637ea
    MOV EDI,dword ptr [EBP + 0x14]      ; 005637ec
    PUSH EDI                            ; 005637ef
    LEA EAX,[ESP + 0x2f98]              ; 005637f0
    PUSH EAX                            ; 005637f7
    MOV EAX,[0x00678a60]                ; 005637f8 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 005637fd | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 005637fe
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 00563803
    TEST EAX,EAX                        ; 00563806
    JZ 0x005629b2                       ; 00563808
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    MOV ESI,0x1                         ; 0056380e
    MOV EAX,ESI                         ; 00563813
    MOV ESP,EBP                         ; 00563815
    POP EBP                             ; 00563817
    POP EDI                             ; 00563818
    POP ESI                             ; 00563819
    POP EBX                             ; 0056381a
    RET                                 ; 0056381b
    PUSH ESI                            ; 0056381c
        ;   Label: caseD_17
    PUSH EBX                            ; 0056381d
    CALL core_script.cpp_FUN_00562860   ; 0056381e
        ;   XREF to: 00562860 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00562860()
    ADD ESP,0x8                         ; 00563823
    MOV EDI,EAX                         ; 00563826
    MOV dword ptr [ESP + 0x372c],EAX    ; 00563828
    TEST EAX,EAX                        ; 0056382f
    JZ 0x005629b2                       ; 00563831
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    LEA EAX,[ESP + 0x4]                 ; 00563837
    PUSH EAX                            ; 0056383b
    XOR ESI,ESI                         ; 0056383c
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0056383e
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV EDX,0xffffffff                  ; 00563843
    ADD ESP,0x4                         ; 00563848
    MOV ECX,dword ptr [EDI + 0x964]     ; 0056384b
    MOV dword ptr [ESP + 0x3730],EDX    ; 00563851
    TEST ECX,ECX                        ; 00563858
    JLE 0x005638e2                      ; 0056385a
        ;   XREF to: 005638e2 (CONDITIONAL_JUMP)  ; LAB_005638e2
    MOV EAX,EDI                         ; 00563860
    ADD EAX,0x4                         ; 00563862
    LEA EBX,[EDI + 0x968]               ; 00563865
    MOV dword ptr [ESP + 0x3734],EAX    ; 0056386b
    IMUL EAX,dword ptr [EDI + 0x98c],0x1e ; 00563872
        ;   Label: LAB_00563872
    ADD EAX,dword ptr [ESP + 0x3734]    ; 00563879
    PUSH EAX                            ; 00563880
    PUSH EBX                            ; 00563881
    PUSH 0x643c9e                       ; 00563882 | = "%s\t%s"
    LEA EAX,[ESP + 0x30c4]              ; 00563887
    PUSH EAX                            ; 0056388e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0056388f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00563894
    LEA EAX,[ESP + 0x30b8]              ; 00563897
    PUSH EAX                            ; 0056389e
    LEA EAX,[ESP + 0x8]                 ; 0056389f
    PUSH EAX                            ; 005638a3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005638a4
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005638a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005638ac
    PUSH EAX                            ; 005638af
    PUSH EBX                            ; 005638b0
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005638b1
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005638b6
    TEST EAX,EAX                        ; 005638b9
    JNZ 0x005638c4                      ; 005638bb
        ;   XREF to: 005638c4 (CONDITIONAL_JUMP)  ; LAB_005638c4
    MOV dword ptr [ESP + 0x3730],ESI    ; 005638bd
    MOV EAX,dword ptr [ESP + 0x372c]    ; 005638c4
        ;   Label: LAB_005638c4
    ADD EBX,0x54c                       ; 005638cb
    INC ESI                             ; 005638d1
    MOV ECX,dword ptr [EAX + 0x964]     ; 005638d2
    ADD EDI,0x54c                       ; 005638d8
    CMP ESI,ECX                         ; 005638de
    JL 0x00563872                       ; 005638e0
        ;   XREF to: 00563872 (CONDITIONAL_JUMP)  ; LAB_00563872
    PUSH 0x0                            ; 005638e2
        ;   Label: LAB_005638e2
    MOV EBX,dword ptr [ESP + 0x3734]    ; 005638e4
    PUSH EBX                            ; 005638eb
    LEA EAX,[ESP + 0x2f94]              ; 005638ec
    PUSH EAX                            ; 005638f3
    LEA EAX,[ESP + 0x10]                ; 005638f4
    PUSH EAX                            ; 005638f8
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005638f9
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 005638fe
    TEST EAX,EAX                        ; 00563901
    JL 0x00563936                       ; 00563903
        ;   XREF to: 00563936 (CONDITIONAL_JUMP)  ; LAB_00563936
    PUSH 0x0                            ; 00563905
    PUSH EAX                            ; 00563907
    MOV ESI,dword ptr [EBP + 0x14]      ; 00563908
    PUSH ESI                            ; 0056390b
    LEA EAX,[ESP + 0x10]                ; 0056390c
    PUSH EAX                            ; 00563910
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 00563911
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 00563916
    PUSH 0x0                            ; 00563919
    LEA EAX,[ESP + 0x8]                 ; 0056391b
    PUSH EAX                            ; 0056391f
    MOV ESI,0x1                         ; 00563920
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563925
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0056392a
    MOV EAX,ESI                         ; 0056392d
    MOV ESP,EBP                         ; 0056392f
    POP EBP                             ; 00563931
    POP EDI                             ; 00563932
    POP ESI                             ; 00563933
    POP EBX                             ; 00563934
    RET                                 ; 00563935
    PUSH 0x0                            ; 00563936
        ;   Label: LAB_00563936
    LEA EAX,[ESP + 0x8]                 ; 00563938
    PUSH EAX                            ; 0056393c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0056393d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563942
    XOR ESI,ESI                         ; 00563945
    MOV EAX,ESI                         ; 00563947
    MOV ESP,EBP                         ; 00563949
    POP EBP                             ; 0056394b
    POP EDI                             ; 0056394c
    POP ESI                             ; 0056394d
    POP EBX                             ; 0056394e
    RET                                 ; 0056394f
    PUSH ESI                            ; 00563950
        ;   Label: caseD_18
    PUSH EBX                            ; 00563951
    CALL core_script.cpp_FUN_00562860   ; 00563952
        ;   XREF to: 00562860 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00562860()
    MOV EDI,EAX                         ; 00563957
    ADD ESP,0x8                         ; 00563959
    MOV EBX,EAX                         ; 0056395c
    TEST EAX,EAX                        ; 0056395e
    JZ 0x005629b2                       ; 00563960
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    LEA EAX,[ESP + 0x199c]              ; 00563966
    PUSH EAX                            ; 0056396d
    XOR ESI,ESI                         ; 0056396e
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00563970
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV EAX,dword ptr [EDI + 0x964]     ; 00563975
    ADD ESP,0x4                         ; 0056397b
    TEST EAX,EAX                        ; 0056397e
    JLE 0x005639b0                      ; 00563980
        ;   XREF to: 005639b0 (CONDITIONAL_JUMP)  ; LAB_005639b0
    ADD EDI,0x4                         ; 00563982
    PUSH EDI                            ; 00563985
        ;   Label: LAB_00563985
    LEA EAX,[ESP + 0x19a0]              ; 00563986
    PUSH EAX                            ; 0056398d
    INC ESI                             ; 0056398e
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0056398f
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD EDI,0x1e                        ; 00563994
    MOV EAX,dword ptr [EBX + 0x964]     ; 00563997
    ADD ESP,0x8                         ; 0056399d
    CMP ESI,EAX                         ; 005639a0
    JL 0x00563985                       ; 005639a2
        ;   XREF to: 00563985 (CONDITIONAL_JUMP)  ; LAB_00563985
    LEA EAX,[EAX]                       ; 005639a4
    LEA EDX,[EDX]                       ; 005639aa
    PUSH 0x0                            ; 005639b0
        ;   Label: LAB_005639b0
    MOV EDX,dword ptr [EBP + 0x14]      ; 005639b2
    PUSH EDX                            ; 005639b5
    LEA EAX,[ESP + 0x19a4]              ; 005639b6
    PUSH EAX                            ; 005639bd
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 005639be
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 005639c3
    PUSH EAX                            ; 005639c6
    LEA EAX,[ESP + 0x2f94]              ; 005639c7
    PUSH EAX                            ; 005639ce
    LEA EAX,[ESP + 0x19a8]              ; 005639cf
    PUSH EAX                            ; 005639d6
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005639d7
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 005639dc
    TEST EAX,EAX                        ; 005639df
    JL 0x00563a33                       ; 005639e1
        ;   XREF to: 00563a33 (CONDITIONAL_JUMP)  ; LAB_00563a33
    PUSH EAX                            ; 005639e3
    LEA EAX,[ESP + 0x19a0]              ; 005639e4
    PUSH EAX                            ; 005639eb
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005639ec
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005639f1
    MOV ESI,EAX                         ; 005639f4
    MOV EDI,dword ptr [EBP + 0x14]      ; 005639f6
    PUSH EDI                            ; 005639f9
    MOV AL,byte ptr [ESI]               ; 005639fa
        ;   Label: LAB_005639fa
    MOV byte ptr [EDI],AL               ; 005639fc
    CMP AL,0x0                          ; 005639fe
    JZ 0x00563a12                       ; 00563a00
        ;   XREF to: 00563a12 (CONDITIONAL_JUMP)  ; LAB_00563a12
    MOV AL,byte ptr [ESI + 0x1]         ; 00563a02
    ADD ESI,0x2                         ; 00563a05
    MOV byte ptr [EDI + 0x1],AL         ; 00563a08
    ADD EDI,0x2                         ; 00563a0b
    CMP AL,0x0                          ; 00563a0e
    JNZ 0x005639fa                      ; 00563a10
        ;   XREF to: 005639fa (CONDITIONAL_JUMP)  ; LAB_005639fa
    POP EDI                             ; 00563a12
        ;   Label: LAB_00563a12
    PUSH 0x0                            ; 00563a13
    LEA EAX,[ESP + 0x19a0]              ; 00563a15
    PUSH EAX                            ; 00563a1c
    MOV ESI,0x1                         ; 00563a1d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563a22
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563a27
    MOV EAX,ESI                         ; 00563a2a
    MOV ESP,EBP                         ; 00563a2c
    POP EBP                             ; 00563a2e
    POP EDI                             ; 00563a2f
    POP ESI                             ; 00563a30
    POP EBX                             ; 00563a31
    RET                                 ; 00563a32
    PUSH 0x0                            ; 00563a33
        ;   Label: LAB_00563a33
    LEA EAX,[ESP + 0x19a0]              ; 00563a35
    PUSH EAX                            ; 00563a3c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563a3d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563a42
    XOR ESI,ESI                         ; 00563a45
    MOV EAX,ESI                         ; 00563a47
    MOV ESP,EBP                         ; 00563a49
    POP EBP                             ; 00563a4b
    POP EDI                             ; 00563a4c
    POP ESI                             ; 00563a4d
    POP EBX                             ; 00563a4e
    RET                                 ; 00563a4f
    MOV EAX,[0x00680d50]                ; 00563a50 | g_CScriptInstance | g_CScriptPtr
        ;   Label: caseD_19
    CMP dword ptr [EAX + 0x1c],0x1      ; 00563a55 | g_CScriptInstance.padding_0x18[4]
    JL 0x00563aba                       ; 00563a59
        ;   XREF to: 00563aba (CONDITIONAL_JUMP)  ; LAB_00563aba
    LEA EAX,[ESP + 0x3ac]               ; 00563a5b
    PUSH EAX                            ; 00563a62
    XOR EDI,EDI                         ; 00563a63
    XOR ESI,ESI                         ; 00563a65
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00563a67
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00563a6c
    MOV EAX,[0x00680d50]                ; 00563a6f | g_CScriptPtr
        ;   Label: LAB_00563a6f
    CMP EDI,dword ptr [EAX + 0x1c]      ; 00563a74 | g_CScriptInstance.padding_0x18[4]
    JGE 0x00563ad9                      ; 00563a77
        ;   XREF to: 00563ad9 (CONDITIONAL_JUMP)  ; LAB_00563ad9
    MOV EAX,dword ptr [EAX + 0x20]      ; 00563a79 | g_CScriptInstance.padding_0x18[8]
    ADD EAX,ESI                         ; 00563a7c
    LEA EBX,[EAX + 0x96]                ; 00563a7e
    PUSH EBX                            ; 00563a84
    LEA EBX,[EAX + 0x78]                ; 00563a85
    PUSH EBX                            ; 00563a88
    PUSH EAX                            ; 00563a89
    PUSH 0x643cb8                       ; 00563a8a | = "%s\t%s\t%s"
    PUSH 0x31099e8                      ; 00563a8f | DAT_031099e8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00563a94
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 00563a99
    PUSH 0x31099e8                      ; 00563a9c | DAT_031099e8
    LEA EAX,[ESP + 0x3b0]               ; 00563aa1
    PUSH EAX                            ; 00563aa8
    INC EDI                             ; 00563aa9
    ADD ESI,0x226                       ; 00563aaa
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563ab0
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563ab5
    JMP 0x00563a6f                      ; 00563ab8
        ;   XREF to: 00563a6f (UNCONDITIONAL_JUMP)  ; LAB_00563a6f
    PUSH 0x643ca4                       ; 00563aba | = "No database loaded."
        ;   Label: LAB_00563aba
    MOV ESI,dword ptr [0x00678a60]      ; 00563abf | g_CEditorToolsPtr
    PUSH ESI                            ; 00563ac5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00563ac6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00563acb
    XOR ESI,ESI                         ; 00563ace
    MOV EAX,ESI                         ; 00563ad0
    MOV ESP,EBP                         ; 00563ad2
    POP EBP                             ; 00563ad4
    POP EDI                             ; 00563ad5
    POP ESI                             ; 00563ad6
    POP EBX                             ; 00563ad7
    RET                                 ; 00563ad8
    MOV ECX,dword ptr [EBP + 0x14]      ; 00563ad9
        ;   Label: LAB_00563ad9
    PUSH ECX                            ; 00563adc
    LEA EAX,[ESP + 0x3b0]               ; 00563add
    PUSH EAX                            ; 00563ae4
    CALL shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070 ; 00563ae5
        ;   XREF to: 004a3070 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070(CStrList * this_ptr, char * search_field)
    ADD ESP,0x8                         ; 00563aea
    TEST EAX,EAX                        ; 00563aed
    JGE 0x00563b0b                      ; 00563aef
        ;   XREF to: 00563b0b (CONDITIONAL_JUMP)  ; LAB_00563b0b
    PUSH 0x310a9e8                      ; 00563af1 | DAT_0310a9e8
    LEA EAX,[ESP + 0x3b0]               ; 00563af6
    PUSH EAX                            ; 00563afd
    CALL shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070 ; 00563afe
        ;   XREF to: 004a3070 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070(CStrList * this_ptr, char * search_field)
    ADD ESP,0x8                         ; 00563b03
    TEST EAX,EAX                        ; 00563b06
    JL 0x00563b0b                       ; 00563b08
        ;   XREF to: 00563b0b (CONDITIONAL_JUMP)  ; LAB_00563b0b
    INC EAX                             ; 00563b0a
    PUSH 0x0                            ; 00563b0b
        ;   Label: LAB_00563b0b
    PUSH EAX                            ; 00563b0d
    LEA EAX,[ESP + 0x2f94]              ; 00563b0e
    PUSH EAX                            ; 00563b15
    LEA EAX,[ESP + 0x3b8]               ; 00563b16
    PUSH EAX                            ; 00563b1d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00563b1e
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00563b23
    TEST EAX,EAX                        ; 00563b26
    JL 0x00563ba1                       ; 00563b28
        ;   XREF to: 00563ba1 (CONDITIONAL_JUMP)  ; LAB_00563ba1
    IMUL EBX,EAX,0x226                  ; 00563b2a
    MOV ESI,dword ptr [0x00680d50]      ; 00563b30 | g_CScriptPtr
    MOV ESI,dword ptr [ESI + 0x20]      ; 00563b36 | g_CScriptInstance.padding_0x18[8]
    MOV EDI,dword ptr [EBP + 0x14]      ; 00563b39
    ADD ESI,EBX                         ; 00563b3c
    PUSH EDI                            ; 00563b3e
    MOV AL,byte ptr [ESI]               ; 00563b3f
        ;   Label: LAB_00563b3f
    MOV byte ptr [EDI],AL               ; 00563b41
    CMP AL,0x0                          ; 00563b43
    JZ 0x00563b57                       ; 00563b45
        ;   XREF to: 00563b57 (CONDITIONAL_JUMP)  ; LAB_00563b57
    MOV AL,byte ptr [ESI + 0x1]         ; 00563b47
    ADD ESI,0x2                         ; 00563b4a
    MOV byte ptr [EDI + 0x1],AL         ; 00563b4d
    ADD EDI,0x2                         ; 00563b50
    CMP AL,0x0                          ; 00563b53
    JNZ 0x00563b3f                      ; 00563b55
        ;   XREF to: 00563b3f (CONDITIONAL_JUMP)  ; LAB_00563b3f
    POP EDI                             ; 00563b57
        ;   Label: LAB_00563b57
    MOV EAX,[0x00680d50]                ; 00563b58 | g_CScriptPtr
    MOV ESI,dword ptr [EAX + 0x20]      ; 00563b5d | g_CScriptInstance.padding_0x18[8]
    MOV EDI,0x310a9e8                   ; 00563b60 | DAT_0310a9e8
    ADD ESI,EBX                         ; 00563b65
    PUSH EDI                            ; 00563b67 | DAT_0310a9e8
    MOV AL,byte ptr [ESI]               ; 00563b68
        ;   Label: LAB_00563b68
    MOV byte ptr [EDI],AL               ; 00563b6a | DAT_0310a9e8 | DAT_0310a9ea
    CMP AL,0x0                          ; 00563b6c
    JZ 0x00563b80                       ; 00563b6e
        ;   XREF to: 00563b80 (CONDITIONAL_JUMP)  ; LAB_00563b80
    MOV AL,byte ptr [ESI + 0x1]         ; 00563b70
    ADD ESI,0x2                         ; 00563b73
    MOV byte ptr [EDI + 0x1],AL         ; 00563b76 | DAT_0310a9e9 | DAT_0310a9eb
    ADD EDI,0x2                         ; 00563b79
    CMP AL,0x0                          ; 00563b7c
    JNZ 0x00563b68                      ; 00563b7e
        ;   XREF to: 00563b68 (CONDITIONAL_JUMP)  ; LAB_00563b68
    POP EDI                             ; 00563b80
        ;   Label: LAB_00563b80
    PUSH 0x0                            ; 00563b81
    LEA EAX,[ESP + 0x3b0]               ; 00563b83
    PUSH EAX                            ; 00563b8a
    MOV ESI,0x1                         ; 00563b8b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563b90
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563b95
    MOV EAX,ESI                         ; 00563b98
    MOV ESP,EBP                         ; 00563b9a
    POP EBP                             ; 00563b9c
    POP EDI                             ; 00563b9d
    POP ESI                             ; 00563b9e
    POP EBX                             ; 00563b9f
    RET                                 ; 00563ba0
    PUSH 0x0                            ; 00563ba1
        ;   Label: LAB_00563ba1
    LEA EAX,[ESP + 0x3b0]               ; 00563ba3
    PUSH EAX                            ; 00563baa
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563bab
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563bb0
    XOR ESI,ESI                         ; 00563bb3
    MOV EAX,ESI                         ; 00563bb5
    MOV ESP,EBP                         ; 00563bb7
    POP EBP                             ; 00563bb9
    POP EDI                             ; 00563bba
    POP ESI                             ; 00563bbb
    POP EBX                             ; 00563bbc
    RET                                 ; 00563bbd
    LEA EAX,[ESP + 0x283c]              ; 00563bbe
        ;   Label: caseD_1a
    PUSH EAX                            ; 00563bc5
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00563bc6
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00563bcb
    PUSH 0x643cc1                       ; 00563bce | = "stand"
    LEA EAX,[ESP + 0x2840]              ; 00563bd3
    PUSH EAX                            ; 00563bda
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563bdb
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563be0
    PUSH 0x643cc7                       ; 00563be3 | = "follow"
    LEA EAX,[ESP + 0x2840]              ; 00563be8
    PUSH EAX                            ; 00563bef
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563bf0
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563bf5
    PUSH 0x643cce                       ; 00563bf8 | = "kill"
    LEA EAX,[ESP + 0x2840]              ; 00563bfd
    PUSH EAX                            ; 00563c04
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563c05
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563c0a
    PUSH 0x643cd3                       ; 00563c0d | = "guard"
    LEA EAX,[ESP + 0x2840]              ; 00563c12
    PUSH EAX                            ; 00563c19
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563c1a
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563c1f
    PUSH 0x643cd9                       ; 00563c22 | = "suspend"
    LEA EAX,[ESP + 0x2840]              ; 00563c27
    PUSH EAX                            ; 00563c2e
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563c2f
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563c34
    PUSH 0x0                            ; 00563c37
    MOV ECX,dword ptr [EBP + 0x14]      ; 00563c39
    PUSH ECX                            ; 00563c3c
    LEA EAX,[ESP + 0x2844]              ; 00563c3d
    PUSH EAX                            ; 00563c44
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 00563c45
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 00563c4a
    PUSH EAX                            ; 00563c4d
    LEA EAX,[ESP + 0x2f94]              ; 00563c4e
    PUSH EAX                            ; 00563c55
    LEA EAX,[ESP + 0x2848]              ; 00563c56
    PUSH EAX                            ; 00563c5d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00563c5e
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00563c63
    TEST EAX,EAX                        ; 00563c66
    JL 0x00563cba                       ; 00563c68
        ;   XREF to: 00563cba (CONDITIONAL_JUMP)  ; LAB_00563cba
    PUSH EAX                            ; 00563c6a
    LEA EAX,[ESP + 0x2840]              ; 00563c6b
    PUSH EAX                            ; 00563c72
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00563c73
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00563c78
    MOV ESI,EAX                         ; 00563c7b
    MOV EDI,dword ptr [EBP + 0x14]      ; 00563c7d
    PUSH EDI                            ; 00563c80
    MOV AL,byte ptr [ESI]               ; 00563c81
        ;   Label: LAB_00563c81
    MOV byte ptr [EDI],AL               ; 00563c83
    CMP AL,0x0                          ; 00563c85
    JZ 0x00563c99                       ; 00563c87
        ;   XREF to: 00563c99 (CONDITIONAL_JUMP)  ; LAB_00563c99
    MOV AL,byte ptr [ESI + 0x1]         ; 00563c89
    ADD ESI,0x2                         ; 00563c8c
    MOV byte ptr [EDI + 0x1],AL         ; 00563c8f
    ADD EDI,0x2                         ; 00563c92
    CMP AL,0x0                          ; 00563c95
    JNZ 0x00563c81                      ; 00563c97
        ;   XREF to: 00563c81 (CONDITIONAL_JUMP)  ; LAB_00563c81
    POP EDI                             ; 00563c99
        ;   Label: LAB_00563c99
    PUSH 0x0                            ; 00563c9a
    LEA EAX,[ESP + 0x2840]              ; 00563c9c
    PUSH EAX                            ; 00563ca3
    MOV ESI,0x1                         ; 00563ca4
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563ca9
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563cae
    MOV EAX,ESI                         ; 00563cb1
    MOV ESP,EBP                         ; 00563cb3
    POP EBP                             ; 00563cb5
    POP EDI                             ; 00563cb6
    POP ESI                             ; 00563cb7
    POP EBX                             ; 00563cb8
    RET                                 ; 00563cb9
    PUSH 0x0                            ; 00563cba
        ;   Label: LAB_00563cba
    LEA EAX,[ESP + 0x2840]              ; 00563cbc
    PUSH EAX                            ; 00563cc3
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563cc4
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563cc9
    XOR ESI,ESI                         ; 00563ccc
    MOV EAX,ESI                         ; 00563cce
    MOV ESP,EBP                         ; 00563cd0
    POP EBP                             ; 00563cd2
    POP EDI                             ; 00563cd3
    POP ESI                             ; 00563cd4
    POP EBX                             ; 00563cd5
    RET                                 ; 00563cd6
    PUSH 0x643ce1                       ; 00563cd7 | = "Can't pick this yet"
        ;   Label: caseD_1b
    MOV EDX,dword ptr [0x00678a60]      ; 00563cdc | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 00563ce2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00563ce3
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00563ce8
    XOR ESI,ESI                         ; 00563ceb
    MOV EAX,ESI                         ; 00563ced
    MOV ESP,EBP                         ; 00563cef
    POP EBP                             ; 00563cf1
    POP EDI                             ; 00563cf2
    POP ESI                             ; 00563cf3
    POP EBX                             ; 00563cf4
    RET                                 ; 00563cf5
    MOV EAX,[0x00680d50]                ; 00563cf6 | g_CScriptInstance | g_CScriptPtr
        ;   Label: caseD_1c
    PUSH EAX                            ; 00563cfb | g_CScriptInstance
    XOR ESI,ESI                         ; 00563cfc
    XOR EDI,EDI                         ; 00563cfe
    CALL core_script.cpp_FUN_00567630   ; 00563d00
        ;   XREF to: 00567630 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00567630()
    ADD ESP,0x4                         ; 00563d05
    MOV EAX,[0x00680d50]                ; 00563d08 | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_00563d08
    CMP ESI,dword ptr [EAX + 0x28]      ; 00563d0d | g_CScriptInstance.padding_0x18[16]
    JGE 0x00563d40                      ; 00563d10
        ;   XREF to: 00563d40 (CONDITIONAL_JUMP)  ; LAB_00563d40
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00563d12 | g_CScriptInstance.padding_0x18[20]
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100] ; 00563d15
    TEST EAX,EAX                        ; 00563d1c
    JBE 0x00563d25                      ; 00563d1e
        ;   XREF to: 00563d25 (CONDITIONAL_JUMP)  ; LAB_00563d25
    CMP EAX,0x4                         ; 00563d20
    JNZ 0x00563d2e                      ; 00563d23
        ;   XREF to: 00563d2e (CONDITIONAL_JUMP)  ; LAB_00563d2e
    INC ESI                             ; 00563d25
        ;   Label: LAB_00563d25
    ADD EDI,0x114                       ; 00563d26
    JMP 0x00563d08                      ; 00563d2c
        ;   XREF to: 00563d08 (UNCONDITIONAL_JUMP)  ; LAB_00563d08
    PUSH ESI                            ; 00563d2e
        ;   Label: LAB_00563d2e
    MOV EBX,dword ptr [0x00680d50]      ; 00563d2f | g_CScriptInstance | g_CScriptPtr
    PUSH EBX                            ; 00563d35 | g_CScriptInstance
    CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0 ; 00563d36
        ;   XREF to: 005676e0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_removeEventXRef_FUN_005676e0()
    ADD ESP,0x8                         ; 00563d3b
    JMP 0x00563d08                      ; 00563d3e
        ;   XREF to: 00563d08 (UNCONDITIONAL_JUMP)  ; LAB_00563d08
    MOV ECX,dword ptr [EBP + 0x14]      ; 00563d40
        ;   Label: LAB_00563d40
    PUSH ECX                            ; 00563d43
    LEA EBX,[ESP + 0x2f90]              ; 00563d44
    PUSH EBX                            ; 00563d4b
    PUSH EAX                            ; 00563d4c | g_CScriptInstance
    CALL core_script.cpp_FUN_005677a0   ; 00563d4d
        ;   XREF to: 005677a0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005677a0()
    ADD ESP,0xc                         ; 00563d52
    TEST EAX,EAX                        ; 00563d55
    JZ 0x005629b2                       ; 00563d57
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    MOV ESI,0x1                         ; 00563d5d
    MOV EAX,ESI                         ; 00563d62
    MOV ESP,EBP                         ; 00563d64
    POP EBP                             ; 00563d66
    POP EDI                             ; 00563d67
    POP ESI                             ; 00563d68
    POP EBX                             ; 00563d69
    RET                                 ; 00563d6a
    PUSH ESI                            ; 00563d6b
        ;   Label: caseD_1e
    PUSH EBX                            ; 00563d6c
    CALL core_script.cpp_FUN_005627f0   ; 00563d6d
        ;   XREF to: 005627f0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005627f0()
    ADD ESP,0x8                         ; 00563d72
    MOV ESI,EAX                         ; 00563d75
    TEST EAX,EAX                        ; 00563d77
    JZ 0x005629b2                       ; 00563d79
        ;   XREF to: 005629b2 (CONDITIONAL_JUMP)  ; LAB_005629b2
    LEA EBX,[ESP + 0x36b0]              ; 00563d7f
    PUSH EBX                            ; 00563d86
    MOV EBX,dword ptr [EBP + 0x14]      ; 00563d87
    PUSH EBX                            ; 00563d8a
    PUSH EAX                            ; 00563d8b
    CALL core_script.cpp_FUN_00559730   ; 00563d8c
        ;   XREF to: 00559730 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00559730()
    ADD ESP,0xc                         ; 00563d91
    TEST EAX,EAX                        ; 00563d94
    JNZ 0x00563dc0                      ; 00563d96
        ;   XREF to: 00563dc0 (CONDITIONAL_JUMP)  ; LAB_00563dc0
    PUSH 0x310eca0                      ; 00563d98 | DAT_0310eca0
    MOV EDI,dword ptr [0x00678a60]      ; 00563d9d | g_CEditorToolsPtr
    PUSH EDI                            ; 00563da3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00563da4
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00563da9
    PUSH 0x78                           ; 00563dac
    PUSH 0x0                            ; 00563dae
    LEA EAX,[ESP + 0x36b8]              ; 00563db0
    PUSH EAX                            ; 00563db7
    CALL crt_memory.c_memset_FUN_005fde40 ; 00563db8
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00563dbd
    LEA EAX,[ESI + 0x158]               ; 00563dc0
        ;   Label: LAB_00563dc0
    PUSH EAX                            ; 00563dc6
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 00563dc7
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00563dcc
    MOV EDI,0xffffffff                  ; 00563dcf
    MOV dword ptr [ESP + 0x3738],EAX    ; 00563dd4
    LEA EAX,[ESP + 0xafc]               ; 00563ddb
        ;   Label: LAB_00563ddb
    PUSH EAX                            ; 00563de2
    XOR EBX,EBX                         ; 00563de3
    XOR ESI,ESI                         ; 00563de5
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00563de7
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00563dec
    MOV EAX,dword ptr [ESP + 0x3738]    ; 00563def
        ;   Label: LAB_00563def
    PUSH EAX                            ; 00563df6
    CALL core_charactr.cpp_CCharacter_FUN_0042f9c0 ; 00563df7
        ;   XREF to: 0042f9c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042f9c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00563dfc
    CMP EBX,EAX                         ; 00563dff
    JGE 0x00563e5f                      ; 00563e01
        ;   XREF to: 00563e5f (CONDITIONAL_JUMP)  ; LAB_00563e5f
    CMP dword ptr [ESP + ESI*0x1 + 0x36b0],0x0 ; 00563e03
    JZ 0x00563e58                       ; 00563e0b
        ;   XREF to: 00563e58 (CONDITIONAL_JUMP)  ; LAB_00563e58
    MOV EAX,0x643cf5                    ; 00563e0d | = "Yes"
    PUSH EAX                            ; 00563e12 | = "Yes" | s_No_00643cf9
        ;   Label: LAB_00563e12
    PUSH EBX                            ; 00563e13
    MOV EDX,dword ptr [ESP + 0x3740]    ; 00563e14
    PUSH EDX                            ; 00563e1b
    CALL core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220 ; 00563e1c
        ;   XREF to: 0059c220 (UNCONDITIONAL_CALL)  ; SPart * core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220(CDeformableModel * this_ptr, int part_index) | = "No"
    ADD ESP,0x8                         ; 00563e21
    PUSH EAX                            ; 00563e24
    PUSH 0x643cfc                       ; 00563e25 | = "%s\t%s"
    LEA EAX,[ESP + 0x35f4]              ; 00563e2a
    PUSH EAX                            ; 00563e31
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00563e32
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00563e37
    LEA EAX,[ESP + 0x35e8]              ; 00563e3a
    PUSH EAX                            ; 00563e41
    LEA EAX,[ESP + 0xb00]               ; 00563e42
    PUSH EAX                            ; 00563e49
    ADD ESI,0x4                         ; 00563e4a
    INC EBX                             ; 00563e4d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563e4e
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563e53
    JMP 0x00563def                      ; 00563e56
        ;   XREF to: 00563def (UNCONDITIONAL_JUMP)  ; LAB_00563def
    MOV EAX,0x643cf9                    ; 00563e58 | = "No"
        ;   Label: LAB_00563e58
    JMP 0x00563e12                      ; 00563e5d
        ;   XREF to: 00563e12 (UNCONDITIONAL_JUMP)  ; LAB_00563e12
    PUSH 0x643d02                       ; 00563e5f | = "Done"
        ;   Label: LAB_00563e5f
    LEA EAX,[ESP + 0xb00]               ; 00563e64
    PUSH EAX                            ; 00563e6b
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00563e6c
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00563e71
    PUSH 0x0                            ; 00563e74
    PUSH EDI                            ; 00563e76
    LEA EAX,[ESP + 0x2f94]              ; 00563e77
    PUSH EAX                            ; 00563e7e
    LEA EAX,[ESP + 0xb08]               ; 00563e7f
    PUSH EAX                            ; 00563e86
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00563e87
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    MOV EBX,EAX                         ; 00563e8c
    ADD ESP,0x10                        ; 00563e8e
    MOV EDI,EAX                         ; 00563e91
    TEST EAX,EAX                        ; 00563e93
    JL 0x00563f08                       ; 00563e95
        ;   XREF to: 00563f08 (CONDITIONAL_JUMP)  ; LAB_00563f08
    LEA EAX,[ESP + 0xafc]               ; 00563e97
    PUSH EAX                            ; 00563e9e
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00563e9f
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    DEC EAX                             ; 00563ea4
    ADD ESP,0x4                         ; 00563ea5
    CMP EBX,EAX                         ; 00563ea8
    JNZ 0x00563fb9                      ; 00563eaa
        ;   XREF to: 00563fb9 (CONDITIONAL_JUMP)  ; LAB_00563fb9
    MOV ECX,0x643d07                    ; 00563eb0 | DAT_00643d07
    XOR EBX,EBX                         ; 00563eb5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00563eb7
    MOV dword ptr [ESP + 0x3744],EBX    ; 00563eba
    MOV dword ptr [ESP + 0x373c],ECX    ; 00563ec1 | DAT_00643d07
    MOV byte ptr [EAX],0x0              ; 00563ec8
    MOV ECX,dword ptr [ESP + 0x3738]    ; 00563ecb
        ;   Label: LAB_00563ecb
    PUSH ECX                            ; 00563ed2
    CALL core_charactr.cpp_CCharacter_FUN_0042f9c0 ; 00563ed3
        ;   XREF to: 0042f9c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042f9c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00563ed8
    CMP EBX,EAX                         ; 00563edb
    JGE 0x00563f99                      ; 00563edd
        ;   XREF to: 00563f99 (CONDITIONAL_JUMP)  ; LAB_00563f99
    MOV EAX,dword ptr [ESP + 0x3744]    ; 00563ee3
    CMP dword ptr [ESP + EAX*0x1 + 0x36b0],0x0 ; 00563eea
    JNZ 0x00563f24                      ; 00563ef2
        ;   XREF to: 00563f24 (CONDITIONAL_JUMP)  ; LAB_00563f24
    MOV EDX,dword ptr [ESP + 0x3744]    ; 00563ef4
        ;   Label: LAB_00563ef4
    ADD EDX,0x4                         ; 00563efb
    INC EBX                             ; 00563efe
    MOV dword ptr [ESP + 0x3744],EDX    ; 00563eff
    JMP 0x00563ecb                      ; 00563f06
        ;   XREF to: 00563ecb (UNCONDITIONAL_JUMP)  ; LAB_00563ecb
    XOR ESI,ESI                         ; 00563f08
        ;   Label: LAB_00563f08
    PUSH ESI                            ; 00563f0a
    LEA EAX,[ESP + 0xb00]               ; 00563f0b
    PUSH EAX                            ; 00563f12
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563f13
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563f18
    MOV EAX,ESI                         ; 00563f1b
    MOV ESP,EBP                         ; 00563f1d
    POP EBP                             ; 00563f1f
    POP EDI                             ; 00563f20
    POP ESI                             ; 00563f21
    POP EBX                             ; 00563f22
    RET                                 ; 00563f23
    MOV ESI,dword ptr [ESP + 0x373c]    ; 00563f24
        ;   Label: LAB_00563f24
    MOV EDI,dword ptr [EBP + 0x14]      ; 00563f2b
    PUSH EDI                            ; 00563f2e
    SUB ECX,ECX                         ; 00563f2f
    DEC ECX                             ; 00563f31
    MOV AL,0x0                          ; 00563f32
    SCASB.REPNE ES:EDI                  ; 00563f34
    DEC EDI                             ; 00563f36
    MOV AL,byte ptr [ESI]               ; 00563f37 | DAT_00643d07 | DAT_00643d09
        ;   Label: LAB_00563f37
    MOV byte ptr [EDI],AL               ; 00563f39
    CMP AL,0x0                          ; 00563f3b
    JZ 0x00563f4f                       ; 00563f3d
        ;   XREF to: 00563f4f (CONDITIONAL_JUMP)  ; LAB_00563f4f
    MOV AL,byte ptr [ESI + 0x1]         ; 00563f3f | DAT_00643d08 | = "WARNING! chooseParm - unknown parm ty..."
    ADD ESI,0x2                         ; 00563f42
    MOV byte ptr [EDI + 0x1],AL         ; 00563f45
    ADD EDI,0x2                         ; 00563f48
    CMP AL,0x0                          ; 00563f4b
    JNZ 0x00563f37                      ; 00563f4d
        ;   XREF to: 00563f37 (CONDITIONAL_JUMP)  ; LAB_00563f37
    POP EDI                             ; 00563f4f
        ;   Label: LAB_00563f4f
    PUSH EBX                            ; 00563f50
    MOV EAX,dword ptr [ESP + 0x373c]    ; 00563f51
    MOV EDI,0x643d08                    ; 00563f58 | DAT_00643d08
    PUSH EAX                            ; 00563f5d
    MOV dword ptr [ESP + 0x3744],EDI    ; 00563f5e | DAT_00643d08
    CALL core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220 ; 00563f65
        ;   XREF to: 0059c220 (UNCONDITIONAL_CALL)  ; SPart * core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220(CDeformableModel * this_ptr, int part_index)
    ADD ESP,0x8                         ; 00563f6a
    MOV ESI,EAX                         ; 00563f6d
    MOV EDI,dword ptr [EBP + 0x14]      ; 00563f6f
    PUSH EDI                            ; 00563f72
    SUB ECX,ECX                         ; 00563f73
    DEC ECX                             ; 00563f75
    MOV AL,0x0                          ; 00563f76
    SCASB.REPNE ES:EDI                  ; 00563f78
    DEC EDI                             ; 00563f7a
    MOV AL,byte ptr [ESI]               ; 00563f7b
        ;   Label: LAB_00563f7b
    MOV byte ptr [EDI],AL               ; 00563f7d
    CMP AL,0x0                          ; 00563f7f
    JZ 0x00563f93                       ; 00563f81
        ;   XREF to: 00563f93 (CONDITIONAL_JUMP)  ; LAB_00563f93
    MOV AL,byte ptr [ESI + 0x1]         ; 00563f83
    ADD ESI,0x2                         ; 00563f86
    MOV byte ptr [EDI + 0x1],AL         ; 00563f89
    ADD EDI,0x2                         ; 00563f8c
    CMP AL,0x0                          ; 00563f8f
    JNZ 0x00563f7b                      ; 00563f91
        ;   XREF to: 00563f7b (CONDITIONAL_JUMP)  ; LAB_00563f7b
    POP EDI                             ; 00563f93
        ;   Label: LAB_00563f93
    JMP 0x00563ef4                      ; 00563f94
        ;   XREF to: 00563ef4 (UNCONDITIONAL_JUMP)  ; LAB_00563ef4
    PUSH 0x0                            ; 00563f99
        ;   Label: LAB_00563f99
    LEA EAX,[ESP + 0xb00]               ; 00563f9b
    PUSH EAX                            ; 00563fa2
    MOV ESI,0x1                         ; 00563fa3
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563fa8
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563fad
    MOV EAX,ESI                         ; 00563fb0
    MOV ESP,EBP                         ; 00563fb2
    POP EBP                             ; 00563fb4
    POP EDI                             ; 00563fb5
    POP ESI                             ; 00563fb6
    POP EBX                             ; 00563fb7
    RET                                 ; 00563fb8
    CMP dword ptr [ESP + EBX*0x4 + 0x36b0],0x0 ; 00563fb9
        ;   Label: LAB_00563fb9
    SETZ AL                             ; 00563fc1
    AND EAX,0xff                        ; 00563fc4
    PUSH 0x0                            ; 00563fc9
    MOV dword ptr [ESP + EBX*0x4 + 0x36b4],EAX ; 00563fcb
    LEA EAX,[ESP + 0xb00]               ; 00563fd2
    PUSH EAX                            ; 00563fd9
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00563fda
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00563fdf
    JMP 0x00563ddb                      ; 00563fe2
        ;   XREF to: 00563ddb (UNCONDITIONAL_JUMP)  ; LAB_00563ddb
    PUSH EDI                            ; 00563fe7
        ;   Label: caseD_1d
    PUSH 0x643d0a                       ; 00563fe8 | = "WARNING! chooseParm - unknown parm ty..."
    MOV EDX,dword ptr [0x00678a60]      ; 00563fed | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 00563ff3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00563ff4
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00563ff9
    XOR ESI,ESI                         ; 00563ffc
    MOV EAX,ESI                         ; 00563ffe
    MOV ESP,EBP                         ; 00564000
    POP EBP                             ; 00564002
    POP EDI                             ; 00564003
    POP ESI                             ; 00564004
    POP EBX                             ; 00564005
    RET                                 ; 00564006

