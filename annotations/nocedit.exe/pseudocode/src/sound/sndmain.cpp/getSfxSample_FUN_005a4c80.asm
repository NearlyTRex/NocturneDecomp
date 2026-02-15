; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_getSfxSample_FUN_005a4c80(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_sndmain.cpp_isSampleLoaded_FUN_005aa3c0 at 005aa3cd
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a920e
;
; Referenced Globals:
;   TerminatedCString s_sound_0064f907
;   TerminatedCString s_sound_sndmain_cpp_0064f90d
;   TerminatedCString s_wav_0064f922
;   TerminatedCString s_rb_0064f926
;   TerminatedCString s_sound_0064f929
;   TerminatedCString s_sound_sndmain_cpp_0064f92f
;   TerminatedCString s_Can_t_open_s_0064f944
;   TerminatedCString s_Failed_to_lock_sample_s_0064f952
;   TerminatedCString s_Error_reading_file_data__0064f96c
;   TerminatedCString s_sound_sndmain_cpp_0064f98c
;   TerminatedCString s_mp3_0064f9a1
;   TerminatedCString s_sound_sndmain_cpp_0064f9a5
;   TerminatedCString s_Don_t_know_length_of_sam_0064f9ba
;   TerminatedCString s_Failed_to_lock_sample_s_0064f9d9
;   TerminatedCString s_Error_decoding_file_data_0064f9f3
;   ... and 15 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_ftell_FUN_00601560
;   crt_stdlib.c__atexit_FUN_005ff060
;   crt_string.c_memmove_FUN_005fe5e0
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_dosio.c_splitPath_FUN_00481f20
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
;   sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
;   sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4c80
        ;   Label: sound_sndmain.cpp_getSfxSample_FUN_005a4c80
    PUSH ESI                            ; 005a4c81
    PUSH EDI                            ; 005a4c82
    PUSH EBP                            ; 005a4c83
    SUB ESP,0x104                       ; 005a4c84
    MOV EBX,dword ptr [0x03f62828]      ; 005a4c8a | g_LastSampleAccessIndex
    MOV ESI,0x3f6282c                   ; 005a4c90 | g_SfxSamples
    XOR EDI,EDI                         ; 005a4c95
    MOV EDX,dword ptr [ESP + 0x118]     ; 005a4c97
        ;   Label: LAB_005a4c97
    PUSH EDX                            ; 005a4c9e
    PUSH ESI                            ; 005a4c9f | g_SfxSamples | DAT_03f629ac
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005a4ca0
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a4ca5
    TEST EAX,EAX                        ; 005a4ca8
    JZ 0x005a4f45                       ; 005a4caa
        ;   XREF to: 005a4f45 (CONDITIONAL_JUMP)  ; LAB_005a4f45
    INC EDI                             ; 005a4cb0
    ADD ESI,0x180                       ; 005a4cb1
    CMP EDI,0x40                        ; 005a4cb7
    JL 0x005a4c97                       ; 005a4cba
        ;   XREF to: 005a4c97 (CONDITIONAL_JUMP)  ; LAB_005a4c97
    MOV EBX,dword ptr [0x03f62828]      ; 005a4cbc | g_LastSampleAccessIndex
    XOR ESI,ESI                         ; 005a4cc2
    XOR ECX,ECX                         ; 005a4cc4
    INC EBX                             ; 005a4cc6
        ;   Label: LAB_005a4cc6
    CMP EBX,0x40                        ; 005a4cc7
    JL 0x005a4cce                       ; 005a4cca
        ;   XREF to: 005a4cce (CONDITIONAL_JUMP)  ; LAB_005a4cce
    MOV EBX,ECX                         ; 005a4ccc
    IMUL EAX,EBX,0x180                  ; 005a4cce
        ;   Label: LAB_005a4cce
    MOV EDI,dword ptr [EAX + 0x3f6297c] ; 005a4cd4 | DAT_03f6297c | DAT_03f62afc
    CMP ECX,EDI                         ; 005a4cda
    JZ 0x005a4f5e                       ; 005a4cdc
        ;   XREF to: 005a4f5e (CONDITIONAL_JUMP)  ; LAB_005a4f5e
    INC ESI                             ; 005a4ce2
        ;   Label: LAB_005a4ce2
    CMP ESI,0x40                        ; 005a4ce3
    JL 0x005a4cc6                       ; 005a4ce6
        ;   XREF to: 005a4cc6 (CONDITIONAL_JUMP)  ; LAB_005a4cc6
    XOR EAX,EAX                         ; 005a4ce8
    MOV EBP,EAX                         ; 005a4cea
        ;   Label: LAB_005a4cea
    MOV dword ptr [0x03f62828],EBX      ; 005a4cec | g_LastSampleAccessIndex
    JZ 0x005a4f34                       ; 005a4cf2
        ;   XREF to: 005a4f34 (CONDITIONAL_JUMP)  ; LAB_005a4f34
    PUSH EAX                            ; 005a4cf8 | DAT_03f629ac
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005a4cf9
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
    MOV AH,byte ptr [0x03f51640]        ; 005a4cfe | g_GlobalMP3DecoderInitialized
    ADD ESP,0x4                         ; 005a4d04
    TEST AH,0x1                         ; 005a4d07
    JNZ 0x005a4d31                      ; 005a4d0a
        ;   XREF to: 005a4d31 (CONDITIONAL_JUMP)  ; LAB_005a4d31
    MOV DL,AH                           ; 005a4d0c
    OR DL,0x1                           ; 005a4d0e
    PUSH 0x3f49010                      ; 005a4d11 | g_CMP3DecoderInstance
    MOV byte ptr [0x03f51640],DL        ; 005a4d16 | g_GlobalMP3DecoderInitialized
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0 ; 005a4d1c
        ;   XREF to: 005344f0 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005a4d21
    PUSH 0x681ae0                       ; 005a4d24 | g_CMP3DecoderDestructorNode1
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 005a4d29
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005a4d2e
    MOV EDX,dword ptr [ESP + 0x118]     ; 005a4d31
        ;   Label: LAB_005a4d31
    PUSH EDX                            ; 005a4d38
    XOR EAX,EAX                         ; 005a4d39
    PUSH 0x64f907                       ; 005a4d3b | = "sound"
    MOV dword ptr [ESP + 0x108],EAX     ; 005a4d40
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005a4d47
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005a4d4c
    TEST EAX,EAX                        ; 005a4d4f
    JLE 0x005a4ef8                      ; 005a4d51
        ;   XREF to: 005a4ef8 (CONDITIONAL_JUMP)  ; LAB_005a4ef8
    MOV ESI,dword ptr [ESP + 0x118]     ; 005a4d57
    MOV EDI,EBP                         ; 005a4d5e
    PUSH EDI                            ; 005a4d60
    MOV AL,byte ptr [ESI]               ; 005a4d61
        ;   Label: LAB_005a4d61
    MOV byte ptr [EDI],AL               ; 005a4d63
    CMP AL,0x0                          ; 005a4d65
    JZ 0x005a4d79                       ; 005a4d67
        ;   XREF to: 005a4d79 (CONDITIONAL_JUMP)  ; LAB_005a4d79
    MOV AL,byte ptr [ESI + 0x1]         ; 005a4d69
    ADD ESI,0x2                         ; 005a4d6c
    MOV byte ptr [EDI + 0x1],AL         ; 005a4d6f
    ADD EDI,0x2                         ; 005a4d72
    CMP AL,0x0                          ; 005a4d75
    JNZ 0x005a4d61                      ; 005a4d77
        ;   XREF to: 005a4d61 (CONDITIONAL_JUMP)  ; LAB_005a4d61
    POP EDI                             ; 005a4d79
        ;   Label: LAB_005a4d79
    MOV EAX,ESP                         ; 005a4d7a
    PUSH EAX                            ; 005a4d7c
    PUSH 0x0                            ; 005a4d7d
    PUSH 0x0                            ; 005a4d7f
    PUSH 0x0                            ; 005a4d81
    MOV ECX,dword ptr [ESP + 0x128]     ; 005a4d83
    PUSH ECX                            ; 005a4d8a
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 005a4d8b
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005a4d90
    CMP byte ptr [ESP],0x2e             ; 005a4d93
    JNZ 0x005a4db8                      ; 005a4d97
        ;   XREF to: 005a4db8 (CONDITIONAL_JUMP)  ; LAB_005a4db8
    MOV EDI,ESP                         ; 005a4d99
    SUB ECX,ECX                         ; 005a4d9b
    DEC ECX                             ; 005a4d9d
    XOR EAX,EAX                         ; 005a4d9e
    SCASB.REPNE ES:EDI                  ; 005a4da0
    NOT ECX                             ; 005a4da2
    DEC ECX                             ; 005a4da4
    PUSH ECX                            ; 005a4da5
    LEA EAX,[ESP + 0x5]                 ; 005a4da6
    PUSH EAX                            ; 005a4daa
    LEA EAX,[ESP + 0x8]                 ; 005a4dab
    PUSH EAX                            ; 005a4daf
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005a4db0
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005a4db5
    PUSH 0x64f922                       ; 005a4db8 | = "wav"
        ;   Label: LAB_005a4db8
    LEA EAX,[ESP + 0x4]                 ; 005a4dbd
    PUSH EAX                            ; 005a4dc1
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005a4dc2
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a4dc7
    TEST EAX,EAX                        ; 005a4dca
    JNZ 0x005a4ffb                      ; 005a4dcc
        ;   XREF to: 005a4ffb (CONDITIONAL_JUMP)  ; LAB_005a4ffb
    PUSH 0x64f926                       ; 005a4dd2 | = "rb"
    MOV EDX,dword ptr [ESP + 0x11c]     ; 005a4dd7
    PUSH EDX                            ; 005a4dde
    PUSH 0x64f929                       ; 005a4ddf | = "sound"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005a4de4
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005a4de9
    MOV dword ptr [ESP + 0x100],EAX     ; 005a4dec
    TEST EAX,EAX                        ; 005a4df3
    JNZ 0x005a4e22                      ; 005a4df5
        ;   XREF to: 005a4e22 (CONDITIONAL_JUMP)  ; LAB_005a4e22
    MOV EDI,dword ptr [ESP + 0x118]     ; 005a4df7
    PUSH EDI                            ; 005a4dfe
    MOV ECX,0x64f92f                    ; 005a4dff | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x2fe                       ; 005a4e04
    PUSH 0x64f944                       ; 005a4e09 | = "Can't open %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a4e0e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a4e14 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a4e1a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a4e1f
    MOV EAX,dword ptr [ESP + 0x100]     ; 005a4e22
        ;   Label: LAB_005a4e22
    PUSH EAX                            ; 005a4e29
    CALL crt_stdio.c_ftell_FUN_00601560 ; 005a4e2a
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 005a4e2f
    PUSH EBP                            ; 005a4e32
    MOV dword ptr [EBP + 0x170],EAX     ; 005a4e33
    LEA EAX,[EBP + 0x170]               ; 005a4e39
    PUSH EAX                            ; 005a4e3f
    MOV EDX,dword ptr [ESP + 0x108]     ; 005a4e40
    PUSH EDX                            ; 005a4e47
    CALL sound_sndmain.cpp_parseWavFile_FUN_005a3fe0 ; 005a4e48
        ;   XREF to: 005a3fe0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_parseWavFile_FUN_005a3fe0(_FILE * file_handle, long * file_offset_ptr, CSfxSample * sfx_sample)
    ADD ESP,0xc                         ; 005a4e4d
    TEST EAX,EAX                        ; 005a4e50
    JZ 0x005a4ef8                       ; 005a4e52
        ;   XREF to: 005a4ef8 (CONDITIONAL_JUMP)  ; LAB_005a4ef8
    PUSH EBP                            ; 005a4e58
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0 ; 005a4e59
        ;   XREF to: 005a45c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample * this_ptr)
    MOV dword ptr [EBP + 0x150],0x0     ; 005a4e5e
    MOV dword ptr [EBP + 0x154],0x0     ; 005a4e68
    MOV dword ptr [EBP + 0x158],0x0     ; 005a4e72
    MOV dword ptr [EBP + 0x15c],0xffffffff ; 005a4e7c
    MOV EAX,dword ptr [EBP + 0x110]     ; 005a4e86
    MOV dword ptr [EBP + 0x160],EAX     ; 005a4e8c
    ADD ESP,0x4                         ; 005a4e92
    MOV dword ptr [EBP + 0x164],EAX     ; 005a4e95
    PUSH EBP                            ; 005a4e9b
    MOV dword ptr [EBP + 0x168],EAX     ; 005a4e9c
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 ; 005a4ea2
        ;   XREF to: 005a6170 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a4ea7
    TEST EAX,EAX                        ; 005a4eaa
    JZ 0x005a4ef8                       ; 005a4eac
        ;   XREF to: 005a4ef8 (CONDITIONAL_JUMP)  ; LAB_005a4ef8
    PUSH 0x0                            ; 005a4eae
    MOV ECX,dword ptr [EBP + 0x170]     ; 005a4eb0
    PUSH ECX                            ; 005a4eb6
    MOV ESI,dword ptr [ESP + 0x108]     ; 005a4eb7
    PUSH ESI                            ; 005a4ebe
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 005a4ebf
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 005a4ec4
    MOV EDI,dword ptr [EBP + 0x110]     ; 005a4ec7
    PUSH EDI                            ; 005a4ecd
    PUSH 0x0                            ; 005a4ece
    PUSH EBP                            ; 005a4ed0
    CALL sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430 ; 005a4ed1
        ;   XREF to: 005a6430 (UNCONDITIONAL_CALL)  ; void * sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430(CSfxSample * this_ptr, int lock_offset, int lock_length)
    MOV ESI,EAX                         ; 005a4ed6
    ADD ESP,0xc                         ; 005a4ed8
    TEST EAX,EAX                        ; 005a4edb
    JNZ 0x005a4f74                      ; 005a4edd
        ;   XREF to: 005a4f74 (CONDITIONAL_JUMP)  ; LAB_005a4f74
    MOV EAX,dword ptr [ESP + 0x118]     ; 005a4ee3
    PUSH EAX                            ; 005a4eea
    PUSH 0x64f952                       ; 005a4eeb | = "Failed to lock sample %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a4ef0
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   Label: LAB_005a4ef0
    ADD ESP,0x8                         ; 005a4ef5
    PUSH 0x3f49010                      ; 005a4ef8 | g_CMP3DecoderInstance
        ;   Label: LAB_005a4ef8
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0 ; 005a4efd
        ;   XREF to: 005349e0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005a4f02
    PUSH EBP                            ; 005a4f05
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005a4f06
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a4f0b
    MOV EDX,dword ptr [ESP + 0x100]     ; 005a4f0e
    TEST EDX,EDX                        ; 005a4f15
    JZ 0x005a4f2c                       ; 005a4f17
        ;   XREF to: 005a4f2c (CONDITIONAL_JUMP)  ; LAB_005a4f2c
    PUSH 0x2eb                          ; 005a4f19
    PUSH 0x64f90d                       ; 005a4f1e | = "..\\sound\\sndmain.cpp"
    PUSH EDX                            ; 005a4f23
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005a4f24
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005a4f29
    MOV EBX,dword ptr [0x03f62828]      ; 005a4f2c | g_LastSampleAccessIndex
        ;   Label: LAB_005a4f2c
    XOR EAX,EAX                         ; 005a4f32
    MOV dword ptr [0x03f62828],EBX      ; 005a4f34 | g_LastSampleAccessIndex
        ;   Label: LAB_005a4f34
    ADD ESP,0x104                       ; 005a4f3a
    POP EBP                             ; 005a4f40
    POP EDI                             ; 005a4f41
    POP ESI                             ; 005a4f42
    POP EBX                             ; 005a4f43
    RET                                 ; 005a4f44
    MOV EBX,dword ptr [0x03f62828]      ; 005a4f45 | g_LastSampleAccessIndex
        ;   Label: LAB_005a4f45
    MOV EAX,ESI                         ; 005a4f4b | g_SfxSamples
    MOV dword ptr [0x03f62828],EBX      ; 005a4f4d | g_LastSampleAccessIndex
    ADD ESP,0x104                       ; 005a4f53
    POP EBP                             ; 005a4f59
    POP EDI                             ; 005a4f5a
    POP ESI                             ; 005a4f5b
    POP EBX                             ; 005a4f5c
    RET                                 ; 005a4f5d
    CMP EDI,dword ptr [EAX + 0x3f62980] ; 005a4f5e | DAT_03f62b00
        ;   Label: LAB_005a4f5e
    JNZ 0x005a4ce2                      ; 005a4f64
        ;   XREF to: 005a4ce2 (CONDITIONAL_JUMP)  ; LAB_005a4ce2
    ADD EAX,0x3f6282c                   ; 005a4f6a | g_SfxSamples
    JMP 0x005a4cea                      ; 005a4f6f
        ;   XREF to: 005a4cea (UNCONDITIONAL_JUMP)  ; LAB_005a4cea
    MOV EAX,dword ptr [ESP + 0x100]     ; 005a4f74
        ;   Label: LAB_005a4f74
    PUSH EAX                            ; 005a4f7b
    MOV EDX,dword ptr [EBP + 0x110]     ; 005a4f7c
    PUSH EDX                            ; 005a4f82
    PUSH EBP                            ; 005a4f83
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005a4f84
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a4f89
    PUSH EAX                            ; 005a4f8c
    PUSH ESI                            ; 005a4f8d
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005a4f8e
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV ECX,dword ptr [EBP + 0x110]     ; 005a4f93
    ADD ESP,0x10                        ; 005a4f99
    CMP EAX,ECX                         ; 005a4f9c
    JNZ 0x005a4fe9                      ; 005a4f9e
        ;   XREF to: 005a4fe9 (CONDITIONAL_JUMP)  ; LAB_005a4fe9
    MOV EAX,dword ptr [ESP + 0x100]     ; 005a4fa0
    TEST byte ptr [EAX + 0xc],0x20      ; 005a4fa7
    JNZ 0x005a4fe9                      ; 005a4fab
        ;   XREF to: 005a4fe9 (CONDITIONAL_JUMP)  ; LAB_005a4fe9
    PUSH EBP                            ; 005a4fad
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540 ; 005a4fae
        ;   XREF to: 005a6540 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(CSfxSample * sample)
    ADD ESP,0x4                         ; 005a4fb3
    PUSH 0x337                          ; 005a4fb6
    PUSH 0x64f98c                       ; 005a4fbb | = "..\\sound\\sndmain.cpp"
    MOV ESI,dword ptr [ESP + 0x108]     ; 005a4fc0
    PUSH ESI                            ; 005a4fc7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005a4fc8
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005a4fcd
    MOV EBX,dword ptr [0x03f62828]      ; 005a4fd0 | g_LastSampleAccessIndex
        ;   Label: LAB_005a4fd0
    MOV EAX,EBP                         ; 005a4fd6
    MOV dword ptr [0x03f62828],EBX      ; 005a4fd8 | g_LastSampleAccessIndex
    ADD ESP,0x104                       ; 005a4fde
    POP EBP                             ; 005a4fe4
    POP EDI                             ; 005a4fe5
    POP ESI                             ; 005a4fe6
    POP EBX                             ; 005a4fe7
    RET                                 ; 005a4fe8
    MOV EDI,dword ptr [ESP + 0x118]     ; 005a4fe9
        ;   Label: LAB_005a4fe9
    PUSH EDI                            ; 005a4ff0
    PUSH 0x64f96c                       ; 005a4ff1 | = "Error reading file data for %s\n"
    JMP 0x005a4ef0                      ; 005a4ff6
        ;   XREF to: 005a4ef0 (UNCONDITIONAL_JUMP)  ; LAB_005a4ef0
    PUSH 0x64f9a1                       ; 005a4ffb | = "mp3"
        ;   Label: LAB_005a4ffb
    LEA EAX,[ESP + 0x4]                 ; 005a5000
    PUSH EAX                            ; 005a5004
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005a5005
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a500a
    TEST EAX,EAX                        ; 005a500d
    JNZ 0x005a514a                      ; 005a500f
        ;   XREF to: 005a514a (CONDITIONAL_JUMP)  ; LAB_005a514a
    MOV EDX,dword ptr [ESP + 0x118]     ; 005a5015
    PUSH EDX                            ; 005a501c
    PUSH 0x3f49010                      ; 005a501d | g_CMP3DecoderInstance
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550 ; 005a5022
        ;   XREF to: 00534550 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550(CMP3Decoder * this_ptr, char * filename)
    MOV dword ptr [EBP + 0x104],0x10    ; 005a5027
    MOV EAX,[0x03f49114]                ; 005a5031 | g_CMP3DecoderInstance.num_channels
    MOV dword ptr [EBP + 0x108],EAX     ; 005a5036
    ADD ESP,0x8                         ; 005a503c
    MOV EAX,[0x03f49110]                ; 005a503f | g_CMP3DecoderInstance.sample_rate
    MOV dword ptr [EBP + 0x110],0xffffffff ; 005a5044
    PUSH EBP                            ; 005a504e
    MOV dword ptr [EBP + 0x10c],EAX     ; 005a504f
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0 ; 005a5055
        ;   XREF to: 005a45c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample * this_ptr)
    MOV ECX,dword ptr [EBP + 0x110]     ; 005a505a
    ADD ESP,0x4                         ; 005a5060
    TEST ECX,ECX                        ; 005a5063
    JGE 0x005a5092                      ; 005a5065
        ;   XREF to: 005a5092 (CONDITIONAL_JUMP)  ; LAB_005a5092
    MOV EAX,dword ptr [ESP + 0x118]     ; 005a5067
    PUSH EAX                            ; 005a506e
    MOV ESI,0x64f9a5                    ; 005a506f | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x34d                       ; 005a5074
    PUSH 0x64f9ba                       ; 005a5079 | = "Don't know length of sample %s"
    MOV dword ptr [0x02f0ca48],ESI      ; 005a507e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a5084 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a508a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a508f
    MOV dword ptr [EBP + 0x150],0x0     ; 005a5092
        ;   Label: LAB_005a5092
    MOV dword ptr [EBP + 0x154],0x0     ; 005a509c
    MOV dword ptr [EBP + 0x158],0x0     ; 005a50a6
    MOV dword ptr [EBP + 0x15c],0xffffffff ; 005a50b0
    MOV EAX,dword ptr [EBP + 0x110]     ; 005a50ba
    MOV dword ptr [EBP + 0x160],EAX     ; 005a50c0
    MOV dword ptr [EBP + 0x164],EAX     ; 005a50c6
    PUSH EBP                            ; 005a50cc
    MOV dword ptr [EBP + 0x168],EAX     ; 005a50cd
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 ; 005a50d3
        ;   XREF to: 005a6170 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a50d8
    TEST EAX,EAX                        ; 005a50db
    JZ 0x005a4ef8                       ; 005a50dd
        ;   XREF to: 005a4ef8 (CONDITIONAL_JUMP)  ; LAB_005a4ef8
    MOV EDX,dword ptr [EBP + 0x110]     ; 005a50e3
    PUSH EDX                            ; 005a50e9
    PUSH 0x0                            ; 005a50ea
    PUSH EBP                            ; 005a50ec
    CALL sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430 ; 005a50ed
        ;   XREF to: 005a6430 (UNCONDITIONAL_CALL)  ; void * sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430(CSfxSample * this_ptr, int lock_offset, int lock_length)
    ADD ESP,0xc                         ; 005a50f2
    TEST EAX,EAX                        ; 005a50f5
    JZ 0x005a512a                       ; 005a50f7
        ;   XREF to: 005a512a (CONDITIONAL_JUMP)  ; LAB_005a512a
    MOV ECX,dword ptr [EBP + 0x110]     ; 005a50f9
    PUSH ECX                            ; 005a50ff
    PUSH EAX                            ; 005a5100
    PUSH 0x3f49010                      ; 005a5101 | g_CMP3DecoderInstance
    CALL sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60 ; 005a5106
        ;   XREF to: 00534a60 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60(CMP3Decoder * this_ptr, short * output_buffer, int samples_requested)
    MOV ESI,dword ptr [EBP + 0x110]     ; 005a510b
    ADD ESP,0xc                         ; 005a5111
    CMP EAX,ESI                         ; 005a5114
    JZ 0x005a513c                       ; 005a5116
        ;   XREF to: 005a513c (CONDITIONAL_JUMP)  ; LAB_005a513c
    MOV EDI,dword ptr [ESP + 0x118]     ; 005a5118
    PUSH EDI                            ; 005a511f
    PUSH 0x64f9f3                       ; 005a5120 | = "Error decoding file data from %s\n"
    JMP 0x005a4ef0                      ; 005a5125
        ;   XREF to: 005a4ef0 (UNCONDITIONAL_JUMP)  ; LAB_005a4ef0
    MOV EAX,dword ptr [ESP + 0x118]     ; 005a512a
        ;   Label: LAB_005a512a
    PUSH EAX                            ; 005a5131
    PUSH 0x64f9d9                       ; 005a5132 | = "Failed to lock sample %s\n"
    JMP 0x005a4ef0                      ; 005a5137
        ;   XREF to: 005a4ef0 (UNCONDITIONAL_JUMP)  ; LAB_005a4ef0
    PUSH EBP                            ; 005a513c
        ;   Label: LAB_005a513c
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540 ; 005a513d
        ;   XREF to: 005a6540 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(CSfxSample * sample)
    ADD ESP,0x4                         ; 005a5142
    JMP 0x005a4fd0                      ; 005a5145
        ;   XREF to: 005a4fd0 (UNCONDITIONAL_JUMP)  ; LAB_005a4fd0
    MOV EAX,dword ptr [ESP + 0x118]     ; 005a514a
        ;   Label: LAB_005a514a
    PUSH EAX                            ; 005a5151
    MOV ESI,0x64fa15                    ; 005a5152 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x37b                       ; 005a5157
    PUSH 0x64fa2a                       ; 005a515c | = "Unknown sample file format extension: %s"
    MOV dword ptr [0x02f0ca48],ESI      ; 005a5161 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a5167 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a516d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a5172
    JMP 0x005a4fd0                      ; 005a5175
        ;   XREF to: 005a4fd0 (UNCONDITIONAL_JUMP)  ; LAB_005a4fd0

