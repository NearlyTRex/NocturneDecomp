; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40(CFileManager *this_ptr,char *pod_filename)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; Local Variables:
; undefined4       Stack[-0x504]:4  local_504
; undefined4       Stack[-0x500]:4  local_500
; undefined4       Stack[-0x4fc]:4  local_4fc
; undefined1       Stack[-0x154]:1  local_154
; undefined1       Stack[-0x153]:1  local_153
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
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
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be4af
;
; Referenced Globals:
;   TerminatedCString s_Enter_directory_containi_00628b75
;   TerminatedCString s_Scanning_pods_00628bb7
;   TerminatedCString s_pod_00628bc8
;   TerminatedCString s_No_POD_files_found_in_s_00628bce
;   TerminatedCString s_engine_fileio_cpp_00628be7
;   TerminatedCString s_engine_fileio_cpp_00628bfc
;   TerminatedCString s_Out_of_memory_00628c11
;   TerminatedCString s_Scanning_pods_00628c1f
;   TerminatedCString s_Can_t_mount_s_00628c30
;   TerminatedCString s_engine_fileio_cpp_00628c3f
;   TerminatedCString s_Finding_duplicates_00628c54
;   undefined4 DAT_00628c6a
;   TerminatedCString s_s_s_08X_00628c6b
;   TerminatedCString s_s_08X_00628c76
;   TerminatedCString s_engine_fileio_cpp_00628c7f
;   ... and 11 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_io.c_getcwd_wrapper_FUN_00608d20
;   crt_memory.c___vec_delete_FUN_005fe632
;   crt_memory.c___vec_new_FUN_00601272
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9f40
        ;   Label: engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
    PUSH ESI                            ; 004b9f41
    PUSH EDI                            ; 004b9f42
    PUSH EBP                            ; 004b9f43
    SUB ESP,0x4ec                       ; 004b9f44
    MOV EAX,dword ptr [ESP + 0x504]     ; 004b9f4a
    MOV ECX,0x41                        ; 004b9f51
    LEA EDI,[ESP + 0x3a8]               ; 004b9f56
    MOV ESI,0x67a050                    ; 004b9f5d | g_DirectoryBufferTemplate
    MOVSD.REP ES:EDI,ESI                ; 004b9f62 | g_DirectoryBufferTemplate | DAT_0067a054
    TEST EAX,EAX                        ; 004b9f64
    JZ 0x004b9fbd                       ; 004b9f66
        ;   XREF to: 004b9fbd (CONDITIONAL_JUMP)  ; LAB_004b9fbd
    LEA EDI,[ESP + 0x3a8]               ; 004b9f68
    MOV ESI,EAX                         ; 004b9f6f
    PUSH EDI                            ; 004b9f71
    MOV AL,byte ptr [ESI]               ; 004b9f72
        ;   Label: LAB_004b9f72
    MOV byte ptr [EDI],AL               ; 004b9f74
    CMP AL,0x0                          ; 004b9f76
    JZ 0x004b9f8a                       ; 004b9f78
        ;   XREF to: 004b9f8a (CONDITIONAL_JUMP)  ; LAB_004b9f8a
    MOV AL,byte ptr [ESI + 0x1]         ; 004b9f7a
    ADD ESI,0x2                         ; 004b9f7d
    MOV byte ptr [EDI + 0x1],AL         ; 004b9f80
    ADD EDI,0x2                         ; 004b9f83
    CMP AL,0x0                          ; 004b9f86
    JNZ 0x004b9f72                      ; 004b9f88
        ;   XREF to: 004b9f72 (CONDITIONAL_JUMP)  ; LAB_004b9f72
    POP EDI                             ; 004b9f8a
        ;   Label: LAB_004b9f8a
    PUSH 0x1                            ; 004b9f8b
        ;   Label: LAB_004b9f8b
    PUSH 0x104                          ; 004b9f8d
    LEA EAX,[ESP + 0x3b0]               ; 004b9f92
    PUSH EAX                            ; 004b9f99
    PUSH 0x628b75                       ; 004b9f9a | = "Enter directory containing PODS to cr..."
    MOV EDX,dword ptr [0x00678a60]      ; 004b9f9f | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004b9fa5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004b9fa6
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004b9fab
    TEST EAX,EAX                        ; 004b9fae
    JNZ 0x004b9fd4                      ; 004b9fb0
        ;   XREF to: 004b9fd4 (CONDITIONAL_JUMP)  ; LAB_004b9fd4
    ADD ESP,0x4ec                       ; 004b9fb2
    POP EBP                             ; 004b9fb8
    POP EDI                             ; 004b9fb9
    POP ESI                             ; 004b9fba
    POP EBX                             ; 004b9fbb
    RET                                 ; 004b9fbc
    PUSH 0x104                          ; 004b9fbd
        ;   Label: LAB_004b9fbd
    LEA EAX,[ESP + 0x3ac]               ; 004b9fc2
    PUSH EAX                            ; 004b9fc9
    CALL crt_io.c_getcwd_wrapper_FUN_00608d20 ; 004b9fca
        ;   XREF to: 0060128c (UNCONDITIONAL_CALL)  ; char * crt_io.c_getcwd_wrapper_FUN_00608d20(char * buffer, SIZE_T size)
    ADD ESP,0x8                         ; 004b9fcf
    JMP 0x004b9f8b                      ; 004b9fd2
        ;   XREF to: 004b9f8b (UNCONDITIONAL_JUMP)  ; LAB_004b9f8b
    PUSH 0x628bb7                       ; 004b9fd4 | = "Scanning pods..."
        ;   Label: LAB_004b9fd4
    MOV ECX,dword ptr [0x00678a60]      ; 004b9fd9 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004b9fdf | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b9fe0
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 004b9fe5
    LEA EAX,[ESP + 0x4ac]               ; 004b9fe8
    PUSH EAX                            ; 004b9fef
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004b9ff0
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004b9ff5
    PUSH 0x628bc8                       ; 004b9ff8 | = "*.pod"
    LEA EAX,[ESP + 0x3ac]               ; 004b9ffd
    PUSH EAX                            ; 004ba004
    LEA EAX,[ESP + 0x4b4]               ; 004ba005
    PUSH EAX                            ; 004ba00c
    CALL shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 ; 004ba00d
        ;   XREF to: 004a39e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0(CStrList * this_ptr, char * base_path, char * search_path)
    ADD ESP,0xc                         ; 004ba012
    MOV EBX,dword ptr [ESP + 0x4ac]     ; 004ba015
    CMP EBX,0x1                         ; 004ba01c
    JL 0x004ba2ef                       ; 004ba01f
        ;   XREF to: 004ba2ef (CONDITIONAL_JUMP)  ; LAB_004ba2ef
    PUSH 0x65d9b0                       ; 004ba025 | g_CPodFileTypeInfo
    MOV dword ptr [ESP + 0x4d8],EBX     ; 004ba02a
    PUSH EBX                            ; 004ba031
    IMUL EAX,EBX,0x42c                  ; 004ba032
    PUSH 0xe36                          ; 004ba038
    PUSH 0x628be7                       ; 004ba03d | = "..\\engine\\fileio.cpp"
    ADD EAX,0x4                         ; 004ba042
    PUSH EAX                            ; 004ba045
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 004ba046
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004ba04b
    PUSH EAX                            ; 004ba04e
    CALL crt_memory.c___vec_new_FUN_00601272 ; 004ba04f
        ;   XREF to: 00601272 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_new_FUN_00601272(void * array_memory, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ba054
    TEST EAX,EAX                        ; 004ba057
    MOV dword ptr [ESP + 0x4c0],EAX     ; 004ba059
    JNZ 0x004ba084                      ; 004ba060
        ;   XREF to: 004ba084 (CONDITIONAL_JUMP)  ; LAB_004ba084
    MOV EBP,0x628bfc                    ; 004ba062 | = "..\\engine\\fileio.cpp"
    MOV EAX,0xe37                       ; 004ba067
    PUSH 0x628c11                       ; 004ba06c | = "Out of memory"
    MOV dword ptr [0x02f0ca48],EBP      ; 004ba071 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004ba077 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ba07c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004ba081
    PUSH 0x628c1f                       ; 004ba084 | = "Scanning pods..."
        ;   Label: LAB_004ba084
    MOV EDX,dword ptr [0x00678a60]      ; 004ba089 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004ba08f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 004ba090
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 004ba095
    MOV ECX,dword ptr [ESP + 0x4d4]     ; 004ba098
    XOR EBX,EBX                         ; 004ba09f
    TEST ECX,ECX                        ; 004ba0a1
    JLE 0x004ba123                      ; 004ba0a3
        ;   XREF to: 004ba123 (CONDITIONAL_JUMP)  ; LAB_004ba123
    MOV ESI,dword ptr [ESP + 0x4c0]     ; 004ba0a9
    MOV EAX,dword ptr [ESP + 0x4d4]     ; 004ba0b0
        ;   Label: LAB_004ba0b0
    MOV dword ptr [ESP + 0x4e8],EAX     ; 004ba0b7
    FILD dword ptr [ESP + 0x4e8]        ; 004ba0be
    SUB ESP,0x4                         ; 004ba0c5
    MOV dword ptr [ESP + 0x4ec],EBX     ; 004ba0c8
    FSTP float ptr [ESP]                ; 004ba0cf
    FILD dword ptr [ESP + 0x4ec]        ; 004ba0d2
    SUB ESP,0x4                         ; 004ba0d9
    MOV EDI,dword ptr [0x00678a60]      ; 004ba0dc | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 004ba0e2
    PUSH EDI                            ; 004ba0e5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 004ba0e6
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 004ba0eb
    PUSH EBX                            ; 004ba0ee
    LEA EAX,[ESP + 0x4b0]               ; 004ba0ef
    PUSH EAX                            ; 004ba0f6
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004ba0f7
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004ba0fc
    PUSH EAX                            ; 004ba0ff
    PUSH ESI                            ; 004ba100
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004ba101
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004ba106
    TEST EAX,EAX                        ; 004ba109
    JZ 0x004ba328                       ; 004ba10b
        ;   XREF to: 004ba328 (CONDITIONAL_JUMP)  ; LAB_004ba328
    MOV EDI,dword ptr [ESP + 0x4d4]     ; 004ba111
    INC EBX                             ; 004ba118
    ADD ESI,0x42c                       ; 004ba119
    CMP EBX,EDI                         ; 004ba11f
    JL 0x004ba0b0                       ; 004ba121
        ;   XREF to: 004ba0b0 (CONDITIONAL_JUMP)  ; LAB_004ba0b0
    MOV EBP,dword ptr [0x00678a60]      ; 004ba123 | g_CEditorToolsPtr
        ;   Label: LAB_004ba123
    PUSH EBP                            ; 004ba129 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004ba12a
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004ba12f
    MOV EAX,ESP                         ; 004ba132
    PUSH EAX                            ; 004ba134
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004ba135
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004ba13a
    PUSH 0x628c54                       ; 004ba13d | = "Finding duplicates..."
    MOV EAX,[0x00678a60]                ; 004ba142 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 004ba147 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004ba148
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 004ba14d
    XOR EDX,EDX                         ; 004ba150
    MOV ECX,dword ptr [ESP + 0x4d4]     ; 004ba152
    MOV dword ptr [ESP + 0x4e0],EDX     ; 004ba159
    TEST ECX,ECX                        ; 004ba160
    JLE 0x004ba272                      ; 004ba162
        ;   XREF to: 004ba272 (CONDITIONAL_JUMP)  ; LAB_004ba272
    MOV EAX,dword ptr [ESP + 0x4c0]     ; 004ba168
    MOV dword ptr [ESP + 0x4bc],EAX     ; 004ba16f
    XOR EDI,EDI                         ; 004ba176
        ;   Label: LAB_004ba176
    MOV EAX,dword ptr [ESP + 0x4bc]     ; 004ba178
    MOV dword ptr [ESP + 0x4c4],EDI     ; 004ba17f
    MOV EBP,dword ptr [EAX + 0x410]     ; 004ba186
    MOV dword ptr [ESP + 0x4d8],EAX     ; 004ba18c
    TEST EBP,EBP                        ; 004ba193
    JLE 0x004ba240                      ; 004ba195
        ;   XREF to: 004ba240 (CONDITIONAL_JUMP)  ; LAB_004ba240
    ADD EAX,0x4                         ; 004ba19b
    MOV dword ptr [ESP + 0x4c8],EDI     ; 004ba19e
    MOV dword ptr [ESP + 0x4cc],EAX     ; 004ba1a5
    MOV EBP,dword ptr [ESP + 0x4d8]     ; 004ba1ac
        ;   Label: LAB_004ba1ac
    MOV ESI,dword ptr [ESP + 0x4c8]     ; 004ba1b3
    MOV EDI,0x1                         ; 004ba1ba
    MOV EBP,dword ptr [EBP + 0x414]     ; 004ba1bf
    MOV EAX,dword ptr [ESP + 0x4d4]     ; 004ba1c5
    ADD EBP,ESI                         ; 004ba1cc
    XOR EBX,EBX                         ; 004ba1ce
    MOV dword ptr [ESP + 0x4e4],EDI     ; 004ba1d0
    MOV EBP,dword ptr [EBP]             ; 004ba1d7
    TEST EAX,EAX                        ; 004ba1da
    JLE 0x004ba20b                      ; 004ba1dc
        ;   XREF to: 004ba20b (CONDITIONAL_JUMP)  ; LAB_004ba20b
    MOV dword ptr [ESP + 0x4d0],ESI     ; 004ba1de
    MOV ESI,dword ptr [ESP + 0x4c0]     ; 004ba1e5
    CMP EBX,dword ptr [ESP + 0x4e0]     ; 004ba1ec
        ;   Label: LAB_004ba1ec
    JNZ 0x004ba3ad                      ; 004ba1f3
        ;   XREF to: 004ba3ad (CONDITIONAL_JUMP)  ; LAB_004ba3ad
    MOV EDX,dword ptr [ESP + 0x4d4]     ; 004ba1f9
        ;   Label: LAB_004ba1f9
    INC EBX                             ; 004ba200
    ADD ESI,0x42c                       ; 004ba201
    CMP EBX,EDX                         ; 004ba207
    JL 0x004ba1ec                       ; 004ba209
        ;   XREF to: 004ba1ec (CONDITIONAL_JUMP)  ; LAB_004ba1ec
    MOV EAX,dword ptr [ESP + 0x4c8]     ; 004ba20b
        ;   Label: LAB_004ba20b
    MOV EDX,dword ptr [ESP + 0x4c4]     ; 004ba212
    ADD EAX,0x14                        ; 004ba219
    INC EDX                             ; 004ba21c
    MOV dword ptr [ESP + 0x4c8],EAX     ; 004ba21d
    MOV dword ptr [ESP + 0x4c4],EDX     ; 004ba224
    MOV EAX,EDX                         ; 004ba22b
    MOV EDX,dword ptr [ESP + 0x4d8]     ; 004ba22d
    CMP EAX,dword ptr [EDX + 0x410]     ; 004ba234
    JL 0x004ba1ac                       ; 004ba23a
        ;   XREF to: 004ba1ac (CONDITIONAL_JUMP)  ; LAB_004ba1ac
    MOV ESI,dword ptr [ESP + 0x4bc]     ; 004ba240
        ;   Label: LAB_004ba240
    MOV EDI,dword ptr [ESP + 0x4e0]     ; 004ba247
    MOV EBP,dword ptr [ESP + 0x4d4]     ; 004ba24e
    ADD ESI,0x42c                       ; 004ba255
    INC EDI                             ; 004ba25b
    MOV dword ptr [ESP + 0x4bc],ESI     ; 004ba25c
    MOV dword ptr [ESP + 0x4e0],EDI     ; 004ba263
    CMP EDI,EBP                         ; 004ba26a
    JL 0x004ba176                       ; 004ba26c
        ;   XREF to: 004ba176 (CONDITIONAL_JUMP)  ; LAB_004ba176
    MOV EAX,0x628c7f                    ; 004ba272 | = "..\\engine\\fileio.cpp"
        ;   Label: LAB_004ba272
    PUSH 0x65d9b0                       ; 004ba277 | g_CPodFileTypeInfo
    MOV ECX,dword ptr [ESP + 0x4c4]     ; 004ba27c
    MOV EDX,0xe63                       ; 004ba283
    PUSH ECX                            ; 004ba288
    MOV [0x0067d20c],EAX                ; 004ba289 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 004ba28e | g_CurrentDebugLine
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004ba294
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004ba299
    PUSH EAX                            ; 004ba29c
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004ba29d
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004ba2a2
    CMP dword ptr [ESP],0x1             ; 004ba2a5
    JGE 0x004ba48d                      ; 004ba2a9
        ;   XREF to: 004ba48d (CONDITIONAL_JUMP)  ; LAB_004ba48d
    PUSH 0x628c94                       ; 004ba2af | = "No duplicates found."
    MOV ESI,dword ptr [0x00678a60]      ; 004ba2b4 | g_CEditorToolsPtr
    PUSH ESI                            ; 004ba2ba | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 004ba2bb
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004ba2c0
    PUSH 0x0                            ; 004ba2c3
    LEA EAX,[ESP + 0x4]                 ; 004ba2c5
    PUSH EAX                            ; 004ba2c9
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004ba2ca
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ba2cf
    PUSH 0x0                            ; 004ba2d2
    LEA EAX,[ESP + 0x4b0]               ; 004ba2d4
    PUSH EAX                            ; 004ba2db
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004ba2dc
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ba2e1
    ADD ESP,0x4ec                       ; 004ba2e4
    POP EBP                             ; 004ba2ea
    POP EDI                             ; 004ba2eb
    POP ESI                             ; 004ba2ec
    POP EBX                             ; 004ba2ed
    RET                                 ; 004ba2ee
    LEA EAX,[ESP + 0x3a8]               ; 004ba2ef
        ;   Label: LAB_004ba2ef
    PUSH EAX                            ; 004ba2f6
    PUSH 0x628bce                       ; 004ba2f7 | = "No POD files found in %s"
    MOV EBX,dword ptr [0x00678a60]      ; 004ba2fc | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 004ba302 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004ba303
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004ba308
    PUSH 0x0                            ; 004ba30b
    LEA EAX,[ESP + 0x4b0]               ; 004ba30d
    PUSH EAX                            ; 004ba314
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004ba315
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ba31a
    ADD ESP,0x4ec                       ; 004ba31d
    POP EBP                             ; 004ba323
    POP EDI                             ; 004ba324
    POP ESI                             ; 004ba325
    POP EBX                             ; 004ba326
    RET                                 ; 004ba327
    MOV EBP,dword ptr [0x00678a60]      ; 004ba328 | g_CEditorToolsPtr
        ;   Label: LAB_004ba328
    PUSH EBP                            ; 004ba32e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004ba32f
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004ba334
    PUSH EBX                            ; 004ba337
    LEA EAX,[ESP + 0x4b0]               ; 004ba338
    PUSH EAX                            ; 004ba33f
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004ba340
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004ba345
    PUSH EAX                            ; 004ba348
    PUSH 0x628c30                       ; 004ba349 | = "Can't mount %s"
    MOV EAX,[0x00678a60]                ; 004ba34e | g_CEditorToolsPtr
    PUSH EAX                            ; 004ba353 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004ba354
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004ba359
    MOV EDX,0x628c3f                    ; 004ba35c | = "..\\engine\\fileio.cpp"
    PUSH 0x65d9b0                       ; 004ba361 | g_CPodFileTypeInfo
    MOV EBX,dword ptr [ESP + 0x4c4]     ; 004ba366
    MOV ECX,0xe3f                       ; 004ba36d
    PUSH EBX                            ; 004ba372
    MOV dword ptr [0x0067d20c],EDX      ; 004ba373 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 004ba379 | g_CurrentDebugLine
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004ba37f
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004ba384
    PUSH EAX                            ; 004ba387
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004ba388
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004ba38d
    PUSH 0x0                            ; 004ba390
    LEA EAX,[ESP + 0x4b0]               ; 004ba392
    PUSH EAX                            ; 004ba399
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004ba39a
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ba39f
    ADD ESP,0x4ec                       ; 004ba3a2
    POP EBP                             ; 004ba3a8
    POP EDI                             ; 004ba3a9
    POP ESI                             ; 004ba3aa
    POP EBX                             ; 004ba3ab
    RET                                 ; 004ba3ac
    PUSH EBP                            ; 004ba3ad
        ;   Label: LAB_004ba3ad
    PUSH ESI                            ; 004ba3ae
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140 ; 004ba3af
        ;   XREF to: 00550140 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ba3b4
    MOV EDI,ESI                         ; 004ba3b7
    MOV dword ptr [ESP + 0x4dc],EAX     ; 004ba3b9
    TEST EAX,EAX                        ; 004ba3c0
    JL 0x004ba1f9                       ; 004ba3c2
        ;   XREF to: 004ba1f9 (CONDITIONAL_JUMP)  ; LAB_004ba1f9
    CMP EBX,dword ptr [ESP + 0x4e0]     ; 004ba3c8
    JL 0x004ba20b                       ; 004ba3cf
        ;   XREF to: 004ba20b (CONDITIONAL_JUMP)  ; LAB_004ba20b
    CMP dword ptr [ESP + 0x4e4],0x0     ; 004ba3d5
    JZ 0x004ba447                       ; 004ba3dd
        ;   XREF to: 004ba447 (CONDITIONAL_JUMP)  ; LAB_004ba447
    PUSH 0x628c6a                       ; 004ba3df | DAT_00628c6a
    LEA EAX,[ESP + 0x4]                 ; 004ba3e4
    PUSH EAX                            ; 004ba3e8
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004ba3e9
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004ba3ee
    MOV EAX,dword ptr [ESP + 0x4d8]     ; 004ba3f1
    MOV ECX,dword ptr [ESP + 0x4d0]     ; 004ba3f8
    MOV EAX,dword ptr [EAX + 0x414]     ; 004ba3ff
    ADD EAX,ECX                         ; 004ba405
    MOV EDX,dword ptr [EAX + 0x10]      ; 004ba407
    PUSH EDX                            ; 004ba40a
    MOV ECX,dword ptr [ESP + 0x4d0]     ; 004ba40b
    PUSH ECX                            ; 004ba412
    PUSH EBP                            ; 004ba413
    PUSH 0x628c6b                       ; 004ba414 | = "%s\t%s\t%08X"
    LEA EAX,[ESP + 0x3b8]               ; 004ba419
    PUSH EAX                            ; 004ba420
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ba421
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 004ba426
    LEA EAX,[ESP + 0x3a8]               ; 004ba429
    PUSH EAX                            ; 004ba430
    LEA EAX,[ESP + 0x4]                 ; 004ba431
    PUSH EAX                            ; 004ba435
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004ba436
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004ba43b
    XOR EAX,EAX                         ; 004ba43e
    MOV dword ptr [ESP + 0x4e4],EAX     ; 004ba440
    IMUL EDX,dword ptr [ESP + 0x4dc],0x14 ; 004ba447
        ;   Label: LAB_004ba447
    MOV EAX,dword ptr [EDI + 0x414]     ; 004ba44f
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x10] ; 004ba455
    PUSH ECX                            ; 004ba459
    ADD EDI,0x4                         ; 004ba45a
    PUSH EDI                            ; 004ba45d
    PUSH 0x628c76                       ; 004ba45e | = "\t%s\t%08X"
    LEA EAX,[ESP + 0x3b4]               ; 004ba463
    PUSH EAX                            ; 004ba46a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004ba46b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ba470
    LEA EAX,[ESP + 0x3a8]               ; 004ba473
    PUSH EAX                            ; 004ba47a
    LEA EAX,[ESP + 0x4]                 ; 004ba47b
    PUSH EAX                            ; 004ba47f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004ba480
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004ba485
    JMP 0x004ba1f9                      ; 004ba488
        ;   XREF to: 004ba1f9 (UNCONDITIONAL_JUMP)  ; LAB_004ba1f9
    PUSH 0x1                            ; 004ba48d
        ;   Label: LAB_004ba48d
    LEA EAX,[ESP + 0x4]                 ; 004ba48f
    PUSH EAX                            ; 004ba493
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10 ; 004ba494
        ;   XREF to: 004a3e10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList * this_ptr, int result_value)
    ADD ESP,0x8                         ; 004ba499
    PUSH 0x0                            ; 004ba49c
    LEA EAX,[ESP + 0x4]                 ; 004ba49e
    PUSH EAX                            ; 004ba4a2
    CALL shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90 ; 004ba4a3
        ;   XREF to: 004a3d90 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90(CPickList * this_ptr, char * text)
    ADD ESP,0x8                         ; 004ba4a8
    PUSH 0x0                            ; 004ba4ab
    PUSH -0x1                           ; 004ba4ad
    PUSH 0x628ca9                       ; 004ba4af | = "List of duplicates"
    LEA EAX,[ESP + 0xc]                 ; 004ba4b4
    PUSH EAX                            ; 004ba4b8
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004ba4b9
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004ba4be
    PUSH 0x0                            ; 004ba4c1
    LEA EAX,[ESP + 0x4]                 ; 004ba4c3
    PUSH EAX                            ; 004ba4c7
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004ba4c8
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ba4cd
    PUSH 0x0                            ; 004ba4d0
    LEA EAX,[ESP + 0x4b0]               ; 004ba4d2
    PUSH EAX                            ; 004ba4d9
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004ba4da
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ba4df
    ADD ESP,0x4ec                       ; 004ba4e2
    POP EBP                             ; 004ba4e8
    POP EDI                             ; 004ba4e9
    POP ESI                             ; 004ba4ea
    POP EBX                             ; 004ba4eb
    RET                                 ; 004ba4ec

