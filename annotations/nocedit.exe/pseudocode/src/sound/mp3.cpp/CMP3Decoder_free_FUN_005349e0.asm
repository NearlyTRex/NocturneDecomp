; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0(CMP3Decoder * this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530 at 00534536
;   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 at 0053463c
;   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 at 005aa5ea
;   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 at 005a4efd
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

    PUSH EBX                            ; 005349e0
        ;   Label: sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
    PUSH ESI                            ; 005349e1
    PUSH EDI                            ; 005349e2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005349e3
    MOV dword ptr [EDI + 0x10c],0x0     ; 005349e7
    LEA EBX,[EDI + 0x5320]              ; 005349f1
    MOV dword ptr [EDI + 0x108],0x0     ; 005349f7
    MOV EDX,dword ptr [EBX]             ; 00534a01
    MOV ESI,EBX                         ; 00534a03
    TEST EDX,EDX                        ; 00534a05
    JNZ 0x00534a17                      ; 00534a07
        ;   XREF to: 00534a17 (CONDITIONAL_JUMP)  ; LAB_00534a17
    MOV EBX,dword ptr [ESI + 0x4]       ; 00534a09
    TEST EBX,EBX                        ; 00534a0c
    JNZ 0x00534a3e                      ; 00534a0e
        ;   XREF to: 00534a3e (CONDITIONAL_JUMP)  ; LAB_00534a3e
    MOV byte ptr [EDI],0x0              ; 00534a10
    POP EDI                             ; 00534a13
    POP ESI                             ; 00534a14
    POP EBX                             ; 00534a15
    RET                                 ; 00534a16
    PUSH 0x20b                          ; 00534a17
        ;   Label: LAB_00534a17
    PUSH 0x63ace1                       ; 00534a1c | = "..\\sound\\mp3.cpp"
    PUSH EDX                            ; 00534a21
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00534a22
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00534a27
    MOV dword ptr [EBX],0x0             ; 00534a2a
    MOV EBX,dword ptr [ESI + 0x4]       ; 00534a30
    TEST EBX,EBX                        ; 00534a33
    JNZ 0x00534a3e                      ; 00534a35
        ;   XREF to: 00534a3e (CONDITIONAL_JUMP)  ; LAB_00534a3e
    MOV byte ptr [EDI],0x0              ; 00534a37
    POP EDI                             ; 00534a3a
    POP ESI                             ; 00534a3b
    POP EBX                             ; 00534a3c
    RET                                 ; 00534a3d
    PUSH 0x210                          ; 00534a3e
        ;   Label: LAB_00534a3e
    PUSH 0x63acf2                       ; 00534a43 | = "..\\sound\\mp3.cpp"
    PUSH EBX                            ; 00534a48
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00534a49
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00534a4e
    MOV dword ptr [ESI + 0x4],0x0       ; 00534a51
    MOV byte ptr [EDI],0x0              ; 00534a58
    POP EDI                             ; 00534a5b
    POP ESI                             ; 00534a5c
    POP EBX                             ; 00534a5d
    RET                                 ; 00534a5e

