; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_FUN_004a4170(CGame *this_ptr,char *save_filename,int load_mode)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   save_filename
; int              Stack[0xc]:4   load_mode
; Local Variables:
; undefined        Stack[-0x638]:1  local_638
; undefined        Stack[-0x534]:1  local_534
; undefined1       Stack[-0x533]:1  local_533
; undefined        Stack[-0x430]:1  local_430
; undefined        Stack[-0x330]:1  local_330
; undefined        Stack[-0x230]:1  local_230
; undefined        Stack[-0x168]:1  local_168
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x104]:4  local_104
; undefined        Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_FUN_004a4b50 at 004a4efd
;   core_menu.cpp_FUN_004d23d0 at 004d2815
;
; Referenced Globals:
;   TerminatedCString s_noc_00583c33
;   TerminatedCString s_noc_00583c37
;   TerminatedCString s_noc_00583c3c
;   TerminatedCString s_save_00583c42
;   TerminatedCString s_Select_file_to_load_00583c47
;   TerminatedCString s_rt_00583c5b
;   TerminatedCString s_save_00583c5e
;   TerminatedCString s_LZW_00583c63
;   undefined4 s_ZW_00583c63+1
;   TerminatedCString s_save_00583c67
;   TerminatedCString s_save_00583c6c
;   TerminatedCString s_s_s_00583c71
;   TerminatedCString s_Can_t_open_saved_game_fi_00583c77
;   TerminatedCString s_Can_t_create_temp_file_t_00583c93
;   TerminatedCString s_Error_writing_temp_file_00583cc3
;   ... and 44 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_event.cpp_CEventList_loadState_FUN_00480f70
;   core_event.cpp_CEventList_resetGameFlags_FUN_00480410
;   core_fire.cpp_CFireEffect_init_FUN_0048a150
;   core_fire.cpp_CFireEffect_load_FUN_0048c7d0
;   core_gore.cpp_CGore_load_FUN_004b0820
;   core_gore.cpp_CGore_reset_FUN_004afdb0
;   core_level.cpp_CLevelLoader_show_FUN_004c5640
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0
;   core_mission.cpp_CDemonMission_run_FUN_004d9440
;   core_mission.cpp_CDemonMission_startMission_FUN_004d9780
;   core_script.cpp_CScript_loadState_FUN_005052c0
;   core_set.cpp_CDemonSet_loadStateInfo_FUN_0050e920
;   ... and 31 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4170
        ;   Label: core_game.cpp_CGame_FUN_004a4170
    PUSH ESI                            ; 004a4171
    PUSH EDI                            ; 004a4172
    PUSH EBP                            ; 004a4173
    SUB ESP,0x628                       ; 004a4174
    PUSH 0x5b9370                       ; 004a417a | = "save\\$$SAVE$$.TMP"
    CALL crt_stdio.c_remove_FUN_005657c0 ; 004a417f
        ;   XREF to: 005657c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005657c0(char * filename)
    ADD ESP,0x4                         ; 004a4184
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004a4187
    MOV dword ptr [EAX + 0x234],0x1     ; 004a418e
    LEA EAX,[ESP + 0x208]               ; 004a4198
    PUSH EAX                            ; 004a419f
    PUSH 0x0                            ; 004a41a0
    PUSH 0x0                            ; 004a41a2
    PUSH 0x0                            ; 004a41a4
    PUSH 0x1c78598                      ; 004a41a6 | DAT_01c78598
    CALL crt_string.c_splitpath_FUN_00566498 ; 004a41ab
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_00566498(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004a41b0
    PUSH 0x583c33                       ; 004a41b3 | = "noc"
    LEA EAX,[ESP + 0x20c]               ; 004a41b8
    PUSH EAX                            ; 004a41bf
    CALL crt_string.c__stricmp_FUN_00564520 ; 004a41c0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a41c5
    TEST EAX,EAX                        ; 004a41c8
    JZ 0x004a41e9                       ; 004a41ca
        ;   XREF to: 004a41e9 (CONDITIONAL_JUMP)  ; LAB_004a41e9
    PUSH 0x583c37                       ; 004a41cc | = ".noc"
    LEA EAX,[ESP + 0x20c]               ; 004a41d1
    PUSH EAX                            ; 004a41d8
    CALL crt_string.c__stricmp_FUN_00564520 ; 004a41d9
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a41de
    TEST EAX,EAX                        ; 004a41e1
    JNZ 0x004a461e                      ; 004a41e3
        ;   XREF to: 004a461e (CONDITIONAL_JUMP)  ; LAB_004a461e
    MOV ESI,0x1c78598                   ; 004a41e9
        ;   Label: LAB_004a41e9
    LEA EDI,[ESP + 0x104]               ; 004a41ee
    PUSH EDI                            ; 004a41f5
    MOV AL,byte ptr [ESI]               ; 004a41f6 | DAT_01c78598 | DAT_01c7859a
        ;   Label: LAB_004a41f6
    MOV byte ptr [EDI],AL               ; 004a41f8
    CMP AL,0x0                          ; 004a41fa
    JZ 0x004a420e                       ; 004a41fc
        ;   XREF to: 004a420e (CONDITIONAL_JUMP)  ; LAB_004a420e
    MOV AL,byte ptr [ESI + 0x1]         ; 004a41fe | DAT_01c78599 | DAT_01c7859b
    ADD ESI,0x2                         ; 004a4201
    MOV byte ptr [EDI + 0x1],AL         ; 004a4204
    ADD EDI,0x2                         ; 004a4207
    CMP AL,0x0                          ; 004a420a
    JNZ 0x004a41f6                      ; 004a420c
        ;   XREF to: 004a41f6 (CONDITIONAL_JUMP)  ; LAB_004a41f6
    POP EDI                             ; 004a420e
        ;   Label: LAB_004a420e
    MOV EAX,[0x01bcd070]                ; 004a420f | DAT_01bcd070
        ;   Label: LAB_004a420f
    MOV EDX,dword ptr [ESP + 0x644]     ; 004a4214
    MOV dword ptr [ESP + 0x608],EAX     ; 004a421b
    TEST EDX,EDX                        ; 004a4222
    JNZ 0x004a462c                      ; 004a4224
        ;   XREF to: 004a462c (CONDITIONAL_JUMP)  ; LAB_004a462c
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004a422a
        ;   Label: LAB_004a422a
    ADD EAX,0x9c8                       ; 004a4231
    MOV dword ptr [ESP + 0x60c],EAX     ; 004a4236
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004a423d
    ADD EAX,0x254                       ; 004a4244
    MOV dword ptr [ESP + 0x610],EAX     ; 004a4249
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004a4250
    ADD EAX,0x24c                       ; 004a4257
    MOV dword ptr [ESP + 0x618],EAX     ; 004a425c
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004a4263
    ADD EAX,0x248                       ; 004a426a
    MOV dword ptr [ESP + 0x614],EAX     ; 004a426f
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004a4276
    ADD EAX,0x250                       ; 004a427d
    MOV dword ptr [ESP + 0x61c],EAX     ; 004a4282
    MOV ECX,dword ptr [ESP + 0x640]     ; 004a4289
        ;   Label: LAB_004a4289
    TEST ECX,ECX                        ; 004a4290
    JZ 0x004a463b                       ; 004a4292
        ;   XREF to: 004a463b (CONDITIONAL_JUMP)  ; LAB_004a463b
    LEA EDI,[ESP + 0x104]               ; 004a4298
    MOV ESI,ECX                         ; 004a429f
    PUSH EDI                            ; 004a42a1
    MOV AL,byte ptr [ESI]               ; 004a42a2
        ;   Label: LAB_004a42a2
    MOV byte ptr [EDI],AL               ; 004a42a4
    CMP AL,0x0                          ; 004a42a6
    JZ 0x004a42ba                       ; 004a42a8
        ;   XREF to: 004a42ba (CONDITIONAL_JUMP)  ; LAB_004a42ba
    MOV AL,byte ptr [ESI + 0x1]         ; 004a42aa
    ADD ESI,0x2                         ; 004a42ad
    MOV byte ptr [EDI + 0x1],AL         ; 004a42b0
    ADD EDI,0x2                         ; 004a42b3
    CMP AL,0x0                          ; 004a42b6
    JNZ 0x004a42a2                      ; 004a42b8
        ;   XREF to: 004a42a2 (CONDITIONAL_JUMP)  ; LAB_004a42a2
    POP EDI                             ; 004a42ba
        ;   Label: LAB_004a42ba
    MOV ESI,dword ptr [0x005b7650]      ; 004a42bb | DAT_005b7650
        ;   Label: LAB_004a42bb
    PUSH ESI                            ; 004a42c1
    CALL core_event.cpp_CEventList_resetGameFlags_FUN_00480410 ; 004a42c2
        ;   XREF to: 00480410 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_resetGameFlags_FUN_00480410(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004a42c7
    PUSH -0x1                           ; 004a42ca
    PUSH 0x0                            ; 004a42cc
    PUSH 0x9                            ; 004a42ce
    MOV EDI,dword ptr [0x005baca0]      ; 004a42d0 | g_CLevelLoader_PTR_005baca0
    PUSH EDI                            ; 004a42d6
    CALL core_level.cpp_CLevelLoader_show_FUN_004c5640 ; 004a42d7
        ;   XREF to: 004c5640 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_show_FUN_004c5640(CLevelLoader * this_ptr, int total_frames, int use_custom_viewport, int image_variant)
    ADD ESP,0x10                        ; 004a42dc
    PUSH 0x583c5b                       ; 004a42df | = "rt"
    LEA EAX,[ESP + 0x108]               ; 004a42e4
    PUSH EAX                            ; 004a42eb
    PUSH 0x583c5e                       ; 004a42ec | = "save"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004a42f1
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004a42f6
    PUSH EAX                            ; 004a42f9
    MOV EBX,EAX                         ; 004a42fa
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 004a42fc
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00566e70(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a4301
    MOV dword ptr [ESP + 0x620],EAX     ; 004a4304
    LEA EAX,[ESP + 0x104]               ; 004a430b
    PUSH EAX                            ; 004a4312
    PUSH 0x1c78598                      ; 004a4313 | DAT_01c78598
    MOV EBP,0x1                         ; 004a4318
    CALL crt_string.c__stricmp_FUN_00564520 ; 004a431d
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a4322
    TEST EAX,EAX                        ; 004a4325
    JZ 0x004a4351                       ; 004a4327
        ;   XREF to: 004a4351 (CONDITIONAL_JUMP)  ; LAB_004a4351
    LEA ESI,[ESP + 0x104]               ; 004a4329
    MOV EDI,0x1c78598                   ; 004a4330
    PUSH EDI                            ; 004a4335 | DAT_01c78598
    MOV AL,byte ptr [ESI]               ; 004a4336
        ;   Label: LAB_004a4336
    MOV byte ptr [EDI],AL               ; 004a4338 | DAT_01c78598 | DAT_01c7859a
    CMP AL,0x0                          ; 004a433a
    JZ 0x004a434e                       ; 004a433c
        ;   XREF to: 004a434e (CONDITIONAL_JUMP)  ; LAB_004a434e
    MOV AL,byte ptr [ESI + 0x1]         ; 004a433e
    ADD ESI,0x2                         ; 004a4341
    MOV byte ptr [EDI + 0x1],AL         ; 004a4344 | DAT_01c78599 | DAT_01c7859b
    ADD EDI,0x2                         ; 004a4347
    CMP AL,0x0                          ; 004a434a
    JNZ 0x004a4336                      ; 004a434c
        ;   XREF to: 004a4336 (CONDITIONAL_JUMP)  ; LAB_004a4336
    POP EDI                             ; 004a434e
        ;   Label: LAB_004a434e
    XOR EBP,EBP                         ; 004a434f
    CMP dword ptr [ESP + 0x644],0x0     ; 004a4351
        ;   Label: LAB_004a4351
    JNZ 0x004a4360                      ; 004a4359
        ;   XREF to: 004a4360 (CONDITIONAL_JUMP)  ; LAB_004a4360
    MOV EBP,0x1                         ; 004a435b
    PUSH EBX                            ; 004a4360
        ;   Label: LAB_004a4360
    PUSH 0x1                            ; 004a4361
    PUSH 0x4                            ; 004a4363
    LEA EAX,[ESP + 0x608]               ; 004a4365
    PUSH EAX                            ; 004a436c
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004a436d
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004a4372
    PUSH 0x0                            ; 004a4375
    MOV EDX,dword ptr [ESP + 0x624]     ; 004a4377
    PUSH EDX                            ; 004a437e
    PUSH EBX                            ; 004a437f
    MOV EDI,0x5b9384                    ; 004a4380 | DAT_005b9384
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004a4385
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004a438a
    LEA ESI,[ESP + 0x5fc]               ; 004a438d
    MOV ECX,0x4                         ; 004a4394
    XOR EAX,EAX                         ; 004a4399
    CMPSB.REPE ES:EDI,ESI               ; 004a439b | DAT_005b9384 | DAT_005b9385
    JZ 0x004a43a4                       ; 004a439d
        ;   XREF to: 004a43a4 (CONDITIONAL_JUMP)  ; LAB_004a43a4
    SBB EAX,EAX                         ; 004a439f
    SBB EAX,-0x1                        ; 004a43a1
    TEST EAX,EAX                        ; 004a43a4
        ;   Label: LAB_004a43a4
    JZ 0x004a43cc                       ; 004a43a6
        ;   XREF to: 004a43cc (CONDITIONAL_JUMP)  ; LAB_004a43cc
    MOV ECX,0x3                         ; 004a43a8
    MOV EDI,0x583c63                    ; 004a43ad | = "LZW"
    LEA ESI,[ESP + 0x5fc]               ; 004a43b2
    XOR EAX,EAX                         ; 004a43b9
    CMPSB.REPE ES:EDI,ESI               ; 004a43bb | = "LZW" | s_ZW_00583c63+1
    JZ 0x004a43c4                       ; 004a43bd
        ;   XREF to: 004a43c4 (CONDITIONAL_JUMP)  ; LAB_004a43c4
    SBB EAX,EAX                         ; 004a43bf
    SBB EAX,-0x1                        ; 004a43c1
    TEST EAX,EAX                        ; 004a43c4
        ;   Label: LAB_004a43c4
    JNZ 0x004a45bf                      ; 004a43c6
        ;   XREF to: 004a45bf (CONDITIONAL_JUMP)  ; LAB_004a45bf
    PUSH EBX                            ; 004a43cc
        ;   Label: LAB_004a43cc
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a43cd
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a43d2
    LEA EAX,[ESP + 0x104]               ; 004a43d5
    PUSH EAX                            ; 004a43dc
    PUSH 0x583c67                       ; 004a43dd | = "save"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004a43e2
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004a43e7
    SUB EAX,0x4                         ; 004a43ea
    PUSH 0x0                            ; 004a43ed
    MOV dword ptr [ESP + 0x608],EAX     ; 004a43ef
    LEA EAX,[ESP + 0x4d4]               ; 004a43f6
    PUSH EAX                            ; 004a43fd
    CALL crt_fstream.cpp_ifstream_ctor_FUN_005652fe ; 004a43fe
        ;   XREF to: 005652fe (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_ctor_FUN_005652fe(void * this_ptr, int c1)
    ADD ESP,0x8                         ; 004a4403
    PUSH 0x0                            ; 004a4406
    LEA EAX,[ESP + 0x554]               ; 004a4408
    PUSH EAX                            ; 004a440f
    CALL crt_fstream.cpp_ofstream_ctor_FUN_0056536a ; 004a4410
        ;   XREF to: 0056536a (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_ctor_FUN_0056536a(void * this_ptr, int c1)
    ADD ESP,0x8                         ; 004a4415
    LEA EAX,[ESP + 0x104]               ; 004a4418
    PUSH EAX                            ; 004a441f
    PUSH 0x583c6c                       ; 004a4420 | = "save"
    PUSH 0x583c71                       ; 004a4425 | = "%s\\%s"
    LEA EAX,[ESP + 0xc]                 ; 004a442a
    PUSH EAX                            ; 004a442e
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004a442f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a4434
    MOV EBX,dword ptr [0x005a47a0]      ; 004a4437 | DAT_005a47a0
    PUSH EBX                            ; 004a443d
    PUSH 0x121                          ; 004a443e
    LEA EAX,[ESP + 0x8]                 ; 004a4443
    PUSH EAX                            ; 004a4447
    LEA EAX,[ESP + 0x4dc]               ; 004a4448
    PUSH EAX                            ; 004a444f
    CALL crt_fstream.cpp_openFile_FUN_00565eb5 ; 004a4450
        ;   XREF to: 00565eb5 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_openFile_FUN_00565eb5(void * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004a4455
    PUSH 0x4                            ; 004a4458
    LEA EAX,[ESP + 0x518]               ; 004a445a
    PUSH EAX                            ; 004a4461
    CALL crt_fstream.cpp_istream_seekg_FUN_00565f14 ; 004a4462
        ;   XREF to: 00565f14 (UNCONDITIONAL_CALL)  ; _istream * crt_fstream.cpp_istream_seekg_FUN_00565f14(void * this_ptr, int offset)
    ADD ESP,0x8                         ; 004a4467
    CMP dword ptr [ESP + 0x534],0x0     ; 004a446a
    JNZ 0x004a46a9                      ; 004a4472
        ;   XREF to: 004a46a9 (CONDITIONAL_JUMP)  ; LAB_004a46a9
    PUSH EBX                            ; 004a4478
    PUSH 0x112                          ; 004a4479
    PUSH 0x5b9370                       ; 004a447e | = "save\\$$SAVE$$.TMP"
    LEA EAX,[ESP + 0x55c]               ; 004a4483
    PUSH EAX                            ; 004a448a
    CALL crt_fstream.cpp_openFile_FUN_00565eb5 ; 004a448b
        ;   XREF to: 00565eb5 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_openFile_FUN_00565eb5(void * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004a4490
    MOV ESI,dword ptr [ESP + 0x5b0]     ; 004a4493
    TEST ESI,ESI                        ; 004a449a
    JNZ 0x004a46f5                      ; 004a449c
        ;   XREF to: 004a46f5 (CONDITIONAL_JUMP)  ; LAB_004a46f5
    PUSH 0x8                            ; 004a44a2
    PUSH 0x8000                         ; 004a44a4
    LEA EAX,[ESP + 0x5d4]               ; 004a44a9
    PUSH EAX                            ; 004a44b0
    CALL support_codec.cpp_CLZWDecompress_ctor_FUN_004399f0 ; 004a44b1
        ;   XREF to: 004399f0 (UNCONDITIONAL_CALL)  ; CLZWDecompress * support_codec.cpp_CLZWDecompress_ctor_FUN_004399f0(CLZWDecompress * this_ptr, int buffer_size, int initial_bits)
    ADD ESP,0xc                         ; 004a44b6
    LEA EAX,[ESP + 0x5cc]               ; 004a44b9
    PUSH EAX                            ; 004a44c0
    CALL support_codec.cpp_CLZWDecompress_init_FUN_00439a30 ; 004a44c1
        ;   XREF to: 00439a30 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDecompress_init_FUN_00439a30(CLZWDecompress * this_ptr)
    ADD ESP,0x4                         ; 004a44c6
    LEA EAX,[ESP + 0x594]               ; 004a44c9
    PUSH EAX                            ; 004a44d0
    LEA EAX,[ESP + 0x608]               ; 004a44d1
    PUSH EAX                            ; 004a44d8
    LEA EAX,[ESP + 0x51c]               ; 004a44d9
    PUSH EAX                            ; 004a44e0
    LEA EAX,[ESP + 0x5d8]               ; 004a44e1
    PUSH EAX                            ; 004a44e8
    CALL support_codec.cpp_CLZWDecompress_process_FUN_00439a70 ; 004a44e9
        ;   XREF to: 00439a70 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDecompress_process_FUN_00439a70(CLZWDecompress * this_ptr, _istream * istream, int * byte_count, _ostream * ostream)
    ADD ESP,0x10                        ; 004a44ee
    LEA EAX,[ESP + 0x594]               ; 004a44f1
    PUSH EAX                            ; 004a44f8
    LEA EAX,[ESP + 0x5d0]               ; 004a44f9
    PUSH EAX                            ; 004a4500
    CALL support_codec.cpp_CLZWDecompress_finalize_FUN_00439af0 ; 004a4501
        ;   XREF to: 00439af0 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDecompress_finalize_FUN_00439af0(CLZWDecompress * this_ptr, _ostream * ostream)
    ADD ESP,0x8                         ; 004a4506
    LEA EAX,[ESP + 0x4d0]               ; 004a4509
    PUSH EAX                            ; 004a4510
    CALL crt_iostream.cpp_ostream_flush_FUN_00565e59 ; 004a4511
        ;   XREF to: 00565e59 (UNCONDITIONAL_CALL)  ; int crt_iostream.cpp_ostream_flush_FUN_00565e59(void * this_ptr)
    ADD ESP,0x4                         ; 004a4516
    LEA EAX,[ESP + 0x550]               ; 004a4519
    PUSH EAX                            ; 004a4520
    CALL crt_iostream.cpp_ostream_flush_FUN_00565e59 ; 004a4521
        ;   XREF to: 00565e59 (UNCONDITIONAL_CALL)  ; int crt_iostream.cpp_ostream_flush_FUN_00565e59(void * this_ptr)
    ADD ESP,0x4                         ; 004a4526
    CMP dword ptr [ESP + 0x604],0x0     ; 004a4529
    JNZ 0x004a4741                      ; 004a4531
        ;   XREF to: 004a4741 (CONDITIONAL_JUMP)  ; LAB_004a4741
    PUSH 0x583cef                       ; 004a4537 | = "rt"
    PUSH 0x5b9370                       ; 004a453c | = "save\\$$SAVE$$.TMP"
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004a4541
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004a4546
    MOV EBX,EAX                         ; 004a4549
    TEST EAX,EAX                        ; 004a454b
    JNZ 0x004a4577                      ; 004a454d
        ;   XREF to: 004a4577 (CONDITIONAL_JUMP)  ; LAB_004a4577
    PUSH 0x5b9370                       ; 004a454f | = "save\\$$SAVE$$.TMP"
    MOV EDX,0x583cf2                    ; 004a4554 | = "..\\core\\game.cpp"
    MOV ECX,0xe2f                       ; 004a4559
    PUSH 0x583d03                       ; 004a455e | = "Can't reopen %s"
    MOV dword ptr [0x01cc4800],EDX      ; 004a4563 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 004a4569 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004a456f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 004a4574
    PUSH 0x0                            ; 004a4577
        ;   Label: LAB_004a4577
    LEA EAX,[ESP + 0x5d4]               ; 004a4579
    PUSH EAX                            ; 004a4580
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00439370 ; 004a4581
        ;   XREF to: 00439370 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00439370(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a4586
    PUSH 0x1                            ; 004a4589
    LEA EAX,[ESP + 0x5d0]               ; 004a458b
    PUSH EAX                            ; 004a4592
    CALL support_codec.cpp_CCodec_dtor_FUN_00438f30 ; 004a4593
        ;   XREF to: 00438f30 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00438f30(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a4598
    PUSH 0x0                            ; 004a459b
    LEA EAX,[ESP + 0x554]               ; 004a459d
    PUSH EAX                            ; 004a45a4
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005651ca ; 004a45a5
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005651ca(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a45aa
    PUSH 0x0                            ; 004a45ad
    LEA EAX,[ESP + 0x4d4]               ; 004a45af
    PUSH EAX                            ; 004a45b6
    CALL crt_fstream.cpp_ifstream_dtor_FUN_00565264 ; 004a45b7
        ;   XREF to: 00565264 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_00565264(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a45bc
    PUSH EBX                            ; 004a45bf
        ;   Label: LAB_004a45bf
    PUSH 0xff                           ; 004a45c0
    LEA EAX,[ESP + 0x310]               ; 004a45c5
    PUSH EAX                            ; 004a45cc
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004a45cd
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004a45d2
    PUSH 0xa                            ; 004a45d5
    PUSH 0x583d13                       ; 004a45d7 | = "CInventory"
    LEA EAX,[ESP + 0x310]               ; 004a45dc
    PUSH EAX                            ; 004a45e3
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004a45e4
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004a45e9
    TEST EAX,EAX                        ; 004a45ec
    JNZ 0x004a47ae                      ; 004a45ee
        ;   XREF to: 004a47ae (CONDITIONAL_JUMP)  ; LAB_004a47ae
    PUSH EBX                            ; 004a45f4
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a45f5
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a45fa
    LEA EAX,[ESP + 0x104]               ; 004a45fd
    PUSH EAX                            ; 004a4604
    PUSH 0x583d1e                       ; 004a4605 | = "Can't load old save game file %s.  So..."
    MOV ECX,dword ptr [0x005b6d50]      ; 004a460a | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 004a4610
    CALL shape_edittool.cpp_FUN_0046fe60 ; 004a4611
        ;   XREF to: 0046fe60 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fe60()
    ADD ESP,0xc                         ; 004a4616
    JMP 0x004a4289                      ; 004a4619
        ;   XREF to: 004a4289 (UNCONDITIONAL_JUMP)  ; LAB_004a4289
    XOR AH,AH                           ; 004a461e
        ;   Label: LAB_004a461e
    MOV byte ptr [ESP + 0x104],AH       ; 004a4620
    JMP 0x004a420f                      ; 004a4627
        ;   XREF to: 004a420f (UNCONDITIONAL_JUMP)  ; LAB_004a420f
    MOV EAX,[0x014b9900]                ; 004a462c | g_CBitFont_PTR_014b9900
        ;   Label: LAB_004a462c
    MOV [0x01bcd070],EAX                ; 004a4631 | DAT_01bcd070
    JMP 0x004a422a                      ; 004a4636
        ;   XREF to: 004a422a (UNCONDITIONAL_JUMP)  ; LAB_004a422a
    PUSH 0x1                            ; 004a463b
        ;   Label: LAB_004a463b
    LEA EAX,[ESP + 0x108]               ; 004a463d
    PUSH EAX                            ; 004a4644
    PUSH 0x583c3c                       ; 004a4645 | = "*.noc"
    PUSH 0x583c42                       ; 004a464a | = "save"
    PUSH 0x583c47                       ; 004a464f | = "Select file to load"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4654
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a4659
    PUSH EAX                            ; 004a465c
    MOV EBX,dword ptr [0x005b6d50]      ; 004a465d | g_CEditorTools_PTR_005b6d50
    PUSH EBX                            ; 004a4663
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550 ; 004a4664
        ;   XREF to: 00470550 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 004a4669
    TEST EAX,EAX                        ; 004a466c
    JNZ 0x004a42bb                      ; 004a466e
        ;   XREF to: 004a42bb (CONDITIONAL_JUMP)  ; LAB_004a42bb
    MOV EAX,dword ptr [ESP + 0x608]     ; 004a4674
        ;   Label: LAB_004a4674
    MOV [0x01bcd070],EAX                ; 004a467b | DAT_01bcd070
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004a4680
    PUSH 0x5b9370                       ; 004a4687 | = "save\\$$SAVE$$.TMP"
    MOV dword ptr [EAX + 0x234],0x0     ; 004a468c
    CALL crt_stdio.c_remove_FUN_005657c0 ; 004a4696
        ;   XREF to: 005657c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005657c0(char * filename)
    ADD ESP,0x4                         ; 004a469b
    ADD ESP,0x628                       ; 004a469e
        ;   Label: LAB_004a469e
    POP EBP                             ; 004a46a4
    POP EDI                             ; 004a46a5
    POP ESI                             ; 004a46a6
    POP EBX                             ; 004a46a7
    RET                                 ; 004a46a8
    PUSH 0x583c77                       ; 004a46a9 | = "Can't open saved game file."
        ;   Label: LAB_004a46a9
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a46ae
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a46b3
    PUSH EAX                            ; 004a46b6
    MOV EBX,dword ptr [0x005b6d50]      ; 004a46b7 | g_CEditorTools_PTR_005b6d50
    PUSH EBX                            ; 004a46bd
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004a46be
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004a46c3
    PUSH 0x0                            ; 004a46c6
    LEA EAX,[ESP + 0x554]               ; 004a46c8
    PUSH EAX                            ; 004a46cf
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005651ca ; 004a46d0
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005651ca(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a46d5
    PUSH 0x0                            ; 004a46d8
    LEA EAX,[ESP + 0x4d4]               ; 004a46da
    PUSH EAX                            ; 004a46e1
    CALL crt_fstream.cpp_ifstream_dtor_FUN_00565264 ; 004a46e2
        ;   XREF to: 00565264 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_00565264(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a46e7
    ADD ESP,0x628                       ; 004a46ea
    POP EBP                             ; 004a46f0
    POP EDI                             ; 004a46f1
    POP ESI                             ; 004a46f2
    POP EBX                             ; 004a46f3
    RET                                 ; 004a46f4
    PUSH 0x583c93                       ; 004a46f5 | = "Can't create temp file to load saved ..."
        ;   Label: LAB_004a46f5
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a46fa
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a46ff
    PUSH EAX                            ; 004a4702
    MOV EDI,dword ptr [0x005b6d50]      ; 004a4703 | g_CEditorTools_PTR_005b6d50
    PUSH EDI                            ; 004a4709
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004a470a
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004a470f
    PUSH 0x0                            ; 004a4712
    LEA EAX,[ESP + 0x554]               ; 004a4714
    PUSH EAX                            ; 004a471b
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005651ca ; 004a471c
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005651ca(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a4721
    PUSH 0x0                            ; 004a4724
    LEA EAX,[ESP + 0x4d4]               ; 004a4726
    PUSH EAX                            ; 004a472d
    CALL crt_fstream.cpp_ifstream_dtor_FUN_00565264 ; 004a472e
        ;   XREF to: 00565264 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_00565264(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a4733
    ADD ESP,0x628                       ; 004a4736
    POP EBP                             ; 004a473c
    POP EDI                             ; 004a473d
    POP ESI                             ; 004a473e
    POP EBX                             ; 004a473f
    RET                                 ; 004a4740
    PUSH 0x583cc3                       ; 004a4741 | = "Error writing temp file to load saved..."
        ;   Label: LAB_004a4741
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4746
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a474b
    PUSH EAX                            ; 004a474e
    MOV EBX,dword ptr [0x005b6d50]      ; 004a474f | g_CEditorTools_PTR_005b6d50
    PUSH EBX                            ; 004a4755
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004a4756
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004a475b
    PUSH ESI                            ; 004a475e
    LEA EAX,[ESP + 0x5d4]               ; 004a475f
    PUSH EAX                            ; 004a4766
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00439370 ; 004a4767
        ;   XREF to: 00439370 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00439370(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a476c
    PUSH 0x1                            ; 004a476f
    LEA EAX,[ESP + 0x5d0]               ; 004a4771
    PUSH EAX                            ; 004a4778
    CALL support_codec.cpp_CCodec_dtor_FUN_00438f30 ; 004a4779
        ;   XREF to: 00438f30 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00438f30(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a477e
    PUSH ESI                            ; 004a4781
    LEA EAX,[ESP + 0x554]               ; 004a4782
    PUSH EAX                            ; 004a4789
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005651ca ; 004a478a
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005651ca(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a478f
    PUSH ESI                            ; 004a4792
    LEA EAX,[ESP + 0x4d4]               ; 004a4793
    PUSH EAX                            ; 004a479a
    CALL crt_fstream.cpp_ifstream_dtor_FUN_00565264 ; 004a479b
        ;   XREF to: 00565264 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_00565264(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a47a0
    ADD ESP,0x628                       ; 004a47a3
    POP EBP                             ; 004a47a9
    POP EDI                             ; 004a47aa
    POP ESI                             ; 004a47ab
    POP EBX                             ; 004a47ac
    RET                                 ; 004a47ad
    LEA EAX,[ESP + 0x600]               ; 004a47ae
        ;   Label: LAB_004a47ae
    PUSH EAX                            ; 004a47b5
    PUSH 0x583d48                       ; 004a47b6 | = "%d\n"
    PUSH EBX                            ; 004a47bb
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004a47bc
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004a47c1
    CMP dword ptr [ESP + 0x600],0x3     ; 004a47c4
    JL 0x004a4a74                       ; 004a47cc
        ;   XREF to: 004a4a74 (CONDITIONAL_JUMP)  ; LAB_004a4a74
    PUSH EBP                            ; 004a47d2
    PUSH EBX                            ; 004a47d3
    MOV EDI,dword ptr [0x005baf90]      ; 004a47d4 | g_CDemonMission_PTR_005baf90
    PUSH EDI                            ; 004a47da
    CALL core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0 ; 004a47db
        ;   XREF to: 004d7fe0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0(CDemonMission * this_ptr, _FILE * file_handle, int load_flags)
    ADD ESP,0xc                         ; 004a47e0
    PUSH EBX                            ; 004a47e3
    PUSH 0xff                           ; 004a47e4
    LEA EAX,[ESP + 0x310]               ; 004a47e9
    PUSH EAX                            ; 004a47f0
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004a47f1
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004a47f6
    PUSH 0x1cae0e8                      ; 004a47f9 | DAT_01cae0e8
    PUSH 0x1cae0d4                      ; 004a47fe | DAT_01cae0d4
    PUSH 0x583d76                       ; 004a4803 | = "%d, %d\n"
    PUSH EBX                            ; 004a4808
    XOR EBP,EBP                         ; 004a4809
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004a480b
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004a4810
    MOV EAX,[0x01cae0d4]                ; 004a4813 | DAT_01cae0d4
    MOV dword ptr [ESP + 0x624],EBP     ; 004a4818
    TEST EAX,EAX                        ; 004a481f
    JLE 0x004a48c5                      ; 004a4821
        ;   XREF to: 004a48c5 (CONDITIONAL_JUMP)  ; LAB_004a48c5
    LEA EAX,[ESP + 0x408]               ; 004a4827
        ;   Label: LAB_004a4827
    PUSH EAX                            ; 004a482e
    MOV ECX,0x32                        ; 004a482f
    PUSH 0x583d7e                       ; 004a4834 | = "%[^\n]\n"
    LEA EDI,[ESP + 0x410]               ; 004a4839
    MOV ESI,0x5b9388                    ; 004a4840 | = "(file corrupt)"
    PUSH EBX                            ; 004a4845
    MOVSD.REP ES:EDI,ESI                ; 004a4846 | = "(file corrupt)" | s_file_corrupt_005b9388+4
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004a4848
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004a484d
    MOV EAX,[0x01cae124]                ; 004a4850 | g_CHeroActorType_01cae0ec.name_hash
    PUSH EAX                            ; 004a4855
    LEA EAX,[ESP + 0x40c]               ; 004a4856
    PUSH EAX                            ; 004a485d
    MOV EDX,dword ptr [0x005baf90]      ; 004a485e | g_CDemonMission_PTR_005baf90
    PUSH EDX                            ; 004a4864
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0 ; 004a4865
        ;   XREF to: 004d90a0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 004a486a
    PUSH EAX                            ; 004a486d
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004a486e
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a4873
    MOV dword ptr [EBP + 0x1cae0d8],EAX ; 004a4876
    TEST EAX,EAX                        ; 004a487c
    JNZ 0x004a48a5                      ; 004a487e
        ;   XREF to: 004a48a5 (CONDITIONAL_JUMP)  ; LAB_004a48a5
    PUSH EBX                            ; 004a4880
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a4881
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a4886
    LEA EAX,[ESP + 0x408]               ; 004a4889
    PUSH EAX                            ; 004a4890
    PUSH 0x583d85                       ; 004a4891 | = "Can't find hero %s.  Sorry."
    MOV ESI,dword ptr [0x005b6d50]      ; 004a4896 | g_CEditorTools_PTR_005b6d50
    PUSH ESI                            ; 004a489c
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004a489d
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0xc                         ; 004a48a2
    MOV ESI,dword ptr [ESP + 0x624]     ; 004a48a5
        ;   Label: LAB_004a48a5
    MOV EDI,dword ptr [0x01cae0d4]      ; 004a48ac | DAT_01cae0d4
    INC ESI                             ; 004a48b2
    ADD EBP,0x4                         ; 004a48b3
    MOV dword ptr [ESP + 0x624],ESI     ; 004a48b6
    CMP ESI,EDI                         ; 004a48bd
    JL 0x004a4827                       ; 004a48bf
        ;   XREF to: 004a4827 (CONDITIONAL_JUMP)  ; LAB_004a4827
    MOV EBP,dword ptr [0x005baf90]      ; 004a48c5 | g_CDemonMission_PTR_005baf90
        ;   Label: LAB_004a48c5
    PUSH EBP                            ; 004a48cb
    CALL core_mission.cpp_CDemonMission_startMission_FUN_004d9780 ; 004a48cc
        ;   XREF to: 004d9780 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_startMission_FUN_004d9780(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004a48d1
    TEST EAX,EAX                        ; 004a48d4
    JZ 0x004a4674                       ; 004a48d6
        ;   XREF to: 004a4674 (CONDITIONAL_JUMP)  ; LAB_004a4674
    PUSH EBX                            ; 004a48dc
    MOV EAX,[0x005b7650]                ; 004a48dd | DAT_005b7650
    PUSH EAX                            ; 004a48e2
    CALL core_event.cpp_CEventList_loadState_FUN_00480f70 ; 004a48e3
        ;   XREF to: 00480f70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_loadState_FUN_00480f70(CEventList * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004a48e8
    PUSH EBX                            ; 004a48eb
    MOV EDX,dword ptr [0x005be220]      ; 004a48ec | DAT_005be220
    PUSH EDX                            ; 004a48f2 | g_CScript_01e56da0
    CALL core_script.cpp_CScript_loadState_FUN_005052c0 ; 004a48f3
        ;   XREF to: 005052c0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadState_FUN_005052c0(CScript * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004a48f8
    MOV ECX,dword ptr [ESP + 0x600]     ; 004a48fb
    CMP ECX,0x4                         ; 004a4902
    JL 0x004a4a9e                       ; 004a4905
        ;   XREF to: 004a4a9e (CONDITIONAL_JUMP)  ; LAB_004a4a9e
    JNZ 0x004a491d                      ; 004a490b
        ;   XREF to: 004a491d (CONDITIONAL_JUMP)  ; LAB_004a491d
    PUSH EBX                            ; 004a490d
    MOV EDI,dword ptr [0x005b96c4]      ; 004a490e | g_CGore_PTR_005b96c4
    PUSH EDI                            ; 004a4914
    CALL core_gore.cpp_CGore_load_FUN_004b0820 ; 004a4915
        ;   XREF to: 004b0820 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_load_FUN_004b0820(CGore * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004a491a
    CMP dword ptr [ESP + 0x600],0x7     ; 004a491d
        ;   Label: LAB_004a491d
    JGE 0x004a4ab2                      ; 004a4925
        ;   XREF to: 004a4ab2 (CONDITIONAL_JUMP)  ; LAB_004a4ab2
    MOV ECX,dword ptr [0x005b80f0]      ; 004a492b | g_CFireEffect_PTR_005b80f0
    PUSH ECX                            ; 004a4931
    CALL core_fire.cpp_CFireEffect_init_FUN_0048a150 ; 004a4932
        ;   XREF to: 0048a150 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_0048a150(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004a4937
    CMP dword ptr [ESP + 0x600],0x6     ; 004a493a
        ;   Label: LAB_004a493a
    JL 0x004a4ac7                       ; 004a4942
        ;   XREF to: 004a4ac7 (CONDITIONAL_JUMP)  ; LAB_004a4ac7
    PUSH EBX                            ; 004a4948
    PUSH 0xff                           ; 004a4949
    LEA EAX,[ESP + 0x310]               ; 004a494e
    PUSH EAX                            ; 004a4955
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004a4956
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004a495b
    PUSH 0x1c7869c                      ; 004a495e | DAT_01c7869c
    PUSH 0x583da1                       ; 004a4963 | = "%d\n"
    PUSH EBX                            ; 004a4968
    MOV ESI,0x1                         ; 004a4969
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004a496e
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EBP,dword ptr [0x01c7869c]      ; 004a4973 | DAT_01c7869c
    ADD ESP,0xc                         ; 004a4979
    CMP EBP,ESI                         ; 004a497c
    JL 0x004a49a5                       ; 004a497e
        ;   XREF to: 004a49a5 (CONDITIONAL_JUMP)  ; LAB_004a49a5
    MOV EBP,0x1c7869c                   ; 004a4980
    ADD EBP,0x4                         ; 004a4985
    PUSH EBP                            ; 004a4988 | DAT_01c786a0 | DAT_01c786a4
        ;   Label: LAB_004a4988
    PUSH 0x583da5                       ; 004a4989 | = "%d\n"
    PUSH EBX                            ; 004a498e
    INC ESI                             ; 004a498f
    ADD EBP,0x4                         ; 004a4990
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004a4993
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EDI,dword ptr [0x01c7869c]      ; 004a4998 | DAT_01c7869c
    ADD ESP,0xc                         ; 004a499e
    CMP ESI,EDI                         ; 004a49a1
    JLE 0x004a4988                      ; 004a49a3
        ;   XREF to: 004a4988 (CONDITIONAL_JUMP)  ; LAB_004a4988
    MOV dword ptr [0x01c78698],0x1      ; 004a49a5 | DAT_01c78698
        ;   Label: LAB_004a49a5
    CMP dword ptr [ESP + 0x600],0x8     ; 004a49af
        ;   Label: LAB_004a49af
    JL 0x004a49fd                       ; 004a49b7
        ;   XREF to: 004a49fd (CONDITIONAL_JUMP)  ; LAB_004a49fd
    PUSH EBX                            ; 004a49b9
    PUSH 0xff                           ; 004a49ba
    LEA EAX,[ESP + 0x310]               ; 004a49bf
    PUSH EAX                            ; 004a49c6
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004a49c7
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004a49cc
    MOV EDX,dword ptr [ESP + 0x610]     ; 004a49cf
    PUSH EDX                            ; 004a49d6
    MOV ECX,dword ptr [ESP + 0x61c]     ; 004a49d7
    PUSH ECX                            ; 004a49de
    MOV ESI,dword ptr [ESP + 0x61c]     ; 004a49df
    PUSH ESI                            ; 004a49e6
    MOV EDI,dword ptr [ESP + 0x628]     ; 004a49e7
    PUSH EDI                            ; 004a49ee
    PUSH 0x583da9                       ; 004a49ef | = "%f,%f,%d,%d\n"
    PUSH EBX                            ; 004a49f4
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004a49f5
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x18                        ; 004a49fa
    CMP dword ptr [ESP + 0x600],0x9     ; 004a49fd
        ;   Label: LAB_004a49fd
    JL 0x004a4a16                       ; 004a4a05
        ;   XREF to: 004a4a16 (CONDITIONAL_JUMP)  ; LAB_004a4a16
    PUSH EBX                            ; 004a4a07
    MOV EAX,[0x005be368]                ; 004a4a08 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 004a4a0d | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_loadStateInfo_FUN_0050e920 ; 004a4a0e
        ;   XREF to: 0050e920 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_loadStateInfo_FUN_0050e920(CDemonSet * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004a4a13
    PUSH EBX                            ; 004a4a16
        ;   Label: LAB_004a4a16
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a4a17
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a4a1c
    CMP dword ptr [ESP + 0x644],0x0     ; 004a4a1f
    JZ 0x004a469e                       ; 004a4a27
        ;   XREF to: 004a469e (CONDITIONAL_JUMP)  ; LAB_004a469e
    MOV ECX,dword ptr [0x005baf90]      ; 004a4a2d | g_CDemonMission_PTR_005baf90
    PUSH ECX                            ; 004a4a33
    CALL core_mission.cpp_CDemonMission_run_FUN_004d9440 ; 004a4a34
        ;   XREF to: 004d9440 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_004d9440(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004a4a39
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004a4a3c
    CMP dword ptr [EAX + 0x9c4],0x0     ; 004a4a43
    JZ 0x004a4674                       ; 004a4a4a
        ;   XREF to: 004a4674 (CONDITIONAL_JUMP)  ; LAB_004a4674
    MOV EAX,dword ptr [ESP + 0x60c]     ; 004a4a50
    MOV dword ptr [ESP + 0x640],EAX     ; 004a4a57
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004a4a5e
    MOV dword ptr [EAX + 0x9c4],0x0     ; 004a4a65
    JMP 0x004a4289                      ; 004a4a6f
        ;   XREF to: 004a4289 (UNCONDITIONAL_JUMP)  ; LAB_004a4289
    PUSH EBX                            ; 004a4a74
        ;   Label: LAB_004a4a74
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a4a75
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a4a7a
    LEA EAX,[ESP + 0x104]               ; 004a4a7d
    PUSH EAX                            ; 004a4a84
    PUSH 0x583d4c                       ; 004a4a85 | = "Can't load old save game file %s.  So..."
    MOV EDX,dword ptr [0x005b6d50]      ; 004a4a8a | g_CEditorTools_PTR_005b6d50
    PUSH EDX                            ; 004a4a90
    CALL shape_edittool.cpp_FUN_0046fe60 ; 004a4a91
        ;   XREF to: 0046fe60 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fe60()
    ADD ESP,0xc                         ; 004a4a96
    JMP 0x004a4289                      ; 004a4a99
        ;   XREF to: 004a4289 (UNCONDITIONAL_JUMP)  ; LAB_004a4289
    MOV EBP,dword ptr [0x005b96c4]      ; 004a4a9e | g_CGore_PTR_005b96c4
        ;   Label: LAB_004a4a9e
    PUSH EBP                            ; 004a4aa4
    CALL core_gore.cpp_CGore_reset_FUN_004afdb0 ; 004a4aa5
        ;   XREF to: 004afdb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_reset_FUN_004afdb0(CGore * this_ptr)
    ADD ESP,0x4                         ; 004a4aaa
    JMP 0x004a491d                      ; 004a4aad
        ;   XREF to: 004a491d (UNCONDITIONAL_JUMP)  ; LAB_004a491d
    PUSH EBX                            ; 004a4ab2
        ;   Label: LAB_004a4ab2
    MOV EDX,dword ptr [0x005b80f0]      ; 004a4ab3 | g_CFireEffect_PTR_005b80f0
    PUSH EDX                            ; 004a4ab9
    CALL core_fire.cpp_CFireEffect_load_FUN_0048c7d0 ; 004a4aba
        ;   XREF to: 0048c7d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_load_FUN_0048c7d0(CFireEffect * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004a4abf
    JMP 0x004a493a                      ; 004a4ac2
        ;   XREF to: 004a493a (UNCONDITIONAL_JUMP)  ; LAB_004a493a
    XOR EDI,EDI                         ; 004a4ac7
        ;   Label: LAB_004a4ac7
    MOV dword ptr [0x01c78698],EDI      ; 004a4ac9 | DAT_01c78698
    JMP 0x004a49af                      ; 004a4acf
        ;   XREF to: 004a49af (UNCONDITIONAL_JUMP)  ; LAB_004a49af

