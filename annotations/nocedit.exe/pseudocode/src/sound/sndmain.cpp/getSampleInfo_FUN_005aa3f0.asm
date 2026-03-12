; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_005aa3f0(CSfxSample *out_sample)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   out_sample
; Local Variables:
; char             Stack[-0x114]:1  local_114
; undefined1[255]  Stack[-0x113]:255  local_113
; long             Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0 at 005b3bd5
;   sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 at 005ad3ec
;
; Referenced Globals:
;   TerminatedCString s_sound_00650b55
;   TerminatedCString s_wav_00650b5b
;   TerminatedCString s_rb_00650b5f
;   TerminatedCString s_sound_00650b62
;   TerminatedCString s_sound_sndmain_cpp_00650b68
;   TerminatedCString s_sound_sndmain_cpp_00650b7d
;   TerminatedCString s_mp3_00650b92
;   TerminatedCString s_sound_sndmain_cpp_00650b96
;   TerminatedCString s_Unknown_sample_file_form_00650bab
;   TerminatedCString s_sound_sndmain_cpp_00650bd4
;   TerminatedCString s_getSampleInfo_can_t_dete_00650be9
;   WatcomStaticDestructorNode g_CMP3DecoderDestructorNode2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CMP3Decoder g_CMP3DecoderInstance
;   ... and 8 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_ftell_FUN_00601560
;   crt_stdlib.c__atexit_FUN_005ff060
;   crt_string.c__stricmp_FUN_005fe7f0
;   crt_string.c_memmove_FUN_005fe5e0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_dosio.c_splitPath_FUN_00481f20
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
;   sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa3f0
        ;   Label: sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0
    PUSH ESI                            ; 005aa3f1
    PUSH EDI                            ; 005aa3f2
    PUSH EBP                            ; 005aa3f3
    SUB ESP,0x104                       ; 005aa3f4
    MOV EBP,dword ptr [ESP + 0x118]     ; 005aa3fa
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005aa401
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
    XOR ESI,ESI                         ; 005aa406
    CMP dword ptr [ESI + 0x3f6293c],0x1 ; 005aa408 | DAT_03f6293c | DAT_03f62abc
        ;   Label: LAB_005aa408
    JGE 0x005aa443                      ; 005aa40f
        ;   XREF to: 005aa443 (CONDITIONAL_JUMP)  ; LAB_005aa443
    ADD ESI,0x180                       ; 005aa411
        ;   Label: LAB_005aa411
    CMP ESI,0x6000                      ; 005aa417
    JL 0x005aa408                       ; 005aa41d
        ;   XREF to: 005aa408 (CONDITIONAL_JUMP)  ; LAB_005aa408
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005aa41f
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    PUSH EBP                            ; 005aa424
    PUSH 0x650b55                       ; 005aa425 | = "sound"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005aa42a
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005aa42f
    TEST EAX,EAX                        ; 005aa432
    JG 0x005aa46f                       ; 005aa434
        ;   XREF to: 005aa46f (CONDITIONAL_JUMP)  ; LAB_005aa46f
    XOR EAX,EAX                         ; 005aa436
        ;   Label: LAB_005aa436
    ADD ESP,0x104                       ; 005aa438
        ;   Label: LAB_005aa438
    POP EBP                             ; 005aa43e
    POP EDI                             ; 005aa43f
    POP ESI                             ; 005aa440
    POP EBX                             ; 005aa441
    RET                                 ; 005aa442
    MOV EBX,0x3f6282c                   ; 005aa443 | g_SfxSamples
        ;   Label: LAB_005aa443
    PUSH EBP                            ; 005aa448
    ADD EBX,ESI                         ; 005aa449
    PUSH EBX                            ; 005aa44b | DAT_03f629ac
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005aa44c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005aa451
    TEST EAX,EAX                        ; 005aa454
    JNZ 0x005aa411                      ; 005aa456
        ;   XREF to: 005aa411 (CONDITIONAL_JUMP)  ; LAB_005aa411
    MOV ECX,0x54                        ; 005aa458
    MOV EDI,EBP                         ; 005aa45d
    MOV ESI,EBX                         ; 005aa45f
    MOVSD.REP ES:EDI,ESI                ; 005aa461 | DAT_03f629ac | DAT_03f629b0
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005aa463
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    MOV EAX,0x1                         ; 005aa468
    JMP 0x005aa438                      ; 005aa46d
        ;   XREF to: 005aa438 (UNCONDITIONAL_JUMP)  ; LAB_005aa438
    MOV EAX,ESP                         ; 005aa46f
        ;   Label: LAB_005aa46f
    PUSH EAX                            ; 005aa471
    PUSH 0x0                            ; 005aa472
    PUSH 0x0                            ; 005aa474
    PUSH 0x0                            ; 005aa476
    PUSH EBP                            ; 005aa478
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 005aa479
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005aa47e
    CMP byte ptr [ESP],0x2e             ; 005aa481
    JNZ 0x005aa4a6                      ; 005aa485
        ;   XREF to: 005aa4a6 (CONDITIONAL_JUMP)  ; LAB_005aa4a6
    MOV EDI,ESP                         ; 005aa487
    SUB ECX,ECX                         ; 005aa489
    DEC ECX                             ; 005aa48b
    XOR EAX,EAX                         ; 005aa48c
    SCASB.REPNE ES:EDI                  ; 005aa48e
    NOT ECX                             ; 005aa490
    DEC ECX                             ; 005aa492
    PUSH ECX                            ; 005aa493
    LEA EAX,[ESP + 0x5]                 ; 005aa494
    PUSH EAX                            ; 005aa498
    LEA EAX,[ESP + 0x8]                 ; 005aa499
    PUSH EAX                            ; 005aa49d
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005aa49e
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005aa4a3
    PUSH 0x650b5b                       ; 005aa4a6 | = "wav"
        ;   Label: LAB_005aa4a6
    LEA EAX,[ESP + 0x4]                 ; 005aa4ab
    PUSH EAX                            ; 005aa4af
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005aa4b0
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005aa4b5
    TEST EAX,EAX                        ; 005aa4b8
    JNZ 0x005aa563                      ; 005aa4ba
        ;   XREF to: 005aa563 (CONDITIONAL_JUMP)  ; LAB_005aa563
    PUSH 0x650b5f                       ; 005aa4c0 | = "rb"
    PUSH EBP                            ; 005aa4c5
    PUSH 0x650b62                       ; 005aa4c6 | = "sound"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005aa4cb
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 005aa4d0
    ADD ESP,0xc                         ; 005aa4d2
    MOV ESI,EAX                         ; 005aa4d5
    TEST EAX,EAX                        ; 005aa4d7
    JNZ 0x005aa503                      ; 005aa4d9
        ;   XREF to: 005aa503 (CONDITIONAL_JUMP)  ; LAB_005aa503
    TEST ESI,ESI                        ; 005aa4db
        ;   Label: LAB_005aa4db
    JZ 0x005aa436                       ; 005aa4dd
        ;   XREF to: 005aa436 (CONDITIONAL_JUMP)  ; LAB_005aa436
    PUSH 0x10af                         ; 005aa4e3
    PUSH 0x650b68                       ; 005aa4e8 | = "..\\sound\\sndmain.cpp"
    PUSH ESI                            ; 005aa4ed
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005aa4ee
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005aa4f3
    XOR EAX,EAX                         ; 005aa4f6
    ADD ESP,0x104                       ; 005aa4f8
    POP EBP                             ; 005aa4fe
    POP EDI                             ; 005aa4ff
    POP ESI                             ; 005aa500
    POP EBX                             ; 005aa501
    RET                                 ; 005aa502
    PUSH EAX                            ; 005aa503
        ;   Label: LAB_005aa503
    CALL crt_stdio.c_ftell_FUN_00601560 ; 005aa504
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 005aa509
    PUSH EBP                            ; 005aa50c
    MOV dword ptr [ESP + 0x104],EAX     ; 005aa50d
    LEA EAX,[ESP + 0x104]               ; 005aa514
    PUSH EAX                            ; 005aa51b
    PUSH EBX                            ; 005aa51c
    CALL sound_sndmain.cpp_parseWavFile_FUN_005a3fe0 ; 005aa51d
        ;   XREF to: 005a3fe0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_parseWavFile_FUN_005a3fe0(_FILE * file_handle, long * file_offset_ptr, CSfxSample * sfx_sample)
    ADD ESP,0xc                         ; 005aa522
    TEST EAX,EAX                        ; 005aa525
    JZ 0x005aa4db                       ; 005aa527
        ;   XREF to: 005aa4db (CONDITIONAL_JUMP)  ; LAB_005aa4db
    PUSH 0x10ba                         ; 005aa529
    PUSH 0x650b7d                       ; 005aa52e | = "..\\sound\\sndmain.cpp"
    PUSH EBX                            ; 005aa533
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005aa534
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005aa539
    PUSH EBP                            ; 005aa53c
        ;   Label: LAB_005aa53c
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0 ; 005aa53d
        ;   XREF to: 005a45c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample * this_ptr)
    MOV ESI,dword ptr [EBP + 0x110]     ; 005aa542
    ADD ESP,0x4                         ; 005aa548
    TEST ESI,ESI                        ; 005aa54b
    JLE 0x005aa620                      ; 005aa54d
        ;   XREF to: 005aa620 (CONDITIONAL_JUMP)  ; LAB_005aa620
    MOV EAX,0x1                         ; 005aa553
    ADD ESP,0x104                       ; 005aa558
    POP EBP                             ; 005aa55e
    POP EDI                             ; 005aa55f
    POP ESI                             ; 005aa560
    POP EBX                             ; 005aa561
    RET                                 ; 005aa562
    PUSH 0x650b92                       ; 005aa563 | = "mp3"
        ;   Label: LAB_005aa563
    LEA EAX,[ESP + 0x4]                 ; 005aa568
    PUSH EAX                            ; 005aa56c
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005aa56d
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005aa572
    TEST EAX,EAX                        ; 005aa575
    JNZ 0x005aa5f7                      ; 005aa577
        ;   XREF to: 005aa5f7 (CONDITIONAL_JUMP)  ; LAB_005aa5f7
    MOV DL,byte ptr [0x03f5d878]        ; 005aa57d | g_GlobalMP3DecoderInitializedOther
    TEST DL,0x1                         ; 005aa583
    JNZ 0x005aa5ad                      ; 005aa586
        ;   XREF to: 005aa5ad (CONDITIONAL_JUMP)  ; LAB_005aa5ad
    MOV DH,DL                           ; 005aa588
    OR DH,0x1                           ; 005aa58a
    PUSH 0x3f55248                      ; 005aa58d | g_CMP3DecoderInstance
    MOV byte ptr [0x03f5d878],DH        ; 005aa592 | g_GlobalMP3DecoderInitializedOther
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0 ; 005aa598
        ;   XREF to: 005344f0 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005aa59d
    PUSH 0x681af4                       ; 005aa5a0 | g_CMP3DecoderDestructorNode2
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 005aa5a5
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005aa5aa
    PUSH EBP                            ; 005aa5ad
        ;   Label: LAB_005aa5ad
    PUSH 0x3f55248                      ; 005aa5ae | g_CMP3DecoderInstance
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550 ; 005aa5b3
        ;   XREF to: 00534550 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550(CMP3Decoder * this_ptr, char * filename)
    MOV dword ptr [EBP + 0x104],0x10    ; 005aa5b8
    MOV EAX,[0x03f5534c]                ; 005aa5c2 | g_CMP3DecoderInstance.num_channels
    MOV dword ptr [EBP + 0x108],EAX     ; 005aa5c7
    ADD ESP,0x8                         ; 005aa5cd
    MOV EAX,[0x03f55348]                ; 005aa5d0 | g_CMP3DecoderInstance.sample_rate
    MOV dword ptr [EBP + 0x110],0xffffffff ; 005aa5d5
    PUSH 0x3f55248                      ; 005aa5df | g_CMP3DecoderInstance
    MOV dword ptr [EBP + 0x10c],EAX     ; 005aa5e4
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0 ; 005aa5ea
        ;   XREF to: 005349e0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005aa5ef
    JMP 0x005aa53c                      ; 005aa5f2
        ;   XREF to: 005aa53c (UNCONDITIONAL_JUMP)  ; LAB_005aa53c
    PUSH EBP                            ; 005aa5f7
        ;   Label: LAB_005aa5f7
    MOV ECX,0x650b96                    ; 005aa5f8 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x10d3                      ; 005aa5fd
    PUSH 0x650bab                       ; 005aa602 | = "Unknown sample file format extension: %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 005aa607 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005aa60d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005aa613
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005aa618
    JMP 0x005aa53c                      ; 005aa61b
        ;   XREF to: 005aa53c (UNCONDITIONAL_JUMP)  ; LAB_005aa53c
    PUSH EBP                            ; 005aa620
        ;   Label: LAB_005aa620
    MOV EDI,0x650bd4                    ; 005aa621 | = "..\\sound\\sndmain.cpp"
    MOV EAX,0x10de                      ; 005aa626
    PUSH 0x650be9                       ; 005aa62b | = "getSampleInfo - can't determine lengt..."
    MOV dword ptr [0x02f0ca48],EDI      ; 005aa630 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005aa636 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005aa63b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005aa640
    MOV EAX,0x1                         ; 005aa643
    ADD ESP,0x104                       ; 005aa648
    POP EBP                             ; 005aa64e
    POP EDI                             ; 005aa64f
    POP ESI                             ; 005aa650
    POP EBX                             ; 005aa651
    RET                                 ; 005aa652

