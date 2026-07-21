; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c71a0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
;
; Referenced Globals:
;   string s_CDraculaBride_005879ef
;   string s_CBatman_005879fd
;   string s_CBatCreature_00587a05
;   string s_CBride_00587a12
;   string s_CGhoul_00587a19
;   string s_CTVBat_00587a20
;   string s_CBatCreature_00587a27
;   string s_CWerewolf_00587a34
;   string s_CSvetlana_00587a3e
;   string s_CTrigger_||_CGlass_00587a48
;   undefined4 s_%s_in_volume_00587a60+1
;   string s_cre-fire.wav_00587a6f
;   undefined4 DAT_00587a7d
;   undefined4 DAT_00587a85
;   undefined4 DAT_0059fd60
;   ... and 16 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CVector_ctor_FUN_0040e160
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0
;   core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0
;   core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
;   core_sound.cpp_CSound_playActorSound_FUN_0052ea60
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c71a0
        ;   Label: FUN_004c71a0
    PUSH ESI                            ; 004c71a1
    PUSH EDI                            ; 004c71a2
    PUSH EBP                            ; 004c71a3
    MOV EBP,ESP                         ; 004c71a4
    SUB ESP,0x110                       ; 004c71a6
    AND ESP,0xfffffff8                  ; 004c71ac
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c71af
    FLD float ptr [EAX + 0x578]         ; 004c71b2
    FCOMP float ptr [0x0059fd60]        ; 004c71b8 | DAT_0059fd60
    FNSTSW AX                           ; 004c71be
    SAHF                                ; 004c71c0
    JNC 0x004c71cc                      ; 004c71c1
        ;   XREF to: 004c71cc (CONDITIONAL_JUMP)  ; LAB_004c71cc
    XOR EAX,EAX                         ; 004c71c3
    MOV ESP,EBP                         ; 004c71c5
    POP EBP                             ; 004c71c7
    POP EDI                             ; 004c71c8
    POP ESI                             ; 004c71c9
    POP EBX                             ; 004c71ca
    RET                                 ; 004c71cb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c71cc
        ;   Label: LAB_004c71cc
    LEA EBX,[ESP + 0xc0]                ; 004c71cf
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c71d6
    PUSH EBX                            ; 004c71d9
    FLD float ptr [EAX + 0x2e0]         ; 004c71da
    MOV dword ptr [EAX + 0x578],0x0     ; 004c71e0
    PUSH EDX                            ; 004c71ea
    FSTP float ptr [EAX + 0x584]        ; 004c71eb
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004c71f1
    CALL dword ptr [EAX + 0xd8]         ; 004c71f7
    ADD ESP,0x8                         ; 004c71fd
    PUSH EAX                            ; 004c7200
    LEA EAX,[ESP + 0x7c]                ; 004c7201
    PUSH EAX                            ; 004c7205
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c7206
    PUSH ECX                            ; 004c7209
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004c720a
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004c720f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c7212
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 004c7215
    MOV dword ptr [ESP + 0xbc],EAX      ; 004c721b
    LEA EAX,[ESP + 0xb4]                ; 004c7222
    PUSH EAX                            ; 004c7229
    LEA EAX,[ESP + 0x94]                ; 004c722a
    PUSH EAX                            ; 004c7231
    MOV EDI,dword ptr [EBP + 0x14]      ; 004c7232
    XOR EBX,EBX                         ; 004c7235
    PUSH EDI                            ; 004c7237
    MOV dword ptr [ESP + 0xc0],EBX      ; 004c7238
    MOV dword ptr [ESP + 0xc4],EBX      ; 004c723f
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004c7246
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    ADD ESP,0xc                         ; 004c724b
    FLD float ptr [ESP + 0x78]          ; 004c724e
    FLD float ptr [ESP + 0x7c]          ; 004c7252
    FLD float ptr [ESP + 0x80]          ; 004c7256
    FXCH ST2                            ; 004c725d
    FADD float ptr [ESP + 0x90]         ; 004c725f
    FXCH                                ; 004c7266
    FADD float ptr [ESP + 0x94]         ; 004c7268
    FXCH ST2                            ; 004c726f
    FADD float ptr [ESP + 0x98]         ; 004c7271
    FXCH                                ; 004c7278
    FSTP float ptr [ESP + 0xd8]         ; 004c727a
    FXCH                                ; 004c7281
    FSTP float ptr [ESP + 0xdc]         ; 004c7283
    FSTP float ptr [ESP + 0xe0]         ; 004c728a
    FLD float ptr [EDI + 0x2e0]         ; 004c7291
    FDIVR double ptr [0x00587a7d]       ; 004c7297 | DAT_00587a7d
    FLD float ptr [ESP + 0x90]          ; 004c729d
    FXCH                                ; 004c72a4
    FSTP float ptr [ESP + 0xf0]         ; 004c72a6
    FMUL float ptr [ESP + 0xf0]         ; 004c72ad
    FLD float ptr [ESP + 0x94]          ; 004c72b4
    FMUL float ptr [ESP + 0xf0]         ; 004c72bb
    FLD float ptr [ESP + 0x98]          ; 004c72c2
    FMUL float ptr [ESP + 0xf0]         ; 004c72c9
    MOV EAX,[0x005be368]                ; 004c72d0 | DAT_005be368
    FLD float ptr [ESP + 0x78]          ; 004c72d5
    FLD float ptr [ESP + 0x7c]          ; 004c72d9
    FLD float ptr [ESP + 0x80]          ; 004c72dd
    PUSH EAX                            ; 004c72e4 | DAT_01e57284
    FXCH ST5                            ; 004c72e5
    FSTP float ptr [ESP + 0xe8]         ; 004c72e7
    FXCH ST3                            ; 004c72ee
    FSTP float ptr [ESP + 0xec]         ; 004c72f0
    FXCH                                ; 004c72f7
    FSTP float ptr [ESP + 0xf0]         ; 004c72f9
    FSUB float ptr [ESP + 0xe8]         ; 004c7300
    FXCH                                ; 004c7307
    FSUB float ptr [ESP + 0xec]         ; 004c7309
    FXCH ST2                            ; 004c7310
    FSUB float ptr [ESP + 0xf0]         ; 004c7312
    FXCH                                ; 004c7319
    FSTP float ptr [ESP + 0xd0]         ; 004c731b
    FXCH                                ; 004c7322
    FSTP float ptr [ESP + 0xd4]         ; 004c7324
    FSTP float ptr [ESP + 0xd8]         ; 004c732b
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004c7332
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 004c7337
    PUSH 0x1                            ; 004c733a
    MOV EDX,dword ptr [0x005be368]      ; 004c733c | DAT_005be368
    PUSH EDX                            ; 004c7342 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 004c7343
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800()
    ADD ESP,0x8                         ; 004c7348
    MOV ECX,dword ptr [0x005be368]      ; 004c734b | DAT_005be368
    PUSH ECX                            ; 004c7351 | DAT_01e57284
    CALL FUN_00511740                   ; 004c7352
        ;   XREF to: 00511740 (UNCONDITIONAL_CALL)  ; undefined FUN_00511740()
    ADD ESP,0x4                         ; 004c7357
    PUSH EDI                            ; 004c735a
    MOV ESI,dword ptr [0x005be368]      ; 004c735b | DAT_005be368
    PUSH ESI                            ; 004c7361 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004c7362
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    MOV EDI,dword ptr [EDI + 0x2fc]     ; 004c7367
    ADD ESP,0x8                         ; 004c736d
    TEST EDI,EDI                        ; 004c7370
    JNZ 0x004c75e8                      ; 004c7372
        ;   XREF to: 004c75e8 (CONDITIONAL_JUMP)  ; LAB_004c75e8
    MOV EBX,dword ptr [0x005be368]      ; 004c7378 | DAT_005be368
        ;   Label: LAB_004c7378
    PUSH EBX                            ; 004c737e | DAT_01e57284
    XOR EDI,EDI                         ; 004c737f
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0 ; 004c7381
        ;   XREF to: 005113e0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0()
    ADD ESP,0x4                         ; 004c7386
    LEA EAX,[ESP + 0xd8]                ; 004c7389
        ;   Label: LAB_004c7389
    PUSH EAX                            ; 004c7390
    LEA EAX,[ESP + 0xd0]                ; 004c7391
    PUSH EAX                            ; 004c7398
    MOV ESI,dword ptr [0x005be368]      ; 004c7399 | DAT_005be368
    PUSH ESI                            ; 004c739f | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 004c73a0
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00()
    MOV dword ptr [ESP + 0x118],EAX     ; 004c73a5
    FLD float ptr [ESP + 0x118]         ; 004c73ac
    ADD ESP,0xc                         ; 004c73b3
    FLDZ                                ; 004c73b6
    FXCH                                ; 004c73b8
    FST float ptr [ESP + 0x8]           ; 004c73ba
    FSTP double ptr [ESP]               ; 004c73be
    FCOMP double ptr [ESP]              ; 004c73c1
    FNSTSW AX                           ; 004c73c4
    SAHF                                ; 004c73c6
    JBE 0x004c7606                      ; 004c73c7
        ;   XREF to: 004c7606 (CONDITIONAL_JUMP)  ; LAB_004c7606
    MOV EAX,[0x005be368]                ; 004c73cd | DAT_005be368
        ;   Label: LAB_004c73cd
    PUSH EAX                            ; 004c73d2 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590 ; 004c73d3
        ;   XREF to: 00511590 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590()
    ADD ESP,0x4                         ; 004c73d8
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c73db
    PUSH EDX                            ; 004c73de
    CALL core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0 ; 004c73df
        ;   XREF to: 004c6ff0 (UNCONDITIONAL_CALL)  ; undefined core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0()
    ADD ESP,0x4                         ; 004c73e4
    XOR ECX,ECX                         ; 004c73e7
    MOV dword ptr [ESP + 0x100],ECX     ; 004c73e9
    MOV dword ptr [ESP + 0xfc],ECX      ; 004c73f0
    MOV EAX,[0x005be368]                ; 004c73f7 | DAT_005be368
        ;   Label: LAB_004c73f7
    MOV EBX,dword ptr [ESP + 0x100]     ; 004c73fc
    CMP EBX,dword ptr [EAX + 0x14ecb0]  ; 004c7403 | DAT_01fa5f34
    JGE 0x004c790d                      ; 004c7409
        ;   XREF to: 004c790d (CONDITIONAL_JUMP)  ; LAB_004c790d
    ADD EAX,dword ptr [ESP + 0xfc]      ; 004c740f
    MOV ESI,dword ptr [EAX + 0x14ecb4]  ; 004c7416 | DAT_01fa5f38 | DAT_01fa5f3c
    PUSH ESI                            ; 004c741c
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004c741d
    CALL dword ptr [EAX + 0xd8]         ; 004c7423
    ADD ESP,0x4                         ; 004c7429
    TEST EAX,EAX                        ; 004c742c
    JZ 0x004c7794                       ; 004c742e
        ;   XREF to: 004c7794 (CONDITIONAL_JUMP)  ; LAB_004c7794
    PUSH 0x5879ef                       ; 004c7434 | = "CDraculaBride"
        ;   Label: LAB_004c7434
    PUSH ESI                            ; 004c7439
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c743a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c743f
    TEST EAX,EAX                        ; 004c7442
    JZ 0x004c7807                       ; 004c7444
        ;   XREF to: 004c7807 (CONDITIONAL_JUMP)  ; LAB_004c7807
    LEA EAX,[ESP + 0x60]                ; 004c744a
        ;   Label: LAB_004c744a
    PUSH EAX                            ; 004c744e
    MOV EBX,dword ptr [ESI + 0x14c]     ; 004c744f
    PUSH ESI                            ; 004c7455
    CALL dword ptr [EBX + 0x14]         ; 004c7456
    ADD ESP,0x8                         ; 004c7459
    LEA EAX,[ESP + 0x6c]                ; 004c745c
    PUSH EAX                            ; 004c7460
    LEA EAX,[ESP + 0x64]                ; 004c7461
    PUSH EAX                            ; 004c7465
    LEA EAX,[ESI + 0x30]                ; 004c7466
    PUSH EAX                            ; 004c7469
    LEA EAX,[ESI + 0x20]                ; 004c746a
    PUSH EAX                            ; 004c746d
    PUSH 0x1c74640                      ; 004c746e | DAT_01c74640
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0 ; 004c7473
        ;   XREF to: 00445fe0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0()
    ADD ESP,0x14                        ; 004c7478
    TEST EAX,EAX                        ; 004c747b
    JZ 0x004c75c3                       ; 004c747d
        ;   XREF to: 004c75c3 (CONDITIONAL_JUMP)  ; LAB_004c75c3
    PUSH ESI                            ; 004c7483
    PUSH 0x587a61                       ; 004c7484 | s_%s_in_volume_00587a60+1
    MOV ECX,dword ptr [0x005ad350]      ; 004c7489 | PTR_DAT_005ad350
    PUSH ECX                            ; 004c748f | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004c7490
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 004c7495
    MOV EBX,dword ptr [0x005be368]      ; 004c7498 | DAT_005be368
    PUSH EBX                            ; 004c749e | DAT_01e57284
    MOV dword ptr [ESP + 0x10c],ESI     ; 004c749f
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0 ; 004c74a6
        ;   XREF to: 005113e0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0()
    ADD ESP,0x4                         ; 004c74ab
    LEA EAX,[ESP + 0x48]                ; 004c74ae
    PUSH EAX                            ; 004c74b2
    MOV EBX,dword ptr [ESI + 0x14c]     ; 004c74b3
    PUSH ESI                            ; 004c74b9
    CALL dword ptr [EBX + 0x14]         ; 004c74ba
    MOV EBX,EAX                         ; 004c74bd
    ADD ESP,0x8                         ; 004c74bf
    ADD EAX,0xc                         ; 004c74c2
    MOV dword ptr [ESP + 0x10c],EAX     ; 004c74c5
    LEA EAX,[ESP + 0x84]                ; 004c74cc
    PUSH EAX                            ; 004c74d3
    CALL core_actor.cpp_CVector_ctor_FUN_0040e160 ; 004c74d4
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CVector_ctor_FUN_0040e160()
    ADD ESP,0x4                         ; 004c74d9
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004c74dc
    FLD float ptr [EBX]                 ; 004c74e3
    FADD float ptr [EAX]                ; 004c74e5
    FSTP float ptr [ESP + 0x84]         ; 004c74e7
    FLD float ptr [EBX + 0x4]           ; 004c74ee
    FADD float ptr [EAX + 0x4]          ; 004c74f1
    FSTP float ptr [ESP + 0x88]         ; 004c74f4
    FLD float ptr [EBX + 0x8]           ; 004c74fb
    FADD float ptr [EAX + 0x8]          ; 004c74fe
    LEA EAX,[ESP + 0xa8]                ; 004c7501
    PUSH EAX                            ; 004c7508
    FSTP float ptr [ESP + 0x90]         ; 004c7509
    CALL core_actor.cpp_CVector_ctor_FUN_0040e160 ; 004c7510
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CVector_ctor_FUN_0040e160()
    ADD ESP,0x4                         ; 004c7515
    FLD float ptr [0x00587a85]          ; 004c7518 | DAT_00587a85
    FLD float ptr [ESP + 0x84]          ; 004c751e
    FMUL ST1                            ; 004c7525
    FLD float ptr [ESP + 0x88]          ; 004c7527
    FMUL ST2                            ; 004c752e
    FLD float ptr [ESP + 0x8c]          ; 004c7530
    FMULP ST3                           ; 004c7537
    LEA EAX,[ESP + 0xa8]                ; 004c7539
    LEA EDI,[ESP + 0xcc]                ; 004c7540
    PUSH EAX                            ; 004c7547
    LEA EAX,[ESP + 0xa0]                ; 004c7548
    FXCH                                ; 004c754f
    FSTP float ptr [ESP + 0xac]         ; 004c7551
    PUSH EAX                            ; 004c7558
    FSTP float ptr [ESP + 0xb4]         ; 004c7559
    PUSH ESI                            ; 004c7560
    FSTP float ptr [ESP + 0xbc]         ; 004c7561
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004c7568
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004c756d
    XOR EAX,EAX                         ; 004c7570
    XOR EBX,EBX                         ; 004c7572
    MOV dword ptr [ESP + 0xf8],EAX      ; 004c7574
    LEA EAX,[ESP + 0x9c]                ; 004c757b
        ;   Label: LAB_004c757b
    PUSH EAX                            ; 004c7582
    PUSH EDI                            ; 004c7583
    MOV EDX,dword ptr [0x005be368]      ; 004c7584 | DAT_005be368
    PUSH EDX                            ; 004c758a | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 004c758b
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00()
    MOV EAX,[0x005be368]                ; 004c7590 | DAT_005be368
    MOV ECX,dword ptr [EAX + 0x14cd5c]  ; 004c7595 | DAT_01fa3fe0
    ADD ESP,0xc                         ; 004c759b
    TEST ECX,ECX                        ; 004c759e
    JNZ 0x004c7872                      ; 004c75a0
        ;   XREF to: 004c7872 (CONDITIONAL_JUMP)  ; LAB_004c7872
    MOV EDI,dword ptr [0x005be368]      ; 004c75a6 | DAT_005be368
        ;   Label: LAB_004c75a6
    PUSH EDI                            ; 004c75ac | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590 ; 004c75ad
        ;   XREF to: 00511590 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590()
    ADD ESP,0x4                         ; 004c75b2
    CMP dword ptr [ESP + 0xf8],0x0      ; 004c75b5
    JNZ 0x004c78a4                      ; 004c75bd
        ;   XREF to: 004c78a4 (CONDITIONAL_JUMP)  ; LAB_004c78a4
    MOV ESI,dword ptr [ESP + 0x100]     ; 004c75c3
        ;   Label: LAB_004c75c3
    MOV EBX,dword ptr [ESP + 0xfc]      ; 004c75ca
    INC ESI                             ; 004c75d1
    ADD EBX,0x4                         ; 004c75d2
    MOV dword ptr [ESP + 0x100],ESI     ; 004c75d5
    MOV dword ptr [ESP + 0xfc],EBX      ; 004c75dc
    JMP 0x004c73f7                      ; 004c75e3
        ;   XREF to: 004c73f7 (UNCONDITIONAL_JUMP)  ; LAB_004c73f7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c75e8
        ;   Label: LAB_004c75e8
    MOV EDX,dword ptr [EAX + 0x2fc]     ; 004c75eb
    PUSH EDX                            ; 004c75f1
    MOV ECX,dword ptr [0x005be368]      ; 004c75f2 | DAT_005be368
    PUSH ECX                            ; 004c75f8 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004c75f9
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 004c75fe
    JMP 0x004c7378                      ; 004c7601
        ;   XREF to: 004c7378 (UNCONDITIONAL_JUMP)  ; LAB_004c7378
    FLD1                                ; 004c7606
        ;   Label: LAB_004c7606
    FCOMP double ptr [ESP]              ; 004c7608
    FNSTSW AX                           ; 004c760b
    SAHF                                ; 004c760d
    JC 0x004c73cd                       ; 004c760e
        ;   XREF to: 004c73cd (CONDITIONAL_JUMP)  ; LAB_004c73cd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c7614
    FLD float ptr [EAX + 0x2e0]         ; 004c7617
    FMUL float ptr [ESP + 0x8]          ; 004c761d
    FSTP float ptr [EAX + 0x584]        ; 004c7621
    MOV EAX,[0x00765a98]                ; 004c7627 | DAT_00765a98
    PUSH EAX                            ; 004c762c
    MOV EAX,[0x005be368]                ; 004c762d | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 004c7632 | DAT_01fa3fe0
    PUSH EDX                            ; 004c7638
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c7639
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c763e
    MOV dword ptr [ESP + 0x104],EAX     ; 004c7641
    TEST EAX,EAX                        ; 004c7648
    JZ 0x004c7669                       ; 004c764a
        ;   XREF to: 004c7669 (CONDITIONAL_JUMP)  ; LAB_004c7669
    PUSH EAX                            ; 004c764c
    MOV EBX,dword ptr [EAX + 0x14c]     ; 004c764d
    CALL dword ptr [EBX + 0x104]        ; 004c7653
    ADD ESP,0x4                         ; 004c7659
    TEST EAX,EAX                        ; 004c765c
    JLE 0x004c7669                      ; 004c765e
        ;   XREF to: 004c7669 (CONDITIONAL_JUMP)  ; LAB_004c7669
    XOR ECX,ECX                         ; 004c7660
    MOV dword ptr [ESP + 0x104],ECX     ; 004c7662
    MOV EBX,dword ptr [0x01c78c78]      ; 004c7669 | DAT_01c78c78
        ;   Label: LAB_004c7669
    MOV EAX,[0x005be368]                ; 004c766f | DAT_005be368
    PUSH EBX                            ; 004c7674
    MOV ESI,dword ptr [EAX + 0x14cd5c]  ; 004c7675 | DAT_01fa3fe0
    PUSH ESI                            ; 004c767b
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c767c
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c7681
    MOV ESI,EAX                         ; 004c7684
    MOV EAX,[0x02dd10bc]                ; 004c7686 | DAT_02dd10bc
    PUSH EAX                            ; 004c768b
    MOV EAX,[0x005be368]                ; 004c768c | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 004c7691 | DAT_01fa3fe0
    PUSH EDX                            ; 004c7697
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c7698
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c769d
    MOV EBX,EAX                         ; 004c76a0
    MOV ECX,dword ptr [ESP + 0x104]     ; 004c76a2
    MOV dword ptr [ESP + 0xf4],EAX      ; 004c76a9
    TEST ECX,ECX                        ; 004c76b0
    JZ 0x004c770a                       ; 004c76b2
        ;   XREF to: 004c770a (CONDITIONAL_JUMP)  ; LAB_004c770a
    PUSH ECX                            ; 004c76b4
    MOV EAX,dword ptr [ECX + 0x14c]     ; 004c76b5
    CALL dword ptr [EAX + 0xd8]         ; 004c76bb
    ADD ESP,0x4                         ; 004c76c1
    TEST EAX,EAX                        ; 004c76c4
    JZ 0x004c73cd                       ; 004c76c6
        ;   XREF to: 004c73cd (CONDITIONAL_JUMP)  ; LAB_004c73cd
    TEST EDI,EDI                        ; 004c76cc
    JNZ 0x004c73cd                      ; 004c76ce
        ;   XREF to: 004c73cd (CONDITIONAL_JUMP)  ; LAB_004c73cd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c76d4
    MOV ESI,dword ptr [0x005be368]      ; 004c76d7 | DAT_005be368
    FLD float ptr [0x0059fd60]          ; 004c76dd | DAT_0059fd60
    PUSH ESI                            ; 004c76e3 | DAT_01e57284
    FSTP float ptr [EAX + 0x578]        ; 004c76e4
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590 ; 004c76ea
        ;   XREF to: 00511590 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590()
    ADD ESP,0x4                         ; 004c76ef
    MOV EDI,dword ptr [0x005be368]      ; 004c76f2 | DAT_005be368
    PUSH EDI                            ; 004c76f8 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004c76f9
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 004c76fe
    XOR EAX,EAX                         ; 004c7701
    MOV ESP,EBP                         ; 004c7703
    POP EBP                             ; 004c7705
    POP EDI                             ; 004c7706
    POP ESI                             ; 004c7707
    POP EBX                             ; 004c7708
    RET                                 ; 004c7709
    TEST ESI,ESI                        ; 004c770a
        ;   Label: LAB_004c770a
    JNZ 0x004c7775                      ; 004c770c
        ;   XREF to: 004c7775 (CONDITIONAL_JUMP)  ; LAB_004c7775
    TEST EAX,EAX                        ; 004c770e
    JZ 0x004c7785                       ; 004c7710
        ;   XREF to: 004c7785 (CONDITIONAL_JUMP)  ; LAB_004c7785
    PUSH EAX                            ; 004c7712
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580 ; 004c7713
        ;   XREF to: 00548580 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580()
    ADD ESP,0x4                         ; 004c7718
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c771b
    PUSH ESI                            ; 004c771e
    PUSH EBX                            ; 004c771f
    CALL FUN_005485a0                   ; 004c7720
        ;   XREF to: 005485a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005485a0()
    ADD ESP,0x8                         ; 004c7725
    TEST EAX,EAX                        ; 004c7728
    JZ 0x004c7759                       ; 004c772a
        ;   XREF to: 004c7759 (CONDITIONAL_JUMP)  ; LAB_004c7759
    PUSH ESI                            ; 004c772c
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004c772d
    CALL dword ptr [EAX + 0xe4]         ; 004c7733
    MOV dword ptr [ESP + 0x110],EAX     ; 004c7739
    FLD float ptr [ESP + 0x110]         ; 004c7740
    ADD ESP,0x4                         ; 004c7747
    SUB ESP,0x4                         ; 004c774a
    FSTP float ptr [ESP]                ; 004c774d
    PUSH EBX                            ; 004c7750
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0 ; 004c7751
        ;   XREF to: 005485e0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0()
    ADD ESP,0x8                         ; 004c7756
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004c7759
        ;   Label: LAB_004c7759
    PUSH EAX                            ; 004c7760
    MOV EDX,dword ptr [0x005be368]      ; 004c7761 | DAT_005be368
    PUSH EDX                            ; 004c7767 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004c7768
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 004c776d
    JMP 0x004c73cd                      ; 004c7770
        ;   XREF to: 004c73cd (UNCONDITIONAL_JUMP)  ; LAB_004c73cd
    PUSH ESI                            ; 004c7775
        ;   Label: LAB_004c7775
    MOV ECX,dword ptr [0x005be368]      ; 004c7776 | DAT_005be368
    PUSH ECX                            ; 004c777c | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004c777d
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 004c7782
    INC EDI                             ; 004c7785
        ;   Label: LAB_004c7785
    CMP EDI,0x1                         ; 004c7786
    JL 0x004c7389                       ; 004c7789
        ;   XREF to: 004c7389 (CONDITIONAL_JUMP)  ; LAB_004c7389
    JMP 0x004c73cd                      ; 004c778f
        ;   XREF to: 004c73cd (UNCONDITIONAL_JUMP)  ; LAB_004c73cd
    PUSH 0x587a19                       ; 004c7794 | = "CGhoul"
        ;   Label: LAB_004c7794
    PUSH ESI                            ; 004c7799
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c779a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c779f
    TEST EAX,EAX                        ; 004c77a2
    JNZ 0x004c744a                      ; 004c77a4
        ;   XREF to: 004c744a (CONDITIONAL_JUMP)  ; LAB_004c744a
    PUSH 0x587a20                       ; 004c77aa | = "CTVBat"
    PUSH ESI                            ; 004c77af
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c77b0
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c77b5
    TEST EAX,EAX                        ; 004c77b8
    JNZ 0x004c744a                      ; 004c77ba
        ;   XREF to: 004c744a (CONDITIONAL_JUMP)  ; LAB_004c744a
    PUSH 0x587a27                       ; 004c77c0 | = "CBatCreature"
    PUSH ESI                            ; 004c77c5
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c77c6
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c77cb
    TEST EAX,EAX                        ; 004c77ce
    JNZ 0x004c744a                      ; 004c77d0
        ;   XREF to: 004c744a (CONDITIONAL_JUMP)  ; LAB_004c744a
    PUSH 0x587a34                       ; 004c77d6 | = "CWerewolf"
    PUSH ESI                            ; 004c77db
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c77dc
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c77e1
    TEST EAX,EAX                        ; 004c77e4
    JNZ 0x004c744a                      ; 004c77e6
        ;   XREF to: 004c744a (CONDITIONAL_JUMP)  ; LAB_004c744a
    PUSH 0x587a3e                       ; 004c77ec | = "CSvetlana"
    PUSH ESI                            ; 004c77f1
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c77f2
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c77f7
    TEST EAX,EAX                        ; 004c77fa
    JNZ 0x004c744a                      ; 004c77fc
        ;   XREF to: 004c744a (CONDITIONAL_JUMP)  ; LAB_004c744a
    JMP 0x004c7434                      ; 004c7802
        ;   XREF to: 004c7434 (UNCONDITIONAL_JUMP)  ; LAB_004c7434
    PUSH 0x5879fd                       ; 004c7807 | = "CBatman"
        ;   Label: LAB_004c7807
    PUSH ESI                            ; 004c780c
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c780d
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c7812
    TEST EAX,EAX                        ; 004c7815
    JNZ 0x004c744a                      ; 004c7817
        ;   XREF to: 004c744a (CONDITIONAL_JUMP)  ; LAB_004c744a
    PUSH 0x587a05                       ; 004c781d | = "CBatCreature"
    PUSH ESI                            ; 004c7822
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c7823
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c7828
    TEST EAX,EAX                        ; 004c782b
    JNZ 0x004c744a                      ; 004c782d
        ;   XREF to: 004c744a (CONDITIONAL_JUMP)  ; LAB_004c744a
    PUSH 0x587a12                       ; 004c7833 | = "CBride"
    PUSH ESI                            ; 004c7838
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c7839
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c783e
    TEST EAX,EAX                        ; 004c7841
    JNZ 0x004c744a                      ; 004c7843
        ;   XREF to: 004c744a (CONDITIONAL_JUMP)  ; LAB_004c744a
    JMP 0x004c75c3                      ; 004c7849
        ;   XREF to: 004c75c3 (UNCONDITIONAL_JUMP)  ; LAB_004c75c3
    MOV EAX,[0x005be368]                ; 004c784e | DAT_005be368
        ;   Label: LAB_004c784e
    MOV ECX,dword ptr [EAX + 0x14cd5c]  ; 004c7853 | DAT_01fa3fe0
    PUSH ECX                            ; 004c7859
    PUSH EAX                            ; 004c785a | DAT_01e57284
    INC EBX                             ; 004c785b
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004c785c
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 004c7861
    CMP EBX,0x3                         ; 004c7864
    JL 0x004c757b                       ; 004c7867
        ;   XREF to: 004c757b (CONDITIONAL_JUMP)  ; LAB_004c757b
    JMP 0x004c75a6                      ; 004c786d
        ;   XREF to: 004c75a6 (UNCONDITIONAL_JUMP)  ; LAB_004c75a6
    MOV EDX,ECX                         ; 004c7872
        ;   Label: LAB_004c7872
    CMP EDX,dword ptr [ESP + 0x108]     ; 004c7874
    JNZ 0x004c788d                      ; 004c787b
        ;   XREF to: 004c788d (CONDITIONAL_JUMP)  ; LAB_004c788d
    MOV dword ptr [ESP + 0xf8],0x1      ; 004c787d
    JMP 0x004c75a6                      ; 004c7888
        ;   XREF to: 004c75a6 (UNCONDITIONAL_JUMP)  ; LAB_004c75a6
    PUSH 0x587a48                       ; 004c788d | = "CTrigger || CGlass"
        ;   Label: LAB_004c788d
    PUSH EDX                            ; 004c7892
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c7893
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c7898
    TEST EAX,EAX                        ; 004c789b
    JNZ 0x004c784e                      ; 004c789d
        ;   XREF to: 004c784e (CONDITIONAL_JUMP)  ; LAB_004c784e
    JMP 0x004c75a6                      ; 004c789f
        ;   XREF to: 004c75a6 (UNCONDITIONAL_JUMP)  ; LAB_004c75a6
    LEA EAX,[ESP + 0xc]                 ; 004c78a4
        ;   Label: LAB_004c78a4
    PUSH EAX                            ; 004c78a8
    XOR EBX,EBX                         ; 004c78a9
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004c78ab
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    MOV EDX,0x3dcccccd                  ; 004c78b0
    ADD ESP,0x4                         ; 004c78b5
    MOV ECX,0x6c                        ; 004c78b8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c78bd
    MOV dword ptr [ESP + 0x10],EDX      ; 004c78c0
    MOV dword ptr [ESP + 0x3c],ECX      ; 004c78c4
    MOV dword ptr [ESP + 0x14],EBX      ; 004c78c8
    MOV dword ptr [ESP + 0x20],EBX      ; 004c78cc
    MOV dword ptr [ESP + 0x1c],EBX      ; 004c78d0
    MOV dword ptr [ESP + 0x18],EBX      ; 004c78d4
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c78d8
    MOV dword ptr [ESP + 0x40],EAX      ; 004c78db
    PUSH ECX                            ; 004c78df
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004c78e0
    CALL dword ptr [EAX + 0x8c]         ; 004c78e6
    ADD ESP,0x4                         ; 004c78ec
    MOV dword ptr [ESP + 0x44],EAX      ; 004c78ef
    LEA EAX,[ESP + 0xc]                 ; 004c78f3
    PUSH EAX                            ; 004c78f7
    MOV EBX,dword ptr [ESI + 0x14c]     ; 004c78f8
    PUSH ESI                            ; 004c78fe
    CALL dword ptr [EBX + 0x100]        ; 004c78ff
    ADD ESP,0x8                         ; 004c7905
    JMP 0x004c75c3                      ; 004c7908
        ;   XREF to: 004c75c3 (UNCONDITIONAL_JUMP)  ; LAB_004c75c3
    PUSH EAX                            ; 004c790d | DAT_01e57284
        ;   Label: LAB_004c790d
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004c790e
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 004c7913
    LEA EAX,[ESP + 0x78]                ; 004c7916
    PUSH EAX                            ; 004c791a
    PUSH 0x587a6f                       ; 004c791b | = "cre-fire.wav"
    MOV EDI,dword ptr [EBP + 0x14]      ; 004c7920
    PUSH EDI                            ; 004c7923
    MOV EAX,[0x005bed68]                ; 004c7924 | DAT_005bed68
    PUSH EAX                            ; 004c7929
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 004c792a
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playActorSound_FUN_0052ea60()
    ADD ESP,0x10                        ; 004c792f
    MOV EDX,dword ptr [EDI + 0x574]     ; 004c7932
    PUSH dword ptr [0x0059fd68]         ; 004c7938 | DAT_0059fd68
    PUSH EDX                            ; 004c793e
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005270d0 ; 004c793f
        ;   XREF to: 005270d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxVolume_FUN_005270d0()
    ADD ESP,0x8                         ; 004c7944
    MOV EAX,dword ptr [EDI + 0x14c]     ; 004c7947
    PUSH EDI                            ; 004c794d
    CALL dword ptr [EAX + 0x8c]         ; 004c794e
    MOV EBX,dword ptr [0x01cae0e8]      ; 004c7954 | DAT_01cae0e8
    MOV ESI,dword ptr [EBX*0x4 + 0x1cae0d8] ; 004c795a
    ADD ESP,0x4                         ; 004c7961
    CMP EAX,ESI                         ; 004c7964
    JNZ 0x004c7977                      ; 004c7966
        ;   XREF to: 004c7977 (CONDITIONAL_JUMP)  ; LAB_004c7977
    MOV EDI,dword ptr [0x005b9284]      ; 004c7968 | DAT_005b9284
    PUSH EDI                            ; 004c796e
    CALL FUN_004940d0                   ; 004c796f
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 004c7974
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c7977
        ;   Label: LAB_004c7977
    MOV dword ptr [EAX + 0x580],0x1     ; 004c797a
    MOV dword ptr [EAX + 0x570],0x1     ; 004c7984
    MOV EAX,0x1                         ; 004c798e
    MOV ESP,EBP                         ; 004c7993
    POP EBP                             ; 004c7995
    POP EDI                             ; 004c7996
    POP ESI                             ; 004c7997
    POP EBX                             ; 004c7998
    RET                                 ; 004c7999

