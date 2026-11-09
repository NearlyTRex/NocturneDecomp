; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_FUN_004ed260(void)
;
; Local Variables:
; undefined4       Stack[-0xa68]:4  local_a68
; undefined4       Stack[-0xa64]:4  local_a64
; undefined8       Stack[-0xa60]:8  local_a60
; undefined8       Stack[-0xa58]:8  local_a58
; undefined8       Stack[-0xa50]:8  local_a50
; undefined4       Stack[-0xa48]:4  local_a48
; undefined4       Stack[-0xa44]:4  local_a44
; undefined4       Stack[-0xa40]:4  local_a40
; undefined4       Stack[-0xa3c]:4  local_a3c
; undefined        Stack[-0xa38]:1  local_a38
; undefined        Stack[-0x678]:1  local_678
; undefined1       Stack[-0x560]:1  local_560
; undefined1       Stack[-0x55f]:1  local_55f
; undefined4       Stack[-0x458]:4  local_458
; undefined        Stack[-0x448]:1  local_448
; undefined1       Stack[-0x447]:1  local_447
; undefined        Stack[-0x348]:1  local_348
; undefined1       Stack[-0x347]:1  local_347
; undefined        Stack[-0x248]:1  local_248
; undefined1       Stack[-0x247]:1  local_247
; undefined        Stack[-0x148]:1  local_148
; undefined1       Stack[-0x147]:1  local_147
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
; XREF[1]:
;   core_menu.cpp_FUN_004ee1a0 at 004ee367
;
; Referenced Globals:
;   void* switchdataD_004ed230 = 004edb23
;   undefined4 s_Sound_005dd0b4+1
;   TerminatedCString s_Muted_005dd0be
;   undefined4 DAT_005dd0c4
;   TerminatedCString s_Sound_effects_005dd0c7
;   undefined4 DAT_005dd0d8
;   undefined4 DAT_005dd0db
;   TerminatedCString s_Sound_effects_Off_005dd0de
;   TerminatedCString s_Dialog_005dd0f2
;   undefined4 DAT_005dd0fc
;   undefined4 DAT_005dd0ff
;   TerminatedCString s_Dialog_Off_005dd102
;   TerminatedCString s_Music_Vol_005dd10f
;   undefined4 DAT_005dd11c
;   undefined4 DAT_005dd11f
;   ... and 44 more
;
; Called Functions:
;   core_game.cpp_FUN_004b3000
;   core_game.cpp_FUN_004b3010
;   core_menu.cpp_FUN_004eaf30
;   core_menu.cpp_FUN_004eb0e0
;   core_moon.cpp_FUN_005024a0
;   core_moon.cpp_FUN_00502510
;   core_set.cpp_FUN_005344c0
;   core_sound.cpp_FUN_0055ac50
;   crt_math.c_pow_FUN_005b9484
;   crt_math.c_round_FUN_005b7ff0
;   crt_unknown.c_FUN_005b7790
;   shape_edittool.cpp_CPickList_ctor_FUN_00481fc0
;   shape_edittool.cpp_CPickList_dtor_FUN_004820b0
;   shape_edittool.cpp_CStrList_add_FUN_00480e70
;   shape_edittool.cpp_FUN_00482250
;   ... and 31 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed260
        ;   Label: core_menu.cpp_FUN_004ed260
    PUSH ESI                            ; 004ed261
    PUSH EDI                            ; 004ed262
    PUSH EBP                            ; 004ed263
    MOV EBP,ESP                         ; 004ed264
    SUB ESP,0xa50                       ; 004ed266
    AND ESP,0xfffffff8                  ; 004ed26c
    MOV ECX,dword ptr [0x00616494]      ; 004ed26f | g_CGamePtr
    XOR EDX,EDX                         ; 004ed275
    PUSH ECX                            ; 004ed277 | g_CGameInstance
    MOV dword ptr [ESP + 0xa28],EDX     ; 004ed278
    CALL core_game.cpp_FUN_004b3000     ; 004ed27f
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b3000(CGame * this_ptr)
    MOV EDX,0x1d074a8                   ; 004ed284
    ADD ESP,0x4                         ; 004ed289
    XOR EAX,EAX                         ; 004ed28c
    MOV dword ptr [EAX + 0x1d07ea8],EDX ; 004ed28e
        ;   Label: LAB_004ed28e
    ADD EAX,0x4                         ; 004ed294
    ADD EDX,0x100                       ; 004ed297
    CMP EAX,0x28                        ; 004ed29d
    JNZ 0x004ed28e                      ; 004ed2a0
        ;   XREF to: 004ed28e (CONDITIONAL_JUMP)  ; LAB_004ed28e
    MOV EBX,dword ptr [0x00616494]      ; 004ed2a2 | g_CGamePtr
        ;   Label: LAB_004ed2a2
    PUSH EBX                            ; 004ed2a8 | g_CGameInstance
    CALL core_game.cpp_FUN_004b3010     ; 004ed2a9
        ;   XREF to: 004b3010 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b3010(CGame * this_ptr)
    ADD ESP,0x4                         ; 004ed2ae
    PUSH 0x10000                        ; 004ed2b1
    PUSH 0xc350                         ; 004ed2b6
    PUSH 0xc350                         ; 004ed2bb
    MOV EAX,[0x0061b5a8]                ; 004ed2c0 | g_CDemonSetPtr
    PUSH EAX                            ; 004ed2c5
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004ed2c6 | g_CDemonSetInstance.field1420932_0x15ae84
    CALL core_set.cpp_FUN_005344c0      ; 004ed2d0
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    MOV EAX,[0x0061b5a8]                ; 004ed2d5 | g_CDemonSetPtr
    ADD ESP,0x10                        ; 004ed2da
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004ed2dd | g_CDemonSetInstance.field1420948_0x15ae94
    MOV EAX,[0x00616494]                ; 004ed2e7 | g_CGamePtr
    SUB ESP,0x4                         ; 004ed2ec
    MOV EDX,dword ptr [EAX + 0x284]     ; 004ed2ef | g_CGameInstance.field644_0x284
    MOV dword ptr [ESP],EDX             ; 004ed2f5
    PUSH 0x1d05620                      ; 004ed2f8
    CALL core_moon.cpp_FUN_005024a0     ; 004ed2fd
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_005024a0()
    ADD ESP,0x8                         ; 004ed302
    PUSH 0x1d05620                      ; 004ed305
    CALL core_moon.cpp_FUN_00502510     ; 004ed30a
        ;   XREF to: 00502510 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00502510()
    ADD ESP,0x4                         ; 004ed30f
    XOR ESI,ESI                         ; 004ed312
    MOV EAX,[0x0061b5a8]                ; 004ed314 | g_CDemonSetPtr
    PUSH 0x5dd0b5                       ; 004ed319 | s_Sound_005dd0b4+1
    MOV dword ptr [ESP + 0xa38],ESI     ; 004ed31e
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004ed325 | g_CDemonSetInstance.field1420932_0x15ae84
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed32f
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed334
    MOV EDI,0x1d074a8                   ; 004ed337
    MOV ESI,EAX                         ; 004ed33c
    PUSH EDI                            ; 004ed33e
    MOV AL,byte ptr [ESI]               ; 004ed33f
        ;   Label: LAB_004ed33f
    MOV byte ptr [EDI],AL               ; 004ed341 | DAT_01d074a8 | DAT_01d074aa
    CMP AL,0x0                          ; 004ed343
    JZ 0x004ed357                       ; 004ed345
        ;   XREF to: 004ed357 (CONDITIONAL_JUMP)  ; LAB_004ed357
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed347
    ADD ESI,0x2                         ; 004ed34a
    MOV byte ptr [EDI + 0x1],AL         ; 004ed34d | DAT_01d074a9 | DAT_01d074ab
    ADD EDI,0x2                         ; 004ed350
    CMP AL,0x0                          ; 004ed353
    JNZ 0x004ed33f                      ; 004ed355
        ;   XREF to: 004ed33f (CONDITIONAL_JUMP)  ; LAB_004ed33f
    POP EDI                             ; 004ed357
        ;   Label: LAB_004ed357
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00550bc0 ; 004ed358
        ;   XREF to: 00550bc0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00550bc0()
    TEST EAX,EAX                        ; 004ed35d
    JNZ 0x004edb71                      ; 004ed35f
        ;   XREF to: 004edb71 (CONDITIONAL_JUMP)  ; LAB_004edb71
    PUSH 0x5dd0c4                       ; 004ed365 | DAT_005dd0c4
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed36a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
        ;   Label: LAB_004ed36a
    ADD ESP,0x4                         ; 004ed36f
    MOV ESI,EAX                         ; 004ed372
    PUSH EDI                            ; 004ed374 | DAT_01d074a8
    SUB ECX,ECX                         ; 004ed375
    DEC ECX                             ; 004ed377
    MOV AL,0x0                          ; 004ed378
    SCASB.REPNE ES:EDI                  ; 004ed37a | DAT_01d074a8 | DAT_01d074a9
    DEC EDI                             ; 004ed37c
    MOV AL,byte ptr [ESI]               ; 004ed37d
        ;   Label: LAB_004ed37d
    MOV byte ptr [EDI],AL               ; 004ed37f | DAT_01d074a8 | DAT_01d074aa | DAT_01d074a9
    CMP AL,0x0                          ; 004ed381
    JZ 0x004ed395                       ; 004ed383
        ;   XREF to: 004ed395 (CONDITIONAL_JUMP)  ; LAB_004ed395
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed385
    ADD ESI,0x2                         ; 004ed388
    MOV byte ptr [EDI + 0x1],AL         ; 004ed38b | DAT_01d074a9 | DAT_01d074ab | DAT_01d074aa
    ADD EDI,0x2                         ; 004ed38e
    CMP AL,0x0                          ; 004ed391
    JNZ 0x004ed37d                      ; 004ed393
        ;   XREF to: 004ed37d (CONDITIONAL_JUMP)  ; LAB_004ed37d
    POP EDI                             ; 004ed395
        ;   Label: LAB_004ed395
    MOV EDI,dword ptr [ESP + 0xa34]     ; 004ed396
    PUSH 0x0                            ; 004ed39d
    INC EDI                             ; 004ed39f
    CALL sound_sndmain.cpp_FUN_005512a0 ; 004ed3a0
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005512a0(int channel_index)
    MOV dword ptr [ESP + 0xa38],EDI     ; 004ed3a5
    MOV EBX,EDI                         ; 004ed3ac
    ADD ESP,0x4                         ; 004ed3ae
    SHL EBX,0x8                         ; 004ed3b1
    LEA EDX,[EDI + 0x1]                 ; 004ed3b4
    ADD EBX,0x1d074a8                   ; 004ed3b7
    MOV dword ptr [ESP + 0xa30],EDX     ; 004ed3bd
    TEST EAX,EAX                        ; 004ed3c4
    JZ 0x004edb7b                       ; 004ed3c6
        ;   XREF to: 004edb7b (CONDITIONAL_JUMP)  ; LAB_004edb7b
    PUSH 0x5dd0c7                       ; 004ed3cc | = "Sound effects : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed3d1
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed3d6
    PUSH EAX                            ; 004ed3d9
    PUSH EBX                            ; 004ed3da
    CALL crt_unknown.c_FUN_005b7790     ; 004ed3db
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x8                         ; 004ed3e0
    PUSH 0x0                            ; 004ed3e3
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 004ed3e5
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00551190()
    MOV dword ptr [ESP + 0xa50],EAX     ; 004ed3ea
    FLD float ptr [ESP + 0xa50]         ; 004ed3f1
    FMUL float ptr [0x005dd1f1]         ; 004ed3f8 | DAT_005dd1f1
    FDIV float ptr [0x005f9e34]         ; 004ed3fe | DAT_005f9e34
    FADD double ptr [0x005dd1fd]        ; 004ed404 | DAT_005dd1fd
    ADD ESP,0x4                         ; 004ed40a
    CALL crt_math.c_round_FUN_005b7ff0  ; 004ed40d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xa4c]       ; 004ed412
    MOV EAX,dword ptr [ESP + 0xa4c]     ; 004ed419
    PUSH EAX                            ; 004ed420
    PUSH 0x5dd0d8                       ; 004ed421 | DAT_005dd0d8
    LEA EAX,[ESP + 0x820]               ; 004ed426
    PUSH EAX                            ; 004ed42d
    CALL crt_unknown.c_FUN_005b7790     ; 004ed42e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004ed433
    LEA ESI,[ESP + 0x818]               ; 004ed436
    MOV EDI,EBX                         ; 004ed43d
    PUSH EDI                            ; 004ed43f
    SUB ECX,ECX                         ; 004ed440
    DEC ECX                             ; 004ed442
    MOV AL,0x0                          ; 004ed443
    SCASB.REPNE ES:EDI                  ; 004ed445 | DAT_01d074a8 | DAT_01d074a9
    DEC EDI                             ; 004ed447
    MOV AL,byte ptr [ESI]               ; 004ed448
        ;   Label: LAB_004ed448
    MOV byte ptr [EDI],AL               ; 004ed44a | DAT_01d074a8 | DAT_01d074a9
    CMP AL,0x0                          ; 004ed44c
    JZ 0x004ed460                       ; 004ed44e
        ;   XREF to: 004ed460 (CONDITIONAL_JUMP)  ; LAB_004ed460
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed450
    ADD ESI,0x2                         ; 004ed453
    MOV byte ptr [EDI + 0x1],AL         ; 004ed456 | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed459
    CMP AL,0x0                          ; 004ed45c
    JNZ 0x004ed448                      ; 004ed45e
        ;   XREF to: 004ed448 (CONDITIONAL_JUMP)  ; LAB_004ed448
    POP EDI                             ; 004ed460
        ;   Label: LAB_004ed460
    PUSH 0x5dd0db                       ; 004ed461 | DAT_005dd0db
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed466
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed46b
    MOV ESI,EAX                         ; 004ed46e
    PUSH EDI                            ; 004ed470
    SUB ECX,ECX                         ; 004ed471
    DEC ECX                             ; 004ed473
    MOV AL,0x0                          ; 004ed474
    SCASB.REPNE ES:EDI                  ; 004ed476 | DAT_01d074a8 | DAT_01d074a9
    DEC EDI                             ; 004ed478
    MOV AL,byte ptr [ESI]               ; 004ed479
        ;   Label: LAB_004ed479
    MOV byte ptr [EDI],AL               ; 004ed47b | DAT_01d074a8 | DAT_01d074a9
    CMP AL,0x0                          ; 004ed47d
    JZ 0x004ed491                       ; 004ed47f
        ;   XREF to: 004ed491 (CONDITIONAL_JUMP)  ; LAB_004ed491
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed481
    ADD ESI,0x2                         ; 004ed484
    MOV byte ptr [EDI + 0x1],AL         ; 004ed487 | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed48a
    CMP AL,0x0                          ; 004ed48d
    JNZ 0x004ed479                      ; 004ed48f
        ;   XREF to: 004ed479 (CONDITIONAL_JUMP)  ; LAB_004ed479
    POP EDI                             ; 004ed491
        ;   Label: LAB_004ed491
    MOV ESI,dword ptr [ESP + 0xa30]     ; 004ed492
    PUSH 0x2                            ; 004ed499
        ;   Label: LAB_004ed499
    CALL sound_sndmain.cpp_FUN_005512a0 ; 004ed49b
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005512a0(int channel_index)
    MOV EBX,ESI                         ; 004ed4a0
    ADD ESP,0x4                         ; 004ed4a2
    SHL EBX,0x8                         ; 004ed4a5
    INC ESI                             ; 004ed4a8
    ADD EBX,0x1d074a8                   ; 004ed4a9
    MOV dword ptr [ESP + 0xa2c],ESI     ; 004ed4af
    TEST EAX,EAX                        ; 004ed4b6
    JZ 0x004edb9e                       ; 004ed4b8
        ;   XREF to: 004edb9e (CONDITIONAL_JUMP)  ; LAB_004edb9e
    PUSH 0x5dd0f2                       ; 004ed4be | = "Dialog : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed4c3
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed4c8
    MOV EDI,EBX                         ; 004ed4cb
    MOV ESI,EAX                         ; 004ed4cd
    PUSH EDI                            ; 004ed4cf
    MOV AL,byte ptr [ESI]               ; 004ed4d0
        ;   Label: LAB_004ed4d0
    MOV byte ptr [EDI],AL               ; 004ed4d2 | DAT_01d074a8
    CMP AL,0x0                          ; 004ed4d4
    JZ 0x004ed4e8                       ; 004ed4d6
        ;   XREF to: 004ed4e8 (CONDITIONAL_JUMP)  ; LAB_004ed4e8
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed4d8
    ADD ESI,0x2                         ; 004ed4db
    MOV byte ptr [EDI + 0x1],AL         ; 004ed4de | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed4e1
    CMP AL,0x0                          ; 004ed4e4
    JNZ 0x004ed4d0                      ; 004ed4e6
        ;   XREF to: 004ed4d0 (CONDITIONAL_JUMP)  ; LAB_004ed4d0
    POP EDI                             ; 004ed4e8
        ;   Label: LAB_004ed4e8
    PUSH 0x2                            ; 004ed4e9
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 004ed4eb
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00551190()
    MOV dword ptr [ESP + 0xa50],EAX     ; 004ed4f0
    FLD float ptr [ESP + 0xa50]         ; 004ed4f7
    FMUL float ptr [0x005dd1f1]         ; 004ed4fe | DAT_005dd1f1
    FDIV float ptr [0x005f9e38]         ; 004ed504 | DAT_005f9e38
    FADD double ptr [0x005dd1fd]        ; 004ed50a | DAT_005dd1fd
    ADD ESP,0x4                         ; 004ed510
    CALL crt_math.c_round_FUN_005b7ff0  ; 004ed513
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xa4c]       ; 004ed518
    MOV EDX,dword ptr [ESP + 0xa4c]     ; 004ed51f
    PUSH EDX                            ; 004ed526
    PUSH 0x5dd0fc                       ; 004ed527 | DAT_005dd0fc
    LEA EAX,[ESP + 0x720]               ; 004ed52c
    PUSH EAX                            ; 004ed533
    CALL crt_unknown.c_FUN_005b7790     ; 004ed534
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004ed539
    LEA ESI,[ESP + 0x718]               ; 004ed53c
    PUSH EDI                            ; 004ed543
    SUB ECX,ECX                         ; 004ed544
    DEC ECX                             ; 004ed546
    MOV AL,0x0                          ; 004ed547
    SCASB.REPNE ES:EDI                  ; 004ed549 | DAT_01d074a8 | DAT_01d074a9
    DEC EDI                             ; 004ed54b
    MOV AL,byte ptr [ESI]               ; 004ed54c
        ;   Label: LAB_004ed54c
    MOV byte ptr [EDI],AL               ; 004ed54e | DAT_01d074a8 | DAT_01d074a9
    CMP AL,0x0                          ; 004ed550
    JZ 0x004ed564                       ; 004ed552
        ;   XREF to: 004ed564 (CONDITIONAL_JUMP)  ; LAB_004ed564
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed554
    ADD ESI,0x2                         ; 004ed557
    MOV byte ptr [EDI + 0x1],AL         ; 004ed55a | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed55d
    CMP AL,0x0                          ; 004ed560
    JNZ 0x004ed54c                      ; 004ed562
        ;   XREF to: 004ed54c (CONDITIONAL_JUMP)  ; LAB_004ed54c
    POP EDI                             ; 004ed564
        ;   Label: LAB_004ed564
    PUSH 0x5dd0ff                       ; 004ed565 | DAT_005dd0ff
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed56a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed56f
    MOV ESI,EAX                         ; 004ed572
    PUSH EDI                            ; 004ed574
    SUB ECX,ECX                         ; 004ed575
    DEC ECX                             ; 004ed577
    MOV AL,0x0                          ; 004ed578
    SCASB.REPNE ES:EDI                  ; 004ed57a | DAT_01d074a8 | DAT_01d074a9
    DEC EDI                             ; 004ed57c
    MOV AL,byte ptr [ESI]               ; 004ed57d
        ;   Label: LAB_004ed57d
    MOV byte ptr [EDI],AL               ; 004ed57f | DAT_01d074a8 | DAT_01d074a9
    CMP AL,0x0                          ; 004ed581
    JZ 0x004ed595                       ; 004ed583
        ;   XREF to: 004ed595 (CONDITIONAL_JUMP)  ; LAB_004ed595
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed585
    ADD ESI,0x2                         ; 004ed588
    MOV byte ptr [EDI + 0x1],AL         ; 004ed58b | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed58e
    CMP AL,0x0                          ; 004ed591
    JNZ 0x004ed57d                      ; 004ed593
        ;   XREF to: 004ed57d (CONDITIONAL_JUMP)  ; LAB_004ed57d
    POP EDI                             ; 004ed595
        ;   Label: LAB_004ed595
    MOV ESI,dword ptr [ESP + 0xa2c]     ; 004ed596
    PUSH 0x1                            ; 004ed59d
        ;   Label: LAB_004ed59d
    CALL sound_sndmain.cpp_FUN_005512a0 ; 004ed59f
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005512a0(int channel_index)
    MOV EBX,ESI                         ; 004ed5a4
    ADD ESP,0x4                         ; 004ed5a6
    SHL EBX,0x8                         ; 004ed5a9
    INC ESI                             ; 004ed5ac
    ADD EBX,0x1d074a8                   ; 004ed5ad
    MOV dword ptr [ESP + 0xa20],ESI     ; 004ed5b3
    TEST EAX,EAX                        ; 004ed5ba
    JZ 0x004edbba                       ; 004ed5bc
        ;   XREF to: 004edbba (CONDITIONAL_JUMP)  ; LAB_004edbba
    PUSH 0x5dd10f                       ; 004ed5c2 | = "Music Vol : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed5c7
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed5cc
    MOV EDI,EBX                         ; 004ed5cf
    MOV ESI,EAX                         ; 004ed5d1
    PUSH EDI                            ; 004ed5d3
    MOV AL,byte ptr [ESI]               ; 004ed5d4
        ;   Label: LAB_004ed5d4
    MOV byte ptr [EDI],AL               ; 004ed5d6 | DAT_01d074a8
    CMP AL,0x0                          ; 004ed5d8
    JZ 0x004ed5ec                       ; 004ed5da
        ;   XREF to: 004ed5ec (CONDITIONAL_JUMP)  ; LAB_004ed5ec
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed5dc
    ADD ESI,0x2                         ; 004ed5df
    MOV byte ptr [EDI + 0x1],AL         ; 004ed5e2 | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed5e5
    CMP AL,0x0                          ; 004ed5e8
    JNZ 0x004ed5d4                      ; 004ed5ea
        ;   XREF to: 004ed5d4 (CONDITIONAL_JUMP)  ; LAB_004ed5d4
    POP EDI                             ; 004ed5ec
        ;   Label: LAB_004ed5ec
    PUSH 0x1                            ; 004ed5ed
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 004ed5ef
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00551190()
    MOV dword ptr [ESP + 0xa50],EAX     ; 004ed5f4
    FLD float ptr [ESP + 0xa50]         ; 004ed5fb
    FMUL float ptr [0x005dd1f1]         ; 004ed602 | DAT_005dd1f1
    FDIV float ptr [0x005f9e30]         ; 004ed608 | DAT_005f9e30
    FADD double ptr [0x005dd1fd]        ; 004ed60e | DAT_005dd1fd
    ADD ESP,0x4                         ; 004ed614
    CALL crt_math.c_round_FUN_005b7ff0  ; 004ed617
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xa4c]       ; 004ed61c
    MOV ECX,dword ptr [ESP + 0xa4c]     ; 004ed623
    PUSH ECX                            ; 004ed62a
    PUSH 0x5dd11c                       ; 004ed62b | DAT_005dd11c
    LEA EAX,[ESP + 0x920]               ; 004ed630
    PUSH EAX                            ; 004ed637
    CALL crt_unknown.c_FUN_005b7790     ; 004ed638
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004ed63d
    LEA ESI,[ESP + 0x918]               ; 004ed640
    PUSH EDI                            ; 004ed647
    SUB ECX,ECX                         ; 004ed648
    DEC ECX                             ; 004ed64a
    MOV AL,0x0                          ; 004ed64b
    SCASB.REPNE ES:EDI                  ; 004ed64d | DAT_01d074a8 | DAT_01d074a9
    DEC EDI                             ; 004ed64f
    MOV AL,byte ptr [ESI]               ; 004ed650
        ;   Label: LAB_004ed650
    MOV byte ptr [EDI],AL               ; 004ed652 | DAT_01d074a8 | DAT_01d074a9
    CMP AL,0x0                          ; 004ed654
    JZ 0x004ed668                       ; 004ed656
        ;   XREF to: 004ed668 (CONDITIONAL_JUMP)  ; LAB_004ed668
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed658
    ADD ESI,0x2                         ; 004ed65b
    MOV byte ptr [EDI + 0x1],AL         ; 004ed65e | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed661
    CMP AL,0x0                          ; 004ed664
    JNZ 0x004ed650                      ; 004ed666
        ;   XREF to: 004ed650 (CONDITIONAL_JUMP)  ; LAB_004ed650
    POP EDI                             ; 004ed668
        ;   Label: LAB_004ed668
    PUSH 0x5dd11f                       ; 004ed669 | DAT_005dd11f
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed66e
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed673
    MOV ESI,EAX                         ; 004ed676
    PUSH EDI                            ; 004ed678
    SUB ECX,ECX                         ; 004ed679
    DEC ECX                             ; 004ed67b
    MOV AL,0x0                          ; 004ed67c
    SCASB.REPNE ES:EDI                  ; 004ed67e | DAT_01d074a8 | DAT_01d074a9
    DEC EDI                             ; 004ed680
    MOV AL,byte ptr [ESI]               ; 004ed681
        ;   Label: LAB_004ed681
    MOV byte ptr [EDI],AL               ; 004ed683 | DAT_01d074a8 | DAT_01d074a9
    CMP AL,0x0                          ; 004ed685
    JZ 0x004ed699                       ; 004ed687
        ;   XREF to: 004ed699 (CONDITIONAL_JUMP)  ; LAB_004ed699
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed689
    ADD ESI,0x2                         ; 004ed68c
    MOV byte ptr [EDI + 0x1],AL         ; 004ed68f | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed692
    CMP AL,0x0                          ; 004ed695
    JNZ 0x004ed681                      ; 004ed697
        ;   XREF to: 004ed681 (CONDITIONAL_JUMP)  ; LAB_004ed681
    POP EDI                             ; 004ed699
        ;   Label: LAB_004ed699
    MOV EAX,dword ptr [ESP + 0xa20]     ; 004ed69a
    MOV dword ptr [ESP + 0xa3c],EAX     ; 004ed6a1
    PUSH 0x5dd132                       ; 004ed6a8 | = "Output rate : "
        ;   Label: LAB_004ed6a8
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed6ad
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed6b2
    MOV EDI,dword ptr [ESP + 0xa3c]     ; 004ed6b5
    SHL EDI,0x8                         ; 004ed6bc
    MOV ESI,EAX                         ; 004ed6bf
    ADD EDI,0x1d074a8                   ; 004ed6c1
    PUSH EDI                            ; 004ed6c7
    MOV AL,byte ptr [ESI]               ; 004ed6c8
        ;   Label: LAB_004ed6c8
    MOV byte ptr [EDI],AL               ; 004ed6ca | DAT_01d074a8
    CMP AL,0x0                          ; 004ed6cc
    JZ 0x004ed6e0                       ; 004ed6ce
        ;   XREF to: 004ed6e0 (CONDITIONAL_JUMP)  ; LAB_004ed6e0
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed6d0
    ADD ESI,0x2                         ; 004ed6d3
    MOV byte ptr [EDI + 0x1],AL         ; 004ed6d6 | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed6d9
    CMP AL,0x0                          ; 004ed6dc
    JNZ 0x004ed6c8                      ; 004ed6de
        ;   XREF to: 004ed6c8 (CONDITIONAL_JUMP)  ; LAB_004ed6c8
    POP EDI                             ; 004ed6e0
        ;   Label: LAB_004ed6e0
    CALL sound_sndmain.cpp_FUN_005527f0 ; 004ed6e1
        ;   XREF to: 005527f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005527f0()
    PUSH EAX                            ; 004ed6e6
    PUSH 0x5dd141                       ; 004ed6e7 | DAT_005dd141
    LEA EAX,[ESP + 0x620]               ; 004ed6ec
    PUSH EAX                            ; 004ed6f3
    CALL crt_unknown.c_FUN_005b7790     ; 004ed6f4
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004ed6f9
    LEA ESI,[ESP + 0x618]               ; 004ed6fc
    PUSH EDI                            ; 004ed703
    SUB ECX,ECX                         ; 004ed704
    DEC ECX                             ; 004ed706
    MOV AL,0x0                          ; 004ed707
    SCASB.REPNE ES:EDI                  ; 004ed709 | DAT_01d074a8 | DAT_01d074a9
    DEC EDI                             ; 004ed70b
    MOV AL,byte ptr [ESI]               ; 004ed70c
        ;   Label: LAB_004ed70c
    MOV byte ptr [EDI],AL               ; 004ed70e | DAT_01d074a8 | DAT_01d074a9
    CMP AL,0x0                          ; 004ed710
    JZ 0x004ed724                       ; 004ed712
        ;   XREF to: 004ed724 (CONDITIONAL_JUMP)  ; LAB_004ed724
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed714
    ADD ESI,0x2                         ; 004ed717
    MOV byte ptr [EDI + 0x1],AL         ; 004ed71a | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed71d
    CMP AL,0x0                          ; 004ed720
    JNZ 0x004ed70c                      ; 004ed722
        ;   XREF to: 004ed70c (CONDITIONAL_JUMP)  ; LAB_004ed70c
    POP EDI                             ; 004ed724
        ;   Label: LAB_004ed724
    PUSH 0x5dd144                       ; 004ed725 | DAT_005dd144
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed72a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed72f
    MOV ESI,EAX                         ; 004ed732
    PUSH EDI                            ; 004ed734
    SUB ECX,ECX                         ; 004ed735
    DEC ECX                             ; 004ed737
    MOV AL,0x0                          ; 004ed738
    SCASB.REPNE ES:EDI                  ; 004ed73a | DAT_01d074a8 | DAT_01d074a9
    DEC EDI                             ; 004ed73c
    MOV AL,byte ptr [ESI]               ; 004ed73d
        ;   Label: LAB_004ed73d
    MOV byte ptr [EDI],AL               ; 004ed73f | DAT_01d074a8 | DAT_01d074a9
    CMP AL,0x0                          ; 004ed741
    JZ 0x004ed755                       ; 004ed743
        ;   XREF to: 004ed755 (CONDITIONAL_JUMP)  ; LAB_004ed755
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed745
    ADD ESI,0x2                         ; 004ed748
    MOV byte ptr [EDI + 0x1],AL         ; 004ed74b | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed74e
    CMP AL,0x0                          ; 004ed751
    JNZ 0x004ed73d                      ; 004ed753
        ;   XREF to: 004ed73d (CONDITIONAL_JUMP)  ; LAB_004ed73d
    POP EDI                             ; 004ed755
        ;   Label: LAB_004ed755
    MOV EBX,dword ptr [ESP + 0xa3c]     ; 004ed756
    PUSH 0x5dd147                       ; 004ed75d | = "Output quality : "
    INC EBX                             ; 004ed762
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed763
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV dword ptr [ESP + 0xa40],EBX     ; 004ed768
    MOV EDI,EBX                         ; 004ed76f
    ADD ESP,0x4                         ; 004ed771
    SHL EDI,0x8                         ; 004ed774
    MOV ESI,EAX                         ; 004ed777
    ADD EDI,0x1d074a8                   ; 004ed779
    PUSH EDI                            ; 004ed77f
    MOV AL,byte ptr [ESI]               ; 004ed780
        ;   Label: LAB_004ed780
    MOV byte ptr [EDI],AL               ; 004ed782 | DAT_01d074a8
    CMP AL,0x0                          ; 004ed784
    JZ 0x004ed798                       ; 004ed786
        ;   XREF to: 004ed798 (CONDITIONAL_JUMP)  ; LAB_004ed798
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed788
    ADD ESI,0x2                         ; 004ed78b
    MOV byte ptr [EDI + 0x1],AL         ; 004ed78e | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed791
    CMP AL,0x0                          ; 004ed794
    JNZ 0x004ed780                      ; 004ed796
        ;   XREF to: 004ed780 (CONDITIONAL_JUMP)  ; LAB_004ed780
    POP EDI                             ; 004ed798
        ;   Label: LAB_004ed798
    CALL sound_sndmain.cpp_FUN_005527d0 ; 004ed799
        ;   XREF to: 005527d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005527d0()
    PUSH EAX                            ; 004ed79e
    PUSH 0x5dd159                       ; 004ed79f | DAT_005dd159
    LEA EAX,[ESP + 0x620]               ; 004ed7a4
    PUSH EAX                            ; 004ed7ab
    CALL crt_unknown.c_FUN_005b7790     ; 004ed7ac
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004ed7b1
    LEA ESI,[ESP + 0x618]               ; 004ed7b4
    PUSH EDI                            ; 004ed7bb
    SUB ECX,ECX                         ; 004ed7bc
    DEC ECX                             ; 004ed7be
    MOV AL,0x0                          ; 004ed7bf
    SCASB.REPNE ES:EDI                  ; 004ed7c1 | DAT_01d074a8 | DAT_01d074a9
    DEC EDI                             ; 004ed7c3
    MOV AL,byte ptr [ESI]               ; 004ed7c4
        ;   Label: LAB_004ed7c4
    MOV byte ptr [EDI],AL               ; 004ed7c6 | DAT_01d074a8 | DAT_01d074a9
    CMP AL,0x0                          ; 004ed7c8
    JZ 0x004ed7dc                       ; 004ed7ca
        ;   XREF to: 004ed7dc (CONDITIONAL_JUMP)  ; LAB_004ed7dc
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed7cc
    ADD ESI,0x2                         ; 004ed7cf
    MOV byte ptr [EDI + 0x1],AL         ; 004ed7d2 | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed7d5
    CMP AL,0x0                          ; 004ed7d8
    JNZ 0x004ed7c4                      ; 004ed7da
        ;   XREF to: 004ed7c4 (CONDITIONAL_JUMP)  ; LAB_004ed7c4
    POP EDI                             ; 004ed7dc
        ;   Label: LAB_004ed7dc
    PUSH 0x5dd15c                       ; 004ed7dd | DAT_005dd15c
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed7e2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed7e7
    MOV ESI,EAX                         ; 004ed7ea
    PUSH EDI                            ; 004ed7ec
    SUB ECX,ECX                         ; 004ed7ed
    DEC ECX                             ; 004ed7ef
    MOV AL,0x0                          ; 004ed7f0
    SCASB.REPNE ES:EDI                  ; 004ed7f2 | DAT_01d074a8 | DAT_01d074a9
    DEC EDI                             ; 004ed7f4
    MOV AL,byte ptr [ESI]               ; 004ed7f5
        ;   Label: LAB_004ed7f5
    MOV byte ptr [EDI],AL               ; 004ed7f7 | DAT_01d074a8 | DAT_01d074a9
    CMP AL,0x0                          ; 004ed7f9
    JZ 0x004ed80d                       ; 004ed7fb
        ;   XREF to: 004ed80d (CONDITIONAL_JUMP)  ; LAB_004ed80d
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed7fd
    ADD ESI,0x2                         ; 004ed800
    MOV byte ptr [EDI + 0x1],AL         ; 004ed803 | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed806
    CMP AL,0x0                          ; 004ed809
    JNZ 0x004ed7f5                      ; 004ed80b
        ;   XREF to: 004ed7f5 (CONDITIONAL_JUMP)  ; LAB_004ed7f5
    POP EDI                             ; 004ed80d
        ;   Label: LAB_004ed80d
    LEA ESI,[EBX + 0x1]                 ; 004ed80e
    CALL sound_sndmain.cpp_FUN_00552810 ; 004ed811
        ;   XREF to: 00552810 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552810()
    MOV dword ptr [ESP + 0xa3c],ESI     ; 004ed816
    CMP EAX,0x1                         ; 004ed81d
    JNC 0x004edc05                      ; 004ed820
        ;   XREF to: 004edc05 (CONDITIONAL_JUMP)  ; LAB_004edc05
    PUSH 0x5dd160                       ; 004ed826 | = "Output type : MONO"
        ;   Label: LAB_004ed826
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed82b
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed830
    PUSH EAX                            ; 004ed833
    MOV EAX,dword ptr [ESP + 0xa40]     ; 004ed834
    SHL EAX,0x8                         ; 004ed83b
    MOV EDX,dword ptr [ESP + 0xa40]     ; 004ed83e
    ADD EAX,0x1d074a8                   ; 004ed845
    INC EDX                             ; 004ed84a
    PUSH EAX                            ; 004ed84b
    MOV dword ptr [ESP + 0xa44],EDX     ; 004ed84c
    CALL crt_unknown.c_FUN_005b7790     ; 004ed853
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
        ;   Label: LAB_004ed853
    ADD ESP,0x8                         ; 004ed858
    CALL sound_sndmain.cpp_FUN_00552ca0 ; 004ed85b
        ;   XREF to: 00552ca0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552ca0()
    MOV EBX,EAX                         ; 004ed860
    TEST EAX,EAX                        ; 004ed862
    JL 0x004ed873                       ; 004ed864
        ;   XREF to: 004ed873 (CONDITIONAL_JUMP)  ; LAB_004ed873
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00552890 ; 004ed866
        ;   XREF to: 00552890 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_00552890()
    CMP EBX,EAX                         ; 004ed86b
    JL 0x004edc15                       ; 004ed86d
        ;   XREF to: 004edc15 (CONDITIONAL_JUMP)  ; LAB_004edc15
    XOR ECX,ECX                         ; 004ed873
        ;   Label: LAB_004ed873
    XOR AH,AH                           ; 004ed875
    MOV dword ptr [ESP + 0x608],ECX     ; 004ed877
    MOV byte ptr [ESP + 0x500],AH       ; 004ed87e
    PUSH 0x5dd188                       ; 004ed885 | = "Device : "
        ;   Label: LAB_004ed885
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed88a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed88f
    MOV EDI,dword ptr [ESP + 0xa3c]     ; 004ed892
    SHL EDI,0x8                         ; 004ed899
    MOV ESI,EAX                         ; 004ed89c
    ADD EDI,0x1d074a8                   ; 004ed89e
    MOV EBX,dword ptr [ESP + 0xa3c]     ; 004ed8a4
    PUSH EDI                            ; 004ed8ab
    MOV AL,byte ptr [ESI]               ; 004ed8ac
        ;   Label: LAB_004ed8ac
    MOV byte ptr [EDI],AL               ; 004ed8ae | DAT_01d074a8
    CMP AL,0x0                          ; 004ed8b0
    JZ 0x004ed8c4                       ; 004ed8b2
        ;   XREF to: 004ed8c4 (CONDITIONAL_JUMP)  ; LAB_004ed8c4
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed8b4
    ADD ESI,0x2                         ; 004ed8b7
    MOV byte ptr [EDI + 0x1],AL         ; 004ed8ba | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed8bd
    CMP AL,0x0                          ; 004ed8c0
    JNZ 0x004ed8ac                      ; 004ed8c2
        ;   XREF to: 004ed8ac (CONDITIONAL_JUMP)  ; LAB_004ed8ac
    POP EDI                             ; 004ed8c4
        ;   Label: LAB_004ed8c4
    LEA ESI,[ESP + 0x500]               ; 004ed8c5
    INC EBX                             ; 004ed8cc
    PUSH EDI                            ; 004ed8cd
    SUB ECX,ECX                         ; 004ed8ce
    DEC ECX                             ; 004ed8d0
    MOV AL,0x0                          ; 004ed8d1
    SCASB.REPNE ES:EDI                  ; 004ed8d3 | DAT_01d074a8 | DAT_01d074a9
    DEC EDI                             ; 004ed8d5
    MOV AL,byte ptr [ESI]               ; 004ed8d6
        ;   Label: LAB_004ed8d6
    MOV byte ptr [EDI],AL               ; 004ed8d8 | DAT_01d074a8 | DAT_01d074a9
    CMP AL,0x0                          ; 004ed8da
    JZ 0x004ed8ee                       ; 004ed8dc
        ;   XREF to: 004ed8ee (CONDITIONAL_JUMP)  ; LAB_004ed8ee
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed8de
    ADD ESI,0x2                         ; 004ed8e1
    MOV byte ptr [EDI + 0x1],AL         ; 004ed8e4 | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed8e7
    CMP AL,0x0                          ; 004ed8ea
    JNZ 0x004ed8d6                      ; 004ed8ec
        ;   XREF to: 004ed8d6 (CONDITIONAL_JUMP)  ; LAB_004ed8d6
    POP EDI                             ; 004ed8ee
        ;   Label: LAB_004ed8ee
    MOV ESI,dword ptr [ESP + 0x608]     ; 004ed8ef
    MOV dword ptr [ESP + 0xa3c],EBX     ; 004ed8f6
    TEST ESI,ESI                        ; 004ed8fd
    JLE 0x004ed949                      ; 004ed8ff
        ;   XREF to: 004ed949 (CONDITIONAL_JUMP)  ; LAB_004ed949
    MOV EDI,EBX                         ; 004ed901
    SHL EDI,0x8                         ; 004ed903
    CALL sound_sndmain.cpp_FUN_00552b40 ; 004ed906
        ;   XREF to: 00552b40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552b40()
    ADD EDI,0x1d074a8                   ; 004ed90b
    TEST EAX,EAX                        ; 004ed911
    JLE 0x004edc2b                      ; 004ed913
        ;   XREF to: 004edc2b (CONDITIONAL_JUMP)  ; LAB_004edc2b
    PUSH 0x5dd192                       ; 004ed919 | = "Hardware mixing: Enabled"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed91e
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
        ;   Label: LAB_004ed91e
    ADD ESP,0x4                         ; 004ed923
    MOV ESI,EAX                         ; 004ed926
    PUSH EDI                            ; 004ed928
    MOV AL,byte ptr [ESI]               ; 004ed929
        ;   Label: LAB_004ed929
    MOV byte ptr [EDI],AL               ; 004ed92b | DAT_01d074a8
    CMP AL,0x0                          ; 004ed92d
    JZ 0x004ed941                       ; 004ed92f
        ;   XREF to: 004ed941 (CONDITIONAL_JUMP)  ; LAB_004ed941
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed931
    ADD ESI,0x2                         ; 004ed934
    MOV byte ptr [EDI + 0x1],AL         ; 004ed937 | DAT_01d074a9
    ADD EDI,0x2                         ; 004ed93a
    CMP AL,0x0                          ; 004ed93d
    JNZ 0x004ed929                      ; 004ed93f
        ;   XREF to: 004ed929 (CONDITIONAL_JUMP)  ; LAB_004ed929
    POP EDI                             ; 004ed941
        ;   Label: LAB_004ed941
    INC dword ptr [ESP + 0xa3c]         ; 004ed942
    IMUL EAX,dword ptr [0x01c2a370],0x18 ; 004ed949 | DAT_01c2a370
        ;   Label: LAB_004ed949
    MOV ECX,dword ptr [0x01d06134]      ; 004ed950 | DAT_01d06134
    ADD ECX,EAX                         ; 004ed956
    MOV dword ptr [0x01d06134],ECX      ; 004ed958 | DAT_01d06134
    CMP ECX,0x80000                     ; 004ed95e
    JL 0x004ed972                       ; 004ed964
        ;   XREF to: 004ed972 (CONDITIONAL_JUMP)  ; LAB_004ed972
    LEA ESI,[ECX + 0xfff80000]          ; 004ed966
    MOV dword ptr [0x01d06134],ESI      ; 004ed96c | DAT_01d06134
    CALL sound_sndmain.cpp_FUN_00552b20 ; 004ed972
        ;   XREF to: 00552b20 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552b20()
        ;   Label: LAB_004ed972
    TEST EAX,EAX                        ; 004ed977
    JZ 0x004edad4                       ; 004ed979
        ;   XREF to: 004edad4 (CONDITIONAL_JUMP)  ; LAB_004edad4
    CALL sound_sndmain.cpp_FUN_00552810 ; 004ed97f
        ;   XREF to: 00552810 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552810()
    MOV EBX,EAX                         ; 004ed984
    MOV dword ptr [ESP + 0xa40],EAX     ; 004ed986
    MOV EAX,[0x006141b8]                ; 004ed98d | DAT_006141b8
    MOV EDX,EAX                         ; 004ed992
    MOV ESI,0x14                        ; 004ed994
    SAR EDX,0x1f                        ; 004ed999
    IDIV ESI                            ; 004ed99c
    MOV dword ptr [ESP + 0xa44],EAX     ; 004ed99e
    MOV EAX,[0x006141b8]                ; 004ed9a5 | DAT_006141b8
    MOV EDX,EAX                         ; 004ed9aa
    SAR EDX,0x1f                        ; 004ed9ac
    IDIV EBX                            ; 004ed9af
    MOV EDX,dword ptr [ESP + 0xa44]     ; 004ed9b1
    ADD EDX,EDX                         ; 004ed9b8
    MOV dword ptr [ESP + 0xa48],EAX     ; 004ed9ba
    SUB EAX,EDX                         ; 004ed9c1
    MOV EDX,EAX                         ; 004ed9c3
    SAR EDX,0x1f                        ; 004ed9c5
    SHL EDX,0x2                         ; 004ed9c8
    SBB EAX,EDX                         ; 004ed9cb
    SAR EAX,0x2                         ; 004ed9cd
    MOV dword ptr [ESP + 0xa4c],EAX     ; 004ed9d0
    FILD dword ptr [ESP + 0xa4c]        ; 004ed9d7
    FLD1                                ; 004ed9de
    FDIVRP                              ; 004ed9e0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ed9e2
    FLD double ptr [0x005dd205]         ; 004ed9e6 | DAT_005dd205
    CALL crt_math.c_pow_FUN_005b9484    ; 004ed9ec
        ;   XREF to: 005b9484 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005b9484()
    XOR ESI,ESI                         ; 004ed9f1
    FSTP double ptr [ESP]               ; 004ed9f3
    TEST EBX,EBX                        ; 004ed9f6
    JLE 0x004edad4                      ; 004ed9f8
        ;   XREF to: 004edad4 (CONDITIONAL_JUMP)  ; LAB_004edad4
    MOV EDX,0x40690000                  ; 004ed9fe
        ;   Label: LAB_004ed9fe
    XOR EAX,EAX                         ; 004eda03
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004eda05
    MOV dword ptr [ESP + 0x8],EAX       ; 004eda09
    MOV dword ptr [ESP + 0xc],EDX       ; 004eda0d
    TEST ECX,ECX                        ; 004eda11
    JLE 0x004edac4                      ; 004eda13
        ;   XREF to: 004edac4 (CONDITIONAL_JUMP)  ; LAB_004edac4
    MOV EAX,dword ptr [ESP + 0xa48]     ; 004eda19
    IMUL EAX,ESI                        ; 004eda20
    ADD EAX,dword ptr [ESP + 0xa44]     ; 004eda23
    LEA EDI,[ECX*0x4 + 0x0]             ; 004eda2a
    MOV EBX,EAX                         ; 004eda31
    ADD EDI,EAX                         ; 004eda33
    FLD double ptr [ESP + 0x8]          ; 004eda35
        ;   Label: LAB_004eda35
    FMUL double ptr [ESP]               ; 004eda39
    FST double ptr [ESP + 0xa18]        ; 004eda3c
    SUB ESP,0x4                         ; 004eda43
    FSTP float ptr [ESP]                ; 004eda46
    FLD double ptr [ESP + 0xc]          ; 004eda49
    SUB ESP,0x4                         ; 004eda4d
    FSTP float ptr [ESP]                ; 004eda50
    PUSH ESI                            ; 004eda53
    CALL sound_sndmain.cpp_FUN_00553b60 ; 004eda54
        ;   XREF to: 00553b60 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00553b60()
    MOV dword ptr [ESP + 0xa58],EAX     ; 004eda59
    FLD float ptr [ESP + 0xa58]         ; 004eda60
    ADD ESP,0xc                         ; 004eda67
    FILD dword ptr [0x006141bc]         ; 004eda6a | DAT_006141bc
    FXCH                                ; 004eda70
    FMUL ST1                            ; 004eda72
    MOV EAX,[0x006141bc]                ; 004eda74 | DAT_006141bc
    FMUL float ptr [0x005dd1f5]         ; 004eda79 | DAT_005dd1f5
    DEC EAX                             ; 004eda7f
    FSUBP                               ; 004eda80
    MOV EDX,EAX                         ; 004eda82
    CALL crt_math.c_round_FUN_005b7ff0  ; 004eda84
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xa4c]       ; 004eda89
    SUB EDX,dword ptr [ESP + 0xa4c]     ; 004eda90
    INC EDX                             ; 004eda97
    PUSH EDX                            ; 004eda98
    PUSH EAX                            ; 004eda99
    PUSH EBX                            ; 004eda9a
    CALL core_menu.cpp_FUN_004eaf30     ; 004eda9b
        ;   XREF to: 004eaf30 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_FUN_004eaf30(int x_center, int y_top, int height_half)
    ADD ESP,0xc                         ; 004edaa0
    MOV EAX,dword ptr [ESP + 0xa18]     ; 004edaa3
    MOV dword ptr [ESP + 0x8],EAX       ; 004edaaa
    MOV EAX,dword ptr [ESP + 0xa1c]     ; 004edaae
    ADD EBX,0x4                         ; 004edab5
    MOV dword ptr [ESP + 0xc],EAX       ; 004edab8
    CMP EBX,EDI                         ; 004edabc
    JL 0x004eda35                       ; 004edabe
        ;   XREF to: 004eda35 (CONDITIONAL_JUMP)  ; LAB_004eda35
    MOV EDI,dword ptr [ESP + 0xa40]     ; 004edac4
        ;   Label: LAB_004edac4
    INC ESI                             ; 004edacb
    CMP ESI,EDI                         ; 004edacc
    JL 0x004ed9fe                       ; 004edace
        ;   XREF to: 004ed9fe (CONDITIONAL_JUMP)  ; LAB_004ed9fe
    PUSH 0x5dd1c0                       ; 004edad4 | = "Sound Options"
        ;   Label: LAB_004edad4
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004edad9
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004edade
    PUSH EAX                            ; 004edae1
    PUSH 0x122                          ; 004edae2
    LEA EAX,[ESP + 0xa2c]               ; 004edae7
    PUSH EAX                            ; 004edaee
    MOV ESI,dword ptr [ESP + 0xa48]     ; 004edaef
    PUSH ESI                            ; 004edaf6
    PUSH 0x1d07ea8                      ; 004edaf7
    CALL core_menu.cpp_FUN_004eb0e0     ; 004edafc
        ;   XREF to: 004eb0e0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_FUN_004eb0e0()
    ADD ESP,0x14                        ; 004edb01
    MOV EDI,0x3e4ccccd                  ; 004edb04
    MOV EBX,EAX                         ; 004edb09
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 004edb0b
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
    MOV dword ptr [ESP + 0xa38],EDI     ; 004edb10
    CMP EBX,0x8                         ; 004edb17
    JA 0x004edb52                       ; 004edb1a
        ;   XREF to: 004edb52 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x4ed230]  ; 004edb1c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00550bc0 ; 004edb23
        ;   XREF to: 00550bc0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00550bc0()
        ;   Label: caseD_0
    TEST EAX,EAX                        ; 004edb28
    SETZ AL                             ; 004edb2a
    AND EAX,0xff                        ; 004edb2d
    PUSH EAX                            ; 004edb32
    CALL sound_sndmain.cpp_setSoundMuted_FUN_00550bd0 ; 004edb33
        ;   XREF to: 00550bd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundMuted_FUN_00550bd0(int muted)
    ADD ESP,0x4                         ; 004edb38
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00550bc0 ; 004edb3b
        ;   XREF to: 00550bc0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00550bc0()
    TEST EAX,EAX                        ; 004edb40
    JNZ 0x004edb52                      ; 004edb42
        ;   XREF to: 004edb52 (CONDITIONAL_JUMP)  ; default
    MOV EAX,[0x0061c068]                ; 004edb44 | DAT_0061c068
        ;   Label: LAB_004edb44
    PUSH EAX                            ; 004edb49
    CALL core_sound.cpp_FUN_0055ac50    ; 004edb4a
        ;   XREF to: 0055ac50 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055ac50(CSound * this_ptr)
        ;   Label: LAB_004edb4a
    ADD ESP,0x4                         ; 004edb4f
    PUSH 0x1                            ; 004edb52
        ;   Label: default
    MOV EAX,[0x00617dd4]                ; 004edb54 | DAT_00617dd4
    PUSH EAX                            ; 004edb59 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004edb5a | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004edb5c
    ADD ESP,0x8                         ; 004edb5f
    TEST EAX,EAX                        ; 004edb62
    JZ 0x004ed2a2                       ; 004edb64
        ;   XREF to: 004ed2a2 (CONDITIONAL_JUMP)  ; LAB_004ed2a2
    MOV ESP,EBP                         ; 004edb6a
    POP EBP                             ; 004edb6c
    POP EDI                             ; 004edb6d
    POP ESI                             ; 004edb6e
    POP EBX                             ; 004edb6f
    RET                                 ; 004edb70
    PUSH 0x5dd0be                       ; 004edb71 | = "Muted"
        ;   Label: LAB_004edb71
    JMP 0x004ed36a                      ; 004edb76
        ;   XREF to: 004ed36a (UNCONDITIONAL_JUMP)  ; LAB_004ed36a
    PUSH 0x5dd0de                       ; 004edb7b | = "Sound effects : Off"
        ;   Label: LAB_004edb7b
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004edb80
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004edb85
    PUSH EAX                            ; 004edb88
    PUSH EBX                            ; 004edb89
    MOV ESI,dword ptr [ESP + 0xa38]     ; 004edb8a
    CALL crt_unknown.c_FUN_005b7790     ; 004edb91
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x8                         ; 004edb96
    JMP 0x004ed499                      ; 004edb99
        ;   XREF to: 004ed499 (UNCONDITIONAL_JUMP)  ; LAB_004ed499
    PUSH 0x5dd102                       ; 004edb9e | = "Dialog : Off"
        ;   Label: LAB_004edb9e
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004edba3
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004edba8
    PUSH EAX                            ; 004edbab
    PUSH EBX                            ; 004edbac
    CALL crt_unknown.c_FUN_005b7790     ; 004edbad
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x8                         ; 004edbb2
    JMP 0x004ed59d                      ; 004edbb5
        ;   XREF to: 004ed59d (UNCONDITIONAL_JUMP)  ; LAB_004ed59d
    PUSH 0x5dd122                       ; 004edbba | = "Music Vol : Off"
        ;   Label: LAB_004edbba
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004edbbf
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004edbc4
    PUSH EAX                            ; 004edbc7
    PUSH EBX                            ; 004edbc8
    MOV dword ptr [ESP + 0xa44],ESI     ; 004edbc9
    CALL crt_unknown.c_FUN_005b7790     ; 004edbd0
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x8                         ; 004edbd5
    JMP 0x004ed6a8                      ; 004edbd8
        ;   XREF to: 004ed6a8 (UNCONDITIONAL_JUMP)  ; LAB_004ed6a8
    PUSH 0x5dd173                       ; 004edbdd | = "Output type : STEREO"
        ;   Label: LAB_004edbdd
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004edbe2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004edbe7
    PUSH EAX                            ; 004edbea
    MOV EAX,ESI                         ; 004edbeb
    SHL EAX,0x8                         ; 004edbed
    ADD EAX,0x1d074a8                   ; 004edbf0
    LEA EDI,[ESI + 0x1]                 ; 004edbf5
    PUSH EAX                            ; 004edbf8
    MOV dword ptr [ESP + 0xa44],EDI     ; 004edbf9
    JMP 0x004ed853                      ; 004edc00
        ;   XREF to: 004ed853 (UNCONDITIONAL_JUMP)  ; LAB_004ed853
    JBE 0x004ed826                      ; 004edc05
        ;   XREF to: 004ed826 (CONDITIONAL_JUMP)  ; LAB_004ed826
        ;   Label: LAB_004edc05
    CMP EAX,0x2                         ; 004edc0b
    JZ 0x004edbdd                       ; 004edc0e
        ;   XREF to: 004edbdd (CONDITIONAL_JUMP)  ; LAB_004edbdd
    JMP 0x004ed826                      ; 004edc10
        ;   XREF to: 004ed826 (UNCONDITIONAL_JUMP)  ; LAB_004ed826
    LEA EAX,[ESP + 0x500]               ; 004edc15
        ;   Label: LAB_004edc15
    PUSH EAX                            ; 004edc1c
    PUSH EBX                            ; 004edc1d
    CALL sound_sndmain.cpp_FUN_00552920 ; 004edc1e
        ;   XREF to: 00552920 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00552920(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 004edc23
    JMP 0x004ed885                      ; 004edc26
        ;   XREF to: 004ed885 (UNCONDITIONAL_JUMP)  ; LAB_004ed885
    PUSH 0x5dd1ab                       ; 004edc2b | = "Hardware mixing: Off"
        ;   Label: LAB_004edc2b
    JMP 0x004ed91e                      ; 004edc30
        ;   XREF to: 004ed91e (UNCONDITIONAL_JUMP)  ; LAB_004ed91e
    PUSH 0x0                            ; 004edc35
        ;   Label: caseD_1
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 004edc37
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00551190()
    MOV dword ptr [ESP + 0xa50],EAX     ; 004edc3c
    FLD float ptr [ESP + 0xa50]         ; 004edc43
    FDIV float ptr [0x005f9e34]         ; 004edc4a | DAT_005f9e34
    ADD ESP,0x4                         ; 004edc50
    MOV EDX,dword ptr [0x01d0612c]      ; 004edc53 | DAT_01d0612c
    FSTP float ptr [ESP + 0x18]         ; 004edc59
    CMP EDX,0x1                         ; 004edc5d
    JNZ 0x004edcf4                      ; 004edc60
        ;   XREF to: 004edcf4 (CONDITIONAL_JUMP)  ; LAB_004edcf4
    PUSH 0x0                            ; 004edc66
    CALL sound_sndmain.cpp_FUN_005512a0 ; 004edc68
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005512a0(int channel_index)
    ADD ESP,0x4                         ; 004edc6d
    TEST EAX,EAX                        ; 004edc70
    JZ 0x004edcde                       ; 004edc72
        ;   XREF to: 004edcde (CONDITIONAL_JUMP)  ; LAB_004edcde
    FLD float ptr [ESP + 0x18]          ; 004edc74
    FSUB float ptr [ESP + 0xa38]        ; 004edc78
    FST float ptr [ESP + 0x18]          ; 004edc7f
    FCOMP double ptr [0x005dd225]       ; 004edc83 | DAT_005dd225
    FNSTSW AX                           ; 004edc89
    SAHF                                ; 004edc8b
    JNC 0x004edc9e                      ; 004edc8c
        ;   XREF to: 004edc9e (CONDITIONAL_JUMP)  ; LAB_004edc9e
    XOR EDI,EDI                         ; 004edc8e
    PUSH EDI                            ; 004edc90
    PUSH EDI                            ; 004edc91
    MOV dword ptr [ESP + 0x20],EDI      ; 004edc92
    CALL sound_sndmain.cpp_FUN_00551220 ; 004edc96
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00551220(int channel_index, int enable_state)
        ;   Label: LAB_004edc96
    ADD ESP,0x8                         ; 004edc9b
    FLD float ptr [ESP + 0x18]          ; 004edc9e
        ;   Label: LAB_004edc9e
    FMUL float ptr [0x005f9e34]         ; 004edca2 | DAT_005f9e34
    SUB ESP,0x4                         ; 004edca8
    FSTP float ptr [ESP]                ; 004edcab
    PUSH 0x0                            ; 004edcae
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00551100 ; 004edcb0
        ;   XREF to: 00551100 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_00551100()
    ADD ESP,0x8                         ; 004edcb5
    CALL sound_sndmain.cpp_FUN_00550450 ; 004edcb8
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00550450()
    PUSH 0x1                            ; 004edcbd
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_00550380 ; 004edcbf
        ;   XREF to: 00550380 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlags_FUN_00550380(uint flags)
    ADD ESP,0x4                         ; 004edcc4
    PUSH 0x5dd1ce                       ; 004edcc7 | = "colt45-0.wav"
    CALL sound_sndmain.cpp_FUN_005506b0 ; 004edccc
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005506b0()
    ADD ESP,0x4                         ; 004edcd1
    CALL sound_sndmain.cpp_FUN_005504d0 ; 004edcd4
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005504d0()
    JMP 0x004edb52                      ; 004edcd9
        ;   XREF to: 004edb52 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004edcde
        ;   Label: LAB_004edcde
    PUSH EAX                            ; 004edce0
    MOV ESI,0x3f800000                  ; 004edce1
    CALL sound_sndmain.cpp_FUN_00551220 ; 004edce6
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00551220(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 004edceb
    MOV dword ptr [ESP + 0x18],ESI      ; 004edcee
    JMP 0x004edc9e                      ; 004edcf2
        ;   XREF to: 004edc9e (UNCONDITIONAL_JUMP)  ; LAB_004edc9e
    PUSH 0x0                            ; 004edcf4
        ;   Label: LAB_004edcf4
    CALL sound_sndmain.cpp_FUN_005512a0 ; 004edcf6
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005512a0(int channel_index)
    ADD ESP,0x4                         ; 004edcfb
    TEST EAX,EAX                        ; 004edcfe
    JZ 0x004edd49                       ; 004edd00
        ;   XREF to: 004edd49 (CONDITIONAL_JUMP)  ; LAB_004edd49
    FLD float ptr [ESP + 0x18]          ; 004edd02
    FADD float ptr [ESP + 0xa38]        ; 004edd06
    FST float ptr [ESP + 0x18]          ; 004edd0d
    FCOMP double ptr [0x005dd215]       ; 004edd11 | DAT_005dd215
    FNSTSW AX                           ; 004edd17
    SAHF                                ; 004edd19
    JA 0x004edd3c                       ; 004edd1a
        ;   XREF to: 004edd3c (CONDITIONAL_JUMP)  ; LAB_004edd3c
    FLD float ptr [ESP + 0x18]          ; 004edd1c
    FCOMP double ptr [0x005dd21d]       ; 004edd20 | DAT_005dd21d
    FNSTSW AX                           ; 004edd26
    SAHF                                ; 004edd28
    JBE 0x004edc9e                      ; 004edd29
        ;   XREF to: 004edc9e (CONDITIONAL_JUMP)  ; LAB_004edc9e
    MOV dword ptr [ESP + 0x18],0x3f800000 ; 004edd2f
    JMP 0x004edc9e                      ; 004edd37
        ;   XREF to: 004edc9e (UNCONDITIONAL_JUMP)  ; LAB_004edc9e
    XOR EBX,EBX                         ; 004edd3c
        ;   Label: LAB_004edd3c
    PUSH EBX                            ; 004edd3e
    PUSH EBX                            ; 004edd3f
    MOV dword ptr [ESP + 0x20],EBX      ; 004edd40
    JMP 0x004edc96                      ; 004edd44
        ;   XREF to: 004edc96 (UNCONDITIONAL_JUMP)  ; LAB_004edc96
    PUSH 0x1                            ; 004edd49
        ;   Label: LAB_004edd49
    PUSH EAX                            ; 004edd4b
    CALL sound_sndmain.cpp_FUN_00551220 ; 004edd4c
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00551220(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 004edd51
    MOV dword ptr [ESP + 0x18],EDI      ; 004edd54
    JMP 0x004edc9e                      ; 004edd58
        ;   XREF to: 004edc9e (UNCONDITIONAL_JUMP)  ; LAB_004edc9e
    PUSH 0x2                            ; 004edd5d
        ;   Label: caseD_2
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 004edd5f
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00551190()
    MOV dword ptr [ESP + 0xa50],EAX     ; 004edd64
    FLD float ptr [ESP + 0xa50]         ; 004edd6b
    FDIV float ptr [0x005f9e38]         ; 004edd72 | DAT_005f9e38
    ADD ESP,0x4                         ; 004edd78
    MOV ECX,dword ptr [0x01d0612c]      ; 004edd7b | DAT_01d0612c
    FSTP float ptr [ESP + 0x24]         ; 004edd81
    CMP ECX,0x1                         ; 004edd85
    JNZ 0x004eddf9                      ; 004edd88
        ;   XREF to: 004eddf9 (CONDITIONAL_JUMP)  ; LAB_004eddf9
    PUSH 0x2                            ; 004edd8a
    CALL sound_sndmain.cpp_FUN_005512a0 ; 004edd8c
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005512a0(int channel_index)
    ADD ESP,0x4                         ; 004edd91
    TEST EAX,EAX                        ; 004edd94
    JZ 0x004edde2                       ; 004edd96
        ;   XREF to: 004edde2 (CONDITIONAL_JUMP)  ; LAB_004edde2
    FLD float ptr [ESP + 0x24]          ; 004edd98
    FSUB float ptr [ESP + 0xa38]        ; 004edd9c
    FST float ptr [ESP + 0x24]          ; 004edda3
    FCOMP double ptr [0x005dd225]       ; 004edda7 | DAT_005dd225
    FNSTSW AX                           ; 004eddad
    SAHF                                ; 004eddaf
    JNC 0x004eddc3                      ; 004eddb0
        ;   XREF to: 004eddc3 (CONDITIONAL_JUMP)  ; LAB_004eddc3
    XOR EAX,EAX                         ; 004eddb2
    PUSH EAX                            ; 004eddb4
    PUSH 0x2                            ; 004eddb5
    MOV dword ptr [ESP + 0x2c],EAX      ; 004eddb7
    CALL sound_sndmain.cpp_FUN_00551220 ; 004eddbb
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00551220(int channel_index, int enable_state)
        ;   Label: LAB_004eddbb
    ADD ESP,0x8                         ; 004eddc0
    FLD float ptr [ESP + 0x24]          ; 004eddc3
        ;   Label: LAB_004eddc3
    FMUL float ptr [0x005f9e38]         ; 004eddc7 | DAT_005f9e38
    SUB ESP,0x4                         ; 004eddcd
    FSTP float ptr [ESP]                ; 004eddd0
    PUSH 0x2                            ; 004eddd3
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00551100 ; 004eddd5
        ;   XREF to: 00551100 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_00551100()
    ADD ESP,0x8                         ; 004eddda
    JMP 0x004edb52                      ; 004edddd
        ;   XREF to: 004edb52 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004edde2
        ;   Label: LAB_004edde2
    PUSH 0x2                            ; 004edde4
    MOV EDI,0x3f800000                  ; 004edde6
    CALL sound_sndmain.cpp_FUN_00551220 ; 004eddeb
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00551220(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 004eddf0
    MOV dword ptr [ESP + 0x24],EDI      ; 004eddf3
    JMP 0x004eddc3                      ; 004eddf7
        ;   XREF to: 004eddc3 (UNCONDITIONAL_JUMP)  ; LAB_004eddc3
    PUSH 0x2                            ; 004eddf9
        ;   Label: LAB_004eddf9
    CALL sound_sndmain.cpp_FUN_005512a0 ; 004eddfb
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005512a0(int channel_index)
    ADD ESP,0x4                         ; 004ede00
    TEST EAX,EAX                        ; 004ede03
    JZ 0x004ede48                       ; 004ede05
        ;   XREF to: 004ede48 (CONDITIONAL_JUMP)  ; LAB_004ede48
    FLD float ptr [ESP + 0x24]          ; 004ede07
    FADD float ptr [ESP + 0xa38]        ; 004ede0b
    FST float ptr [ESP + 0x24]          ; 004ede12
    FCOMP double ptr [0x005dd215]       ; 004ede16 | DAT_005dd215
    FNSTSW AX                           ; 004ede1c
    SAHF                                ; 004ede1e
    JA 0x004ede3a                       ; 004ede1f
        ;   XREF to: 004ede3a (CONDITIONAL_JUMP)  ; LAB_004ede3a
    FLD float ptr [ESP + 0x24]          ; 004ede21
    FCOMP double ptr [0x005dd21d]       ; 004ede25 | DAT_005dd21d
    FNSTSW AX                           ; 004ede2b
    SAHF                                ; 004ede2d
    JBE 0x004eddc3                      ; 004ede2e
        ;   XREF to: 004eddc3 (CONDITIONAL_JUMP)  ; LAB_004eddc3
    MOV dword ptr [ESP + 0x24],0x3f800000 ; 004ede30
    JMP 0x004eddc3                      ; 004ede38
        ;   XREF to: 004eddc3 (UNCONDITIONAL_JUMP)  ; LAB_004eddc3
    XOR ESI,ESI                         ; 004ede3a
        ;   Label: LAB_004ede3a
    PUSH ESI                            ; 004ede3c
    PUSH 0x2                            ; 004ede3d
    MOV dword ptr [ESP + 0x2c],ESI      ; 004ede3f
    JMP 0x004eddbb                      ; 004ede43
        ;   XREF to: 004eddbb (UNCONDITIONAL_JUMP)  ; LAB_004eddbb
    PUSH 0x1                            ; 004ede48
        ;   Label: LAB_004ede48
    PUSH 0x2                            ; 004ede4a
    CALL sound_sndmain.cpp_FUN_00551220 ; 004ede4c
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00551220(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 004ede51
    MOV dword ptr [ESP + 0x24],EDI      ; 004ede54
    JMP 0x004eddc3                      ; 004ede58
        ;   XREF to: 004eddc3 (UNCONDITIONAL_JUMP)  ; LAB_004eddc3
    PUSH 0x1                            ; 004ede5d
        ;   Label: caseD_3
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 004ede5f
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00551190()
    MOV dword ptr [ESP + 0xa50],EAX     ; 004ede64
    FLD float ptr [ESP + 0xa50]         ; 004ede6b
    FDIV float ptr [0x005f9e30]         ; 004ede72 | DAT_005f9e30
    ADD ESP,0x4                         ; 004ede78
    MOV EAX,[0x01d0612c]                ; 004ede7b | DAT_01d0612c
    FSTP float ptr [ESP + 0x20]         ; 004ede80
    CMP EAX,0x1                         ; 004ede84
    JNZ 0x004edf0a                      ; 004ede87
        ;   XREF to: 004edf0a (CONDITIONAL_JUMP)  ; LAB_004edf0a
    PUSH EAX                            ; 004ede8d
    CALL sound_sndmain.cpp_FUN_005512a0 ; 004ede8e
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005512a0(int channel_index)
    ADD ESP,0x4                         ; 004ede93
    TEST EAX,EAX                        ; 004ede96
    JZ 0x004edee4                       ; 004ede98
        ;   XREF to: 004edee4 (CONDITIONAL_JUMP)  ; LAB_004edee4
    FLD float ptr [ESP + 0x20]          ; 004ede9a
    FSUB float ptr [ESP + 0xa38]        ; 004ede9e
    FST float ptr [ESP + 0x20]          ; 004edea5
    FCOMP double ptr [0x005dd225]       ; 004edea9 | DAT_005dd225
    FNSTSW AX                           ; 004edeaf
    SAHF                                ; 004edeb1
    JNC 0x004edec5                      ; 004edeb2
        ;   XREF to: 004edec5 (CONDITIONAL_JUMP)  ; LAB_004edec5
    XOR EDX,EDX                         ; 004edeb4
    PUSH EDX                            ; 004edeb6
    PUSH 0x1                            ; 004edeb7
    MOV dword ptr [ESP + 0x28],EDX      ; 004edeb9
    CALL sound_sndmain.cpp_FUN_00551220 ; 004edebd
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00551220(int channel_index, int enable_state)
        ;   Label: LAB_004edebd
    ADD ESP,0x8                         ; 004edec2
    FLD float ptr [ESP + 0x20]          ; 004edec5
        ;   Label: LAB_004edec5
    FMUL float ptr [0x005f9e30]         ; 004edec9 | DAT_005f9e30
    SUB ESP,0x4                         ; 004edecf
    FSTP float ptr [ESP]                ; 004eded2
    PUSH 0x1                            ; 004eded5
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00551100 ; 004eded7
        ;   XREF to: 00551100 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_00551100()
    ADD ESP,0x8                         ; 004ededc
    JMP 0x004edb52                      ; 004ededf
        ;   XREF to: 004edb52 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004edee4
        ;   Label: LAB_004edee4
    PUSH 0x1                            ; 004edee6
    CALL sound_sndmain.cpp_FUN_00551220 ; 004edee8
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00551220(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 004edeed
    MOV EDI,dword ptr [0x0061c068]      ; 004edef0 | DAT_0061c068
    PUSH EDI                            ; 004edef6
    CALL core_sound.cpp_FUN_0055ac50    ; 004edef7
        ;   XREF to: 0055ac50 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055ac50(CSound * this_ptr)
    MOV EAX,0x3f800000                  ; 004edefc
    ADD ESP,0x4                         ; 004edf01
    MOV dword ptr [ESP + 0x20],EAX      ; 004edf04
    JMP 0x004edec5                      ; 004edf08
        ;   XREF to: 004edec5 (UNCONDITIONAL_JUMP)  ; LAB_004edec5
    PUSH 0x1                            ; 004edf0a
        ;   Label: LAB_004edf0a
    CALL sound_sndmain.cpp_FUN_005512a0 ; 004edf0c
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005512a0(int channel_index)
    ADD ESP,0x4                         ; 004edf11
    TEST EAX,EAX                        ; 004edf14
    JZ 0x004edf5f                       ; 004edf16
        ;   XREF to: 004edf5f (CONDITIONAL_JUMP)  ; LAB_004edf5f
    FLD float ptr [ESP + 0x20]          ; 004edf18
    FADD float ptr [0x005dd20d]         ; 004edf1c | DAT_005dd20d
    FST float ptr [ESP + 0x20]          ; 004edf22
    FST double ptr [ESP + 0x10]         ; 004edf26
    FCOMP double ptr [0x005dd215]       ; 004edf2a | DAT_005dd215
    FNSTSW AX                           ; 004edf30
    SAHF                                ; 004edf32
    JA 0x004edf51                       ; 004edf33
        ;   XREF to: 004edf51 (CONDITIONAL_JUMP)  ; LAB_004edf51
    FLD double ptr [ESP + 0x10]         ; 004edf35
    FCOMP double ptr [0x005dd21d]       ; 004edf39 | DAT_005dd21d
    FNSTSW AX                           ; 004edf3f
    SAHF                                ; 004edf41
    JBE 0x004edec5                      ; 004edf42
        ;   XREF to: 004edec5 (CONDITIONAL_JUMP)  ; LAB_004edec5
    MOV dword ptr [ESP + 0x20],0x3f800000 ; 004edf44
    JMP 0x004edec5                      ; 004edf4c
        ;   XREF to: 004edec5 (UNCONDITIONAL_JUMP)  ; LAB_004edec5
    XOR ESI,ESI                         ; 004edf51
        ;   Label: LAB_004edf51
    PUSH ESI                            ; 004edf53
    PUSH 0x1                            ; 004edf54
    MOV dword ptr [ESP + 0x28],ESI      ; 004edf56
    JMP 0x004edebd                      ; 004edf5a
        ;   XREF to: 004edebd (UNCONDITIONAL_JUMP)  ; LAB_004edebd
    PUSH 0x1                            ; 004edf5f
        ;   Label: LAB_004edf5f
    PUSH 0x1                            ; 004edf61
    CALL sound_sndmain.cpp_FUN_00551220 ; 004edf63
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00551220(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 004edf68
    MOV EDX,dword ptr [0x0061c068]      ; 004edf6b | DAT_0061c068
    PUSH EDX                            ; 004edf71
    CALL core_sound.cpp_FUN_0055ac50    ; 004edf72
        ;   XREF to: 0055ac50 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055ac50(CSound * this_ptr)
    ADD ESP,0x4                         ; 004edf77
    MOV dword ptr [ESP + 0x20],EDI      ; 004edf7a
    JMP 0x004edec5                      ; 004edf7e
        ;   XREF to: 004edec5 (UNCONDITIONAL_JUMP)  ; LAB_004edec5
    CALL sound_sndmain.cpp_FUN_005527f0 ; 004edf83
        ;   XREF to: 005527f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005527f0()
        ;   Label: caseD_4
    MOV ESI,dword ptr [0x01d0612c]      ; 004edf88 | DAT_01d0612c
    MOV EBX,EAX                         ; 004edf8e
    CMP ESI,0x1                         ; 004edf90
    JNZ 0x004edfeb                      ; 004edf93
        ;   XREF to: 004edfeb (CONDITIONAL_JUMP)  ; LAB_004edfeb
    CMP EAX,0x5622                      ; 004edf95
    JNZ 0x004edfd6                      ; 004edf9a
        ;   XREF to: 004edfd6 (CONDITIONAL_JUMP)  ; LAB_004edfd6
    MOV EBX,0x2b2a                      ; 004edf9c
        ;   Label: LAB_004edf9c
    CALL sound_sndmain.cpp_FUN_00552b40 ; 004edfa1
        ;   XREF to: 00552b40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552b40()
        ;   Label: LAB_004edfa1
    TEST EAX,EAX                        ; 004edfa6
    JLE 0x004edfaf                      ; 004edfa8
        ;   XREF to: 004edfaf (CONDITIONAL_JUMP)  ; LAB_004edfaf
    MOV EBX,0xac44                      ; 004edfaa
    CALL sound_sndmain.cpp_FUN_005527f0 ; 004edfaf
        ;   XREF to: 005527f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005527f0()
        ;   Label: LAB_004edfaf
    CMP EBX,EAX                         ; 004edfb4
    JZ 0x004edb52                       ; 004edfb6
        ;   XREF to: 004edb52 (CONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005526b0 ; 004edfbc
        ;   XREF to: 005526b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005526b0()
    PUSH EBX                            ; 004edfc1
    CALL sound_sndmain.cpp_setAudioSampleRate_FUN_00552870 ; 004edfc2
        ;   XREF to: 00552870 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setAudioSampleRate_FUN_00552870(int sample_rate)
    ADD ESP,0x4                         ; 004edfc7
    MOV EDI,dword ptr [0x0061c068]      ; 004edfca | DAT_0061c068
    PUSH EDI                            ; 004edfd0
    JMP 0x004edb4a                      ; 004edfd1
        ;   XREF to: 004edb4a (UNCONDITIONAL_JUMP)  ; LAB_004edb4a
    CMP EAX,0xac44                      ; 004edfd6
        ;   Label: LAB_004edfd6
    JNZ 0x004edfe4                      ; 004edfdb
        ;   XREF to: 004edfe4 (CONDITIONAL_JUMP)  ; LAB_004edfe4
    MOV EBX,0x5622                      ; 004edfdd
    JMP 0x004edfa1                      ; 004edfe2
        ;   XREF to: 004edfa1 (UNCONDITIONAL_JUMP)  ; LAB_004edfa1
    MOV EBX,0xac44                      ; 004edfe4
        ;   Label: LAB_004edfe4
    JMP 0x004edfa1                      ; 004edfe9
        ;   XREF to: 004edfa1 (UNCONDITIONAL_JUMP)  ; LAB_004edfa1
    CMP EAX,0x5622                      ; 004edfeb
        ;   Label: LAB_004edfeb
    JGE 0x004edff9                      ; 004edff0
        ;   XREF to: 004edff9 (CONDITIONAL_JUMP)  ; LAB_004edff9
    MOV EBX,0x5622                      ; 004edff2
    JMP 0x004edfa1                      ; 004edff7
        ;   XREF to: 004edfa1 (UNCONDITIONAL_JUMP)  ; LAB_004edfa1
    CMP EAX,0xac44                      ; 004edff9
        ;   Label: LAB_004edff9
    JGE 0x004edf9c                      ; 004edffe
        ;   XREF to: 004edf9c (CONDITIONAL_JUMP)  ; LAB_004edf9c
    MOV EBX,0xac44                      ; 004ee000
    JMP 0x004edfa1                      ; 004ee005
        ;   XREF to: 004edfa1 (UNCONDITIONAL_JUMP)  ; LAB_004edfa1
    CALL sound_sndmain.cpp_FUN_005527d0 ; 004ee007
        ;   XREF to: 005527d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005527d0()
        ;   Label: caseD_5
    CMP EAX,0x10                        ; 004ee00c
    JNZ 0x004ee04b                      ; 004ee00f
        ;   XREF to: 004ee04b (CONDITIONAL_JUMP)  ; LAB_004ee04b
    MOV EBX,0x8                         ; 004ee011
    CALL sound_sndmain.cpp_FUN_00552b30 ; 004ee016
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00552b30(int enable)
        ;   Label: LAB_004ee016
    TEST EAX,EAX                        ; 004ee01b
    JLE 0x004ee024                      ; 004ee01d
        ;   XREF to: 004ee024 (CONDITIONAL_JUMP)  ; LAB_004ee024
    MOV EBX,0x10                        ; 004ee01f
    CALL sound_sndmain.cpp_FUN_005527d0 ; 004ee024
        ;   XREF to: 005527d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005527d0()
        ;   Label: LAB_004ee024
    CMP EBX,EAX                         ; 004ee029
    JZ 0x004edb52                       ; 004ee02b
        ;   XREF to: 004edb52 (CONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005526b0 ; 004ee031
        ;   XREF to: 005526b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005526b0()
    PUSH EBX                            ; 004ee036
    CALL sound_sndmain.cpp_setAudioBitDepth_FUN_00552830 ; 004ee037
        ;   XREF to: 00552830 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setAudioBitDepth_FUN_00552830(int bit_depth)
    ADD ESP,0x4                         ; 004ee03c
    MOV ECX,dword ptr [0x0061c068]      ; 004ee03f | DAT_0061c068
    PUSH ECX                            ; 004ee045
    JMP 0x004edb4a                      ; 004ee046
        ;   XREF to: 004edb4a (UNCONDITIONAL_JUMP)  ; LAB_004edb4a
    MOV EBX,0x10                        ; 004ee04b
        ;   Label: LAB_004ee04b
    JMP 0x004ee016                      ; 004ee050
        ;   XREF to: 004ee016 (UNCONDITIONAL_JUMP)  ; LAB_004ee016
    CALL sound_sndmain.cpp_FUN_00552810 ; 004ee052
        ;   XREF to: 00552810 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552810()
        ;   Label: caseD_6
    CMP EAX,0x1                         ; 004ee057
    SETZ AL                             ; 004ee05a
    AND EAX,0xff                        ; 004ee05d
    LEA EBX,[EAX + 0x1]                 ; 004ee062
    CALL sound_sndmain.cpp_FUN_00552b30 ; 004ee065
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00552b30(int enable)
    TEST EAX,EAX                        ; 004ee06a
    JLE 0x004ee073                      ; 004ee06c
        ;   XREF to: 004ee073 (CONDITIONAL_JUMP)  ; LAB_004ee073
    MOV EBX,0x2                         ; 004ee06e
    CALL sound_sndmain.cpp_FUN_00552810 ; 004ee073
        ;   XREF to: 00552810 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552810()
        ;   Label: LAB_004ee073
    CMP EBX,EAX                         ; 004ee078
    JZ 0x004edb52                       ; 004ee07a
        ;   XREF to: 004edb52 (CONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005526b0 ; 004ee080
        ;   XREF to: 005526b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005526b0()
    PUSH EBX                            ; 004ee085
    CALL sound_sndmain.cpp_setAudioChannelCount_FUN_00552850 ; 004ee086
        ;   XREF to: 00552850 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setAudioChannelCount_FUN_00552850(int channel_count)
    ADD ESP,0x4                         ; 004ee08b
    MOV EDX,dword ptr [0x0061c068]      ; 004ee08e | DAT_0061c068
    PUSH EDX                            ; 004ee094
    JMP 0x004edb4a                      ; 004ee095
        ;   XREF to: 004edb4a (UNCONDITIONAL_JUMP)  ; LAB_004edb4a
    LEA EAX,[ESP + 0x28]                ; 004ee09a
        ;   Label: caseD_7
    PUSH EAX                            ; 004ee09e
    XOR EBX,EBX                         ; 004ee09f
    CALL shape_edittool.cpp_CPickList_ctor_FUN_00481fc0 ; 004ee0a1
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_00481fc0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004ee0a6
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00552890 ; 004ee0a9
        ;   XREF to: 00552890 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_00552890()
        ;   Label: LAB_004ee0a9
    CMP EBX,EAX                         ; 004ee0ae
    JGE 0x004ee0db                      ; 004ee0b0
        ;   XREF to: 004ee0db (CONDITIONAL_JUMP)  ; LAB_004ee0db
    LEA EAX,[ESP + 0x3e8]               ; 004ee0b2
    PUSH EAX                            ; 004ee0b9
    PUSH EBX                            ; 004ee0ba
    CALL sound_sndmain.cpp_FUN_00552920 ; 004ee0bb
        ;   XREF to: 00552920 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00552920(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 004ee0c0
    LEA EAX,[ESP + 0x3e8]               ; 004ee0c3
    PUSH EAX                            ; 004ee0ca
    LEA EAX,[ESP + 0x2c]                ; 004ee0cb
    PUSH EAX                            ; 004ee0cf
    INC EBX                             ; 004ee0d0
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 004ee0d1
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004ee0d6
    JMP 0x004ee0a9                      ; 004ee0d9
        ;   XREF to: 004ee0a9 (UNCONDITIONAL_JUMP)  ; LAB_004ee0a9
    PUSH 0x0                            ; 004ee0db
        ;   Label: LAB_004ee0db
    CALL sound_sndmain.cpp_FUN_00552ca0 ; 004ee0dd
        ;   XREF to: 00552ca0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552ca0()
    PUSH EAX                            ; 004ee0e2
    PUSH 0x5dd1db                       ; 004ee0e3 | = "Select sound device"
    LEA EAX,[ESP + 0x34]                ; 004ee0e8
    PUSH EAX                            ; 004ee0ec
    CALL shape_edittool.cpp_FUN_00482250 ; 004ee0ed
        ;   XREF to: 00482250 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00482250(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    MOV EBX,EAX                         ; 004ee0f2
    ADD ESP,0x10                        ; 004ee0f4
    TEST EAX,EAX                        ; 004ee0f7
    JL 0x004ee137                       ; 004ee0f9
        ;   XREF to: 004ee137 (CONDITIONAL_JUMP)  ; LAB_004ee137
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_00552c40 ; 004ee0fb
        ;   XREF to: 00552c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_00552c40()
    PUSH EBX                            ; 004ee100
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_00552aa0 ; 004ee101
        ;   XREF to: 00552aa0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_00552aa0(int device_id)
    ADD ESP,0x4                         ; 004ee106
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_00552b90 ; 004ee109
        ;   XREF to: 00552b90 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_initializeSoundDevice_FUN_00552b90()
    CALL sound_sndmain.cpp_FUN_00552b30 ; 004ee10e
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00552b30(int enable)
    TEST EAX,EAX                        ; 004ee113
    JLE 0x004ee128                      ; 004ee115
        ;   XREF to: 004ee128 (CONDITIONAL_JUMP)  ; LAB_004ee128
    PUSH 0xac44                         ; 004ee117
    PUSH 0x2                            ; 004ee11c
    PUSH 0x10                           ; 004ee11e
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0 ; 004ee120
        ;   XREF to: 005526f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 004ee125
    MOV EDX,dword ptr [0x0061c068]      ; 004ee128 | DAT_0061c068
        ;   Label: LAB_004ee128
    PUSH EDX                            ; 004ee12e
    CALL core_sound.cpp_FUN_0055ac50    ; 004ee12f
        ;   XREF to: 0055ac50 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055ac50(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ee134
    PUSH 0x0                            ; 004ee137
        ;   Label: LAB_004ee137
    LEA EAX,[ESP + 0x2c]                ; 004ee139
    PUSH EAX                            ; 004ee13d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004820b0 ; 004ee13e
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004820b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ee143
    JMP 0x004edb52                      ; 004ee146
        ;   XREF to: 004edb52 (UNCONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_00552c40 ; 004ee14b
        ;   XREF to: 00552c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_00552c40()
        ;   Label: caseD_8
    CALL sound_sndmain.cpp_FUN_00552b40 ; 004ee150
        ;   XREF to: 00552b40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552b40()
    TEST EAX,EAX                        ; 004ee155
    JLE 0x004ee16d                      ; 004ee157
        ;   XREF to: 004ee16d (CONDITIONAL_JUMP)  ; LAB_004ee16d
    PUSH 0x0                            ; 004ee159
    CALL sound_sndmain.cpp_FUN_00552b50 ; 004ee15b
        ;   XREF to: 00552b50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00552b50()
    ADD ESP,0x4                         ; 004ee160
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_00552b90 ; 004ee163
        ;   XREF to: 00552b90 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_initializeSoundDevice_FUN_00552b90()
    JMP 0x004edb44                      ; 004ee168
        ;   XREF to: 004edb44 (UNCONDITIONAL_JUMP)  ; LAB_004edb44
    PUSH 0x2                            ; 004ee16d
        ;   Label: LAB_004ee16d
    CALL sound_sndmain.cpp_FUN_00552b50 ; 004ee16f
        ;   XREF to: 00552b50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00552b50()
    ADD ESP,0x4                         ; 004ee174
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_00552b90 ; 004ee177
        ;   XREF to: 00552b90 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_initializeSoundDevice_FUN_00552b90()
    JMP 0x004edb44                      ; 004ee17c
        ;   XREF to: 004edb44 (UNCONDITIONAL_JUMP)  ; LAB_004edb44

