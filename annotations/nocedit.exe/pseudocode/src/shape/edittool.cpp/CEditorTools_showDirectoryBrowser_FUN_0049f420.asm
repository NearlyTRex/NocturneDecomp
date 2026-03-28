; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools *this_ptr,char *title_text,char *search_pattern,char *initial_path,uint flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   title_text
; char *           Stack[0xc]:4   search_pattern
; char *           Stack[0x10]:4   initial_path
; uint             Stack[0x14]:4   flags
; Local Variables:
; CPickList        Stack[-0x1ec8]:936  local_1ec8
; char[560]        Stack[-0x1b20]:560  local_1b20
; CFileFinder      Stack[-0x18f0]:276  local_18f0
; char[260]        Stack[-0x17dc]:260  local_17dc
; char[260]        Stack[-0x16d8]:260  local_16d8
; char[260]        Stack[-0x15d4]:260  local_15d4
; char[260]        Stack[-0x14d0]:260  local_14d0
; char[260]        Stack[-0x13cc]:260  local_13cc
; char[260]        Stack[-0x12c8]:260  local_12c8
; char[256]        Stack[-0x11c4]:256  local_11c4
; char[256]        Stack[-0x10c4]:256  local_10c4
; char[256]        Stack[-0xfc4]:256  local_fc4
; char[256]        Stack[-0xec4]:256  local_ec4
; char[256]        Stack[-0xdc4]:256  local_dc4
; char[256]        Stack[-0xcc4]:256  local_cc4
; char[256]        Stack[-0xbc4]:256  local_bc4
; char[256]        Stack[-0xac4]:256  local_ac4
; char[256]        Stack[-0x9c4]:256  local_9c4
; char[256]        Stack[-0x8c4]:256  local_8c4
; char[256]        Stack[-0x7c4]:256  local_7c4
; char             Stack[-0x6c4]:1  local_6c4
; undefined1[255]  Stack[-0x6c3]:255  local_6c3
; char[256]        Stack[-0x5c4]:256  local_5c4
; char             Stack[-0x4c4]:1  local_4c4
; undefined1[255]  Stack[-0x4c3]:255  local_4c3
; char[256]        Stack[-0x3c4]:256  local_3c4
; char[256]        Stack[-0x2c4]:256  local_2c4
; char[200]        Stack[-0x1c4]:200  local_1c4
; char[200]        Stack[-0xfc]:200  local_fc
; char[32]         Stack[-0x34]:32  local_34
; int              Stack[-0x14]:4  local_14
; char[4]          Stack[-0x10]:4  local_10
; char[4]          Stack[-0xc]:4  local_c
;
; XREF[11]:
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443264
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e75e
;   core_setedit.cpp_CDemonSet_importSet_FUN_00578a20 at 00578a72
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584d1c
;   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 at 004b748e
;   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 at 004b82cb
;   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 at 004b76fa
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b6e3f
;   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 at 004bd1bf
;   engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90 at 004b7cba
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_Error_getting_current_di_006230f1
;   TerminatedCString s_s_s_00623112
;   TerminatedCString s_anon_00623118
;   TerminatedCString s_m_d_y_I_M_S_p_0062311c
;   TerminatedCString s_s_s_d_s_00623132
;   TerminatedCString s_anon_0062313d
;   TerminatedCString s_anon_00623141
;   TerminatedCString s_DIR_00623144
;   TerminatedCString s_anon_0062314e
;   TerminatedCString s_s_s_DIR_00623150
;   TerminatedCString s_Change_Path_0062315c
;   string s_Enter_new_path_0062316a
;   TerminatedCString s_Can_t_change_to_s_00623179
;   char[264] g_BrowserLastSelectedFile
;   undefined4 g_BrowserLastSelectedFile+4
;   ... and 4 more
;
; Called Functions:
;   crt_io.c_chdir_FUN_006012a0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c__strcmp_FUN_005fef20
;   crt_string.c__stricmp_FUN_005fe7f0
;   crt_string.c_memmove_FUN_005fe5e0
;   crt_string.c_strupr_FUN_00600770
;   crt_time.c__localtime_FUN_00600288
;   crt_time.c__strftime_FUN_006002d4
;   crt_watcom.c__getcwd_FUN_00608d20
;   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
;   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
;   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
;   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f420
        ;   Label: shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
    PUSH EBP                            ; 0049f421
    SUB ESP,0x1ec0                      ; 0049f422
    MOV EBX,dword ptr [ESP + 0x1ecc]    ; 0049f428
    PUSH 0x104                          ; 0049f42f
    LEA EAX,[ESP + 0x9fc]               ; 0049f434
    PUSH EAX                            ; 0049f43b
    CALL crt_watcom.c__getcwd_FUN_00608d20 ; 0049f43c
        ;   XREF to: 0060128c (UNCONDITIONAL_CALL)  ; char * crt_watcom.c__getcwd_FUN_00608d20(char * buffer, SIZE_T size)
    ADD ESP,0x8                         ; 0049f441
    TEST EAX,EAX                        ; 0049f444
    JZ 0x0049f71b                       ; 0049f446
        ;   XREF to: 0049f71b (CONDITIONAL_JUMP)  ; LAB_0049f71b
    PUSH EDI                            ; 0049f44c
    PUSH ESI                            ; 0049f44d
    MOV ECX,0x41                        ; 0049f44e
    LEA EDI,[ESP + 0xc08]               ; 0049f453
    MOV ESI,0x678a70                    ; 0049f45a | g_BrowserLastSelectedFile
    MOV AH,byte ptr [ESP + 0x1ee4]      ; 0049f45f
    MOVSD.REP ES:EDI,ESI                ; 0049f466 | g_BrowserLastSelectedFile | g_BrowserLastSelectedFile+4
    TEST AH,0x1                         ; 0049f468
    JNZ 0x0049f734                      ; 0049f46b
        ;   XREF to: 0049f734 (CONDITIONAL_JUMP)  ; LAB_0049f734
    XOR ECX,ECX                         ; 0049f471
        ;   Label: LAB_0049f471
    MOV dword ptr [ESP + 0x1ebc],ECX    ; 0049f473
    MOV ECX,0x41                        ; 0049f47a
        ;   Label: LAB_0049f47a
    LEA EDI,[ESP + 0x6f4]               ; 0049f47f
    PUSH 0x104                          ; 0049f486
    LEA EAX,[ESP + 0x6f8]               ; 0049f48b
    MOV ESI,0x678b78                    ; 0049f492 | = "[ERROR: Can't get current directory.]"
    PUSH EAX                            ; 0049f497
    MOVSD.REP ES:EDI,ESI                ; 0049f498 | = "[ERROR: Can't get current directory.]" | s_OR:_Can't_get_current_directory._00678b7c
    CALL crt_watcom.c__getcwd_FUN_00608d20 ; 0049f49a
        ;   XREF to: 0060128c (UNCONDITIONAL_CALL)  ; char * crt_watcom.c__getcwd_FUN_00608d20(char * buffer, SIZE_T size)
    ADD ESP,0x8                         ; 0049f49f
    LEA EAX,[ESP + 0x6f4]               ; 0049f4a2
    PUSH EAX                            ; 0049f4a9
    MOV ESI,dword ptr [ESP + 0x1edc]    ; 0049f4aa
    PUSH ESI                            ; 0049f4b1
    PUSH 0x623112                       ; 0049f4b2 | = "%s\n%s"
    LEA EAX,[ESP + 0x3bc]               ; 0049f4b7
    PUSH EAX                            ; 0049f4be
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0049f4bf
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0049f4c4
    LEA EAX,[ESP + 0x8]                 ; 0049f4c7
    PUSH EAX                            ; 0049f4cb
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0049f4cc
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0049f4d1
    LEA EAX,[ESP + 0x5e0]               ; 0049f4d4
    PUSH EAX                            ; 0049f4db
    CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30 ; 0049f4dc
        ;   XREF to: 00481c30 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_ctor_FUN_00481c30(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0049f4e1
    CMP dword ptr [ESP + 0x1edc],0x0    ; 0049f4e4
    JNZ 0x0049f4f9                      ; 0049f4ec
        ;   XREF to: 0049f4f9 (CONDITIONAL_JUMP)  ; LAB_0049f4f9
    MOV dword ptr [ESP + 0x1edc],0x623118 ; 0049f4ee | = "*.*"
    MOV EAX,dword ptr [ESP + 0x1edc]    ; 0049f4f9
        ;   Label: LAB_0049f4f9
    PUSH EAX                            ; 0049f500 | = "*.*"
    LEA EAX,[ESP + 0x5e4]               ; 0049f501
    PUSH EAX                            ; 0049f508
    CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 ; 0049f509
        ;   XREF to: 00481c70 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 0049f50e
    CMP byte ptr [ESP + 0x5e0],0x0      ; 0049f511
    JZ 0x0049f543                       ; 0049f519
        ;   XREF to: 0049f543 (CONDITIONAL_JUMP)  ; LAB_0049f543
    TEST byte ptr [ESP + 0x6e0],0x4     ; 0049f51b
        ;   Label: LAB_0049f51b
    JZ 0x0049f7d1                       ; 0049f523
        ;   XREF to: 0049f7d1 (CONDITIONAL_JUMP)  ; LAB_0049f7d1
    LEA EAX,[ESP + 0x5e0]               ; 0049f529
        ;   Label: LAB_0049f529
    PUSH EAX                            ; 0049f530
    CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 ; 0049f531
        ;   XREF to: 00481cf0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0049f536
    CMP byte ptr [ESP + 0x5e0],0x0      ; 0049f539
    JNZ 0x0049f51b                      ; 0049f541
        ;   XREF to: 0049f51b (CONDITIONAL_JUMP)  ; LAB_0049f51b
    LEA EAX,[ESP + 0x8]                 ; 0049f543
        ;   Label: LAB_0049f543
    PUSH EAX                            ; 0049f547
    CALL shape_edittool.cpp_CStrList_sortAll_FUN_004a2ec0 ; 0049f548
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sortAll_FUN_004a2ec0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0049f54d
    MOV ESI,0xffffffff                  ; 0049f550
    MOV CL,byte ptr [ESP + 0xc08]       ; 0049f555
    MOV EBP,dword ptr [ESP + 0x8]       ; 0049f55c
    TEST CL,CL                          ; 0049f560
    JZ 0x0049f5f6                       ; 0049f562
        ;   XREF to: 0049f5f6 (CONDITIONAL_JUMP)  ; LAB_0049f5f6
    XOR ESI,ESI                         ; 0049f568
    TEST EBP,EBP                        ; 0049f56a
    JLE 0x0049f5e2                      ; 0049f56c
        ;   XREF to: 0049f5e2 (CONDITIONAL_JUMP)  ; LAB_0049f5e2
    PUSH 0x0                            ; 0049f56e
        ;   Label: LAB_0049f56e
    PUSH ESI                            ; 0049f570
    LEA EAX,[ESP + 0x1514]              ; 0049f571
    PUSH EAX                            ; 0049f578
    LEA EAX,[ESP + 0x14]                ; 0049f579
    PUSH EAX                            ; 0049f57d
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0049f57e
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0049f583
    PUSH 0x1                            ; 0049f586
    PUSH ESI                            ; 0049f588
    LEA EAX,[ESP + 0x1914]              ; 0049f589
    PUSH EAX                            ; 0049f590
    LEA EAX,[ESP + 0x14]                ; 0049f591
    PUSH EAX                            ; 0049f595
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0049f596
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0049f59b
    LEA EAX,[ESP + 0x190c]              ; 0049f59e
    PUSH EAX                            ; 0049f5a5
    LEA EAX,[ESP + 0x1510]              ; 0049f5a6
    PUSH EAX                            ; 0049f5ad
    PUSH 0x0                            ; 0049f5ae
    PUSH 0x0                            ; 0049f5b0
    LEA EAX,[ESP + 0x90c]               ; 0049f5b2
    PUSH EAX                            ; 0049f5b9
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 0049f5ba
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049f5bf
    LEA EAX,[ESP + 0xc08]               ; 0049f5c2
    PUSH EAX                            ; 0049f5c9
    LEA EAX,[ESP + 0x900]               ; 0049f5ca
    PUSH EAX                            ; 0049f5d1
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0049f5d2
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049f5d7
    TEST EAX,EAX                        ; 0049f5da
    JNZ 0x0049f8b0                      ; 0049f5dc
        ;   XREF to: 0049f8b0 (CONDITIONAL_JUMP)  ; LAB_0049f8b0
    CMP ESI,dword ptr [ESP + 0x8]       ; 0049f5e2
        ;   Label: LAB_0049f5e2
    JL 0x0049f5ed                       ; 0049f5e6
        ;   XREF to: 0049f5ed (CONDITIONAL_JUMP)  ; LAB_0049f5ed
    MOV ESI,0xffffffff                  ; 0049f5e8
    XOR AH,AH                           ; 0049f5ed
        ;   Label: LAB_0049f5ed
    MOV byte ptr [ESP + 0xc08],AH       ; 0049f5ef
    PUSH 0x62313d                       ; 0049f5f6 | = "*.*"
        ;   Label: LAB_0049f5f6
    LEA EAX,[ESP + 0x5e4]               ; 0049f5fb
    PUSH EAX                            ; 0049f602
    CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 ; 0049f603
        ;   XREF to: 00481c70 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 0049f608
    CMP byte ptr [ESP + 0x5e0],0x0      ; 0049f60b
    JZ 0x0049f668                       ; 0049f613
        ;   XREF to: 0049f668 (CONDITIONAL_JUMP)  ; LAB_0049f668
    TEST byte ptr [ESP + 0x6e0],0x4     ; 0049f615
        ;   Label: LAB_0049f615
    JZ 0x0049f64e                       ; 0049f61d
        ;   XREF to: 0049f64e (CONDITIONAL_JUMP)  ; LAB_0049f64e
    PUSH 0x623141                       ; 0049f61f | = ".."
    LEA EAX,[ESP + 0x5e4]               ; 0049f624
    PUSH EAX                            ; 0049f62b
    CALL crt_string.c__strcmp_FUN_005fef20 ; 0049f62c
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049f631
    TEST EAX,EAX                        ; 0049f634
    JNZ 0x0049f8c2                      ; 0049f636
        ;   XREF to: 0049f8c2 (CONDITIONAL_JUMP)  ; LAB_0049f8c2
    PUSH 0x623144                       ; 0049f63c | = "..\t\t(DIR)"
    LEA EAX,[ESP + 0xc]                 ; 0049f641
        ;   Label: LAB_0049f641
    PUSH EAX                            ; 0049f645
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0049f646
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0049f64b
    LEA EAX,[ESP + 0x5e0]               ; 0049f64e
        ;   Label: LAB_0049f64e
    PUSH EAX                            ; 0049f655
    CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 ; 0049f656
        ;   XREF to: 00481cf0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0049f65b
    CMP byte ptr [ESP + 0x5e0],0x0      ; 0049f65e
    JNZ 0x0049f615                      ; 0049f666
        ;   XREF to: 0049f615 (CONDITIONAL_JUMP)  ; LAB_0049f615
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049f668
        ;   Label: LAB_0049f668
    DEC EAX                             ; 0049f66c
    PUSH EAX                            ; 0049f66d
    PUSH EBP                            ; 0049f66e
    LEA EAX,[ESP + 0x10]                ; 0049f66f
    PUSH EAX                            ; 0049f673
    CALL shape_edittool.cpp_CPickList_sort_FUN_004a57f0 ; 0049f674
        ;   XREF to: 004a57f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_sort_FUN_004a57f0(CPickList * this_ptr, int sort_type, int sort_order)
    ADD ESP,0xc                         ; 0049f679
    PUSH 0x62315c                       ; 0049f67c | = "(Change Path)"
    LEA EAX,[ESP + 0xc]                 ; 0049f681
    PUSH EAX                            ; 0049f685
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0049f686
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0049f68b
    PUSH 0x0                            ; 0049f68e
    PUSH ESI                            ; 0049f690
    LEA EAX,[ESP + 0x3b8]               ; 0049f691
    PUSH EAX                            ; 0049f698
    LEA EAX,[ESP + 0x14]                ; 0049f699
    PUSH EAX                            ; 0049f69d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0049f69e
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    MOV ESI,EAX                         ; 0049f6a3
    ADD ESP,0x10                        ; 0049f6a5
    TEST EAX,EAX                        ; 0049f6a8
    JL 0x0049f979                       ; 0049f6aa
        ;   XREF to: 0049f979 (CONDITIONAL_JUMP)  ; LAB_0049f979
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049f6b0
    DEC EAX                             ; 0049f6b4
    CMP ESI,EAX                         ; 0049f6b5
    JL 0x0049f9ff                       ; 0049f6b7
        ;   XREF to: 0049f9ff (CONDITIONAL_JUMP)  ; LAB_0049f9ff
    MOV ECX,0x41                        ; 0049f6bd
    LEA EDI,[ESP + 0x7f8]               ; 0049f6c2
    MOV ESI,0x678c80                    ; 0049f6c9 | g_BrowserLastEnteredPath
    MOVSD.REP ES:EDI,ESI                ; 0049f6ce | g_BrowserLastEnteredPath | g_BrowserLastEnteredPath+4
    PUSH 0x1                            ; 0049f6d0
        ;   Label: LAB_0049f6d0
    PUSH 0x104                          ; 0049f6d2
    LEA EAX,[ESP + 0x800]               ; 0049f6d7
    PUSH EAX                            ; 0049f6de
    PUSH 0x62316a                       ; 0049f6df | = "Enter new path"
    PUSH EBX                            ; 0049f6e4
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0049f6e5
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0049f6ea
    TEST EAX,EAX                        ; 0049f6ed
    JNZ 0x0049f9bc                      ; 0049f6ef
        ;   XREF to: 0049f9bc (CONDITIONAL_JUMP)  ; LAB_0049f9bc
    PUSH 0x0                            ; 0049f6f5
        ;   Label: LAB_0049f6f5
    LEA EAX,[ESP + 0x5e4]               ; 0049f6f7
    PUSH EAX                            ; 0049f6fe
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 0049f6ff
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049f704
    PUSH 0x0                            ; 0049f707
    LEA EAX,[ESP + 0xc]                 ; 0049f709
    PUSH EAX                            ; 0049f70d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0049f70e
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049f713
    JMP 0x0049f47a                      ; 0049f716
        ;   XREF to: 0049f47a (UNCONDITIONAL_JUMP)  ; LAB_0049f47a
    PUSH 0x6230f1                       ; 0049f71b | = "Error getting current directory."
        ;   Label: LAB_0049f71b
    PUSH EBX                            ; 0049f720
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0049f721
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0049f726
    XOR EAX,EAX                         ; 0049f729
    ADD ESP,0x1ec0                      ; 0049f72b
    POP EBP                             ; 0049f731
    POP EBX                             ; 0049f732
    RET                                 ; 0049f733
    LEA EAX,[ESP + 0x1b0c]              ; 0049f734
        ;   Label: LAB_0049f734
    PUSH EAX                            ; 0049f73b
    LEA EAX,[ESP + 0x1010]              ; 0049f73c
    PUSH EAX                            ; 0049f743
    LEA EAX,[ESP + 0x1314]              ; 0049f744
    PUSH EAX                            ; 0049f74b
    LEA EAX,[ESP + 0x1ed0]              ; 0049f74c
    PUSH EAX                            ; 0049f753
    MOV EDX,dword ptr [ESP + 0x1ef0]    ; 0049f754
    PUSH EDX                            ; 0049f75b
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 0049f75c
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049f761
    PUSH 0x0                            ; 0049f764
    PUSH 0x0                            ; 0049f766
    LEA EAX,[ESP + 0x1314]              ; 0049f768
    PUSH EAX                            ; 0049f76f
    LEA EAX,[ESP + 0x1ed0]              ; 0049f770
    PUSH EAX                            ; 0049f777
    LEA EAX,[ESP + 0xb14]               ; 0049f778
    PUSH EAX                            ; 0049f77f
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 0049f780
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049f785
    LEA EAX,[ESP + 0xb04]               ; 0049f788
    PUSH EAX                            ; 0049f78f
    CALL crt_io.c_chdir_FUN_006012a0    ; 0049f790
        ;   XREF to: 006012a0 (UNCONDITIONAL_CALL)  ; int crt_io.c_chdir_FUN_006012a0(char * path)
    ADD ESP,0x4                         ; 0049f795
    LEA EAX,[ESP + 0x1b0c]              ; 0049f798
    PUSH EAX                            ; 0049f79f
    LEA EAX,[ESP + 0x1010]              ; 0049f7a0
    PUSH EAX                            ; 0049f7a7
    PUSH 0x0                            ; 0049f7a8
    PUSH 0x0                            ; 0049f7aa
    LEA EAX,[ESP + 0xc18]               ; 0049f7ac
    PUSH EAX                            ; 0049f7b3
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 0049f7b4
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049f7b9
    LEA EAX,[ESP + 0xc08]               ; 0049f7bc
    PUSH EAX                            ; 0049f7c3
    CALL crt_io.c_chdir_FUN_006012a0    ; 0049f7c4
        ;   XREF to: 006012a0 (UNCONDITIONAL_CALL)  ; int crt_io.c_chdir_FUN_006012a0(char * path)
    ADD ESP,0x4                         ; 0049f7c9
    JMP 0x0049f471                      ; 0049f7cc
        ;   XREF to: 0049f471 (UNCONDITIONAL_JUMP)  ; LAB_0049f471
    LEA EAX,[ESP + 0x1a0c]              ; 0049f7d1
        ;   Label: LAB_0049f7d1
    PUSH EAX                            ; 0049f7d8
    LEA EAX,[ESP + 0x1110]              ; 0049f7d9
    PUSH EAX                            ; 0049f7e0
    PUSH 0x0                            ; 0049f7e1
    PUSH 0x0                            ; 0049f7e3
    LEA EAX,[ESP + 0x5f0]               ; 0049f7e5
    PUSH EAX                            ; 0049f7ec
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 0049f7ed
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049f7f2
    CMP byte ptr [ESP + 0x1a0c],0x2e    ; 0049f7f5
    JNZ 0x0049f829                      ; 0049f7fd
        ;   XREF to: 0049f829 (CONDITIONAL_JUMP)  ; LAB_0049f829
    LEA EDI,[ESP + 0x1a0c]              ; 0049f7ff
    SUB ECX,ECX                         ; 0049f806
    DEC ECX                             ; 0049f808
    XOR EAX,EAX                         ; 0049f809
    SCASB.REPNE ES:EDI                  ; 0049f80b
    NOT ECX                             ; 0049f80d
    DEC ECX                             ; 0049f80f
    PUSH ECX                            ; 0049f810
    LEA EAX,[ESP + 0x1a11]              ; 0049f811
    PUSH EAX                            ; 0049f818
    LEA EAX,[ESP + 0x1a14]              ; 0049f819
    PUSH EAX                            ; 0049f820
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0049f821
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0049f826
    LEA EAX,[ESP + 0x6e8]               ; 0049f829
        ;   Label: LAB_0049f829
    PUSH EAX                            ; 0049f830
    CALL crt_time.c__localtime_FUN_00600288 ; 0049f831
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_00600288(time_t * timer)
    ADD ESP,0x4                         ; 0049f836
    PUSH EAX                            ; 0049f839
    PUSH 0x62311c                       ; 0049f83a | = "\t%m/%d/%y %I:%M:%S %p"
    PUSH 0x1e                           ; 0049f83f
    LEA EAX,[ESP + 0x1ea8]              ; 0049f841
    PUSH EAX                            ; 0049f848
    CALL crt_time.c__strftime_FUN_006002d4 ; 0049f849
        ;   XREF to: 006002d4 (UNCONDITIONAL_CALL)  ; uint crt_time.c__strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, _tm * time_ptr)
    ADD ESP,0x10                        ; 0049f84e
    LEA EAX,[ESP + 0x1e9c]              ; 0049f851
    PUSH EAX                            ; 0049f858
    MOV ECX,dword ptr [ESP + 0x6e8]     ; 0049f859
    PUSH ECX                            ; 0049f860
    LEA EAX,[ESP + 0x1a14]              ; 0049f861
    PUSH EAX                            ; 0049f868
    LEA EAX,[ESP + 0x1118]              ; 0049f869
    PUSH EAX                            ; 0049f870
    PUSH 0x623132                       ; 0049f871 | = "%s\t%s\t%d%s"
    LEA EAX,[ESP + 0x1de8]              ; 0049f876
    PUSH EAX                            ; 0049f87d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0049f87e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 0049f883
    LEA EAX,[ESP + 0x1dd4]              ; 0049f886
    PUSH EAX                            ; 0049f88d
    CALL crt_string.c_strupr_FUN_00600770 ; 0049f88e
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_00600770(char * string)
    ADD ESP,0x4                         ; 0049f893
    LEA EAX,[ESP + 0x1dd4]              ; 0049f896
    PUSH EAX                            ; 0049f89d
    LEA EAX,[ESP + 0xc]                 ; 0049f89e
    PUSH EAX                            ; 0049f8a2
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0049f8a3
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0049f8a8
    JMP 0x0049f529                      ; 0049f8ab
        ;   XREF to: 0049f529 (UNCONDITIONAL_JUMP)  ; LAB_0049f529
    MOV EDI,dword ptr [ESP + 0x8]       ; 0049f8b0
        ;   Label: LAB_0049f8b0
    INC ESI                             ; 0049f8b4
    CMP ESI,EDI                         ; 0049f8b5
    JL 0x0049f56e                       ; 0049f8b7
        ;   XREF to: 0049f56e (CONDITIONAL_JUMP)  ; LAB_0049f56e
    JMP 0x0049f5e2                      ; 0049f8bd
        ;   XREF to: 0049f5e2 (UNCONDITIONAL_JUMP)  ; LAB_0049f5e2
    PUSH 0x62314e                       ; 0049f8c2 | = "."
        ;   Label: LAB_0049f8c2
    LEA EAX,[ESP + 0x5e4]               ; 0049f8c7
    PUSH EAX                            ; 0049f8ce
    CALL crt_string.c__strcmp_FUN_005fef20 ; 0049f8cf
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049f8d4
    TEST EAX,EAX                        ; 0049f8d7
    JZ 0x0049f64e                       ; 0049f8d9
        ;   XREF to: 0049f64e (CONDITIONAL_JUMP)  ; LAB_0049f64e
    LEA EAX,[ESP + 0x180c]              ; 0049f8df
    PUSH EAX                            ; 0049f8e6
    LEA EAX,[ESP + 0x1410]              ; 0049f8e7
    PUSH EAX                            ; 0049f8ee
    PUSH 0x0                            ; 0049f8ef
    PUSH 0x0                            ; 0049f8f1
    LEA EAX,[ESP + 0x5f0]               ; 0049f8f3
    PUSH EAX                            ; 0049f8fa
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 0049f8fb
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049f900
    CMP byte ptr [ESP + 0x180c],0x2e    ; 0049f903
    JNZ 0x0049f937                      ; 0049f90b
        ;   XREF to: 0049f937 (CONDITIONAL_JUMP)  ; LAB_0049f937
    LEA EDI,[ESP + 0x180c]              ; 0049f90d
    SUB ECX,ECX                         ; 0049f914
    DEC ECX                             ; 0049f916
    XOR EAX,EAX                         ; 0049f917
    SCASB.REPNE ES:EDI                  ; 0049f919
    NOT ECX                             ; 0049f91b
    DEC ECX                             ; 0049f91d
    PUSH ECX                            ; 0049f91e
    LEA EAX,[ESP + 0x1811]              ; 0049f91f
    PUSH EAX                            ; 0049f926
    LEA EAX,[ESP + 0x1814]              ; 0049f927
    PUSH EAX                            ; 0049f92e
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0049f92f
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0049f934
    LEA EAX,[ESP + 0x180c]              ; 0049f937
        ;   Label: LAB_0049f937
    PUSH EAX                            ; 0049f93e
    LEA EAX,[ESP + 0x1410]              ; 0049f93f
    PUSH EAX                            ; 0049f946
    PUSH 0x623150                       ; 0049f947 | = "%s\t%s\t(DIR)"
    LEA EAX,[ESP + 0x1d18]              ; 0049f94c
    PUSH EAX                            ; 0049f953
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0049f954
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0049f959
    LEA EAX,[ESP + 0x1d0c]              ; 0049f95c
    PUSH EAX                            ; 0049f963
    CALL crt_string.c_strupr_FUN_00600770 ; 0049f964
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_00600770(char * string)
    ADD ESP,0x4                         ; 0049f969
    LEA EAX,[ESP + 0x1d0c]              ; 0049f96c
    PUSH EAX                            ; 0049f973
    JMP 0x0049f641                      ; 0049f974
        ;   XREF to: 0049f641 (UNCONDITIONAL_JUMP)  ; LAB_0049f641
    PUSH 0x0                            ; 0049f979
        ;   Label: LAB_0049f979
    LEA EAX,[ESP + 0x5e4]               ; 0049f97b
    PUSH EAX                            ; 0049f982
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 0049f983
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint flags)
        ;   Label: LAB_0049f983
    ADD ESP,0x8                         ; 0049f988
    PUSH 0x0                            ; 0049f98b
    LEA EAX,[ESP + 0xc]                 ; 0049f98d
    PUSH EAX                            ; 0049f991
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0049f992
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049f997
    LEA EAX,[ESP + 0xa00]               ; 0049f99a
    PUSH EAX                            ; 0049f9a1
    CALL crt_io.c_chdir_FUN_006012a0    ; 0049f9a2
        ;   XREF to: 006012a0 (UNCONDITIONAL_CALL)  ; int crt_io.c_chdir_FUN_006012a0(char * path)
    ADD ESP,0x4                         ; 0049f9a7
    MOV EAX,dword ptr [ESP + 0x1ebc]    ; 0049f9aa
    POP ESI                             ; 0049f9b1
    POP EDI                             ; 0049f9b2
    ADD ESP,0x1ec0                      ; 0049f9b3
    POP EBP                             ; 0049f9b9
    POP EBX                             ; 0049f9ba
    RET                                 ; 0049f9bb
    LEA EAX,[ESP + 0x7f8]               ; 0049f9bc
        ;   Label: LAB_0049f9bc
    PUSH EAX                            ; 0049f9c3
    CALL crt_io.c_chdir_FUN_006012a0    ; 0049f9c4
        ;   XREF to: 006012a0 (UNCONDITIONAL_CALL)  ; int crt_io.c_chdir_FUN_006012a0(char * path)
    ADD ESP,0x4                         ; 0049f9c9
    TEST EAX,EAX                        ; 0049f9cc
    JZ 0x0049f6f5                       ; 0049f9ce
        ;   XREF to: 0049f6f5 (CONDITIONAL_JUMP)  ; LAB_0049f6f5
    LEA EAX,[ESP + 0x7f8]               ; 0049f9d4
    PUSH EAX                            ; 0049f9db
    PUSH 0x623179                       ; 0049f9dc | = "Can't change to %s"
    PUSH EBX                            ; 0049f9e1
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0049f9e2
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0049f9e7
    LEA EAX,[ESP + 0x6f4]               ; 0049f9ea
    PUSH EAX                            ; 0049f9f1
    CALL crt_io.c_chdir_FUN_006012a0    ; 0049f9f2
        ;   XREF to: 006012a0 (UNCONDITIONAL_CALL)  ; int crt_io.c_chdir_FUN_006012a0(char * path)
    ADD ESP,0x4                         ; 0049f9f7
    JMP 0x0049f6d0                      ; 0049f9fa
        ;   XREF to: 0049f6d0 (UNCONDITIONAL_JUMP)  ; LAB_0049f6d0
    CMP ESI,EBP                         ; 0049f9ff
        ;   Label: LAB_0049f9ff
    JL 0x0049fa91                       ; 0049fa01
        ;   XREF to: 0049fa91 (CONDITIONAL_JUMP)  ; LAB_0049fa91
    PUSH 0x0                            ; 0049fa07
    PUSH ESI                            ; 0049fa09
    LEA EAX,[ESP + 0xe14]               ; 0049fa0a
    PUSH EAX                            ; 0049fa11
    LEA EAX,[ESP + 0x14]                ; 0049fa12
    PUSH EAX                            ; 0049fa16
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0049fa17
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0049fa1c
    PUSH 0x1                            ; 0049fa1f
    PUSH ESI                            ; 0049fa21
    LEA EAX,[ESP + 0xd14]               ; 0049fa22
    PUSH EAX                            ; 0049fa29
    LEA EAX,[ESP + 0x14]                ; 0049fa2a
    PUSH EAX                            ; 0049fa2e
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0049fa2f
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0049fa34
    LEA EAX,[ESP + 0xd0c]               ; 0049fa37
    PUSH EAX                            ; 0049fa3e
    LEA EAX,[ESP + 0xe10]               ; 0049fa3f
    PUSH EAX                            ; 0049fa46
    PUSH 0x0                            ; 0049fa47
    PUSH 0x0                            ; 0049fa49
    LEA EAX,[ESP + 0xf1c]               ; 0049fa4b
    PUSH EAX                            ; 0049fa52
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 0049fa53
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049fa58
    LEA EAX,[ESP + 0xf0c]               ; 0049fa5b
    PUSH EAX                            ; 0049fa62
    CALL crt_io.c_chdir_FUN_006012a0    ; 0049fa63
        ;   XREF to: 006012a0 (UNCONDITIONAL_CALL)  ; int crt_io.c_chdir_FUN_006012a0(char * path)
    ADD ESP,0x4                         ; 0049fa68
    PUSH 0x0                            ; 0049fa6b
    LEA EAX,[ESP + 0x5e4]               ; 0049fa6d
    PUSH EAX                            ; 0049fa74
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 0049fa75
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049fa7a
    PUSH 0x0                            ; 0049fa7d
    LEA EAX,[ESP + 0xc]                 ; 0049fa7f
    PUSH EAX                            ; 0049fa83
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0049fa84
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049fa89
    JMP 0x0049f47a                      ; 0049fa8c
        ;   XREF to: 0049f47a (UNCONDITIONAL_JUMP)  ; LAB_0049f47a
    LEA EAX,[ESP + 0x1c0c]              ; 0049fa91
        ;   Label: LAB_0049fa91
    PUSH EAX                            ; 0049fa98
    LEA EAX,[ESP + 0x1210]              ; 0049fa99
    PUSH EAX                            ; 0049faa0
    LEA EAX,[ESP + 0x1714]              ; 0049faa1
    PUSH EAX                            ; 0049faa8
    LEA EAX,[ESP + 0x1ecc]              ; 0049faa9
    PUSH EAX                            ; 0049fab0
    LEA EAX,[ESP + 0x704]               ; 0049fab1
    PUSH EAX                            ; 0049fab8
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 0049fab9
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049fabe
    LEA EAX,[ESP + 0x1c0c]              ; 0049fac1
    PUSH EAX                            ; 0049fac8
    LEA EAX,[ESP + 0x1210]              ; 0049fac9
    PUSH EAX                            ; 0049fad0
    LEA EAX,[ESP + 0x1714]              ; 0049fad1
    PUSH EAX                            ; 0049fad8
    PUSH 0x0                            ; 0049fad9
    LEA EAX,[ESP + 0x161c]              ; 0049fadb
    PUSH EAX                            ; 0049fae2
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 0049fae3
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049fae8
    PUSH 0x0                            ; 0049faeb
    PUSH ESI                            ; 0049faed
    LEA EAX,[ESP + 0x1214]              ; 0049faee
    PUSH EAX                            ; 0049faf5
    LEA EAX,[ESP + 0x14]                ; 0049faf6
    PUSH EAX                            ; 0049fafa
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0049fafb
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0049fb00
    PUSH 0x1                            ; 0049fb03
    PUSH ESI                            ; 0049fb05
    LEA EAX,[ESP + 0x1c14]              ; 0049fb06
    PUSH EAX                            ; 0049fb0d
    LEA EAX,[ESP + 0x14]                ; 0049fb0e
    PUSH EAX                            ; 0049fb12
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0049fb13
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0049fb18
    LEA EAX,[ESP + 0x1c0c]              ; 0049fb1b
    PUSH EAX                            ; 0049fb22
    LEA EAX,[ESP + 0x1210]              ; 0049fb23
    PUSH EAX                            ; 0049fb2a
    LEA EAX,[ESP + 0x1614]              ; 0049fb2b
    PUSH EAX                            ; 0049fb32
    LEA EAX,[ESP + 0x1ecc]              ; 0049fb33
    PUSH EAX                            ; 0049fb3a
    MOV EDX,dword ptr [ESP + 0x1ef0]    ; 0049fb3b
    PUSH EDX                            ; 0049fb42
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 0049fb43
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049fb48
    PUSH 0x0                            ; 0049fb4b
    LEA EAX,[ESP + 0x5e4]               ; 0049fb4d
    MOV ECX,0x1                         ; 0049fb54
    PUSH EAX                            ; 0049fb59
    MOV dword ptr [ESP + 0x1ec4],ECX    ; 0049fb5a
    JMP 0x0049f983                      ; 0049fb61
        ;   XREF to: 0049f983 (UNCONDITIONAL_JUMP)  ; LAB_0049f983

