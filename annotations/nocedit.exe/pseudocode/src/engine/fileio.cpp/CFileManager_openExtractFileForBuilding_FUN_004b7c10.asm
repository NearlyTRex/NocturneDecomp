; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(CFileManager * this_ptr)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdb24
;   core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930 at 004bd970
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be52c
;   engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0 at 004b7b18
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_00628029
;   TerminatedCString s_wt_0062803e
;   TerminatedCString s_level_lst_00628041
;   TerminatedCString s_engine_fileio_cpp_0062804b
;   TerminatedCString s_fileManager_openExtractF_00628060
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH 0xa8c                          ; 004b7c10
        ;   Label: engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
    PUSH 0x628029                       ; 004b7c15 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00628029 = ..\engine\fileio.cpp
    PUSH 0x62803e                       ; 004b7c1a | = "wt" | s_wt_0062803e = wt
    PUSH 0x0                            ; 004b7c1f
    PUSH 0x628041                       ; 004b7c21 | = "level.lst" | s_level_lst_00628041 = level.lst
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b7c26 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b7c2b
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7c2e
    MOV dword ptr [EDX],EAX             ; 004b7c32
    TEST EAX,EAX                        ; 004b7c34
    JZ 0x004b7c39                       ; 004b7c36 | LAB_004b7c39
        ;   XREF to: 004b7c39 (CONDITIONAL_JUMP)
    RET                                 ; 004b7c38
    PUSH EBX                            ; 004b7c39
        ;   Label: LAB_004b7c39
    MOV ECX,0x62804b                    ; 004b7c3a | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062804b = ..\engine\fileio.cpp
    MOV EBX,0xa8e                       ; 004b7c3f
    PUSH 0x628060                       ; 004b7c44 | = "fileManager::openExtractFile - Unable..." | s_fileManager_openExtractF_00628060 = fileManager::openExtractFile - Unable to open level.lst
    MOV dword ptr [0x02f0ca48],ECX      ; 004b7c49 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004b7c4f | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b7c55 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b7c5a
    POP EBX                             ; 004b7c5d
    RET                                 ; 004b7c5e

