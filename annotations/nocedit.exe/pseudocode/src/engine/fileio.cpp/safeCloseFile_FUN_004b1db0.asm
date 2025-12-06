; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_safeCloseFile_FUN_004b1db0(FILE * * file_ptr)
;
; Parameters:
; FILE * *         Stack[0x4]:4   file_ptr
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_0062604b
;
; Called Functions:
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1db0
        ;   Label: engine_fileio.cpp_safeCloseFile_FUN_004b1db0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b1db1
    MOV EDX,dword ptr [EBX]             ; 004b1db5
    TEST EDX,EDX                        ; 004b1db7
    JNZ 0x004b1dbd                      ; 004b1db9 | LAB_004b1dbd
        ;   XREF to: 004b1dbd (CONDITIONAL_JUMP)
    POP EBX                             ; 004b1dbb
    RET                                 ; 004b1dbc
    PUSH 0xc4                           ; 004b1dbd
        ;   Label: LAB_004b1dbd
    PUSH 0x62604b                       ; 004b1dc2 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EDX                            ; 004b1dc7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b1dc8 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b1dcd
    MOV dword ptr [EBX],0x0             ; 004b1dd0
    POP EBX                             ; 004b1dd6
    RET                                 ; 004b1dd7

