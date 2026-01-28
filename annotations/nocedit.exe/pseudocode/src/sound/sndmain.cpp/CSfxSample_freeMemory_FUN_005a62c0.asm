; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[12]:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 at 005a6258
;   sound_sndmain.cpp_CSfxSample_dtor_FUN_005a6150 at 005a6156
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730 at 005a69f0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 at 005a7f78
;   sound_sndmain.cpp_allocateHwSample_FUN_005a5620 at 005a56a9
;   sound_sndmain.cpp_closeSoundDevice_FUN_005ab660 at 005ab677
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450 at 005a4504
;   sound_sndmain.cpp_freeAllSamples_FUN_005aa660 at 005aa678
;   sound_sndmain.cpp_freeSampleByName_FUN_005aa360 at 005aa394
;   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 at 005a4f06
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064fcd4
;   TerminatedCString s_SfxSample_freeMemory_fre_0064fce9
;   TerminatedCString s_sound_sndmain_cpp_0064fd18
;   TerminatedCString s_sound_sndmain_cpp_0064fd2d
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
;   sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400
;   sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005a63b0
;   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a62c0
        ;   Label: sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
    PUSH EDI                            ; 005a62c1
    PUSH EBP                            ; 005a62c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a62c3
    CMP dword ptr [EBX + 0x154],0x0     ; 005a62c7
    JNZ 0x005a635c                      ; 005a62ce
        ;   XREF to: 005a635c (CONDITIONAL_JUMP)  ; LAB_005a635c
    PUSH EBX                            ; 005a62d4
        ;   Label: LAB_005a62d4
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540 ; 005a62d5
        ;   XREF to: 005a6540 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(CSfxSample * sample)
    ADD ESP,0x4                         ; 005a62da
    PUSH EBX                            ; 005a62dd
    CALL sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400 ; 005a62de
        ;   XREF to: 005a6400 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a62e3
    PUSH EBX                            ; 005a62e6
    MOV EDI,0x64fd18                    ; 005a62e7 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0x71d                       ; 005a62ec
    CALL sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005a63b0 ; 005a62f1
        ;   XREF to: 005a63b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005a63b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a62f6
    MOV dword ptr [0x0067d20c],EDI      ; 005a62f9 | g_CurrentDebugFilename
    MOV EAX,dword ptr [EBX + 0x16c]     ; 005a62ff
    MOV dword ptr [0x02f0d944],EBP      ; 005a6305 | g_CurrentDebugLine
    TEST EAX,EAX                        ; 005a630b
    JZ 0x005a6323                       ; 005a630d
        ;   XREF to: 005a6323 (CONDITIONAL_JUMP)  ; LAB_005a6323
    PUSH 0x0                            ; 005a630f
    PUSH EAX                            ; 005a6311
    CALL sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530 ; 005a6312
        ;   XREF to: 00534530 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530(CMP3Decoder * this_ptr)
    ADD ESP,0x8                         ; 005a6317
    PUSH EAX                            ; 005a631a
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005a631b
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005a6320
    MOV EAX,dword ptr [EBX + 0x174]     ; 005a6323
        ;   Label: LAB_005a6323
    MOV dword ptr [EBX + 0x16c],0x0     ; 005a6329
    TEST EAX,EAX                        ; 005a6333
    JNZ 0x005a6386                      ; 005a6335
        ;   XREF to: 005a6386 (CONDITIONAL_JUMP)  ; LAB_005a6386
    MOV dword ptr [EBX + 0x150],0x0     ; 005a6337
        ;   Label: LAB_005a6337
    MOV dword ptr [EBX + 0x160],0x0     ; 005a6341
    MOV dword ptr [EBX + 0x15c],0xffffffff ; 005a634b
    MOV byte ptr [EBX],0x0              ; 005a6355
    POP EBP                             ; 005a6358
    POP EDI                             ; 005a6359
    POP EBX                             ; 005a635a
    RET                                 ; 005a635b
    PUSH ESI                            ; 005a635c
        ;   Label: LAB_005a635c
    MOV ECX,0x64fcd4                    ; 005a635d | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x710                       ; 005a6362
    PUSH 0x64fce9                       ; 005a6367 | = "SfxSample::freeMemory - freeing sampl..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005a636c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a6372 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6378
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a637d
    POP ESI                             ; 005a6380
    JMP 0x005a62d4                      ; 005a6381
        ;   XREF to: 005a62d4 (UNCONDITIONAL_JUMP)  ; LAB_005a62d4
    PUSH 0x723                          ; 005a6386
        ;   Label: LAB_005a6386
    PUSH 0x64fd2d                       ; 005a638b | = "..\\sound\\sndmain.cpp"
    PUSH EAX                            ; 005a6390
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005a6391
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005a6396
    MOV dword ptr [EBX + 0x174],0x0     ; 005a6399
    JMP 0x005a6337                      ; 005a63a3
        ;   XREF to: 005a6337 (UNCONDITIONAL_JUMP)  ; LAB_005a6337

