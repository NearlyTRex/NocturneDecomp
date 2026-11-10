; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint sound_sndmain_cpp_FUN_00556240(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x274]:1  local_274
; undefined        Stack[-0x174]:1  local_174
; undefined1       Stack[-0x173]:1  local_173
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004953d0 at 00495429
;   core_fire.cpp_CFireball_onCollision_FUN_00499eb0 at 00499f56
;   core_menu.cpp_FUN_004e94f0 at 004e9e47
;   core_sound.cpp_CSound_configure_FUN_005607d0 at 005608ea
;   core_sound.cpp_CSound_process_FUN_0055ff40 at 0056056a
;   core_sound.cpp_FUN_0055f6ae at 0055f9e4
;   core_sound.cpp_playSfxInternal_FUN_0055f020 at 0055f257
;   unkafter_bmppuzzl.cpp_FUN_00412ee0 at 00413198
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d2507
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005d251c
;   TerminatedCString s_sound_005d29c7
;   undefined4 DAT_005d29cd
;   undefined4 DAT_005d29d1
;   TerminatedCString s_startSfx_can_t_get_sampl_005d37f9
;   undefined4 DAT_00604210
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 g_CMP3DecoderInstanceOther.synthesis_history[1][28][14]
;   undefined4 DAT_02ce7280
;   undefined4 DAT_02ce7338
;   undefined4 DAT_02ce7398
;   undefined4 DAT_02ce739c
;   undefined4 DAT_02ce73a0
;   ... and 6 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_string.c__stricmp_FUN_005a3260
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   engine_dosio.cpp_splitPath_FUN_00465e50
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_00555750
;   sound_sndmain.cpp_FUN_00551d20
;   sound_sndmain.cpp_FUN_00552350
;   sound_sndmain.cpp_FUN_00553960
;   sound_sndmain.cpp_FUN_00555bf0
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_FUN_005586d0
;   sound_sndmain.cpp_FUN_0055a560
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556240
        ;   Label: sound_sndmain.cpp_FUN_00556240
    PUSH ESI                            ; 00556241
    PUSH EDI                            ; 00556242
    PUSH EBP                            ; 00556243
    SUB ESP,0x264                       ; 00556244
    MOV EDX,dword ptr [ESP + 0x278]     ; 0055624a
    TEST EDX,EDX                        ; 00556251
    JZ 0x0055625a                       ; 00556253
        ;   XREF to: 0055625a (CONDITIONAL_JUMP)  ; LAB_0055625a
    CMP byte ptr [EDX],0x0              ; 00556255
    JNZ 0x00556267                      ; 00556258
        ;   XREF to: 00556267 (CONDITIONAL_JUMP)  ; LAB_00556267
    XOR EAX,EAX                         ; 0055625a
        ;   Label: LAB_0055625a
    ADD ESP,0x264                       ; 0055625c
        ;   Label: LAB_0055625c
    POP EBP                             ; 00556262
    POP EDI                             ; 00556263
    POP ESI                             ; 00556264
    POP EBX                             ; 00556265
    RET                                 ; 00556266
    CALL sound_sndmain.cpp_isSoundBusy_FUN_005586c0 ; 00556267
        ;   XREF to: 005586c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_005586c0()
        ;   Label: LAB_00556267
    TEST EAX,EAX                        ; 0055626c
    JZ 0x0055625c                       ; 0055626e
        ;   XREF to: 0055625c (CONDITIONAL_JUMP)  ; LAB_0055625c
    LEA EAX,[ESP + 0x200]               ; 00556270
    PUSH EAX                            ; 00556277
    CALL sound_sndmain.cpp_FUN_00555bf0 ; 00556278
        ;   XREF to: 00555bf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555bf0(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 0055627d
    LEA EDI,[ESP + 0x100]               ; 00556280
    MOV ESI,dword ptr [ESP + 0x278]     ; 00556287
    PUSH EDI                            ; 0055628e
    MOV AL,byte ptr [ESI]               ; 0055628f
        ;   Label: LAB_0055628f
    MOV byte ptr [EDI],AL               ; 00556291
    CMP AL,0x0                          ; 00556293
    JZ 0x005562a7                       ; 00556295
        ;   XREF to: 005562a7 (CONDITIONAL_JUMP)  ; LAB_005562a7
    MOV AL,byte ptr [ESI + 0x1]         ; 00556297
    ADD ESI,0x2                         ; 0055629a
    MOV byte ptr [EDI + 0x1],AL         ; 0055629d
    ADD EDI,0x2                         ; 005562a0
    CMP AL,0x0                          ; 005562a3
    JNZ 0x0055628f                      ; 005562a5
        ;   XREF to: 0055628f (CONDITIONAL_JUMP)  ; LAB_0055628f
    POP EDI                             ; 005562a7
        ;   Label: LAB_005562a7
    MOV EBX,dword ptr [0x02ceb91c]      ; 005562a8 | DAT_02ceb91c
    LEA EAX,[EBX*0x4 + 0x0]             ; 005562ae
    SUB EAX,EBX                         ; 005562b5
    MOV ECX,0x18                        ; 005562b7
    SHL EAX,0x5                         ; 005562bc
    LEA EDI,[ESP + 0x200]               ; 005562bf
    LEA ESI,[EAX + 0x2ceb920]           ; 005562c6
    MOVSD.REP ES:EDI,ESI                ; 005562cc
    MOV ECX,dword ptr [ESP + 0x200]     ; 005562ce
    PUSH ECX                            ; 005562d5
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 005562d6
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 005562db
    TEST EAX,EAX                        ; 005562de
    JZ 0x0055625c                       ; 005562e0
        ;   XREF to: 0055625c (CONDITIONAL_JUMP)  ; LAB_0055625c
    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 005562e6
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
    CMP dword ptr [0x02cf341c],0x0      ; 005562eb | DAT_02cf341c
    JLE 0x005564d5                      ; 005562f2
        ;   XREF to: 005564d5 (CONDITIONAL_JUMP)  ; LAB_005564d5
    MOV EBP,dword ptr [0x02ce7280]      ; 005562f8 | DAT_02ce7280
        ;   Label: LAB_005562f8
    XOR EAX,EAX                         ; 005562fe
    XOR EBX,EBX                         ; 00556300
    TEST EBP,EBP                        ; 00556302
    JZ 0x00556320                       ; 00556304
        ;   XREF to: 00556320 (CONDITIONAL_JUMP)  ; LAB_00556320
    ADD EAX,0x11c                       ; 00556306
        ;   Label: LAB_00556306
    INC EBX                             ; 0055630b
    CMP EAX,0x4700                      ; 0055630c
    JGE 0x005564fd                      ; 00556311
        ;   XREF to: 005564fd (CONDITIONAL_JUMP)  ; LAB_005564fd
    CMP dword ptr [EAX + 0x2ce7280],0x0 ; 00556317 | DAT_02ce739c
    JNZ 0x00556306                      ; 0055631e
        ;   XREF to: 00556306 (CONDITIONAL_JUMP)  ; LAB_00556306
    MOV dword ptr [ESP + 0x260],EBX     ; 00556320
        ;   Label: LAB_00556320
    TEST EBX,EBX                        ; 00556327
    JL 0x005564c3                       ; 00556329
        ;   XREF to: 005564c3 (CONDITIONAL_JUMP)  ; LAB_005564c3
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055632f
    ADD EAX,EBX                         ; 00556336
    SHL EAX,0x3                         ; 00556338
    SUB EAX,EBX                         ; 0055633b
    MOV EBP,0x2ce721c                   ; 0055633d
    SHL EAX,0x2                         ; 00556342
    MOV ECX,0x18                        ; 00556345
    ADD EBP,EAX                         ; 0055634a
    LEA ESI,[ESP + 0x200]               ; 0055634c
    MOV EDI,EBP                         ; 00556353
    MOVSD.REP ES:EDI,ESI                ; 00556355 | DAT_02ce7338 | g_CMP3DecoderInstanceOther.synthesis_history[1][28][14]
    MOV EBX,0x2cebc24                   ; 00556357
    MOV EDI,dword ptr [ESP + 0x278]     ; 0055635c
    XOR ESI,ESI                         ; 00556363
    PUSH EDI                            ; 00556365
        ;   Label: LAB_00556365
    PUSH EBX                            ; 00556366
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00556367
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055636c
    TEST EAX,EAX                        ; 0055636f
    JNZ 0x00556507                      ; 00556371
        ;   XREF to: 00556507 (CONDITIONAL_JUMP)  ; LAB_00556507
    TEST EBX,EBX                        ; 00556377
    JZ 0x00556517                       ; 00556379
        ;   XREF to: 00556517 (CONDITIONAL_JUMP)  ; LAB_00556517
    CMP dword ptr [EBX + 0x160],-0x1    ; 0055637f | g_SfxSamples[0].field12_0x160
    JZ 0x0055658d                       ; 00556386
        ;   XREF to: 0055658d (CONDITIONAL_JUMP)  ; LAB_0055658d
    LEA EAX,[ESP + 0x100]               ; 0055638c
    PUSH EAX                            ; 00556393
    MOV EDI,dword ptr [ESP + 0x264]     ; 00556394
    PUSH EDI                            ; 0055639b
    CALL sound_sndmain.cpp_FUN_00552350 ; 0055639c
        ;   XREF to: 00552350 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_FUN_00552350(int slot_index, char * filename)
        ;   Label: LAB_0055639c
    ADD ESP,0x8                         ; 005563a1
    MOV dword ptr [EBP + 0x68],EAX      ; 005563a4 | DAT_02ce73a0
        ;   Label: LAB_005563a4
    MOV EAX,dword ptr [EBP + 0x68]      ; 005563a7 | DAT_02ce73a0
        ;   Label: LAB_005563a7
    TEST EAX,EAX                        ; 005563aa
    JZ 0x005565aa                       ; 005563ac
        ;   XREF to: 005565aa (CONDITIONAL_JUMP)  ; LAB_005565aa
    MOV EDX,dword ptr [EAX + 0x154]     ; 005563b2 | g_SfxSamples[0].ref_count
    INC EDX                             ; 005563b8
    PUSH EBP                            ; 005563b9 | DAT_02ce7338
    MOV dword ptr [EAX + 0x154],EDX     ; 005563ba | g_SfxSamples[0].ref_count
    CALL sound_sndmain.cpp_CSfxSlot_seek_FUN_00555750 ; 005563c0
        ;   XREF to: 00555750 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_seek_FUN_00555750(CSfxSlot * this_ptr)
    MOV dword ptr [EBP + 0x108],0x0     ; 005563c5
    FLD float ptr [EBP + 0x38]          ; 005563cf
    MOV dword ptr [EBP + 0x100],0xbf800000 ; 005563d2
    ADD ESP,0x4                         ; 005563dc
    MOV dword ptr [EBP + 0x104],0x0     ; 005563df
    MOV EAX,EBP                         ; 005563e9
    FSTP float ptr [EBP + 0xfc]         ; 005563eb
    LEA EBX,[EBP + 0x20]                ; 005563f1
    ADD EAX,0x4                         ; 005563f4
        ;   Label: LAB_005563f4
    MOV dword ptr [EAX + 0xcc],0xffffffff ; 005563f7
    CMP EAX,EBX                         ; 00556401
    JNZ 0x005563f4                      ; 00556403
        ;   XREF to: 005563f4 (CONDITIONAL_JUMP)  ; LAB_005563f4
    MOV EAX,dword ptr [EBP + 0x68]      ; 00556405 | DAT_02ce73a0
    MOV ECX,dword ptr [0x00604210]      ; 00556408 | DAT_00604210
    FLD float ptr [EAX + 0x114]         ; 0055640e
    INC ECX                             ; 00556414
    MOV EAX,dword ptr [EBP + 0x68]      ; 00556415 | DAT_02ce73a0
    FSTP float ptr [EBP + 0xf0]         ; 00556418
    MOV dword ptr [0x00604210],ECX      ; 0055641e | DAT_00604210
    FLD float ptr [EAX + 0x118]         ; 00556424
    MOV EAX,dword ptr [EBP + 0x68]      ; 0055642a | DAT_02ce73a0
    FSTP float ptr [EBP + 0xf4]         ; 0055642d
    MOV EDX,dword ptr [EAX + 0x11c]     ; 00556433
    MOV dword ptr [EBP + 0xf8],EDX      ; 00556439
    MOV dword ptr [EBP + 0x118],0xffffffff ; 0055643f | DAT_02ce7450
    CMP ECX,0xffffff                    ; 00556449
    JL 0x0055645b                       ; 0055644f
        ;   XREF to: 0055645b (CONDITIONAL_JUMP)  ; LAB_0055645b
    MOV dword ptr [0x00604210],0x1      ; 00556451 | DAT_00604210
    PUSH 0x4479c000                     ; 0055645b
        ;   Label: LAB_0055645b
    PUSH 0x4479c000                     ; 00556460
    MOV EDI,dword ptr [EBP + 0x68]      ; 00556465 | DAT_02ce73a0
    MOV EBX,dword ptr [0x00604210]      ; 00556468 | DAT_00604210
    PUSH EDI                            ; 0055646e
    MOV dword ptr [EBP + 0x64],EBX      ; 0055646f | DAT_02ce739c
    CALL sound_sndmain.cpp_FUN_00553960 ; 00556472
        ;   XREF to: 00553960 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00553960()
    ADD ESP,0xc                         ; 00556477
    TEST EAX,EAX                        ; 0055647a
    JZ 0x005564ba                       ; 0055647c
        ;   XREF to: 005564ba (CONDITIONAL_JUMP)  ; LAB_005564ba
    PUSH 0x0                            ; 0055647e
    PUSH EBP                            ; 00556480 | DAT_02ce7338
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430 ; 00556481
        ;   XREF to: 00554430 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00556486
    CALL sound_sndmain.cpp_FUN_005586d0 ; 00556489
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005586d0(int enable)
    CMP EAX,0x1                         ; 0055648e
    JL 0x005565c4                       ; 00556491
        ;   XREF to: 005565c4 (CONDITIONAL_JUMP)  ; LAB_005565c4
    MOV EDI,dword ptr [EBP + 0x68]      ; 00556497 | DAT_02ce73a0
    MOV EDX,dword ptr [EDI + 0x158]     ; 0055649a
    MOV EAX,[0x02cf3280]                ; 005564a0 | DAT_02cf3280
    PUSH EDX                            ; 005564a5
    MOV ESI,dword ptr [EAX]             ; 005564a6
    PUSH EAX                            ; 005564a8
    CALL dword ptr [ESI + 0x40]         ; 005564a9
    ADD ESP,0x8                         ; 005564ac
    MOV dword ptr [EBP + 0x60],EAX      ; 005564af | DAT_02ce7398
    TEST EAX,EAX                        ; 005564b2
    JNZ 0x005565c4                      ; 005564b4
        ;   XREF to: 005565c4 (CONDITIONAL_JUMP)  ; LAB_005565c4
    PUSH EBP                            ; 005564ba | DAT_02ce7338
        ;   Label: LAB_005564ba
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270 ; 005564bb
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005564c0
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 005564c3
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
        ;   Label: LAB_005564c3
    XOR EAX,EAX                         ; 005564c8
    ADD ESP,0x264                       ; 005564ca
    POP EBP                             ; 005564d0
    POP EDI                             ; 005564d1
    POP ESI                             ; 005564d2
    POP EBX                             ; 005564d3
    RET                                 ; 005564d4
    MOV ESI,0x5d2507                    ; 005564d5 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005564d5
    MOV EDI,0x24b                       ; 005564da
    PUSH 0x5d251c                       ; 005564df | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d71de0],ESI      ; 005564e4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 005564ea | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005564f0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005564f5
    JMP 0x005562f8                      ; 005564f8
        ;   XREF to: 005562f8 (UNCONDITIONAL_JUMP)  ; LAB_005562f8
    MOV EBX,0xffffffff                  ; 005564fd
        ;   Label: LAB_005564fd
    JMP 0x00556320                      ; 00556502
        ;   XREF to: 00556320 (UNCONDITIONAL_JUMP)  ; LAB_00556320
    INC ESI                             ; 00556507
        ;   Label: LAB_00556507
    ADD EBX,0x1b0                       ; 00556508
    CMP ESI,0x40                        ; 0055650e
    JL 0x00556365                       ; 00556511
        ;   XREF to: 00556365 (CONDITIONAL_JUMP)  ; LAB_00556365
    LEA EAX,[ESP + 0x100]               ; 00556517
        ;   Label: LAB_00556517
    PUSH EAX                            ; 0055651e
    PUSH 0x5d29c7                       ; 0055651f | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 00556524
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00556529
    CMP EAX,0x200000                    ; 0055652c
    JG 0x00556578                       ; 00556531
        ;   XREF to: 00556578 (CONDITIONAL_JUMP)  ; LAB_00556578
    MOV EAX,ESP                         ; 00556533
    PUSH EAX                            ; 00556535
    PUSH 0x0                            ; 00556536
    PUSH 0x0                            ; 00556538
    PUSH 0x0                            ; 0055653a
    LEA EAX,[ESP + 0x110]               ; 0055653c
    PUSH EAX                            ; 00556543
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 00556544
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00556549
    PUSH 0x5d29cd                       ; 0055654c | DAT_005d29cd
    LEA EAX,[ESP + 0x4]                 ; 00556551
    PUSH EAX                            ; 00556555
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00556556
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055655b
    TEST EAX,EAX                        ; 0055655e
    JZ 0x00556578                       ; 00556560
        ;   XREF to: 00556578 (CONDITIONAL_JUMP)  ; LAB_00556578
    PUSH 0x5d29d1                       ; 00556562 | DAT_005d29d1
    LEA EAX,[ESP + 0x4]                 ; 00556567
    PUSH EAX                            ; 0055656b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0055656c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00556571
    TEST EAX,EAX                        ; 00556574
    JNZ 0x00556595                      ; 00556576
        ;   XREF to: 00556595 (CONDITIONAL_JUMP)  ; LAB_00556595
    LEA EAX,[ESP + 0x100]               ; 00556578
        ;   Label: LAB_00556578
    PUSH EAX                            ; 0055657f
    MOV ECX,dword ptr [ESP + 0x264]     ; 00556580
    PUSH ECX                            ; 00556587
    JMP 0x0055639c                      ; 00556588
        ;   XREF to: 0055639c (UNCONDITIONAL_JUMP)  ; LAB_0055639c
    MOV dword ptr [EBP + 0x68],EBX      ; 0055658d | DAT_02ce73a0
        ;   Label: LAB_0055658d
    JMP 0x005563a7                      ; 00556590
        ;   XREF to: 005563a7 (UNCONDITIONAL_JUMP)  ; LAB_005563a7
    LEA EAX,[ESP + 0x100]               ; 00556595
        ;   Label: LAB_00556595
    PUSH EAX                            ; 0055659c
    CALL sound_sndmain.cpp_FUN_00551d20 ; 0055659d
        ;   XREF to: 00551d20 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_FUN_00551d20(char * filename)
    ADD ESP,0x4                         ; 005565a2
    JMP 0x005563a4                      ; 005565a5
        ;   XREF to: 005563a4 (UNCONDITIONAL_JUMP)  ; LAB_005563a4
    LEA EAX,[ESP + 0x100]               ; 005565aa
        ;   Label: LAB_005565aa
    PUSH EAX                            ; 005565b1
    PUSH 0x5d37f9                       ; 005565b2 | = "startSfx - can't get sample %s\n"
    CALL sound_sndmain.cpp_FUN_0055a560 ; 005565b7
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x8                         ; 005565bc
    JMP 0x005564ba                      ; 005565bf
        ;   XREF to: 005564ba (UNCONDITIONAL_JUMP)  ; LAB_005564ba
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 005565c4
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
        ;   Label: LAB_005565c4
    MOV EAX,EBX                         ; 005565c9
    MOV EBX,dword ptr [ESP + 0x260]     ; 005565cb
    SHL EAX,0x6                         ; 005565d2
    OR EAX,EBX                          ; 005565d5
    ADD ESP,0x264                       ; 005565d7
    POP EBP                             ; 005565dd
    POP EDI                             ; 005565de
    POP ESI                             ; 005565df
    POP EBX                             ; 005565e0
    RET                                 ; 005565e1

