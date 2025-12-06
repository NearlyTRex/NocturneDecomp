; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; Local Variables:
; undefined1       Stack[-0x6a4]:1  local_6a4
; undefined1       Stack[-0x5a4]:1  local_5a4
; undefined1       Stack[-0x5a3]:1  local_5a3
; undefined4       Stack[-0x498]:4  local_498
; undefined1       Stack[-0x490]:1  local_490
; undefined1       Stack[-0x488]:1  local_488
; undefined1       Stack[-0x487]:1  local_487
; undefined1       Stack[-0x434]:1  local_434
; undefined1       Stack[-0x433]:1  local_433
; undefined1       Stack[-0x3e4]:1  local_3e4
; undefined1       Stack[-0x3e3]:1  local_3e3
; undefined4       Stack[-0x394]:4  local_394
; undefined4       Stack[-0x390]:4  local_390
; undefined4       Stack[-0x388]:4  local_388
; undefined4       Stack[-0x384]:4  local_384
; undefined4       Stack[-0x380]:4  local_380
; undefined4       Stack[-0x378]:4  local_378
; undefined1       Stack[-0x370]:1  local_370
; undefined1       Stack[-0x36c]:1  local_36c
; undefined1       Stack[-0x36b]:1  local_36b
; undefined4       Stack[-0x26c]:4  local_26c
; undefined1       Stack[-0x260]:1  local_260
; undefined1       Stack[-0x160]:1  local_160
; undefined1       Stack[-0x158]:1  local_158
; undefined1       Stack[-0x157]:1  local_157
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined1       Stack[-0xfc]:1  local_fc
; undefined1       Stack[-0xfb]:1  local_fb
; undefined1       Stack[-0xac]:1  local_ac
; undefined1       Stack[-0xab]:1  local_ab
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x60]:4  local_60
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x5b]:1  local_5b
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x2f]:1  local_2f
; undefined1       Stack[-0x2e]:1  local_2e
; undefined1       Stack[-0x2d]:1  local_2d
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[15]:
;   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 at 004b74dd
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004baf68
;   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 at 004b8318
;   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 at 004ba101
;   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 at 004bca70
;   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 at 004b7727
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b6e8f
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b8a81
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b5c09
;   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 at 004bd20f
;   ... and 5 more
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_00640186
;   TerminatedCString s_rb_00640198
;   TerminatedCString s_engine_pod_cpp_0064019b
;   TerminatedCString s_epd_006401ad
;   TerminatedCString s_epd_006401b1
;   TerminatedCString s_engine_pod_cpp_006401b6
;   TerminatedCString s_engine_pod_cpp_006401c8
;   TerminatedCString s_engine_pod_cpp_006401da
;   TerminatedCString s_Out_of_memory_006401ec
;   TerminatedCString s_engine_pod_cpp_006401fb
;   TerminatedCString s_engine_pod_cpp_0064020d
;   TerminatedCString s_engine_pod_cpp_0064021f
;   TerminatedCString s_Out_of_memory_00640231
;   TerminatedCString s_engine_pod_cpp_00640240
;   TerminatedCString s_engine_pod_cpp_00640252
;   ... and 12 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_ftell_FUN_00601560
;   crt_stdlib.c_qsort_FUN_005fdf38
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   engine_dosio.c_getRelativeFilePath_FUN_004816c0
;   engine_dosio.c_splitPath_FUN_00481f20
;   engine_pod.cpp_CPodFile_cleanup_FUN_00550090
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f650
        ;   Label: engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
    PUSH ESI                            ; 0054f651
    PUSH EDI                            ; 0054f652
    PUSH EBP                            ; 0054f653
    SUB ESP,0x694                       ; 0054f654
    MOV EBX,dword ptr [ESP + 0x6a8]     ; 0054f65a
    XOR EDX,EDX                         ; 0054f661
    PUSH EBX                            ; 0054f663
    MOV dword ptr [ESP + 0x674],EDX     ; 0054f664
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_00550090 ; 0054f66b | void engine_pod.cpp_CPodFile_cleanup_FUN_00550090(CPodFile * this_ptr)
        ;   XREF to: 00550090 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054f670
    MOV ECX,dword ptr [ESP + 0x6ac]     ; 0054f673
    PUSH ECX                            ; 0054f67a
    PUSH 0x0                            ; 0054f67b
    LEA EAX,[ESP + 0x8]                 ; 0054f67d
    PUSH EAX                            ; 0054f681
    CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0 ; 0054f682 | void engine_dosio.c_getRelativeFilePath_FUN_004816c0(char * dest_path, char * directory, char * filename)
        ;   XREF to: 004816c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054f687
    MOV EAX,ESP                         ; 0054f68a
    PUSH EAX                            ; 0054f68c
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 0054f68d | int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054f692
    TEST EAX,EAX                        ; 0054f695
    JNZ 0x0054f6a4                      ; 0054f697 | LAB_0054f6a4
        ;   XREF to: 0054f6a4 (CONDITIONAL_JUMP)
    ADD ESP,0x694                       ; 0054f699
    POP EBP                             ; 0054f69f
    POP EDI                             ; 0054f6a0
    POP ESI                             ; 0054f6a1
    POP EBX                             ; 0054f6a2
    RET                                 ; 0054f6a3
    LEA EDX,[EBX + 0x4]                 ; 0054f6a4
        ;   Label: LAB_0054f6a4
    LEA ESI,[ESP + 0x100]               ; 0054f6a7
    MOV EDI,EDX                         ; 0054f6ae
    PUSH EDI                            ; 0054f6b0
    MOV AL,byte ptr [ESI]               ; 0054f6b1
        ;   Label: LAB_0054f6b1
    MOV byte ptr [EDI],AL               ; 0054f6b3
    CMP AL,0x0                          ; 0054f6b5
    JZ 0x0054f6c9                       ; 0054f6b7 | LAB_0054f6c9
        ;   XREF to: 0054f6c9 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054f6b9
    ADD ESI,0x2                         ; 0054f6bc
    MOV byte ptr [EDI + 0x1],AL         ; 0054f6bf
    ADD EDI,0x2                         ; 0054f6c2
    CMP AL,0x0                          ; 0054f6c5
    JNZ 0x0054f6b1                      ; 0054f6c7 | LAB_0054f6b1
        ;   XREF to: 0054f6b1 (CONDITIONAL_JUMP)
    POP EDI                             ; 0054f6c9
        ;   Label: LAB_0054f6c9
    PUSH 0x150                          ; 0054f6ca
    PUSH 0x640186                       ; 0054f6cf | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_00640186 = ..\engine\pod.cpp
    PUSH 0x640198                       ; 0054f6d4 | = "rb" | s_rb_00640198 = rb
    PUSH 0x0                            ; 0054f6d9
    MOV EAX,dword ptr [ESP + 0x21c]     ; 0054f6db
    PUSH EDX                            ; 0054f6e2
    MOV dword ptr [EBX + 0x104],EAX     ; 0054f6e3
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0054f6e9 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0054f6ee
    MOV EBP,EAX                         ; 0054f6f1
    MOV dword ptr [ESP + 0x684],EAX     ; 0054f6f3
    TEST EAX,EAX                        ; 0054f6fa
    JNZ 0x0054f732                      ; 0054f6fc | LAB_0054f732
        ;   XREF to: 0054f732 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x684]     ; 0054f6fe
        ;   Label: LAB_0054f6fe
    TEST EBP,EBP                        ; 0054f705
    JZ 0x0054f71c                       ; 0054f707 | LAB_0054f71c
        ;   XREF to: 0054f71c (CONDITIONAL_JUMP)
    PUSH 0x153                          ; 0054f709
    PUSH 0x64019b                       ; 0054f70e | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_0064019b = ..\engine\pod.cpp
    PUSH EBP                            ; 0054f713
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0054f714 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054f719
    PUSH EBX                            ; 0054f71c
        ;   Label: LAB_0054f71c
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_00550090 ; 0054f71d | void engine_pod.cpp_CPodFile_cleanup_FUN_00550090(CPodFile * this_ptr)
        ;   XREF to: 00550090 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054f722
    XOR EAX,EAX                         ; 0054f725
    ADD ESP,0x694                       ; 0054f727
    POP EBP                             ; 0054f72d
    POP EDI                             ; 0054f72e
    POP ESI                             ; 0054f72f
    POP EBX                             ; 0054f730
    RET                                 ; 0054f731
    LEA EAX,[ESP + 0x444]               ; 0054f732
        ;   Label: LAB_0054f732
    PUSH EAX                            ; 0054f739
    PUSH 0x0                            ; 0054f73a
    PUSH 0x0                            ; 0054f73c
    PUSH 0x0                            ; 0054f73e
    MOV ESI,dword ptr [ESP + 0x6bc]     ; 0054f740
    PUSH ESI                            ; 0054f747
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 0054f748 | void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0054f74d
    PUSH 0x6401ad                       ; 0054f750 | = "epd" | s_epd_006401ad = epd
    LEA EAX,[ESP + 0x448]               ; 0054f755
    PUSH EAX                            ; 0054f75c
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0054f75d | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054f762
    TEST EAX,EAX                        ; 0054f765
    JZ 0x0054f786                       ; 0054f767 | LAB_0054f786
        ;   XREF to: 0054f786 (CONDITIONAL_JUMP)
    PUSH 0x6401b1                       ; 0054f769 | = ".epd" | s_epd_006401b1 = .epd
    LEA EAX,[ESP + 0x448]               ; 0054f76e
    PUSH EAX                            ; 0054f775
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0054f776 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054f77b
    TEST EAX,EAX                        ; 0054f77e
    JNZ 0x0054fa82                      ; 0054f780 | LAB_0054fa82
        ;   XREF to: 0054fa82 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x684]     ; 0054f786
        ;   Label: LAB_0054f786
    PUSH EDX                            ; 0054f78d
    PUSH 0x110                          ; 0054f78e
    PUSH 0x1                            ; 0054f793
    LEA EAX,[ESP + 0x340]               ; 0054f795
    PUSH EAX                            ; 0054f79c
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054f79d | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054f7a2
    LEA ESI,[ESP + 0x338]               ; 0054f7a5
    MOV EAX,dword ptr [ESP + 0x438]     ; 0054f7ac
    LEA EDI,[EBX + 0x108]               ; 0054f7b3
    MOV dword ptr [EBX + 0x410],EAX     ; 0054f7b9
    PUSH EDI                            ; 0054f7bf
    MOV AL,byte ptr [ESI]               ; 0054f7c0
        ;   Label: LAB_0054f7c0
    MOV byte ptr [EDI],AL               ; 0054f7c2
    CMP AL,0x0                          ; 0054f7c4
    JZ 0x0054f7d8                       ; 0054f7c6 | LAB_0054f7d8
        ;   XREF to: 0054f7d8 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054f7c8
    ADD ESI,0x2                         ; 0054f7cb
    MOV byte ptr [EDI + 0x1],AL         ; 0054f7ce
    ADD EDI,0x2                         ; 0054f7d1
    CMP AL,0x0                          ; 0054f7d4
    JNZ 0x0054f7c0                      ; 0054f7d6 | LAB_0054f7c0
        ;   XREF to: 0054f7c0 (CONDITIONAL_JUMP)
    POP EDI                             ; 0054f7d8
        ;   Label: LAB_0054f7d8
    MOV EDX,dword ptr [EBX + 0x410]     ; 0054f7d9
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054f7df
    PUSH 0x16c                          ; 0054f7e6
    ADD EAX,EDX                         ; 0054f7eb
    PUSH 0x6401b6                       ; 0054f7ed | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006401b6 = ..\engine\pod.cpp
    SHL EAX,0x2                         ; 0054f7f2
    PUSH EAX                            ; 0054f7f5
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0054f7f6 | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054f7fb
    MOV dword ptr [EBX + 0x414],EAX     ; 0054f7fe
    TEST EAX,EAX                        ; 0054f804
    JZ 0x0054f6fe                       ; 0054f806 | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    XOR EBP,EBP                         ; 0054f80c
    MOV EAX,dword ptr [EBX + 0x410]     ; 0054f80e
    MOV dword ptr [ESP + 0x678],EBP     ; 0054f814
    MOV dword ptr [ESP + 0x67c],EBP     ; 0054f81b
    TEST EAX,EAX                        ; 0054f822
    JLE 0x0054f994                      ; 0054f824 | LAB_0054f994
        ;   XREF to: 0054f994 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x68c],EBP     ; 0054f82a
    MOV EAX,dword ptr [ESP + 0x684]     ; 0054f831
        ;   Label: LAB_0054f831
    PUSH EAX                            ; 0054f838
    PUSH 0x50                           ; 0054f839
    PUSH 0x1                            ; 0054f83b
    LEA EAX,[ESP + 0x604]               ; 0054f83d
    PUSH EAX                            ; 0054f844
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054f845 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054f84a
    MOV EAX,dword ptr [EBX + 0x414]     ; 0054f84d
    ADD EAX,dword ptr [ESP + 0x68c]     ; 0054f853
    LEA EDI,[ESP + 0x5f8]               ; 0054f85a
    MOV dword ptr [EAX],EBP             ; 0054f861
    SUB ECX,ECX                         ; 0054f863
    DEC ECX                             ; 0054f865
    XOR EAX,EAX                         ; 0054f866
    SCASB.REPNE ES:EDI                  ; 0054f868
    NOT ECX                             ; 0054f86a
    DEC ECX                             ; 0054f86c
    INC ECX                             ; 0054f86d
    ADD EBP,ECX                         ; 0054f86e
    CMP EBP,dword ptr [ESP + 0x678]     ; 0054f870
    JLE 0x0054f8dc                      ; 0054f877 | LAB_0054f8dc
        ;   XREF to: 0054f8dc (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x67c]     ; 0054f879
    MOV EAX,dword ptr [EBX + 0x410]     ; 0054f880
    SUB EAX,ESI                         ; 0054f886
    IMUL EAX,EAX,0x30                   ; 0054f888
    PUSH 0x17b                          ; 0054f88b
    PUSH 0x6401c8                       ; 0054f890 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006401c8 = ..\engine\pod.cpp
    LEA EDX,[EAX + EBP*0x1]             ; 0054f895
    PUSH EDX                            ; 0054f898
    MOV EAX,dword ptr [EBX + 0x418]     ; 0054f899
    PUSH EAX                            ; 0054f89f
    MOV dword ptr [ESP + 0x688],EDX     ; 0054f8a0
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0054f8a7 | void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054f8ac
    MOV dword ptr [EBX + 0x418],EAX     ; 0054f8af
    TEST EAX,EAX                        ; 0054f8b5
    JNZ 0x0054f8dc                      ; 0054f8b7 | LAB_0054f8dc
        ;   XREF to: 0054f8dc (CONDITIONAL_JUMP)
    MOV ECX,0x6401da                    ; 0054f8b9 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006401da = ..\engine\pod.cpp
    MOV ESI,0x17c                       ; 0054f8be
    PUSH 0x6401ec                       ; 0054f8c3 | = "Out of memory!" | s_Out_of_memory_006401ec = Out of memory!
    MOV dword ptr [0x02f0ca48],ECX      ; 0054f8c8 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0054f8ce | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054f8d4 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054f8d9
    MOV EDI,dword ptr [ESP + 0x68c]     ; 0054f8dc
        ;   Label: LAB_0054f8dc
    MOV EAX,dword ptr [EBX + 0x414]     ; 0054f8e3
    ADD EAX,EDI                         ; 0054f8e9
    MOV EDI,dword ptr [EBX + 0x418]     ; 0054f8eb
    MOV EDX,dword ptr [EAX]             ; 0054f8f1
    LEA ESI,[ESP + 0x5f8]               ; 0054f8f3
    ADD EDI,EDX                         ; 0054f8fa
    PUSH EDI                            ; 0054f8fc
    MOV AL,byte ptr [ESI]               ; 0054f8fd
        ;   Label: LAB_0054f8fd
    MOV byte ptr [EDI],AL               ; 0054f8ff
    CMP AL,0x0                          ; 0054f901
    JZ 0x0054f915                       ; 0054f903 | LAB_0054f915
        ;   XREF to: 0054f915 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054f905
    ADD ESI,0x2                         ; 0054f908
    MOV byte ptr [EDI + 0x1],AL         ; 0054f90b
    ADD EDI,0x2                         ; 0054f90e
    CMP AL,0x0                          ; 0054f911
    JNZ 0x0054f8fd                      ; 0054f913 | LAB_0054f8fd
        ;   XREF to: 0054f8fd (CONDITIONAL_JUMP)
    POP EDI                             ; 0054f915
        ;   Label: LAB_0054f915
    MOV EDX,dword ptr [ESP + 0x68c]     ; 0054f916
    MOV EAX,dword ptr [EBX + 0x414]     ; 0054f91d
    ADD EDX,EAX                         ; 0054f923
    MOV EAX,dword ptr [ESP + 0x638]     ; 0054f925
    MOV dword ptr [EDX + 0x4],EAX       ; 0054f92c
    MOV ECX,dword ptr [ESP + 0x68c]     ; 0054f92f
    MOV EDX,dword ptr [EBX + 0x414]     ; 0054f936
    ADD EDX,ECX                         ; 0054f93c
    MOV EAX,dword ptr [ESP + 0x63c]     ; 0054f93e
    MOV dword ptr [EDX + 0x8],EAX       ; 0054f945
    MOV EAX,dword ptr [EBX + 0x414]     ; 0054f948
    LEA EDX,[ECX + EAX*0x1]             ; 0054f94e
    MOV EAX,dword ptr [ESP + 0x644]     ; 0054f951
    MOV dword ptr [EDX + 0x10],EAX      ; 0054f958
    MOV EDI,dword ptr [ESP + 0x67c]     ; 0054f95b
    MOV EAX,dword ptr [EBX + 0x414]     ; 0054f962
    INC EDI                             ; 0054f968
    LEA EDX,[ECX + EAX*0x1]             ; 0054f969
    MOV EAX,dword ptr [EBX + 0x104]     ; 0054f96c
    MOV dword ptr [ESP + 0x67c],EDI     ; 0054f972
    MOV dword ptr [EDX + 0xc],EAX       ; 0054f979
    LEA ESI,[ECX + 0x14]                ; 0054f97c
    MOV EDX,dword ptr [EBX + 0x410]     ; 0054f97f
    MOV dword ptr [ESP + 0x68c],ESI     ; 0054f985
    CMP EDI,EDX                         ; 0054f98c
    JL 0x0054f831                       ; 0054f98e | LAB_0054f831
        ;   XREF to: 0054f831 (CONDITIONAL_JUMP)
    CMP EBP,dword ptr [ESP + 0x678]     ; 0054f994
        ;   Label: LAB_0054f994
    JGE 0x0054f9a8                      ; 0054f99b | LAB_0054f9a8
        ;   Label: LAB_0054f99b
        ;   XREF to: 0054f9a8 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x670],0x1     ; 0054f99d
    PUSH 0x22d                          ; 0054f9a8
        ;   Label: LAB_0054f9a8
    PUSH 0x6402ca                       ; 0054f9ad | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006402ca = ..\engine\pod.cpp
    MOV EDI,dword ptr [ESP + 0x68c]     ; 0054f9b2
    PUSH EDI                            ; 0054f9b9
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0054f9ba | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054f9bf
    CMP dword ptr [ESP + 0x670],0x0     ; 0054f9c2
    JZ 0x0054fa13                       ; 0054f9ca | LAB_0054fa13
        ;   XREF to: 0054fa13 (CONDITIONAL_JUMP)
    PUSH 0x233                          ; 0054f9cc
    PUSH 0x6402dc                       ; 0054f9d1 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006402dc = ..\engine\pod.cpp
    PUSH EBP                            ; 0054f9d6
    MOV EDX,dword ptr [EBX + 0x418]     ; 0054f9d7
    PUSH EDX                            ; 0054f9dd
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0054f9de | void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054f9e3
    MOV dword ptr [EBX + 0x418],EAX     ; 0054f9e6
    TEST EAX,EAX                        ; 0054f9ec
    JNZ 0x0054fa13                      ; 0054f9ee | LAB_0054fa13
        ;   XREF to: 0054fa13 (CONDITIONAL_JUMP)
    MOV ESI,0x6402ee                    ; 0054f9f0 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006402ee = ..\engine\pod.cpp
    MOV EDI,0x235                       ; 0054f9f5
    PUSH 0x640300                       ; 0054f9fa | = "realloc returns NULL shrinking filena..." | s_realloc_returns_NULL_shr_00640300 = realloc returns NULL shrinking filenameBlockSize to fit.
    MOV dword ptr [0x02f0ca48],ESI      ; 0054f9ff | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0054fa05 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054fa0b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054fa10
    MOV EAX,dword ptr [EBX + 0x410]     ; 0054fa13
        ;   Label: LAB_0054fa13
    XOR ECX,ECX                         ; 0054fa19
    TEST EAX,EAX                        ; 0054fa1b
    JLE 0x0054fa55                      ; 0054fa1d | LAB_0054fa55
        ;   XREF to: 0054fa55 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0054fa1f
    MOV EAX,dword ptr [EBX + 0x414]     ; 0054fa21
        ;   Label: LAB_0054fa21
    ADD EAX,EDX                         ; 0054fa27
    MOV ESI,dword ptr [EAX]             ; 0054fa29
    TEST ESI,ESI                        ; 0054fa2b
    JL 0x0054f6fe                       ; 0054fa2d | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    CMP EBP,ESI                         ; 0054fa33
    JLE 0x0054f6fe                      ; 0054fa35 | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBX + 0x418]     ; 0054fa3b
    MOV EDI,dword ptr [EAX]             ; 0054fa41
    ADD ESI,EDI                         ; 0054fa43
    MOV dword ptr [EAX],ESI             ; 0054fa45
    INC ECX                             ; 0054fa47
    MOV EAX,dword ptr [EBX + 0x410]     ; 0054fa48
    ADD EDX,0x14                        ; 0054fa4e
    CMP ECX,EAX                         ; 0054fa51
    JL 0x0054fa21                       ; 0054fa53 | LAB_0054fa21
        ;   XREF to: 0054fa21 (CONDITIONAL_JUMP)
    PUSH 0x54f630                       ; 0054fa55
        ;   Label: LAB_0054fa55
    PUSH 0x14                           ; 0054fa5a
    MOV EDX,dword ptr [EBX + 0x410]     ; 0054fa5c
    PUSH EDX                            ; 0054fa62
    MOV ECX,dword ptr [EBX + 0x414]     ; 0054fa63
    PUSH ECX                            ; 0054fa69
    CALL crt_stdlib.c_qsort_FUN_005fdf38 ; 0054fa6a | void crt_stdlib.c_qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
        ;   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 0054fa6f
    ADD ESP,0x10                        ; 0054fa74
    ADD ESP,0x694                       ; 0054fa77
    POP EBP                             ; 0054fa7d
    POP EDI                             ; 0054fa7e
    POP ESI                             ; 0054fa7f
    POP EBX                             ; 0054fa80
    RET                                 ; 0054fa81
    PUSH EBP                            ; 0054fa82
        ;   Label: LAB_0054fa82
    PUSH 0x4                            ; 0054fa83
    PUSH 0x1                            ; 0054fa85
    LEA EAX,[ESP + 0x680]               ; 0054fa87
    PUSH EAX                            ; 0054fa8e
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054fa8f | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054fa94
    PUSH 0x0                            ; 0054fa97
    PUSH 0x0                            ; 0054fa99
    PUSH EBP                            ; 0054fa9b
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0054fa9c | int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054faa1
    CMP byte ptr [ESP + 0x674],0x50     ; 0054faa4
    JNZ 0x0054fad0                      ; 0054faac | LAB_0054fad0
        ;   XREF to: 0054fad0 (CONDITIONAL_JUMP)
    CMP byte ptr [ESP + 0x675],0x4f     ; 0054faae
    JNZ 0x0054fad0                      ; 0054fab6 | LAB_0054fad0
        ;   XREF to: 0054fad0 (CONDITIONAL_JUMP)
    CMP byte ptr [ESP + 0x676],0x44     ; 0054fab8
    JNZ 0x0054fad0                      ; 0054fac0 | LAB_0054fad0
        ;   XREF to: 0054fad0 (CONDITIONAL_JUMP)
    CMP byte ptr [ESP + 0x677],0x33     ; 0054fac2
    JZ 0x0054fc6c                       ; 0054faca | LAB_0054fc6c
        ;   XREF to: 0054fc6c (CONDITIONAL_JUMP)
    CMP byte ptr [ESP + 0x674],0x50     ; 0054fad0
        ;   Label: LAB_0054fad0
    JNZ 0x0054fe58                      ; 0054fad8 | LAB_0054fe58
        ;   XREF to: 0054fe58 (CONDITIONAL_JUMP)
    CMP byte ptr [ESP + 0x675],0x4f     ; 0054fade
    JNZ 0x0054fe58                      ; 0054fae6 | LAB_0054fe58
        ;   XREF to: 0054fe58 (CONDITIONAL_JUMP)
    CMP byte ptr [ESP + 0x676],0x44     ; 0054faec
    JNZ 0x0054fe58                      ; 0054faf4 | LAB_0054fe58
        ;   XREF to: 0054fe58 (CONDITIONAL_JUMP)
    CMP byte ptr [ESP + 0x677],0x32     ; 0054fafa
    JNZ 0x0054fe58                      ; 0054fb02 | LAB_0054fe58
        ;   XREF to: 0054fe58 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x684]     ; 0054fb08
    PUSH EBP                            ; 0054fb0f
    PUSH 0x60                           ; 0054fb10
    PUSH 0x1                            ; 0054fb12
    LEA EAX,[ESP + 0x550]               ; 0054fb14
    PUSH EAX                            ; 0054fb1b
    LEA ESI,[ESP + 0x55c]               ; 0054fb1c
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054fb23 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054fb28
    LEA EDI,[EBX + 0x108]               ; 0054fb2b
    MOV dword ptr [EBX],0xc8            ; 0054fb31
    PUSH EDI                            ; 0054fb37
    MOV AL,byte ptr [ESI]               ; 0054fb38
        ;   Label: LAB_0054fb38
    MOV byte ptr [EDI],AL               ; 0054fb3a
    CMP AL,0x0                          ; 0054fb3c
    JZ 0x0054fb50                       ; 0054fb3e | LAB_0054fb50
        ;   XREF to: 0054fb50 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054fb40
    ADD ESI,0x2                         ; 0054fb43
    MOV byte ptr [EDI + 0x1],AL         ; 0054fb46
    ADD EDI,0x2                         ; 0054fb49
    CMP AL,0x0                          ; 0054fb4c
    JNZ 0x0054fb38                      ; 0054fb4e | LAB_0054fb38
        ;   XREF to: 0054fb38 (CONDITIONAL_JUMP)
    POP EDI                             ; 0054fb50
        ;   Label: LAB_0054fb50
    MOV EAX,dword ptr [ESP + 0x59c]     ; 0054fb51
    MOV dword ptr [EBX + 0x410],EAX     ; 0054fb58
    MOV EAX,dword ptr [ESP + 0x5a0]     ; 0054fb5e
    MOV EDX,dword ptr [EBX + 0x410]     ; 0054fb65
    MOV dword ptr [EBX + 0x41c],EAX     ; 0054fb6b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054fb71
    PUSH 0x1da                          ; 0054fb78
    ADD EAX,EDX                         ; 0054fb7d
    PUSH 0x640240                       ; 0054fb7f | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_00640240 = ..\engine\pod.cpp
    SHL EAX,0x2                         ; 0054fb84
    PUSH EAX                            ; 0054fb87
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0054fb88 | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054fb8d
    MOV dword ptr [EBX + 0x414],EAX     ; 0054fb90
    TEST EAX,EAX                        ; 0054fb96
    JZ 0x0054f6fe                       ; 0054fb98 | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    PUSH EBP                            ; 0054fb9e
    PUSH 0x14                           ; 0054fb9f
    MOV ECX,dword ptr [EBX + 0x410]     ; 0054fba1
    PUSH ECX                            ; 0054fba7
    PUSH EAX                            ; 0054fba8
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054fba9 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x410]     ; 0054fbae
    MOV EBP,dword ptr [EBX + 0x414]     ; 0054fbb4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054fbba
    MOV EBP,dword ptr [EBP + 0x8]       ; 0054fbc1
    ADD EAX,EDX                         ; 0054fbc4
    SUB EBP,0x60                        ; 0054fbc6
    SHL EAX,0x2                         ; 0054fbc9
    SUB EBP,EAX                         ; 0054fbcc
    ADD ESP,0x10                        ; 0054fbce
    CMP EBP,EDX                         ; 0054fbd1
    JL 0x0054f6fe                       ; 0054fbd3 | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    MOV EAX,EDX                         ; 0054fbd9
    SHL EAX,0x8                         ; 0054fbdb
    CMP EBP,EAX                         ; 0054fbde
    JG 0x0054f6fe                       ; 0054fbe0 | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    PUSH 0x1e7                          ; 0054fbe6
    PUSH 0x640252                       ; 0054fbeb | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_00640252 = ..\engine\pod.cpp
    PUSH EBP                            ; 0054fbf0
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0054fbf1 | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054fbf6
    MOV dword ptr [EBX + 0x418],EAX     ; 0054fbf9
    TEST EAX,EAX                        ; 0054fbff
    JNZ 0x0054fc26                      ; 0054fc01 | LAB_0054fc26
        ;   XREF to: 0054fc26 (CONDITIONAL_JUMP)
    MOV EDX,0x640264                    ; 0054fc03 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_00640264 = ..\engine\pod.cpp
    MOV ECX,0x1e8                       ; 0054fc08
    PUSH 0x640276                       ; 0054fc0d | = "Out of memory!" | s_Out_of_memory_00640276 = Out of memory!
    MOV dword ptr [0x02f0ca48],EDX      ; 0054fc12 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0054fc18 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054fc1e | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054fc23
    MOV ESI,dword ptr [ESP + 0x684]     ; 0054fc26
        ;   Label: LAB_0054fc26
    PUSH ESI                            ; 0054fc2d
    PUSH 0x1                            ; 0054fc2e
    PUSH EBP                            ; 0054fc30
    MOV EDI,dword ptr [EBX + 0x418]     ; 0054fc31
    PUSH EDI                            ; 0054fc37
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054fc38 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x410]     ; 0054fc3d
    DEC EDX                             ; 0054fc43
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054fc44
    ADD EAX,EDX                         ; 0054fc4b
    SHL EAX,0x2                         ; 0054fc4d
    MOV EDX,dword ptr [EBX + 0x414]     ; 0054fc50
    ADD EDX,EAX                         ; 0054fc56
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054fc58
    ADD EAX,dword ptr [EDX + 0x4]       ; 0054fc5b
    ADD ESP,0x10                        ; 0054fc5e
    MOV dword ptr [EBX + 0x420],EAX     ; 0054fc61
    JMP 0x0054f9a8                      ; 0054fc67 | LAB_0054f9a8
        ;   XREF to: 0054f9a8 (UNCONDITIONAL_JUMP)
    PUSH EBP                            ; 0054fc6c
        ;   Label: LAB_0054fc6c
    PUSH 0x120                          ; 0054fc6d
    PUSH 0x1                            ; 0054fc72
    LEA EAX,[ESP + 0x220]               ; 0054fc74
    PUSH EAX                            ; 0054fc7b
    LEA ESI,[ESP + 0x22c]               ; 0054fc7c
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054fc83 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054fc88
    LEA EDI,[EBX + 0x108]               ; 0054fc8b
    MOV dword ptr [EBX],0xc8            ; 0054fc91
    PUSH EDI                            ; 0054fc97
    MOV AL,byte ptr [ESI]               ; 0054fc98
        ;   Label: LAB_0054fc98
    MOV byte ptr [EDI],AL               ; 0054fc9a
    CMP AL,0x0                          ; 0054fc9c
    JZ 0x0054fcb0                       ; 0054fc9e | LAB_0054fcb0
        ;   XREF to: 0054fcb0 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054fca0
    ADD ESI,0x2                         ; 0054fca3
    MOV byte ptr [EDI + 0x1],AL         ; 0054fca6
    ADD EDI,0x2                         ; 0054fca9
    CMP AL,0x0                          ; 0054fcac
    JNZ 0x0054fc98                      ; 0054fcae | LAB_0054fc98
        ;   XREF to: 0054fc98 (CONDITIONAL_JUMP)
    POP EDI                             ; 0054fcb0
        ;   Label: LAB_0054fcb0
    LEA ESI,[ESP + 0x270]               ; 0054fcb1
    LEA EDI,[EBX + 0x208]               ; 0054fcb8
    PUSH EDI                            ; 0054fcbe
    MOV AL,byte ptr [ESI]               ; 0054fcbf
        ;   Label: LAB_0054fcbf
    MOV byte ptr [EDI],AL               ; 0054fcc1
    CMP AL,0x0                          ; 0054fcc3
    JZ 0x0054fcd7                       ; 0054fcc5 | LAB_0054fcd7
        ;   XREF to: 0054fcd7 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054fcc7
    ADD ESI,0x2                         ; 0054fcca
    MOV byte ptr [EDI + 0x1],AL         ; 0054fccd
    ADD EDI,0x2                         ; 0054fcd0
    CMP AL,0x0                          ; 0054fcd3
    JNZ 0x0054fcbf                      ; 0054fcd5 | LAB_0054fcbf
        ;   XREF to: 0054fcbf (CONDITIONAL_JUMP)
    POP EDI                             ; 0054fcd7
        ;   Label: LAB_0054fcd7
    LEA ESI,[ESP + 0x2c0]               ; 0054fcd8
    LEA EDI,[EBX + 0x308]               ; 0054fcdf
    PUSH EDI                            ; 0054fce5
    MOV AL,byte ptr [ESI]               ; 0054fce6
        ;   Label: LAB_0054fce6
    MOV byte ptr [EDI],AL               ; 0054fce8
    CMP AL,0x0                          ; 0054fcea
    JZ 0x0054fcfe                       ; 0054fcec | LAB_0054fcfe
        ;   XREF to: 0054fcfe (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054fcee
    ADD ESI,0x2                         ; 0054fcf1
    MOV byte ptr [EDI + 0x1],AL         ; 0054fcf4
    ADD EDI,0x2                         ; 0054fcf7
    CMP AL,0x0                          ; 0054fcfa
    JNZ 0x0054fce6                      ; 0054fcfc | LAB_0054fce6
        ;   XREF to: 0054fce6 (CONDITIONAL_JUMP)
    POP EDI                             ; 0054fcfe
        ;   Label: LAB_0054fcfe
    MOV EAX,dword ptr [ESP + 0x310]     ; 0054fcff
    MOV dword ptr [EBX + 0x410],EAX     ; 0054fd06
    MOV EAX,dword ptr [ESP + 0x32c]     ; 0054fd0c
    MOV dword ptr [EBX + 0x41c],EAX     ; 0054fd13
    MOV EAX,dword ptr [ESP + 0x324]     ; 0054fd19
    MOV dword ptr [EBX + 0x424],EAX     ; 0054fd20
    MOV EAX,dword ptr [ESP + 0x31c]     ; 0054fd26
    MOV EDX,dword ptr [EBX + 0x410]     ; 0054fd2d
    MOV dword ptr [EBX + 0x408],EAX     ; 0054fd33
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054fd39
    PUSH 0x1ab                          ; 0054fd40
    ADD EAX,EDX                         ; 0054fd45
    PUSH 0x6401fb                       ; 0054fd47 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006401fb = ..\engine\pod.cpp
    SHL EAX,0x2                         ; 0054fd4c
    PUSH EAX                            ; 0054fd4f
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0054fd50 | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054fd55
    MOV dword ptr [EBX + 0x414],EAX     ; 0054fd58
    TEST EAX,EAX                        ; 0054fd5e
    JZ 0x0054f6fe                       ; 0054fd60 | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0054fd66
    MOV EDI,dword ptr [ESP + 0x318]     ; 0054fd68
    PUSH EDI                            ; 0054fd6f
    PUSH EBP                            ; 0054fd70
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0054fd71 | int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054fd76
    PUSH EBP                            ; 0054fd79
    PUSH 0x14                           ; 0054fd7a
    MOV EAX,dword ptr [EBX + 0x410]     ; 0054fd7c
    PUSH EAX                            ; 0054fd82
    MOV EDX,dword ptr [EBX + 0x414]     ; 0054fd83
    PUSH EDX                            ; 0054fd89
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054fd8a | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    MOV DH,byte ptr [EBP + 0xc]         ; 0054fd8f
    ADD ESP,0x10                        ; 0054fd92
    TEST DH,0x20                        ; 0054fd95
    JNZ 0x0054f6fe                      ; 0054fd98 | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x320]     ; 0054fd9e
    MOV ECX,dword ptr [EBX + 0x410]     ; 0054fda5
    CMP EBP,ECX                         ; 0054fdab
    JL 0x0054f6fe                       ; 0054fdad | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 0054fdb3
    SHL EAX,0x8                         ; 0054fdb5
    CMP EAX,EBP                         ; 0054fdb8
    JL 0x0054f6fe                       ; 0054fdba | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    PUSH 0x1ba                          ; 0054fdc0
    PUSH 0x64020d                       ; 0054fdc5 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_0064020d = ..\engine\pod.cpp
    PUSH EBP                            ; 0054fdca
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0054fdcb | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054fdd0
    MOV dword ptr [EBX + 0x418],EAX     ; 0054fdd3
    TEST EAX,EAX                        ; 0054fdd9
    JNZ 0x0054fe00                      ; 0054fddb | LAB_0054fe00
        ;   XREF to: 0054fe00 (CONDITIONAL_JUMP)
    MOV EDX,0x64021f                    ; 0054fddd | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_0064021f = ..\engine\pod.cpp
    MOV ECX,0x1bb                       ; 0054fde2
    PUSH 0x640231                       ; 0054fde7 | = "Out of memory!" | s_Out_of_memory_00640231 = Out of memory!
    MOV dword ptr [0x02f0ca48],EDX      ; 0054fdec | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0054fdf2 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054fdf8 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054fdfd
    MOV ESI,dword ptr [ESP + 0x684]     ; 0054fe00
        ;   Label: LAB_0054fe00
    PUSH ESI                            ; 0054fe07
    PUSH 0x1                            ; 0054fe08
    PUSH EBP                            ; 0054fe0a
    MOV EDI,dword ptr [EBX + 0x418]     ; 0054fe0b
    PUSH EDI                            ; 0054fe11
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054fe12 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    MOV CL,byte ptr [ESI + 0xc]         ; 0054fe17
    ADD ESP,0x10                        ; 0054fe1a
    TEST CL,0x20                        ; 0054fe1d
    JNZ 0x0054f6fe                      ; 0054fe20 | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0054fe26
    CALL crt_stdio.c_ftell_FUN_00601560 ; 0054fe27 | long crt_stdio.c_ftell_FUN_00601560(FILE * file_handle)
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x424]     ; 0054fe2c
    MOV dword ptr [EBX + 0x428],EAX     ; 0054fe32
    MOV EAX,EDX                         ; 0054fe38
    SHL EAX,0x5                         ; 0054fe3a
    ADD EDX,EAX                         ; 0054fe3d
    SHL EDX,0x3                         ; 0054fe3f
    MOV EAX,dword ptr [EBX + 0x428]     ; 0054fe42
    ADD EAX,EDX                         ; 0054fe48
    ADD ESP,0x4                         ; 0054fe4a
    MOV dword ptr [EBX + 0x420],EAX     ; 0054fe4d
    JMP 0x0054f9a8                      ; 0054fe53 | LAB_0054f9a8
        ;   XREF to: 0054f9a8 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x684]     ; 0054fe58
        ;   Label: LAB_0054fe58
    PUSH EDI                            ; 0054fe5f
    PUSH 0x54                           ; 0054fe60
    PUSH 0x1                            ; 0054fe62
    LEA EAX,[ESP + 0x5b0]               ; 0054fe64
    PUSH EAX                            ; 0054fe6b
    MOV dword ptr [EBX],0x1             ; 0054fe6c
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054fe72 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054fe77
    MOV EBP,dword ptr [ESP + 0x5a4]     ; 0054fe7a
    CMP EBP,0x1                         ; 0054fe81
    JL 0x0054f6fe                       ; 0054fe84 | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    CMP EBP,0x1869f                     ; 0054fe8a
    JG 0x0054f6fe                       ; 0054fe90 | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    LEA ESI,[ESP + 0x5a8]               ; 0054fe96
    LEA EDI,[EBX + 0x108]               ; 0054fe9d
    MOV dword ptr [EBX + 0x410],EBP     ; 0054fea3
    PUSH EDI                            ; 0054fea9
    MOV AL,byte ptr [ESI]               ; 0054feaa
        ;   Label: LAB_0054feaa
    MOV byte ptr [EDI],AL               ; 0054feac
    CMP AL,0x0                          ; 0054feae
    JZ 0x0054fec2                       ; 0054feb0 | LAB_0054fec2
        ;   XREF to: 0054fec2 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054feb2
    ADD ESI,0x2                         ; 0054feb5
    MOV byte ptr [EDI + 0x1],AL         ; 0054feb8
    ADD EDI,0x2                         ; 0054febb
    CMP AL,0x0                          ; 0054febe
    JNZ 0x0054feaa                      ; 0054fec0 | LAB_0054feaa
        ;   XREF to: 0054feaa (CONDITIONAL_JUMP)
    POP EDI                             ; 0054fec2
        ;   Label: LAB_0054fec2
    MOV EDX,dword ptr [EBX + 0x410]     ; 0054fec3
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054fec9
    PUSH 0x20a                          ; 0054fed0
    ADD EAX,EDX                         ; 0054fed5
    PUSH 0x640285                       ; 0054fed7 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_00640285 = ..\engine\pod.cpp
    SHL EAX,0x2                         ; 0054fedc
    PUSH EAX                            ; 0054fedf
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0054fee0 | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054fee5
    MOV dword ptr [EBX + 0x414],EAX     ; 0054fee8
    TEST EAX,EAX                        ; 0054feee
    JZ 0x0054f6fe                       ; 0054fef0 | LAB_0054f6fe
        ;   XREF to: 0054f6fe (CONDITIONAL_JUMP)
    XOR EBP,EBP                         ; 0054fef6
    MOV EDI,dword ptr [EBX + 0x410]     ; 0054fef8
    MOV dword ptr [ESP + 0x688],EBP     ; 0054fefe
    MOV dword ptr [ESP + 0x680],EBP     ; 0054ff05
    TEST EDI,EDI                        ; 0054ff0c
    JLE 0x0055007a                      ; 0054ff0e | LAB_0055007a
        ;   XREF to: 0055007a (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x690],EBP     ; 0054ff14
    MOV EAX,dword ptr [ESP + 0x684]     ; 0054ff1b
        ;   Label: LAB_0054ff1b
    PUSH EAX                            ; 0054ff22
    PUSH 0x28                           ; 0054ff23
    PUSH 0x1                            ; 0054ff25
    LEA EAX,[ESP + 0x654]               ; 0054ff27
    PUSH EAX                            ; 0054ff2e
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054ff2f | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054ff34
    MOV EAX,dword ptr [EBX + 0x414]     ; 0054ff37
    ADD EAX,dword ptr [ESP + 0x690]     ; 0054ff3d
    LEA EDI,[ESP + 0x648]               ; 0054ff44
    MOV dword ptr [EAX],EBP             ; 0054ff4b
    SUB ECX,ECX                         ; 0054ff4d
    DEC ECX                             ; 0054ff4f
    XOR EAX,EAX                         ; 0054ff50
    SCASB.REPNE ES:EDI                  ; 0054ff52
    NOT ECX                             ; 0054ff54
    DEC ECX                             ; 0054ff56
    INC ECX                             ; 0054ff57
    ADD EBP,ECX                         ; 0054ff58
    CMP EBP,dword ptr [ESP + 0x688]     ; 0054ff5a
    JLE 0x0054ffc6                      ; 0054ff61 | LAB_0054ffc6
        ;   XREF to: 0054ffc6 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x680]     ; 0054ff63
    MOV EAX,dword ptr [EBX + 0x410]     ; 0054ff6a
    SUB EAX,ESI                         ; 0054ff70
    IMUL EAX,EAX,0x30                   ; 0054ff72
    PUSH 0x219                          ; 0054ff75
    PUSH 0x640297                       ; 0054ff7a | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_00640297 = ..\engine\pod.cpp
    LEA EDX,[EAX + EBP*0x1]             ; 0054ff7f
    PUSH EDX                            ; 0054ff82
    MOV EAX,dword ptr [EBX + 0x418]     ; 0054ff83
    PUSH EAX                            ; 0054ff89
    MOV dword ptr [ESP + 0x698],EDX     ; 0054ff8a
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0054ff91 | void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054ff96
    MOV dword ptr [EBX + 0x418],EAX     ; 0054ff99
    TEST EAX,EAX                        ; 0054ff9f
    JNZ 0x0054ffc6                      ; 0054ffa1 | LAB_0054ffc6
        ;   XREF to: 0054ffc6 (CONDITIONAL_JUMP)
    MOV ECX,0x6402a9                    ; 0054ffa3 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006402a9 = ..\engine\pod.cpp
    MOV ESI,0x21a                       ; 0054ffa8
    PUSH 0x6402bb                       ; 0054ffad | = "Out of memory!" | s_Out_of_memory_006402bb = Out of memory!
    MOV dword ptr [0x02f0ca48],ECX      ; 0054ffb2 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0054ffb8 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054ffbe | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054ffc3
    MOV EDX,dword ptr [ESP + 0x690]     ; 0054ffc6
        ;   Label: LAB_0054ffc6
    MOV EAX,dword ptr [EBX + 0x414]     ; 0054ffcd
    ADD EAX,EDX                         ; 0054ffd3
    MOV EDI,dword ptr [EBX + 0x418]     ; 0054ffd5
    MOV ECX,dword ptr [EAX]             ; 0054ffdb
    LEA ESI,[ESP + 0x648]               ; 0054ffdd
    ADD EDI,ECX                         ; 0054ffe4
    PUSH EDI                            ; 0054ffe6
    MOV AL,byte ptr [ESI]               ; 0054ffe7
        ;   Label: LAB_0054ffe7
    MOV byte ptr [EDI],AL               ; 0054ffe9
    CMP AL,0x0                          ; 0054ffeb
    JZ 0x0054ffff                       ; 0054ffed | LAB_0054ffff
        ;   XREF to: 0054ffff (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054ffef
    ADD ESI,0x2                         ; 0054fff2
    MOV byte ptr [EDI + 0x1],AL         ; 0054fff5
    ADD EDI,0x2                         ; 0054fff8
    CMP AL,0x0                          ; 0054fffb
    JNZ 0x0054ffe7                      ; 0054fffd | LAB_0054ffe7
        ;   XREF to: 0054ffe7 (CONDITIONAL_JUMP)
    POP EDI                             ; 0054ffff
        ;   Label: LAB_0054ffff
    MOV EAX,dword ptr [EBX + 0x414]     ; 00550000
    ADD EDX,EAX                         ; 00550006
    MOV EAX,dword ptr [ESP + 0x668]     ; 00550008
    MOV dword ptr [EDX + 0x4],EAX       ; 0055000f
    MOV EDX,dword ptr [ESP + 0x690]     ; 00550012
    MOV EAX,dword ptr [EBX + 0x414]     ; 00550019
    ADD EDX,EAX                         ; 0055001f
    MOV EAX,dword ptr [ESP + 0x66c]     ; 00550021
    MOV dword ptr [EDX + 0x8],EAX       ; 00550028
    MOV ESI,dword ptr [ESP + 0x690]     ; 0055002b
    MOV EAX,dword ptr [EBX + 0x414]     ; 00550032
    ADD EAX,ESI                         ; 00550038
    MOV dword ptr [EAX + 0x10],0x0      ; 0055003a
    MOV EAX,dword ptr [EBX + 0x414]     ; 00550041
    LEA EDX,[ESI + EAX*0x1]             ; 00550047
    MOV EAX,dword ptr [EBX + 0x104]     ; 0055004a
    LEA EDI,[ESI + 0x14]                ; 00550050
    MOV dword ptr [EDX + 0xc],EAX       ; 00550053
    MOV EAX,dword ptr [ESP + 0x680]     ; 00550056
    MOV dword ptr [ESP + 0x690],EDI     ; 0055005d
    INC EAX                             ; 00550064
    MOV EDX,dword ptr [EBX + 0x410]     ; 00550065
    MOV dword ptr [ESP + 0x680],EAX     ; 0055006b
    CMP EAX,EDX                         ; 00550072
    JL 0x0054ff1b                       ; 00550074 | LAB_0054ff1b
        ;   XREF to: 0054ff1b (CONDITIONAL_JUMP)
    CMP EBP,dword ptr [ESP + 0x688]     ; 0055007a
        ;   Label: LAB_0055007a
    JMP 0x0054f99b                      ; 00550081 | LAB_0054f99b
        ;   XREF to: 0054f99b (UNCONDITIONAL_JUMP)

