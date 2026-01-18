; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0(CFileManager * this_ptr)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1108]:1  local_1108
; undefined1       Stack[-0x1104]:1  local_1104
; undefined4       Stack[-0xcf8]:4  local_cf8
; undefined4       Stack[-0xcf4]:4  local_cf4
; undefined1       Stack[-0xcdc]:1  local_cdc
; undefined4       Stack[-0x8dc]:4  local_8dc
; undefined1       Stack[-0x534]:1  local_534
; undefined1       Stack[-0x533]:1  local_533
; undefined1       Stack[-0x434]:1  local_434
; undefined4       Stack[-0x330]:4  local_330
; undefined1       Stack[-0x328]:1  local_328
; undefined1       Stack[-0x320]:1  local_320
; undefined1       Stack[-0x220]:1  local_220
; undefined1       Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x14]:1  local_14
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be45c
;
; Referenced Globals:
;   TerminatedCString s_pod_00627e16
;   TerminatedCString s_Select_POD_file_to_extra_00627e1c
;   TerminatedCString s_Can_t_mount_s_00627e37
;   TerminatedCString s_engine_fileio_cpp_00627e46
;   TerminatedCString s_rb_00627e5b
;   TerminatedCString s_Can_t_open_s_00627e5e
;   TerminatedCString s_s_d_00627e6c
;   TerminatedCString s_Select_file_to_extract_00627e72
;   TerminatedCString s_engine_fileio_cpp_00627e89
;   TerminatedCString s_Hell_froze_finding_file__00627e9e
;   TerminatedCString s_A_B_d_Y_I_M_S_p_00627ebe
;   TerminatedCString s_A_B_d_Y_I_M_S_p_00627eda
;   TerminatedCString s_s_already_exists_on_disk_00627ef6
;   TerminatedCString s_Unable_to_extract_file_s_00627f81
;   TerminatedCString s_engine_fileio_cpp_00627f9c
;   ... and 4 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_time.c_localtime_FUN_00600288
;   crt_time.c_strftime_FUN_006002d4
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50
;   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
;   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004b76d0
        ;   Label: engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0
    PUSH EBP                            ; 004b76d1
    SUB ESP,0x1100                      ; 004b76d2
    MOV EBP,dword ptr [ESP + 0x110c]    ; 004b76d8
    PUSH 0x0                            ; 004b76df
    LEA EAX,[ESP + 0xfec]               ; 004b76e1
    PUSH EAX                            ; 004b76e8
    PUSH 0x627e16                       ; 004b76e9 | = "*.pod"
    PUSH 0x627e1c                       ; 004b76ee | = "Select POD file to extract"
    MOV EDX,dword ptr [0x00678a60]      ; 004b76f3 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004b76f9 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 004b76fa
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; bool shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * file_pattern, bool include_files, char * initial_path)
    ADD ESP,0x14                        ; 004b76ff
    TEST EAX,EAX                        ; 004b7702
    JNZ 0x004b770f                      ; 004b7704
        ;   XREF to: 004b770f (CONDITIONAL_JUMP)  ; LAB_004b770f
    ADD ESP,0x1100                      ; 004b7706
    POP EBP                             ; 004b770c
    POP EDI                             ; 004b770d
    RET                                 ; 004b770e
    MOV EAX,ESP                         ; 004b770f
        ;   Label: LAB_004b770f
    PUSH EAX                            ; 004b7711
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 004b7712
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004b7717
    LEA EAX,[ESP + 0xfe8]               ; 004b771a
    PUSH EAX                            ; 004b7721
    LEA EAX,[ESP + 0x4]                 ; 004b7722
    PUSH EAX                            ; 004b7726
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004b7727
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004b772c
    TEST EAX,EAX                        ; 004b772f
    JZ 0x004b7a08                       ; 004b7731
        ;   XREF to: 004b7a08 (CONDITIONAL_JUMP)  ; LAB_004b7a08
    PUSH 0xa00                          ; 004b7737
    PUSH 0x627e46                       ; 004b773c | = "..\\engine\\fileio.cpp"
    PUSH 0x627e5b                       ; 004b7741 | = "rb"
    PUSH 0x0                            ; 004b7746
    LEA EAX,[ESP + 0x14]                ; 004b7748
    PUSH EAX                            ; 004b774c
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b774d
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004b7752
    MOV dword ptr [ESP + 0x10fc],EAX    ; 004b7755
    TEST EAX,EAX                        ; 004b775c
    JZ 0x004b7a3c                       ; 004b775e
        ;   XREF to: 004b7a3c (CONDITIONAL_JUMP)  ; LAB_004b7a3c
    PUSH ESI                            ; 004b7764
    PUSH EBX                            ; 004b7765
    LEA EAX,[ESP + 0x834]               ; 004b7766
    PUSH EAX                            ; 004b776d
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b776e
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b7773
    MOV ESI,dword ptr [ESP + 0x418]     ; 004b7776
    XOR EBX,EBX                         ; 004b777d
    TEST ESI,ESI                        ; 004b777f
    JLE 0x004b77e0                      ; 004b7781
        ;   XREF to: 004b77e0 (CONDITIONAL_JUMP)  ; LAB_004b77e0
    XOR EDI,EDI                         ; 004b7783
    MOV EAX,dword ptr [ESP + 0x41c]     ; 004b7785
        ;   Label: LAB_004b7785
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x4] ; 004b778c
    PUSH EDX                            ; 004b7790
    MOV ECX,dword ptr [EDI + EAX*0x1]   ; 004b7791
    PUSH ECX                            ; 004b7794
    PUSH 0x627e6c                       ; 004b7795 | = "%s\t%d"
    LEA EAX,[ESP + 0xffc]               ; 004b779a
    PUSH EAX                            ; 004b77a1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b77a2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b77a7
    LEA EAX,[ESP + 0xff0]               ; 004b77aa
    PUSH EAX                            ; 004b77b1
    LEA EAX,[ESP + 0x838]               ; 004b77b2
    PUSH EAX                            ; 004b77b9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b77ba
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b77bf
    INC EBX                             ; 004b77c2
    MOV ESI,dword ptr [ESP + 0x418]     ; 004b77c3
    ADD EDI,0x14                        ; 004b77ca
    CMP EBX,ESI                         ; 004b77cd
    JL 0x004b7785                       ; 004b77cf
        ;   XREF to: 004b7785 (CONDITIONAL_JUMP)  ; LAB_004b7785
    LEA EAX,[EAX]                       ; 004b77d1
    LEA EDX,[EDX]                       ; 004b77d7
    LEA EAX,[EAX]                       ; 004b77dd
    MOV EDI,dword ptr [ESP + 0x834]     ; 004b77e0
        ;   Label: LAB_004b77e0
    MOV EBX,0xffffffff                  ; 004b77e7
    TEST EDI,EDI                        ; 004b77ec
    JLE 0x004b79c2                      ; 004b77ee
        ;   XREF to: 004b79c2 (CONDITIONAL_JUMP)  ; LAB_004b79c2
    MOV EDX,dword ptr [ESP + 0x834]     ; 004b77f4
        ;   Label: LAB_004b77f4
    CMP EBX,EDX                         ; 004b77fb
    JL 0x004b7802                       ; 004b77fd
        ;   XREF to: 004b7802 (CONDITIONAL_JUMP)  ; LAB_004b7802
    LEA EBX,[EDX + -0x1]                ; 004b77ff
    PUSH 0x0                            ; 004b7802
        ;   Label: LAB_004b7802
    PUSH EBX                            ; 004b7804
    PUSH 0x627e72                       ; 004b7805 | = "Select file to extract"
    LEA EAX,[ESP + 0x840]               ; 004b780a
    PUSH EAX                            ; 004b7811
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b7812
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 004b7817
    MOV EBX,EAX                         ; 004b781a
    TEST EAX,EAX                        ; 004b781c
    JL 0x004b79c2                       ; 004b781e
        ;   XREF to: 004b79c2 (CONDITIONAL_JUMP)  ; LAB_004b79c2
    PUSH 0x0                            ; 004b7824
    PUSH EAX                            ; 004b7826
    LEA EAX,[ESP + 0xff8]               ; 004b7827
    PUSH EAX                            ; 004b782e
    LEA EAX,[ESP + 0x840]               ; 004b782f
    PUSH EAX                            ; 004b7836
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 004b7837
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 004b783c
    LEA EAX,[ESP + 0xff0]               ; 004b783f
    PUSH EAX                            ; 004b7846
    LEA EAX,[ESP + 0xc]                 ; 004b7847
    PUSH EAX                            ; 004b784b
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140 ; 004b784c
        ;   XREF to: 00550140 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b7851
    MOV ESI,EAX                         ; 004b7854
    TEST EAX,EAX                        ; 004b7856
    JL 0x004b7a6d                       ; 004b7858
        ;   XREF to: 004b7a6d (CONDITIONAL_JUMP)  ; LAB_004b7a6d
    IMUL ESI,ESI,0x14                   ; 004b785e
        ;   Label: LAB_004b785e
    MOV EAX,dword ptr [ESP + 0x41c]     ; 004b7861
    LEA EDI,[ESP + 0x10f0]              ; 004b7868
    ADD ESI,EAX                         ; 004b786f
    MOVSD ES:EDI,ESI                    ; 004b7871
    MOVSD ES:EDI,ESI                    ; 004b7872
    MOVSD ES:EDI,ESI                    ; 004b7873
    MOVSD ES:EDI,ESI                    ; 004b7874
    MOVSD ES:EDI,ESI                    ; 004b7875
    MOV ESI,dword ptr [ESP + 0x10f0]    ; 004b7876
    LEA EDI,[ESP + 0xbdc]               ; 004b787d
    PUSH EDI                            ; 004b7884
    MOV AL,byte ptr [ESI]               ; 004b7885
        ;   Label: LAB_004b7885
    MOV byte ptr [EDI],AL               ; 004b7887
    CMP AL,0x0                          ; 004b7889
    JZ 0x004b789d                       ; 004b788b
        ;   XREF to: 004b789d (CONDITIONAL_JUMP)  ; LAB_004b789d
    MOV AL,byte ptr [ESI + 0x1]         ; 004b788d
    ADD ESI,0x2                         ; 004b7890
    MOV byte ptr [EDI + 0x1],AL         ; 004b7893
    ADD EDI,0x2                         ; 004b7896
    CMP AL,0x0                          ; 004b7899
    JNZ 0x004b7885                      ; 004b789b
        ;   XREF to: 004b7885 (CONDITIONAL_JUMP)  ; LAB_004b7885
    POP EDI                             ; 004b789d
        ;   Label: LAB_004b789d
    MOV EDX,dword ptr [EBP + 0x138808]  ; 004b789e
    MOV ESI,0x1                         ; 004b78a4
    TEST EDX,EDX                        ; 004b78a9
    JZ 0x004b7975                       ; 004b78ab
        ;   XREF to: 004b7975 (CONDITIONAL_JUMP)  ; LAB_004b7975
    LEA EAX,[ESP + 0xbdc]               ; 004b78b1
    PUSH EAX                            ; 004b78b8
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b78b9
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004b78be
    TEST EAX,EAX                        ; 004b78c1
    JZ 0x004b7975                       ; 004b78c3
        ;   XREF to: 004b7975 (CONDITIONAL_JUMP)  ; LAB_004b7975
    LEA EAX,[ESP + 0xde8]               ; 004b78c9
    PUSH EAX                            ; 004b78d0
    CALL crt_time.c_localtime_FUN_00600288 ; 004b78d1
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; tm * crt_time.c_localtime_FUN_00600288(time_t * timer)
    ADD ESP,0x4                         ; 004b78d6
    PUSH EAX                            ; 004b78d9
    PUSH 0x627ebe                       ; 004b78da | = "%A, %B, %d, %Y, %I:%M:%S %p"
    PUSH 0x100                          ; 004b78df
    LEA EAX,[ESP + 0xdfc]               ; 004b78e4
    PUSH EAX                            ; 004b78eb
    CALL crt_time.c_strftime_FUN_006002d4 ; 004b78ec
        ;   XREF to: 006002d4 (UNCONDITIONAL_CALL)  ; uint crt_time.c_strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, tm * time_ptr)
    ADD ESP,0x10                        ; 004b78f1
    LEA EAX,[ESP + 0x10fc]              ; 004b78f4
    PUSH EAX                            ; 004b78fb
    CALL crt_time.c_localtime_FUN_00600288 ; 004b78fc
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; tm * crt_time.c_localtime_FUN_00600288(time_t * timer)
    ADD ESP,0x4                         ; 004b7901
    PUSH EAX                            ; 004b7904
    PUSH 0x627eda                       ; 004b7905 | = "%A, %B, %d, %Y, %I:%M:%S %p"
    PUSH 0x100                          ; 004b790a
    LEA EAX,[ESP + 0xefc]               ; 004b790f
    PUSH EAX                            ; 004b7916
    CALL crt_time.c_strftime_FUN_006002d4 ; 004b7917
        ;   XREF to: 006002d4 (UNCONDITIONAL_CALL)  ; uint crt_time.c_strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, tm * time_ptr)
    ADD ESP,0x10                        ; 004b791c
    LEA EAX,[ESP + 0xef0]               ; 004b791f
    PUSH EAX                            ; 004b7926
    MOV ECX,dword ptr [ESP + 0x10f8]    ; 004b7927
    PUSH ECX                            ; 004b792e
    LEA EAX,[ESP + 0xdf8]               ; 004b792f
    PUSH EAX                            ; 004b7936
    MOV ESI,dword ptr [ESP + 0xdec]     ; 004b7937
    PUSH ESI                            ; 004b793e
    LEA EAX,[ESP + 0xcec]               ; 004b793f
    PUSH EAX                            ; 004b7946
    PUSH 0x627ef6                       ; 004b7947 | = "%s already exists on disk.\n\nWould y..."
    LEA EAX,[ESP + 0x44c]               ; 004b794c
    PUSH EAX                            ; 004b7953
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b7954
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x1c                        ; 004b7959
    LEA EAX,[ESP + 0x434]               ; 004b795c
    PUSH EAX                            ; 004b7963
    MOV EDI,dword ptr [0x00678a60]      ; 004b7964 | g_CEditorToolsPtr
    PUSH EDI                            ; 004b796a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 004b796b
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 004b7970
    MOV ESI,EAX                         ; 004b7973
    TEST ESI,ESI                        ; 004b7975
        ;   Label: LAB_004b7975
    JZ 0x004b79b4                       ; 004b7977
        ;   XREF to: 004b79b4 (CONDITIONAL_JUMP)  ; LAB_004b79b4
    SUB ESP,0x14                        ; 004b7979
    MOV EDI,ESP                         ; 004b797c
    MOV EAX,dword ptr [ESP + 0x1118]    ; 004b797e
    PUSH EAX                            ; 004b7985
    LEA ESI,[ESP + 0x1108]              ; 004b7986
    PUSH EBP                            ; 004b798d
    MOVSD ES:EDI,ESI                    ; 004b798e
    MOVSD ES:EDI,ESI                    ; 004b798f
    MOVSD ES:EDI,ESI                    ; 004b7990
    MOVSD ES:EDI,ESI                    ; 004b7991
    MOVSD ES:EDI,ESI                    ; 004b7992
    CALL engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50 ; 004b7993
        ;   XREF to: 004b7d50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50(FILE * source_file, char * dest_filename, char * name_or_offset, int file_size, ...)
    ADD ESP,0x1c                        ; 004b7998
    TEST EAX,EAX                        ; 004b799b
    JZ 0x004b7a95                       ; 004b799d
        ;   XREF to: 004b7a95 (CONDITIONAL_JUMP)  ; LAB_004b7a95
    PUSH EBX                            ; 004b79a3
    LEA EAX,[ESP + 0x838]               ; 004b79a4
    PUSH EAX                            ; 004b79ab
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 004b79ac
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004b79b1
    CMP dword ptr [ESP + 0x834],0x0     ; 004b79b4
        ;   Label: LAB_004b79b4
    JG 0x004b77f4                       ; 004b79bc
        ;   XREF to: 004b77f4 (CONDITIONAL_JUMP)  ; LAB_004b77f4
    PUSH 0xa4b                          ; 004b79c2
        ;   Label: LAB_004b79c2
    PUSH 0x627f9c                       ; 004b79c7 | = "..\\engine\\fileio.cpp"
    MOV EBX,dword ptr [ESP + 0x110c]    ; 004b79cc
    PUSH EBX                            ; 004b79d3
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b79d4
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b79d9
    PUSH 0x0                            ; 004b79dc
    LEA EAX,[ESP + 0x838]               ; 004b79de
    PUSH EAX                            ; 004b79e5
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b79e6
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 004b79eb
    PUSH 0x0                            ; 004b79ee
    LEA EAX,[ESP + 0xc]                 ; 004b79f0
    PUSH EAX                            ; 004b79f4
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b79f5
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004b79fa
    POP EBX                             ; 004b79fd
    POP ESI                             ; 004b79fe
    ADD ESP,0x1100                      ; 004b79ff
    POP EBP                             ; 004b7a05
    POP EDI                             ; 004b7a06
    RET                                 ; 004b7a07
    LEA EAX,[ESP + 0xfe8]               ; 004b7a08
        ;   Label: LAB_004b7a08
    PUSH EAX                            ; 004b7a0f
    PUSH 0x627e37                       ; 004b7a10 | = "Can't mount %s"
    MOV ECX,dword ptr [0x00678a60]      ; 004b7a15 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004b7a1b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b7a1c
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b7a21
    PUSH 0x0                            ; 004b7a24
    LEA EAX,[ESP + 0x4]                 ; 004b7a26
    PUSH EAX                            ; 004b7a2a
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b7a2b
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004b7a30
    ADD ESP,0x1100                      ; 004b7a33
    POP EBP                             ; 004b7a39
    POP EDI                             ; 004b7a3a
    RET                                 ; 004b7a3b
    LEA EAX,[ESP + 0x4]                 ; 004b7a3c
        ;   Label: LAB_004b7a3c
    PUSH EAX                            ; 004b7a40
    PUSH 0x627e5e                       ; 004b7a41 | = "Can't open %s"
    MOV EDI,dword ptr [0x00678a60]      ; 004b7a46 | g_CEditorToolsPtr
    PUSH EDI                            ; 004b7a4c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b7a4d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b7a52
    PUSH 0x0                            ; 004b7a55
    LEA EAX,[ESP + 0x4]                 ; 004b7a57
    PUSH EAX                            ; 004b7a5b
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b7a5c
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004b7a61
    ADD ESP,0x1100                      ; 004b7a64
    POP EBP                             ; 004b7a6a
    POP EDI                             ; 004b7a6b
    RET                                 ; 004b7a6c
    MOV ECX,0x627e89                    ; 004b7a6d | = "..\\engine\\fileio.cpp"
        ;   Label: LAB_004b7a6d
    MOV EDI,0xa20                       ; 004b7a72
    PUSH 0x627e9e                       ; 004b7a77 | = "Hell froze finding file in pod!"
    MOV dword ptr [0x02f0ca48],ECX      ; 004b7a7c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004b7a82 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b7a88
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b7a8d
    JMP 0x004b785e                      ; 004b7a90
        ;   XREF to: 004b785e (UNCONDITIONAL_JUMP)  ; LAB_004b785e
    MOV EDX,dword ptr [ESP + 0x10f0]    ; 004b7a95
        ;   Label: LAB_004b7a95
    PUSH EDX                            ; 004b7a9c
    PUSH 0x627f81                       ; 004b7a9d | = "Unable to extract file:\n%s"
    MOV ECX,dword ptr [0x00678a60]      ; 004b7aa2 | g_CEditorToolsPtr
    PUSH ECX                            ; 004b7aa8 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b7aa9
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b7aae
    JMP 0x004b79b4                      ; 004b7ab1
        ;   XREF to: 004b79b4 (UNCONDITIONAL_JUMP)  ; LAB_004b79b4

