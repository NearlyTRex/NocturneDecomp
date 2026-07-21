; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_configureSoundOptions_FUN_004d12e0(void)
;
; Local Variables:
; undefined4       Stack[-0x818]:4  local_818
; undefined4       Stack[-0x814]:4  local_814
; undefined8       Stack[-0x810]:8  local_810
; undefined8       Stack[-0x808]:8  local_808
; undefined8       Stack[-0x800]:8  local_800
; undefined4       Stack[-0x7f8]:4  local_7f8
; undefined4       Stack[-0x7f4]:4  local_7f4
; undefined4       Stack[-0x7f0]:4  local_7f0
; undefined4       Stack[-0x7ec]:4  local_7ec
; undefined        Stack[-0x7e8]:1  local_7e8
; undefined1       Stack[-0x678]:1  local_678
; undefined1       Stack[-0x677]:1  local_677
; undefined4       Stack[-0x570]:4  local_570
; undefined        Stack[-0x560]:1  local_560
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
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d2342
;
; Referenced Globals:
;   void* switchdataD_004d12b0 = 004d1b5e
;   undefined4 s_Sound_:_00588b4a+1
;   string s_Muted_00588b54
;   undefined4 DAT_00588b5a
;   string s_Sound_effects_:_00588b5d
;   undefined4 DAT_00588b6e
;   undefined4 DAT_00588b71
;   string s_Sound_effects_:_Off_00588b74
;   string s_Dialog_:_00588b88
;   undefined4 DAT_00588b92
;   undefined4 DAT_00588b95
;   string s_Dialog_:_Off_00588b98
;   string s_Music_Vol_:_00588ba5
;   undefined4 DAT_00588bb2
;   undefined4 DAT_00588bb5
;   ... and 42 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_0049a890
;   core_game.cpp_CGame_updateDT_FUN_0049a8a0
;   core_menu.cpp_renderAudioSpectrumBar_FUN_004cf2b0
;   core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440
;   core_moon.cpp_CMoon_render_FUN_004dec50
;   core_moon.cpp_CMoon_update_FUN_004deae0
;   core_sound.cpp_CSound_configure_FUN_0052e850
;   crt_math.c_pow_FUN_00565ad6
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_sprintf_FUN_00563c90
;   FUN_00474c90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
;   shape_edittool.cpp_CPickList_dtor_FUN_00474cf0
;   shape_edittool.cpp_CStrList_add_FUN_00473cb0
;   sound_sndmain.cpp_analyzeFrequencyBand_FUN_00528e60
;   ... and 30 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d12e0
        ;   Label: core_menu.cpp_configureSoundOptions_FUN_004d12e0
    PUSH ESI                            ; 004d12e1
    PUSH EDI                            ; 004d12e2
    PUSH EBP                            ; 004d12e3
    MOV EBP,ESP                         ; 004d12e4
    SUB ESP,0x800                       ; 004d12e6
    AND ESP,0xfffffff8                  ; 004d12ec
    MOV ECX,dword ptr [0x005b9354]      ; 004d12ef | DAT_005b9354
    XOR EDX,EDX                         ; 004d12f5
    PUSH ECX                            ; 004d12f7 | DAT_01c775ec
    MOV dword ptr [ESP + 0x7d8],EDX     ; 004d12f8
    CALL core_game.cpp_CGame_saveClockTime_FUN_0049a890 ; 004d12ff
        ;   XREF to: 0049a890 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_saveClockTime_FUN_0049a890()
    MOV EDX,0x1cc6ed8                   ; 004d1304
    ADD ESP,0x4                         ; 004d1309
    XOR EAX,EAX                         ; 004d130c
    MOV dword ptr [EAX + 0x1cc78d8],EDX ; 004d130e
        ;   Label: LAB_004d130e
    ADD EAX,0x4                         ; 004d1314
    ADD EDX,0x100                       ; 004d1317
    CMP EAX,0x28                        ; 004d131d
    JNZ 0x004d130e                      ; 004d1320
        ;   XREF to: 004d130e (CONDITIONAL_JUMP)  ; LAB_004d130e
    MOV EBX,dword ptr [0x005b9354]      ; 004d1322 | DAT_005b9354
        ;   Label: LAB_004d1322
    PUSH EBX                            ; 004d1328 | DAT_01c775ec
    CALL core_game.cpp_CGame_updateDT_FUN_0049a8a0 ; 004d1329
        ;   XREF to: 0049a8a0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_updateDT_FUN_0049a8a0()
    ADD ESP,0x4                         ; 004d132e
    MOV EAX,[0x005b9354]                ; 004d1331 | DAT_005b9354
    SUB ESP,0x4                         ; 004d1336
    MOV EDX,dword ptr [EAX + 0x264]     ; 004d1339 | DAT_01c77850
    MOV dword ptr [ESP],EDX             ; 004d133f
    PUSH 0x1cc5780                      ; 004d1342
    CALL core_moon.cpp_CMoon_update_FUN_004deae0 ; 004d1347
        ;   XREF to: 004deae0 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_CMoon_update_FUN_004deae0()
    ADD ESP,0x8                         ; 004d134c
    PUSH 0x1cc5780                      ; 004d134f
    CALL core_moon.cpp_CMoon_render_FUN_004dec50 ; 004d1354
        ;   XREF to: 004dec50 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_CMoon_render_FUN_004dec50()
    ADD ESP,0x4                         ; 004d1359
    XOR ESI,ESI                         ; 004d135c
    PUSH 0x588b4b                       ; 004d135e | s_Sound_:_00588b4a+1
    MOV dword ptr [ESP + 0x7e8],ESI     ; 004d1363
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d136a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d136f
    MOV EDI,0x1cc6ed8                   ; 004d1372
    MOV ESI,EAX                         ; 004d1377
    PUSH EDI                            ; 004d1379
    MOV AL,byte ptr [ESI]               ; 004d137a
        ;   Label: LAB_004d137a
    MOV byte ptr [EDI],AL               ; 004d137c | DAT_01cc6ed8 | DAT_01cc6eda
    CMP AL,0x0                          ; 004d137e
    JZ 0x004d1392                       ; 004d1380
        ;   XREF to: 004d1392 (CONDITIONAL_JUMP)  ; LAB_004d1392
    MOV AL,byte ptr [ESI + 0x1]         ; 004d1382
    ADD ESI,0x2                         ; 004d1385
    MOV byte ptr [EDI + 0x1],AL         ; 004d1388 | DAT_01cc6ed9 | DAT_01cc6edb
    ADD EDI,0x2                         ; 004d138b
    CMP AL,0x0                          ; 004d138e
    JNZ 0x004d137a                      ; 004d1390
        ;   XREF to: 004d137a (CONDITIONAL_JUMP)  ; LAB_004d137a
    POP EDI                             ; 004d1392
        ;   Label: LAB_004d1392
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0 ; 004d1393
        ;   XREF to: 00526ca0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0()
    TEST EAX,EAX                        ; 004d1398
    JNZ 0x004d1bac                      ; 004d139a
        ;   XREF to: 004d1bac (CONDITIONAL_JUMP)  ; LAB_004d1bac
    PUSH 0x588b5a                       ; 004d13a0 | DAT_00588b5a
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d13a5
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
        ;   Label: LAB_004d13a5
    ADD ESP,0x4                         ; 004d13aa
    MOV ESI,EAX                         ; 004d13ad
    PUSH EDI                            ; 004d13af | DAT_01cc6ed8
    SUB ECX,ECX                         ; 004d13b0
    DEC ECX                             ; 004d13b2
    MOV AL,0x0                          ; 004d13b3
    SCASB.REPNE ES:EDI                  ; 004d13b5 | DAT_01cc6ed8 | DAT_01cc6ed9
    DEC EDI                             ; 004d13b7
    MOV AL,byte ptr [ESI]               ; 004d13b8
        ;   Label: LAB_004d13b8
    MOV byte ptr [EDI],AL               ; 004d13ba | DAT_01cc6ed8 | DAT_01cc6eda | DAT_01cc6ed9
    CMP AL,0x0                          ; 004d13bc
    JZ 0x004d13d0                       ; 004d13be
        ;   XREF to: 004d13d0 (CONDITIONAL_JUMP)  ; LAB_004d13d0
    MOV AL,byte ptr [ESI + 0x1]         ; 004d13c0
    ADD ESI,0x2                         ; 004d13c3
    MOV byte ptr [EDI + 0x1],AL         ; 004d13c6 | DAT_01cc6ed9 | DAT_01cc6edb | DAT_01cc6eda
    ADD EDI,0x2                         ; 004d13c9
    CMP AL,0x0                          ; 004d13cc
    JNZ 0x004d13b8                      ; 004d13ce
        ;   XREF to: 004d13b8 (CONDITIONAL_JUMP)  ; LAB_004d13b8
    POP EDI                             ; 004d13d0
        ;   Label: LAB_004d13d0
    MOV EDI,dword ptr [ESP + 0x7e4]     ; 004d13d1
    PUSH 0x0                            ; 004d13d8
    INC EDI                             ; 004d13da
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 004d13db
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490()
    MOV dword ptr [ESP + 0x7e8],EDI     ; 004d13e0
    MOV EBX,EDI                         ; 004d13e7
    ADD ESP,0x4                         ; 004d13e9
    SHL EBX,0x8                         ; 004d13ec
    LEA EDX,[EDI + 0x1]                 ; 004d13ef
    ADD EBX,0x1cc6ed8                   ; 004d13f2
    MOV dword ptr [ESP + 0x7dc],EDX     ; 004d13f8
    TEST EAX,EAX                        ; 004d13ff
    JZ 0x004d1bb6                       ; 004d1401
        ;   XREF to: 004d1bb6 (CONDITIONAL_JUMP)  ; LAB_004d1bb6
    PUSH 0x588b5d                       ; 004d1407 | = "Sound effects : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d140c
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d1411
    PUSH EAX                            ; 004d1414
    PUSH EBX                            ; 004d1415
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d1416
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004d141b
    PUSH 0x0                            ; 004d141e
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 004d1420
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00527380()
    MOV dword ptr [ESP + 0x800],EAX     ; 004d1425
    FLD float ptr [ESP + 0x800]         ; 004d142c
    FMUL float ptr [0x00588c83]         ; 004d1433 | DAT_00588c83
    FDIV float ptr [0x005a0574]         ; 004d1439 | DAT_005a0574
    FADD double ptr [0x00588c8b]        ; 004d143f | DAT_00588c8b
    ADD ESP,0x4                         ; 004d1445
    CALL crt_math.c_round_FUN_00563a30  ; 004d1448
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x7fc]       ; 004d144d
    MOV EAX,dword ptr [ESP + 0x7fc]     ; 004d1454
    PUSH EAX                            ; 004d145b
    PUSH 0x588b6e                       ; 004d145c | DAT_00588b6e
    LEA EAX,[ESP + 0x4d0]               ; 004d1461
    PUSH EAX                            ; 004d1468
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d1469
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004d146e
    LEA ESI,[ESP + 0x4c8]               ; 004d1471
    MOV EDI,EBX                         ; 004d1478
    PUSH EDI                            ; 004d147a
    SUB ECX,ECX                         ; 004d147b
    DEC ECX                             ; 004d147d
    MOV AL,0x0                          ; 004d147e
    SCASB.REPNE ES:EDI                  ; 004d1480 | DAT_01cc6ed8 | DAT_01cc6ed9
    DEC EDI                             ; 004d1482
    MOV AL,byte ptr [ESI]               ; 004d1483
        ;   Label: LAB_004d1483
    MOV byte ptr [EDI],AL               ; 004d1485 | DAT_01cc6ed8 | DAT_01cc6ed9
    CMP AL,0x0                          ; 004d1487
    JZ 0x004d149b                       ; 004d1489
        ;   XREF to: 004d149b (CONDITIONAL_JUMP)  ; LAB_004d149b
    MOV AL,byte ptr [ESI + 0x1]         ; 004d148b
    ADD ESI,0x2                         ; 004d148e
    MOV byte ptr [EDI + 0x1],AL         ; 004d1491 | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d1494
    CMP AL,0x0                          ; 004d1497
    JNZ 0x004d1483                      ; 004d1499
        ;   XREF to: 004d1483 (CONDITIONAL_JUMP)  ; LAB_004d1483
    POP EDI                             ; 004d149b
        ;   Label: LAB_004d149b
    PUSH 0x588b71                       ; 004d149c | DAT_00588b71
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d14a1
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d14a6
    MOV ESI,EAX                         ; 004d14a9
    PUSH EDI                            ; 004d14ab
    SUB ECX,ECX                         ; 004d14ac
    DEC ECX                             ; 004d14ae
    MOV AL,0x0                          ; 004d14af
    SCASB.REPNE ES:EDI                  ; 004d14b1 | DAT_01cc6ed8 | DAT_01cc6ed9
    DEC EDI                             ; 004d14b3
    MOV AL,byte ptr [ESI]               ; 004d14b4
        ;   Label: LAB_004d14b4
    MOV byte ptr [EDI],AL               ; 004d14b6 | DAT_01cc6ed8 | DAT_01cc6ed9
    CMP AL,0x0                          ; 004d14b8
    JZ 0x004d14cc                       ; 004d14ba
        ;   XREF to: 004d14cc (CONDITIONAL_JUMP)  ; LAB_004d14cc
    MOV AL,byte ptr [ESI + 0x1]         ; 004d14bc
    ADD ESI,0x2                         ; 004d14bf
    MOV byte ptr [EDI + 0x1],AL         ; 004d14c2 | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d14c5
    CMP AL,0x0                          ; 004d14c8
    JNZ 0x004d14b4                      ; 004d14ca
        ;   XREF to: 004d14b4 (CONDITIONAL_JUMP)  ; LAB_004d14b4
    POP EDI                             ; 004d14cc
        ;   Label: LAB_004d14cc
    MOV ESI,dword ptr [ESP + 0x7dc]     ; 004d14cd
    PUSH 0x2                            ; 004d14d4
        ;   Label: LAB_004d14d4
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 004d14d6
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490()
    MOV EBX,ESI                         ; 004d14db
    ADD ESP,0x4                         ; 004d14dd
    SHL EBX,0x8                         ; 004d14e0
    INC ESI                             ; 004d14e3
    ADD EBX,0x1cc6ed8                   ; 004d14e4
    MOV dword ptr [ESP + 0x7e0],ESI     ; 004d14ea
    TEST EAX,EAX                        ; 004d14f1
    JZ 0x004d1bd9                       ; 004d14f3
        ;   XREF to: 004d1bd9 (CONDITIONAL_JUMP)  ; LAB_004d1bd9
    PUSH 0x588b88                       ; 004d14f9 | = "Dialog : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d14fe
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d1503
    MOV EDI,EBX                         ; 004d1506
    MOV ESI,EAX                         ; 004d1508
    PUSH EDI                            ; 004d150a
    MOV AL,byte ptr [ESI]               ; 004d150b
        ;   Label: LAB_004d150b
    MOV byte ptr [EDI],AL               ; 004d150d | DAT_01cc6ed8
    CMP AL,0x0                          ; 004d150f
    JZ 0x004d1523                       ; 004d1511
        ;   XREF to: 004d1523 (CONDITIONAL_JUMP)  ; LAB_004d1523
    MOV AL,byte ptr [ESI + 0x1]         ; 004d1513
    ADD ESI,0x2                         ; 004d1516
    MOV byte ptr [EDI + 0x1],AL         ; 004d1519 | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d151c
    CMP AL,0x0                          ; 004d151f
    JNZ 0x004d150b                      ; 004d1521
        ;   XREF to: 004d150b (CONDITIONAL_JUMP)  ; LAB_004d150b
    POP EDI                             ; 004d1523
        ;   Label: LAB_004d1523
    PUSH 0x2                            ; 004d1524
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 004d1526
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00527380()
    MOV dword ptr [ESP + 0x800],EAX     ; 004d152b
    FLD float ptr [ESP + 0x800]         ; 004d1532
    FMUL float ptr [0x00588c83]         ; 004d1539 | DAT_00588c83
    FDIV float ptr [0x005a0578]         ; 004d153f | DAT_005a0578
    FADD double ptr [0x00588c8b]        ; 004d1545 | DAT_00588c8b
    ADD ESP,0x4                         ; 004d154b
    CALL crt_math.c_round_FUN_00563a30  ; 004d154e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x7fc]       ; 004d1553
    MOV EDX,dword ptr [ESP + 0x7fc]     ; 004d155a
    PUSH EDX                            ; 004d1561
    PUSH 0x588b92                       ; 004d1562 | DAT_00588b92
    LEA EAX,[ESP + 0x6d0]               ; 004d1567
    PUSH EAX                            ; 004d156e
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d156f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004d1574
    LEA ESI,[ESP + 0x6c8]               ; 004d1577
    PUSH EDI                            ; 004d157e
    SUB ECX,ECX                         ; 004d157f
    DEC ECX                             ; 004d1581
    MOV AL,0x0                          ; 004d1582
    SCASB.REPNE ES:EDI                  ; 004d1584 | DAT_01cc6ed8 | DAT_01cc6ed9
    DEC EDI                             ; 004d1586
    MOV AL,byte ptr [ESI]               ; 004d1587
        ;   Label: LAB_004d1587
    MOV byte ptr [EDI],AL               ; 004d1589 | DAT_01cc6ed8 | DAT_01cc6ed9
    CMP AL,0x0                          ; 004d158b
    JZ 0x004d159f                       ; 004d158d
        ;   XREF to: 004d159f (CONDITIONAL_JUMP)  ; LAB_004d159f
    MOV AL,byte ptr [ESI + 0x1]         ; 004d158f
    ADD ESI,0x2                         ; 004d1592
    MOV byte ptr [EDI + 0x1],AL         ; 004d1595 | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d1598
    CMP AL,0x0                          ; 004d159b
    JNZ 0x004d1587                      ; 004d159d
        ;   XREF to: 004d1587 (CONDITIONAL_JUMP)  ; LAB_004d1587
    POP EDI                             ; 004d159f
        ;   Label: LAB_004d159f
    PUSH 0x588b95                       ; 004d15a0 | DAT_00588b95
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d15a5
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d15aa
    MOV ESI,EAX                         ; 004d15ad
    PUSH EDI                            ; 004d15af
    SUB ECX,ECX                         ; 004d15b0
    DEC ECX                             ; 004d15b2
    MOV AL,0x0                          ; 004d15b3
    SCASB.REPNE ES:EDI                  ; 004d15b5 | DAT_01cc6ed8 | DAT_01cc6ed9
    DEC EDI                             ; 004d15b7
    MOV AL,byte ptr [ESI]               ; 004d15b8
        ;   Label: LAB_004d15b8
    MOV byte ptr [EDI],AL               ; 004d15ba | DAT_01cc6ed8 | DAT_01cc6ed9
    CMP AL,0x0                          ; 004d15bc
    JZ 0x004d15d0                       ; 004d15be
        ;   XREF to: 004d15d0 (CONDITIONAL_JUMP)  ; LAB_004d15d0
    MOV AL,byte ptr [ESI + 0x1]         ; 004d15c0
    ADD ESI,0x2                         ; 004d15c3
    MOV byte ptr [EDI + 0x1],AL         ; 004d15c6 | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d15c9
    CMP AL,0x0                          ; 004d15cc
    JNZ 0x004d15b8                      ; 004d15ce
        ;   XREF to: 004d15b8 (CONDITIONAL_JUMP)  ; LAB_004d15b8
    POP EDI                             ; 004d15d0
        ;   Label: LAB_004d15d0
    MOV ESI,dword ptr [ESP + 0x7e0]     ; 004d15d1
    PUSH 0x1                            ; 004d15d8
        ;   Label: LAB_004d15d8
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 004d15da
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490()
    MOV EBX,ESI                         ; 004d15df
    ADD ESP,0x4                         ; 004d15e1
    SHL EBX,0x8                         ; 004d15e4
    INC ESI                             ; 004d15e7
    ADD EBX,0x1cc6ed8                   ; 004d15e8
    MOV dword ptr [ESP + 0x7d0],ESI     ; 004d15ee
    TEST EAX,EAX                        ; 004d15f5
    JZ 0x004d1bf5                       ; 004d15f7
        ;   XREF to: 004d1bf5 (CONDITIONAL_JUMP)  ; LAB_004d1bf5
    PUSH 0x588ba5                       ; 004d15fd | = "Music Vol : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d1602
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d1607
    MOV EDI,EBX                         ; 004d160a
    MOV ESI,EAX                         ; 004d160c
    PUSH EDI                            ; 004d160e
    MOV AL,byte ptr [ESI]               ; 004d160f
        ;   Label: LAB_004d160f
    MOV byte ptr [EDI],AL               ; 004d1611 | DAT_01cc6ed8
    CMP AL,0x0                          ; 004d1613
    JZ 0x004d1627                       ; 004d1615
        ;   XREF to: 004d1627 (CONDITIONAL_JUMP)  ; LAB_004d1627
    MOV AL,byte ptr [ESI + 0x1]         ; 004d1617
    ADD ESI,0x2                         ; 004d161a
    MOV byte ptr [EDI + 0x1],AL         ; 004d161d | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d1620
    CMP AL,0x0                          ; 004d1623
    JNZ 0x004d160f                      ; 004d1625
        ;   XREF to: 004d160f (CONDITIONAL_JUMP)  ; LAB_004d160f
    POP EDI                             ; 004d1627
        ;   Label: LAB_004d1627
    PUSH 0x1                            ; 004d1628
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 004d162a
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00527380()
    MOV dword ptr [ESP + 0x800],EAX     ; 004d162f
    FLD float ptr [ESP + 0x800]         ; 004d1636
    FMUL float ptr [0x00588c83]         ; 004d163d | DAT_00588c83
    FDIV float ptr [0x005a0570]         ; 004d1643 | DAT_005a0570
    FADD double ptr [0x00588c8b]        ; 004d1649 | DAT_00588c8b
    ADD ESP,0x4                         ; 004d164f
    CALL crt_math.c_round_FUN_00563a30  ; 004d1652
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x7fc]       ; 004d1657
    MOV ECX,dword ptr [ESP + 0x7fc]     ; 004d165e
    PUSH ECX                            ; 004d1665
    PUSH 0x588bb2                       ; 004d1666 | DAT_00588bb2
    LEA EAX,[ESP + 0x3d0]               ; 004d166b
    PUSH EAX                            ; 004d1672
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d1673
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004d1678
    LEA ESI,[ESP + 0x3c8]               ; 004d167b
    PUSH EDI                            ; 004d1682
    SUB ECX,ECX                         ; 004d1683
    DEC ECX                             ; 004d1685
    MOV AL,0x0                          ; 004d1686
    SCASB.REPNE ES:EDI                  ; 004d1688 | DAT_01cc6ed8 | DAT_01cc6ed9
    DEC EDI                             ; 004d168a
    MOV AL,byte ptr [ESI]               ; 004d168b
        ;   Label: LAB_004d168b
    MOV byte ptr [EDI],AL               ; 004d168d | DAT_01cc6ed8 | DAT_01cc6ed9
    CMP AL,0x0                          ; 004d168f
    JZ 0x004d16a3                       ; 004d1691
        ;   XREF to: 004d16a3 (CONDITIONAL_JUMP)  ; LAB_004d16a3
    MOV AL,byte ptr [ESI + 0x1]         ; 004d1693
    ADD ESI,0x2                         ; 004d1696
    MOV byte ptr [EDI + 0x1],AL         ; 004d1699 | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d169c
    CMP AL,0x0                          ; 004d169f
    JNZ 0x004d168b                      ; 004d16a1
        ;   XREF to: 004d168b (CONDITIONAL_JUMP)  ; LAB_004d168b
    POP EDI                             ; 004d16a3
        ;   Label: LAB_004d16a3
    PUSH 0x588bb5                       ; 004d16a4 | DAT_00588bb5
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d16a9
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d16ae
    MOV ESI,EAX                         ; 004d16b1
    PUSH EDI                            ; 004d16b3
    SUB ECX,ECX                         ; 004d16b4
    DEC ECX                             ; 004d16b6
    MOV AL,0x0                          ; 004d16b7
    SCASB.REPNE ES:EDI                  ; 004d16b9 | DAT_01cc6ed8 | DAT_01cc6ed9
    DEC EDI                             ; 004d16bb
    MOV AL,byte ptr [ESI]               ; 004d16bc
        ;   Label: LAB_004d16bc
    MOV byte ptr [EDI],AL               ; 004d16be | DAT_01cc6ed8 | DAT_01cc6ed9
    CMP AL,0x0                          ; 004d16c0
    JZ 0x004d16d4                       ; 004d16c2
        ;   XREF to: 004d16d4 (CONDITIONAL_JUMP)  ; LAB_004d16d4
    MOV AL,byte ptr [ESI + 0x1]         ; 004d16c4
    ADD ESI,0x2                         ; 004d16c7
    MOV byte ptr [EDI + 0x1],AL         ; 004d16ca | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d16cd
    CMP AL,0x0                          ; 004d16d0
    JNZ 0x004d16bc                      ; 004d16d2
        ;   XREF to: 004d16bc (CONDITIONAL_JUMP)  ; LAB_004d16bc
    POP EDI                             ; 004d16d4
        ;   Label: LAB_004d16d4
    MOV EAX,dword ptr [ESP + 0x7d0]     ; 004d16d5
    MOV dword ptr [ESP + 0x7ec],EAX     ; 004d16dc
    PUSH 0x588bc8                       ; 004d16e3 | = "Output rate : "
        ;   Label: LAB_004d16e3
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d16e8
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d16ed
    MOV EDI,dword ptr [ESP + 0x7ec]     ; 004d16f0
    SHL EDI,0x8                         ; 004d16f7
    MOV ESI,EAX                         ; 004d16fa
    ADD EDI,0x1cc6ed8                   ; 004d16fc
    PUSH EDI                            ; 004d1702
    MOV AL,byte ptr [ESI]               ; 004d1703
        ;   Label: LAB_004d1703
    MOV byte ptr [EDI],AL               ; 004d1705 | DAT_01cc6ed8
    CMP AL,0x0                          ; 004d1707
    JZ 0x004d171b                       ; 004d1709
        ;   XREF to: 004d171b (CONDITIONAL_JUMP)  ; LAB_004d171b
    MOV AL,byte ptr [ESI + 0x1]         ; 004d170b
    ADD ESI,0x2                         ; 004d170e
    MOV byte ptr [EDI + 0x1],AL         ; 004d1711 | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d1714
    CMP AL,0x0                          ; 004d1717
    JNZ 0x004d1703                      ; 004d1719
        ;   XREF to: 004d1703 (CONDITIONAL_JUMP)  ; LAB_004d1703
    POP EDI                             ; 004d171b
        ;   Label: LAB_004d171b
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0 ; 004d171c
        ;   XREF to: 005281b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0()
    PUSH EAX                            ; 004d1721
    PUSH 0x588bd7                       ; 004d1722 | DAT_00588bd7
    LEA EAX,[ESP + 0x5d0]               ; 004d1727
    PUSH EAX                            ; 004d172e
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d172f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004d1734
    LEA ESI,[ESP + 0x5c8]               ; 004d1737
    PUSH EDI                            ; 004d173e
    SUB ECX,ECX                         ; 004d173f
    DEC ECX                             ; 004d1741
    MOV AL,0x0                          ; 004d1742
    SCASB.REPNE ES:EDI                  ; 004d1744 | DAT_01cc6ed8 | DAT_01cc6ed9
    DEC EDI                             ; 004d1746
    MOV AL,byte ptr [ESI]               ; 004d1747
        ;   Label: LAB_004d1747
    MOV byte ptr [EDI],AL               ; 004d1749 | DAT_01cc6ed8 | DAT_01cc6ed9
    CMP AL,0x0                          ; 004d174b
    JZ 0x004d175f                       ; 004d174d
        ;   XREF to: 004d175f (CONDITIONAL_JUMP)  ; LAB_004d175f
    MOV AL,byte ptr [ESI + 0x1]         ; 004d174f
    ADD ESI,0x2                         ; 004d1752
    MOV byte ptr [EDI + 0x1],AL         ; 004d1755 | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d1758
    CMP AL,0x0                          ; 004d175b
    JNZ 0x004d1747                      ; 004d175d
        ;   XREF to: 004d1747 (CONDITIONAL_JUMP)  ; LAB_004d1747
    POP EDI                             ; 004d175f
        ;   Label: LAB_004d175f
    PUSH 0x588bda                       ; 004d1760 | DAT_00588bda
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d1765
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d176a
    MOV ESI,EAX                         ; 004d176d
    PUSH EDI                            ; 004d176f
    SUB ECX,ECX                         ; 004d1770
    DEC ECX                             ; 004d1772
    MOV AL,0x0                          ; 004d1773
    SCASB.REPNE ES:EDI                  ; 004d1775 | DAT_01cc6ed8 | DAT_01cc6ed9
    DEC EDI                             ; 004d1777
    MOV AL,byte ptr [ESI]               ; 004d1778
        ;   Label: LAB_004d1778
    MOV byte ptr [EDI],AL               ; 004d177a | DAT_01cc6ed8 | DAT_01cc6ed9
    CMP AL,0x0                          ; 004d177c
    JZ 0x004d1790                       ; 004d177e
        ;   XREF to: 004d1790 (CONDITIONAL_JUMP)  ; LAB_004d1790
    MOV AL,byte ptr [ESI + 0x1]         ; 004d1780
    ADD ESI,0x2                         ; 004d1783
    MOV byte ptr [EDI + 0x1],AL         ; 004d1786 | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d1789
    CMP AL,0x0                          ; 004d178c
    JNZ 0x004d1778                      ; 004d178e
        ;   XREF to: 004d1778 (CONDITIONAL_JUMP)  ; LAB_004d1778
    POP EDI                             ; 004d1790
        ;   Label: LAB_004d1790
    MOV EBX,dword ptr [ESP + 0x7ec]     ; 004d1791
    PUSH 0x588bdd                       ; 004d1798 | = "Output quality : "
    INC EBX                             ; 004d179d
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d179e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV dword ptr [ESP + 0x7f0],EBX     ; 004d17a3
    MOV EDI,EBX                         ; 004d17aa
    ADD ESP,0x4                         ; 004d17ac
    SHL EDI,0x8                         ; 004d17af
    MOV ESI,EAX                         ; 004d17b2
    ADD EDI,0x1cc6ed8                   ; 004d17b4
    PUSH EDI                            ; 004d17ba
    MOV AL,byte ptr [ESI]               ; 004d17bb
        ;   Label: LAB_004d17bb
    MOV byte ptr [EDI],AL               ; 004d17bd | DAT_01cc6ed8
    CMP AL,0x0                          ; 004d17bf
    JZ 0x004d17d3                       ; 004d17c1
        ;   XREF to: 004d17d3 (CONDITIONAL_JUMP)  ; LAB_004d17d3
    MOV AL,byte ptr [ESI + 0x1]         ; 004d17c3
    ADD ESI,0x2                         ; 004d17c6
    MOV byte ptr [EDI + 0x1],AL         ; 004d17c9 | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d17cc
    CMP AL,0x0                          ; 004d17cf
    JNZ 0x004d17bb                      ; 004d17d1
        ;   XREF to: 004d17bb (CONDITIONAL_JUMP)  ; LAB_004d17bb
    POP EDI                             ; 004d17d3
        ;   Label: LAB_004d17d3
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0 ; 004d17d4
        ;   XREF to: 005281a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0()
    PUSH EAX                            ; 004d17d9
    PUSH 0x588bef                       ; 004d17da | DAT_00588bef
    LEA EAX,[ESP + 0x5d0]               ; 004d17df
    PUSH EAX                            ; 004d17e6
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d17e7
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004d17ec
    LEA ESI,[ESP + 0x5c8]               ; 004d17ef
    PUSH EDI                            ; 004d17f6
    SUB ECX,ECX                         ; 004d17f7
    DEC ECX                             ; 004d17f9
    MOV AL,0x0                          ; 004d17fa
    SCASB.REPNE ES:EDI                  ; 004d17fc | DAT_01cc6ed8 | DAT_01cc6ed9
    DEC EDI                             ; 004d17fe
    MOV AL,byte ptr [ESI]               ; 004d17ff
        ;   Label: LAB_004d17ff
    MOV byte ptr [EDI],AL               ; 004d1801 | DAT_01cc6ed8 | DAT_01cc6ed9
    CMP AL,0x0                          ; 004d1803
    JZ 0x004d1817                       ; 004d1805
        ;   XREF to: 004d1817 (CONDITIONAL_JUMP)  ; LAB_004d1817
    MOV AL,byte ptr [ESI + 0x1]         ; 004d1807
    ADD ESI,0x2                         ; 004d180a
    MOV byte ptr [EDI + 0x1],AL         ; 004d180d | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d1810
    CMP AL,0x0                          ; 004d1813
    JNZ 0x004d17ff                      ; 004d1815
        ;   XREF to: 004d17ff (CONDITIONAL_JUMP)  ; LAB_004d17ff
    POP EDI                             ; 004d1817
        ;   Label: LAB_004d1817
    PUSH 0x588bf2                       ; 004d1818 | DAT_00588bf2
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d181d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d1822
    MOV ESI,EAX                         ; 004d1825
    PUSH EDI                            ; 004d1827
    SUB ECX,ECX                         ; 004d1828
    DEC ECX                             ; 004d182a
    MOV AL,0x0                          ; 004d182b
    SCASB.REPNE ES:EDI                  ; 004d182d | DAT_01cc6ed8 | DAT_01cc6ed9
    DEC EDI                             ; 004d182f
    MOV AL,byte ptr [ESI]               ; 004d1830
        ;   Label: LAB_004d1830
    MOV byte ptr [EDI],AL               ; 004d1832 | DAT_01cc6ed8 | DAT_01cc6ed9
    CMP AL,0x0                          ; 004d1834
    JZ 0x004d1848                       ; 004d1836
        ;   XREF to: 004d1848 (CONDITIONAL_JUMP)  ; LAB_004d1848
    MOV AL,byte ptr [ESI + 0x1]         ; 004d1838
    ADD ESI,0x2                         ; 004d183b
    MOV byte ptr [EDI + 0x1],AL         ; 004d183e | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d1841
    CMP AL,0x0                          ; 004d1844
    JNZ 0x004d1830                      ; 004d1846
        ;   XREF to: 004d1830 (CONDITIONAL_JUMP)  ; LAB_004d1830
    POP EDI                             ; 004d1848
        ;   Label: LAB_004d1848
    LEA ESI,[EBX + 0x1]                 ; 004d1849
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0 ; 004d184c
        ;   XREF to: 005281c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0()
    MOV dword ptr [ESP + 0x7ec],ESI     ; 004d1851
    CMP EAX,0x1                         ; 004d1858
    JNC 0x004d1c40                      ; 004d185b
        ;   XREF to: 004d1c40 (CONDITIONAL_JUMP)  ; LAB_004d1c40
    PUSH 0x588bf6                       ; 004d1861 | = "Output type : MONO"
        ;   Label: LAB_004d1861
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d1866
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d186b
    PUSH EAX                            ; 004d186e
    MOV EAX,dword ptr [ESP + 0x7f0]     ; 004d186f
    SHL EAX,0x8                         ; 004d1876
    MOV EDX,dword ptr [ESP + 0x7f0]     ; 004d1879
    ADD EAX,0x1cc6ed8                   ; 004d1880
    INC EDX                             ; 004d1885
    PUSH EAX                            ; 004d1886
    MOV dword ptr [ESP + 0x7f4],EDX     ; 004d1887
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d188e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
        ;   Label: LAB_004d188e
    ADD ESP,0x8                         ; 004d1893
    CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_00528610 ; 004d1896
        ;   XREF to: 00528610 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getCurrentSoundDevice_FUN_00528610()
    MOV EBX,EAX                         ; 004d189b
    TEST EAX,EAX                        ; 004d189d
    JL 0x004d18ae                       ; 004d189f
        ;   XREF to: 004d18ae (CONDITIONAL_JUMP)  ; LAB_004d18ae
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230 ; 004d18a1
        ;   XREF to: 00528230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230()
    CMP EBX,EAX                         ; 004d18a6
    JL 0x004d1c50                       ; 004d18a8
        ;   XREF to: 004d1c50 (CONDITIONAL_JUMP)  ; LAB_004d1c50
    XOR ECX,ECX                         ; 004d18ae
        ;   Label: LAB_004d18ae
    XOR AH,AH                           ; 004d18b0
    MOV dword ptr [ESP + 0x2a0],ECX     ; 004d18b2
    MOV byte ptr [ESP + 0x198],AH       ; 004d18b9
    PUSH 0x588c1e                       ; 004d18c0 | = "Device : "
        ;   Label: LAB_004d18c0
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d18c5
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d18ca
    MOV EDI,dword ptr [ESP + 0x7ec]     ; 004d18cd
    SHL EDI,0x8                         ; 004d18d4
    MOV ESI,EAX                         ; 004d18d7
    ADD EDI,0x1cc6ed8                   ; 004d18d9
    MOV EBX,dword ptr [ESP + 0x7ec]     ; 004d18df
    PUSH EDI                            ; 004d18e6
    MOV AL,byte ptr [ESI]               ; 004d18e7
        ;   Label: LAB_004d18e7
    MOV byte ptr [EDI],AL               ; 004d18e9 | DAT_01cc6ed8
    CMP AL,0x0                          ; 004d18eb
    JZ 0x004d18ff                       ; 004d18ed
        ;   XREF to: 004d18ff (CONDITIONAL_JUMP)  ; LAB_004d18ff
    MOV AL,byte ptr [ESI + 0x1]         ; 004d18ef
    ADD ESI,0x2                         ; 004d18f2
    MOV byte ptr [EDI + 0x1],AL         ; 004d18f5 | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d18f8
    CMP AL,0x0                          ; 004d18fb
    JNZ 0x004d18e7                      ; 004d18fd
        ;   XREF to: 004d18e7 (CONDITIONAL_JUMP)  ; LAB_004d18e7
    POP EDI                             ; 004d18ff
        ;   Label: LAB_004d18ff
    LEA ESI,[ESP + 0x198]               ; 004d1900
    INC EBX                             ; 004d1907
    PUSH EDI                            ; 004d1908
    SUB ECX,ECX                         ; 004d1909
    DEC ECX                             ; 004d190b
    MOV AL,0x0                          ; 004d190c
    SCASB.REPNE ES:EDI                  ; 004d190e | DAT_01cc6ed8 | DAT_01cc6ed9
    DEC EDI                             ; 004d1910
    MOV AL,byte ptr [ESI]               ; 004d1911
        ;   Label: LAB_004d1911
    MOV byte ptr [EDI],AL               ; 004d1913 | DAT_01cc6ed8 | DAT_01cc6ed9
    CMP AL,0x0                          ; 004d1915
    JZ 0x004d1929                       ; 004d1917
        ;   XREF to: 004d1929 (CONDITIONAL_JUMP)  ; LAB_004d1929
    MOV AL,byte ptr [ESI + 0x1]         ; 004d1919
    ADD ESI,0x2                         ; 004d191c
    MOV byte ptr [EDI + 0x1],AL         ; 004d191f | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d1922
    CMP AL,0x0                          ; 004d1925
    JNZ 0x004d1911                      ; 004d1927
        ;   XREF to: 004d1911 (CONDITIONAL_JUMP)  ; LAB_004d1911
    POP EDI                             ; 004d1929
        ;   Label: LAB_004d1929
    MOV ESI,dword ptr [ESP + 0x2a0]     ; 004d192a
    MOV dword ptr [ESP + 0x7ec],EBX     ; 004d1931
    TEST ESI,ESI                        ; 004d1938
    JZ 0x004d1984                       ; 004d193a
        ;   XREF to: 004d1984 (CONDITIONAL_JUMP)  ; LAB_004d1984
    MOV EDI,EBX                         ; 004d193c
    SHL EDI,0x8                         ; 004d193e
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0 ; 004d1941
        ;   XREF to: 005284e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0()
    ADD EDI,0x1cc6ed8                   ; 004d1946
    TEST EAX,EAX                        ; 004d194c
    JZ 0x004d1c66                       ; 004d194e
        ;   XREF to: 004d1c66 (CONDITIONAL_JUMP)  ; LAB_004d1c66
    PUSH 0x588c28                       ; 004d1954 | = "Hardware mixing: On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d1959
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
        ;   Label: LAB_004d1959
    ADD ESP,0x4                         ; 004d195e
    MOV ESI,EAX                         ; 004d1961
    PUSH EDI                            ; 004d1963
    MOV AL,byte ptr [ESI]               ; 004d1964
        ;   Label: LAB_004d1964
    MOV byte ptr [EDI],AL               ; 004d1966 | DAT_01cc6ed8
    CMP AL,0x0                          ; 004d1968
    JZ 0x004d197c                       ; 004d196a
        ;   XREF to: 004d197c (CONDITIONAL_JUMP)  ; LAB_004d197c
    MOV AL,byte ptr [ESI + 0x1]         ; 004d196c
    ADD ESI,0x2                         ; 004d196f
    MOV byte ptr [EDI + 0x1],AL         ; 004d1972 | DAT_01cc6ed9
    ADD EDI,0x2                         ; 004d1975
    CMP AL,0x0                          ; 004d1978
    JNZ 0x004d1964                      ; 004d197a
        ;   XREF to: 004d1964 (CONDITIONAL_JUMP)  ; LAB_004d1964
    POP EDI                             ; 004d197c
        ;   Label: LAB_004d197c
    INC dword ptr [ESP + 0x7ec]         ; 004d197d
    IMUL EAX,dword ptr [0x01bd1d80],0x18 ; 004d1984 | DAT_01bd1d80
        ;   Label: LAB_004d1984
    MOV ECX,dword ptr [0x01cc5b64]      ; 004d198b | DAT_01cc5b64
    ADD ECX,EAX                         ; 004d1991
    MOV dword ptr [0x01cc5b64],ECX      ; 004d1993 | DAT_01cc5b64
    CMP ECX,0x80000                     ; 004d1999
    JL 0x004d19ad                       ; 004d199f
        ;   XREF to: 004d19ad (CONDITIONAL_JUMP)  ; LAB_004d19ad
    LEA ESI,[ECX + 0xfff80000]          ; 004d19a1
    MOV dword ptr [0x01cc5b64],ESI      ; 004d19a7 | DAT_01cc5b64
    CALL sound_sndmain.cpp_isSoundBusy_FUN_00528490 ; 004d19ad
        ;   XREF to: 00528490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSoundBusy_FUN_00528490()
        ;   Label: LAB_004d19ad
    TEST EAX,EAX                        ; 004d19b2
    JZ 0x004d1b0f                       ; 004d19b4
        ;   XREF to: 004d1b0f (CONDITIONAL_JUMP)  ; LAB_004d1b0f
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0 ; 004d19ba
        ;   XREF to: 005281c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0()
    MOV EBX,EAX                         ; 004d19bf
    MOV dword ptr [ESP + 0x7f0],EAX     ; 004d19c1
    MOV EAX,[0x005b761c]                ; 004d19c8 | DAT_005b761c
    MOV EDX,EAX                         ; 004d19cd
    MOV ESI,0x14                        ; 004d19cf
    SAR EDX,0x1f                        ; 004d19d4
    IDIV ESI                            ; 004d19d7
    MOV dword ptr [ESP + 0x7f4],EAX     ; 004d19d9
    MOV EAX,[0x005b761c]                ; 004d19e0 | DAT_005b761c
    MOV EDX,EAX                         ; 004d19e5
    SAR EDX,0x1f                        ; 004d19e7
    IDIV EBX                            ; 004d19ea
    MOV EDX,dword ptr [ESP + 0x7f4]     ; 004d19ec
    ADD EDX,EDX                         ; 004d19f3
    MOV dword ptr [ESP + 0x7f8],EAX     ; 004d19f5
    SUB EAX,EDX                         ; 004d19fc
    MOV EDX,EAX                         ; 004d19fe
    SAR EDX,0x1f                        ; 004d1a00
    SHL EDX,0x2                         ; 004d1a03
    SBB EAX,EDX                         ; 004d1a06
    SAR EAX,0x2                         ; 004d1a08
    MOV dword ptr [ESP + 0x7fc],EAX     ; 004d1a0b
    FILD dword ptr [ESP + 0x7fc]        ; 004d1a12
    FLD1                                ; 004d1a19
    FDIVRP                              ; 004d1a1b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004d1a1d
    FLD double ptr [0x00588c93]         ; 004d1a21 | DAT_00588c93
    CALL crt_math.c_pow_FUN_00565ad6    ; 004d1a27
        ;   XREF to: 00565ad6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_00565ad6()
    XOR ESI,ESI                         ; 004d1a2c
    FSTP double ptr [ESP]               ; 004d1a2e
    TEST EBX,EBX                        ; 004d1a31
    JLE 0x004d1b0f                      ; 004d1a33
        ;   XREF to: 004d1b0f (CONDITIONAL_JUMP)  ; LAB_004d1b0f
    MOV EDX,0x40690000                  ; 004d1a39
        ;   Label: LAB_004d1a39
    XOR EAX,EAX                         ; 004d1a3e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004d1a40
    MOV dword ptr [ESP + 0x8],EAX       ; 004d1a44
    MOV dword ptr [ESP + 0xc],EDX       ; 004d1a48
    TEST ECX,ECX                        ; 004d1a4c
    JLE 0x004d1aff                      ; 004d1a4e
        ;   XREF to: 004d1aff (CONDITIONAL_JUMP)  ; LAB_004d1aff
    MOV EAX,dword ptr [ESP + 0x7f8]     ; 004d1a54
    IMUL EAX,ESI                        ; 004d1a5b
    ADD EAX,dword ptr [ESP + 0x7f4]     ; 004d1a5e
    LEA EDI,[ECX*0x4 + 0x0]             ; 004d1a65
    MOV EBX,EAX                         ; 004d1a6c
    ADD EDI,EAX                         ; 004d1a6e
    FLD double ptr [ESP + 0x8]          ; 004d1a70
        ;   Label: LAB_004d1a70
    FMUL double ptr [ESP]               ; 004d1a74
    FST double ptr [ESP + 0x7c8]        ; 004d1a77
    SUB ESP,0x4                         ; 004d1a7e
    FSTP float ptr [ESP]                ; 004d1a81
    FLD double ptr [ESP + 0xc]          ; 004d1a84
    SUB ESP,0x4                         ; 004d1a88
    FSTP float ptr [ESP]                ; 004d1a8b
    PUSH ESI                            ; 004d1a8e
    CALL sound_sndmain.cpp_analyzeFrequencyBand_FUN_00528e60 ; 004d1a8f
        ;   XREF to: 00528e60 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_analyzeFrequencyBand_FUN_00528e60()
    MOV dword ptr [ESP + 0x808],EAX     ; 004d1a94
    FLD float ptr [ESP + 0x808]         ; 004d1a9b
    ADD ESP,0xc                         ; 004d1aa2
    FILD dword ptr [0x005b7620]         ; 004d1aa5 | DAT_005b7620
    FXCH                                ; 004d1aab
    FMUL ST1                            ; 004d1aad
    MOV EAX,[0x005b7620]                ; 004d1aaf | DAT_005b7620
    FMUL float ptr [0x00588c87]         ; 004d1ab4 | DAT_00588c87
    DEC EAX                             ; 004d1aba
    FSUBP                               ; 004d1abb
    MOV EDX,EAX                         ; 004d1abd
    CALL crt_math.c_round_FUN_00563a30  ; 004d1abf
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x7fc]       ; 004d1ac4
    SUB EDX,dword ptr [ESP + 0x7fc]     ; 004d1acb
    INC EDX                             ; 004d1ad2
    PUSH EDX                            ; 004d1ad3
    PUSH EAX                            ; 004d1ad4
    PUSH EBX                            ; 004d1ad5
    CALL core_menu.cpp_renderAudioSpectrumBar_FUN_004cf2b0 ; 004d1ad6
        ;   XREF to: 004cf2b0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_renderAudioSpectrumBar_FUN_004cf2b0()
    ADD ESP,0xc                         ; 004d1adb
    MOV EAX,dword ptr [ESP + 0x7c8]     ; 004d1ade
    MOV dword ptr [ESP + 0x8],EAX       ; 004d1ae5
    MOV EAX,dword ptr [ESP + 0x7cc]     ; 004d1ae9
    ADD EBX,0x4                         ; 004d1af0
    MOV dword ptr [ESP + 0xc],EAX       ; 004d1af3
    CMP EBX,EDI                         ; 004d1af7
    JL 0x004d1a70                       ; 004d1af9
        ;   XREF to: 004d1a70 (CONDITIONAL_JUMP)  ; LAB_004d1a70
    MOV EDI,dword ptr [ESP + 0x7f0]     ; 004d1aff
        ;   Label: LAB_004d1aff
    INC ESI                             ; 004d1b06
    CMP ESI,EDI                         ; 004d1b07
    JL 0x004d1a39                       ; 004d1b09
        ;   XREF to: 004d1a39 (CONDITIONAL_JUMP)  ; LAB_004d1a39
    PUSH 0x588c51                       ; 004d1b0f | = "Sound Options"
        ;   Label: LAB_004d1b0f
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d1b14
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d1b19
    PUSH EAX                            ; 004d1b1c
    PUSH 0xe1                           ; 004d1b1d
    LEA EAX,[ESP + 0x7dc]               ; 004d1b22
    PUSH EAX                            ; 004d1b29
    MOV ESI,dword ptr [ESP + 0x7f8]     ; 004d1b2a
    PUSH ESI                            ; 004d1b31
    PUSH 0x1cc78d8                      ; 004d1b32
    CALL core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440 ; 004d1b37
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440()
    ADD ESP,0x14                        ; 004d1b3c
    MOV EDI,0x3e4ccccd                  ; 004d1b3f
    MOV EBX,EAX                         ; 004d1b44
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004d1b46
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    MOV dword ptr [ESP + 0x7e8],EDI     ; 004d1b4b
    CMP EBX,0x8                         ; 004d1b52
    JA 0x004d1b8d                       ; 004d1b55
        ;   XREF to: 004d1b8d (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x4d12b0]  ; 004d1b57 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0 ; 004d1b5e
        ;   XREF to: 00526ca0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0()
        ;   Label: caseD_0
    TEST EAX,EAX                        ; 004d1b63
    SETZ AL                             ; 004d1b65
    AND EAX,0xff                        ; 004d1b68
    PUSH EAX                            ; 004d1b6d
    CALL sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0 ; 004d1b6e
        ;   XREF to: 00526cb0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0()
    ADD ESP,0x4                         ; 004d1b73
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0 ; 004d1b76
        ;   XREF to: 00526ca0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0()
    TEST EAX,EAX                        ; 004d1b7b
    JNZ 0x004d1b8d                      ; 004d1b7d
        ;   XREF to: 004d1b8d (CONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005bed68]                ; 004d1b7f | DAT_005bed68
        ;   Label: LAB_004d1b7f
    PUSH EAX                            ; 004d1b84
    CALL core_sound.cpp_CSound_configure_FUN_0052e850 ; 004d1b85
        ;   XREF to: 0052e850 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_configure_FUN_0052e850()
        ;   Label: LAB_004d1b85
    ADD ESP,0x4                         ; 004d1b8a
    PUSH 0x1                            ; 004d1b8d
        ;   Label: default
    MOV EAX,[0x005bac64]                ; 004d1b8f | DAT_005bac64
    PUSH EAX                            ; 004d1b94 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d1b95 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004d1b97
    ADD ESP,0x8                         ; 004d1b9a
    TEST EAX,EAX                        ; 004d1b9d
    JZ 0x004d1322                       ; 004d1b9f
        ;   XREF to: 004d1322 (CONDITIONAL_JUMP)  ; LAB_004d1322
    MOV ESP,EBP                         ; 004d1ba5
    POP EBP                             ; 004d1ba7
    POP EDI                             ; 004d1ba8
    POP ESI                             ; 004d1ba9
    POP EBX                             ; 004d1baa
    RET                                 ; 004d1bab
    PUSH 0x588b54                       ; 004d1bac | = "Muted"
        ;   Label: LAB_004d1bac
    JMP 0x004d13a5                      ; 004d1bb1
        ;   XREF to: 004d13a5 (UNCONDITIONAL_JUMP)  ; LAB_004d13a5
    PUSH 0x588b74                       ; 004d1bb6 | = "Sound effects : Off"
        ;   Label: LAB_004d1bb6
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d1bbb
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d1bc0
    PUSH EAX                            ; 004d1bc3
    PUSH EBX                            ; 004d1bc4
    MOV ESI,dword ptr [ESP + 0x7e4]     ; 004d1bc5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d1bcc
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004d1bd1
    JMP 0x004d14d4                      ; 004d1bd4
        ;   XREF to: 004d14d4 (UNCONDITIONAL_JUMP)  ; LAB_004d14d4
    PUSH 0x588b98                       ; 004d1bd9 | = "Dialog : Off"
        ;   Label: LAB_004d1bd9
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d1bde
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d1be3
    PUSH EAX                            ; 004d1be6
    PUSH EBX                            ; 004d1be7
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d1be8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004d1bed
    JMP 0x004d15d8                      ; 004d1bf0
        ;   XREF to: 004d15d8 (UNCONDITIONAL_JUMP)  ; LAB_004d15d8
    PUSH 0x588bb8                       ; 004d1bf5 | = "Music Vol : Off"
        ;   Label: LAB_004d1bf5
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d1bfa
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d1bff
    PUSH EAX                            ; 004d1c02
    PUSH EBX                            ; 004d1c03
    MOV dword ptr [ESP + 0x7f4],ESI     ; 004d1c04
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d1c0b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004d1c10
    JMP 0x004d16e3                      ; 004d1c13
        ;   XREF to: 004d16e3 (UNCONDITIONAL_JUMP)  ; LAB_004d16e3
    PUSH 0x588c09                       ; 004d1c18 | = "Output type : STEREO"
        ;   Label: LAB_004d1c18
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d1c1d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d1c22
    PUSH EAX                            ; 004d1c25
    MOV EAX,ESI                         ; 004d1c26
    SHL EAX,0x8                         ; 004d1c28
    ADD EAX,0x1cc6ed8                   ; 004d1c2b
    LEA EDI,[ESI + 0x1]                 ; 004d1c30
    PUSH EAX                            ; 004d1c33
    MOV dword ptr [ESP + 0x7f4],EDI     ; 004d1c34
    JMP 0x004d188e                      ; 004d1c3b
        ;   XREF to: 004d188e (UNCONDITIONAL_JUMP)  ; LAB_004d188e
    JBE 0x004d1861                      ; 004d1c40
        ;   XREF to: 004d1861 (CONDITIONAL_JUMP)  ; LAB_004d1861
        ;   Label: LAB_004d1c40
    CMP EAX,0x2                         ; 004d1c46
    JZ 0x004d1c18                       ; 004d1c49
        ;   XREF to: 004d1c18 (CONDITIONAL_JUMP)  ; LAB_004d1c18
    JMP 0x004d1861                      ; 004d1c4b
        ;   XREF to: 004d1861 (UNCONDITIONAL_JUMP)  ; LAB_004d1861
    LEA EAX,[ESP + 0x198]               ; 004d1c50
        ;   Label: LAB_004d1c50
    PUSH EAX                            ; 004d1c57
    PUSH EBX                            ; 004d1c58
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0 ; 004d1c59
        ;   XREF to: 005282c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0()
    ADD ESP,0x8                         ; 004d1c5e
    JMP 0x004d18c0                      ; 004d1c61
        ;   XREF to: 004d18c0 (UNCONDITIONAL_JUMP)  ; LAB_004d18c0
    PUSH 0x588c3c                       ; 004d1c66 | = "Hardware mixing: Off"
        ;   Label: LAB_004d1c66
    JMP 0x004d1959                      ; 004d1c6b
        ;   XREF to: 004d1959 (UNCONDITIONAL_JUMP)  ; LAB_004d1959
    PUSH 0x0                            ; 004d1c70
        ;   Label: caseD_1
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 004d1c72
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00527380()
    MOV dword ptr [ESP + 0x800],EAX     ; 004d1c77
    FLD float ptr [ESP + 0x800]         ; 004d1c7e
    FDIV float ptr [0x005a0574]         ; 004d1c85 | DAT_005a0574
    ADD ESP,0x4                         ; 004d1c8b
    MOV EDX,dword ptr [0x01cc5b5c]      ; 004d1c8e | DAT_01cc5b5c
    FSTP float ptr [ESP + 0x24]         ; 004d1c94
    CMP EDX,0x1                         ; 004d1c98
    JNZ 0x004d1d2f                      ; 004d1c9b
        ;   XREF to: 004d1d2f (CONDITIONAL_JUMP)  ; LAB_004d1d2f
    PUSH 0x0                            ; 004d1ca1
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 004d1ca3
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490()
    ADD ESP,0x4                         ; 004d1ca8
    TEST EAX,EAX                        ; 004d1cab
    JZ 0x004d1d19                       ; 004d1cad
        ;   XREF to: 004d1d19 (CONDITIONAL_JUMP)  ; LAB_004d1d19
    FLD float ptr [ESP + 0x24]          ; 004d1caf
    FSUB float ptr [ESP + 0x7e8]        ; 004d1cb3
    FST float ptr [ESP + 0x24]          ; 004d1cba
    FCOMP double ptr [0x00588cbb]       ; 004d1cbe | DAT_00588cbb
    FNSTSW AX                           ; 004d1cc4
    SAHF                                ; 004d1cc6
    JNC 0x004d1cd9                      ; 004d1cc7
        ;   XREF to: 004d1cd9 (CONDITIONAL_JUMP)  ; LAB_004d1cd9
    XOR EDI,EDI                         ; 004d1cc9
    PUSH EDI                            ; 004d1ccb
    PUSH EDI                            ; 004d1ccc
    MOV dword ptr [ESP + 0x2c],EDI      ; 004d1ccd
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 004d1cd1
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSfxChannel_FUN_00527410()
        ;   Label: LAB_004d1cd1
    ADD ESP,0x8                         ; 004d1cd6
    FLD float ptr [ESP + 0x24]          ; 004d1cd9
        ;   Label: LAB_004d1cd9
    FMUL float ptr [0x005a0574]         ; 004d1cdd | DAT_005a0574
    SUB ESP,0x4                         ; 004d1ce3
    FSTP float ptr [ESP]                ; 004d1ce6
    PUSH 0x0                            ; 004d1ce9
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0 ; 004d1ceb
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0()
    ADD ESP,0x8                         ; 004d1cf0
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 004d1cf3
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH 0x1                            ; 004d1cf8
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_00526240 ; 004d1cfa
        ;   XREF to: 00526240 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxFlags_FUN_00526240()
    ADD ESP,0x4                         ; 004d1cff
    PUSH 0x588c5f                       ; 004d1d02 | = "colt45-0.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 004d1d07
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_startSfx_FUN_005265a0()
    ADD ESP,0x4                         ; 004d1d0c
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 004d1d0f
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    JMP 0x004d1b8d                      ; 004d1d14
        ;   XREF to: 004d1b8d (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004d1d19
        ;   Label: LAB_004d1d19
    PUSH EAX                            ; 004d1d1b
    MOV ESI,0x3f800000                  ; 004d1d1c
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 004d1d21
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSfxChannel_FUN_00527410()
    ADD ESP,0x8                         ; 004d1d26
    MOV dword ptr [ESP + 0x24],ESI      ; 004d1d29
    JMP 0x004d1cd9                      ; 004d1d2d
        ;   XREF to: 004d1cd9 (UNCONDITIONAL_JUMP)  ; LAB_004d1cd9
    PUSH 0x0                            ; 004d1d2f
        ;   Label: LAB_004d1d2f
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 004d1d31
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490()
    ADD ESP,0x4                         ; 004d1d36
    TEST EAX,EAX                        ; 004d1d39
    JZ 0x004d1d84                       ; 004d1d3b
        ;   XREF to: 004d1d84 (CONDITIONAL_JUMP)  ; LAB_004d1d84
    FLD float ptr [ESP + 0x24]          ; 004d1d3d
    FADD float ptr [ESP + 0x7e8]        ; 004d1d41
    FST float ptr [ESP + 0x24]          ; 004d1d48
    FCOMP double ptr [0x00588ca3]       ; 004d1d4c | DAT_00588ca3
    FNSTSW AX                           ; 004d1d52
    SAHF                                ; 004d1d54
    JA 0x004d1d77                       ; 004d1d55
        ;   XREF to: 004d1d77 (CONDITIONAL_JUMP)  ; LAB_004d1d77
    FLD float ptr [ESP + 0x24]          ; 004d1d57
    FCOMP double ptr [0x00588cab]       ; 004d1d5b | DAT_00588cab
    FNSTSW AX                           ; 004d1d61
    SAHF                                ; 004d1d63
    JBE 0x004d1cd9                      ; 004d1d64
        ;   XREF to: 004d1cd9 (CONDITIONAL_JUMP)  ; LAB_004d1cd9
    MOV dword ptr [ESP + 0x24],0x3f800000 ; 004d1d6a
    JMP 0x004d1cd9                      ; 004d1d72
        ;   XREF to: 004d1cd9 (UNCONDITIONAL_JUMP)  ; LAB_004d1cd9
    XOR EBX,EBX                         ; 004d1d77
        ;   Label: LAB_004d1d77
    PUSH EBX                            ; 004d1d79
    PUSH EBX                            ; 004d1d7a
    MOV dword ptr [ESP + 0x2c],EBX      ; 004d1d7b
    JMP 0x004d1cd1                      ; 004d1d7f
        ;   XREF to: 004d1cd1 (UNCONDITIONAL_JUMP)  ; LAB_004d1cd1
    PUSH 0x1                            ; 004d1d84
        ;   Label: LAB_004d1d84
    PUSH EAX                            ; 004d1d86
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 004d1d87
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSfxChannel_FUN_00527410()
    ADD ESP,0x8                         ; 004d1d8c
    MOV dword ptr [ESP + 0x24],EDI      ; 004d1d8f
    JMP 0x004d1cd9                      ; 004d1d93
        ;   XREF to: 004d1cd9 (UNCONDITIONAL_JUMP)  ; LAB_004d1cd9
    PUSH 0x2                            ; 004d1d98
        ;   Label: caseD_2
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 004d1d9a
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00527380()
    MOV dword ptr [ESP + 0x800],EAX     ; 004d1d9f
    FLD float ptr [ESP + 0x800]         ; 004d1da6
    FDIV float ptr [0x005a0578]         ; 004d1dad | DAT_005a0578
    ADD ESP,0x4                         ; 004d1db3
    MOV ECX,dword ptr [0x01cc5b5c]      ; 004d1db6 | DAT_01cc5b5c
    FSTP float ptr [ESP + 0x18]         ; 004d1dbc
    CMP ECX,0x1                         ; 004d1dc0
    JNZ 0x004d1e34                      ; 004d1dc3
        ;   XREF to: 004d1e34 (CONDITIONAL_JUMP)  ; LAB_004d1e34
    PUSH 0x2                            ; 004d1dc5
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 004d1dc7
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490()
    ADD ESP,0x4                         ; 004d1dcc
    TEST EAX,EAX                        ; 004d1dcf
    JZ 0x004d1e1d                       ; 004d1dd1
        ;   XREF to: 004d1e1d (CONDITIONAL_JUMP)  ; LAB_004d1e1d
    FLD float ptr [ESP + 0x18]          ; 004d1dd3
    FSUB float ptr [ESP + 0x7e8]        ; 004d1dd7
    FST float ptr [ESP + 0x18]          ; 004d1dde
    FCOMP double ptr [0x00588cbb]       ; 004d1de2 | DAT_00588cbb
    FNSTSW AX                           ; 004d1de8
    SAHF                                ; 004d1dea
    JNC 0x004d1dfe                      ; 004d1deb
        ;   XREF to: 004d1dfe (CONDITIONAL_JUMP)  ; LAB_004d1dfe
    XOR EAX,EAX                         ; 004d1ded
    PUSH EAX                            ; 004d1def
    PUSH 0x2                            ; 004d1df0
    MOV dword ptr [ESP + 0x20],EAX      ; 004d1df2
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 004d1df6
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSfxChannel_FUN_00527410()
        ;   Label: LAB_004d1df6
    ADD ESP,0x8                         ; 004d1dfb
    FLD float ptr [ESP + 0x18]          ; 004d1dfe
        ;   Label: LAB_004d1dfe
    FMUL float ptr [0x005a0578]         ; 004d1e02 | DAT_005a0578
    SUB ESP,0x4                         ; 004d1e08
    FSTP float ptr [ESP]                ; 004d1e0b
    PUSH 0x2                            ; 004d1e0e
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0 ; 004d1e10
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0()
    ADD ESP,0x8                         ; 004d1e15
    JMP 0x004d1b8d                      ; 004d1e18
        ;   XREF to: 004d1b8d (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004d1e1d
        ;   Label: LAB_004d1e1d
    PUSH 0x2                            ; 004d1e1f
    MOV EDI,0x3f800000                  ; 004d1e21
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 004d1e26
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSfxChannel_FUN_00527410()
    ADD ESP,0x8                         ; 004d1e2b
    MOV dword ptr [ESP + 0x18],EDI      ; 004d1e2e
    JMP 0x004d1dfe                      ; 004d1e32
        ;   XREF to: 004d1dfe (UNCONDITIONAL_JUMP)  ; LAB_004d1dfe
    PUSH 0x2                            ; 004d1e34
        ;   Label: LAB_004d1e34
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 004d1e36
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490()
    ADD ESP,0x4                         ; 004d1e3b
    TEST EAX,EAX                        ; 004d1e3e
    JZ 0x004d1e83                       ; 004d1e40
        ;   XREF to: 004d1e83 (CONDITIONAL_JUMP)  ; LAB_004d1e83
    FLD float ptr [ESP + 0x18]          ; 004d1e42
    FADD float ptr [ESP + 0x7e8]        ; 004d1e46
    FST float ptr [ESP + 0x18]          ; 004d1e4d
    FCOMP double ptr [0x00588ca3]       ; 004d1e51 | DAT_00588ca3
    FNSTSW AX                           ; 004d1e57
    SAHF                                ; 004d1e59
    JA 0x004d1e75                       ; 004d1e5a
        ;   XREF to: 004d1e75 (CONDITIONAL_JUMP)  ; LAB_004d1e75
    FLD float ptr [ESP + 0x18]          ; 004d1e5c
    FCOMP double ptr [0x00588cab]       ; 004d1e60 | DAT_00588cab
    FNSTSW AX                           ; 004d1e66
    SAHF                                ; 004d1e68
    JBE 0x004d1dfe                      ; 004d1e69
        ;   XREF to: 004d1dfe (CONDITIONAL_JUMP)  ; LAB_004d1dfe
    MOV dword ptr [ESP + 0x18],0x3f800000 ; 004d1e6b
    JMP 0x004d1dfe                      ; 004d1e73
        ;   XREF to: 004d1dfe (UNCONDITIONAL_JUMP)  ; LAB_004d1dfe
    XOR ESI,ESI                         ; 004d1e75
        ;   Label: LAB_004d1e75
    PUSH ESI                            ; 004d1e77
    PUSH 0x2                            ; 004d1e78
    MOV dword ptr [ESP + 0x20],ESI      ; 004d1e7a
    JMP 0x004d1df6                      ; 004d1e7e
        ;   XREF to: 004d1df6 (UNCONDITIONAL_JUMP)  ; LAB_004d1df6
    PUSH 0x1                            ; 004d1e83
        ;   Label: LAB_004d1e83
    PUSH 0x2                            ; 004d1e85
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 004d1e87
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSfxChannel_FUN_00527410()
    ADD ESP,0x8                         ; 004d1e8c
    MOV dword ptr [ESP + 0x18],EDI      ; 004d1e8f
    JMP 0x004d1dfe                      ; 004d1e93
        ;   XREF to: 004d1dfe (UNCONDITIONAL_JUMP)  ; LAB_004d1dfe
    PUSH 0x1                            ; 004d1e98
        ;   Label: caseD_3
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 004d1e9a
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00527380()
    MOV dword ptr [ESP + 0x800],EAX     ; 004d1e9f
    FLD float ptr [ESP + 0x800]         ; 004d1ea6
    FDIV float ptr [0x005a0570]         ; 004d1ead | DAT_005a0570
    ADD ESP,0x4                         ; 004d1eb3
    MOV EAX,[0x01cc5b5c]                ; 004d1eb6 | DAT_01cc5b5c
    FSTP float ptr [ESP + 0x20]         ; 004d1ebb
    CMP EAX,0x1                         ; 004d1ebf
    JNZ 0x004d1f44                      ; 004d1ec2
        ;   XREF to: 004d1f44 (CONDITIONAL_JUMP)  ; LAB_004d1f44
    PUSH EAX                            ; 004d1ec8
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 004d1ec9
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490()
    ADD ESP,0x4                         ; 004d1ece
    TEST EAX,EAX                        ; 004d1ed1
    JZ 0x004d1f1e                       ; 004d1ed3
        ;   XREF to: 004d1f1e (CONDITIONAL_JUMP)  ; LAB_004d1f1e
    FLD float ptr [ESP + 0x20]          ; 004d1ed5
    FADD float ptr [0x00588cb3]         ; 004d1ed9 | DAT_00588cb3
    FST float ptr [ESP + 0x20]          ; 004d1edf
    FCOMP double ptr [0x00588cbb]       ; 004d1ee3 | DAT_00588cbb
    FNSTSW AX                           ; 004d1ee9
    SAHF                                ; 004d1eeb
    JNC 0x004d1eff                      ; 004d1eec
        ;   XREF to: 004d1eff (CONDITIONAL_JUMP)  ; LAB_004d1eff
    XOR EDX,EDX                         ; 004d1eee
    PUSH EDX                            ; 004d1ef0
    PUSH 0x1                            ; 004d1ef1
    MOV dword ptr [ESP + 0x28],EDX      ; 004d1ef3
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 004d1ef7
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSfxChannel_FUN_00527410()
        ;   Label: LAB_004d1ef7
    ADD ESP,0x8                         ; 004d1efc
    FLD float ptr [ESP + 0x20]          ; 004d1eff
        ;   Label: LAB_004d1eff
    FMUL float ptr [0x005a0570]         ; 004d1f03 | DAT_005a0570
    SUB ESP,0x4                         ; 004d1f09
    FSTP float ptr [ESP]                ; 004d1f0c
    PUSH 0x1                            ; 004d1f0f
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0 ; 004d1f11
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0()
    ADD ESP,0x8                         ; 004d1f16
    JMP 0x004d1b8d                      ; 004d1f19
        ;   XREF to: 004d1b8d (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004d1f1e
        ;   Label: LAB_004d1f1e
    PUSH 0x1                            ; 004d1f20
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 004d1f22
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSfxChannel_FUN_00527410()
    ADD ESP,0x8                         ; 004d1f27
    MOV EDI,dword ptr [0x005bed68]      ; 004d1f2a | DAT_005bed68
    PUSH EDI                            ; 004d1f30
    CALL core_sound.cpp_CSound_configure_FUN_0052e850 ; 004d1f31
        ;   XREF to: 0052e850 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_configure_FUN_0052e850()
    MOV EAX,0x3f800000                  ; 004d1f36
    ADD ESP,0x4                         ; 004d1f3b
    MOV dword ptr [ESP + 0x20],EAX      ; 004d1f3e
    JMP 0x004d1eff                      ; 004d1f42
        ;   XREF to: 004d1eff (UNCONDITIONAL_JUMP)  ; LAB_004d1eff
    PUSH 0x1                            ; 004d1f44
        ;   Label: LAB_004d1f44
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 004d1f46
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490()
    ADD ESP,0x4                         ; 004d1f4b
    TEST EAX,EAX                        ; 004d1f4e
    JZ 0x004d1f99                       ; 004d1f50
        ;   XREF to: 004d1f99 (CONDITIONAL_JUMP)  ; LAB_004d1f99
    FLD float ptr [ESP + 0x20]          ; 004d1f52
    FADD float ptr [0x00588c9b]         ; 004d1f56 | DAT_00588c9b
    FST float ptr [ESP + 0x20]          ; 004d1f5c
    FST double ptr [ESP + 0x10]         ; 004d1f60
    FCOMP double ptr [0x00588ca3]       ; 004d1f64 | DAT_00588ca3
    FNSTSW AX                           ; 004d1f6a
    SAHF                                ; 004d1f6c
    JA 0x004d1f8b                       ; 004d1f6d
        ;   XREF to: 004d1f8b (CONDITIONAL_JUMP)  ; LAB_004d1f8b
    FLD double ptr [ESP + 0x10]         ; 004d1f6f
    FCOMP double ptr [0x00588cab]       ; 004d1f73 | DAT_00588cab
    FNSTSW AX                           ; 004d1f79
    SAHF                                ; 004d1f7b
    JBE 0x004d1eff                      ; 004d1f7c
        ;   XREF to: 004d1eff (CONDITIONAL_JUMP)  ; LAB_004d1eff
    MOV dword ptr [ESP + 0x20],0x3f800000 ; 004d1f7e
    JMP 0x004d1eff                      ; 004d1f86
        ;   XREF to: 004d1eff (UNCONDITIONAL_JUMP)  ; LAB_004d1eff
    XOR ESI,ESI                         ; 004d1f8b
        ;   Label: LAB_004d1f8b
    PUSH ESI                            ; 004d1f8d
    PUSH 0x1                            ; 004d1f8e
    MOV dword ptr [ESP + 0x28],ESI      ; 004d1f90
    JMP 0x004d1ef7                      ; 004d1f94
        ;   XREF to: 004d1ef7 (UNCONDITIONAL_JUMP)  ; LAB_004d1ef7
    PUSH 0x1                            ; 004d1f99
        ;   Label: LAB_004d1f99
    PUSH 0x1                            ; 004d1f9b
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 004d1f9d
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSfxChannel_FUN_00527410()
    ADD ESP,0x8                         ; 004d1fa2
    MOV EDX,dword ptr [0x005bed68]      ; 004d1fa5 | DAT_005bed68
    PUSH EDX                            ; 004d1fab
    CALL core_sound.cpp_CSound_configure_FUN_0052e850 ; 004d1fac
        ;   XREF to: 0052e850 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_configure_FUN_0052e850()
    ADD ESP,0x4                         ; 004d1fb1
    MOV dword ptr [ESP + 0x20],EDI      ; 004d1fb4
    JMP 0x004d1eff                      ; 004d1fb8
        ;   XREF to: 004d1eff (UNCONDITIONAL_JUMP)  ; LAB_004d1eff
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0 ; 004d1fbd
        ;   XREF to: 005281b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0()
        ;   Label: caseD_4
    MOV ESI,dword ptr [0x01cc5b5c]      ; 004d1fc2 | DAT_01cc5b5c
    MOV EBX,EAX                         ; 004d1fc8
    CMP ESI,0x1                         ; 004d1fca
    JNZ 0x004d2025                      ; 004d1fcd
        ;   XREF to: 004d2025 (CONDITIONAL_JUMP)  ; LAB_004d2025
    CMP EAX,0x5622                      ; 004d1fcf
    JNZ 0x004d2010                      ; 004d1fd4
        ;   XREF to: 004d2010 (CONDITIONAL_JUMP)  ; LAB_004d2010
    MOV EBX,0x2b2a                      ; 004d1fd6
        ;   Label: LAB_004d1fd6
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0 ; 004d1fdb
        ;   XREF to: 005284f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0()
        ;   Label: LAB_004d1fdb
    TEST EAX,EAX                        ; 004d1fe0
    JZ 0x004d1fe9                       ; 004d1fe2
        ;   XREF to: 004d1fe9 (CONDITIONAL_JUMP)  ; LAB_004d1fe9
    MOV EBX,0xac44                      ; 004d1fe4
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0 ; 004d1fe9
        ;   XREF to: 005281b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0()
        ;   Label: LAB_004d1fe9
    CMP EBX,EAX                         ; 004d1fee
    JZ 0x004d1b8d                       ; 004d1ff0
        ;   XREF to: 004d1b8d (CONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00528080 ; 004d1ff6
        ;   XREF to: 00528080 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_resetSoundDevice_FUN_00528080()
    PUSH EBX                            ; 004d1ffb
    CALL sound_sndmain.cpp_setAudioSampleRate_FUN_00528210 ; 004d1ffc
        ;   XREF to: 00528210 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setAudioSampleRate_FUN_00528210()
    ADD ESP,0x4                         ; 004d2001
    MOV EDI,dword ptr [0x005bed68]      ; 004d2004 | DAT_005bed68
    PUSH EDI                            ; 004d200a
    JMP 0x004d1b85                      ; 004d200b
        ;   XREF to: 004d1b85 (UNCONDITIONAL_JUMP)  ; LAB_004d1b85
    CMP EAX,0xac44                      ; 004d2010
        ;   Label: LAB_004d2010
    JNZ 0x004d201e                      ; 004d2015
        ;   XREF to: 004d201e (CONDITIONAL_JUMP)  ; LAB_004d201e
    MOV EBX,0x5622                      ; 004d2017
    JMP 0x004d1fdb                      ; 004d201c
        ;   XREF to: 004d1fdb (UNCONDITIONAL_JUMP)  ; LAB_004d1fdb
    MOV EBX,0xac44                      ; 004d201e
        ;   Label: LAB_004d201e
    JMP 0x004d1fdb                      ; 004d2023
        ;   XREF to: 004d1fdb (UNCONDITIONAL_JUMP)  ; LAB_004d1fdb
    CMP EAX,0x5622                      ; 004d2025
        ;   Label: LAB_004d2025
    JGE 0x004d2033                      ; 004d202a
        ;   XREF to: 004d2033 (CONDITIONAL_JUMP)  ; LAB_004d2033
    MOV EBX,0x5622                      ; 004d202c
    JMP 0x004d1fdb                      ; 004d2031
        ;   XREF to: 004d1fdb (UNCONDITIONAL_JUMP)  ; LAB_004d1fdb
    CMP EAX,0xac44                      ; 004d2033
        ;   Label: LAB_004d2033
    JGE 0x004d1fd6                      ; 004d2038
        ;   XREF to: 004d1fd6 (CONDITIONAL_JUMP)  ; LAB_004d1fd6
    MOV EBX,0xac44                      ; 004d203a
    JMP 0x004d1fdb                      ; 004d203f
        ;   XREF to: 004d1fdb (UNCONDITIONAL_JUMP)  ; LAB_004d1fdb
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0 ; 004d2041
        ;   XREF to: 005281a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0()
        ;   Label: caseD_5
    CMP EAX,0x10                        ; 004d2046
    JNZ 0x004d2085                      ; 004d2049
        ;   XREF to: 004d2085 (CONDITIONAL_JUMP)  ; LAB_004d2085
    MOV EBX,0x8                         ; 004d204b
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0 ; 004d2050
        ;   XREF to: 005284f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0()
        ;   Label: LAB_004d2050
    TEST EAX,EAX                        ; 004d2055
    JZ 0x004d205e                       ; 004d2057
        ;   XREF to: 004d205e (CONDITIONAL_JUMP)  ; LAB_004d205e
    MOV EBX,0x10                        ; 004d2059
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0 ; 004d205e
        ;   XREF to: 005281a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0()
        ;   Label: LAB_004d205e
    CMP EBX,EAX                         ; 004d2063
    JZ 0x004d1b8d                       ; 004d2065
        ;   XREF to: 004d1b8d (CONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00528080 ; 004d206b
        ;   XREF to: 00528080 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_resetSoundDevice_FUN_00528080()
    PUSH EBX                            ; 004d2070
    CALL sound_sndmain.cpp_setAudioBitDepth_FUN_005281d0 ; 004d2071
        ;   XREF to: 005281d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setAudioBitDepth_FUN_005281d0()
    ADD ESP,0x4                         ; 004d2076
    MOV ECX,dword ptr [0x005bed68]      ; 004d2079 | DAT_005bed68
    PUSH ECX                            ; 004d207f
    JMP 0x004d1b85                      ; 004d2080
        ;   XREF to: 004d1b85 (UNCONDITIONAL_JUMP)  ; LAB_004d1b85
    MOV EBX,0x10                        ; 004d2085
        ;   Label: LAB_004d2085
    JMP 0x004d2050                      ; 004d208a
        ;   XREF to: 004d2050 (UNCONDITIONAL_JUMP)  ; LAB_004d2050
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0 ; 004d208c
        ;   XREF to: 005281c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0()
        ;   Label: caseD_6
    CMP EAX,0x1                         ; 004d2091
    SETZ AL                             ; 004d2094
    AND EAX,0xff                        ; 004d2097
    LEA EBX,[EAX + 0x1]                 ; 004d209c
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0 ; 004d209f
        ;   XREF to: 005284f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0()
    TEST EAX,EAX                        ; 004d20a4
    JZ 0x004d20ad                       ; 004d20a6
        ;   XREF to: 004d20ad (CONDITIONAL_JUMP)  ; LAB_004d20ad
    MOV EBX,0x2                         ; 004d20a8
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0 ; 004d20ad
        ;   XREF to: 005281c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0()
        ;   Label: LAB_004d20ad
    CMP EBX,EAX                         ; 004d20b2
    JZ 0x004d1b8d                       ; 004d20b4
        ;   XREF to: 004d1b8d (CONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00528080 ; 004d20ba
        ;   XREF to: 00528080 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_resetSoundDevice_FUN_00528080()
    PUSH EBX                            ; 004d20bf
    CALL sound_sndmain.cpp_setAudioChannelCount_FUN_005281f0 ; 004d20c0
        ;   XREF to: 005281f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setAudioChannelCount_FUN_005281f0()
    ADD ESP,0x4                         ; 004d20c5
    MOV EDX,dword ptr [0x005bed68]      ; 004d20c8 | DAT_005bed68
    PUSH EDX                            ; 004d20ce
    JMP 0x004d1b85                      ; 004d20cf
        ;   XREF to: 004d1b85 (UNCONDITIONAL_JUMP)  ; LAB_004d1b85
    LEA EAX,[ESP + 0x28]                ; 004d20d4
        ;   Label: caseD_7
    PUSH EAX                            ; 004d20d8
    XOR EBX,EBX                         ; 004d20d9
    CALL FUN_00474c90                   ; 004d20db
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00474c90()
    ADD ESP,0x4                         ; 004d20e0
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230 ; 004d20e3
        ;   XREF to: 00528230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230()
        ;   Label: LAB_004d20e3
    CMP EBX,EAX                         ; 004d20e8
    JGE 0x004d2115                      ; 004d20ea
        ;   XREF to: 004d2115 (CONDITIONAL_JUMP)  ; LAB_004d2115
    LEA EAX,[ESP + 0x2b0]               ; 004d20ec
    PUSH EAX                            ; 004d20f3
    PUSH EBX                            ; 004d20f4
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0 ; 004d20f5
        ;   XREF to: 005282c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0()
    ADD ESP,0x8                         ; 004d20fa
    LEA EAX,[ESP + 0x2b0]               ; 004d20fd
    PUSH EAX                            ; 004d2104
    LEA EAX,[ESP + 0x2c]                ; 004d2105
    PUSH EAX                            ; 004d2109
    INC EBX                             ; 004d210a
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004d210b
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 004d2110
    JMP 0x004d20e3                      ; 004d2113
        ;   XREF to: 004d20e3 (UNCONDITIONAL_JUMP)  ; LAB_004d20e3
    CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_00528610 ; 004d2115
        ;   XREF to: 00528610 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getCurrentSoundDevice_FUN_00528610()
        ;   Label: LAB_004d2115
    PUSH EAX                            ; 004d211a
    PUSH 0x588c6c                       ; 004d211b | = "Select sound device"
    LEA EAX,[ESP + 0x30]                ; 004d2120
    PUSH EAX                            ; 004d2124
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 004d2125
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    MOV EBX,EAX                         ; 004d212a
    ADD ESP,0xc                         ; 004d212c
    TEST EAX,EAX                        ; 004d212f
    JL 0x004d216f                       ; 004d2131
        ;   XREF to: 004d216f (CONDITIONAL_JUMP)  ; LAB_004d216f
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005285b0 ; 004d2133
        ;   XREF to: 005285b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_closeSoundDevice_FUN_005285b0()
    PUSH EBX                            ; 004d2138
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_00528410 ; 004d2139
        ;   XREF to: 00528410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_selectSoundDevice_FUN_00528410()
    ADD ESP,0x4                         ; 004d213e
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_00528500 ; 004d2141
        ;   XREF to: 00528500 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_initializeSoundDevice_FUN_00528500()
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0 ; 004d2146
        ;   XREF to: 005284f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0()
    TEST EAX,EAX                        ; 004d214b
    JZ 0x004d2160                       ; 004d214d
        ;   XREF to: 004d2160 (CONDITIONAL_JUMP)  ; LAB_004d2160
    PUSH 0xac44                         ; 004d214f
    PUSH 0x2                            ; 004d2154
    PUSH 0x10                           ; 004d2156
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0 ; 004d2158
        ;   XREF to: 005280c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0()
    ADD ESP,0xc                         ; 004d215d
    MOV EDX,dword ptr [0x005bed68]      ; 004d2160 | DAT_005bed68
        ;   Label: LAB_004d2160
    PUSH EDX                            ; 004d2166
    CALL core_sound.cpp_CSound_configure_FUN_0052e850 ; 004d2167
        ;   XREF to: 0052e850 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_configure_FUN_0052e850()
    ADD ESP,0x4                         ; 004d216c
    PUSH 0x0                            ; 004d216f
        ;   Label: LAB_004d216f
    LEA EAX,[ESP + 0x2c]                ; 004d2171
    PUSH EAX                            ; 004d2175
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 004d2176
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_dtor_FUN_00474cf0()
    ADD ESP,0x8                         ; 004d217b
    JMP 0x004d1b8d                      ; 004d217e
        ;   XREF to: 004d1b8d (UNCONDITIONAL_JUMP)  ; default
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005285b0 ; 004d2183
        ;   XREF to: 005285b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_closeSoundDevice_FUN_005285b0()
        ;   Label: caseD_8
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0 ; 004d2188
        ;   XREF to: 005284e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0()
    TEST EAX,EAX                        ; 004d218d
    SETZ AL                             ; 004d218f
    AND EAX,0xff                        ; 004d2192
    PUSH EAX                            ; 004d2197
    CALL sound_sndmain.cpp_enableHwSoundMixing_FUN_005284a0 ; 004d2198
        ;   XREF to: 005284a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableHwSoundMixing_FUN_005284a0()
    ADD ESP,0x4                         ; 004d219d
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_00528500 ; 004d21a0
        ;   XREF to: 00528500 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_initializeSoundDevice_FUN_00528500()
    JMP 0x004d1b7f                      ; 004d21a5
        ;   XREF to: 004d1b7f (UNCONDITIONAL_JUMP)  ; LAB_004d1b7f

