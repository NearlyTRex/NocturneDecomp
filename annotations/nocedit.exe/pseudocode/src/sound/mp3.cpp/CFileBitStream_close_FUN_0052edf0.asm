; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_CFileBitStream_close_FUN_0052edf0(CFileBitStream * this_ptr)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063ace1
;   TerminatedCString s_sound_mp3_cpp_0063acf2
;
; Called Functions:
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052edf0
        ;   Label: sound_mp3.cpp_CFileBitStream_close_FUN_0052edf0
    PUSH ESI                            ; 0052edf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052edf2
    MOV EDX,dword ptr [EBX]             ; 0052edf6
    TEST EDX,EDX                        ; 0052edf8
    JNZ 0x0052ee06                      ; 0052edfa
        ;   XREF to: 0052ee06 (CONDITIONAL_JUMP)  ; LAB_0052ee06
    MOV ESI,dword ptr [EBX + 0x4]       ; 0052edfc
    TEST ESI,ESI                        ; 0052edff
    JNZ 0x0052ee29                      ; 0052ee01
        ;   XREF to: 0052ee29 (CONDITIONAL_JUMP)  ; LAB_0052ee29
    POP ESI                             ; 0052ee03
    POP EBX                             ; 0052ee04
    RET                                 ; 0052ee05
    PUSH 0x20b                          ; 0052ee06
        ;   Label: LAB_0052ee06
    PUSH 0x63ace1                       ; 0052ee0b | = "..\\sound\\mp3.cpp"
    PUSH EDX                            ; 0052ee10
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0052ee11
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0052ee16
    MOV dword ptr [EBX],0x0             ; 0052ee19
    MOV ESI,dword ptr [EBX + 0x4]       ; 0052ee1f
    TEST ESI,ESI                        ; 0052ee22
    JNZ 0x0052ee29                      ; 0052ee24
        ;   XREF to: 0052ee29 (CONDITIONAL_JUMP)  ; LAB_0052ee29
    POP ESI                             ; 0052ee26
    POP EBX                             ; 0052ee27
    RET                                 ; 0052ee28
    PUSH 0x210                          ; 0052ee29
        ;   Label: LAB_0052ee29
    PUSH 0x63acf2                       ; 0052ee2e | = "..\\sound\\mp3.cpp"
    PUSH ESI                            ; 0052ee33
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0052ee34
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0052ee39
    MOV dword ptr [EBX + 0x4],0x0       ; 0052ee3c
    POP ESI                             ; 0052ee43
    POP EBX                             ; 0052ee44
    RET                                 ; 0052ee45

