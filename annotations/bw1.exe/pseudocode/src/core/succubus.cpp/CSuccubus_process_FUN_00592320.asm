; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_succubus_cpp_CSuccubus_process_FUN_00592320(CSuccubus *this_ptr,float delta_time)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 s_s_confused_while_walking_005f7355+1
;   TerminatedCString s_succubus_morph_wav_005f7380
;   TerminatedCString s_hdwing_cth_005f7393
;   undefined4 s_hdwing_cth_005f7393+1
;   undefined4 s_hdwing_cth_005f7393+2
;   undefined4 s_hdwing_cth_005f7393+3
;   TerminatedCString s_succubusShutUp_005f739e
;   TerminatedCString s_succubus_horny_wav_005f73ad
;   undefined4 DAT_00606268
;   undefined4 DAT_00606274
;   undefined4 DAT_00606278
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061f650
;   CConsole g_CConsoleInstance
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00435320
;   core_cloth.cpp_CClothList_process_FUN_00441fa0
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_hotdemon.cpp_CHotDemon_ctor_FUN_004efa10
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00592320
        ;   Label: core_succubus.cpp_CSuccubus_process_FUN_00592320
    PUSH ESI                            ; 00592321
    PUSH EDI                            ; 00592322
    PUSH EBP                            ; 00592323
    MOV EBP,ESP                         ; 00592324
    SUB ESP,0x9c                        ; 00592326
    SUB EBP,0x7a                        ; 0059232c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0059232f
    PUSH dword ptr [EBP + 0x92]         ; 00592335
    PUSH EBX                            ; 0059233b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 0059233c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00592341
    TEST EAX,EAX                        ; 00592344
    JZ 0x005927b7                       ; 00592346
        ;   XREF to: 005927b7 (CONDITIONAL_JUMP)  ; LAB_005927b7
    LEA EAX,[EBX + 0x249c]              ; 0059234c
    MOV dword ptr [EAX + 0x8],0x0       ; 00592352
    FLD float ptr [EBP + 0x92]          ; 00592359
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059235f
    MOV dword ptr [EAX + 0x4],EDX       ; 00592362
    MOV EDX,dword ptr [EAX + 0x4]       ; 00592365
    MOV dword ptr [EAX],EDX             ; 00592368
    FMUL float ptr [EBX + 0xc1d0]       ; 0059236a
    LEA ESI,[EBX + 0x158]               ; 00592370
    FSTP float ptr [EBP + 0x62]         ; 00592376
    FLD float ptr [EBP + 0x62]          ; 00592379
        ;   Label: LAB_00592379
    FLDZ                                ; 0059237c
    FCOMPP                              ; 0059237e
    FNSTSW AX                           ; 00592380
    SAHF                                ; 00592382
    JC 0x005923cd                       ; 00592383
        ;   XREF to: 005923cd (CONDITIONAL_JUMP)  ; LAB_005923cd
    LEA EAX,[EBX + 0xe5ac]              ; 00592385
    MOV dword ptr [EAX + 0x8],0x0       ; 0059238b
    FLD float ptr [EBP + 0x92]          ; 00592392
    MOV EDX,dword ptr [EAX + 0x8]       ; 00592398
    MOV dword ptr [EAX + 0x4],EDX       ; 0059239b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059239e
    MOV dword ptr [EAX],EDX             ; 005923a1
    FMUL float ptr [EBX + 0xc1d0]       ; 005923a3
    LEA ESI,[EBX + 0xc268]              ; 005923a9
    FSTP float ptr [EBP + 0x62]         ; 005923af
    FLD float ptr [EBP + 0x62]          ; 005923b2
        ;   Label: LAB_005923b2
    FLDZ                                ; 005923b5
    FCOMPP                              ; 005923b7
    FNSTSW AX                           ; 005923b9
    SAHF                                ; 005923bb
    JNC 0x005923e6                      ; 005923bc
        ;   XREF to: 005923e6 (CONDITIONAL_JUMP)  ; LAB_005923e6
    LEA EAX,[EBP + 0x62]                ; 005923be
    PUSH EAX                            ; 005923c1
    PUSH ESI                            ; 005923c2
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 005923c3
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005923c8
    JMP 0x005923b2                      ; 005923cb
        ;   XREF to: 005923b2 (UNCONDITIONAL_JUMP)  ; LAB_005923b2
    LEA EAX,[EBP + 0x62]                ; 005923cd
        ;   Label: LAB_005923cd
    PUSH EAX                            ; 005923d0
    PUSH ESI                            ; 005923d1
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 005923d2
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005923d7
    PUSH EAX                            ; 005923da
    PUSH EBX                            ; 005923db
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 005923dc
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005923e1
    JMP 0x00592379                      ; 005923e4
        ;   XREF to: 00592379 (UNCONDITIONAL_JUMP)  ; LAB_00592379
    FLD float ptr [EBP + 0x92]          ; 005923e6
        ;   Label: LAB_005923e6
    FMUL float ptr [EBX + 0xc1d0]       ; 005923ec
    SUB ESP,0x4                         ; 005923f2
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 005923f5
    MOV dword ptr [EBX + 0x2524],EAX    ; 005923fb
    FSTP float ptr [ESP]                ; 00592401
    PUSH EBX                            ; 00592404
    CALL core_charactr.cpp_FUN_00435320 ; 00592405
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 0059240a
    LEA EAX,[EBX + 0x158]               ; 0059240d
    PUSH EAX                            ; 00592413
    MOV dword ptr [EBP + 0x6e],EAX      ; 00592414
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00592417
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059241c
    PUSH dword ptr [EBP + 0x92]         ; 0059241f
    PUSH EBX                            ; 00592425
    MOV ESI,dword ptr [EAX + 0x24]      ; 00592426
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 00592429
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059242e
    TEST EAX,EAX                        ; 00592431
    JZ 0x00592a1d                       ; 00592433
        ;   XREF to: 00592a1d (CONDITIONAL_JUMP)  ; LAB_00592a1d
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00592439
    CMP EAX,0x2                         ; 0059243f
    JNC 0x005927e6                      ; 00592442
        ;   XREF to: 005927e6 (CONDITIONAL_JUMP)  ; LAB_005927e6
    CMP EAX,0x1                         ; 00592448
    JNZ 0x005927f1                      ; 0059244b
        ;   XREF to: 005927f1 (CONDITIONAL_JUMP)  ; LAB_005927f1
    PUSH 0x1                            ; 00592451
        ;   Label: LAB_00592451
    PUSH 0x1                            ; 00592453
    LEA EAX,[EBX + 0x158]               ; 00592455
        ;   Label: LAB_00592455
    PUSH EAX                            ; 0059245b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0059245c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00592461
        ;   Label: LAB_00592461
    LEA EAX,[EBX + 0x249c]              ; 00592464
    MOV dword ptr [EAX + 0x8],0x0       ; 0059246a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00592471
    MOV dword ptr [EAX + 0x4],EDX       ; 00592474
    MOV EDX,dword ptr [EAX + 0x4]       ; 00592477
    MOV dword ptr [EAX],EDX             ; 0059247a
    FLD float ptr [EBX + 0xc1e4]        ; 0059247c
        ;   Label: LAB_0059247c
    FLDZ                                ; 00592482
    FCOMPP                              ; 00592484
    FNSTSW AX                           ; 00592486
    SAHF                                ; 00592488
    JNC 0x0059249d                      ; 00592489
        ;   XREF to: 0059249d (CONDITIONAL_JUMP)  ; LAB_0059249d
    FLD float ptr [EBX + 0xc1e4]        ; 0059248b
    FSUB float ptr [EBP + 0x92]         ; 00592491
    FSTP float ptr [EBX + 0xc1e4]       ; 00592497
    PUSH EBX                            ; 0059249d
        ;   Label: LAB_0059249d
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 0059249e
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005924a3
    TEST EAX,EAX                        ; 005924a6
    JZ 0x00592585                       ; 005924a8
        ;   XREF to: 00592585 (CONDITIONAL_JUMP)  ; LAB_00592585
    PUSH dword ptr [EBP + 0x92]         ; 005924ae
    PUSH EBX                            ; 005924b4
    LEA ESI,[EBX + 0x2518]              ; 005924b5
    CALL core_charactr.cpp_FUN_0042d700 ; 005924bb
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 005924c0
    FMUL float ptr [EBP + 0x92]         ; 005924c2
    FLD float ptr [ESI + 0x4]           ; 005924c8
    FMUL float ptr [EBP + 0x92]         ; 005924cb
    FLD float ptr [ESI + 0x8]           ; 005924d1
    FMUL float ptr [EBP + 0x92]         ; 005924d4
    LEA EDI,[EBP + -0x22]               ; 005924da
    LEA ESI,[EBP + 0x2]                 ; 005924dd
    FXCH ST2                            ; 005924e0
    FSTP float ptr [EBP + 0x2]          ; 005924e2
    FSTP float ptr [EBP + 0x6]          ; 005924e5
    FSTP float ptr [EBP + 0xa]          ; 005924e8
    MOVSD ES:EDI,ESI                    ; 005924eb
    MOVSD ES:EDI,ESI                    ; 005924ec
    MOVSD ES:EDI,ESI                    ; 005924ed
    LEA EAX,[EBX + 0x250c]              ; 005924ee
    FLD float ptr [EBP + -0x22]         ; 005924f4
    FLD float ptr [EBP + -0x1e]         ; 005924f7
    FLD float ptr [EBP + -0x1a]         ; 005924fa
    LEA EDI,[EBP + 0x1a]                ; 005924fd
    LEA ESI,[EBP + 0x56]                ; 00592500
    FXCH ST2                            ; 00592503
    FADD float ptr [EAX]                ; 00592505
    FXCH                                ; 00592507
    FADD float ptr [EAX + 0x4]          ; 00592509
    FXCH ST2                            ; 0059250c
    FADD float ptr [EAX + 0x8]          ; 0059250e
    FXCH                                ; 00592511
    FSTP float ptr [EBP + 0x56]         ; 00592513
    FXCH                                ; 00592516
    FSTP float ptr [EBP + 0x5a]         ; 00592518
    FSTP float ptr [EBP + 0x5e]         ; 0059251b
    MOVSD ES:EDI,ESI                    ; 0059251e
    MOVSD ES:EDI,ESI                    ; 0059251f
    MOVSD ES:EDI,ESI                    ; 00592520
    LEA EDX,[EBX + 0x249c]              ; 00592521
    FLD float ptr [EBP + 0x1a]          ; 00592527
    FLD float ptr [EBP + 0x1e]          ; 0059252a
    FLD float ptr [EBP + 0x22]          ; 0059252d
    LEA EDI,[EBP + 0x26]                ; 00592530
    LEA ESI,[EBP + 0xe]                 ; 00592533
    FXCH ST2                            ; 00592536
    FADD float ptr [EDX]                ; 00592538
    FXCH                                ; 0059253a
    FADD float ptr [EDX + 0x4]          ; 0059253c
    FXCH ST2                            ; 0059253f
    FADD float ptr [EDX + 0x8]          ; 00592541
    FXCH                                ; 00592544
    FSTP float ptr [EBP + 0xe]          ; 00592546
    FXCH                                ; 00592549
    FSTP float ptr [EBP + 0x12]         ; 0059254b
    FSTP float ptr [EBP + 0x16]         ; 0059254e
    MOVSD ES:EDI,ESI                    ; 00592551
    MOVSD ES:EDI,ESI                    ; 00592552
    MOVSD ES:EDI,ESI                    ; 00592553
    MOV dword ptr [EAX + 0x8],0x0       ; 00592554
    ADD ESP,0x8                         ; 0059255b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0059255e
    MOV dword ptr [EAX + 0x4],ECX       ; 00592561
    MOV ECX,dword ptr [EAX + 0x4]       ; 00592564
    MOV dword ptr [EAX],ECX             ; 00592567
    MOV dword ptr [EDX + 0x8],0x0       ; 00592569
    LEA EAX,[EBP + 0x26]                ; 00592570
    FLD float ptr [EDX + 0x8]           ; 00592573
    PUSH EAX                            ; 00592576
    FST float ptr [EDX + 0x4]           ; 00592577
    PUSH EBX                            ; 0059257a
    FSTP float ptr [EDX]                ; 0059257b
    CALL core_charactr.cpp_FUN_0042d750 ; 0059257d
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00592582
    PUSH EBX                            ; 00592585
        ;   Label: LAB_00592585
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 00592586
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059258b
    LEA ESI,[EBX + 0x158]               ; 0059258e
    PUSH ESI                            ; 00592594
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00592595
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059259a
    PUSH dword ptr [EBP + 0x92]         ; 0059259d
    PUSH EBX                            ; 005925a3
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 005925a4
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005925a9
    PUSH ESI                            ; 005925ac
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005925ad
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005925b2
    MOV EDX,dword ptr [ESI + 0x8]       ; 005925b5
    PUSH EDX                            ; 005925b8
    PUSH EAX                            ; 005925b9
    LEA ESI,[EBX + 0xc268]              ; 005925ba
    MOV dword ptr [EBP + 0x6a],EAX      ; 005925c0
    PUSH ESI                            ; 005925c3
    MOV dword ptr [EBP + 0x66],EDX      ; 005925c4
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0 ; 005925c7
        ;   XREF to: 00524ae0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 005925cc
    PUSH ESI                            ; 005925cf
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005925d0
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    MOV ECX,dword ptr [EBX + 0xe7d0]    ; 005925d5
    ADD ESP,0x4                         ; 005925db
    TEST ECX,ECX                        ; 005925de
    JZ 0x00592736                       ; 005925e0
        ;   XREF to: 00592736 (CONDITIONAL_JUMP)  ; LAB_00592736
    FLD float ptr [EBX + 0xe7d4]        ; 005925e6
    FADD float ptr [EBP + 0x92]         ; 005925ec
    FST float ptr [EBX + 0xe7d4]        ; 005925f2
    FCOMP float ptr [0x00606278]        ; 005925f8 | DAT_00606278
    FNSTSW AX                           ; 005925fe
    SAHF                                ; 00592600
    JBE 0x00592736                      ; 00592601
        ;   XREF to: 00592736 (CONDITIONAL_JUMP)  ; LAB_00592736
    PUSH 0xc29c                         ; 00592607
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0059260c
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00592611
    TEST EAX,EAX                        ; 00592614
    JZ 0x00592621                       ; 00592616
        ;   XREF to: 00592621 (CONDITIONAL_JUMP)  ; LAB_00592621
    PUSH EAX                            ; 00592618
    CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004efa10 ; 00592619
        ;   XREF to: 004efa10 (UNCONDITIONAL_CALL)  ; CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004efa10(CHotDemon * this_ptr)
    ADD ESP,0x4                         ; 0059261e
    MOV ESI,EAX                         ; 00592621
        ;   Label: LAB_00592621
    MOV dword ptr [EBP + 0x72],ESI      ; 00592623
    TEST ESI,ESI                        ; 00592626
    JZ 0x00592736                       ; 00592628
        ;   XREF to: 00592736 (CONDITIONAL_JUMP)  ; LAB_00592736
    PUSH ESI                            ; 0059262e
    MOV EDI,dword ptr [0x0061f650]      ; 0059262f | DAT_0061f650
    PUSH EDI                            ; 00592635 | DAT_01d2c900
    MOV dword ptr [EBX + 0x70],0x2      ; 00592636
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 0059263d
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    LEA EAX,[EBX + 0x20]                ; 00592642
    LEA EDX,[ESI + 0x20]                ; 00592645
    MOV ECX,dword ptr [EAX]             ; 00592648
    MOV dword ptr [EDX],ECX             ; 0059264a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0059264c
    MOV dword ptr [EDX + 0x4],ECX       ; 0059264f
    MOV ECX,dword ptr [EAX + 0x8]       ; 00592652
    MOV dword ptr [EDX + 0x8],ECX       ; 00592655
    MOV EAX,dword ptr [EAX + 0xc]       ; 00592658
    ADD ESI,0x30                        ; 0059265b
    MOV dword ptr [EDX + 0xc],EAX       ; 0059265e
    LEA EAX,[EBX + 0x30]                ; 00592661
    ADD ESP,0x8                         ; 00592664
    CMP ESI,EAX                         ; 00592667
    JZ 0x0059267b                       ; 00592669
        ;   XREF to: 0059267b (CONDITIONAL_JUMP)  ; LAB_0059267b
    MOV EDX,dword ptr [EAX]             ; 0059266b
    MOV dword ptr [ESI],EDX             ; 0059266d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059266f
    MOV dword ptr [ESI + 0x4],EDX       ; 00592672
    MOV EDX,dword ptr [EAX + 0x8]       ; 00592675
    MOV dword ptr [ESI + 0x8],EDX       ; 00592678
    MOV EAX,dword ptr [EBP + 0x72]      ; 0059267b
        ;   Label: LAB_0059267b
    MOV ESI,0x5f7393                    ; 0059267e | = "hdwing.cth"
    MOV EDX,dword ptr [EBP + 0x72]      ; 00592683
    LEA EDI,[EAX + 0x2ca4]              ; 00592686
    MOV dword ptr [EAX + 0x2ca0],0x1    ; 0059268c
    PUSH EDI                            ; 00592696
    MOV AL,byte ptr [ESI]               ; 00592697 | = "hdwing.cth" | s_hdwing_cth_005f7393+2
        ;   Label: LAB_00592697
    MOV byte ptr [EDI],AL               ; 00592699
    CMP AL,0x0                          ; 0059269b
    JZ 0x005926af                       ; 0059269d
        ;   XREF to: 005926af (CONDITIONAL_JUMP)  ; LAB_005926af
    MOV AL,byte ptr [ESI + 0x1]         ; 0059269f | s_hdwing_cth_005f7393+1 | s_hdwing_cth_005f7393+3
    ADD ESI,0x2                         ; 005926a2
    MOV byte ptr [EDI + 0x1],AL         ; 005926a5
    ADD EDI,0x2                         ; 005926a8
    CMP AL,0x0                          ; 005926ab
    JNZ 0x00592697                      ; 005926ad
        ;   XREF to: 00592697 (CONDITIONAL_JUMP)  ; LAB_00592697
    POP EDI                             ; 005926af
        ;   Label: LAB_005926af
    MOV EAX,dword ptr [EBP + 0x72]      ; 005926b0
    PUSH EDX                            ; 005926b3
    MOV EAX,dword ptr [EAX + 0x154]     ; 005926b4
    CALL dword ptr [EAX]                ; 005926ba
    ADD ESP,0x4                         ; 005926bc
    MOV ECX,dword ptr [EBP + 0x6a]      ; 005926bf
    PUSH dword ptr [EBP + 0x66]         ; 005926c2
    MOV ESI,dword ptr [EBP + 0x72]      ; 005926c5
    PUSH ECX                            ; 005926c8
    ADD ESI,0x158                       ; 005926c9
    PUSH ESI                            ; 005926cf
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0 ; 005926d0
        ;   XREF to: 00524ae0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 005926d5
    PUSH ESI                            ; 005926d8
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005926d9
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    MOV EDX,dword ptr [EBP + 0x72]      ; 005926de
    MOV EAX,dword ptr [EBX + 0x108]     ; 005926e1
    ADD ESP,0x4                         ; 005926e7
    MOV dword ptr [EDX + 0x108],EAX     ; 005926ea
    PUSH EDX                            ; 005926f0
    MOV EAX,dword ptr [EBX + 0x10c]     ; 005926f1
    MOV EDI,dword ptr [0x0061f650]      ; 005926f7 | DAT_0061f650
    MOV dword ptr [EDX + 0x10c],EAX     ; 005926fd
    PUSH EDI                            ; 00592703 | DAT_01d2c900
    MOV EAX,dword ptr [EBX + 0x110]     ; 00592704
    MOV ESI,EDX                         ; 0059270a
    MOV dword ptr [EDX + 0x110],EAX     ; 0059270c
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160 ; 00592712
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission * this_ptr, CDemonActor * actor)
    MOV EDX,ESI                         ; 00592717
    MOV EDX,dword ptr [EDX + 0x2e34]    ; 00592719
    MOV EAX,dword ptr [EBX + 0xe7a0]    ; 0059271f
    MOV dword ptr [EBX + 0xe7a0],EDX    ; 00592725
    MOV EDX,ESI                         ; 0059272b
    ADD ESP,0x8                         ; 0059272d
    MOV dword ptr [EDX + 0x2e34],EAX    ; 00592730
    CMP dword ptr [EBX + 0x27bc],0x0    ; 00592736
        ;   Label: LAB_00592736
    JZ 0x00592769                       ; 0059273d
        ;   XREF to: 00592769 (CONDITIONAL_JUMP)  ; LAB_00592769
    LEA EAX,[EBX + 0xc268]              ; 0059273f
    PUSH EAX                            ; 00592745
    PUSH dword ptr [EBX + 0x2504]       ; 00592746
    LEA EAX,[EBX + 0x30]                ; 0059274c
    PUSH dword ptr [EBP + 0x92]         ; 0059274f
    PUSH EAX                            ; 00592755
    LEA EAX,[EBX + 0x20]                ; 00592756
    PUSH EAX                            ; 00592759
    LEA EAX,[EBX + 0xe60c]              ; 0059275a
    PUSH EAX                            ; 00592760
    CALL core_cloth.cpp_CClothList_process_FUN_00441fa0 ; 00592761
        ;   XREF to: 00441fa0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_00441fa0(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 00592766
    PUSH 0x5f739e                       ; 00592769 | = "succubusShutUp"
        ;   Label: LAB_00592769
    MOV EDX,dword ptr [0x0061b4d0]      ; 0059276e | DAT_0061b4d0
    PUSH EDX                            ; 00592774
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00592775
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0059277a
    TEST EAX,EAX                        ; 0059277d
    JNZ 0x00592a43                      ; 0059277f
        ;   XREF to: 00592a43 (CONDITIONAL_JUMP)  ; LAB_00592a43
    MOV ECX,dword ptr [EBX + 0xe7c8]    ; 00592785
    PUSH ECX                            ; 0059278b
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0059278c
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00592791
    TEST EAX,EAX                        ; 00592794
    JNZ 0x005927b7                      ; 00592796
        ;   XREF to: 005927b7 (CONDITIONAL_JUMP)  ; LAB_005927b7
    FLD float ptr [EBX + 0xe7cc]        ; 00592798
    FSUB float ptr [EBP + 0x92]         ; 0059279e
    FST float ptr [EBX + 0xe7cc]        ; 005927a4
    FLDZ                                ; 005927aa
    FCOMPP                              ; 005927ac
    FNSTSW AX                           ; 005927ae
    SAHF                                ; 005927b0
    JA 0x00592a5a                       ; 005927b1
        ;   XREF to: 00592a5a (CONDITIONAL_JUMP)  ; LAB_00592a5a
    LEA ESP,[EBP + 0x7a]                ; 005927b7
        ;   Label: LAB_005927b7
    POP EBP                             ; 005927ba
    POP EDI                             ; 005927bb
    POP ESI                             ; 005927bc
    POP EBX                             ; 005927bd
    RET                                 ; 005927be
    PUSH 0x1                            ; 005927bf
        ;   Label: LAB_005927bf
    PUSH 0x0                            ; 005927c1
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005927c3
    PUSH EAX                            ; 005927c6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005927c7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005927cc
    PUSH EBX                            ; 005927cf
    PUSH 0x5f7356                       ; 005927d0 | s_s_confused_while_walking_005f7355+1
    MOV EDX,dword ptr [0x00611100]      ; 005927d5 | g_CConsolePtr
    PUSH EDX                            ; 005927db | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005927dc
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x00592461                      ; 005927e1
        ;   XREF to: 00592461 (UNCONDITIONAL_JUMP)  ; LAB_00592461
    JBE 0x00592451                      ; 005927e6
        ;   XREF to: 00592451 (CONDITIONAL_JUMP)  ; LAB_00592451
        ;   Label: LAB_005927e6
    CMP EAX,0x3                         ; 005927ec
    JZ 0x005927bf                       ; 005927ef
        ;   XREF to: 005927bf (CONDITIONAL_JUMP)  ; LAB_005927bf
    PUSH 0x1                            ; 005927f1
        ;   Label: LAB_005927f1
    PUSH 0x0                            ; 005927f3
    JMP 0x00592455                      ; 005927f5
        ;   XREF to: 00592455 (UNCONDITIONAL_JUMP)  ; LAB_00592455
    PUSH dword ptr [EBP + 0x92]         ; 005927fa
        ;   Label: LAB_005927fa
    MOV EAX,dword ptr [EBX + 0x154]     ; 00592800
    PUSH EBX                            ; 00592806
    CALL dword ptr [EAX + 0x144]        ; 00592807
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0059280d
    ADD ESP,0x8                         ; 00592813
    TEST ECX,ECX                        ; 00592816
    JZ 0x00592883                       ; 00592818
        ;   XREF to: 00592883 (CONDITIONAL_JUMP)  ; LAB_00592883
    LEA EAX,[EBX + 0x20]                ; 0059281a
    LEA EDI,[EBP + 0x4a]                ; 0059281d
    LEA ESI,[EBP + -0x16]               ; 00592820
    FLD float ptr [EAX]                 ; 00592823
    FLD float ptr [EAX + 0x4]           ; 00592825
    FLD float ptr [EAX + 0x8]           ; 00592828
    FXCH ST2                            ; 0059282b
    FSUB float ptr [ECX + 0x20]         ; 0059282d
    FXCH                                ; 00592830
    FSUB float ptr [ECX + 0x24]         ; 00592832
    FXCH ST2                            ; 00592835
    FSUB float ptr [ECX + 0x28]         ; 00592837
    FXCH                                ; 0059283a
    FSTP float ptr [EBP + -0x16]        ; 0059283c
    FXCH                                ; 0059283f
    FSTP float ptr [EBP + -0x12]        ; 00592841
    FSTP float ptr [EBP + -0xe]         ; 00592844
    MOVSD ES:EDI,ESI                    ; 00592847
    MOVSD ES:EDI,ESI                    ; 00592848
    MOVSD ES:EDI,ESI                    ; 00592849
    FLD float ptr [EBP + 0x4e]          ; 0059284a
    FMUL ST0                            ; 0059284d
    FLD float ptr [EBP + 0x4a]          ; 0059284f
    FMUL ST0                            ; 00592852
    FADDP                               ; 00592854
    FLD float ptr [EBP + 0x52]          ; 00592856
    FMUL ST0                            ; 00592859
    FADDP                               ; 0059285b
    FSQRT                               ; 0059285d
    FCOMP float ptr [EBX + 0xc1e0]      ; 0059285f
    FNSTSW AX                           ; 00592865
    SAHF                                ; 00592867
    JNC 0x0059247c                      ; 00592868
        ;   XREF to: 0059247c (CONDITIONAL_JUMP)  ; LAB_0059247c
    PUSH 0x1                            ; 0059286e
    PUSH 0x1                            ; 00592870
    MOV EDI,dword ptr [EBP + 0x6e]      ; 00592872
    PUSH EDI                            ; 00592875
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00592876
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059287b
    JMP 0x0059247c                      ; 0059287e
        ;   XREF to: 0059247c (UNCONDITIONAL_JUMP)  ; LAB_0059247c
    PUSH dword ptr [EBP + 0x92]         ; 00592883
        ;   Label: LAB_00592883
    PUSH EBX                            ; 00592889
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 0059288a
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059288f
    TEST EAX,EAX                        ; 00592892
    JZ 0x0059247c                       ; 00592894
        ;   XREF to: 0059247c (CONDITIONAL_JUMP)  ; LAB_0059247c
    PUSH 0x1                            ; 0059289a
    PUSH 0x1                            ; 0059289c
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0059289e
    PUSH ESI                            ; 005928a1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005928a2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005928a7
    JMP 0x0059247c                      ; 005928aa
        ;   XREF to: 0059247c (UNCONDITIONAL_JUMP)  ; LAB_0059247c
    PUSH dword ptr [EBP + 0x92]         ; 005928af
        ;   Label: LAB_005928af
    MOV EAX,dword ptr [EBX + 0x154]     ; 005928b5
    PUSH EBX                            ; 005928bb
    CALL dword ptr [EAX + 0x144]        ; 005928bc
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 005928c2
    ADD ESP,0x8                         ; 005928c8
    TEST ECX,ECX                        ; 005928cb
    JNZ 0x0059290d                      ; 005928cd
        ;   XREF to: 0059290d (CONDITIONAL_JUMP)  ; LAB_0059290d
    PUSH dword ptr [EBP + 0x92]         ; 005928cf
    PUSH EBX                            ; 005928d5
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 005928d6
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    MOV EDX,EAX                         ; 005928db
    ADD ESP,0x8                         ; 005928dd
    LEA EAX,[EBX + 0x158]               ; 005928e0
    TEST EDX,EDX                        ; 005928e6
    JZ 0x005928fc                       ; 005928e8
        ;   XREF to: 005928fc (CONDITIONAL_JUMP)  ; LAB_005928fc
    PUSH 0x1                            ; 005928ea
    PUSH 0x1                            ; 005928ec
    PUSH EAX                            ; 005928ee
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005928ef
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005928f4
    JMP 0x0059247c                      ; 005928f7
        ;   XREF to: 0059247c (UNCONDITIONAL_JUMP)  ; LAB_0059247c
    PUSH 0x1                            ; 005928fc
        ;   Label: LAB_005928fc
    PUSH EDX                            ; 005928fe
    PUSH EAX                            ; 005928ff
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00592900
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00592905
    JMP 0x0059247c                      ; 00592908
        ;   XREF to: 0059247c (UNCONDITIONAL_JUMP)  ; LAB_0059247c
    PUSH 0x3e32b8c2                     ; 0059290d
        ;   Label: LAB_0059290d
    LEA EAX,[EBX + 0x249c]              ; 00592912
    PUSH 0x3f000000                     ; 00592918
    MOV dword ptr [EAX + 0x8],0x0       ; 0059291d
    XOR ESI,ESI                         ; 00592924
    MOV EDX,dword ptr [EAX + 0x8]       ; 00592926
    MOV dword ptr [EAX + 0x4],EDX       ; 00592929
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059292c
    MOV dword ptr [EAX],EDX             ; 0059292f
    MOV EAX,[0x00606268]                ; 00592931 | DAT_00606268
    MOV dword ptr [EBP + 0x32],ESI      ; 00592936
    MOV dword ptr [EBP + 0x3a],EAX      ; 00592939
    LEA EAX,[EBP + 0x32]                ; 0059293c
    MOV dword ptr [EBP + 0x36],ESI      ; 0059293f
    PUSH EAX                            ; 00592942
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00592943
    PUSH EAX                            ; 00592949
    MOV EDX,dword ptr [EAX + 0x154]     ; 0059294a
    CALL dword ptr [EDX + 0xc4]         ; 00592950
    ADD ESP,0x4                         ; 00592956
    PUSH EAX                            ; 00592959
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0059295a
    ADD EAX,0x20                        ; 00592960
    PUSH EAX                            ; 00592963
    PUSH EBX                            ; 00592964
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 00592965
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0059296a
    TEST EAX,EAX                        ; 0059296d
    JL 0x0059247c                       ; 0059296f
        ;   XREF to: 0059247c (CONDITIONAL_JUMP)  ; LAB_0059247c
    LEA EDI,[EBP + -0xa]                ; 00592975
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00592978
    LEA ESI,[EBP + 0x3e]                ; 0059297e
    LEA EAX,[EBX + 0x20]                ; 00592981
    FLD float ptr [EDX + 0x20]          ; 00592984
    FLD float ptr [EDX + 0x24]          ; 00592987
    FLD float ptr [EDX + 0x28]          ; 0059298a
    FXCH ST2                            ; 0059298d
    FSUB float ptr [EAX]                ; 0059298f
    FXCH                                ; 00592991
    FSUB float ptr [EAX + 0x4]          ; 00592993
    FXCH ST2                            ; 00592996
    FSUB float ptr [EAX + 0x8]          ; 00592998
    FXCH                                ; 0059299b
    FSTP float ptr [EBP + 0x3e]         ; 0059299d
    FXCH                                ; 005929a0
    FSTP float ptr [EBP + 0x42]         ; 005929a2
    FSTP float ptr [EBP + 0x46]         ; 005929a5
    MOVSD ES:EDI,ESI                    ; 005929a8
    MOVSD ES:EDI,ESI                    ; 005929a9
    MOVSD ES:EDI,ESI                    ; 005929aa
    FLD float ptr [EBP + -0x6]          ; 005929ab
    FMUL ST0                            ; 005929ae
    FLD float ptr [EBP + -0xa]          ; 005929b0
    FMUL ST0                            ; 005929b3
    FADDP                               ; 005929b5
    FLD float ptr [EBP + -0x2]          ; 005929b7
    FMUL ST0                            ; 005929ba
    FADDP                               ; 005929bc
    FSQRT                               ; 005929be
    FCOMP float ptr [0x00606274]        ; 005929c0 | DAT_00606274
    FNSTSW AX                           ; 005929c6
    SAHF                                ; 005929c8
    JNC 0x0059247c                      ; 005929c9
        ;   XREF to: 0059247c (CONDITIONAL_JUMP)  ; LAB_0059247c
    MOV EAX,dword ptr [EBX + 0xe7d0]    ; 005929cf
    TEST EAX,EAX                        ; 005929d5
    JNZ 0x0059247c                      ; 005929d7
        ;   XREF to: 0059247c (CONDITIONAL_JUMP)  ; LAB_0059247c
    MOV EDX,dword ptr [EBX + 0xe7c8]    ; 005929dd
    MOV dword ptr [EBX + 0xe7d0],0x1    ; 005929e3
    PUSH EDX                            ; 005929ed
    MOV dword ptr [EBX + 0xe7d4],EAX    ; 005929ee
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 005929f4
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 005929f9
    PUSH 0x5f7380                       ; 005929fc | = "succubus-morph.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00592a01
    PUSH EBX                            ; 00592a07
    MOV dword ptr [EBX + 0xe7cc],0x461c3f9a ; 00592a08
    CALL dword ptr [EAX + 0x30]         ; 00592a12
    ADD ESP,0x8                         ; 00592a15
    JMP 0x0059247c                      ; 00592a18
        ;   XREF to: 0059247c (UNCONDITIONAL_JUMP)  ; LAB_0059247c
    CMP ESI,0x1                         ; 00592a1d
        ;   Label: LAB_00592a1d
    JNC 0x00592a2f                      ; 00592a20
        ;   XREF to: 00592a2f (CONDITIONAL_JUMP)  ; LAB_00592a2f
    TEST ESI,ESI                        ; 00592a22
    JZ 0x005927fa                       ; 00592a24
        ;   XREF to: 005927fa (CONDITIONAL_JUMP)  ; LAB_005927fa
    JMP 0x0059247c                      ; 00592a2a
        ;   XREF to: 0059247c (UNCONDITIONAL_JUMP)  ; LAB_0059247c
    JBE 0x005928af                      ; 00592a2f
        ;   XREF to: 005928af (CONDITIONAL_JUMP)  ; LAB_005928af
        ;   Label: LAB_00592a2f
    CMP ESI,0x2                         ; 00592a35
    JZ 0x005928af                       ; 00592a38
        ;   XREF to: 005928af (CONDITIONAL_JUMP)  ; LAB_005928af
    JMP 0x0059247c                      ; 00592a3e
        ;   XREF to: 0059247c (UNCONDITIONAL_JUMP)  ; LAB_0059247c
    MOV ESI,dword ptr [EBX + 0xe7c8]    ; 00592a43
        ;   Label: LAB_00592a43
    PUSH ESI                            ; 00592a49
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00592a4a
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00592a4f
    LEA ESP,[EBP + 0x7a]                ; 00592a52
    POP EBP                             ; 00592a55
    POP EDI                             ; 00592a56
    POP ESI                             ; 00592a57
    POP EBX                             ; 00592a58
    RET                                 ; 00592a59
    PUSH 0x41200000                     ; 00592a5a
        ;   Label: LAB_00592a5a
    PUSH 0x40a00000                     ; 00592a5f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00592a64
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    ADD ESP,0x8                         ; 00592a69
    MOV dword ptr [EBP + 0x76],EAX      ; 00592a6c
    PUSH 0x5f73ad                       ; 00592a6f | = "succubus-horny-?.wav"
    FLD float ptr [EBP + 0x76]          ; 00592a74
    MOV EAX,dword ptr [EBX + 0x154]     ; 00592a77
    PUSH EBX                            ; 00592a7d
    FSTP float ptr [EBX + 0xe7cc]       ; 00592a7e
    CALL dword ptr [EAX + 0x2c]         ; 00592a84
    ADD ESP,0x8                         ; 00592a87
    MOV dword ptr [EBX + 0xe7c8],EAX    ; 00592a8a
    LEA ESP,[EBP + 0x7a]                ; 00592a90
    POP EBP                             ; 00592a93
    POP EDI                             ; 00592a94
    POP ESI                             ; 00592a95
    POP EBX                             ; 00592a96
    RET                                 ; 00592a97

