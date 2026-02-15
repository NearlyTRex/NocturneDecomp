; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl shape_memdbg_cpp_openFile_FUN_0050f7a0(char *filename,char *directory,char *mode,char *source_file,int line_number)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   directory
; char *           Stack[0xc]:4   mode
; char *           Stack[0x10]:4   source_file
; int              Stack[0x14]:4   line_number
; Local Variables:
; _FILE *          Stack[-0x14]:4  opened_file
;
; XREF[89]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520 at 0054b53e
;   core_course.cpp_CCourse_FUN_00442bc0 at 00442be3
;   core_course.cpp_CCourse_FUN_00442d70 at 00442d92
;   core_dmodel.cpp_CKeyFramedModel_backupModel_FUN_00479260 at 00479279
;   core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30 at 00479f52
;   core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10 at 00478e75
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 00479901
;   core_dmodel.cpp_copyFile_FUN_0047c930 at 0047c9a1
;   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 at 00494eba
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdb14
;   ... and 79 more
;
; Referenced Globals:
;   TerminatedCString s_Opening_s_for_s_in_s_lin_00636201
;   TerminatedCString s_Opening_s_in_s_for_s_in__00636221
;   TerminatedCString s_Open_failed_00636247
;   TerminatedCString s_shape_memdbg_cpp_00636255
;   TerminatedCString s_Too_many_open_files_tryi_00636269
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   BOOL g_RecursiveCallFlag
;   HANDLE g_FileMutex
;   int g_OpenFileCount
;   FileTrackingEntry[100] g_FileRegistry
;   undefined4 g_FileRegistry[0].filename[1]
;   undefined4 g_FileRegistry[0].filename[2]
;   undefined4 g_FileRegistry[0].filename[3]
;   undefined4 g_FileRegistry[0].directory[0]
;   ... and 13 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fopen_FUN_00601a7c
;   shape_memdbg.cpp_traceFile_FUN_0050f180
;   wincore_winrun.cpp_createMutex_FUN_005f3fe0
;   wincore_winrun.cpp_releaseMutex_FUN_005f4050
;   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f7a0
        ;   Label: shape_memdbg.cpp_openFile_FUN_0050f7a0
    PUSH ESI                            ; 0050f7a1
    PUSH EDI                            ; 0050f7a2
    PUSH EBP                            ; 0050f7a3
    SUB ESP,0x4                         ; 0050f7a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0050f7a7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0050f7ab
    MOV EBX,dword ptr [ESP + 0x24]      ; 0050f7af
    CMP dword ptr [0x02f0ca50],0x0      ; 0050f7b3 | g_RecursiveCallFlag
    JZ 0x0050f8bf                       ; 0050f7ba
        ;   XREF to: 0050f8bf (CONDITIONAL_JUMP)  ; LAB_0050f8bf
    TEST EBP,EBP                        ; 0050f7c0
        ;   Label: LAB_0050f7c0
    JNZ 0x0050f8e6                      ; 0050f7c2
        ;   XREF to: 0050f8e6 (CONDITIONAL_JUMP)  ; LAB_0050f8e6
    MOV ECX,dword ptr [ESP + 0x28]      ; 0050f7c8
    PUSH ECX                            ; 0050f7cc
    PUSH EBX                            ; 0050f7cd
    MOV EDI,dword ptr [ESP + 0x28]      ; 0050f7ce
    PUSH EDI                            ; 0050f7d2
    PUSH ESI                            ; 0050f7d3
    PUSH 0x636201                       ; 0050f7d4 | = "Opening %s for %s in %s line %d"
    CALL shape_memdbg.cpp_traceFile_FUN_0050f180 ; 0050f7d9
        ;   XREF to: 0050f180 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceFile_FUN_0050f180(char * format)
    ADD ESP,0x14                        ; 0050f7de
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050f7e1
        ;   Label: LAB_0050f7e1
    PUSH EAX                            ; 0050f7e5
    PUSH ESI                            ; 0050f7e6
    CALL crt_stdio.c_fopen_FUN_00601a7c ; 0050f7e7
        ;   XREF to: 00601a7c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_00601a7c(char * filename, char * mode)
    ADD ESP,0x8                         ; 0050f7ec
    MOV dword ptr [ESP],EAX             ; 0050f7ef
    TEST EAX,EAX                        ; 0050f7f2
    JZ 0x0050f905                       ; 0050f7f4
        ;   XREF to: 0050f905 (CONDITIONAL_JUMP)  ; LAB_0050f905
    CMP dword ptr [0x02f0d948],0x64     ; 0050f7fa | g_OpenFileCount
    JGE 0x0050f92b                      ; 0050f801
        ;   XREF to: 0050f92b (CONDITIONAL_JUMP)  ; LAB_0050f92b
    MOV EDI,dword ptr [0x02f0d948]      ; 0050f807 | g_OpenFileCount
        ;   Label: LAB_0050f807
    IMUL EDX,EDI,0x328                  ; 0050f80d
    ADD EDX,0x2f0d94c                   ; 0050f813 | g_FileRegistry
    LEA EAX,[EDI + 0x1]                 ; 0050f819
    MOV EDI,EDX                         ; 0050f81c
    MOV [0x02f0d948],EAX                ; 0050f81e | g_OpenFileCount
    PUSH EDI                            ; 0050f823
    MOV AL,byte ptr [ESI]               ; 0050f824
        ;   Label: LAB_0050f824
    MOV byte ptr [EDI],AL               ; 0050f826 | g_FileRegistry | g_FileRegistry[0].filename[2]
    CMP AL,0x0                          ; 0050f828
    JZ 0x0050f83c                       ; 0050f82a
        ;   XREF to: 0050f83c (CONDITIONAL_JUMP)  ; LAB_0050f83c
    MOV AL,byte ptr [ESI + 0x1]         ; 0050f82c
    ADD ESI,0x2                         ; 0050f82f
    MOV byte ptr [EDI + 0x1],AL         ; 0050f832 | g_FileRegistry[0].filename[1] | g_FileRegistry[0].filename[3]
    ADD EDI,0x2                         ; 0050f835
    CMP AL,0x0                          ; 0050f838
    JNZ 0x0050f824                      ; 0050f83a
        ;   XREF to: 0050f824 (CONDITIONAL_JUMP)  ; LAB_0050f824
    POP EDI                             ; 0050f83c
        ;   Label: LAB_0050f83c
    MOV ESI,dword ptr [ESP + 0x20]      ; 0050f83d
    LEA EDI,[EDX + 0x208]               ; 0050f841
    PUSH EDI                            ; 0050f847
    MOV AL,byte ptr [ESI]               ; 0050f848
        ;   Label: LAB_0050f848
    MOV byte ptr [EDI],AL               ; 0050f84a | g_FileRegistry[0].mode[0] | g_FileRegistry[0].mode[2]
    CMP AL,0x0                          ; 0050f84c
    JZ 0x0050f860                       ; 0050f84e
        ;   XREF to: 0050f860 (CONDITIONAL_JUMP)  ; LAB_0050f860
    MOV AL,byte ptr [ESI + 0x1]         ; 0050f850
    ADD ESI,0x2                         ; 0050f853
    MOV byte ptr [EDI + 0x1],AL         ; 0050f856 | g_FileRegistry[0].mode[1] | g_FileRegistry[0].mode[3]
    ADD EDI,0x2                         ; 0050f859
    CMP AL,0x0                          ; 0050f85c
    JNZ 0x0050f848                      ; 0050f85e
        ;   XREF to: 0050f848 (CONDITIONAL_JUMP)  ; LAB_0050f848
    POP EDI                             ; 0050f860
        ;   Label: LAB_0050f860
    LEA EDI,[EDX + 0x21c]               ; 0050f861
    MOV ESI,EBX                         ; 0050f867
    PUSH EDI                            ; 0050f869
    MOV AL,byte ptr [ESI]               ; 0050f86a
        ;   Label: LAB_0050f86a
    MOV byte ptr [EDI],AL               ; 0050f86c | g_FileRegistry[0].source_file[0] | g_FileRegistry[0].source_file[2]
    CMP AL,0x0                          ; 0050f86e
    JZ 0x0050f882                       ; 0050f870
        ;   XREF to: 0050f882 (CONDITIONAL_JUMP)  ; LAB_0050f882
    MOV AL,byte ptr [ESI + 0x1]         ; 0050f872
    ADD ESI,0x2                         ; 0050f875
    MOV byte ptr [EDI + 0x1],AL         ; 0050f878 | g_FileRegistry[0].source_file[1] | g_FileRegistry[0].source_file[3]
    ADD EDI,0x2                         ; 0050f87b
    CMP AL,0x0                          ; 0050f87e
    JNZ 0x0050f86a                      ; 0050f880
        ;   XREF to: 0050f86a (CONDITIONAL_JUMP)  ; LAB_0050f86a
    POP EDI                             ; 0050f882
        ;   Label: LAB_0050f882
    TEST EBP,EBP                        ; 0050f883
    JNZ 0x0050f97c                      ; 0050f885
        ;   XREF to: 0050f97c (CONDITIONAL_JUMP)  ; LAB_0050f97c
    MOV byte ptr [EDX + 0x104],0x0      ; 0050f88b | g_FileRegistry[0].directory[0]
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050f892
        ;   Label: LAB_0050f892
    MOV dword ptr [EDX + 0x320],EAX     ; 0050f896 | g_FileRegistry[0].line_number
    MOV EAX,dword ptr [ESP]             ; 0050f89c
    MOV dword ptr [EDX + 0x324],EAX     ; 0050f89f | g_FileRegistry[0].file_ptr
    MOV EDX,dword ptr [0x02f0d93c]      ; 0050f8a5 | g_FileMutex
    PUSH EDX                            ; 0050f8ab
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f8ac
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f8b1
    MOV EAX,dword ptr [ESP]             ; 0050f8b4
    ADD ESP,0x4                         ; 0050f8b7
    POP EBP                             ; 0050f8ba
    POP EDI                             ; 0050f8bb
    POP ESI                             ; 0050f8bc
    POP EBX                             ; 0050f8bd
    RET                                 ; 0050f8be
    CMP dword ptr [0x02f0d93c],0x0      ; 0050f8bf | g_FileMutex
        ;   Label: LAB_0050f8bf
    JNZ 0x0050f8d2                      ; 0050f8c6
        ;   XREF to: 0050f8d2 (CONDITIONAL_JUMP)  ; LAB_0050f8d2
    CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0 ; 0050f8c8
        ;   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_005f3fe0()
    MOV [0x02f0d93c],EAX                ; 0050f8cd | g_FileMutex
    MOV EDI,dword ptr [0x02f0d93c]      ; 0050f8d2 | g_FileMutex
        ;   Label: LAB_0050f8d2
    PUSH EDI                            ; 0050f8d8
    CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0 ; 0050f8d9
        ;   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f8de
    JMP 0x0050f7c0                      ; 0050f8e1
        ;   XREF to: 0050f7c0 (UNCONDITIONAL_JUMP)  ; LAB_0050f7c0
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050f8e6
        ;   Label: LAB_0050f8e6
    PUSH EAX                            ; 0050f8ea
    PUSH EBX                            ; 0050f8eb
    MOV EDX,dword ptr [ESP + 0x28]      ; 0050f8ec
    PUSH EDX                            ; 0050f8f0
    PUSH ESI                            ; 0050f8f1
    PUSH EBP                            ; 0050f8f2
    PUSH 0x636221                       ; 0050f8f3 | = "Opening %s in %s for %s in %s line %d"
    CALL shape_memdbg.cpp_traceFile_FUN_0050f180 ; 0050f8f8
        ;   XREF to: 0050f180 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceFile_FUN_0050f180(char * format)
    ADD ESP,0x18                        ; 0050f8fd
    JMP 0x0050f7e1                      ; 0050f900
        ;   XREF to: 0050f7e1 (UNCONDITIONAL_JUMP)  ; LAB_0050f7e1
    MOV ECX,dword ptr [0x02f0d93c]      ; 0050f905 | g_FileMutex
        ;   Label: LAB_0050f905
    PUSH ECX                            ; 0050f90b
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f90c
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f911
    PUSH 0x636247                       ; 0050f914 | = "  Open failed"
    CALL shape_memdbg.cpp_traceFile_FUN_0050f180 ; 0050f919
        ;   XREF to: 0050f180 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceFile_FUN_0050f180(char * format)
    ADD ESP,0x4                         ; 0050f91e
    XOR EAX,EAX                         ; 0050f921
    ADD ESP,0x4                         ; 0050f923
    POP EBP                             ; 0050f926
    POP EDI                             ; 0050f927
    POP ESI                             ; 0050f928
    POP EBX                             ; 0050f929
    RET                                 ; 0050f92a
    MOV ECX,dword ptr [0x02f0d93c]      ; 0050f92b | g_FileMutex
        ;   Label: LAB_0050f92b
    PUSH ECX                            ; 0050f931
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f932
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    MOV EDI,dword ptr [0x02f0ca50]      ; 0050f937 | g_RecursiveCallFlag
    ADD ESP,0x4                         ; 0050f93d
    TEST EDI,EDI                        ; 0050f940
    JZ 0x0050f94e                       ; 0050f942
        ;   XREF to: 0050f94e (CONDITIONAL_JUMP)  ; LAB_0050f94e
    XOR EAX,EAX                         ; 0050f944
    ADD ESP,0x4                         ; 0050f946
    POP EBP                             ; 0050f949
    POP EDI                             ; 0050f94a
    POP ESI                             ; 0050f94b
    POP EBX                             ; 0050f94c
    RET                                 ; 0050f94d
    MOV ECX,dword ptr [ESP + 0x28]      ; 0050f94e
        ;   Label: LAB_0050f94e
    PUSH ECX                            ; 0050f952
    PUSH EBX                            ; 0050f953
    PUSH ESI                            ; 0050f954
    MOV EAX,0x636255                    ; 0050f955 | = "..\\shape\\memdbg.cpp"
    MOV EDX,0x1f0                       ; 0050f95a
    PUSH 0x636269                       ; 0050f95f | = "Too many open files trying to open %s..."
    MOV [0x02f0ca48],EAX                ; 0050f964 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0050f969 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050f96f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 0050f974
    JMP 0x0050f807                      ; 0050f977
        ;   XREF to: 0050f807 (UNCONDITIONAL_JUMP)  ; LAB_0050f807
    LEA EDI,[EDX + 0x104]               ; 0050f97c
        ;   Label: LAB_0050f97c
    MOV ESI,EBP                         ; 0050f982
    PUSH EDI                            ; 0050f984
    MOV AL,byte ptr [ESI]               ; 0050f985
        ;   Label: LAB_0050f985
    MOV byte ptr [EDI],AL               ; 0050f987 | g_FileRegistry[0].directory[0] | g_FileRegistry[0].directory[2]
    CMP AL,0x0                          ; 0050f989
    JZ 0x0050f99d                       ; 0050f98b
        ;   XREF to: 0050f99d (CONDITIONAL_JUMP)  ; LAB_0050f99d
    MOV AL,byte ptr [ESI + 0x1]         ; 0050f98d
    ADD ESI,0x2                         ; 0050f990
    MOV byte ptr [EDI + 0x1],AL         ; 0050f993 | g_FileRegistry[0].directory[1] | g_FileRegistry[0].directory[3]
    ADD EDI,0x2                         ; 0050f996
    CMP AL,0x0                          ; 0050f999
    JNZ 0x0050f985                      ; 0050f99b
        ;   XREF to: 0050f985 (CONDITIONAL_JUMP)  ; LAB_0050f985
    POP EDI                             ; 0050f99d
        ;   Label: LAB_0050f99d
    JMP 0x0050f892                      ; 0050f99e
        ;   XREF to: 0050f892 (UNCONDITIONAL_JUMP)  ; LAB_0050f892

