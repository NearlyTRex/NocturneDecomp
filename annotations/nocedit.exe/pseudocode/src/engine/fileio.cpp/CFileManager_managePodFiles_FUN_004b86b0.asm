; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_managePodFiles_FUN_004b86b0(CFileManager *this_ptr,char *pod_directory_path)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_directory_path
; Local Variables:
; undefined        Stack[-0x2338]:1  local_2338
; undefined1       Stack[-0x2337]:1  local_2337
; undefined        Stack[-0x1b38]:1  local_1b38
; undefined4       Stack[-0x1728]:4  local_1728
; undefined4       Stack[-0x1724]:4  local_1724
; undefined4       Stack[-0x170c]:4  local_170c
; undefined        Stack[-0x1364]:1  local_1364
; undefined        Stack[-0xfbc]:1  local_fbc
; undefined1       Stack[-0xfbb]:1  local_fbb
; undefined4       Stack[-0xdb8]:4  local_db8
; undefined4       Stack[-0xdb0]:4  local_db0
; undefined        Stack[-0xda8]:1  local_da8
; undefined1       Stack[-0xda7]:1  local_da7
; undefined4       Stack[-0xba4]:4  local_ba4
; undefined4       Stack[-0xb9c]:4  local_b9c
; undefined        Stack[-0xb94]:1  local_b94
; undefined1       Stack[-0xb93]:1  local_b93
; undefined4       Stack[-0x990]:4  local_990
; undefined4       Stack[-0x988]:4  local_988
; undefined        Stack[-0x980]:1  local_980
; undefined        Stack[-0x78c]:1  local_78c
; undefined        Stack[-0x598]:1  local_598
; undefined1       Stack[-0x597]:1  local_597
; undefined        Stack[-0x494]:1  local_494
; undefined        Stack[-0x394]:1  local_394
; undefined        Stack[-0x294]:1  local_294
; undefined        Stack[-0x194]:1  local_194
; undefined1       Stack[-0x193]:1  local_193
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   void* switchdataD_004b868c = 004b97f9
;   SLEEP_FUNC* g_SleepFunc = 00212228
;   TerminatedCString s_engine_fileio_cpp_0062604b
;   TerminatedCString s_engine_fileio_cpp_00626129
;   TerminatedCString s_You_currently_have_s_che_00626502
;   TerminatedCString s_A_writable_copy_of_s_exi_0062654c
;   TerminatedCString s_WARNING_Error_setting_da_00626577
;   TerminatedCString s_Enter_path_to_update_POD_006283fa
;   TerminatedCString s_Scanning_pods_00628419
;   TerminatedCString s_pod_0062842a
;   TerminatedCString s_No_POD_files_found_in_s_00628430
;   TerminatedCString s_Skip_00628449
;   TerminatedCString s_Copy_0062844e
;   TerminatedCString s_Copy_Mount_00628453
;   TerminatedCString s_Copy_Extract_00628460
;   ... and 94 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_errno.c__errno_FUN_00601450
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_remove_FUN_005ff9d0
;   crt_stdio.c_setvbuf_FUN_00601490
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_dosio.c_copyFileTimestamp_FUN_00481910
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   engine_dosio.c_getFileSizeWithFinder_FUN_00481960
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_setFileAttributes_FUN_004819f0
;   engine_dosio.c_splitPath_FUN_00481f20
;   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
;   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
;   ... and 36 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b86b0
        ;   Label: engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0
    PUSH ESI                            ; 004b86b1
    PUSH EDI                            ; 004b86b2
    PUSH EBP                            ; 004b86b3
    SUB ESP,0x2328                      ; 004b86b4
    MOV EBX,dword ptr [ESP + 0x2340]    ; 004b86ba
    XOR EDX,EDX                         ; 004b86c1
    MOV EAX,dword ptr [ESP + 0x233c]    ; 004b86c3
    MOV dword ptr [ESP + 0x22dc],EDX    ; 004b86ca
    MOV dword ptr [ESP + 0x22e0],EDX    ; 004b86d1
    MOV dword ptr [ESP + 0x22e4],EDX    ; 004b86d8
    PUSH EAX                            ; 004b86df
    MOV dword ptr [ESP + 0x22ec],EDX    ; 004b86e0
    MOV dword ptr [ESP + 0x22f0],EDX    ; 004b86e7
    CALL engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 ; 004b86ee
        ;   XREF to: 004bccf0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 004b86f3
    TEST EAX,EAX                        ; 004b86f6
    JZ 0x004b875b                       ; 004b86f8
        ;   XREF to: 004b875b (CONDITIONAL_JUMP)  ; LAB_004b875b
    MOV ECX,0x41                        ; 004b86fa
    LEA EDI,[ESP + 0x1da0]              ; 004b86ff
    MOV ESI,0x679f48                    ; 004b8706 | g_DefaultPodDirectoryPath
    MOVSD.REP ES:EDI,ESI                ; 004b870b | g_DefaultPodDirectoryPath | g_DefaultPodDirectoryPath+4
    TEST EBX,EBX                        ; 004b870d
    JZ 0x004b8734                       ; 004b870f
        ;   XREF to: 004b8734 (CONDITIONAL_JUMP)  ; LAB_004b8734
    LEA EDI,[ESP + 0x1da0]              ; 004b8711
    MOV ESI,EBX                         ; 004b8718
    PUSH EDI                            ; 004b871a
    MOV AL,byte ptr [ESI]               ; 004b871b
        ;   Label: LAB_004b871b
    MOV byte ptr [EDI],AL               ; 004b871d
    CMP AL,0x0                          ; 004b871f
    JZ 0x004b8733                       ; 004b8721
        ;   XREF to: 004b8733 (CONDITIONAL_JUMP)  ; LAB_004b8733
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8723
    ADD ESI,0x2                         ; 004b8726
    MOV byte ptr [EDI + 0x1],AL         ; 004b8729
    ADD EDI,0x2                         ; 004b872c
    CMP AL,0x0                          ; 004b872f
    JNZ 0x004b871b                      ; 004b8731
        ;   XREF to: 004b871b (CONDITIONAL_JUMP)  ; LAB_004b871b
    POP EDI                             ; 004b8733
        ;   Label: LAB_004b8733
    PUSH 0x1                            ; 004b8734
        ;   Label: LAB_004b8734
    PUSH 0x104                          ; 004b8736
    LEA EAX,[ESP + 0x1da8]              ; 004b873b
    PUSH EAX                            ; 004b8742
    PUSH 0x6283fa                       ; 004b8743 | = "Enter path to update PODs from"
    MOV EDX,dword ptr [0x00678a60]      ; 004b8748 | g_CEditorToolsPtr
    PUSH EDX                            ; 004b874e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004b874f
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004b8754
    TEST EAX,EAX                        ; 004b8757
    JNZ 0x004b8766                      ; 004b8759
        ;   XREF to: 004b8766 (CONDITIONAL_JUMP)  ; LAB_004b8766
    ADD ESP,0x2328                      ; 004b875b
        ;   Label: LAB_004b875b
    POP EBP                             ; 004b8761
    POP EDI                             ; 004b8762
    POP ESI                             ; 004b8763
    POP EBX                             ; 004b8764
    RET                                 ; 004b8765
    PUSH 0x628419                       ; 004b8766 | = "Scanning pods..."
        ;   Label: LAB_004b8766
    MOV ECX,dword ptr [0x00678a60]      ; 004b876b | g_CEditorToolsPtr
    PUSH ECX                            ; 004b8771 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b8772
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    MOV AH,byte ptr [0x02d12ac8]        ; 004b8777 | g_VersionControlDirectory
    ADD ESP,0x8                         ; 004b877d
    TEST AH,AH                          ; 004b8780
    JZ 0x004b878d                       ; 004b8782
        ;   XREF to: 004b878d (CONDITIONAL_JUMP)  ; LAB_004b878d
    CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 ; 004b8784
        ;   XREF to: 004b1c00 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_establishUserIdentity_FUN_004b1c00()
    TEST EAX,EAX                        ; 004b8789
    JZ 0x004b875b                       ; 004b878b
        ;   XREF to: 004b875b (CONDITIONAL_JUMP)  ; LAB_004b875b
    LEA EAX,[ESP + 0x22a4]              ; 004b878d
        ;   Label: LAB_004b878d
    PUSH EAX                            ; 004b8794
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004b8795
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004b879a
    PUSH 0x62842a                       ; 004b879d | = "*.pod"
    LEA EAX,[ESP + 0x1da4]              ; 004b87a2
    PUSH EAX                            ; 004b87a9
    LEA EAX,[ESP + 0x22ac]              ; 004b87aa
    PUSH EAX                            ; 004b87b1
    CALL shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 ; 004b87b2
        ;   XREF to: 004a39e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0(CStrList * this_ptr, char * base_path, char * search_path)
    ADD ESP,0xc                         ; 004b87b7
    CMP dword ptr [ESP + 0x22a4],0x1    ; 004b87ba
    JL 0x004b907b                       ; 004b87c2
        ;   XREF to: 004b907b (CONDITIONAL_JUMP)  ; LAB_004b907b
    LEA EAX,[ESP + 0x22b4]              ; 004b87c8
    PUSH EAX                            ; 004b87cf
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004b87d0
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004b87d5
    LEA EAX,[ESP + 0x22b4]              ; 004b87d8
    PUSH EAX                            ; 004b87df
    MOV ESI,dword ptr [ESP + 0x2340]    ; 004b87e0
    PUSH ESI                            ; 004b87e7
    CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 ; 004b87e8
        ;   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager * this_ptr, CStrList * pod_list)
    ADD ESP,0x8                         ; 004b87ed
    MOV EAX,dword ptr [ESP + 0x22a4]    ; 004b87f0
    MOV dword ptr [ESP + 0x22f0],EAX    ; 004b87f7
    SHL EAX,0x2                         ; 004b87fe
    MOV EBX,EAX                         ; 004b8801
    SHL EAX,0x3                         ; 004b8803
    SUB EAX,EBX                         ; 004b8806
    PUSH 0xc0e                          ; 004b8808
    MOV EBX,EAX                         ; 004b880d
    SHL EAX,0x5                         ; 004b880f
    PUSH 0x62848a                       ; 004b8812 | = "..\\engine\\fileio.cpp"
    ADD EAX,EBX                         ; 004b8817
    PUSH EAX                            ; 004b8819
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004b881a
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004b881f
    MOV dword ptr [ESP + 0x22f4],EAX    ; 004b8822
    TEST EAX,EAX                        ; 004b8829
    JNZ 0x004b8850                      ; 004b882b
        ;   XREF to: 004b8850 (CONDITIONAL_JUMP)  ; LAB_004b8850
    MOV EDI,0x62849f                    ; 004b882d | = "..\\engine\\fileio.cpp"
    MOV EBP,0xc0f                       ; 004b8832
    PUSH 0x6284b4                       ; 004b8837 | = "Out of memory"
    MOV dword ptr [0x02f0ca48],EDI      ; 004b883c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004b8842 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b8848
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b884d
    XOR EAX,EAX                         ; 004b8850
        ;   Label: LAB_004b8850
    MOV dword ptr [ESP + 0x22c4],EAX    ; 004b8852
    MOV dword ptr [ESP + 0x22c8],EAX    ; 004b8859
    LEA EAX,[ESP + 0x22c4]              ; 004b8860
    PUSH EAX                            ; 004b8867
    CALL engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 ; 004b8868
        ;   XREF to: 004b2890 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b886d
    PUSH 0x6284c2                       ; 004b8870 | = "Scanning pods"
    MOV ECX,dword ptr [0x00678a60]      ; 004b8875 | g_CEditorToolsPtr
    PUSH ECX                            ; 004b887b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 004b887c
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 004b8881
    XOR EBX,EBX                         ; 004b8884
    MOV ESI,dword ptr [ESP + 0x22f0]    ; 004b8886
    MOV dword ptr [ESP + 0x22d4],EBX    ; 004b888d
    TEST ESI,ESI                        ; 004b8894
    JLE 0x004b8c7a                      ; 004b8896
        ;   XREF to: 004b8c7a (CONDITIONAL_JUMP)  ; LAB_004b8c7a
    MOV EAX,dword ptr [ESP + 0x22f4]    ; 004b889c
    ADD EAX,0x100                       ; 004b88a3
    MOV dword ptr [ESP + 0x2304],EAX    ; 004b88a8
    MOV EAX,dword ptr [ESP + 0x22f4]    ; 004b88af
    ADD EAX,0x204                       ; 004b88b6
    MOV dword ptr [ESP + 0x2308],EAX    ; 004b88bb
    MOV EAX,dword ptr [ESP + 0x22f0]    ; 004b88c2
        ;   Label: LAB_004b88c2
    MOV dword ptr [ESP + 0x2320],EAX    ; 004b88c9
    FILD dword ptr [ESP + 0x2320]       ; 004b88d0
    SUB ESP,0x4                         ; 004b88d7
    MOV EAX,dword ptr [ESP + 0x22d8]    ; 004b88da
    MOV dword ptr [ESP + 0x2324],EAX    ; 004b88e1
    FSTP float ptr [ESP]                ; 004b88e8
    FILD dword ptr [ESP + 0x2324]       ; 004b88eb
    SUB ESP,0x4                         ; 004b88f2
    MOV EBP,dword ptr [0x00678a60]      ; 004b88f5 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 004b88fb
    PUSH EBP                            ; 004b88fe | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 004b88ff
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float current_progress, float total_progress)
    ADD ESP,0xc                         ; 004b8904
    MOV EAX,dword ptr [ESP + 0x22d4]    ; 004b8907
    IMUL EBX,EAX,0x39c                  ; 004b890e
    PUSH EAX                            ; 004b8914
    LEA EAX,[ESP + 0x22a8]              ; 004b8915
    MOV EDX,dword ptr [ESP + 0x22f8]    ; 004b891c
    PUSH EAX                            ; 004b8923
    ADD EBX,EDX                         ; 004b8924
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b8926
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004b892b
    MOV ESI,EAX                         ; 004b892e
    MOV EDI,dword ptr [ESP + 0x2308]    ; 004b8930
    PUSH EDI                            ; 004b8937
    MOV AL,byte ptr [ESI]               ; 004b8938
        ;   Label: LAB_004b8938
    MOV byte ptr [EDI],AL               ; 004b893a
    CMP AL,0x0                          ; 004b893c
    JZ 0x004b8950                       ; 004b893e
        ;   XREF to: 004b8950 (CONDITIONAL_JUMP)  ; LAB_004b8950
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8940
    ADD ESI,0x2                         ; 004b8943
    MOV byte ptr [EDI + 0x1],AL         ; 004b8946
    ADD EDI,0x2                         ; 004b8949
    CMP AL,0x0                          ; 004b894c
    JNZ 0x004b8938                      ; 004b894e
        ;   XREF to: 004b8938 (CONDITIONAL_JUMP)  ; LAB_004b8938
    POP EDI                             ; 004b8950
        ;   Label: LAB_004b8950
    PUSH 0x0                            ; 004b8951
    PUSH EBX                            ; 004b8953
    PUSH 0x0                            ; 004b8954
    PUSH 0x0                            ; 004b8956
    PUSH EDI                            ; 004b8958
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004b8959
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b895e
    PUSH 0x6284d0                       ; 004b8961 | = "pod"
    PUSH EBX                            ; 004b8966
    PUSH 0x0                            ; 004b8967
    PUSH 0x0                            ; 004b8969
    MOV ESI,EDI                         ; 004b896b
    MOV EDI,dword ptr [ESP + 0x2314]    ; 004b896d
    PUSH EDI                            ; 004b8974
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b8975
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b897a
    LEA EDI,[ESP + 0x137c]              ; 004b897d
    PUSH EDI                            ; 004b8984
    MOV AL,byte ptr [ESI]               ; 004b8985
        ;   Label: LAB_004b8985
    MOV byte ptr [EDI],AL               ; 004b8987
    CMP AL,0x0                          ; 004b8989
    JZ 0x004b899d                       ; 004b898b
        ;   XREF to: 004b899d (CONDITIONAL_JUMP)  ; LAB_004b899d
    MOV AL,byte ptr [ESI + 0x1]         ; 004b898d
    ADD ESI,0x2                         ; 004b8990
    MOV byte ptr [EDI + 0x1],AL         ; 004b8993
    ADD EDI,0x2                         ; 004b8996
    CMP AL,0x0                          ; 004b8999
    JNZ 0x004b8985                      ; 004b899b
        ;   XREF to: 004b8985 (CONDITIONAL_JUMP)  ; LAB_004b8985
    POP EDI                             ; 004b899d
        ;   Label: LAB_004b899d
    LEA EAX,[ESP + 0x137c]              ; 004b899e
    PUSH EAX                            ; 004b89a5
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b89a6
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004b89ab
    TEST EAX,EAX                        ; 004b89ae
    JZ 0x004b90b4                       ; 004b89b0
        ;   XREF to: 004b90b4 (CONDITIONAL_JUMP)  ; LAB_004b90b4
    MOV EAX,dword ptr [ESP + 0x1588]    ; 004b89b6
        ;   Label: LAB_004b89b6
    MOV dword ptr [EBX + 0x394],EAX     ; 004b89bd
    LEA EDI,[ESP + 0x17a4]              ; 004b89c3
    MOV EAX,dword ptr [ESP + 0x1580]    ; 004b89ca
    LEA ESI,[EBX + 0x100]               ; 004b89d1
    MOV dword ptr [EBX + 0x398],EAX     ; 004b89d7
    PUSH EDI                            ; 004b89dd
    MOV AL,byte ptr [ESI]               ; 004b89de
        ;   Label: LAB_004b89de
    MOV byte ptr [EDI],AL               ; 004b89e0
    CMP AL,0x0                          ; 004b89e2
    JZ 0x004b89f6                       ; 004b89e4
        ;   XREF to: 004b89f6 (CONDITIONAL_JUMP)  ; LAB_004b89f6
    MOV AL,byte ptr [ESI + 0x1]         ; 004b89e6
    ADD ESI,0x2                         ; 004b89e9
    MOV byte ptr [EDI + 0x1],AL         ; 004b89ec
    ADD EDI,0x2                         ; 004b89ef
    CMP AL,0x0                          ; 004b89f2
    JNZ 0x004b89de                      ; 004b89f4
        ;   XREF to: 004b89de (CONDITIONAL_JUMP)  ; LAB_004b89de
    POP EDI                             ; 004b89f6
        ;   Label: LAB_004b89f6
    LEA EAX,[ESP + 0x17a4]              ; 004b89f7
    PUSH EAX                            ; 004b89fe
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b89ff
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004b8a04
    TEST EAX,EAX                        ; 004b8a07
    JZ 0x004b90e3                       ; 004b8a09
        ;   XREF to: 004b90e3 (CONDITIONAL_JUMP)  ; LAB_004b90e3
    MOV EAX,dword ptr [ESP + 0x1588]    ; 004b8a0f
    MOV EDX,dword ptr [ESP + 0x19b0]    ; 004b8a16
    ADD EAX,0x2                         ; 004b8a1d
    CMP EAX,EDX                         ; 004b8a20
    JNC 0x004b90f2                      ; 004b8a22
        ;   XREF to: 004b90f2 (CONDITIONAL_JUMP)  ; LAB_004b90f2
    MOV dword ptr [EBX + 0x370],0x0     ; 004b8a28
    LEA EAX,[EBX + 0x100]               ; 004b8a32
        ;   Label: LAB_004b8a32
    PUSH EAX                            ; 004b8a38
    LEA EAX,[ESP + 0x22b8]              ; 004b8a39
    PUSH EAX                            ; 004b8a40
    MOV EDI,dword ptr [ESP + 0x2344]    ; 004b8a41
    PUSH EDI                            ; 004b8a48
    CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 ; 004b8a49
        ;   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
    ADD ESP,0xc                         ; 004b8a4e
    TEST EAX,EAX                        ; 004b8a51
    SETGE AL                            ; 004b8a53
    AND EAX,0xff                        ; 004b8a56
    MOV dword ptr [EBX + 0x374],EAX     ; 004b8a5b
    LEA EAX,[ESP + 0x800]               ; 004b8a61
    PUSH EAX                            ; 004b8a68
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 004b8a69
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004b8a6e
    LEA EAX,[ESP + 0x137c]              ; 004b8a71
    PUSH EAX                            ; 004b8a78
    LEA EAX,[ESP + 0x804]               ; 004b8a79
    PUSH EAX                            ; 004b8a80
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004b8a81
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004b8a86
    TEST EAX,EAX                        ; 004b8a89
    JZ 0x004b913d                       ; 004b8a8b
        ;   XREF to: 004b913d (CONDITIONAL_JUMP)  ; LAB_004b913d
    MOV EAX,dword ptr [ESP + 0xc10]     ; 004b8a91
    MOV dword ptr [EBX + 0x37c],0x0     ; 004b8a98
    MOV dword ptr [EBX + 0x380],0x0     ; 004b8aa2
    MOV dword ptr [EBX + 0x384],0x0     ; 004b8aac
    MOV dword ptr [EBX + 0x388],0x0     ; 004b8ab6
    MOV dword ptr [EBX + 0x38c],0x0     ; 004b8ac0
    MOV dword ptr [EBX + 0x390],EAX     ; 004b8aca
    XOR EDX,EDX                         ; 004b8ad0
    MOV ECX,dword ptr [ESP + 0xc10]     ; 004b8ad2
    MOV dword ptr [ESP + 0x22f8],EDX    ; 004b8ad9
    TEST ECX,ECX                        ; 004b8ae0
    JLE 0x004b8b83                      ; 004b8ae2
        ;   XREF to: 004b8b83 (CONDITIONAL_JUMP)  ; LAB_004b8b83
    MOV dword ptr [ESP + 0x22d0],EDX    ; 004b8ae8
    MOV EBP,dword ptr [ESP + 0xc14]     ; 004b8aef
        ;   Label: LAB_004b8aef
    ADD EBP,dword ptr [ESP + 0x22d0]    ; 004b8af6
    LEA EDI,[ESP + 0x1590]              ; 004b8afd
    MOV ESI,dword ptr [EBP]             ; 004b8b04
    PUSH EDI                            ; 004b8b07
    MOV AL,byte ptr [ESI]               ; 004b8b08
        ;   Label: LAB_004b8b08
    MOV byte ptr [EDI],AL               ; 004b8b0a
    CMP AL,0x0                          ; 004b8b0c
    JZ 0x004b8b20                       ; 004b8b0e
        ;   XREF to: 004b8b20 (CONDITIONAL_JUMP)  ; LAB_004b8b20
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8b10
    ADD ESI,0x2                         ; 004b8b13
    MOV byte ptr [EDI + 0x1],AL         ; 004b8b16
    ADD EDI,0x2                         ; 004b8b19
    CMP AL,0x0                          ; 004b8b1c
    JNZ 0x004b8b08                      ; 004b8b1e
        ;   XREF to: 004b8b08 (CONDITIONAL_JUMP)  ; LAB_004b8b08
    POP EDI                             ; 004b8b20
        ;   Label: LAB_004b8b20
    LEA EAX,[ESP + 0x1590]              ; 004b8b21
    PUSH EAX                            ; 004b8b28
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b8b29
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004b8b2e
    TEST EAX,EAX                        ; 004b8b31
    JZ 0x004b917b                       ; 004b8b33
        ;   XREF to: 004b917b (CONDITIONAL_JUMP)  ; LAB_004b917b
    MOV EAX,dword ptr [EBP + 0xc]       ; 004b8b39
    MOV ESI,dword ptr [ESP + 0x179c]    ; 004b8b3c
    ADD EAX,0x2                         ; 004b8b43
    CMP EAX,ESI                         ; 004b8b46
    JNC 0x004b9186                      ; 004b8b48
        ;   XREF to: 004b9186 (CONDITIONAL_JUMP)  ; LAB_004b9186
    INC dword ptr [EBX + 0x37c]         ; 004b8b4e
    MOV ESI,dword ptr [ESP + 0x22d0]    ; 004b8b54
        ;   Label: LAB_004b8b54
    MOV EDI,dword ptr [ESP + 0x22f8]    ; 004b8b5b
    MOV EBP,dword ptr [ESP + 0xc10]     ; 004b8b62
    ADD ESI,0x14                        ; 004b8b69
    INC EDI                             ; 004b8b6c
    MOV dword ptr [ESP + 0x22d0],ESI    ; 004b8b6d
    MOV dword ptr [ESP + 0x22f8],EDI    ; 004b8b74
    CMP EDI,EBP                         ; 004b8b7b
    JL 0x004b8aef                       ; 004b8b7d
        ;   XREF to: 004b8aef (CONDITIONAL_JUMP)  ; LAB_004b8aef
    LEA EAX,[EBX + 0x100]               ; 004b8b83
        ;   Label: LAB_004b8b83
    PUSH EAX                            ; 004b8b89
    LEA EAX,[ESP + 0x22c8]              ; 004b8b8a
    PUSH EAX                            ; 004b8b91
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004b8b92
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b8b97
    TEST EAX,EAX                        ; 004b8b9a
    JL 0x004b91bd                       ; 004b8b9c
        ;   XREF to: 004b91bd (CONDITIONAL_JUMP)  ; LAB_004b91bd
    IMUL EAX,EAX,0x168                  ; 004b8ba2
    ADD EAX,dword ptr [ESP + 0x22c8]    ; 004b8ba8
    LEA EDI,[EBX + 0x308]               ; 004b8baf
    LEA ESI,[EAX + 0x104]               ; 004b8bb5
    PUSH EDI                            ; 004b8bbb
    MOV AL,byte ptr [ESI]               ; 004b8bbc
        ;   Label: LAB_004b8bbc
    MOV byte ptr [EDI],AL               ; 004b8bbe
    CMP AL,0x0                          ; 004b8bc0
    JZ 0x004b8bd4                       ; 004b8bc2
        ;   XREF to: 004b8bd4 (CONDITIONAL_JUMP)  ; LAB_004b8bd4
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8bc4
    ADD ESI,0x2                         ; 004b8bc7
    MOV byte ptr [EDI + 0x1],AL         ; 004b8bca
    ADD EDI,0x2                         ; 004b8bcd
    CMP AL,0x0                          ; 004b8bd0
    JNZ 0x004b8bbc                      ; 004b8bd2
        ;   XREF to: 004b8bbc (CONDITIONAL_JUMP)  ; LAB_004b8bbc
    POP EDI                             ; 004b8bd4
        ;   Label: LAB_004b8bd4
    MOV dword ptr [EBX + 0x378],0x0     ; 004b8bd5
        ;   Label: LAB_004b8bd5
    MOV DL,byte ptr [EBX + 0x308]       ; 004b8bdf
    MOV dword ptr [EBX + 0x36c],0x62852b ; 004b8be5 | = "(Cannot recommend action)"
    TEST DL,DL                          ; 004b8bef
    JZ 0x004b91c9                       ; 004b8bf1
        ;   XREF to: 004b91c9 (CONDITIONAL_JUMP)  ; LAB_004b91c9
    PUSH 0x2d12bd0                      ; 004b8bf7 | g_VersionControlSession
    LEA EAX,[EBX + 0x308]               ; 004b8bfc
    PUSH EAX                            ; 004b8c02
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b8c03
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b8c08
    TEST EAX,EAX                        ; 004b8c0b
    JNZ 0x004b91c9                      ; 004b8c0d
        ;   XREF to: 004b91c9 (CONDITIONAL_JUMP)  ; LAB_004b91c9
    MOV dword ptr [EBX + 0x36c],0x628545 ; 004b8c13 | = "You have this pod checked out"
    MOV dword ptr [EBX + 0x378],EAX     ; 004b8c1d
        ;   Label: LAB_004b8c1d
    PUSH 0x0                            ; 004b8c23
        ;   Label: LAB_004b8c23
    LEA EAX,[ESP + 0x804]               ; 004b8c25
    PUSH EAX                            ; 004b8c2c
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b8c2d
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8c32
    MOV EBP,dword ptr [ESP + 0x2304]    ; 004b8c35
    MOV EAX,dword ptr [ESP + 0x2308]    ; 004b8c3c
    MOV EDX,dword ptr [ESP + 0x22d4]    ; 004b8c43
    MOV ECX,dword ptr [ESP + 0x22f0]    ; 004b8c4a
    ADD EBP,0x39c                       ; 004b8c51
    ADD EAX,0x39c                       ; 004b8c57
    INC EDX                             ; 004b8c5c
    MOV dword ptr [ESP + 0x2304],EBP    ; 004b8c5d
    MOV dword ptr [ESP + 0x2308],EAX    ; 004b8c64
    MOV dword ptr [ESP + 0x22d4],EDX    ; 004b8c6b
    CMP EDX,ECX                         ; 004b8c72
    JL 0x004b88c2                       ; 004b8c74
        ;   XREF to: 004b88c2 (CONDITIONAL_JUMP)  ; LAB_004b88c2
    MOV EBX,dword ptr [0x00678a60]      ; 004b8c7a | g_CEditorToolsPtr
        ;   Label: LAB_004b8c7a
    PUSH EBX                            ; 004b8c80 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004b8c81
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004b8c86
    XOR ESI,ESI                         ; 004b8c89
    MOV EDI,dword ptr [ESP + 0x22b4]    ; 004b8c8b
    MOV dword ptr [ESP + 0x231c],ESI    ; 004b8c92
    TEST EDI,EDI                        ; 004b8c99
    JLE 0x004b8d52                      ; 004b8c9b
        ;   XREF to: 004b8d52 (CONDITIONAL_JUMP)  ; LAB_004b8d52
    MOV EAX,dword ptr [ESP + 0x22f0]    ; 004b8ca1
    SHL EAX,0x2                         ; 004b8ca8
    MOV EBX,EAX                         ; 004b8cab
    SHL EAX,0x3                         ; 004b8cad
    SUB EAX,EBX                         ; 004b8cb0
    MOV EBX,EAX                         ; 004b8cb2
    SHL EAX,0x5                         ; 004b8cb4
    ADD EAX,EBX                         ; 004b8cb7
    MOV dword ptr [ESP + 0x230c],EAX    ; 004b8cb9
    SUB EAX,0x39c                       ; 004b8cc0
    MOV dword ptr [ESP + 0x2310],EAX    ; 004b8cc5
    MOV EBX,dword ptr [ESP + 0x231c]    ; 004b8ccc
        ;   Label: LAB_004b8ccc
    PUSH EBX                            ; 004b8cd3
    LEA EAX,[ESP + 0x22b8]              ; 004b8cd4
    PUSH EAX                            ; 004b8cdb
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b8cdc
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004b8ce1
    XOR EBX,EBX                         ; 004b8ce4
    MOV ESI,dword ptr [ESP + 0x22f0]    ; 004b8ce6
    MOV dword ptr [ESP + 0x22fc],EAX    ; 004b8ced
    TEST ESI,ESI                        ; 004b8cf4
    JLE 0x004b8d25                      ; 004b8cf6
        ;   XREF to: 004b8d25 (CONDITIONAL_JUMP)  ; LAB_004b8d25
    MOV EBP,dword ptr [ESP + 0x22f4]    ; 004b8cf8
    MOV EDI,dword ptr [ESP + 0x22f0]    ; 004b8cff
    ADD EBP,0x100                       ; 004b8d06
    PUSH EBP                            ; 004b8d0c
        ;   Label: LAB_004b8d0c
    MOV EAX,dword ptr [ESP + 0x2300]    ; 004b8d0d
    PUSH EAX                            ; 004b8d14
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b8d15
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b8d1a
    TEST EAX,EAX                        ; 004b8d1d
    JNZ 0x004b938c                      ; 004b8d1f
        ;   XREF to: 004b938c (CONDITIONAL_JUMP)  ; LAB_004b938c
    MOV EDX,dword ptr [ESP + 0x22f0]    ; 004b8d25
        ;   Label: LAB_004b8d25
    CMP EBX,EDX                         ; 004b8d2c
    JGE 0x004b93a0                      ; 004b8d2e
        ;   XREF to: 004b93a0 (CONDITIONAL_JUMP)  ; LAB_004b93a0
    MOV EAX,dword ptr [ESP + 0x231c]    ; 004b8d34
        ;   Label: LAB_004b8d34
    INC EAX                             ; 004b8d3b
    MOV EDX,dword ptr [ESP + 0x22b4]    ; 004b8d3c
    MOV dword ptr [ESP + 0x231c],EAX    ; 004b8d43
    CMP EAX,EDX                         ; 004b8d4a
    JL 0x004b8ccc                       ; 004b8d4c
        ;   XREF to: 004b8ccc (CONDITIONAL_JUMP)  ; LAB_004b8ccc
    XOR ECX,ECX                         ; 004b8d52
        ;   Label: LAB_004b8d52
    MOV dword ptr [ESP + 0x22d8],ECX    ; 004b8d54
    LEA EAX,[ESP + 0xc2c]               ; 004b8d5b
        ;   Label: LAB_004b8d5b
    PUSH EAX                            ; 004b8d62
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b8d63
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b8d68
    PUSH 0x1                            ; 004b8d6b
    LEA EAX,[ESP + 0xc30]               ; 004b8d6d
    PUSH EAX                            ; 004b8d74
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10 ; 004b8d75
        ;   XREF to: 004a3e10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList * this_ptr, int result_value)
    ADD ESP,0x8                         ; 004b8d7a
    MOV EDI,dword ptr [ESP + 0x22f0]    ; 004b8d7d
    XOR EBP,EBP                         ; 004b8d84
    TEST EDI,EDI                        ; 004b8d86
    JLE 0x004b8e23                      ; 004b8d88
        ;   XREF to: 004b8e23 (CONDITIONAL_JUMP)  ; LAB_004b8e23
    MOV EBX,dword ptr [ESP + 0x22f4]    ; 004b8d8e
    MOV EAX,dword ptr [EBX + 0x378]     ; 004b8d95
        ;   Label: LAB_004b8d95
    MOV EDX,dword ptr [EAX*0x4 + 0x679da0] ; 004b8d9b | g_PodFileActionNames
    PUSH EDX                            ; 004b8da2
    MOV ECX,dword ptr [EBX + 0x36c]     ; 004b8da3
    PUSH ECX                            ; 004b8da9
    PUSH EBX                            ; 004b8daa
    PUSH 0x62869d                       ; 004b8dab | = "%s\t%s\t%s"
    LEA EAX,[ESP + 0x10]                ; 004b8db0
    PUSH EAX                            ; 004b8db4
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b8db5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV CL,byte ptr [EBX + 0x308]       ; 004b8dba
    ADD ESP,0x14                        ; 004b8dc0
    TEST CL,CL                          ; 004b8dc3
    JZ 0x004b8dfa                       ; 004b8dc5
        ;   XREF to: 004b8dfa (CONDITIONAL_JUMP)  ; LAB_004b8dfa
    LEA EAX,[EBX + 0x308]               ; 004b8dc7
    PUSH EAX                            ; 004b8dcd
    PUSH 0x6286a6                       ; 004b8dce | = "\tChecked out by %s"
    LEA ESI,[ESP + 0x8]                 ; 004b8dd3
    XOR DL,DL                           ; 004b8dd7
    MOV AL,byte ptr [ESI]               ; 004b8dd9
        ;   Label: LAB_004b8dd9
    CMP AL,DL                           ; 004b8ddb
    JZ 0x004b8df1                       ; 004b8ddd
        ;   XREF to: 004b8df1 (CONDITIONAL_JUMP)  ; LAB_004b8df1
    CMP AL,0x0                          ; 004b8ddf
    JZ 0x004b8def                       ; 004b8de1
        ;   XREF to: 004b8def (CONDITIONAL_JUMP)  ; LAB_004b8def
    INC ESI                             ; 004b8de3
    MOV AL,byte ptr [ESI]               ; 004b8de4
    CMP AL,DL                           ; 004b8de6
    JZ 0x004b8df1                       ; 004b8de8
        ;   XREF to: 004b8df1 (CONDITIONAL_JUMP)  ; LAB_004b8df1
    INC ESI                             ; 004b8dea
    CMP AL,0x0                          ; 004b8deb
    JNZ 0x004b8dd9                      ; 004b8ded
        ;   XREF to: 004b8dd9 (CONDITIONAL_JUMP)  ; LAB_004b8dd9
    SUB ESI,ESI                         ; 004b8def
        ;   Label: LAB_004b8def
    PUSH ESI                            ; 004b8df1
        ;   Label: LAB_004b8df1
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b8df2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b8df7
    MOV EAX,ESP                         ; 004b8dfa
        ;   Label: LAB_004b8dfa
    PUSH EAX                            ; 004b8dfc
    LEA EAX,[ESP + 0xc30]               ; 004b8dfd
    PUSH EAX                            ; 004b8e04
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b8e05
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8e0a
    INC EBP                             ; 004b8e0d
    MOV EAX,dword ptr [ESP + 0x22f0]    ; 004b8e0e
    ADD EBX,0x39c                       ; 004b8e15
    CMP EBP,EAX                         ; 004b8e1b
    JL 0x004b8d95                       ; 004b8e1d
        ;   XREF to: 004b8d95 (CONDITIONAL_JUMP)  ; LAB_004b8d95
    PUSH 0x6286b9                       ; 004b8e23 | = "Go!"
        ;   Label: LAB_004b8e23
    LEA EAX,[ESP + 0xc30]               ; 004b8e28
    PUSH EAX                            ; 004b8e2f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b8e30
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8e35
    PUSH 0x0                            ; 004b8e38
    MOV EDX,dword ptr [ESP + 0x22dc]    ; 004b8e3a
    PUSH EDX                            ; 004b8e41
    PUSH 0x6286bd                       ; 004b8e42 | = "Select action for each pod, select \"..."
    LEA EAX,[ESP + 0xc38]               ; 004b8e47
    PUSH EAX                            ; 004b8e4e
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b8e4f
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004b8e54
    MOV dword ptr [ESP + 0x22d8],EAX    ; 004b8e57
    TEST EAX,EAX                        ; 004b8e5e
    JL 0x004b9565                       ; 004b8e60
        ;   XREF to: 004b9565 (CONDITIONAL_JUMP)  ; LAB_004b9565
    MOV EBX,dword ptr [ESP + 0xc2c]     ; 004b8e66
    DEC EBX                             ; 004b8e6d
    CMP EAX,EBX                         ; 004b8e6e
    JL 0x004b98a8                       ; 004b8e70
        ;   XREF to: 004b98a8 (CONDITIONAL_JUMP)  ; LAB_004b98a8
    PUSH 0x0                            ; 004b8e76
    LEA EAX,[ESP + 0xc30]               ; 004b8e78
    PUSH EAX                            ; 004b8e7f
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b8e80
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8e85
    XOR ESI,ESI                         ; 004b8e88
    MOV EAX,dword ptr [ESP + 0x233c]    ; 004b8e8a
    MOV dword ptr [ESP + 0x2318],ESI    ; 004b8e91
    MOV dword ptr [EAX + 0x13880c],0x1  ; 004b8e98
    MOV EAX,dword ptr [ESP + 0x22f0]    ; 004b8ea2
    MOV dword ptr [0x02d12bf0],ESI      ; 004b8ea9 | g_VersionControlSession.overwrite_own_choice
    MOV dword ptr [0x02d12bf4],ESI      ; 004b8eaf | g_VersionControlSession.overwrite_writeable_choice
    TEST EAX,EAX                        ; 004b8eb5
    JLE 0x004b8f64                      ; 004b8eb7
        ;   XREF to: 004b8f64 (CONDITIONAL_JUMP)  ; LAB_004b8f64
    MOV EAX,dword ptr [ESP + 0x22f4]    ; 004b8ebd
    ADD EAX,0x100                       ; 004b8ec4
    MOV dword ptr [ESP + 0x2314],EAX    ; 004b8ec9
    IMUL EDI,dword ptr [ESP + 0x2318],0x39c ; 004b8ed0
        ;   Label: LAB_004b8ed0
    ADD EDI,dword ptr [ESP + 0x22f4]    ; 004b8edb
    MOV EDX,dword ptr [EDI + 0x378]     ; 004b8ee2
    TEST EDX,EDX                        ; 004b8ee8
    JNZ 0x004b99c4                      ; 004b8eea
        ;   XREF to: 004b99c4 (CONDITIONAL_JUMP)  ; LAB_004b99c4
    CMP dword ptr [EDI + 0x370],0x3     ; 004b8ef0
    JNZ 0x004b8f32                      ; 004b8ef7
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)  ; LAB_004b8f32
    MOV EAX,dword ptr [EDI + 0x37c]     ; 004b8ef9
    TEST EAX,EAX                        ; 004b8eff
    JNZ 0x004b8f32                      ; 004b8f01
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)  ; LAB_004b8f32
    CMP dword ptr [EDI + 0x374],0x0     ; 004b8f03
    JZ 0x004b8f32                       ; 004b8f0a
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)  ; LAB_004b8f32
    CMP byte ptr [0x02d12ac8],0x0       ; 004b8f0c | g_VersionControlDirectory
    JZ 0x004b8f32                       ; 004b8f13
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)  ; LAB_004b8f32
    MOV ECX,dword ptr [ESP + 0x2314]    ; 004b8f15
    PUSH ECX                            ; 004b8f1c
    PUSH EAX                            ; 004b8f1d
    CALL engine_dosio.c_getFileSizeWithFinder_FUN_00481960 ; 004b8f1e
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSizeWithFinder_FUN_00481960(char * directory, char * filename)
    ADD ESP,0x8                         ; 004b8f23
    TEST EAX,EAX                        ; 004b8f26
    JL 0x004b8f32                       ; 004b8f28
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)  ; LAB_004b8f32
    TEST AL,0x8                         ; 004b8f2a
    JZ 0x004b99ac                       ; 004b8f2c
        ;   XREF to: 004b99ac (CONDITIONAL_JUMP)  ; LAB_004b99ac
    MOV ECX,dword ptr [ESP + 0x2314]    ; 004b8f32
        ;   Label: LAB_004b8f32
    MOV EBX,dword ptr [ESP + 0x2318]    ; 004b8f39
    MOV ESI,dword ptr [ESP + 0x22f0]    ; 004b8f40
    ADD ECX,0x39c                       ; 004b8f47
    INC EBX                             ; 004b8f4d
    MOV dword ptr [ESP + 0x2314],ECX    ; 004b8f4e
    MOV dword ptr [ESP + 0x2318],EBX    ; 004b8f55
    CMP EBX,ESI                         ; 004b8f5c
    JL 0x004b8ed0                       ; 004b8f5e
        ;   XREF to: 004b8ed0 (CONDITIONAL_JUMP)  ; LAB_004b8ed0
    MOV EAX,dword ptr [ESP + 0x233c]    ; 004b8f64
        ;   Label: LAB_004b8f64
    MOV dword ptr [EAX + 0x13880c],0x0  ; 004b8f6b
    CMP dword ptr [ESP + 0x22e0],0x0    ; 004b8f75
    JLE 0x004b9e59                      ; 004b8f7d
        ;   XREF to: 004b9e59 (CONDITIONAL_JUMP)  ; LAB_004b9e59
    LEA EAX,[ESP + 0x22b4]              ; 004b8f83
        ;   Label: LAB_004b8f83
    PUSH EAX                            ; 004b8f8a
    MOV ECX,dword ptr [ESP + 0x2340]    ; 004b8f8b
    PUSH ECX                            ; 004b8f92
    CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 ; 004b8f93
        ;   XREF to: 004ba620 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager * this_ptr, CStrList * pod_list)
    ADD ESP,0x8                         ; 004b8f98
    CMP dword ptr [ESP + 0x22dc],0x0    ; 004b8f9b
        ;   Label: LAB_004b8f9b
    JNZ 0x004b9e6c                      ; 004b8fa3
        ;   XREF to: 004b9e6c (CONDITIONAL_JUMP)  ; LAB_004b9e6c
    CMP dword ptr [ESP + 0x22e0],0x0    ; 004b8fa9
    JNZ 0x004b9e6c                      ; 004b8fb1
        ;   XREF to: 004b9e6c (CONDITIONAL_JUMP)  ; LAB_004b9e6c
    CMP dword ptr [ESP + 0x22e4],0x0    ; 004b8fb7
    JNZ 0x004b9e6c                      ; 004b8fbf
        ;   XREF to: 004b9e6c (CONDITIONAL_JUMP)  ; LAB_004b9e6c
    CMP dword ptr [ESP + 0x22ec],0x0    ; 004b8fc5
    JNZ 0x004b9e6c                      ; 004b8fcd
        ;   XREF to: 004b9e6c (CONDITIONAL_JUMP)  ; LAB_004b9e6c
    CMP dword ptr [ESP + 0x22e8],0x0    ; 004b8fd3
    JNZ 0x004b9e6c                      ; 004b8fdb
        ;   XREF to: 004b9e6c (CONDITIONAL_JUMP)  ; LAB_004b9e6c
    MOV ESI,0x628a9f                    ; 004b8fe1 | = "PODs not changed."
    LEA EDI,[ESP + 0x1da0]              ; 004b8fe6
    PUSH EDI                            ; 004b8fed
        ;   Label: LAB_004b8fed
    MOV AL,byte ptr [ESI]               ; 004b8fee | = "PODs not changed." | s_PODs_not_changed_00628a9f+2 | s_To_apply_these_changes_y_00628b24
        ;   Label: LAB_004b8fee
    MOV byte ptr [EDI],AL               ; 004b8ff0
    CMP AL,0x0                          ; 004b8ff2
    JZ 0x004b9006                       ; 004b8ff4
        ;   XREF to: 004b9006 (CONDITIONAL_JUMP)  ; LAB_004b9006
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8ff6 | s_PODs_not_changed_00628a9f+1 | s_s_not_changed._00628aa2 | s_o_apply_these_changes,_you_shoul_00628b25
    ADD ESI,0x2                         ; 004b8ff9
    MOV byte ptr [EDI + 0x1],AL         ; 004b8ffc
    ADD EDI,0x2                         ; 004b8fff
    CMP AL,0x0                          ; 004b9002
    JNZ 0x004b8fee                      ; 004b9004
        ;   XREF to: 004b8fee (CONDITIONAL_JUMP)  ; LAB_004b8fee
    POP EDI                             ; 004b9006
        ;   Label: LAB_004b9006
    LEA EAX,[ESP + 0x1da0]              ; 004b9007
    PUSH EAX                            ; 004b900e
    MOV EDX,dword ptr [0x00678a60]      ; 004b900f | g_CEditorToolsPtr
    PUSH EDX                            ; 004b9015 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 004b9016
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b901b
        ;   Label: LAB_004b901b
    MOV EDX,dword ptr [ESP + 0x22f4]    ; 004b901e
    TEST EDX,EDX                        ; 004b9025
    JZ 0x004b903c                       ; 004b9027
        ;   XREF to: 004b903c (CONDITIONAL_JUMP)  ; LAB_004b903c
    PUSH 0xe10                          ; 004b9029
    PUSH 0x628b60                       ; 004b902e | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004b9033
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004b9034
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004b9039
    LEA EAX,[ESP + 0x22c4]              ; 004b903c
        ;   Label: LAB_004b903c
    PUSH EAX                            ; 004b9043
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b9044
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b9049
    PUSH 0x0                            ; 004b904c
    LEA EAX,[ESP + 0x22b8]              ; 004b904e
    PUSH EAX                            ; 004b9055
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004b9056
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b905b
    PUSH 0x0                            ; 004b905e
    LEA EAX,[ESP + 0x22a8]              ; 004b9060
    PUSH EAX                            ; 004b9067
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004b9068
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b906d
    ADD ESP,0x2328                      ; 004b9070
    POP EBP                             ; 004b9076
    POP EDI                             ; 004b9077
    POP ESI                             ; 004b9078
    POP EBX                             ; 004b9079
    RET                                 ; 004b907a
    LEA EAX,[ESP + 0x1da0]              ; 004b907b
        ;   Label: LAB_004b907b
    PUSH EAX                            ; 004b9082
    PUSH 0x628430                       ; 004b9083 | = "No POD files found in %s"
    MOV EDI,dword ptr [0x00678a60]      ; 004b9088 | g_CEditorToolsPtr
    PUSH EDI                            ; 004b908e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b908f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b9094
    PUSH 0x0                            ; 004b9097
    LEA EAX,[ESP + 0x22a8]              ; 004b9099
    PUSH EAX                            ; 004b90a0
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004b90a1
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b90a6
    ADD ESP,0x2328                      ; 004b90a9
    POP EBP                             ; 004b90af
    POP EDI                             ; 004b90b0
    POP ESI                             ; 004b90b1
    POP EBX                             ; 004b90b2
    RET                                 ; 004b90b3
    MOV dword ptr [0x02f0ca4c],0xc25    ; 004b90b4 | g_CurrentLineNumber
        ;   Label: LAB_004b90b4
    LEA EAX,[ESP + 0x137c]              ; 004b90be
    PUSH EAX                            ; 004b90c5
    MOV EBP,0x6284d4                    ; 004b90c6 | = "..\\engine\\fileio.cpp"
    PUSH 0x6284e9                       ; 004b90cb | = "Can't querry for pod file info: %s"
    MOV dword ptr [0x02f0ca48],EBP      ; 004b90d0 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b90d6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004b90db
    JMP 0x004b89b6                      ; 004b90de
        ;   XREF to: 004b89b6 (UNCONDITIONAL_JUMP)  ; LAB_004b89b6
    MOV dword ptr [EBX + 0x370],0x4     ; 004b90e3
        ;   Label: LAB_004b90e3
    JMP 0x004b8a32                      ; 004b90ed
        ;   XREF to: 004b8a32 (UNCONDITIONAL_JUMP)  ; LAB_004b8a32
    MOV EAX,dword ptr [ESP + 0x1588]    ; 004b90f2
        ;   Label: LAB_004b90f2
    SUB EAX,0x2                         ; 004b90f9
    CMP EAX,EDX                         ; 004b90fc
    JBE 0x004b910f                      ; 004b90fe
        ;   XREF to: 004b910f (CONDITIONAL_JUMP)  ; LAB_004b910f
    MOV dword ptr [EBX + 0x370],0x1     ; 004b9100
    JMP 0x004b8a32                      ; 004b910a
        ;   XREF to: 004b8a32 (UNCONDITIONAL_JUMP)  ; LAB_004b8a32
    MOV EAX,dword ptr [ESP + 0x19a8]    ; 004b910f
        ;   Label: LAB_004b910f
    CMP EAX,dword ptr [ESP + 0x1580]    ; 004b9116
    JZ 0x004b912e                       ; 004b911d
        ;   XREF to: 004b912e (CONDITIONAL_JUMP)  ; LAB_004b912e
    MOV dword ptr [EBX + 0x370],0x2     ; 004b911f
    JMP 0x004b8a32                      ; 004b9129
        ;   XREF to: 004b8a32 (UNCONDITIONAL_JUMP)  ; LAB_004b8a32
    MOV dword ptr [EBX + 0x370],0x3     ; 004b912e
        ;   Label: LAB_004b912e
    JMP 0x004b8a32                      ; 004b9138
        ;   XREF to: 004b8a32 (UNCONDITIONAL_JUMP)  ; LAB_004b8a32
    MOV EBP,dword ptr [0x00678a60]      ; 004b913d | g_CEditorToolsPtr
        ;   Label: LAB_004b913d
    PUSH EBP                            ; 004b9143 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004b9144
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004b9149
    LEA EAX,[ESP + 0x137c]              ; 004b914c
    PUSH EAX                            ; 004b9153
    PUSH 0x62850c                       ; 004b9154 | = "Can't mount %s to check status"
    MOV EAX,[0x00678a60]                ; 004b9159 | g_CEditorToolsPtr
    PUSH EAX                            ; 004b915e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b915f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b9164
    PUSH 0x0                            ; 004b9167
    LEA EAX,[ESP + 0x804]               ; 004b9169
    PUSH EAX                            ; 004b9170
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b9171
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    JMP 0x004b901b                      ; 004b9176
        ;   XREF to: 004b901b (UNCONDITIONAL_JUMP)  ; LAB_004b901b
    INC dword ptr [EBX + 0x384]         ; 004b917b
        ;   Label: LAB_004b917b
    JMP 0x004b8b54                      ; 004b9181
        ;   XREF to: 004b8b54 (UNCONDITIONAL_JUMP)  ; LAB_004b8b54
    MOV EAX,dword ptr [EBP + 0xc]       ; 004b9186
        ;   Label: LAB_004b9186
    SUB EAX,0x2                         ; 004b9189
    CMP EAX,ESI                         ; 004b918c
    JBE 0x004b919b                      ; 004b918e
        ;   XREF to: 004b919b (CONDITIONAL_JUMP)  ; LAB_004b919b
    INC dword ptr [EBX + 0x380]         ; 004b9190
    JMP 0x004b8b54                      ; 004b9196
        ;   XREF to: 004b8b54 (UNCONDITIONAL_JUMP)  ; LAB_004b8b54
    MOV EAX,dword ptr [ESP + 0x1794]    ; 004b919b
        ;   Label: LAB_004b919b
    CMP EAX,dword ptr [EBP + 0x4]       ; 004b91a2
    JZ 0x004b91b2                       ; 004b91a5
        ;   XREF to: 004b91b2 (CONDITIONAL_JUMP)  ; LAB_004b91b2
    INC dword ptr [EBX + 0x388]         ; 004b91a7
    JMP 0x004b8b54                      ; 004b91ad
        ;   XREF to: 004b8b54 (UNCONDITIONAL_JUMP)  ; LAB_004b8b54
    INC dword ptr [EBX + 0x38c]         ; 004b91b2
        ;   Label: LAB_004b91b2
    JMP 0x004b8b54                      ; 004b91b8
        ;   XREF to: 004b8b54 (UNCONDITIONAL_JUMP)  ; LAB_004b8b54
    MOV byte ptr [EBX + 0x308],0x0      ; 004b91bd
        ;   Label: LAB_004b91bd
    JMP 0x004b8bd5                      ; 004b91c4
        ;   XREF to: 004b8bd5 (UNCONDITIONAL_JUMP)  ; LAB_004b8bd5
    CMP dword ptr [EBX + 0x370],0x4     ; 004b91c9
        ;   Label: LAB_004b91c9
    JNZ 0x004b91e8                      ; 004b91d0
        ;   XREF to: 004b91e8 (CONDITIONAL_JUMP)  ; LAB_004b91e8
    CMP dword ptr [EBX + 0x37c],0x0     ; 004b91d2
    JNZ 0x004b91e8                      ; 004b91d9
        ;   XREF to: 004b91e8 (CONDITIONAL_JUMP)  ; LAB_004b91e8
    CMP dword ptr [EBX + 0x374],0x0     ; 004b91db
    JZ 0x004b926e                       ; 004b91e2
        ;   XREF to: 004b926e (CONDITIONAL_JUMP)  ; LAB_004b926e
    CMP dword ptr [EBX + 0x370],0x1     ; 004b91e8
        ;   Label: LAB_004b91e8
    JNZ 0x004b9221                      ; 004b91ef
        ;   XREF to: 004b9221 (CONDITIONAL_JUMP)  ; LAB_004b9221
    CMP dword ptr [EBX + 0x37c],0x0     ; 004b91f1
    JNZ 0x004b9221                      ; 004b91f8
        ;   XREF to: 004b9221 (CONDITIONAL_JUMP)  ; LAB_004b9221
    MOV EDX,dword ptr [EBX + 0x38c]     ; 004b91fa
    MOV EAX,dword ptr [EBX + 0x380]     ; 004b9200
    MOV ECX,dword ptr [EBX + 0x388]     ; 004b9206
    ADD EAX,EDX                         ; 004b920c
    ADD EAX,ECX                         ; 004b920e
    TEST EAX,EAX                        ; 004b9210
    JLE 0x004b9221                      ; 004b9212
        ;   XREF to: 004b9221 (CONDITIONAL_JUMP)  ; LAB_004b9221
    CMP dword ptr [EBX + 0x374],0x0     ; 004b9214
    JZ 0x004b9287                       ; 004b921b
        ;   XREF to: 004b9287 (CONDITIONAL_JUMP)  ; LAB_004b9287
    CMP dword ptr [EBX + 0x370],0x1     ; 004b9221
        ;   Label: LAB_004b9221
    JNZ 0x004b923c                      ; 004b9228
        ;   XREF to: 004b923c (CONDITIONAL_JUMP)  ; LAB_004b923c
    CMP dword ptr [EBX + 0x37c],0x0     ; 004b922a
    JNZ 0x004b923c                      ; 004b9231
        ;   XREF to: 004b923c (CONDITIONAL_JUMP)  ; LAB_004b923c
    CMP dword ptr [EBX + 0x374],0x0     ; 004b9233
    JZ 0x004b92a0                       ; 004b923a
        ;   XREF to: 004b92a0 (CONDITIONAL_JUMP)  ; LAB_004b92a0
    MOV EDX,dword ptr [EBX + 0x370]     ; 004b923c
        ;   Label: LAB_004b923c
    CMP EDX,0x1                         ; 004b9242
    JNZ 0x004b92b9                      ; 004b9245
        ;   XREF to: 004b92b9 (CONDITIONAL_JUMP)  ; LAB_004b92b9
    CMP dword ptr [EBX + 0x37c],0x0     ; 004b9247
    JNZ 0x004b92b9                      ; 004b924e
        ;   XREF to: 004b92b9 (CONDITIONAL_JUMP)  ; LAB_004b92b9
    CMP dword ptr [EBX + 0x374],0x0     ; 004b9250
    JZ 0x004b92b9                       ; 004b9257
        ;   XREF to: 004b92b9 (CONDITIONAL_JUMP)  ; LAB_004b92b9
    MOV dword ptr [EBX + 0x36c],0x6285bd ; 004b9259 | = "Your pod is older and mounted"
    MOV dword ptr [EBX + 0x378],EDX     ; 004b9263
    JMP 0x004b8c23                      ; 004b9269
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)  ; LAB_004b8c23
    MOV dword ptr [EBX + 0x378],0x2     ; 004b926e
        ;   Label: LAB_004b926e
    MOV dword ptr [EBX + 0x36c],0x628563 ; 004b9278 | = "You don't have this pod"
    JMP 0x004b8c23                      ; 004b9282
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)  ; LAB_004b8c23
    MOV dword ptr [EBX + 0x378],0x3     ; 004b9287
        ;   Label: LAB_004b9287
    MOV dword ptr [EBX + 0x36c],0x62857b ; 004b9291 | = "Extracted, your files are older"
    JMP 0x004b8c23                      ; 004b929b
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)  ; LAB_004b8c23
    MOV dword ptr [EBX + 0x378],0x2     ; 004b92a0
        ;   Label: LAB_004b92a0
    MOV dword ptr [EBX + 0x36c],0x62859b ; 004b92aa | = "Your pod is older and not mounted"
    JMP 0x004b8c23                      ; 004b92b4
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)  ; LAB_004b8c23
    MOV EDI,dword ptr [EBX + 0x370]     ; 004b92b9
        ;   Label: LAB_004b92b9
    TEST EDI,EDI                        ; 004b92bf
    JNZ 0x004b92d8                      ; 004b92c1
        ;   XREF to: 004b92d8 (CONDITIONAL_JUMP)  ; LAB_004b92d8
    MOV dword ptr [EBX + 0x36c],0x6285db ; 004b92c3 | = "Your pod is newer"
    MOV dword ptr [EBX + 0x378],EDI     ; 004b92cd
    JMP 0x004b8c23                      ; 004b92d3
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)  ; LAB_004b8c23
    CMP EDI,0x3                         ; 004b92d8
        ;   Label: LAB_004b92d8
    JNZ 0x004b92ff                      ; 004b92db
        ;   XREF to: 004b92ff (CONDITIONAL_JUMP)  ; LAB_004b92ff
    MOV EAX,dword ptr [EBX + 0x37c]     ; 004b92dd
    TEST EAX,EAX                        ; 004b92e3
    JNZ 0x004b92ff                      ; 004b92e5
        ;   XREF to: 004b92ff (CONDITIONAL_JUMP)  ; LAB_004b92ff
    CMP dword ptr [EBX + 0x374],0x0     ; 004b92e7
    JZ 0x004b92ff                       ; 004b92ee
        ;   XREF to: 004b92ff (CONDITIONAL_JUMP)  ; LAB_004b92ff
    MOV dword ptr [EBX + 0x36c],0x6285ed ; 004b92f0 | = "Your pod is in sync and mounted"
    JMP 0x004b8c1d                      ; 004b92fa
        ;   XREF to: 004b8c1d (UNCONDITIONAL_JUMP)  ; LAB_004b8c1d
    CMP dword ptr [EBX + 0x370],0x3     ; 004b92ff
        ;   Label: LAB_004b92ff
    JNZ 0x004b931b                      ; 004b9306
        ;   XREF to: 004b931b (CONDITIONAL_JUMP)  ; LAB_004b931b
    MOV ESI,dword ptr [EBX + 0x37c]     ; 004b9308
    TEST ESI,ESI                        ; 004b930e
    JNZ 0x004b931b                      ; 004b9310
        ;   XREF to: 004b931b (CONDITIONAL_JUMP)  ; LAB_004b931b
    CMP dword ptr [EBX + 0x374],0x0     ; 004b9312
    JZ 0x004b9358                       ; 004b9319
        ;   XREF to: 004b9358 (CONDITIONAL_JUMP)  ; LAB_004b9358
    CMP dword ptr [EBX + 0x370],0x3     ; 004b931b
        ;   Label: LAB_004b931b
    JNZ 0x004b8c23                      ; 004b9322
        ;   XREF to: 004b8c23 (CONDITIONAL_JUMP)  ; LAB_004b8c23
    MOV EDI,dword ptr [EBX + 0x37c]     ; 004b9328
    TEST EDI,EDI                        ; 004b932e
    JNZ 0x004b8c23                      ; 004b9330
        ;   XREF to: 004b8c23 (CONDITIONAL_JUMP)  ; LAB_004b8c23
    CMP dword ptr [EBX + 0x374],0x0     ; 004b9336
    JNZ 0x004b8c23                      ; 004b933d
        ;   XREF to: 004b8c23 (CONDITIONAL_JUMP)  ; LAB_004b8c23
    MOV dword ptr [EBX + 0x36c],0x628623 ; 004b9343 | = "Your pod is in sync but not mounted"
    MOV dword ptr [EBX + 0x378],EDI     ; 004b934d
    JMP 0x004b8c23                      ; 004b9353
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)  ; LAB_004b8c23
    TEST ESI,ESI                        ; 004b9358
        ;   Label: LAB_004b9358
    JNZ 0x004b931b                      ; 004b935a
        ;   XREF to: 004b931b (CONDITIONAL_JUMP)  ; LAB_004b931b
    CMP dword ptr [EBX + 0x380],0x0     ; 004b935c
    JNZ 0x004b931b                      ; 004b9363
        ;   XREF to: 004b931b (CONDITIONAL_JUMP)  ; LAB_004b931b
    CMP dword ptr [EBX + 0x384],0x0     ; 004b9365
    JNZ 0x004b931b                      ; 004b936c
        ;   XREF to: 004b931b (CONDITIONAL_JUMP)  ; LAB_004b931b
    CMP dword ptr [EBX + 0x388],0x0     ; 004b936e
    JNZ 0x004b931b                      ; 004b9375
        ;   XREF to: 004b931b (CONDITIONAL_JUMP)  ; LAB_004b931b
    MOV dword ptr [EBX + 0x36c],0x62860d ; 004b9377 | = "Extracted and in sync"
    MOV dword ptr [EBX + 0x378],ESI     ; 004b9381
    JMP 0x004b8c23                      ; 004b9387
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)  ; LAB_004b8c23
    INC EBX                             ; 004b938c
        ;   Label: LAB_004b938c
    ADD EBP,0x39c                       ; 004b938d
    CMP EBX,EDI                         ; 004b9393
    JL 0x004b8d0c                       ; 004b9395
        ;   XREF to: 004b8d0c (CONDITIONAL_JUMP)  ; LAB_004b8d0c
    JMP 0x004b8d25                      ; 004b939b
        ;   XREF to: 004b8d25 (UNCONDITIONAL_JUMP)  ; LAB_004b8d25
    PUSH 0xcd3                          ; 004b93a0
        ;   Label: LAB_004b93a0
    MOV ECX,dword ptr [ESP + 0x2310]    ; 004b93a5
    MOV EBX,dword ptr [ESP + 0x2314]    ; 004b93ac
    MOV EBP,dword ptr [ESP + 0x22f8]    ; 004b93b3
    PUSH 0x628647                       ; 004b93ba | = "..\\engine\\fileio.cpp"
    ADD ECX,0x39c                       ; 004b93bf
    LEA ESI,[EDX + 0x1]                 ; 004b93c5
    PUSH ECX                            ; 004b93c8
    ADD EBX,0x39c                       ; 004b93c9
    MOV dword ptr [ESP + 0x22fc],ESI    ; 004b93cf
    PUSH EBP                            ; 004b93d6
    MOV dword ptr [ESP + 0x231c],ECX    ; 004b93d7
    MOV dword ptr [ESP + 0x2320],EBX    ; 004b93de
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004b93e5
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004b93ea
    MOV dword ptr [ESP + 0x22f4],EAX    ; 004b93ed
    TEST EAX,EAX                        ; 004b93f4
    JNZ 0x004b941a                      ; 004b93f6
        ;   XREF to: 004b941a (CONDITIONAL_JUMP)  ; LAB_004b941a
    MOV EAX,0x62865c                    ; 004b93f8 | = "..\\engine\\fileio.cpp"
    MOV EDX,0xcd4                       ; 004b93fd
    PUSH 0x628671                       ; 004b9402 | = "Out of memory"
    MOV [0x02f0ca48],EAX                ; 004b9407 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004b940c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b9412
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b9417
    PUSH 0x39c                          ; 004b941a
        ;   Label: LAB_004b941a
    MOV EBX,dword ptr [ESP + 0x22f8]    ; 004b941f
    MOV ECX,dword ptr [ESP + 0x2314]    ; 004b9426
    PUSH 0x0                            ; 004b942d
    ADD EBX,ECX                         ; 004b942f
    PUSH EBX                            ; 004b9431
    CALL crt_memory.c_memset_FUN_005fde40 ; 004b9432
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004b9437
    LEA EDI,[EBX + 0x100]               ; 004b943a
    MOV ESI,dword ptr [ESP + 0x22fc]    ; 004b9440
    PUSH EDI                            ; 004b9447
    MOV AL,byte ptr [ESI]               ; 004b9448
        ;   Label: LAB_004b9448
    MOV byte ptr [EDI],AL               ; 004b944a
    CMP AL,0x0                          ; 004b944c
    JZ 0x004b9460                       ; 004b944e
        ;   XREF to: 004b9460 (CONDITIONAL_JUMP)  ; LAB_004b9460
    MOV AL,byte ptr [ESI + 0x1]         ; 004b9450
    ADD ESI,0x2                         ; 004b9453
    MOV byte ptr [EDI + 0x1],AL         ; 004b9456
    ADD EDI,0x2                         ; 004b9459
    CMP AL,0x0                          ; 004b945c
    JNZ 0x004b9448                      ; 004b945e
        ;   XREF to: 004b9448 (CONDITIONAL_JUMP)  ; LAB_004b9448
    POP EDI                             ; 004b9460
        ;   Label: LAB_004b9460
    LEA EAX,[ESP + 0x20a4]              ; 004b9461
    PUSH EAX                            ; 004b9468
    LEA EAX,[ESP + 0x21a8]              ; 004b9469
    PUSH EAX                            ; 004b9470
    LEA EAX,[ESP + 0x1fac]              ; 004b9471
    PUSH EAX                            ; 004b9478
    LEA EAX,[ESP + 0x2330]              ; 004b9479
    PUSH EAX                            ; 004b9480
    LEA EAX,[ESP + 0x1db0]              ; 004b9481
    PUSH EAX                            ; 004b9488
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004b9489
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b948e
    LEA EAX,[ESP + 0x20a4]              ; 004b9491
    PUSH EAX                            ; 004b9498
    LEA EAX,[ESP + 0x21a8]              ; 004b9499
    PUSH EAX                            ; 004b94a0
    LEA EAX,[ESP + 0x1fac]              ; 004b94a1
    PUSH EAX                            ; 004b94a8
    PUSH 0x0                            ; 004b94a9
    LEA EAX,[ESP + 0x1eb4]              ; 004b94ab
    PUSH EAX                            ; 004b94b2
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b94b3
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b94b8
    LEA EAX,[ESP + 0x20a4]              ; 004b94bb
    PUSH EAX                            ; 004b94c2
    LEA EAX,[ESP + 0x21a8]              ; 004b94c3
    PUSH EAX                            ; 004b94ca
    PUSH 0x0                            ; 004b94cb
    PUSH 0x0                            ; 004b94cd
    MOV ESI,dword ptr [ESP + 0x230c]    ; 004b94cf
    PUSH ESI                            ; 004b94d6
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004b94d7
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b94dc
    LEA EAX,[ESP + 0x20a4]              ; 004b94df
    PUSH EAX                            ; 004b94e6
    LEA EAX,[ESP + 0x21a8]              ; 004b94e7
    PUSH EAX                            ; 004b94ee
    LEA EAX,[ESP + 0x1eac]              ; 004b94ef
    PUSH EAX                            ; 004b94f6
    LEA EAX,[ESP + 0x2330]              ; 004b94f7
    PUSH EAX                            ; 004b94fe
    LEA EAX,[EBX + 0x204]               ; 004b94ff
    PUSH EAX                            ; 004b9505
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b9506
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b950b
    LEA ESI,[ESP + 0x21a4]              ; 004b950e
    MOV EDI,EBX                         ; 004b9515
    PUSH EDI                            ; 004b9517
    MOV AL,byte ptr [ESI]               ; 004b9518
        ;   Label: LAB_004b9518
    MOV byte ptr [EDI],AL               ; 004b951a
    CMP AL,0x0                          ; 004b951c
    JZ 0x004b9530                       ; 004b951e
        ;   XREF to: 004b9530 (CONDITIONAL_JUMP)  ; LAB_004b9530
    MOV AL,byte ptr [ESI + 0x1]         ; 004b9520
    ADD ESI,0x2                         ; 004b9523
    MOV byte ptr [EDI + 0x1],AL         ; 004b9526
    ADD EDI,0x2                         ; 004b9529
    CMP AL,0x0                          ; 004b952c
    JNZ 0x004b9518                      ; 004b952e
        ;   XREF to: 004b9518 (CONDITIONAL_JUMP)  ; LAB_004b9518
    POP EDI                             ; 004b9530
        ;   Label: LAB_004b9530
    MOV byte ptr [EBX + 0x308],0x0      ; 004b9531
    MOV dword ptr [EBX + 0x370],0x5     ; 004b9538
    MOV dword ptr [EBX + 0x36c],0x62867f ; 004b9542 | = "POD not under version control"
    MOV dword ptr [EBX + 0x378],0x0     ; 004b954c
    MOV dword ptr [EBX + 0x374],0x1     ; 004b9556
    JMP 0x004b8d34                      ; 004b9560
        ;   XREF to: 004b8d34 (UNCONDITIONAL_JUMP)  ; LAB_004b8d34
    PUSH 0x0                            ; 004b9565
        ;   Label: LAB_004b9565
    LEA EAX,[ESP + 0xc30]               ; 004b9567
    PUSH EAX                            ; 004b956e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b956f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    JMP 0x004b901b                      ; 004b9574
        ;   XREF to: 004b901b (UNCONDITIONAL_JUMP)  ; LAB_004b901b
    LEA EAX,[EBP + 0x100]               ; 004b9579
        ;   Label: caseD_4
    PUSH EAX                            ; 004b957f
    PUSH 0x62870e                       ; 004b9580 | = "You don't have the pod %s\n"
    PUSH EBX                            ; 004b9585
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9586
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b958b
    ADD EBX,EAX                         ; 004b958e
        ;   Label: LAB_004b958e
    CMP dword ptr [EBP + 0x370],0x5     ; 004b9590
        ;   Label: LAB_004b9590
    JZ 0x004b96b3                       ; 004b9597
        ;   XREF to: 004b96b3 (CONDITIONAL_JUMP)  ; LAB_004b96b3
    PUSH 0x6287ed                       ; 004b959d | = "---------------------\n"
    PUSH EBX                            ; 004b95a2
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b95a3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004b95a8
    ADD EBX,EAX                         ; 004b95ab
    LEA EAX,[EBP + 0x204]               ; 004b95ad
    PUSH EAX                            ; 004b95b3
    MOV EAX,dword ptr [EBP + 0x390]     ; 004b95b4
    PUSH EAX                            ; 004b95ba
    PUSH 0x628804                       ; 004b95bb | = "Of the %d files in %s:\n"
    PUSH EBX                            ; 004b95c0
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b95c1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b95c6
    MOV EDX,dword ptr [EBP + 0x384]     ; 004b95c9
    ADD EBX,EAX                         ; 004b95cf
    TEST EDX,EDX                        ; 004b95d1
    JLE 0x004b95e6                      ; 004b95d3
        ;   XREF to: 004b95e6 (CONDITIONAL_JUMP)  ; LAB_004b95e6
    PUSH EDX                            ; 004b95d5
    PUSH 0x62881c                       ; 004b95d6 | = "%d files don't exist locally\n"
    PUSH EBX                            ; 004b95db
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b95dc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b95e1
    ADD EBX,EAX                         ; 004b95e4
    MOV ESI,dword ptr [EBP + 0x37c]     ; 004b95e6
        ;   Label: LAB_004b95e6
    TEST ESI,ESI                        ; 004b95ec
    JLE 0x004b9601                      ; 004b95ee
        ;   XREF to: 004b9601 (CONDITIONAL_JUMP)  ; LAB_004b9601
    PUSH ESI                            ; 004b95f0
    PUSH 0x62883a                       ; 004b95f1 | = "%d local files are newer\n"
    PUSH EBX                            ; 004b95f6
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b95f7
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b95fc
    ADD EBX,EAX                         ; 004b95ff
    MOV EAX,dword ptr [EBP + 0x380]     ; 004b9601
        ;   Label: LAB_004b9601
    TEST EAX,EAX                        ; 004b9607
    JLE 0x004b961c                      ; 004b9609
        ;   XREF to: 004b961c (CONDITIONAL_JUMP)  ; LAB_004b961c
    PUSH EAX                            ; 004b960b
    PUSH 0x628854                       ; 004b960c | = "%d local files are older\n"
    PUSH EBX                            ; 004b9611
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9612
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b9617
    ADD EBX,EAX                         ; 004b961a
    MOV ECX,dword ptr [EBP + 0x388]     ; 004b961c
        ;   Label: LAB_004b961c
    TEST ECX,ECX                        ; 004b9622
    JLE 0x004b9637                      ; 004b9624
        ;   XREF to: 004b9637 (CONDITIONAL_JUMP)  ; LAB_004b9637
    PUSH ECX                            ; 004b9626
    PUSH 0x62886e                       ; 004b9627 | = "%d local files are different\n"
    PUSH EBX                            ; 004b962c
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b962d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b9632
    ADD EBX,EAX                         ; 004b9635
    MOV EDI,dword ptr [EBP + 0x38c]     ; 004b9637
        ;   Label: LAB_004b9637
    TEST EDI,EDI                        ; 004b963d
    JLE 0x004b9652                      ; 004b963f
        ;   XREF to: 004b9652 (CONDITIONAL_JUMP)  ; LAB_004b9652
    PUSH EDI                            ; 004b9641
    PUSH 0x62888c                       ; 004b9642 | = "%d local files are in sync\n"
    PUSH EBX                            ; 004b9647
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9648
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b964d
    ADD EBX,EAX                         ; 004b9650
    PUSH 0x6288a8                       ; 004b9652 | = "---------------------\n"
        ;   Label: LAB_004b9652
    PUSH EBX                            ; 004b9657
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9658
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004b965d
    MOV DH,byte ptr [EBP + 0x308]       ; 004b9660
    ADD EBX,EAX                         ; 004b9666
    TEST DH,DH                          ; 004b9668
    JZ 0x004b9698                       ; 004b966a
        ;   XREF to: 004b9698 (CONDITIONAL_JUMP)  ; LAB_004b9698
    PUSH 0x2d12bd0                      ; 004b966c | g_VersionControlSession
    LEA ESI,[EBP + 0x308]               ; 004b9671
    PUSH ESI                            ; 004b9677
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b9678
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b967d
    TEST EAX,EAX                        ; 004b9680
    JNZ 0x004b98e8                      ; 004b9682
        ;   XREF to: 004b98e8 (CONDITIONAL_JUMP)  ; LAB_004b98e8
    PUSH 0x6288bf                       ; 004b9688 | = "You currently have this pod checked o..."
    PUSH EBX                            ; 004b968d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b968e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004b9693
    ADD EBX,EAX                         ; 004b9696
        ;   Label: LAB_004b9696
    CMP dword ptr [EBP + 0x374],0x0     ; 004b9698
        ;   Label: LAB_004b9698
    JZ 0x004b98fc                       ; 004b969f
        ;   XREF to: 004b98fc (CONDITIONAL_JUMP)  ; LAB_004b98fc
    PUSH 0x62890f                       ; 004b96a5 | = "Your currently have this pod mounted.\n"
    PUSH EBX                            ; 004b96aa
        ;   Label: LAB_004b96aa
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b96ab
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004b96b0
    LEA EAX,[ESP + 0xfd4]               ; 004b96b3
        ;   Label: LAB_004b96b3
    PUSH EAX                            ; 004b96ba
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b96bb
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b96c0
    MOV ECX,dword ptr [0x00679da0]      ; 004b96c3 | g_PodFileActionNames
    PUSH ECX                            ; 004b96c9 | = "Skip"
    LEA EAX,[ESP + 0xfd8]               ; 004b96ca
    PUSH EAX                            ; 004b96d1
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b96d2
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV EBX,dword ptr [EBP + 0x370]     ; 004b96d7
    ADD ESP,0x8                         ; 004b96dd
    CMP EBX,0x5                         ; 004b96e0
    JZ 0x004b96fc                       ; 004b96e3
        ;   XREF to: 004b96fc (CONDITIONAL_JUMP)  ; LAB_004b96fc
    MOV ESI,dword ptr [0x00679da4]      ; 004b96e5 | g_PodFileActionNames[1]
    PUSH ESI                            ; 004b96eb | = "Copy"
    LEA EAX,[ESP + 0xfd8]               ; 004b96ec
    PUSH EAX                            ; 004b96f3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b96f4
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b96f9
    CMP dword ptr [EBP + 0x374],0x0     ; 004b96fc
        ;   Label: LAB_004b96fc
    JZ 0x004b9906                       ; 004b9703
        ;   XREF to: 004b9906 (CONDITIONAL_JUMP)  ; LAB_004b9906
    CMP dword ptr [EBP + 0x370],0x5     ; 004b9709
        ;   Label: LAB_004b9709
    JZ 0x004b9729                       ; 004b9710
        ;   XREF to: 004b9729 (CONDITIONAL_JUMP)  ; LAB_004b9729
    MOV EBX,dword ptr [0x00679dac]      ; 004b9712 | PTR_s_Copy_Extract_00628460_00679dac
    PUSH EBX                            ; 004b9718 | = "Copy & Extract"
    LEA EAX,[ESP + 0xfd8]               ; 004b9719
    PUSH EAX                            ; 004b9720
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b9721
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b9726
    CMP dword ptr [EBP + 0x370],0x5     ; 004b9729
        ;   Label: LAB_004b9729
    JNZ 0x004b9749                      ; 004b9730
        ;   XREF to: 004b9749 (CONDITIONAL_JUMP)  ; LAB_004b9749
    MOV EDI,dword ptr [0x00679db0]      ; 004b9732 | g_PodFileActionNames[4]
    PUSH EDI                            ; 004b9738 | = "Dismount"
    LEA EAX,[ESP + 0xfd8]               ; 004b9739
    PUSH EAX                            ; 004b9740
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b9741
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b9746
    CMP dword ptr [EBP + 0x370],0x5     ; 004b9749
        ;   Label: LAB_004b9749
    JNZ 0x004b9769                      ; 004b9750
        ;   XREF to: 004b9769 (CONDITIONAL_JUMP)  ; LAB_004b9769
    MOV EDX,dword ptr [0x00679db4]      ; 004b9752 | PTR_s_Dismount_Delete_00628478_00679db4
    PUSH EDX                            ; 004b9758 | = "Dismount & Delete"
    LEA EAX,[ESP + 0xfd8]               ; 004b9759
    PUSH EAX                            ; 004b9760
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b9761
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b9766
    CMP dword ptr [EBP + 0x370],0x5     ; 004b9769
        ;   Label: LAB_004b9769
    JNZ 0x004b992f                      ; 004b9770
        ;   XREF to: 004b992f (CONDITIONAL_JUMP)  ; LAB_004b992f
    MOV EAX,dword ptr [EBP + 0x378]     ; 004b9776
        ;   Label: LAB_004b9776
    MOV EBX,dword ptr [EAX*0x4 + 0x679da0] ; 004b977c | g_PodFileActionNames
    PUSH EBX                            ; 004b9783
    LEA EAX,[ESP + 0xfd8]               ; 004b9784
    PUSH EAX                            ; 004b978b
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 004b978c
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    LEA EBX,[EBP + 0x204]               ; 004b9791
    ADD ESP,0x8                         ; 004b9797
    MOV ESI,EAX                         ; 004b979a
    XOR EDI,EDI                         ; 004b979c
    PUSH EDI                            ; 004b979e
        ;   Label: LAB_004b979e
    PUSH ESI                            ; 004b979f
    LEA EAX,[ESP + 0x8]                 ; 004b97a0
    PUSH EAX                            ; 004b97a4
    LEA EAX,[ESP + 0xfe0]               ; 004b97a5
    PUSH EAX                            ; 004b97ac
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b97ad
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004b97b2
    MOV ESI,EAX                         ; 004b97b5
    TEST EAX,EAX                        ; 004b97b7
    JL 0x004b9978                       ; 004b97b9
        ;   XREF to: 004b9978 (CONDITIONAL_JUMP)  ; LAB_004b9978
    PUSH 0x679db8                       ; 004b97bf | = "Show local file differences"
    PUSH EAX                            ; 004b97c4
    LEA EAX,[ESP + 0xfdc]               ; 004b97c5
    PUSH EAX                            ; 004b97cc
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b97cd
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004b97d2
    PUSH EAX                            ; 004b97d5
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b97d6
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b97db
    TEST EAX,EAX                        ; 004b97de
    JNZ 0x004b9949                      ; 004b97e0
        ;   XREF to: 004b9949 (CONDITIONAL_JUMP)  ; LAB_004b9949
    PUSH EBX                            ; 004b97e6
    MOV EAX,dword ptr [ESP + 0x2340]    ; 004b97e7
    PUSH EAX                            ; 004b97ee
    CALL engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 ; 004b97ef
        ;   XREF to: 004b82a0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004b97f4
    JMP 0x004b979e                      ; 004b97f7
        ;   XREF to: 004b979e (UNCONDITIONAL_JUMP)  ; LAB_004b979e
    PUSH ESI                            ; 004b97f9
        ;   Label: caseD_0
    LEA EAX,[EBP + 0x100]               ; 004b97fa
    PUSH EAX                            ; 004b9800
    PUSH 0x628729                       ; 004b9801 | = "Your pod %s is newer than %s\n"
    PUSH EBX                            ; 004b9806
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9807
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b980c
    JMP 0x004b958e                      ; 004b980f
        ;   XREF to: 004b958e (UNCONDITIONAL_JUMP)  ; LAB_004b958e
    PUSH ESI                            ; 004b9814
        ;   Label: caseD_1
    LEA EAX,[EBP + 0x100]               ; 004b9815
    PUSH EAX                            ; 004b981b
    PUSH 0x628747                       ; 004b981c | = "Your pod %s is older than %s\n"
    PUSH EBX                            ; 004b9821
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9822
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b9827
    JMP 0x004b958e                      ; 004b982a
        ;   XREF to: 004b958e (UNCONDITIONAL_JUMP)  ; LAB_004b958e
    PUSH ESI                            ; 004b982f
        ;   Label: caseD_2
    LEA EAX,[EBP + 0x100]               ; 004b9830
    PUSH EAX                            ; 004b9836
    PUSH 0x628765                       ; 004b9837 | = "Your pod %s is different than %s\n"
    PUSH EBX                            ; 004b983c
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b983d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b9842
    JMP 0x004b958e                      ; 004b9845
        ;   XREF to: 004b958e (UNCONDITIONAL_JUMP)  ; LAB_004b958e
    PUSH ESI                            ; 004b984a
        ;   Label: caseD_3
    LEA EAX,[EBP + 0x100]               ; 004b984b
    PUSH EAX                            ; 004b9851
    PUSH 0x628787                       ; 004b9852 | = "Your pod %s is the same as %s\n"
    PUSH EBX                            ; 004b9857
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9858
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b985d
    JMP 0x004b958e                      ; 004b9860
        ;   XREF to: 004b958e (UNCONDITIONAL_JUMP)  ; LAB_004b958e
    PUSH ESI                            ; 004b9865
        ;   Label: caseD_5
    LEA EAX,[EBP + 0x100]               ; 004b9866
    PUSH EAX                            ; 004b986c
    PUSH 0x6287a6                       ; 004b986d | = "%s is mounted, but %s does not exist\n"
    PUSH EBX                            ; 004b9872
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9873
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b9878
    JMP 0x004b958e                      ; 004b987b
        ;   XREF to: 004b958e (UNCONDITIONAL_JUMP)  ; LAB_004b958e
    MOV ECX,0x6287cc                    ; 004b9880 | = "..\\engine\\fileio.cpp"
        ;   Label: default
    MOV ESI,0xd1c                       ; 004b9885
    PUSH 0x6287e1                       ; 004b988a | = "Hell froze."
    MOV dword ptr [0x02f0ca48],ECX      ; 004b988f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004b9895 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b989b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b98a0
    JMP 0x004b9590                      ; 004b98a3
        ;   XREF to: 004b9590 (UNCONDITIONAL_JUMP)  ; LAB_004b9590
    IMUL EAX,EAX,0x39c                  ; 004b98a8
        ;   Label: LAB_004b98a8
    MOV EBP,dword ptr [ESP + 0x22f4]    ; 004b98ae
    ADD EBP,EAX                         ; 004b98b5
    LEA ESI,[EBP + 0x204]               ; 004b98b7
    PUSH ESI                            ; 004b98bd
    PUSH 0x6286f8                       ; 004b98be | = "Select action for %s\n"
    LEA EAX,[ESP + 0x8]                 ; 004b98c3
    PUSH EAX                            ; 004b98c7
    LEA EBX,[ESP + 0xc]                 ; 004b98c8
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b98cc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD EBX,EAX                         ; 004b98d1
    MOV EAX,dword ptr [EBP + 0x370]     ; 004b98d3
    ADD ESP,0xc                         ; 004b98d9
    CMP EAX,0x5                         ; 004b98dc
    JA 0x004b9880                       ; 004b98df
        ;   XREF to: 004b9880 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4b868c]  ; 004b98e1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH ESI                            ; 004b98e8
        ;   Label: LAB_004b98e8
    PUSH 0x6288e8                       ; 004b98e9 | = "%s currently has this pod checked out\n"
    PUSH EBX                            ; 004b98ee
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b98ef
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b98f4
    JMP 0x004b9696                      ; 004b98f7
        ;   XREF to: 004b9696 (UNCONDITIONAL_JUMP)  ; LAB_004b9696
    PUSH 0x628936                       ; 004b98fc | = "Your currently do not have this pod m..."
        ;   Label: LAB_004b98fc
    JMP 0x004b96aa                      ; 004b9901
        ;   XREF to: 004b96aa (UNCONDITIONAL_JUMP)  ; LAB_004b96aa
    CMP dword ptr [EBP + 0x370],0x5     ; 004b9906
        ;   Label: LAB_004b9906
    JZ 0x004b9709                       ; 004b990d
        ;   XREF to: 004b9709 (CONDITIONAL_JUMP)  ; LAB_004b9709
    MOV EDX,dword ptr [0x00679da8]      ; 004b9913 | PTR_s_Copy_Mount_00628453_00679da8
    PUSH EDX                            ; 004b9919 | = "Copy & Mount"
    LEA EAX,[ESP + 0xfd8]               ; 004b991a
    PUSH EAX                            ; 004b9921
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b9922
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b9927
    JMP 0x004b9709                      ; 004b992a
        ;   XREF to: 004b9709 (UNCONDITIONAL_JUMP)  ; LAB_004b9709
    PUSH 0x679db8                       ; 004b992f | = "Show local file differences"
        ;   Label: LAB_004b992f
    LEA EAX,[ESP + 0xfd8]               ; 004b9934
    PUSH EAX                            ; 004b993b
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b993c
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b9941
    JMP 0x004b9776                      ; 004b9944
        ;   XREF to: 004b9776 (UNCONDITIONAL_JUMP)  ; LAB_004b9776
    XOR EBX,EBX                         ; 004b9949
        ;   Label: LAB_004b9949
    XOR EDI,EDI                         ; 004b994b
    MOV EDX,dword ptr [EBX + 0x679da0]  ; 004b994d | g_PodFileActionNames | g_PodFileActionNames[1]
        ;   Label: LAB_004b994d
    PUSH EDX                            ; 004b9953 | = "Skip" | s_Copy_0062844e
    PUSH ESI                            ; 004b9954
    LEA EAX,[ESP + 0xfdc]               ; 004b9955
    PUSH EAX                            ; 004b995c
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b995d
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004b9962
    PUSH EAX                            ; 004b9965
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b9966
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b996b
    TEST EAX,EAX                        ; 004b996e
    JNZ 0x004b99a1                      ; 004b9970
        ;   XREF to: 004b99a1 (CONDITIONAL_JUMP)  ; LAB_004b99a1
    MOV dword ptr [EBP + 0x378],EDI     ; 004b9972
    PUSH 0x0                            ; 004b9978
        ;   Label: LAB_004b9978
    LEA EAX,[ESP + 0xfd8]               ; 004b997a
    PUSH EAX                            ; 004b9981
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b9982
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b9987
    PUSH 0x0                            ; 004b998a
    LEA EAX,[ESP + 0xc30]               ; 004b998c
    PUSH EAX                            ; 004b9993
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b9994
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b9999
    JMP 0x004b8d5b                      ; 004b999c
        ;   XREF to: 004b8d5b (UNCONDITIONAL_JUMP)  ; LAB_004b8d5b
    ADD EBX,0x4                         ; 004b99a1
        ;   Label: LAB_004b99a1
    INC EDI                             ; 004b99a4
    CMP EBX,0x18                        ; 004b99a5
    JL 0x004b994d                       ; 004b99a8
        ;   XREF to: 004b994d (CONDITIONAL_JUMP)  ; LAB_004b994d
    JMP 0x004b9978                      ; 004b99aa
        ;   XREF to: 004b9978 (UNCONDITIONAL_JUMP)  ; LAB_004b9978
    OR AL,0x8                           ; 004b99ac
        ;   Label: LAB_004b99ac
    PUSH EAX                            ; 004b99ae
    MOV EBX,dword ptr [ESP + 0x2318]    ; 004b99af
    PUSH EBX                            ; 004b99b6
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b99b7
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
    ADD ESP,0x8                         ; 004b99bc
    JMP 0x004b8f32                      ; 004b99bf
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)  ; LAB_004b8f32
    CMP EDX,0x5                         ; 004b99c4
        ;   Label: LAB_004b99c4
    JNZ 0x004b99ef                      ; 004b99c7
        ;   XREF to: 004b99ef (CONDITIONAL_JUMP)  ; LAB_004b99ef
    PUSH 0x0                            ; 004b99c9
    MOV EBX,dword ptr [ESP + 0x2318]    ; 004b99cb
    PUSH EBX                            ; 004b99d2
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b99d3
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
    ADD ESP,0x8                         ; 004b99d8
    PUSH EBX                            ; 004b99db
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 004b99dc
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 004b99e1
    TEST EAX,EAX                        ; 004b99e4
    JNZ 0x004b9a3e                      ; 004b99e6
        ;   XREF to: 004b9a3e (CONDITIONAL_JUMP)  ; LAB_004b9a3e
    INC dword ptr [ESP + 0x22ec]        ; 004b99e8
    MOV ECX,dword ptr [EDI + 0x378]     ; 004b99ef
        ;   Label: LAB_004b99ef
    CMP ECX,0x4                         ; 004b99f5
    JNZ 0x004b9a54                      ; 004b99f8
        ;   XREF to: 004b9a54 (CONDITIONAL_JUMP)  ; LAB_004b9a54
    ADD EDI,0x100                       ; 004b99fa
        ;   Label: LAB_004b99fa
    PUSH EDI                            ; 004b9a00
    LEA EAX,[ESP + 0x22b8]              ; 004b9a01
    PUSH EAX                            ; 004b9a08
    MOV ECX,dword ptr [ESP + 0x2344]    ; 004b9a09
    PUSH ECX                            ; 004b9a10
    CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 ; 004b9a11
        ;   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
    ADD ESP,0xc                         ; 004b9a16
    TEST EAX,EAX                        ; 004b9a19
    JL 0x004b9bc0                       ; 004b9a1b
        ;   XREF to: 004b9bc0 (CONDITIONAL_JUMP)  ; LAB_004b9bc0
    PUSH EAX                            ; 004b9a21
    LEA EAX,[ESP + 0x22b8]              ; 004b9a22
    PUSH EAX                            ; 004b9a29
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 004b9a2a
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004b9a2f
    INC dword ptr [ESP + 0x22e8]        ; 004b9a32
    JMP 0x004b8f32                      ; 004b9a39
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)  ; LAB_004b8f32
    PUSH EBX                            ; 004b9a3e
        ;   Label: LAB_004b9a3e
    PUSH 0x628964                       ; 004b9a3f | = "Can't delete %s"
    MOV EAX,[0x00678a60]                ; 004b9a44 | g_CEditorToolsPtr
    PUSH EAX                            ; 004b9a49 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9a4a
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b9a4f
    JMP 0x004b99ef                      ; 004b9a52
        ;   XREF to: 004b99ef (UNCONDITIONAL_JUMP)  ; LAB_004b99ef
    CMP ECX,0x5                         ; 004b9a54
        ;   Label: LAB_004b9a54
    JZ 0x004b99fa                       ; 004b9a57
        ;   XREF to: 004b99fa (CONDITIONAL_JUMP)  ; LAB_004b99fa
    MOV CH,byte ptr [0x02d12ac8]        ; 004b9a59 | g_VersionControlDirectory
    XOR ESI,ESI                         ; 004b9a5f
    LEA EBX,[EDI + 0x100]               ; 004b9a61
    MOV dword ptr [ESP + 0x22cc],ESI    ; 004b9a67
    TEST CH,CH                          ; 004b9a6e
    JZ 0x004b9c0f                       ; 004b9a70
        ;   XREF to: 004b9c0f (CONDITIONAL_JUMP)  ; LAB_004b9c0f
    PUSH EBX                            ; 004b9a76
    PUSH 0x0                            ; 004b9a77
    MOV EBP,EBX                         ; 004b9a79
    CALL engine_dosio.c_getFileSizeWithFinder_FUN_00481960 ; 004b9a7b
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSizeWithFinder_FUN_00481960(char * directory, char * filename)
    ADD ESP,0x8                         ; 004b9a80
    LEA ESI,[EDI + 0x308]               ; 004b9a83
    MOV dword ptr [ESP + 0x2300],EAX    ; 004b9a89
    TEST EAX,EAX                        ; 004b9a90
    JL 0x004b9af4                       ; 004b9a92
        ;   XREF to: 004b9af4 (CONDITIONAL_JUMP)  ; LAB_004b9af4
    TEST ESI,ESI                        ; 004b9a94
    JZ 0x004b9bda                       ; 004b9a96
        ;   XREF to: 004b9bda (CONDITIONAL_JUMP)  ; LAB_004b9bda
    CMP byte ptr [ESI],0x0              ; 004b9a9c
    JZ 0x004b9bda                       ; 004b9a9f
        ;   XREF to: 004b9bda (CONDITIONAL_JUMP)  ; LAB_004b9bda
    PUSH 0x2d12bd0                      ; 004b9aa5 | g_VersionControlSession
    PUSH ESI                            ; 004b9aaa
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b9aab
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b9ab0
    TEST EAX,EAX                        ; 004b9ab3
    JNZ 0x004b9bda                      ; 004b9ab5
        ;   XREF to: 004b9bda (CONDITIONAL_JUMP)  ; LAB_004b9bda
    PUSH EBX                            ; 004b9abb
    PUSH 0x626502                       ; 004b9abc | = "You currently have %s checked out.  R..."
    LEA EAX,[ESP + 0x1bb4]              ; 004b9ac1
    PUSH EAX                            ; 004b9ac8
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9ac9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b9ace
    PUSH 0x2d12bf0                      ; 004b9ad1 | g_VersionControlSession.overwrite_own_choice
    LEA EAX,[ESP + 0x1bb0]              ; 004b9ad6
    PUSH EAX                            ; 004b9add
        ;   Label: LAB_004b9add
    CALL engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90 ; 004b9ade
        ;   XREF to: 004b2f90 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90(char * dialog_title, int * overwrite_state)
    ADD ESP,0x8                         ; 004b9ae3
    TEST EAX,EAX                        ; 004b9ae6
    JL 0x004b8f64                       ; 004b9ae8
        ;   XREF to: 004b8f64 (CONDITIONAL_JUMP)  ; LAB_004b8f64
    JZ 0x004b8f32                       ; 004b9aee
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)  ; LAB_004b8f32
    PUSH 0x0                            ; 004b9af4
        ;   Label: LAB_004b9af4
    LEA EAX,[EDI + 0x100]               ; 004b9af6
    PUSH EAX                            ; 004b9afc
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b9afd
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
    ADD ESP,0x8                         ; 004b9b02
    MOV EBP,dword ptr [ESP + 0x2318]    ; 004b9b05
        ;   Label: LAB_004b9b05
    PUSH EBP                            ; 004b9b0c
    LEA EAX,[ESP + 0x22a8]              ; 004b9b0d
    PUSH EAX                            ; 004b9b14
    XOR ESI,ESI                         ; 004b9b15
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b9b17
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004b9b1c
    MOV EBP,EAX                         ; 004b9b1f
    PUSH 0x153                          ; 004b9b21
        ;   Label: LAB_004b9b21
    PUSH 0x626129                       ; 004b9b26 | = "..\\engine\\fileio.cpp"
    PUSH 0x6289dc                       ; 004b9b2b | = "rb"
    PUSH 0x0                            ; 004b9b30
    PUSH EBP                            ; 004b9b32
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b9b33
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004b9b38
    ADD ESP,0x14                        ; 004b9b3a
    TEST EAX,EAX                        ; 004b9b3d
    JZ 0x004b9c43                       ; 004b9b3f
        ;   XREF to: 004b9c43 (CONDITIONAL_JUMP)  ; LAB_004b9c43
    PUSH 0x400                          ; 004b9b45
    PUSH 0x0                            ; 004b9b4a
    PUSH 0x0                            ; 004b9b4c
    PUSH EAX                            ; 004b9b4e
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004b9b4f
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_setvbuf_FUN_00601490(_FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004b9b54
    TEST EBX,EBX                        ; 004b9b57
    JZ 0x004b9c63                       ; 004b9b59
        ;   XREF to: 004b9c63 (CONDITIONAL_JUMP)  ; LAB_004b9c63
    PUSH 0xdbb                          ; 004b9b5f
    PUSH 0x6289ed                       ; 004b9b64 | = "..\\engine\\fileio.cpp"
    PUSH 0x628a02                       ; 004b9b69 | = "wb"
    PUSH 0x0                            ; 004b9b6e
    LEA EBP,[EDI + 0x100]               ; 004b9b70
    PUSH EBP                            ; 004b9b76
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b9b77
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV ESI,EAX                         ; 004b9b7c
    ADD ESP,0x14                        ; 004b9b7e
    TEST EAX,EAX                        ; 004b9b81
    JNZ 0x004b9c94                      ; 004b9b83
        ;   XREF to: 004b9c94 (CONDITIONAL_JUMP)  ; LAB_004b9c94
    TEST EBX,EBX                        ; 004b9b89
    JZ 0x004b9ba0                       ; 004b9b8b
        ;   XREF to: 004b9ba0 (CONDITIONAL_JUMP)  ; LAB_004b9ba0
    PUSH 0xc4                           ; 004b9b8d
    PUSH 0x62604b                       ; 004b9b92 | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004b9b97
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b9b98
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b9b9d
    ADD EDI,0x100                       ; 004b9ba0
        ;   Label: LAB_004b9ba0
    PUSH EDI                            ; 004b9ba6
    PUSH 0x628a05                       ; 004b9ba7 | = "Can't create local %s"
    MOV EDI,dword ptr [0x00678a60]      ; 004b9bac | g_CEditorToolsPtr
    PUSH EDI                            ; 004b9bb2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9bb3
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b9bb8
    JMP 0x004b8f32                      ; 004b9bbb
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)  ; LAB_004b8f32
    PUSH EDI                            ; 004b9bc0
        ;   Label: LAB_004b9bc0
    PUSH 0x628974                       ; 004b9bc1 | = "Can't dismount %s because it isn't mo..."
    MOV EBX,dword ptr [0x00678a60]      ; 004b9bc6 | g_CEditorToolsPtr
    PUSH EBX                            ; 004b9bcc | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9bcd
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b9bd2
    JMP 0x004b8f32                      ; 004b9bd5
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)  ; LAB_004b8f32
    TEST byte ptr [ESP + 0x2300],0x8    ; 004b9bda
        ;   Label: LAB_004b9bda
    JNZ 0x004b9af4                      ; 004b9be2
        ;   XREF to: 004b9af4 (CONDITIONAL_JUMP)  ; LAB_004b9af4
    PUSH EBP                            ; 004b9be8
    PUSH 0x62654c                       ; 004b9be9 | = "A writable copy of %s exists.  Replac..."
    LEA EAX,[ESP + 0x19c0]              ; 004b9bee
    PUSH EAX                            ; 004b9bf5
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9bf6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b9bfb
    PUSH 0x2d12bf4                      ; 004b9bfe | g_VersionControlSession.overwrite_writeable_choice
    LEA EAX,[ESP + 0x19bc]              ; 004b9c03
    JMP 0x004b9add                      ; 004b9c0a
        ;   XREF to: 004b9add (UNCONDITIONAL_JUMP)  ; LAB_004b9add
    PUSH EBX                            ; 004b9c0f
        ;   Label: LAB_004b9c0f
    PUSH ESI                            ; 004b9c10
    CALL engine_dosio.c_getFileSizeWithFinder_FUN_00481960 ; 004b9c11
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSizeWithFinder_FUN_00481960(char * directory, char * filename)
    ADD ESP,0x8                         ; 004b9c16
    TEST EAX,EAX                        ; 004b9c19
    JL 0x004b9b05                       ; 004b9c1b
        ;   XREF to: 004b9b05 (CONDITIONAL_JUMP)  ; LAB_004b9b05
    TEST AL,0x8                         ; 004b9c21
    JZ 0x004b9b05                       ; 004b9c23
        ;   XREF to: 004b9b05 (CONDITIONAL_JUMP)  ; LAB_004b9b05
    PUSH EBX                            ; 004b9c29
    PUSH 0x6289ae                       ; 004b9c2a | = "%s exists and is read only.  Cannot c..."
    MOV EDI,dword ptr [0x00678a60]      ; 004b9c2f | g_CEditorToolsPtr
    PUSH EDI                            ; 004b9c35 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9c36
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b9c3b
    JMP 0x004b8f32                      ; 004b9c3e
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)  ; LAB_004b8f32
    CALL crt_errno.c__errno_FUN_00601450 ; 004b9c43
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_00601450()
        ;   Label: LAB_004b9c43
    CMP dword ptr [EAX],0x6             ; 004b9c48
    JNZ 0x004b9c63                      ; 004b9c4b
        ;   XREF to: 004b9c63 (CONDITIONAL_JUMP)  ; LAB_004b9c63
    PUSH 0x1f4                          ; 004b9c4d
    INC ESI                             ; 004b9c52
    CALL dword ptr CS:[0x611644]        ; 004b9c53 | g_SleepFunc
    CMP ESI,0xa                         ; 004b9c5a
    JL 0x004b9b21                       ; 004b9c5d
        ;   XREF to: 004b9b21 (CONDITIONAL_JUMP)  ; LAB_004b9b21
    MOV EBP,dword ptr [ESP + 0x2318]    ; 004b9c63
        ;   Label: LAB_004b9c63
    PUSH EBP                            ; 004b9c6a
    LEA EAX,[ESP + 0x22a8]              ; 004b9c6b
    PUSH EAX                            ; 004b9c72
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b9c73
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004b9c78
    PUSH EAX                            ; 004b9c7b
    PUSH 0x6289df                       ; 004b9c7c | = "Can't open %s"
    MOV EAX,[0x00678a60]                ; 004b9c81 | g_CEditorToolsPtr
    PUSH EAX                            ; 004b9c86 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9c87
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b9c8c
    JMP 0x004b8f32                      ; 004b9c8f
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)  ; LAB_004b8f32
    MOV ECX,dword ptr [EDI + 0x398]     ; 004b9c94
        ;   Label: LAB_004b9c94
    PUSH ECX                            ; 004b9c9a
    PUSH EBP                            ; 004b9c9b
    MOV EBP,dword ptr [ESP + 0x2320]    ; 004b9c9c
    PUSH EBP                            ; 004b9ca3
    LEA EAX,[ESP + 0x22b0]              ; 004b9ca4
    PUSH EAX                            ; 004b9cab
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b9cac
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004b9cb1
    PUSH EAX                            ; 004b9cb4
    PUSH ESI                            ; 004b9cb5
    PUSH EBX                            ; 004b9cb6
    CALL engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 ; 004b9cb7
        ;   XREF to: 004b2030 (UNCONDITIONAL_CALL)  ; char * engine_fileio.cpp_copyFileWithProgress_FUN_004b2030(_FILE * source_file, _FILE * dest_file, char * source_filename, char * dest_filename, ...)
    ADD ESP,0x14                        ; 004b9cbc
    PUSH 0xdc5                          ; 004b9cbf
    PUSH 0x628a1b                       ; 004b9cc4 | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004b9cc9
    MOV EBP,EAX                         ; 004b9cca
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b9ccc
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b9cd1
    PUSH 0xdc6                          ; 004b9cd4
    PUSH 0x628a30                       ; 004b9cd9 | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004b9cde
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b9cdf
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b9ce4
    TEST EBP,EBP                        ; 004b9ce7
    JZ 0x004b9d09                       ; 004b9ce9
        ;   XREF to: 004b9d09 (CONDITIONAL_JUMP)  ; LAB_004b9d09
    MOV EAX,0x628a45                    ; 004b9ceb | = "..\\engine\\fileio.cpp"
    MOV EDX,0xdc7                       ; 004b9cf0
    PUSH EBP                            ; 004b9cf5
    MOV [0x02f0ca48],EAX                ; 004b9cf6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004b9cfb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b9d01
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b9d06
    MOV EAX,dword ptr [EDI + 0x394]     ; 004b9d09
        ;   Label: LAB_004b9d09
    MOV ECX,dword ptr [ESP + 0x22dc]    ; 004b9d0f
    PUSH EAX                            ; 004b9d16
    LEA EBX,[EDI + 0x100]               ; 004b9d17
    INC ECX                             ; 004b9d1d
    PUSH EBX                            ; 004b9d1e
    MOV dword ptr [ESP + 0x22e4],ECX    ; 004b9d1f
    CALL engine_dosio.c_copyFileTimestamp_FUN_00481910 ; 004b9d26
        ;   XREF to: 00481910 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_copyFileTimestamp_FUN_00481910(char * source_file, char * dest_file)
    ADD ESP,0x8                         ; 004b9d2b
    TEST EAX,EAX                        ; 004b9d2e
    JZ 0x004b9dee                       ; 004b9d30
        ;   XREF to: 004b9dee (CONDITIONAL_JUMP)  ; LAB_004b9dee
    CMP byte ptr [0x02d12ac8],0x0       ; 004b9d36 | g_VersionControlDirectory
        ;   Label: LAB_004b9d36
    JZ 0x004b9d78                       ; 004b9d3d
        ;   XREF to: 004b9d78 (CONDITIONAL_JUMP)  ; LAB_004b9d78
    PUSH 0x2d12bd0                      ; 004b9d3f | g_VersionControlSession
    LEA EAX,[EDI + 0x308]               ; 004b9d44
    PUSH EAX                            ; 004b9d4a
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b9d4b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b9d50
    TEST EAX,EAX                        ; 004b9d53
    JZ 0x004b9d78                       ; 004b9d55
        ;   XREF to: 004b9d78 (CONDITIONAL_JUMP)  ; LAB_004b9d78
    MOV EAX,dword ptr [ESP + 0x22cc]    ; 004b9d57
    OR AL,0x8                           ; 004b9d5e
    PUSH EAX                            ; 004b9d60
    LEA EBX,[EDI + 0x100]               ; 004b9d61
    PUSH EBX                            ; 004b9d67
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b9d68
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
    ADD ESP,0x8                         ; 004b9d6d
    TEST EAX,EAX                        ; 004b9d70
    JZ 0x004b9e08                       ; 004b9d72
        ;   XREF to: 004b9e08 (CONDITIONAL_JUMP)  ; LAB_004b9e08
    CMP dword ptr [EDI + 0x378],0x3     ; 004b9d78
        ;   Label: LAB_004b9d78
    JZ 0x004b9d9e                       ; 004b9d7f
        ;   XREF to: 004b9d9e (CONDITIONAL_JUMP)  ; LAB_004b9d9e
    LEA EBX,[EDI + 0x100]               ; 004b9d81
    PUSH EBX                            ; 004b9d87
    MOV EAX,[0x00680cdc]                ; 004b9d88 | g_CDemonPodPtr
    PUSH EAX                            ; 004b9d8d | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280 ; 004b9d8e
        ;   XREF to: 00551280 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280(CPod * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004b9d93
    TEST EAX,EAX                        ; 004b9d96
    JZ 0x004b9e22                       ; 004b9d98
        ;   XREF to: 004b9e22 (CONDITIONAL_JUMP)  ; LAB_004b9e22
    MOV EAX,dword ptr [EDI + 0x378]     ; 004b9d9e
        ;   Label: LAB_004b9d9e
    CMP EAX,0x2                         ; 004b9da4
    JC 0x004b8f32                       ; 004b9da7
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)  ; LAB_004b8f32
    ADD EDI,0x100                       ; 004b9dad
    CMP EAX,0x2                         ; 004b9db3
    JBE 0x004b9e3c                      ; 004b9db6
        ;   XREF to: 004b9e3c (CONDITIONAL_JUMP)  ; LAB_004b9e3c
    CMP EAX,0x3                         ; 004b9dbc
    JNZ 0x004b8f32                      ; 004b9dbf
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)  ; LAB_004b8f32
    PUSH 0x1                            ; 004b9dc5
    MOV EAX,dword ptr [ESP + 0x2340]    ; 004b9dc7
    PUSH EDI                            ; 004b9dce
    MOV ECX,dword ptr [ESP + 0x2344]    ; 004b9dcf
    MOV EAX,dword ptr [EAX + 0x138810]  ; 004b9dd6
    PUSH ECX                            ; 004b9ddc
    CALL dword ptr [EAX]                ; 004b9ddd
    ADD ESP,0xc                         ; 004b9ddf
    INC dword ptr [ESP + 0x22e4]        ; 004b9de2
    JMP 0x004b8f32                      ; 004b9de9
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)  ; LAB_004b8f32
    PUSH EBX                            ; 004b9dee
        ;   Label: LAB_004b9dee
    PUSH 0x626577                       ; 004b9def | = "WARNING: Error setting date/time on %..."
    MOV EBX,dword ptr [0x00678a60]      ; 004b9df4 | g_CEditorToolsPtr
    PUSH EBX                            ; 004b9dfa | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9dfb
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b9e00
    JMP 0x004b9d36                      ; 004b9e03
        ;   XREF to: 004b9d36 (UNCONDITIONAL_JUMP)  ; LAB_004b9d36
    PUSH EBX                            ; 004b9e08
        ;   Label: LAB_004b9e08
    PUSH 0x628a5a                       ; 004b9e09 | = "Warning: couldn't mark %s as read-only."
    MOV ESI,dword ptr [0x00678a60]      ; 004b9e0e | g_CEditorToolsPtr
    PUSH ESI                            ; 004b9e14 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9e15
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b9e1a
    JMP 0x004b9d78                      ; 004b9e1d
        ;   XREF to: 004b9d78 (UNCONDITIONAL_JUMP)  ; LAB_004b9d78
    PUSH EBX                            ; 004b9e22
        ;   Label: LAB_004b9e22
    PUSH 0x628a82                       ; 004b9e23 | = "Warning: %s failed CRC check"
    MOV EDX,dword ptr [0x00678a60]      ; 004b9e28 | g_CEditorToolsPtr
    PUSH EDX                            ; 004b9e2e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9e2f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b9e34
    JMP 0x004b9d9e                      ; 004b9e37
        ;   XREF to: 004b9d9e (UNCONDITIONAL_JUMP)  ; LAB_004b9d9e
    PUSH EDI                            ; 004b9e3c
        ;   Label: LAB_004b9e3c
    LEA EAX,[ESP + 0x22b8]              ; 004b9e3d
    PUSH EAX                            ; 004b9e44
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b9e45
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b9e4a
    INC dword ptr [ESP + 0x22e0]        ; 004b9e4d
    JMP 0x004b8f32                      ; 004b9e54
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)  ; LAB_004b8f32
    CMP dword ptr [ESP + 0x22e8],0x0    ; 004b9e59
        ;   Label: LAB_004b9e59
    JG 0x004b8f83                       ; 004b9e61
        ;   XREF to: 004b8f83 (CONDITIONAL_JUMP)  ; LAB_004b8f83
    JMP 0x004b8f9b                      ; 004b9e67
        ;   XREF to: 004b8f9b (UNCONDITIONAL_JUMP)  ; LAB_004b8f9b
    MOV EDX,dword ptr [ESP + 0x22dc]    ; 004b9e6c
        ;   Label: LAB_004b9e6c
    LEA EDI,[ESP + 0x1da0]              ; 004b9e73
    TEST EDX,EDX                        ; 004b9e7a
    JLE 0x004b9e96                      ; 004b9e7c
        ;   XREF to: 004b9e96 (CONDITIONAL_JUMP)  ; LAB_004b9e96
    PUSH EDX                            ; 004b9e7e
    PUSH 0x628ab1                       ; 004b9e7f | = "%d pods copied\n"
    PUSH EDI                            ; 004b9e84
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9e85
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    LEA EDI,[ESP + 0x1dac]              ; 004b9e8a
    ADD ESP,0xc                         ; 004b9e91
    ADD EDI,EAX                         ; 004b9e94
    MOV EBX,dword ptr [ESP + 0x22e4]    ; 004b9e96
        ;   Label: LAB_004b9e96
    TEST EBX,EBX                        ; 004b9e9d
    JLE 0x004b9eb2                      ; 004b9e9f
        ;   XREF to: 004b9eb2 (CONDITIONAL_JUMP)  ; LAB_004b9eb2
    PUSH EBX                            ; 004b9ea1
    PUSH 0x628ac1                       ; 004b9ea2 | = "%d pods extracted\n"
    PUSH EDI                            ; 004b9ea7
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9ea8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b9ead
    ADD EDI,EAX                         ; 004b9eb0
    MOV EBP,dword ptr [ESP + 0x22e0]    ; 004b9eb2
        ;   Label: LAB_004b9eb2
    TEST EBP,EBP                        ; 004b9eb9
    JLE 0x004b9ece                      ; 004b9ebb
        ;   XREF to: 004b9ece (CONDITIONAL_JUMP)  ; LAB_004b9ece
    PUSH EBP                            ; 004b9ebd
    PUSH 0x628ad4                       ; 004b9ebe | = "%d pods mounted\n"
    PUSH EDI                            ; 004b9ec3
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9ec4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b9ec9
    ADD EDI,EAX                         ; 004b9ecc
    MOV EDX,dword ptr [ESP + 0x22e8]    ; 004b9ece
        ;   Label: LAB_004b9ece
    TEST EDX,EDX                        ; 004b9ed5
    JLE 0x004b9eea                      ; 004b9ed7
        ;   XREF to: 004b9eea (CONDITIONAL_JUMP)  ; LAB_004b9eea
    PUSH EDX                            ; 004b9ed9
    PUSH 0x628ae5                       ; 004b9eda | = "%d pods dismounted\n"
    PUSH EDI                            ; 004b9edf
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9ee0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b9ee5
    ADD EDI,EAX                         ; 004b9ee8
    MOV EBX,dword ptr [ESP + 0x22ec]    ; 004b9eea
        ;   Label: LAB_004b9eea
    TEST EBX,EBX                        ; 004b9ef1
    JLE 0x004b9f06                      ; 004b9ef3
        ;   XREF to: 004b9f06 (CONDITIONAL_JUMP)  ; LAB_004b9f06
    PUSH EBX                            ; 004b9ef5
    PUSH 0x628af9                       ; 004b9ef6 | = "%d local pods deleted\n"
    PUSH EDI                            ; 004b9efb
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9efc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b9f01
    ADD EDI,EAX                         ; 004b9f04
    CMP dword ptr [ESP + 0x22e0],0x0    ; 004b9f06
        ;   Label: LAB_004b9f06
    JLE 0x004b9f2a                      ; 004b9f0e
        ;   XREF to: 004b9f2a (CONDITIONAL_JUMP)  ; LAB_004b9f2a
    PUSH 0x628b10                       ; 004b9f10 | = "POD.INI re-written\n"
        ;   Label: LAB_004b9f10
    PUSH EDI                            ; 004b9f15
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b9f16
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004b9f1b
    ADD EDI,EAX                         ; 004b9f1e
    MOV ESI,0x628b24                    ; 004b9f20 | = "To apply these changes, you should re..."
    JMP 0x004b8fed                      ; 004b9f25
        ;   XREF to: 004b8fed (UNCONDITIONAL_JUMP)  ; LAB_004b8fed
    CMP dword ptr [ESP + 0x22e8],0x0    ; 004b9f2a
        ;   Label: LAB_004b9f2a
    JG 0x004b9f10                       ; 004b9f32
        ;   XREF to: 004b9f10 (CONDITIONAL_JUMP)  ; LAB_004b9f10
    MOV ESI,0x628b24                    ; 004b9f34 | = "To apply these changes, you should re..."
    JMP 0x004b8fed                      ; 004b9f39
        ;   XREF to: 004b8fed (UNCONDITIONAL_JUMP)  ; LAB_004b8fed

