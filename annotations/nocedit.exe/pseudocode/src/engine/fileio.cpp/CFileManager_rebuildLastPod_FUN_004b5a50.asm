; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50(CFileManager *this_ptr,char *pod_filename,char *volume_name)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; char *           Stack[0xc]:4   volume_name
; Local Variables:
; CPodFile         Stack[-0x1838]:1068  local_1838
; CPickList        Stack[-0x140c]:936  local_140c
; CPickList        Stack[-0x1064]:936  local_1064
; SFoundFileInfo   Stack[-0xcbc]:532  local_cbc
; char[512]        Stack[-0xaa8]:512  local_aa8
; undefined4[10]   Stack[-0x8a8]:40  local_8a8
; char[272]        Stack[-0x880]:272  local_880
; undefined4[10]   Stack[-0x770]:40  local_770
; char[272]        Stack[-0x748]:272  local_748
; undefined4[10]   Stack[-0x638]:40  local_638
; char[272]        Stack[-0x610]:272  local_610
; undefined4[78]   Stack[-0x500]:312  local_500
; undefined4[10]   Stack[-0x3c8]:40  local_3c8
; char[272]        Stack[-0x3a0]:272  local_3a0
; char[256]        Stack[-0x290]:256  local_290
; char[200]        Stack[-0x190]:200  local_190
; undefined1       Stack[-0xc8]:1  local_c8
; undefined1       Stack[-0xc7]:1  local_c7
; undefined1       Stack[-0xc6]:1  local_c6
; undefined1       Stack[-0xc5]:1  local_c5
; char[80]         Stack[-0xc0]:80  local_c0
; int              Stack[-0x70]:4  local_70
; int              Stack[-0x6c]:4  local_6c
; int              Stack[-0x68]:4  local_68
; char[128] *      Stack[-0x64]:4  local_64
; SIZE_T           Stack[-0x60]:4  local_60
; char[128] *      Stack[-0x5c]:4  local_5c
; SIZE_T *         Stack[-0x58]:4  local_58
; void *           Stack[-0x54]:4  local_54
; int              Stack[-0x50]:4  local_50
; int              Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; SIZE_T           Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; SIZE_T           Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; SIZE_T           Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; SIZE_T *         Stack[-0x28]:4  local_28
; char[128] *      Stack[-0x24]:4  local_24
; _FILE *          Stack[-0x20]:4  local_20
; char[128] *      Stack[-0x1c]:4  local_1c
; _FILE *          Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004be054
;   core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930 at 004bd992
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be40a
;   engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0 at 004b7c00
;
; Referenced Globals:
;   TerminatedCString s_Remounting_all_pods_0062759a
;   TerminatedCString s_engine_fileio_cpp_006276ab
;   TerminatedCString s_engine_fileio_cpp_006276c0
;   TerminatedCString s_engine_fileio_cpp_006276d5
;   TerminatedCString s_Out_of_memory_for_pod_au_006276ea
;   TerminatedCString s_Sorting_file_list_0062770c
;   TerminatedCString s_No_files_00627721
;   TerminatedCString s_pod_0062772c
;   TerminatedCString s_Enter_name_of_POD_to_bui_00627730
;   TerminatedCString s_s_exists_and_is_read_onl_0062774c
;   TerminatedCString s_Enter_volume_name_0062777b
;   TerminatedCString s_Upgrading_version_1_Pod__0062778d
;   TerminatedCString s_Generating_audit_records_006277c6
;   TerminatedCString s_engine_fileio_cpp_006277f4
;   TerminatedCString s_engine_fileio_cpp_00627809
;   ... and 58 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fputc_FUN_006007a0
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_ftell_FUN_00601560
;   crt_stdio.c_fwrite_FUN_005fdc00
;   crt_string.c__stricmp_FUN_005fe7f0
;   crt_time.c__time_FUN_006001f0
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   engine_dosio.c_getFileSize_FUN_00481960
;   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
;   engine_fileio.cpp_CFileManager_load_FUN_004b6c00
;   engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90
;   ... and 28 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5a50
        ;   Label: engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
    PUSH ESI                            ; 004b5a51
    PUSH EDI                            ; 004b5a52
    PUSH EBP                            ; 004b5a53
    SUB ESP,0x1828                      ; 004b5a54
    MOV ESI,dword ptr [ESP + 0x1840]    ; 004b5a5a
    MOV EBX,dword ptr [ESP + 0x1844]    ; 004b5a61
    PUSH 0x60                           ; 004b5a68
    XOR EDX,EDX                         ; 004b5a6a
    LEA EAX,[ESP + 0x1774]              ; 004b5a6c
    MOV dword ptr [ESP + 0x181c],EDX    ; 004b5a73
    PUSH EDX                            ; 004b5a7a
    MOV dword ptr [ESP + 0x1828],EDX    ; 004b5a7b
    MOV dword ptr [ESP + 0x17f0],EDX    ; 004b5a82
    PUSH EAX                            ; 004b5a89
    MOV dword ptr [ESP + 0x17f8],EDX    ; 004b5a8a
    MOV dword ptr [ESP + 0x17fc],EDX    ; 004b5a91
    CALL crt_memory.c_memset_FUN_005fde40 ; 004b5a98
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004b5a9d
    PUSH 0x62770c                       ; 004b5aa0 | = "Sorting file list..."
    MOV EDX,dword ptr [0x00678a60]      ; 004b5aa5 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004b5aab | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b5aac
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b5ab1
    MOV ECX,dword ptr [ESP + 0x183c]    ; 004b5ab4
    PUSH ECX                            ; 004b5abb
    CALL engine_fileio.cpp_CFileManager_load_FUN_004b6c00 ; 004b5abc
        ;   XREF to: 004b6c00 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_load_FUN_004b6c00(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 004b5ac1
    MOV EAX,dword ptr [ESP + 0x183c]    ; 004b5ac4
    CMP dword ptr [EAX + 0x4],0x1       ; 004b5acb
    JL 0x004b5b07                       ; 004b5acf
        ;   XREF to: 004b5b07 (CONDITIONAL_JUMP)  ; LAB_004b5b07
    TEST ESI,ESI                        ; 004b5ad1
    JNZ 0x004b5b1c                      ; 004b5ad3
        ;   XREF to: 004b5b1c (CONDITIONAL_JUMP)  ; LAB_004b5b1c
    PUSH ESI                            ; 004b5ad5
    LEA EAX,[ESP + 0x15ac]              ; 004b5ad6
    PUSH EAX                            ; 004b5add
    PUSH 0x62772c                       ; 004b5ade | = "pod"
    PUSH ESI                            ; 004b5ae3
    PUSH 0x627730                       ; 004b5ae4 | = "Enter name of .POD to build"
    MOV EBP,dword ptr [0x00678a60]      ; 004b5ae9 | g_CEditorToolsPtr
    PUSH EBP                            ; 004b5aef | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 ; 004b5af0
        ;   XREF to: 0049fb70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * dialog_title, char * directory_path, char * file_extension, ...)
    ADD ESP,0x18                        ; 004b5af5
    TEST EAX,EAX                        ; 004b5af8
    JNZ 0x004b5b3d                      ; 004b5afa
        ;   XREF to: 004b5b3d (CONDITIONAL_JUMP)  ; LAB_004b5b3d
    ADD ESP,0x1828                      ; 004b5afc
        ;   Label: LAB_004b5afc
    POP EBP                             ; 004b5b02
    POP EDI                             ; 004b5b03
    POP ESI                             ; 004b5b04
    POP EBX                             ; 004b5b05
    RET                                 ; 004b5b06
    PUSH 0x627721                       ; 004b5b07 | = "No files!!"
        ;   Label: LAB_004b5b07
    MOV EAX,[0x00678a60]                ; 004b5b0c | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 004b5b11 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b5b12
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b5b17
    JMP 0x004b5afc                      ; 004b5b1a
        ;   XREF to: 004b5afc (UNCONDITIONAL_JUMP)  ; LAB_004b5afc
    LEA EDI,[ESP + 0x15a8]              ; 004b5b1c
        ;   Label: LAB_004b5b1c
    PUSH EDI                            ; 004b5b23
    MOV AL,byte ptr [ESI]               ; 004b5b24
        ;   Label: LAB_004b5b24
    MOV byte ptr [EDI],AL               ; 004b5b26
    CMP AL,0x0                          ; 004b5b28
    JZ 0x004b5b3c                       ; 004b5b2a
        ;   XREF to: 004b5b3c (CONDITIONAL_JUMP)  ; LAB_004b5b3c
    MOV AL,byte ptr [ESI + 0x1]         ; 004b5b2c
    ADD ESI,0x2                         ; 004b5b2f
    MOV byte ptr [EDI + 0x1],AL         ; 004b5b32
    ADD EDI,0x2                         ; 004b5b35
    CMP AL,0x0                          ; 004b5b38
    JNZ 0x004b5b24                      ; 004b5b3a
        ;   XREF to: 004b5b24 (CONDITIONAL_JUMP)  ; LAB_004b5b24
    POP EDI                             ; 004b5b3c
        ;   Label: LAB_004b5b3c
    LEA EAX,[ESP + 0x15a8]              ; 004b5b3d
        ;   Label: LAB_004b5b3d
    PUSH EAX                            ; 004b5b44
    PUSH 0x0                            ; 004b5b45
    CALL engine_dosio.c_getFileSize_FUN_00481960 ; 004b5b47
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481960(char * directory, char * filename)
    ADD ESP,0x8                         ; 004b5b4c
    TEST EAX,EAX                        ; 004b5b4f
    JL 0x004b5b5b                       ; 004b5b51
        ;   XREF to: 004b5b5b (CONDITIONAL_JUMP)  ; LAB_004b5b5b
    TEST AL,0x8                         ; 004b5b53
    JNZ 0x004b6355                      ; 004b5b55
        ;   XREF to: 004b6355 (CONDITIONAL_JUMP)  ; LAB_004b6355
    TEST EBX,EBX                        ; 004b5b5b
        ;   Label: LAB_004b5b5b
    JZ 0x004b637c                       ; 004b5b5d
        ;   XREF to: 004b637c (CONDITIONAL_JUMP)  ; LAB_004b637c
    LEA EDI,[ESP + 0x1778]              ; 004b5b63
    MOV ESI,EBX                         ; 004b5b6a
    PUSH EDI                            ; 004b5b6c
    MOV AL,byte ptr [ESI]               ; 004b5b6d
        ;   Label: LAB_004b5b6d
    MOV byte ptr [EDI],AL               ; 004b5b6f
    CMP AL,0x0                          ; 004b5b71
    JZ 0x004b5b85                       ; 004b5b73
        ;   XREF to: 004b5b85 (CONDITIONAL_JUMP)  ; LAB_004b5b85
    MOV AL,byte ptr [ESI + 0x1]         ; 004b5b75
    ADD ESI,0x2                         ; 004b5b78
    MOV byte ptr [EDI + 0x1],AL         ; 004b5b7b
    ADD EDI,0x2                         ; 004b5b7e
    CMP AL,0x0                          ; 004b5b81
    JNZ 0x004b5b6d                      ; 004b5b83
        ;   XREF to: 004b5b6d (CONDITIONAL_JUMP)  ; LAB_004b5b6d
    POP EDI                             ; 004b5b85
        ;   Label: LAB_004b5b85
    XOR EDX,EDX                         ; 004b5b86
        ;   Label: LAB_004b5b86
    MOV ECX,dword ptr [0x02d12d34]      ; 004b5b88 | g_AuditRecordsArray
    MOV dword ptr [0x02d12d30],EDX      ; 004b5b8e | g_AuditRecordCount
    TEST ECX,ECX                        ; 004b5b94
    JZ 0x004b5bb3                       ; 004b5b96
        ;   XREF to: 004b5bb3 (CONDITIONAL_JUMP)  ; LAB_004b5bb3
    PUSH 0x79a                          ; 004b5b98
    PUSH 0x6276ab                       ; 004b5b9d | = "..\\engine\\fileio.cpp"
    PUSH ECX                            ; 004b5ba2
    XOR ESI,ESI                         ; 004b5ba3
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004b5ba5
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004b5baa
    MOV dword ptr [0x02d12d34],ESI      ; 004b5bad | g_AuditRecordsArray
    CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 ; 004b5bb3
        ;   XREF to: 004b1c00 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_establishUserIdentity_FUN_004b1c00()
        ;   Label: LAB_004b5bb3
    TEST EAX,EAX                        ; 004b5bb8
    JZ 0x004b5afc                       ; 004b5bba
        ;   XREF to: 004b5afc (CONDITIONAL_JUMP)  ; LAB_004b5afc
    MOV ESI,0x2d12bd0                   ; 004b5bc0 | g_VersionControlSession
    MOV EDI,0x2d12990                   ; 004b5bc5 | g_WorkingDirectoryPath
    PUSH EDI                            ; 004b5bca | g_WorkingDirectoryPath
    MOV AL,byte ptr [ESI]               ; 004b5bcb | g_VersionControlSession | g_VersionControlSession.primary_username[2]
        ;   Label: LAB_004b5bcb
    MOV byte ptr [EDI],AL               ; 004b5bcd | g_WorkingDirectoryPath | g_WorkingDirectoryPath+2
    CMP AL,0x0                          ; 004b5bcf
    JZ 0x004b5be3                       ; 004b5bd1
        ;   XREF to: 004b5be3 (CONDITIONAL_JUMP)  ; LAB_004b5be3
    MOV AL,byte ptr [ESI + 0x1]         ; 004b5bd3 | g_VersionControlSession.primary_username[1] | g_VersionControlSession.primary_username[3]
    ADD ESI,0x2                         ; 004b5bd6
    MOV byte ptr [EDI + 0x1],AL         ; 004b5bd9 | g_WorkingDirectoryPath+1 | g_WorkingDirectoryPath+3
    ADD EDI,0x2                         ; 004b5bdc
    CMP AL,0x0                          ; 004b5bdf
    JNZ 0x004b5bcb                      ; 004b5be1
        ;   XREF to: 004b5bcb (CONDITIONAL_JUMP)  ; LAB_004b5bcb
    POP EDI                             ; 004b5be3
        ;   Label: LAB_004b5be3
    PUSH 0x2d129b0                      ; 004b5be4 | g_PodCreationTime
    CALL crt_time.c__time_FUN_006001f0  ; 004b5be9
        ;   XREF to: 006001f0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c__time_FUN_006001f0(int * time)
    ADD ESP,0x4                         ; 004b5bee
    MOV EAX,ESP                         ; 004b5bf1
    PUSH EAX                            ; 004b5bf3
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 004b5bf4
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004b5bf9
    LEA EAX,[ESP + 0x15a8]              ; 004b5bfc
    PUSH EAX                            ; 004b5c03
    LEA EAX,[ESP + 0x4]                 ; 004b5c04
    PUSH EAX                            ; 004b5c08
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004b5c09
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004b5c0e
    TEST EAX,EAX                        ; 004b5c11
    JZ 0x004b5f97                       ; 004b5c13
        ;   XREF to: 004b5f97 (CONDITIONAL_JUMP)  ; LAB_004b5f97
    MOV EAX,dword ptr [ESP + 0x41c]     ; 004b5c19
    XOR EBX,EBX                         ; 004b5c20
    MOV dword ptr [ESP + 0x17cc],EAX    ; 004b5c22
    TEST EAX,EAX                        ; 004b5c29
    JLE 0x004b5d30                      ; 004b5c2b
        ;   XREF to: 004b5d30 (CONDITIONAL_JUMP)  ; LAB_004b5d30
    PUSH EBX                            ; 004b5c31
        ;   Label: LAB_004b5c31
    LEA EAX,[ESP + 0x4]                 ; 004b5c32
    PUSH EAX                            ; 004b5c36
    LEA ESI,[ESP + 0x1340]              ; 004b5c37
    CALL engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590 ; 004b5c3e
        ;   XREF to: 00550590 (UNCONDITIONAL_CALL)  ; void * engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590(CPodFile * this_ptr, int record_index, void * output_buffer)
    MOV EBP,dword ptr [0x02d12d30]      ; 004b5c43 | g_AuditRecordCount
    INC EBP                             ; 004b5c49
    MOV dword ptr [0x02d12d30],EBP      ; 004b5c4a | g_AuditRecordCount
    IMUL EAX,EBP,0x138                  ; 004b5c50
    ADD ESP,0x8                         ; 004b5c56
    LEA EDI,[ESP + 0x1470]              ; 004b5c59
    PUSH 0x7a1                          ; 004b5c60
    MOV ECX,0x4e                        ; 004b5c65
    LEA ESI,[ESP + 0x133c]              ; 004b5c6a
    PUSH 0x6276c0                       ; 004b5c71 | = "..\\engine\\fileio.cpp"
    MOVSD.REP ES:EDI,ESI                ; 004b5c76
    PUSH EAX                            ; 004b5c78
    MOV ECX,dword ptr [0x02d12d34]      ; 004b5c79 | g_AuditRecordsArray
    PUSH ECX                            ; 004b5c7f
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004b5c80
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004b5c85
    MOV [0x02d12d34],EAX                ; 004b5c88 | g_AuditRecordsArray
    TEST EAX,EAX                        ; 004b5c8d
    JNZ 0x004b5cb4                      ; 004b5c8f
        ;   XREF to: 004b5cb4 (CONDITIONAL_JUMP)  ; LAB_004b5cb4
    MOV ESI,0x6276d5                    ; 004b5c91 | = "..\\engine\\fileio.cpp"
    MOV EDI,0x7a2                       ; 004b5c96
    PUSH 0x6276ea                       ; 004b5c9b | = "Out of memory for pod audit list."
    MOV dword ptr [0x02f0ca48],ESI      ; 004b5ca0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004b5ca6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b5cac
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b5cb1
    MOV EAX,[0x02d12d30]                ; 004b5cb4 | g_AuditRecordCount
        ;   Label: LAB_004b5cb4
    DEC EAX                             ; 004b5cb9
    IMUL EDX,EAX,0x138                  ; 004b5cba
    PUSH 0x100                          ; 004b5cc0
    MOV EAX,[0x02d12d34]                ; 004b5cc5 | g_AuditRecordsArray
    MOV ECX,0x4e                        ; 004b5cca
    ADD EAX,EDX                         ; 004b5ccf
    PUSH 0x0                            ; 004b5cd1
    MOV EDI,EAX                         ; 004b5cd3
    ADD EAX,0x28                        ; 004b5cd5
    LEA ESI,[ESP + 0x1478]              ; 004b5cd8
    PUSH EAX                            ; 004b5cdf
    MOVSD.REP ES:EDI,ESI                ; 004b5ce0
    CALL crt_memory.c_memset_FUN_005fde40 ; 004b5ce2
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,[0x02d12d30]                ; 004b5ce7 | g_AuditRecordCount
    DEC EAX                             ; 004b5cec
    IMUL EAX,EAX,0x138                  ; 004b5ced
    MOV EDI,dword ptr [0x02d12d34]      ; 004b5cf3 | g_AuditRecordsArray
    LEA ESI,[ESP + 0x14a4]              ; 004b5cf9
    ADD EDI,EAX                         ; 004b5d00
    ADD ESP,0xc                         ; 004b5d02
    ADD EDI,0x28                        ; 004b5d05
    INC EBX                             ; 004b5d08
    PUSH EDI                            ; 004b5d09
    MOV AL,byte ptr [ESI]               ; 004b5d0a
        ;   Label: LAB_004b5d0a
    MOV byte ptr [EDI],AL               ; 004b5d0c
    CMP AL,0x0                          ; 004b5d0e
    JZ 0x004b5d22                       ; 004b5d10
        ;   XREF to: 004b5d22 (CONDITIONAL_JUMP)  ; LAB_004b5d22
    MOV AL,byte ptr [ESI + 0x1]         ; 004b5d12
    ADD ESI,0x2                         ; 004b5d15
    MOV byte ptr [EDI + 0x1],AL         ; 004b5d18
    ADD EDI,0x2                         ; 004b5d1b
    CMP AL,0x0                          ; 004b5d1e
    JNZ 0x004b5d0a                      ; 004b5d20
        ;   XREF to: 004b5d0a (CONDITIONAL_JUMP)  ; LAB_004b5d0a
    POP EDI                             ; 004b5d22
        ;   Label: LAB_004b5d22
    CMP EBX,dword ptr [ESP + 0x17cc]    ; 004b5d23
    JL 0x004b5c31                       ; 004b5d2a
        ;   XREF to: 004b5c31 (CONDITIONAL_JUMP)  ; LAB_004b5c31
    CMP dword ptr [ESP],0x2             ; 004b5d30
        ;   Label: LAB_004b5d30
    JGE 0x004b5d90                      ; 004b5d34
        ;   XREF to: 004b5d90 (CONDITIONAL_JUMP)  ; LAB_004b5d90
    PUSH 0x62778d                       ; 004b5d36 | = "Upgrading version 1 Pod...Computing i..."
    MOV EBX,dword ptr [0x00678a60]      ; 004b5d3b | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 004b5d41 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b5d42
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b5d47
    MOV EDI,dword ptr [ESP + 0x410]     ; 004b5d4a
    XOR ESI,ESI                         ; 004b5d51
    TEST EDI,EDI                        ; 004b5d53
    JLE 0x004b5d90                      ; 004b5d55
        ;   XREF to: 004b5d90 (CONDITIONAL_JUMP)  ; LAB_004b5d90
    XOR EBX,EBX                         ; 004b5d57
    PUSH ESI                            ; 004b5d59
        ;   Label: LAB_004b5d59
    LEA EAX,[ESP + 0x4]                 ; 004b5d5a
    PUSH EAX                            ; 004b5d5e
    CALL engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0 ; 004b5d5f
        ;   XREF to: 005507f0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0(CPodFile * this_ptr, int file_index)
    ADD ESP,0x8                         ; 004b5d64
    MOV EDX,dword ptr [ESP + 0x414]     ; 004b5d67
    MOV dword ptr [EDX + EBX*0x1 + 0x10],EAX ; 004b5d6e
    INC ESI                             ; 004b5d72
    MOV EBP,dword ptr [ESP + 0x410]     ; 004b5d73
    ADD EBX,0x14                        ; 004b5d7a
    CMP ESI,EBP                         ; 004b5d7d
    JL 0x004b5d59                       ; 004b5d7f
        ;   XREF to: 004b5d59 (CONDITIONAL_JUMP)  ; LAB_004b5d59
    LEA EAX,[EAX]                       ; 004b5d81
    LEA EDX,[EDX]                       ; 004b5d87
    LEA EAX,[EAX]                       ; 004b5d8d
    PUSH 0x6277c6                       ; 004b5d90 | = "Generating audit records for deleted ..."
        ;   Label: LAB_004b5d90
    MOV EAX,[0x00678a60]                ; 004b5d95 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 004b5d9a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b5d9b
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b5da0
    XOR EDX,EDX                         ; 004b5da3
    MOV ECX,dword ptr [ESP + 0x410]     ; 004b5da5
    MOV dword ptr [ESP + 0x17f8],EDX    ; 004b5dac
    TEST ECX,ECX                        ; 004b5db3
    JLE 0x004b5f97                      ; 004b5db5
        ;   XREF to: 004b5f97 (CONDITIONAL_JUMP)  ; LAB_004b5f97
    MOV EAX,dword ptr [ESP + 0x183c]    ; 004b5dbb
    ADD EAX,0x8                         ; 004b5dc2
    MOV dword ptr [ESP + 0x180c],EDX    ; 004b5dc5
    MOV dword ptr [ESP + 0x17d4],EAX    ; 004b5dcc
    MOV EAX,dword ptr [ESP + 0x183c]    ; 004b5dd3
        ;   Label: LAB_004b5dd3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b5dda
    XOR EBX,EBX                         ; 004b5ddd
    TEST EDX,EDX                        ; 004b5ddf
    JLE 0x004b5e0d                      ; 004b5de1
        ;   XREF to: 004b5e0d (CONDITIONAL_JUMP)  ; LAB_004b5e0d
    MOV ESI,dword ptr [ESP + 0x17d4]    ; 004b5de3
    MOV EBP,dword ptr [ESP + 0x180c]    ; 004b5dea
    MOV EAX,dword ptr [ESP + 0x414]     ; 004b5df1
        ;   Label: LAB_004b5df1
    PUSH ESI                            ; 004b5df8
    MOV EDI,dword ptr [EAX + EBP*0x1]   ; 004b5df9
    PUSH EDI                            ; 004b5dfc
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b5dfd
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b5e02
    TEST EAX,EAX                        ; 004b5e05
    JNZ 0x004b63ad                      ; 004b5e07
        ;   XREF to: 004b63ad (CONDITIONAL_JUMP)  ; LAB_004b63ad
    MOV EAX,dword ptr [ESP + 0x183c]    ; 004b5e0d
        ;   Label: LAB_004b5e0d
    CMP EBX,dword ptr [EAX + 0x4]       ; 004b5e14
    JL 0x004b5f68                       ; 004b5e17
        ;   XREF to: 004b5f68 (CONDITIONAL_JUMP)  ; LAB_004b5f68
    MOV EAX,0x1                         ; 004b5e1d
    MOV ESI,dword ptr [ESP + 0x414]     ; 004b5e22
    MOV EDX,dword ptr [ESP + 0x180c]    ; 004b5e29
    MOV EDI,0x2d129b8                   ; 004b5e30 | g_CurrentFilenameBuffer
    ADD ESI,EDX                         ; 004b5e35
    MOV ECX,0x4e                        ; 004b5e37
    XOR EBX,EBX                         ; 004b5e3c
    MOV ESI,dword ptr [ESI]             ; 004b5e3e
    MOV [0x02d129b4],EAX                ; 004b5e40 | g_AuditOperationType
    PUSH EDI                            ; 004b5e45 | g_CurrentFilenameBuffer
    MOV AL,byte ptr [ESI]               ; 004b5e46
        ;   Label: LAB_004b5e46
    MOV byte ptr [EDI],AL               ; 004b5e48 | g_CurrentFilenameBuffer | g_CurrentFilenameBuffer+2
    CMP AL,0x0                          ; 004b5e4a
    JZ 0x004b5e5e                       ; 004b5e4c
        ;   XREF to: 004b5e5e (CONDITIONAL_JUMP)  ; LAB_004b5e5e
    MOV AL,byte ptr [ESI + 0x1]         ; 004b5e4e
    ADD ESI,0x2                         ; 004b5e51
    MOV byte ptr [EDI + 0x1],AL         ; 004b5e54 | g_CurrentFilenameBuffer+1 | g_CurrentFilenameBuffer+3
    ADD EDI,0x2                         ; 004b5e57
    CMP AL,0x0                          ; 004b5e5a
    JNZ 0x004b5e46                      ; 004b5e5c
        ;   XREF to: 004b5e46 (CONDITIONAL_JUMP)  ; LAB_004b5e46
    POP EDI                             ; 004b5e5e
        ;   Label: LAB_004b5e5e
    MOV EAX,dword ptr [ESP + 0x414]     ; 004b5e5f
    LEA EDI,[ESP + 0xf90]               ; 004b5e66
    MOV ESI,0x2d12990                   ; 004b5e6d | g_WorkingDirectoryPath
    ADD EAX,EDX                         ; 004b5e72
    MOV dword ptr [0x02d12ac0],EBX      ; 004b5e74 | g_CurrentFileOffset
    MOV dword ptr [0x02d12ac4],EBX      ; 004b5e7a | g_CurrentFileCompressedSize
    MOV EDX,dword ptr [EAX + 0xc]       ; 004b5e80
    MOV EAX,dword ptr [EAX + 0x4]       ; 004b5e83
    MOV dword ptr [0x02d12ab8],EDX      ; 004b5e86 | g_CurrentFileTimestamp
    MOV [0x02d12abc],EAX                ; 004b5e8c | g_CurrentFileSize
    MOVSD.REP ES:EDI,ESI                ; 004b5e91 | g_WorkingDirectoryPath | g_WorkingDirectoryPath+4
    MOV EDI,dword ptr [0x02d12d30]      ; 004b5e93 | g_AuditRecordCount
    INC EDI                             ; 004b5e99
    MOV dword ptr [0x02d12d30],EDI      ; 004b5e9a | g_AuditRecordCount
    IMUL EAX,EDI,0x138                  ; 004b5ea0
    PUSH 0x7a1                          ; 004b5ea6
    PUSH 0x6276c0                       ; 004b5eab | = "..\\engine\\fileio.cpp"
    PUSH EAX                            ; 004b5eb0
    MOV EAX,[0x02d12d34]                ; 004b5eb1 | g_AuditRecordsArray
    PUSH EAX                            ; 004b5eb6
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004b5eb7
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004b5ebc
    MOV [0x02d12d34],EAX                ; 004b5ebf | g_AuditRecordsArray
    TEST EAX,EAX                        ; 004b5ec4
    JNZ 0x004b5eeb                      ; 004b5ec6
        ;   XREF to: 004b5eeb (CONDITIONAL_JUMP)  ; LAB_004b5eeb
    MOV EDX,0x6276d5                    ; 004b5ec8 | = "..\\engine\\fileio.cpp"
    MOV ECX,0x7a2                       ; 004b5ecd
    PUSH 0x6276ea                       ; 004b5ed2 | = "Out of memory for pod audit list."
    MOV dword ptr [0x02f0ca48],EDX      ; 004b5ed7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004b5edd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b5ee3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b5ee8
    MOV EAX,[0x02d12d30]                ; 004b5eeb | g_AuditRecordCount
        ;   Label: LAB_004b5eeb
    DEC EAX                             ; 004b5ef0
    IMUL EDX,EAX,0x138                  ; 004b5ef1
    PUSH 0x100                          ; 004b5ef7
    MOV EAX,[0x02d12d34]                ; 004b5efc | g_AuditRecordsArray
    MOV ECX,0x4e                        ; 004b5f01
    ADD EAX,EDX                         ; 004b5f06
    PUSH 0x0                            ; 004b5f08
    MOV EDI,EAX                         ; 004b5f0a
    ADD EAX,0x28                        ; 004b5f0c
    LEA ESI,[ESP + 0xf98]               ; 004b5f0f
    PUSH EAX                            ; 004b5f16
    MOVSD.REP ES:EDI,ESI                ; 004b5f17
    CALL crt_memory.c_memset_FUN_005fde40 ; 004b5f19
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,[0x02d12d30]                ; 004b5f1e | g_AuditRecordCount
    DEC EAX                             ; 004b5f23
    IMUL EAX,EAX,0x138                  ; 004b5f24
    LEA ESI,[ESP + 0xfc4]               ; 004b5f2a
    ADD ESP,0xc                         ; 004b5f31
    MOV EDI,dword ptr [0x02d12d34]      ; 004b5f34 | g_AuditRecordsArray
    MOV EBX,dword ptr [ESP + 0x17ec]    ; 004b5f3a
    ADD EDI,EAX                         ; 004b5f41
    INC EBX                             ; 004b5f43
    ADD EDI,0x28                        ; 004b5f44
    MOV dword ptr [ESP + 0x17ec],EBX    ; 004b5f47
    PUSH EDI                            ; 004b5f4e
    MOV AL,byte ptr [ESI]               ; 004b5f4f
        ;   Label: LAB_004b5f4f
    MOV byte ptr [EDI],AL               ; 004b5f51
    CMP AL,0x0                          ; 004b5f53
    JZ 0x004b5f67                       ; 004b5f55
        ;   XREF to: 004b5f67 (CONDITIONAL_JUMP)  ; LAB_004b5f67
    MOV AL,byte ptr [ESI + 0x1]         ; 004b5f57
    ADD ESI,0x2                         ; 004b5f5a
    MOV byte ptr [EDI + 0x1],AL         ; 004b5f5d
    ADD EDI,0x2                         ; 004b5f60
    CMP AL,0x0                          ; 004b5f63
    JNZ 0x004b5f4f                      ; 004b5f65
        ;   XREF to: 004b5f4f (CONDITIONAL_JUMP)  ; LAB_004b5f4f
    POP EDI                             ; 004b5f67
        ;   Label: LAB_004b5f67
    MOV EBX,dword ptr [ESP + 0x180c]    ; 004b5f68
        ;   Label: LAB_004b5f68
    MOV ESI,dword ptr [ESP + 0x17f8]    ; 004b5f6f
    MOV EDI,dword ptr [ESP + 0x410]     ; 004b5f76
    ADD EBX,0x14                        ; 004b5f7d
    INC ESI                             ; 004b5f80
    MOV dword ptr [ESP + 0x180c],EBX    ; 004b5f81
    MOV dword ptr [ESP + 0x17f8],ESI    ; 004b5f88
    CMP ESI,EDI                         ; 004b5f8f
    JL 0x004b5dd3                       ; 004b5f91
        ;   XREF to: 004b5dd3 (CONDITIONAL_JUMP)  ; LAB_004b5dd3
    PUSH 0x825                          ; 004b5f97
        ;   Label: LAB_004b5f97
    PUSH 0x6277f4                       ; 004b5f9c | = "..\\engine\\fileio.cpp"
    MOV EAX,dword ptr [ESP + 0x1844]    ; 004b5fa1
    PUSH 0x14                           ; 004b5fa8
    MOV ESI,dword ptr [EAX + 0x4]       ; 004b5faa
    PUSH ESI                            ; 004b5fad
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 004b5fae
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004b5fb3
    MOV dword ptr [ESP + 0x17e0],EAX    ; 004b5fb6
    TEST EAX,EAX                        ; 004b5fbd
    JNZ 0x004b5fe4                      ; 004b5fbf
        ;   XREF to: 004b5fe4 (CONDITIONAL_JUMP)  ; LAB_004b5fe4
    MOV EDI,0x627809                    ; 004b5fc1 | = "..\\engine\\fileio.cpp"
    MOV EBP,0x826                       ; 004b5fc6
    PUSH 0x62781e                       ; 004b5fcb | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],EDI      ; 004b5fd0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004b5fd6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b5fdc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b5fe1
    XOR EAX,EAX                         ; 004b5fe4
        ;   Label: LAB_004b5fe4
    MOV dword ptr [ESP + 0x17f4],EAX    ; 004b5fe6
    MOV EAX,dword ptr [ESP + 0x183c]    ; 004b5fed
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b5ff4
    XOR ESI,ESI                         ; 004b5ff7
    TEST EDX,EDX                        ; 004b5ff9
    JLE 0x004b6040                      ; 004b5ffb
        ;   XREF to: 004b6040 (CONDITIONAL_JUMP)  ; LAB_004b6040
    LEA EBX,[EAX + 0x8]                 ; 004b5ffd
    MOV EDI,EBX                         ; 004b6000
        ;   Label: LAB_004b6000
    SUB ECX,ECX                         ; 004b6002
    DEC ECX                             ; 004b6004
    XOR EAX,EAX                         ; 004b6005
    SCASB.REPNE ES:EDI                  ; 004b6007
    NOT ECX                             ; 004b6009
    DEC ECX                             ; 004b600b
    INC ESI                             ; 004b600c
    MOV EDI,dword ptr [ESP + 0x17f4]    ; 004b600d
    MOV EAX,dword ptr [ESP + 0x183c]    ; 004b6014
    INC ECX                             ; 004b601b
    ADD EBX,0x80                        ; 004b601c
    ADD EDI,ECX                         ; 004b6022
    MOV EBP,dword ptr [EAX + 0x4]       ; 004b6024
    MOV dword ptr [ESP + 0x17f4],EDI    ; 004b6027
    CMP ESI,EBP                         ; 004b602e
    JL 0x004b6000                       ; 004b6030
        ;   XREF to: 004b6000 (CONDITIONAL_JUMP)  ; LAB_004b6000
    LEA EAX,[EAX]                       ; 004b6032
    LEA EDX,[EDX]                       ; 004b6038
    MOV EAX,EAX                         ; 004b603e
    PUSH 0x82e                          ; 004b6040
        ;   Label: LAB_004b6040
    PUSH 0x62782d                       ; 004b6045 | = "..\\engine\\fileio.cpp"
    MOV EAX,dword ptr [ESP + 0x17fc]    ; 004b604a
    PUSH EAX                            ; 004b6051
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004b6052
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004b6057
    MOV dword ptr [ESP + 0x17e4],EAX    ; 004b605a
    TEST EAX,EAX                        ; 004b6061
    JNZ 0x004b6088                      ; 004b6063
        ;   XREF to: 004b6088 (CONDITIONAL_JUMP)  ; LAB_004b6088
    MOV EDX,0x627842                    ; 004b6065 | = "..\\engine\\fileio.cpp"
    MOV ECX,0x82f                       ; 004b606a
    PUSH 0x627857                       ; 004b606f | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004b6074 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004b607a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b6080
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b6085
    LEA EAX,[ESP + 0x15a8]              ; 004b6088
        ;   Label: LAB_004b6088
    PUSH EAX                            ; 004b608f
    PUSH 0x627866                       ; 004b6090 | = "Checking files..."
    MOV EBX,dword ptr [0x00678a60]      ; 004b6095 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 004b609b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b609c
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b60a1
    MOV EDX,dword ptr [ESP + 0x183c]    ; 004b60a4
    MOV EDX,dword ptr [EDX + 0x4]       ; 004b60ab
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b60ae
    ADD EAX,EDX                         ; 004b60b5
    SHL EAX,0x2                         ; 004b60b7
    MOV EDX,dword ptr [ESP + 0x17f4]    ; 004b60ba
    ADD EAX,0x60                        ; 004b60c1
    XOR ESI,ESI                         ; 004b60c4
    ADD EDX,EAX                         ; 004b60c6
    LEA EAX,[ESP + 0x42c]               ; 004b60c8
    MOV dword ptr [ESP + 0x1808],ESI    ; 004b60cf
    PUSH EAX                            ; 004b60d6
    MOV dword ptr [ESP + 0x17dc],EDX    ; 004b60d7
    MOV dword ptr [ESP + 0x1804],EDX    ; 004b60de
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b60e5
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b60ea
    MOV EAX,dword ptr [ESP + 0x183c]    ; 004b60ed
    MOV EBP,dword ptr [EAX + 0x4]       ; 004b60f4
    MOV dword ptr [ESP + 0x17fc],ESI    ; 004b60f7
    TEST EBP,EBP                        ; 004b60fe
    JLE 0x004b61fd                      ; 004b6100
        ;   XREF to: 004b61fd (CONDITIONAL_JUMP)  ; LAB_004b61fd
    MOV EBP,dword ptr [ESP + 0x17e0]    ; 004b6106
    LEA EBX,[EAX + 0x8]                 ; 004b610d
    LEA EDI,[ESP + 0xb7c]               ; 004b6110
        ;   Label: LAB_004b6110
    MOV ESI,EBX                         ; 004b6117
    PUSH EDI                            ; 004b6119
    MOV AL,byte ptr [ESI]               ; 004b611a
        ;   Label: LAB_004b611a
    MOV byte ptr [EDI],AL               ; 004b611c
    CMP AL,0x0                          ; 004b611e
    JZ 0x004b6132                       ; 004b6120
        ;   XREF to: 004b6132 (CONDITIONAL_JUMP)  ; LAB_004b6132
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6122
    ADD ESI,0x2                         ; 004b6125
    MOV byte ptr [EDI + 0x1],AL         ; 004b6128
    ADD EDI,0x2                         ; 004b612b
    CMP AL,0x0                          ; 004b612e
    JNZ 0x004b611a                      ; 004b6130
        ;   XREF to: 004b611a (CONDITIONAL_JUMP)  ; LAB_004b611a
    POP EDI                             ; 004b6132
        ;   Label: LAB_004b6132
    LEA EAX,[ESP + 0xb7c]               ; 004b6133
    PUSH EAX                            ; 004b613a
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b613b
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004b6140
    TEST EAX,EAX                        ; 004b6143
    JZ 0x004b63cb                       ; 004b6145
        ;   XREF to: 004b63cb (CONDITIONAL_JUMP)  ; LAB_004b63cb
    MOV EAX,dword ptr [ESP + 0x1808]    ; 004b614b
    MOV dword ptr [EBP],EAX             ; 004b6152
    MOV EAX,dword ptr [ESP + 0x1800]    ; 004b6155
    MOV dword ptr [EBP + 0x8],EAX       ; 004b615c
    MOV EAX,dword ptr [ESP + 0xd80]     ; 004b615f
    MOV dword ptr [EBP + 0x4],EAX       ; 004b6166
    MOV EAX,dword ptr [ESP + 0xd88]     ; 004b6169
    MOV EDI,dword ptr [ESP + 0x17e4]    ; 004b6170
    MOV dword ptr [EBP + 0xc],EAX       ; 004b6177
    MOV EAX,dword ptr [ESP + 0x1808]    ; 004b617a
    MOV ESI,EBX                         ; 004b6181
    ADD EDI,EAX                         ; 004b6183
    MOV EDX,dword ptr [ESP + 0x1800]    ; 004b6185
    PUSH EDI                            ; 004b618c
    MOV AL,byte ptr [ESI]               ; 004b618d
        ;   Label: LAB_004b618d
    MOV byte ptr [EDI],AL               ; 004b618f
    CMP AL,0x0                          ; 004b6191
    JZ 0x004b61a5                       ; 004b6193
        ;   XREF to: 004b61a5 (CONDITIONAL_JUMP)  ; LAB_004b61a5
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6195
    ADD ESI,0x2                         ; 004b6198
    MOV byte ptr [EDI + 0x1],AL         ; 004b619b
    ADD EDI,0x2                         ; 004b619e
    CMP AL,0x0                          ; 004b61a1
    JNZ 0x004b618d                      ; 004b61a3
        ;   XREF to: 004b618d (CONDITIONAL_JUMP)  ; LAB_004b618d
    POP EDI                             ; 004b61a5
        ;   Label: LAB_004b61a5
    MOV EAX,dword ptr [ESP + 0xd80]     ; 004b61a6
    MOV ESI,dword ptr [ESP + 0x1808]    ; 004b61ad
    MOV EDI,EBX                         ; 004b61b4
    ADD EDX,EAX                         ; 004b61b6
    SUB ECX,ECX                         ; 004b61b8
    DEC ECX                             ; 004b61ba
    XOR EAX,EAX                         ; 004b61bb
    SCASB.REPNE ES:EDI                  ; 004b61bd
    NOT ECX                             ; 004b61bf
    DEC ECX                             ; 004b61c1
    INC ECX                             ; 004b61c2
    ADD ESI,ECX                         ; 004b61c3
    MOV dword ptr [ESP + 0x1800],EDX    ; 004b61c5
    MOV dword ptr [ESP + 0x1808],ESI    ; 004b61cc
    MOV EAX,dword ptr [ESP + 0x17fc]    ; 004b61d3
        ;   Label: LAB_004b61d3
    MOV EDX,dword ptr [ESP + 0x183c]    ; 004b61da
    ADD EBX,0x80                        ; 004b61e1
    ADD EBP,0x14                        ; 004b61e7
    INC EAX                             ; 004b61ea
    MOV ECX,dword ptr [EDX + 0x4]       ; 004b61eb
    MOV dword ptr [ESP + 0x17fc],EAX    ; 004b61ee
    CMP EAX,ECX                         ; 004b61f5
    JL 0x004b6110                       ; 004b61f7
        ;   XREF to: 004b6110 (CONDITIONAL_JUMP)  ; LAB_004b6110
    CMP dword ptr [ESP + 0x42c],0x0     ; 004b61fd
        ;   Label: LAB_004b61fd
    JNZ 0x004b63e8                      ; 004b6205
        ;   XREF to: 004b63e8 (CONDITIONAL_JUMP)  ; LAB_004b63e8
    MOV EAX,dword ptr [ESP + 0x1808]    ; 004b620b
    CMP EAX,dword ptr [ESP + 0x17f4]    ; 004b6212
    JZ 0x004b623e                       ; 004b6219
        ;   XREF to: 004b623e (CONDITIONAL_JUMP)  ; LAB_004b623e
    MOV EDI,0x627902                    ; 004b621b | = "..\\engine\\fileio.cpp"
    MOV EBP,0x861                       ; 004b6220
    PUSH 0x627917                       ; 004b6225 | = "Hell froze."
    MOV dword ptr [0x02f0ca48],EDI      ; 004b622a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004b6230 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b6236
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b623b
    LEA EAX,[ESP + 0x15a8]              ; 004b623e
        ;   Label: LAB_004b623e
    PUSH EAX                            ; 004b6245
    PUSH 0x627923                       ; 004b6246 | = "Creating %s..."
    MOV EAX,[0x00678a60]                ; 004b624b | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 004b6250 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b6251
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b6256
    PUSH 0x866                          ; 004b6259
    PUSH 0x627932                       ; 004b625e | = "..\\engine\\fileio.cpp"
    PUSH 0x627947                       ; 004b6263 | = "wb"
    PUSH 0x0                            ; 004b6268
    LEA EAX,[ESP + 0x15b8]              ; 004b626a
    PUSH EAX                            ; 004b6271
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b6272
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004b6277
    MOV dword ptr [ESP + 0x1818],EAX    ; 004b627a
    TEST EAX,EAX                        ; 004b6281
    JNZ 0x004b6426                      ; 004b6283
        ;   XREF to: 004b6426 (CONDITIONAL_JUMP)  ; LAB_004b6426
    LEA EAX,[ESP + 0x15a8]              ; 004b6289
    PUSH EAX                            ; 004b6290
    PUSH 0x62794a                       ; 004b6291 | = "Can't create %s"
    MOV ESI,dword ptr [0x00678a60]      ; 004b6296 | g_CEditorToolsPtr
    PUSH ESI                            ; 004b629c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b629d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   Label: LAB_004b629d
    ADD ESP,0xc                         ; 004b62a2
    XOR EBP,EBP                         ; 004b62a5
        ;   Label: LAB_004b62a5
    MOV EAX,[0x02d12d34]                ; 004b62a7 | g_AuditRecordsArray
    MOV dword ptr [0x02d12d30],EBP      ; 004b62ac | g_AuditRecordCount
    TEST EAX,EAX                        ; 004b62b2
    JZ 0x004b62cf                       ; 004b62b4
        ;   XREF to: 004b62cf (CONDITIONAL_JUMP)  ; LAB_004b62cf
    PUSH 0x79a                          ; 004b62b6
    PUSH 0x6276ab                       ; 004b62bb | = "..\\engine\\fileio.cpp"
    PUSH EAX                            ; 004b62c0
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004b62c1
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004b62c6
    MOV dword ptr [0x02d12d34],EBP      ; 004b62c9 | g_AuditRecordsArray
    MOV EBX,dword ptr [ESP + 0x1818]    ; 004b62cf
        ;   Label: LAB_004b62cf
    TEST EBX,EBX                        ; 004b62d6
    JZ 0x004b62ed                       ; 004b62d8
        ;   XREF to: 004b62ed (CONDITIONAL_JUMP)  ; LAB_004b62ed
    PUSH 0x85b                          ; 004b62da
    PUSH 0x6278c3                       ; 004b62df | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004b62e4
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b62e5
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b62ea
    MOV EDI,dword ptr [ESP + 0x1820]    ; 004b62ed
        ;   Label: LAB_004b62ed
    TEST EDI,EDI                        ; 004b62f4
    JZ 0x004b630b                       ; 004b62f6
        ;   XREF to: 004b630b (CONDITIONAL_JUMP)  ; LAB_004b630b
    PUSH 0x85c                          ; 004b62f8
    PUSH 0x6278d8                       ; 004b62fd | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004b6302
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b6303
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b6308
    MOV EAX,dword ptr [ESP + 0x17e0]    ; 004b630b
        ;   Label: LAB_004b630b
    TEST EAX,EAX                        ; 004b6312
    JZ 0x004b6329                       ; 004b6314
        ;   XREF to: 004b6329 (CONDITIONAL_JUMP)  ; LAB_004b6329
    PUSH 0x85d                          ; 004b6316
    PUSH 0x6278ed                       ; 004b631b | = "..\\engine\\fileio.cpp"
    PUSH EAX                            ; 004b6320
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004b6321
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004b6326
    PUSH 0x0                            ; 004b6329
        ;   Label: LAB_004b6329
    LEA EAX,[ESP + 0x430]               ; 004b632b
    PUSH EAX                            ; 004b6332
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b6333
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b6338
    PUSH 0x0                            ; 004b633b
    LEA EAX,[ESP + 0x4]                 ; 004b633d
    PUSH EAX                            ; 004b6341
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b6342
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b6347
    ADD ESP,0x1828                      ; 004b634a
    POP EBP                             ; 004b6350
    POP EDI                             ; 004b6351
    POP ESI                             ; 004b6352
    POP EBX                             ; 004b6353
    RET                                 ; 004b6354
    LEA EAX,[ESP + 0x15a8]              ; 004b6355
        ;   Label: LAB_004b6355
    PUSH EAX                            ; 004b635c
    PUSH 0x62774c                       ; 004b635d | = "%s exists and is read only.  Cannot b..."
    MOV EBP,dword ptr [0x00678a60]      ; 004b6362 | g_CEditorToolsPtr
    PUSH EBP                            ; 004b6368 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b6369
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b636e
    ADD ESP,0x1828                      ; 004b6371
    POP EBP                             ; 004b6377
    POP EDI                             ; 004b6378
    POP ESI                             ; 004b6379
    POP EBX                             ; 004b637a
    RET                                 ; 004b637b
    PUSH EBX                            ; 004b637c
        ;   Label: LAB_004b637c
    PUSH 0x50                           ; 004b637d
    LEA EAX,[ESP + 0x1780]              ; 004b637f
    PUSH EAX                            ; 004b6386
    PUSH 0x62777b                       ; 004b6387 | = "Enter volume name"
    MOV EAX,[0x00678a60]                ; 004b638c | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 004b6391 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004b6392
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004b6397
    TEST EAX,EAX                        ; 004b639a
    JNZ 0x004b5b86                      ; 004b639c
        ;   XREF to: 004b5b86 (CONDITIONAL_JUMP)  ; LAB_004b5b86
    ADD ESP,0x1828                      ; 004b63a2
    POP EBP                             ; 004b63a8
    POP EDI                             ; 004b63a9
    POP ESI                             ; 004b63aa
    POP EBX                             ; 004b63ab
    RET                                 ; 004b63ac
    MOV EAX,dword ptr [ESP + 0x183c]    ; 004b63ad
        ;   Label: LAB_004b63ad
    INC EBX                             ; 004b63b4
    MOV ECX,dword ptr [EAX + 0x4]       ; 004b63b5
    ADD ESI,0x80                        ; 004b63b8
    CMP EBX,ECX                         ; 004b63be
    JL 0x004b5df1                       ; 004b63c0
        ;   XREF to: 004b5df1 (CONDITIONAL_JUMP)  ; LAB_004b5df1
    JMP 0x004b5e0d                      ; 004b63c6
        ;   XREF to: 004b5e0d (UNCONDITIONAL_JUMP)  ; LAB_004b5e0d
    LEA EAX,[ESP + 0xb7c]               ; 004b63cb
        ;   Label: LAB_004b63cb
    PUSH EAX                            ; 004b63d2
    LEA EAX,[ESP + 0x430]               ; 004b63d3
    PUSH EAX                            ; 004b63da
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b63db
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b63e0
    JMP 0x004b61d3                      ; 004b63e3
        ;   XREF to: 004b61d3 (UNCONDITIONAL_JUMP)  ; LAB_004b61d3
    LEA EAX,[ESP + 0x15a8]              ; 004b63e8
        ;   Label: LAB_004b63e8
    PUSH EAX                            ; 004b63ef
    PUSH 0x627878                       ; 004b63f0 | = "Couldn't build %s because the followi..."
    LEA EAX,[ESP + 0x16b0]              ; 004b63f5
    PUSH EAX                            ; 004b63fc
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b63fd
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b6402
    PUSH 0x0                            ; 004b6405
    PUSH -0x1                           ; 004b6407
    LEA EAX,[ESP + 0x16b0]              ; 004b6409
    PUSH EAX                            ; 004b6410
    LEA EAX,[ESP + 0x438]               ; 004b6411
    PUSH EAX                            ; 004b6418
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b6419
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004b641e
    JMP 0x004b62a5                      ; 004b6421
        ;   XREF to: 004b62a5 (UNCONDITIONAL_JUMP)  ; LAB_004b62a5
    LEA EAX,[ESP + 0x15a8]              ; 004b6426
        ;   Label: LAB_004b6426
    PUSH EAX                            ; 004b642d
    PUSH 0x62795a                       ; 004b642e | = "Building %s..."
    LEA EAX,[ESP + 0xd98]               ; 004b6433
    PUSH EAX                            ; 004b643a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b643b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b6440
    LEA EAX,[ESP + 0xd90]               ; 004b6443
    PUSH EAX                            ; 004b644a
    MOV EDX,dword ptr [0x00678a60]      ; 004b644b | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004b6451 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 004b6452
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 004b6457
    MOV EAX,dword ptr [ESP + 0x183c]    ; 004b645a
    XOR ECX,ECX                         ; 004b6461
    MOV EBX,dword ptr [EAX + 0x4]       ; 004b6463
    MOV dword ptr [ESP + 0x1804],ECX    ; 004b6466
    TEST EBX,EBX                        ; 004b646d
    JLE 0x004b68d8                      ; 004b646f
        ;   XREF to: 004b68d8 (CONDITIONAL_JUMP)  ; LAB_004b68d8
    ADD EAX,0x8                         ; 004b6475
    MOV EDX,dword ptr [ESP + 0x17d8]    ; 004b6478
    MOV dword ptr [ESP + 0x1814],EAX    ; 004b647f
    MOV EAX,dword ptr [ESP + 0x1800]    ; 004b6486
    SUB EAX,EDX                         ; 004b648d
    MOV dword ptr [ESP + 0x17d0],EAX    ; 004b648f
    MOV EAX,dword ptr [ESP + 0x1814]    ; 004b6496
    MOV dword ptr [ESP + 0x17dc],EAX    ; 004b649d
    MOV EAX,dword ptr [ESP + 0x17e0]    ; 004b64a4
    MOV dword ptr [ESP + 0x1810],EAX    ; 004b64ab
    MOV EAX,dword ptr [ESP + 0x17d0]    ; 004b64b2
        ;   Label: LAB_004b64b2
    MOV dword ptr [ESP + 0x1824],EAX    ; 004b64b9
    FILD dword ptr [ESP + 0x1824]       ; 004b64c0
    SUB ESP,0x4                         ; 004b64c7
    MOV EAX,dword ptr [ESP + 0x1814]    ; 004b64ca
    FSTP float ptr [ESP]                ; 004b64d1
    MOV ECX,dword ptr [ESP + 0x17dc]    ; 004b64d4
    MOV EAX,dword ptr [EAX + 0x8]       ; 004b64db
    SUB EAX,ECX                         ; 004b64de
    MOV dword ptr [ESP + 0x1828],EAX    ; 004b64e0
    FILD dword ptr [ESP + 0x1828]       ; 004b64e7
    SUB ESP,0x4                         ; 004b64ee
    MOV EBX,dword ptr [0x00678a60]      ; 004b64f1 | g_CEditorToolsInstance | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 004b64f7
    PUSH EBX                            ; 004b64fa | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 004b64fb
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float current_progress, float total_progress)
    ADD ESP,0xc                         ; 004b6500
    MOV EAX,dword ptr [ESP + 0x1810]    ; 004b6503
    PUSH 0x0                            ; 004b650a
    MOV ESI,dword ptr [EAX + 0x8]       ; 004b650c
    PUSH ESI                            ; 004b650f
    MOV EDI,dword ptr [ESP + 0x1820]    ; 004b6510
    PUSH EDI                            ; 004b6517
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 004b6518
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004b651d
    PUSH 0x876                          ; 004b6520
    PUSH 0x627969                       ; 004b6525 | = "..\\engine\\fileio.cpp"
    PUSH 0x62797e                       ; 004b652a | = "rb"
    PUSH 0x0                            ; 004b652f
    MOV EBP,dword ptr [ESP + 0x17ec]    ; 004b6531
    PUSH EBP                            ; 004b6538
    MOV EDI,dword ptr [ESP + 0x1818]    ; 004b6539
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b6540
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004b6545
    SHL EDI,0x7                         ; 004b6548
    MOV dword ptr [ESP + 0x1820],EAX    ; 004b654b
    TEST EAX,EAX                        ; 004b6552
    JZ 0x004b65d1                       ; 004b6554
        ;   XREF to: 004b65d1 (CONDITIONAL_JUMP)  ; LAB_004b65d1
    MOV EAX,dword ptr [ESP + 0x1810]    ; 004b655a
    XOR ESI,ESI                         ; 004b6561
    MOV EBP,EAX                         ; 004b6563
    MOV dword ptr [EAX + 0x10],0xffffffff ; 004b6565
    MOV EAX,dword ptr [ESP + 0x1814]    ; 004b656c
        ;   Label: LAB_004b656c
    ADD EAX,EDI                         ; 004b6573
    MOV dword ptr [ESP + 0x181c],EAX    ; 004b6575
    CMP ESI,dword ptr [EBP + 0x4]       ; 004b657c
    JGE 0x004b6615                      ; 004b657f
        ;   XREF to: 004b6615 (CONDITIONAL_JUMP)  ; LAB_004b6615
    MOV EAX,dword ptr [ESP + 0x1820]    ; 004b6585
    PUSH EAX                            ; 004b658c
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004b658d
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    MOV EBX,EAX                         ; 004b6592
    ADD ESP,0x4                         ; 004b6594
    CMP EAX,-0x1                        ; 004b6597
    JZ 0x004b65e3                       ; 004b659a
        ;   XREF to: 004b65e3 (CONDITIONAL_JUMP)  ; LAB_004b65e3
    AND EAX,0xff                        ; 004b65a0
    PUSH EAX                            ; 004b65a5
    MOV EDX,dword ptr [EBP + 0x10]      ; 004b65a6
    PUSH EDX                            ; 004b65a9
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0 ; 004b65aa
        ;   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 004b65af
    MOV ECX,dword ptr [ESP + 0x1818]    ; 004b65b2
    PUSH ECX                            ; 004b65b9
    PUSH EBX                            ; 004b65ba
    MOV dword ptr [EBP + 0x10],EAX      ; 004b65bb
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 004b65be
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 004b65c3
    CMP EAX,EBX                         ; 004b65c6
    JNZ 0x004b65fc                      ; 004b65c8
        ;   XREF to: 004b65fc (CONDITIONAL_JUMP)  ; LAB_004b65fc
    INC ESI                             ; 004b65ce
    JMP 0x004b656c                      ; 004b65cf
        ;   XREF to: 004b656c (UNCONDITIONAL_JUMP)  ; LAB_004b656c
    PUSH EBP                            ; 004b65d1
        ;   Label: LAB_004b65d1
    PUSH 0x627981                       ; 004b65d2 | = "Can't open %s"
    MOV EDX,dword ptr [0x00678a60]      ; 004b65d7 | g_CEditorToolsPtr
    PUSH EDX                            ; 004b65dd | g_CEditorToolsInstance
    JMP 0x004b629d                      ; 004b65de
        ;   XREF to: 004b629d (UNCONDITIONAL_JUMP)  ; LAB_004b629d
    MOV ESI,dword ptr [ESP + 0x181c]    ; 004b65e3
        ;   Label: LAB_004b65e3
    PUSH ESI                            ; 004b65ea
    PUSH 0x62798f                       ; 004b65eb | = "Error reading %s"
    MOV EDI,dword ptr [0x00678a60]      ; 004b65f0 | g_CEditorToolsPtr
    PUSH EDI                            ; 004b65f6 | g_CEditorToolsInstance
    JMP 0x004b629d                      ; 004b65f7
        ;   XREF to: 004b629d (UNCONDITIONAL_JUMP)  ; LAB_004b629d
    LEA EAX,[ESP + 0x15a8]              ; 004b65fc
        ;   Label: LAB_004b65fc
    PUSH EAX                            ; 004b6603
    PUSH 0x6279a0                       ; 004b6604 | = "Error writing %s"
    MOV EBX,dword ptr [0x00678a60]      ; 004b6609 | g_CEditorToolsPtr
    PUSH EBX                            ; 004b660f | g_CEditorToolsInstance
    JMP 0x004b629d                      ; 004b6610
        ;   XREF to: 004b629d (UNCONDITIONAL_JUMP)  ; LAB_004b629d
    PUSH 0x88e                          ; 004b6615
        ;   Label: LAB_004b6615
    PUSH 0x6279b1                       ; 004b661a | = "..\\engine\\fileio.cpp"
    MOV EDX,dword ptr [ESP + 0x1828]    ; 004b661f
    PUSH EDX                            ; 004b6626
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b6627
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b662c
    MOV EDI,0x2d129b8                   ; 004b662f | g_CurrentFilenameBuffer
    MOV ESI,dword ptr [ESP + 0x181c]    ; 004b6634
    PUSH EDI                            ; 004b663b | g_CurrentFilenameBuffer
    MOV AL,byte ptr [ESI]               ; 004b663c
        ;   Label: LAB_004b663c
    MOV byte ptr [EDI],AL               ; 004b663e | g_CurrentFilenameBuffer | g_CurrentFilenameBuffer+2
    CMP AL,0x0                          ; 004b6640
    JZ 0x004b6654                       ; 004b6642
        ;   XREF to: 004b6654 (CONDITIONAL_JUMP)  ; LAB_004b6654
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6644
    ADD ESI,0x2                         ; 004b6647
    MOV byte ptr [EDI + 0x1],AL         ; 004b664a | g_CurrentFilenameBuffer+1 | g_CurrentFilenameBuffer+3
    ADD EDI,0x2                         ; 004b664d
    CMP AL,0x0                          ; 004b6650
    JNZ 0x004b663c                      ; 004b6652
        ;   XREF to: 004b663c (CONDITIONAL_JUMP)  ; LAB_004b663c
    POP EDI                             ; 004b6654
        ;   Label: LAB_004b6654
    MOV EAX,dword ptr [EBP + 0xc]       ; 004b6655
    MOV ECX,dword ptr [ESP + 0x181c]    ; 004b6658
    MOV [0x02d12ac0],EAX                ; 004b665f | g_CurrentFileOffset
    MOV EAX,dword ptr [EBP + 0x4]       ; 004b6664
    PUSH ECX                            ; 004b6667
    MOV [0x02d12ac4],EAX                ; 004b6668 | g_CurrentFileCompressedSize
    LEA EAX,[ESP + 0x4]                 ; 004b666d
    PUSH EAX                            ; 004b6671
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140 ; 004b6672
        ;   XREF to: 00550140 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140(CPodFile * this_ptr, char * filename)
    MOV EBX,EAX                         ; 004b6677
    MOV EAX,[0x02d12d30]                ; 004b6679 | g_AuditRecordCount
    INC EAX                             ; 004b667e
    IMUL EDX,EAX,0x138                  ; 004b667f
    ADD ESP,0x8                         ; 004b6685
    TEST EBX,EBX                        ; 004b6688
    JL 0x004b67a3                       ; 004b668a
        ;   XREF to: 004b67a3 (CONDITIONAL_JUMP)  ; LAB_004b67a3
    IMUL EBX,EBX,0x14                   ; 004b6690
    ADD EBX,dword ptr [ESP + 0x414]     ; 004b6693
    MOV ECX,dword ptr [EBP + 0x10]      ; 004b669a
    CMP ECX,dword ptr [EBX + 0x10]      ; 004b669d
    JZ 0x004b6892                       ; 004b66a0
        ;   XREF to: 004b6892 (CONDITIONAL_JUMP)  ; LAB_004b6892
    MOV EBP,0x2                         ; 004b66a6
    LEA EDI,[ESP + 0x10c8]              ; 004b66ab
    PUSH 0x7a1                          ; 004b66b2
    MOV ESI,0x2d12990                   ; 004b66b7 | g_WorkingDirectoryPath
    MOV [0x02d12d30],EAX                ; 004b66bc | g_AuditRecordCount
    MOV ECX,dword ptr [EBX + 0xc]       ; 004b66c1
    PUSH 0x6276c0                       ; 004b66c4 | = "..\\engine\\fileio.cpp"
    MOV EAX,[0x02d12d34]                ; 004b66c9 | g_AuditRecordsArray
    MOV dword ptr [0x02d12ab8],ECX      ; 004b66ce | g_CurrentFileTimestamp
    MOV ECX,dword ptr [EBX + 0x4]       ; 004b66d4
    PUSH EDX                            ; 004b66d7
    MOV dword ptr [0x02d12abc],ECX      ; 004b66d8 | g_CurrentFileSize
    MOV ECX,0x4e                        ; 004b66de
    MOV dword ptr [0x02d129b4],EBP      ; 004b66e3 | g_AuditOperationType
    PUSH EAX                            ; 004b66e9
    MOVSD.REP ES:EDI,ESI                ; 004b66ea | g_WorkingDirectoryPath | g_WorkingDirectoryPath+4
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004b66ec
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004b66f1
    MOV [0x02d12d34],EAX                ; 004b66f4 | g_AuditRecordsArray
    TEST EAX,EAX                        ; 004b66f9
    JNZ 0x004b6720                      ; 004b66fb
        ;   XREF to: 004b6720 (CONDITIONAL_JUMP)  ; LAB_004b6720
    MOV EDX,0x6276d5                    ; 004b66fd | = "..\\engine\\fileio.cpp"
    MOV ECX,0x7a2                       ; 004b6702
    PUSH 0x6276ea                       ; 004b6707 | = "Out of memory for pod audit list."
    MOV dword ptr [0x02f0ca48],EDX      ; 004b670c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004b6712 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b6718
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b671d
    MOV EAX,[0x02d12d30]                ; 004b6720 | g_AuditRecordCount
        ;   Label: LAB_004b6720
    DEC EAX                             ; 004b6725
    IMUL EAX,EAX,0x138                  ; 004b6726
    PUSH 0x100                          ; 004b672c
    MOV EDX,dword ptr [0x02d12d34]      ; 004b6731 | g_AuditRecordsArray
    MOV ECX,0x4e                        ; 004b6737
    ADD EAX,EDX                         ; 004b673c
    PUSH 0x0                            ; 004b673e
    MOV EDI,EAX                         ; 004b6740
    ADD EAX,0x28                        ; 004b6742
    LEA ESI,[ESP + 0x10d0]              ; 004b6745
    PUSH EAX                            ; 004b674c
    MOVSD.REP ES:EDI,ESI                ; 004b674d
    CALL crt_memory.c_memset_FUN_005fde40 ; 004b674f
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,[0x02d12d30]                ; 004b6754 | g_AuditRecordCount
    DEC EAX                             ; 004b6759
    IMUL EAX,EAX,0x138                  ; 004b675a
    LEA ESI,[ESP + 0x10fc]              ; 004b6760
    ADD ESP,0xc                         ; 004b6767
    MOV EDX,dword ptr [0x02d12d34]      ; 004b676a | g_AuditRecordsArray
    MOV EBX,dword ptr [ESP + 0x17f0]    ; 004b6770
    ADD EAX,EDX                         ; 004b6777
    INC EBX                             ; 004b6779
    LEA EDI,[EAX + 0x28]                ; 004b677a
    MOV dword ptr [ESP + 0x17f0],EBX    ; 004b677d
    PUSH EDI                            ; 004b6784
    MOV AL,byte ptr [ESI]               ; 004b6785
        ;   Label: LAB_004b6785
    MOV byte ptr [EDI],AL               ; 004b6787
    CMP AL,0x0                          ; 004b6789
    JZ 0x004b679d                       ; 004b678b
        ;   XREF to: 004b679d (CONDITIONAL_JUMP)  ; LAB_004b679d
    MOV AL,byte ptr [ESI + 0x1]         ; 004b678d
    ADD ESI,0x2                         ; 004b6790
    MOV byte ptr [EDI + 0x1],AL         ; 004b6793
    ADD EDI,0x2                         ; 004b6796
    CMP AL,0x0                          ; 004b6799
    JNZ 0x004b6785                      ; 004b679b
        ;   XREF to: 004b6785 (CONDITIONAL_JUMP)  ; LAB_004b6785
    POP EDI                             ; 004b679d
        ;   Label: LAB_004b679d
    JMP 0x004b6892                      ; 004b679e
        ;   XREF to: 004b6892 (UNCONDITIONAL_JUMP)  ; LAB_004b6892
    MOV ECX,0x4e                        ; 004b67a3
        ;   Label: LAB_004b67a3
    LEA EDI,[ESP + 0x1200]              ; 004b67a8
    PUSH 0x7a1                          ; 004b67af
    MOV [0x02d12d30],EAX                ; 004b67b4 | g_AuditRecordCount
    XOR ESI,ESI                         ; 004b67b9
    PUSH 0x6276c0                       ; 004b67bb | = "..\\engine\\fileio.cpp"
    MOV EAX,[0x02d12d34]                ; 004b67c0 | g_AuditRecordsArray
    MOV dword ptr [0x02d129b4],ESI      ; 004b67c5 | g_AuditOperationType
    MOV dword ptr [0x02d12ab8],ESI      ; 004b67cb | g_CurrentFileTimestamp
    PUSH EDX                            ; 004b67d1
    MOV dword ptr [0x02d12abc],ESI      ; 004b67d2 | g_CurrentFileSize
    MOV ESI,0x2d12990                   ; 004b67d8 | g_WorkingDirectoryPath
    PUSH EAX                            ; 004b67dd
    MOVSD.REP ES:EDI,ESI                ; 004b67de | g_WorkingDirectoryPath | g_WorkingDirectoryPath+4
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004b67e0
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004b67e5
    MOV [0x02d12d34],EAX                ; 004b67e8 | g_AuditRecordsArray
    TEST EAX,EAX                        ; 004b67ed
    JNZ 0x004b6814                      ; 004b67ef
        ;   XREF to: 004b6814 (CONDITIONAL_JUMP)  ; LAB_004b6814
    MOV EDX,0x6276d5                    ; 004b67f1 | = "..\\engine\\fileio.cpp"
    MOV ECX,0x7a2                       ; 004b67f6
    PUSH 0x6276ea                       ; 004b67fb | = "Out of memory for pod audit list."
    MOV dword ptr [0x02f0ca48],EDX      ; 004b6800 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004b6806 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b680c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b6811
    MOV EAX,[0x02d12d30]                ; 004b6814 | g_AuditRecordCount
        ;   Label: LAB_004b6814
    DEC EAX                             ; 004b6819
    IMUL EAX,EAX,0x138                  ; 004b681a
    PUSH 0x100                          ; 004b6820
    MOV EDX,dword ptr [0x02d12d34]      ; 004b6825 | g_AuditRecordsArray
    MOV ECX,0x4e                        ; 004b682b
    ADD EAX,EDX                         ; 004b6830
    PUSH 0x0                            ; 004b6832
    MOV EDI,EAX                         ; 004b6834
    ADD EAX,0x28                        ; 004b6836
    LEA ESI,[ESP + 0x1208]              ; 004b6839
    PUSH EAX                            ; 004b6840
    MOVSD.REP ES:EDI,ESI                ; 004b6841
    CALL crt_memory.c_memset_FUN_005fde40 ; 004b6843
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,[0x02d12d30]                ; 004b6848 | g_AuditRecordCount
    DEC EAX                             ; 004b684d
    IMUL EAX,EAX,0x138                  ; 004b684e
    LEA ESI,[ESP + 0x1234]              ; 004b6854
    ADD ESP,0xc                         ; 004b685b
    MOV EDX,dword ptr [0x02d12d34]      ; 004b685e | g_AuditRecordsArray
    MOV EBX,dword ptr [ESP + 0x17e8]    ; 004b6864
    ADD EAX,EDX                         ; 004b686b
    INC EBX                             ; 004b686d
    LEA EDI,[EAX + 0x28]                ; 004b686e
    MOV dword ptr [ESP + 0x17e8],EBX    ; 004b6871
    PUSH EDI                            ; 004b6878
    MOV AL,byte ptr [ESI]               ; 004b6879
        ;   Label: LAB_004b6879
    MOV byte ptr [EDI],AL               ; 004b687b
    CMP AL,0x0                          ; 004b687d
    JZ 0x004b6891                       ; 004b687f
        ;   XREF to: 004b6891 (CONDITIONAL_JUMP)  ; LAB_004b6891
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6881
    ADD ESI,0x2                         ; 004b6884
    MOV byte ptr [EDI + 0x1],AL         ; 004b6887
    ADD EDI,0x2                         ; 004b688a
    CMP AL,0x0                          ; 004b688d
    JNZ 0x004b6879                      ; 004b688f
        ;   XREF to: 004b6879 (CONDITIONAL_JUMP)  ; LAB_004b6879
    POP EDI                             ; 004b6891
        ;   Label: LAB_004b6891
    MOV EDI,dword ptr [ESP + 0x17dc]    ; 004b6892
        ;   Label: LAB_004b6892
    MOV EBP,dword ptr [ESP + 0x1810]    ; 004b6899
    MOV EAX,dword ptr [ESP + 0x1804]    ; 004b68a0
    MOV EDX,dword ptr [ESP + 0x183c]    ; 004b68a7
    ADD EDI,0x80                        ; 004b68ae
    ADD EBP,0x14                        ; 004b68b4
    INC EAX                             ; 004b68b7
    MOV ECX,dword ptr [EDX + 0x4]       ; 004b68b8
    MOV dword ptr [ESP + 0x17dc],EDI    ; 004b68bb
    MOV dword ptr [ESP + 0x1810],EBP    ; 004b68c2
    MOV dword ptr [ESP + 0x1804],EAX    ; 004b68c9
    CMP EAX,ECX                         ; 004b68d0
    JL 0x004b64b2                       ; 004b68d2
        ;   XREF to: 004b64b2 (CONDITIONAL_JUMP)  ; LAB_004b64b2
    MOV EBX,dword ptr [0x00678a60]      ; 004b68d8 | g_CEditorToolsInstance | g_CEditorToolsPtr
        ;   Label: LAB_004b68d8
    PUSH EBX                            ; 004b68de | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004b68df
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004b68e4
    MOV ESI,dword ptr [ESP + 0x1818]    ; 004b68e7
    PUSH ESI                            ; 004b68ee
    MOV EDI,dword ptr [0x02d12d30]      ; 004b68ef | g_AuditRecordCount
    PUSH EDI                            ; 004b68f5
    PUSH 0x138                          ; 004b68f6
    MOV EBP,dword ptr [0x02d12d34]      ; 004b68fb | g_AuditRecordsArray
    PUSH EBP                            ; 004b6901
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004b6902
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004b6907
    PUSH ESI                            ; 004b690a
    CALL crt_stdio.c_ftell_FUN_00601560 ; 004b690b
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    MOV DL,0x4f                         ; 004b6910
    MOV CL,0x32                         ; 004b6912
    ADD ESP,0x4                         ; 004b6914
    MOV EBX,EAX                         ; 004b6917
    MOV AH,0x50                         ; 004b6919
    MOV byte ptr [ESP + 0x1771],DL      ; 004b691b
    MOV byte ptr [ESP + 0x1773],CL      ; 004b6922
    MOV DH,0x44                         ; 004b6929
    MOV byte ptr [ESP + 0x1770],AH      ; 004b692b
    MOV EAX,dword ptr [ESP + 0x183c]    ; 004b6932
    MOV byte ptr [ESP + 0x1772],DH      ; 004b6939
    PUSH 0x0                            ; 004b6940
    MOV EAX,dword ptr [EAX + 0x4]       ; 004b6942
    PUSH 0x0                            ; 004b6945
    MOV dword ptr [ESP + 0x17d0],EAX    ; 004b6947
    MOV EAX,[0x02d12d30]                ; 004b694e | g_AuditRecordCount
    PUSH ESI                            ; 004b6953
    MOV dword ptr [ESP + 0x17d8],EAX    ; 004b6954
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 004b695b
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004b6960
    PUSH ESI                            ; 004b6963
    PUSH 0x1                            ; 004b6964
    PUSH 0x60                           ; 004b6966
    LEA EAX,[ESP + 0x177c]              ; 004b6968
    PUSH EAX                            ; 004b696f
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004b6970
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004b6975
    MOV EAX,dword ptr [ESP + 0x183c]    ; 004b6978
    PUSH ESI                            ; 004b697f
    MOV EDI,dword ptr [EAX + 0x4]       ; 004b6980
    PUSH EDI                            ; 004b6983
    PUSH 0x14                           ; 004b6984
    MOV EBP,dword ptr [ESP + 0x17ec]    ; 004b6986
    PUSH EBP                            ; 004b698d
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004b698e
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004b6993
    PUSH ESI                            ; 004b6996
    MOV EDX,dword ptr [ESP + 0x17f8]    ; 004b6997
    PUSH EDX                            ; 004b699e
    PUSH 0x1                            ; 004b699f
    MOV ECX,dword ptr [ESP + 0x17f0]    ; 004b69a1
    PUSH ECX                            ; 004b69a8
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004b69a9
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004b69ae
    PUSH 0x8c3                          ; 004b69b1
    PUSH 0x6279c6                       ; 004b69b6 | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004b69bb
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b69bc
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b69c1
    PUSH 0x8c8                          ; 004b69c4
    PUSH 0x6279db                       ; 004b69c9 | = "..\\engine\\fileio.cpp"
    PUSH EBP                            ; 004b69ce
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004b69cf
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004b69d4
    PUSH 0x8ca                          ; 004b69d7
    PUSH 0x6279f0                       ; 004b69dc | = "..\\engine\\fileio.cpp"
    MOV EBP,dword ptr [ESP + 0x17ec]    ; 004b69e1
    PUSH EBP                            ; 004b69e8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004b69e9
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    MOV EDX,dword ptr [0x02d12d34]      ; 004b69ee | g_AuditRecordsArray
    XOR EAX,EAX                         ; 004b69f4
    ADD ESP,0xc                         ; 004b69f6
    MOV [0x02d12d30],EAX                ; 004b69f9 | g_AuditRecordCount
    TEST EDX,EDX                        ; 004b69fe
    JZ 0x004b6a1d                       ; 004b6a00
        ;   XREF to: 004b6a1d (CONDITIONAL_JUMP)  ; LAB_004b6a1d
    PUSH 0x79a                          ; 004b6a02
    PUSH 0x6276ab                       ; 004b6a07 | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004b6a0c
    XOR ESI,ESI                         ; 004b6a0d
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004b6a0f
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004b6a14
    MOV dword ptr [0x02d12d34],ESI      ; 004b6a17 | g_AuditRecordsArray
    LEA EAX,[ESP + 0x15a8]              ; 004b6a1d
        ;   Label: LAB_004b6a1d
    PUSH EAX                            ; 004b6a24
    MOV EDI,dword ptr [0x00680cdc]      ; 004b6a25 | g_CDemonPodPtr
    PUSH EDI                            ; 004b6a2b | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 ; 004b6a2c
        ;   XREF to: 00551000 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000(CPod * this_ptr, char * pod_filename)
    MOV EBP,dword ptr [0x00680cdc]      ; 004b6a31 | g_CDemonPodPtr
    ADD ESP,0x8                         ; 004b6a37
    TEST EBP,EBP                        ; 004b6a3a
    JNZ 0x004b6b4e                      ; 004b6a3c
        ;   XREF to: 004b6b4e (CONDITIONAL_JUMP)  ; LAB_004b6b4e
    PUSH EBX                            ; 004b6a42
        ;   Label: LAB_004b6a42
    MOV ECX,dword ptr [ESP + 0x17f4]    ; 004b6a43
    PUSH ECX                            ; 004b6a4a
    MOV EBX,dword ptr [ESP + 0x17f4]    ; 004b6a4b
    MOV ESI,dword ptr [ESP + 0x17f0]    ; 004b6a52
    PUSH EBX                            ; 004b6a59
    MOV EAX,dword ptr [ESP + 0x180c]    ; 004b6a5a
    MOV EDI,dword ptr [ESP + 0x17e4]    ; 004b6a61
    PUSH ESI                            ; 004b6a68
    SUB EAX,EDI                         ; 004b6a69
    PUSH EAX                            ; 004b6a6b
    MOV EAX,dword ptr [ESP + 0x1850]    ; 004b6a6c
    MOV EBP,dword ptr [EAX + 0x4]       ; 004b6a73
    PUSH EBP                            ; 004b6a76
    LEA EAX,[ESP + 0x15c0]              ; 004b6a77
    PUSH EAX                            ; 004b6a7e
    PUSH 0x627a05                       ; 004b6a7f | = "Successfully built %s\n\n%d files tot..."
    LEA EAX,[ESP + 0xdb0]               ; 004b6a84
    PUSH EAX                            ; 004b6a8b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b6a8c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x24                        ; 004b6a91
    MOV ESI,dword ptr [ESP + 0x183c]    ; 004b6a94
    MOV EBX,dword ptr [ESP + 0x183c]    ; 004b6a9b
    XOR EDI,EDI                         ; 004b6aa2
    LEA EAX,[ESP + 0x7d4]               ; 004b6aa4
        ;   Label: LAB_004b6aa4
    PUSH EAX                            ; 004b6aab
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b6aac
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b6ab1
    PUSH 0x627a82                       ; 004b6ab4 | = "Catalog the pod"
    LEA EAX,[ESP + 0x7d8]               ; 004b6ab9
    PUSH EAX                            ; 004b6ac0
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b6ac1
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b6ac6
    PUSH 0x627a92                       ; 004b6ac9 | = "View audit trail"
    LEA EAX,[ESP + 0x7d8]               ; 004b6ace
    PUSH EAX                            ; 004b6ad5
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b6ad6
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b6adb
    PUSH 0x627aa3                       ; 004b6ade | = "Verify CRC"
    LEA EAX,[ESP + 0x7d8]               ; 004b6ae3
    PUSH EAX                            ; 004b6aea
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b6aeb
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b6af0
    PUSH 0x627aae                       ; 004b6af3 | = "OK"
    LEA EAX,[ESP + 0x7d8]               ; 004b6af8
    PUSH EAX                            ; 004b6aff
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b6b00
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b6b05
    PUSH EDI                            ; 004b6b08
    PUSH 0x3                            ; 004b6b09
    LEA EAX,[ESP + 0xd98]               ; 004b6b0b
    PUSH EAX                            ; 004b6b12
    LEA EAX,[ESP + 0x7e0]               ; 004b6b13
    PUSH EAX                            ; 004b6b1a
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b6b1b
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004b6b20
    TEST EAX,EAX                        ; 004b6b23
    JNZ 0x004b6b87                      ; 004b6b25
        ;   XREF to: 004b6b87 (CONDITIONAL_JUMP)  ; LAB_004b6b87
    LEA EAX,[ESP + 0x15a8]              ; 004b6b27
    PUSH EAX                            ; 004b6b2e
    PUSH ESI                            ; 004b6b2f
    CALL engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 ; 004b6b30
        ;   XREF to: 004b7460 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004b6b35
        ;   Label: LAB_004b6b35
    PUSH EDI                            ; 004b6b38
    LEA EAX,[ESP + 0x7d8]               ; 004b6b39
    PUSH EAX                            ; 004b6b40
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b6b41
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b6b46
    JMP 0x004b6aa4                      ; 004b6b49
        ;   XREF to: 004b6aa4 (UNCONDITIONAL_JUMP)  ; LAB_004b6aa4
    PUSH 0x62759a                       ; 004b6b4e | = "Remounting all pods..."
        ;   Label: LAB_004b6b4e
    MOV EAX,[0x00678a60]                ; 004b6b53 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 004b6b58 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b6b59
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b6b5e
    MOV EDX,dword ptr [0x00680cdc]      ; 004b6b61 | g_CDemonPodInstance | g_CDemonPodPtr
    PUSH EDX                            ; 004b6b67 | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80 ; 004b6b68
        ;   XREF to: 00550c80 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
    ADD ESP,0x4                         ; 004b6b6d
    MOV EAX,[0x00680cdc]                ; 004b6b70 | g_CDemonPodPtr
    PUSH EAX                            ; 004b6b75 | g_CDemonPodInstance
    MOV EDX,dword ptr [EAX + 0x194]     ; 004b6b76 | g_CDemonPodInstance.vtable
    CALL dword ptr [EDX + 0x4]          ; 004b6b7c
    ADD ESP,0x4                         ; 004b6b7f
    JMP 0x004b6a42                      ; 004b6b82
        ;   XREF to: 004b6a42 (UNCONDITIONAL_JUMP)  ; LAB_004b6a42
    CMP EAX,0x1                         ; 004b6b87
        ;   Label: LAB_004b6b87
    JNZ 0x004b6b9c                      ; 004b6b8a
        ;   XREF to: 004b6b9c (CONDITIONAL_JUMP)  ; LAB_004b6b9c
    LEA EAX,[ESP + 0x15a8]              ; 004b6b8c
    PUSH EAX                            ; 004b6b93
    PUSH EBX                            ; 004b6b94
    CALL engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 ; 004b6b95
        ;   XREF to: 004b7f50 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50(CFileManager * this_ptr, char * pod_filename)
    JMP 0x004b6b35                      ; 004b6b9a
        ;   XREF to: 004b6b35 (UNCONDITIONAL_JUMP)  ; LAB_004b6b35
    CMP EAX,0x2                         ; 004b6b9c
        ;   Label: LAB_004b6b9c
    JNZ 0x004b6bbb                      ; 004b6b9f
        ;   XREF to: 004b6bbb (CONDITIONAL_JUMP)  ; LAB_004b6bbb
    LEA EAX,[ESP + 0x15a8]              ; 004b6ba1
    PUSH EAX                            ; 004b6ba8
    MOV ECX,dword ptr [ESP + 0x1840]    ; 004b6ba9
    PUSH ECX                            ; 004b6bb0
    CALL engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90 ; 004b6bb1
        ;   XREF to: 004b7c90 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90(CFileManager * this_ptr, char * pod_filename)
    JMP 0x004b6b35                      ; 004b6bb6
        ;   XREF to: 004b6b35 (UNCONDITIONAL_JUMP)  ; LAB_004b6b35
    PUSH 0x0                            ; 004b6bbb
        ;   Label: LAB_004b6bbb
    LEA EAX,[ESP + 0x7d8]               ; 004b6bbd
    PUSH EAX                            ; 004b6bc4
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b6bc5
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b6bca
    PUSH 0x0                            ; 004b6bcd
    LEA EAX,[ESP + 0x430]               ; 004b6bcf
    PUSH EAX                            ; 004b6bd6
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b6bd7
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b6bdc
    PUSH 0x0                            ; 004b6bdf
    LEA EAX,[ESP + 0x4]                 ; 004b6be1
    PUSH EAX                            ; 004b6be5
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b6be6
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b6beb
    ADD ESP,0x1828                      ; 004b6bee
    POP EBP                             ; 004b6bf4
    POP EDI                             ; 004b6bf5
    POP ESI                             ; 004b6bf6
    POP EBX                             ; 004b6bf7
    RET                                 ; 004b6bf8

