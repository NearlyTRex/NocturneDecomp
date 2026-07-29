; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_extractPodFile_FUN_004b6e10(CFileManager *this_ptr,char *pod_filename,int offer_dismount)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; int              Stack[0xc]:4   offer_dismount
; Local Variables:
; time_t[2034]     Stack[-0x2e68]:8136  atStackY_2e68
; undefined1[2088] Stack[-0xe80]:2088  local_e80
; SFoundFileInfo   Stack[-0x658]:532  local_658
; char[256]        Stack[-0x444]:256  local_444
; char[256]        Stack[-0x344]:256  local_344
; char[256]        Stack[-0x244]:256  local_244
; char[256]        Stack[-0x144]:256  local_144
; char *           Stack[-0x44]:4  local_44
; time_t[4]        Stack[-0x40]:16  local_40
; undefined1[16]   Stack[-0x30]:16  local_30
; _FILE *          Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Remounting_all_pods_0062759a
;   TerminatedCString s_pod_00627b23
;   TerminatedCString s_Select_POD_file_to_extra_00627b29
;   TerminatedCString s_Can_t_mount_s_to_extract_00627b44
;   TerminatedCString s_m_d_Y_00627b65
;   TerminatedCString s_Warning_This_POD_file_ha_00627b6e
;   TerminatedCString s_engine_fileio_cpp_00627c19
;   TerminatedCString s_rb_00627c2e
;   TerminatedCString s_Can_t_open_s_00627c31
;   TerminatedCString s_A_B_d_Y_I_M_S_p_00627c3f
;   TerminatedCString s_A_B_d_Y_I_M_S_p_00627c5b
;   TerminatedCString s_s_already_exists_on_disk_00627c77
;   TerminatedCString s_skipped_00627d02
;   char s_EmptyChar_00627d0c = \x00
;   TerminatedCString s_Unable_to_extract_file_s_00627d0d
;   ... and 15 more
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_time.c__localtime_FUN_00600288
;   crt_time.c__strftime_FUN_006002d4
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_dosio.cpp_findFileNormally_FUN_004817c0
;   engine_fileio.cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50
;   engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
;   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
;   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
;   engine_pod.cpp_CPod_cleanup_FUN_00550c80
;   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
;   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6e10
        ;   Label: engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10
    PUSH ESI                            ; 004b6e11
    PUSH EDI                            ; 004b6e12
    PUSH EBP                            ; 004b6e13
    SUB ESP,0xe74                       ; 004b6e14
    MOV ESI,dword ptr [ESP + 0xe8c]     ; 004b6e1a
    TEST ESI,ESI                        ; 004b6e21
    JNZ 0x004b6e56                      ; 004b6e23
        ;   XREF to: 004b6e56 (CONDITIONAL_JUMP)  ; LAB_004b6e56
    PUSH ESI                            ; 004b6e25
    LEA EAX,[ESP + 0xc44]               ; 004b6e26
    PUSH EAX                            ; 004b6e2d
    PUSH 0x627b23                       ; 004b6e2e | = "*.pod"
    PUSH 0x627b29                       ; 004b6e33 | = "Select POD file to extract"
    MOV EDX,dword ptr [0x00678a60]      ; 004b6e38 | g_CEditorToolsPtr | g_CEditorToolsInstance
    PUSH EDX                            ; 004b6e3e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 004b6e3f
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * title_text, char * search_pattern, char * initial_path, ...)
    ADD ESP,0x14                        ; 004b6e44
    TEST EAX,EAX                        ; 004b6e47
    JNZ 0x004b6e77                      ; 004b6e49
        ;   XREF to: 004b6e77 (CONDITIONAL_JUMP)  ; LAB_004b6e77
    ADD ESP,0xe74                       ; 004b6e4b
    POP EBP                             ; 004b6e51
    POP EDI                             ; 004b6e52
    POP ESI                             ; 004b6e53
    POP EBX                             ; 004b6e54
    RET                                 ; 004b6e55
    LEA EDI,[ESP + 0xc40]               ; 004b6e56
        ;   Label: LAB_004b6e56
    PUSH EDI                            ; 004b6e5d
    MOV AL,byte ptr [ESI]               ; 004b6e5e
        ;   Label: LAB_004b6e5e
    MOV byte ptr [EDI],AL               ; 004b6e60
    CMP AL,0x0                          ; 004b6e62
    JZ 0x004b6e76                       ; 004b6e64
        ;   XREF to: 004b6e76 (CONDITIONAL_JUMP)  ; LAB_004b6e76
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6e66
    ADD ESI,0x2                         ; 004b6e69
    MOV byte ptr [EDI + 0x1],AL         ; 004b6e6c
    ADD EDI,0x2                         ; 004b6e6f
    CMP AL,0x0                          ; 004b6e72
    JNZ 0x004b6e5e                      ; 004b6e74
        ;   XREF to: 004b6e5e (CONDITIONAL_JUMP)  ; LAB_004b6e5e
    POP EDI                             ; 004b6e76
        ;   Label: LAB_004b6e76
    MOV EAX,ESP                         ; 004b6e77
        ;   Label: LAB_004b6e77
    PUSH EAX                            ; 004b6e79
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 004b6e7a
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004b6e7f
    LEA EAX,[ESP + 0xc40]               ; 004b6e82
    PUSH EAX                            ; 004b6e89
    LEA EAX,[ESP + 0x4]                 ; 004b6e8a
    PUSH EAX                            ; 004b6e8e
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004b6e8f
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004b6e94
    TEST EAX,EAX                        ; 004b6e97
    JZ 0x004b7214                       ; 004b6e99
        ;   XREF to: 004b7214 (CONDITIONAL_JUMP)  ; LAB_004b7214
    MOV EAX,ESP                         ; 004b6e9f
    PUSH EAX                            ; 004b6ea1
    CALL engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 ; 004b6ea2
        ;   XREF to: 00550230 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004b6ea7
    TEST EAX,EAX                        ; 004b6eaa
    JNZ 0x004b6f02                      ; 004b6eac
        ;   XREF to: 004b6f02 (CONDITIONAL_JUMP)  ; LAB_004b6f02
    LEA EAX,[ESP + 0x104]               ; 004b6eae
    PUSH EAX                            ; 004b6eb5
    CALL crt_time.c__localtime_FUN_00600288 ; 004b6eb6
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_00600288(time_t * timer)
    ADD ESP,0x4                         ; 004b6ebb
    PUSH EAX                            ; 004b6ebe
    PUSH 0x627b65                       ; 004b6ebf | = "%m/%d/%Y"
    PUSH 0x100                          ; 004b6ec4
    LEA EAX,[ESP + 0xa4c]               ; 004b6ec9
    PUSH EAX                            ; 004b6ed0
    CALL crt_time.c__strftime_FUN_006002d4 ; 004b6ed1
        ;   XREF to: 006002d4 (UNCONDITIONAL_CALL)  ; uint crt_time.c__strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, _tm * time_ptr)
    ADD ESP,0x10                        ; 004b6ed6
    LEA EAX,[ESP + 0xa40]               ; 004b6ed9
    PUSH EAX                            ; 004b6ee0
    LEA EAX,[ESP + 0x8]                 ; 004b6ee1
    PUSH EAX                            ; 004b6ee5
    PUSH 0x627b6e                       ; 004b6ee6 | = "Warning!  This .POD file has an inval..."
    MOV EBX,dword ptr [0x00678a60]      ; 004b6eeb | g_CEditorToolsPtr | g_CEditorToolsInstance
    PUSH EBX                            ; 004b6ef1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 004b6ef2
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x10                        ; 004b6ef7
    TEST EAX,EAX                        ; 004b6efa
    JZ 0x004b724a                       ; 004b6efc
        ;   XREF to: 004b724a (CONDITIONAL_JUMP)  ; LAB_004b724a
    PUSH 0x94f                          ; 004b6f02
        ;   Label: LAB_004b6f02
    PUSH 0x627c19                       ; 004b6f07 | = "..\\engine\\fileio.cpp"
    PUSH 0x627c2e                       ; 004b6f0c | = "rb"
    PUSH 0x0                            ; 004b6f11
    LEA EAX,[ESP + 0x14]                ; 004b6f13
    PUSH EAX                            ; 004b6f17
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b6f18
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004b6f1d
    MOV dword ptr [ESP + 0xe64],EAX     ; 004b6f20
    TEST EAX,EAX                        ; 004b6f27
    JZ 0x004b7263                       ; 004b6f29
        ;   XREF to: 004b7263 (CONDITIONAL_JUMP)  ; LAB_004b7263
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 004b6f2f
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,dword ptr [ESP + 0xe88]     ; 004b6f34
    MOV ESI,0x1                         ; 004b6f3b
    XOR EBP,EBP                         ; 004b6f40
    MOV EDI,dword ptr [EAX + 0x13880c]  ; 004b6f42
    MOV dword ptr [ESP + 0xe70],ESI     ; 004b6f48
    TEST EDI,EDI                        ; 004b6f4f
    JZ 0x004b6f5e                       ; 004b6f51
        ;   XREF to: 004b6f5e (CONDITIONAL_JUMP)  ; LAB_004b6f5e
    MOV dword ptr [ESP + 0xe70],0x2     ; 004b6f53
    XOR EDX,EDX                         ; 004b6f5e
        ;   Label: LAB_004b6f5e
    MOV ECX,dword ptr [ESP + 0x410]     ; 004b6f60
    MOV dword ptr [ESP + 0xe6c],EDX     ; 004b6f67
    TEST ECX,ECX                        ; 004b6f6e
    JLE 0x004b70bd                      ; 004b6f70
        ;   XREF to: 004b70bd (CONDITIONAL_JUMP)  ; LAB_004b70bd
    MOV dword ptr [ESP + 0xe68],EDX     ; 004b6f76
    MOV ESI,dword ptr [ESP + 0x414]     ; 004b6f7d
        ;   Label: LAB_004b6f7d
    MOV EBX,dword ptr [ESP + 0xe68]     ; 004b6f84
    LEA EDI,[ESP + 0xe40]               ; 004b6f8b
    JMP 0x0060f300                      ; 004b6f92
        ;   XREF to: 0060f300 (UNCONDITIONAL_JUMP)  ; CAVE_cave_0060f300
    MOVSD ES:EDI,ESI                    ; 004b6f98
        ;   Label: LAB_004b6f98
    MOV ESI,dword ptr [ESP + 0xe40]     ; 004b6f99
    LEA EDI,[ESP + 0x82c]               ; 004b6fa0
    PUSH EDI                            ; 004b6fa7
    MOV AL,byte ptr [ESI]               ; 004b6fa8
        ;   Label: LAB_004b6fa8
    MOV byte ptr [EDI],AL               ; 004b6faa
    CMP AL,0x0                          ; 004b6fac
    JZ 0x004b6fc0                       ; 004b6fae
        ;   XREF to: 004b6fc0 (CONDITIONAL_JUMP)  ; LAB_004b6fc0
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6fb0
    ADD ESI,0x2                         ; 004b6fb3
    MOV byte ptr [EDI + 0x1],AL         ; 004b6fb6
    ADD EDI,0x2                         ; 004b6fb9
    CMP AL,0x0                          ; 004b6fbc
    JNZ 0x004b6fa8                      ; 004b6fbe
        ;   XREF to: 004b6fa8 (CONDITIONAL_JUMP)  ; LAB_004b6fa8
    POP EDI                             ; 004b6fc0
        ;   Label: LAB_004b6fc0
    LEA EAX,[ESP + 0x82c]               ; 004b6fc1
    PUSH EAX                            ; 004b6fc8
    CALL engine_dosio.cpp_findFileNormally_FUN_004817c0 ; 004b6fc9
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004b6fce
    MOV EDI,EAX                         ; 004b6fd1
    MOV EAX,dword ptr [ESP + 0xe88]     ; 004b6fd3
    CMP dword ptr [EAX + 0x138808],0x0  ; 004b6fda
    JZ 0x004b70af                       ; 004b6fe1
        ;   XREF to: 004b70af (CONDITIONAL_JUMP)  ; LAB_004b70af
    MOV EAX,dword ptr [ESP + 0xe70]     ; 004b6fe7
    TEST EAX,EAX                        ; 004b6fee
    JNZ 0x004b7296                      ; 004b6ff0
        ;   XREF to: 004b7296 (CONDITIONAL_JUMP)  ; LAB_004b7296
    TEST EDI,EDI                        ; 004b6ff6
        ;   Label: LAB_004b6ff6
    JZ 0x004b70af                       ; 004b6ff8
        ;   XREF to: 004b70af (CONDITIONAL_JUMP)  ; LAB_004b70af
    LEA EAX,[ESP + 0xa38]               ; 004b6ffe
    PUSH EAX                            ; 004b7005
    CALL crt_time.c__localtime_FUN_00600288 ; 004b7006
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_00600288(time_t * timer)
    ADD ESP,0x4                         ; 004b700b
    PUSH EAX                            ; 004b700e
    PUSH 0x627c3f                       ; 004b700f | = "%A, %B, %d, %Y, %I:%M:%S %p"
    PUSH 0x100                          ; 004b7014
    LEA EAX,[ESP + 0xb4c]               ; 004b7019
    PUSH EAX                            ; 004b7020
    CALL crt_time.c__strftime_FUN_006002d4 ; 004b7021
        ;   XREF to: 006002d4 (UNCONDITIONAL_CALL)  ; uint crt_time.c__strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, _tm * time_ptr)
    ADD ESP,0x10                        ; 004b7026
    LEA EAX,[ESP + 0xe4c]               ; 004b7029
    PUSH EAX                            ; 004b7030
    CALL crt_time.c__localtime_FUN_00600288 ; 004b7031
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_00600288(time_t * timer)
    ADD ESP,0x4                         ; 004b7036
    PUSH EAX                            ; 004b7039
    PUSH 0x627c5b                       ; 004b703a | = "%A, %B, %d, %Y, %I:%M:%S %p"
    PUSH 0x100                          ; 004b703f
    LEA EAX,[ESP + 0xd4c]               ; 004b7044
    PUSH EAX                            ; 004b704b
    CALL crt_time.c__strftime_FUN_006002d4 ; 004b704c
        ;   XREF to: 006002d4 (UNCONDITIONAL_CALL)  ; uint crt_time.c__strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, _tm * time_ptr)
    ADD ESP,0x10                        ; 004b7051
    LEA EAX,[ESP + 0xd40]               ; 004b7054
    PUSH EAX                            ; 004b705b
    MOV ECX,dword ptr [ESP + 0xe48]     ; 004b705c
    PUSH ECX                            ; 004b7063
    LEA EAX,[ESP + 0xb48]               ; 004b7064
    PUSH EAX                            ; 004b706b
    MOV EBX,dword ptr [ESP + 0xa3c]     ; 004b706c
    PUSH EBX                            ; 004b7073
    LEA EAX,[ESP + 0x93c]               ; 004b7074
    PUSH EAX                            ; 004b707b
    PUSH 0x627c77                       ; 004b707c | = "%s already exists on disk.\n\nWould y..."
    LEA EAX,[ESP + 0x444]               ; 004b7081
    PUSH EAX                            ; 004b7088
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b7089
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x1c                        ; 004b708e
    LEA EAX,[ESP + 0x42c]               ; 004b7091
    PUSH EAX                            ; 004b7098
    MOV ESI,dword ptr [0x00678a60]      ; 004b7099 | g_CEditorToolsPtr
    PUSH ESI                            ; 004b709f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesAllNoCancelDialog_FUN_0049f180 ; 004b70a0
        ;   XREF to: 0049f180 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesAllNoCancelDialog_FUN_0049f180(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b70a5
    MOV dword ptr [ESP + 0xe70],EAX     ; 004b70a8
    CMP dword ptr [ESP + 0xe70],-0x1    ; 004b70af
        ;   Label: LAB_004b70af
    JNZ 0x004b72a4                      ; 004b70b7
        ;   XREF to: 004b72a4 (CONDITIONAL_JUMP)  ; LAB_004b72a4
    PUSH 0x99a                          ; 004b70bd
        ;   Label: LAB_004b70bd
    PUSH 0x627d44                       ; 004b70c2 | = "..\\engine\\fileio.cpp"
    MOV EBX,dword ptr [ESP + 0xe6c]     ; 004b70c7
    PUSH EBX                            ; 004b70ce
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b70cf
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    MOV EAX,[0x00679398]                ; 004b70d4 | g_WindowHeight
    ADD ESP,0xc                         ; 004b70d9
    SUB EAX,0xc                         ; 004b70dc
    PUSH EAX                            ; 004b70df
    PUSH 0x0                            ; 004b70e0
    PUSH 0x627d59                       ; 004b70e2 | = "End."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004b70e7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b70ec
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004b70ef
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,dword ptr [ESP + 0xe88]     ; 004b70f4
    CMP dword ptr [EAX + 0x13880c],0x0  ; 004b70fb
    JZ 0x004b744e                       ; 004b7102
        ;   XREF to: 004b744e (CONDITIONAL_JUMP)  ; LAB_004b744e
    MOV EDI,dword ptr [ESP + 0xe90]     ; 004b7108
        ;   Label: LAB_004b7108
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004b710f
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    TEST EDI,EDI                        ; 004b7114
    JZ 0x004b71fa                       ; 004b7116
        ;   XREF to: 004b71fa (CONDITIONAL_JUMP)  ; LAB_004b71fa
    LEA EAX,[ESP + 0xe54]               ; 004b711c
    PUSH EAX                            ; 004b7123
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004b7124
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004b7129
    LEA EAX,[ESP + 0xe54]               ; 004b712c
    PUSH EAX                            ; 004b7133
    MOV EBP,dword ptr [ESP + 0xe8c]     ; 004b7134
    PUSH EBP                            ; 004b713b
    CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 ; 004b713c
        ;   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager * this_ptr, CStrList * pod_list)
    ADD ESP,0x8                         ; 004b7141
    LEA EAX,[ESP + 0xc40]               ; 004b7144
    PUSH EAX                            ; 004b714b
    LEA EAX,[ESP + 0xe58]               ; 004b714c
    PUSH EAX                            ; 004b7153
    PUSH EBP                            ; 004b7154
    CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 ; 004b7155
        ;   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
    MOV ESI,EAX                         ; 004b715a
    ADD ESP,0xc                         ; 004b715c
    TEST EAX,EAX                        ; 004b715f
    JL 0x004b71e8                       ; 004b7161
        ;   XREF to: 004b71e8 (CONDITIONAL_JUMP)  ; LAB_004b71e8
    LEA EAX,[ESP + 0xc40]               ; 004b7167
    PUSH EAX                            ; 004b716e
    PUSH 0x627d5e                       ; 004b716f | = "%s is currently mounted.\nDo you want..."
    MOV EDX,dword ptr [0x00678a60]      ; 004b7174 | g_CEditorToolsPtr | g_CEditorToolsInstance
    PUSH EDX                            ; 004b717a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 004b717b
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0xc                         ; 004b7180
    TEST EAX,EAX                        ; 004b7183
    JZ 0x004b71e8                       ; 004b7185
        ;   XREF to: 004b71e8 (CONDITIONAL_JUMP)  ; LAB_004b71e8
    PUSH ESI                            ; 004b7187
    LEA EAX,[ESP + 0xe58]               ; 004b7188
    PUSH EAX                            ; 004b718f
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 004b7190
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004b7195
    LEA EAX,[ESP + 0xe54]               ; 004b7198
    PUSH EAX                            ; 004b719f
    PUSH EBP                            ; 004b71a0
    CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 ; 004b71a1
        ;   XREF to: 004ba620 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager * this_ptr, CStrList * pod_list)
    MOV EBX,dword ptr [0x00680cdc]      ; 004b71a6 | g_CDemonPodPtr
    ADD ESP,0x8                         ; 004b71ac
    TEST EBX,EBX                        ; 004b71af
    JZ 0x004b71e8                       ; 004b71b1
        ;   XREF to: 004b71e8 (CONDITIONAL_JUMP)  ; LAB_004b71e8
    PUSH 0x62759a                       ; 004b71b3 | = "Remounting all pods..."
    MOV ESI,dword ptr [0x00678a60]      ; 004b71b8 | g_CEditorToolsPtr
    PUSH ESI                            ; 004b71be | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b71bf
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b71c4
    MOV EDI,dword ptr [0x00680cdc]      ; 004b71c7 | g_CDemonPodPtr
    PUSH EDI                            ; 004b71cd | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80 ; 004b71ce
        ;   XREF to: 00550c80 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
    ADD ESP,0x4                         ; 004b71d3
    MOV EAX,[0x00680cdc]                ; 004b71d6 | g_CDemonPodPtr
    PUSH EAX                            ; 004b71db | g_CDemonPodInstance
    MOV ESI,dword ptr [EAX + 0x194]     ; 004b71dc | g_CDemonPodInstance.vtable
    CALL dword ptr [ESI + 0x4]          ; 004b71e2
    ADD ESP,0x4                         ; 004b71e5
    PUSH 0x0                            ; 004b71e8
        ;   Label: LAB_004b71e8
    LEA EAX,[ESP + 0xe58]               ; 004b71ea
    PUSH EAX                            ; 004b71f1
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004b71f2
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b71f7
    PUSH 0x0                            ; 004b71fa
        ;   Label: LAB_004b71fa
    LEA EAX,[ESP + 0x4]                 ; 004b71fc
    PUSH EAX                            ; 004b7200
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b7201
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b7206
    ADD ESP,0xe74                       ; 004b7209
    POP EBP                             ; 004b720f
    POP EDI                             ; 004b7210
    POP ESI                             ; 004b7211
    POP EBX                             ; 004b7212
    RET                                 ; 004b7213
    LEA EAX,[ESP + 0xc40]               ; 004b7214
        ;   Label: LAB_004b7214
    PUSH EAX                            ; 004b721b
    PUSH 0x627b44                       ; 004b721c | = "Can't mount %s to extract files!"
    MOV ECX,dword ptr [0x00678a60]      ; 004b7221 | g_CEditorToolsPtr
    PUSH ECX                            ; 004b7227 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b7228
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b722d
    PUSH 0x0                            ; 004b7230
    LEA EAX,[ESP + 0x4]                 ; 004b7232
    PUSH EAX                            ; 004b7236
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b7237
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b723c
    ADD ESP,0xe74                       ; 004b723f
    POP EBP                             ; 004b7245
    POP EDI                             ; 004b7246
    POP ESI                             ; 004b7247
    POP EBX                             ; 004b7248
    RET                                 ; 004b7249
    PUSH EAX                            ; 004b724a
        ;   Label: LAB_004b724a
    LEA EAX,[ESP + 0x4]                 ; 004b724b
    PUSH EAX                            ; 004b724f
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b7250
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b7255
    ADD ESP,0xe74                       ; 004b7258
    POP EBP                             ; 004b725e
    POP EDI                             ; 004b725f
    POP ESI                             ; 004b7260
    POP EBX                             ; 004b7261
    RET                                 ; 004b7262
    LEA EAX,[ESP + 0x4]                 ; 004b7263
        ;   Label: LAB_004b7263
    PUSH EAX                            ; 004b7267
    PUSH 0x627c31                       ; 004b7268 | = "Can't open %s"
    MOV EBX,dword ptr [0x00678a60]      ; 004b726d | g_CEditorToolsPtr
    PUSH EBX                            ; 004b7273 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b7274
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b7279
    PUSH 0x0                            ; 004b727c
    LEA EAX,[ESP + 0x4]                 ; 004b727e
    PUSH EAX                            ; 004b7282
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b7283
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b7288
    ADD ESP,0xe74                       ; 004b728b
    POP EBP                             ; 004b7291
    POP EDI                             ; 004b7292
    POP ESI                             ; 004b7293
    POP EBX                             ; 004b7294
    RET                                 ; 004b7295
    CMP EAX,0x1                         ; 004b7296
        ;   Label: LAB_004b7296
    JZ 0x004b6ff6                       ; 004b7299
        ;   XREF to: 004b6ff6 (CONDITIONAL_JUMP)  ; LAB_004b6ff6
    JMP 0x004b70af                      ; 004b729f
        ;   XREF to: 004b70af (UNCONDITIONAL_JUMP)  ; LAB_004b70af
    MOV EDX,dword ptr [ESP + 0xe70]     ; 004b72a4
        ;   Label: LAB_004b72a4
    MOV EAX,0x627d02                    ; 004b72ab | = "(skipped)"
    TEST EDX,EDX                        ; 004b72b0
    JLE 0x004b741b                      ; 004b72b2
        ;   XREF to: 004b741b (CONDITIONAL_JUMP)  ; LAB_004b741b
    SUB ESP,0x14                        ; 004b72b8
        ;   Label: LAB_004b72b8
    MOV EDI,ESP                         ; 004b72bb
    MOV ECX,dword ptr [ESP + 0xe78]     ; 004b72bd
    PUSH ECX                            ; 004b72c4
    MOV EBX,dword ptr [ESP + 0xea0]     ; 004b72c5
    LEA ESI,[ESP + 0xe58]               ; 004b72cc
    JMP 0x0060f323                      ; 004b72d3
        ;   XREF to: 0060f323 (UNCONDITIONAL_JUMP)  ; LAB_0060f323
    MOVSD ES:EDI,ESI                    ; 004b72d8
        ;   Label: LAB_004b72d8
    CALL engine_fileio.cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50 ; 004b72d9
        ;   XREF to: 004b7d50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50(CFileManager * this_ptr, _FILE * source_file, char * dest_filename, int file_size, ...)
    ADD ESP,0x1c                        ; 004b72de
    TEST EAX,EAX                        ; 004b72e1
    JZ 0x004b7428                       ; 004b72e3
        ;   XREF to: 004b7428 (CONDITIONAL_JUMP)  ; LAB_004b7428
    MOV EAX,0x627d0c                    ; 004b72e9 | s_EmptyChar_00627d0c
    PUSH EAX                            ; 004b72ee | s_EmptyChar_00627d0c | = "(error)" | s_skipped_00627d02
        ;   Label: LAB_004b72ee
    MOV EAX,dword ptr [ESP + 0xe44]     ; 004b72ef
    PUSH EAX                            ; 004b72f6
    PUSH 0x627d30                       ; 004b72f7 | = "%s %s"
    LEA EAX,[ESP + 0x438]               ; 004b72fc
    PUSH EAX                            ; 004b7303
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b7304
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b7309
    PUSH EBP                            ; 004b730c
    PUSH 0x0                            ; 004b730d
    LEA EAX,[ESP + 0x434]               ; 004b730f
    PUSH EAX                            ; 004b7316
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004b7317
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b731c
    MOV EDX,dword ptr [ESP + 0xe44]     ; 004b731f
    PUSH EDX                            ; 004b7326
    PUSH 0x627d36                       ; 004b7327 | = "%d"
    LEA EAX,[ESP + 0x434]               ; 004b732c
    PUSH EAX                            ; 004b7333
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b7334
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679394]                ; 004b7339 | g_WindowWidth
    MOV EDX,EAX                         ; 004b733e
    SAR EDX,0x1f                        ; 004b7340
    SUB EAX,EDX                         ; 004b7343
    SAR EAX,0x1                         ; 004b7345
    ADD ESP,0xc                         ; 004b7347
    PUSH EBP                            ; 004b734a
    PUSH EAX                            ; 004b734b
    LEA EAX,[ESP + 0x434]               ; 004b734c
    PUSH EAX                            ; 004b7353
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004b7354
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b7359
    MOV ECX,dword ptr [ESP + 0xe48]     ; 004b735c
    PUSH ECX                            ; 004b7363
    PUSH 0x627d39                       ; 004b7364 | = "%d"
    LEA EAX,[ESP + 0x434]               ; 004b7369
    PUSH EAX                            ; 004b7370
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b7371
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679394]                ; 004b7376 | g_WindowWidth
    MOV EDX,EAX                         ; 004b737b
    SAR EDX,0x1f                        ; 004b737d
    SUB EAX,EDX                         ; 004b7380
    SAR EAX,0x1                         ; 004b7382
    MOV ESI,EAX                         ; 004b7384
    MOV EAX,[0x00679394]                ; 004b7386 | g_WindowWidth
    MOV EDX,EAX                         ; 004b738b
    SAR EDX,0x1f                        ; 004b738d
    SHL EDX,0x2                         ; 004b7390
    SBB EAX,EDX                         ; 004b7393
    SAR EAX,0x2                         ; 004b7395
    ADD ESP,0xc                         ; 004b7398
    PUSH EBP                            ; 004b739b
    ADD EAX,ESI                         ; 004b739c
    PUSH EAX                            ; 004b739e
    LEA EAX,[ESP + 0x434]               ; 004b739f
    PUSH EAX                            ; 004b73a6
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004b73a7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b73ac
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004b73af
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,[0x00679398]                ; 004b73b4 | g_WindowHeight
    ADD EBP,0xb                         ; 004b73b9
    SUB EAX,0x21                        ; 004b73bc
    CMP EBP,EAX                         ; 004b73bf
    JL 0x004b73e7                       ; 004b73c1
        ;   XREF to: 004b73e7 (CONDITIONAL_JUMP)  ; LAB_004b73e7
    MOV EAX,[0x00679398]                ; 004b73c3 | g_WindowHeight
    SUB EAX,0xc                         ; 004b73c8
    PUSH EAX                            ; 004b73cb
    PUSH 0x0                            ; 004b73cc
    PUSH 0x627d3c                       ; 004b73ce | = "More..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004b73d3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b73d8
    XOR EBP,EBP                         ; 004b73db
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004b73dd
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 004b73e2
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    MOV ESI,dword ptr [ESP + 0xe68]     ; 004b73e7
        ;   Label: LAB_004b73e7
    MOV EDI,dword ptr [ESP + 0xe6c]     ; 004b73ee
    MOV EDX,dword ptr [ESP + 0x410]     ; 004b73f5
    ADD ESI,0x14                        ; 004b73fc
    INC EDI                             ; 004b73ff
    MOV dword ptr [ESP + 0xe68],ESI     ; 004b7400
    MOV dword ptr [ESP + 0xe6c],EDI     ; 004b7407
    CMP EDI,EDX                         ; 004b740e
    JL 0x004b6f7d                       ; 004b7410
        ;   XREF to: 004b6f7d (CONDITIONAL_JUMP)  ; LAB_004b6f7d
    JMP 0x004b70bd                      ; 004b7416
        ;   XREF to: 004b70bd (UNCONDITIONAL_JUMP)  ; LAB_004b70bd
    TEST EDI,EDI                        ; 004b741b
        ;   Label: LAB_004b741b
    JNZ 0x004b72ee                      ; 004b741d
        ;   XREF to: 004b72ee (CONDITIONAL_JUMP)  ; LAB_004b72ee
    JMP 0x004b72b8                      ; 004b7423
        ;   XREF to: 004b72b8 (UNCONDITIONAL_JUMP)  ; LAB_004b72b8
    MOV ESI,dword ptr [ESP + 0xe40]     ; 004b7428
        ;   Label: LAB_004b7428
    PUSH ESI                            ; 004b742f
    PUSH 0x627d0d                       ; 004b7430 | = "Unable to extract file:\n%s"
    MOV EDI,dword ptr [0x00678a60]      ; 004b7435 | g_CEditorToolsPtr
    PUSH EDI                            ; 004b743b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b743c
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    MOV EAX,0x627d28                    ; 004b7441 | = "(error)"
    ADD ESP,0xc                         ; 004b7446
    JMP 0x004b72ee                      ; 004b7449
        ;   XREF to: 004b72ee (UNCONDITIONAL_JUMP)  ; LAB_004b72ee
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004b744e
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   Label: LAB_004b744e
    JMP 0x004b7108                      ; 004b7453
        ;   XREF to: 004b7108 (UNCONDITIONAL_JUMP)  ; LAB_004b7108
    ADD ESI,EBX                         ; 0060f300
        ;   Label: CAVE_cave_0060f300
    MOV ECX,dword ptr [ESI]             ; 0060f302
    MOV dword ptr [EDI],ECX             ; 0060f304
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f306
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f309
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f30c
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f30f
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f312
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f315
    ADD ESI,0x10                        ; 0060f318
    ADD EDI,0x10                        ; 0060f31b
    JMP 0x004b6f98                      ; 0060f31e
        ;   XREF to: 004b6f98 (UNCONDITIONAL_JUMP)  ; LAB_004b6f98
    PUSH EBX                            ; 0060f323
        ;   Label: LAB_0060f323
    MOV ECX,dword ptr [ESI]             ; 0060f324
    MOV dword ptr [EDI],ECX             ; 0060f326
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f328
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f32b
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f32e
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f331
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f334
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f337
    ADD ESI,0x10                        ; 0060f33a
    ADD EDI,0x10                        ; 0060f33d
    JMP 0x004b72d8                      ; 0060f340
        ;   XREF to: 004b72d8 (UNCONDITIONAL_JUMP)  ; LAB_004b72d8

