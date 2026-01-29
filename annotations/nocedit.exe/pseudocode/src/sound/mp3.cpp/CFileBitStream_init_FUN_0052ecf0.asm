; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_mp3_cpp_CFileBitStream_init_FUN_0052ecf0 (CFileBitStream *this_ptr,_FILE *file_handle,int buffer_size,int stream_length)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   buffer_size
; int              Stack[0x10]:4   stream_length
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063ace1
;   TerminatedCString s_sound_mp3_cpp_0063acf2
;   TerminatedCString s_sound_mp3_cpp_0063ad03
;   TerminatedCString s_sound_mp3_cpp_0063ad14
;   TerminatedCString s_Out_of_memory_File_s_0063ad25
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[256] g_CurrentMp3Filename
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_ftell_FUN_00601560
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ecf0
        ;   Label: sound_mp3.cpp_CFileBitStream_init_FUN_0052ecf0
    PUSH ESI                            ; 0052ecf1
    PUSH EDI                            ; 0052ecf2
    PUSH EBP                            ; 0052ecf3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052ecf4
    MOV EDX,dword ptr [EBX]             ; 0052ecf8
    MOV ESI,EBX                         ; 0052ecfa
    TEST EDX,EDX                        ; 0052ecfc
    JNZ 0x0052ed9e                      ; 0052ecfe
        ;   XREF to: 0052ed9e (CONDITIONAL_JUMP)  ; LAB_0052ed9e
    MOV EDI,dword ptr [ESI + 0x4]       ; 0052ed04
        ;   Label: LAB_0052ed04
    TEST EDI,EDI                        ; 0052ed07
    JZ 0x0052ed25                       ; 0052ed09
        ;   XREF to: 0052ed25 (CONDITIONAL_JUMP)  ; LAB_0052ed25
    PUSH 0x210                          ; 0052ed0b
    PUSH 0x63acf2                       ; 0052ed10 | = "..\\sound\\mp3.cpp"
    PUSH EDI                            ; 0052ed15
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0052ed16
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0052ed1b
    MOV dword ptr [ESI + 0x4],0x0       ; 0052ed1e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052ed25
        ;   Label: LAB_0052ed25
    PUSH EAX                            ; 0052ed29
    MOV dword ptr [EBX],EAX             ; 0052ed2a
    CALL crt_stdio.c_ftell_FUN_00601560 ; 0052ed2c
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 0052ed31
    PUSH 0x1ff                          ; 0052ed34
    MOV dword ptr [EBX + 0x20],EAX      ; 0052ed39
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052ed3c
    PUSH 0x63ad03                       ; 0052ed40 | = "..\\sound\\mp3.cpp"
    MOV dword ptr [EBX + 0x24],EAX      ; 0052ed45
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052ed48
    PUSH EAX                            ; 0052ed4c
    MOV dword ptr [EBX + 0x8],EAX       ; 0052ed4d
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0052ed50
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0052ed55
    MOV dword ptr [EBX + 0x4],EAX       ; 0052ed58
    TEST EAX,EAX                        ; 0052ed5b
    JZ 0x0052edbc                       ; 0052ed5d
        ;   XREF to: 0052edbc (CONDITIONAL_JUMP)  ; LAB_0052edbc
    PUSH 0x0                            ; 0052ed5f
        ;   Label: LAB_0052ed5f
    MOV EBP,dword ptr [EBX + 0x20]      ; 0052ed61
    PUSH EBP                            ; 0052ed64
    MOV EAX,dword ptr [EBX]             ; 0052ed65
    PUSH EAX                            ; 0052ed67
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0052ed68
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    MOV dword ptr [EBX + 0x10],0x0      ; 0052ed6d
    MOV dword ptr [EBX + 0x14],0x0      ; 0052ed74
    MOV dword ptr [EBX + 0xc],0x0       ; 0052ed7b
    MOV dword ptr [EBX + 0x18],0x0      ; 0052ed82
    MOV dword ptr [EBX + 0x1c],0x0      ; 0052ed89
    MOV EAX,dword ptr [EBX + 0x24]      ; 0052ed90
    ADD ESP,0xc                         ; 0052ed93
    MOV dword ptr [EBX + 0x28],EAX      ; 0052ed96
    POP EBP                             ; 0052ed99
    POP EDI                             ; 0052ed9a
    POP ESI                             ; 0052ed9b
    POP EBX                             ; 0052ed9c
    RET                                 ; 0052ed9d
    PUSH 0x20b                          ; 0052ed9e
        ;   Label: LAB_0052ed9e
    PUSH 0x63ace1                       ; 0052eda3 | = "..\\sound\\mp3.cpp"
    PUSH EDX                            ; 0052eda8
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0052eda9
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0052edae
    MOV dword ptr [EBX],0x0             ; 0052edb1
    JMP 0x0052ed04                      ; 0052edb7
        ;   XREF to: 0052ed04 (UNCONDITIONAL_JUMP)  ; LAB_0052ed04
    PUSH 0x2f68188                      ; 0052edbc | g_CurrentMp3Filename
        ;   Label: LAB_0052edbc
    MOV ESI,0x63ad14                    ; 0052edc1 | = "..\\sound\\mp3.cpp"
    MOV EDI,0x200                       ; 0052edc6
    PUSH 0x63ad25                       ; 0052edcb | = "Out of memory.  File: %s"
    MOV dword ptr [0x02f0ca48],ESI      ; 0052edd0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0052edd6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052eddc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0052ede1
    JMP 0x0052ed5f                      ; 0052ede4
        ;   XREF to: 0052ed5f (UNCONDITIONAL_JUMP)  ; LAB_0052ed5f

