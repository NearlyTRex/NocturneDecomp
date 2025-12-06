; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10(CFileManager * this_ptr, char * pod_filename)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; Local Variables:
; undefined        Stack[-0xe84]:1  local_e84
; undefined        Stack[-0xe80]:1  local_e80
; undefined        Stack[-0xd80]:1  local_d80
; undefined4       Stack[-0xa74]:4  local_a74
; undefined4       Stack[-0xa70]:4  local_a70
; undefined        Stack[-0xa58]:1  local_a58
; undefined        Stack[-0x658]:1  local_658
; undefined1       Stack[-0x657]:1  local_657
; undefined        Stack[-0x558]:1  local_558
; undefined4       Stack[-0x454]:4  local_454
; undefined        Stack[-0x44c]:1  local_44c
; undefined        Stack[-0x444]:1  local_444
; undefined        Stack[-0x344]:1  local_344
; undefined        Stack[-0x244]:1  local_244
; undefined1       Stack[-0x243]:1  local_243
; undefined        Stack[-0x144]:1  local_144
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
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
;   char s_EmptyString_00627d0c = \x00
;   TerminatedCString s_Unable_to_extract_file_s_00627d0d
;   ... and 14 more
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_time.c_localtime_FUN_00600288
;   crt_time.c_strftime_FUN_006002d4
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
;   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
;   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
;   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50
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
    JNZ 0x004b6e56                      ; 004b6e23 | LAB_004b6e56
        ;   XREF to: 004b6e56 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 004b6e25
    LEA EAX,[ESP + 0xc44]               ; 004b6e26
    PUSH EAX                            ; 004b6e2d
    PUSH 0x627b23                       ; 004b6e2e | = "*.pod" | s_pod_00627b23 = *.pod
    PUSH 0x627b29                       ; 004b6e33 | = "Select POD file to extract" | s_Select_POD_file_to_extra_00627b29 = Select POD file to extract
    MOV EDX,dword ptr [0x00678a60]      ; 004b6e38 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b6e3e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 004b6e3f | bool shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * file_pattern, bool include_files, char * initial_path)
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b6e44
    TEST EAX,EAX                        ; 004b6e47
    JNZ 0x004b6e77                      ; 004b6e49 | LAB_004b6e77
        ;   XREF to: 004b6e77 (CONDITIONAL_JUMP)
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
    JZ 0x004b6e76                       ; 004b6e64 | LAB_004b6e76
        ;   XREF to: 004b6e76 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6e66
    ADD ESI,0x2                         ; 004b6e69
    MOV byte ptr [EDI + 0x1],AL         ; 004b6e6c
    ADD EDI,0x2                         ; 004b6e6f
    CMP AL,0x0                          ; 004b6e72
    JNZ 0x004b6e5e                      ; 004b6e74 | LAB_004b6e5e
        ;   XREF to: 004b6e5e (CONDITIONAL_JUMP)
    POP EDI                             ; 004b6e76
        ;   Label: LAB_004b6e76
    MOV EAX,ESP                         ; 004b6e77
        ;   Label: LAB_004b6e77
    PUSH EAX                            ; 004b6e79
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 004b6e7a | CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b6e7f
    LEA EAX,[ESP + 0xc40]               ; 004b6e82
    PUSH EAX                            ; 004b6e89
    LEA EAX,[ESP + 0x4]                 ; 004b6e8a
    PUSH EAX                            ; 004b6e8e
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004b6e8f | int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b6e94
    TEST EAX,EAX                        ; 004b6e97
    JZ 0x004b7214                       ; 004b6e99 | LAB_004b7214
        ;   XREF to: 004b7214 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 004b6e9f
    PUSH EAX                            ; 004b6ea1
    CALL engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 ; 004b6ea2 | int engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230(CPodFile * this_ptr)
        ;   XREF to: 00550230 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b6ea7
    TEST EAX,EAX                        ; 004b6eaa
    JNZ 0x004b6f02                      ; 004b6eac | LAB_004b6f02
        ;   XREF to: 004b6f02 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x104]               ; 004b6eae
    PUSH EAX                            ; 004b6eb5
    CALL crt_time.c_localtime_FUN_00600288 ; 004b6eb6 | tm * crt_time.c_localtime_FUN_00600288(time_t * timer)
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b6ebb
    PUSH EAX                            ; 004b6ebe
    PUSH 0x627b65                       ; 004b6ebf | = "%m/%d/%Y" | s_m_d_Y_00627b65 = %m/%d/%Y
    PUSH 0x100                          ; 004b6ec4
    LEA EAX,[ESP + 0xa4c]               ; 004b6ec9
    PUSH EAX                            ; 004b6ed0
    CALL crt_time.c_strftime_FUN_006002d4 ; 004b6ed1 | uint crt_time.c_strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, tm * time_ptr)
        ;   XREF to: 006002d4 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b6ed6
    LEA EAX,[ESP + 0xa40]               ; 004b6ed9
    PUSH EAX                            ; 004b6ee0
    LEA EAX,[ESP + 0x8]                 ; 004b6ee1
    PUSH EAX                            ; 004b6ee5
    PUSH 0x627b6e                       ; 004b6ee6 | = "Warning!  This .POD file has an inval..." | s_Warning_This_POD_file_ha_00627b6e = Warning!  This .POD file has an invalid CRC.  If it's date is earlier
        ; than 07/28/1998, it has no CRC, and you should ignore this message.

        ; %s %s

        ; Do you wish to continue?
    MOV EBX,dword ptr [0x00678a60]      ; 004b6eeb | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 004b6ef1 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 004b6ef2 | int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b6ef7
    TEST EAX,EAX                        ; 004b6efa
    JZ 0x004b724a                       ; 004b6efc | LAB_004b724a
        ;   XREF to: 004b724a (CONDITIONAL_JUMP)
    PUSH 0x94f                          ; 004b6f02
        ;   Label: LAB_004b6f02
    PUSH 0x627c19                       ; 004b6f07 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00627c19 = ..\engine\fileio.cpp
    PUSH 0x627c2e                       ; 004b6f0c | = "rb" | s_rb_00627c2e = rb
    PUSH 0x0                            ; 004b6f11
    LEA EAX,[ESP + 0x14]                ; 004b6f13
    PUSH EAX                            ; 004b6f17
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b6f18 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b6f1d
    MOV dword ptr [ESP + 0xe64],EAX     ; 004b6f20
    TEST EAX,EAX                        ; 004b6f27
    JZ 0x004b7263                       ; 004b6f29 | LAB_004b7263
        ;   XREF to: 004b7263 (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004b6f2f | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [ESP + 0xe88]     ; 004b6f34
    MOV ESI,0x1                         ; 004b6f3b
    XOR EBP,EBP                         ; 004b6f40
    MOV EDI,dword ptr [EAX + 0x13880c]  ; 004b6f42
    MOV dword ptr [ESP + 0xe70],ESI     ; 004b6f48
    TEST EDI,EDI                        ; 004b6f4f
    JZ 0x004b6f5e                       ; 004b6f51 | LAB_004b6f5e
        ;   XREF to: 004b6f5e (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0xe70],0x2     ; 004b6f53
    XOR EDX,EDX                         ; 004b6f5e
        ;   Label: LAB_004b6f5e
    MOV ECX,dword ptr [ESP + 0x410]     ; 004b6f60
    MOV dword ptr [ESP + 0xe6c],EDX     ; 004b6f67
    TEST ECX,ECX                        ; 004b6f6e
    JLE 0x004b70bd                      ; 004b6f70 | LAB_004b70bd
        ;   XREF to: 004b70bd (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0xe68],EDX     ; 004b6f76
    MOV ESI,dword ptr [ESP + 0x414]     ; 004b6f7d
        ;   Label: LAB_004b6f7d
    MOV EBX,dword ptr [ESP + 0xe68]     ; 004b6f84
    LEA EDI,[ESP + 0xe40]               ; 004b6f8b
    ADD ESI,EBX                         ; 004b6f92
    MOVSD ES:EDI,ESI                    ; 004b6f94
    MOVSD ES:EDI,ESI                    ; 004b6f95
    MOVSD ES:EDI,ESI                    ; 004b6f96
    MOVSD ES:EDI,ESI                    ; 004b6f97
    MOVSD ES:EDI,ESI                    ; 004b6f98
    MOV ESI,dword ptr [ESP + 0xe40]     ; 004b6f99
    LEA EDI,[ESP + 0x82c]               ; 004b6fa0
    PUSH EDI                            ; 004b6fa7
    MOV AL,byte ptr [ESI]               ; 004b6fa8
        ;   Label: LAB_004b6fa8
    MOV byte ptr [EDI],AL               ; 004b6faa
    CMP AL,0x0                          ; 004b6fac
    JZ 0x004b6fc0                       ; 004b6fae | LAB_004b6fc0
        ;   XREF to: 004b6fc0 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6fb0
    ADD ESI,0x2                         ; 004b6fb3
    MOV byte ptr [EDI + 0x1],AL         ; 004b6fb6
    ADD EDI,0x2                         ; 004b6fb9
    CMP AL,0x0                          ; 004b6fbc
    JNZ 0x004b6fa8                      ; 004b6fbe | LAB_004b6fa8
        ;   XREF to: 004b6fa8 (CONDITIONAL_JUMP)
    POP EDI                             ; 004b6fc0
        ;   Label: LAB_004b6fc0
    LEA EAX,[ESP + 0x82c]               ; 004b6fc1
    PUSH EAX                            ; 004b6fc8
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b6fc9 | int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b6fce
    MOV EDI,EAX                         ; 004b6fd1
    MOV EAX,dword ptr [ESP + 0xe88]     ; 004b6fd3
    CMP dword ptr [EAX + 0x138808],0x0  ; 004b6fda
    JZ 0x004b70af                       ; 004b6fe1 | LAB_004b70af
        ;   XREF to: 004b70af (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xe70]     ; 004b6fe7
    TEST EAX,EAX                        ; 004b6fee
    JNZ 0x004b7296                      ; 004b6ff0 | LAB_004b7296
        ;   XREF to: 004b7296 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 004b6ff6
        ;   Label: LAB_004b6ff6
    JZ 0x004b70af                       ; 004b6ff8 | LAB_004b70af
        ;   XREF to: 004b70af (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xa38]               ; 004b6ffe
    PUSH EAX                            ; 004b7005
    CALL crt_time.c_localtime_FUN_00600288 ; 004b7006 | tm * crt_time.c_localtime_FUN_00600288(time_t * timer)
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b700b
    PUSH EAX                            ; 004b700e
    PUSH 0x627c3f                       ; 004b700f | = "%A, %B, %d, %Y, %I:%M:%S %p" | s_A_B_d_Y_I_M_S_p_00627c3f = %A, %B, %d, %Y, %I:%M:%S %p
    PUSH 0x100                          ; 004b7014
    LEA EAX,[ESP + 0xb4c]               ; 004b7019
    PUSH EAX                            ; 004b7020
    CALL crt_time.c_strftime_FUN_006002d4 ; 004b7021 | uint crt_time.c_strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, tm * time_ptr)
        ;   XREF to: 006002d4 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b7026
    LEA EAX,[ESP + 0xe4c]               ; 004b7029
    PUSH EAX                            ; 004b7030
    CALL crt_time.c_localtime_FUN_00600288 ; 004b7031 | tm * crt_time.c_localtime_FUN_00600288(time_t * timer)
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b7036
    PUSH EAX                            ; 004b7039
    PUSH 0x627c5b                       ; 004b703a | = "%A, %B, %d, %Y, %I:%M:%S %p" | s_A_B_d_Y_I_M_S_p_00627c5b = %A, %B, %d, %Y, %I:%M:%S %p
    PUSH 0x100                          ; 004b703f
    LEA EAX,[ESP + 0xd4c]               ; 004b7044
    PUSH EAX                            ; 004b704b
    CALL crt_time.c_strftime_FUN_006002d4 ; 004b704c | uint crt_time.c_strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, tm * time_ptr)
        ;   XREF to: 006002d4 (UNCONDITIONAL_CALL)
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
    PUSH 0x627c77                       ; 004b707c | = "%s already exists on disk.\n\nWould y..." | s_s_already_exists_on_disk_00627c77 = %s already exists on disk.

        ; Would you like to replace the existing file

        ; %d bytes
        ; modified on %s

        ; with this one?

        ; %d bytes
        ; modified on %s

    LEA EAX,[ESP + 0x444]               ; 004b7081
    PUSH EAX                            ; 004b7088
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b7089 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 004b708e
    LEA EAX,[ESP + 0x42c]               ; 004b7091
    PUSH EAX                            ; 004b7098
    MOV ESI,dword ptr [0x00678a60]      ; 004b7099 | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 004b709f | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180 ; 004b70a0 | int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049f180 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b70a5
    MOV dword ptr [ESP + 0xe70],EAX     ; 004b70a8
    CMP dword ptr [ESP + 0xe70],-0x1    ; 004b70af
        ;   Label: LAB_004b70af
    JNZ 0x004b72a4                      ; 004b70b7 | LAB_004b72a4
        ;   XREF to: 004b72a4 (CONDITIONAL_JUMP)
    PUSH 0x99a                          ; 004b70bd
        ;   Label: LAB_004b70bd
    PUSH 0x627d44                       ; 004b70c2 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00627d44 = ..\engine\fileio.cpp
    MOV EBX,dword ptr [ESP + 0xe6c]     ; 004b70c7
    PUSH EBX                            ; 004b70ce
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b70cf | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679398]                ; 004b70d4 | int g_WindowHeight
    ADD ESP,0xc                         ; 004b70d9
    SUB EAX,0xc                         ; 004b70dc
    PUSH EAX                            ; 004b70df
    PUSH 0x0                            ; 004b70e0
    PUSH 0x627d59                       ; 004b70e2 | = "End." | s_End_00627d59 = End.
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004b70e7 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b70ec
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004b70ef | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [ESP + 0xe88]     ; 004b70f4
    CMP dword ptr [EAX + 0x13880c],0x0  ; 004b70fb
    JZ 0x004b744e                       ; 004b7102 | LAB_004b744e
        ;   XREF to: 004b744e (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0xe90]     ; 004b7108
        ;   Label: LAB_004b7108
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004b710f | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    TEST EDI,EDI                        ; 004b7114
    JZ 0x004b71fa                       ; 004b7116 | LAB_004b71fa
        ;   XREF to: 004b71fa (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xe54]               ; 004b711c
    PUSH EAX                            ; 004b7123
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004b7124 | CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b7129
    LEA EAX,[ESP + 0xe54]               ; 004b712c
    PUSH EAX                            ; 004b7133
    MOV EBP,dword ptr [ESP + 0xe8c]     ; 004b7134
    PUSH EBP                            ; 004b713b
    CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 ; 004b713c | void engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager * this_ptr, CStrList * pod_list)
        ;   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b7141
    LEA EAX,[ESP + 0xc40]               ; 004b7144
    PUSH EAX                            ; 004b714b
    LEA EAX,[ESP + 0xe58]               ; 004b714c
    PUSH EAX                            ; 004b7153
    PUSH EBP                            ; 004b7154
    CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 ; 004b7155 | int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
        ;   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 004b715a
    ADD ESP,0xc                         ; 004b715c
    TEST EAX,EAX                        ; 004b715f
    JL 0x004b71e8                       ; 004b7161 | LAB_004b71e8
        ;   XREF to: 004b71e8 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xc40]               ; 004b7167
    PUSH EAX                            ; 004b716e
    PUSH 0x627d5e                       ; 004b716f | = "%s is currently mounted.\nDo you want..." | s_s_is_currently_mounted_D_00627d5e = %s is currently mounted.
        ; Do you want to dismount it now?
    MOV EDX,dword ptr [0x00678a60]      ; 004b7174 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b717a | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 004b717b | int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b7180
    TEST EAX,EAX                        ; 004b7183
    JZ 0x004b71e8                       ; 004b7185 | LAB_004b71e8
        ;   XREF to: 004b71e8 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 004b7187
    LEA EAX,[ESP + 0xe58]               ; 004b7188
    PUSH EAX                            ; 004b718f
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 004b7190 | void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b7195
    LEA EAX,[ESP + 0xe54]               ; 004b7198
    PUSH EAX                            ; 004b719f
    PUSH EBP                            ; 004b71a0
    CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 ; 004b71a1 | void engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager * this_ptr, CStrList * pod_list)
        ;   XREF to: 004ba620 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [0x00680cdc]      ; 004b71a6 | CDemonPod * g_CDemonPodPtr
    ADD ESP,0x8                         ; 004b71ac
    TEST EBX,EBX                        ; 004b71af
    JZ 0x004b71e8                       ; 004b71b1 | LAB_004b71e8
        ;   XREF to: 004b71e8 (CONDITIONAL_JUMP)
    PUSH 0x62759a                       ; 004b71b3 | = "Remounting all pods..." | s_Remounting_all_pods_0062759a = Remounting all pods...
    MOV ESI,dword ptr [0x00678a60]      ; 004b71b8 | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 004b71be | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b71bf | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b71c4
    MOV EDI,dword ptr [0x00680cdc]      ; 004b71c7 | CDemonPod * g_CDemonPodPtr
    PUSH EDI                            ; 004b71cd | CDemonPod g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80 ; 004b71ce | void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
        ;   XREF to: 00550c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b71d3
    MOV EAX,[0x00680cdc]                ; 004b71d6 | CDemonPod * g_CDemonPodPtr
    PUSH EAX                            ; 004b71db | CDemonPod g_CDemonPodInstance
    MOV ESI,dword ptr [EAX + 0x194]     ; 004b71dc | DAT_030e5224
    CALL dword ptr [ESI + 0x4]          ; 004b71e2
    ADD ESP,0x4                         ; 004b71e5
    PUSH 0x0                            ; 004b71e8
        ;   Label: LAB_004b71e8
    LEA EAX,[ESP + 0xe58]               ; 004b71ea
    PUSH EAX                            ; 004b71f1
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004b71f2 | CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b71f7
    PUSH 0x0                            ; 004b71fa
        ;   Label: LAB_004b71fa
    LEA EAX,[ESP + 0x4]                 ; 004b71fc
    PUSH EAX                            ; 004b7200
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b7201 | CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)
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
    PUSH 0x627b44                       ; 004b721c | = "Can't mount %s to extract files!" | s_Can_t_mount_s_to_extract_00627b44 = Can't mount %s to extract files!
    MOV ECX,dword ptr [0x00678a60]      ; 004b7221 | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 004b7227 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b7228 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b722d
    PUSH 0x0                            ; 004b7230
    LEA EAX,[ESP + 0x4]                 ; 004b7232
    PUSH EAX                            ; 004b7236
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b7237 | CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)
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
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b7250 | CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)
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
    PUSH 0x627c31                       ; 004b7268 | = "Can't open %s" | s_Can_t_open_s_00627c31 = Can't open %s
    MOV EBX,dword ptr [0x00678a60]      ; 004b726d | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 004b7273 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b7274 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b7279
    PUSH 0x0                            ; 004b727c
    LEA EAX,[ESP + 0x4]                 ; 004b727e
    PUSH EAX                            ; 004b7282
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b7283 | CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b7288
    ADD ESP,0xe74                       ; 004b728b
    POP EBP                             ; 004b7291
    POP EDI                             ; 004b7292
    POP ESI                             ; 004b7293
    POP EBX                             ; 004b7294
    RET                                 ; 004b7295
    CMP EAX,0x1                         ; 004b7296
        ;   Label: LAB_004b7296
    JZ 0x004b6ff6                       ; 004b7299 | LAB_004b6ff6
        ;   XREF to: 004b6ff6 (CONDITIONAL_JUMP)
    JMP 0x004b70af                      ; 004b729f | LAB_004b70af
        ;   XREF to: 004b70af (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0xe70]     ; 004b72a4
        ;   Label: LAB_004b72a4
    MOV EAX,0x627d02                    ; 004b72ab | = "(skipped)" | s_skipped_00627d02 = (skipped)
    TEST EDX,EDX                        ; 004b72b0
    JLE 0x004b741b                      ; 004b72b2 | LAB_004b741b
        ;   XREF to: 004b741b (CONDITIONAL_JUMP)
    SUB ESP,0x14                        ; 004b72b8
        ;   Label: LAB_004b72b8
    MOV EDI,ESP                         ; 004b72bb
    MOV ECX,dword ptr [ESP + 0xe78]     ; 004b72bd
    PUSH ECX                            ; 004b72c4
    MOV EBX,dword ptr [ESP + 0xea0]     ; 004b72c5
    LEA ESI,[ESP + 0xe58]               ; 004b72cc
    PUSH EBX                            ; 004b72d3
    MOVSD ES:EDI,ESI                    ; 004b72d4
    MOVSD ES:EDI,ESI                    ; 004b72d5
    MOVSD ES:EDI,ESI                    ; 004b72d6
    MOVSD ES:EDI,ESI                    ; 004b72d7
    MOVSD ES:EDI,ESI                    ; 004b72d8
    CALL engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50 ; 004b72d9 | int engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50(FILE * source_file, char * dest_filename, char * name_or_offset, int file_size, ...)
        ;   XREF to: 004b7d50 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 004b72de
    TEST EAX,EAX                        ; 004b72e1
    JZ 0x004b7428                       ; 004b72e3 | LAB_004b7428
        ;   XREF to: 004b7428 (CONDITIONAL_JUMP)
    MOV EAX,0x627d0c                    ; 004b72e9 | char s_EmptyString_00627d0c
    PUSH EAX                            ; 004b72ee | char s_EmptyString_00627d0c | = "(error)" | s_skipped_00627d02 = (skipped)
        ;   Label: LAB_004b72ee
    MOV EAX,dword ptr [ESP + 0xe44]     ; 004b72ef
    PUSH EAX                            ; 004b72f6
    PUSH 0x627d30                       ; 004b72f7 | = "%s %s" | s_s_s_00627d30 = %s %s
    LEA EAX,[ESP + 0x438]               ; 004b72fc
    PUSH EAX                            ; 004b7303
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b7304 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b7309
    PUSH EBP                            ; 004b730c
    PUSH 0x0                            ; 004b730d
    LEA EAX,[ESP + 0x434]               ; 004b730f
    PUSH EAX                            ; 004b7316
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004b7317 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b731c
    MOV EDX,dword ptr [ESP + 0xe44]     ; 004b731f
    PUSH EDX                            ; 004b7326
    PUSH 0x627d36                       ; 004b7327 | = "%d" | s_d_00627d36 = %d
    LEA EAX,[ESP + 0x434]               ; 004b732c
    PUSH EAX                            ; 004b7333
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b7334 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679394]                ; 004b7339 | int g_WindowWidth
    MOV EDX,EAX                         ; 004b733e
    SAR EDX,0x1f                        ; 004b7340
    SUB EAX,EDX                         ; 004b7343
    SAR EAX,0x1                         ; 004b7345
    ADD ESP,0xc                         ; 004b7347
    PUSH EBP                            ; 004b734a
    PUSH EAX                            ; 004b734b
    LEA EAX,[ESP + 0x434]               ; 004b734c
    PUSH EAX                            ; 004b7353
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004b7354 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b7359
    MOV ECX,dword ptr [ESP + 0xe48]     ; 004b735c
    PUSH ECX                            ; 004b7363
    PUSH 0x627d39                       ; 004b7364 | = "%d" | s_d_00627d39 = %d
    LEA EAX,[ESP + 0x434]               ; 004b7369
    PUSH EAX                            ; 004b7370
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b7371 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679394]                ; 004b7376 | int g_WindowWidth
    MOV EDX,EAX                         ; 004b737b
    SAR EDX,0x1f                        ; 004b737d
    SUB EAX,EDX                         ; 004b7380
    SAR EAX,0x1                         ; 004b7382
    MOV ESI,EAX                         ; 004b7384
    MOV EAX,[0x00679394]                ; 004b7386 | int g_WindowWidth
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
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004b73a7 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b73ac
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004b73af | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679398]                ; 004b73b4 | int g_WindowHeight
    ADD EBP,0xb                         ; 004b73b9
    SUB EAX,0x21                        ; 004b73bc
    CMP EBP,EAX                         ; 004b73bf
    JL 0x004b73e7                       ; 004b73c1 | LAB_004b73e7
        ;   XREF to: 004b73e7 (CONDITIONAL_JUMP)
    MOV EAX,[0x00679398]                ; 004b73c3 | int g_WindowHeight
    SUB EAX,0xc                         ; 004b73c8
    PUSH EAX                            ; 004b73cb
    PUSH 0x0                            ; 004b73cc
    PUSH 0x627d3c                       ; 004b73ce | = "More..." | s_More_00627d3c = More...
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004b73d3 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b73d8
    XOR EBP,EBP                         ; 004b73db
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004b73dd | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004b73e2 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [ESP + 0xe68]     ; 004b73e7
        ;   Label: LAB_004b73e7
    MOV EDI,dword ptr [ESP + 0xe6c]     ; 004b73ee
    MOV EDX,dword ptr [ESP + 0x410]     ; 004b73f5
    ADD ESI,0x14                        ; 004b73fc
    INC EDI                             ; 004b73ff
    MOV dword ptr [ESP + 0xe68],ESI     ; 004b7400
    MOV dword ptr [ESP + 0xe6c],EDI     ; 004b7407
    CMP EDI,EDX                         ; 004b740e
    JL 0x004b6f7d                       ; 004b7410 | LAB_004b6f7d
        ;   XREF to: 004b6f7d (CONDITIONAL_JUMP)
    JMP 0x004b70bd                      ; 004b7416 | LAB_004b70bd
        ;   XREF to: 004b70bd (UNCONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 004b741b
        ;   Label: LAB_004b741b
    JNZ 0x004b72ee                      ; 004b741d | LAB_004b72ee
        ;   XREF to: 004b72ee (CONDITIONAL_JUMP)
    JMP 0x004b72b8                      ; 004b7423 | LAB_004b72b8
        ;   XREF to: 004b72b8 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0xe40]     ; 004b7428
        ;   Label: LAB_004b7428
    PUSH ESI                            ; 004b742f
    PUSH 0x627d0d                       ; 004b7430 | = "Unable to extract file:\n%s" | s_Unable_to_extract_file_s_00627d0d = Unable to extract file:
        ; %s
    MOV EDI,dword ptr [0x00678a60]      ; 004b7435 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 004b743b | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b743c | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    MOV EAX,0x627d28                    ; 004b7441 | = "(error)" | s_error_00627d28 = (error)
    ADD ESP,0xc                         ; 004b7446
    JMP 0x004b72ee                      ; 004b7449 | LAB_004b72ee
        ;   XREF to: 004b72ee (UNCONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004b744e | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   Label: LAB_004b744e
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    JMP 0x004b7108                      ; 004b7453 | LAB_004b7108
        ;   XREF to: 004b7108 (UNCONDITIONAL_JUMP)

