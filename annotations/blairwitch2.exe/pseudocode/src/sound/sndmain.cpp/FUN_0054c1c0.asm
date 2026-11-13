; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_FUN_0054c1c0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x238]:1  local_238
; undefined        Stack[-0x237]:1  local_237
; undefined        Stack[-0x38]:1  local_38
;
; XREF[2]:
;   sound_sndmain.cpp_FUN_005506b0 at 00550a0d
;   sound_sndmain.cpp_isSampleLoaded_FUN_005519b0 at 005519bd
;
; Referenced Globals:
;   TerminatedCString s_sound_005e7dab
;   undefined4 DAT_005e7db1
;   TerminatedCString s_sound_005e7db5
;   TerminatedCString s_sound_sndmain_cpp_005e7dbb
;   TerminatedCString s_Can_t_open_s_005e7dd0
;   TerminatedCString s_Failed_to_lock_sample_s_005e7dde
;   TerminatedCString s_Error_reading_file_data_005e7df8
;   undefined4 DAT_005e7e18
;   TerminatedCString s_sound_sndmain_cpp_005e7e1c
;   TerminatedCString s_Don_t_know_length_of_sam_005e7e31
;   TerminatedCString s_Failed_to_lock_sample_s_005e7e50
;   TerminatedCString s_Error_decoding_file_data_005e7e6a
;   TerminatedCString s_sound_sndmain_cpp_005e7e8c
;   TerminatedCString s_Unknown_sample_file_form_005e7ea1
;   TerminatedCString s_SOUND_Loaded_sample_s_005e7eca
;   ... and 11 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   crt_string.c__stricmp_FUN_005b8130
;   crt_string.c_memmove_FUN_005ba1f0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   engine_dosio.cpp_splitPath_FUN_00461070
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_00509c70
;   sound_mp3.cpp_CMP3Decoder_free_FUN_00509f30
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00509cd0
;   sound_mp3.cpp_CMP3Decoder_read_FUN_00509fa0
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0
;   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0
;   sound_sndmain.cpp_FUN_0054b4a0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c1c0
        ;   Label: sound_sndmain.cpp_FUN_0054c1c0
    PUSH ESI                            ; 0054c1c1
    PUSH EDI                            ; 0054c1c2
    PUSH EBP                            ; 0054c1c3
    SUB ESP,0x228                       ; 0054c1c4
    MOV EBX,dword ptr [0x02641920]      ; 0054c1ca | DAT_02641920
    MOV EBP,0x2641924                   ; 0054c1d0
    MOV EDI,dword ptr [ESP + 0x23c]     ; 0054c1d5
    XOR ESI,ESI                         ; 0054c1dc
    PUSH EDI                            ; 0054c1de
        ;   Label: LAB_0054c1de
    PUSH EBP                            ; 0054c1df
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0054c1e0
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054c1e5
    TEST EAX,EAX                        ; 0054c1e8
    JNZ 0x0054c45f                      ; 0054c1ea
        ;   XREF to: 0054c45f (CONDITIONAL_JUMP)  ; LAB_0054c45f
    MOV EBX,dword ptr [0x02641920]      ; 0054c1f0 | DAT_02641920
    MOV EAX,EBP                         ; 0054c1f6
    TEST EAX,EAX                        ; 0054c1f8
        ;   Label: LAB_0054c1f8
    JNZ 0x0054c47c                      ; 0054c1fa
        ;   XREF to: 0054c47c (CONDITIONAL_JUMP)  ; LAB_0054c47c
    XOR ECX,ECX                         ; 0054c200
    XOR ESI,ESI                         ; 0054c202
    INC EBX                             ; 0054c204
        ;   Label: LAB_0054c204
    CMP EBX,0x40                        ; 0054c205
    JL 0x0054c20c                       ; 0054c208
        ;   XREF to: 0054c20c (CONDITIONAL_JUMP)  ; LAB_0054c20c
    MOV EBX,ECX                         ; 0054c20a
    IMUL EAX,EBX,0x1ac                  ; 0054c20c
        ;   Label: LAB_0054c20c
    MOV EDX,dword ptr [EAX + 0x2641a74] ; 0054c212 | g_SfxSamples[1].taken
    CMP ECX,EDX                         ; 0054c218
    JZ 0x0054c493                       ; 0054c21a
        ;   XREF to: 0054c493 (CONDITIONAL_JUMP)  ; LAB_0054c493
    INC ESI                             ; 0054c220
        ;   Label: LAB_0054c220
    CMP ESI,0x40                        ; 0054c221
    JL 0x0054c204                       ; 0054c224
        ;   XREF to: 0054c204 (CONDITIONAL_JUMP)  ; LAB_0054c204
    XOR EAX,EAX                         ; 0054c226
    MOV EBP,EAX                         ; 0054c228
        ;   Label: LAB_0054c228
    MOV dword ptr [0x02641920],EBX      ; 0054c22a | DAT_02641920
    JZ 0x0054c44e                       ; 0054c230
        ;   XREF to: 0054c44e (CONDITIONAL_JUMP)  ; LAB_0054c44e
    PUSH EAX                            ; 0054c236
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 ; 0054c237
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0(CSfxSample * this_ptr)
    MOV AH,byte ptr [0x02630cb0]        ; 0054c23c | DAT_02630cb0
    ADD ESP,0x4                         ; 0054c242
    TEST AH,0x1                         ; 0054c245
    JNZ 0x0054c26f                      ; 0054c248
        ;   XREF to: 0054c26f (CONDITIONAL_JUMP)  ; LAB_0054c26f
    MOV DL,AH                           ; 0054c24a
    OR DL,0x1                           ; 0054c24c
    PUSH 0x2628680                      ; 0054c24f
    MOV byte ptr [0x02630cb0],DL        ; 0054c254 | DAT_02630cb0
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_00509c70 ; 0054c25a
        ;   XREF to: 00509c70 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_00509c70(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0054c25f
    PUSH 0x61bc70                       ; 0054c262 | g_CMP3DecoderDestructorNode1
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0054c267
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0054c26c
    MOV EAX,dword ptr [ESP + 0x23c]     ; 0054c26f
        ;   Label: LAB_0054c26f
    PUSH EAX                            ; 0054c276
    PUSH 0x5e7dab                       ; 0054c277 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 0054c27c
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0054c281
    TEST EAX,EAX                        ; 0054c284
    JLE 0x0054c436                      ; 0054c286
        ;   XREF to: 0054c436 (CONDITIONAL_JUMP)  ; LAB_0054c436
    MOV ESI,dword ptr [ESP + 0x23c]     ; 0054c28c
    MOV EDI,EBP                         ; 0054c293
    PUSH EDI                            ; 0054c295
    MOV AL,byte ptr [ESI]               ; 0054c296
        ;   Label: LAB_0054c296
    MOV byte ptr [EDI],AL               ; 0054c298
    CMP AL,0x0                          ; 0054c29a
    JZ 0x0054c2ae                       ; 0054c29c
        ;   XREF to: 0054c2ae (CONDITIONAL_JUMP)  ; LAB_0054c2ae
    MOV AL,byte ptr [ESI + 0x1]         ; 0054c29e
    ADD ESI,0x2                         ; 0054c2a1
    MOV byte ptr [EDI + 0x1],AL         ; 0054c2a4
    ADD EDI,0x2                         ; 0054c2a7
    CMP AL,0x0                          ; 0054c2aa
    JNZ 0x0054c296                      ; 0054c2ac
        ;   XREF to: 0054c296 (CONDITIONAL_JUMP)  ; LAB_0054c296
    POP EDI                             ; 0054c2ae
        ;   Label: LAB_0054c2ae
    MOV EAX,ESP                         ; 0054c2af
    PUSH EAX                            ; 0054c2b1
    PUSH 0x0                            ; 0054c2b2
    PUSH 0x0                            ; 0054c2b4
    PUSH 0x0                            ; 0054c2b6
    MOV EDX,dword ptr [ESP + 0x24c]     ; 0054c2b8
    PUSH EDX                            ; 0054c2bf
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 0054c2c0
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0054c2c5
    CMP byte ptr [ESP],0x2e             ; 0054c2c8
    JNZ 0x0054c2ed                      ; 0054c2cc
        ;   XREF to: 0054c2ed (CONDITIONAL_JUMP)  ; LAB_0054c2ed
    MOV EDI,ESP                         ; 0054c2ce
    SUB ECX,ECX                         ; 0054c2d0
    DEC ECX                             ; 0054c2d2
    XOR EAX,EAX                         ; 0054c2d3
    SCASB.REPNE ES:EDI                  ; 0054c2d5
    NOT ECX                             ; 0054c2d7
    DEC ECX                             ; 0054c2d9
    PUSH ECX                            ; 0054c2da
    LEA EAX,[ESP + 0x5]                 ; 0054c2db
    PUSH EAX                            ; 0054c2df
    LEA EAX,[ESP + 0x8]                 ; 0054c2e0
    PUSH EAX                            ; 0054c2e4
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0054c2e5
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0054c2ea
    PUSH 0x5e7db1                       ; 0054c2ed | DAT_005e7db1
        ;   Label: LAB_0054c2ed
    LEA EAX,[ESP + 0x4]                 ; 0054c2f2
    PUSH EAX                            ; 0054c2f6
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0054c2f7
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054c2fc
    TEST EAX,EAX                        ; 0054c2ff
    JNZ 0x0054c5c5                      ; 0054c301
        ;   XREF to: 0054c5c5 (CONDITIONAL_JUMP)  ; LAB_0054c5c5
    LEA EAX,[ESP + 0x200]               ; 0054c307
    PUSH EAX                            ; 0054c30e
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 0054c30f
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0054c314
    MOV EDX,dword ptr [ESP + 0x23c]     ; 0054c317
    PUSH EDX                            ; 0054c31e
    PUSH 0x5e7db5                       ; 0054c31f | = "sound"
    LEA EAX,[ESP + 0x208]               ; 0054c324
    PUSH EAX                            ; 0054c32b
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 0054c32c
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, char * directory, char * filename)
    ADD ESP,0xc                         ; 0054c331
    TEST EAX,EAX                        ; 0054c334
    JZ 0x0054c4c5                       ; 0054c336
        ;   XREF to: 0054c4c5 (CONDITIONAL_JUMP)  ; LAB_0054c4c5
    PUSH EBP                            ; 0054c33c
        ;   Label: LAB_0054c33c
    LEA EAX,[EBP + 0x178]               ; 0054c33d
    PUSH EAX                            ; 0054c343
    LEA EAX,[ESP + 0x208]               ; 0054c344
    PUSH EAX                            ; 0054c34b
    MOV dword ptr [EBP + 0x178],0x0     ; 0054c34c
    CALL sound_sndmain.cpp_FUN_0054b4a0 ; 0054c356
        ;   XREF to: 0054b4a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054b4a0()
    ADD ESP,0xc                         ; 0054c35b
    TEST EAX,EAX                        ; 0054c35e
    JZ 0x0054c4f5                       ; 0054c360
        ;   XREF to: 0054c4f5 (CONDITIONAL_JUMP)  ; LAB_0054c4f5
    PUSH EBP                            ; 0054c366
    CALL sound_sndmain.cpp_FUN_0054bac0 ; 0054c367
        ;   XREF to: 0054bac0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054bac0()
    MOV dword ptr [EBP + 0x150],0x0     ; 0054c36c
    MOV dword ptr [EBP + 0x154],0x0     ; 0054c376
    MOV dword ptr [EBP + 0x158],0x0     ; 0054c380
    MOV dword ptr [EBP + 0x15c],0x0     ; 0054c38a
    MOV dword ptr [EBP + 0x160],0xffffffff ; 0054c394
    MOV EAX,dword ptr [EBP + 0x110]     ; 0054c39e
    ADD ESP,0x4                         ; 0054c3a4
    MOV dword ptr [EBP + 0x164],EAX     ; 0054c3a7
    PUSH EAX                            ; 0054c3ad
    MOV dword ptr [EBP + 0x16c],EAX     ; 0054c3ae
    PUSH EBP                            ; 0054c3b4
    MOV dword ptr [EBP + 0x170],EAX     ; 0054c3b5
    CALL sound_sndmain.cpp_FUN_0054fd90 ; 0054c3bb
        ;   XREF to: 0054fd90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054fd90()
    ADD ESP,0x8                         ; 0054c3c0
    PUSH EBP                            ; 0054c3c3
    MOV dword ptr [EBP + 0x168],EAX     ; 0054c3c4
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840 ; 0054c3ca
        ;   XREF to: 0054d840 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054c3cf
    TEST EAX,EAX                        ; 0054c3d2
    JZ 0x0054c4f5                       ; 0054c3d4
        ;   XREF to: 0054c4f5 (CONDITIONAL_JUMP)  ; LAB_0054c4f5
    PUSH 0x0                            ; 0054c3da
    MOV EDX,dword ptr [EBP + 0x178]     ; 0054c3dc
    PUSH EDX                            ; 0054c3e2
    LEA EAX,[ESP + 0x208]               ; 0054c3e3
    PUSH EAX                            ; 0054c3ea
    CALL support_trstream.cpp_CInStreamFile_seek_FUN_0057d0c0 ; 0054c3eb
        ;   XREF to: 0057d0c0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_seek_FUN_0057d0c0(CInStreamFile * this_ptr, int offset, int origin)
    ADD ESP,0xc                         ; 0054c3f0
    MOV ECX,dword ptr [EBP + 0x110]     ; 0054c3f3
    PUSH ECX                            ; 0054c3f9
    PUSH 0x0                            ; 0054c3fa
    PUSH EBP                            ; 0054c3fc
    CALL sound_sndmain.cpp_FUN_0054daf0 ; 0054c3fd
        ;   XREF to: 0054daf0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054daf0()
    MOV ESI,EAX                         ; 0054c402
    ADD ESP,0xc                         ; 0054c404
    TEST EAX,EAX                        ; 0054c407
    JNZ 0x0054c4fb                      ; 0054c409
        ;   XREF to: 0054c4fb (CONDITIONAL_JUMP)  ; LAB_0054c4fb
    MOV ESI,dword ptr [ESP + 0x23c]     ; 0054c40f
    PUSH ESI                            ; 0054c416
    PUSH 0x5e7dde                       ; 0054c417 | = "Failed to lock sample %s\n"
    CALL sound_sndmain.cpp_FUN_005549c0 ; 0054c41c
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
        ;   Label: LAB_0054c41c
    ADD ESP,0x8                         ; 0054c421
    PUSH 0x0                            ; 0054c424
    LEA EAX,[ESP + 0x204]               ; 0054c426
        ;   Label: LAB_0054c426
    PUSH EAX                            ; 0054c42d
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 0054c42e
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054c433
        ;   Label: LAB_0054c433
    PUSH 0x2628680                      ; 0054c436
        ;   Label: LAB_0054c436
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_00509f30 ; 0054c43b
        ;   XREF to: 00509f30 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_00509f30(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0054c440
    PUSH EBP                            ; 0054c443
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 ; 0054c444
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054c449
    XOR EAX,EAX                         ; 0054c44c
    MOV EBX,dword ptr [0x02641920]      ; 0054c44e | DAT_02641920
        ;   Label: LAB_0054c44e
    ADD ESP,0x228                       ; 0054c454
    POP EBP                             ; 0054c45a
    POP EDI                             ; 0054c45b
    POP ESI                             ; 0054c45c
    POP EBX                             ; 0054c45d
    RET                                 ; 0054c45e
    INC ESI                             ; 0054c45f
        ;   Label: LAB_0054c45f
    ADD EBP,0x1ac                       ; 0054c460
    CMP ESI,0x40                        ; 0054c466
    JL 0x0054c1de                       ; 0054c469
        ;   XREF to: 0054c1de (CONDITIONAL_JUMP)  ; LAB_0054c1de
    MOV EBX,dword ptr [0x02641920]      ; 0054c46f | DAT_02641920
    XOR EAX,EAX                         ; 0054c475
    JMP 0x0054c1f8                      ; 0054c477
        ;   XREF to: 0054c1f8 (UNCONDITIONAL_JUMP)  ; LAB_0054c1f8
    MOV dword ptr [0x02641920],EBX      ; 0054c47c | DAT_02641920
        ;   Label: LAB_0054c47c
    MOV EBX,dword ptr [0x02641920]      ; 0054c482 | DAT_02641920
    ADD ESP,0x228                       ; 0054c488
    POP EBP                             ; 0054c48e
    POP EDI                             ; 0054c48f
    POP ESI                             ; 0054c490
    POP EBX                             ; 0054c491
    RET                                 ; 0054c492
    MOV EBP,dword ptr [EAX + 0x2641a78] ; 0054c493 | g_SfxSamples[1].ref_count
        ;   Label: LAB_0054c493
    CMP EDX,EBP                         ; 0054c499
    JNZ 0x0054c220                      ; 0054c49b
        ;   XREF to: 0054c220 (CONDITIONAL_JUMP)  ; LAB_0054c220
    MOV EDX,dword ptr [EAX + 0x2641a80] ; 0054c4a1 | g_SfxSamples[1].is_user_sample
    CMP EBP,EDX                         ; 0054c4a7
    JNZ 0x0054c220                      ; 0054c4a9
        ;   XREF to: 0054c220 (CONDITIONAL_JUMP)  ; LAB_0054c220
    CMP EDX,dword ptr [EAX + 0x2641acc] ; 0054c4af | g_SfxSamples[1].locked_length
    JNZ 0x0054c220                      ; 0054c4b5
        ;   XREF to: 0054c220 (CONDITIONAL_JUMP)  ; LAB_0054c220
    ADD EAX,0x2641924                   ; 0054c4bb
    JMP 0x0054c228                      ; 0054c4c0
        ;   XREF to: 0054c228 (UNCONDITIONAL_JUMP)  ; LAB_0054c228
    MOV EDI,dword ptr [ESP + 0x23c]     ; 0054c4c5
        ;   Label: LAB_0054c4c5
    PUSH EDI                            ; 0054c4cc
    MOV ECX,0x5e7dbb                    ; 0054c4cd | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x36b                       ; 0054c4d2
    PUSH 0x5e7dd0                       ; 0054c4d7 | = "Can't open %s"
    MOV dword ptr [0x01d046a0],ECX      ; 0054c4dc | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0054c4e2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054c4e8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0054c4ed
    JMP 0x0054c33c                      ; 0054c4f0
        ;   XREF to: 0054c33c (UNCONDITIONAL_JUMP)  ; LAB_0054c33c
    PUSH EAX                            ; 0054c4f5
        ;   Label: LAB_0054c4f5
    JMP 0x0054c426                      ; 0054c4f6
        ;   XREF to: 0054c426 (UNCONDITIONAL_JUMP)  ; LAB_0054c426
    MOV EDI,dword ptr [EBP + 0x110]     ; 0054c4fb
        ;   Label: LAB_0054c4fb
    PUSH EDI                            ; 0054c501
    PUSH EBP                            ; 0054c502
    CALL sound_sndmain.cpp_FUN_0054fd90 ; 0054c503
        ;   XREF to: 0054fd90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054fd90()
    ADD ESP,0x8                         ; 0054c508
    PUSH EAX                            ; 0054c50b
    PUSH ESI                            ; 0054c50c
    MOV EDI,EAX                         ; 0054c50d
    LEA EAX,[ESP + 0x208]               ; 0054c50f
    PUSH EAX                            ; 0054c516
    CALL support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0 ; 0054c517
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, void * buffer, int count)
    ADD ESP,0xc                         ; 0054c51c
    CMP EAX,EDI                         ; 0054c51f
    JNZ 0x0054c5b3                      ; 0054c521
        ;   XREF to: 0054c5b3 (CONDITIONAL_JUMP)  ; LAB_0054c5b3
    LEA EAX,[ESP + 0x200]               ; 0054c527
    PUSH EAX                            ; 0054c52e
    CALL support_trstream.cpp_CInStreamFile_close_FUN_0057d180 ; 0054c52f
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    MOV EAX,dword ptr [EBP + 0x104]     ; 0054c534
    ADD ESP,0x4                         ; 0054c53a
    CMP EAX,0x10                        ; 0054c53d
    JNZ 0x0054c560                      ; 0054c540
        ;   XREF to: 0054c560 (CONDITIONAL_JUMP)  ; LAB_0054c560
    MOV EDX,dword ptr [EBP + 0x110]     ; 0054c542
    XOR EAX,EAX                         ; 0054c548
    TEST EDX,EDX                        ; 0054c54a
    JLE 0x0054c560                      ; 0054c54c
        ;   XREF to: 0054c560 (CONDITIONAL_JUMP)  ; LAB_0054c560
    INC EAX                             ; 0054c54e
        ;   Label: LAB_0054c54e
    CMP EAX,dword ptr [EBP + 0x110]     ; 0054c54f
    JL 0x0054c54e                       ; 0054c555
        ;   XREF to: 0054c54e (CONDITIONAL_JUMP)  ; LAB_0054c54e
    LEA EAX,[EAX]                       ; 0054c557
    LEA EDX,[EDX]                       ; 0054c55d
    PUSH EBP                            ; 0054c560
        ;   Label: LAB_0054c560
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0 ; 0054c561
        ;   XREF to: 0054dbf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054c566
    PUSH 0x0                            ; 0054c569
    LEA EAX,[ESP + 0x204]               ; 0054c56b
    PUSH EAX                            ; 0054c572
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 0054c573
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054c578
        ;   Label: LAB_0054c578
    MOV EAX,dword ptr [ESP + 0x23c]     ; 0054c57b
        ;   Label: LAB_0054c57b
    PUSH EAX                            ; 0054c582
    PUSH 0x5e7eca                       ; 0054c583 | = "SOUND: Loaded sample %s\n"
    LEA EAX,[ESP + 0x8]                 ; 0054c588
    PUSH EAX                            ; 0054c58c
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0054c58d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054c592
    MOV EAX,ESP                         ; 0054c595
    PUSH EAX                            ; 0054c597
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 0054c598
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 0054c59d
    MOV EAX,EBP                         ; 0054c5a0
    MOV EBX,dword ptr [0x02641920]      ; 0054c5a2 | DAT_02641920
    ADD ESP,0x228                       ; 0054c5a8
    POP EBP                             ; 0054c5ae
    POP EDI                             ; 0054c5af
    POP ESI                             ; 0054c5b0
    POP EBX                             ; 0054c5b1
    RET                                 ; 0054c5b2
    MOV ECX,dword ptr [ESP + 0x23c]     ; 0054c5b3
        ;   Label: LAB_0054c5b3
    PUSH ECX                            ; 0054c5ba
    PUSH 0x5e7df8                       ; 0054c5bb | = "Error reading file data for %s\n"
    JMP 0x0054c41c                      ; 0054c5c0
        ;   XREF to: 0054c41c (UNCONDITIONAL_JUMP)  ; LAB_0054c41c
    PUSH 0x5e7e18                       ; 0054c5c5 | DAT_005e7e18
        ;   Label: LAB_0054c5c5
    LEA EAX,[ESP + 0x4]                 ; 0054c5ca
    PUSH EAX                            ; 0054c5ce
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0054c5cf
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054c5d4
    TEST EAX,EAX                        ; 0054c5d7
    JNZ 0x0054c738                      ; 0054c5d9
        ;   XREF to: 0054c738 (CONDITIONAL_JUMP)  ; LAB_0054c738
    MOV EAX,dword ptr [ESP + 0x23c]     ; 0054c5df
    PUSH EAX                            ; 0054c5e6
    PUSH 0x2628680                      ; 0054c5e7
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00509cd0 ; 0054c5ec
        ;   XREF to: 00509cd0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_openFile_FUN_00509cd0(CMP3Decoder * this_ptr, char * filename)
    MOV dword ptr [EBP + 0x104],0x10    ; 0054c5f1
    MOV EAX,[0x02628784]                ; 0054c5fb | g_CMP3DecoderInstance.num_channels
    MOV dword ptr [EBP + 0x108],EAX     ; 0054c600
    ADD ESP,0x8                         ; 0054c606
    MOV EAX,[0x02628780]                ; 0054c609 | g_CMP3DecoderInstance.sample_rate
    MOV dword ptr [EBP + 0x110],0xffffffff ; 0054c60e
    PUSH EBP                            ; 0054c618
    MOV dword ptr [EBP + 0x10c],EAX     ; 0054c619
    CALL sound_sndmain.cpp_FUN_0054bac0 ; 0054c61f
        ;   XREF to: 0054bac0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054bac0()
    MOV EDX,dword ptr [EBP + 0x110]     ; 0054c624
    ADD ESP,0x4                         ; 0054c62a
    TEST EDX,EDX                        ; 0054c62d
    JGE 0x0054c65c                      ; 0054c62f
        ;   XREF to: 0054c65c (CONDITIONAL_JUMP)  ; LAB_0054c65c
    MOV EDI,dword ptr [ESP + 0x23c]     ; 0054c631
    PUSH EDI                            ; 0054c638
    MOV ECX,0x5e7e1c                    ; 0054c639 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x3dd                       ; 0054c63e
    PUSH 0x5e7e31                       ; 0054c643 | = "Don't know length of sample %s"
    MOV dword ptr [0x01d046a0],ECX      ; 0054c648 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0054c64e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054c654
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0054c659
    MOV dword ptr [EBP + 0x150],0x0     ; 0054c65c
        ;   Label: LAB_0054c65c
    MOV dword ptr [EBP + 0x154],0x0     ; 0054c666
    MOV dword ptr [EBP + 0x158],0x0     ; 0054c670
    MOV dword ptr [EBP + 0x15c],0x0     ; 0054c67a
    MOV dword ptr [EBP + 0x160],0xffffffff ; 0054c684
    MOV EAX,dword ptr [EBP + 0x110]     ; 0054c68e
    MOV dword ptr [EBP + 0x164],EAX     ; 0054c694
    PUSH EAX                            ; 0054c69a
    MOV dword ptr [EBP + 0x16c],EAX     ; 0054c69b
    PUSH EBP                            ; 0054c6a1
    MOV dword ptr [EBP + 0x170],EAX     ; 0054c6a2
    CALL sound_sndmain.cpp_FUN_0054fd90 ; 0054c6a8
        ;   XREF to: 0054fd90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054fd90()
    ADD ESP,0x8                         ; 0054c6ad
    PUSH EBP                            ; 0054c6b0
    MOV dword ptr [EBP + 0x168],EAX     ; 0054c6b1
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840 ; 0054c6b7
        ;   XREF to: 0054d840 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054c6bc
    TEST EAX,EAX                        ; 0054c6bf
    JZ 0x0054c436                       ; 0054c6c1
        ;   XREF to: 0054c436 (CONDITIONAL_JUMP)  ; LAB_0054c436
    MOV EDX,dword ptr [EBP + 0x110]     ; 0054c6c7
    PUSH EDX                            ; 0054c6cd
    PUSH 0x0                            ; 0054c6ce
    PUSH EBP                            ; 0054c6d0
    CALL sound_sndmain.cpp_FUN_0054daf0 ; 0054c6d1
        ;   XREF to: 0054daf0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054daf0()
    ADD ESP,0xc                         ; 0054c6d6
    TEST EAX,EAX                        ; 0054c6d9
    JZ 0x0054c713                       ; 0054c6db
        ;   XREF to: 0054c713 (CONDITIONAL_JUMP)  ; LAB_0054c713
    MOV ECX,dword ptr [EBP + 0x110]     ; 0054c6dd
    PUSH ECX                            ; 0054c6e3
    PUSH EAX                            ; 0054c6e4
    PUSH 0x2628680                      ; 0054c6e5
    CALL sound_mp3.cpp_CMP3Decoder_read_FUN_00509fa0 ; 0054c6ea
        ;   XREF to: 00509fa0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_read_FUN_00509fa0(CMP3Decoder * this_ptr, short * output_buffer, int samples_requested)
    MOV ESI,dword ptr [EBP + 0x110]     ; 0054c6ef
    ADD ESP,0xc                         ; 0054c6f5
    CMP EAX,ESI                         ; 0054c6f8
    JZ 0x0054c72a                       ; 0054c6fa
        ;   XREF to: 0054c72a (CONDITIONAL_JUMP)  ; LAB_0054c72a
    MOV EDI,dword ptr [ESP + 0x23c]     ; 0054c6fc
    PUSH EDI                            ; 0054c703
    PUSH 0x5e7e6a                       ; 0054c704 | = "Error decoding file data from %s\n"
    CALL sound_sndmain.cpp_FUN_005549c0 ; 0054c709
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    JMP 0x0054c433                      ; 0054c70e
        ;   XREF to: 0054c433 (UNCONDITIONAL_JUMP)  ; LAB_0054c433
    MOV EAX,dword ptr [ESP + 0x23c]     ; 0054c713
        ;   Label: LAB_0054c713
    PUSH EAX                            ; 0054c71a
    PUSH 0x5e7e50                       ; 0054c71b | = "Failed to lock sample %s\n"
    CALL sound_sndmain.cpp_FUN_005549c0 ; 0054c720
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    JMP 0x0054c433                      ; 0054c725
        ;   XREF to: 0054c433 (UNCONDITIONAL_JUMP)  ; LAB_0054c433
    PUSH EBP                            ; 0054c72a
        ;   Label: LAB_0054c72a
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0 ; 0054c72b
        ;   XREF to: 0054dbf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054c730
    JMP 0x0054c57b                      ; 0054c733
        ;   XREF to: 0054c57b (UNCONDITIONAL_JUMP)  ; LAB_0054c57b
    MOV EDI,dword ptr [ESP + 0x23c]     ; 0054c738
        ;   Label: LAB_0054c738
    PUSH EDI                            ; 0054c73f
    MOV ECX,0x5e7e8c                    ; 0054c740 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x40d                       ; 0054c745
    PUSH 0x5e7ea1                       ; 0054c74a | = "Unknown sample file format extension: %s"
    MOV dword ptr [0x01d046a0],ECX      ; 0054c74f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0054c755 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054c75b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    JMP 0x0054c578                      ; 0054c760
        ;   XREF to: 0054c578 (UNCONDITIONAL_JUMP)  ; LAB_0054c578

