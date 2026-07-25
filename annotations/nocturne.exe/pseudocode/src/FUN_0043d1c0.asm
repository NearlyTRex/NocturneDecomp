; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043d1c0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x64]:1  local_64
;
; Referenced Globals:
;   TerminatedCString s_bow_wav_0057b485
;   double DOUBLE_0057b496 = 1.5
;   double DOUBLE_0057b49e = 10
;   undefined4 DAT_005b80f0
;   int INT_005b9284 = 0x1c70f74
;   undefined4 DAT_005be368
;   undefined4 DAT_005bed68
;   undefined4 CDemonActorType_00765a60.name_hash
;   undefined4 DAT_01c78c78
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3fac
;   undefined4 DAT_01fa3fb0
;   undefined4 DAT_01fa3fb4
;   undefined4 DAT_01fa3fb8
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_fire.cpp_CFireEffect_createStake_FUN_0048b070
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
;   core_sound.cpp_CSound_playActorSound_FUN_0052ea60
;   core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0
;   core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580
;   core_weapon.cpp_CWeapon_fire_FUN_00554600
;   FUN_004940d0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d1c0
        ;   Label: FUN_0043d1c0
    PUSH ESI                            ; 0043d1c1
    PUSH EDI                            ; 0043d1c2
    PUSH EBP                            ; 0043d1c3
    MOV EBP,ESP                         ; 0043d1c4
    SUB ESP,0xf0                        ; 0043d1c6
    AND ESP,0xfffffff8                  ; 0043d1cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0043d1cf
    LEA EAX,[ESP + 0x9c]                ; 0043d1d2
    PUSH EAX                            ; 0043d1d9
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0043d1da
    PUSH EBX                            ; 0043d1e0
    CALL dword ptr [ESI + 0xd8]         ; 0043d1e1
    ADD ESP,0x8                         ; 0043d1e7
    PUSH EAX                            ; 0043d1ea
    LEA EAX,[ESP + 0xc4]                ; 0043d1eb
    PUSH EAX                            ; 0043d1f2
    PUSH EBX                            ; 0043d1f3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0043d1f4
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 0043d1f9
    PUSH EBX                            ; 0043d1fc
    CALL core_weapon.cpp_CWeapon_fire_FUN_00554600 ; 0043d1fd
        ;   XREF to: 00554600 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_fire_FUN_00554600()
    ADD ESP,0x4                         ; 0043d202
    TEST EAX,EAX                        ; 0043d205
    JNZ 0x0043d210                      ; 0043d207
        ;   XREF to: 0043d210 (CONDITIONAL_JUMP)  ; LAB_0043d210
    MOV ESP,EBP                         ; 0043d209
    POP EBP                             ; 0043d20b
    POP EDI                             ; 0043d20c
    POP ESI                             ; 0043d20d
    POP EBX                             ; 0043d20e
    RET                                 ; 0043d20f
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 0043d210
        ;   Label: LAB_0043d210
    MOV dword ptr [ESP + 0x98],EAX      ; 0043d216
    LEA EAX,[ESP + 0x90]                ; 0043d21d
    PUSH EAX                            ; 0043d224
    LEA EAX,[ESP + 0x64]                ; 0043d225
    PUSH EAX                            ; 0043d229
    XOR EDX,EDX                         ; 0043d22a
    PUSH EBX                            ; 0043d22c
    MOV dword ptr [ESP + 0x9c],EDX      ; 0043d22d
    MOV dword ptr [ESP + 0xa0],EDX      ; 0043d234
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0043d23b
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    ADD ESP,0xc                         ; 0043d240
    FLD float ptr [ESP + 0xc0]          ; 0043d243
    FLD float ptr [ESP + 0xc4]          ; 0043d24a
    FLD float ptr [ESP + 0xc8]          ; 0043d251
    FXCH ST2                            ; 0043d258
    FADD float ptr [ESP + 0x60]         ; 0043d25a
    FXCH                                ; 0043d25e
    FADD float ptr [ESP + 0x64]         ; 0043d260
    FXCH ST2                            ; 0043d264
    FADD float ptr [ESP + 0x68]         ; 0043d266
    FXCH                                ; 0043d26a
    FSTP float ptr [ESP + 0x54]         ; 0043d26c
    FXCH                                ; 0043d270
    FSTP float ptr [ESP + 0x58]         ; 0043d272
    FSTP float ptr [ESP + 0x5c]         ; 0043d276
    FLD float ptr [EBX + 0x2e0]         ; 0043d27a
    FDIVR double ptr [0x0057b496]       ; 0043d280 | DOUBLE_0057b496
    FLD float ptr [ESP + 0x60]          ; 0043d286
    FXCH                                ; 0043d28a
    FSTP float ptr [ESP + 0xd8]         ; 0043d28c
    FMUL float ptr [ESP + 0xd8]         ; 0043d293
    FLD float ptr [ESP + 0x64]          ; 0043d29a
    FMUL float ptr [ESP + 0xd8]         ; 0043d29e
    FLD float ptr [ESP + 0x68]          ; 0043d2a5
    FMUL float ptr [ESP + 0xd8]         ; 0043d2a9
    MOV ESI,dword ptr [0x005be368]      ; 0043d2b0 | DAT_005be368
    FLD float ptr [ESP + 0xc0]          ; 0043d2b6
    FLD float ptr [ESP + 0xc4]          ; 0043d2bd
    FLD float ptr [ESP + 0xc8]          ; 0043d2c4
    PUSH ESI                            ; 0043d2cb | DAT_01e57284
    FXCH ST5                            ; 0043d2cc
    FSTP float ptr [ESP + 0x88]         ; 0043d2ce
    FXCH ST3                            ; 0043d2d5
    FSTP float ptr [ESP + 0x8c]         ; 0043d2d7
    FXCH                                ; 0043d2de
    FSTP float ptr [ESP + 0x90]         ; 0043d2e0
    FSUB float ptr [ESP + 0x88]         ; 0043d2e7
    FXCH                                ; 0043d2ee
    FSUB float ptr [ESP + 0x8c]         ; 0043d2f0
    FXCH ST2                            ; 0043d2f7
    FSUB float ptr [ESP + 0x90]         ; 0043d2f9
    FXCH                                ; 0043d300
    FSTP float ptr [ESP + 0x70]         ; 0043d302
    FXCH                                ; 0043d306
    FSTP float ptr [ESP + 0x74]         ; 0043d308
    FSTP float ptr [ESP + 0x78]         ; 0043d30c
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0043d310
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 0043d315
    PUSH 0x1                            ; 0043d318
    MOV EDI,dword ptr [0x005be368]      ; 0043d31a | DAT_005be368
    PUSH EDI                            ; 0043d320 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 0043d321
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800()
    ADD ESP,0x8                         ; 0043d326
    PUSH EBX                            ; 0043d329
    MOV EAX,[0x005be368]                ; 0043d32a | DAT_005be368
    PUSH EAX                            ; 0043d32f | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0043d330
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    MOV EDX,dword ptr [EBX + 0x2fc]     ; 0043d335
    ADD ESP,0x8                         ; 0043d33b
    TEST EDX,EDX                        ; 0043d33e
    JNZ 0x0043d481                      ; 0043d340
        ;   XREF to: 0043d481 (CONDITIONAL_JUMP)  ; LAB_0043d481
    XOR EDI,EDI                         ; 0043d346
        ;   Label: LAB_0043d346
    MOV dword ptr [ESP + 0xe0],EDI      ; 0043d348
    LEA EAX,[ESP + 0x54]                ; 0043d34f
        ;   Label: LAB_0043d34f
    PUSH EAX                            ; 0043d353
    LEA EAX,[ESP + 0x70]                ; 0043d354
    PUSH EAX                            ; 0043d358
    MOV EAX,[0x005be368]                ; 0043d359 | DAT_005be368
    PUSH EAX                            ; 0043d35e | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 0043d35f
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00()
    MOV dword ptr [ESP + 0xf8],EAX      ; 0043d364
    FLD float ptr [ESP + 0xf8]          ; 0043d36b
    ADD ESP,0xc                         ; 0043d372
    FLDZ                                ; 0043d375
    FXCH                                ; 0043d377
    FST float ptr [ESP + 0x8]           ; 0043d379
    FSTP double ptr [ESP]               ; 0043d37d
    FCOMP double ptr [ESP]              ; 0043d380
    FNSTSW AX                           ; 0043d383
    SAHF                                ; 0043d385
    JBE 0x0043d496                      ; 0043d386
        ;   XREF to: 0043d496 (CONDITIONAL_JUMP)  ; LAB_0043d496
    MOV ESI,dword ptr [0x005be368]      ; 0043d38c | DAT_005be368
        ;   Label: LAB_0043d38c
    PUSH ESI                            ; 0043d392 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0043d393
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 0043d398
    FLD float ptr [ESP + 0x8]           ; 0043d39b
    FLD1                                ; 0043d39f
    FCOMPP                              ; 0043d3a1
    FNSTSW AX                           ; 0043d3a3
    SAHF                                ; 0043d3a5
    JNC 0x0043d3b0                      ; 0043d3a6
        ;   XREF to: 0043d3b0 (CONDITIONAL_JUMP)  ; LAB_0043d3b0
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0043d3a8
    FLD float ptr [ESP + 0x8]           ; 0043d3b0
        ;   Label: LAB_0043d3b0
    FLD float ptr [ESP + 0x60]          ; 0043d3b4
    FMUL ST1                            ; 0043d3b8
    FLD float ptr [ESP + 0x64]          ; 0043d3ba
    FMUL ST2                            ; 0043d3be
    FLD float ptr [ESP + 0x68]          ; 0043d3c0
    FMULP ST3                           ; 0043d3c4
    FLD float ptr [ESP + 0x6c]          ; 0043d3c6
    FLD float ptr [ESP + 0x70]          ; 0043d3ca
    LEA EAX,[ESP + 0xc0]                ; 0043d3ce
    FLD float ptr [ESP + 0x74]          ; 0043d3d5
    PUSH EAX                            ; 0043d3d9
    FXCH ST4                            ; 0043d3da
    FSTP float ptr [ESP + 0xb8]         ; 0043d3dc
    FXCH ST2                            ; 0043d3e3
    FSTP float ptr [ESP + 0xbc]         ; 0043d3e5
    FXCH ST3                            ; 0043d3ec
    FSTP float ptr [ESP + 0xc0]         ; 0043d3ee
    PUSH 0x57b485                       ; 0043d3f5 | = "bow-!.wav"
    MOV EAX,[0x005bed68]                ; 0043d3fa | DAT_005bed68
    FXCH ST2                            ; 0043d3ff
    FADD float ptr [ESP + 0xbc]         ; 0043d401
    FXCH ST2                            ; 0043d408
    FADD float ptr [ESP + 0xc0]         ; 0043d40a
    FXCH                                ; 0043d411
    FADD float ptr [ESP + 0xc4]         ; 0043d413
    PUSH EBX                            ; 0043d41a
    FXCH ST2                            ; 0043d41b
    FSTP float ptr [ESP + 0x84]         ; 0043d41d
    FSTP float ptr [ESP + 0x88]         ; 0043d424
    PUSH EAX                            ; 0043d42b
    FSTP float ptr [ESP + 0x90]         ; 0043d42c
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 0043d433
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playActorSound_FUN_0052ea60()
    ADD ESP,0x10                        ; 0043d438
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0043d43b
    PUSH EBX                            ; 0043d441
    MOV dword ptr [EBX + 0x2f8],0x3f2a7efa ; 0043d442
    CALL dword ptr [EAX + 0x8c]         ; 0043d44c
    MOV EBX,dword ptr [0x01cae0e8]      ; 0043d452 | DAT_01cae0e8
    MOV EDX,dword ptr [EBX*0x4 + 0x1cae0d8] ; 0043d458
    ADD ESP,0x4                         ; 0043d45f
    CMP EAX,EDX                         ; 0043d462
    JNZ 0x0043d475                      ; 0043d464
        ;   XREF to: 0043d475 (CONDITIONAL_JUMP)  ; LAB_0043d475
    MOV ECX,dword ptr [0x005b9284]      ; 0043d466 | INT_005b9284
    PUSH ECX                            ; 0043d46c
    CALL FUN_004940d0                   ; 0043d46d
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 0043d472
    MOV EAX,0x1                         ; 0043d475
        ;   Label: LAB_0043d475
    MOV ESP,EBP                         ; 0043d47a
    POP EBP                             ; 0043d47c
    POP EDI                             ; 0043d47d
    POP ESI                             ; 0043d47e
    POP EBX                             ; 0043d47f
    RET                                 ; 0043d480
    PUSH EDX                            ; 0043d481
        ;   Label: LAB_0043d481
    MOV ESI,dword ptr [0x005be368]      ; 0043d482 | DAT_005be368
    PUSH ESI                            ; 0043d488 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0043d489
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 0043d48e
    JMP 0x0043d346                      ; 0043d491
        ;   XREF to: 0043d346 (UNCONDITIONAL_JUMP)  ; LAB_0043d346
    FLD1                                ; 0043d496
        ;   Label: LAB_0043d496
    FCOMP double ptr [ESP]              ; 0043d498
    FNSTSW AX                           ; 0043d49b
    SAHF                                ; 0043d49d
    JC 0x0043d38c                       ; 0043d49e
        ;   XREF to: 0043d38c (CONDITIONAL_JUMP)  ; LAB_0043d38c
    MOV EDX,dword ptr [0x00765a98]      ; 0043d4a4 | CDemonActorType_00765a60.name_hash
    MOV EAX,[0x005be368]                ; 0043d4aa | DAT_005be368
    PUSH EDX                            ; 0043d4af
    MOV ECX,dword ptr [EAX + 0x14cd5c]  ; 0043d4b0 | DAT_01fa3fe0
    PUSH ECX                            ; 0043d4b6
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0043d4b7
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 0043d4bc
    MOV ESI,EAX                         ; 0043d4bf
    TEST EAX,EAX                        ; 0043d4c1
    JZ 0x0043d4db                       ; 0043d4c3
        ;   XREF to: 0043d4db (CONDITIONAL_JUMP)  ; LAB_0043d4db
    PUSH EAX                            ; 0043d4c5
    MOV EDI,dword ptr [EAX + 0x14c]     ; 0043d4c6
    CALL dword ptr [EDI + 0x104]        ; 0043d4cc
    ADD ESP,0x4                         ; 0043d4d2
    TEST EAX,EAX                        ; 0043d4d5
    JLE 0x0043d4db                      ; 0043d4d7
        ;   XREF to: 0043d4db (CONDITIONAL_JUMP)  ; LAB_0043d4db
    XOR ESI,ESI                         ; 0043d4d9
    MOV EDI,dword ptr [0x01c78c78]      ; 0043d4db | DAT_01c78c78
        ;   Label: LAB_0043d4db
    MOV EAX,[0x005be368]                ; 0043d4e1 | DAT_005be368
    PUSH EDI                            ; 0043d4e6
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 0043d4e7 | DAT_01fa3fe0
    PUSH EDX                            ; 0043d4ed
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0043d4ee
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV dword ptr [ESP + 0xf0],EAX      ; 0043d4f3
    ADD ESP,0x8                         ; 0043d4fa
    MOV ECX,dword ptr [0x02dd10bc]      ; 0043d4fd | DAT_02dd10bc
    MOV EAX,[0x005be368]                ; 0043d503 | DAT_005be368
    PUSH ECX                            ; 0043d508
    MOV EDI,dword ptr [EAX + 0x14cd5c]  ; 0043d509 | DAT_01fa3fe0
    PUSH EDI                            ; 0043d50f
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0043d510
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 0043d515
    MOV EDI,EAX                         ; 0043d518
    MOV dword ptr [ESP + 0xdc],EAX      ; 0043d51a
    TEST ESI,ESI                        ; 0043d521
    JNZ 0x0043d59c                      ; 0043d523
        ;   XREF to: 0043d59c (CONDITIONAL_JUMP)  ; LAB_0043d59c
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0043d525
    TEST EAX,EAX                        ; 0043d52c
    JNZ 0x0043d790                      ; 0043d52e
        ;   XREF to: 0043d790 (CONDITIONAL_JUMP)  ; LAB_0043d790
    TEST EDI,EDI                        ; 0043d534
    JZ 0x0043d7d9                       ; 0043d536
        ;   XREF to: 0043d7d9 (CONDITIONAL_JUMP)  ; LAB_0043d7d9
    PUSH EDI                            ; 0043d53c
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580 ; 0043d53d
        ;   XREF to: 00548580 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580()
    ADD ESP,0x4                         ; 0043d542
    PUSH EBX                            ; 0043d545
    PUSH EDI                            ; 0043d546
    CALL FUN_005485a0                   ; 0043d547
        ;   XREF to: 005485a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005485a0()
    ADD ESP,0x8                         ; 0043d54c
    TEST EAX,EAX                        ; 0043d54f
    JZ 0x0043d580                       ; 0043d551
        ;   XREF to: 0043d580 (CONDITIONAL_JUMP)  ; LAB_0043d580
    PUSH EBX                            ; 0043d553
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0043d554
    CALL dword ptr [EAX + 0xe4]         ; 0043d55a
    MOV dword ptr [ESP + 0xf0],EAX      ; 0043d560
    FLD float ptr [ESP + 0xf0]          ; 0043d567
    ADD ESP,0x4                         ; 0043d56e
    SUB ESP,0x4                         ; 0043d571
    FSTP float ptr [ESP]                ; 0043d574
    PUSH EDI                            ; 0043d577
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0 ; 0043d578
        ;   XREF to: 005485e0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0()
    ADD ESP,0x8                         ; 0043d57d
    MOV ESI,dword ptr [ESP + 0xdc]      ; 0043d580
        ;   Label: LAB_0043d580
    PUSH ESI                            ; 0043d587
    MOV EDI,dword ptr [0x005be368]      ; 0043d588 | DAT_005be368
    PUSH EDI                            ; 0043d58e | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0043d58f
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 0043d594
    JMP 0x0043d7bc                      ; 0043d597
        ;   XREF to: 0043d7bc (UNCONDITIONAL_JUMP)  ; LAB_0043d7bc
    PUSH ESI                            ; 0043d59c
        ;   Label: LAB_0043d59c
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0043d59d
    CALL dword ptr [EAX + 0xd8]         ; 0043d5a3
    ADD ESP,0x4                         ; 0043d5a9
    TEST EAX,EAX                        ; 0043d5ac
    JZ 0x0043d5e3                       ; 0043d5ae
        ;   XREF to: 0043d5e3 (CONDITIONAL_JUMP)  ; LAB_0043d5e3
    CMP dword ptr [ESP + 0xe0],0x0      ; 0043d5b0
    JNZ 0x0043d38c                      ; 0043d5b8
        ;   XREF to: 0043d38c (CONDITIONAL_JUMP)  ; LAB_0043d38c
    MOV ECX,dword ptr [EBX + 0x560]     ; 0043d5be
    MOV EDX,dword ptr [0x005be368]      ; 0043d5c4 | DAT_005be368
    INC ECX                             ; 0043d5ca
    PUSH EDX                            ; 0043d5cb | DAT_01e57284
    MOV dword ptr [EBX + 0x560],ECX     ; 0043d5cc
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0043d5d2
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 0043d5d7
    XOR EAX,EAX                         ; 0043d5da
    MOV ESP,EBP                         ; 0043d5dc
    POP EBP                             ; 0043d5de
    POP EDI                             ; 0043d5df
    POP ESI                             ; 0043d5e0
    POP EBX                             ; 0043d5e1
    RET                                 ; 0043d5e2
    LEA EAX,[ESP + 0xc]                 ; 0043d5e3
        ;   Label: LAB_0043d5e3
    PUSH EAX                            ; 0043d5e7
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0043d5e8
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    MOV EAX,[0x005be368]                ; 0043d5ed | DAT_005be368
    ADD ESP,0x4                         ; 0043d5f2
    MOV EAX,dword ptr [EAX + 0x14cd60]  ; 0043d5f5 | DAT_01fa3fe4
    MOV dword ptr [ESP + 0xc],EAX       ; 0043d5fb
    PUSH EBX                            ; 0043d5ff
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0043d600
    CALL dword ptr [EAX + 0xe4]         ; 0043d606
    MOV dword ptr [ESP + 0xf0],EAX      ; 0043d60c
    MOV ECX,0x3ecccccd                  ; 0043d613
    FLD float ptr [ESP + 0xf0]          ; 0043d618
    MOV EAX,[0x005be368]                ; 0043d61f | DAT_005be368
    ADD ESP,0x4                         ; 0043d624
    LEA EDI,[EAX + 0x14cd34]            ; 0043d627
    MOV dword ptr [ESP + 0x14],ECX      ; 0043d62d
    FSTP float ptr [ESP + 0x10]         ; 0043d631
    FLD float ptr [EDI]                 ; 0043d635 | DAT_01fa3fb8
    FSUB float ptr [EAX + 0x14cd28]     ; 0043d637 | DAT_01fa3fac
    FSTP float ptr [ESP + 0x48]         ; 0043d63d
    FLD float ptr [EDI + 0x4]           ; 0043d641 | DAT_01fa3fbc
    FSUB float ptr [EAX + 0x14cd2c]     ; 0043d644 | DAT_01fa3fb0
    FST float ptr [ESP + 0x4c]          ; 0043d64a
    FMUL float ptr [ESP + 0x4c]         ; 0043d64e
    FLD float ptr [ESP + 0x48]          ; 0043d652
    FMUL ST0                            ; 0043d656
    FLD float ptr [EDI + 0x8]           ; 0043d658 | DAT_01fa3fc0
    FSUB float ptr [EAX + 0x14cd30]     ; 0043d65b | DAT_01fa3fb4
    FXCH                                ; 0043d661
    FADDP ST2,ST0                       ; 0043d663
    FST float ptr [ESP + 0x50]          ; 0043d665
    FMUL float ptr [ESP + 0x50]         ; 0043d669
    FADDP                               ; 0043d66d
    FSQRT                               ; 0043d66f
    FDIVR double ptr [0x0057b49e]       ; 0043d671 | DOUBLE_0057b49e
    FLD float ptr [ESP + 0x48]          ; 0043d677
    FXCH                                ; 0043d67b
    FSTP float ptr [ESP + 0xe4]         ; 0043d67d
    FMUL float ptr [ESP + 0xe4]         ; 0043d684
    FLD float ptr [ESP + 0x4c]          ; 0043d68b
    FMUL float ptr [ESP + 0xe4]         ; 0043d68f
    FLD float ptr [ESP + 0x50]          ; 0043d696
    FMUL float ptr [ESP + 0xe4]         ; 0043d69a
    LEA EDI,[ESP + 0x18]                ; 0043d6a1
    LEA EAX,[ESP + 0xa8]                ; 0043d6a5
    FXCH ST2                            ; 0043d6ac
    FSTP float ptr [ESP + 0xa8]         ; 0043d6ae
    FSTP float ptr [ESP + 0xac]         ; 0043d6b5
    FSTP float ptr [ESP + 0xb0]         ; 0043d6bc
    CMP EDI,EAX                         ; 0043d6c3
    JZ 0x0043d6e8                       ; 0043d6c5
        ;   XREF to: 0043d6e8 (CONDITIONAL_JUMP)  ; LAB_0043d6e8
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0043d6c7
    MOV dword ptr [ESP + 0x18],EAX      ; 0043d6ce
    MOV EAX,dword ptr [ESP + 0xac]      ; 0043d6d2
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043d6d9
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0043d6dd
    MOV dword ptr [ESP + 0x20],EAX      ; 0043d6e4
    MOV EAX,[0x005be368]                ; 0043d6e8 | DAT_005be368
        ;   Label: LAB_0043d6e8
    ADD EAX,0x14cd50                    ; 0043d6ed
    PUSH EAX                            ; 0043d6f2 | DAT_01fa3fd4
    LEA EAX,[ESP + 0xd0]                ; 0043d6f3
    PUSH EAX                            ; 0043d6fa
    PUSH ESI                            ; 0043d6fb
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0043d6fc
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    MOV EDI,EAX                         ; 0043d701
    LEA EAX,[ESP + 0x34]                ; 0043d703
    ADD ESP,0xc                         ; 0043d707
    CMP EAX,EDI                         ; 0043d70a
    JZ 0x0043d722                       ; 0043d70c
        ;   XREF to: 0043d722 (CONDITIONAL_JUMP)  ; LAB_0043d722
    MOV EAX,dword ptr [EDI]             ; 0043d70e
    MOV dword ptr [ESP + 0x28],EAX      ; 0043d710
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043d714
    MOV dword ptr [ESP + 0x2c],EAX      ; 0043d717
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043d71b
    MOV dword ptr [ESP + 0x30],EAX      ; 0043d71e
    MOV EAX,dword ptr [EBX + 0x564]     ; 0043d722
        ;   Label: LAB_0043d722
    MOV EDI,0x68                        ; 0043d728
    MOV dword ptr [ESP + 0x34],EAX      ; 0043d72d
    MOV dword ptr [ESP + 0x3c],EDI      ; 0043d731
    MOV EAX,0x3e19999a                  ; 0043d735
    MOV dword ptr [ESP + 0x40],EBX      ; 0043d73a
    MOV dword ptr [ESP + 0x38],EAX      ; 0043d73e
    PUSH EBX                            ; 0043d742
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0043d743
    CALL dword ptr [EAX + 0x8c]         ; 0043d749
    ADD ESP,0x4                         ; 0043d74f
    LEA EDI,[ESP + 0xc]                 ; 0043d752
    PUSH EDI                            ; 0043d756
    MOV dword ptr [ESP + 0x48],EAX      ; 0043d757
    PUSH ESI                            ; 0043d75b
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0043d75c
    CALL dword ptr [EAX + 0x100]        ; 0043d762
    MOV EDX,dword ptr [EBX + 0x2dc]     ; 0043d768
    ADD ESP,0x8                         ; 0043d76e
    TEST EDX,EDX                        ; 0043d771
    JZ 0x0043d38c                       ; 0043d773
        ;   XREF to: 0043d38c (CONDITIONAL_JUMP)  ; LAB_0043d38c
    MOV EAX,[0x005be368]                ; 0043d779 | DAT_005be368
    MOV ECX,dword ptr [EAX + 0x14cd5c]  ; 0043d77e | DAT_01fa3fe0
    PUSH ECX                            ; 0043d784
    PUSH EAX                            ; 0043d785 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0043d786
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 0043d78b
    JMP 0x0043d7bc                      ; 0043d78e
        ;   XREF to: 0043d7bc (UNCONDITIONAL_JUMP)  ; LAB_0043d7bc
    PUSH EAX                            ; 0043d790
        ;   Label: LAB_0043d790
    CALL FUN_004aded0                   ; 0043d791
        ;   XREF to: 004aded0 (UNCONDITIONAL_CALL)  ; undefined FUN_004aded0()
    ADD ESP,0x4                         ; 0043d796
    TEST EAX,EAX                        ; 0043d799
    JZ 0x0043d38c                       ; 0043d79b
        ;   XREF to: 0043d38c (CONDITIONAL_JUMP)  ; LAB_0043d38c
    MOV EAX,[0x005be368]                ; 0043d7a1 | DAT_005be368
    ADD EAX,0x14cd50                    ; 0043d7a6
    PUSH EAX                            ; 0043d7ab | DAT_01fa3fd4
    MOV EDX,dword ptr [ESP + 0xec]      ; 0043d7ac
    PUSH EDX                            ; 0043d7b3
    CALL FUN_004ada20                   ; 0043d7b4
        ;   XREF to: 004ada20 (UNCONDITIONAL_CALL)  ; undefined FUN_004ada20()
    ADD ESP,0x8                         ; 0043d7b9
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0043d7bc
        ;   Label: LAB_0043d7bc
    INC ESI                             ; 0043d7c3
    MOV dword ptr [ESP + 0xe0],ESI      ; 0043d7c4
    CMP ESI,0x4                         ; 0043d7cb
    JL 0x0043d34f                       ; 0043d7ce
        ;   XREF to: 0043d34f (CONDITIONAL_JUMP)  ; LAB_0043d34f
    JMP 0x0043d38c                      ; 0043d7d4
        ;   XREF to: 0043d38c (UNCONDITIONAL_JUMP)  ; LAB_0043d38c
    MOV EAX,[0x005be368]                ; 0043d7d9 | DAT_005be368
        ;   Label: LAB_0043d7d9
    MOV EDX,dword ptr [EAX + 0x14cd4c]  ; 0043d7de | DAT_01fa3fd0
    PUSH EDX                            ; 0043d7e4
    LEA ESI,[EAX + 0x14cd40]            ; 0043d7e5
    PUSH ESI                            ; 0043d7eb | DAT_01fa3fc4
    LEA ESI,[EBX + 0x30]                ; 0043d7ec
    PUSH ESI                            ; 0043d7ef
    ADD EAX,0x14cd50                    ; 0043d7f0
    PUSH EAX                            ; 0043d7f5 | DAT_01fa3fd4
    MOV ECX,dword ptr [0x005b80f0]      ; 0043d7f6 | DAT_005b80f0
    PUSH ECX                            ; 0043d7fc
    CALL core_fire.cpp_CFireEffect_createStake_FUN_0048b070 ; 0043d7fd
        ;   XREF to: 0048b070 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createStake_FUN_0048b070()
    ADD ESP,0x14                        ; 0043d802
    JMP 0x0043d38c                      ; 0043d805
        ;   XREF to: 0043d38c (UNCONDITIONAL_JUMP)  ; LAB_0043d38c

