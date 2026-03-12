; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_editGroundTypes_FUN_00578630(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; CPickList        Stack[-0xbdc]:936  local_bdc
; CPickList        Stack[-0x834]:936  local_834
; char[400]        Stack[-0x48c]:400  local_48c
; char[400]        Stack[-0x2fc]:400  local_2fc
; char[256]        Stack[-0x16c]:256  local_16c
; char[100]        Stack[-0x6c]:100  local_6c
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 005798ed
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584d34
;
; Referenced Globals:
;   TerminatedCString s_No_ground_type_entries_i_00646953
;   TerminatedCString s_s_s_00646970
;   TerminatedCString s_Editing_ground_types_pre_00646976
;   TerminatedCString s_Y_es_Accept_changes_and__006469a1
;   TerminatedCString s_N_o_Abort_changes_and_do_006469dd
;   TerminatedCString s_Save_changes_00646a16
;   TerminatedCString s_Saving_s_00646a24
;   TerminatedCString s_core_setedit_cpp_00646a31
;   TerminatedCString s_wt_00646a45
;   TerminatedCString s_core_setedit_cpp_00646a48
;   TerminatedCString s_Can_t_create_s_00646a5c
;   TerminatedCString s_s_s_00646a6c
;   TerminatedCString s_core_setedit_cpp_00646a74
;   TerminatedCString s_core_setedit_cpp_00646a88
;   TerminatedCString s_Can_t_find_ground_textur_00646a9c
;   ... and 11 more
;
; Called Functions:
;   core_ground.cpp_getGroundTypeName_FUN_004eed80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setedit.cpp_loadGroundTypes_FUN_00578420
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_dosio.c_splitPath_FUN_00481f20
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_clear_FUN_004a5770
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
;   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578630
        ;   Label: core_setedit.cpp_editGroundTypes_FUN_00578630
    PUSH EBP                            ; 00578631
    SUB ESP,0xbd4                       ; 00578632
    MOV EBP,dword ptr [ESP + 0xbe0]     ; 00578638
    XOR EDX,EDX                         ; 0057863f
    PUSH EBP                            ; 00578641
    MOV dword ptr [0x03654368],EDX      ; 00578642 | g_GroundTextureCount
    CALL core_setedit.cpp_loadGroundTypes_FUN_00578420 ; 00578648
        ;   XREF to: 00578420 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_loadGroundTypes_FUN_00578420(char * filename)
    MOV ECX,dword ptr [0x03654368]      ; 0057864d | g_GroundTextureCount
    ADD ESP,0x4                         ; 00578653
    CMP ECX,0x1                         ; 00578656
    JL 0x00578801                       ; 00578659
        ;   XREF to: 00578801 (CONDITIONAL_JUMP)  ; LAB_00578801
    PUSH EDI                            ; 0057865f
    PUSH ESI                            ; 00578660
    LEA EAX,[ESP + 0x8]                 ; 00578661
    PUSH EAX                            ; 00578665
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00578666
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057866b
    PUSH 0x1                            ; 0057866e
    LEA EAX,[ESP + 0xc]                 ; 00578670
    PUSH EAX                            ; 00578674
    XOR EDI,EDI                         ; 00578675
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10 ; 00578677
        ;   XREF to: 004a3e10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList * this_ptr, int result_value)
    ADD ESP,0x8                         ; 0057867c
        ;   Label: LAB_0057867c
    LEA EAX,[ESP + 0x8]                 ; 0057867f
        ;   Label: LAB_0057867f
    PUSH EAX                            ; 00578683
    XOR EBX,EBX                         ; 00578684
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 00578686
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    MOV ESI,dword ptr [0x03654368]      ; 0057868b | g_GroundTextureCount
    ADD ESP,0x4                         ; 00578691
    TEST ESI,ESI                        ; 00578694
    JLE 0x005786e7                      ; 00578696
        ;   XREF to: 005786e7 (CONDITIONAL_JUMP)  ; LAB_005786e7
    MOV ESI,0x3654370                   ; 00578698 | g_GroundTextureNames
    XOR EAX,EAX                         ; 0057869d
        ;   Label: LAB_0057869d
    MOV AL,byte ptr [EBX + 0x3659190]   ; 0057869f | g_GroundTextureTypes | DAT_03659191
    PUSH EAX                            ; 005786a5
    CALL core_ground.cpp_getGroundTypeName_FUN_004eed80 ; 005786a6
        ;   XREF to: 004eed80 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeName_FUN_004eed80(EGroundType type)
    ADD ESP,0x4                         ; 005786ab
    PUSH EAX                            ; 005786ae
    PUSH ESI                            ; 005786af | g_GroundTextureNames
    PUSH 0x646970                       ; 005786b0 | = "%s\t%s"
    LEA EAX,[ESP + 0x8f4]               ; 005786b5
    PUSH EAX                            ; 005786bc
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005786bd
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005786c2
    LEA EAX,[ESP + 0x8e8]               ; 005786c5
    PUSH EAX                            ; 005786cc
    LEA EAX,[ESP + 0xc]                 ; 005786cd
    PUSH EAX                            ; 005786d1
    INC EBX                             ; 005786d2
    ADD ESI,0x28                        ; 005786d3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005786d6
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV EAX,[0x03654368]                ; 005786db | g_GroundTextureCount
    ADD ESP,0x8                         ; 005786e0
    CMP EBX,EAX                         ; 005786e3
    JL 0x0057869d                       ; 005786e5
        ;   XREF to: 0057869d (CONDITIONAL_JUMP)  ; LAB_0057869d
    LEA EAX,[ESP + 0x8]                 ; 005786e7
        ;   Label: LAB_005786e7
    PUSH EAX                            ; 005786eb
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 005786ec
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 005786f1
    PUSH 0x0                            ; 005786f4
    PUSH EDI                            ; 005786f6
    PUSH 0x646976                       ; 005786f7 | = "Editing ground types, press ESC when ..."
    LEA EAX,[ESP + 0x14]                ; 005786fc
    PUSH EAX                            ; 00578700
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00578701
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 00578706
    MOV EDI,EAX                         ; 00578709
    TEST EAX,EAX                        ; 0057870b
    JL 0x0057881f                       ; 0057870d
        ;   XREF to: 0057881f (CONDITIONAL_JUMP)  ; LAB_0057881f
    PUSH 0x0                            ; 00578713
    PUSH EAX                            ; 00578715
    LEA EAX,[ESP + 0xb80]               ; 00578716
    PUSH EAX                            ; 0057871d
    LEA EAX,[ESP + 0x14]                ; 0057871e
    PUSH EAX                            ; 00578722
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 00578723
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 00578728
    PUSH 0x0                            ; 0057872b
    LEA EAX,[ESP + 0xa7c]               ; 0057872d
    PUSH EAX                            ; 00578734
    PUSH 0x0                            ; 00578735
    PUSH 0x0                            ; 00578737
    LEA EAX,[ESP + 0xb88]               ; 00578739
    PUSH EAX                            ; 00578740
    XOR EBX,EBX                         ; 00578741
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 00578743
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    MOV EDX,dword ptr [0x03654368]      ; 00578748 | g_GroundTextureCount
    ADD ESP,0x14                        ; 0057874e
    TEST EDX,EDX                        ; 00578751
    JLE 0x005789c4                      ; 00578753
        ;   XREF to: 005789c4 (CONDITIONAL_JUMP)  ; LAB_005789c4
    MOV ESI,0x3654370                   ; 00578759 | g_GroundTextureNames
    LEA EAX,[ESP + 0xa78]               ; 0057875e
        ;   Label: LAB_0057875e
    PUSH EAX                            ; 00578765
    PUSH ESI                            ; 00578766 | g_GroundTextureNames | DAT_03654398
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 00578767
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057876c
    TEST EAX,EAX                        ; 0057876f
    JNZ 0x005789b3                      ; 00578771
        ;   XREF to: 005789b3 (CONDITIONAL_JUMP)  ; LAB_005789b3
    MOV EAX,EBX                         ; 00578777
    MOV ESI,EAX                         ; 00578779
        ;   Label: LAB_00578779
    TEST EAX,EAX                        ; 0057877b
    JL 0x005789ce                       ; 0057877d
        ;   XREF to: 005789ce (CONDITIONAL_JUMP)  ; LAB_005789ce
    LEA EAX,[ESP + 0x8]                 ; 00578783
        ;   Label: LAB_00578783
    PUSH EAX                            ; 00578787
    XOR EBX,EBX                         ; 00578788
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 0057878a
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057878f
    PUSH EBX                            ; 00578792
        ;   Label: LAB_00578792
    CALL core_ground.cpp_getGroundTypeName_FUN_004eed80 ; 00578793
        ;   XREF to: 004eed80 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeName_FUN_004eed80(EGroundType type)
    ADD ESP,0x4                         ; 00578798
    PUSH EAX                            ; 0057879b
    LEA EAX,[ESP + 0xc]                 ; 0057879c
    PUSH EAX                            ; 005787a0
    INC EBX                             ; 005787a1
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005787a2
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005787a7
    CMP EBX,0xe                         ; 005787aa
    JL 0x00578792                       ; 005787ad
        ;   XREF to: 00578792 (CONDITIONAL_JUMP)  ; LAB_00578792
    LEA EAX,[ESP + 0xb78]               ; 005787af
    PUSH EAX                            ; 005787b6
    PUSH 0x646abf                       ; 005787b7 | = "Select ground type for %s"
    LEA EAX,[ESP + 0x760]               ; 005787bc
    PUSH EAX                            ; 005787c3
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005787c4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005787c9
    XOR EAX,EAX                         ; 005787cc
    PUSH 0x0                            ; 005787ce
    MOV AL,byte ptr [ESI + 0x3659190]   ; 005787d0 | DAT_0365918f
    PUSH EAX                            ; 005787d6
    LEA EAX,[ESP + 0x760]               ; 005787d7
    PUSH EAX                            ; 005787de
    LEA EAX,[ESP + 0x14]                ; 005787df
    PUSH EAX                            ; 005787e3
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005787e4
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 005787e9
    MOV EBX,EAX                         ; 005787ec
    TEST EAX,EAX                        ; 005787ee
    JL 0x0057867f                       ; 005787f0
        ;   XREF to: 0057867f (CONDITIONAL_JUMP)  ; LAB_0057867f
    MOV byte ptr [ESI + 0x3659190],AL   ; 005787f6 | DAT_0365918f
    JMP 0x0057867f                      ; 005787fc
        ;   XREF to: 0057867f (UNCONDITIONAL_JUMP)  ; LAB_0057867f
    PUSH EBP                            ; 00578801
        ;   Label: LAB_00578801
    PUSH 0x646953                       ; 00578802 | = "No ground type entries in %s"
    MOV EBX,dword ptr [0x00678a60]      ; 00578807 | g_CEditorToolsPtr
    PUSH EBX                            ; 0057880d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0057880e
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00578813
    ADD ESP,0xbd4                       ; 00578816
    POP EBP                             ; 0057881c
    POP EBX                             ; 0057881d
    RET                                 ; 0057881e
    LEA EAX,[ESP + 0x3b0]               ; 0057881f
        ;   Label: LAB_0057881f
    PUSH EAX                            ; 00578826
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00578827
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057882c
    LEA EAX,[ESP + 0x3b0]               ; 0057882f
    PUSH EAX                            ; 00578836
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 00578837
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057883c
    PUSH 0x6469a1                       ; 0057883f | = "[Y]es, Accept changes and write chang..."
    LEA EAX,[ESP + 0x3b4]               ; 00578844
    PUSH EAX                            ; 0057884b
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057884c
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00578851
    PUSH 0x6469dd                       ; 00578854 | = "[N]o, Abort changes and don't save an..."
    LEA EAX,[ESP + 0x3b4]               ; 00578859
    PUSH EAX                            ; 00578860
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00578861
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00578866
    PUSH 0x15                           ; 00578869
    PUSH 0x0                            ; 0057886b
    LEA EAX,[ESP + 0x3b8]               ; 0057886d
    PUSH EAX                            ; 00578874
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540 ; 00578875
        ;   XREF to: 004a5540 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 0057887a
    PUSH 0x31                           ; 0057887d
    PUSH 0x1                            ; 0057887f
    LEA EAX,[ESP + 0x3b8]               ; 00578881
    PUSH EAX                            ; 00578888
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540 ; 00578889
        ;   XREF to: 004a5540 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 0057888e
    PUSH 0x0                            ; 00578891
    PUSH -0x1                           ; 00578893
    PUSH 0x646a16                       ; 00578895 | = "Save changes?"
    LEA EAX,[ESP + 0x3bc]               ; 0057889a
    PUSH EAX                            ; 005788a1
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005788a2
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 005788a7
    TEST EAX,EAX                        ; 005788aa
    JL 0x0057899f                       ; 005788ac
        ;   XREF to: 0057899f (CONDITIONAL_JUMP)  ; LAB_0057899f
    JNZ 0x00578973                      ; 005788b2
        ;   XREF to: 00578973 (CONDITIONAL_JUMP)  ; LAB_00578973
    PUSH EBP                            ; 005788b8
    PUSH 0x646a24                       ; 005788b9 | = "Saving %s..."
    MOV ECX,dword ptr [0x00678a60]      ; 005788be | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 005788c4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005788c5
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005788ca
    PUSH 0x326                          ; 005788cd
    PUSH 0x646a31                       ; 005788d2 | = "..\\core\\setedit.cpp"
    PUSH 0x646a45                       ; 005788d7 | = "wt"
    PUSH 0x0                            ; 005788dc
    PUSH EBP                            ; 005788de
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005788df
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 005788e4
    MOV EDI,EAX                         ; 005788e7
    TEST EAX,EAX                        ; 005788e9
    JNZ 0x00578911                      ; 005788eb
        ;   XREF to: 00578911 (CONDITIONAL_JUMP)  ; LAB_00578911
    PUSH EBP                            ; 005788ed
    MOV EBX,0x646a48                    ; 005788ee | = "..\\core\\setedit.cpp"
    MOV ESI,0x327                       ; 005788f3
    PUSH 0x646a5c                       ; 005788f8 | = "Can't create %s"
    MOV dword ptr [0x02f0ca48],EBX      ; 005788fd | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00578903 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00578909
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0057890e
    MOV EBP,dword ptr [0x03654368]      ; 00578911 | g_GroundTextureCount
        ;   Label: LAB_00578911
    XOR EBX,EBX                         ; 00578917
    TEST EBP,EBP                        ; 00578919
    JLE 0x00578960                      ; 0057891b
        ;   XREF to: 00578960 (CONDITIONAL_JUMP)  ; LAB_00578960
    MOV ESI,0x3654370                   ; 0057891d | g_GroundTextureNames
    XOR EAX,EAX                         ; 00578922
        ;   Label: LAB_00578922
    MOV AL,byte ptr [EBX + 0x3659190]   ; 00578924 | g_GroundTextureTypes | DAT_03659191
    PUSH EAX                            ; 0057892a
    CALL core_ground.cpp_getGroundTypeName_FUN_004eed80 ; 0057892b
        ;   XREF to: 004eed80 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeName_FUN_004eed80(EGroundType type)
    ADD ESP,0x4                         ; 00578930
    PUSH EAX                            ; 00578933
    PUSH ESI                            ; 00578934 | g_GroundTextureNames
    PUSH 0x646a6c                       ; 00578935 | = "%s, %s\n"
    PUSH EDI                            ; 0057893a
    INC EBX                             ; 0057893b
    ADD ESI,0x28                        ; 0057893c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057893f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EBP,dword ptr [0x03654368]      ; 00578944 | g_GroundTextureCount
    ADD ESP,0x10                        ; 0057894a
    CMP EBX,EBP                         ; 0057894d
    JL 0x00578922                       ; 0057894f
        ;   XREF to: 00578922 (CONDITIONAL_JUMP)  ; LAB_00578922
    LEA EAX,[EAX]                       ; 00578951
    LEA EDX,[EDX]                       ; 00578957
    LEA EAX,[EAX]                       ; 0057895d
    PUSH 0x32b                          ; 00578960
        ;   Label: LAB_00578960
    PUSH 0x646a74                       ; 00578965 | = "..\\core\\setedit.cpp"
    PUSH EDI                            ; 0057896a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057896b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00578970
    PUSH 0x0                            ; 00578973
        ;   Label: LAB_00578973
    LEA EAX,[ESP + 0x3b4]               ; 00578975
    PUSH EAX                            ; 0057897c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0057897d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00578982
    PUSH 0x0                            ; 00578985
    LEA EAX,[ESP + 0xc]                 ; 00578987
    PUSH EAX                            ; 0057898b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0057898c
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00578991
    POP ESI                             ; 00578994
    POP EDI                             ; 00578995
    ADD ESP,0xbd4                       ; 00578996
    POP EBP                             ; 0057899c
    POP EBX                             ; 0057899d
    RET                                 ; 0057899e
    PUSH 0x0                            ; 0057899f
        ;   Label: LAB_0057899f
    LEA EAX,[ESP + 0x3b4]               ; 005789a1
    PUSH EAX                            ; 005789a8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005789a9
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    JMP 0x0057867c                      ; 005789ae
        ;   XREF to: 0057867c (UNCONDITIONAL_JUMP)  ; LAB_0057867c
    MOV EAX,[0x03654368]                ; 005789b3 | g_GroundTextureCount
        ;   Label: LAB_005789b3
    INC EBX                             ; 005789b8
    ADD ESI,0x28                        ; 005789b9
    CMP EBX,EAX                         ; 005789bc
    JL 0x0057875e                       ; 005789be
        ;   XREF to: 0057875e (CONDITIONAL_JUMP)  ; LAB_0057875e
    MOV EAX,0xffffffff                  ; 005789c4
        ;   Label: LAB_005789c4
    JMP 0x00578779                      ; 005789c9
        ;   XREF to: 00578779 (UNCONDITIONAL_JUMP)  ; LAB_00578779
    MOV EDX,0x646a88                    ; 005789ce | = "..\\core\\setedit.cpp"
        ;   Label: LAB_005789ce
    MOV ECX,0x332                       ; 005789d3
    PUSH 0x646a9c                       ; 005789d8 | = "Can't find ground texture in list!"
    MOV dword ptr [0x02f0ca48],EDX      ; 005789dd | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005789e3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005789e9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005789ee
    JMP 0x00578783                      ; 005789f1
        ;   XREF to: 00578783 (UNCONDITIONAL_JUMP)  ; LAB_00578783

