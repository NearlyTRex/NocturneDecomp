; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cow_cpp_FUN_004392b0(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00439294 = 00439671
;   TerminatedCString s_s_confused_while_walking_005ce107
;   TerminatedCString s_cow_wav_005ce131
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005ce13a
;   undefined4 DAT_005f49a8
;   CConsole* g_CConsolePtr = 007c158c
;   CGore* g_CGorePtr = 01cb8284
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;   CConsole g_CConsoleInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_0040cf60
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_00424430
;   core_charactr.cpp_FUN_00424470
;   core_charactr.cpp_FUN_004287f0
;   core_charactr.cpp_FUN_00429e90
;   core_charactr.cpp_FUN_0042b2a0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_enemy.cpp_FUN_00488110
;   core_enemy.cpp_FUN_00488970
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004392b0
        ;   Label: core_cow.cpp_FUN_004392b0
    PUSH ESI                            ; 004392b1
    PUSH EDI                            ; 004392b2
    PUSH EBP                            ; 004392b3
    MOV EBP,ESP                         ; 004392b4
    SUB ESP,0xfc                        ; 004392b6
    SUB EBP,0x7a                        ; 004392bc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004392bf
    PUSH dword ptr [EBP + 0x92]         ; 004392c5
    PUSH EBX                            ; 004392cb
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 004392cc
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004392d1
    TEST EAX,EAX                        ; 004392d4
    JZ 0x0043950d                       ; 004392d6
        ;   XREF to: 0043950d (CONDITIONAL_JUMP)  ; LAB_0043950d
    LEA EAX,[EBX + 0x2508]              ; 004392dc
    MOV dword ptr [EAX + 0x8],0x0       ; 004392e2
    FLD float ptr [EBP + 0x92]          ; 004392e9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004392ef
    MOV dword ptr [EAX + 0x4],EDX       ; 004392f2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004392f5
    MOV dword ptr [EAX],EDX             ; 004392f8
    FMUL float ptr [EBX + 0x10a60]      ; 004392fa
    LEA ESI,[EBX + 0x2b4]               ; 00439300
    FSTP float ptr [EBP + 0x6e]         ; 00439306
    FLD float ptr [EBP + 0x6e]          ; 00439309
        ;   Label: LAB_00439309
    FLDZ                                ; 0043930c
    FCOMPP                              ; 0043930e
    FNSTSW AX                           ; 00439310
    SAHF                                ; 00439312
    JC 0x00439515                       ; 00439313
        ;   XREF to: 00439515 (CONDITIONAL_JUMP)  ; LAB_00439515
    FLD float ptr [EBP + 0x92]          ; 00439319
    FMUL float ptr [EBX + 0x10a60]      ; 0043931f
    SUB ESP,0x4                         ; 00439325
    MOV EAX,dword ptr [EBX + 0x2510]    ; 00439328
    MOV dword ptr [EBX + 0x2594],EAX    ; 0043932e
    FSTP float ptr [ESP]                ; 00439334
    PUSH EBX                            ; 00439337
    CALL core_charactr.cpp_FUN_0042b2a0 ; 00439338
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 0043933d
    PUSH ESI                            ; 00439340
    CALL core_motion.cpp_FUN_005035c0   ; 00439341
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00439346
    PUSH dword ptr [EBP + 0x92]         ; 00439349
    PUSH EBX                            ; 0043934f
    MOV EDI,dword ptr [EAX + 0x24]      ; 00439350
    CALL core_charactr.cpp_FUN_004287f0 ; 00439353
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00439358
    TEST EAX,EAX                        ; 0043935b
    JZ 0x00439811                       ; 0043935d
        ;   XREF to: 00439811 (CONDITIONAL_JUMP)  ; LAB_00439811
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 00439363
    CMP EAX,0x2                         ; 00439369
    JNC 0x00439555                      ; 0043936c
        ;   XREF to: 00439555 (CONDITIONAL_JUMP)  ; LAB_00439555
    CMP EAX,0x1                         ; 00439372
    JNZ 0x00439560                      ; 00439375
        ;   XREF to: 00439560 (CONDITIONAL_JUMP)  ; LAB_00439560
    PUSH 0x1                            ; 0043937b
        ;   Label: LAB_0043937b
    PUSH 0x1                            ; 0043937d
    LEA EAX,[EBX + 0x2b4]               ; 0043937f
        ;   Label: LAB_0043937f
    PUSH EAX                            ; 00439385
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00439386
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0043938b
        ;   Label: LAB_0043938b
    LEA EAX,[EBX + 0x2508]              ; 0043938e
    MOV dword ptr [EAX + 0x8],0x0       ; 00439394
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043939b
    MOV dword ptr [EAX + 0x4],EDX       ; 0043939e
    MOV EDX,dword ptr [EAX + 0x4]       ; 004393a1
    MOV dword ptr [EAX],EDX             ; 004393a4
    FLD float ptr [EBX + 0x10a74]       ; 004393a6
        ;   Label: caseD_3
    FLDZ                                ; 004393ac
    FCOMPP                              ; 004393ae
    FNSTSW AX                           ; 004393b0
    SAHF                                ; 004393b2
    JNC 0x004393c7                      ; 004393b3
        ;   XREF to: 004393c7 (CONDITIONAL_JUMP)  ; LAB_004393c7
    FLD float ptr [EBX + 0x10a74]       ; 004393b5
    FSUB float ptr [EBP + 0x92]         ; 004393bb
    FSTP float ptr [EBX + 0x10a74]      ; 004393c1
    PUSH EBX                            ; 004393c7
        ;   Label: LAB_004393c7
    CALL core_charactr.cpp_FUN_00424430 ; 004393c8
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004393cd
    TEST EAX,EAX                        ; 004393d0
    JZ 0x004394e6                       ; 004393d2
        ;   XREF to: 004394e6 (CONDITIONAL_JUMP)  ; LAB_004394e6
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 004393d8
    TEST ECX,ECX                        ; 004393de
    JZ 0x0043940c                       ; 004393e0
        ;   XREF to: 0043940c (CONDITIONAL_JUMP)  ; LAB_0043940c
    PUSH ECX                            ; 004393e2
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 004393e3
    CALL dword ptr [EDX + 0xfc]         ; 004393e9
    ADD ESP,0x4                         ; 004393ef
    CMP EAX,EBX                         ; 004393f2
    JNZ 0x0043940c                      ; 004393f4
        ;   XREF to: 0043940c (CONDITIONAL_JUMP)  ; LAB_0043940c
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004393f6
    PUSH ESI                            ; 004393fc
    MOV EDI,dword ptr [0x0061b5a8]      ; 004393fd | g_CDemonSetPtr
    PUSH EDI                            ; 00439403 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00439404
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00439409
    PUSH dword ptr [EBP + 0x92]         ; 0043940c
        ;   Label: LAB_0043940c
    PUSH EBX                            ; 00439412
    LEA ESI,[EBX + 0x2588]              ; 00439413
    CALL core_charactr.cpp_FUN_00423a10 ; 00439419
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 0043941e
    FMUL float ptr [EBP + 0x92]         ; 00439420
    FLD float ptr [ESI + 0x4]           ; 00439426
    FMUL float ptr [EBP + 0x92]         ; 00439429
    FLD float ptr [ESI + 0x8]           ; 0043942f
    FMUL float ptr [EBP + 0x92]         ; 00439432
    LEA EDI,[EBP + -0xa]                ; 00439438
    LEA ESI,[EBP + -0x3a]               ; 0043943b
    FXCH ST2                            ; 0043943e
    FSTP float ptr [EBP + -0x3a]        ; 00439440
    FSTP float ptr [EBP + -0x36]        ; 00439443
    FSTP float ptr [EBP + -0x32]        ; 00439446
    MOVSD ES:EDI,ESI                    ; 00439449
    MOVSD ES:EDI,ESI                    ; 0043944a
    MOVSD ES:EDI,ESI                    ; 0043944b
    LEA EDX,[EBX + 0x257c]              ; 0043944c
    FLD float ptr [EBP + -0xa]          ; 00439452
    FLD float ptr [EBP + -0x6]          ; 00439455
    FLD float ptr [EBP + -0x2]          ; 00439458
    LEA EDI,[EBP + 0x1a]                ; 0043945b
    LEA ESI,[EBP + -0x16]               ; 0043945e
    FXCH ST2                            ; 00439461
    FADD float ptr [EDX]                ; 00439463
    FXCH                                ; 00439465
    FADD float ptr [EDX + 0x4]          ; 00439467
    FXCH ST2                            ; 0043946a
    FADD float ptr [EDX + 0x8]          ; 0043946c
    FXCH                                ; 0043946f
    FSTP float ptr [EBP + -0x16]        ; 00439471
    FXCH                                ; 00439474
    FSTP float ptr [EBP + -0x12]        ; 00439476
    FSTP float ptr [EBP + -0xe]         ; 00439479
    MOVSD ES:EDI,ESI                    ; 0043947c
    MOVSD ES:EDI,ESI                    ; 0043947d
    MOVSD ES:EDI,ESI                    ; 0043947e
    LEA EAX,[EBX + 0x2508]              ; 0043947f
    FLD float ptr [EBP + 0x1a]          ; 00439485
    FLD float ptr [EBP + 0x1e]          ; 00439488
    FLD float ptr [EBP + 0x22]          ; 0043948b
    LEA EDI,[EBP + 0x62]                ; 0043948e
    LEA ESI,[EBP + -0x2e]               ; 00439491
    FXCH ST2                            ; 00439494
    FADD float ptr [EAX]                ; 00439496
    FXCH                                ; 00439498
    FADD float ptr [EAX + 0x4]          ; 0043949a
    FXCH ST2                            ; 0043949d
    FADD float ptr [EAX + 0x8]          ; 0043949f
    FXCH                                ; 004394a2
    FSTP float ptr [EBP + -0x2e]        ; 004394a4
    FXCH                                ; 004394a7
    FSTP float ptr [EBP + -0x2a]        ; 004394a9
    FSTP float ptr [EBP + -0x26]        ; 004394ac
    MOVSD ES:EDI,ESI                    ; 004394af
    MOVSD ES:EDI,ESI                    ; 004394b0
    MOVSD ES:EDI,ESI                    ; 004394b1
    MOV dword ptr [EDX + 0x8],0x0       ; 004394b2
    MOV ECX,dword ptr [EDX + 0x8]       ; 004394b9
    MOV dword ptr [EDX + 0x4],ECX       ; 004394bc
    MOV ECX,dword ptr [EDX + 0x4]       ; 004394bf
    MOV dword ptr [EDX],ECX             ; 004394c2
    MOV dword ptr [EAX + 0x8],0x0       ; 004394c4
    ADD ESP,0x8                         ; 004394cb
    MOV EDX,dword ptr [EAX + 0x8]       ; 004394ce
    MOV dword ptr [EAX + 0x4],EDX       ; 004394d1
    MOV EDX,dword ptr [EAX + 0x4]       ; 004394d4
    MOV dword ptr [EAX],EDX             ; 004394d7
    LEA EAX,[EBP + 0x62]                ; 004394d9
    PUSH EAX                            ; 004394dc
    PUSH EBX                            ; 004394dd
    CALL core_charactr.cpp_FUN_00423a60 ; 004394de
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004394e3
    PUSH EBX                            ; 004394e6
        ;   Label: LAB_004394e6
    CALL core_charactr.cpp_FUN_00424470 ; 004394e7
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004394ec
    LEA EAX,[EBX + 0x2b4]               ; 004394ef
    PUSH EAX                            ; 004394f5
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004394f6
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004394fb
    PUSH dword ptr [EBP + 0x92]         ; 004394fe
    PUSH EBX                            ; 00439504
    CALL core_charactr.cpp_FUN_00429e90 ; 00439505
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0043950a
    LEA ESP,[EBP + 0x7a]                ; 0043950d
        ;   Label: LAB_0043950d
    POP EBP                             ; 00439510
    POP EDI                             ; 00439511
    POP ESI                             ; 00439512
    POP EBX                             ; 00439513
    RET                                 ; 00439514
    LEA EAX,[EBP + 0x6e]                ; 00439515
        ;   Label: LAB_00439515
    PUSH EAX                            ; 00439518
    PUSH ESI                            ; 00439519
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 0043951a
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0043951f
    PUSH EAX                            ; 00439522
    PUSH EBX                            ; 00439523
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 00439524
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00439529
    JMP 0x00439309                      ; 0043952c
        ;   XREF to: 00439309 (UNCONDITIONAL_JUMP)  ; LAB_00439309
    PUSH 0x1                            ; 00439531
        ;   Label: LAB_00439531
    PUSH 0x0                            ; 00439533
    PUSH ESI                            ; 00439535
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00439536
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0043953b
    PUSH EBX                            ; 0043953e
    PUSH 0x5ce107                       ; 0043953f | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x00609ed0]      ; 00439544 | g_CConsolePtr
    PUSH EDX                            ; 0043954a | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0043954b
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    JMP 0x0043938b                      ; 00439550
        ;   XREF to: 0043938b (UNCONDITIONAL_JUMP)  ; LAB_0043938b
    JBE 0x0043937b                      ; 00439555
        ;   XREF to: 0043937b (CONDITIONAL_JUMP)  ; LAB_0043937b
        ;   Label: LAB_00439555
    CMP EAX,0x3                         ; 0043955b
    JZ 0x00439531                       ; 0043955e
        ;   XREF to: 00439531 (CONDITIONAL_JUMP)  ; LAB_00439531
    PUSH 0x1                            ; 00439560
        ;   Label: LAB_00439560
    PUSH 0x0                            ; 00439562
    JMP 0x0043937f                      ; 00439564
        ;   XREF to: 0043937f (UNCONDITIONAL_JUMP)  ; LAB_0043937f
    LEA EAX,[EBP + 0xffffff7e]          ; 00439569
        ;   Label: caseD_2
    PUSH EAX                            ; 0043956f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00439570
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00439575
    PUSH 0x41700000                     ; 00439578
    PUSH 0x40e00000                     ; 0043957d
    CALL core_actor.cpp_FUN_0040cf60    ; 00439582
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 00439587
    MOV dword ptr [EBP + -0x4e],EBX     ; 0043958a
    MOV dword ptr [EBP + -0x4a],EBX     ; 0043958d
    ADD ESP,0x8                         ; 00439590
    FLD float ptr [EBP + 0x76]          ; 00439593
    LEA EAX,[EBP + 0xffffff7e]          ; 00439596
    FSTP float ptr [EBP + -0x7e]        ; 0043959c
    MOV EDX,dword ptr [EBX + 0x10afc]   ; 0043959f
    PUSH EAX                            ; 004395a5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004395a6
    SUB EAX,EDX                         ; 004395ad
    SHL EAX,0x4                         ; 004395af
    LEA EDX,[EBX + 0x1134]              ; 004395b2
    ADD EAX,EDX                         ; 004395b8
    PUSH 0x3f333333                     ; 004395ba
    PUSH EAX                            ; 004395bf
    PUSH 0x265370c                      ; 004395c0 | DAT_0265370c
    LEA ESI,[EBP + -0x46]               ; 004395c5
    LEA EDI,[EBP + 0x3e]                ; 004395c8
    CALL core_xform.cpp_FUN_00591530    ; 004395cb
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004395d0
    LEA EAX,[EBP + 0x3e]                ; 004395d3
    LEA ESI,[EBP + -0x46]               ; 004395d6
    PUSH EAX                            ; 004395d9
    MOVSD ES:EDI,ESI                    ; 004395da
    MOVSD ES:EDI,ESI                    ; 004395db
    MOVSD ES:EDI,ESI                    ; 004395dc
    PUSH EBX                            ; 004395dd
    LEA ESI,[EBP + 0x26]                ; 004395de
    CALL core_actor.cpp_FUN_00408d70    ; 004395e1
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004395e6
    LEA EAX,[EBP + -0x22]               ; 004395e9
    PUSH EAX                            ; 004395ec
    LEA EDI,[EBP + -0x22]               ; 004395ed
    LEA ESI,[EBP + 0x26]                ; 004395f0
    PUSH EBX                            ; 004395f3
    MOVSD ES:EDI,ESI                    ; 004395f4
    MOVSD ES:EDI,ESI                    ; 004395f5
    MOVSD ES:EDI,ESI                    ; 004395f6
    CALL core_enemy.cpp_FUN_00488110    ; 004395f7
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004395fc
    JMP 0x004393a6                      ; 004395ff
        ;   XREF to: 004393a6 (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0x10a64],0x0   ; 00439604
        ;   Label: caseD_5
    JNZ 0x004393a6                      ; 0043960b
        ;   XREF to: 004393a6 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xdc],0x0      ; 00439611
    JNZ 0x004393a6                      ; 00439618
        ;   XREF to: 004393a6 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH EAX                            ; 0043961e
    PUSH ESI                            ; 0043961f
    LEA ESI,[EBP + 0x4a]                ; 00439620
    LEA EDI,[EBP + 0xe]                 ; 00439623
    CALL core_skeleton.cpp_FUN_005469a0 ; 00439626
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0043962b
    LEA EAX,[EBP + 0xe]                 ; 0043962e
    LEA ESI,[EBP + 0x4a]                ; 00439631
    PUSH EAX                            ; 00439634
    MOVSD ES:EDI,ESI                    ; 00439635
    MOVSD ES:EDI,ESI                    ; 00439636
    MOVSD ES:EDI,ESI                    ; 00439637
    PUSH EBX                            ; 00439638
    LEA ESI,[EBP + 0x56]                ; 00439639
    LEA EDI,[EBP + 0x32]                ; 0043963c
    CALL core_actor.cpp_FUN_00408d70    ; 0043963f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00439644
    LEA ESI,[EBP + 0x56]                ; 00439647
    LEA EAX,[EBP + 0x32]                ; 0043964a
    PUSH 0x0                            ; 0043964d
    MOVSD ES:EDI,ESI                    ; 0043964f
    MOVSD ES:EDI,ESI                    ; 00439650
    MOVSD ES:EDI,ESI                    ; 00439651
    PUSH EAX                            ; 00439652
    MOV ESI,dword ptr [0x006167e0]      ; 00439653 | g_CGorePtr
    PUSH ESI                            ; 00439659
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 0043965a
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0043965f
    MOV dword ptr [EBX + 0x10a64],0x1   ; 00439662
    JMP 0x004393a6                      ; 0043966c
        ;   XREF to: 004393a6 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00439671
        ;   Label: caseD_0
    PUSH EBX                            ; 00439677
    CALL core_enemy.cpp_FUN_00488970    ; 00439678
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0043967d
    TEST EAX,EAX                        ; 00439680
    JZ 0x00439696                       ; 00439682
        ;   XREF to: 00439696 (CONDITIONAL_JUMP)  ; LAB_00439696
    PUSH 0x1                            ; 00439684
    PUSH 0x1                            ; 00439686
    PUSH ESI                            ; 00439688
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00439689
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0043968e
    JMP 0x004393a6                      ; 00439691
        ;   XREF to: 004393a6 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00439696
        ;   Label: LAB_00439696
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0043969c
    PUSH EBX                            ; 004396a2
    CALL dword ptr [EAX + 0x150]        ; 004396a3
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004396a9
    ADD ESP,0x8                         ; 004396af
    TEST ESI,ESI                        ; 004396b2
    JZ 0x004393a6                       ; 004396b4
        ;   XREF to: 004393a6 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [EBX + 0x10b00]   ; 004396ba
    PUSH EDI                            ; 004396c0
    MOV EAX,[0x0061c068]                ; 004396c1 | DAT_0061c068
    PUSH EAX                            ; 004396c6
    CALL core_sound.cpp_FUN_0055af70    ; 004396c7
        ;   XREF to: 0055af70 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_0055af70(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004396cc
    TEST EAX,EAX                        ; 004396cf
    JNZ 0x004396eb                      ; 004396d1
        ;   XREF to: 004396eb (CONDITIONAL_JUMP)  ; LAB_004396eb
    PUSH 0x5ce131                       ; 004396d3 | = "cow?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004396d8
    PUSH EBX                            ; 004396de
    CALL dword ptr [EAX + 0x34]         ; 004396df
    ADD ESP,0x8                         ; 004396e2
    MOV dword ptr [EBX + 0x10b00],EAX   ; 004396e5
    PUSH 0x1                            ; 004396eb
        ;   Label: LAB_004396eb
    PUSH 0x1                            ; 004396ed
    LEA EAX,[EBX + 0x2b4]               ; 004396ef
    PUSH EAX                            ; 004396f5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004396f6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004396fb
    JMP 0x004393a6                      ; 004396fe
        ;   XREF to: 004393a6 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00439703
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00439709
    PUSH EBX                            ; 0043970f
    CALL dword ptr [EAX + 0x150]        ; 00439710
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 00439716
    ADD ESP,0x8                         ; 0043971c
    TEST EDI,EDI                        ; 0043971f
    JNZ 0x0043974b                      ; 00439721
        ;   XREF to: 0043974b (CONDITIONAL_JUMP)  ; LAB_0043974b
    PUSH dword ptr [EBP + 0x92]         ; 00439723
    PUSH EBX                            ; 00439729
    CALL core_enemy.cpp_FUN_00488970    ; 0043972a
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0043972f
    TEST EAX,EAX                        ; 00439732
    JNZ 0x004393a6                      ; 00439734
        ;   XREF to: 004393a6 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0043973a
    PUSH EDI                            ; 0043973c
    PUSH ESI                            ; 0043973d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0043973e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00439743
    JMP 0x004393a6                      ; 00439746
        ;   XREF to: 004393a6 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,[0x005f49a8]                ; 0043974b | DAT_005f49a8
        ;   Label: LAB_0043974b
    MOV dword ptr [EBP + 0x72],EAX      ; 00439750
    LEA EAX,[EBX + 0x2508]              ; 00439753
    MOV dword ptr [EAX + 0x8],0x0       ; 00439759
    MOV EDX,dword ptr [EAX + 0x8]       ; 00439760
    MOV dword ptr [EAX + 0x4],EDX       ; 00439763
    MOV EDX,dword ptr [EAX + 0x4]       ; 00439766
    MOV dword ptr [EAX],EDX             ; 00439769
    XOR EAX,EAX                         ; 0043976b
    MOV dword ptr [EBP + 0x2],EAX       ; 0043976d
    MOV dword ptr [EBP + 0x6],EAX       ; 00439770
    MOV EAX,dword ptr [EBP + 0x72]      ; 00439773
    PUSH 0x3e32b8c2                     ; 00439776
    MOV dword ptr [EBP + 0xa],EAX       ; 0043977b
    LEA EAX,[EBP + 0x2]                 ; 0043977e
    PUSH 0x3f000000                     ; 00439781
    PUSH EAX                            ; 00439786
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00439787
    PUSH EAX                            ; 0043978d
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0043978e
    CALL dword ptr [EDX + 0xcc]         ; 00439794
    ADD ESP,0x4                         ; 0043979a
    PUSH EAX                            ; 0043979d
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0043979e
    ADD EAX,0x20                        ; 004397a4
    PUSH EAX                            ; 004397a7
    PUSH EBX                            ; 004397a8
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004397a9
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004397ae
    TEST EAX,EAX                        ; 004397b1
    JL 0x004397ea                       ; 004397b3
        ;   XREF to: 004397ea (CONDITIONAL_JUMP)  ; LAB_004397ea
    JLE 0x004393a6                      ; 004397b5
        ;   XREF to: 004393a6 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0x10a74]       ; 004397bb
    FLDZ                                ; 004397c1
    FCOMPP                              ; 004397c3
    FNSTSW AX                           ; 004397c5
    SAHF                                ; 004397c7
    JC 0x004393a6                       ; 004397c8
        ;   XREF to: 004393a6 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004397ce
    PUSH 0x2                            ; 004397d0
    PUSH ESI                            ; 004397d2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004397d3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004397d8
    MOV dword ptr [EBX + 0x10a74],0x40200000 ; 004397db
    JMP 0x004393a6                      ; 004397e5
        ;   XREF to: 004393a6 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH EBX                            ; 004397ea
        ;   Label: LAB_004397ea
    PUSH 0x5ce13a                       ; 004397eb | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 004397f0 | g_CConsolePtr
    PUSH ECX                            ; 004397f6 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004397f7
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 004397fc
    PUSH 0x1                            ; 004397ff
    PUSH 0x0                            ; 00439801
    PUSH ESI                            ; 00439803
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00439804
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00439809
    JMP 0x004393a6                      ; 0043980c
        ;   XREF to: 004393a6 (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP EDI,0x5                         ; 00439811
        ;   Label: LAB_00439811
    JA 0x004393a6                       ; 00439814
        ;   XREF to: 004393a6 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EDI*0x4 + 0x439294]  ; 0043981a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

