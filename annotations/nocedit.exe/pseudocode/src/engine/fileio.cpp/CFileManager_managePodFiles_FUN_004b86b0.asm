; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0(CFileManager * this_ptr, char * pod_directory_path)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_directory_path
; Local Variables:
; undefined4       Stack[-0x2340]:4  local_2340
; undefined4       Stack[-0x233c]:4  local_233c
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
;   Sleep* Sleep = 00212228
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
;   crt_errno.c_errno_FUN_00601450
;   crt_io.c_deleteFile_FUN_005ff9d0
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_setvbuf_FUN_00601490
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_dosio.c_copyFileTimestamp_FUN_00481910
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   engine_dosio.c_getFileTimestamp_FUN_00481960
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
    CALL engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 ; 004b86ee | int engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager * this_ptr)
        ;   XREF to: 004bccf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b86f3
    TEST EAX,EAX                        ; 004b86f6
    JZ 0x004b875b                       ; 004b86f8 | LAB_004b875b
        ;   XREF to: 004b875b (CONDITIONAL_JUMP)
    MOV ECX,0x41                        ; 004b86fa
    LEA EDI,[ESP + 0x1da0]              ; 004b86ff
    MOV ESI,0x679f48                    ; 004b8706 | char[260] g_DefaultPodDirectoryPath
    MOVSD.REP ES:EDI,ESI                ; 004b870b | char[260] g_DefaultPodDirectoryPath
    TEST EBX,EBX                        ; 004b870d
    JZ 0x004b8734                       ; 004b870f | LAB_004b8734
        ;   XREF to: 004b8734 (CONDITIONAL_JUMP)
    LEA EDI,[ESP + 0x1da0]              ; 004b8711
    MOV ESI,EBX                         ; 004b8718
    PUSH EDI                            ; 004b871a
    MOV AL,byte ptr [ESI]               ; 004b871b
        ;   Label: LAB_004b871b
    MOV byte ptr [EDI],AL               ; 004b871d
    CMP AL,0x0                          ; 004b871f
    JZ 0x004b8733                       ; 004b8721 | LAB_004b8733
        ;   XREF to: 004b8733 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8723
    ADD ESI,0x2                         ; 004b8726
    MOV byte ptr [EDI + 0x1],AL         ; 004b8729
    ADD EDI,0x2                         ; 004b872c
    CMP AL,0x0                          ; 004b872f
    JNZ 0x004b871b                      ; 004b8731 | LAB_004b871b
        ;   XREF to: 004b871b (CONDITIONAL_JUMP)
    POP EDI                             ; 004b8733
        ;   Label: LAB_004b8733
    PUSH 0x1                            ; 004b8734
        ;   Label: LAB_004b8734
    PUSH 0x104                          ; 004b8736
    LEA EAX,[ESP + 0x1da8]              ; 004b873b
    PUSH EAX                            ; 004b8742
    PUSH 0x6283fa                       ; 004b8743 | = "Enter path to update PODs from" | s_Enter_path_to_update_POD_006283fa = Enter path to update PODs from
    MOV EDX,dword ptr [0x00678a60]      ; 004b8748 | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b874e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004b874f | int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b8754
    TEST EAX,EAX                        ; 004b8757
    JNZ 0x004b8766                      ; 004b8759 | LAB_004b8766
        ;   XREF to: 004b8766 (CONDITIONAL_JUMP)
    ADD ESP,0x2328                      ; 004b875b
        ;   Label: LAB_004b875b
    POP EBP                             ; 004b8761
    POP EDI                             ; 004b8762
    POP ESI                             ; 004b8763
    POP EBX                             ; 004b8764
    RET                                 ; 004b8765
    PUSH 0x628419                       ; 004b8766 | = "Scanning pods..." | s_Scanning_pods_00628419 = Scanning pods...
        ;   Label: LAB_004b8766
    MOV ECX,dword ptr [0x00678a60]      ; 004b876b | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 004b8771 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b8772 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    MOV AH,byte ptr [0x02d12ac8]        ; 004b8777 | char[264] g_VersionControlDirectory
    ADD ESP,0x8                         ; 004b877d
    TEST AH,AH                          ; 004b8780
    JZ 0x004b878d                       ; 004b8782 | LAB_004b878d
        ;   XREF to: 004b878d (CONDITIONAL_JUMP)
    CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 ; 004b8784 | int engine_fileio.cpp_establishUserIdentity_FUN_004b1c00()
        ;   XREF to: 004b1c00 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 004b8789
    JZ 0x004b875b                       ; 004b878b | LAB_004b875b
        ;   XREF to: 004b875b (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x22a4]              ; 004b878d
        ;   Label: LAB_004b878d
    PUSH EAX                            ; 004b8794
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004b8795 | CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b879a
    PUSH 0x62842a                       ; 004b879d | = "*.pod" | s_pod_0062842a = *.pod
    LEA EAX,[ESP + 0x1da4]              ; 004b87a2
    PUSH EAX                            ; 004b87a9
    LEA EAX,[ESP + 0x22ac]              ; 004b87aa
    PUSH EAX                            ; 004b87b1
    CALL shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 ; 004b87b2 | void shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0(CStrList * this_ptr, char * base_path, char * search_path)
        ;   XREF to: 004a39e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b87b7
    CMP dword ptr [ESP + 0x22a4],0x1    ; 004b87ba
    JL 0x004b907b                       ; 004b87c2 | LAB_004b907b
        ;   XREF to: 004b907b (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x22b4]              ; 004b87c8
    PUSH EAX                            ; 004b87cf
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004b87d0 | CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b87d5
    LEA EAX,[ESP + 0x22b4]              ; 004b87d8
    PUSH EAX                            ; 004b87df
    MOV ESI,dword ptr [ESP + 0x2340]    ; 004b87e0
    PUSH ESI                            ; 004b87e7
    CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 ; 004b87e8 | void engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager * this_ptr, CStrList * pod_list)
        ;   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)
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
    PUSH 0x62848a                       ; 004b8812 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062848a = ..\engine\fileio.cpp
    ADD EAX,EBX                         ; 004b8817
    PUSH EAX                            ; 004b8819
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004b881a | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b881f
    MOV dword ptr [ESP + 0x22f4],EAX    ; 004b8822
    TEST EAX,EAX                        ; 004b8829
    JNZ 0x004b8850                      ; 004b882b | LAB_004b8850
        ;   XREF to: 004b8850 (CONDITIONAL_JUMP)
    MOV EDI,0x62849f                    ; 004b882d | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062849f = ..\engine\fileio.cpp
    MOV EBP,0xc0f                       ; 004b8832
    PUSH 0x6284b4                       ; 004b8837 | = "Out of memory" | s_Out_of_memory_006284b4 = Out of memory
    MOV dword ptr [0x02f0ca48],EDI      ; 004b883c | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004b8842 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b8848 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b884d
    XOR EAX,EAX                         ; 004b8850
        ;   Label: LAB_004b8850
    MOV dword ptr [ESP + 0x22c4],EAX    ; 004b8852
    MOV dword ptr [ESP + 0x22c8],EAX    ; 004b8859
    LEA EAX,[ESP + 0x22c4]              ; 004b8860
    PUSH EAX                            ; 004b8867
    CALL engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 ; 004b8868 | int engine_fileio.cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList * this_ptr)
        ;   XREF to: 004b2890 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b886d
    PUSH 0x6284c2                       ; 004b8870 | = "Scanning pods" | s_Scanning_pods_006284c2 = Scanning pods
    MOV ECX,dword ptr [0x00678a60]      ; 004b8875 | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 004b887b | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 004b887c | void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b8881
    XOR EBX,EBX                         ; 004b8884
    MOV ESI,dword ptr [ESP + 0x22f0]    ; 004b8886
    MOV dword ptr [ESP + 0x22d4],EBX    ; 004b888d
    TEST ESI,ESI                        ; 004b8894
    JLE 0x004b8c7a                      ; 004b8896 | LAB_004b8c7a
        ;   XREF to: 004b8c7a (CONDITIONAL_JUMP)
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
    MOV EBP,dword ptr [0x00678a60]      ; 004b88f5 | CEditorTools * g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 004b88fb
    PUSH EBP                            ; 004b88fe | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 004b88ff | void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b8904
    MOV EAX,dword ptr [ESP + 0x22d4]    ; 004b8907
    IMUL EBX,EAX,0x39c                  ; 004b890e
    PUSH EAX                            ; 004b8914
    LEA EAX,[ESP + 0x22a8]              ; 004b8915
    MOV EDX,dword ptr [ESP + 0x22f8]    ; 004b891c
    PUSH EAX                            ; 004b8923
    ADD EBX,EDX                         ; 004b8924
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b8926 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b892b
    MOV ESI,EAX                         ; 004b892e
    MOV EDI,dword ptr [ESP + 0x2308]    ; 004b8930
    PUSH EDI                            ; 004b8937
    MOV AL,byte ptr [ESI]               ; 004b8938
        ;   Label: LAB_004b8938
    MOV byte ptr [EDI],AL               ; 004b893a
    CMP AL,0x0                          ; 004b893c
    JZ 0x004b8950                       ; 004b893e | LAB_004b8950
        ;   XREF to: 004b8950 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8940
    ADD ESI,0x2                         ; 004b8943
    MOV byte ptr [EDI + 0x1],AL         ; 004b8946
    ADD EDI,0x2                         ; 004b8949
    CMP AL,0x0                          ; 004b894c
    JNZ 0x004b8938                      ; 004b894e | LAB_004b8938
        ;   XREF to: 004b8938 (CONDITIONAL_JUMP)
    POP EDI                             ; 004b8950
        ;   Label: LAB_004b8950
    PUSH 0x0                            ; 004b8951
    PUSH EBX                            ; 004b8953
    PUSH 0x0                            ; 004b8954
    PUSH 0x0                            ; 004b8956
    PUSH EDI                            ; 004b8958
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004b8959 | void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b895e
    PUSH 0x6284d0                       ; 004b8961 | = "pod" | s_pod_006284d0 = pod
    PUSH EBX                            ; 004b8966
    PUSH 0x0                            ; 004b8967
    PUSH 0x0                            ; 004b8969
    MOV ESI,EDI                         ; 004b896b
    MOV EDI,dword ptr [ESP + 0x2314]    ; 004b896d
    PUSH EDI                            ; 004b8974
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b8975 | void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b897a
    LEA EDI,[ESP + 0x137c]              ; 004b897d
    PUSH EDI                            ; 004b8984
    MOV AL,byte ptr [ESI]               ; 004b8985
        ;   Label: LAB_004b8985
    MOV byte ptr [EDI],AL               ; 004b8987
    CMP AL,0x0                          ; 004b8989
    JZ 0x004b899d                       ; 004b898b | LAB_004b899d
        ;   XREF to: 004b899d (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b898d
    ADD ESI,0x2                         ; 004b8990
    MOV byte ptr [EDI + 0x1],AL         ; 004b8993
    ADD EDI,0x2                         ; 004b8996
    CMP AL,0x0                          ; 004b8999
    JNZ 0x004b8985                      ; 004b899b | LAB_004b8985
        ;   XREF to: 004b8985 (CONDITIONAL_JUMP)
    POP EDI                             ; 004b899d
        ;   Label: LAB_004b899d
    LEA EAX,[ESP + 0x137c]              ; 004b899e
    PUSH EAX                            ; 004b89a5
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b89a6 | int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b89ab
    TEST EAX,EAX                        ; 004b89ae
    JZ 0x004b90b4                       ; 004b89b0 | LAB_004b90b4
        ;   XREF to: 004b90b4 (CONDITIONAL_JUMP)
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
    JZ 0x004b89f6                       ; 004b89e4 | LAB_004b89f6
        ;   XREF to: 004b89f6 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b89e6
    ADD ESI,0x2                         ; 004b89e9
    MOV byte ptr [EDI + 0x1],AL         ; 004b89ec
    ADD EDI,0x2                         ; 004b89ef
    CMP AL,0x0                          ; 004b89f2
    JNZ 0x004b89de                      ; 004b89f4 | LAB_004b89de
        ;   XREF to: 004b89de (CONDITIONAL_JUMP)
    POP EDI                             ; 004b89f6
        ;   Label: LAB_004b89f6
    LEA EAX,[ESP + 0x17a4]              ; 004b89f7
    PUSH EAX                            ; 004b89fe
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b89ff | int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b8a04
    TEST EAX,EAX                        ; 004b8a07
    JZ 0x004b90e3                       ; 004b8a09 | LAB_004b90e3
        ;   XREF to: 004b90e3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1588]    ; 004b8a0f
    MOV EDX,dword ptr [ESP + 0x19b0]    ; 004b8a16
    ADD EAX,0x2                         ; 004b8a1d
    CMP EAX,EDX                         ; 004b8a20
    JNC 0x004b90f2                      ; 004b8a22 | LAB_004b90f2
        ;   XREF to: 004b90f2 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x370],0x0     ; 004b8a28
    LEA EAX,[EBX + 0x100]               ; 004b8a32
        ;   Label: LAB_004b8a32
    PUSH EAX                            ; 004b8a38
    LEA EAX,[ESP + 0x22b8]              ; 004b8a39
    PUSH EAX                            ; 004b8a40
    MOV EDI,dword ptr [ESP + 0x2344]    ; 004b8a41
    PUSH EDI                            ; 004b8a48
    CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 ; 004b8a49 | int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
        ;   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b8a4e
    TEST EAX,EAX                        ; 004b8a51
    SETGE AL                            ; 004b8a53
    AND EAX,0xff                        ; 004b8a56
    MOV dword ptr [EBX + 0x374],EAX     ; 004b8a5b
    LEA EAX,[ESP + 0x800]               ; 004b8a61
    PUSH EAX                            ; 004b8a68
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 004b8a69 | CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b8a6e
    LEA EAX,[ESP + 0x137c]              ; 004b8a71
    PUSH EAX                            ; 004b8a78
    LEA EAX,[ESP + 0x804]               ; 004b8a79
    PUSH EAX                            ; 004b8a80
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004b8a81 | int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b8a86
    TEST EAX,EAX                        ; 004b8a89
    JZ 0x004b913d                       ; 004b8a8b | LAB_004b913d
        ;   XREF to: 004b913d (CONDITIONAL_JUMP)
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
    JLE 0x004b8b83                      ; 004b8ae2 | LAB_004b8b83
        ;   XREF to: 004b8b83 (CONDITIONAL_JUMP)
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
    JZ 0x004b8b20                       ; 004b8b0e | LAB_004b8b20
        ;   XREF to: 004b8b20 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8b10
    ADD ESI,0x2                         ; 004b8b13
    MOV byte ptr [EDI + 0x1],AL         ; 004b8b16
    ADD EDI,0x2                         ; 004b8b19
    CMP AL,0x0                          ; 004b8b1c
    JNZ 0x004b8b08                      ; 004b8b1e | LAB_004b8b08
        ;   XREF to: 004b8b08 (CONDITIONAL_JUMP)
    POP EDI                             ; 004b8b20
        ;   Label: LAB_004b8b20
    LEA EAX,[ESP + 0x1590]              ; 004b8b21
    PUSH EAX                            ; 004b8b28
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b8b29 | int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b8b2e
    TEST EAX,EAX                        ; 004b8b31
    JZ 0x004b917b                       ; 004b8b33 | LAB_004b917b
        ;   XREF to: 004b917b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0xc]       ; 004b8b39
    MOV ESI,dword ptr [ESP + 0x179c]    ; 004b8b3c
    ADD EAX,0x2                         ; 004b8b43
    CMP EAX,ESI                         ; 004b8b46
    JNC 0x004b9186                      ; 004b8b48 | LAB_004b9186
        ;   XREF to: 004b9186 (CONDITIONAL_JUMP)
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
    JL 0x004b8aef                       ; 004b8b7d | LAB_004b8aef
        ;   XREF to: 004b8aef (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x100]               ; 004b8b83
        ;   Label: LAB_004b8b83
    PUSH EAX                            ; 004b8b89
    LEA EAX,[ESP + 0x22c8]              ; 004b8b8a
    PUSH EAX                            ; 004b8b91
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004b8b92 | int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b8b97
    TEST EAX,EAX                        ; 004b8b9a
    JL 0x004b91bd                       ; 004b8b9c | LAB_004b91bd
        ;   XREF to: 004b91bd (CONDITIONAL_JUMP)
    IMUL EAX,EAX,0x168                  ; 004b8ba2
    ADD EAX,dword ptr [ESP + 0x22c8]    ; 004b8ba8
    LEA EDI,[EBX + 0x308]               ; 004b8baf
    LEA ESI,[EAX + 0x104]               ; 004b8bb5
    PUSH EDI                            ; 004b8bbb
    MOV AL,byte ptr [ESI]               ; 004b8bbc
        ;   Label: LAB_004b8bbc
    MOV byte ptr [EDI],AL               ; 004b8bbe
    CMP AL,0x0                          ; 004b8bc0
    JZ 0x004b8bd4                       ; 004b8bc2 | LAB_004b8bd4
        ;   XREF to: 004b8bd4 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8bc4
    ADD ESI,0x2                         ; 004b8bc7
    MOV byte ptr [EDI + 0x1],AL         ; 004b8bca
    ADD EDI,0x2                         ; 004b8bcd
    CMP AL,0x0                          ; 004b8bd0
    JNZ 0x004b8bbc                      ; 004b8bd2 | LAB_004b8bbc
        ;   XREF to: 004b8bbc (CONDITIONAL_JUMP)
    POP EDI                             ; 004b8bd4
        ;   Label: LAB_004b8bd4
    MOV dword ptr [EBX + 0x378],0x0     ; 004b8bd5
        ;   Label: LAB_004b8bd5
    MOV DL,byte ptr [EBX + 0x308]       ; 004b8bdf
    MOV dword ptr [EBX + 0x36c],0x62852b ; 004b8be5 | = "(Cannot recommend action)" | s_Cannot_recommend_action_0062852b = (Cannot recommend action)
    TEST DL,DL                          ; 004b8bef
    JZ 0x004b91c9                       ; 004b8bf1 | LAB_004b91c9
        ;   XREF to: 004b91c9 (CONDITIONAL_JUMP)
    PUSH 0x2d12bd0                      ; 004b8bf7 | SVersionControlSession g_VersionControlSession
    LEA EAX,[EBX + 0x308]               ; 004b8bfc
    PUSH EAX                            ; 004b8c02
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b8c03 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b8c08
    TEST EAX,EAX                        ; 004b8c0b
    JNZ 0x004b91c9                      ; 004b8c0d | LAB_004b91c9
        ;   XREF to: 004b91c9 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x36c],0x628545 ; 004b8c13 | = "You have this pod checked out" | s_You_have_this_pod_checke_00628545 = You have this pod checked out
    MOV dword ptr [EBX + 0x378],EAX     ; 004b8c1d
        ;   Label: LAB_004b8c1d
    PUSH 0x0                            ; 004b8c23
        ;   Label: LAB_004b8c23
    LEA EAX,[ESP + 0x804]               ; 004b8c25
    PUSH EAX                            ; 004b8c2c
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b8c2d | CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)
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
    JL 0x004b88c2                       ; 004b8c74 | LAB_004b88c2
        ;   XREF to: 004b88c2 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00678a60]      ; 004b8c7a | CEditorTools * g_CEditorToolsPtr
        ;   Label: LAB_004b8c7a
    PUSH EBX                            ; 004b8c80 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004b8c81 | void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b8c86
    XOR ESI,ESI                         ; 004b8c89
    MOV EDI,dword ptr [ESP + 0x22b4]    ; 004b8c8b
    MOV dword ptr [ESP + 0x231c],ESI    ; 004b8c92
    TEST EDI,EDI                        ; 004b8c99
    JLE 0x004b8d52                      ; 004b8c9b | LAB_004b8d52
        ;   XREF to: 004b8d52 (CONDITIONAL_JUMP)
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
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b8cdc | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b8ce1
    XOR EBX,EBX                         ; 004b8ce4
    MOV ESI,dword ptr [ESP + 0x22f0]    ; 004b8ce6
    MOV dword ptr [ESP + 0x22fc],EAX    ; 004b8ced
    TEST ESI,ESI                        ; 004b8cf4
    JLE 0x004b8d25                      ; 004b8cf6 | LAB_004b8d25
        ;   XREF to: 004b8d25 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x22f4]    ; 004b8cf8
    MOV EDI,dword ptr [ESP + 0x22f0]    ; 004b8cff
    ADD EBP,0x100                       ; 004b8d06
    PUSH EBP                            ; 004b8d0c
        ;   Label: LAB_004b8d0c
    MOV EAX,dword ptr [ESP + 0x2300]    ; 004b8d0d
    PUSH EAX                            ; 004b8d14
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b8d15 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b8d1a
    TEST EAX,EAX                        ; 004b8d1d
    JNZ 0x004b938c                      ; 004b8d1f | LAB_004b938c
        ;   XREF to: 004b938c (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x22f0]    ; 004b8d25
        ;   Label: LAB_004b8d25
    CMP EBX,EDX                         ; 004b8d2c
    JGE 0x004b93a0                      ; 004b8d2e | LAB_004b93a0
        ;   XREF to: 004b93a0 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x231c]    ; 004b8d34
        ;   Label: LAB_004b8d34
    INC EAX                             ; 004b8d3b
    MOV EDX,dword ptr [ESP + 0x22b4]    ; 004b8d3c
    MOV dword ptr [ESP + 0x231c],EAX    ; 004b8d43
    CMP EAX,EDX                         ; 004b8d4a
    JL 0x004b8ccc                       ; 004b8d4c | LAB_004b8ccc
        ;   XREF to: 004b8ccc (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 004b8d52
        ;   Label: LAB_004b8d52
    MOV dword ptr [ESP + 0x22d8],ECX    ; 004b8d54
    LEA EAX,[ESP + 0xc2c]               ; 004b8d5b
        ;   Label: LAB_004b8d5b
    PUSH EAX                            ; 004b8d62
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b8d63 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b8d68
    PUSH 0x1                            ; 004b8d6b
    LEA EAX,[ESP + 0xc30]               ; 004b8d6d
    PUSH EAX                            ; 004b8d74
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10 ; 004b8d75 | void shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList * this_ptr, int result_value)
        ;   XREF to: 004a3e10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b8d7a
    MOV EDI,dword ptr [ESP + 0x22f0]    ; 004b8d7d
    XOR EBP,EBP                         ; 004b8d84
    TEST EDI,EDI                        ; 004b8d86
    JLE 0x004b8e23                      ; 004b8d88 | LAB_004b8e23
        ;   XREF to: 004b8e23 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x22f4]    ; 004b8d8e
    MOV EAX,dword ptr [EBX + 0x378]     ; 004b8d95
        ;   Label: LAB_004b8d95
    MOV EDX,dword ptr [EAX*0x4 + 0x679da0] ; 004b8d9b | void * PTR_s_Skip_00679da0
    PUSH EDX                            ; 004b8da2
    MOV ECX,dword ptr [EBX + 0x36c]     ; 004b8da3
    PUSH ECX                            ; 004b8da9
    PUSH EBX                            ; 004b8daa
    PUSH 0x62869d                       ; 004b8dab | = "%s\t%s\t%s" | s_s_s_s_0062869d = %s	%s	%s
    LEA EAX,[ESP + 0x10]                ; 004b8db0
    PUSH EAX                            ; 004b8db4
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b8db5 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV CL,byte ptr [EBX + 0x308]       ; 004b8dba
    ADD ESP,0x14                        ; 004b8dc0
    TEST CL,CL                          ; 004b8dc3
    JZ 0x004b8dfa                       ; 004b8dc5 | LAB_004b8dfa
        ;   XREF to: 004b8dfa (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x308]               ; 004b8dc7
    PUSH EAX                            ; 004b8dcd
    PUSH 0x6286a6                       ; 004b8dce | = "\tChecked out by %s" | s_Checked_out_by_s_006286a6 = 	Checked out by %s
    LEA ESI,[ESP + 0x8]                 ; 004b8dd3
    XOR DL,DL                           ; 004b8dd7
    MOV AL,byte ptr [ESI]               ; 004b8dd9
        ;   Label: LAB_004b8dd9
    CMP AL,DL                           ; 004b8ddb
    JZ 0x004b8df1                       ; 004b8ddd | LAB_004b8df1
        ;   XREF to: 004b8df1 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 004b8ddf
    JZ 0x004b8def                       ; 004b8de1 | LAB_004b8def
        ;   XREF to: 004b8def (CONDITIONAL_JUMP)
    INC ESI                             ; 004b8de3
    MOV AL,byte ptr [ESI]               ; 004b8de4
    CMP AL,DL                           ; 004b8de6
    JZ 0x004b8df1                       ; 004b8de8 | LAB_004b8df1
        ;   XREF to: 004b8df1 (CONDITIONAL_JUMP)
    INC ESI                             ; 004b8dea
    CMP AL,0x0                          ; 004b8deb
    JNZ 0x004b8dd9                      ; 004b8ded | LAB_004b8dd9
        ;   XREF to: 004b8dd9 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 004b8def
        ;   Label: LAB_004b8def
    PUSH ESI                            ; 004b8df1
        ;   Label: LAB_004b8df1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b8df2 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b8df7
    MOV EAX,ESP                         ; 004b8dfa
        ;   Label: LAB_004b8dfa
    PUSH EAX                            ; 004b8dfc
    LEA EAX,[ESP + 0xc30]               ; 004b8dfd
    PUSH EAX                            ; 004b8e04
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b8e05 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b8e0a
    INC EBP                             ; 004b8e0d
    MOV EAX,dword ptr [ESP + 0x22f0]    ; 004b8e0e
    ADD EBX,0x39c                       ; 004b8e15
    CMP EBP,EAX                         ; 004b8e1b
    JL 0x004b8d95                       ; 004b8e1d | LAB_004b8d95
        ;   XREF to: 004b8d95 (CONDITIONAL_JUMP)
    PUSH 0x6286b9                       ; 004b8e23 | = "Go!" | s_Go_006286b9 = Go!
        ;   Label: LAB_004b8e23
    LEA EAX,[ESP + 0xc30]               ; 004b8e28
    PUSH EAX                            ; 004b8e2f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b8e30 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b8e35
    PUSH 0x0                            ; 004b8e38
    MOV EDX,dword ptr [ESP + 0x22dc]    ; 004b8e3a
    PUSH EDX                            ; 004b8e41
    PUSH 0x6286bd                       ; 004b8e42 | = "Select action for each pod, select \"..." | s_Select_action_for_each_p_006286bd = Select action for each pod, select "Go!" when you are done
    LEA EAX,[ESP + 0xc38]               ; 004b8e47
    PUSH EAX                            ; 004b8e4e
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b8e4f | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b8e54
    MOV dword ptr [ESP + 0x22d8],EAX    ; 004b8e57
    TEST EAX,EAX                        ; 004b8e5e
    JL 0x004b9565                       ; 004b8e60 | LAB_004b9565
        ;   XREF to: 004b9565 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0xc2c]     ; 004b8e66
    DEC EBX                             ; 004b8e6d
    CMP EAX,EBX                         ; 004b8e6e
    JL 0x004b98a8                       ; 004b8e70 | LAB_004b98a8
        ;   XREF to: 004b98a8 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004b8e76
    LEA EAX,[ESP + 0xc30]               ; 004b8e78
    PUSH EAX                            ; 004b8e7f
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b8e80 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b8e85
    XOR ESI,ESI                         ; 004b8e88
    MOV EAX,dword ptr [ESP + 0x233c]    ; 004b8e8a
    MOV dword ptr [ESP + 0x2318],ESI    ; 004b8e91
    MOV dword ptr [EAX + 0x13880c],0x1  ; 004b8e98
    MOV EAX,dword ptr [ESP + 0x22f0]    ; 004b8ea2
    MOV dword ptr [0x02d12bf0],ESI      ; 004b8ea9 | g_VersionControlSession.field1_0x20[0]
    MOV dword ptr [0x02d12bf4],ESI      ; 004b8eaf | g_VersionControlSession.field1_0x20[4]
    TEST EAX,EAX                        ; 004b8eb5
    JLE 0x004b8f64                      ; 004b8eb7 | LAB_004b8f64
        ;   XREF to: 004b8f64 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x22f4]    ; 004b8ebd
    ADD EAX,0x100                       ; 004b8ec4
    MOV dword ptr [ESP + 0x2314],EAX    ; 004b8ec9
    IMUL EDI,dword ptr [ESP + 0x2318],0x39c ; 004b8ed0
        ;   Label: LAB_004b8ed0
    ADD EDI,dword ptr [ESP + 0x22f4]    ; 004b8edb
    MOV EDX,dword ptr [EDI + 0x378]     ; 004b8ee2
    TEST EDX,EDX                        ; 004b8ee8
    JNZ 0x004b99c4                      ; 004b8eea | LAB_004b99c4
        ;   XREF to: 004b99c4 (CONDITIONAL_JUMP)
    CMP dword ptr [EDI + 0x370],0x3     ; 004b8ef0
    JNZ 0x004b8f32                      ; 004b8ef7 | LAB_004b8f32
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x37c]     ; 004b8ef9
    TEST EAX,EAX                        ; 004b8eff
    JNZ 0x004b8f32                      ; 004b8f01 | LAB_004b8f32
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)
    CMP dword ptr [EDI + 0x374],0x0     ; 004b8f03
    JZ 0x004b8f32                       ; 004b8f0a | LAB_004b8f32
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d12ac8],0x0       ; 004b8f0c | char[264] g_VersionControlDirectory
    JZ 0x004b8f32                       ; 004b8f13 | LAB_004b8f32
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x2314]    ; 004b8f15
    PUSH ECX                            ; 004b8f1c
    PUSH EAX                            ; 004b8f1d
    CALL engine_dosio.c_getFileTimestamp_FUN_00481960 ; 004b8f1e | int engine_dosio.c_getFileTimestamp_FUN_00481960(char * directory, char * filename)
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b8f23
    TEST EAX,EAX                        ; 004b8f26
    JL 0x004b8f32                       ; 004b8f28 | LAB_004b8f32
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)
    TEST AL,0x8                         ; 004b8f2a
    JZ 0x004b99ac                       ; 004b8f2c | LAB_004b99ac
        ;   XREF to: 004b99ac (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x2314]    ; 004b8f32
        ;   Label: LAB_004b8f32
    MOV EBX,dword ptr [ESP + 0x2318]    ; 004b8f39
    MOV ESI,dword ptr [ESP + 0x22f0]    ; 004b8f40
    ADD ECX,0x39c                       ; 004b8f47
    INC EBX                             ; 004b8f4d
    MOV dword ptr [ESP + 0x2314],ECX    ; 004b8f4e
    MOV dword ptr [ESP + 0x2318],EBX    ; 004b8f55
    CMP EBX,ESI                         ; 004b8f5c
    JL 0x004b8ed0                       ; 004b8f5e | LAB_004b8ed0
        ;   XREF to: 004b8ed0 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x233c]    ; 004b8f64
        ;   Label: LAB_004b8f64
    MOV dword ptr [EAX + 0x13880c],0x0  ; 004b8f6b
    CMP dword ptr [ESP + 0x22e0],0x0    ; 004b8f75
    JLE 0x004b9e59                      ; 004b8f7d | LAB_004b9e59
        ;   XREF to: 004b9e59 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x22b4]              ; 004b8f83
        ;   Label: LAB_004b8f83
    PUSH EAX                            ; 004b8f8a
    MOV ECX,dword ptr [ESP + 0x2340]    ; 004b8f8b
    PUSH ECX                            ; 004b8f92
    CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 ; 004b8f93 | void engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager * this_ptr, CStrList * pod_list)
        ;   XREF to: 004ba620 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b8f98
    CMP dword ptr [ESP + 0x22dc],0x0    ; 004b8f9b
        ;   Label: LAB_004b8f9b
    JNZ 0x004b9e6c                      ; 004b8fa3 | LAB_004b9e6c
        ;   XREF to: 004b9e6c (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x22e0],0x0    ; 004b8fa9
    JNZ 0x004b9e6c                      ; 004b8fb1 | LAB_004b9e6c
        ;   XREF to: 004b9e6c (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x22e4],0x0    ; 004b8fb7
    JNZ 0x004b9e6c                      ; 004b8fbf | LAB_004b9e6c
        ;   XREF to: 004b9e6c (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x22ec],0x0    ; 004b8fc5
    JNZ 0x004b9e6c                      ; 004b8fcd | LAB_004b9e6c
        ;   XREF to: 004b9e6c (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x22e8],0x0    ; 004b8fd3
    JNZ 0x004b9e6c                      ; 004b8fdb | LAB_004b9e6c
        ;   XREF to: 004b9e6c (CONDITIONAL_JUMP)
    MOV ESI,0x628a9f                    ; 004b8fe1 | = "PODs not changed." | s_PODs_not_changed_00628a9f = PODs not changed.
    LEA EDI,[ESP + 0x1da0]              ; 004b8fe6
    PUSH EDI                            ; 004b8fed
        ;   Label: LAB_004b8fed
    MOV AL,byte ptr [ESI]               ; 004b8fee | = "PODs not changed." | s_PODs_not_changed_00628a9f = PODs not changed. | s_To_apply_these_changes_y_00628b24 = To apply these changes, you should restart the application.
        ;   Label: LAB_004b8fee
    MOV byte ptr [EDI],AL               ; 004b8ff0
    CMP AL,0x0                          ; 004b8ff2
    JZ 0x004b9006                       ; 004b8ff4 | LAB_004b9006
        ;   XREF to: 004b9006 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8ff6 | s_ODs_not_changed._00628aa0
    ADD ESI,0x2                         ; 004b8ff9
    MOV byte ptr [EDI + 0x1],AL         ; 004b8ffc
    ADD EDI,0x2                         ; 004b8fff
    CMP AL,0x0                          ; 004b9002
    JNZ 0x004b8fee                      ; 004b9004 | LAB_004b8fee
        ;   XREF to: 004b8fee (CONDITIONAL_JUMP)
    POP EDI                             ; 004b9006
        ;   Label: LAB_004b9006
    LEA EAX,[ESP + 0x1da0]              ; 004b9007
    PUSH EAX                            ; 004b900e
    MOV EDX,dword ptr [0x00678a60]      ; 004b900f | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b9015 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 004b9016 | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b901b
        ;   Label: LAB_004b901b
    MOV EDX,dword ptr [ESP + 0x22f4]    ; 004b901e
    TEST EDX,EDX                        ; 004b9025
    JZ 0x004b903c                       ; 004b9027 | LAB_004b903c
        ;   XREF to: 004b903c (CONDITIONAL_JUMP)
    PUSH 0xe10                          ; 004b9029
    PUSH 0x628b60                       ; 004b902e | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00628b60 = ..\engine\fileio.cpp
    PUSH EDX                            ; 004b9033
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004b9034 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9039
    LEA EAX,[ESP + 0x22c4]              ; 004b903c
        ;   Label: LAB_004b903c
    PUSH EAX                            ; 004b9043
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b9044 | void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b9049
    PUSH 0x0                            ; 004b904c
    LEA EAX,[ESP + 0x22b8]              ; 004b904e
    PUSH EAX                            ; 004b9055
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004b9056 | CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b905b
    PUSH 0x0                            ; 004b905e
    LEA EAX,[ESP + 0x22a8]              ; 004b9060
    PUSH EAX                            ; 004b9067
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004b9068 | CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
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
    PUSH 0x628430                       ; 004b9083 | = "No POD files found in %s" | s_No_POD_files_found_in_s_00628430 = No POD files found in %s
    MOV EDI,dword ptr [0x00678a60]      ; 004b9088 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 004b908e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b908f | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9094
    PUSH 0x0                            ; 004b9097
    LEA EAX,[ESP + 0x22a8]              ; 004b9099
    PUSH EAX                            ; 004b90a0
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004b90a1 | CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b90a6
    ADD ESP,0x2328                      ; 004b90a9
    POP EBP                             ; 004b90af
    POP EDI                             ; 004b90b0
    POP ESI                             ; 004b90b1
    POP EBX                             ; 004b90b2
    RET                                 ; 004b90b3
    MOV dword ptr [0x02f0ca4c],0xc25    ; 004b90b4 | int g_CurrentLineNumber
        ;   Label: LAB_004b90b4
    LEA EAX,[ESP + 0x137c]              ; 004b90be
    PUSH EAX                            ; 004b90c5
    MOV EBP,0x6284d4                    ; 004b90c6 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_006284d4 = ..\engine\fileio.cpp
    PUSH 0x6284e9                       ; 004b90cb | = "Can't querry for pod file info: %s" | s_Can_t_querry_for_pod_fil_006284e9 = Can't querry for pod file info: %s
    MOV dword ptr [0x02f0ca48],EBP      ; 004b90d0 | char * g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b90d6 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b90db
    JMP 0x004b89b6                      ; 004b90de | LAB_004b89b6
        ;   XREF to: 004b89b6 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x370],0x4     ; 004b90e3
        ;   Label: LAB_004b90e3
    JMP 0x004b8a32                      ; 004b90ed | LAB_004b8a32
        ;   XREF to: 004b8a32 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1588]    ; 004b90f2
        ;   Label: LAB_004b90f2
    SUB EAX,0x2                         ; 004b90f9
    CMP EAX,EDX                         ; 004b90fc
    JBE 0x004b910f                      ; 004b90fe | LAB_004b910f
        ;   XREF to: 004b910f (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x370],0x1     ; 004b9100
    JMP 0x004b8a32                      ; 004b910a | LAB_004b8a32
        ;   XREF to: 004b8a32 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x19a8]    ; 004b910f
        ;   Label: LAB_004b910f
    CMP EAX,dword ptr [ESP + 0x1580]    ; 004b9116
    JZ 0x004b912e                       ; 004b911d | LAB_004b912e
        ;   XREF to: 004b912e (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x370],0x2     ; 004b911f
    JMP 0x004b8a32                      ; 004b9129 | LAB_004b8a32
        ;   XREF to: 004b8a32 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x370],0x3     ; 004b912e
        ;   Label: LAB_004b912e
    JMP 0x004b8a32                      ; 004b9138 | LAB_004b8a32
        ;   XREF to: 004b8a32 (UNCONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x00678a60]      ; 004b913d | CEditorTools * g_CEditorToolsPtr
        ;   Label: LAB_004b913d
    PUSH EBP                            ; 004b9143 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004b9144 | void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b9149
    LEA EAX,[ESP + 0x137c]              ; 004b914c
    PUSH EAX                            ; 004b9153
    PUSH 0x62850c                       ; 004b9154 | = "Can't mount %s to check status" | s_Can_t_mount_s_to_check_s_0062850c = Can't mount %s to check status
    MOV EAX,[0x00678a60]                ; 004b9159 | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 004b915e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b915f | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9164
    PUSH 0x0                            ; 004b9167
    LEA EAX,[ESP + 0x804]               ; 004b9169
    PUSH EAX                            ; 004b9170
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b9171 | CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)
    JMP 0x004b901b                      ; 004b9176 | LAB_004b901b
        ;   XREF to: 004b901b (UNCONDITIONAL_JUMP)
    INC dword ptr [EBX + 0x384]         ; 004b917b
        ;   Label: LAB_004b917b
    JMP 0x004b8b54                      ; 004b9181 | LAB_004b8b54
        ;   XREF to: 004b8b54 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0xc]       ; 004b9186
        ;   Label: LAB_004b9186
    SUB EAX,0x2                         ; 004b9189
    CMP EAX,ESI                         ; 004b918c
    JBE 0x004b919b                      ; 004b918e | LAB_004b919b
        ;   XREF to: 004b919b (CONDITIONAL_JUMP)
    INC dword ptr [EBX + 0x380]         ; 004b9190
    JMP 0x004b8b54                      ; 004b9196 | LAB_004b8b54
        ;   XREF to: 004b8b54 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1794]    ; 004b919b
        ;   Label: LAB_004b919b
    CMP EAX,dword ptr [EBP + 0x4]       ; 004b91a2
    JZ 0x004b91b2                       ; 004b91a5 | LAB_004b91b2
        ;   XREF to: 004b91b2 (CONDITIONAL_JUMP)
    INC dword ptr [EBX + 0x388]         ; 004b91a7
    JMP 0x004b8b54                      ; 004b91ad | LAB_004b8b54
        ;   XREF to: 004b8b54 (UNCONDITIONAL_JUMP)
    INC dword ptr [EBX + 0x38c]         ; 004b91b2
        ;   Label: LAB_004b91b2
    JMP 0x004b8b54                      ; 004b91b8 | LAB_004b8b54
        ;   XREF to: 004b8b54 (UNCONDITIONAL_JUMP)
    MOV byte ptr [EBX + 0x308],0x0      ; 004b91bd
        ;   Label: LAB_004b91bd
    JMP 0x004b8bd5                      ; 004b91c4 | LAB_004b8bd5
        ;   XREF to: 004b8bd5 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x370],0x4     ; 004b91c9
        ;   Label: LAB_004b91c9
    JNZ 0x004b91e8                      ; 004b91d0 | LAB_004b91e8
        ;   XREF to: 004b91e8 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x37c],0x0     ; 004b91d2
    JNZ 0x004b91e8                      ; 004b91d9 | LAB_004b91e8
        ;   XREF to: 004b91e8 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x374],0x0     ; 004b91db
    JZ 0x004b926e                       ; 004b91e2 | LAB_004b926e
        ;   XREF to: 004b926e (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x370],0x1     ; 004b91e8
        ;   Label: LAB_004b91e8
    JNZ 0x004b9221                      ; 004b91ef | LAB_004b9221
        ;   XREF to: 004b9221 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x37c],0x0     ; 004b91f1
    JNZ 0x004b9221                      ; 004b91f8 | LAB_004b9221
        ;   XREF to: 004b9221 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x38c]     ; 004b91fa
    MOV EAX,dword ptr [EBX + 0x380]     ; 004b9200
    MOV ECX,dword ptr [EBX + 0x388]     ; 004b9206
    ADD EAX,EDX                         ; 004b920c
    ADD EAX,ECX                         ; 004b920e
    TEST EAX,EAX                        ; 004b9210
    JLE 0x004b9221                      ; 004b9212 | LAB_004b9221
        ;   XREF to: 004b9221 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x374],0x0     ; 004b9214
    JZ 0x004b9287                       ; 004b921b | LAB_004b9287
        ;   XREF to: 004b9287 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x370],0x1     ; 004b9221
        ;   Label: LAB_004b9221
    JNZ 0x004b923c                      ; 004b9228 | LAB_004b923c
        ;   XREF to: 004b923c (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x37c],0x0     ; 004b922a
    JNZ 0x004b923c                      ; 004b9231 | LAB_004b923c
        ;   XREF to: 004b923c (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x374],0x0     ; 004b9233
    JZ 0x004b92a0                       ; 004b923a | LAB_004b92a0
        ;   XREF to: 004b92a0 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x370]     ; 004b923c
        ;   Label: LAB_004b923c
    CMP EDX,0x1                         ; 004b9242
    JNZ 0x004b92b9                      ; 004b9245 | LAB_004b92b9
        ;   XREF to: 004b92b9 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x37c],0x0     ; 004b9247
    JNZ 0x004b92b9                      ; 004b924e | LAB_004b92b9
        ;   XREF to: 004b92b9 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x374],0x0     ; 004b9250
    JZ 0x004b92b9                       ; 004b9257 | LAB_004b92b9
        ;   XREF to: 004b92b9 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x36c],0x6285bd ; 004b9259 | = "Your pod is older and mounted" | s_Your_pod_is_older_and_mo_006285bd = Your pod is older and mounted
    MOV dword ptr [EBX + 0x378],EDX     ; 004b9263
    JMP 0x004b8c23                      ; 004b9269 | LAB_004b8c23
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x378],0x2     ; 004b926e
        ;   Label: LAB_004b926e
    MOV dword ptr [EBX + 0x36c],0x628563 ; 004b9278 | = "You don't have this pod" | s_You_don_t_have_this_pod_00628563 = You don't have this pod
    JMP 0x004b8c23                      ; 004b9282 | LAB_004b8c23
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x378],0x3     ; 004b9287
        ;   Label: LAB_004b9287
    MOV dword ptr [EBX + 0x36c],0x62857b ; 004b9291 | = "Extracted, your files are older" | s_Extracted_your_files_are_0062857b = Extracted, your files are older
    JMP 0x004b8c23                      ; 004b929b | LAB_004b8c23
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x378],0x2     ; 004b92a0
        ;   Label: LAB_004b92a0
    MOV dword ptr [EBX + 0x36c],0x62859b ; 004b92aa | = "Your pod is older and not mounted" | s_Your_pod_is_older_and_no_0062859b = Your pod is older and not mounted
    JMP 0x004b8c23                      ; 004b92b4 | LAB_004b8c23
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0x370]     ; 004b92b9
        ;   Label: LAB_004b92b9
    TEST EDI,EDI                        ; 004b92bf
    JNZ 0x004b92d8                      ; 004b92c1 | LAB_004b92d8
        ;   XREF to: 004b92d8 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x36c],0x6285db ; 004b92c3 | = "Your pod is newer" | s_Your_pod_is_newer_006285db = Your pod is newer
    MOV dword ptr [EBX + 0x378],EDI     ; 004b92cd
    JMP 0x004b8c23                      ; 004b92d3 | LAB_004b8c23
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
    CMP EDI,0x3                         ; 004b92d8
        ;   Label: LAB_004b92d8
    JNZ 0x004b92ff                      ; 004b92db | LAB_004b92ff
        ;   XREF to: 004b92ff (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x37c]     ; 004b92dd
    TEST EAX,EAX                        ; 004b92e3
    JNZ 0x004b92ff                      ; 004b92e5 | LAB_004b92ff
        ;   XREF to: 004b92ff (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x374],0x0     ; 004b92e7
    JZ 0x004b92ff                       ; 004b92ee | LAB_004b92ff
        ;   XREF to: 004b92ff (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x36c],0x6285ed ; 004b92f0 | = "Your pod is in sync and mounted" | s_Your_pod_is_in_sync_and__006285ed = Your pod is in sync and mounted
    JMP 0x004b8c1d                      ; 004b92fa | LAB_004b8c1d
        ;   XREF to: 004b8c1d (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x370],0x3     ; 004b92ff
        ;   Label: LAB_004b92ff
    JNZ 0x004b931b                      ; 004b9306 | LAB_004b931b
        ;   XREF to: 004b931b (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBX + 0x37c]     ; 004b9308
    TEST ESI,ESI                        ; 004b930e
    JNZ 0x004b931b                      ; 004b9310 | LAB_004b931b
        ;   XREF to: 004b931b (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x374],0x0     ; 004b9312
    JZ 0x004b9358                       ; 004b9319 | LAB_004b9358
        ;   XREF to: 004b9358 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x370],0x3     ; 004b931b
        ;   Label: LAB_004b931b
    JNZ 0x004b8c23                      ; 004b9322 | LAB_004b8c23
        ;   XREF to: 004b8c23 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0x37c]     ; 004b9328
    TEST EDI,EDI                        ; 004b932e
    JNZ 0x004b8c23                      ; 004b9330 | LAB_004b8c23
        ;   XREF to: 004b8c23 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x374],0x0     ; 004b9336
    JNZ 0x004b8c23                      ; 004b933d | LAB_004b8c23
        ;   XREF to: 004b8c23 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x36c],0x628623 ; 004b9343 | = "Your pod is in sync but not mounted" | s_Your_pod_is_in_sync_but__00628623 = Your pod is in sync but not mounted
    MOV dword ptr [EBX + 0x378],EDI     ; 004b934d
    JMP 0x004b8c23                      ; 004b9353 | LAB_004b8c23
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 004b9358
        ;   Label: LAB_004b9358
    JNZ 0x004b931b                      ; 004b935a | LAB_004b931b
        ;   XREF to: 004b931b (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x380],0x0     ; 004b935c
    JNZ 0x004b931b                      ; 004b9363 | LAB_004b931b
        ;   XREF to: 004b931b (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x384],0x0     ; 004b9365
    JNZ 0x004b931b                      ; 004b936c | LAB_004b931b
        ;   XREF to: 004b931b (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x388],0x0     ; 004b936e
    JNZ 0x004b931b                      ; 004b9375 | LAB_004b931b
        ;   XREF to: 004b931b (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x36c],0x62860d ; 004b9377 | = "Extracted and in sync" | s_Extracted_and_in_sync_0062860d = Extracted and in sync
    MOV dword ptr [EBX + 0x378],ESI     ; 004b9381
    JMP 0x004b8c23                      ; 004b9387 | LAB_004b8c23
        ;   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
    INC EBX                             ; 004b938c
        ;   Label: LAB_004b938c
    ADD EBP,0x39c                       ; 004b938d
    CMP EBX,EDI                         ; 004b9393
    JL 0x004b8d0c                       ; 004b9395 | LAB_004b8d0c
        ;   XREF to: 004b8d0c (CONDITIONAL_JUMP)
    JMP 0x004b8d25                      ; 004b939b | LAB_004b8d25
        ;   XREF to: 004b8d25 (UNCONDITIONAL_JUMP)
    PUSH 0xcd3                          ; 004b93a0
        ;   Label: LAB_004b93a0
    MOV ECX,dword ptr [ESP + 0x2310]    ; 004b93a5
    MOV EBX,dword ptr [ESP + 0x2314]    ; 004b93ac
    MOV EBP,dword ptr [ESP + 0x22f8]    ; 004b93b3
    PUSH 0x628647                       ; 004b93ba | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00628647 = ..\engine\fileio.cpp
    ADD ECX,0x39c                       ; 004b93bf
    LEA ESI,[EDX + 0x1]                 ; 004b93c5
    PUSH ECX                            ; 004b93c8
    ADD EBX,0x39c                       ; 004b93c9
    MOV dword ptr [ESP + 0x22fc],ESI    ; 004b93cf
    PUSH EBP                            ; 004b93d6
    MOV dword ptr [ESP + 0x231c],ECX    ; 004b93d7
    MOV dword ptr [ESP + 0x2320],EBX    ; 004b93de
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004b93e5 | void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b93ea
    MOV dword ptr [ESP + 0x22f4],EAX    ; 004b93ed
    TEST EAX,EAX                        ; 004b93f4
    JNZ 0x004b941a                      ; 004b93f6 | LAB_004b941a
        ;   XREF to: 004b941a (CONDITIONAL_JUMP)
    MOV EAX,0x62865c                    ; 004b93f8 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062865c = ..\engine\fileio.cpp
    MOV EDX,0xcd4                       ; 004b93fd
    PUSH 0x628671                       ; 004b9402 | = "Out of memory" | s_Out_of_memory_00628671 = Out of memory
    MOV [0x02f0ca48],EAX                ; 004b9407 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004b940c | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b9412 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b9417
    PUSH 0x39c                          ; 004b941a
        ;   Label: LAB_004b941a
    MOV EBX,dword ptr [ESP + 0x22f8]    ; 004b941f
    MOV ECX,dword ptr [ESP + 0x2314]    ; 004b9426
    PUSH 0x0                            ; 004b942d
    ADD EBX,ECX                         ; 004b942f
    PUSH EBX                            ; 004b9431
    CALL crt_memory.c_memset_FUN_005fde40 ; 004b9432 | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9437
    LEA EDI,[EBX + 0x100]               ; 004b943a
    MOV ESI,dword ptr [ESP + 0x22fc]    ; 004b9440
    PUSH EDI                            ; 004b9447
    MOV AL,byte ptr [ESI]               ; 004b9448
        ;   Label: LAB_004b9448
    MOV byte ptr [EDI],AL               ; 004b944a
    CMP AL,0x0                          ; 004b944c
    JZ 0x004b9460                       ; 004b944e | LAB_004b9460
        ;   XREF to: 004b9460 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b9450
    ADD ESI,0x2                         ; 004b9453
    MOV byte ptr [EDI + 0x1],AL         ; 004b9456
    ADD EDI,0x2                         ; 004b9459
    CMP AL,0x0                          ; 004b945c
    JNZ 0x004b9448                      ; 004b945e | LAB_004b9448
        ;   XREF to: 004b9448 (CONDITIONAL_JUMP)
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
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004b9489 | void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)
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
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b94b3 | void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b94b8
    LEA EAX,[ESP + 0x20a4]              ; 004b94bb
    PUSH EAX                            ; 004b94c2
    LEA EAX,[ESP + 0x21a8]              ; 004b94c3
    PUSH EAX                            ; 004b94ca
    PUSH 0x0                            ; 004b94cb
    PUSH 0x0                            ; 004b94cd
    MOV ESI,dword ptr [ESP + 0x230c]    ; 004b94cf
    PUSH ESI                            ; 004b94d6
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004b94d7 | void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)
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
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b9506 | void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b950b
    LEA ESI,[ESP + 0x21a4]              ; 004b950e
    MOV EDI,EBX                         ; 004b9515
    PUSH EDI                            ; 004b9517
    MOV AL,byte ptr [ESI]               ; 004b9518
        ;   Label: LAB_004b9518
    MOV byte ptr [EDI],AL               ; 004b951a
    CMP AL,0x0                          ; 004b951c
    JZ 0x004b9530                       ; 004b951e | LAB_004b9530
        ;   XREF to: 004b9530 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b9520
    ADD ESI,0x2                         ; 004b9523
    MOV byte ptr [EDI + 0x1],AL         ; 004b9526
    ADD EDI,0x2                         ; 004b9529
    CMP AL,0x0                          ; 004b952c
    JNZ 0x004b9518                      ; 004b952e | LAB_004b9518
        ;   XREF to: 004b9518 (CONDITIONAL_JUMP)
    POP EDI                             ; 004b9530
        ;   Label: LAB_004b9530
    MOV byte ptr [EBX + 0x308],0x0      ; 004b9531
    MOV dword ptr [EBX + 0x370],0x5     ; 004b9538
    MOV dword ptr [EBX + 0x36c],0x62867f ; 004b9542 | = "POD not under version control" | s_POD_not_under_version_co_0062867f = POD not under version control
    MOV dword ptr [EBX + 0x378],0x0     ; 004b954c
    MOV dword ptr [EBX + 0x374],0x1     ; 004b9556
    JMP 0x004b8d34                      ; 004b9560 | LAB_004b8d34
        ;   XREF to: 004b8d34 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 004b9565
        ;   Label: LAB_004b9565
    LEA EAX,[ESP + 0xc30]               ; 004b9567
    PUSH EAX                            ; 004b956e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b956f | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    JMP 0x004b901b                      ; 004b9574 | LAB_004b901b
        ;   XREF to: 004b901b (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0x100]               ; 004b9579
        ;   Label: caseD_4
    PUSH EAX                            ; 004b957f
    PUSH 0x62870e                       ; 004b9580 | = "You don't have the pod %s\n" | s_You_don_t_have_the_pod_s_0062870e = You don't have the pod %s

    PUSH EBX                            ; 004b9585
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9586 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b958b
    ADD EBX,EAX                         ; 004b958e
        ;   Label: LAB_004b958e
    CMP dword ptr [EBP + 0x370],0x5     ; 004b9590
        ;   Label: LAB_004b9590
    JZ 0x004b96b3                       ; 004b9597 | LAB_004b96b3
        ;   XREF to: 004b96b3 (CONDITIONAL_JUMP)
    PUSH 0x6287ed                       ; 004b959d | = "---------------------\n" | s_anon_006287ed = ---------------------

    PUSH EBX                            ; 004b95a2
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b95a3 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b95a8
    ADD EBX,EAX                         ; 004b95ab
    LEA EAX,[EBP + 0x204]               ; 004b95ad
    PUSH EAX                            ; 004b95b3
    MOV EAX,dword ptr [EBP + 0x390]     ; 004b95b4
    PUSH EAX                            ; 004b95ba
    PUSH 0x628804                       ; 004b95bb | = "Of the %d files in %s:\n" | s_Of_the_d_files_in_s_00628804 = Of the %d files in %s:

    PUSH EBX                            ; 004b95c0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b95c1 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b95c6
    MOV EDX,dword ptr [EBP + 0x384]     ; 004b95c9
    ADD EBX,EAX                         ; 004b95cf
    TEST EDX,EDX                        ; 004b95d1
    JLE 0x004b95e6                      ; 004b95d3 | LAB_004b95e6
        ;   XREF to: 004b95e6 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 004b95d5
    PUSH 0x62881c                       ; 004b95d6 | = "%d files don't exist locally\n" | s_d_files_don_t_exist_loca_0062881c = %d files don't exist locally

    PUSH EBX                            ; 004b95db
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b95dc | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b95e1
    ADD EBX,EAX                         ; 004b95e4
    MOV ESI,dword ptr [EBP + 0x37c]     ; 004b95e6
        ;   Label: LAB_004b95e6
    TEST ESI,ESI                        ; 004b95ec
    JLE 0x004b9601                      ; 004b95ee | LAB_004b9601
        ;   XREF to: 004b9601 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 004b95f0
    PUSH 0x62883a                       ; 004b95f1 | = "%d local files are newer\n" | s_d_local_files_are_newer_0062883a = %d local files are newer

    PUSH EBX                            ; 004b95f6
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b95f7 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b95fc
    ADD EBX,EAX                         ; 004b95ff
    MOV EAX,dword ptr [EBP + 0x380]     ; 004b9601
        ;   Label: LAB_004b9601
    TEST EAX,EAX                        ; 004b9607
    JLE 0x004b961c                      ; 004b9609 | LAB_004b961c
        ;   XREF to: 004b961c (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004b960b
    PUSH 0x628854                       ; 004b960c | = "%d local files are older\n" | s_d_local_files_are_older_00628854 = %d local files are older

    PUSH EBX                            ; 004b9611
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9612 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9617
    ADD EBX,EAX                         ; 004b961a
    MOV ECX,dword ptr [EBP + 0x388]     ; 004b961c
        ;   Label: LAB_004b961c
    TEST ECX,ECX                        ; 004b9622
    JLE 0x004b9637                      ; 004b9624 | LAB_004b9637
        ;   XREF to: 004b9637 (CONDITIONAL_JUMP)
    PUSH ECX                            ; 004b9626
    PUSH 0x62886e                       ; 004b9627 | = "%d local files are different\n" | s_d_local_files_are_differ_0062886e = %d local files are different

    PUSH EBX                            ; 004b962c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b962d | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9632
    ADD EBX,EAX                         ; 004b9635
    MOV EDI,dword ptr [EBP + 0x38c]     ; 004b9637
        ;   Label: LAB_004b9637
    TEST EDI,EDI                        ; 004b963d
    JLE 0x004b9652                      ; 004b963f | LAB_004b9652
        ;   XREF to: 004b9652 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004b9641
    PUSH 0x62888c                       ; 004b9642 | = "%d local files are in sync\n" | s_d_local_files_are_in_syn_0062888c = %d local files are in sync

    PUSH EBX                            ; 004b9647
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9648 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b964d
    ADD EBX,EAX                         ; 004b9650
    PUSH 0x6288a8                       ; 004b9652 | = "---------------------\n" | s_anon_006288a8 = ---------------------

        ;   Label: LAB_004b9652
    PUSH EBX                            ; 004b9657
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9658 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b965d
    MOV DH,byte ptr [EBP + 0x308]       ; 004b9660
    ADD EBX,EAX                         ; 004b9666
    TEST DH,DH                          ; 004b9668
    JZ 0x004b9698                       ; 004b966a | LAB_004b9698
        ;   XREF to: 004b9698 (CONDITIONAL_JUMP)
    PUSH 0x2d12bd0                      ; 004b966c | SVersionControlSession g_VersionControlSession
    LEA ESI,[EBP + 0x308]               ; 004b9671
    PUSH ESI                            ; 004b9677
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b9678 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b967d
    TEST EAX,EAX                        ; 004b9680
    JNZ 0x004b98e8                      ; 004b9682 | LAB_004b98e8
        ;   XREF to: 004b98e8 (CONDITIONAL_JUMP)
    PUSH 0x6288bf                       ; 004b9688 | = "You currently have this pod checked o..." | s_You_currently_have_this__006288bf = You currently have this pod checked out

    PUSH EBX                            ; 004b968d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b968e | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9693
    ADD EBX,EAX                         ; 004b9696
        ;   Label: LAB_004b9696
    CMP dword ptr [EBP + 0x374],0x0     ; 004b9698
        ;   Label: LAB_004b9698
    JZ 0x004b98fc                       ; 004b969f | LAB_004b98fc
        ;   XREF to: 004b98fc (CONDITIONAL_JUMP)
    PUSH 0x62890f                       ; 004b96a5 | = "Your currently have this pod mounted.\n" | s_Your_currently_have_this_0062890f = Your currently have this pod mounted.

    PUSH EBX                            ; 004b96aa
        ;   Label: LAB_004b96aa
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b96ab | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b96b0
    LEA EAX,[ESP + 0xfd4]               ; 004b96b3
        ;   Label: LAB_004b96b3
    PUSH EAX                            ; 004b96ba
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b96bb | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b96c0
    MOV ECX,dword ptr [0x00679da0]      ; 004b96c3 | void * PTR_s_Skip_00679da0
    PUSH ECX                            ; 004b96c9 | = "Skip" | s_Skip_00628449 = Skip
    LEA EAX,[ESP + 0xfd8]               ; 004b96ca
    PUSH EAX                            ; 004b96d1
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b96d2 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [EBP + 0x370]     ; 004b96d7
    ADD ESP,0x8                         ; 004b96dd
    CMP EBX,0x5                         ; 004b96e0
    JZ 0x004b96fc                       ; 004b96e3 | LAB_004b96fc
        ;   XREF to: 004b96fc (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x00679da4]      ; 004b96e5 | void * PTR_s_Copy_00679da4
    PUSH ESI                            ; 004b96eb | = "Copy" | s_Copy_0062844e = Copy
    LEA EAX,[ESP + 0xfd8]               ; 004b96ec
    PUSH EAX                            ; 004b96f3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b96f4 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b96f9
    CMP dword ptr [EBP + 0x374],0x0     ; 004b96fc
        ;   Label: LAB_004b96fc
    JZ 0x004b9906                       ; 004b9703 | LAB_004b9906
        ;   XREF to: 004b9906 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x370],0x5     ; 004b9709
        ;   Label: LAB_004b9709
    JZ 0x004b9729                       ; 004b9710 | LAB_004b9729
        ;   XREF to: 004b9729 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00679dac]      ; 004b9712 | void * PTR_s_Copy_Extract_00628460_00679dac
    PUSH EBX                            ; 004b9718 | = "Copy & Extract" | s_Copy_Extract_00628460 = Copy & Extract
    LEA EAX,[ESP + 0xfd8]               ; 004b9719
    PUSH EAX                            ; 004b9720
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b9721 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9726
    CMP dword ptr [EBP + 0x370],0x5     ; 004b9729
        ;   Label: LAB_004b9729
    JNZ 0x004b9749                      ; 004b9730 | LAB_004b9749
        ;   XREF to: 004b9749 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x00679db0]      ; 004b9732 | void * PTR_s_Dismount_00679db0
    PUSH EDI                            ; 004b9738 | = "Dismount" | s_Dismount_0062846f = Dismount
    LEA EAX,[ESP + 0xfd8]               ; 004b9739
    PUSH EAX                            ; 004b9740
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b9741 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9746
    CMP dword ptr [EBP + 0x370],0x5     ; 004b9749
        ;   Label: LAB_004b9749
    JNZ 0x004b9769                      ; 004b9750 | LAB_004b9769
        ;   XREF to: 004b9769 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x00679db4]      ; 004b9752 | void * PTR_s_Dismount_Delete_00628478_00679db4
    PUSH EDX                            ; 004b9758 | = "Dismount & Delete" | s_Dismount_Delete_00628478 = Dismount & Delete
    LEA EAX,[ESP + 0xfd8]               ; 004b9759
    PUSH EAX                            ; 004b9760
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b9761 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9766
    CMP dword ptr [EBP + 0x370],0x5     ; 004b9769
        ;   Label: LAB_004b9769
    JNZ 0x004b992f                      ; 004b9770 | LAB_004b992f
        ;   XREF to: 004b992f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x378]     ; 004b9776
        ;   Label: LAB_004b9776
    MOV EBX,dword ptr [EAX*0x4 + 0x679da0] ; 004b977c | void * PTR_s_Skip_00679da0
    PUSH EBX                            ; 004b9783
    LEA EAX,[ESP + 0xfd8]               ; 004b9784
    PUSH EAX                            ; 004b978b
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 004b978c | int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)
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
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b97ad | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b97b2
    MOV ESI,EAX                         ; 004b97b5
    TEST EAX,EAX                        ; 004b97b7
    JL 0x004b9978                       ; 004b97b9 | LAB_004b9978
        ;   XREF to: 004b9978 (CONDITIONAL_JUMP)
    PUSH 0x679db8                       ; 004b97bf | = "Show local file differences" | s_Show_local_file_differences_00679db8 = Show local file differences
    PUSH EAX                            ; 004b97c4
    LEA EAX,[ESP + 0xfdc]               ; 004b97c5
    PUSH EAX                            ; 004b97cc
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b97cd | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b97d2
    PUSH EAX                            ; 004b97d5
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b97d6 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b97db
    TEST EAX,EAX                        ; 004b97de
    JNZ 0x004b9949                      ; 004b97e0 | LAB_004b9949
        ;   XREF to: 004b9949 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004b97e6
    MOV EAX,dword ptr [ESP + 0x2340]    ; 004b97e7
    PUSH EAX                            ; 004b97ee
    CALL engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 ; 004b97ef | void engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(CFileManager * this_ptr, char * pod_filename)
        ;   XREF to: 004b82a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b97f4
    JMP 0x004b979e                      ; 004b97f7 | LAB_004b979e
        ;   XREF to: 004b979e (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 004b97f9
        ;   Label: caseD_0
    LEA EAX,[EBP + 0x100]               ; 004b97fa
    PUSH EAX                            ; 004b9800
    PUSH 0x628729                       ; 004b9801 | = "Your pod %s is newer than %s\n" | s_Your_pod_s_is_newer_than_00628729 = Your pod %s is newer than %s

    PUSH EBX                            ; 004b9806
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9807 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b980c
    JMP 0x004b958e                      ; 004b980f | LAB_004b958e
        ;   XREF to: 004b958e (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 004b9814
        ;   Label: caseD_1
    LEA EAX,[EBP + 0x100]               ; 004b9815
    PUSH EAX                            ; 004b981b
    PUSH 0x628747                       ; 004b981c | = "Your pod %s is older than %s\n" | s_Your_pod_s_is_older_than_00628747 = Your pod %s is older than %s

    PUSH EBX                            ; 004b9821
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9822 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b9827
    JMP 0x004b958e                      ; 004b982a | LAB_004b958e
        ;   XREF to: 004b958e (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 004b982f
        ;   Label: caseD_2
    LEA EAX,[EBP + 0x100]               ; 004b9830
    PUSH EAX                            ; 004b9836
    PUSH 0x628765                       ; 004b9837 | = "Your pod %s is different than %s\n" | s_Your_pod_s_is_different__00628765 = Your pod %s is different than %s

    PUSH EBX                            ; 004b983c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b983d | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b9842
    JMP 0x004b958e                      ; 004b9845 | LAB_004b958e
        ;   XREF to: 004b958e (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 004b984a
        ;   Label: caseD_3
    LEA EAX,[EBP + 0x100]               ; 004b984b
    PUSH EAX                            ; 004b9851
    PUSH 0x628787                       ; 004b9852 | = "Your pod %s is the same as %s\n" | s_Your_pod_s_is_the_same_a_00628787 = Your pod %s is the same as %s

    PUSH EBX                            ; 004b9857
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9858 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b985d
    JMP 0x004b958e                      ; 004b9860 | LAB_004b958e
        ;   XREF to: 004b958e (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 004b9865
        ;   Label: caseD_5
    LEA EAX,[EBP + 0x100]               ; 004b9866
    PUSH EAX                            ; 004b986c
    PUSH 0x6287a6                       ; 004b986d | = "%s is mounted, but %s does not exist\n" | s_s_is_mounted_but_s_does__006287a6 = %s is mounted, but %s does not exist

    PUSH EBX                            ; 004b9872
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9873 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b9878
    JMP 0x004b958e                      ; 004b987b | LAB_004b958e
        ;   XREF to: 004b958e (UNCONDITIONAL_JUMP)
    MOV ECX,0x6287cc                    ; 004b9880 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_006287cc = ..\engine\fileio.cpp
        ;   Label: default
    MOV ESI,0xd1c                       ; 004b9885
    PUSH 0x6287e1                       ; 004b988a | = "Hell froze." | s_Hell_froze_006287e1 = Hell froze.
    MOV dword ptr [0x02f0ca48],ECX      ; 004b988f | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004b9895 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b989b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b98a0
    JMP 0x004b9590                      ; 004b98a3 | LAB_004b9590
        ;   XREF to: 004b9590 (UNCONDITIONAL_JUMP)
    IMUL EAX,EAX,0x39c                  ; 004b98a8
        ;   Label: LAB_004b98a8
    MOV EBP,dword ptr [ESP + 0x22f4]    ; 004b98ae
    ADD EBP,EAX                         ; 004b98b5
    LEA ESI,[EBP + 0x204]               ; 004b98b7
    PUSH ESI                            ; 004b98bd
    PUSH 0x6286f8                       ; 004b98be | = "Select action for %s\n" | s_Select_action_for_s_006286f8 = Select action for %s

    LEA EAX,[ESP + 0x8]                 ; 004b98c3
    PUSH EAX                            ; 004b98c7
    LEA EBX,[ESP + 0xc]                 ; 004b98c8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b98cc | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD EBX,EAX                         ; 004b98d1
    MOV EAX,dword ptr [EBP + 0x370]     ; 004b98d3
    ADD ESP,0xc                         ; 004b98d9
    CMP EAX,0x5                         ; 004b98dc
    JA 0x004b9880                       ; 004b98df | default
        ;   XREF to: 004b9880 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x4b868c]  ; 004b98e1 | pointer switchdataD_004b868c
        ;   Label: switchD
    PUSH ESI                            ; 004b98e8
        ;   Label: LAB_004b98e8
    PUSH 0x6288e8                       ; 004b98e9 | = "%s currently has this pod checked out\n" | s_s_currently_has_this_pod_006288e8 = %s currently has this pod checked out

    PUSH EBX                            ; 004b98ee
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b98ef | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b98f4
    JMP 0x004b9696                      ; 004b98f7 | LAB_004b9696
        ;   XREF to: 004b9696 (UNCONDITIONAL_JUMP)
    PUSH 0x628936                       ; 004b98fc | = "Your currently do not have this pod m..." | s_Your_currently_do_not_ha_00628936 = Your currently do not have this pod mounted.

        ;   Label: LAB_004b98fc
    JMP 0x004b96aa                      ; 004b9901 | LAB_004b96aa
        ;   XREF to: 004b96aa (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x370],0x5     ; 004b9906
        ;   Label: LAB_004b9906
    JZ 0x004b9709                       ; 004b990d | LAB_004b9709
        ;   XREF to: 004b9709 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x00679da8]      ; 004b9913 | void * PTR_s_Copy_Mount_00628453_00679da8
    PUSH EDX                            ; 004b9919 | = "Copy & Mount" | s_Copy_Mount_00628453 = Copy & Mount
    LEA EAX,[ESP + 0xfd8]               ; 004b991a
    PUSH EAX                            ; 004b9921
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b9922 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9927
    JMP 0x004b9709                      ; 004b992a | LAB_004b9709
        ;   XREF to: 004b9709 (UNCONDITIONAL_JUMP)
    PUSH 0x679db8                       ; 004b992f | = "Show local file differences" | s_Show_local_file_differences_00679db8 = Show local file differences
        ;   Label: LAB_004b992f
    LEA EAX,[ESP + 0xfd8]               ; 004b9934
    PUSH EAX                            ; 004b993b
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b993c | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9941
    JMP 0x004b9776                      ; 004b9944 | LAB_004b9776
        ;   XREF to: 004b9776 (UNCONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 004b9949
        ;   Label: LAB_004b9949
    XOR EDI,EDI                         ; 004b994b
    MOV EDX,dword ptr [EBX + 0x679da0]  ; 004b994d | void * PTR_s_Skip_00679da0 | PTR_s_Copy_00679da4 = 0062844e
        ;   Label: LAB_004b994d
    PUSH EDX                            ; 004b9953 | = "Skip" | s_Skip_00628449 = Skip | s_Copy_0062844e = Copy
    PUSH ESI                            ; 004b9954
    LEA EAX,[ESP + 0xfdc]               ; 004b9955
    PUSH EAX                            ; 004b995c
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b995d | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9962
    PUSH EAX                            ; 004b9965
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b9966 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b996b
    TEST EAX,EAX                        ; 004b996e
    JNZ 0x004b99a1                      ; 004b9970 | LAB_004b99a1
        ;   XREF to: 004b99a1 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + 0x378],EDI     ; 004b9972
    PUSH 0x0                            ; 004b9978
        ;   Label: LAB_004b9978
    LEA EAX,[ESP + 0xfd8]               ; 004b997a
    PUSH EAX                            ; 004b9981
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b9982 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9987
    PUSH 0x0                            ; 004b998a
    LEA EAX,[ESP + 0xc30]               ; 004b998c
    PUSH EAX                            ; 004b9993
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b9994 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9999
    JMP 0x004b8d5b                      ; 004b999c | LAB_004b8d5b
        ;   XREF to: 004b8d5b (UNCONDITIONAL_JUMP)
    ADD EBX,0x4                         ; 004b99a1
        ;   Label: LAB_004b99a1
    INC EDI                             ; 004b99a4
    CMP EBX,0x18                        ; 004b99a5
    JL 0x004b994d                       ; 004b99a8 | LAB_004b994d
        ;   XREF to: 004b994d (CONDITIONAL_JUMP)
    JMP 0x004b9978                      ; 004b99aa | LAB_004b9978
        ;   XREF to: 004b9978 (UNCONDITIONAL_JUMP)
    OR AL,0x8                           ; 004b99ac
        ;   Label: LAB_004b99ac
    PUSH EAX                            ; 004b99ae
    MOV EBX,dword ptr [ESP + 0x2318]    ; 004b99af
    PUSH EBX                            ; 004b99b6
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b99b7 | bool engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b99bc
    JMP 0x004b8f32                      ; 004b99bf | LAB_004b8f32
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
    CMP EDX,0x5                         ; 004b99c4
        ;   Label: LAB_004b99c4
    JNZ 0x004b99ef                      ; 004b99c7 | LAB_004b99ef
        ;   XREF to: 004b99ef (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004b99c9
    MOV EBX,dword ptr [ESP + 0x2318]    ; 004b99cb
    PUSH EBX                            ; 004b99d2
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b99d3 | bool engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b99d8
    PUSH EBX                            ; 004b99db
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 004b99dc | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b99e1
    TEST EAX,EAX                        ; 004b99e4
    JNZ 0x004b9a3e                      ; 004b99e6 | LAB_004b9a3e
        ;   XREF to: 004b9a3e (CONDITIONAL_JUMP)
    INC dword ptr [ESP + 0x22ec]        ; 004b99e8
    MOV ECX,dword ptr [EDI + 0x378]     ; 004b99ef
        ;   Label: LAB_004b99ef
    CMP ECX,0x4                         ; 004b99f5
    JNZ 0x004b9a54                      ; 004b99f8 | LAB_004b9a54
        ;   XREF to: 004b9a54 (CONDITIONAL_JUMP)
    ADD EDI,0x100                       ; 004b99fa
        ;   Label: LAB_004b99fa
    PUSH EDI                            ; 004b9a00
    LEA EAX,[ESP + 0x22b8]              ; 004b9a01
    PUSH EAX                            ; 004b9a08
    MOV ECX,dword ptr [ESP + 0x2344]    ; 004b9a09
    PUSH ECX                            ; 004b9a10
    CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 ; 004b9a11 | int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
        ;   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9a16
    TEST EAX,EAX                        ; 004b9a19
    JL 0x004b9bc0                       ; 004b9a1b | LAB_004b9bc0
        ;   XREF to: 004b9bc0 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004b9a21
    LEA EAX,[ESP + 0x22b8]              ; 004b9a22
    PUSH EAX                            ; 004b9a29
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 004b9a2a | void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9a2f
    INC dword ptr [ESP + 0x22e8]        ; 004b9a32
    JMP 0x004b8f32                      ; 004b9a39 | LAB_004b8f32
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 004b9a3e
        ;   Label: LAB_004b9a3e
    PUSH 0x628964                       ; 004b9a3f | = "Can't delete %s" | s_Can_t_delete_s_00628964 = Can't delete %s
    MOV EAX,[0x00678a60]                ; 004b9a44 | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 004b9a49 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9a4a | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9a4f
    JMP 0x004b99ef                      ; 004b9a52 | LAB_004b99ef
        ;   XREF to: 004b99ef (UNCONDITIONAL_JUMP)
    CMP ECX,0x5                         ; 004b9a54
        ;   Label: LAB_004b9a54
    JZ 0x004b99fa                       ; 004b9a57 | LAB_004b99fa
        ;   XREF to: 004b99fa (CONDITIONAL_JUMP)
    MOV CH,byte ptr [0x02d12ac8]        ; 004b9a59 | char[264] g_VersionControlDirectory
    XOR ESI,ESI                         ; 004b9a5f
    LEA EBX,[EDI + 0x100]               ; 004b9a61
    MOV dword ptr [ESP + 0x22cc],ESI    ; 004b9a67
    TEST CH,CH                          ; 004b9a6e
    JZ 0x004b9c0f                       ; 004b9a70 | LAB_004b9c0f
        ;   XREF to: 004b9c0f (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004b9a76
    PUSH 0x0                            ; 004b9a77
    MOV EBP,EBX                         ; 004b9a79
    CALL engine_dosio.c_getFileTimestamp_FUN_00481960 ; 004b9a7b | int engine_dosio.c_getFileTimestamp_FUN_00481960(char * directory, char * filename)
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9a80
    LEA ESI,[EDI + 0x308]               ; 004b9a83
    MOV dword ptr [ESP + 0x2300],EAX    ; 004b9a89
    TEST EAX,EAX                        ; 004b9a90
    JL 0x004b9af4                       ; 004b9a92 | LAB_004b9af4
        ;   XREF to: 004b9af4 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 004b9a94
    JZ 0x004b9bda                       ; 004b9a96 | LAB_004b9bda
        ;   XREF to: 004b9bda (CONDITIONAL_JUMP)
    CMP byte ptr [ESI],0x0              ; 004b9a9c
    JZ 0x004b9bda                       ; 004b9a9f | LAB_004b9bda
        ;   XREF to: 004b9bda (CONDITIONAL_JUMP)
    PUSH 0x2d12bd0                      ; 004b9aa5 | SVersionControlSession g_VersionControlSession
    PUSH ESI                            ; 004b9aaa
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b9aab | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9ab0
    TEST EAX,EAX                        ; 004b9ab3
    JNZ 0x004b9bda                      ; 004b9ab5 | LAB_004b9bda
        ;   XREF to: 004b9bda (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004b9abb
    PUSH 0x626502                       ; 004b9abc | = "You currently have %s checked out.  R..." | s_You_currently_have_s_che_00626502 = You currently have %s checked out.  Replace local copy with network copy?
    LEA EAX,[ESP + 0x1bb4]              ; 004b9ac1
    PUSH EAX                            ; 004b9ac8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9ac9 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9ace
    PUSH 0x2d12bf0                      ; 004b9ad1 | g_VersionControlSession.field1_0x20[0]
    LEA EAX,[ESP + 0x1bb0]              ; 004b9ad6
    PUSH EAX                            ; 004b9add
        ;   Label: LAB_004b9add
    CALL engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90 ; 004b9ade | int engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90(int * user_choice_ptr, char * dialog_message)
        ;   XREF to: 004b2f90 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9ae3
    TEST EAX,EAX                        ; 004b9ae6
    JL 0x004b8f64                       ; 004b9ae8 | LAB_004b8f64
        ;   XREF to: 004b8f64 (CONDITIONAL_JUMP)
    JZ 0x004b8f32                       ; 004b9aee | LAB_004b8f32
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004b9af4
        ;   Label: LAB_004b9af4
    LEA EAX,[EDI + 0x100]               ; 004b9af6
    PUSH EAX                            ; 004b9afc
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b9afd | bool engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9b02
    MOV EBP,dword ptr [ESP + 0x2318]    ; 004b9b05
        ;   Label: LAB_004b9b05
    PUSH EBP                            ; 004b9b0c
    LEA EAX,[ESP + 0x22a8]              ; 004b9b0d
    PUSH EAX                            ; 004b9b14
    XOR ESI,ESI                         ; 004b9b15
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b9b17 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9b1c
    MOV EBP,EAX                         ; 004b9b1f
    PUSH 0x153                          ; 004b9b21
        ;   Label: LAB_004b9b21
    PUSH 0x626129                       ; 004b9b26 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00626129 = ..\engine\fileio.cpp
    PUSH 0x6289dc                       ; 004b9b2b | = "rb" | s_rb_006289dc = rb
    PUSH 0x0                            ; 004b9b30
    PUSH EBP                            ; 004b9b32
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b9b33 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 004b9b38
    ADD ESP,0x14                        ; 004b9b3a
    TEST EAX,EAX                        ; 004b9b3d
    JZ 0x004b9c43                       ; 004b9b3f | LAB_004b9c43
        ;   XREF to: 004b9c43 (CONDITIONAL_JUMP)
    PUSH 0x400                          ; 004b9b45
    PUSH 0x0                            ; 004b9b4a
    PUSH 0x0                            ; 004b9b4c
    PUSH EAX                            ; 004b9b4e
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004b9b4f | int crt_stdio.c_setvbuf_FUN_00601490(FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b9b54
    TEST EBX,EBX                        ; 004b9b57
    JZ 0x004b9c63                       ; 004b9b59 | LAB_004b9c63
        ;   XREF to: 004b9c63 (CONDITIONAL_JUMP)
    PUSH 0xdbb                          ; 004b9b5f
    PUSH 0x6289ed                       ; 004b9b64 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_006289ed = ..\engine\fileio.cpp
    PUSH 0x628a02                       ; 004b9b69 | = "wb" | s_wb_00628a02 = wb
    PUSH 0x0                            ; 004b9b6e
    LEA EBP,[EDI + 0x100]               ; 004b9b70
    PUSH EBP                            ; 004b9b76
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b9b77 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 004b9b7c
    ADD ESP,0x14                        ; 004b9b7e
    TEST EAX,EAX                        ; 004b9b81
    JNZ 0x004b9c94                      ; 004b9b83 | LAB_004b9c94
        ;   XREF to: 004b9c94 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004b9b89
    JZ 0x004b9ba0                       ; 004b9b8b | LAB_004b9ba0
        ;   XREF to: 004b9ba0 (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b9b8d
    PUSH 0x62604b                       ; 004b9b92 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EBX                            ; 004b9b97
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b9b98 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9b9d
    ADD EDI,0x100                       ; 004b9ba0
        ;   Label: LAB_004b9ba0
    PUSH EDI                            ; 004b9ba6
    PUSH 0x628a05                       ; 004b9ba7 | = "Can't create local %s" | s_Can_t_create_local_s_00628a05 = Can't create local %s
    MOV EDI,dword ptr [0x00678a60]      ; 004b9bac | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 004b9bb2 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9bb3 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9bb8
    JMP 0x004b8f32                      ; 004b9bbb | LAB_004b8f32
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 004b9bc0
        ;   Label: LAB_004b9bc0
    PUSH 0x628974                       ; 004b9bc1 | = "Can't dismount %s because it isn't mo..." | s_Can_t_dismount_s_because_00628974 = Can't dismount %s because it isn't mounted??  Get Fletch.
    MOV EBX,dword ptr [0x00678a60]      ; 004b9bc6 | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 004b9bcc | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9bcd | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9bd2
    JMP 0x004b8f32                      ; 004b9bd5 | LAB_004b8f32
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0x2300],0x8    ; 004b9bda
        ;   Label: LAB_004b9bda
    JNZ 0x004b9af4                      ; 004b9be2 | LAB_004b9af4
        ;   XREF to: 004b9af4 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004b9be8
    PUSH 0x62654c                       ; 004b9be9 | = "A writable copy of %s exists.  Replac..." | s_A_writable_copy_of_s_exi_0062654c = A writable copy of %s exists.  Replace it?
    LEA EAX,[ESP + 0x19c0]              ; 004b9bee
    PUSH EAX                            ; 004b9bf5
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9bf6 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9bfb
    PUSH 0x2d12bf4                      ; 004b9bfe | g_VersionControlSession.field1_0x20[4]
    LEA EAX,[ESP + 0x19bc]              ; 004b9c03
    JMP 0x004b9add                      ; 004b9c0a | LAB_004b9add
        ;   XREF to: 004b9add (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 004b9c0f
        ;   Label: LAB_004b9c0f
    PUSH ESI                            ; 004b9c10
    CALL engine_dosio.c_getFileTimestamp_FUN_00481960 ; 004b9c11 | int engine_dosio.c_getFileTimestamp_FUN_00481960(char * directory, char * filename)
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9c16
    TEST EAX,EAX                        ; 004b9c19
    JL 0x004b9b05                       ; 004b9c1b | LAB_004b9b05
        ;   XREF to: 004b9b05 (CONDITIONAL_JUMP)
    TEST AL,0x8                         ; 004b9c21
    JZ 0x004b9b05                       ; 004b9c23 | LAB_004b9b05
        ;   XREF to: 004b9b05 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004b9c29
    PUSH 0x6289ae                       ; 004b9c2a | = "%s exists and is read only.  Cannot c..." | s_s_exists_and_is_read_onl_006289ae = %s exists and is read only.  Cannot copy POD.
    MOV EDI,dword ptr [0x00678a60]      ; 004b9c2f | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 004b9c35 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9c36 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9c3b
    JMP 0x004b8f32                      ; 004b9c3e | LAB_004b8f32
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
    CALL crt_errno.c_errno_FUN_00601450 ; 004b9c43 | undefined crt_errno.c_errno_FUN_00601450()
        ;   Label: LAB_004b9c43
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)
    CMP dword ptr [EAX],0x6             ; 004b9c48
    JNZ 0x004b9c63                      ; 004b9c4b | LAB_004b9c63
        ;   XREF to: 004b9c63 (CONDITIONAL_JUMP)
    PUSH 0x1f4                          ; 004b9c4d
    INC ESI                             ; 004b9c52
    CALL dword ptr CS:[0x611644]        ; 004b9c53 | Sleep * Sleep
    CMP ESI,0xa                         ; 004b9c5a
    JL 0x004b9b21                       ; 004b9c5d | LAB_004b9b21
        ;   XREF to: 004b9b21 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x2318]    ; 004b9c63
        ;   Label: LAB_004b9c63
    PUSH EBP                            ; 004b9c6a
    LEA EAX,[ESP + 0x22a8]              ; 004b9c6b
    PUSH EAX                            ; 004b9c72
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b9c73 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9c78
    PUSH EAX                            ; 004b9c7b
    PUSH 0x6289df                       ; 004b9c7c | = "Can't open %s" | s_Can_t_open_s_006289df = Can't open %s
    MOV EAX,[0x00678a60]                ; 004b9c81 | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 004b9c86 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9c87 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9c8c
    JMP 0x004b8f32                      ; 004b9c8f | LAB_004b8f32
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDI + 0x398]     ; 004b9c94
        ;   Label: LAB_004b9c94
    PUSH ECX                            ; 004b9c9a
    PUSH EBP                            ; 004b9c9b
    MOV EBP,dword ptr [ESP + 0x2320]    ; 004b9c9c
    PUSH EBP                            ; 004b9ca3
    LEA EAX,[ESP + 0x22b0]              ; 004b9ca4
    PUSH EAX                            ; 004b9cab
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b9cac | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9cb1
    PUSH EAX                            ; 004b9cb4
    PUSH ESI                            ; 004b9cb5
    PUSH EBX                            ; 004b9cb6
    CALL engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 ; 004b9cb7 | char * engine_fileio.cpp_copyFileWithProgress_FUN_004b2030(FILE * source_file, FILE * dest_file, char * source_filename, char * dest_filename, ...)
        ;   XREF to: 004b2030 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b9cbc
    PUSH 0xdc5                          ; 004b9cbf
    PUSH 0x628a1b                       ; 004b9cc4 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00628a1b = ..\engine\fileio.cpp
    PUSH EBX                            ; 004b9cc9
    MOV EBP,EAX                         ; 004b9cca
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b9ccc | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9cd1
    PUSH 0xdc6                          ; 004b9cd4
    PUSH 0x628a30                       ; 004b9cd9 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00628a30 = ..\engine\fileio.cpp
    PUSH ESI                            ; 004b9cde
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b9cdf | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9ce4
    TEST EBP,EBP                        ; 004b9ce7
    JZ 0x004b9d09                       ; 004b9ce9 | LAB_004b9d09
        ;   XREF to: 004b9d09 (CONDITIONAL_JUMP)
    MOV EAX,0x628a45                    ; 004b9ceb | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00628a45 = ..\engine\fileio.cpp
    MOV EDX,0xdc7                       ; 004b9cf0
    PUSH EBP                            ; 004b9cf5
    MOV [0x02f0ca48],EAX                ; 004b9cf6 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004b9cfb | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b9d01 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b9d06
    MOV EAX,dword ptr [EDI + 0x394]     ; 004b9d09
        ;   Label: LAB_004b9d09
    MOV ECX,dword ptr [ESP + 0x22dc]    ; 004b9d0f
    PUSH EAX                            ; 004b9d16
    LEA EBX,[EDI + 0x100]               ; 004b9d17
    INC ECX                             ; 004b9d1d
    PUSH EBX                            ; 004b9d1e
    MOV dword ptr [ESP + 0x22e4],ECX    ; 004b9d1f
    CALL engine_dosio.c_copyFileTimestamp_FUN_00481910 ; 004b9d26 | int engine_dosio.c_copyFileTimestamp_FUN_00481910(char * source_file, char * dest_file)
        ;   XREF to: 00481910 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9d2b
    TEST EAX,EAX                        ; 004b9d2e
    JZ 0x004b9dee                       ; 004b9d30 | LAB_004b9dee
        ;   XREF to: 004b9dee (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d12ac8],0x0       ; 004b9d36 | char[264] g_VersionControlDirectory
        ;   Label: LAB_004b9d36
    JZ 0x004b9d78                       ; 004b9d3d | LAB_004b9d78
        ;   XREF to: 004b9d78 (CONDITIONAL_JUMP)
    PUSH 0x2d12bd0                      ; 004b9d3f | SVersionControlSession g_VersionControlSession
    LEA EAX,[EDI + 0x308]               ; 004b9d44
    PUSH EAX                            ; 004b9d4a
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b9d4b | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9d50
    TEST EAX,EAX                        ; 004b9d53
    JZ 0x004b9d78                       ; 004b9d55 | LAB_004b9d78
        ;   XREF to: 004b9d78 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x22cc]    ; 004b9d57
    OR AL,0x8                           ; 004b9d5e
    PUSH EAX                            ; 004b9d60
    LEA EBX,[EDI + 0x100]               ; 004b9d61
    PUSH EBX                            ; 004b9d67
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b9d68 | bool engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9d6d
    TEST EAX,EAX                        ; 004b9d70
    JZ 0x004b9e08                       ; 004b9d72 | LAB_004b9e08
        ;   XREF to: 004b9e08 (CONDITIONAL_JUMP)
    CMP dword ptr [EDI + 0x378],0x3     ; 004b9d78
        ;   Label: LAB_004b9d78
    JZ 0x004b9d9e                       ; 004b9d7f | LAB_004b9d9e
        ;   XREF to: 004b9d9e (CONDITIONAL_JUMP)
    LEA EBX,[EDI + 0x100]               ; 004b9d81
    PUSH EBX                            ; 004b9d87
    MOV EAX,[0x00680cdc]                ; 004b9d88 | CDemonPod * g_CDemonPodPtr
    PUSH EAX                            ; 004b9d8d | CDemonPod g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280 ; 004b9d8e | int engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280(CPod * this_ptr, char * pod_filename)
        ;   XREF to: 00551280 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9d93
    TEST EAX,EAX                        ; 004b9d96
    JZ 0x004b9e22                       ; 004b9d98 | LAB_004b9e22
        ;   XREF to: 004b9e22 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x378]     ; 004b9d9e
        ;   Label: LAB_004b9d9e
    CMP EAX,0x2                         ; 004b9da4
    JC 0x004b8f32                       ; 004b9da7 | LAB_004b8f32
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)
    ADD EDI,0x100                       ; 004b9dad
    CMP EAX,0x2                         ; 004b9db3
    JBE 0x004b9e3c                      ; 004b9db6 | LAB_004b9e3c
        ;   XREF to: 004b9e3c (CONDITIONAL_JUMP)
    CMP EAX,0x3                         ; 004b9dbc
    JNZ 0x004b8f32                      ; 004b9dbf | LAB_004b8f32
        ;   XREF to: 004b8f32 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004b9dc5
    MOV EAX,dword ptr [ESP + 0x2340]    ; 004b9dc7
    PUSH EDI                            ; 004b9dce
    MOV ECX,dword ptr [ESP + 0x2344]    ; 004b9dcf
    MOV EAX,dword ptr [EAX + 0x138810]  ; 004b9dd6
    PUSH ECX                            ; 004b9ddc
    CALL dword ptr [EAX]                ; 004b9ddd
    ADD ESP,0xc                         ; 004b9ddf
    INC dword ptr [ESP + 0x22e4]        ; 004b9de2
    JMP 0x004b8f32                      ; 004b9de9 | LAB_004b8f32
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 004b9dee
        ;   Label: LAB_004b9dee
    PUSH 0x626577                       ; 004b9def | = "WARNING: Error setting date/time on %..." | s_WARNING_Error_setting_da_00626577 = WARNING: Error setting date/time on %s.
    Tried to set the file time to a time ; (Most likely reason
        ; newer than the current system time on your computer)
    MOV EBX,dword ptr [0x00678a60]      ; 004b9df4 | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 004b9dfa | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9dfb | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9e00
    JMP 0x004b9d36                      ; 004b9e03 | LAB_004b9d36
        ;   XREF to: 004b9d36 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 004b9e08
        ;   Label: LAB_004b9e08
    PUSH 0x628a5a                       ; 004b9e09 | = "Warning: couldn't mark %s as read-only." | s_Warning_couldn_t_mark_s__00628a5a = Warning: couldn't mark %s as read-only.
    MOV ESI,dword ptr [0x00678a60]      ; 004b9e0e | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 004b9e14 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9e15 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9e1a
    JMP 0x004b9d78                      ; 004b9e1d | LAB_004b9d78
        ;   XREF to: 004b9d78 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 004b9e22
        ;   Label: LAB_004b9e22
    PUSH 0x628a82                       ; 004b9e23 | = "Warning: %s failed CRC check" | s_Warning_s_failed_CRC_che_00628a82 = Warning: %s failed CRC check
    MOV EDX,dword ptr [0x00678a60]      ; 004b9e28 | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b9e2e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b9e2f | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9e34
    JMP 0x004b9d9e                      ; 004b9e37 | LAB_004b9d9e
        ;   XREF to: 004b9d9e (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 004b9e3c
        ;   Label: LAB_004b9e3c
    LEA EAX,[ESP + 0x22b8]              ; 004b9e3d
    PUSH EAX                            ; 004b9e44
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b9e45 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9e4a
    INC dword ptr [ESP + 0x22e0]        ; 004b9e4d
    JMP 0x004b8f32                      ; 004b9e54 | LAB_004b8f32
        ;   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x22e8],0x0    ; 004b9e59
        ;   Label: LAB_004b9e59
    JG 0x004b8f83                       ; 004b9e61 | LAB_004b8f83
        ;   XREF to: 004b8f83 (CONDITIONAL_JUMP)
    JMP 0x004b8f9b                      ; 004b9e67 | LAB_004b8f9b
        ;   XREF to: 004b8f9b (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x22dc]    ; 004b9e6c
        ;   Label: LAB_004b9e6c
    LEA EDI,[ESP + 0x1da0]              ; 004b9e73
    TEST EDX,EDX                        ; 004b9e7a
    JLE 0x004b9e96                      ; 004b9e7c | LAB_004b9e96
        ;   XREF to: 004b9e96 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 004b9e7e
    PUSH 0x628ab1                       ; 004b9e7f | = "%d pods copied\n" | s_d_pods_copied_00628ab1 = %d pods copied

    PUSH EDI                            ; 004b9e84
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9e85 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    LEA EDI,[ESP + 0x1dac]              ; 004b9e8a
    ADD ESP,0xc                         ; 004b9e91
    ADD EDI,EAX                         ; 004b9e94
    MOV EBX,dword ptr [ESP + 0x22e4]    ; 004b9e96
        ;   Label: LAB_004b9e96
    TEST EBX,EBX                        ; 004b9e9d
    JLE 0x004b9eb2                      ; 004b9e9f | LAB_004b9eb2
        ;   XREF to: 004b9eb2 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004b9ea1
    PUSH 0x628ac1                       ; 004b9ea2 | = "%d pods extracted\n" | s_d_pods_extracted_00628ac1 = %d pods extracted

    PUSH EDI                            ; 004b9ea7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9ea8 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9ead
    ADD EDI,EAX                         ; 004b9eb0
    MOV EBP,dword ptr [ESP + 0x22e0]    ; 004b9eb2
        ;   Label: LAB_004b9eb2
    TEST EBP,EBP                        ; 004b9eb9
    JLE 0x004b9ece                      ; 004b9ebb | LAB_004b9ece
        ;   XREF to: 004b9ece (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004b9ebd
    PUSH 0x628ad4                       ; 004b9ebe | = "%d pods mounted\n" | s_d_pods_mounted_00628ad4 = %d pods mounted

    PUSH EDI                            ; 004b9ec3
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9ec4 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9ec9
    ADD EDI,EAX                         ; 004b9ecc
    MOV EDX,dword ptr [ESP + 0x22e8]    ; 004b9ece
        ;   Label: LAB_004b9ece
    TEST EDX,EDX                        ; 004b9ed5
    JLE 0x004b9eea                      ; 004b9ed7 | LAB_004b9eea
        ;   XREF to: 004b9eea (CONDITIONAL_JUMP)
    PUSH EDX                            ; 004b9ed9
    PUSH 0x628ae5                       ; 004b9eda | = "%d pods dismounted\n" | s_d_pods_dismounted_00628ae5 = %d pods dismounted

    PUSH EDI                            ; 004b9edf
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9ee0 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9ee5
    ADD EDI,EAX                         ; 004b9ee8
    MOV EBX,dword ptr [ESP + 0x22ec]    ; 004b9eea
        ;   Label: LAB_004b9eea
    TEST EBX,EBX                        ; 004b9ef1
    JLE 0x004b9f06                      ; 004b9ef3 | LAB_004b9f06
        ;   XREF to: 004b9f06 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004b9ef5
    PUSH 0x628af9                       ; 004b9ef6 | = "%d local pods deleted\n" | s_d_local_pods_deleted_00628af9 = %d local pods deleted

    PUSH EDI                            ; 004b9efb
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9efc | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b9f01
    ADD EDI,EAX                         ; 004b9f04
    CMP dword ptr [ESP + 0x22e0],0x0    ; 004b9f06
        ;   Label: LAB_004b9f06
    JLE 0x004b9f2a                      ; 004b9f0e | LAB_004b9f2a
        ;   XREF to: 004b9f2a (CONDITIONAL_JUMP)
    PUSH 0x628b10                       ; 004b9f10 | = "POD.INI re-written\n" | s_POD_INI_re_written_00628b10 = POD.INI re-written

        ;   Label: LAB_004b9f10
    PUSH EDI                            ; 004b9f15
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b9f16 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b9f1b
    ADD EDI,EAX                         ; 004b9f1e
    MOV ESI,0x628b24                    ; 004b9f20 | = "To apply these changes, you should re..." | s_To_apply_these_changes_y_00628b24 = To apply these changes, you should restart the application.
    JMP 0x004b8fed                      ; 004b9f25 | LAB_004b8fed
        ;   XREF to: 004b8fed (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x22e8],0x0    ; 004b9f2a
        ;   Label: LAB_004b9f2a
    JG 0x004b9f10                       ; 004b9f32 | LAB_004b9f10
        ;   XREF to: 004b9f10 (CONDITIONAL_JUMP)
    MOV ESI,0x628b24                    ; 004b9f34 | = "To apply these changes, you should re..." | s_To_apply_these_changes_y_00628b24 = To apply these changes, you should restart the application.
    JMP 0x004b8fed                      ; 004b9f39 | LAB_004b8fed
        ;   XREF to: 004b8fed (UNCONDITIONAL_JUMP)

