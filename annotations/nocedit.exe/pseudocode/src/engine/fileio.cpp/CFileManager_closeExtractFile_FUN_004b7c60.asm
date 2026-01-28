; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_fileio_cpp_CFileManager_closeExtractFile_FUN_004b7c60(CFileManager *this_ptr)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004be041
;   core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930 at 004bd985
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be541
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_00628098
;
; Called Functions:
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7c60
        ;   Label: engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b7c61
    MOV EDX,dword ptr [EBX]             ; 004b7c65
    TEST EDX,EDX                        ; 004b7c67
    JNZ 0x004b7c6d                      ; 004b7c69
        ;   XREF to: 004b7c6d (CONDITIONAL_JUMP)  ; LAB_004b7c6d
    POP EBX                             ; 004b7c6b
    RET                                 ; 004b7c6c
    PUSH 0xa9b                          ; 004b7c6d
        ;   Label: LAB_004b7c6d
    PUSH 0x628098                       ; 004b7c72 | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004b7c77
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b7c78
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b7c7d
    MOV dword ptr [EBX],0x0             ; 004b7c80
    POP EBX                             ; 004b7c86
    RET                                 ; 004b7c87

