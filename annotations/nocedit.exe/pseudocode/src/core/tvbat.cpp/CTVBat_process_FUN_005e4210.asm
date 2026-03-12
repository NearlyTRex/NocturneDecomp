; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_CTVBat_process_FUN_005e4210(CTVBat *this_ptr,float delta_time)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x17c]:4  local_17c
; undefined8       Stack[-0x178]:8  local_178
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; float            Stack[-0x168]:4  fStack_168
; SDamageInfo      Stack[-0x164]:60  SStack_164
; SCollisionInfo   Stack[-0x128]:40  local_128
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; float            Stack[-0xe8]:4  fStack_e8
; float            Stack[-0xe4]:4  fStack_e4
; float            Stack[-0xe0]:4  fStack_e0
; CVector3f        Stack[-0xdc]:12  local_dc
; float[3]         Stack[-0xd0]:12  local_d0
; float            Stack[-0xc4]:4  fStack_c4
; float            Stack[-0xc0]:4  fStack_c0
; float            Stack[-0xbc]:4  fStack_bc
; float            Stack[-0xb8]:4  local_b8
; float            Stack[-0xb4]:4  local_b4
; float            Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; CVector3f        Stack[-0xa0]:12  local_a0
; float            Stack[-0x94]:4  local_94
; float            Stack[-0x90]:4  local_90
; float            Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; float            Stack[-0x84]:4  local_84
; float            Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   TerminatedCString s_CVampireBoss_0065692e
;   TerminatedCString s_core_tvbat_cpp_0065693b
;   TerminatedCString s_CTVBat_process_can_t_fol_0065694d
;   float FLOAT_00656986 = 4
;   double DOUBLE_0065698a = 4
;   double DOUBLE_00656992 = 0.5
;   double DOUBLE_0065699a = 2
;   double DOUBLE_006569a2 = 0.333333333333333
;   double DOUBLE_006569aa = 35
;   double DOUBLE_006569b2 = 10
;   double DOUBLE_006569ba = 60
;   double DOUBLE_006569c2 = 0.700000000000000
;   double DOUBLE_006569ca = -32
;   float FLOAT_006569d2 = 2
;   float FLOAT_006569d6 = 0.8000000
;   ... and 14 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;   crt_math.c_atan2_FUN_006013b1
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e4210
        ;   Label: core_tvbat.cpp_CTVBat_process_FUN_005e4210
    PUSH ESI                            ; 005e4211
    PUSH EDI                            ; 005e4212
    PUSH EBP                            ; 005e4213
    MOV EBP,ESP                         ; 005e4214
    SUB ESP,0x164                       ; 005e4216
    AND ESP,0xfffffff8                  ; 005e421c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005e421f
    CMP dword ptr [EBX + 0xc064],0x0    ; 005e4222
    JZ 0x005e4276                       ; 005e4229
        ;   XREF to: 005e4276 (CONDITIONAL_JUMP)  ; LAB_005e4276
    CMP dword ptr [EBX + 0xc0f0],0x0    ; 005e422b
    JNZ 0x005e4276                      ; 005e4232
        ;   XREF to: 005e4276 (CONDITIONAL_JUMP)  ; LAB_005e4276
    XOR ESI,ESI                         ; 005e4234
    XOR EDI,EDI                         ; 005e4236
    MOV EAX,[0x006810c8]                ; 005e4238 | g_CDemonSetPtr
        ;   Label: LAB_005e4238
    CMP EDI,dword ptr [EAX + 0x150fdc]  ; 005e423d | g_CDemonSetInstance.enemy_count
    JGE 0x005e4276                      ; 005e4243
        ;   XREF to: 005e4276 (CONDITIONAL_JUMP)  ; LAB_005e4276
    PUSH 0x65692e                       ; 005e4245 | = "CVampireBoss"
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x150fe0] ; 005e424a | DAT_03265258 | DAT_0326525c
    PUSH ECX                            ; 005e4251
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005e4252
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005e4257
    TEST EAX,EAX                        ; 005e425a
    JNZ 0x005e4264                      ; 005e425c
        ;   XREF to: 005e4264 (CONDITIONAL_JUMP)  ; LAB_005e4264
    INC EDI                             ; 005e425e
    ADD ESI,0x4                         ; 005e425f
    JMP 0x005e4238                      ; 005e4262
        ;   XREF to: 005e4238 (UNCONDITIONAL_JUMP)  ; LAB_005e4238
    MOV EAX,[0x006810c8]                ; 005e4264 | g_CDemonSetPtr
        ;   Label: LAB_005e4264
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x150fe0] ; 005e4269 | DAT_03265258
    MOV dword ptr [EBX + 0xc0f0],EAX    ; 005e4270
    CMP dword ptr [EBX + 0xc064],0x0    ; 005e4276
        ;   Label: LAB_005e4276
    JZ 0x005e42b8                       ; 005e427d
        ;   XREF to: 005e42b8 (CONDITIONAL_JUMP)  ; LAB_005e42b8
    MOV EDI,dword ptr [EBX + 0xc0f0]    ; 005e427f
    TEST EDI,EDI                        ; 005e4285
    JZ 0x005e42b8                       ; 005e4287
        ;   XREF to: 005e42b8 (CONDITIONAL_JUMP)  ; LAB_005e42b8
    LEA EAX,[EBX + 0xc044]              ; 005e4289
    LEA ESI,[EDI + 0x20]                ; 005e428f
    CMP EAX,ESI                         ; 005e4292
    JZ 0x005e42a6                       ; 005e4294
        ;   XREF to: 005e42a6 (CONDITIONAL_JUMP)  ; LAB_005e42a6
    MOV EDX,dword ptr [ESI]             ; 005e4296
    MOV dword ptr [EAX],EDX             ; 005e4298
    MOV EDX,dword ptr [ESI + 0x4]       ; 005e429a
    MOV dword ptr [EAX + 0x4],EDX       ; 005e429d
    MOV EDX,dword ptr [ESI + 0x8]       ; 005e42a0
    MOV dword ptr [EAX + 0x8],EDX       ; 005e42a3
    FLD float ptr [EBX + 0xc048]        ; 005e42a6
        ;   Label: LAB_005e42a6
    FADD float ptr [0x00656986]         ; 005e42ac | FLOAT_00656986
    FSTP float ptr [EBX + 0xc048]       ; 005e42b2
    MOV EAX,dword ptr [EBX + 0xc078]    ; 005e42b8
        ;   Label: LAB_005e42b8
    CMP EAX,0x2                         ; 005e42be
    JZ 0x005e494c                       ; 005e42c1
        ;   XREF to: 005e494c (CONDITIONAL_JUMP)  ; LAB_005e494c
    CMP EAX,0x3                         ; 005e42c7
    JZ 0x005e494c                       ; 005e42ca
        ;   XREF to: 005e494c (CONDITIONAL_JUMP)  ; LAB_005e494c
    LEA ESI,[EBX + 0x20]                ; 005e42d0
    LEA EDX,[EBX + 0x28]                ; 005e42d3
    LEA EDI,[EBX + 0x24]                ; 005e42d6
    CMP EAX,0x1                         ; 005e42d9
    JZ 0x005e4953                       ; 005e42dc
        ;   XREF to: 005e4953 (CONDITIONAL_JUMP)  ; LAB_005e4953
    MOV EAX,dword ptr [ESI]             ; 005e42e2
    MOV dword ptr [ESP + 0xfc],EAX      ; 005e42e4
    MOV EAX,dword ptr [EDI]             ; 005e42eb
    MOV dword ptr [ESP + 0x100],EAX     ; 005e42ed
    MOV EAX,dword ptr [EDX]             ; 005e42f4
    MOV dword ptr [ESP + 0x104],EAX     ; 005e42f6
    CMP dword ptr [EBX + 0xc064],0x0    ; 005e42fd
    JZ 0x005e4bf8                       ; 005e4304
        ;   XREF to: 005e4bf8 (CONDITIONAL_JUMP)  ; LAB_005e4bf8
    MOV dword ptr [EBX + 0xbe3c],0x0    ; 005e430a
    LEA EAX,[ESP + 0x120]               ; 005e4314
        ;   Label: LAB_005e4314
    LEA ESI,[EBX + 0xc044]              ; 005e431b
    CMP EAX,ESI                         ; 005e4321
    JZ 0x005e4342                       ; 005e4323
        ;   XREF to: 005e4342 (CONDITIONAL_JUMP)  ; LAB_005e4342
    MOV EAX,dword ptr [ESI]             ; 005e4325
    MOV dword ptr [ESP + 0x120],EAX     ; 005e4327
    MOV EAX,dword ptr [ESI + 0x4]       ; 005e432e
    MOV dword ptr [ESP + 0x124],EAX     ; 005e4331
    MOV EAX,dword ptr [ESI + 0x8]       ; 005e4338
    MOV dword ptr [ESP + 0x128],EAX     ; 005e433b
    LEA ESI,[EBX + 0xc044]              ; 005e4342
        ;   Label: LAB_005e4342
    LEA EAX,[EBX + 0x20]                ; 005e4348
    FLD float ptr [ESI]                 ; 005e434b
    FSUB float ptr [EAX]                ; 005e434d
    FSTP float ptr [ESP + 0xc0]         ; 005e434f
    FLD float ptr [ESI + 0x4]           ; 005e4356
    FSUB float ptr [EAX + 0x4]          ; 005e4359
    LEA EDX,[ESP + 0xf0]                ; 005e435c
    FSTP float ptr [ESP + 0xc4]         ; 005e4363
    FLD float ptr [ESI + 0x8]           ; 005e436a
    FSUB float ptr [EAX + 0x8]          ; 005e436d
    LEA EAX,[ESP + 0xc0]                ; 005e4370
    FSTP float ptr [ESP + 0xc8]         ; 005e4377
    CMP EDX,EAX                         ; 005e437e
    JZ 0x005e43ac                       ; 005e4380
        ;   XREF to: 005e43ac (CONDITIONAL_JUMP)  ; LAB_005e43ac
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005e4382
    MOV dword ptr [ESP + 0xf0],EAX      ; 005e4389
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005e4390
    MOV dword ptr [ESP + 0xf4],EAX      ; 005e4397
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005e439e
    MOV dword ptr [ESP + 0xf8],EAX      ; 005e43a5
    FLD float ptr [ESP + 0xf4]          ; 005e43ac
        ;   Label: LAB_005e43ac
    FMUL ST0                            ; 005e43b3
    FLD float ptr [ESP + 0xf0]          ; 005e43b5
    FMUL ST0                            ; 005e43bc
    FADDP                               ; 005e43be
    FLD float ptr [ESP + 0xf8]          ; 005e43c0
    FMUL ST0                            ; 005e43c7
    FADDP                               ; 005e43c9
    FSQRT                               ; 005e43cb
    FCOMP float ptr [EBX + 0xc050]      ; 005e43cd
    FNSTSW AX                           ; 005e43d3
    SAHF                                ; 005e43d5
    JC 0x005e4c92                       ; 005e43d6
        ;   XREF to: 005e4c92 (CONDITIONAL_JUMP)  ; LAB_005e4c92
    LEA EAX,[ESP + 0x120]               ; 005e43dc
        ;   Label: LAB_005e43dc
    LEA ESI,[EBX + 0xc044]              ; 005e43e3
    CMP EAX,ESI                         ; 005e43e9
    JZ 0x005e440a                       ; 005e43eb
        ;   XREF to: 005e440a (CONDITIONAL_JUMP)  ; LAB_005e440a
    MOV EAX,dword ptr [ESI]             ; 005e43ed
    MOV dword ptr [ESP + 0x120],EAX     ; 005e43ef
    MOV EAX,dword ptr [ESI + 0x4]       ; 005e43f6
    MOV dword ptr [ESP + 0x124],EAX     ; 005e43f9
    MOV EAX,dword ptr [ESI + 0x8]       ; 005e4400
    MOV dword ptr [ESP + 0x128],EAX     ; 005e4403
    FLD float ptr [EBX + 0xc068]        ; 005e440a
        ;   Label: LAB_005e440a
    FLDZ                                ; 005e4410
    FCOMPP                              ; 005e4412
    FNSTSW AX                           ; 005e4414
    SAHF                                ; 005e4416
    JNC 0x005e44d5                      ; 005e4417
        ;   XREF to: 005e44d5 (CONDITIONAL_JUMP)  ; LAB_005e44d5
    FLD float ptr [EBX + 0xc068]        ; 005e441d
    FSUB float ptr [EBP + 0x18]         ; 005e4423
    FST float ptr [EBX + 0xc068]        ; 005e4426
    FLDZ                                ; 005e442c
    FCOMPP                              ; 005e442e
    FNSTSW AX                           ; 005e4430
    SAHF                                ; 005e4432
    JBE 0x005e443f                      ; 005e4433
        ;   XREF to: 005e443f (CONDITIONAL_JUMP)  ; LAB_005e443f
    MOV dword ptr [EBX + 0xc068],0x0    ; 005e4435
    MOV EAX,[0x00680a00]                ; 005e443f | g_CNetGamePtr
        ;   Label: LAB_005e443f
    CMP dword ptr [EAX],0x0             ; 005e4444 | g_CNetGameInstance
    JZ 0x005e446c                       ; 005e4447
        ;   XREF to: 005e446c (CONDITIONAL_JUMP)  ; LAB_005e446c
    MOV ECX,0x65693b                    ; 005e4449 | = "..\\core\\tvbat.cpp"
    MOV ESI,0x10a                       ; 005e444e
    PUSH 0x65694d                       ; 005e4453 | = "CTVBat::process - can't follow orders..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005e4458 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005e445e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e4464
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005e4469
    MOV EAX,[0x02db87d0]                ; 005e446c | g_LocalHeroIndex
        ;   Label: LAB_005e446c
    MOV ESI,dword ptr [EAX*0x4 + 0x2db87c0] ; 005e4471 | g_HeroActors
    LEA EAX,[ESP + 0x120]               ; 005e4478
    ADD ESI,0x20                        ; 005e447f
    CMP EAX,ESI                         ; 005e4482
    JZ 0x005e44a3                       ; 005e4484
        ;   XREF to: 005e44a3 (CONDITIONAL_JUMP)  ; LAB_005e44a3
    MOV EAX,dword ptr [ESI]             ; 005e4486
    MOV dword ptr [ESP + 0x120],EAX     ; 005e4488
    MOV EAX,dword ptr [ESI + 0x4]       ; 005e448f
    MOV dword ptr [ESP + 0x124],EAX     ; 005e4492
    MOV EAX,dword ptr [ESI + 0x8]       ; 005e4499
    MOV dword ptr [ESP + 0x128],EAX     ; 005e449c
    FLD float ptr [EBX + 0xc060]        ; 005e44a3
        ;   Label: LAB_005e44a3
    FADD double ptr [0x0065698a]        ; 005e44a9 | DOUBLE_0065698a
    MOV EAX,[0x02db87d0]                ; 005e44af | g_LocalHeroIndex
    FLD float ptr [ESP + 0x124]         ; 005e44b4
    FXCH                                ; 005e44bb
    FADD ST0,ST1                        ; 005e44bd
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005e44bf | g_HeroActors
    FSTP ST1                            ; 005e44c6
    FSTP float ptr [ESP + 0x124]        ; 005e44c8
    MOV dword ptr [EBX + 0xbe3c],EAX    ; 005e44cf
    FLD float ptr [ESP + 0x120]         ; 005e44d5
        ;   Label: LAB_005e44d5
    LEA EAX,[EBX + 0x20]                ; 005e44dc
    FLD float ptr [ESP + 0x124]         ; 005e44df
    FXCH                                ; 005e44e6
    FSUB float ptr [EAX]                ; 005e44e8
    FLD float ptr [ESP + 0x128]         ; 005e44ea
    FXCH                                ; 005e44f1
    FSTP float ptr [ESP + 0x108]        ; 005e44f3
    FXCH                                ; 005e44fa
    FSUB float ptr [EAX + 0x4]          ; 005e44fc
    LEA EDX,[ESP + 0x108]               ; 005e44ff
    FSTP float ptr [ESP + 0x10c]        ; 005e4506
    FSUB float ptr [EAX + 0x8]          ; 005e450d
    LEA EAX,[ESP + 0xf0]                ; 005e4510
    FSTP float ptr [ESP + 0x110]        ; 005e4517
    CMP EAX,EDX                         ; 005e451e
    JZ 0x005e454c                       ; 005e4520
        ;   XREF to: 005e454c (CONDITIONAL_JUMP)  ; LAB_005e454c
    MOV EAX,dword ptr [ESP + 0x108]     ; 005e4522
    MOV dword ptr [ESP + 0xf0],EAX      ; 005e4529
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005e4530
    MOV dword ptr [ESP + 0xf4],EAX      ; 005e4537
    MOV EAX,dword ptr [ESP + 0x110]     ; 005e453e
    MOV dword ptr [ESP + 0xf8],EAX      ; 005e4545
    FLD float ptr [ESP + 0xf8]          ; 005e454c
        ;   Label: LAB_005e454c
    FLD float ptr [ESP + 0xf0]          ; 005e4553
    CALL crt_math.c_atan2_FUN_006013b1  ; 005e455a
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FLD float ptr [ESP + 0xf8]          ; 005e455f
    FMUL ST0                            ; 005e4566
    FLD float ptr [ESP + 0xf0]          ; 005e4568
    FMUL ST0                            ; 005e456f
    FADDP                               ; 005e4571
    FSQRT                               ; 005e4573
    FLD float ptr [ESP + 0xf4]          ; 005e4575
    FXCH                                ; 005e457c
    FST float ptr [ESP + 0x8]           ; 005e457e
    FXCH                                ; 005e4582
    FXCH                                ; 005e4584
    FPATAN                              ; 005e4586
    NOP                                 ; 005e4588
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 005e4589
    FXCH                                ; 005e458f
    FSTP float ptr [ESP + 0x15c]        ; 005e4591
    FCHS                                ; 005e4598
    FSTP float ptr [ESP + 0x158]        ; 005e459a
    TEST EDI,EDI                        ; 005e45a1
    JZ 0x005e46d8                       ; 005e45a3
        ;   XREF to: 005e46d8 (CONDITIONAL_JUMP)  ; LAB_005e46d8
    CMP dword ptr [EBX + 0xc064],0x0    ; 005e45a9
    JZ 0x005e46d8                       ; 005e45b0
        ;   XREF to: 005e46d8 (CONDITIONAL_JUMP)  ; LAB_005e46d8
    LEA EAX,[ESP + 0x50]                ; 005e45b6
    PUSH EAX                            ; 005e45ba
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 005e45bb
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005e45c0
    LEA ESI,[ESP + 0x50]                ; 005e45c3
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005e45c7
    PUSH ESI                            ; 005e45cd
    MOV EDX,dword ptr [EAX + 0x154]     ; 005e45ce
    PUSH EAX                            ; 005e45d4
    CALL dword ptr [EDX + 0x34]         ; 005e45d5
    LEA EAX,[EBX + 0x20]                ; 005e45d8
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005e45db
    FLD float ptr [EAX]                 ; 005e45e1
    FSUB float ptr [ESI + 0x20]         ; 005e45e3
    ADD ESP,0x8                         ; 005e45e6
    FSTP float ptr [ESP + 0x90]         ; 005e45e9
    FLD float ptr [EAX + 0x4]           ; 005e45f0
    FSUB float ptr [ESI + 0x24]         ; 005e45f3
    LEA EDX,[ESP + 0xf0]                ; 005e45f6
    FSTP float ptr [ESP + 0x94]         ; 005e45fd
    FLD float ptr [EAX + 0x8]           ; 005e4604
    FSUB float ptr [ESI + 0x28]         ; 005e4607
    LEA EAX,[ESP + 0x90]                ; 005e460a
    FSTP float ptr [ESP + 0x98]         ; 005e4611
    CMP EDX,EAX                         ; 005e4618
    JZ 0x005e4646                       ; 005e461a
        ;   XREF to: 005e4646 (CONDITIONAL_JUMP)  ; LAB_005e4646
    MOV EAX,dword ptr [ESP + 0x90]      ; 005e461c
    MOV dword ptr [ESP + 0xf0],EAX      ; 005e4623
    MOV EAX,dword ptr [ESP + 0x94]      ; 005e462a
    MOV dword ptr [ESP + 0xf4],EAX      ; 005e4631
    MOV EAX,dword ptr [ESP + 0x98]      ; 005e4638
    MOV dword ptr [ESP + 0xf8],EAX      ; 005e463f
    FLD float ptr [ESP + 0xf4]          ; 005e4646
        ;   Label: LAB_005e4646
    FCOMP float ptr [ESP + 0x64]        ; 005e464d
    FNSTSW AX                           ; 005e4651
    SAHF                                ; 005e4653
    JC 0x005e46d8                       ; 005e4654
        ;   XREF to: 005e46d8 (CONDITIONAL_JUMP)  ; LAB_005e46d8
    FLD float ptr [ESP + 0xf4]          ; 005e465a
    FCOMP float ptr [ESP + 0x68]        ; 005e4661
    FNSTSW AX                           ; 005e4665
    SAHF                                ; 005e4667
    JA 0x005e46d8                       ; 005e4668
        ;   XREF to: 005e46d8 (CONDITIONAL_JUMP)  ; LAB_005e46d8
    FLD float ptr [ESP + 0x8]           ; 005e466a
    FCOMP double ptr [0x0065699a]       ; 005e466e | DOUBLE_0065699a
    FNSTSW AX                           ; 005e4674
    SAHF                                ; 005e4676
    JNC 0x005e46d8                      ; 005e4677
        ;   XREF to: 005e46d8 (CONDITIONAL_JUMP)  ; LAB_005e46d8
    LEA EAX,[ESP + 0x14]                ; 005e4679
    PUSH EAX                            ; 005e467d
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005e467e
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EDX,0x3f800000                  ; 005e4683
    ADD ESP,0x4                         ; 005e4688
    LEA ESI,[ESP + 0x14]                ; 005e468b
    MOV dword ptr [ESP + 0x18],EDX      ; 005e468f
    MOV dword ptr [ESP + 0x48],EBX      ; 005e4693
    MOV dword ptr [ESP + 0x4c],EBX      ; 005e4697
    PUSH ESI                            ; 005e469b
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005e469c
    PUSH EAX                            ; 005e46a2
    MOV EDX,dword ptr [EAX + 0x154]     ; 005e46a3
    CALL dword ptr [EDX + 0x11c]        ; 005e46a9
    ADD ESP,0x8                         ; 005e46af
    FLD float ptr [ESP + 0x18]          ; 005e46b2
    FLDZ                                ; 005e46b6
    FCOMPP                              ; 005e46b8
    FNSTSW AX                           ; 005e46ba
    SAHF                                ; 005e46bc
    JNC 0x005e46d8                      ; 005e46bd
        ;   XREF to: 005e46d8 (CONDITIONAL_JUMP)  ; LAB_005e46d8
    PUSH 0x0                            ; 005e46bf
    PUSH 0x3                            ; 005e46c1
    PUSH 0x0                            ; 005e46c3
    LEA EAX,[EBX + 0x20]                ; 005e46c5
    PUSH EAX                            ; 005e46c8
    MOV ECX,dword ptr [0x0067b9a0]      ; 005e46c9 | g_CGorePtr | g_CGoreInstance
    PUSH ECX                            ; 005e46cf | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 005e46d0
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005e46d5
    FLD float ptr [EBX + 0x30]          ; 005e46d8
        ;   Label: LAB_005e46d8
    FLD ST0                             ; 005e46db
    FSIN                                ; 005e46dd
    FLD float ptr [EBX + 0x34]          ; 005e46df
    FLD ST0                             ; 005e46e2
    FSIN                                ; 005e46e4
    FXCH ST3                            ; 005e46e6
    FCOS                                ; 005e46e8
    FXCH                                ; 005e46ea
    FCOS                                ; 005e46ec
    FXCH ST3                            ; 005e46ee
    FMUL ST1                            ; 005e46f0
    FXCH ST3                            ; 005e46f2
    FMULP                               ; 005e46f4
    FLD float ptr [ESP + 0x15c]         ; 005e46f6
    FSUB float ptr [EBX + 0x34]         ; 005e46fd
    FXCH ST2                            ; 005e4700
    FCHS                                ; 005e4702
    FSTP float ptr [ESP + 0x148]        ; 005e4704
    FXCH ST2                            ; 005e470b
    FSTP float ptr [ESP + 0x144]        ; 005e470d
    FXCH                                ; 005e4714
    FSTP float ptr [ESP + 0x13c]        ; 005e4716
    SUB ESP,0x4                         ; 005e471d
    FSTP float ptr [ESP]                ; 005e4720
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005e4723
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x164],EAX     ; 005e4728
    FLD float ptr [ESP + 0x164]         ; 005e472f
    ADD ESP,0x4                         ; 005e4736
    FST float ptr [ESP + 0x15c]         ; 005e4739
    FMUL float ptr [EBP + 0x18]         ; 005e4740
    FMUL float ptr [EBX + 0xc058]       ; 005e4743
    FLD float ptr [ESP + 0x158]         ; 005e4749
    FSUB float ptr [EBX + 0x30]         ; 005e4750
    FXCH                                ; 005e4753
    FADD float ptr [EBX + 0x34]         ; 005e4755
    SUB ESP,0x4                         ; 005e4758
    FSTP float ptr [EBX + 0x34]         ; 005e475b
    FSTP float ptr [ESP]                ; 005e475e
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005e4761
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x164],EAX     ; 005e4766
    FLD float ptr [ESP + 0x164]         ; 005e476d
    ADD ESP,0x4                         ; 005e4774
    FLD float ptr [EBX + 0xc05c]        ; 005e4777
    FMUL float ptr [ESP + 0x144]        ; 005e477d
    FLD float ptr [EBX + 0xc05c]        ; 005e4784
    FMUL float ptr [ESP + 0x148]        ; 005e478a
    FLD float ptr [ESP + 0x144]         ; 005e4791
    FMUL float ptr [EBX + 0xc05c]       ; 005e4798
    FLD float ptr [ESP + 0x148]         ; 005e479e
    FMUL float ptr [EBX + 0xc05c]       ; 005e47a5
    FLD float ptr [ESP + 0x13c]         ; 005e47ab
    FMUL float ptr [EBX + 0xc05c]       ; 005e47b2
    FXCH ST5                            ; 005e47b8
    FST float ptr [ESP + 0x158]         ; 005e47ba
    FMUL float ptr [EBP + 0x18]         ; 005e47c1
    FLD float ptr [ESP + 0x15c]         ; 005e47c4
    FCHS                                ; 005e47cb
    FMUL double ptr [0x006569a2]        ; 005e47cd | DOUBLE_006569a2
    FXCH ST3                            ; 005e47d3
    FMUL float ptr [EBP + 0x18]         ; 005e47d5
    FXCH ST2                            ; 005e47d8
    FMUL float ptr [EBP + 0x18]         ; 005e47da
    FXCH ST6                            ; 005e47dd
    FMUL float ptr [EBP + 0x18]         ; 005e47df
    FXCH                                ; 005e47e2
    FMUL float ptr [EBX + 0xc058]       ; 005e47e4
    FXCH ST5                            ; 005e47ea
    FSTP float ptr [EBX + 0xc06c]       ; 005e47ec
    FLD float ptr [EBX + 0xc05c]        ; 005e47f2
    FMUL float ptr [ESP + 0x13c]        ; 005e47f8
    LEA EAX,[EBX + 0x20]                ; 005e47ff
    FXCH ST4                            ; 005e4802
    FSTP float ptr [EBX + 0xc070]       ; 005e4804
    FXCH ST3                            ; 005e480a
    FSTP float ptr [EBX + 0xc074]       ; 005e480c
    FXCH                                ; 005e4812
    FSTP float ptr [EBX + 0x38]         ; 005e4814
    FADD float ptr [EBX + 0x20]         ; 005e4817
    FXCH ST3                            ; 005e481a
    FADD float ptr [EBX + 0x24]         ; 005e481c
    FXCH                                ; 005e481f
    FADD float ptr [EBX + 0x28]         ; 005e4821
    FXCH ST2                            ; 005e4824
    FADD float ptr [EBX + 0x30]         ; 005e4826
    FXCH ST3                            ; 005e4829
    FSTP float ptr [EBX + 0x20]         ; 005e482b
    FSTP float ptr [EBX + 0x24]         ; 005e482e
    FSTP float ptr [EBX + 0x28]         ; 005e4831
    FSTP float ptr [EBX + 0x30]         ; 005e4834
    FLD float ptr [EAX]                 ; 005e4837
    FSUB float ptr [ESP + 0xfc]         ; 005e4839
    FSTP float ptr [ESP + 0xb4]         ; 005e4840
    FLD float ptr [EAX + 0x4]           ; 005e4847
    FSUB float ptr [ESP + 0x100]        ; 005e484a
    FST float ptr [ESP + 0xb8]          ; 005e4851
    FMUL double ptr [0x0065698a]        ; 005e4858 | DOUBLE_0065698a
    FDIV float ptr [EBP + 0x18]         ; 005e485e
    FLD float ptr [EAX + 0x8]           ; 005e4861
    FSUB float ptr [ESP + 0x104]        ; 005e4864
    FXCH                                ; 005e486b
    FADD double ptr [0x006569aa]        ; 005e486d | DOUBLE_006569aa
    FXCH                                ; 005e4873
    FSTP float ptr [ESP + 0xbc]         ; 005e4875
    FST float ptr [ESP + 0x10]          ; 005e487c
    FCOMP double ptr [0x006569b2]       ; 005e4880 | DOUBLE_006569b2
    FNSTSW AX                           ; 005e4886
    SAHF                                ; 005e4888
    JNC 0x005e4893                      ; 005e4889
        ;   XREF to: 005e4893 (CONDITIONAL_JUMP)  ; LAB_005e4893
    MOV dword ptr [ESP + 0x10],0x41200000 ; 005e488b
    FLD float ptr [ESP + 0x10]          ; 005e4893
        ;   Label: LAB_005e4893
    FCOMP double ptr [0x006569ba]       ; 005e4897 | DOUBLE_006569ba
    FNSTSW AX                           ; 005e489d
    SAHF                                ; 005e489f
    JBE 0x005e48aa                      ; 005e48a0
        ;   XREF to: 005e48aa (CONDITIONAL_JUMP)  ; LAB_005e48aa
    MOV dword ptr [ESP + 0x10],0x42700000 ; 005e48a2
    FLD float ptr [ESP + 0x10]          ; 005e48aa
        ;   Label: LAB_005e48aa
    FSUB float ptr [EBX + 0xc040]       ; 005e48ae
    FMUL double ptr [0x006569c2]        ; 005e48b4 | DOUBLE_006569c2
    FLD float ptr [EBX + 0xc040]        ; 005e48ba
    FXCH                                ; 005e48c0
    FADD ST0,ST1                        ; 005e48c2
    FLD float ptr [EBP + 0x18]          ; 005e48c4
    FXCH                                ; 005e48c7
    FSTP ST2                            ; 005e48c9
    FXCH                                ; 005e48cb
    FSTP float ptr [EBX + 0xc040]       ; 005e48cd
    FMUL float ptr [EBX + 0xc040]       ; 005e48d3
    FMUL float ptr [EBX + 0xc03c]       ; 005e48d9
    LEA EAX,[EBX + 0xbec0]              ; 005e48df
    FADD float ptr [EBX + 0xbebc]       ; 005e48e5
    PUSH EAX                            ; 005e48eb
    FSTP float ptr [EBX + 0xbebc]       ; 005e48ec
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e48f2
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e48f7
    MOV EDX,dword ptr [EAX + 0x100]     ; 005e48fa
    MOV dword ptr [ESP + 0x160],EDX     ; 005e4900
    FILD dword ptr [ESP + 0x160]        ; 005e4907
    FCOMP float ptr [EBX + 0xbebc]      ; 005e490e
    FNSTSW AX                           ; 005e4914
    SAHF                                ; 005e4916
    JA 0x005e4cb1                       ; 005e4917
        ;   XREF to: 005e4cb1 (CONDITIONAL_JUMP)  ; LAB_005e4cb1
    MOV dword ptr [EBX + 0xbebc],0x0    ; 005e491d
    CMP byte ptr [EBX + 0xc07c],0x0     ; 005e4927
        ;   Label: LAB_005e4927
    JZ 0x005e494c                       ; 005e492e
        ;   XREF to: 005e494c (CONDITIONAL_JUMP)  ; LAB_005e494c
    FLD float ptr [EBX + 0xc0ec]        ; 005e4930
    FSUB float ptr [EBP + 0x18]         ; 005e4936
    FST float ptr [EBX + 0xc0ec]        ; 005e4939
    FLDZ                                ; 005e493f
    FCOMPP                              ; 005e4941
    FNSTSW AX                           ; 005e4943
    SAHF                                ; 005e4945
    JNC 0x005e4cdc                      ; 005e4946
        ;   XREF to: 005e4cdc (CONDITIONAL_JUMP)  ; LAB_005e4cdc
    MOV ESP,EBP                         ; 005e494c
        ;   Label: LAB_005e494c
    POP EBP                             ; 005e494e
    POP EDI                             ; 005e494f
    POP ESI                             ; 005e4950
    POP EBX                             ; 005e4951
    RET                                 ; 005e4952
    MOV EAX,dword ptr [ESI]             ; 005e4953
        ;   Label: LAB_005e4953
    FLD float ptr [EBP + 0x18]          ; 005e4955
    FLD ST0                             ; 005e4958
    MOV dword ptr [ESP + 0x9c],EAX      ; 005e495a
    FMUL double ptr [0x006569ca]        ; 005e4961 | DOUBLE_006569ca
    MOV EAX,dword ptr [EDI]             ; 005e4967
    MOV dword ptr [ESP + 0xa0],EAX      ; 005e4969
    MOV EAX,dword ptr [EDX]             ; 005e4970
    MOV dword ptr [ESP + 0xa4],EAX      ; 005e4972
    FLD float ptr [EBX + 0xc070]        ; 005e4979
    FXCH                                ; 005e497f
    FADD ST0,ST1                        ; 005e4981
    LEA EDI,[EBX + 0xc06c]              ; 005e4983
    FSTP ST1                            ; 005e4989
    FSTP float ptr [EBX + 0xc070]       ; 005e498b
    FLD float ptr [EDI]                 ; 005e4991
    FMUL ST1                            ; 005e4993
    FSTP float ptr [ESP + 0xe4]         ; 005e4995
    FLD float ptr [EDI + 0x4]           ; 005e499c
    FMUL ST1                            ; 005e499f
    FSTP float ptr [ESP + 0xe8]         ; 005e49a1
    FLD float ptr [EDI + 0x8]           ; 005e49a8
    FMUL ST1                            ; 005e49ab
    PUSH 0x0                            ; 005e49ad
    FSTP float ptr [ESP + 0xf0]         ; 005e49af
    FLD float ptr [ESI]                 ; 005e49b6
    FADD float ptr [ESP + 0xe8]         ; 005e49b8
    FLD float ptr [ESI + 0x4]           ; 005e49bf
    FXCH                                ; 005e49c2
    FSTP float ptr [ESI]                ; 005e49c4
    FADD float ptr [ESP + 0xec]         ; 005e49c6
    FLD float ptr [ESI + 0x8]           ; 005e49cd
    FXCH                                ; 005e49d0
    FSTP float ptr [ESI + 0x4]          ; 005e49d2
    FADD float ptr [ESP + 0xf0]         ; 005e49d5
    LEA EAX,[ESP + 0xdc]                ; 005e49dc
    FSTP float ptr [ESI + 0x8]          ; 005e49e3
    FMUL float ptr [EBX + 0xc058]       ; 005e49e6
    PUSH EAX                            ; 005e49ec
    LEA EAX,[ESP + 0xa4]                ; 005e49ed
    PUSH ESI                            ; 005e49f4
    FMUL float ptr [0x006569d2]         ; 005e49f5 | FLOAT_006569d2
    PUSH EAX                            ; 005e49fb
    FADD float ptr [EBX + 0x38]         ; 005e49fc
    PUSH 0x3277d14                      ; 005e49ff | g_CDemonRaytraceInstance
    FSTP float ptr [EBX + 0x38]         ; 005e4a04
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 ; 005e4a07
        ;   XREF to: 00495b70 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, ...)
    MOV dword ptr [ESP + 0x174],EAX     ; 005e4a0c
    FLD float ptr [ESP + 0x174]         ; 005e4a13
    ADD ESP,0x14                        ; 005e4a1a
    FLDZ                                ; 005e4a1d
    FXCH                                ; 005e4a1f
    FST float ptr [ESP + 0xc]           ; 005e4a21
    FSTP double ptr [ESP]               ; 005e4a25
    FCOMP double ptr [ESP]              ; 005e4a28
    FNSTSW AX                           ; 005e4a2b
    SAHF                                ; 005e4a2d
    JA 0x005e4b40                       ; 005e4a2e
        ;   XREF to: 005e4b40 (CONDITIONAL_JUMP)  ; LAB_005e4b40
    FLD1                                ; 005e4a34
    FCOMP double ptr [ESP]              ; 005e4a36
    FNSTSW AX                           ; 005e4a39
    SAHF                                ; 005e4a3b
    JBE 0x005e4b40                      ; 005e4a3c
        ;   XREF to: 005e4b40 (CONDITIONAL_JUMP)  ; LAB_005e4b40
    FLD float ptr [ESI]                 ; 005e4a42
    FSUB float ptr [ESP + 0x9c]         ; 005e4a44
    FST float ptr [ESP + 0x78]          ; 005e4a4b
    FLD float ptr [ESI + 0x4]           ; 005e4a4f
    FSUB float ptr [ESP + 0xa0]         ; 005e4a52
    FXCH                                ; 005e4a59
    FLD float ptr [ESP + 0xc]           ; 005e4a5b
    FXCH                                ; 005e4a5f
    FMUL ST1                            ; 005e4a61
    FXCH ST2                            ; 005e4a63
    FST float ptr [ESP + 0x7c]          ; 005e4a65
    FMUL ST1                            ; 005e4a69
    FLD float ptr [ESI + 0x8]           ; 005e4a6b
    FXCH ST3                            ; 005e4a6e
    FST float ptr [ESP + 0xcc]          ; 005e4a70
    FXCH ST3                            ; 005e4a77
    FSUB float ptr [ESP + 0xa4]         ; 005e4a79
    FXCH ST3                            ; 005e4a80
    FLD float ptr [0x006569d6]          ; 005e4a82 | FLOAT_006569d6
    FXCH                                ; 005e4a88
    FMUL ST1                            ; 005e4a8a
    FXCH ST4                            ; 005e4a8c
    FST float ptr [ESP + 0x80]          ; 005e4a8e
    FMULP ST3                           ; 005e4a95
    FXCH                                ; 005e4a97
    FST float ptr [ESP + 0xd0]          ; 005e4a99
    FMUL ST1                            ; 005e4aa0
    FXCH ST2                            ; 005e4aa2
    FST float ptr [ESP + 0xd4]          ; 005e4aa4
    FMULP                               ; 005e4aab
    FLD float ptr [ESP + 0x9c]          ; 005e4aad
    FLD float ptr [ESP + 0xa0]          ; 005e4ab4
    FLD float ptr [ESP + 0xa4]          ; 005e4abb
    FXCH ST5                            ; 005e4ac2
    FSTP float ptr [ESP + 0x84]         ; 005e4ac4
    FXCH                                ; 005e4acb
    FADD float ptr [ESP + 0x84]         ; 005e4acd
    FXCH ST3                            ; 005e4ad4
    FSTP float ptr [ESP + 0x88]         ; 005e4ad6
    FXCH ST2                            ; 005e4add
    FSTP float ptr [ESP + 0x114]        ; 005e4adf
    MOV EAX,dword ptr [ESP + 0x114]     ; 005e4ae6
    FXCH                                ; 005e4aed
    FADD float ptr [ESP + 0x88]         ; 005e4aef
    FXCH                                ; 005e4af6
    FSTP float ptr [ESP + 0x8c]         ; 005e4af8
    FXCH                                ; 005e4aff
    FADD float ptr [ESP + 0x8c]         ; 005e4b01
    FXCH                                ; 005e4b08
    FSTP float ptr [ESP + 0x118]        ; 005e4b0a
    FSTP float ptr [ESP + 0x11c]        ; 005e4b11
    MOV dword ptr [ESI],EAX             ; 005e4b18
    MOV EAX,dword ptr [ESP + 0x118]     ; 005e4b1a
    MOV dword ptr [ESI + 0x4],EAX       ; 005e4b21
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005e4b24
    MOV dword ptr [ESI + 0x8],EAX       ; 005e4b2b
    MOV dword ptr [EDI + 0x8],0x0       ; 005e4b2e
    MOV EAX,dword ptr [EDI + 0x8]       ; 005e4b35
    MOV dword ptr [EDI + 0x4],EAX       ; 005e4b38
    MOV EAX,dword ptr [EDI + 0x4]       ; 005e4b3b
    MOV dword ptr [EDI],EAX             ; 005e4b3e
    FLD float ptr [ESP + 0x9c]          ; 005e4b40
        ;   Label: LAB_005e4b40
    LEA EAX,[EBX + 0x20]                ; 005e4b47
    FLD float ptr [ESP + 0xa0]          ; 005e4b4a
    FXCH                                ; 005e4b51
    FSUB float ptr [EAX]                ; 005e4b53
    FLD float ptr [ESP + 0xa4]          ; 005e4b55
    FXCH                                ; 005e4b5c
    FSTP float ptr [ESP + 0xa8]         ; 005e4b5e
    FXCH                                ; 005e4b65
    FSUB float ptr [EAX + 0x4]          ; 005e4b67
    LEA EDX,[ESP + 0xf0]                ; 005e4b6a
    FSTP float ptr [ESP + 0xac]         ; 005e4b71
    FSUB float ptr [EAX + 0x8]          ; 005e4b78
    LEA EAX,[ESP + 0xa8]                ; 005e4b7b
    FSTP float ptr [ESP + 0xb0]         ; 005e4b82
    CMP EDX,EAX                         ; 005e4b89
    JZ 0x005e4bb7                       ; 005e4b8b
        ;   XREF to: 005e4bb7 (CONDITIONAL_JUMP)  ; LAB_005e4bb7
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005e4b8d
    MOV dword ptr [ESP + 0xf0],EAX      ; 005e4b94
    MOV EAX,dword ptr [ESP + 0xac]      ; 005e4b9b
    MOV dword ptr [ESP + 0xf4],EAX      ; 005e4ba2
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005e4ba9
    MOV dword ptr [ESP + 0xf8],EAX      ; 005e4bb0
    FLD float ptr [ESP + 0xf4]          ; 005e4bb7
        ;   Label: LAB_005e4bb7
    FMUL ST0                            ; 005e4bbe
    FLD float ptr [ESP + 0xf0]          ; 005e4bc0
    FMUL ST0                            ; 005e4bc7
    FADDP                               ; 005e4bc9
    FLD float ptr [ESP + 0xf8]          ; 005e4bcb
    FMUL ST0                            ; 005e4bd2
    FADDP                               ; 005e4bd4
    FSQRT                               ; 005e4bd6
    FCOMP double ptr [0x006569da]       ; 005e4bd8 | DOUBLE_006569da
    FNSTSW AX                           ; 005e4bde
    SAHF                                ; 005e4be0
    JNC 0x005e494c                      ; 005e4be1
        ;   XREF to: 005e494c (CONDITIONAL_JUMP)  ; LAB_005e494c
    MOV dword ptr [EBX + 0xc078],0x2    ; 005e4be7
    MOV ESP,EBP                         ; 005e4bf1
    POP EBP                             ; 005e4bf3
    POP EDI                             ; 005e4bf4
    POP ESI                             ; 005e4bf5
    POP EBX                             ; 005e4bf6
    RET                                 ; 005e4bf7
    MOV EAX,[0x02db87d0]                ; 005e4bf8 | g_LocalHeroIndex
        ;   Label: LAB_005e4bf8
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005e4bfd | g_HeroActors
    MOV dword ptr [EBX + 0xbe3c],EAX    ; 005e4c04
    TEST EAX,EAX                        ; 005e4c0a
    JZ 0x005e4314                       ; 005e4c0c
        ;   XREF to: 005e4314 (CONDITIONAL_JUMP)  ; LAB_005e4314
    LEA ESI,[EAX + 0x20]                ; 005e4c12
    LEA EAX,[ESP + 0x120]               ; 005e4c15
    CMP EAX,ESI                         ; 005e4c1c
    JNZ 0x005e4c73                      ; 005e4c1e
        ;   XREF to: 005e4c73 (CONDITIONAL_JUMP)  ; LAB_005e4c73
    FLD float ptr [EBX + 0xc060]        ; 005e4c20
        ;   Label: LAB_005e4c20
    FADD double ptr [0x0065698a]        ; 005e4c26 | DOUBLE_0065698a
    FADD float ptr [ESP + 0x124]        ; 005e4c2c
    FSTP float ptr [ESP + 0x124]        ; 005e4c33
    MOV EAX,dword ptr [EBX + 0x6c]      ; 005e4c3a
    MOV EDX,EAX                         ; 005e4c3d
    MOV ESI,0x8                         ; 005e4c3f
    SAR EDX,0x1f                        ; 005e4c44
    IDIV ESI                            ; 005e4c47
    SUB EDX,0x4                         ; 005e4c49
    MOV dword ptr [ESP + 0x160],EDX     ; 005e4c4c
    FILD dword ptr [ESP + 0x160]        ; 005e4c53
    FMUL double ptr [0x00656992]        ; 005e4c5a | DOUBLE_00656992
    FADD float ptr [ESP + 0x124]        ; 005e4c60
    FSTP float ptr [ESP + 0x124]        ; 005e4c67
    JMP 0x005e4342                      ; 005e4c6e
        ;   XREF to: 005e4342 (UNCONDITIONAL_JUMP)  ; LAB_005e4342
    MOV EAX,dword ptr [ESI]             ; 005e4c73
        ;   Label: LAB_005e4c73
    MOV dword ptr [ESP + 0x120],EAX     ; 005e4c75
    MOV EAX,dword ptr [ESI + 0x4]       ; 005e4c7c
    MOV dword ptr [ESP + 0x124],EAX     ; 005e4c7f
    MOV EAX,dword ptr [ESI + 0x8]       ; 005e4c86
    MOV dword ptr [ESP + 0x128],EAX     ; 005e4c89
    JMP 0x005e4c20                      ; 005e4c90
        ;   XREF to: 005e4c20 (UNCONDITIONAL_JUMP)  ; LAB_005e4c20
    FLD float ptr [ESP + 0xf4]          ; 005e4c92
        ;   Label: LAB_005e4c92
    FABS                                ; 005e4c99
    FLD float ptr [EBX + 0xc054]        ; 005e4c9b
    FCOMPP                              ; 005e4ca1
    FNSTSW AX                           ; 005e4ca3
    SAHF                                ; 005e4ca5
    JBE 0x005e43dc                      ; 005e4ca6
        ;   XREF to: 005e43dc (CONDITIONAL_JUMP)  ; LAB_005e43dc
    JMP 0x005e440a                      ; 005e4cac
        ;   XREF to: 005e440a (UNCONDITIONAL_JUMP)  ; LAB_005e440a
    FLDZ                                ; 005e4cb1
        ;   Label: LAB_005e4cb1
    FCOMP float ptr [EBX + 0xbebc]      ; 005e4cb3
    FNSTSW AX                           ; 005e4cb9
    SAHF                                ; 005e4cbb
    JBE 0x005e4927                      ; 005e4cbc
        ;   XREF to: 005e4927 (CONDITIONAL_JUMP)  ; LAB_005e4927
    DEC EDX                             ; 005e4cc2
    MOV dword ptr [ESP + 0x160],EDX     ; 005e4cc3
    FILD dword ptr [ESP + 0x160]        ; 005e4cca
    FSTP float ptr [EBX + 0xbebc]       ; 005e4cd1
    JMP 0x005e4927                      ; 005e4cd7
        ;   XREF to: 005e4927 (UNCONDITIONAL_JUMP)  ; LAB_005e4927
    MOV EAX,dword ptr [EBX + 0xc0e8]    ; 005e4cdc
        ;   Label: LAB_005e4cdc
    PUSH EAX                            ; 005e4ce2
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005e4ce3
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005e4ce8
    TEST EAX,EAX                        ; 005e4ceb
    JNZ 0x005e4d36                      ; 005e4ced
        ;   XREF to: 005e4d36 (CONDITIONAL_JUMP)  ; LAB_005e4d36
    PUSH 0x40490000                     ; 005e4cef
    PUSH EAX                            ; 005e4cf4
    SUB ESP,0x8                         ; 005e4cf5
    FLD float ptr [EBX + 0x28]          ; 005e4cf8
    FSTP double ptr [ESP]               ; 005e4cfb
    SUB ESP,0x8                         ; 005e4cfe
    FLD float ptr [EBX + 0x24]          ; 005e4d01
    FSTP double ptr [ESP]               ; 005e4d04
    SUB ESP,0x8                         ; 005e4d07
    FLD float ptr [EBX + 0x20]          ; 005e4d0a
    FSTP double ptr [ESP]               ; 005e4d0d
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290 ; 005e4d10
        ;   XREF to: 005aa290 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290(double pos_x, double pos_y, double pos_z, double radius)
    ADD ESP,0x20                        ; 005e4d15
    TEST EAX,EAX                        ; 005e4d18
    JZ 0x005e4d36                       ; 005e4d1a
        ;   XREF to: 005e4d36 (CONDITIONAL_JUMP)  ; LAB_005e4d36
    LEA EDX,[EBX + 0xc07c]              ; 005e4d1c
    PUSH EDX                            ; 005e4d22
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e4d23
    PUSH EBX                            ; 005e4d29
    CALL dword ptr [EAX + 0x28]         ; 005e4d2a
    ADD ESP,0x8                         ; 005e4d2d
    MOV dword ptr [EBX + 0xc0e8],EAX    ; 005e4d30
    PUSH dword ptr [EBX + 0xc0e4]       ; 005e4d36
        ;   Label: LAB_005e4d36
    PUSH dword ptr [EBX + 0xc0e0]       ; 005e4d3c
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005e4d42
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

