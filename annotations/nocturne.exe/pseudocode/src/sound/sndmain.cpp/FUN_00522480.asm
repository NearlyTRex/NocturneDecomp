; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * sound_sndmain_cpp_FUN_00522480(char *param_1)
;
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined        Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_sndmain.cpp_FUN_005279b0 at 005279bd
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 00526923
;
; Referenced Globals:
;   TerminatedCString s_sound_00592656
;   TerminatedCString s_wav_0059265c
;   TerminatedCString s_rb_00592660
;   TerminatedCString s_sound_00592663
;   TerminatedCString s_sound_sndmain_cpp_00592669
;   TerminatedCString s_Can_t_open_s_0059267e
;   TerminatedCString s_Failed_to_lock_sample_s_0059268c
;   TerminatedCString s_Error_reading_file_data_005926a6
;   TerminatedCString s_mp3_005926c6
;   TerminatedCString s_sound_sndmain_cpp_005926ca
;   TerminatedCString s_Don_t_know_length_of_sam_005926df
;   TerminatedCString s_Failed_to_lock_sample_s_005926fe
;   TerminatedCString s_Error_decoding_file_data_00592718
;   TerminatedCString s_sound_sndmain_cpp_0059273a
;   TerminatedCString s_Unknown_sample_file_form_0059274f
;   ... and 9 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fseek_FUN_0056582c
;   crt_stdio.c_ftell_FUN_00566e70
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_memmove_FUN_00566170
;   crt_string.c_splitpath_FUN_00566498
;   crt_unknown.c_FUN_00564bb0
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90
;   sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0
;   sound_mp3.cpp_CMP3Decoder_read_FUN_004e82d0
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522480
        ;   Label: sound_sndmain.cpp_FUN_00522480
    PUSH ESI                            ; 00522481
    PUSH EDI                            ; 00522482
    PUSH EBP                            ; 00522483
    SUB ESP,0x104                       ; 00522484
    MOV EBX,dword ptr [0x02dc1ed8]      ; 0052248a | DAT_02dc1ed8
    MOV ESI,0x2dc1edc                   ; 00522490
    XOR EDI,EDI                         ; 00522495
    MOV EDX,dword ptr [ESP + 0x118]     ; 00522497
        ;   Label: LAB_00522497
    PUSH EDX                            ; 0052249e
    PUSH ESI                            ; 0052249f
    CALL crt_string.c__stricmp_FUN_00564520 ; 005224a0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 005224a5
    TEST EAX,EAX                        ; 005224a8
    JZ 0x0052273b                       ; 005224aa
        ;   XREF to: 0052273b (CONDITIONAL_JUMP)  ; LAB_0052273b
    INC EDI                             ; 005224b0
    ADD ESI,0x168                       ; 005224b1
    CMP EDI,0x40                        ; 005224b7
    JL 0x00522497                       ; 005224ba
        ;   XREF to: 00522497 (CONDITIONAL_JUMP)  ; LAB_00522497
    MOV EBX,dword ptr [0x02dc1ed8]      ; 005224bc | DAT_02dc1ed8
    XOR ESI,ESI                         ; 005224c2
    XOR ECX,ECX                         ; 005224c4
    INC EBX                             ; 005224c6
        ;   Label: LAB_005224c6
    CMP EBX,0x40                        ; 005224c7
    JL 0x005224ce                       ; 005224ca
        ;   XREF to: 005224ce (CONDITIONAL_JUMP)  ; LAB_005224ce
    MOV EBX,ECX                         ; 005224cc
    IMUL EAX,EBX,0x168                  ; 005224ce
        ;   Label: LAB_005224ce
    MOV EDI,dword ptr [EAX + 0x2dc2004] ; 005224d4 | DAT_02dc216c
    CMP ECX,EDI                         ; 005224da
    JZ 0x00522754                       ; 005224dc
        ;   XREF to: 00522754 (CONDITIONAL_JUMP)  ; LAB_00522754
    INC ESI                             ; 005224e2
        ;   Label: LAB_005224e2
    CMP ESI,0x40                        ; 005224e3
    JL 0x005224c6                       ; 005224e6
        ;   XREF to: 005224c6 (CONDITIONAL_JUMP)  ; LAB_005224c6
    XOR EAX,EAX                         ; 005224e8
    MOV EBP,EAX                         ; 005224ea
        ;   Label: LAB_005224ea
    MOV dword ptr [0x02dc1ed8],EBX      ; 005224ec | DAT_02dc1ed8
    JZ 0x0052272a                       ; 005224f2
        ;   XREF to: 0052272a (CONDITIONAL_JUMP)  ; LAB_0052272a
    PUSH EAX                            ; 005224f8
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 ; 005224f9
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60()
    MOV AH,byte ptr [0x02db1110]        ; 005224fe | DAT_02db1110
    ADD ESP,0x4                         ; 00522504
    TEST AH,0x1                         ; 00522507
    JNZ 0x00522531                      ; 0052250a
        ;   XREF to: 00522531 (CONDITIONAL_JUMP)  ; LAB_00522531
    MOV DL,AH                           ; 0052250c
    OR DL,0x1                           ; 0052250e
    PUSH 0x2da8ae0                      ; 00522511
    MOV byte ptr [0x02db1110],DL        ; 00522516 | DAT_02db1110
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90 ; 0052251c
        ;   XREF to: 004e7d90 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90()
    ADD ESP,0x4                         ; 00522521
    PUSH 0x5bea30                       ; 00522524 | DAT_005bea30
    CALL crt_unknown.c_FUN_00564bb0     ; 00522529
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 0052252e
    MOV EDX,dword ptr [ESP + 0x118]     ; 00522531
        ;   Label: LAB_00522531
    PUSH EDX                            ; 00522538
    XOR EAX,EAX                         ; 00522539
    PUSH 0x592656                       ; 0052253b | = "sound"
    MOV dword ptr [ESP + 0x108],EAX     ; 00522540
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 00522547
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFileSize_FUN_004568c0()
    ADD ESP,0x8                         ; 0052254c
    TEST EAX,EAX                        ; 0052254f
    JLE 0x005226f8                      ; 00522551
        ;   XREF to: 005226f8 (CONDITIONAL_JUMP)  ; LAB_005226f8
    MOV ESI,dword ptr [ESP + 0x118]     ; 00522557
    MOV EDI,EBP                         ; 0052255e
    PUSH EDI                            ; 00522560
    MOV AL,byte ptr [ESI]               ; 00522561
        ;   Label: LAB_00522561
    MOV byte ptr [EDI],AL               ; 00522563
    CMP AL,0x0                          ; 00522565
    JZ 0x00522579                       ; 00522567
        ;   XREF to: 00522579 (CONDITIONAL_JUMP)  ; LAB_00522579
    MOV AL,byte ptr [ESI + 0x1]         ; 00522569
    ADD ESI,0x2                         ; 0052256c
    MOV byte ptr [EDI + 0x1],AL         ; 0052256f
    ADD EDI,0x2                         ; 00522572
    CMP AL,0x0                          ; 00522575
    JNZ 0x00522561                      ; 00522577
        ;   XREF to: 00522561 (CONDITIONAL_JUMP)  ; LAB_00522561
    POP EDI                             ; 00522579
        ;   Label: LAB_00522579
    MOV EAX,ESP                         ; 0052257a
    PUSH EAX                            ; 0052257c
    PUSH 0x0                            ; 0052257d
    PUSH 0x0                            ; 0052257f
    PUSH 0x0                            ; 00522581
    MOV ECX,dword ptr [ESP + 0x128]     ; 00522583
    PUSH ECX                            ; 0052258a
    CALL crt_string.c_splitpath_FUN_00566498 ; 0052258b
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 00522590
    CMP byte ptr [ESP],0x2e             ; 00522593
    JNZ 0x005225b8                      ; 00522597
        ;   XREF to: 005225b8 (CONDITIONAL_JUMP)  ; LAB_005225b8
    MOV EDI,ESP                         ; 00522599
    SUB ECX,ECX                         ; 0052259b
    DEC ECX                             ; 0052259d
    XOR EAX,EAX                         ; 0052259e
    SCASB.REPNE ES:EDI                  ; 005225a0
    NOT ECX                             ; 005225a2
    DEC ECX                             ; 005225a4
    PUSH ECX                            ; 005225a5
    LEA EAX,[ESP + 0x5]                 ; 005225a6
    PUSH EAX                            ; 005225aa
    LEA EAX,[ESP + 0x8]                 ; 005225ab
    PUSH EAX                            ; 005225af
    CALL crt_string.c_memmove_FUN_00566170 ; 005225b0
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 005225b5
    PUSH 0x59265c                       ; 005225b8 | = "wav"
        ;   Label: LAB_005225b8
    LEA EAX,[ESP + 0x4]                 ; 005225bd
    PUSH EAX                            ; 005225c1
    CALL crt_string.c__stricmp_FUN_00564520 ; 005225c2
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 005225c7
    TEST EAX,EAX                        ; 005225ca
    JNZ 0x005227e7                      ; 005225cc
        ;   XREF to: 005227e7 (CONDITIONAL_JUMP)  ; LAB_005227e7
    PUSH 0x592660                       ; 005225d2 | = "rb"
    MOV EDX,dword ptr [ESP + 0x11c]     ; 005225d7
    PUSH EDX                            ; 005225de
    PUSH 0x592663                       ; 005225df | = "sound"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 005225e4
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 005225e9
    MOV dword ptr [ESP + 0x100],EAX     ; 005225ec
    TEST EAX,EAX                        ; 005225f3
    JNZ 0x00522622                      ; 005225f5
        ;   XREF to: 00522622 (CONDITIONAL_JUMP)  ; LAB_00522622
    MOV EDI,dword ptr [ESP + 0x118]     ; 005225f7
    PUSH EDI                            ; 005225fe
    MOV ECX,0x592669                    ; 005225ff | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x300                       ; 00522604
    PUSH 0x59267e                       ; 00522609 | = "Can't open %s"
    MOV dword ptr [0x01cc4800],ECX      ; 0052260e | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00522614 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0052261a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0052261f
    MOV EAX,dword ptr [ESP + 0x100]     ; 00522622
        ;   Label: LAB_00522622
    PUSH EAX                            ; 00522629
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 0052262a
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_00566e70()
    ADD ESP,0x4                         ; 0052262f
    PUSH EBP                            ; 00522632
    MOV dword ptr [EBP + 0x148],EAX     ; 00522633
    LEA EAX,[EBP + 0x148]               ; 00522639
    PUSH EAX                            ; 0052263f
    MOV EDX,dword ptr [ESP + 0x108]     ; 00522640
    PUSH EDX                            ; 00522647
    CALL sound_sndmain.cpp_parseWavFile_FUN_00521830 ; 00522648
        ;   XREF to: 00521830 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_parseWavFile_FUN_00521830()
    ADD ESP,0xc                         ; 0052264d
    TEST EAX,EAX                        ; 00522650
    JZ 0x005226f8                       ; 00522652
        ;   XREF to: 005226f8 (CONDITIONAL_JUMP)  ; LAB_005226f8
    PUSH EBP                            ; 00522658
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10 ; 00522659
        ;   XREF to: 00521e10 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10()
    MOV dword ptr [EBP + 0x128],0x0     ; 0052265e
    MOV dword ptr [EBP + 0x12c],0x0     ; 00522668
    MOV dword ptr [EBP + 0x130],0x0     ; 00522672
    MOV dword ptr [EBP + 0x134],0xffffffff ; 0052267c
    MOV EAX,dword ptr [EBP + 0x110]     ; 00522686
    MOV dword ptr [EBP + 0x138],EAX     ; 0052268c
    ADD ESP,0x4                         ; 00522692
    MOV dword ptr [EBP + 0x13c],EAX     ; 00522695
    PUSH EBP                            ; 0052269b
    MOV dword ptr [EBP + 0x140],EAX     ; 0052269c
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910 ; 005226a2
        ;   XREF to: 00523910 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910()
    ADD ESP,0x4                         ; 005226a7
    TEST EAX,EAX                        ; 005226aa
    JZ 0x005226f8                       ; 005226ac
        ;   XREF to: 005226f8 (CONDITIONAL_JUMP)  ; LAB_005226f8
    PUSH 0x0                            ; 005226ae
    MOV ECX,dword ptr [EBP + 0x148]     ; 005226b0
    PUSH ECX                            ; 005226b6
    MOV ESI,dword ptr [ESP + 0x108]     ; 005226b7
    PUSH ESI                            ; 005226be
    CALL crt_stdio.c_fseek_FUN_0056582c ; 005226bf
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_0056582c()
    ADD ESP,0xc                         ; 005226c4
    MOV EDI,dword ptr [EBP + 0x110]     ; 005226c7
    PUSH EDI                            ; 005226cd
    PUSH 0x0                            ; 005226ce
    PUSH EBP                            ; 005226d0
    CALL sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0 ; 005226d1
        ;   XREF to: 00523ba0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0()
    MOV ESI,EAX                         ; 005226d6
    ADD ESP,0xc                         ; 005226d8
    TEST EAX,EAX                        ; 005226db
    JNZ 0x0052276a                      ; 005226dd
        ;   XREF to: 0052276a (CONDITIONAL_JUMP)  ; LAB_0052276a
    MOV EAX,dword ptr [ESP + 0x118]     ; 005226e3
    PUSH EAX                            ; 005226ea
    PUSH 0x59268c                       ; 005226eb | = "Failed to lock sample %s\n"
    CALL sound_sndmain.cpp_FUN_00529980 ; 005226f0
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
        ;   Label: LAB_005226f0
    ADD ESP,0x8                         ; 005226f5
    PUSH 0x2da8ae0                      ; 005226f8
        ;   Label: LAB_005226f8
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260 ; 005226fd
        ;   XREF to: 004e8260 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260()
    ADD ESP,0x4                         ; 00522702
    PUSH EBP                            ; 00522705
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 ; 00522706
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60()
    ADD ESP,0x4                         ; 0052270b
    MOV EDX,dword ptr [ESP + 0x100]     ; 0052270e
    TEST EDX,EDX                        ; 00522715
    JZ 0x00522722                       ; 00522717
        ;   XREF to: 00522722 (CONDITIONAL_JUMP)  ; LAB_00522722
    PUSH EDX                            ; 00522719
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0052271a
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 0052271f
    MOV EBX,dword ptr [0x02dc1ed8]      ; 00522722 | DAT_02dc1ed8
        ;   Label: LAB_00522722
    XOR EAX,EAX                         ; 00522728
    MOV dword ptr [0x02dc1ed8],EBX      ; 0052272a | DAT_02dc1ed8
        ;   Label: LAB_0052272a
    ADD ESP,0x104                       ; 00522730
    POP EBP                             ; 00522736
    POP EDI                             ; 00522737
    POP ESI                             ; 00522738
    POP EBX                             ; 00522739
    RET                                 ; 0052273a
    MOV EBX,dword ptr [0x02dc1ed8]      ; 0052273b | DAT_02dc1ed8
        ;   Label: LAB_0052273b
    MOV EAX,ESI                         ; 00522741
    MOV dword ptr [0x02dc1ed8],EBX      ; 00522743 | DAT_02dc1ed8
    ADD ESP,0x104                       ; 00522749
    POP EBP                             ; 0052274f
    POP EDI                             ; 00522750
    POP ESI                             ; 00522751
    POP EBX                             ; 00522752
    RET                                 ; 00522753
    CMP EDI,dword ptr [EAX + 0x2dc2008] ; 00522754 | DAT_02dc2170
        ;   Label: LAB_00522754
    JNZ 0x005224e2                      ; 0052275a
        ;   XREF to: 005224e2 (CONDITIONAL_JUMP)  ; LAB_005224e2
    ADD EAX,0x2dc1edc                   ; 00522760
    JMP 0x005224ea                      ; 00522765
        ;   XREF to: 005224ea (UNCONDITIONAL_JUMP)  ; LAB_005224ea
    MOV EAX,dword ptr [ESP + 0x100]     ; 0052276a
        ;   Label: LAB_0052276a
    PUSH EAX                            ; 00522771
    MOV EDX,dword ptr [EBP + 0x110]     ; 00522772
    PUSH EDX                            ; 00522778
    PUSH EBP                            ; 00522779
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 0052277a
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40()
    ADD ESP,0x4                         ; 0052277f
    PUSH EAX                            ; 00522782
    PUSH ESI                            ; 00522783
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00522784
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    MOV ECX,dword ptr [EBP + 0x110]     ; 00522789
    ADD ESP,0x10                        ; 0052278f
    CMP EAX,ECX                         ; 00522792
    JNZ 0x005227d5                      ; 00522794
        ;   XREF to: 005227d5 (CONDITIONAL_JUMP)  ; LAB_005227d5
    MOV EAX,dword ptr [ESP + 0x100]     ; 00522796
    TEST byte ptr [EAX + 0xc],0x20      ; 0052279d
    JNZ 0x005227d5                      ; 005227a1
        ;   XREF to: 005227d5 (CONDITIONAL_JUMP)  ; LAB_005227d5
    PUSH EBP                            ; 005227a3
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0 ; 005227a4
        ;   XREF to: 00523cb0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0()
    ADD ESP,0x4                         ; 005227a9
    MOV ESI,dword ptr [ESP + 0x100]     ; 005227ac
    PUSH ESI                            ; 005227b3
    CALL crt_stdio.c_fclose_FUN_00563380 ; 005227b4
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 005227b9
        ;   Label: LAB_005227b9
    MOV EBX,dword ptr [0x02dc1ed8]      ; 005227bc | DAT_02dc1ed8
        ;   Label: LAB_005227bc
    MOV EAX,EBP                         ; 005227c2
    MOV dword ptr [0x02dc1ed8],EBX      ; 005227c4 | DAT_02dc1ed8
    ADD ESP,0x104                       ; 005227ca
    POP EBP                             ; 005227d0
    POP EDI                             ; 005227d1
    POP ESI                             ; 005227d2
    POP EBX                             ; 005227d3
    RET                                 ; 005227d4
    MOV EDI,dword ptr [ESP + 0x118]     ; 005227d5
        ;   Label: LAB_005227d5
    PUSH EDI                            ; 005227dc
    PUSH 0x5926a6                       ; 005227dd | = "Error reading file data for %s\n"
    JMP 0x005226f0                      ; 005227e2
        ;   XREF to: 005226f0 (UNCONDITIONAL_JUMP)  ; LAB_005226f0
    PUSH 0x5926c6                       ; 005227e7 | = "mp3"
        ;   Label: LAB_005227e7
    LEA EAX,[ESP + 0x4]                 ; 005227ec
    PUSH EAX                            ; 005227f0
    CALL crt_string.c__stricmp_FUN_00564520 ; 005227f1
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 005227f6
    TEST EAX,EAX                        ; 005227f9
    JNZ 0x00522933                      ; 005227fb
        ;   XREF to: 00522933 (CONDITIONAL_JUMP)  ; LAB_00522933
    MOV EDX,dword ptr [ESP + 0x118]     ; 00522801
    PUSH EDX                            ; 00522808
    PUSH 0x2da8ae0                      ; 00522809
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0 ; 0052280e
        ;   XREF to: 004e7df0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0()
    MOV dword ptr [EBP + 0x104],0x10    ; 00522813
    MOV EAX,[0x02da8be4]                ; 0052281d | DAT_02da8be4
    MOV dword ptr [EBP + 0x108],EAX     ; 00522822
    ADD ESP,0x8                         ; 00522828
    MOV EAX,[0x02da8be0]                ; 0052282b | DAT_02da8be0
    MOV dword ptr [EBP + 0x110],0xffffffff ; 00522830
    PUSH EBP                            ; 0052283a
    MOV dword ptr [EBP + 0x10c],EAX     ; 0052283b
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10 ; 00522841
        ;   XREF to: 00521e10 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10()
    MOV ECX,dword ptr [EBP + 0x110]     ; 00522846
    ADD ESP,0x4                         ; 0052284c
    TEST ECX,ECX                        ; 0052284f
    JGE 0x0052287e                      ; 00522851
        ;   XREF to: 0052287e (CONDITIONAL_JUMP)  ; LAB_0052287e
    MOV EAX,dword ptr [ESP + 0x118]     ; 00522853
    PUSH EAX                            ; 0052285a
    MOV ESI,0x5926ca                    ; 0052285b | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x34f                       ; 00522860
    PUSH 0x5926df                       ; 00522865 | = "Don't know length of sample %s"
    MOV dword ptr [0x01cc4800],ESI      ; 0052286a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00522870 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00522876
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0052287b
    MOV dword ptr [EBP + 0x128],0x0     ; 0052287e
        ;   Label: LAB_0052287e
    MOV dword ptr [EBP + 0x12c],0x0     ; 00522888
    MOV dword ptr [EBP + 0x130],0x0     ; 00522892
    MOV dword ptr [EBP + 0x134],0xffffffff ; 0052289c
    MOV EAX,dword ptr [EBP + 0x110]     ; 005228a6
    MOV dword ptr [EBP + 0x138],EAX     ; 005228ac
    MOV dword ptr [EBP + 0x13c],EAX     ; 005228b2
    PUSH EBP                            ; 005228b8
    MOV dword ptr [EBP + 0x140],EAX     ; 005228b9
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910 ; 005228bf
        ;   XREF to: 00523910 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910()
    ADD ESP,0x4                         ; 005228c4
    TEST EAX,EAX                        ; 005228c7
    JZ 0x005226f8                       ; 005228c9
        ;   XREF to: 005226f8 (CONDITIONAL_JUMP)  ; LAB_005226f8
    MOV EDX,dword ptr [EBP + 0x110]     ; 005228cf
    PUSH EDX                            ; 005228d5
    PUSH 0x0                            ; 005228d6
    PUSH EBP                            ; 005228d8
    CALL sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0 ; 005228d9
        ;   XREF to: 00523ba0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0()
    ADD ESP,0xc                         ; 005228de
    TEST EAX,EAX                        ; 005228e1
    JZ 0x00522916                       ; 005228e3
        ;   XREF to: 00522916 (CONDITIONAL_JUMP)  ; LAB_00522916
    MOV ECX,dword ptr [EBP + 0x110]     ; 005228e5
    PUSH ECX                            ; 005228eb
    PUSH EAX                            ; 005228ec
    PUSH 0x2da8ae0                      ; 005228ed
    CALL sound_mp3.cpp_CMP3Decoder_read_FUN_004e82d0 ; 005228f2
        ;   XREF to: 004e82d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_read_FUN_004e82d0()
    MOV ESI,dword ptr [EBP + 0x110]     ; 005228f7
    ADD ESP,0xc                         ; 005228fd
    CMP EAX,ESI                         ; 00522900
    JZ 0x00522928                       ; 00522902
        ;   XREF to: 00522928 (CONDITIONAL_JUMP)  ; LAB_00522928
    MOV EDI,dword ptr [ESP + 0x118]     ; 00522904
    PUSH EDI                            ; 0052290b
    PUSH 0x592718                       ; 0052290c | = "Error decoding file data from %s\n"
    JMP 0x005226f0                      ; 00522911
        ;   XREF to: 005226f0 (UNCONDITIONAL_JUMP)  ; LAB_005226f0
    MOV EAX,dword ptr [ESP + 0x118]     ; 00522916
        ;   Label: LAB_00522916
    PUSH EAX                            ; 0052291d
    PUSH 0x5926fe                       ; 0052291e | = "Failed to lock sample %s\n"
    JMP 0x005226f0                      ; 00522923
        ;   XREF to: 005226f0 (UNCONDITIONAL_JUMP)  ; LAB_005226f0
    PUSH EBP                            ; 00522928
        ;   Label: LAB_00522928
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0 ; 00522929
        ;   XREF to: 00523cb0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0()
    JMP 0x005227b9                      ; 0052292e
        ;   XREF to: 005227b9 (UNCONDITIONAL_JUMP)  ; LAB_005227b9
    MOV EAX,dword ptr [ESP + 0x118]     ; 00522933
        ;   Label: LAB_00522933
    PUSH EAX                            ; 0052293a
    MOV ESI,0x59273a                    ; 0052293b | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x37d                       ; 00522940
    PUSH 0x59274f                       ; 00522945 | = "Unknown sample file format extension: %s"
    MOV dword ptr [0x01cc4800],ESI      ; 0052294a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00522950 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00522956
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0052295b
    JMP 0x005227bc                      ; 0052295e
        ;   XREF to: 005227bc (UNCONDITIONAL_JUMP)  ; LAB_005227bc

