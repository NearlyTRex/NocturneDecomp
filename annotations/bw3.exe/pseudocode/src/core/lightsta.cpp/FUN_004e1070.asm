; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_lightsta_cpp_FUN_004e1070(CCharacter *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_wp_nomana_wav_005c69d2
;   TerminatedCString s_Bip01_Head_005c69e0
;   TerminatedCString s_wp_lightningstaff_wav_005c69eb
;   undefined4 DAT_005c6a02
;   undefined4 DAT_005c6a06
;   undefined4 DAT_005c6a0a
;   undefined4 DAT_005c6a0e
;   undefined4 DAT_005c6a12
;   undefined4 DAT_005c6a16
;   undefined4 DAT_005c6a1a
;   undefined4 DAT_005c6a1e
;   undefined4 DAT_005c6a22
;   undefined4 DAT_005c6a26
;   undefined4 DAT_005c6a2a
;   undefined4 DAT_005c6a32
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_fire.cpp_FUN_004a2090
;   core_fire.cpp_FUN_004a3c50
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_0053ea20
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_0053e870
;   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_0053ecd0
;   core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1070
        ;   Label: core_lightsta.cpp_FUN_004e1070
    PUSH ESI                            ; 004e1071
    PUSH EDI                            ; 004e1072
    PUSH EBP                            ; 004e1073
    MOV EBP,ESP                         ; 004e1074
    SUB ESP,0x308                       ; 004e1076
    AND ESP,0xfffffff8                  ; 004e107c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e107f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1082
    PUSH EDX                            ; 004e1085
    MOV EAX,dword ptr [EAX + 0x154]     ; 004e1086
    LEA ESI,[ESP + 0xfc]                ; 004e108c
    LEA EDI,[ESP + 0xf0]                ; 004e1093
    CALL dword ptr [EAX + 0xe0]         ; 004e109a
    LEA ESI,[ESP + 0xfc]                ; 004e10a0
    ADD ESP,0x4                         ; 004e10a7
    LEA EAX,[ESP + 0xec]                ; 004e10aa
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e10b1
    PUSH EAX                            ; 004e10b4
    MOVSD ES:EDI,ESI                    ; 004e10b5
    MOVSD ES:EDI,ESI                    ; 004e10b6
    MOVSD ES:EDI,ESI                    ; 004e10b7
    PUSH ECX                            ; 004e10b8
    LEA ESI,[ESP + 0xa0]                ; 004e10b9
    CALL core_actor.cpp_FUN_00408b80    ; 004e10c0
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004e10c5
    LEA EDI,[ESP + 0x1d0]               ; 004e10c8
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e10cf
    LEA ESI,[ESP + 0x98]                ; 004e10d2
    PUSH EBX                            ; 004e10d9
    MOVSD ES:EDI,ESI                    ; 004e10da
    MOVSD ES:EDI,ESI                    ; 004e10db
    MOVSD ES:EDI,ESI                    ; 004e10dc
    CALL core_weapon.cpp_CWeapon_fire_FUN_0057b880 ; 004e10dd
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0057b880(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004e10e2
    TEST EAX,EAX                        ; 004e10e5
    JZ 0x004e1b15                       ; 004e10e7
        ;   XREF to: 004e1b15 (CONDITIONAL_JUMP)  ; LAB_004e1b15
    MOV ECX,dword ptr [0x01d5ba70]      ; 004e10ed | g_CHeroClassInfo.name_hash
    MOV EDX,0x41f00000                  ; 004e10f3
    PUSH ECX                            ; 004e10f8
    MOV EBX,dword ptr [EBX + 0x304]     ; 004e10f9
    XOR EAX,EAX                         ; 004e10ff
    PUSH EBX                            ; 004e1101
    MOV dword ptr [ESP + 0x2ec],EAX     ; 004e1102
    MOV dword ptr [ESP + 0x2f0],EDX     ; 004e1109
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004e1110
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e1115
    MOV dword ptr [ESP + 0x2e0],EAX     ; 004e1118
    TEST EAX,EAX                        ; 004e111f
    JZ 0x004e1b0e                       ; 004e1121
        ;   XREF to: 004e1b0e (CONDITIONAL_JUMP)  ; LAB_004e1b0e
    XOR ESI,ESI                         ; 004e1127
    MOV dword ptr [ESP + 0x300],ESI     ; 004e1129
    MOV dword ptr [ESP + 0x2fc],ESI     ; 004e1130
    MOV EAX,[0x00603b28]                ; 004e1137 | g_CDemonSetPtr
        ;   Label: LAB_004e1137
    MOV EBX,dword ptr [ESP + 0x300]     ; 004e113c
    CMP EBX,dword ptr [EAX + 0x152f30]  ; 004e1143 | g_CDemonSetInstance.threat_count
    JL 0x004e1b47                       ; 004e1149
        ;   XREF to: 004e1b47 (CONDITIONAL_JUMP)  ; LAB_004e1b47
    MOV ECX,dword ptr [ESP + 0x2e4]     ; 004e114f
    TEST ECX,ECX                        ; 004e1156
    JZ 0x004e1de6                       ; 004e1158
        ;   XREF to: 004e1de6 (CONDITIONAL_JUMP)  ; LAB_004e1de6
    PUSH ECX                            ; 004e115e
    MOV EAX,dword ptr [ECX + 0x154]     ; 004e115f
    LEA ESI,[ESP + 0x60]                ; 004e1165
    LEA EDI,[ESP + 0x48]                ; 004e1169
    CALL dword ptr [EAX + 0x1c]         ; 004e116d
    MOV ECX,0x6                         ; 004e1170
    LEA ESI,[ESP + 0x60]                ; 004e1175
    ADD ESP,0x4                         ; 004e1179
    MOVSD.REP ES:EDI,ESI                ; 004e117c
    LEA EAX,[ESP + 0x44]                ; 004e117e
    FLD float ptr [ESP + 0x44]          ; 004e1182
    FLD float ptr [ESP + 0x48]          ; 004e1186
    FLD float ptr [ESP + 0x4c]          ; 004e118a
    LEA EDI,[ESP + 0x14c]               ; 004e118e
    LEA ESI,[ESP + 0x284]               ; 004e1195
    FXCH ST2                            ; 004e119c
    FADD float ptr [EAX + 0xc]          ; 004e119e
    FXCH                                ; 004e11a1
    FADD float ptr [EAX + 0x10]         ; 004e11a3
    FXCH ST2                            ; 004e11a6
    FADD float ptr [EAX + 0x14]         ; 004e11a8
    FXCH                                ; 004e11ab
    FSTP float ptr [ESP + 0x284]        ; 004e11ad
    FXCH                                ; 004e11b4
    FSTP float ptr [ESP + 0x288]        ; 004e11b6
    FSTP float ptr [ESP + 0x28c]        ; 004e11bd
    MOVSD ES:EDI,ESI                    ; 004e11c4
    MOVSD ES:EDI,ESI                    ; 004e11c5
    MOVSD ES:EDI,ESI                    ; 004e11c6
    FLD float ptr [0x005c6a02]          ; 004e11c7 | DAT_005c6a02
    FLD float ptr [ESP + 0x14c]         ; 004e11cd
    FMUL ST1                            ; 004e11d4
    FLD float ptr [ESP + 0x150]         ; 004e11d6
    FMUL ST2                            ; 004e11dd
    FLD float ptr [ESP + 0x154]         ; 004e11df
    FMULP ST3                           ; 004e11e6
    LEA EBX,[ESP + 0x188]               ; 004e11e8
    LEA EAX,[ESP + 0x1c4]               ; 004e11ef
    LEA EDI,[ESP + 0x1c4]               ; 004e11f6
    LEA ESI,[ESP + 0x20c]               ; 004e11fd
    FXCH                                ; 004e1204
    FSTP float ptr [ESP + 0x20c]        ; 004e1206
    FSTP float ptr [ESP + 0x210]        ; 004e120d
    FSTP float ptr [ESP + 0x214]        ; 004e1214
    MOVSD ES:EDI,ESI                    ; 004e121b
    MOVSD ES:EDI,ESI                    ; 004e121c
    MOVSD ES:EDI,ESI                    ; 004e121d
    CMP EBX,EAX                         ; 004e121e
    JZ 0x004e124c                       ; 004e1220
        ;   XREF to: 004e124c (CONDITIONAL_JUMP)  ; LAB_004e124c
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 004e1222
    MOV dword ptr [ESP + 0x188],EAX     ; 004e1229
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 004e1230
    MOV dword ptr [ESP + 0x18c],EAX     ; 004e1237
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 004e123e
    MOV dword ptr [ESP + 0x190],EAX     ; 004e1245
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 004e124c
        ;   Label: LAB_004e124c
    LEA EDI,[ESP + 0x290]               ; 004e1253
    LEA ESI,[ESP + 0xbc]                ; 004e125a
    LEA EBX,[ESP + 0x2cc]               ; 004e1261
    FLD float ptr [EAX + 0x24]          ; 004e1268
    FLD float ptr [EAX + 0x28]          ; 004e126b
    FLD float ptr [EAX + 0x20]          ; 004e126e
    LEA EAX,[ESP + 0x290]               ; 004e1271
    FADD float ptr [ESP + 0x188]        ; 004e1278
    FXCH ST2                            ; 004e127f
    FADD float ptr [ESP + 0x18c]        ; 004e1281
    FXCH                                ; 004e1288
    FADD float ptr [ESP + 0x190]        ; 004e128a
    FXCH ST2                            ; 004e1291
    FSTP float ptr [ESP + 0xbc]         ; 004e1293
    FSTP float ptr [ESP + 0xc0]         ; 004e129a
    FSTP float ptr [ESP + 0xc4]         ; 004e12a1
    MOVSD ES:EDI,ESI                    ; 004e12a8
    MOVSD ES:EDI,ESI                    ; 004e12a9
    MOVSD ES:EDI,ESI                    ; 004e12aa
    CMP EBX,EAX                         ; 004e12ab
    JZ 0x004e12d9                       ; 004e12ad
        ;   XREF to: 004e12d9 (CONDITIONAL_JUMP)  ; LAB_004e12d9
    MOV EAX,dword ptr [ESP + 0x290]     ; 004e12af
    MOV dword ptr [ESP + 0x2cc],EAX     ; 004e12b6
    MOV EAX,dword ptr [ESP + 0x294]     ; 004e12bd
    MOV dword ptr [ESP + 0x2d0],EAX     ; 004e12c4
    MOV EAX,dword ptr [ESP + 0x298]     ; 004e12cb
    MOV dword ptr [ESP + 0x2d4],EAX     ; 004e12d2
    FLD float ptr [ESP + 0x18c]         ; 004e12d9
        ;   Label: LAB_004e12d9
    FMUL float ptr [0x005c6a02]         ; 004e12e0 | DAT_005c6a02
    MOV EBX,dword ptr [ESP + 0x2e4]     ; 004e12e6
    FADD float ptr [ESP + 0x2d0]        ; 004e12ed
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 004e12f4
    FSTP float ptr [ESP + 0x2d0]        ; 004e12fb
    MOV DL,byte ptr [EAX + 0x24a8]      ; 004e1302
    ADD EBX,0x158                       ; 004e1308
    TEST DL,DL                          ; 004e130e
    JNZ 0x004e1ca4                      ; 004e1310
        ;   XREF to: 004e1ca4 (CONDITIONAL_JUMP)  ; LAB_004e1ca4
    PUSH 0xffff                         ; 004e1316
        ;   Label: LAB_004e1316
    PUSH 0x3e800000                     ; 004e131b
    PUSH 0x3                            ; 004e1320
    PUSH 0x3f400000                     ; 004e1322
    PUSH 0x3f400000                     ; 004e1327
    PUSH 0x0                            ; 004e132c
    LEA EAX,[ESP + 0x2e4]               ; 004e132e
    PUSH EAX                            ; 004e1335
    LEA EAX,[ESP + 0x1ec]               ; 004e1336
    PUSH EAX                            ; 004e133d
    MOV EBX,dword ptr [0x005fc5a0]      ; 004e133e | DAT_005fc5a0
    PUSH EBX                            ; 004e1344
    CALL core_fire.cpp_FUN_004a3c50     ; 004e1345
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3c50()
    ADD ESP,0x24                        ; 004e134a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e134d
    MOV dword ptr [EAX + 0x594],0x1     ; 004e1350
    MOV dword ptr [EAX + 0x598],0x0     ; 004e135a
    MOV dword ptr [EAX + 0x59c],0x3dcccccd ; 004e1364
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 004e136e
    MOV dword ptr [EAX + 0x3254],0x3f800000 ; 004e1375
    MOV dword ptr [EAX + 0x3258],0x1    ; 004e137f
    MOV EAX,dword ptr [ESP + 0x300]     ; 004e1389
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e1390
    SHL EAX,0x2                         ; 004e1393
    XOR ESI,ESI                         ; 004e1396
    ADD EAX,EDI                         ; 004e1398
    INC ESI                             ; 004e139a
        ;   Label: LAB_004e139a
    MOV dword ptr [EAX + 0x5ac],0x0     ; 004e139b
    CMP ESI,0x4                         ; 004e13a5
    JL 0x004e139a                       ; 004e13a8
        ;   XREF to: 004e139a (CONDITIONAL_JUMP)  ; LAB_004e139a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e13aa
    MOV EAX,dword ptr [EAX + 0x598]     ; 004e13ad
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e13b3
    SHL EAX,0x2                         ; 004e13b6
    ADD EAX,ESI                         ; 004e13b9
    MOV EBX,dword ptr [ESP + 0x2e4]     ; 004e13bb
    MOV dword ptr [EAX + 0x5ac],EBX     ; 004e13c2
    LEA EAX,[ESP + 0x2cc]               ; 004e13c8
    LEA EBX,[ESI + 0x5a0]               ; 004e13cf
    CMP EBX,EAX                         ; 004e13d5
    JZ 0x004e13f6                       ; 004e13d7
        ;   XREF to: 004e13f6 (CONDITIONAL_JUMP)  ; LAB_004e13f6
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 004e13d9
    MOV dword ptr [EBX],EAX             ; 004e13e0
    MOV EAX,dword ptr [ESP + 0x2d0]     ; 004e13e2
    MOV dword ptr [EBX + 0x4],EAX       ; 004e13e9
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 004e13ec
    MOV dword ptr [EBX + 0x8],EAX       ; 004e13f3
    LEA EAX,[ESP + 0x8]                 ; 004e13f6
        ;   Label: LAB_004e13f6
    PUSH EAX                            ; 004e13fa
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004e13fb
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004e1400
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e1403
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1406
    PUSH EDI                            ; 004e1409
    MOV EAX,dword ptr [EAX + 0x154]     ; 004e140a
    CALL dword ptr [EAX + 0xec]         ; 004e1410
    MOV dword ptr [ESP + 0x308],EAX     ; 004e1416
    FLD float ptr [ESP + 0x308]         ; 004e141d
    ADD ESP,0x4                         ; 004e1424
    FSTP float ptr [ESP + 0xc]          ; 004e1427
    MOV EAX,dword ptr [EDI + 0x56c]     ; 004e142b
    MOV dword ptr [ESP + 0x30],EAX      ; 004e1431
    MOV dword ptr [ESP + 0x3c],EDI      ; 004e1435
    PUSH EDI                            ; 004e1439
    MOV EAX,dword ptr [EDI + 0x154]     ; 004e143a
    CALL dword ptr [EAX + 0x94]         ; 004e1440
    ADD ESP,0x4                         ; 004e1446
    MOV dword ptr [ESP + 0x40],EAX      ; 004e1449
    LEA EAX,[ESP + 0x8]                 ; 004e144d
    MOV EBX,dword ptr [ESP + 0x2e4]     ; 004e1451
    PUSH EAX                            ; 004e1458
    MOV ECX,dword ptr [ESP + 0x2e8]     ; 004e1459
    MOV EBX,dword ptr [EBX + 0x154]     ; 004e1460
    PUSH ECX                            ; 004e1466
    CALL dword ptr [EBX + 0x108]        ; 004e1467
    LEA EAX,[ESP + 0x2d4]               ; 004e146d
    LEA EBX,[ESP + 0x88]                ; 004e1474
    ADD ESP,0x8                         ; 004e147b
    CMP EBX,EAX                         ; 004e147e
    JNZ 0x004e1db7                      ; 004e1480
        ;   XREF to: 004e1db7 (CONDITIONAL_JUMP)  ; LAB_004e1db7
    XOR EBX,EBX                         ; 004e1486
        ;   Label: LAB_004e1486
    PUSH 0x40a00000                     ; 004e1488
        ;   Label: LAB_004e1488
    PUSH 0xc0a00000                     ; 004e148d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e1492
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2e0],EAX     ; 004e1497
    ADD ESP,0x8                         ; 004e149e
    PUSH 0x41200000                     ; 004e14a1
    PUSH 0x0                            ; 004e14a6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e14a8
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2e4],EAX     ; 004e14ad
    ADD ESP,0x8                         ; 004e14b4
    PUSH 0x40a00000                     ; 004e14b7
    PUSH 0xc0a00000                     ; 004e14bc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e14c1
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x30c],EAX     ; 004e14c6
    FLD float ptr [ESP + 0x30c]         ; 004e14cd
    ADD ESP,0x8                         ; 004e14d4
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 004e14d7
    MOV dword ptr [ESP + 0x2ec],EAX     ; 004e14de
    MOV EAX,dword ptr [ESP + 0x2d8]     ; 004e14e5
    FSTP float ptr [ESP + 0x2f8]        ; 004e14ec
    MOV dword ptr [ESP + 0x2f0],EAX     ; 004e14f3
    MOV EAX,dword ptr [ESP + 0x2f8]     ; 004e14fa
    MOV dword ptr [ESP + 0x2a8],EAX     ; 004e1501
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 004e1508
    MOV dword ptr [ESP + 0x2ac],EAX     ; 004e150f
    MOV EAX,dword ptr [ESP + 0x2f0]     ; 004e1516
    LEA ESI,[ESP + 0x2a8]               ; 004e151d
    MOV dword ptr [ESP + 0x2b0],EAX     ; 004e1524
    LEA EAX,[ESP + 0x8c]                ; 004e152b
    CMP EAX,ESI                         ; 004e1532
    JZ 0x004e1560                       ; 004e1534
        ;   XREF to: 004e1560 (CONDITIONAL_JUMP)  ; LAB_004e1560
    MOV EAX,dword ptr [ESP + 0x2f8]     ; 004e1536
    MOV dword ptr [ESP + 0x8c],EAX      ; 004e153d
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 004e1544
    MOV dword ptr [ESP + 0x90],EAX      ; 004e154b
    MOV EAX,dword ptr [ESP + 0x2f0]     ; 004e1552
    MOV dword ptr [ESP + 0x94],EAX      ; 004e1559
    PUSH 0xffff                         ; 004e1560
        ;   Label: LAB_004e1560
    PUSH 0x1                            ; 004e1565
    PUSH 0x10000                        ; 004e1567
    PUSH 0x20000                        ; 004e156c
    LEA EAX,[ESP + 0x9c]                ; 004e1571
    PUSH EAX                            ; 004e1578
    LEA EAX,[ESP + 0x94]                ; 004e1579
    PUSH EAX                            ; 004e1580
    MOV ESI,dword ptr [0x005fc5a0]      ; 004e1581 | DAT_005fc5a0
    PUSH ESI                            ; 004e1587
    INC EBX                             ; 004e1588
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 004e1589
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004e158e
    CMP EBX,0x10                        ; 004e1591
    JL 0x004e1488                       ; 004e1594
        ;   XREF to: 004e1488 (CONDITIONAL_JUMP)  ; LAB_004e1488
    FLD float ptr [ESP + 0x1d4]         ; 004e159a
        ;   Label: LAB_004e159a
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 004e15a1
    PUSH 0xffff                         ; 004e15a8
    LEA EDI,[ESP + 0x144]               ; 004e15ad
    LEA ESI,[ESP + 0x2b8]               ; 004e15b4
    PUSH 0x3e800000                     ; 004e15bb
    MOV dword ptr [ESP + 0x2bc],EAX     ; 004e15c0
    PUSH 0x3                            ; 004e15c7
    FADD float ptr [0x005c6a06]         ; 004e15c9 | DAT_005c6a06
    PUSH 0x3f400000                     ; 004e15cf
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 004e15d4
    PUSH 0x3f400000                     ; 004e15db
    MOV dword ptr [ESP + 0x2d0],EAX     ; 004e15e0
    PUSH 0x0                            ; 004e15e7
    LEA EAX,[ESP + 0x158]               ; 004e15e9
    FSTP float ptr [ESP + 0x2d0]        ; 004e15f0
    PUSH EAX                            ; 004e15f7
    LEA EAX,[ESP + 0x1ec]               ; 004e15f8
    MOVSD ES:EDI,ESI                    ; 004e15ff
    MOVSD ES:EDI,ESI                    ; 004e1600
    MOVSD ES:EDI,ESI                    ; 004e1601
    PUSH EAX                            ; 004e1602
    MOV EDI,dword ptr [0x005fc5a0]      ; 004e1603 | DAT_005fc5a0
    PUSH EDI                            ; 004e1609
    LEA EBX,[ESP + 0x1dc]               ; 004e160a
    LEA ESI,[ESP + 0x278]               ; 004e1611
    CALL core_fire.cpp_FUN_004a3c50     ; 004e1618
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3c50()
    LEA EDI,[ESP + 0x1b8]               ; 004e161d
    ADD ESP,0x24                        ; 004e1624
    LEA EAX,[ESP + 0x194]               ; 004e1627
    FLD float ptr [ESP + 0xec]          ; 004e162e
    FLD float ptr [ESP + 0xf0]          ; 004e1635
    FLD float ptr [ESP + 0xf4]          ; 004e163c
    PUSH EAX                            ; 004e1643
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1644
    FXCH ST2                            ; 004e1647
    FADD float ptr [0x005c6a0a]         ; 004e1649 | DAT_005c6a0a
    FXCH                                ; 004e164f
    FADD float ptr [0x005c6a0e]         ; 004e1651 | DAT_005c6a0e
    FXCH ST2                            ; 004e1657
    FADD float ptr [0x005c6a12]         ; 004e1659 | DAT_005c6a12
    FXCH                                ; 004e165f
    FSTP float ptr [ESP + 0x258]        ; 004e1661
    FXCH                                ; 004e1668
    FSTP float ptr [ESP + 0x25c]        ; 004e166a
    FSTP float ptr [ESP + 0x260]        ; 004e1671
    MOVSD ES:EDI,ESI                    ; 004e1678
    MOVSD ES:EDI,ESI                    ; 004e1679
    MOVSD ES:EDI,ESI                    ; 004e167a
    PUSH EAX                            ; 004e167b
    LEA ESI,[ESP + 0x2a4]               ; 004e167c
    LEA EDI,[ESP + 0x1c0]               ; 004e1683
    CALL core_actor.cpp_FUN_00408b80    ; 004e168a
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x2a4]               ; 004e168f
    ADD ESP,0x8                         ; 004e1696
    LEA EAX,[ESP + 0xe0]                ; 004e1699
    MOVSD ES:EDI,ESI                    ; 004e16a0
    MOVSD ES:EDI,ESI                    ; 004e16a1
    MOVSD ES:EDI,ESI                    ; 004e16a2
    CMP EAX,EBX                         ; 004e16a3
    JZ 0x004e16d1                       ; 004e16a5
        ;   XREF to: 004e16d1 (CONDITIONAL_JUMP)  ; LAB_004e16d1
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 004e16a7
    MOV dword ptr [ESP + 0xe0],EAX      ; 004e16ae
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 004e16b5
    MOV dword ptr [ESP + 0xe4],EAX      ; 004e16bc
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 004e16c3
    MOV dword ptr [ESP + 0xe8],EAX      ; 004e16ca
    PUSH 0xffff                         ; 004e16d1
        ;   Label: LAB_004e16d1
    PUSH 0x3e800000                     ; 004e16d6
    PUSH 0x3                            ; 004e16db
    PUSH 0x3e800000                     ; 004e16dd
    PUSH 0x3e800000                     ; 004e16e2
    PUSH 0x0                            ; 004e16e7
    LEA EAX,[ESP + 0xf8]                ; 004e16e9
    PUSH EAX                            ; 004e16f0
    LEA EAX,[ESP + 0x1ec]               ; 004e16f1
    PUSH EAX                            ; 004e16f8
    MOV EDX,dword ptr [0x005fc5a0]      ; 004e16f9 | DAT_005fc5a0
    PUSH EDX                            ; 004e16ff
    LEA EBX,[ESP + 0x104]               ; 004e1700
    CALL core_fire.cpp_FUN_004a3c50     ; 004e1707
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3c50()
    LEA EAX,[ESP + 0x1c4]               ; 004e170c
    ADD ESP,0x24                        ; 004e1713
    CMP EAX,EBX                         ; 004e1716
    JZ 0x004e1744                       ; 004e1718
        ;   XREF to: 004e1744 (CONDITIONAL_JUMP)  ; LAB_004e1744
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004e171a
    MOV dword ptr [ESP + 0x1a0],EAX     ; 004e1721
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004e1728
    MOV dword ptr [ESP + 0x1a4],EAX     ; 004e172f
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004e1736
    MOV dword ptr [ESP + 0x1a8],EAX     ; 004e173d
    FLD float ptr [ESP + 0xec]          ; 004e1744
        ;   Label: LAB_004e1744
    FLD float ptr [ESP + 0xf0]          ; 004e174b
    FLD float ptr [ESP + 0xf4]          ; 004e1752
    LEA EDI,[ESP + 0xb0]                ; 004e1759
    LEA ESI,[ESP + 0x1dc]               ; 004e1760
    LEA EAX,[ESP + 0xb0]                ; 004e1767
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e176e
    LEA EBX,[ESP + 0x170]               ; 004e1771
    PUSH EAX                            ; 004e1778
    FXCH ST2                            ; 004e1779
    FADD float ptr [0x005c6a16]         ; 004e177b | DAT_005c6a16
    FXCH                                ; 004e1781
    FADD float ptr [0x005c6a02]         ; 004e1783 | DAT_005c6a02
    FXCH ST2                            ; 004e1789
    FADD float ptr [0x005c6a12]         ; 004e178b | DAT_005c6a12
    FXCH                                ; 004e1791
    FSTP float ptr [ESP + 0x1e0]        ; 004e1793
    FXCH                                ; 004e179a
    FSTP float ptr [ESP + 0x1e4]        ; 004e179c
    FSTP float ptr [ESP + 0x1e8]        ; 004e17a3
    MOVSD ES:EDI,ESI                    ; 004e17aa
    MOVSD ES:EDI,ESI                    ; 004e17ab
    MOVSD ES:EDI,ESI                    ; 004e17ac
    PUSH ECX                            ; 004e17ad
    LEA ESI,[ESP + 0x238]               ; 004e17ae
    LEA EDI,[ESP + 0x178]               ; 004e17b5
    CALL core_actor.cpp_FUN_00408b80    ; 004e17bc
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x238]               ; 004e17c1
    ADD ESP,0x8                         ; 004e17c8
    LEA EAX,[ESP + 0xe0]                ; 004e17cb
    MOVSD ES:EDI,ESI                    ; 004e17d2
    MOVSD ES:EDI,ESI                    ; 004e17d3
    MOVSD ES:EDI,ESI                    ; 004e17d4
    CMP EAX,EBX                         ; 004e17d5
    JZ 0x004e1803                       ; 004e17d7
        ;   XREF to: 004e1803 (CONDITIONAL_JUMP)  ; LAB_004e1803
    MOV EAX,dword ptr [ESP + 0x170]     ; 004e17d9
    MOV dword ptr [ESP + 0xe0],EAX      ; 004e17e0
    MOV EAX,dword ptr [ESP + 0x174]     ; 004e17e7
    MOV dword ptr [ESP + 0xe4],EAX      ; 004e17ee
    MOV EAX,dword ptr [ESP + 0x178]     ; 004e17f5
    MOV dword ptr [ESP + 0xe8],EAX      ; 004e17fc
    PUSH 0xffff                         ; 004e1803
        ;   Label: LAB_004e1803
    PUSH 0x3e800000                     ; 004e1808
    PUSH 0x3                            ; 004e180d
    PUSH 0x3e800000                     ; 004e180f
    PUSH 0x3e800000                     ; 004e1814
    PUSH 0x0                            ; 004e1819
    LEA EAX,[ESP + 0xf8]                ; 004e181b
    PUSH EAX                            ; 004e1822
    LEA EAX,[ESP + 0x1bc]               ; 004e1823
    PUSH EAX                            ; 004e182a
    MOV EBX,dword ptr [0x005fc5a0]      ; 004e182b | DAT_005fc5a0
    PUSH EBX                            ; 004e1831
    CALL core_fire.cpp_FUN_004a3c50     ; 004e1832
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3c50()
    LEA EAX,[ESP + 0x104]               ; 004e1837
    LEA EBX,[ESP + 0x1c4]               ; 004e183e
    ADD ESP,0x24                        ; 004e1845
    CMP EBX,EAX                         ; 004e1848
    JZ 0x004e1876                       ; 004e184a
        ;   XREF to: 004e1876 (CONDITIONAL_JUMP)  ; LAB_004e1876
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004e184c
    MOV dword ptr [ESP + 0x1a0],EAX     ; 004e1853
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004e185a
    MOV dword ptr [ESP + 0x1a4],EAX     ; 004e1861
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004e1868
    MOV dword ptr [ESP + 0x1a8],EAX     ; 004e186f
    FLD float ptr [ESP + 0xec]          ; 004e1876
        ;   Label: LAB_004e1876
    FLD float ptr [ESP + 0xf0]          ; 004e187d
    FLD float ptr [ESP + 0xf4]          ; 004e1884
    LEA EDI,[ESP + 0x224]               ; 004e188b
    LEA ESI,[ESP + 0x218]               ; 004e1892
    LEA EAX,[ESP + 0x224]               ; 004e1899
    FXCH ST2                            ; 004e18a0
    FADD float ptr [0x005c6a1a]         ; 004e18a2 | DAT_005c6a1a
    FXCH                                ; 004e18a8
    FADD float ptr [0x005c6a1e]         ; 004e18aa | DAT_005c6a1e
    FXCH ST2                            ; 004e18b0
    FADD float ptr [0x005c6a12]         ; 004e18b2 | DAT_005c6a12
    FXCH                                ; 004e18b8
    FSTP float ptr [ESP + 0x218]        ; 004e18ba
    FXCH                                ; 004e18c1
    FSTP float ptr [ESP + 0x21c]        ; 004e18c3
    FSTP float ptr [ESP + 0x220]        ; 004e18ca
    MOVSD ES:EDI,ESI                    ; 004e18d1
    MOVSD ES:EDI,ESI                    ; 004e18d2
    MOVSD ES:EDI,ESI                    ; 004e18d3
    PUSH EAX                            ; 004e18d4
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e18d5
    LEA EBX,[ESP + 0xe4]                ; 004e18d8
    PUSH ESI                            ; 004e18df
    LEA ESI,[ESP + 0x2c8]               ; 004e18e0
    LEA EDI,[ESP + 0x244]               ; 004e18e7
    CALL core_actor.cpp_FUN_00408b80    ; 004e18ee
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x2c8]               ; 004e18f3
    ADD ESP,0x8                         ; 004e18fa
    LEA EAX,[ESP + 0x23c]               ; 004e18fd
    MOVSD ES:EDI,ESI                    ; 004e1904
    MOVSD ES:EDI,ESI                    ; 004e1905
    MOVSD ES:EDI,ESI                    ; 004e1906
    CMP EBX,EAX                         ; 004e1907
    JZ 0x004e1935                       ; 004e1909
        ;   XREF to: 004e1935 (CONDITIONAL_JUMP)  ; LAB_004e1935
    MOV EAX,dword ptr [ESP + 0x23c]     ; 004e190b
    MOV dword ptr [ESP + 0xe0],EAX      ; 004e1912
    MOV EAX,dword ptr [ESP + 0x240]     ; 004e1919
    MOV dword ptr [ESP + 0xe4],EAX      ; 004e1920
    MOV EAX,dword ptr [ESP + 0x244]     ; 004e1927
    MOV dword ptr [ESP + 0xe8],EAX      ; 004e192e
    PUSH 0xffff                         ; 004e1935
        ;   Label: LAB_004e1935
    PUSH 0x3e800000                     ; 004e193a
    PUSH 0x3                            ; 004e193f
    PUSH 0x3e800000                     ; 004e1941
    PUSH 0x3e800000                     ; 004e1946
    PUSH 0x0                            ; 004e194b
    LEA EAX,[ESP + 0xf8]                ; 004e194d
    PUSH EAX                            ; 004e1954
    LEA EAX,[ESP + 0x1bc]               ; 004e1955
    PUSH EAX                            ; 004e195c
    MOV EDI,dword ptr [0x005fc5a0]      ; 004e195d | DAT_005fc5a0
    PUSH EDI                            ; 004e1963
    LEA EBX,[ESP + 0x1c4]               ; 004e1964
    CALL core_fire.cpp_FUN_004a3c50     ; 004e196b
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3c50()
    LEA EAX,[ESP + 0x104]               ; 004e1970
    ADD ESP,0x24                        ; 004e1977
    CMP EBX,EAX                         ; 004e197a
    JZ 0x004e19a8                       ; 004e197c
        ;   XREF to: 004e19a8 (CONDITIONAL_JUMP)  ; LAB_004e19a8
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004e197e
    MOV dword ptr [ESP + 0x1a0],EAX     ; 004e1985
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004e198c
    MOV dword ptr [ESP + 0x1a4],EAX     ; 004e1993
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004e199a
    MOV dword ptr [ESP + 0x1a8],EAX     ; 004e19a1
    FLD float ptr [ESP + 0xec]          ; 004e19a8
        ;   Label: LAB_004e19a8
    FLD float ptr [ESP + 0xf0]          ; 004e19af
    FLD float ptr [ESP + 0xf4]          ; 004e19b6
    LEA EDI,[ESP + 0x260]               ; 004e19bd
    LEA ESI,[ESP + 0x1ac]               ; 004e19c4
    LEA EAX,[ESP + 0x260]               ; 004e19cb
    LEA EBX,[ESP + 0xe0]                ; 004e19d2
    PUSH EAX                            ; 004e19d9
    FXCH ST2                            ; 004e19da
    FADD float ptr [0x005c6a22]         ; 004e19dc | DAT_005c6a22
    FXCH                                ; 004e19e2
    FADD float ptr [0x005c6a26]         ; 004e19e4 | DAT_005c6a26
    FXCH ST2                            ; 004e19ea
    FADD float ptr [0x005c6a2a]         ; 004e19ec | DAT_005c6a2a
    FXCH                                ; 004e19f2
    FSTP float ptr [ESP + 0x1b0]        ; 004e19f4
    FXCH                                ; 004e19fb
    FSTP float ptr [ESP + 0x1b4]        ; 004e19fd
    FSTP float ptr [ESP + 0x1b8]        ; 004e1a04
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1a0b
    MOVSD ES:EDI,ESI                    ; 004e1a0e
    MOVSD ES:EDI,ESI                    ; 004e1a0f
    MOVSD ES:EDI,ESI                    ; 004e1a10
    PUSH EAX                            ; 004e1a11
    LEA ESI,[ESP + 0x130]               ; 004e1a12
    LEA EDI,[ESP + 0x7c]                ; 004e1a19
    CALL core_actor.cpp_FUN_00408b80    ; 004e1a1d
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x130]               ; 004e1a22
    ADD ESP,0x8                         ; 004e1a29
    LEA EAX,[ESP + 0x74]                ; 004e1a2c
    MOVSD ES:EDI,ESI                    ; 004e1a30
    MOVSD ES:EDI,ESI                    ; 004e1a31
    MOVSD ES:EDI,ESI                    ; 004e1a32
    CMP EBX,EAX                         ; 004e1a33
    JZ 0x004e1a58                       ; 004e1a35
        ;   XREF to: 004e1a58 (CONDITIONAL_JUMP)  ; LAB_004e1a58
    MOV EAX,dword ptr [ESP + 0x74]      ; 004e1a37
    MOV dword ptr [ESP + 0xe0],EAX      ; 004e1a3b
    MOV EAX,dword ptr [ESP + 0x78]      ; 004e1a42
    MOV dword ptr [ESP + 0xe4],EAX      ; 004e1a46
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004e1a4d
    MOV dword ptr [ESP + 0xe8],EAX      ; 004e1a51
    PUSH 0xffff                         ; 004e1a58
        ;   Label: LAB_004e1a58
    PUSH 0x3e800000                     ; 004e1a5d
    PUSH 0x3                            ; 004e1a62
    PUSH 0x3e800000                     ; 004e1a64
    PUSH 0x3e800000                     ; 004e1a69
    PUSH 0x0                            ; 004e1a6e
    LEA EAX,[ESP + 0xf8]                ; 004e1a70
    PUSH EAX                            ; 004e1a77
    LEA EAX,[ESP + 0x1bc]               ; 004e1a78
    PUSH EAX                            ; 004e1a7f
    MOV EDX,dword ptr [0x005fc5a0]      ; 004e1a80 | DAT_005fc5a0
    PUSH EDX                            ; 004e1a86
    CALL core_fire.cpp_FUN_004a3c50     ; 004e1a87
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3c50()
    ADD ESP,0x24                        ; 004e1a8c
    PUSH 0xffff                         ; 004e1a8f
    PUSH 0x3e800000                     ; 004e1a94
    PUSH 0x3                            ; 004e1a99
    PUSH 0x3e800000                     ; 004e1a9b
    PUSH 0x3e800000                     ; 004e1aa0
    PUSH 0x0                            ; 004e1aa5
    LEA EAX,[ESP + 0x1e8]               ; 004e1aa7
    PUSH EAX                            ; 004e1aae
    LEA EAX,[ESP + 0x1bc]               ; 004e1aaf
    PUSH EAX                            ; 004e1ab6
    MOV ECX,dword ptr [0x005fc5a0]      ; 004e1ab7 | DAT_005fc5a0
    PUSH ECX                            ; 004e1abd
    CALL core_fire.cpp_FUN_004a3c50     ; 004e1abe
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3c50()
    ADD ESP,0x24                        ; 004e1ac3
    LEA EAX,[ESP + 0x1d0]               ; 004e1ac6
    PUSH EAX                            ; 004e1acd
    PUSH 0x5c69eb                       ; 004e1ace | = "wp_lightningstaff.wav"
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e1ad3
    PUSH EBX                            ; 004e1ad6
    MOV ESI,dword ptr [0x006045f8]      ; 004e1ad7 | DAT_006045f8
    PUSH ESI                            ; 004e1add
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004e1ade
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004e1ae3
    MOV EDI,dword ptr [EBX + 0x5c4]     ; 004e1ae6
    PUSH EDI                            ; 004e1aec
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004e1aed
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    MOV EAX,0x1                         ; 004e1af2
    MOV dword ptr [EBX + 0x5c4],0x0     ; 004e1af7
    ADD ESP,0x4                         ; 004e1b01
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 004e1b04
    MOV ESP,EBP                         ; 004e1b0e
        ;   Label: LAB_004e1b0e
    POP EBP                             ; 004e1b10
    POP EDI                             ; 004e1b11
    POP ESI                             ; 004e1b12
    POP EBX                             ; 004e1b13
    RET                                 ; 004e1b14
    LEA EAX,[ESP + 0x1d0]               ; 004e1b15
        ;   Label: LAB_004e1b15
    PUSH EAX                            ; 004e1b1c
    PUSH 0x5c69d2                       ; 004e1b1d | = "wp_nomana.wav"
    PUSH EBX                            ; 004e1b22
    MOV EDI,dword ptr [0x006045f8]      ; 004e1b23 | DAT_006045f8
    PUSH EDI                            ; 004e1b29
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004e1b2a
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004e1b2f
    MOV EAX,EBX                         ; 004e1b32
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 004e1b34
    XOR EAX,EBX                         ; 004e1b3e
    MOV ESP,EBP                         ; 004e1b40
    POP EBP                             ; 004e1b42
    POP EDI                             ; 004e1b43
    POP ESI                             ; 004e1b44
    POP EBX                             ; 004e1b45
    RET                                 ; 004e1b46
    MOV EDX,dword ptr [ESP + 0x2fc]     ; 004e1b47
        ;   Label: LAB_004e1b47
    MOV ECX,dword ptr [0x007e2cec]      ; 004e1b4e | g_CCharacterClassInfo.name_hash
    ADD EAX,EDX                         ; 004e1b54
    PUSH ECX                            ; 004e1b56
    MOV ESI,dword ptr [EAX + 0x152f34]  ; 004e1b57
    PUSH ESI                            ; 004e1b5d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004e1b5e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004e1b63
    ADD ESP,0x8                         ; 004e1b65
    TEST EAX,EAX                        ; 004e1b68
    JZ 0x004e1c7f                       ; 004e1b6a
        ;   XREF to: 004e1c7f (CONDITIONAL_JUMP)  ; LAB_004e1c7f
    MOV EDI,dword ptr [0x02cfd8fc]      ; 004e1b70 | g_CTVBatClassInfo.name_hash
    PUSH EDI                            ; 004e1b76
    PUSH EAX                            ; 004e1b77
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004e1b78
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e1b7d
    TEST EAX,EAX                        ; 004e1b80
    JNZ 0x004e1c7f                      ; 004e1b82
        ;   XREF to: 004e1c7f (CONDITIONAL_JUMP)  ; LAB_004e1c7f
    LEA EDI,[ESP + 0xa4]                ; 004e1b88
    LEA EAX,[ESP + 0xa4]                ; 004e1b8f
    LEA ESI,[ESI + 0x20]                ; 004e1b96
    PUSH EAX                            ; 004e1b99
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 004e1b9a
    MOVSD ES:EDI,ESI                    ; 004e1ba1
    MOVSD ES:EDI,ESI                    ; 004e1ba2
    MOVSD ES:EDI,ESI                    ; 004e1ba3
    PUSH EAX                            ; 004e1ba4
    LEA ESI,[ESP + 0x1fc]               ; 004e1ba5
    LEA EDI,[ESP + 0x280]               ; 004e1bac
    CALL core_actor.cpp_FUN_00408bf0    ; 004e1bb3
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x1fc]               ; 004e1bb8
    ADD ESP,0x8                         ; 004e1bbf
    MOVSD ES:EDI,ESI                    ; 004e1bc2
    MOVSD ES:EDI,ESI                    ; 004e1bc3
    MOVSD ES:EDI,ESI                    ; 004e1bc4
    FLDZ                                ; 004e1bc5
    FLD float ptr [ESP + 0x280]         ; 004e1bc7
    FSTP double ptr [ESP]               ; 004e1bce
    FCOMP double ptr [ESP]              ; 004e1bd1
    FNSTSW AX                           ; 004e1bd4
    SAHF                                ; 004e1bd6
    JNC 0x004e1c7f                      ; 004e1bd7
        ;   XREF to: 004e1c7f (CONDITIONAL_JUMP)  ; LAB_004e1c7f
    FLD double ptr [ESP]                ; 004e1bdd
    FCOMP double ptr [0x005c6a32]       ; 004e1be0 | DAT_005c6a32
    FNSTSW AX                           ; 004e1be6
    SAHF                                ; 004e1be8
    JA 0x004e1c7f                       ; 004e1be9
        ;   XREF to: 004e1c7f (CONDITIONAL_JUMP)  ; LAB_004e1c7f
    LEA EAX,[ESP + 0x278]               ; 004e1bef
    PUSH EAX                            ; 004e1bf6
    LEA ESI,[ESP + 0x138]               ; 004e1bf7
    LEA EDI,[ESP + 0x1ec]               ; 004e1bfe
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004e1c05
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x138]               ; 004e1c0a
    ADD ESP,0x4                         ; 004e1c11
    MOVSD ES:EDI,ESI                    ; 004e1c14
    MOVSD ES:EDI,ESI                    ; 004e1c15
    MOVSD ES:EDI,ESI                    ; 004e1c16
    FLD float ptr [ESP + 0x1ec]         ; 004e1c17
    FCOMP float ptr [0x005c6a3a]        ; 004e1c1e | DAT_005c6a3a
    FNSTSW AX                           ; 004e1c24
    SAHF                                ; 004e1c26
    JC 0x004e1c7f                       ; 004e1c27
        ;   XREF to: 004e1c7f (CONDITIONAL_JUMP)  ; LAB_004e1c7f
    CMP dword ptr [ESP + 0x1ec],0x3f490fdb ; 004e1c29
    JG 0x004e1c7f                       ; 004e1c34
        ;   XREF to: 004e1c7f (CONDITIONAL_JUMP)  ; LAB_004e1c7f
    FLD float ptr [ESP + 0x27c]         ; 004e1c36
    FMUL ST0                            ; 004e1c3d
    FLD float ptr [ESP + 0x278]         ; 004e1c3f
    FMUL ST0                            ; 004e1c46
    FADDP                               ; 004e1c48
    FLD float ptr [ESP + 0x280]         ; 004e1c4a
    FMUL ST0                            ; 004e1c51
    FADDP                               ; 004e1c53
    FSQRT                               ; 004e1c55
    FST float ptr [ESP + 0x2f4]         ; 004e1c57
    FCOMP float ptr [ESP + 0x2e8]       ; 004e1c5e
    FNSTSW AX                           ; 004e1c65
    SAHF                                ; 004e1c67
    JNC 0x004e1c7f                      ; 004e1c68
        ;   XREF to: 004e1c7f (CONDITIONAL_JUMP)  ; LAB_004e1c7f
    MOV EAX,dword ptr [ESP + 0x2f4]     ; 004e1c6a
    MOV dword ptr [ESP + 0x2e4],EBX     ; 004e1c71
    MOV dword ptr [ESP + 0x2e8],EAX     ; 004e1c78
    MOV EBX,dword ptr [ESP + 0x300]     ; 004e1c7f
        ;   Label: LAB_004e1c7f
    MOV ECX,dword ptr [ESP + 0x2fc]     ; 004e1c86
    INC EBX                             ; 004e1c8d
    ADD ECX,0x4                         ; 004e1c8e
    MOV dword ptr [ESP + 0x300],EBX     ; 004e1c91
    MOV dword ptr [ESP + 0x2fc],ECX     ; 004e1c98
    JMP 0x004e1137                      ; 004e1c9f
        ;   XREF to: 004e1137 (UNCONDITIONAL_JUMP)  ; LAB_004e1137
    PUSH EBX                            ; 004e1ca4
        ;   Label: LAB_004e1ca4
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 004e1ca5
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e1caa
    TEST EAX,EAX                        ; 004e1cad
    JZ 0x004e1316                       ; 004e1caf
        ;   XREF to: 004e1316 (CONDITIONAL_JUMP)  ; LAB_004e1316
    PUSH 0x1                            ; 004e1cb5
    PUSH 0x5c69e0                       ; 004e1cb7 | = "Bip01 Head"
    PUSH EAX                            ; 004e1cbc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004e1cbd
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e1cc2
    TEST EAX,EAX                        ; 004e1cc5
    JL 0x004e1316                       ; 004e1cc7
        ;   XREF to: 004e1316 (CONDITIONAL_JUMP)  ; LAB_004e1316
    PUSH EAX                            ; 004e1ccd
    PUSH EBX                            ; 004e1cce
    LEA ESI,[ESP + 0x118]               ; 004e1ccf
    LEA EDI,[ESP + 0xdc]                ; 004e1cd6
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004e1cdd
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x118]               ; 004e1ce2
    LEA EAX,[ESP + 0xdc]                ; 004e1ce9
    ADD ESP,0x8                         ; 004e1cf0
    LEA EBX,[ESP + 0x164]               ; 004e1cf3
    MOV ECX,dword ptr [ESP + 0x2e4]     ; 004e1cfa
    PUSH EAX                            ; 004e1d01
    MOVSD ES:EDI,ESI                    ; 004e1d02
    MOVSD ES:EDI,ESI                    ; 004e1d03
    MOVSD ES:EDI,ESI                    ; 004e1d04
    PUSH ECX                            ; 004e1d05
    LEA ESI,[ESP + 0x124]               ; 004e1d06
    LEA EDI,[ESP + 0x10c]               ; 004e1d0d
    CALL core_actor.cpp_FUN_00408b80    ; 004e1d14
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x124]               ; 004e1d19
    ADD ESP,0x8                         ; 004e1d20
    LEA EAX,[ESP + 0x104]               ; 004e1d23
    MOVSD ES:EDI,ESI                    ; 004e1d2a
    MOVSD ES:EDI,ESI                    ; 004e1d2b
    MOVSD ES:EDI,ESI                    ; 004e1d2c
    CMP EBX,EAX                         ; 004e1d2d
    JZ 0x004e1d5b                       ; 004e1d2f
        ;   XREF to: 004e1d5b (CONDITIONAL_JUMP)  ; LAB_004e1d5b
    MOV EAX,dword ptr [ESP + 0x104]     ; 004e1d31
    MOV dword ptr [ESP + 0x164],EAX     ; 004e1d38
    MOV EAX,dword ptr [ESP + 0x108]     ; 004e1d3f
    MOV dword ptr [ESP + 0x168],EAX     ; 004e1d46
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004e1d4d
    MOV dword ptr [ESP + 0x16c],EAX     ; 004e1d54
    FLD float ptr [ESP + 0x168]         ; 004e1d5b
        ;   Label: LAB_004e1d5b
    FCOMP float ptr [ESP + 0x2d0]       ; 004e1d62
    FNSTSW AX                           ; 004e1d69
    SAHF                                ; 004e1d6b
    JNC 0x004e1316                      ; 004e1d6c
        ;   XREF to: 004e1316 (CONDITIONAL_JUMP)  ; LAB_004e1316
    LEA EAX,[ESP + 0x2cc]               ; 004e1d72
    LEA EBX,[ESP + 0x164]               ; 004e1d79
    CMP EAX,EBX                         ; 004e1d80
    JZ 0x004e1316                       ; 004e1d82
        ;   XREF to: 004e1316 (CONDITIONAL_JUMP)  ; LAB_004e1316
    MOV EAX,dword ptr [ESP + 0x164]     ; 004e1d88
    MOV dword ptr [ESP + 0x2cc],EAX     ; 004e1d8f
    MOV EAX,dword ptr [ESP + 0x168]     ; 004e1d96
    MOV dword ptr [ESP + 0x2d0],EAX     ; 004e1d9d
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004e1da4
    MOV dword ptr [ESP + 0x2d4],EAX     ; 004e1dab
    JMP 0x004e1316                      ; 004e1db2
        ;   XREF to: 004e1316 (UNCONDITIONAL_JUMP)  ; LAB_004e1316
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 004e1db7
        ;   Label: LAB_004e1db7
    MOV dword ptr [ESP + 0x80],EAX      ; 004e1dbe
    MOV EAX,dword ptr [ESP + 0x2d0]     ; 004e1dc5
    MOV dword ptr [ESP + 0x84],EAX      ; 004e1dcc
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 004e1dd3
    MOV dword ptr [ESP + 0x88],EAX      ; 004e1dda
    JMP 0x004e1486                      ; 004e1de1
        ;   XREF to: 004e1486 (UNCONDITIONAL_JUMP)  ; LAB_004e1486
    PUSH 0x3f866666                     ; 004e1de6
        ;   Label: LAB_004e1de6
    PUSH 0x3f733333                     ; 004e1deb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e1df0
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x30c],EAX     ; 004e1df5
    FLD float ptr [ESP + 0x30c]         ; 004e1dfc
    ADD ESP,0x8                         ; 004e1e03
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1e06
    FMUL float ptr [EAX + 0x2e8]        ; 004e1e09
    FSTP float ptr [ESP + 0x304]        ; 004e1e0f
    MOV EAX,dword ptr [ESP + 0x304]     ; 004e1e16
    MOV dword ptr [ESP + 0xd0],EAX      ; 004e1e1d
    LEA EAX,[ESP + 0xc8]                ; 004e1e24
    LEA ESI,[ESP + 0x26c]               ; 004e1e2b
    PUSH EAX                            ; 004e1e32
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e1e33
    XOR EBX,EBX                         ; 004e1e36
    PUSH EDI                            ; 004e1e38
    MOV dword ptr [ESP + 0xd0],EBX      ; 004e1e39
    MOV dword ptr [ESP + 0xd4],EBX      ; 004e1e40
    CALL core_actor.cpp_FUN_00408b00    ; 004e1e47
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 004e1e4c
    LEA EDI,[ESP + 0x158]               ; 004e1e4f
    PUSH 0x3f866666                     ; 004e1e56
    LEA ESI,[ESP + 0x270]               ; 004e1e5b
    PUSH 0x3f733333                     ; 004e1e62
    MOVSD ES:EDI,ESI                    ; 004e1e67
    MOVSD ES:EDI,ESI                    ; 004e1e68
    MOVSD ES:EDI,ESI                    ; 004e1e69
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e1e6a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x30c],EAX     ; 004e1e6f
    FLD float ptr [ESP + 0x30c]         ; 004e1e76
    ADD ESP,0x8                         ; 004e1e7d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1e80
    LEA EDI,[ESP + 0x17c]               ; 004e1e83
    LEA ESI,[ESP + 0x1d0]               ; 004e1e8a
    FMUL float ptr [EAX + 0x2e8]        ; 004e1e91
    MOVSD ES:EDI,ESI                    ; 004e1e97
    MOVSD ES:EDI,ESI                    ; 004e1e98
    MOVSD ES:EDI,ESI                    ; 004e1e99
    MOV EAX,[0x00603b28]                ; 004e1e9a | g_CDemonSetPtr
    FLD float ptr [ESP + 0x17c]         ; 004e1e9f
    FLD float ptr [ESP + 0x180]         ; 004e1ea6
    FLD float ptr [ESP + 0x184]         ; 004e1ead
    FXCH ST3                            ; 004e1eb4
    FSUBR float ptr [ESP + 0x15c]       ; 004e1eb6
    LEA EDI,[ESP + 0x248]               ; 004e1ebd
    LEA ESI,[ESP + 0x200]               ; 004e1ec4
    FSTP float ptr [ESP + 0x15c]        ; 004e1ecb
    PUSH EAX                            ; 004e1ed2 | g_CDemonSetInstance
    FXCH                                ; 004e1ed3
    FADD float ptr [ESP + 0x15c]        ; 004e1ed5
    FXCH ST2                            ; 004e1edc
    FADD float ptr [ESP + 0x164]        ; 004e1ede
    FXCH ST2                            ; 004e1ee5
    FSTP float ptr [ESP + 0x204]        ; 004e1ee7
    FADD float ptr [ESP + 0x160]        ; 004e1eee
    FXCH                                ; 004e1ef5
    FSTP float ptr [ESP + 0x20c]        ; 004e1ef7
    FSTP float ptr [ESP + 0x208]        ; 004e1efe
    MOVSD ES:EDI,ESI                    ; 004e1f05
    MOVSD ES:EDI,ESI                    ; 004e1f06
    MOVSD ES:EDI,ESI                    ; 004e1f07
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004e1f08
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e1f0d
    PUSH 0xff                           ; 004e1f10
    PUSH 0xff                           ; 004e1f15
    PUSH 0xff                           ; 004e1f1a
    PUSH 0x1                            ; 004e1f1f
    MOV EDX,dword ptr [0x00603b28]      ; 004e1f21 | g_CDemonSetPtr
    PUSH EDX                            ; 004e1f27 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_0053ecd0 ; 004e1f28
        ;   XREF to: 0053ecd0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_0053ecd0(CDemonSet * this_ptr, int laser_type, int color_r, int color_g, ...)
    ADD ESP,0x14                        ; 004e1f2d
    MOV ECX,dword ptr [0x00603b28]      ; 004e1f30 | g_CDemonSetPtr
    PUSH ECX                            ; 004e1f36 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0 ; 004e1f37
        ;   XREF to: 0053ebd0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e1f3c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e1f3f
    PUSH EBX                            ; 004e1f42
    MOV ESI,dword ptr [0x00603b28]      ; 004e1f43 | g_CDemonSetPtr
    PUSH ESI                            ; 004e1f49 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004e1f4a
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EDI,dword ptr [EBX + 0x304]     ; 004e1f4f
    ADD ESP,0x8                         ; 004e1f55
    TEST EDI,EDI                        ; 004e1f58
    JZ 0x004e1f6c                       ; 004e1f5a
        ;   XREF to: 004e1f6c (CONDITIONAL_JUMP)  ; LAB_004e1f6c
    PUSH EDI                            ; 004e1f5c
    MOV ECX,dword ptr [0x00603b28]      ; 004e1f5d | g_CDemonSetPtr
    PUSH ECX                            ; 004e1f63 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004e1f64
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e1f69
    MOV EBX,dword ptr [0x00603b28]      ; 004e1f6c | g_CDemonSetPtr
        ;   Label: LAB_004e1f6c
    PUSH EBX                            ; 004e1f72 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_0053e870 ; 004e1f73
        ;   XREF to: 0053e870 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_0053e870(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e1f78
    LEA EAX,[ESP + 0x248]               ; 004e1f7b
    PUSH EAX                            ; 004e1f82
    LEA EAX,[ESP + 0x180]               ; 004e1f83
    PUSH EAX                            ; 004e1f8a
    MOV ESI,dword ptr [0x00603b28]      ; 004e1f8b | g_CDemonSetPtr
    PUSH ESI                            ; 004e1f91 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 004e1f92
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    ADD ESP,0xc                         ; 004e1f97
    PUSH 0xffff                         ; 004e1f9a
    PUSH 0x3e800000                     ; 004e1f9f
    PUSH 0x3                            ; 004e1fa4
    PUSH 0x3f400000                     ; 004e1fa6
    PUSH 0x3f400000                     ; 004e1fab
    MOV EAX,[0x00603b28]                ; 004e1fb0 | g_CDemonSetPtr
    PUSH 0x0                            ; 004e1fb5
    ADD EAX,0x14d138                    ; 004e1fb7
    PUSH EAX                            ; 004e1fbc | g_CDemonSetInstance.collision_impact_position.x
    LEA EAX,[ESP + 0x1ec]               ; 004e1fbd
    PUSH EAX                            ; 004e1fc4
    MOV EDI,dword ptr [0x005fc5a0]      ; 004e1fc5 | DAT_005fc5a0
    PUSH EDI                            ; 004e1fcb
    CALL core_fire.cpp_FUN_004a3c50     ; 004e1fcc
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3c50()
    ADD ESP,0x24                        ; 004e1fd1
    MOV EAX,[0x00603b28]                ; 004e1fd4 | g_CDemonSetPtr
    PUSH 0x2                            ; 004e1fd9
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004e1fdb | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004e1fe1
    MOV ECX,dword ptr [EAX + 0x14d134]  ; 004e1fe2 | g_CDemonSetInstance.ground_type
    PUSH ECX                            ; 004e1fe8
    LEA EBX,[EAX + 0x14d128]            ; 004e1fe9
    PUSH EBX                            ; 004e1fef | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 004e1ff0
    PUSH EAX                            ; 004e1ff5 | g_CDemonSetInstance.collision_impact_position.x
    MOV EBX,dword ptr [0x005fc5a0]      ; 004e1ff6 | DAT_005fc5a0
    PUSH EBX                            ; 004e1ffc
    CALL core_fire.cpp_FUN_004a2090     ; 004e1ffd
        ;   XREF to: 004a2090 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a2090()
    ADD ESP,0x18                        ; 004e2002
    MOV ESI,dword ptr [0x00603b28]      ; 004e2005 | g_CDemonSetPtr
    PUSH ESI                            ; 004e200b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_0053ea20 ; 004e200c
        ;   XREF to: 0053ea20 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_0053ea20(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e2011
    MOV EDI,dword ptr [0x00603b28]      ; 004e2014 | g_CDemonSetPtr
    PUSH EDI                            ; 004e201a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004e201b
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e2020
    JMP 0x004e159a                      ; 004e2023
        ;   XREF to: 004e159a (UNCONDITIONAL_JUMP)  ; LAB_004e159a

