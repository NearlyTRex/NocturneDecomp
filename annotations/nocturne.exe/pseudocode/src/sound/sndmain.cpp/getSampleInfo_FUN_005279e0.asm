; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_005279e0(CSfxSample *out_sample)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   out_sample
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined        Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_sound.cpp_CSound_getSoundDuration_FUN_0052ebc0 at 0052ebf5
;
; Referenced Globals:
;   TerminatedCString s_sound_00593734
;   TerminatedCString s_wav_0059373a
;   TerminatedCString s_rb_0059373e
;   TerminatedCString s_sound_00593741
;   TerminatedCString s_mp3_00593747
;   TerminatedCString s_sound_sndmain_cpp_0059374b
;   TerminatedCString s_Unknown_sample_file_form_00593760
;   TerminatedCString s_sound_sndmain_cpp_00593789
;   TerminatedCString s_getSampleInfo_can_t_dete_0059379e
;   WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bea44
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 g_CMP3Decoder_02db4d18.sample_rate
;   undefined4 g_CMP3Decoder_02db4d18.num_channels
;   undefined4 DAT_02dbd348
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_ftell_FUN_00566e70
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_memmove_FUN_00566170
;   crt_string.c_splitpath_FUN_00566498
;   crt_unknown.c__atexit_FUN_00564bb0
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90
;   sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_parseWavFile_FUN_00521830
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005279e0
        ;   Label: sound_sndmain.cpp_getSampleInfo_FUN_005279e0
    PUSH ESI                            ; 005279e1
    PUSH EDI                            ; 005279e2
    PUSH EBP                            ; 005279e3
    SUB ESP,0x104                       ; 005279e4
    MOV EBP,dword ptr [ESP + 0x118]     ; 005279ea
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 005279f1
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00528800()
    XOR ESI,ESI                         ; 005279f6
    CMP dword ptr [ESI + 0x2dc1fec],0x1 ; 005279f8
        ;   Label: LAB_005279f8
    JGE 0x00527a33                      ; 005279ff
        ;   XREF to: 00527a33 (CONDITIONAL_JUMP)  ; LAB_00527a33
    ADD ESI,0x168                       ; 00527a01
        ;   Label: LAB_00527a01
    CMP ESI,0x5a00                      ; 00527a07
    JL 0x005279f8                       ; 00527a0d
        ;   XREF to: 005279f8 (CONDITIONAL_JUMP)  ; LAB_005279f8
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00527a0f
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    PUSH EBP                            ; 00527a14
    PUSH 0x593734                       ; 00527a15 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 00527a1a
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00527a1f
    TEST EAX,EAX                        ; 00527a22
    JG 0x00527a5f                       ; 00527a24
        ;   XREF to: 00527a5f (CONDITIONAL_JUMP)  ; LAB_00527a5f
    XOR EAX,EAX                         ; 00527a26
        ;   Label: LAB_00527a26
    ADD ESP,0x104                       ; 00527a28
        ;   Label: LAB_00527a28
    POP EBP                             ; 00527a2e
    POP EDI                             ; 00527a2f
    POP ESI                             ; 00527a30
    POP EBX                             ; 00527a31
    RET                                 ; 00527a32
    MOV EBX,0x2dc1edc                   ; 00527a33
        ;   Label: LAB_00527a33
    PUSH EBP                            ; 00527a38
    ADD EBX,ESI                         ; 00527a39
    PUSH EBX                            ; 00527a3b
    CALL crt_string.c__stricmp_FUN_00564520 ; 00527a3c
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00527a41
    TEST EAX,EAX                        ; 00527a44
    JNZ 0x00527a01                      ; 00527a46
        ;   XREF to: 00527a01 (CONDITIONAL_JUMP)  ; LAB_00527a01
    MOV ECX,0x4a                        ; 00527a48
    MOV EDI,EBP                         ; 00527a4d
    MOV ESI,EBX                         ; 00527a4f
    MOVSD.REP ES:EDI,ESI                ; 00527a51
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00527a53
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV EAX,0x1                         ; 00527a58
    JMP 0x00527a28                      ; 00527a5d
        ;   XREF to: 00527a28 (UNCONDITIONAL_JUMP)  ; LAB_00527a28
    MOV EAX,ESP                         ; 00527a5f
        ;   Label: LAB_00527a5f
    PUSH EAX                            ; 00527a61
    PUSH 0x0                            ; 00527a62
    PUSH 0x0                            ; 00527a64
    PUSH 0x0                            ; 00527a66
    PUSH EBP                            ; 00527a68
    CALL crt_string.c_splitpath_FUN_00566498 ; 00527a69
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_00566498(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00527a6e
    CMP byte ptr [ESP],0x2e             ; 00527a71
    JNZ 0x00527a96                      ; 00527a75
        ;   XREF to: 00527a96 (CONDITIONAL_JUMP)  ; LAB_00527a96
    MOV EDI,ESP                         ; 00527a77
    SUB ECX,ECX                         ; 00527a79
    DEC ECX                             ; 00527a7b
    XOR EAX,EAX                         ; 00527a7c
    SCASB.REPNE ES:EDI                  ; 00527a7e
    NOT ECX                             ; 00527a80
    DEC ECX                             ; 00527a82
    PUSH ECX                            ; 00527a83
    LEA EAX,[ESP + 0x5]                 ; 00527a84
    PUSH EAX                            ; 00527a88
    LEA EAX,[ESP + 0x8]                 ; 00527a89
    PUSH EAX                            ; 00527a8d
    CALL crt_string.c_memmove_FUN_00566170 ; 00527a8e
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00527a93
    PUSH 0x59373a                       ; 00527a96 | = "wav"
        ;   Label: LAB_00527a96
    LEA EAX,[ESP + 0x4]                 ; 00527a9b
    PUSH EAX                            ; 00527a9f
    CALL crt_string.c__stricmp_FUN_00564520 ; 00527aa0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00527aa5
    TEST EAX,EAX                        ; 00527aa8
    JNZ 0x00527b3f                      ; 00527aaa
        ;   XREF to: 00527b3f (CONDITIONAL_JUMP)  ; LAB_00527b3f
    PUSH 0x59373e                       ; 00527ab0 | = "rb"
    PUSH EBP                            ; 00527ab5
    PUSH 0x593741                       ; 00527ab6 | = "sound"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00527abb
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 00527ac0
    ADD ESP,0xc                         ; 00527ac2
    MOV ESI,EAX                         ; 00527ac5
    TEST EAX,EAX                        ; 00527ac7
    JNZ 0x00527ae9                      ; 00527ac9
        ;   XREF to: 00527ae9 (CONDITIONAL_JUMP)  ; LAB_00527ae9
    TEST ESI,ESI                        ; 00527acb
        ;   Label: LAB_00527acb
    JZ 0x00527a26                       ; 00527acd
        ;   XREF to: 00527a26 (CONDITIONAL_JUMP)  ; LAB_00527a26
    PUSH ESI                            ; 00527ad3
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00527ad4
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 00527ad9
    XOR EAX,EAX                         ; 00527adc
    ADD ESP,0x104                       ; 00527ade
    POP EBP                             ; 00527ae4
    POP EDI                             ; 00527ae5
    POP ESI                             ; 00527ae6
    POP EBX                             ; 00527ae7
    RET                                 ; 00527ae8
    PUSH EAX                            ; 00527ae9
        ;   Label: LAB_00527ae9
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 00527aea
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00566e70(_FILE * file_handle)
    ADD ESP,0x4                         ; 00527aef
    PUSH EBP                            ; 00527af2
    MOV dword ptr [ESP + 0x104],EAX     ; 00527af3
    LEA EAX,[ESP + 0x104]               ; 00527afa
    PUSH EAX                            ; 00527b01
    PUSH EBX                            ; 00527b02
    CALL sound_sndmain.cpp_parseWavFile_FUN_00521830 ; 00527b03
        ;   XREF to: 00521830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_parseWavFile_FUN_00521830(_FILE * file_handle, int * file_offset_ptr, CSfxSample * sfx_sample)
    ADD ESP,0xc                         ; 00527b08
    TEST EAX,EAX                        ; 00527b0b
    JZ 0x00527acb                       ; 00527b0d
        ;   XREF to: 00527acb (CONDITIONAL_JUMP)  ; LAB_00527acb
    PUSH EBX                            ; 00527b0f
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00527b10
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 00527b15
        ;   Label: LAB_00527b15
    PUSH EBP                            ; 00527b18
        ;   Label: LAB_00527b18
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10 ; 00527b19
        ;   XREF to: 00521e10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10(CSfxSample * this_ptr)
    MOV ESI,dword ptr [EBP + 0x110]     ; 00527b1e
    ADD ESP,0x4                         ; 00527b24
    TEST ESI,ESI                        ; 00527b27
    JLE 0x00527bf5                      ; 00527b29
        ;   XREF to: 00527bf5 (CONDITIONAL_JUMP)  ; LAB_00527bf5
    MOV EAX,0x1                         ; 00527b2f
    ADD ESP,0x104                       ; 00527b34
    POP EBP                             ; 00527b3a
    POP EDI                             ; 00527b3b
    POP ESI                             ; 00527b3c
    POP EBX                             ; 00527b3d
    RET                                 ; 00527b3e
    PUSH 0x593747                       ; 00527b3f | = "mp3"
        ;   Label: LAB_00527b3f
    LEA EAX,[ESP + 0x4]                 ; 00527b44
    PUSH EAX                            ; 00527b48
    CALL crt_string.c__stricmp_FUN_00564520 ; 00527b49
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00527b4e
    TEST EAX,EAX                        ; 00527b51
    JNZ 0x00527bcc                      ; 00527b53
        ;   XREF to: 00527bcc (CONDITIONAL_JUMP)  ; LAB_00527bcc
    MOV DL,byte ptr [0x02dbd348]        ; 00527b55 | DAT_02dbd348
    TEST DL,0x1                         ; 00527b5b
    JNZ 0x00527b85                      ; 00527b5e
        ;   XREF to: 00527b85 (CONDITIONAL_JUMP)  ; LAB_00527b85
    MOV DH,DL                           ; 00527b60
    OR DH,0x1                           ; 00527b62
    PUSH 0x2db4d18                      ; 00527b65
    MOV byte ptr [0x02dbd348],DH        ; 00527b6a | DAT_02dbd348
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90 ; 00527b70
        ;   XREF to: 004e7d90 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00527b75
    PUSH 0x5bea44                       ; 00527b78 | g_WatcomStaticDestructorNode_005bea44
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 00527b7d
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00527b82
    PUSH EBP                            ; 00527b85
        ;   Label: LAB_00527b85
    PUSH 0x2db4d18                      ; 00527b86
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0 ; 00527b8b
        ;   XREF to: 004e7df0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0(CMP3Decoder * this_ptr, char * filename)
    MOV dword ptr [EBP + 0x104],0x10    ; 00527b90
    MOV EAX,[0x02db4e1c]                ; 00527b9a | g_CMP3Decoder_02db4d18.num_channels
    MOV dword ptr [EBP + 0x108],EAX     ; 00527b9f
    ADD ESP,0x8                         ; 00527ba5
    MOV EAX,[0x02db4e18]                ; 00527ba8 | g_CMP3Decoder_02db4d18.sample_rate
    MOV dword ptr [EBP + 0x110],0xffffffff ; 00527bad
    PUSH 0x2db4d18                      ; 00527bb7
    MOV dword ptr [EBP + 0x10c],EAX     ; 00527bbc
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260 ; 00527bc2
        ;   XREF to: 004e8260 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260(CMP3Decoder * this_ptr)
    JMP 0x00527b15                      ; 00527bc7
        ;   XREF to: 00527b15 (UNCONDITIONAL_JUMP)  ; LAB_00527b15
    PUSH EBP                            ; 00527bcc
        ;   Label: LAB_00527bcc
    MOV ECX,0x59374b                    ; 00527bcd | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x1084                      ; 00527bd2
    PUSH 0x593760                       ; 00527bd7 | = "Unknown sample file format extension: %s"
    MOV dword ptr [0x01cc4800],ECX      ; 00527bdc | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 00527be2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00527be8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 00527bed
    JMP 0x00527b18                      ; 00527bf0
        ;   XREF to: 00527b18 (UNCONDITIONAL_JUMP)  ; LAB_00527b18
    PUSH EBP                            ; 00527bf5
        ;   Label: LAB_00527bf5
    MOV EDI,0x593789                    ; 00527bf6 | = "..\\sound\\sndmain.cpp"
    MOV EAX,0x108f                      ; 00527bfb
    PUSH 0x59379e                       ; 00527c00 | = "getSampleInfo - can't determine lengt..."
    MOV dword ptr [0x01cc4800],EDI      ; 00527c05 | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 00527c0b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00527c10
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 00527c15
    MOV EAX,0x1                         ; 00527c18
    ADD ESP,0x104                       ; 00527c1d
    POP EBP                             ; 00527c23
    POP EDI                             ; 00527c24
    POP ESI                             ; 00527c25
    POP EBX                             ; 00527c26
    RET                                 ; 00527c27

