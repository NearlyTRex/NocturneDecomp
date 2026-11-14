; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_00557570(CSfxSample *out_sample)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   out_sample
; Local Variables:
; undefined1       Stack[-0x140]:1  local_140
; undefined        Stack[-0x13f]:1  local_13f
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_sound.cpp_CSound_getSoundDuration_FUN_00560b10 at 00560b45
;
; Referenced Globals:
;   TerminatedCString s_sound_005d3a09
;   undefined4 DAT_005d3a0f
;   TerminatedCString s_sound_005d3a13
;   undefined4 DAT_005d3a19
;   TerminatedCString s_sound_sndmain_cpp_005d3a1d
;   TerminatedCString s_Unknown_sample_file_form_005d3a32
;   TerminatedCString s_sound_sndmain_cpp_005d3a5b
;   TerminatedCString s_getSampleInfo_can_t_dete_005d3a70
;   WatcomStaticDestructorNode g_CMP3DecoderDestructorNode2
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 g_CMP3DecoderInstanceOther.sample_rate
;   undefined4 g_CMP3DecoderInstanceOther.num_channels
;   undefined4 DAT_02ce71e8
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdlib.c__atexit_FUN_005a3e13
;   crt_string.c__stricmp_FUN_005a3260
;   crt_string.c_memmove_FUN_005a54c0
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   engine_dosio.cpp_splitPath_FUN_00465e50
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_00502750
;   sound_mp3.cpp_CMP3Decoder_free_FUN_00502a10
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_005027b0
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00551620
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;   sound_sndmain.cpp_parseWavFile_FUN_00551000
;   sound_sndmain.cpp_unlockSound_FUN_00556fd0
;   support_trstream.cpp_CInStreamFile_close_FUN_00573db0
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557570
        ;   Label: sound_sndmain.cpp_getSampleInfo_FUN_00557570
    PUSH ESI                            ; 00557571
    PUSH EDI                            ; 00557572
    PUSH EBP                            ; 00557573
    SUB ESP,0x130                       ; 00557574
    MOV EBP,dword ptr [ESP + 0x144]     ; 0055757a
    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 00557581
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
    XOR ESI,ESI                         ; 00557586
    CMP dword ptr [ESI + 0x2cebd34],0x1 ; 00557588
        ;   Label: LAB_00557588
    JGE 0x005575c5                      ; 0055758f
        ;   XREF to: 005575c5 (CONDITIONAL_JUMP)  ; LAB_005575c5
    ADD ESI,0x1b0                       ; 00557591
        ;   Label: LAB_00557591
    CMP ESI,0x6c00                      ; 00557597
    JL 0x00557588                       ; 0055759d
        ;   XREF to: 00557588 (CONDITIONAL_JUMP)  ; LAB_00557588
    CALL sound_sndmain.cpp_unlockSound_FUN_00556fd0 ; 0055759f
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00556fd0()
    PUSH EBP                            ; 005575a4
    PUSH 0x5d3a09                       ; 005575a5 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 005575aa
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 005575af
    TEST EAX,EAX                        ; 005575b2
    JG 0x005575f1                       ; 005575b4
        ;   XREF to: 005575f1 (CONDITIONAL_JUMP)  ; LAB_005575f1
    XOR EBP,EBP                         ; 005575b6
    MOV EAX,EBP                         ; 005575b8
        ;   Label: LAB_005575b8
    ADD ESP,0x130                       ; 005575ba
    POP EBP                             ; 005575c0
    POP EDI                             ; 005575c1
    POP ESI                             ; 005575c2
    POP EBX                             ; 005575c3
    RET                                 ; 005575c4
    MOV EBX,0x2cebc24                   ; 005575c5
        ;   Label: LAB_005575c5
    PUSH EBP                            ; 005575ca
    ADD EBX,ESI                         ; 005575cb
    PUSH EBX                            ; 005575cd
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005575ce
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005575d3
    TEST EAX,EAX                        ; 005575d6
    JNZ 0x00557591                      ; 005575d8
        ;   XREF to: 00557591 (CONDITIONAL_JUMP)  ; LAB_00557591
    MOV ECX,0x54                        ; 005575da
    MOV EDI,EBP                         ; 005575df
    MOV ESI,EBX                         ; 005575e1
    MOV EBP,0x1                         ; 005575e3
    MOVSD.REP ES:EDI,ESI                ; 005575e8
    CALL sound_sndmain.cpp_unlockSound_FUN_00556fd0 ; 005575ea
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00556fd0()
    JMP 0x005575b8                      ; 005575ef
        ;   XREF to: 005575b8 (UNCONDITIONAL_JUMP)  ; LAB_005575b8
    MOV EAX,ESP                         ; 005575f1
        ;   Label: LAB_005575f1
    PUSH EAX                            ; 005575f3
    PUSH 0x0                            ; 005575f4
    PUSH 0x0                            ; 005575f6
    PUSH 0x0                            ; 005575f8
    PUSH EBP                            ; 005575fa
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 005575fb
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00557600
    CMP byte ptr [ESP],0x2e             ; 00557603
    JNZ 0x00557628                      ; 00557607
        ;   XREF to: 00557628 (CONDITIONAL_JUMP)  ; LAB_00557628
    MOV EDI,ESP                         ; 00557609
    SUB ECX,ECX                         ; 0055760b
    DEC ECX                             ; 0055760d
    XOR EAX,EAX                         ; 0055760e
    SCASB.REPNE ES:EDI                  ; 00557610
    NOT ECX                             ; 00557612
    DEC ECX                             ; 00557614
    PUSH ECX                            ; 00557615
    LEA EAX,[ESP + 0x5]                 ; 00557616
    PUSH EAX                            ; 0055761a
    LEA EAX,[ESP + 0x8]                 ; 0055761b
    PUSH EAX                            ; 0055761f
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00557620
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00557625
    PUSH 0x5d3a0f                       ; 00557628 | DAT_005d3a0f
        ;   Label: LAB_00557628
    LEA EAX,[ESP + 0x4]                 ; 0055762d
    PUSH EAX                            ; 00557631
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00557632
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00557637
    TEST EAX,EAX                        ; 0055763a
    JNZ 0x00557711                      ; 0055763c
        ;   XREF to: 00557711 (CONDITIONAL_JUMP)  ; LAB_00557711
    LEA EAX,[ESP + 0x100]               ; 00557642
    PUSH EAX                            ; 00557649
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0 ; 0055764a
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0055764f
    PUSH 0x1                            ; 00557652
    PUSH EBP                            ; 00557654
    PUSH 0x5d3a13                       ; 00557655 | = "sound"
    LEA EAX,[ESP + 0x10c]               ; 0055765a
    PUSH EAX                            ; 00557661
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 00557662
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, char * directory, char * filename, int binary_mode)
    ADD ESP,0x10                        ; 00557667
    TEST EAX,EAX                        ; 0055766a
    JZ 0x005576f1                       ; 0055766c
        ;   XREF to: 005576f1 (CONDITIONAL_JUMP)  ; LAB_005576f1
    LEA EAX,[ESP + 0x100]               ; 00557672
    PUSH EAX                            ; 00557679
    CALL support_trstream.cpp_CInStreamFile_tell_FUN_00573d40 ; 0055767a
        ;   XREF to: 00573d40 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_tell_FUN_00573d40(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0055767f
    PUSH EBP                            ; 00557682
    MOV dword ptr [ESP + 0x130],EAX     ; 00557683
    LEA EAX,[ESP + 0x130]               ; 0055768a
    PUSH EAX                            ; 00557691
    LEA EAX,[ESP + 0x108]               ; 00557692
    PUSH EAX                            ; 00557699
    CALL sound_sndmain.cpp_parseWavFile_FUN_00551000 ; 0055769a
        ;   XREF to: 00551000 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_parseWavFile_FUN_00551000(CInStream * stream, int * file_offset_ptr, CSfxSample * sfx_sample)
    ADD ESP,0xc                         ; 0055769f
    TEST EAX,EAX                        ; 005576a2
    JZ 0x005576f1                       ; 005576a4
        ;   XREF to: 005576f1 (CONDITIONAL_JUMP)  ; LAB_005576f1
    LEA EAX,[ESP + 0x100]               ; 005576a6
    PUSH EAX                            ; 005576ad
    CALL support_trstream.cpp_CInStreamFile_close_FUN_00573db0 ; 005576ae
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 005576b3
    PUSH 0x0                            ; 005576b6
    LEA EAX,[ESP + 0x104]               ; 005576b8
    PUSH EAX                            ; 005576bf
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 005576c0
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005576c5
        ;   Label: LAB_005576c5
    PUSH EBP                            ; 005576c8
        ;   Label: LAB_005576c8
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00551620 ; 005576c9
        ;   XREF to: 00551620 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00551620(CSfxSample * this_ptr)
    MOV ESI,dword ptr [EBP + 0x110]     ; 005576ce
    ADD ESP,0x4                         ; 005576d4
    TEST ESI,ESI                        ; 005576d7
    JLE 0x005577cb                      ; 005576d9
        ;   XREF to: 005577cb (CONDITIONAL_JUMP)  ; LAB_005577cb
    MOV EBP,0x1                         ; 005576df
    MOV EAX,EBP                         ; 005576e4
    ADD ESP,0x130                       ; 005576e6
    POP EBP                             ; 005576ec
    POP EDI                             ; 005576ed
    POP ESI                             ; 005576ee
    POP EBX                             ; 005576ef
    RET                                 ; 005576f0
    XOR EBP,EBP                         ; 005576f1
        ;   Label: LAB_005576f1
    PUSH EBP                            ; 005576f3
    LEA EAX,[ESP + 0x104]               ; 005576f4
    PUSH EAX                            ; 005576fb
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 005576fc
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00557701
    MOV EAX,EBP                         ; 00557704
    ADD ESP,0x130                       ; 00557706
    POP EBP                             ; 0055770c
    POP EDI                             ; 0055770d
    POP ESI                             ; 0055770e
    POP EBX                             ; 0055770f
    RET                                 ; 00557710
    PUSH 0x5d3a19                       ; 00557711 | DAT_005d3a19
        ;   Label: LAB_00557711
    LEA EAX,[ESP + 0x4]                 ; 00557716
    PUSH EAX                            ; 0055771a
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0055771b
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00557720
    TEST EAX,EAX                        ; 00557723
    JNZ 0x005577a5                      ; 00557725
        ;   XREF to: 005577a5 (CONDITIONAL_JUMP)  ; LAB_005577a5
    MOV DL,byte ptr [0x02ce71e8]        ; 0055772b | DAT_02ce71e8
    TEST DL,0x1                         ; 00557731
    JNZ 0x0055775b                      ; 00557734
        ;   XREF to: 0055775b (CONDITIONAL_JUMP)  ; LAB_0055775b
    MOV DH,DL                           ; 00557736
    OR DH,0x1                           ; 00557738
    PUSH 0x2cdebb8                      ; 0055773b
    MOV byte ptr [0x02ce71e8],DH        ; 00557740 | DAT_02ce71e8
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_00502750 ; 00557746
        ;   XREF to: 00502750 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_00502750(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0055774b
    PUSH 0x604214                       ; 0055774e | g_CMP3DecoderDestructorNode2
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 00557753
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00557758
    PUSH EBP                            ; 0055775b
        ;   Label: LAB_0055775b
    PUSH 0x2cdebb8                      ; 0055775c
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_005027b0 ; 00557761
        ;   XREF to: 005027b0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_openFile_FUN_005027b0(CMP3Decoder * this_ptr, char * filename)
    MOV dword ptr [EBP + 0x104],0x10    ; 00557766
    MOV EAX,[0x02cdecbc]                ; 00557770 | g_CMP3DecoderInstanceOther.num_channels
    MOV dword ptr [EBP + 0x108],EAX     ; 00557775
    ADD ESP,0x8                         ; 0055777b
    MOV EAX,[0x02cdecb8]                ; 0055777e | g_CMP3DecoderInstanceOther.sample_rate
    MOV dword ptr [EBP + 0x110],0xffffffff ; 00557783
    PUSH 0x2cdebb8                      ; 0055778d
    MOV dword ptr [EBP + 0x10c],EAX     ; 00557792
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_00502a10 ; 00557798
        ;   XREF to: 00502a10 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_00502a10(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0055779d
    JMP 0x005576c8                      ; 005577a0
        ;   XREF to: 005576c8 (UNCONDITIONAL_JUMP)  ; LAB_005576c8
    PUSH EBP                            ; 005577a5
        ;   Label: LAB_005577a5
    MOV ECX,0x5d3a1d                    ; 005577a6 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x12d1                      ; 005577ab
    PUSH 0x5d3a32                       ; 005577b0 | = "Unknown sample file format extension: %s"
    MOV dword ptr [0x01d71de0],ECX      ; 005577b5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 005577bb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005577c1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    JMP 0x005576c5                      ; 005577c6
        ;   XREF to: 005576c5 (UNCONDITIONAL_JUMP)  ; LAB_005576c5
    PUSH EBP                            ; 005577cb
        ;   Label: LAB_005577cb
    MOV EDI,0x5d3a5b                    ; 005577cc | = "..\\sound\\sndmain.cpp"
    MOV EAX,0x12dc                      ; 005577d1
    PUSH 0x5d3a70                       ; 005577d6 | = "getSampleInfo - can't determine lengt..."
    MOV dword ptr [0x01d71de0],EDI      ; 005577db | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 005577e1 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005577e6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 005577eb
    MOV EBP,0x1                         ; 005577ee
    MOV EAX,EBP                         ; 005577f3
    ADD ESP,0x130                       ; 005577f5
    POP EBP                             ; 005577fb
    POP EDI                             ; 005577fc
    POP ESI                             ; 005577fd
    POP EBX                             ; 005577fe
    RET                                 ; 005577ff

