; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004de330(CGhoul *this_ptr,float delta_time)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004de2b0 = 004de7e1
;   undefined1* switchdataD_004de2e8 = 004df318
;   TerminatedCString s_ghoul_eat_wav_005e3bad
;   TerminatedCString s_ghoul_dig_wav_1_3_005e3bbd
;   TerminatedCString s_ghoul_eat_wav_1_3_005e3bd2
;   TerminatedCString s_ghoul_eat_wav_1_3_005e3be7
;   undefined4 s_ghoul_eat_wav_1_3_005e3be7+1
;   TerminatedCString s_ghoul_dig_wav_1_3_005e3bfc
;   undefined4 s_ghoul_dig_wav_1_3_005e3bfc+1
;   undefined4 s_ghoul_dig_wav_1_3_005e3bfc+2
;   undefined4 s_ghoul_dig_wav_1_3_005e3bfc+3
;   TerminatedCString s_s_confused_while_walking_005e3c11
;   TerminatedCString s_ghoul_alert_wav_005e3c3b
;   TerminatedCString s_ghoul_scream_wav_005e3c4d
;   TerminatedCString s_gh_hits_wav_005e3c62
;   ... and 49 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00430b60
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00430960
;   ... and 27 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de330
        ;   Label: core_ghoul.cpp_CGhoul_process_FUN_004de330
    PUSH ESI                            ; 004de331
    PUSH EDI                            ; 004de332
    PUSH EBP                            ; 004de333
    MOV EBP,ESP                         ; 004de334
    SUB ESP,0x4cc                       ; 004de336
    SUB EBP,0x7a                        ; 004de33c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004de33f
    PUSH dword ptr [EBP + 0x92]         ; 004de345
    PUSH EBX                            ; 004de34b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 004de34c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004de351
    TEST EAX,EAX                        ; 004de354
    JZ 0x004de7d9                       ; 004de356
        ;   XREF to: 004de7d9 (CONDITIONAL_JUMP)  ; LAB_004de7d9
    LEA EAX,[EBX + 0x249c]              ; 004de35c
    MOV dword ptr [EAX + 0x8],0x0       ; 004de362
    FLD float ptr [EBP + 0x92]          ; 004de369
    MOV EDX,dword ptr [EAX + 0x8]       ; 004de36f
    MOV dword ptr [EAX + 0x4],EDX       ; 004de372
    MOV EDX,dword ptr [EAX + 0x4]       ; 004de375
    MOV dword ptr [EAX],EDX             ; 004de378
    FMUL float ptr [EBX + 0xc1d0]       ; 004de37a
    LEA EAX,[EBX + 0x158]               ; 004de380
    FSTP float ptr [EBP + 0x1a]         ; 004de386
    MOV dword ptr [EBP + 0x72],EAX      ; 004de389
    FLD float ptr [EBP + 0x1a]          ; 004de38c
        ;   Label: caseD_e
    FLDZ                                ; 004de38f
    FCOMPP                              ; 004de391
    FNSTSW AX                           ; 004de393
    SAHF                                ; 004de395
    JC 0x004dedaa                       ; 004de396
        ;   XREF to: 004dedaa (CONDITIONAL_JUMP)  ; LAB_004dedaa
    PUSH 0x1                            ; 004de39c
    MOV EDX,dword ptr [EBP + 0x72]      ; 004de39e
    PUSH EDX                            ; 004de3a1
    CALL core_motion.cpp_FUN_00524a40   ; 004de3a2
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [EBP + 0x76],EAX      ; 004de3a7
    FLD float ptr [EBP + 0x76]          ; 004de3aa
    FMUL double ptr [0x005e3ca1]        ; 004de3ad | DAT_005e3ca1
    FLD float ptr [EBP + 0x92]          ; 004de3b3
    FLD ST0                             ; 004de3b9
    FMUL float ptr [EBX + 0xc1d0]       ; 004de3bb
    FXCH                                ; 004de3c1
    FSTP double ptr [EBP + -0x16]       ; 004de3c3
    FXCH                                ; 004de3c6
    FMUL double ptr [EBP + -0x16]       ; 004de3c8
    ADD ESP,0x8                         ; 004de3cb
    FMUL float ptr [EBX + 0xc1d0]       ; 004de3ce
    SUB ESP,0x4                         ; 004de3d4
    FSTP float ptr [EBX + 0x2524]       ; 004de3d7
    FSTP float ptr [ESP]                ; 004de3dd
    PUSH EBX                            ; 004de3e0
    CALL core_charactr.cpp_FUN_00435320 ; 004de3e1
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 004de3e6
    MOV ECX,dword ptr [EBP + 0x72]      ; 004de3e9
    PUSH ECX                            ; 004de3ec
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004de3ed
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004de3f2
    ADD ESP,0x4                         ; 004de3f5
    MOV dword ptr [EBP + 0x56],EAX      ; 004de3f8
    CMP EAX,0x11                        ; 004de3fb
    JNZ 0x004de431                      ; 004de3fe
        ;   XREF to: 004de431 (CONDITIONAL_JUMP)  ; LAB_004de431
    FLD float ptr [EBX + 0xc1d0]        ; 004de400
    FLD double ptr [EBP + -0x16]        ; 004de406
    FMUL double ptr [0x005e3ca9]        ; 004de409 | DAT_005e3ca9
    FLD float ptr [EBX + 0x2528]        ; 004de40f
    FLD ST0                             ; 004de415
    FMUL double ptr [0x005e3cb1]        ; 004de417 | DAT_005e3cb1
    FXCH ST2                            ; 004de41d
    FMULP ST3                           ; 004de41f
    FXCH                                ; 004de421
    FSTP ST1                            ; 004de423
    FSTP float ptr [EBX + 0x2528]       ; 004de425
    FSTP float ptr [EBX + 0x2524]       ; 004de42b
    PUSH dword ptr [EBP + 0x92]         ; 004de431
        ;   Label: LAB_004de431
    PUSH EBX                            ; 004de437
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 004de438
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004de43d
    TEST EAX,EAX                        ; 004de440
    JZ 0x004dff4c                       ; 004de442
        ;   XREF to: 004dff4c (CONDITIONAL_JUMP)  ; LAB_004dff4c
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004de448
    CMP EAX,0x2                         ; 004de44e
    JNC 0x004dedff                      ; 004de451
        ;   XREF to: 004dedff (CONDITIONAL_JUMP)  ; LAB_004dedff
    CMP EAX,0x1                         ; 004de457
    JNZ 0x004dee06                      ; 004de45a
        ;   XREF to: 004dee06 (CONDITIONAL_JUMP)  ; LAB_004dee06
    PUSH EAX                            ; 004de460
    PUSH EAX                            ; 004de461
    LEA EAX,[EBX + 0x158]               ; 004de462
        ;   Label: LAB_004de462
    PUSH EAX                            ; 004de468
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004de469
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004de46e
        ;   Label: LAB_004de46e
    LEA EAX,[EBX + 0x249c]              ; 004de471
    MOV dword ptr [EAX + 0x8],0x0       ; 004de477
    MOV EDX,dword ptr [EAX + 0x8]       ; 004de47e
    MOV dword ptr [EAX + 0x4],EDX       ; 004de481
    MOV EDX,dword ptr [EAX + 0x4]       ; 004de484
    MOV dword ptr [EAX],EDX             ; 004de487
    FLD float ptr [EBX + 0xc1e4]        ; 004de489
        ;   Label: LAB_004de489
    FLDZ                                ; 004de48f
    FCOMPP                              ; 004de491
    FNSTSW AX                           ; 004de493
    SAHF                                ; 004de495
    JNC 0x004de4aa                      ; 004de496
        ;   XREF to: 004de4aa (CONDITIONAL_JUMP)  ; LAB_004de4aa
    FLD float ptr [EBX + 0xc1e4]        ; 004de498
    FSUB float ptr [EBP + 0x92]         ; 004de49e
    FSTP float ptr [EBX + 0xc1e4]       ; 004de4a4
    PUSH EBX                            ; 004de4aa
        ;   Label: LAB_004de4aa
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 004de4ab
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004de4b0
    PUSH EBX                            ; 004de4b3
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 004de4b4
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004de4b9
    TEST EAX,EAX                        ; 004de4bc
    JZ 0x004de607                       ; 004de4be
        ;   XREF to: 004de607 (CONDITIONAL_JUMP)  ; LAB_004de607
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004de4c4
    TEST EDX,EDX                        ; 004de4ca
    JZ 0x004de4fa                       ; 004de4cc
        ;   XREF to: 004de4fa (CONDITIONAL_JUMP)  ; LAB_004de4fa
    MOV EAX,EDX                         ; 004de4ce
    PUSH EAX                            ; 004de4d0
    MOV EDX,dword ptr [EDX + 0x154]     ; 004de4d1
    CALL dword ptr [EDX + 0xf4]         ; 004de4d7
    ADD ESP,0x4                         ; 004de4dd
    CMP EAX,EBX                         ; 004de4e0
    JNZ 0x004de4fa                      ; 004de4e2
        ;   XREF to: 004de4fa (CONDITIONAL_JUMP)  ; LAB_004de4fa
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 004de4e4
    PUSH ECX                            ; 004de4ea
    MOV ESI,dword ptr [0x00622c18]      ; 004de4eb | g_CDemonSetPtr
    PUSH ESI                            ; 004de4f1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004de4f2
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004de4f7
    PUSH dword ptr [EBP + 0x92]         ; 004de4fa
        ;   Label: LAB_004de4fa
    PUSH EBX                            ; 004de500
    LEA ESI,[EBX + 0x2518]              ; 004de501
    CALL core_charactr.cpp_FUN_0042d700 ; 004de507
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 004de50c
    FMUL float ptr [EBP + 0x92]         ; 004de50e
    FLD float ptr [ESI + 0x4]           ; 004de514
    FMUL float ptr [EBP + 0x92]         ; 004de517
    FLD float ptr [ESI + 0x8]           ; 004de51d
    FMUL float ptr [EBP + 0x92]         ; 004de520
    LEA EDI,[EBP + 0xfffffeae]          ; 004de526
    LEA ESI,[EBP + 0xffffff56]          ; 004de52c
    FXCH ST2                            ; 004de532
    FSTP float ptr [EBP + 0xffffff56]   ; 004de534
    FSTP float ptr [EBP + 0xffffff5a]   ; 004de53a
    FSTP float ptr [EBP + 0xffffff5e]   ; 004de540
    MOVSD ES:EDI,ESI                    ; 004de546
    MOVSD ES:EDI,ESI                    ; 004de547
    MOVSD ES:EDI,ESI                    ; 004de548
    LEA EAX,[EBX + 0x250c]              ; 004de549
    FLD float ptr [EBP + 0xfffffeae]    ; 004de54f
    FLD float ptr [EBP + 0xfffffeb2]    ; 004de555
    FLD float ptr [EBP + 0xfffffeb6]    ; 004de55b
    LEA EDI,[EBP + -0x62]               ; 004de561
    LEA ESI,[EBP + 0xfffffeba]          ; 004de564
    FXCH ST2                            ; 004de56a
    FADD float ptr [EAX]                ; 004de56c
    FXCH                                ; 004de56e
    FADD float ptr [EAX + 0x4]          ; 004de570
    FXCH ST2                            ; 004de573
    FADD float ptr [EAX + 0x8]          ; 004de575
    FXCH                                ; 004de578
    FSTP float ptr [EBP + 0xfffffeba]   ; 004de57a
    FXCH                                ; 004de580
    FSTP float ptr [EBP + 0xfffffebe]   ; 004de582
    FSTP float ptr [EBP + 0xfffffec2]   ; 004de588
    MOVSD ES:EDI,ESI                    ; 004de58e
    MOVSD ES:EDI,ESI                    ; 004de58f
    MOVSD ES:EDI,ESI                    ; 004de590
    LEA EDX,[EBX + 0x249c]              ; 004de591
    FLD float ptr [EBP + -0x62]         ; 004de597
    FLD float ptr [EBP + -0x5e]         ; 004de59a
    FLD float ptr [EBP + -0x5a]         ; 004de59d
    LEA EDI,[EBP + 0xfffffe5a]          ; 004de5a0
    LEA ESI,[EBP + 0xfffffec6]          ; 004de5a6
    FXCH ST2                            ; 004de5ac
    FADD float ptr [EDX]                ; 004de5ae
    FXCH                                ; 004de5b0
    FADD float ptr [EDX + 0x4]          ; 004de5b2
    FXCH ST2                            ; 004de5b5
    FADD float ptr [EDX + 0x8]          ; 004de5b7
    FXCH                                ; 004de5ba
    FSTP float ptr [EBP + 0xfffffec6]   ; 004de5bc
    FXCH                                ; 004de5c2
    FSTP float ptr [EBP + 0xfffffeca]   ; 004de5c4
    FSTP float ptr [EBP + 0xfffffece]   ; 004de5ca
    MOVSD ES:EDI,ESI                    ; 004de5d0
    MOVSD ES:EDI,ESI                    ; 004de5d1
    MOVSD ES:EDI,ESI                    ; 004de5d2
    MOV dword ptr [EAX + 0x8],0x0       ; 004de5d3
    ADD ESP,0x8                         ; 004de5da
    MOV ECX,dword ptr [EAX + 0x8]       ; 004de5dd
    MOV dword ptr [EAX + 0x4],ECX       ; 004de5e0
    MOV ECX,dword ptr [EAX + 0x4]       ; 004de5e3
    MOV dword ptr [EAX],ECX             ; 004de5e6
    MOV dword ptr [EDX + 0x8],0x0       ; 004de5e8
    LEA EAX,[EBP + 0xfffffe5a]          ; 004de5ef
    FLD float ptr [EDX + 0x8]           ; 004de5f5
    PUSH EAX                            ; 004de5f8
    FST float ptr [EDX + 0x4]           ; 004de5f9
    PUSH EBX                            ; 004de5fc
    FSTP float ptr [EDX]                ; 004de5fd
    CALL core_charactr.cpp_FUN_0042d750 ; 004de5ff
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004de604
    LEA ESI,[EBX + 0x158]               ; 004de607
        ;   Label: LAB_004de607
    PUSH ESI                            ; 004de60d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004de60e
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    FLDZ                                ; 004de613
    FLD float ptr [EBX + 0xc27c]        ; 004de615
    ADD ESP,0x4                         ; 004de61b
    FSTP double ptr [EBP + -0x2e]       ; 004de61e
    FCOMP double ptr [EBP + -0x2e]      ; 004de621
    FNSTSW AX                           ; 004de624
    SAHF                                ; 004de626
    JNC 0x004de6b9                      ; 004de627
        ;   XREF to: 004de6b9 (CONDITIONAL_JUMP)  ; LAB_004de6b9
    FLD1                                ; 004de62d
    FSUB double ptr [EBP + -0x2e]       ; 004de62f
    SUB ESP,0x4                         ; 004de632
    FSTP float ptr [ESP]                ; 004de635
    MOV EDI,dword ptr [EBX + 0xc280]    ; 004de638
    PUSH EDI                            ; 004de63e
    PUSH ESI                            ; 004de63f
    CALL core_motion.cpp_FUN_00525110   ; 004de640
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00525110()
    FLD float ptr [EBX + 0xc27c]        ; 004de645
    FLD1                                ; 004de64b
    FSUBRP                              ; 004de64d
    FST float ptr [EBP + 0x22]          ; 004de64f
    FMUL float ptr [EBP + 0x22]         ; 004de652
    FMUL float ptr [EBP + 0x22]         ; 004de655
    MOV dword ptr [EBP + 0x76],EAX      ; 004de658
    ADD ESP,0xc                         ; 004de65b
    MOV EDX,dword ptr [EBX + 0xc280]    ; 004de65e
    FLD float ptr [EBP + 0x76]          ; 004de664
    PUSH 0x567360                       ; 004de667
    MOV EAX,[0x01cd0dbc]                ; 004de66c | DAT_01cd0dbc
    FLD1                                ; 004de671
    FSUBRP ST2,ST0                      ; 004de673
    PUSH EAX                            ; 004de675
    FXCH                                ; 004de676
    FSTP float ptr [EBP + 0x22]         ; 004de678
    PUSH dword ptr [EBP + 0x22]         ; 004de67b
    FSTP float ptr [EBP + 0x1e]         ; 004de67e
    PUSH dword ptr [EBP + 0x1e]         ; 004de681
    PUSH EDX                            ; 004de684
    PUSH ESI                            ; 004de685
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100 ; 004de686
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [EBP + 0x92]          ; 004de68b
    FDIV float ptr [0x006012cc]         ; 004de691 | DAT_006012cc
    FSUBR float ptr [EBX + 0xc27c]      ; 004de697
    ADD ESP,0x18                        ; 004de69d
    FST float ptr [EBX + 0xc27c]        ; 004de6a0
    FLDZ                                ; 004de6a6
    FCOMPP                              ; 004de6a8
    FNSTSW AX                           ; 004de6aa
    SAHF                                ; 004de6ac
    JBE 0x004de6b9                      ; 004de6ad
        ;   XREF to: 004de6b9 (CONDITIONAL_JUMP)  ; LAB_004de6b9
    MOV dword ptr [EBX + 0xc27c],0x0    ; 004de6af
    PUSH dword ptr [EBP + 0x92]         ; 004de6b9
        ;   Label: LAB_004de6b9
    PUSH EBX                            ; 004de6bf
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 004de6c0
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    FLD float ptr [EBX + 0x2508]        ; 004de6c5
    FABS                                ; 004de6cb
    ADD ESP,0x8                         ; 004de6cd
    FCOMP double ptr [0x005e3d29]       ; 004de6d0 | DAT_005e3d29
    FNSTSW AX                           ; 004de6d6
    SAHF                                ; 004de6d8
    JBE 0x004dff75                      ; 004de6d9
        ;   XREF to: 004dff75 (CONDITIONAL_JUMP)  ; LAB_004dff75
    MOV EDI,dword ptr [EBX + 0xc268]    ; 004de6df
        ;   Label: LAB_004de6df
    PUSH EDI                            ; 004de6e5
    MOV EAX,[0x006236b8]                ; 004de6e6 | DAT_006236b8
    PUSH EAX                            ; 004de6eb
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 004de6ec
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004de6f1
    TEST EAX,EAX                        ; 004de6f4
    JZ 0x004dffb9                       ; 004de6f6
        ;   XREF to: 004dffb9 (CONDITIONAL_JUMP)  ; LAB_004dffb9
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 004de6fc
        ;   Label: LAB_004de6fc
    JZ 0x004dfff8                       ; 004de703
        ;   XREF to: 004dfff8 (CONDITIONAL_JUMP)  ; LAB_004dfff8
    CMP dword ptr [EBX + 0xc2c8],0x0    ; 004de709
        ;   Label: LAB_004de709
    JZ 0x004de7c8                       ; 004de710
        ;   XREF to: 004de7c8 (CONDITIONAL_JUMP)  ; LAB_004de7c8
    CMP dword ptr [EBP + 0x56],0x11     ; 004de716
    JNZ 0x004de7c8                      ; 004de71a
        ;   XREF to: 004de7c8 (CONDITIONAL_JUMP)  ; LAB_004de7c8
    LEA EDX,[EBX + 0x20]                ; 004de720
    LEA EDI,[EBP + 0xffffff26]          ; 004de723
    LEA ESI,[EBP + 0xfffffe12]          ; 004de729
    FLD float ptr [EDX]                 ; 004de72f
    FLD float ptr [EDX + 0x4]           ; 004de731
    LEA EAX,[EBX + 0xc2d8]              ; 004de734
    FLD float ptr [EDX + 0x8]           ; 004de73a
    FXCH ST2                            ; 004de73d
    FSUB float ptr [EAX]                ; 004de73f
    FXCH                                ; 004de741
    FSUB float ptr [EAX + 0x4]          ; 004de743
    FXCH ST2                            ; 004de746
    FSUB float ptr [EAX + 0x8]          ; 004de748
    FXCH                                ; 004de74b
    FSTP float ptr [EBP + 0xfffffe12]   ; 004de74d
    FXCH                                ; 004de753
    FSTP float ptr [EBP + 0xfffffe16]   ; 004de755
    FSTP float ptr [EBP + 0xfffffe1a]   ; 004de75b
    MOVSD ES:EDI,ESI                    ; 004de761
    MOVSD ES:EDI,ESI                    ; 004de762
    MOVSD ES:EDI,ESI                    ; 004de763
    FLD float ptr [EBP + 0xffffff26]    ; 004de764
    FMUL ST0                            ; 004de76a
    FLD float ptr [EBP + 0xffffff2e]    ; 004de76c
    FMUL ST0                            ; 004de772
    FADDP                               ; 004de774
    FSQRT                               ; 004de776
    XOR EDI,EDI                         ; 004de778
    FLD float ptr [EBP + 0x92]          ; 004de77a
    FMUL double ptr [0x005e3cc9]        ; 004de780 | DAT_005e3cc9
    MOV dword ptr [EBP + 0xffffff2a],EDI ; 004de786
    FCOMPP                              ; 004de78c
    FNSTSW AX                           ; 004de78e
    SAHF                                ; 004de790
    JBE 0x004e00d4                      ; 004de791
        ;   XREF to: 004e00d4 (CONDITIONAL_JUMP)  ; LAB_004e00d4
    FLD float ptr [EBX + 0xc2d4]        ; 004de797
    FSUB float ptr [EBP + 0x92]         ; 004de79d
    FST float ptr [EBX + 0xc2d4]        ; 004de7a3
    FLDZ                                ; 004de7a9
    FCOMPP                              ; 004de7ab
    FNSTSW AX                           ; 004de7ad
    SAHF                                ; 004de7af
    JBE 0x004de7c8                      ; 004de7b0
        ;   XREF to: 004de7c8 (CONDITIONAL_JUMP)  ; LAB_004de7c8
    MOV dword ptr [EBX + 0xc2cc],0x41f00000 ; 004de7b2
    MOV dword ptr [EBX + 0xc2c8],EDI    ; 004de7bc
    MOV dword ptr [EBX + 0xc2d0],EDI    ; 004de7c2
    LEA EAX,[EBX + 0xc2d8]              ; 004de7c8
        ;   Label: LAB_004de7c8
    ADD EBX,0x20                        ; 004de7ce
    CMP EAX,EBX                         ; 004de7d1
    JNZ 0x004e00e3                      ; 004de7d3
        ;   XREF to: 004e00e3 (CONDITIONAL_JUMP)  ; LAB_004e00e3
    LEA ESP,[EBP + 0x7a]                ; 004de7d9
        ;   Label: LAB_004de7d9
    POP EBP                             ; 004de7dc
    POP EDI                             ; 004de7dd
    POP ESI                             ; 004de7de
    POP EBX                             ; 004de7df
    RET                                 ; 004de7e0
    MOV ESI,0x1                         ; 004de7e1
        ;   Label: caseD_5
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 004de7e6
    MOV dword ptr [EBP + 0x6e],ESI      ; 004de7ec
    TEST EDI,EDI                        ; 004de7ef
    JNZ 0x004de808                      ; 004de7f1
        ;   XREF to: 004de808 (CONDITIONAL_JUMP)  ; LAB_004de808
    PUSH 0x1                            ; 004de7f3
        ;   Label: LAB_004de7f3
    PUSH 0x1                            ; 004de7f5
    MOV EDX,dword ptr [EBP + 0x72]      ; 004de7f7
    PUSH EDX                            ; 004de7fa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004de7fb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004de800
    JMP 0x004de38c                      ; 004de803
        ;   XREF to: 004de38c (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EDI                            ; 004de808
        ;   Label: LAB_004de808
    MOV ESI,dword ptr [EDI + 0x154]     ; 004de809
    CALL dword ptr [ESI + 0x10c]        ; 004de80f
    ADD ESP,0x4                         ; 004de815
    TEST EAX,EAX                        ; 004de818
    JNZ 0x004de7f3                      ; 004de81a
        ;   XREF to: 004de7f3 (CONDITIONAL_JUMP)  ; LAB_004de7f3
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004de81c
    PUSH EAX                            ; 004de822
    MOV ESI,dword ptr [EAX + 0x154]     ; 004de823
    CALL dword ptr [ESI + 0xf4]         ; 004de829
    ADD ESP,0x4                         ; 004de82f
    TEST EAX,EAX                        ; 004de832
    JNZ 0x004de7f3                      ; 004de834
        ;   XREF to: 004de7f3 (CONDITIONAL_JUMP)  ; LAB_004de7f3
    PUSH 0x0                            ; 004de836
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004de838
    PUSH EBX                            ; 004de83e
    MOV ESI,dword ptr [EAX + 0x154]     ; 004de83f
    PUSH EAX                            ; 004de845
    CALL dword ptr [ESI + 0xe8]         ; 004de846
    ADD ESP,0xc                         ; 004de84c
    TEST EAX,EAX                        ; 004de84f
    JZ 0x004de7f3                       ; 004de851
        ;   XREF to: 004de7f3 (CONDITIONAL_JUMP)  ; LAB_004de7f3
    MOV EAX,[0x006012b8]                ; 004de853 | DAT_006012b8
    MOV dword ptr [EBP + 0x26],EAX      ; 004de858
    XOR EAX,EAX                         ; 004de85b
    MOV dword ptr [EBP + 0xfffffd46],EAX ; 004de85d
    MOV dword ptr [EBP + 0xfffffd4a],EAX ; 004de863
    MOV EAX,dword ptr [EBP + 0x26]      ; 004de869
    MOV dword ptr [EBP + 0xfffffd4e],EAX ; 004de86c
    LEA EAX,[EBP + 0xfffffd46]          ; 004de872
    PUSH EAX                            ; 004de878
    PUSH EBX                            ; 004de879
    LEA ESI,[EBP + 0xfffffe96]          ; 004de87a
    LEA EDI,[EBP + 0xfffffdd6]          ; 004de880
    CALL core_actor.cpp_FUN_00408b40    ; 004de886
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffe96]          ; 004de88b
    MOVSD ES:EDI,ESI                    ; 004de891
    MOVSD ES:EDI,ESI                    ; 004de892
    MOVSD ES:EDI,ESI                    ; 004de893
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004de894
    FLD float ptr [EBP + 0xfffffdd6]    ; 004de89a
    FSUB float ptr [EAX + 0x20]         ; 004de8a0
    FMUL ST0                            ; 004de8a3
    FLD float ptr [EBP + 0xfffffdde]    ; 004de8a5
    FSUB float ptr [EAX + 0x28]         ; 004de8ab
    FMUL ST0                            ; 004de8ae
    FADDP                               ; 004de8b0
    FSQRT                               ; 004de8b2
    ADD ESP,0x8                         ; 004de8b4
    FLD1                                ; 004de8b7
    FCOMPP                              ; 004de8b9
    FNSTSW AX                           ; 004de8bb
    SAHF                                ; 004de8bd
    JNC 0x004de8c5                      ; 004de8be
        ;   XREF to: 004de8c5 (CONDITIONAL_JUMP)  ; LAB_004de8c5
    XOR ECX,ECX                         ; 004de8c0
    MOV dword ptr [EBP + 0x6e],ECX      ; 004de8c2
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 004de8c5
        ;   Label: LAB_004de8c5
    FLD float ptr [EBP + 0xfffffdda]    ; 004de8cb
    FSUB float ptr [ESI + 0x24]         ; 004de8d1
    FABS                                ; 004de8d4
    FCOMP double ptr [0x005e3cb1]       ; 004de8d6 | DAT_005e3cb1
    FNSTSW AX                           ; 004de8dc
    SAHF                                ; 004de8de
    JA 0x004de7f3                       ; 004de8df
        ;   XREF to: 004de7f3 (CONDITIONAL_JUMP)  ; LAB_004de7f3
    CMP dword ptr [EBP + 0x6e],0x0      ; 004de8e5
    JNZ 0x004de8fa                      ; 004de8e9
        ;   XREF to: 004de8fa (CONDITIONAL_JUMP)  ; LAB_004de8fa
    CMP dword ptr [EBP + 0x6e],0x0      ; 004de8eb
        ;   Label: LAB_004de8eb
    JNZ 0x004de38c                      ; 004de8ef
        ;   XREF to: 004de38c (CONDITIONAL_JUMP)  ; caseD_12
    JMP 0x004de7f3                      ; 004de8f5
        ;   XREF to: 004de7f3 (UNCONDITIONAL_JUMP)  ; LAB_004de7f3
    PUSH 0x0                            ; 004de8fa
        ;   Label: LAB_004de8fa
    PUSH EBX                            ; 004de8fc
    MOV EAX,dword ptr [ESI + 0x154]     ; 004de8fd
    PUSH ESI                            ; 004de903
    CALL dword ptr [EAX + 0xec]         ; 004de904
    ADD ESP,0xc                         ; 004de90a
    TEST EAX,EAX                        ; 004de90d
    JNZ 0x004de8eb                      ; 004de90f
        ;   XREF to: 004de8eb (CONDITIONAL_JUMP)  ; LAB_004de8eb
    JMP 0x004de7f3                      ; 004de911
        ;   XREF to: 004de7f3 (UNCONDITIONAL_JUMP)  ; LAB_004de7f3
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004de916
        ;   Label: caseD_a
    TEST EAX,EAX                        ; 004de91c
    JNZ 0x004de935                      ; 004de91e
        ;   XREF to: 004de935 (CONDITIONAL_JUMP)  ; LAB_004de935
    PUSH 0x1                            ; 004de920
    PUSH 0x1                            ; 004de922
    MOV ECX,dword ptr [EBP + 0x72]      ; 004de924
    PUSH ECX                            ; 004de927
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004de928
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004de92d
    JMP 0x004de38c                      ; 004de930
        ;   XREF to: 004de38c (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EAX                            ; 004de935
        ;   Label: LAB_004de935
    MOV ESI,dword ptr [EAX + 0x154]     ; 004de936
    CALL dword ptr [ESI + 0xf4]         ; 004de93c
    ADD ESP,0x4                         ; 004de942
    CMP EAX,EBX                         ; 004de945
    JZ 0x004de95e                       ; 004de947
        ;   XREF to: 004de95e (CONDITIONAL_JUMP)  ; LAB_004de95e
    PUSH 0x1                            ; 004de949
    PUSH 0x1                            ; 004de94b
    MOV EDX,dword ptr [EBP + 0x72]      ; 004de94d
    PUSH EDX                            ; 004de950
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004de951
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004de956
    JMP 0x004de38c                      ; 004de959
        ;   XREF to: 004de38c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004de95e
        ;   Label: LAB_004de95e
    PUSH EAX                            ; 004de964
    MOV ESI,dword ptr [EAX + 0x154]     ; 004de965
    CALL dword ptr [ESI + 0x10c]        ; 004de96b
    ADD ESP,0x4                         ; 004de971
    TEST EAX,EAX                        ; 004de974
    JNZ 0x004deb14                      ; 004de976
        ;   XREF to: 004deb14 (CONDITIONAL_JUMP)  ; LAB_004deb14
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004de97c
    PUSH EAX                            ; 004de982
    MOV EDI,dword ptr [EAX + 0x154]     ; 004de983
    LEA ESI,[EBP + 0xfffffce6]          ; 004de989
    CALL dword ptr [EDI + 0x1c]         ; 004de98f
    MOV ECX,0x6                         ; 004de992
    LEA EDI,[EBP + 0xfffffcfe]          ; 004de997
    LEA ESI,[EBP + 0xfffffce6]          ; 004de99d
    MOVSD.REP ES:EDI,ESI                ; 004de9a3
    FLD float ptr [EBP + 0xfffffd0e]    ; 004de9a5
    FSUB float ptr [EBP + 0xfffffd02]   ; 004de9ab
    FMUL double ptr [0x005e3d01]        ; 004de9b1 | DAT_005e3d01
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 004de9b7
    LEA EDI,[EBP + 0xffffff3e]          ; 004de9bd
    LEA ESI,[ESI + 0x20]                ; 004de9c3
    LEA EAX,[EBP + 0xfffffc8a]          ; 004de9c6
    MOVSD ES:EDI,ESI                    ; 004de9cc
    MOVSD ES:EDI,ESI                    ; 004de9cd
    MOVSD ES:EDI,ESI                    ; 004de9ce
    ADD ESP,0x4                         ; 004de9cf
    FLD float ptr [EBP + 0xffffff42]    ; 004de9d2
    FXCH                                ; 004de9d8
    FADD ST0,ST1                        ; 004de9da
    PUSH EAX                            ; 004de9dc
    FSTP ST1                            ; 004de9dd
    FSTP float ptr [EBP + 0xffffff42]   ; 004de9df
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004de9e5
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004de9ea
    PUSH 0x41c80000                     ; 004de9ed
    PUSH 0x41700000                     ; 004de9f2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004de9f7
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004de9fc
    ADD ESP,0x8                         ; 004de9ff
    LEA EAX,[EBP + 0xffffff3e]          ; 004dea02
    FLD float ptr [EBP + 0x76]          ; 004dea08
    PUSH EAX                            ; 004dea0b
    FSTP float ptr [EBP + 0xfffffc8e]   ; 004dea0c
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004dea12
    PUSH EDX                            ; 004dea18
    LEA ESI,[EBP + -0x7a]               ; 004dea19
    LEA EDI,[EBP + -0x4a]               ; 004dea1c
    CALL core_actor.cpp_FUN_00408bb0    ; 004dea1f
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + -0x7a]               ; 004dea24
    MOVSD ES:EDI,ESI                    ; 004dea27
    MOVSD ES:EDI,ESI                    ; 004dea28
    MOVSD ES:EDI,ESI                    ; 004dea29
    LEA EAX,[EBP + 0xfffffca6]          ; 004dea2a
    LEA ESI,[EBP + -0x4a]               ; 004dea30
    ADD ESP,0x8                         ; 004dea33
    CMP EAX,ESI                         ; 004dea36
    JZ 0x004dea55                       ; 004dea38
        ;   XREF to: 004dea55 (CONDITIONAL_JUMP)  ; LAB_004dea55
    MOV EAX,dword ptr [EBP + -0x4a]     ; 004dea3a
    MOV dword ptr [EBP + 0xfffffca6],EAX ; 004dea3d
    MOV EAX,dword ptr [EBP + -0x46]     ; 004dea43
    MOV dword ptr [EBP + 0xfffffcaa],EAX ; 004dea46
    MOV EAX,dword ptr [EBP + -0x42]     ; 004dea4c
    MOV dword ptr [EBP + 0xfffffcae],EAX ; 004dea4f
    LEA EDI,[EBP + 0xfffffc8a]          ; 004dea55
        ;   Label: LAB_004dea55
    MOV dword ptr [EBP + 0xfffffcbe],EBX ; 004dea5b
    MOV dword ptr [EBP + 0xfffffcc2],EBX ; 004dea61
    PUSH EDI                            ; 004dea67
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004dea68
    PUSH EAX                            ; 004dea6e
    MOV ESI,dword ptr [EAX + 0x154]     ; 004dea6f
    CALL dword ptr [ESI + 0x108]        ; 004dea75
    FLD float ptr [EBP + 0xfffffc8e]    ; 004dea7b
    FLDZ                                ; 004dea81
    ADD ESP,0x8                         ; 004dea83
    FXCH                                ; 004dea86
    FSTP double ptr [EBP + -0x3e]       ; 004dea88
    FCOMP double ptr [EBP + -0x3e]      ; 004dea8b
    FNSTSW AX                           ; 004dea8e
    SAHF                                ; 004dea90
    JNC 0x004deac8                      ; 004dea91
        ;   XREF to: 004deac8 (CONDITIONAL_JUMP)  ; LAB_004deac8
    FLD double ptr [EBP + -0x3e]        ; 004dea93
    FMUL double ptr [0x005e3d09]        ; 004dea96 | DAT_005e3d09
    FMUL double ptr [0x005e3cf9]        ; 004dea9c | DAT_005e3cf9
    PUSH 0x0                            ; 004deaa2
    CALL crt_math.c_round_FUN_005c03a0  ; 004deaa4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + -0x2]        ; 004deaa9
    MOV ECX,dword ptr [EBP + -0x2]      ; 004deaac
    PUSH ECX                            ; 004deaaf
    PUSH 0x0                            ; 004deab0
    LEA EAX,[EBP + 0xffffff3e]          ; 004deab2
    PUSH EAX                            ; 004deab8
    MOV ESI,dword ptr [0x0061dca4]      ; 004deab9 | g_CGorePtr
    PUSH ESI                            ; 004deabf
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 004deac0
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004deac5
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 004deac8
        ;   Label: LAB_004deac8
    FLD float ptr [ESI + 0x2538]        ; 004deace
    FLDZ                                ; 004dead4
    FCOMPP                              ; 004dead6
    FNSTSW AX                           ; 004dead8
    SAHF                                ; 004deada
    JC 0x004deafd                       ; 004deadb
        ;   XREF to: 004deafd (CONDITIONAL_JUMP)  ; LAB_004deafd
    PUSH ESI                            ; 004deadd
    MOV EAX,dword ptr [ESI + 0x154]     ; 004deade
    CALL dword ptr [EAX + 0xf0]         ; 004deae4
    ADD ESP,0x4                         ; 004deaea
    PUSH 0x1                            ; 004deaed
    PUSH 0x1                            ; 004deaef
    MOV EDI,dword ptr [EBP + 0x72]      ; 004deaf1
    PUSH EDI                            ; 004deaf4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004deaf5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004deafa
    PUSH 0x5e3bad                       ; 004deafd | = "ghoul-eat-?.wav"
        ;   Label: LAB_004deafd
    MOV EAX,dword ptr [EBX + 0x154]     ; 004deb02
    PUSH EBX                            ; 004deb08
    CALL dword ptr [EAX + 0x2c]         ; 004deb09
    ADD ESP,0x8                         ; 004deb0c
    JMP 0x004de38c                      ; 004deb0f
        ;   XREF to: 004de38c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004deb14
        ;   Label: LAB_004deb14
    PUSH EAX                            ; 004deb1a
    MOV ESI,dword ptr [EAX + 0x154]     ; 004deb1b
    CALL dword ptr [ESI + 0xf0]         ; 004deb21
    ADD ESP,0x4                         ; 004deb27
    PUSH 0x1                            ; 004deb2a
    PUSH 0x1                            ; 004deb2c
    MOV EAX,dword ptr [EBP + 0x72]      ; 004deb2e
    PUSH EAX                            ; 004deb31
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004deb32
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004deb37
    JMP 0x004de38c                      ; 004deb3a
        ;   XREF to: 004de38c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [EBP + 0x72]      ; 004deb3f
        ;   Label: caseD_b
    PUSH EDX                            ; 004deb42
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004deb43
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    MOV EAX,[0x01cd0d9c]                ; 004deb48 | DAT_01cd0d9c
    ADD ESP,0x4                         ; 004deb4d
    CMP ESI,0xc                         ; 004deb50
    JNZ 0x004deb5a                      ; 004deb53
        ;   XREF to: 004deb5a (CONDITIONAL_JUMP)  ; LAB_004deb5a
    MOV EAX,[0x01cd0da0]                ; 004deb55 | DAT_01cd0da0
    PUSH EAX                            ; 004deb5a
        ;   Label: LAB_004deb5a
    MOV ECX,dword ptr [EBP + 0x72]      ; 004deb5b
    PUSH ECX                            ; 004deb5e
    LEA ESI,[EBP + 0xfffffede]          ; 004deb5f
    LEA EDI,[EBP + 0xffffff62]          ; 004deb65
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 004deb6b
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004deb70
    LEA EAX,[EBP + 0xffffff62]          ; 004deb73
    LEA ESI,[EBP + 0xfffffede]          ; 004deb79
    PUSH EAX                            ; 004deb7f
    MOVSD ES:EDI,ESI                    ; 004deb80
    MOVSD ES:EDI,ESI                    ; 004deb81
    MOVSD ES:EDI,ESI                    ; 004deb82
    PUSH EBX                            ; 004deb83
    LEA ESI,[EBP + -0x56]               ; 004deb84
    CALL core_actor.cpp_FUN_00408b40    ; 004deb87
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004deb8c
    LEA EDI,[EBP + 0xfffffea2]          ; 004deb8f
    PUSH 0x41400000                     ; 004deb95
    LEA ESI,[EBP + -0x56]               ; 004deb9a
    PUSH 0x41000000                     ; 004deb9d
    MOVSD ES:EDI,ESI                    ; 004deba2
    MOVSD ES:EDI,ESI                    ; 004deba3
    MOVSD ES:EDI,ESI                    ; 004deba4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004deba5
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004debaa
    ADD ESP,0x8                         ; 004debad
    FLD float ptr [EBP + 0x76]          ; 004debb0
    FMUL double ptr [0x005e3cf9]        ; 004debb3 | DAT_005e3cf9
    PUSH 0x0                            ; 004debb9
    CALL crt_math.c_round_FUN_005c03a0  ; 004debbb
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + 0x16]        ; 004debc0
    MOV ESI,dword ptr [EBP + 0x16]      ; 004debc3
    PUSH ESI                            ; 004debc6
    PUSH 0x0                            ; 004debc7
    LEA EAX,[EBP + 0xfffffea2]          ; 004debc9
    PUSH EAX                            ; 004debcf
    MOV EDI,dword ptr [0x0061dca4]      ; 004debd0 | g_CGorePtr
    PUSH EDI                            ; 004debd6
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 004debd7
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004debdc
    PUSH 0x5e3bbd                       ; 004debdf | = "ghoul-dig-?.wav @1.3"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004debe4
    PUSH EBX                            ; 004debea
    CALL dword ptr [EAX + 0x2c]         ; 004debeb
    ADD ESP,0x8                         ; 004debee
    JMP 0x004de38c                      ; 004debf1
        ;   XREF to: 004de38c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [EBP + 0x72]      ; 004debf6
        ;   Label: caseD_d
    PUSH EDX                            ; 004debf9
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004debfa
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004debff
    MOV ECX,dword ptr [0x01cd0d98]      ; 004dec02 | DAT_01cd0d98
    PUSH ECX                            ; 004dec08
    MOV ESI,dword ptr [EBP + 0x72]      ; 004dec09
    PUSH ESI                            ; 004dec0c
    LEA ESI,[EBP + 0xfffffdb2]          ; 004dec0d
    LEA EDI,[EBP + 0xfffffd22]          ; 004dec13
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 004dec19
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004dec1e
    LEA EAX,[EBP + 0xfffffd22]          ; 004dec21
    LEA ESI,[EBP + 0xfffffdb2]          ; 004dec27
    PUSH EAX                            ; 004dec2d
    MOVSD ES:EDI,ESI                    ; 004dec2e
    MOVSD ES:EDI,ESI                    ; 004dec2f
    MOVSD ES:EDI,ESI                    ; 004dec30
    PUSH EBX                            ; 004dec31
    LEA ESI,[EBP + 0xfffffd16]          ; 004dec32
    CALL core_actor.cpp_FUN_00408b40    ; 004dec38
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004dec3d
    LEA EDI,[EBP + 0xfffffd76]          ; 004dec40
    PUSH 0x41400000                     ; 004dec46
    LEA ESI,[EBP + 0xfffffd16]          ; 004dec4b
    PUSH 0x41000000                     ; 004dec51
    MOVSD ES:EDI,ESI                    ; 004dec56
    MOVSD ES:EDI,ESI                    ; 004dec57
    MOVSD ES:EDI,ESI                    ; 004dec58
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004dec59
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004dec5e
    ADD ESP,0x8                         ; 004dec61
    FLD float ptr [EBP + 0x76]          ; 004dec64
    FMUL double ptr [0x005e3cf9]        ; 004dec67 | DAT_005e3cf9
    PUSH 0x0                            ; 004dec6d
    CALL crt_math.c_round_FUN_005c03a0  ; 004dec6f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + 0xa]         ; 004dec74
    MOV EDI,dword ptr [EBP + 0xa]       ; 004dec77
    PUSH EDI                            ; 004dec7a
    PUSH 0x0                            ; 004dec7b
    LEA EAX,[EBP + 0xfffffd76]          ; 004dec7d
    PUSH EAX                            ; 004dec83
    MOV EAX,[0x0061dca4]                ; 004dec84 | g_CGorePtr
    PUSH EAX                            ; 004dec89
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 004dec8a
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004dec8f
    PUSH 0x5e3bd2                       ; 004dec92 | = "ghoul-eat-?.wav @1.3"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dec97
    PUSH EBX                            ; 004dec9d
    CALL dword ptr [EAX + 0x2c]         ; 004dec9e
    ADD ESP,0x8                         ; 004deca1
    JMP 0x004de38c                      ; 004deca4
        ;   XREF to: 004de38c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [EBP + 0x72]      ; 004deca9
        ;   Label: caseD_10
    PUSH EDX                            ; 004decac
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004decad
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004decb2
    MOV ECX,dword ptr [0x01cd0d98]      ; 004decb5 | DAT_01cd0d98
    PUSH ECX                            ; 004decbb
    MOV ESI,dword ptr [EBP + 0x72]      ; 004decbc
    PUSH ESI                            ; 004decbf
    LEA ESI,[EBP + 0xfffffd82]          ; 004decc0
    LEA EDI,[EBP + 0xfffffd5e]          ; 004decc6
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 004deccc
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004decd1
    LEA EAX,[EBP + 0xfffffd5e]          ; 004decd4
    LEA ESI,[EBP + 0xfffffd82]          ; 004decda
    PUSH EAX                            ; 004dece0
    MOVSD ES:EDI,ESI                    ; 004dece1
    MOVSD ES:EDI,ESI                    ; 004dece2
    MOVSD ES:EDI,ESI                    ; 004dece3
    PUSH EBX                            ; 004dece4
    LEA ESI,[EBP + 0xfffffd8e]          ; 004dece5
    CALL core_actor.cpp_FUN_00408b40    ; 004deceb
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004decf0
    LEA EDI,[EBP + 0xfffffd52]          ; 004decf3
    PUSH 0x41400000                     ; 004decf9
    LEA ESI,[EBP + 0xfffffd8e]          ; 004decfe
    PUSH 0x41000000                     ; 004ded04
    MOVSD ES:EDI,ESI                    ; 004ded09
    MOVSD ES:EDI,ESI                    ; 004ded0a
    MOVSD ES:EDI,ESI                    ; 004ded0b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004ded0c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004ded11
    ADD ESP,0x8                         ; 004ded14
    FLD float ptr [EBP + 0x76]          ; 004ded17
    FMUL double ptr [0x005e3cf9]        ; 004ded1a | DAT_005e3cf9
    PUSH 0x0                            ; 004ded20
    CALL crt_math.c_round_FUN_005c03a0  ; 004ded22
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + -0xe]        ; 004ded27
    MOV EDI,dword ptr [EBP + -0xe]      ; 004ded2a
    PUSH EDI                            ; 004ded2d
    PUSH 0x0                            ; 004ded2e
    LEA EAX,[EBP + 0xfffffd52]          ; 004ded30
    PUSH EAX                            ; 004ded36
    MOV EAX,[0x0061dca4]                ; 004ded37 | g_CGorePtr
    PUSH EAX                            ; 004ded3c
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 004ded3d
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004ded42
    PUSH 0x3f000000                     ; 004ded45
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004ded4a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004ded4f
    TEST EAX,EAX                        ; 004ded52
    JNZ 0x004ded94                      ; 004ded54
        ;   XREF to: 004ded94 (CONDITIONAL_JUMP)  ; LAB_004ded94
    MOV ESI,0x5e3bfc                    ; 004ded56 | = "ghoul-dig-?.wav @1.3"
    LEA EDI,[EBP + 0xfffffcc6]          ; 004ded5b
        ;   Label: LAB_004ded5b
    PUSH EDI                            ; 004ded61
    MOV AL,byte ptr [ESI]               ; 004ded62 | = "ghoul-dig-?.wav @1.3" | s_ghoul_dig_wav_1_3_005e3bfc+2 | s_ghoul_eat_wav_1_3_005e3be7
        ;   Label: LAB_004ded62
    MOV byte ptr [EDI],AL               ; 004ded64
    CMP AL,0x0                          ; 004ded66
    JZ 0x004ded7a                       ; 004ded68
        ;   XREF to: 004ded7a (CONDITIONAL_JUMP)  ; LAB_004ded7a
    MOV AL,byte ptr [ESI + 0x1]         ; 004ded6a | s_ghoul_dig_wav_1_3_005e3bfc+1 | s_ghoul_dig_wav_1_3_005e3bfc+3 | s_ghoul_eat_wav_1_3_005e3be7+1
    ADD ESI,0x2                         ; 004ded6d
    MOV byte ptr [EDI + 0x1],AL         ; 004ded70
    ADD EDI,0x2                         ; 004ded73
    CMP AL,0x0                          ; 004ded76
    JNZ 0x004ded62                      ; 004ded78
        ;   XREF to: 004ded62 (CONDITIONAL_JUMP)  ; LAB_004ded62
    POP EDI                             ; 004ded7a
        ;   Label: LAB_004ded7a
    LEA EAX,[EBP + 0xfffffcc6]          ; 004ded7b
    PUSH EAX                            ; 004ded81
    MOV ESI,dword ptr [EBX + 0x154]     ; 004ded82
    PUSH EBX                            ; 004ded88
    CALL dword ptr [ESI + 0x2c]         ; 004ded89
    ADD ESP,0x8                         ; 004ded8c
    JMP 0x004de38c                      ; 004ded8f
        ;   XREF to: 004de38c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ESI,0x5e3be7                    ; 004ded94 | = "ghoul-eat-?.wav @1.3"
        ;   Label: LAB_004ded94
    JMP 0x004ded5b                      ; 004ded99
        ;   XREF to: 004ded5b (UNCONDITIONAL_JUMP)  ; LAB_004ded5b
    PUSH ESI                            ; 004ded9b
        ;   Label: caseD_6
    PUSH EBX                            ; 004ded9c
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 004ded9d
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004deda2
    JMP 0x004de38c                      ; 004deda5
        ;   XREF to: 004de38c (UNCONDITIONAL_JUMP)  ; caseD_12
    LEA EAX,[EBP + 0x1a]                ; 004dedaa
        ;   Label: LAB_004dedaa
    PUSH EAX                            ; 004dedad
    MOV EAX,dword ptr [EBP + 0x72]      ; 004dedae
    PUSH EAX                            ; 004dedb1
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004dedb2
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    MOV ESI,EAX                         ; 004dedb7
    SUB EAX,0x5                         ; 004dedb9
    ADD ESP,0x8                         ; 004dedbc
    CMP EAX,0xd                         ; 004dedbf
    JA 0x004ded9b                       ; 004dedc2
        ;   XREF to: 004ded9b (CONDITIONAL_JUMP)  ; caseD_f
    JMP dword ptr [EAX*0x4 + 0x4de2b0]  ; 004dedc4 | caseD_5 | caseD_f | caseD_a
        ;   Label: switchD
    PUSH 0x1                            ; 004dedcb
        ;   Label: LAB_004dedcb
    PUSH 0x0                            ; 004dedcd
    LEA EAX,[EBX + 0x158]               ; 004dedcf
    PUSH EAX                            ; 004dedd5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004dedd6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004deddb
    PUSH EBX                            ; 004dedde
    MOV EAX,0x5e3c11                    ; 004deddf | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004dede4 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00611100]      ; 004dede5 | g_CConsolePtr
    PUSH EDI                            ; 004dedeb | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004dedec
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x004de46e                      ; 004dedf1
        ;   XREF to: 004de46e (UNCONDITIONAL_JUMP)  ; LAB_004de46e
    PUSH 0x1                            ; 004dedf6
        ;   Label: LAB_004dedf6
    PUSH 0x11                           ; 004dedf8
    JMP 0x004de462                      ; 004dedfa
        ;   XREF to: 004de462 (UNCONDITIONAL_JUMP)  ; LAB_004de462
    JBE 0x004dedf6                      ; 004dedff
        ;   XREF to: 004dedf6 (CONDITIONAL_JUMP)  ; LAB_004dedf6
        ;   Label: LAB_004dedff
    CMP EAX,0x3                         ; 004dee01
    JZ 0x004dedcb                       ; 004dee04
        ;   XREF to: 004dedcb (CONDITIONAL_JUMP)  ; LAB_004dedcb
    PUSH 0x1                            ; 004dee06
        ;   Label: LAB_004dee06
    PUSH 0x0                            ; 004dee08
    JMP 0x004de462                      ; 004dee0a
        ;   XREF to: 004de462 (UNCONDITIONAL_JUMP)  ; LAB_004de462
    MOV ECX,dword ptr [EBX + 0xc1d4]    ; 004dee0f
        ;   Label: caseD_a
    TEST ECX,ECX                        ; 004dee15
    JNZ 0x004dee95                      ; 004dee17
        ;   XREF to: 004dee95 (CONDITIONAL_JUMP)  ; LAB_004dee95
    CMP dword ptr [EBX + 0xc284],0x1    ; 004dee1d
    JGE 0x004dee95                      ; 004dee24
        ;   XREF to: 004dee95 (CONDITIONAL_JUMP)  ; LAB_004dee95
    CMP dword ptr [EBX + 0xdc],0x0      ; 004dee26
    JNZ 0x004dee95                      ; 004dee2d
        ;   XREF to: 004dee95 (CONDITIONAL_JUMP)  ; LAB_004dee95
    PUSH ECX                            ; 004dee2f
    PUSH ESI                            ; 004dee30
    LEA ESI,[EBP + 0xfffffe4e]          ; 004dee31
    LEA EDI,[EBP + 0xfffffeea]          ; 004dee37
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 004dee3d
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004dee42
    LEA EAX,[EBP + 0xfffffeea]          ; 004dee45
    LEA ESI,[EBP + 0xfffffe4e]          ; 004dee4b
    PUSH EAX                            ; 004dee51
    MOVSD ES:EDI,ESI                    ; 004dee52
    MOVSD ES:EDI,ESI                    ; 004dee53
    MOVSD ES:EDI,ESI                    ; 004dee54
    PUSH EBX                            ; 004dee55
    LEA ESI,[EBP + 0xffffff32]          ; 004dee56
    CALL core_actor.cpp_FUN_00408b40    ; 004dee5c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004dee61
    PUSH 0x0                            ; 004dee64
    LEA EAX,[EBP + 0xfffffe8a]          ; 004dee66
    LEA EDI,[EBP + 0xfffffe8a]          ; 004dee6c
    PUSH EAX                            ; 004dee72
    MOV EDX,dword ptr [0x0061dca4]      ; 004dee73 | g_CGorePtr
    LEA ESI,[EBP + 0xffffff32]          ; 004dee79
    PUSH EDX                            ; 004dee7f
    MOVSD ES:EDI,ESI                    ; 004dee80
    MOVSD ES:EDI,ESI                    ; 004dee81
    MOVSD ES:EDI,ESI                    ; 004dee82
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 004dee83
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004dee88
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 004dee8b
    MOV ECX,dword ptr [EBX + 0xc288]    ; 004dee95
        ;   Label: LAB_004dee95
    MOV dword ptr [EBX + 0xc2d0],0x0    ; 004dee9b
    TEST ECX,ECX                        ; 004deea5
    JLE 0x004deff5                      ; 004deea7
        ;   XREF to: 004deff5 (CONDITIONAL_JUMP)  ; LAB_004deff5
    MOV EAX,[0x01c43530]                ; 004deead | DAT_01c43530
        ;   Label: LAB_004deead
    MOV EDI,dword ptr [EBX + 0xc270]    ; 004deeb2
    SUB EDI,EAX                         ; 004deeb8
    MOV dword ptr [EBX + 0xc270],EDI    ; 004deeba
    TEST EDI,EDI                        ; 004deec0
    JLE 0x004df007                      ; 004deec2
        ;   XREF to: 004df007 (CONDITIONAL_JUMP)  ; LAB_004df007
    CMP dword ptr [EBX + 0xc284],0x0    ; 004deec8
        ;   Label: LAB_004deec8
    JLE 0x004deef6                      ; 004deecf
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EDX,dword ptr [EBX + 0xc274]    ; 004deed1
    TEST EDX,EDX                        ; 004deed7
    JLE 0x004df09a                      ; 004deed9
        ;   XREF to: 004df09a (CONDITIONAL_JUMP)  ; LAB_004df09a
    MOV EAX,[0x01c43530]                ; 004deedf | DAT_01c43530
    MOV ESI,EDX                         ; 004deee4
    SUB ESI,EAX                         ; 004deee6
    MOV dword ptr [EBX + 0xc274],ESI    ; 004deee8
    TEST ESI,ESI                        ; 004deeee
    JLE 0x004df06d                      ; 004deef0
        ;   XREF to: 004df06d (CONDITIONAL_JUMP)  ; LAB_004df06d
    FLD float ptr [EBP + 0x62]          ; 004deef6
        ;   Label: caseD_3
    FLDZ                                ; 004deef9
    FCOMPP                              ; 004deefb
    FNSTSW AX                           ; 004deefd
    SAHF                                ; 004deeff
    JA 0x004de489                       ; 004def00
        ;   XREF to: 004de489 (CONDITIONAL_JUMP)  ; LAB_004de489
    FLD float ptr [EBX + 0xc27c]        ; 004def06
    FLDZ                                ; 004def0c
    FCOMPP                              ; 004def0e
    FNSTSW AX                           ; 004def10
    SAHF                                ; 004def12
    JC 0x004de489                       ; 004def13
        ;   XREF to: 004de489 (CONDITIONAL_JUMP)  ; LAB_004de489
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 004def19
    JZ 0x004de489                       ; 004def20
        ;   XREF to: 004de489 (CONDITIONAL_JUMP)  ; LAB_004de489
    PUSH 0x3f060a92                     ; 004def26
    PUSH 0x40400000                     ; 004def2b
    XOR ESI,ESI                         ; 004def30
    MOV EAX,dword ptr [EBP + 0x62]      ; 004def32
    MOV dword ptr [EBP + 0xfffffd2e],ESI ; 004def35
    MOV dword ptr [EBP + 0xfffffd36],EAX ; 004def3b
    LEA EAX,[EBP + 0xfffffd2e]          ; 004def41
    MOV dword ptr [EBP + 0xfffffd32],ESI ; 004def47
    PUSH EAX                            ; 004def4d
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004def4e
    PUSH EAX                            ; 004def54
    MOV EDX,dword ptr [EAX + 0x154]     ; 004def55
    CALL dword ptr [EDX + 0xc4]         ; 004def5b
    ADD ESP,0x4                         ; 004def61
    PUSH EAX                            ; 004def64
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004def65
    PUSH ESI                            ; 004def6b
    ADD EAX,0x158                       ; 004def6c
    PUSH EAX                            ; 004def71
    LEA ESI,[EBP + 0xfffffd6a]          ; 004def72
    LEA EDI,[EBP + 0xfffffe1e]          ; 004def78
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 004def7e
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[EBP + 0xfffffd6a]          ; 004def83
    LEA EAX,[EBP + 0xfffffe1e]          ; 004def89
    ADD ESP,0x8                         ; 004def8f
    MOVSD ES:EDI,ESI                    ; 004def92
    MOVSD ES:EDI,ESI                    ; 004def93
    MOVSD ES:EDI,ESI                    ; 004def94
    PUSH EAX                            ; 004def95
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004def96
    PUSH EAX                            ; 004def9c
    LEA ESI,[EBP + 0xfffffef6]          ; 004def9d
    CALL core_actor.cpp_FUN_00408b40    ; 004defa3
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004defa8
    LEA EAX,[EBP + 0xfffffdca]          ; 004defab
    PUSH EAX                            ; 004defb1
    LEA EDI,[EBP + 0xfffffdca]          ; 004defb2
    LEA ESI,[EBP + 0xfffffef6]          ; 004defb8
    PUSH EBX                            ; 004defbe
    MOVSD ES:EDI,ESI                    ; 004defbf
    MOVSD ES:EDI,ESI                    ; 004defc0
    MOVSD ES:EDI,ESI                    ; 004defc1
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 004defc2
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004defc7
    CMP EAX,0x1                         ; 004defca
    JZ 0x004de489                       ; 004defcd
        ;   XREF to: 004de489 (CONDITIONAL_JUMP)  ; LAB_004de489
    PUSH 0x1                            ; 004defd3
    PUSH 0x1                            ; 004defd5
    LEA EAX,[EBX + 0x158]               ; 004defd7
    PUSH EAX                            ; 004defdd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004defde
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004defe3
    MOV dword ptr [EBX + 0x2508],0x0    ; 004defe6
    JMP 0x004de489                      ; 004deff0
        ;   XREF to: 004de489 (UNCONDITIONAL_JUMP)  ; LAB_004de489
    CMP dword ptr [EBX + 0xc284],0x0    ; 004deff5
        ;   Label: LAB_004deff5
    JG 0x004deead                       ; 004deffc
        ;   XREF to: 004deead (CONDITIONAL_JUMP)  ; LAB_004deead
    JMP 0x004deec8                      ; 004df002
        ;   XREF to: 004deec8 (UNCONDITIONAL_JUMP)  ; LAB_004deec8
    CMP dword ptr [EBX + 0xc284],0x1    ; 004df007
        ;   Label: LAB_004df007
    JGE 0x004df016                      ; 004df00e
        ;   XREF to: 004df016 (CONDITIONAL_JUMP)  ; LAB_004df016
    DEC dword ptr [EBX + 0xc288]        ; 004df010
    CMP dword ptr [EBX + 0xc288],0x0    ; 004df016
        ;   Label: LAB_004df016
    JG 0x004df02c                       ; 004df01d
        ;   XREF to: 004df02c (CONDITIONAL_JUMP)  ; LAB_004df02c
    CMP dword ptr [EBX + 0xc284],0x0    ; 004df01f
    JLE 0x004deec8                      ; 004df026
        ;   XREF to: 004deec8 (CONDITIONAL_JUMP)  ; LAB_004deec8
    PUSH 0x41400000                     ; 004df02c
        ;   Label: LAB_004df02c
    PUSH 0x3f800000                     ; 004df031
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004df036
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004df03b
    ADD ESP,0x8                         ; 004df03e
    FLD float ptr [EBP + 0x76]          ; 004df041
    FMUL double ptr [0x005e3cb9]        ; 004df044 | DAT_005e3cb9
    PUSH 0x1                            ; 004df04a
    LEA EAX,[EBX + 0x158]               ; 004df04c
    PUSH 0xf                            ; 004df052
    CALL crt_math.c_round_FUN_005c03a0  ; 004df054
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EAX                            ; 004df059
    FISTP dword ptr [EBX + 0xc270]      ; 004df05a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004df060
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004df065
    JMP 0x004deec8                      ; 004df068
        ;   XREF to: 004deec8 (UNCONDITIONAL_JUMP)  ; LAB_004deec8
    PUSH 0x41f00000                     ; 004df06d
        ;   Label: LAB_004df06d
    PUSH 0x0                            ; 004df072
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004df074
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004df079
    FLD float ptr [EBP + 0x76]          ; 004df07c
    FCHS                                ; 004df07f
    FMUL float ptr [0x005e3cd1]         ; 004df081 | DAT_005e3cd1
    ADD ESP,0x8                         ; 004df087
    CALL crt_math.c_round_FUN_005c03a0  ; 004df08a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBX + 0xc274]      ; 004df08f
    JMP 0x004deef6                      ; 004df095
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x01c43530]                ; 004df09a | DAT_01c43530
        ;   Label: LAB_004df09a
    XOR ECX,ECX                         ; 004df09f
    LEA ESI,[EDX + EAX*0x1]             ; 004df0a1
    MOV dword ptr [EBP + 0x32],ECX      ; 004df0a4
    MOV dword ptr [EBX + 0xc274],ESI    ; 004df0a7
    TEST ESI,ESI                        ; 004df0ad
    JL 0x004df1cb                       ; 004df0af
        ;   XREF to: 004df1cb (CONDITIONAL_JUMP)  ; LAB_004df1cb
    MOV dword ptr [EBX + 0xc274],ECX    ; 004df0b5
    MOV EAX,dword ptr [EBX + 0x3000]    ; 004df0bb
        ;   Label: LAB_004df0bb
    MOV dword ptr [EBP + 0x6a],EAX      ; 004df0c1
    FLD float ptr [EBP + 0x6a]          ; 004df0c4
    FCOMP float ptr [EBX + 0x2ffc]      ; 004df0c7
    FNSTSW AX                           ; 004df0cd
    SAHF                                ; 004df0cf
    JNC 0x004df0db                      ; 004df0d0
        ;   XREF to: 004df0db (CONDITIONAL_JUMP)  ; LAB_004df0db
    MOV EAX,dword ptr [EBX + 0x2490]    ; 004df0d2
    MOV dword ptr [EBP + 0x6a],EAX      ; 004df0d8
    FLD float ptr [EBP + 0x6a]          ; 004df0db
        ;   Label: LAB_004df0db
    FCOMP float ptr [EBX + 0x2ffc]      ; 004df0de
    FNSTSW AX                           ; 004df0e4
    SAHF                                ; 004df0e6
    JC 0x004df2ab                       ; 004df0e7
        ;   XREF to: 004df2ab (CONDITIONAL_JUMP)  ; LAB_004df2ab
    XOR ESI,ESI                         ; 004df0ed
        ;   Label: LAB_004df0ed
    MOV dword ptr [EBP + 0x76],ESI      ; 004df0ef
        ;   Label: LAB_004df0ef
    FILD dword ptr [EBP + 0x76]         ; 004df0f2
    FMUL float ptr [0x005e3d11]         ; 004df0f5 | DAT_005e3d11
    MOV ECX,dword ptr [0x00622c18]      ; 004df0fb | g_CDemonSetPtr
    FMUL float ptr [0x005e3d15]         ; 004df101 | DAT_005e3d15
    PUSH ECX                            ; 004df107 | g_CDemonSetInstance
    FSTP float ptr [EBP + -0x6]         ; 004df108
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004df10b
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004df110
    PUSH EBX                            ; 004df113
    MOV EDI,dword ptr [0x00622c18]      ; 004df114 | g_CDemonSetPtr
    PUSH EDI                            ; 004df11a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004df11b
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    FLD float ptr [EBP + -0x6]          ; 004df120
    FLD ST0                             ; 004df123
    FCOS                                ; 004df125
    FXCH                                ; 004df127
    FSIN                                ; 004df129
    FXCH                                ; 004df12b
    FLD double ptr [0x005e3d19]         ; 004df12d | DAT_005e3d19
    FXCH                                ; 004df133
    FMUL ST1                            ; 004df135
    FXCH ST2                            ; 004df137
    FMULP                               ; 004df139
    FLD float ptr [EBX + 0x24]          ; 004df13b
    ADD ESP,0x8                         ; 004df13e
    FADD float ptr [EBP + 0x6a]         ; 004df141
    SUB ESP,0x4                         ; 004df144
    FSTP float ptr [ESP]                ; 004df147
    FLD float ptr [EBX + 0x24]          ; 004df14a
    FADD float ptr [EBX + 0x2ffc]       ; 004df14d
    SUB ESP,0x4                         ; 004df153
    FSTP float ptr [ESP]                ; 004df156
    PUSH dword ptr [EBX + 0x2ff0]       ; 004df159
    SUB ESP,0x4                         ; 004df15f
    FXCH                                ; 004df162
    FSTP float ptr [ESP]                ; 004df164
    SUB ESP,0x4                         ; 004df167
    FSTP float ptr [ESP]                ; 004df16a
    PUSH dword ptr [EBX + 0x28]         ; 004df16d
    MOV EAX,[0x00622c18]                ; 004df170 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 004df175
    PUSH EAX                            ; 004df178 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00558450 ; 004df179
        ;   XREF to: 00558450 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00558450()
    MOV EDX,dword ptr [0x00622c18]      ; 004df17e | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x76],EAX      ; 004df184
    ADD ESP,0x20                        ; 004df187
    FLD float ptr [EBP + 0x76]          ; 004df18a
    PUSH EDX                            ; 004df18d | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x5e]         ; 004df18e
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004df191
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    FLD float ptr [EBP + 0x5e]          ; 004df196
    FLD1                                ; 004df199
    ADD ESP,0x4                         ; 004df19b
    FCOMPP                              ; 004df19e
    FNSTSW AX                           ; 004df1a0
    SAHF                                ; 004df1a2
    JBE 0x004df2bf                      ; 004df1a3
        ;   XREF to: 004df2bf (CONDITIONAL_JUMP)  ; LAB_004df2bf
    CMP ESI,0x4                         ; 004df1a9
        ;   Label: LAB_004df1a9
    JGE 0x004df2ce                      ; 004df1ac
        ;   XREF to: 004df2ce (CONDITIONAL_JUMP)  ; LAB_004df2ce
    MOV dword ptr [EBX + 0xc274],0x3    ; 004df1b2
    MOV dword ptr [EBX + 0xc1e8],0x0    ; 004df1bc
    JMP 0x004deef6                      ; 004df1c6
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004df1cb
        ;   Label: LAB_004df1cb
    MOV EAX,dword ptr [EBX + 0x154]     ; 004df1d1
    PUSH EBX                            ; 004df1d7
    CALL dword ptr [EAX + 0x144]        ; 004df1d8
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004df1de
    ADD ESP,0x8                         ; 004df1e4
    TEST EAX,EAX                        ; 004df1e7
    JZ 0x004df29c                       ; 004df1e9
        ;   XREF to: 004df29c (CONDITIONAL_JUMP)  ; LAB_004df29c
    LEA EDX,[EBX + 0x20]                ; 004df1ef
    LEA EDI,[EBP + 0xffffff7a]          ; 004df1f2
    LEA ESI,[EBP + 0xfffffda6]          ; 004df1f8
    FLD float ptr [EDX + 0x4]           ; 004df1fe
    FLD float ptr [EDX + 0x8]           ; 004df201
    FLD float ptr [EDX]                 ; 004df204
    LEA EDX,[EBP + 0xffffff4a]          ; 004df206
    FSUB float ptr [EAX + 0x20]         ; 004df20c
    FXCH ST2                            ; 004df20f
    FSUB float ptr [EAX + 0x24]         ; 004df211
    FXCH                                ; 004df214
    FSUB float ptr [EAX + 0x28]         ; 004df216
    FXCH ST2                            ; 004df219
    FSTP float ptr [EBP + 0xfffffda6]   ; 004df21b
    FSTP float ptr [EBP + 0xfffffdaa]   ; 004df221
    FSTP float ptr [EBP + 0xfffffdae]   ; 004df227
    LEA EAX,[EBP + 0xffffff7a]          ; 004df22d
    MOVSD ES:EDI,ESI                    ; 004df233
    MOVSD ES:EDI,ESI                    ; 004df234
    MOVSD ES:EDI,ESI                    ; 004df235
    CMP EDX,EAX                         ; 004df236
    JZ 0x004df25b                       ; 004df238
        ;   XREF to: 004df25b (CONDITIONAL_JUMP)  ; LAB_004df25b
    MOV EAX,dword ptr [EBP + 0xffffff7a] ; 004df23a
    MOV dword ptr [EBP + 0xffffff4a],EAX ; 004df240
    MOV EAX,dword ptr [EBP + 0xffffff7e] ; 004df246
    MOV dword ptr [EBP + 0xffffff4e],EAX ; 004df24c
    MOV EAX,dword ptr [EBP + -0x7e]     ; 004df252
    MOV dword ptr [EBP + 0xffffff52],EAX ; 004df255
    FLD float ptr [EBP + 0xffffff4e]    ; 004df25b
        ;   Label: LAB_004df25b
    FMUL ST0                            ; 004df261
    FLD float ptr [EBP + 0xffffff4a]    ; 004df263
    FMUL ST0                            ; 004df269
    FADDP                               ; 004df26b
    FLD float ptr [EBP + 0xffffff52]    ; 004df26d
    FMUL ST0                            ; 004df273
    FADDP                               ; 004df275
    FSTP float ptr [EBP + 0xe]          ; 004df277
    MOV EAX,dword ptr [EBP + 0xe]       ; 004df27a
    MOV EDX,dword ptr [0x01cc804c]      ; 004df27d | DAT_01cc804c
    SAR EAX,0x1                         ; 004df283
    ADD EAX,EDX                         ; 004df285
    MOV dword ptr [EBP + 0x12],EAX      ; 004df287
    FLD float ptr [EBP + 0x12]          ; 004df28a
    FCOMP double ptr [0x005e3ca9]       ; 004df28d | DAT_005e3ca9
    FNSTSW AX                           ; 004df293
    SAHF                                ; 004df295
    JC 0x004df0bb                       ; 004df296
        ;   XREF to: 004df0bb (CONDITIONAL_JUMP)  ; LAB_004df0bb
    CMP dword ptr [EBP + 0x32],0x0      ; 004df29c
        ;   Label: LAB_004df29c
    JNZ 0x004df0bb                      ; 004df2a0
        ;   XREF to: 004df0bb (CONDITIONAL_JUMP)  ; LAB_004df0bb
    JMP 0x004deef6                      ; 004df2a6
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0x2ffc]        ; 004df2ab
        ;   Label: LAB_004df2ab
    FADD double ptr [0x005e3cc9]        ; 004df2b1 | DAT_005e3cc9
    FSTP float ptr [EBP + 0x6a]         ; 004df2b7
    JMP 0x004df0ed                      ; 004df2ba
        ;   XREF to: 004df0ed (UNCONDITIONAL_JUMP)  ; LAB_004df0ed
    INC ESI                             ; 004df2bf
        ;   Label: LAB_004df2bf
    CMP ESI,0x4                         ; 004df2c0
    JL 0x004df0ef                       ; 004df2c3
        ;   XREF to: 004df0ef (CONDITIONAL_JUMP)  ; LAB_004df0ef
    JMP 0x004df1a9                      ; 004df2c9
        ;   XREF to: 004df1a9 (UNCONDITIONAL_JUMP)  ; LAB_004df1a9
    MOV EAX,dword ptr [EBX + 0xc284]    ; 004df2ce
        ;   Label: LAB_004df2ce
    INC EAX                             ; 004df2d4
    MOV dword ptr [EBP + 0x76],EAX      ; 004df2d5
    FILD dword ptr [EBP + 0x76]         ; 004df2d8
    FMUL double ptr [0x005e3d21]        ; 004df2db | DAT_005e3d21
    SUB ESP,0x4                         ; 004df2e1
    FSTP float ptr [ESP]                ; 004df2e4
    PUSH 0x41200000                     ; 004df2e7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004df2ec
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    ADD ESP,0x8                         ; 004df2f1
    PUSH 0x1                            ; 004df2f4
    MOV dword ptr [EBP + 0x76],EAX      ; 004df2f6
    LEA EAX,[EBX + 0x158]               ; 004df2f9
    PUSH 0x10                           ; 004df2ff
    FLD float ptr [EBP + 0x76]          ; 004df301
    PUSH EAX                            ; 004df304
    FSTP float ptr [EBX + 0x2538]       ; 004df305
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004df30b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004df310
    JMP 0x004deef6                      ; 004df313
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0xc2c4]        ; 004df318
        ;   Label: caseD_0
    FLDZ                                ; 004df31e
    FCOMPP                              ; 004df320
    FNSTSW AX                           ; 004df322
    SAHF                                ; 004df324
    JNC 0x004df33e                      ; 004df325
        ;   XREF to: 004df33e (CONDITIONAL_JUMP)  ; LAB_004df33e
    FLD float ptr [EBX + 0xc2c4]        ; 004df327
    FSUB float ptr [EBP + 0x92]         ; 004df32d
    FSTP float ptr [EBX + 0xc2c4]       ; 004df333
    JMP 0x004deef6                      ; 004df339
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0xc2c8]    ; 004df33e
        ;   Label: LAB_004df33e
    TEST EAX,EAX                        ; 004df344
    JZ 0x004df432                       ; 004df346
        ;   XREF to: 004df432 (CONDITIONAL_JUMP)  ; LAB_004df432
    FLD float ptr [EAX + 0x20]          ; 004df34c
    FLD float ptr [EAX + 0x24]          ; 004df34f
    FLD float ptr [EAX + 0x28]          ; 004df352
    LEA EDX,[EBX + 0x20]                ; 004df355
    LEA EDI,[EBP + 0xfffffe66]          ; 004df358
    LEA ESI,[EBP + 0xfffffde2]          ; 004df35e
    FXCH ST2                            ; 004df364
    FSUB float ptr [EDX]                ; 004df366
    FXCH                                ; 004df368
    FSUB float ptr [EDX + 0x4]          ; 004df36a
    FXCH ST2                            ; 004df36d
    FSUB float ptr [EDX + 0x8]          ; 004df36f
    FXCH                                ; 004df372
    FSTP float ptr [EBP + 0xfffffde2]   ; 004df374
    FXCH                                ; 004df37a
    FSTP float ptr [EBP + 0xfffffde6]   ; 004df37c
    FSTP float ptr [EBP + 0xfffffdea]   ; 004df382
    MOVSD ES:EDI,ESI                    ; 004df388
    MOVSD ES:EDI,ESI                    ; 004df389
    MOVSD ES:EDI,ESI                    ; 004df38a
    LEA EDI,[EBP + 0xfffffe7e]          ; 004df38b
    LEA ESI,[EBP + 0xfffffe66]          ; 004df391
    LEA EAX,[EBP + 0xfffffe7e]          ; 004df397
    MOVSD ES:EDI,ESI                    ; 004df39d
    MOVSD ES:EDI,ESI                    ; 004df39e
    MOVSD ES:EDI,ESI                    ; 004df39f
    FLD float ptr [EAX + 0x4]           ; 004df3a0
    FMUL ST0                            ; 004df3a3
    FLD float ptr [EAX]                 ; 004df3a5
    FMUL ST0                            ; 004df3a7
    FADDP                               ; 004df3a9
    FLD float ptr [EAX + 0x8]           ; 004df3ab
    FMUL ST0                            ; 004df3ae
    FADDP                               ; 004df3b0
    LEA EAX,[EBP + -0xa]                ; 004df3b2
    FSTP float ptr [EBP + -0xa]         ; 004df3b5
    FLD float ptr [EAX]                 ; 004df3b8
    FSQRT                               ; 004df3ba
    FCOMP double ptr [0x005e3cb1]       ; 004df3bc | DAT_005e3cb1
    FNSTSW AX                           ; 004df3c2
    SAHF                                ; 004df3c4
    JNC 0x004deef6                      ; 004df3c5
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0x2538]        ; 004df3cb
    FLD float ptr [EBP + 0x92]          ; 004df3d1
    FLD float ptr [EBX + 0xc2cc]        ; 004df3d7
    FSUB ST0,ST1                        ; 004df3dd
    FXCH ST2                            ; 004df3df
    FADDP                               ; 004df3e1
    FXCH                                ; 004df3e3
    FSTP float ptr [EBX + 0xc2cc]       ; 004df3e5
    FST float ptr [EBX + 0x2538]        ; 004df3eb
    FCOMP double ptr [0x005e3cf1]       ; 004df3f1 | DAT_005e3cf1
    FNSTSW AX                           ; 004df3f7
    SAHF                                ; 004df3f9
    JBE 0x004df406                      ; 004df3fa
        ;   XREF to: 004df406 (CONDITIONAL_JUMP)  ; LAB_004df406
    MOV dword ptr [EBX + 0x2538],0x42c80000 ; 004df3fc
    FLD float ptr [EBX + 0xc2cc]        ; 004df406
        ;   Label: LAB_004df406
    FLDZ                                ; 004df40c
    FCOMPP                              ; 004df40e
    FNSTSW AX                           ; 004df410
    SAHF                                ; 004df412
    JBE 0x004deef6                      ; 004df413
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    MOV dword ptr [EBX + 0xc2cc],0x0    ; 004df419
    MOV dword ptr [EBX + 0xc2c8],0x0    ; 004df423
    JMP 0x004deef6                      ; 004df42d
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004df432
        ;   Label: LAB_004df432
    PUSH EBX                            ; 004df438
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 004df439
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004df43e
    TEST EAX,EAX                        ; 004df441
    JZ 0x004df45d                       ; 004df443
        ;   XREF to: 004df45d (CONDITIONAL_JUMP)  ; LAB_004df45d
    PUSH 0x1                            ; 004df445
        ;   Label: LAB_004df445
    PUSH 0x1                            ; 004df447
    LEA EAX,[EBX + 0x158]               ; 004df449
    PUSH EAX                            ; 004df44f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004df450
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004df455
    JMP 0x004deef6                      ; 004df458
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004df45d
        ;   Label: LAB_004df45d
    MOV EDX,dword ptr [EBX + 0x154]     ; 004df463
    PUSH EBX                            ; 004df469
    CALL dword ptr [EDX + 0x144]        ; 004df46a
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004df470
    ADD ESP,0x8                         ; 004df476
    TEST EDX,EDX                        ; 004df479
    JZ 0x004deef6                       ; 004df47b
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004df481
    PUSH 0x1                            ; 004df483
    LEA EAX,[EBX + 0x158]               ; 004df485
    PUSH EAX                            ; 004df48b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004df48c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004df491
    MOV ECX,dword ptr [EBX + 0xc2b8]    ; 004df494
    PUSH ECX                            ; 004df49a
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 004df49b
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004df4a0
    TEST EAX,EAX                        ; 004df4a3
    JZ 0x004df4be                       ; 004df4a5
        ;   XREF to: 004df4be (CONDITIONAL_JUMP)  ; LAB_004df4be
    MOV ESI,dword ptr [EBX + 0xc2bc]    ; 004df4a7
    PUSH ESI                            ; 004df4ad
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 004df4ae
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004df4b3
    TEST EAX,EAX                        ; 004df4b6
    JNZ 0x004deef6                      ; 004df4b8
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x5e3c3b                       ; 004df4be | = "ghoul-alert-?.wav"
        ;   Label: LAB_004df4be
    MOV EAX,dword ptr [EBX + 0x154]     ; 004df4c3
    PUSH EBX                            ; 004df4c9
    CALL dword ptr [EAX + 0x2c]         ; 004df4ca
    ADD ESP,0x8                         ; 004df4cd
    MOV dword ptr [EBX + 0xc2b8],EAX    ; 004df4d0
    JMP 0x004deef6                      ; 004df4d6
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    CMP dword ptr [EBX + 0xc2d0],0x0    ; 004df4db
        ;   Label: caseD_1
    JZ 0x004df4fe                       ; 004df4e2
        ;   XREF to: 004df4fe (CONDITIONAL_JUMP)  ; LAB_004df4fe
    MOV EDI,dword ptr [EBP + 0x56]      ; 004df4e4
    CMP EDI,0x1                         ; 004df4e7
    JNZ 0x004df4fe                      ; 004df4ea
        ;   XREF to: 004df4fe (CONDITIONAL_JUMP)  ; LAB_004df4fe
    PUSH EDI                            ; 004df4ec
    PUSH 0x11                           ; 004df4ed
    LEA EAX,[EBX + 0x158]               ; 004df4ef
    PUSH EAX                            ; 004df4f5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004df4f6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004df4fb
    FLD float ptr [EBX + 0xc2c4]        ; 004df4fe
        ;   Label: LAB_004df4fe
    FLDZ                                ; 004df504
    FCOMPP                              ; 004df506
    FNSTSW AX                           ; 004df508
    SAHF                                ; 004df50a
    JC 0x004df6b2                       ; 004df50b
        ;   XREF to: 004df6b2 (CONDITIONAL_JUMP)  ; LAB_004df6b2
    LEA EAX,[EBX + 0x249c]              ; 004df511
    MOV dword ptr [EAX + 0x8],0x0       ; 004df517
    MOV EDX,dword ptr [EAX + 0x8]       ; 004df51e
    MOV dword ptr [EAX + 0x4],EDX       ; 004df521
    MOV EDX,dword ptr [EAX + 0x4]       ; 004df524
    MOV dword ptr [EAX],EDX             ; 004df527
    XOR EAX,EAX                         ; 004df529
    MOV dword ptr [EBP + 0x66],EAX      ; 004df52b
    MOV EAX,dword ptr [EBX + 0xc290]    ; 004df52e
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004df534
    JZ 0x004df545                       ; 004df53c
        ;   XREF to: 004df545 (CONDITIONAL_JUMP)  ; LAB_004df545
    MOV dword ptr [EBP + 0x66],0x1      ; 004df53e
    MOV EAX,dword ptr [EBX + 0xc298]    ; 004df545
        ;   Label: LAB_004df545
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004df54b
    JZ 0x004df558                       ; 004df553
        ;   XREF to: 004df558 (CONDITIONAL_JUMP)  ; LAB_004df558
    INC dword ptr [EBP + 0x66]          ; 004df555
    MOV EAX,[0x01d06ab4]                ; 004df558 | DAT_01d06ab4
        ;   Label: LAB_004df558
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004df55d
    PUSH EAX                            ; 004df564
    MOV EDX,dword ptr [EAX + 0x154]     ; 004df565
    CALL dword ptr [EDX + 0x10c]        ; 004df56b
    ADD ESP,0x4                         ; 004df571
    TEST EAX,EAX                        ; 004df574
    JNZ 0x004df91f                      ; 004df576
        ;   XREF to: 004df91f (CONDITIONAL_JUMP)  ; LAB_004df91f
    PUSH dword ptr [EBP + 0x92]         ; 004df57c
    MOV EAX,dword ptr [EBX + 0x154]     ; 004df582
    PUSH EBX                            ; 004df588
    CALL dword ptr [EAX + 0x144]        ; 004df589
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004df58f
    ADD ESP,0x8                         ; 004df595
    TEST EDX,EDX                        ; 004df598
    JZ 0x004df6dc                       ; 004df59a
        ;   XREF to: 004df6dc (CONDITIONAL_JUMP)  ; LAB_004df6dc
    FLD float ptr [EDX + 0x20]          ; 004df5a0
    FLD float ptr [EDX + 0x24]          ; 004df5a3
    FLD float ptr [EDX + 0x28]          ; 004df5a6
    LEA EAX,[EBX + 0x20]                ; 004df5a9
    LEA EDI,[EBP + 0xfffffd3a]          ; 004df5ac
    LEA ESI,[EBP + 0xfffffe36]          ; 004df5b2
    FXCH ST2                            ; 004df5b8
    FSUB float ptr [EAX]                ; 004df5ba
    FXCH                                ; 004df5bc
    FSUB float ptr [EAX + 0x4]          ; 004df5be
    FXCH ST2                            ; 004df5c1
    FSUB float ptr [EAX + 0x8]          ; 004df5c3
    FXCH                                ; 004df5c6
    FSTP float ptr [EBP + 0xfffffe36]   ; 004df5c8
    FXCH                                ; 004df5ce
    FSTP float ptr [EBP + 0xfffffe3a]   ; 004df5d0
    FSTP float ptr [EBP + 0xfffffe3e]   ; 004df5d6
    MOVSD ES:EDI,ESI                    ; 004df5dc
    MOVSD ES:EDI,ESI                    ; 004df5dd
    MOVSD ES:EDI,ESI                    ; 004df5de
    XOR ECX,ECX                         ; 004df5df
    FLD float ptr [EBX + 0x2538]        ; 004df5e1
    MOV dword ptr [EBP + 0xfffffd3e],ECX ; 004df5e7
    FCOMP double ptr [0x005e3cd9]       ; 004df5ed | DAT_005e3cd9
    FNSTSW AX                           ; 004df5f3
    SAHF                                ; 004df5f5
    JNC 0x004df616                      ; 004df5f6
        ;   XREF to: 004df616 (CONDITIONAL_JUMP)  ; LAB_004df616
    CMP dword ptr [EBP + 0x66],0x0      ; 004df5f8
    JLE 0x004df616                      ; 004df5fc
        ;   XREF to: 004df616 (CONDITIONAL_JUMP)  ; LAB_004df616
    CMP dword ptr [EBX + 0xc2c8],0x0    ; 004df5fe
    JNZ 0x004df616                      ; 004df605
        ;   XREF to: 004df616 (CONDITIONAL_JUMP)  ; LAB_004df616
    PUSH dword ptr [EBP + 0x92]         ; 004df607
    PUSH EBX                            ; 004df60d
    CALL core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004de100 ; 004df60e
        ;   XREF to: 004de100 (UNCONDITIONAL_CALL)  ; void core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004de100(CGhoul * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004df613
    MOV EAX,dword ptr [EBX + 0xc2c8]    ; 004df616
        ;   Label: LAB_004df616
    LEA ESI,[EBX + 0x158]               ; 004df61c
    TEST EAX,EAX                        ; 004df622
    JZ 0x004df723                       ; 004df624
        ;   XREF to: 004df723 (CONDITIONAL_JUMP)  ; LAB_004df723
    PUSH 0x0                            ; 004df62a
    PUSH 0x40400000                     ; 004df62c
    PUSH 0x2c8af28                      ; 004df631 | DAT_02c8af28
    MOV EDX,dword ptr [EAX + 0x154]     ; 004df636
    PUSH EAX                            ; 004df63c
    CALL dword ptr [EDX + 0xc4]         ; 004df63d
    ADD ESP,0x4                         ; 004df643
    PUSH EAX                            ; 004df646
    MOV EAX,dword ptr [EBX + 0xc2c8]    ; 004df647
    ADD EAX,0x20                        ; 004df64d
    PUSH EAX                            ; 004df650
    PUSH EBX                            ; 004df651
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 004df652
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004df657
    MOV EDI,EAX                         ; 004df65a
    TEST EAX,EAX                        ; 004df65c
    JLE 0x004df68b                      ; 004df65e
        ;   XREF to: 004df68b (CONDITIONAL_JUMP)  ; LAB_004df68b
    PUSH 0x1                            ; 004df660
    PUSH 0x0                            ; 004df662
    PUSH ESI                            ; 004df664
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004df665
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004df66a
    PUSH 0x41f00000                     ; 004df66d
    PUSH 0x41200000                     ; 004df672
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004df677
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004df67c
    ADD ESP,0x8                         ; 004df67f
    MOV EAX,dword ptr [EBP + 0x76]      ; 004df682
    MOV dword ptr [EBX + 0xc2cc],EAX    ; 004df685
    TEST EDI,EDI                        ; 004df68b
        ;   Label: LAB_004df68b
    JL 0x004df70a                       ; 004df68d
        ;   XREF to: 004df70a (CONDITIONAL_JUMP)  ; LAB_004df70a
    MOV EDI,dword ptr [EBP + 0x56]      ; 004df68f
        ;   Label: LAB_004df68f
    CMP EDI,0x1                         ; 004df692
    JNZ 0x004deef6                      ; 004df695
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH EDI                            ; 004df69b
    PUSH 0x11                           ; 004df69c
    LEA EAX,[EBX + 0x158]               ; 004df69e
    PUSH EAX                            ; 004df6a4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004df6a5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004df6aa
    JMP 0x004deef6                      ; 004df6ad
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004df6b2
        ;   Label: LAB_004df6b2
    FLD float ptr [EBX + 0xc2c4]        ; 004df6b4
    LEA EAX,[EBX + 0x158]               ; 004df6ba
    PUSH 0x0                            ; 004df6c0
    FSUB float ptr [EBP + 0x92]         ; 004df6c2
    PUSH EAX                            ; 004df6c8
    FSTP float ptr [EBX + 0xc2c4]       ; 004df6c9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004df6cf
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004df6d4
    JMP 0x004deef6                      ; 004df6d7
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004df6dc
        ;   Label: LAB_004df6dc
    PUSH EBX                            ; 004df6e2
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 004df6e3
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004df6e8
    TEST EAX,EAX                        ; 004df6eb
    JNZ 0x004deef6                      ; 004df6ed
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004df6f3
    PUSH EAX                            ; 004df6f5
    LEA EAX,[EBX + 0x158]               ; 004df6f6
    PUSH EAX                            ; 004df6fc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004df6fd
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004df702
    JMP 0x004deef6                      ; 004df705
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV dword ptr [EBX + 0xc2cc],0x41f00000 ; 004df70a
        ;   Label: LAB_004df70a
    MOV dword ptr [EBX + 0xc2c8],0x0    ; 004df714
    JMP 0x004df68f                      ; 004df71e
        ;   XREF to: 004df68f (UNCONDITIONAL_JUMP)  ; LAB_004df68f
    PUSH 0x3e32b8c2                     ; 004df723
        ;   Label: LAB_004df723
    PUSH 0x3f800000                     ; 004df728
    MOV EAX,[0x006012b8]                ; 004df72d | DAT_006012b8
    XOR EDX,EDX                         ; 004df732
    MOV dword ptr [EBP + 0xffffff0e],EDX ; 004df734
    MOV dword ptr [EBP + 0xffffff16],EAX ; 004df73a
    LEA EAX,[EBP + 0xffffff0e]          ; 004df740
    MOV dword ptr [EBP + 0xffffff12],EDX ; 004df746
    PUSH EAX                            ; 004df74c
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004df74d
    PUSH EAX                            ; 004df753
    MOV EDX,dword ptr [EAX + 0x154]     ; 004df754
    CALL dword ptr [EDX + 0xc4]         ; 004df75a
    ADD ESP,0x4                         ; 004df760
    PUSH EAX                            ; 004df763
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004df764
    ADD EAX,0x20                        ; 004df76a
    PUSH EAX                            ; 004df76d
    PUSH EBX                            ; 004df76e
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 004df76f
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004df774
    TEST EAX,EAX                        ; 004df777
    JL 0x004df8f6                       ; 004df779
        ;   XREF to: 004df8f6 (CONDITIONAL_JUMP)  ; LAB_004df8f6
    JLE 0x004deef6                      ; 004df77f
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    CMP dword ptr [EBP + 0x66],0x0      ; 004df785
    JLE 0x004deef6                      ; 004df789
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0xc1e4]        ; 004df78f
    FLDZ                                ; 004df795
    FCOMPP                              ; 004df797
    FNSTSW AX                           ; 004df799
    SAHF                                ; 004df79b
    JC 0x004deef6                       ; 004df79c
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004df7a2
    PUSH EAX                            ; 004df7a8
    MOV EDX,dword ptr [EAX + 0x154]     ; 004df7a9
    CALL dword ptr [EDX + 0xf4]         ; 004df7af
    ADD ESP,0x4                         ; 004df7b5
    TEST EAX,EAX                        ; 004df7b8
    JNZ 0x004deef6                      ; 004df7ba
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0xc27c]        ; 004df7c0
    FLDZ                                ; 004df7c6
    FCOMPP                              ; 004df7c8
    FNSTSW AX                           ; 004df7ca
    SAHF                                ; 004df7cc
    JC 0x004deef6                       ; 004df7cd
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBP + 0xfffffd3e]    ; 004df7d3
    FMUL ST0                            ; 004df7d9
    FLD float ptr [EBP + 0xfffffd3a]    ; 004df7db
    FMUL ST0                            ; 004df7e1
    FADDP                               ; 004df7e3
    FLD float ptr [EBP + 0xfffffd42]    ; 004df7e5
    FMUL ST0                            ; 004df7eb
    FADDP                               ; 004df7ed
    FSQRT                               ; 004df7ef
    FSTP float ptr [EBP + 0x42]         ; 004df7f1
    MOV EAX,dword ptr [EBP + 0x42]      ; 004df7f4
    XOR EDI,EDI                         ; 004df7f7
    MOV dword ptr [EBP + 0x4e],EAX      ; 004df7f9
    MOV EAX,dword ptr [EBX + 0xc298]    ; 004df7fc
    MOV dword ptr [EBP + 0x5a],EDI      ; 004df802
    MOV dword ptr [EBP + 0x4a],EDI      ; 004df805
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004df808
    MOV dword ptr [EBP + 0x36],EDI      ; 004df80f
    TEST ECX,ECX                        ; 004df812
    JZ 0x004df832                       ; 004df814
        ;   XREF to: 004df832 (CONDITIONAL_JUMP)  ; LAB_004df832
    FLD float ptr [0x006012bc]          ; 004df816 | DAT_006012bc
    FLD float ptr [EBP + 0x42]          ; 004df81c
    FSUB ST0,ST1                        ; 004df81f
    FABS                                ; 004df821
    FDIVRP                              ; 004df823
    FLD1                                ; 004df825
    FSUBRP                              ; 004df827
    FMUL double ptr [0x005e3ce1]        ; 004df829 | DAT_005e3ce1
    FSTP float ptr [EBP + 0x5a]         ; 004df82f
    MOV EAX,dword ptr [EBX + 0xc290]    ; 004df832
        ;   Label: LAB_004df832
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004df838
    JZ 0x004df85e                       ; 004df840
        ;   XREF to: 004df85e (CONDITIONAL_JUMP)  ; LAB_004df85e
    FLD float ptr [0x006012c0]          ; 004df842 | DAT_006012c0
    FLD float ptr [EBP + 0x4e]          ; 004df848
    FSUB ST0,ST1                        ; 004df84b
    FABS                                ; 004df84d
    FDIVRP                              ; 004df84f
    FLD1                                ; 004df851
    FSUBRP                              ; 004df853
    FMUL double ptr [0x005e3ce9]        ; 004df855 | DAT_005e3ce9
    FSTP float ptr [EBP + 0x4a]         ; 004df85b
    PUSH 0x0                            ; 004df85e
        ;   Label: LAB_004df85e
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004df860
    PUSH EBX                            ; 004df866
    MOV EDX,dword ptr [EAX + 0x154]     ; 004df867
    PUSH EAX                            ; 004df86d
    CALL dword ptr [EDX + 0xe8]         ; 004df86e
    ADD ESP,0xc                         ; 004df874
    TEST EAX,EAX                        ; 004df877
    JZ 0x004df897                       ; 004df879
        ;   XREF to: 004df897 (CONDITIONAL_JUMP)  ; LAB_004df897
    FLD float ptr [0x006012b8]          ; 004df87b | DAT_006012b8
    FLD float ptr [EBP + 0x4e]          ; 004df881
    FSUB ST0,ST1                        ; 004df884
    FABS                                ; 004df886
    FDIVRP                              ; 004df888
    FLD1                                ; 004df88a
    FSUBRP                              ; 004df88c
    FMUL double ptr [0x005e3ce1]        ; 004df88e | DAT_005e3ce1
    FSTP float ptr [EBP + 0x36]         ; 004df894
    FLD float ptr [EBP + 0x5a]          ; 004df897
        ;   Label: LAB_004df897
    FADD float ptr [EBP + 0x4a]         ; 004df89a
    FST float ptr [EBP + 0x3a]          ; 004df89d
    FADD float ptr [EBP + 0x36]         ; 004df8a0
    FST float ptr [EBP + 0x3e]          ; 004df8a3
    FLDZ                                ; 004df8a6
    FCOMPP                              ; 004df8a8
    FNSTSW AX                           ; 004df8aa
    SAHF                                ; 004df8ac
    JNC 0x004deef6                      ; 004df8ad
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x3e]         ; 004df8b3
    PUSH 0x0                            ; 004df8b6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004df8b8
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004df8bd
    LEA EDX,[EBX + 0x158]               ; 004df8c0
    ADD ESP,0x8                         ; 004df8c6
    MOV EAX,dword ptr [EBP + 0x76]      ; 004df8c9
    MOV dword ptr [EBP + 0x46],EAX      ; 004df8cc
    FLD float ptr [EBP + 0x46]          ; 004df8cf
    FCOMP float ptr [EBP + 0x5a]        ; 004df8d2
    FNSTSW AX                           ; 004df8d5
    SAHF                                ; 004df8d7
    JNC 0x004df908                      ; 004df8d8
        ;   XREF to: 004df908 (CONDITIONAL_JUMP)  ; LAB_004df908
    PUSH 0x1                            ; 004df8da
    PUSH 0x2                            ; 004df8dc
    PUSH EDX                            ; 004df8de
        ;   Label: LAB_004df8de
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004df8df
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004df8e4
    MOV dword ptr [EBX + 0xc1e4],0x3f333333 ; 004df8e7
    JMP 0x004deef6                      ; 004df8f1
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004df8f6
        ;   Label: LAB_004df8f6
    PUSH 0x0                            ; 004df8f8
    PUSH ESI                            ; 004df8fa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004df8fb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004df900
    JMP 0x004deef6                      ; 004df903
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBP + 0x46]          ; 004df908
        ;   Label: LAB_004df908
    FCOMP float ptr [EBP + 0x3a]        ; 004df90b
    FNSTSW AX                           ; 004df90e
    SAHF                                ; 004df910
    JNC 0x004df919                      ; 004df911
        ;   XREF to: 004df919 (CONDITIONAL_JUMP)  ; LAB_004df919
    PUSH 0x1                            ; 004df913
    PUSH 0xc                            ; 004df915
    JMP 0x004df8de                      ; 004df917
        ;   XREF to: 004df8de (UNCONDITIONAL_JUMP)  ; LAB_004df8de
    PUSH 0x1                            ; 004df919
        ;   Label: LAB_004df919
    PUSH 0xb                            ; 004df91b
    JMP 0x004df8de                      ; 004df91d
        ;   XREF to: 004df8de (UNCONDITIONAL_JUMP)  ; LAB_004df8de
    CMP dword ptr [EBX + 0xc278],0x0    ; 004df91f
        ;   Label: LAB_004df91f
    JL 0x004dfa8f                       ; 004df926
        ;   XREF to: 004dfa8f (CONDITIONAL_JUMP)  ; LAB_004dfa8f
    MOV EDI,dword ptr [EBX + 0xc278]    ; 004df92c
        ;   Label: LAB_004df92c
    TEST EDI,EDI                        ; 004df932
    JZ 0x004dfac2                       ; 004df934
        ;   XREF to: 004dfac2 (CONDITIONAL_JUMP)  ; LAB_004dfac2
    MOV EAX,[0x006012c4]                ; 004df93a | DAT_006012c4
    MOV dword ptr [EBP + 0x52],EAX      ; 004df93f
    CMP EDI,0xe                         ; 004df942
    JNZ 0x004df94f                      ; 004df945
        ;   XREF to: 004df94f (CONDITIONAL_JUMP)  ; LAB_004df94f
    MOV EAX,[0x006012c8]                ; 004df947 | DAT_006012c8
    MOV dword ptr [EBP + 0x52],EAX      ; 004df94c
    PUSH 0x3db2b8c2                     ; 004df94f
        ;   Label: LAB_004df94f
    MOV EAX,dword ptr [EBP + 0x52]      ; 004df954
    PUSH 0x3f000000                     ; 004df957
    MOV dword ptr [EBP + 0xfffffdc6],EAX ; 004df95c
    LEA EAX,[EBP + 0xfffffdbe]          ; 004df962
    XOR EDX,EDX                         ; 004df968
    PUSH EAX                            ; 004df96a
    MOV EAX,[0x01d06ab4]                ; 004df96b | DAT_01d06ab4
    MOV dword ptr [EBP + 0xfffffdbe],EDX ; 004df970
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004df976
    MOV dword ptr [EBP + 0xfffffdc2],EDX ; 004df97d
    PUSH EAX                            ; 004df983
    MOV EDX,dword ptr [EAX + 0x154]     ; 004df984
    CALL dword ptr [EDX + 0xc4]         ; 004df98a
    ADD ESP,0x4                         ; 004df990
    PUSH EAX                            ; 004df993
    MOV EAX,[0x01d06ab4]                ; 004df994 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004df999
    PUSH 0x0                            ; 004df9a0
    ADD EAX,0x158                       ; 004df9a2
    PUSH EAX                            ; 004df9a7
    LEA ESI,[EBP + 0xfffffed2]          ; 004df9a8
    LEA EDI,[EBP + 0xfffffd9a]          ; 004df9ae
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 004df9b4
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004df9b9
    LEA EAX,[EBP + 0xfffffd9a]          ; 004df9bc
    LEA ESI,[EBP + 0xfffffed2]          ; 004df9c2
    PUSH EAX                            ; 004df9c8
    MOV EAX,[0x01d06ab4]                ; 004df9c9 | DAT_01d06ab4
    MOVSD ES:EDI,ESI                    ; 004df9ce
    MOVSD ES:EDI,ESI                    ; 004df9cf
    MOVSD ES:EDI,ESI                    ; 004df9d0
    MOV ESI,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004df9d1
    PUSH ESI                            ; 004df9d8
    LEA ESI,[EBP + 0xfffffe72]          ; 004df9d9
    CALL core_actor.cpp_FUN_00408b40    ; 004df9df
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004df9e4
    LEA EAX,[EBP + 0xfffffdee]          ; 004df9e7
    PUSH EAX                            ; 004df9ed
    LEA EDI,[EBP + 0xfffffdee]          ; 004df9ee
    LEA ESI,[EBP + 0xfffffe72]          ; 004df9f4
    PUSH EBX                            ; 004df9fa
    MOVSD ES:EDI,ESI                    ; 004df9fb
    MOVSD ES:EDI,ESI                    ; 004df9fc
    MOVSD ES:EDI,ESI                    ; 004df9fd
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 004df9fe
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004dfa03
    TEST EAX,EAX                        ; 004dfa06
    JLE 0x004deef6                      ; 004dfa08
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x01d06ab4]                ; 004dfa0e | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004dfa13
    PUSH EAX                            ; 004dfa1a
    MOV EDX,dword ptr [EAX + 0x154]     ; 004dfa1b
    CALL dword ptr [EDX + 0x10c]        ; 004dfa21
    ADD ESP,0x4                         ; 004dfa27
    CMP EAX,0x2                         ; 004dfa2a
    JNZ 0x004deef6                      ; 004dfa2d
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004dfa33
    MOV EDI,dword ptr [EBX + 0xc278]    ; 004dfa35
    PUSH EDI                            ; 004dfa3b
    LEA EAX,[EBX + 0x158]               ; 004dfa3c
    PUSH EAX                            ; 004dfa42
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004dfa43
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBX + 0xc278]    ; 004dfa48
    ADD ESP,0xc                         ; 004dfa4e
    CMP EAX,0xd                         ; 004dfa51
    JNZ 0x004deef6                      ; 004dfa54
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x3f99999a                     ; 004dfa5a
    PUSH 0x3f000000                     ; 004dfa5f
    MOV ESI,dword ptr [EBX + 0x154]     ; 004dfa64
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004dfa6a
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    ADD ESP,0x8                         ; 004dfa6f
    MOV dword ptr [EBP + 0x76],EAX      ; 004dfa72
    SUB ESP,0x4                         ; 004dfa75
    MOV EAX,dword ptr [EBP + 0x76]      ; 004dfa78
    MOV dword ptr [ESP],EAX             ; 004dfa7b
    PUSH 0x5e3c4d                       ; 004dfa7e | = "ghoul-scream-!-?.wav"
    PUSH EBX                            ; 004dfa83
    CALL dword ptr [ESI + 0x34]         ; 004dfa84
    ADD ESP,0xc                         ; 004dfa87
    JMP 0x004deef6                      ; 004dfa8a
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EDX,dword ptr [EBX + 0xc290]    ; 004dfa8f
        ;   Label: LAB_004dfa8f
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x2298] ; 004dfa95
    XOR EAX,EAX                         ; 004dfa9c
    TEST ECX,ECX                        ; 004dfa9e
    JZ 0x004dfaa7                       ; 004dfaa0
        ;   XREF to: 004dfaa7 (CONDITIONAL_JUMP)  ; LAB_004dfaa7
    MOV EAX,0x1                         ; 004dfaa2
    MOV EDX,dword ptr [EBX + 0xc298]    ; 004dfaa7
        ;   Label: LAB_004dfaa7
    CMP dword ptr [EBX + EDX*0x4 + 0x2298],0x0 ; 004dfaad
    JZ 0x004dfab8                       ; 004dfab5
        ;   XREF to: 004dfab8 (CONDITIONAL_JUMP)  ; LAB_004dfab8
    INC EAX                             ; 004dfab7
    TEST EAX,EAX                        ; 004dfab8
        ;   Label: LAB_004dfab8
    JNZ 0x004dfada                      ; 004dfaba
        ;   XREF to: 004dfada (CONDITIONAL_JUMP)  ; LAB_004dfada
    MOV dword ptr [EBX + 0xc278],EAX    ; 004dfabc
    PUSH 0x1                            ; 004dfac2
        ;   Label: LAB_004dfac2
    PUSH 0x0                            ; 004dfac4
    LEA EAX,[EBX + 0x158]               ; 004dfac6
    PUSH EAX                            ; 004dfacc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004dfacd
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004dfad2
    JMP 0x004deef6                      ; 004dfad5
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    CMP EAX,0x1                         ; 004dfada
        ;   Label: LAB_004dfada
    JNZ 0x004dfafd                      ; 004dfadd
        ;   XREF to: 004dfafd (CONDITIONAL_JUMP)  ; LAB_004dfafd
    MOV EAX,[0x0061d95c]                ; 004dfadf | g_CGamePtr
    MOV dword ptr [EBX + 0xc278],0xe    ; 004dfae4
    MOV dword ptr [EAX + 0x23c],0x1     ; 004dfaee | g_CGameInstance.player_hit_flag
    JMP 0x004df92c                      ; 004dfaf8
        ;   XREF to: 004df92c (UNCONDITIONAL_JUMP)  ; LAB_004df92c
    PUSH 0x3f000000                     ; 004dfafd
        ;   Label: LAB_004dfafd
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004dfb02
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004dfb07
    TEST EAX,EAX                        ; 004dfb0a
    SETZ AL                             ; 004dfb0c
    AND EAX,0xff                        ; 004dfb0f
    ADD EAX,0xd                         ; 004dfb14
    MOV dword ptr [EBX + 0xc278],EAX    ; 004dfb17
    MOV EAX,[0x0061d95c]                ; 004dfb1d | g_CGamePtr
    MOV dword ptr [EAX + 0x23c],0x1     ; 004dfb22 | g_CGameInstance.player_hit_flag
    JMP 0x004df92c                      ; 004dfb2c
        ;   XREF to: 004df92c (UNCONDITIONAL_JUMP)  ; LAB_004df92c
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004dfb31
        ;   Label: caseD_2
    TEST EAX,EAX                        ; 004dfb37
    JZ 0x004df445                       ; 004dfb39
        ;   XREF to: 004df445 (CONDITIONAL_JUMP)  ; LAB_004df445
    PUSH EAX                            ; 004dfb3f
    MOV EDX,dword ptr [EAX + 0x154]     ; 004dfb40
    CALL dword ptr [EDX + 0xf4]         ; 004dfb46
    ADD ESP,0x4                         ; 004dfb4c
    TEST EAX,EAX                        ; 004dfb4f
    JZ 0x004dfb65                       ; 004dfb51
        ;   XREF to: 004dfb65 (CONDITIONAL_JUMP)  ; LAB_004dfb65
    PUSH 0x1                            ; 004dfb53
    PUSH 0x1                            ; 004dfb55
    PUSH ESI                            ; 004dfb57
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004dfb58
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004dfb5d
    JMP 0x004deef6                      ; 004dfb60
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x3f000000                     ; 004dfb65
        ;   Label: LAB_004dfb65
    PUSH 0x3e4ccccd                     ; 004dfb6a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004dfb6f
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004dfb74
    FLD float ptr [EBP + 0x76]          ; 004dfb77
    MOV EAX,dword ptr [EBX + 0xc298]    ; 004dfb7a
    FSTP float ptr [EBX + 0xc1e4]       ; 004dfb80
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004dfb86
    ADD ESP,0x8                         ; 004dfb8d
    TEST EDX,EDX                        ; 004dfb90
    JZ 0x004deef6                       ; 004dfb92
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH ESI                            ; 004dfb98
    CALL core_motion.cpp_FUN_00525020   ; 004dfb99
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004dfb9e
    ADD ESP,0x4                         ; 004dfba1
    MOV EAX,dword ptr [EBP + 0x76]      ; 004dfba4
    MOV dword ptr [EBP + 0x2e],EAX      ; 004dfba7
    FLD float ptr [EBP + 0x2e]          ; 004dfbaa
    FST double ptr [EBP + -0x36]        ; 004dfbad
    FCOMP double ptr [0x005e3cc1]       ; 004dfbb0 | DAT_005e3cc1
    FNSTSW AX                           ; 004dfbb6
    SAHF                                ; 004dfbb8
    JA 0x004deef6                       ; 004dfbb9
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x006012bc]                ; 004dfbbf | DAT_006012bc
    FLD1                                ; 004dfbc4
    MOV dword ptr [EBP + 0x62],EAX      ; 004dfbc6
    FCOMP double ptr [EBP + -0x36]      ; 004dfbc9
    FNSTSW AX                           ; 004dfbcc
    SAHF                                ; 004dfbce
    JA 0x004deef6                       ; 004dfbcf
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    LEA EAX,[EBP + 0xfffffc4e]          ; 004dfbd5
    PUSH EAX                            ; 004dfbdb
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004dfbdc
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004dfbe1
    PUSH 0x41700000                     ; 004dfbe4
    PUSH 0x40e00000                     ; 004dfbe9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004dfbee
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004dfbf3
    MOV EAX,dword ptr [EBP + 0x76]      ; 004dfbf6
    MOV dword ptr [EBP + 0xfffffc52],EAX ; 004dfbf9
    MOV ECX,dword ptr [EBX + 0xc2d0]    ; 004dfbff
    ADD ESP,0x8                         ; 004dfc05
    TEST ECX,ECX                        ; 004dfc08
    JZ 0x004dfc22                       ; 004dfc0a
        ;   XREF to: 004dfc22 (CONDITIONAL_JUMP)  ; LAB_004dfc22
    FLD float ptr [EBP + 0xfffffc52]    ; 004dfc0c
    FLD ST0                             ; 004dfc12
    FMUL double ptr [0x005e3cc1]        ; 004dfc14 | DAT_005e3cc1
    FSTP ST1                            ; 004dfc1a
    FSTP float ptr [EBP + 0xfffffc52]   ; 004dfc1c
    LEA EAX,[EBP + 0xfffffc4e]          ; 004dfc22
        ;   Label: LAB_004dfc22
    MOV EDX,dword ptr [0x01cd0da0]      ; 004dfc28 | DAT_01cd0da0
    PUSH EAX                            ; 004dfc2e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dfc2f
    MOV dword ptr [EBP + 0xfffffc82],EBX ; 004dfc36
    SUB EAX,EDX                         ; 004dfc3c
    MOV dword ptr [EBP + 0xfffffc86],EBX ; 004dfc3e
    SHL EAX,0x4                         ; 004dfc44
    LEA EDX,[EBX + 0xfd8]               ; 004dfc47
    ADD EAX,EDX                         ; 004dfc4d
    PUSH 0x3e4ccccd                     ; 004dfc4f
    PUSH EAX                            ; 004dfc54
    PUSH 0x1cd0d50                      ; 004dfc55
    LEA ESI,[EBP + 0xffffff02]          ; 004dfc5a
    LEA EDI,[EBP + 0xfffffe2a]          ; 004dfc60
    CALL core_xform.cpp_FUN_005b5080    ; 004dfc66
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 004dfc6b
    LEA EAX,[EBP + 0xfffffe2a]          ; 004dfc6e
    LEA ESI,[EBP + 0xffffff02]          ; 004dfc74
    PUSH EAX                            ; 004dfc7a
    MOVSD ES:EDI,ESI                    ; 004dfc7b
    MOVSD ES:EDI,ESI                    ; 004dfc7c
    MOVSD ES:EDI,ESI                    ; 004dfc7d
    PUSH EBX                            ; 004dfc7e
    LEA ESI,[EBP + 0xffffff1a]          ; 004dfc7f
    CALL core_actor.cpp_FUN_00408b40    ; 004dfc85
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004dfc8a
    LEA EAX,[EBP + 0xffffff6e]          ; 004dfc8d
    PUSH EAX                            ; 004dfc93
    LEA EDI,[EBP + 0xffffff6e]          ; 004dfc94
    LEA ESI,[EBP + 0xffffff1a]          ; 004dfc9a
    PUSH EBX                            ; 004dfca0
    MOVSD ES:EDI,ESI                    ; 004dfca1
    MOVSD ES:EDI,ESI                    ; 004dfca2
    MOVSD ES:EDI,ESI                    ; 004dfca3
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 004dfca4
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004dfca9
    TEST EAX,EAX                        ; 004dfcac
    JZ 0x004deef6                       ; 004dfcae
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x5e3c62                       ; 004dfcb4 | = "gh-hits?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dfcb9
    PUSH EBX                            ; 004dfcbf
    CALL dword ptr [EAX + 0x2c]         ; 004dfcc0
    ADD ESP,0x8                         ; 004dfcc3
    JMP 0x004deef6                      ; 004dfcc6
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 004dfccb
        ;   Label: caseD_c
    TEST ECX,ECX                        ; 004dfcd1
    JZ 0x004dfce9                       ; 004dfcd3
        ;   XREF to: 004dfce9 (CONDITIONAL_JUMP)  ; LAB_004dfce9
    PUSH ECX                            ; 004dfcd5
    MOV EDX,dword ptr [ECX + 0x154]     ; 004dfcd6
    CALL dword ptr [EDX + 0xf4]         ; 004dfcdc
    ADD ESP,0x4                         ; 004dfce2
    TEST EAX,EAX                        ; 004dfce5
    JZ 0x004dfcfb                       ; 004dfce7
        ;   XREF to: 004dfcfb (CONDITIONAL_JUMP)  ; LAB_004dfcfb
    PUSH 0x1                            ; 004dfce9
        ;   Label: LAB_004dfce9
    PUSH 0x1                            ; 004dfceb
    PUSH ESI                            ; 004dfced
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004dfcee
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004dfcf3
    JMP 0x004deef6                      ; 004dfcf6
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x3f000000                     ; 004dfcfb
        ;   Label: LAB_004dfcfb
    PUSH 0x3e4ccccd                     ; 004dfd00
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004dfd05
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004dfd0a
    FLD float ptr [EBP + 0x76]          ; 004dfd0d
    MOV EAX,dword ptr [EBX + 0xc290]    ; 004dfd10
    FSTP float ptr [EBX + 0xc1e4]       ; 004dfd16
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004dfd1c
    ADD ESP,0x8                         ; 004dfd23
    TEST EDI,EDI                        ; 004dfd26
    JZ 0x004deef6                       ; 004dfd28
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH ESI                            ; 004dfd2e
    CALL core_motion.cpp_FUN_00525020   ; 004dfd2f
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004dfd34
    ADD ESP,0x4                         ; 004dfd37
    MOV EAX,dword ptr [EBP + 0x76]      ; 004dfd3a
    MOV dword ptr [EBP + 0x2a],EAX      ; 004dfd3d
    FLD float ptr [EBP + 0x2a]          ; 004dfd40
    FST double ptr [EBP + -0x1e]        ; 004dfd43
    FCOMP double ptr [0x005e3cc1]       ; 004dfd46 | DAT_005e3cc1
    FNSTSW AX                           ; 004dfd4c
    SAHF                                ; 004dfd4e
    JA 0x004deef6                       ; 004dfd4f
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x006012c0]                ; 004dfd55 | DAT_006012c0
    FLD1                                ; 004dfd5a
    MOV dword ptr [EBP + 0x62],EAX      ; 004dfd5c
    FCOMP double ptr [EBP + -0x1e]      ; 004dfd5f
    FNSTSW AX                           ; 004dfd62
    SAHF                                ; 004dfd64
    JA 0x004deef6                       ; 004dfd65
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    LEA EAX,[EBP + 0xfffffc12]          ; 004dfd6b
    PUSH EAX                            ; 004dfd71
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004dfd72
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004dfd77
    PUSH 0x41700000                     ; 004dfd7a
    PUSH 0x40e00000                     ; 004dfd7f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004dfd84
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004dfd89
    MOV EAX,dword ptr [EBP + 0x76]      ; 004dfd8c
    MOV dword ptr [EBP + 0xfffffc16],EAX ; 004dfd8f
    MOV EAX,dword ptr [EBX + 0xc2d0]    ; 004dfd95
    ADD ESP,0x8                         ; 004dfd9b
    TEST EAX,EAX                        ; 004dfd9e
    JZ 0x004dfdb8                       ; 004dfda0
        ;   XREF to: 004dfdb8 (CONDITIONAL_JUMP)  ; LAB_004dfdb8
    FLD float ptr [EBP + 0xfffffc16]    ; 004dfda2
    FLD ST0                             ; 004dfda8
    FMUL double ptr [0x005e3cc1]        ; 004dfdaa | DAT_005e3cc1
    FSTP ST1                            ; 004dfdb0
    FSTP float ptr [EBP + 0xfffffc16]   ; 004dfdb2
    LEA EAX,[EBP + 0xfffffc12]          ; 004dfdb8
        ;   Label: LAB_004dfdb8
    MOV EDX,dword ptr [0x01cd0d9c]      ; 004dfdbe | DAT_01cd0d9c
    PUSH EAX                            ; 004dfdc4
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dfdc5
    SUB EAX,EDX                         ; 004dfdcc
    MOV dword ptr [EBP + 0xfffffc46],EBX ; 004dfdce
    MOV EDX,EAX                         ; 004dfdd4
    MOV dword ptr [EBP + 0xfffffc4a],EBX ; 004dfdd6
    SHL EDX,0x4                         ; 004dfddc
    LEA EAX,[EBX + 0xfd8]               ; 004dfddf
    ADD EAX,EDX                         ; 004dfde5
    PUSH 0x3ecccccd                     ; 004dfde7
    PUSH EAX                            ; 004dfdec
    PUSH 0x1cd0d44                      ; 004dfded
    LEA ESI,[EBP + 0xfffffe42]          ; 004dfdf2
    LEA EDI,[EBP + 0xfffffdfa]          ; 004dfdf8
    CALL core_xform.cpp_FUN_005b5080    ; 004dfdfe
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 004dfe03
    LEA EAX,[EBP + 0xfffffdfa]          ; 004dfe06
    LEA ESI,[EBP + 0xfffffe42]          ; 004dfe0c
    PUSH EAX                            ; 004dfe12
    MOVSD ES:EDI,ESI                    ; 004dfe13
    MOVSD ES:EDI,ESI                    ; 004dfe14
    MOVSD ES:EDI,ESI                    ; 004dfe15
    PUSH EBX                            ; 004dfe16
    LEA ESI,[EBP + -0x6e]               ; 004dfe17
    CALL core_actor.cpp_FUN_00408b40    ; 004dfe1a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004dfe1f
    LEA EAX,[EBP + 0xfffffe06]          ; 004dfe22
    PUSH EAX                            ; 004dfe28
    LEA EDI,[EBP + 0xfffffe06]          ; 004dfe29
    LEA ESI,[EBP + -0x6e]               ; 004dfe2f
    PUSH EBX                            ; 004dfe32
    MOVSD ES:EDI,ESI                    ; 004dfe33
    MOVSD ES:EDI,ESI                    ; 004dfe34
    MOVSD ES:EDI,ESI                    ; 004dfe35
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 004dfe36
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004dfe3b
    TEST EAX,EAX                        ; 004dfe3e
    JZ 0x004deef6                       ; 004dfe40
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x5e3c6f                       ; 004dfe46 | = "gh-hits?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dfe4b
    PUSH EBX                            ; 004dfe51
    CALL dword ptr [EAX + 0x2c]         ; 004dfe52
    ADD ESP,0x8                         ; 004dfe55
    JMP 0x004deef6                      ; 004dfe58
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004dfe5d
        ;   Label: caseD_b
    TEST EDX,EDX                        ; 004dfe63
    JZ 0x004dfce9                       ; 004dfe65
        ;   XREF to: 004dfce9 (CONDITIONAL_JUMP)  ; LAB_004dfce9
    MOV EAX,EDX                         ; 004dfe6b
    PUSH EAX                            ; 004dfe6d
    MOV EDX,dword ptr [EDX + 0x154]     ; 004dfe6e
    CALL dword ptr [EDX + 0xf4]         ; 004dfe74
    ADD ESP,0x4                         ; 004dfe7a
    TEST EAX,EAX                        ; 004dfe7d
    JNZ 0x004dfe8e                      ; 004dfe7f
        ;   XREF to: 004dfe8e (CONDITIONAL_JUMP)  ; LAB_004dfe8e
    MOV EAX,[0x006012b8]                ; 004dfe81 | DAT_006012b8
    MOV dword ptr [EBP + 0x62],EAX      ; 004dfe86
    JMP 0x004deef6                      ; 004dfe89
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004dfe8e
        ;   Label: LAB_004dfe8e
    PUSH EAX                            ; 004dfe94
    MOV EDX,dword ptr [EAX + 0x154]     ; 004dfe95
    CALL dword ptr [EDX + 0xf4]         ; 004dfe9b
    ADD ESP,0x4                         ; 004dfea1
    CMP EAX,EBX                         ; 004dfea4
    JZ 0x004deef6                       ; 004dfea6
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004dfeac
    PUSH 0x1                            ; 004dfeae
    PUSH ESI                            ; 004dfeb0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004dfeb1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004dfeb6
    JMP 0x004deef6                      ; 004dfeb9
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x01c43530]                ; 004dfebe | DAT_01c43530
        ;   Label: caseD_d
    MOV EDI,dword ptr [EBX + 0xc26c]    ; 004dfec3
    SUB EDI,EAX                         ; 004dfec9
    MOV dword ptr [EBX + 0xc26c],EDI    ; 004dfecb
    TEST EDI,EDI                        ; 004dfed1
    JG 0x004dff10                       ; 004dfed3
        ;   XREF to: 004dff10 (CONDITIONAL_JUMP)  ; LAB_004dff10
    PUSH 0x5e3c7c                       ; 004dfed5 | = "burp[1,2].wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dfeda
    PUSH EBX                            ; 004dfee0
    CALL dword ptr [EAX + 0x2c]         ; 004dfee1
    ADD ESP,0x8                         ; 004dfee4
    PUSH 0x41f00000                     ; 004dfee7
    PUSH 0x41700000                     ; 004dfeec
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004dfef1
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004dfef6
    FLD float ptr [EBP + 0x76]          ; 004dfef9
    FMUL double ptr [0x005e3cb9]        ; 004dfefc | DAT_005e3cb9
    ADD ESP,0x8                         ; 004dff02
    CALL crt_math.c_round_FUN_005c03a0  ; 004dff05
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBX + 0xc26c]      ; 004dff0a
    PUSH dword ptr [EBP + 0x92]         ; 004dff10
        ;   Label: LAB_004dff10
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dff16
    PUSH EBX                            ; 004dff1c
    CALL dword ptr [EAX + 0x144]        ; 004dff1d
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004dff23
    ADD ESP,0x8                         ; 004dff29
    TEST EDX,EDX                        ; 004dff2c
    JZ 0x004deef6                       ; 004dff2e
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004dff34
    PUSH 0x0                            ; 004dff36
    LEA EAX,[EBX + 0x158]               ; 004dff38
    PUSH EAX                            ; 004dff3e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004dff3f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004dff44
    JMP 0x004deef6                      ; 004dff47
        ;   XREF to: 004deef6 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV dword ptr [EBP + 0x62],0xbf800000 ; 004dff4c
        ;   Label: LAB_004dff4c
    LEA ESI,[EBX + 0x158]               ; 004dff53
    PUSH ESI                            ; 004dff59
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004dff5a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004dff5f
    ADD ESP,0x4                         ; 004dff62
    CMP EAX,0x11                        ; 004dff65
    JA 0x004deef6                       ; 004dff68
        ;   XREF to: 004deef6 (CONDITIONAL_JUMP)  ; caseD_10
    JMP dword ptr [EAX*0x4 + 0x4de2e8]  ; 004dff6e | caseD_0 | caseD_11 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x250c]              ; 004dff75
        ;   Label: LAB_004dff75
    FLD float ptr [EAX + 0x4]           ; 004dff7b
    FMUL ST0                            ; 004dff7e
    FLD float ptr [EAX]                 ; 004dff80
    FMUL ST0                            ; 004dff82
    FADDP                               ; 004dff84
    FLD float ptr [EAX + 0x8]           ; 004dff86
    FMUL ST0                            ; 004dff89
    FADDP                               ; 004dff8b
    FSQRT                               ; 004dff8d
    FCOMP double ptr [0x005e3d29]       ; 004dff8f | DAT_005e3d29
    FNSTSW AX                           ; 004dff95
    SAHF                                ; 004dff97
    JA 0x004de6df                       ; 004dff98
        ;   XREF to: 004de6df (CONDITIONAL_JUMP)  ; LAB_004de6df
    MOV ECX,dword ptr [EBX + 0xc268]    ; 004dff9e
    PUSH ECX                            ; 004dffa4
    MOV ESI,dword ptr [0x006236b8]      ; 004dffa5 | DAT_006236b8
    PUSH ESI                            ; 004dffab
    CALL core_sound.cpp_CSound_killSound_FUN_0057d9d0 ; 004dffac
        ;   XREF to: 0057d9d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_0057d9d0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004dffb1
    JMP 0x004de6fc                      ; 004dffb4
        ;   XREF to: 004de6fc (UNCONDITIONAL_JUMP)  ; LAB_004de6fc
    SUB ESP,0x8                         ; 004dffb9
        ;   Label: LAB_004dffb9
    FLD float ptr [EBX + 0xc1d0]        ; 004dffbc
    FSTP double ptr [ESP]               ; 004dffc2
    PUSH 0x5e3c8a                       ; 004dffc5 | = "ghoul-walk-?.wav *%f"
    LEA EAX,[EBP + 0xfffffbae]          ; 004dffca
    PUSH EAX                            ; 004dffd0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004dffd1
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004dffd6
    LEA EAX,[EBP + 0xfffffbae]          ; 004dffd9
    PUSH EAX                            ; 004dffdf
    MOV EDX,dword ptr [EBX + 0x154]     ; 004dffe0
    PUSH EBX                            ; 004dffe6
    CALL dword ptr [EDX + 0x30]         ; 004dffe7
    ADD ESP,0x8                         ; 004dffea
    MOV dword ptr [EBX + 0xc268],EAX    ; 004dffed
    JMP 0x004de6fc                      ; 004dfff3
        ;   XREF to: 004de6fc (UNCONDITIONAL_JUMP)  ; LAB_004de6fc
    MOV EAX,dword ptr [EBX + 0xc2b0]    ; 004dfff8
        ;   Label: LAB_004dfff8
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004dfffe
    JZ 0x004e00c5                       ; 004e0006
        ;   XREF to: 004e00c5 (CONDITIONAL_JUMP)  ; LAB_004e00c5
    MOV EAX,[0x01cd0dac]                ; 004e000c | DAT_01cd0dac
    PUSH 0x3e4ccccd                     ; 004e0011
    PUSH EAX                            ; 004e0016
    MOV EDX,dword ptr [EBX + 0xc28c]    ; 004e0017
    PUSH EDX                            ; 004e001d
    PUSH EBX                            ; 004e001e
    CALL core_charactr.cpp_FUN_00430a90 ; 004e001f
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    MOV EAX,dword ptr [EBX + 0xc28c]    ; 004e0024
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e002a
    ADD ESP,0x10                        ; 004e0031
    TEST ECX,ECX                        ; 004e0034
    JZ 0x004e0054                       ; 004e0036
        ;   XREF to: 004e0054 (CONDITIONAL_JUMP)  ; LAB_004e0054
    MOV ESI,dword ptr [0x01cd0da4]      ; 004e0038 | DAT_01cd0da4
    PUSH 0x3e4ccccd                     ; 004e003e
    PUSH ESI                            ; 004e0043
    MOV EDI,dword ptr [EBX + 0xc290]    ; 004e0044
    PUSH EDI                            ; 004e004a
    PUSH EBX                            ; 004e004b
    CALL core_charactr.cpp_FUN_00430a90 ; 004e004c
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    ADD ESP,0x10                        ; 004e0051
    MOV EAX,[0x01cd0db0]                ; 004e0054 | DAT_01cd0db0
        ;   Label: LAB_004e0054
    PUSH 0x3e4ccccd                     ; 004e0059
    PUSH EAX                            ; 004e005e
    MOV EDX,dword ptr [EBX + 0xc294]    ; 004e005f
    PUSH EDX                            ; 004e0065
    PUSH EBX                            ; 004e0066
    CALL core_charactr.cpp_FUN_00430a90 ; 004e0067
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    MOV EAX,dword ptr [EBX + 0xc294]    ; 004e006c
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e0072
    ADD ESP,0x10                        ; 004e0079
    TEST ECX,ECX                        ; 004e007c
    JZ 0x004e009c                       ; 004e007e
        ;   XREF to: 004e009c (CONDITIONAL_JUMP)  ; LAB_004e009c
    MOV ESI,dword ptr [0x01cd0da8]      ; 004e0080 | DAT_01cd0da8
    PUSH 0x3e4ccccd                     ; 004e0086
    PUSH ESI                            ; 004e008b
    MOV EDI,dword ptr [EBX + 0xc298]    ; 004e008c
    PUSH EDI                            ; 004e0092
    PUSH EBX                            ; 004e0093
    CALL core_charactr.cpp_FUN_00430a90 ; 004e0094
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    ADD ESP,0x10                        ; 004e0099
    MOV EAX,[0x01cd0d98]                ; 004e009c | DAT_01cd0d98
        ;   Label: LAB_004e009c
    PUSH 0x3f333333                     ; 004e00a1
    PUSH EAX                            ; 004e00a6
    MOV EDX,dword ptr [EBX + 0xc2b4]    ; 004e00a7
    PUSH EDX                            ; 004e00ad
    PUSH EBX                            ; 004e00ae
        ;   Label: LAB_004e00ae
    CALL core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00430b60 ; 004e00af
        ;   XREF to: 00430b60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00430b60(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 004e00b4
    PUSH EBX                            ; 004e00b7
    CALL core_charactr.cpp_FUN_00430960 ; 004e00b8
        ;   XREF to: 00430960 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430960()
    ADD ESP,0x4                         ; 004e00bd
    JMP 0x004de709                      ; 004e00c0
        ;   XREF to: 004de709 (UNCONDITIONAL_JUMP)  ; LAB_004de709
    MOV ESI,dword ptr [0x01cd0dc0]      ; 004e00c5 | DAT_01cd0dc0
        ;   Label: LAB_004e00c5
    PUSH 0x3f000000                     ; 004e00cb
    PUSH ESI                            ; 004e00d0
    PUSH EAX                            ; 004e00d1
    JMP 0x004e00ae                      ; 004e00d2
        ;   XREF to: 004e00ae (UNCONDITIONAL_JUMP)  ; LAB_004e00ae
    MOV dword ptr [EBX + 0xc2d4],0x3f800000 ; 004e00d4
        ;   Label: LAB_004e00d4
    JMP 0x004de7c8                      ; 004e00de
        ;   XREF to: 004de7c8 (UNCONDITIONAL_JUMP)  ; LAB_004de7c8
    MOV EDX,dword ptr [EBX]             ; 004e00e3
        ;   Label: LAB_004e00e3
    MOV dword ptr [EAX],EDX             ; 004e00e5
    MOV EDX,dword ptr [EBX + 0x4]       ; 004e00e7
    MOV dword ptr [EAX + 0x4],EDX       ; 004e00ea
    MOV EDX,dword ptr [EBX + 0x8]       ; 004e00ed
    MOV dword ptr [EAX + 0x8],EDX       ; 004e00f0
    LEA ESP,[EBP + 0x7a]                ; 004e00f3
    POP EBP                             ; 004e00f6
    POP EDI                             ; 004e00f7
    POP ESI                             ; 004e00f8
    POP EBX                             ; 004e00f9
    RET                                 ; 004e00fa

