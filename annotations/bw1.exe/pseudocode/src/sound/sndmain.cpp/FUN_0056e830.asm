; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_FUN_0056e830(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x23c]:1  local_23c
; undefined        Stack[-0x23b]:1  local_23b
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[1]:
;   sound_sndmain.cpp_startSfx_FUN_00572d20 at 005730e3
;
; Referenced Globals:
;   TerminatedCString s_sound_005f2fa5
;   undefined4 DAT_005f2fab
;   TerminatedCString s_sound_005f2faf
;   TerminatedCString s_sound_sndmain_cpp_005f2fb5
;   TerminatedCString s_Can_t_open_s_005f2fca
;   TerminatedCString s_Failed_to_lock_sample_s_005f2fd8
;   TerminatedCString s_Error_reading_file_data_005f2ff2
;   undefined4 DAT_005f3012
;   TerminatedCString s_sound_sndmain_cpp_005f3016
;   TerminatedCString s_Don_t_know_length_of_sam_005f302b
;   TerminatedCString s_Failed_to_lock_sample_s_005f304a
;   TerminatedCString s_Error_decoding_file_data_005f3064
;   TerminatedCString s_sound_sndmain_cpp_005f3086
;   TerminatedCString s_Unknown_sample_file_form_005f309b
;   TerminatedCString s_SOUND_Loaded_sample_s_005f30c4
;   ... and 11 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdlib.c__atexit_FUN_005c1093
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_string.c_memmove_FUN_005c25d0
;   crt_unknown.c_FUN_005bfb40
;   engine_dosio.cpp_FUN_00479580
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_0052ae40
;   sound_mp3.cpp_CMP3Decoder_free_FUN_0052b100
;   sound_mp3.cpp_CMP3Decoder_read_FUN_0052b170
;   sound_mp3.cpp_FUN_0052aea0
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
;   sound_sndmain.cpp_FUN_0056db10
;   sound_sndmain.cpp_FUN_0056e130
;   sound_sndmain.cpp_FUN_0056feb0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e830
        ;   Label: sound_sndmain.cpp_FUN_0056e830
    PUSH ESI                            ; 0056e831
    PUSH EDI                            ; 0056e832
    PUSH EBP                            ; 0056e833
    SUB ESP,0x22c                       ; 0056e834
    MOV EBX,dword ptr [0x02c78ff0]      ; 0056e83a | DAT_02c78ff0
    MOV EBP,0x2c78ff4                   ; 0056e840
    MOV EDI,dword ptr [ESP + 0x240]     ; 0056e845
    XOR ESI,ESI                         ; 0056e84c
    PUSH EDI                            ; 0056e84e
        ;   Label: LAB_0056e84e
    PUSH EBP                            ; 0056e84f
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0056e850
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056e855
    TEST EAX,EAX                        ; 0056e858
    JNZ 0x0056ead1                      ; 0056e85a
        ;   XREF to: 0056ead1 (CONDITIONAL_JUMP)  ; LAB_0056ead1
    MOV EBX,dword ptr [0x02c78ff0]      ; 0056e860 | DAT_02c78ff0
    MOV EAX,EBP                         ; 0056e866
    TEST EAX,EAX                        ; 0056e868
        ;   Label: LAB_0056e868
    JNZ 0x0056eaee                      ; 0056e86a
        ;   XREF to: 0056eaee (CONDITIONAL_JUMP)  ; LAB_0056eaee
    XOR ECX,ECX                         ; 0056e870
    XOR ESI,ESI                         ; 0056e872
    INC EBX                             ; 0056e874
        ;   Label: LAB_0056e874
    CMP EBX,0x40                        ; 0056e875
    JL 0x0056e87c                       ; 0056e878
        ;   XREF to: 0056e87c (CONDITIONAL_JUMP)  ; LAB_0056e87c
    MOV EBX,ECX                         ; 0056e87a
    IMUL EAX,EBX,0x1b0                  ; 0056e87c
        ;   Label: LAB_0056e87c
    MOV EDX,dword ptr [EAX + 0x2c79144] ; 0056e882 | g_SfxSamples[1].field336_0x150
    CMP ECX,EDX                         ; 0056e888
    JZ 0x0056eb05                       ; 0056e88a
        ;   XREF to: 0056eb05 (CONDITIONAL_JUMP)  ; LAB_0056eb05
    INC ESI                             ; 0056e890
        ;   Label: LAB_0056e890
    CMP ESI,0x40                        ; 0056e891
    JL 0x0056e874                       ; 0056e894
        ;   XREF to: 0056e874 (CONDITIONAL_JUMP)  ; LAB_0056e874
    XOR EAX,EAX                         ; 0056e896
    MOV EBP,EAX                         ; 0056e898
        ;   Label: LAB_0056e898
    MOV dword ptr [0x02c78ff0],EBX      ; 0056e89a | DAT_02c78ff0
    JZ 0x0056eac0                       ; 0056e8a0
        ;   XREF to: 0056eac0 (CONDITIONAL_JUMP)  ; LAB_0056eac0
    PUSH EAX                            ; 0056e8a6
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 ; 0056e8a7
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample * this_ptr)
    MOV AH,byte ptr [0x02c68380]        ; 0056e8ac | DAT_02c68380
    ADD ESP,0x4                         ; 0056e8b2
    TEST AH,0x1                         ; 0056e8b5
    JNZ 0x0056e8df                      ; 0056e8b8
        ;   XREF to: 0056e8df (CONDITIONAL_JUMP)  ; LAB_0056e8df
    MOV DL,AH                           ; 0056e8ba
    OR DL,0x1                           ; 0056e8bc
    PUSH 0x2c5fd50                      ; 0056e8bf
    MOV byte ptr [0x02c68380],DL        ; 0056e8c4 | DAT_02c68380
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_0052ae40 ; 0056e8ca
        ;   XREF to: 0052ae40 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_0052ae40(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0056e8cf
    PUSH 0x6232c0                       ; 0056e8d2 | g_CMP3DecoderDestructorNode1
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0056e8d7
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 0056e8dc
    MOV EAX,dword ptr [ESP + 0x240]     ; 0056e8df
        ;   Label: LAB_0056e8df
    PUSH EAX                            ; 0056e8e6
    PUSH 0x5f2fa5                       ; 0056e8e7 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0056e8ec
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0056e8f1
    TEST EAX,EAX                        ; 0056e8f4
    JLE 0x0056eaa8                      ; 0056e8f6
        ;   XREF to: 0056eaa8 (CONDITIONAL_JUMP)  ; LAB_0056eaa8
    MOV ESI,dword ptr [ESP + 0x240]     ; 0056e8fc
    MOV EDI,EBP                         ; 0056e903
    PUSH EDI                            ; 0056e905
    MOV AL,byte ptr [ESI]               ; 0056e906
        ;   Label: LAB_0056e906
    MOV byte ptr [EDI],AL               ; 0056e908
    CMP AL,0x0                          ; 0056e90a
    JZ 0x0056e91e                       ; 0056e90c
        ;   XREF to: 0056e91e (CONDITIONAL_JUMP)  ; LAB_0056e91e
    MOV AL,byte ptr [ESI + 0x1]         ; 0056e90e
    ADD ESI,0x2                         ; 0056e911
    MOV byte ptr [EDI + 0x1],AL         ; 0056e914
    ADD EDI,0x2                         ; 0056e917
    CMP AL,0x0                          ; 0056e91a
    JNZ 0x0056e906                      ; 0056e91c
        ;   XREF to: 0056e906 (CONDITIONAL_JUMP)  ; LAB_0056e906
    POP EDI                             ; 0056e91e
        ;   Label: LAB_0056e91e
    MOV EAX,ESP                         ; 0056e91f
    PUSH EAX                            ; 0056e921
    PUSH 0x0                            ; 0056e922
    PUSH 0x0                            ; 0056e924
    PUSH 0x0                            ; 0056e926
    MOV EDX,dword ptr [ESP + 0x250]     ; 0056e928
    PUSH EDX                            ; 0056e92f
    CALL engine_dosio.cpp_FUN_00479580  ; 0056e930
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0056e935
    CMP byte ptr [ESP],0x2e             ; 0056e938
    JNZ 0x0056e95d                      ; 0056e93c
        ;   XREF to: 0056e95d (CONDITIONAL_JUMP)  ; LAB_0056e95d
    MOV EDI,ESP                         ; 0056e93e
    SUB ECX,ECX                         ; 0056e940
    DEC ECX                             ; 0056e942
    XOR EAX,EAX                         ; 0056e943
    SCASB.REPNE ES:EDI                  ; 0056e945
    NOT ECX                             ; 0056e947
    DEC ECX                             ; 0056e949
    PUSH ECX                            ; 0056e94a
    LEA EAX,[ESP + 0x5]                 ; 0056e94b
    PUSH EAX                            ; 0056e94f
    LEA EAX,[ESP + 0x8]                 ; 0056e950
    PUSH EAX                            ; 0056e954
    CALL crt_string.c_memmove_FUN_005c25d0 ; 0056e955
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0056e95a
    PUSH 0x5f2fab                       ; 0056e95d | DAT_005f2fab
        ;   Label: LAB_0056e95d
    LEA EAX,[ESP + 0x4]                 ; 0056e962
    PUSH EAX                            ; 0056e966
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0056e967
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056e96c
    TEST EAX,EAX                        ; 0056e96f
    JNZ 0x0056ec35                      ; 0056e971
        ;   XREF to: 0056ec35 (CONDITIONAL_JUMP)  ; LAB_0056ec35
    LEA EAX,[ESP + 0x200]               ; 0056e977
    PUSH EAX                            ; 0056e97e
    CALL unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0 ; 0056e97f
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0056e984
    PUSH 0x1                            ; 0056e987
    MOV EDX,dword ptr [ESP + 0x244]     ; 0056e989
    PUSH EDX                            ; 0056e990
    PUSH 0x5f2faf                       ; 0056e991 | = "sound"
    LEA EAX,[ESP + 0x20c]               ; 0056e996
    PUSH EAX                            ; 0056e99d
    CALL support_trstream.cpp_FUN_005a0fd0 ; 0056e99e
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a0fd0()
    ADD ESP,0x10                        ; 0056e9a3
    TEST EAX,EAX                        ; 0056e9a6
    JZ 0x0056eb37                       ; 0056e9a8
        ;   XREF to: 0056eb37 (CONDITIONAL_JUMP)  ; LAB_0056eb37
    PUSH EBP                            ; 0056e9ae
        ;   Label: LAB_0056e9ae
    LEA EAX,[EBP + 0x178]               ; 0056e9af
    PUSH EAX                            ; 0056e9b5
    LEA EAX,[ESP + 0x208]               ; 0056e9b6
    PUSH EAX                            ; 0056e9bd
    MOV dword ptr [EBP + 0x178],0x0     ; 0056e9be
    CALL sound_sndmain.cpp_FUN_0056db10 ; 0056e9c8
        ;   XREF to: 0056db10 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0056db10()
    ADD ESP,0xc                         ; 0056e9cd
    TEST EAX,EAX                        ; 0056e9d0
    JZ 0x0056eb67                       ; 0056e9d2
        ;   XREF to: 0056eb67 (CONDITIONAL_JUMP)  ; LAB_0056eb67
    PUSH EBP                            ; 0056e9d8
    CALL sound_sndmain.cpp_FUN_0056e130 ; 0056e9d9
        ;   XREF to: 0056e130 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0056e130()
    MOV dword ptr [EBP + 0x150],0x0     ; 0056e9de
    MOV dword ptr [EBP + 0x154],0x0     ; 0056e9e8
    MOV dword ptr [EBP + 0x158],0x0     ; 0056e9f2
    MOV dword ptr [EBP + 0x15c],0x0     ; 0056e9fc
    MOV dword ptr [EBP + 0x160],0xffffffff ; 0056ea06
    MOV EAX,dword ptr [EBP + 0x110]     ; 0056ea10
    ADD ESP,0x4                         ; 0056ea16
    MOV dword ptr [EBP + 0x164],EAX     ; 0056ea19
    PUSH EAX                            ; 0056ea1f
    MOV dword ptr [EBP + 0x16c],EAX     ; 0056ea20
    PUSH EBP                            ; 0056ea26
    MOV dword ptr [EBP + 0x170],EAX     ; 0056ea27
    CALL sound_sndmain.cpp_FUN_00572400 ; 0056ea2d
        ;   XREF to: 00572400 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00572400()
    ADD ESP,0x8                         ; 0056ea32
    PUSH EBP                            ; 0056ea35
    MOV dword ptr [EBP + 0x168],EAX     ; 0056ea36
    CALL sound_sndmain.cpp_FUN_0056feb0 ; 0056ea3c
        ;   XREF to: 0056feb0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_0056feb0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0056ea41
    TEST EAX,EAX                        ; 0056ea44
    JZ 0x0056eb67                       ; 0056ea46
        ;   XREF to: 0056eb67 (CONDITIONAL_JUMP)  ; LAB_0056eb67
    PUSH 0x0                            ; 0056ea4c
    MOV EDX,dword ptr [EBP + 0x178]     ; 0056ea4e
    PUSH EDX                            ; 0056ea54
    LEA EAX,[ESP + 0x208]               ; 0056ea55
    PUSH EAX                            ; 0056ea5c
    CALL unkaddr_0059f520.cpp_FUN_005a0d00 ; 0056ea5d
        ;   XREF to: 005a0d00 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0d00()
    ADD ESP,0xc                         ; 0056ea62
    MOV ECX,dword ptr [EBP + 0x110]     ; 0056ea65
    PUSH ECX                            ; 0056ea6b
    PUSH 0x0                            ; 0056ea6c
    PUSH EBP                            ; 0056ea6e
    CALL sound_sndmain.cpp_FUN_00570160 ; 0056ea6f
        ;   XREF to: 00570160 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00570160()
    MOV ESI,EAX                         ; 0056ea74
    ADD ESP,0xc                         ; 0056ea76
    TEST EAX,EAX                        ; 0056ea79
    JNZ 0x0056eb6d                      ; 0056ea7b
        ;   XREF to: 0056eb6d (CONDITIONAL_JUMP)  ; LAB_0056eb6d
    MOV ESI,dword ptr [ESP + 0x240]     ; 0056ea81
    PUSH ESI                            ; 0056ea88
    PUSH 0x5f2fd8                       ; 0056ea89 | = "Failed to lock sample %s\n"
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0056ea8e
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
        ;   Label: LAB_0056ea8e
    ADD ESP,0x8                         ; 0056ea93
    PUSH 0x0                            ; 0056ea96
    LEA EAX,[ESP + 0x204]               ; 0056ea98
        ;   Label: LAB_0056ea98
    PUSH EAX                            ; 0056ea9f
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 0056eaa0
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056eaa5
        ;   Label: LAB_0056eaa5
    PUSH 0x2c5fd50                      ; 0056eaa8
        ;   Label: LAB_0056eaa8
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_0052b100 ; 0056eaad
        ;   XREF to: 0052b100 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_0052b100(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0056eab2
    PUSH EBP                            ; 0056eab5
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 ; 0056eab6
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0056eabb
    XOR EAX,EAX                         ; 0056eabe
    MOV EBX,dword ptr [0x02c78ff0]      ; 0056eac0 | DAT_02c78ff0
        ;   Label: LAB_0056eac0
    ADD ESP,0x22c                       ; 0056eac6
    POP EBP                             ; 0056eacc
    POP EDI                             ; 0056eacd
    POP ESI                             ; 0056eace
    POP EBX                             ; 0056eacf
    RET                                 ; 0056ead0
    INC ESI                             ; 0056ead1
        ;   Label: LAB_0056ead1
    ADD EBP,0x1b0                       ; 0056ead2
    CMP ESI,0x40                        ; 0056ead8
    JL 0x0056e84e                       ; 0056eadb
        ;   XREF to: 0056e84e (CONDITIONAL_JUMP)  ; LAB_0056e84e
    MOV EBX,dword ptr [0x02c78ff0]      ; 0056eae1 | DAT_02c78ff0
    XOR EAX,EAX                         ; 0056eae7
    JMP 0x0056e868                      ; 0056eae9
        ;   XREF to: 0056e868 (UNCONDITIONAL_JUMP)  ; LAB_0056e868
    MOV dword ptr [0x02c78ff0],EBX      ; 0056eaee | DAT_02c78ff0
        ;   Label: LAB_0056eaee
    MOV EBX,dword ptr [0x02c78ff0]      ; 0056eaf4 | DAT_02c78ff0
    ADD ESP,0x22c                       ; 0056eafa
    POP EBP                             ; 0056eb00
    POP EDI                             ; 0056eb01
    POP ESI                             ; 0056eb02
    POP EBX                             ; 0056eb03
    RET                                 ; 0056eb04
    MOV EBP,dword ptr [EAX + 0x2c79148] ; 0056eb05 | g_SfxSamples[1].field340_0x154
        ;   Label: LAB_0056eb05
    CMP EDX,EBP                         ; 0056eb0b
    JNZ 0x0056e890                      ; 0056eb0d
        ;   XREF to: 0056e890 (CONDITIONAL_JUMP)  ; LAB_0056e890
    MOV EDX,dword ptr [EAX + 0x2c79150] ; 0056eb13 | g_SfxSamples[1].field348_0x15c
    CMP EBP,EDX                         ; 0056eb19
    JNZ 0x0056e890                      ; 0056eb1b
        ;   XREF to: 0056e890 (CONDITIONAL_JUMP)  ; LAB_0056e890
    CMP EDX,dword ptr [EAX + 0x2c791a0] ; 0056eb21 | g_SfxSamples[1].field428_0x1ac
    JNZ 0x0056e890                      ; 0056eb27
        ;   XREF to: 0056e890 (CONDITIONAL_JUMP)  ; LAB_0056e890
    ADD EAX,0x2c78ff4                   ; 0056eb2d
    JMP 0x0056e898                      ; 0056eb32
        ;   XREF to: 0056e898 (UNCONDITIONAL_JUMP)  ; LAB_0056e898
    MOV EDI,dword ptr [ESP + 0x240]     ; 0056eb37
        ;   Label: LAB_0056eb37
    PUSH EDI                            ; 0056eb3e
    MOV ECX,0x5f2fb5                    ; 0056eb3f | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x36b                       ; 0056eb44
    PUSH 0x5f2fca                       ; 0056eb49 | = "Can't open %s"
    MOV dword ptr [0x01d1d400],ECX      ; 0056eb4e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0056eb54 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056eb5a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0056eb5f
    JMP 0x0056e9ae                      ; 0056eb62
        ;   XREF to: 0056e9ae (UNCONDITIONAL_JUMP)  ; LAB_0056e9ae
    PUSH EAX                            ; 0056eb67
        ;   Label: LAB_0056eb67
    JMP 0x0056ea98                      ; 0056eb68
        ;   XREF to: 0056ea98 (UNCONDITIONAL_JUMP)  ; LAB_0056ea98
    MOV EDI,dword ptr [EBP + 0x110]     ; 0056eb6d
        ;   Label: LAB_0056eb6d
    PUSH EDI                            ; 0056eb73
    PUSH EBP                            ; 0056eb74
    CALL sound_sndmain.cpp_FUN_00572400 ; 0056eb75
        ;   XREF to: 00572400 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00572400()
    ADD ESP,0x8                         ; 0056eb7a
    PUSH EAX                            ; 0056eb7d
    PUSH ESI                            ; 0056eb7e
    MOV EDI,EAX                         ; 0056eb7f
    LEA EAX,[ESP + 0x208]               ; 0056eb81
    PUSH EAX                            ; 0056eb88
    CALL unkaddr_0059f520.cpp_FUN_005a0c10 ; 0056eb89
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0c10()
    ADD ESP,0xc                         ; 0056eb8e
    CMP EAX,EDI                         ; 0056eb91
    JNZ 0x0056ec23                      ; 0056eb93
        ;   XREF to: 0056ec23 (CONDITIONAL_JUMP)  ; LAB_0056ec23
    LEA EAX,[ESP + 0x200]               ; 0056eb99
    PUSH EAX                            ; 0056eba0
    CALL unkaddr_0059f520.cpp_FUN_005a0dc0 ; 0056eba1
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0dc0()
    MOV EAX,dword ptr [EBP + 0x104]     ; 0056eba6
    ADD ESP,0x4                         ; 0056ebac
    CMP EAX,0x10                        ; 0056ebaf
    JNZ 0x0056ebd0                      ; 0056ebb2
        ;   XREF to: 0056ebd0 (CONDITIONAL_JUMP)  ; LAB_0056ebd0
    MOV EDX,dword ptr [EBP + 0x110]     ; 0056ebb4
    XOR EAX,EAX                         ; 0056ebba
    TEST EDX,EDX                        ; 0056ebbc
    JLE 0x0056ebd0                      ; 0056ebbe
        ;   XREF to: 0056ebd0 (CONDITIONAL_JUMP)  ; LAB_0056ebd0
    INC EAX                             ; 0056ebc0
        ;   Label: LAB_0056ebc0
    CMP EAX,dword ptr [EBP + 0x110]     ; 0056ebc1
    JL 0x0056ebc0                       ; 0056ebc7
        ;   XREF to: 0056ebc0 (CONDITIONAL_JUMP)  ; LAB_0056ebc0
    LEA EAX,[EAX]                       ; 0056ebc9
    NOP                                 ; 0056ebcf
    PUSH EBP                            ; 0056ebd0
        ;   Label: LAB_0056ebd0
    CALL sound_sndmain.cpp_FUN_00570260 ; 0056ebd1
        ;   XREF to: 00570260 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00570260(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0056ebd6
    PUSH 0x0                            ; 0056ebd9
    LEA EAX,[ESP + 0x204]               ; 0056ebdb
    PUSH EAX                            ; 0056ebe2
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 0056ebe3
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056ebe8
        ;   Label: LAB_0056ebe8
    MOV EAX,dword ptr [ESP + 0x240]     ; 0056ebeb
        ;   Label: LAB_0056ebeb
    PUSH EAX                            ; 0056ebf2
    PUSH 0x5f30c4                       ; 0056ebf3 | = "SOUND: Loaded sample %s\n"
    LEA EAX,[ESP + 0x8]                 ; 0056ebf8
    PUSH EAX                            ; 0056ebfc
    CALL crt_unknown.c_FUN_005bfb40     ; 0056ebfd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 0056ec02
    MOV EAX,ESP                         ; 0056ec05
    PUSH EAX                            ; 0056ec07
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0056ec08
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0056ec0d
    MOV EAX,EBP                         ; 0056ec10
    MOV EBX,dword ptr [0x02c78ff0]      ; 0056ec12 | DAT_02c78ff0
    ADD ESP,0x22c                       ; 0056ec18
    POP EBP                             ; 0056ec1e
    POP EDI                             ; 0056ec1f
    POP ESI                             ; 0056ec20
    POP EBX                             ; 0056ec21
    RET                                 ; 0056ec22
    MOV ECX,dword ptr [ESP + 0x240]     ; 0056ec23
        ;   Label: LAB_0056ec23
    PUSH ECX                            ; 0056ec2a
    PUSH 0x5f2ff2                       ; 0056ec2b | = "Error reading file data for %s\n"
    JMP 0x0056ea8e                      ; 0056ec30
        ;   XREF to: 0056ea8e (UNCONDITIONAL_JUMP)  ; LAB_0056ea8e
    PUSH 0x5f3012                       ; 0056ec35 | DAT_005f3012
        ;   Label: LAB_0056ec35
    LEA EAX,[ESP + 0x4]                 ; 0056ec3a
    PUSH EAX                            ; 0056ec3e
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0056ec3f
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056ec44
    TEST EAX,EAX                        ; 0056ec47
    JNZ 0x0056eda8                      ; 0056ec49
        ;   XREF to: 0056eda8 (CONDITIONAL_JUMP)  ; LAB_0056eda8
    MOV EAX,dword ptr [ESP + 0x240]     ; 0056ec4f
    PUSH EAX                            ; 0056ec56
    PUSH 0x2c5fd50                      ; 0056ec57
    CALL sound_mp3.cpp_FUN_0052aea0     ; 0056ec5c
        ;   XREF to: 0052aea0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_FUN_0052aea0(CMP3Decoder * this_ptr, char * filename)
    MOV dword ptr [EBP + 0x104],0x10    ; 0056ec61
    MOV EAX,[0x02c5fe54]                ; 0056ec6b | g_CMP3DecoderInstance.field260_0x104
    MOV dword ptr [EBP + 0x108],EAX     ; 0056ec70
    ADD ESP,0x8                         ; 0056ec76
    MOV EAX,[0x02c5fe50]                ; 0056ec79 | g_CMP3DecoderInstance.field256_0x100
    MOV dword ptr [EBP + 0x110],0xffffffff ; 0056ec7e
    PUSH EBP                            ; 0056ec88
    MOV dword ptr [EBP + 0x10c],EAX     ; 0056ec89
    CALL sound_sndmain.cpp_FUN_0056e130 ; 0056ec8f
        ;   XREF to: 0056e130 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0056e130()
    MOV EDX,dword ptr [EBP + 0x110]     ; 0056ec94
    ADD ESP,0x4                         ; 0056ec9a
    TEST EDX,EDX                        ; 0056ec9d
    JGE 0x0056eccc                      ; 0056ec9f
        ;   XREF to: 0056eccc (CONDITIONAL_JUMP)  ; LAB_0056eccc
    MOV EDI,dword ptr [ESP + 0x240]     ; 0056eca1
    PUSH EDI                            ; 0056eca8
    MOV ECX,0x5f3016                    ; 0056eca9 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x3dd                       ; 0056ecae
    PUSH 0x5f302b                       ; 0056ecb3 | = "Don't know length of sample %s"
    MOV dword ptr [0x01d1d400],ECX      ; 0056ecb8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0056ecbe | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056ecc4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0056ecc9
    MOV dword ptr [EBP + 0x150],0x0     ; 0056eccc
        ;   Label: LAB_0056eccc
    MOV dword ptr [EBP + 0x154],0x0     ; 0056ecd6
    MOV dword ptr [EBP + 0x158],0x0     ; 0056ece0
    MOV dword ptr [EBP + 0x15c],0x0     ; 0056ecea
    MOV dword ptr [EBP + 0x160],0xffffffff ; 0056ecf4
    MOV EAX,dword ptr [EBP + 0x110]     ; 0056ecfe
    MOV dword ptr [EBP + 0x164],EAX     ; 0056ed04
    PUSH EAX                            ; 0056ed0a
    MOV dword ptr [EBP + 0x16c],EAX     ; 0056ed0b
    PUSH EBP                            ; 0056ed11
    MOV dword ptr [EBP + 0x170],EAX     ; 0056ed12
    CALL sound_sndmain.cpp_FUN_00572400 ; 0056ed18
        ;   XREF to: 00572400 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00572400()
    ADD ESP,0x8                         ; 0056ed1d
    PUSH EBP                            ; 0056ed20
    MOV dword ptr [EBP + 0x168],EAX     ; 0056ed21
    CALL sound_sndmain.cpp_FUN_0056feb0 ; 0056ed27
        ;   XREF to: 0056feb0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_0056feb0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0056ed2c
    TEST EAX,EAX                        ; 0056ed2f
    JZ 0x0056eaa8                       ; 0056ed31
        ;   XREF to: 0056eaa8 (CONDITIONAL_JUMP)  ; LAB_0056eaa8
    MOV EDX,dword ptr [EBP + 0x110]     ; 0056ed37
    PUSH EDX                            ; 0056ed3d
    PUSH 0x0                            ; 0056ed3e
    PUSH EBP                            ; 0056ed40
    CALL sound_sndmain.cpp_FUN_00570160 ; 0056ed41
        ;   XREF to: 00570160 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00570160()
    ADD ESP,0xc                         ; 0056ed46
    TEST EAX,EAX                        ; 0056ed49
    JZ 0x0056ed83                       ; 0056ed4b
        ;   XREF to: 0056ed83 (CONDITIONAL_JUMP)  ; LAB_0056ed83
    MOV ECX,dword ptr [EBP + 0x110]     ; 0056ed4d
    PUSH ECX                            ; 0056ed53
    PUSH EAX                            ; 0056ed54
    PUSH 0x2c5fd50                      ; 0056ed55
    CALL sound_mp3.cpp_CMP3Decoder_read_FUN_0052b170 ; 0056ed5a
        ;   XREF to: 0052b170 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_read_FUN_0052b170(CMP3Decoder * this_ptr, short * output_buffer, int samples_requested)
    MOV ESI,dword ptr [EBP + 0x110]     ; 0056ed5f
    ADD ESP,0xc                         ; 0056ed65
    CMP EAX,ESI                         ; 0056ed68
    JZ 0x0056ed9a                       ; 0056ed6a
        ;   XREF to: 0056ed9a (CONDITIONAL_JUMP)  ; LAB_0056ed9a
    MOV EDI,dword ptr [ESP + 0x240]     ; 0056ed6c
    PUSH EDI                            ; 0056ed73
    PUSH 0x5f3064                       ; 0056ed74 | = "Error decoding file data from %s\n"
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0056ed79
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    JMP 0x0056eaa5                      ; 0056ed7e
        ;   XREF to: 0056eaa5 (UNCONDITIONAL_JUMP)  ; LAB_0056eaa5
    MOV EAX,dword ptr [ESP + 0x240]     ; 0056ed83
        ;   Label: LAB_0056ed83
    PUSH EAX                            ; 0056ed8a
    PUSH 0x5f304a                       ; 0056ed8b | = "Failed to lock sample %s\n"
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0056ed90
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    JMP 0x0056eaa5                      ; 0056ed95
        ;   XREF to: 0056eaa5 (UNCONDITIONAL_JUMP)  ; LAB_0056eaa5
    PUSH EBP                            ; 0056ed9a
        ;   Label: LAB_0056ed9a
    CALL sound_sndmain.cpp_FUN_00570260 ; 0056ed9b
        ;   XREF to: 00570260 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00570260(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0056eda0
    JMP 0x0056ebeb                      ; 0056eda3
        ;   XREF to: 0056ebeb (UNCONDITIONAL_JUMP)  ; LAB_0056ebeb
    MOV EDI,dword ptr [ESP + 0x240]     ; 0056eda8
        ;   Label: LAB_0056eda8
    PUSH EDI                            ; 0056edaf
    MOV ECX,0x5f3086                    ; 0056edb0 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x40d                       ; 0056edb5
    PUSH 0x5f309b                       ; 0056edba | = "Unknown sample file format extension: %s"
    MOV dword ptr [0x01d1d400],ECX      ; 0056edbf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0056edc5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056edcb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    JMP 0x0056ebe8                      ; 0056edd0
        ;   XREF to: 0056ebe8 (UNCONDITIONAL_JUMP)  ; LAB_0056ebe8

