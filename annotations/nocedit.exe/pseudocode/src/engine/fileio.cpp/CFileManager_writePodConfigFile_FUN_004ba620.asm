; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620 (CFileManager *this_ptr,CStrList *pod_list)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   pod_list
;
; XREF[7]:
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bc1d6
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004bae8e
;   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 at 004bce22
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b71a1
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b8f93
;   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 at 004bd0dc
;   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 at 004bc512
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_00628d4f
;   TerminatedCString s_wt_00628d64
;   TerminatedCString s_pod_ini_00628d67
;   TerminatedCString s_engine_fileio_cpp_00628d6f
;   TerminatedCString s_Can_t_create_POD_INI_00628d84
;   TerminatedCString s_d_00628d9a
;   TerminatedCString s_s_00628d9e
;   TerminatedCString s_engine_fileio_cpp_00628da2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba620
        ;   Label: engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
    PUSH ESI                            ; 004ba621
    PUSH EDI                            ; 004ba622
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ba623
    PUSH 0xe94                          ; 004ba627
    PUSH 0x628d4f                       ; 004ba62c | = "..\\engine\\fileio.cpp"
    PUSH 0x628d64                       ; 004ba631 | = "wt"
    PUSH 0x0                            ; 004ba636
    PUSH 0x628d67                       ; 004ba638 | = "pod.ini"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004ba63d
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004ba642
    MOV EDI,EAX                         ; 004ba645
    TEST EAX,EAX                        ; 004ba647
    JZ 0x004ba67b                       ; 004ba649
        ;   XREF to: 004ba67b (CONDITIONAL_JUMP)  ; LAB_004ba67b
    MOV EAX,dword ptr [ESI]             ; 004ba64b
        ;   Label: LAB_004ba64b
    PUSH EAX                            ; 004ba64d
    PUSH 0x628d9a                       ; 004ba64e | = "%d\n"
    PUSH EDI                            ; 004ba653
    XOR EBX,EBX                         ; 004ba654
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ba656
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
        ;   Label: LAB_004ba656
    ADD ESP,0xc                         ; 004ba65b
    MOV EAX,dword ptr [ESI]             ; 004ba65e
    CMP EBX,EAX                         ; 004ba660
    JL 0x004ba6a0                       ; 004ba662
        ;   XREF to: 004ba6a0 (CONDITIONAL_JUMP)  ; LAB_004ba6a0
    PUSH 0xe9b                          ; 004ba664
    PUSH 0x628da2                       ; 004ba669 | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004ba66e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004ba66f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004ba674
    POP EDI                             ; 004ba677
    POP ESI                             ; 004ba678
    POP EBX                             ; 004ba679
    RET                                 ; 004ba67a
    MOV EDX,0x628d6f                    ; 004ba67b | = "..\\engine\\fileio.cpp"
        ;   Label: LAB_004ba67b
    MOV ECX,0xe95                       ; 004ba680
    PUSH 0x628d84                       ; 004ba685 | = "Can't create POD.INI!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004ba68a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004ba690 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ba696
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004ba69b
    JMP 0x004ba64b                      ; 004ba69e
        ;   XREF to: 004ba64b (UNCONDITIONAL_JUMP)  ; LAB_004ba64b
    PUSH EBX                            ; 004ba6a0
        ;   Label: LAB_004ba6a0
    PUSH ESI                            ; 004ba6a1
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004ba6a2
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004ba6a7
    PUSH EAX                            ; 004ba6aa
    PUSH 0x628d9e                       ; 004ba6ab | = "%s\n"
    PUSH EDI                            ; 004ba6b0
    INC EBX                             ; 004ba6b1
    JMP 0x004ba656                      ; 004ba6b2
        ;   XREF to: 004ba656 (UNCONDITIONAL_JUMP)  ; LAB_004ba656

