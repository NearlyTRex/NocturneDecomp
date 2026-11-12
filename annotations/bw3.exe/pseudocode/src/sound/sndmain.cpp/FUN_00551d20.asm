; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_FUN_00551d20(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x23c]:1  local_23c
; undefined        Stack[-0x23b]:1  local_23b
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_00556230 at 00556235
;   sound_sndmain.cpp_FUN_00556240 at 0055659d
;   sound_sndmain.cpp_isSampleLoaded_FUN_00557540 at 0055754d
;
; Referenced Globals:
;   TerminatedCString s_sound_005d288f
;   undefined4 DAT_005d2895
;   TerminatedCString s_sound_005d2899
;   TerminatedCString s_sound_sndmain_cpp_005d289f
;   TerminatedCString s_Can_t_open_s_005d28b4
;   TerminatedCString s_Failed_to_lock_sample_s_005d28c2
;   TerminatedCString s_Error_reading_file_data_005d28dc
;   undefined4 DAT_005d28fc
;   TerminatedCString s_sound_sndmain_cpp_005d2900
;   TerminatedCString s_Don_t_know_length_of_sam_005d2915
;   TerminatedCString s_Failed_to_lock_sample_s_005d2934
;   TerminatedCString s_Error_decoding_file_data_005d294e
;   TerminatedCString s_sound_sndmain_cpp_005d2970
;   TerminatedCString s_Unknown_sample_file_form_005d2985
;   TerminatedCString s_SOUND_Loaded_sample_s_005d29ae
;   ... and 11 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdlib.c__atexit_FUN_005a3e13
;   crt_string.c__stricmp_FUN_005a3260
;   crt_string.c_memmove_FUN_005a54c0
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   engine_dosio.cpp_splitPath_FUN_00465e50
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_00502750
;   sound_mp3.cpp_CMP3Decoder_free_FUN_00502a10
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_005027b0
;   sound_mp3.cpp_CMP3Decoder_read_FUN_00502a80
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005533b0
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520
;   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760
;   sound_sndmain.cpp_FUN_00551000
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551d20
        ;   Label: sound_sndmain.cpp_FUN_00551d20
    PUSH ESI                            ; 00551d21
    PUSH EDI                            ; 00551d22
    PUSH EBP                            ; 00551d23
    SUB ESP,0x22c                       ; 00551d24
    MOV EBX,dword ptr [0x02cebc20]      ; 00551d2a | DAT_02cebc20
    MOV EBP,0x2cebc24                   ; 00551d30
    MOV EDI,dword ptr [ESP + 0x240]     ; 00551d35
    XOR ESI,ESI                         ; 00551d3c
    PUSH EDI                            ; 00551d3e
        ;   Label: LAB_00551d3e
    PUSH EBP                            ; 00551d3f
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00551d40
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00551d45
    TEST EAX,EAX                        ; 00551d48
    JNZ 0x00551fc1                      ; 00551d4a
        ;   XREF to: 00551fc1 (CONDITIONAL_JUMP)  ; LAB_00551fc1
    MOV EBX,dword ptr [0x02cebc20]      ; 00551d50 | DAT_02cebc20
    MOV EAX,EBP                         ; 00551d56
    TEST EAX,EAX                        ; 00551d58
        ;   Label: LAB_00551d58
    JNZ 0x00551fde                      ; 00551d5a
        ;   XREF to: 00551fde (CONDITIONAL_JUMP)  ; LAB_00551fde
    XOR ECX,ECX                         ; 00551d60
    XOR ESI,ESI                         ; 00551d62
    INC EBX                             ; 00551d64
        ;   Label: LAB_00551d64
    CMP EBX,0x40                        ; 00551d65
    JL 0x00551d6c                       ; 00551d68
        ;   XREF to: 00551d6c (CONDITIONAL_JUMP)  ; LAB_00551d6c
    MOV EBX,ECX                         ; 00551d6a
    IMUL EAX,EBX,0x1b0                  ; 00551d6c
        ;   Label: LAB_00551d6c
    MOV EDX,dword ptr [EAX + 0x2cebd74] ; 00551d72 | g_SfxSamples[1].taken
    CMP ECX,EDX                         ; 00551d78
    JZ 0x00551ff5                       ; 00551d7a
        ;   XREF to: 00551ff5 (CONDITIONAL_JUMP)  ; LAB_00551ff5
    INC ESI                             ; 00551d80
        ;   Label: LAB_00551d80
    CMP ESI,0x40                        ; 00551d81
    JL 0x00551d64                       ; 00551d84
        ;   XREF to: 00551d64 (CONDITIONAL_JUMP)  ; LAB_00551d64
    XOR EAX,EAX                         ; 00551d86
    MOV EBP,EAX                         ; 00551d88
        ;   Label: LAB_00551d88
    MOV dword ptr [0x02cebc20],EBX      ; 00551d8a | DAT_02cebc20
    JZ 0x00551fb0                       ; 00551d90
        ;   XREF to: 00551fb0 (CONDITIONAL_JUMP)  ; LAB_00551fb0
    PUSH EAX                            ; 00551d96
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 ; 00551d97
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample * this_ptr)
    MOV AH,byte ptr [0x02cdafb0]        ; 00551d9c | DAT_02cdafb0
    ADD ESP,0x4                         ; 00551da2
    TEST AH,0x1                         ; 00551da5
    JNZ 0x00551dcf                      ; 00551da8
        ;   XREF to: 00551dcf (CONDITIONAL_JUMP)  ; LAB_00551dcf
    MOV DL,AH                           ; 00551daa
    OR DL,0x1                           ; 00551dac
    PUSH 0x2cd2980                      ; 00551daf
    MOV byte ptr [0x02cdafb0],DL        ; 00551db4 | DAT_02cdafb0
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_00502750 ; 00551dba
        ;   XREF to: 00502750 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_00502750(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00551dbf
    PUSH 0x604200                       ; 00551dc2 | g_CMP3DecoderDestructorNode1
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 00551dc7
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 00551dcc
    MOV EAX,dword ptr [ESP + 0x240]     ; 00551dcf
        ;   Label: LAB_00551dcf
    PUSH EAX                            ; 00551dd6
    PUSH 0x5d288f                       ; 00551dd7 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 00551ddc
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00551de1
    TEST EAX,EAX                        ; 00551de4
    JLE 0x00551f98                      ; 00551de6
        ;   XREF to: 00551f98 (CONDITIONAL_JUMP)  ; LAB_00551f98
    MOV ESI,dword ptr [ESP + 0x240]     ; 00551dec
    MOV EDI,EBP                         ; 00551df3
    PUSH EDI                            ; 00551df5
    MOV AL,byte ptr [ESI]               ; 00551df6
        ;   Label: LAB_00551df6
    MOV byte ptr [EDI],AL               ; 00551df8
    CMP AL,0x0                          ; 00551dfa
    JZ 0x00551e0e                       ; 00551dfc
        ;   XREF to: 00551e0e (CONDITIONAL_JUMP)  ; LAB_00551e0e
    MOV AL,byte ptr [ESI + 0x1]         ; 00551dfe
    ADD ESI,0x2                         ; 00551e01
    MOV byte ptr [EDI + 0x1],AL         ; 00551e04
    ADD EDI,0x2                         ; 00551e07
    CMP AL,0x0                          ; 00551e0a
    JNZ 0x00551df6                      ; 00551e0c
        ;   XREF to: 00551df6 (CONDITIONAL_JUMP)  ; LAB_00551df6
    POP EDI                             ; 00551e0e
        ;   Label: LAB_00551e0e
    MOV EAX,ESP                         ; 00551e0f
    PUSH EAX                            ; 00551e11
    PUSH 0x0                            ; 00551e12
    PUSH 0x0                            ; 00551e14
    PUSH 0x0                            ; 00551e16
    MOV EDX,dword ptr [ESP + 0x250]     ; 00551e18
    PUSH EDX                            ; 00551e1f
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 00551e20
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00551e25
    CMP byte ptr [ESP],0x2e             ; 00551e28
    JNZ 0x00551e4d                      ; 00551e2c
        ;   XREF to: 00551e4d (CONDITIONAL_JUMP)  ; LAB_00551e4d
    MOV EDI,ESP                         ; 00551e2e
    SUB ECX,ECX                         ; 00551e30
    DEC ECX                             ; 00551e32
    XOR EAX,EAX                         ; 00551e33
    SCASB.REPNE ES:EDI                  ; 00551e35
    NOT ECX                             ; 00551e37
    DEC ECX                             ; 00551e39
    PUSH ECX                            ; 00551e3a
    LEA EAX,[ESP + 0x5]                 ; 00551e3b
    PUSH EAX                            ; 00551e3f
    LEA EAX,[ESP + 0x8]                 ; 00551e40
    PUSH EAX                            ; 00551e44
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00551e45
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00551e4a
    PUSH 0x5d2895                       ; 00551e4d | DAT_005d2895
        ;   Label: LAB_00551e4d
    LEA EAX,[ESP + 0x4]                 ; 00551e52
    PUSH EAX                            ; 00551e56
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00551e57
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00551e5c
    TEST EAX,EAX                        ; 00551e5f
    JNZ 0x00552125                      ; 00551e61
        ;   XREF to: 00552125 (CONDITIONAL_JUMP)  ; LAB_00552125
    LEA EAX,[ESP + 0x200]               ; 00551e67
    PUSH EAX                            ; 00551e6e
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0 ; 00551e6f
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00551e74
    PUSH 0x1                            ; 00551e77
    MOV EDX,dword ptr [ESP + 0x244]     ; 00551e79
    PUSH EDX                            ; 00551e80
    PUSH 0x5d2899                       ; 00551e81 | = "sound"
    LEA EAX,[ESP + 0x20c]               ; 00551e86
    PUSH EAX                            ; 00551e8d
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 00551e8e
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00551e93
    TEST EAX,EAX                        ; 00551e96
    JZ 0x00552027                       ; 00551e98
        ;   XREF to: 00552027 (CONDITIONAL_JUMP)  ; LAB_00552027
    PUSH EBP                            ; 00551e9e
        ;   Label: LAB_00551e9e
    LEA EAX,[EBP + 0x178]               ; 00551e9f
    PUSH EAX                            ; 00551ea5
    LEA EAX,[ESP + 0x208]               ; 00551ea6
    PUSH EAX                            ; 00551ead
    MOV dword ptr [EBP + 0x178],0x0     ; 00551eae
    CALL sound_sndmain.cpp_FUN_00551000 ; 00551eb8
        ;   XREF to: 00551000 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551000()
    ADD ESP,0xc                         ; 00551ebd
    TEST EAX,EAX                        ; 00551ec0
    JZ 0x00552057                       ; 00551ec2
        ;   XREF to: 00552057 (CONDITIONAL_JUMP)  ; LAB_00552057
    PUSH EBP                            ; 00551ec8
    CALL sound_sndmain.cpp_FUN_00551620 ; 00551ec9
        ;   XREF to: 00551620 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551620()
    MOV dword ptr [EBP + 0x150],0x0     ; 00551ece
    MOV dword ptr [EBP + 0x154],0x0     ; 00551ed8
    MOV dword ptr [EBP + 0x158],0x0     ; 00551ee2
    MOV dword ptr [EBP + 0x15c],0x0     ; 00551eec
    MOV dword ptr [EBP + 0x160],0xffffffff ; 00551ef6
    MOV EAX,dword ptr [EBP + 0x110]     ; 00551f00
    ADD ESP,0x4                         ; 00551f06
    MOV dword ptr [EBP + 0x164],EAX     ; 00551f09
    PUSH EAX                            ; 00551f0f
    MOV dword ptr [EBP + 0x16c],EAX     ; 00551f10
    PUSH EBP                            ; 00551f16
    MOV dword ptr [EBP + 0x170],EAX     ; 00551f17
    CALL sound_sndmain.cpp_FUN_00555900 ; 00551f1d
        ;   XREF to: 00555900 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00555900()
    ADD ESP,0x8                         ; 00551f22
    PUSH EBP                            ; 00551f25
    MOV dword ptr [EBP + 0x168],EAX     ; 00551f26
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005533b0 ; 00551f2c
        ;   XREF to: 005533b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005533b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00551f31
    TEST EAX,EAX                        ; 00551f34
    JZ 0x00552057                       ; 00551f36
        ;   XREF to: 00552057 (CONDITIONAL_JUMP)  ; LAB_00552057
    PUSH 0x0                            ; 00551f3c
    MOV EDX,dword ptr [EBP + 0x178]     ; 00551f3e
    PUSH EDX                            ; 00551f44
    LEA EAX,[ESP + 0x208]               ; 00551f45
    PUSH EAX                            ; 00551f4c
    CALL support_trstream.cpp_CInStreamFile_seek_FUN_00573cf0 ; 00551f4d
        ;   XREF to: 00573cf0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_seek_FUN_00573cf0(CInStreamFile * this_ptr, int param_2, uint param_3)
    ADD ESP,0xc                         ; 00551f52
    MOV ECX,dword ptr [EBP + 0x110]     ; 00551f55
    PUSH ECX                            ; 00551f5b
    PUSH 0x0                            ; 00551f5c
    PUSH EBP                            ; 00551f5e
    CALL sound_sndmain.cpp_FUN_00553660 ; 00551f5f
        ;   XREF to: 00553660 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00553660()
    MOV ESI,EAX                         ; 00551f64
    ADD ESP,0xc                         ; 00551f66
    TEST EAX,EAX                        ; 00551f69
    JNZ 0x0055205d                      ; 00551f6b
        ;   XREF to: 0055205d (CONDITIONAL_JUMP)  ; LAB_0055205d
    MOV ESI,dword ptr [ESP + 0x240]     ; 00551f71
    PUSH ESI                            ; 00551f78
    PUSH 0x5d28c2                       ; 00551f79 | = "Failed to lock sample %s\n"
    CALL sound_sndmain.cpp_FUN_0055a560 ; 00551f7e
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
        ;   Label: LAB_00551f7e
    ADD ESP,0x8                         ; 00551f83
    PUSH 0x0                            ; 00551f86
    LEA EAX,[ESP + 0x204]               ; 00551f88
        ;   Label: LAB_00551f88
    PUSH EAX                            ; 00551f8f
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 00551f90
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00551f95
        ;   Label: LAB_00551f95
    PUSH 0x2cd2980                      ; 00551f98
        ;   Label: LAB_00551f98
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_00502a10 ; 00551f9d
        ;   XREF to: 00502a10 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_00502a10(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00551fa2
    PUSH EBP                            ; 00551fa5
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 ; 00551fa6
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00551fab
    XOR EAX,EAX                         ; 00551fae
    MOV EBX,dword ptr [0x02cebc20]      ; 00551fb0 | DAT_02cebc20
        ;   Label: LAB_00551fb0
    ADD ESP,0x22c                       ; 00551fb6
    POP EBP                             ; 00551fbc
    POP EDI                             ; 00551fbd
    POP ESI                             ; 00551fbe
    POP EBX                             ; 00551fbf
    RET                                 ; 00551fc0
    INC ESI                             ; 00551fc1
        ;   Label: LAB_00551fc1
    ADD EBP,0x1b0                       ; 00551fc2
    CMP ESI,0x40                        ; 00551fc8
    JL 0x00551d3e                       ; 00551fcb
        ;   XREF to: 00551d3e (CONDITIONAL_JUMP)  ; LAB_00551d3e
    MOV EBX,dword ptr [0x02cebc20]      ; 00551fd1 | DAT_02cebc20
    XOR EAX,EAX                         ; 00551fd7
    JMP 0x00551d58                      ; 00551fd9
        ;   XREF to: 00551d58 (UNCONDITIONAL_JUMP)  ; LAB_00551d58
    MOV dword ptr [0x02cebc20],EBX      ; 00551fde | DAT_02cebc20
        ;   Label: LAB_00551fde
    MOV EBX,dword ptr [0x02cebc20]      ; 00551fe4 | DAT_02cebc20
    ADD ESP,0x22c                       ; 00551fea
    POP EBP                             ; 00551ff0
    POP EDI                             ; 00551ff1
    POP ESI                             ; 00551ff2
    POP EBX                             ; 00551ff3
    RET                                 ; 00551ff4
    MOV EBP,dword ptr [EAX + 0x2cebd78] ; 00551ff5 | g_SfxSamples[1].ref_count
        ;   Label: LAB_00551ff5
    CMP EDX,EBP                         ; 00551ffb
    JNZ 0x00551d80                      ; 00551ffd
        ;   XREF to: 00551d80 (CONDITIONAL_JUMP)  ; LAB_00551d80
    MOV EDX,dword ptr [EAX + 0x2cebd80] ; 00552003 | g_SfxSamples[1].is_user_sample
    CMP EBP,EDX                         ; 00552009
    JNZ 0x00551d80                      ; 0055200b
        ;   XREF to: 00551d80 (CONDITIONAL_JUMP)  ; LAB_00551d80
    CMP EDX,dword ptr [EAX + 0x2cebdd0] ; 00552011 | g_SfxSamples[1].locked_length
    JNZ 0x00551d80                      ; 00552017
        ;   XREF to: 00551d80 (CONDITIONAL_JUMP)  ; LAB_00551d80
    ADD EAX,0x2cebc24                   ; 0055201d
    JMP 0x00551d88                      ; 00552022
        ;   XREF to: 00551d88 (UNCONDITIONAL_JUMP)  ; LAB_00551d88
    MOV EDI,dword ptr [ESP + 0x240]     ; 00552027
        ;   Label: LAB_00552027
    PUSH EDI                            ; 0055202e
    MOV ECX,0x5d289f                    ; 0055202f | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x36d                       ; 00552034
    PUSH 0x5d28b4                       ; 00552039 | = "Can't open %s"
    MOV dword ptr [0x01d71de0],ECX      ; 0055203e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00552044 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055204a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0055204f
    JMP 0x00551e9e                      ; 00552052
        ;   XREF to: 00551e9e (UNCONDITIONAL_JUMP)  ; LAB_00551e9e
    PUSH EAX                            ; 00552057
        ;   Label: LAB_00552057
    JMP 0x00551f88                      ; 00552058
        ;   XREF to: 00551f88 (UNCONDITIONAL_JUMP)  ; LAB_00551f88
    MOV EDI,dword ptr [EBP + 0x110]     ; 0055205d
        ;   Label: LAB_0055205d
    PUSH EDI                            ; 00552063
    PUSH EBP                            ; 00552064
    CALL sound_sndmain.cpp_FUN_00555900 ; 00552065
        ;   XREF to: 00555900 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00555900()
    ADD ESP,0x8                         ; 0055206a
    PUSH EAX                            ; 0055206d
    PUSH ESI                            ; 0055206e
    MOV EDI,EAX                         ; 0055206f
    LEA EAX,[ESP + 0x208]               ; 00552071
    PUSH EAX                            ; 00552078
    CALL support_trstream.cpp_CInStreamFile_read_FUN_00573c00 ; 00552079
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 0055207e
    CMP EAX,EDI                         ; 00552081
    JNZ 0x00552113                      ; 00552083
        ;   XREF to: 00552113 (CONDITIONAL_JUMP)  ; LAB_00552113
    LEA EAX,[ESP + 0x200]               ; 00552089
    PUSH EAX                            ; 00552090
    CALL support_trstream.cpp_CInStreamFile_close_FUN_00573db0 ; 00552091
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    MOV EAX,dword ptr [EBP + 0x104]     ; 00552096
    ADD ESP,0x4                         ; 0055209c
    CMP EAX,0x10                        ; 0055209f
    JNZ 0x005520c0                      ; 005520a2
        ;   XREF to: 005520c0 (CONDITIONAL_JUMP)  ; LAB_005520c0
    MOV EDX,dword ptr [EBP + 0x110]     ; 005520a4
    XOR EAX,EAX                         ; 005520aa
    TEST EDX,EDX                        ; 005520ac
    JLE 0x005520c0                      ; 005520ae
        ;   XREF to: 005520c0 (CONDITIONAL_JUMP)  ; LAB_005520c0
    INC EAX                             ; 005520b0
        ;   Label: LAB_005520b0
    CMP EAX,dword ptr [EBP + 0x110]     ; 005520b1
    JL 0x005520b0                       ; 005520b7
        ;   XREF to: 005520b0 (CONDITIONAL_JUMP)  ; LAB_005520b0
    LEA EAX,[EAX]                       ; 005520b9
    NOP                                 ; 005520bf
    PUSH EBP                            ; 005520c0
        ;   Label: LAB_005520c0
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760 ; 005520c1
        ;   XREF to: 00553760 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005520c6
    PUSH 0x0                            ; 005520c9
    LEA EAX,[ESP + 0x204]               ; 005520cb
    PUSH EAX                            ; 005520d2
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 005520d3
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005520d8
        ;   Label: LAB_005520d8
    MOV EAX,dword ptr [ESP + 0x240]     ; 005520db
        ;   Label: LAB_005520db
    PUSH EAX                            ; 005520e2
    PUSH 0x5d29ae                       ; 005520e3 | = "SOUND: Loaded sample %s\n"
    LEA EAX,[ESP + 0x8]                 ; 005520e8
    PUSH EAX                            ; 005520ec
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005520ed
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005520f2
    MOV EAX,ESP                         ; 005520f5
    PUSH EAX                            ; 005520f7
    CALL wincore_winrun.cpp_FUN_00581c70 ; 005520f8
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 005520fd
    MOV EAX,EBP                         ; 00552100
    MOV EBX,dword ptr [0x02cebc20]      ; 00552102 | DAT_02cebc20
    ADD ESP,0x22c                       ; 00552108
    POP EBP                             ; 0055210e
    POP EDI                             ; 0055210f
    POP ESI                             ; 00552110
    POP EBX                             ; 00552111
    RET                                 ; 00552112
    MOV ECX,dword ptr [ESP + 0x240]     ; 00552113
        ;   Label: LAB_00552113
    PUSH ECX                            ; 0055211a
    PUSH 0x5d28dc                       ; 0055211b | = "Error reading file data for %s\n"
    JMP 0x00551f7e                      ; 00552120
        ;   XREF to: 00551f7e (UNCONDITIONAL_JUMP)  ; LAB_00551f7e
    PUSH 0x5d28fc                       ; 00552125 | DAT_005d28fc
        ;   Label: LAB_00552125
    LEA EAX,[ESP + 0x4]                 ; 0055212a
    PUSH EAX                            ; 0055212e
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0055212f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00552134
    TEST EAX,EAX                        ; 00552137
    JNZ 0x00552298                      ; 00552139
        ;   XREF to: 00552298 (CONDITIONAL_JUMP)  ; LAB_00552298
    MOV EAX,dword ptr [ESP + 0x240]     ; 0055213f
    PUSH EAX                            ; 00552146
    PUSH 0x2cd2980                      ; 00552147
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_005027b0 ; 0055214c
        ;   XREF to: 005027b0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_openFile_FUN_005027b0(CMP3Decoder * this_ptr, char * filename)
    MOV dword ptr [EBP + 0x104],0x10    ; 00552151
    MOV EAX,[0x02cd2a84]                ; 0055215b | g_CMP3DecoderInstance.num_channels
    MOV dword ptr [EBP + 0x108],EAX     ; 00552160
    ADD ESP,0x8                         ; 00552166
    MOV EAX,[0x02cd2a80]                ; 00552169 | g_CMP3DecoderInstance.sample_rate
    MOV dword ptr [EBP + 0x110],0xffffffff ; 0055216e
    PUSH EBP                            ; 00552178
    MOV dword ptr [EBP + 0x10c],EAX     ; 00552179
    CALL sound_sndmain.cpp_FUN_00551620 ; 0055217f
        ;   XREF to: 00551620 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551620()
    MOV EDX,dword ptr [EBP + 0x110]     ; 00552184
    ADD ESP,0x4                         ; 0055218a
    TEST EDX,EDX                        ; 0055218d
    JGE 0x005521bc                      ; 0055218f
        ;   XREF to: 005521bc (CONDITIONAL_JUMP)  ; LAB_005521bc
    MOV EDI,dword ptr [ESP + 0x240]     ; 00552191
    PUSH EDI                            ; 00552198
    MOV ECX,0x5d2900                    ; 00552199 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x3df                       ; 0055219e
    PUSH 0x5d2915                       ; 005521a3 | = "Don't know length of sample %s"
    MOV dword ptr [0x01d71de0],ECX      ; 005521a8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005521ae | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005521b4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 005521b9
    MOV dword ptr [EBP + 0x150],0x0     ; 005521bc
        ;   Label: LAB_005521bc
    MOV dword ptr [EBP + 0x154],0x0     ; 005521c6
    MOV dword ptr [EBP + 0x158],0x0     ; 005521d0
    MOV dword ptr [EBP + 0x15c],0x0     ; 005521da
    MOV dword ptr [EBP + 0x160],0xffffffff ; 005521e4
    MOV EAX,dword ptr [EBP + 0x110]     ; 005521ee
    MOV dword ptr [EBP + 0x164],EAX     ; 005521f4
    PUSH EAX                            ; 005521fa
    MOV dword ptr [EBP + 0x16c],EAX     ; 005521fb
    PUSH EBP                            ; 00552201
    MOV dword ptr [EBP + 0x170],EAX     ; 00552202
    CALL sound_sndmain.cpp_FUN_00555900 ; 00552208
        ;   XREF to: 00555900 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00555900()
    ADD ESP,0x8                         ; 0055220d
    PUSH EBP                            ; 00552210
    MOV dword ptr [EBP + 0x168],EAX     ; 00552211
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005533b0 ; 00552217
        ;   XREF to: 005533b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005533b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0055221c
    TEST EAX,EAX                        ; 0055221f
    JZ 0x00551f98                       ; 00552221
        ;   XREF to: 00551f98 (CONDITIONAL_JUMP)  ; LAB_00551f98
    MOV EDX,dword ptr [EBP + 0x110]     ; 00552227
    PUSH EDX                            ; 0055222d
    PUSH 0x0                            ; 0055222e
    PUSH EBP                            ; 00552230
    CALL sound_sndmain.cpp_FUN_00553660 ; 00552231
        ;   XREF to: 00553660 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00553660()
    ADD ESP,0xc                         ; 00552236
    TEST EAX,EAX                        ; 00552239
    JZ 0x00552273                       ; 0055223b
        ;   XREF to: 00552273 (CONDITIONAL_JUMP)  ; LAB_00552273
    MOV ECX,dword ptr [EBP + 0x110]     ; 0055223d
    PUSH ECX                            ; 00552243
    PUSH EAX                            ; 00552244
    PUSH 0x2cd2980                      ; 00552245
    CALL sound_mp3.cpp_CMP3Decoder_read_FUN_00502a80 ; 0055224a
        ;   XREF to: 00502a80 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_read_FUN_00502a80(CMP3Decoder * this_ptr, short * output_buffer, int samples_requested)
    MOV ESI,dword ptr [EBP + 0x110]     ; 0055224f
    ADD ESP,0xc                         ; 00552255
    CMP EAX,ESI                         ; 00552258
    JZ 0x0055228a                       ; 0055225a
        ;   XREF to: 0055228a (CONDITIONAL_JUMP)  ; LAB_0055228a
    MOV EDI,dword ptr [ESP + 0x240]     ; 0055225c
    PUSH EDI                            ; 00552263
    PUSH 0x5d294e                       ; 00552264 | = "Error decoding file data from %s\n"
    CALL sound_sndmain.cpp_FUN_0055a560 ; 00552269
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    JMP 0x00551f95                      ; 0055226e
        ;   XREF to: 00551f95 (UNCONDITIONAL_JUMP)  ; LAB_00551f95
    MOV EAX,dword ptr [ESP + 0x240]     ; 00552273
        ;   Label: LAB_00552273
    PUSH EAX                            ; 0055227a
    PUSH 0x5d2934                       ; 0055227b | = "Failed to lock sample %s\n"
    CALL sound_sndmain.cpp_FUN_0055a560 ; 00552280
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    JMP 0x00551f95                      ; 00552285
        ;   XREF to: 00551f95 (UNCONDITIONAL_JUMP)  ; LAB_00551f95
    PUSH EBP                            ; 0055228a
        ;   Label: LAB_0055228a
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760 ; 0055228b
        ;   XREF to: 00553760 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00552290
    JMP 0x005520db                      ; 00552293
        ;   XREF to: 005520db (UNCONDITIONAL_JUMP)  ; LAB_005520db
    MOV EDI,dword ptr [ESP + 0x240]     ; 00552298
        ;   Label: LAB_00552298
    PUSH EDI                            ; 0055229f
    MOV ECX,0x5d2970                    ; 005522a0 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x40f                       ; 005522a5
    PUSH 0x5d2985                       ; 005522aa | = "Unknown sample file format extension: %s"
    MOV dword ptr [0x01d71de0],ECX      ; 005522af | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005522b5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005522bb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    JMP 0x005520d8                      ; 005522c0
        ;   XREF to: 005520d8 (UNCONDITIONAL_JUMP)  ; LAB_005520d8

