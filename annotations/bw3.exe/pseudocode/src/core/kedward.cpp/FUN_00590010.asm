; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_kedward_cpp_FUN_00590010(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0058ff64 = 00590109
;   undefined1* switchdataD_0058ff90 = 005901c1
;   undefined1* switchdataD_0058ffb0 = 00590b34
;   TerminatedCString s_keddem_stand_wav_005d8d30
;   TerminatedCString s_keddem_chasewalk_wav_005d8d41
;   TerminatedCString s_keddem_chasefast_wav_005d8d56
;   TerminatedCString s_keddem_attack1_wav_005d8d6b
;   TerminatedCString s_keddem_attack2_wav_005d8d7e
;   TerminatedCString s_keddem_attack3_wav_005d8d91
;   TerminatedCString s_keddem_pain_wav_005d8da4
;   TerminatedCString s_keddem_die_wav_005d8db4
;   TerminatedCString s_keddem_warning_wav_005d8dc3
;   TerminatedCString s_keddem_appear_wav_005d8dd6
;   TerminatedCString s_keddem_disappear_wav_005d8de8
;   TerminatedCString s_State_d_005d8dfd
;   ... and 26 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_0040ce40
;   core_actor.cpp_FUN_0040cfa0
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_00431660
;   core_charactr.cpp_FUN_00433350
;   core_charactr.cpp_FUN_00434850
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_enemy.cpp_FUN_004893f0
;   core_enemy.cpp_FUN_00489ff0
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00590010
        ;   Label: core_kedward.cpp_FUN_00590010
    PUSH ESI                            ; 00590011
    PUSH EDI                            ; 00590012
    PUSH EBP                            ; 00590013
    MOV EBP,ESP                         ; 00590014
    SUB ESP,0x378                       ; 00590016
    SUB EBP,0x7a                        ; 0059001c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0059001f
    PUSH dword ptr [EBP + 0x92]         ; 00590025
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059002b
    PUSH EBX                            ; 00590031
    CALL dword ptr [EAX + 0x148]        ; 00590032
    ADD ESP,0x8                         ; 00590038
    TEST EAX,EAX                        ; 0059003b
    JZ 0x00591666                       ; 0059003d
        ;   XREF to: 00591666 (CONDITIONAL_JUMP)  ; LAB_00591666
    FLD float ptr [EBX + 0xd054]        ; 00590043
    FLDZ                                ; 00590049
    FCOMPP                              ; 0059004b
    FNSTSW AX                           ; 0059004d
    SAHF                                ; 0059004f
    JC 0x00590353                       ; 00590050
        ;   XREF to: 00590353 (CONDITIONAL_JUMP)  ; LAB_00590353
    FLD float ptr [EBX + 0xd064]        ; 00590056
        ;   Label: LAB_00590056
    FADD float ptr [EBP + 0x92]         ; 0059005c
    FST float ptr [EBX + 0xd064]        ; 00590062
    FCOMP float ptr [EBX + 0xd06c]      ; 00590068
    FNSTSW AX                           ; 0059006e
    SAHF                                ; 00590070
    JC 0x0059007f                       ; 00590071
        ;   XREF to: 0059007f (CONDITIONAL_JUMP)  ; LAB_0059007f
    MOV EAX,dword ptr [EBX + 0xd06c]    ; 00590073
    MOV dword ptr [EBX + 0xd064],EAX    ; 00590079
    CMP dword ptr [EBX + 0xd094],0x0    ; 0059007f
        ;   Label: LAB_0059007f
    JZ 0x0059036a                       ; 00590086
        ;   XREF to: 0059036a (CONDITIONAL_JUMP)  ; LAB_0059036a
    FLD float ptr [EBP + 0x92]          ; 0059008c
        ;   Label: LAB_0059008c
    LEA EAX,[EBX + 0x2518]              ; 00590092
    FMUL float ptr [EBX + 0xcdcc]       ; 00590098
    MOV dword ptr [EBP + 0x36],EAX      ; 0059009e
    LEA EAX,[EBX + 0x250c]              ; 005900a1
    MOV dword ptr [EBP + 0x4a],EAX      ; 005900a7
    LEA EAX,[EBX + 0x249c]              ; 005900aa
    MOV dword ptr [EBP + 0x52],EAX      ; 005900b0
    LEA EAX,[EBX + 0x158]               ; 005900b3
    MOV dword ptr [EBP + 0x56],EAX      ; 005900b9
    LEA EAX,[EBX + 0xd098]              ; 005900bc
    MOV dword ptr [EBP + 0x5e],EAX      ; 005900c2
    LEA EAX,[EBX + 0xfd8]               ; 005900c5
    MOV dword ptr [EBP + 0x3a],EAX      ; 005900cb
    LEA EAX,[EBX + 0x20]                ; 005900ce
    FSTP float ptr [EBP + -0x6]         ; 005900d1
    MOV dword ptr [EBP + 0x4e],EAX      ; 005900d4
    FLD float ptr [EBP + -0x6]          ; 005900d7
        ;   Label: LAB_005900d7
    FLDZ                                ; 005900da
    FCOMPP                              ; 005900dc
    FNSTSW AX                           ; 005900de
    SAHF                                ; 005900e0
    JNC 0x00591642                      ; 005900e1
        ;   XREF to: 00591642 (CONDITIONAL_JUMP)  ; LAB_00591642
    LEA EAX,[EBP + -0x6]                ; 005900e7
    PUSH EAX                            ; 005900ea
    MOV EDX,dword ptr [EBP + 0x56]      ; 005900eb
    PUSH EDX                            ; 005900ee
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 005900ef
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    LEA ESI,[EAX + 0xfffffaec]          ; 005900f4
    ADD ESP,0x8                         ; 005900fa
    CMP ESI,0xa                         ; 005900fd
    JA 0x00590126                       ; 00590100
        ;   XREF to: 00590126 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ESI*0x4 + 0x58ff64]  ; 00590102 | caseD_514 | caseD_515 | caseD_516
        ;   Label: switchD
    SHL EAX,0x2                         ; 00590109
        ;   Label: caseD_514
    LEA ESI,[EBX + EAX*0x1]             ; 0059010c
    MOV EAX,dword ptr [ESI + 0xbc54]    ; 0059010f
    PUSH EAX                            ; 00590115
    CALL sound_sndmain.cpp_FUN_00556700 ; 00590116
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059011b
    TEST EAX,EAX                        ; 0059011e
    JZ 0x005905d1                       ; 00590120
        ;   XREF to: 005905d1 (CONDITIONAL_JUMP)  ; LAB_005905d1
    FLD float ptr [EBP + 0x92]          ; 00590126
        ;   Label: default
    FMUL float ptr [EBX + 0xcdcc]       ; 0059012c
    SUB ESP,0x4                         ; 00590132
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00590135
    MOV dword ptr [EBX + 0x2524],EAX    ; 0059013b
    FSTP float ptr [ESP]                ; 00590141
    PUSH EBX                            ; 00590144
    CALL core_charactr.cpp_FUN_00434850 ; 00590145
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 0059014a
    MOV EDX,dword ptr [EBP + 0x56]      ; 0059014d
    PUSH EDX                            ; 00590150
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00590151
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00590156
    MOV ESI,dword ptr [EAX + 0x24]      ; 00590159
    PUSH ESI                            ; 0059015c
    PUSH 0x5d8dfd                       ; 0059015d | = "State: %d\n"
    MOV ECX,dword ptr [0x005f1690]      ; 00590162 | g_CConsolePtr
    PUSH ECX                            ; 00590168 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00590169
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 0059016e
    PUSH dword ptr [EBP + 0x92]         ; 00590171
    PUSH EBX                            ; 00590177
    MOV EDI,ESI                         ; 00590178
    CALL core_charactr.cpp_FUN_00431660 ; 0059017a
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059017f
    TEST EAX,EAX                        ; 00590182
    JZ 0x0059161d                       ; 00590184
        ;   XREF to: 0059161d (CONDITIONAL_JUMP)  ; LAB_0059161d
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0059018a
    CMP EAX,0x2                         ; 00590190
    JNC 0x0059085a                      ; 00590193
        ;   XREF to: 0059085a (CONDITIONAL_JUMP)  ; LAB_0059085a
    CMP EAX,0x1                         ; 00590199
    JNZ 0x00590865                      ; 0059019c
        ;   XREF to: 00590865 (CONDITIONAL_JUMP)  ; LAB_00590865
    PUSH 0x1                            ; 005901a2
        ;   Label: LAB_005901a2
    PUSH 0x1                            ; 005901a4
    MOV ESI,dword ptr [EBP + 0x56]      ; 005901a6
    PUSH ESI                            ; 005901a9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005901aa
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005901aa
    ADD ESP,0xc                         ; 005901af
        ;   Label: LAB_005901af
    LEA EAX,[EDI + -0xd]                ; 005901b2
    CMP EAX,0x7                         ; 005901b5
    JA 0x005901db                       ; 005901b8
        ;   XREF to: 005901db (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x58ff90]  ; 005901ba | caseD_10 | caseD_14 | switchdataD_0058ff90
        ;   Label: switchD
    MOV EDX,dword ptr [EBX + 0xd068]    ; 005901c1
        ;   Label: caseD_d
    TEST EDX,EDX                        ; 005901c7
    JNZ 0x005901db                      ; 005901c9
        ;   XREF to: 005901db (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0xd068],0x1    ; 005901cb
    MOV dword ptr [EBX + 0xd064],EDX    ; 005901d5
    MOV EAX,dword ptr [EBP + 0x52]      ; 005901db
        ;   Label: default
    MOV dword ptr [EAX + 0x8],0x0       ; 005901de
    MOV EDX,dword ptr [EAX + 0x8]       ; 005901e5
    MOV dword ptr [EAX + 0x4],EDX       ; 005901e8
    MOV EDX,dword ptr [EAX + 0x4]       ; 005901eb
    MOV dword ptr [EAX],EDX             ; 005901ee
    FLD float ptr [EBX + 0xcde0]        ; 005901f0
        ;   Label: caseD_6
    FLDZ                                ; 005901f6
    FCOMPP                              ; 005901f8
    FNSTSW AX                           ; 005901fa
    SAHF                                ; 005901fc
    JNC 0x00590211                      ; 005901fd
        ;   XREF to: 00590211 (CONDITIONAL_JUMP)  ; LAB_00590211
    FLD float ptr [EBX + 0xcde0]        ; 005901ff
    FSUB float ptr [EBP + 0x92]         ; 00590205
    FSTP float ptr [EBX + 0xcde0]       ; 0059020b
    MOV EAX,[0x01d5ba14]                ; 00590211 | DAT_01d5ba14
        ;   Label: LAB_00590211
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00590216
    PUSH EAX                            ; 0059021d
    MOV ESI,dword ptr [EAX + 0x154]     ; 0059021e
    CALL dword ptr [ESI + 0x10c]        ; 00590224
    ADD ESP,0x4                         ; 0059022a
    TEST EAX,EAX                        ; 0059022d
    JNZ 0x0059162d                      ; 0059022f
        ;   XREF to: 0059162d (CONDITIONAL_JUMP)  ; LAB_0059162d
    PUSH dword ptr [EBP + 0x92]         ; 00590235
        ;   Label: LAB_00590235
    PUSH EBX                            ; 0059023b
    CALL core_charactr.cpp_FUN_0042c1e0 ; 0059023c
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    MOV EAX,dword ptr [EBP + 0x36]      ; 00590241
    FLD float ptr [EAX]                 ; 00590244
    FMUL float ptr [EBP + 0x92]         ; 00590246
    FLD float ptr [EAX + 0x4]           ; 0059024c
    FMUL float ptr [EBP + 0x92]         ; 0059024f
    FLD float ptr [EAX + 0x8]           ; 00590255
    FMUL float ptr [EBP + 0x92]         ; 00590258
    LEA EDI,[EBP + 0xffffff1e]          ; 0059025e
    LEA ESI,[EBP + 0xfffffe22]          ; 00590264
    FXCH ST2                            ; 0059026a
    FSTP float ptr [EBP + 0xfffffe22]   ; 0059026c
    FSTP float ptr [EBP + 0xfffffe26]   ; 00590272
    FSTP float ptr [EBP + 0xfffffe2a]   ; 00590278
    MOVSD ES:EDI,ESI                    ; 0059027e
    MOVSD ES:EDI,ESI                    ; 0059027f
    MOVSD ES:EDI,ESI                    ; 00590280
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00590281
    FLD float ptr [EBP + 0xffffff1e]    ; 00590284
    FLD float ptr [EBP + 0xffffff22]    ; 0059028a
    FLD float ptr [EBP + 0xffffff26]    ; 00590290
    LEA EDI,[EBP + 0xffffff5a]          ; 00590296
    LEA ESI,[EBP + 0xfffffefa]          ; 0059029c
    FXCH ST2                            ; 005902a2
    FADD float ptr [EAX]                ; 005902a4
    FXCH                                ; 005902a6
    FADD float ptr [EAX + 0x4]          ; 005902a8
    FXCH ST2                            ; 005902ab
    FADD float ptr [EAX + 0x8]          ; 005902ad
    FXCH                                ; 005902b0
    FSTP float ptr [EBP + 0xfffffefa]   ; 005902b2
    FXCH                                ; 005902b8
    FSTP float ptr [EBP + 0xfffffefe]   ; 005902ba
    FSTP float ptr [EBP + 0xffffff02]   ; 005902c0
    MOVSD ES:EDI,ESI                    ; 005902c6
    MOVSD ES:EDI,ESI                    ; 005902c7
    MOVSD ES:EDI,ESI                    ; 005902c8
    MOV EAX,dword ptr [EBP + 0x52]      ; 005902c9
    FLD float ptr [EBP + 0xffffff5a]    ; 005902cc
    FLD float ptr [EBP + 0xffffff5e]    ; 005902d2
    FLD float ptr [EBP + 0xffffff62]    ; 005902d8
    LEA EDI,[EBP + 0xffffff66]          ; 005902de
    LEA ESI,[EBP + 0xfffffe52]          ; 005902e4
    FXCH ST2                            ; 005902ea
    FADD float ptr [EAX]                ; 005902ec
    FXCH                                ; 005902ee
    FADD float ptr [EAX + 0x4]          ; 005902f0
    FXCH ST2                            ; 005902f3
    FADD float ptr [EAX + 0x8]          ; 005902f5
    FXCH                                ; 005902f8
    FSTP float ptr [EBP + 0xfffffe52]   ; 005902fa
    FXCH                                ; 00590300
    FSTP float ptr [EBP + 0xfffffe56]   ; 00590302
    FSTP float ptr [EBP + 0xfffffe5a]   ; 00590308
    MOV EAX,dword ptr [EBP + 0x4a]      ; 0059030e
    MOVSD ES:EDI,ESI                    ; 00590311
    MOVSD ES:EDI,ESI                    ; 00590312
    MOVSD ES:EDI,ESI                    ; 00590313
    MOV dword ptr [EAX + 0x8],0x0       ; 00590314
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059031b
    MOV dword ptr [EAX + 0x4],EDX       ; 0059031e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00590321
    MOV dword ptr [EAX],EDX             ; 00590324
    MOV EAX,dword ptr [EBP + 0x52]      ; 00590326
    MOV dword ptr [EAX + 0x8],0x0       ; 00590329
    ADD ESP,0x8                         ; 00590330
    MOV EDX,dword ptr [EAX + 0x8]       ; 00590333
    MOV dword ptr [EAX + 0x4],EDX       ; 00590336
    MOV EDX,dword ptr [EAX + 0x4]       ; 00590339
    MOV dword ptr [EAX],EDX             ; 0059033c
    LEA EAX,[EBP + 0xffffff66]          ; 0059033e
    PUSH EAX                            ; 00590344
    PUSH EBX                            ; 00590345
    CALL core_charactr.cpp_FUN_0042c230 ; 00590346
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0059034b
    JMP 0x005900d7                      ; 0059034e
        ;   XREF to: 005900d7 (UNCONDITIONAL_JUMP)  ; LAB_005900d7
    FLD float ptr [EBX + 0xd054]        ; 00590353
        ;   Label: LAB_00590353
    FSUB float ptr [EBP + 0x92]         ; 00590359
    FSTP float ptr [EBX + 0xd054]       ; 0059035f
    JMP 0x00590056                      ; 00590365
        ;   XREF to: 00590056 (UNCONDITIONAL_JUMP)  ; LAB_00590056
    CMP dword ptr [EBX + 0xd08c],0x0    ; 0059036a
        ;   Label: LAB_0059036a
    JNZ 0x00590380                      ; 00590371
        ;   XREF to: 00590380 (CONDITIONAL_JUMP)  ; LAB_00590380
    CMP dword ptr [EBX + 0xd088],0x0    ; 00590373
    JZ 0x00590597                       ; 0059037a
        ;   XREF to: 00590597 (CONDITIONAL_JUMP)  ; LAB_00590597
    FLD float ptr [EBX + 0xd07c]        ; 00590380
        ;   Label: LAB_00590380
    FLDZ                                ; 00590386
    FCOMPP                              ; 00590388
    FNSTSW AX                           ; 0059038a
    SAHF                                ; 0059038c
    JNC 0x00590511                      ; 0059038d
        ;   XREF to: 00590511 (CONDITIONAL_JUMP)  ; LAB_00590511
    FLD float ptr [EBX + 0xd07c]        ; 00590393
    FSUB float ptr [EBP + 0x92]         ; 00590399
    FLDZ                                ; 0059039f
    FCOMPP                              ; 005903a1
    FNSTSW AX                           ; 005903a3
    SAHF                                ; 005903a5
    JC 0x00590511                       ; 005903a6
        ;   XREF to: 00590511 (CONDITIONAL_JUMP)  ; LAB_00590511
    LEA EDI,[EBP + 0xfffffde6]          ; 005903ac
    LEA EDX,[EBX + 0x20]                ; 005903b2
    LEA ESI,[EBP + -0x6a]               ; 005903b5
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005903b8
    FLD float ptr [EDX]                 ; 005903be
    FLD float ptr [EDX + 0x4]           ; 005903c0
    FLD float ptr [EDX + 0x8]           ; 005903c3
    FXCH ST2                            ; 005903c6
    FSUB float ptr [EAX + 0x20]         ; 005903c8
    FXCH                                ; 005903cb
    FSUB float ptr [EAX + 0x24]         ; 005903cd
    FXCH ST2                            ; 005903d0
    FSUB float ptr [EAX + 0x28]         ; 005903d2
    FXCH                                ; 005903d5
    FSTP float ptr [EBP + -0x6a]        ; 005903d7
    FXCH                                ; 005903da
    FSTP float ptr [EBP + -0x66]        ; 005903dc
    FSTP float ptr [EBP + -0x62]        ; 005903df
    MOVSD ES:EDI,ESI                    ; 005903e2
    MOVSD ES:EDI,ESI                    ; 005903e3
    MOVSD ES:EDI,ESI                    ; 005903e4
    FLD float ptr [EBP + 0xfffffdea]    ; 005903e5
    FMUL ST0                            ; 005903eb
    FLD float ptr [EBP + 0xfffffde6]    ; 005903ed
    FMUL ST0                            ; 005903f3
    FADDP                               ; 005903f5
    FLD float ptr [EBP + 0xfffffdee]    ; 005903f7
    FMUL ST0                            ; 005903fd
    FADDP                               ; 005903ff
    FSTP float ptr [EBP + 0x6]          ; 00590401
    MOV EAX,dword ptr [EBP + 0x6]       ; 00590404
    MOV EDI,dword ptr [0x01d1a0a4]      ; 00590407 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0059040d
    ADD EAX,EDI                         ; 0059040f
    MOV dword ptr [EBP + -0xa],EAX      ; 00590411
    FLD float ptr [EBP + -0xa]          ; 00590414
    FCOMP double ptr [0x005d8e5c]       ; 00590417 | DAT_005d8e5c
    FNSTSW AX                           ; 0059041d
    SAHF                                ; 0059041f
    JC 0x005905c2                       ; 00590420
        ;   XREF to: 005905c2 (CONDITIONAL_JUMP)  ; LAB_005905c2
    FLD float ptr [EBX + 0xcdcc]        ; 00590426
    MOV dword ptr [EBX + 0xd07c],0x0    ; 0059042c
    FADD float ptr [0x005d8e64]         ; 00590436 | DAT_005d8e64
    MOV EAX,[0x01d5ba14]                ; 0059043c | DAT_01d5ba14
    FSTP float ptr [EBX + 0xcdcc]       ; 00590441
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00590447
    LEA EDI,[EBP + 0xfffffdb6]          ; 0059044e
    LEA ESI,[EBP + 0xffffff72]          ; 00590454
    FLD float ptr [EAX + 0x24]          ; 0059045a
    FLD float ptr [EAX + 0x28]          ; 0059045d
    FLD float ptr [EAX + 0x20]          ; 00590460
    LEA EAX,[EBP + 0xfffffdb6]          ; 00590463
    FSUB float ptr [EDX]                ; 00590469
    FXCH ST2                            ; 0059046b
    FSUB float ptr [EDX + 0x4]          ; 0059046d
    FXCH                                ; 00590470
    FSUB float ptr [EDX + 0x8]          ; 00590472
    FXCH ST2                            ; 00590475
    FSTP float ptr [EBP + 0xffffff72]   ; 00590477
    FSTP float ptr [EBP + 0xffffff76]   ; 0059047d
    FSTP float ptr [EBP + 0xffffff7a]   ; 00590483
    MOVSD ES:EDI,ESI                    ; 00590489
    MOVSD ES:EDI,ESI                    ; 0059048a
    MOVSD ES:EDI,ESI                    ; 0059048b
    PUSH EAX                            ; 0059048c
    LEA ESI,[EBP + 0xfffffe5e]          ; 0059048d
    LEA EDI,[EBP + -0x3a]               ; 00590493
    CALL core_vecdir.cpp_FUN_00576250   ; 00590496
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[EBP + 0xfffffe5e]          ; 0059049b
    MOVSD ES:EDI,ESI                    ; 005904a1
    MOVSD ES:EDI,ESI                    ; 005904a2
    MOVSD ES:EDI,ESI                    ; 005904a3
    ADD ESP,0x4                         ; 005904a4
    FLD float ptr [EBP + -0x36]         ; 005904a7
    FSUB float ptr [EBX + 0x34]         ; 005904aa
    SUB ESP,0x4                         ; 005904ad
    FSTP float ptr [ESP]                ; 005904b0
    CALL core_actor.cpp_FUN_0040cfa0    ; 005904b3
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    FLD float ptr [EBP + -0x3a]         ; 005904b8
    ADD ESP,0x4                         ; 005904bb
    MOV dword ptr [EBP + 0x76],EAX      ; 005904be
    SUB ESP,0x4                         ; 005904c1
    FSUB float ptr [EBX + 0x30]         ; 005904c4
    FLD float ptr [EBP + 0x76]          ; 005904c7
    FXCH                                ; 005904ca
    FSTP float ptr [ESP]                ; 005904cc
    FSTP float ptr [EBP + -0x2]         ; 005904cf
    CALL core_actor.cpp_FUN_0040cfa0    ; 005904d2
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    FLD float ptr [EBX + 0x34]          ; 005904d7
    FLD float ptr [EBX + 0x30]          ; 005904da
    MOV dword ptr [EBP + 0x76],EAX      ; 005904dd
    ADD ESP,0x4                         ; 005904e0
    FLD float ptr [EBP + 0x76]          ; 005904e3
    FXCH ST2                            ; 005904e6
    FADD float ptr [EBP + -0x2]         ; 005904e8
    PUSH EBX                            ; 005904eb
    FXCH                                ; 005904ec
    FADDP ST2,ST0                       ; 005904ee
    FSTP float ptr [EBX + 0x34]         ; 005904f0
    FSTP float ptr [EBX + 0x30]         ; 005904f3
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 005904f6
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005904fb
    PUSH 0x1                            ; 005904fe
    PUSH 0xd                            ; 00590500
    LEA EAX,[EBX + 0x158]               ; 00590502
    PUSH EAX                            ; 00590508
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00590509
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059050e
    FLD float ptr [EBX + 0xd080]        ; 00590511
        ;   Label: LAB_00590511
    FSUB float ptr [EBP + 0x92]         ; 00590517
    FST float ptr [EBX + 0xd080]        ; 0059051d
    FLDZ                                ; 00590523
    FCOMPP                              ; 00590525
    FNSTSW AX                           ; 00590527
    SAHF                                ; 00590529
    JBE 0x00590536                      ; 0059052a
        ;   XREF to: 00590536 (CONDITIONAL_JUMP)  ; LAB_00590536
    MOV dword ptr [EBX + 0xd080],0x0    ; 0059052c
    FLD float ptr [EBX + 0xd07c]        ; 00590536
        ;   Label: LAB_00590536
    FSUB float ptr [EBP + 0x92]         ; 0059053c
    FST float ptr [EBX + 0xd07c]        ; 00590542
    FLDZ                                ; 00590548
    FCOMPP                              ; 0059054a
    FNSTSW AX                           ; 0059054c
    SAHF                                ; 0059054e
    JBE 0x0059008c                      ; 0059054f
        ;   XREF to: 0059008c (CONDITIONAL_JUMP)  ; LAB_0059008c
    MOV dword ptr [EBX + 0xd078],0x0    ; 00590555
    FLD float ptr [EBX + 0xd07c]        ; 0059055f
    MOV dword ptr [EBX + 0xd084],0x0    ; 00590565
    FCOMP double ptr [0x005d8e6c]       ; 0059056f | DAT_005d8e6c
    FNSTSW AX                           ; 00590575
    SAHF                                ; 00590577
    JNC 0x0059008c                      ; 00590578
        ;   XREF to: 0059008c (CONDITIONAL_JUMP)  ; LAB_0059008c
    MOV dword ptr [EBX + 0xd07c],0x0    ; 0059057e
    MOV dword ptr [EBX + 0xd088],0x0    ; 00590588
    JMP 0x0059008c                      ; 00590592
        ;   XREF to: 0059008c (UNCONDITIONAL_JUMP)  ; LAB_0059008c
    FLD float ptr [EBX + 0xcdcc]        ; 00590597
        ;   Label: LAB_00590597
    MOV dword ptr [EBX + 0xd088],0x1    ; 0059059d
    FADD float ptr [0x005d8e54]         ; 005905a7 | DAT_005d8e54
    MOV dword ptr [EBX + 0xd084],0x1    ; 005905ad
    FSTP float ptr [EBX + 0xcdcc]       ; 005905b7
    JMP 0x00590380                      ; 005905bd
        ;   XREF to: 00590380 (UNCONDITIONAL_JUMP)  ; LAB_00590380
    MOV dword ptr [EBX + 0xd07c],0x3f000000 ; 005905c2
        ;   Label: LAB_005905c2
    JMP 0x00590511                      ; 005905cc
        ;   XREF to: 00590511 (UNCONDITIONAL_JUMP)  ; LAB_00590511
    PUSH 0x5d8d30                       ; 005905d1 | = "keddem_stand.wav"
        ;   Label: LAB_005905d1
    MOV EAX,dword ptr [EBX + 0x154]     ; 005905d6
    PUSH EBX                            ; 005905dc
    CALL dword ptr [EAX + 0x2c]         ; 005905dd
    ADD ESP,0x8                         ; 005905e0
    MOV dword ptr [ESI + 0xbc54],EAX    ; 005905e3
    JMP 0x00590126                      ; 005905e9
        ;   XREF to: 00590126 (UNCONDITIONAL_JUMP)  ; default
    SHL EAX,0x2                         ; 005905ee
        ;   Label: caseD_515
    LEA ESI,[EBX + EAX*0x1]             ; 005905f1
    MOV EDI,dword ptr [ESI + 0xbc54]    ; 005905f4
    PUSH EDI                            ; 005905fa
    CALL sound_sndmain.cpp_FUN_00556700 ; 005905fb
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00590600
    TEST EAX,EAX                        ; 00590603
    JNZ 0x00590126                      ; 00590605
        ;   XREF to: 00590126 (CONDITIONAL_JUMP)  ; default
    PUSH 0x5d8d41                       ; 0059060b | = "keddem_chasewalk.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00590610
    PUSH EBX                            ; 00590616
    CALL dword ptr [EAX + 0x2c]         ; 00590617
    ADD ESP,0x8                         ; 0059061a
    MOV dword ptr [ESI + 0xbc54],EAX    ; 0059061d
    JMP 0x00590126                      ; 00590623
        ;   XREF to: 00590126 (UNCONDITIONAL_JUMP)  ; default
    SHL EAX,0x2                         ; 00590628
        ;   Label: caseD_516
    LEA ESI,[EBX + EAX*0x1]             ; 0059062b
    MOV ECX,dword ptr [ESI + 0xbc54]    ; 0059062e
    PUSH ECX                            ; 00590634
    CALL sound_sndmain.cpp_FUN_00556700 ; 00590635
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059063a
    TEST EAX,EAX                        ; 0059063d
    JNZ 0x00590126                      ; 0059063f
        ;   XREF to: 00590126 (CONDITIONAL_JUMP)  ; default
    PUSH 0x5d8d56                       ; 00590645 | = "keddem_chasefast.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059064a
    PUSH EBX                            ; 00590650
    CALL dword ptr [EAX + 0x2c]         ; 00590651
    ADD ESP,0x8                         ; 00590654
    MOV dword ptr [ESI + 0xbc54],EAX    ; 00590657
    JMP 0x00590126                      ; 0059065d
        ;   XREF to: 00590126 (UNCONDITIONAL_JUMP)  ; default
    SHL EAX,0x2                         ; 00590662
        ;   Label: caseD_517
    LEA ESI,[EBX + EAX*0x1]             ; 00590665
    MOV EDX,dword ptr [ESI + 0xbc54]    ; 00590668
    PUSH EDX                            ; 0059066e
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059066f
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00590674
    TEST EAX,EAX                        ; 00590677
    JNZ 0x00590126                      ; 00590679
        ;   XREF to: 00590126 (CONDITIONAL_JUMP)  ; default
    PUSH 0x5d8d6b                       ; 0059067f | = "keddem_attack1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00590684
    PUSH EBX                            ; 0059068a
    CALL dword ptr [EAX + 0x2c]         ; 0059068b
    ADD ESP,0x8                         ; 0059068e
    MOV dword ptr [ESI + 0xbc54],EAX    ; 00590691
    JMP 0x00590126                      ; 00590697
        ;   XREF to: 00590126 (UNCONDITIONAL_JUMP)  ; default
    SHL EAX,0x2                         ; 0059069c
        ;   Label: caseD_518
    LEA ESI,[EBX + EAX*0x1]             ; 0059069f
    MOV EAX,dword ptr [ESI + 0xbc54]    ; 005906a2
    PUSH EAX                            ; 005906a8
    CALL sound_sndmain.cpp_FUN_00556700 ; 005906a9
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 005906ae
    TEST EAX,EAX                        ; 005906b1
    JNZ 0x00590126                      ; 005906b3
        ;   XREF to: 00590126 (CONDITIONAL_JUMP)  ; default
    PUSH 0x5d8d7e                       ; 005906b9 | = "keddem_attack2.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005906be
    PUSH EBX                            ; 005906c4
    CALL dword ptr [EAX + 0x2c]         ; 005906c5
    ADD ESP,0x8                         ; 005906c8
    MOV dword ptr [ESI + 0xbc54],EAX    ; 005906cb
    JMP 0x00590126                      ; 005906d1
        ;   XREF to: 00590126 (UNCONDITIONAL_JUMP)  ; default
    SHL EAX,0x2                         ; 005906d6
        ;   Label: caseD_519
    LEA ESI,[EBX + EAX*0x1]             ; 005906d9
    MOV EDI,dword ptr [ESI + 0xbc54]    ; 005906dc
    PUSH EDI                            ; 005906e2
    CALL sound_sndmain.cpp_FUN_00556700 ; 005906e3
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 005906e8
    TEST EAX,EAX                        ; 005906eb
    JNZ 0x00590126                      ; 005906ed
        ;   XREF to: 00590126 (CONDITIONAL_JUMP)  ; default
    PUSH 0x5d8d91                       ; 005906f3 | = "keddem_attack3.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005906f8
    PUSH EBX                            ; 005906fe
    CALL dword ptr [EAX + 0x2c]         ; 005906ff
    ADD ESP,0x8                         ; 00590702
    MOV dword ptr [ESI + 0xbc54],EAX    ; 00590705
    JMP 0x00590126                      ; 0059070b
        ;   XREF to: 00590126 (UNCONDITIONAL_JUMP)  ; default
    SHL EAX,0x2                         ; 00590710
        ;   Label: caseD_51a
    LEA ESI,[EBX + EAX*0x1]             ; 00590713
    MOV ECX,dword ptr [ESI + 0xbc54]    ; 00590716
    PUSH ECX                            ; 0059071c
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059071d
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00590722
    TEST EAX,EAX                        ; 00590725
    JNZ 0x00590126                      ; 00590727
        ;   XREF to: 00590126 (CONDITIONAL_JUMP)  ; default
    PUSH 0x5d8da4                       ; 0059072d | = "keddem_pain.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00590732
    PUSH EBX                            ; 00590738
    CALL dword ptr [EAX + 0x2c]         ; 00590739
    ADD ESP,0x8                         ; 0059073c
    MOV dword ptr [ESI + 0xbc54],EAX    ; 0059073f
    JMP 0x00590126                      ; 00590745
        ;   XREF to: 00590126 (UNCONDITIONAL_JUMP)  ; default
    SHL EAX,0x2                         ; 0059074a
        ;   Label: caseD_51b
    LEA ESI,[EBX + EAX*0x1]             ; 0059074d
    MOV EDX,dword ptr [ESI + 0xbc54]    ; 00590750
    PUSH EDX                            ; 00590756
    CALL sound_sndmain.cpp_FUN_00556700 ; 00590757
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059075c
    TEST EAX,EAX                        ; 0059075f
    JNZ 0x00590126                      ; 00590761
        ;   XREF to: 00590126 (CONDITIONAL_JUMP)  ; default
    PUSH 0x5d8db4                       ; 00590767 | = "keddem_die.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059076c
    PUSH EBX                            ; 00590772
    CALL dword ptr [EAX + 0x2c]         ; 00590773
    ADD ESP,0x8                         ; 00590776
    MOV dword ptr [ESI + 0xbc54],EAX    ; 00590779
    JMP 0x00590126                      ; 0059077f
        ;   XREF to: 00590126 (UNCONDITIONAL_JUMP)  ; default
    SHL EAX,0x2                         ; 00590784
        ;   Label: caseD_51c
    LEA ESI,[EBX + EAX*0x1]             ; 00590787
    MOV EAX,dword ptr [ESI + 0xbc54]    ; 0059078a
    PUSH EAX                            ; 00590790
    CALL sound_sndmain.cpp_FUN_00556700 ; 00590791
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00590796
    TEST EAX,EAX                        ; 00590799
    JNZ 0x00590126                      ; 0059079b
        ;   XREF to: 00590126 (CONDITIONAL_JUMP)  ; default
    PUSH 0x5d8dc3                       ; 005907a1 | = "keddem_warning.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005907a6
    PUSH EBX                            ; 005907ac
    CALL dword ptr [EAX + 0x2c]         ; 005907ad
    ADD ESP,0x8                         ; 005907b0
    MOV dword ptr [ESI + 0xbc54],EAX    ; 005907b3
    JMP 0x00590126                      ; 005907b9
        ;   XREF to: 00590126 (UNCONDITIONAL_JUMP)  ; default
    SHL EAX,0x2                         ; 005907be
        ;   Label: caseD_51d
    LEA ESI,[EBX + EAX*0x1]             ; 005907c1
    MOV EDI,dword ptr [ESI + 0xbc54]    ; 005907c4
    PUSH EDI                            ; 005907ca
    CALL sound_sndmain.cpp_FUN_00556700 ; 005907cb
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 005907d0
    TEST EAX,EAX                        ; 005907d3
    JNZ 0x00590126                      ; 005907d5
        ;   XREF to: 00590126 (CONDITIONAL_JUMP)  ; default
    PUSH 0x5d8dd6                       ; 005907db | = "keddem_appear.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005907e0
    PUSH EBX                            ; 005907e6
    CALL dword ptr [EAX + 0x2c]         ; 005907e7
    ADD ESP,0x8                         ; 005907ea
    MOV dword ptr [ESI + 0xbc54],EAX    ; 005907ed
    JMP 0x00590126                      ; 005907f3
        ;   XREF to: 00590126 (UNCONDITIONAL_JUMP)  ; default
    SHL EAX,0x2                         ; 005907f8
        ;   Label: caseD_51e
    LEA ESI,[EBX + EAX*0x1]             ; 005907fb
    MOV ECX,dword ptr [ESI + 0xbc54]    ; 005907fe
    PUSH ECX                            ; 00590804
    CALL sound_sndmain.cpp_FUN_00556700 ; 00590805
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059080a
    TEST EAX,EAX                        ; 0059080d
    JNZ 0x00590126                      ; 0059080f
        ;   XREF to: 00590126 (CONDITIONAL_JUMP)  ; default
    PUSH 0x5d8de8                       ; 00590815 | = "keddem_disappear.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059081a
    PUSH EBX                            ; 00590820
    CALL dword ptr [EAX + 0x2c]         ; 00590821
    ADD ESP,0x8                         ; 00590824
    MOV dword ptr [ESI + 0xbc54],EAX    ; 00590827
    JMP 0x00590126                      ; 0059082d
        ;   XREF to: 00590126 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00590832
        ;   Label: LAB_00590832
    PUSH 0x0                            ; 00590834
    MOV EAX,dword ptr [EBP + 0x56]      ; 00590836
    PUSH EAX                            ; 00590839
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059083a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059083f
    PUSH EBX                            ; 00590842
    MOV EAX,0x5d8e08                    ; 00590843 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00590848 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005f1690]      ; 00590849 | g_CConsolePtr
    PUSH EDX                            ; 0059084f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00590850
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x005901af                      ; 00590855
        ;   XREF to: 005901af (UNCONDITIONAL_JUMP)  ; LAB_005901af
    JBE 0x005901a2                      ; 0059085a
        ;   XREF to: 005901a2 (CONDITIONAL_JUMP)  ; LAB_005901a2
        ;   Label: LAB_0059085a
    CMP EAX,0x3                         ; 00590860
    JZ 0x00590832                       ; 00590863
        ;   XREF to: 00590832 (CONDITIONAL_JUMP)  ; LAB_00590832
    PUSH 0x1                            ; 00590865
        ;   Label: LAB_00590865
    PUSH 0x0                            ; 00590867
    MOV ECX,dword ptr [EBP + 0x56]      ; 00590869
    PUSH ECX                            ; 0059086c
    JMP 0x005901aa                      ; 0059086d
        ;   XREF to: 005901aa (UNCONDITIONAL_JUMP)  ; LAB_005901aa
    MOV EDI,dword ptr [EBX + 0xd068]    ; 00590872
        ;   Label: caseD_e
    CMP EDI,0x1                         ; 00590878
    JNZ 0x005901db                      ; 0059087b
        ;   XREF to: 005901db (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0xd068],0x0    ; 00590881
    MOV EAX,dword ptr [EBX + 0xd094]    ; 0059088b
    MOV dword ptr [EBX + 0xd064],0x0    ; 00590891
    TEST EAX,EAX                        ; 0059089b
    JNZ 0x005901db                      ; 0059089d
        ;   XREF to: 005901db (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0xd07c],0x40800000 ; 005908a3
    MOV dword ptr [EBX + 0xd078],EDI    ; 005908ad
    JMP 0x005901db                      ; 005908b3
        ;   XREF to: 005901db (UNCONDITIONAL_JUMP)  ; default
    PUSH dword ptr [EBP + 0x92]         ; 005908b8
        ;   Label: caseD_a
    MOV EAX,dword ptr [EBX + 0x154]     ; 005908be
    PUSH EBX                            ; 005908c4
    CALL dword ptr [EAX + 0x144]        ; 005908c5
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 005908cb
    ADD ESP,0x8                         ; 005908d1
    TEST ESI,ESI                        ; 005908d4
    JZ 0x005901f0                       ; 005908d6
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EDX,dword ptr [EBP + 0x4e]      ; 005908dc
    LEA EDI,[EBP + 0xfffffeee]          ; 005908df
    FLD float ptr [EDX]                 ; 005908e5
    FLD float ptr [EDX + 0x4]           ; 005908e7
    FLD float ptr [EDX + 0x8]           ; 005908ea
    FXCH ST2                            ; 005908ed
    FSUB float ptr [ESI + 0x20]         ; 005908ef
    FXCH                                ; 005908f2
    FSUB float ptr [ESI + 0x24]         ; 005908f4
    FXCH ST2                            ; 005908f7
    FSUB float ptr [ESI + 0x28]         ; 005908f9
    FXCH                                ; 005908fc
    FSTP float ptr [EBP + -0x5e]        ; 005908fe
    FXCH                                ; 00590901
    FSTP float ptr [EBP + -0x5a]        ; 00590903
    LEA ESI,[EBP + -0x5e]               ; 00590906
    FSTP float ptr [EBP + -0x56]        ; 00590909
    MOVSD ES:EDI,ESI                    ; 0059090c
    MOVSD ES:EDI,ESI                    ; 0059090d
    MOVSD ES:EDI,ESI                    ; 0059090e
    LEA EAX,[EBP + 0xfffffeee]          ; 0059090f
    LEA ESI,[EBP + 0xfffffe46]          ; 00590915
    CMP ESI,EAX                         ; 0059091b
    JZ 0x00590943                       ; 0059091d
        ;   XREF to: 00590943 (CONDITIONAL_JUMP)  ; LAB_00590943
    MOV EAX,dword ptr [EBP + 0xfffffeee] ; 0059091f
    MOV dword ptr [EBP + 0xfffffe46],EAX ; 00590925
    MOV EAX,dword ptr [EBP + 0xfffffef2] ; 0059092b
    MOV dword ptr [EBP + 0xfffffe4a],EAX ; 00590931
    MOV EAX,dword ptr [EBP + 0xfffffef6] ; 00590937
    MOV dword ptr [EBP + 0xfffffe4e],EAX ; 0059093d
    FLD float ptr [EBP + 0xfffffe4a]    ; 00590943
        ;   Label: LAB_00590943
    FMUL ST0                            ; 00590949
    FLD float ptr [EBP + 0xfffffe46]    ; 0059094b
    FMUL ST0                            ; 00590951
    FADDP                               ; 00590953
    FLD float ptr [EBP + 0xfffffe4e]    ; 00590955
    FMUL ST0                            ; 0059095b
    FADDP                               ; 0059095d
    FSTP float ptr [EBP + 0x62]         ; 0059095f
    MOV EAX,dword ptr [EBP + 0x62]      ; 00590962
    MOV EDI,dword ptr [0x01d1a0a4]      ; 00590965 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0059096b
    ADD EAX,EDI                         ; 0059096d
    MOV dword ptr [EBP + 0x66],EAX      ; 0059096f
    FLD float ptr [EBP + 0x66]          ; 00590972
    FCOMP double ptr [0x005d8e94]       ; 00590975 | DAT_005d8e94
    FNSTSW AX                           ; 0059097b
    SAHF                                ; 0059097d
    JA 0x005901f0                       ; 0059097e
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0x3280]    ; 00590984
    MOV dword ptr [EBP + 0x5a],EAX      ; 0059098a
    FLD float ptr [EBP + 0x5a]          ; 0059098d
    FCOMP float ptr [EBX + 0x327c]      ; 00590990
    FNSTSW AX                           ; 00590996
    SAHF                                ; 00590998
    JNC 0x005909a4                      ; 00590999
        ;   XREF to: 005909a4 (CONDITIONAL_JUMP)  ; LAB_005909a4
    MOV EAX,dword ptr [EBX + 0x2490]    ; 0059099b
    MOV dword ptr [EBP + 0x5a],EAX      ; 005909a1
    FLD float ptr [EBP + 0x5a]          ; 005909a4
        ;   Label: LAB_005909a4
    FCOMP float ptr [EBX + 0x327c]      ; 005909a7
    FNSTSW AX                           ; 005909ad
    SAHF                                ; 005909af
    JC 0x00590a82                       ; 005909b0
        ;   XREF to: 00590a82 (CONDITIONAL_JUMP)  ; LAB_00590a82
    XOR ESI,ESI                         ; 005909b6
        ;   Label: LAB_005909b6
    MOV dword ptr [EBP + 0x76],ESI      ; 005909b8
        ;   Label: LAB_005909b8
    FILD dword ptr [EBP + 0x76]         ; 005909bb
    FMUL float ptr [0x005d8e78]         ; 005909be | DAT_005d8e78
    MOV ECX,dword ptr [0x00603b28]      ; 005909c4 | g_CDemonSetPtr
    FMUL float ptr [0x005d8e7c]         ; 005909ca | DAT_005d8e7c
    PUSH ECX                            ; 005909d0 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x6a]         ; 005909d1
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 005909d4
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005909d9
    PUSH EBX                            ; 005909dc
    MOV EDI,dword ptr [0x00603b28]      ; 005909dd | g_CDemonSetPtr
    PUSH EDI                            ; 005909e3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 005909e4
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    FLD float ptr [EBP + 0x6a]          ; 005909e9
    FLD ST0                             ; 005909ec
    FCOS                                ; 005909ee
    FXCH                                ; 005909f0
    FSIN                                ; 005909f2
    FXCH                                ; 005909f4
    FLD double ptr [0x005d8e84]         ; 005909f6 | DAT_005d8e84
    FXCH                                ; 005909fc
    FMUL ST1                            ; 005909fe
    FXCH ST2                            ; 00590a00
    FMULP                               ; 00590a02
    FLD float ptr [EBX + 0x24]          ; 00590a04
    ADD ESP,0x8                         ; 00590a07
    FADD float ptr [EBP + 0x5a]         ; 00590a0a
    SUB ESP,0x4                         ; 00590a0d
    FSTP float ptr [ESP]                ; 00590a10
    FLD float ptr [EBX + 0x24]          ; 00590a13
    FADD float ptr [EBX + 0x327c]       ; 00590a16
    SUB ESP,0x4                         ; 00590a1c
    FSTP float ptr [ESP]                ; 00590a1f
    PUSH dword ptr [EBX + 0x3270]       ; 00590a22
    SUB ESP,0x4                         ; 00590a28
    FXCH                                ; 00590a2b
    FSTP float ptr [ESP]                ; 00590a2d
    SUB ESP,0x4                         ; 00590a30
    FSTP float ptr [ESP]                ; 00590a33
    PUSH dword ptr [EBX + 0x28]         ; 00590a36
    MOV EAX,[0x00603b28]                ; 00590a39 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 00590a3e
    PUSH EAX                            ; 00590a41 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053de10 ; 00590a42
        ;   XREF to: 0053de10 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053de10()
    MOV EDX,dword ptr [0x00603b28]      ; 00590a47 | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x76],EAX      ; 00590a4d
    ADD ESP,0x20                        ; 00590a50
    FLD float ptr [EBP + 0x76]          ; 00590a53
    PUSH EDX                            ; 00590a56 | g_CDemonSetInstance
    FSTP float ptr [EBP + -0xe]         ; 00590a57
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00590a5a
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    FLD float ptr [EBP + -0xe]          ; 00590a5f
    FLD1                                ; 00590a62
    ADD ESP,0x4                         ; 00590a64
    FCOMPP                              ; 00590a67
    FNSTSW AX                           ; 00590a69
    SAHF                                ; 00590a6b
    JBE 0x00590a96                      ; 00590a6c
        ;   XREF to: 00590a96 (CONDITIONAL_JUMP)  ; LAB_00590a96
    CMP ESI,0x4                         ; 00590a6e
        ;   Label: LAB_00590a6e
    JGE 0x00590aa2                      ; 00590a71
        ;   XREF to: 00590aa2 (CONDITIONAL_JUMP)  ; LAB_00590aa2
    MOV dword ptr [EBX + 0xcde4],0x0    ; 00590a73
    JMP 0x005901f0                      ; 00590a7d
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    FLD float ptr [EBX + 0x327c]        ; 00590a82
        ;   Label: LAB_00590a82
    FADD double ptr [0x005d8e9c]        ; 00590a88 | DAT_005d8e9c
    FSTP float ptr [EBP + 0x5a]         ; 00590a8e
    JMP 0x005909b6                      ; 00590a91
        ;   XREF to: 005909b6 (UNCONDITIONAL_JUMP)  ; LAB_005909b6
    INC ESI                             ; 00590a96
        ;   Label: LAB_00590a96
    CMP ESI,0x4                         ; 00590a97
    JL 0x005909b8                       ; 00590a9a
        ;   XREF to: 005909b8 (CONDITIONAL_JUMP)  ; LAB_005909b8
    JMP 0x00590a6e                      ; 00590aa0
        ;   XREF to: 00590a6e (UNCONDITIONAL_JUMP)  ; LAB_00590a6e
    PUSH 0x1                            ; 00590aa2
        ;   Label: LAB_00590aa2
    PUSH 0x0                            ; 00590aa4
    MOV ECX,dword ptr [EBP + 0x56]      ; 00590aa6
    PUSH ECX                            ; 00590aa9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00590aaa
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00590aaf
    JMP 0x005901f0                      ; 00590ab2
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0xcdd0]    ; 00590ab7
        ;   Label: caseD_8
    TEST EAX,EAX                        ; 00590abd
    JNZ 0x005901f0                      ; 00590abf
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0xdc],0x0      ; 00590ac5
    JNZ 0x005901f0                      ; 00590acc
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH EAX                            ; 00590ad2
    MOV ECX,dword ptr [EBP + 0x56]      ; 00590ad3
    PUSH ECX                            ; 00590ad6
    LEA ESI,[EBP + 0xffffff2a]          ; 00590ad7
    LEA EDI,[EBP + -0x2e]               ; 00590add
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00590ae0
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 00590ae5
    LEA EAX,[EBP + -0x2e]               ; 00590ae8
    LEA ESI,[EBP + 0xffffff2a]          ; 00590aeb
    PUSH EAX                            ; 00590af1
    MOVSD ES:EDI,ESI                    ; 00590af2
    MOVSD ES:EDI,ESI                    ; 00590af3
    MOVSD ES:EDI,ESI                    ; 00590af4
    PUSH EBX                            ; 00590af5
    LEA ESI,[EBP + -0x52]               ; 00590af6
    LEA EDI,[EBP + 0xffffff7e]          ; 00590af9
    CALL core_actor.cpp_FUN_00408b80    ; 00590aff
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00590b04
    LEA ESI,[EBP + -0x52]               ; 00590b07
    LEA EAX,[EBP + 0xffffff7e]          ; 00590b0a
    PUSH 0x0                            ; 00590b10
    MOVSD ES:EDI,ESI                    ; 00590b12
    MOVSD ES:EDI,ESI                    ; 00590b13
    MOVSD ES:EDI,ESI                    ; 00590b14
    PUSH EAX                            ; 00590b15
    MOV ESI,dword ptr [0x005fed24]      ; 00590b16 | g_CGorePtr
    PUSH ESI                            ; 00590b1c
    CALL core_gore.cpp_FUN_004cec40     ; 00590b1d
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00590b22
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 00590b25
    JMP 0x005901f0                      ; 00590b2f
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0xd094],0x0    ; 00590b34
        ;   Label: caseD_0
    JNZ 0x005901f0                      ; 00590b3b
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,[0x01d5ba14]                ; 00590b41 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00590b46
    PUSH EAX                            ; 00590b4d
    MOV ESI,dword ptr [EAX + 0x154]     ; 00590b4e
    CALL dword ptr [ESI + 0x10c]        ; 00590b54
    ADD ESP,0x4                         ; 00590b5a
    TEST EAX,EAX                        ; 00590b5d
    JNZ 0x005901f0                      ; 00590b5f
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH dword ptr [EBP + 0x92]         ; 00590b65
    PUSH EBX                            ; 00590b6b
    CALL core_enemy.cpp_FUN_00489ff0    ; 00590b6c
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00590b71
    TEST EAX,EAX                        ; 00590b74
    JZ 0x00590b81                       ; 00590b76
        ;   XREF to: 00590b81 (CONDITIONAL_JUMP)  ; LAB_00590b81
    PUSH EBX                            ; 00590b78
    CALL core_kedward.cpp_FUN_005919a0  ; 00590b79
        ;   XREF to: 005919a0 (UNCONDITIONAL_CALL)  ; undefined core_kedward.cpp_FUN_005919a0()
    ADD ESP,0x4                         ; 00590b7e
    PUSH dword ptr [EBP + 0x92]         ; 00590b81
        ;   Label: LAB_00590b81
    MOV EAX,dword ptr [EBX + 0x154]     ; 00590b87
    PUSH EBX                            ; 00590b8d
    CALL dword ptr [EAX + 0x144]        ; 00590b8e
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00590b94
    ADD ESP,0x8                         ; 00590b9a
    TEST ESI,ESI                        ; 00590b9d
    JNZ 0x00590be6                      ; 00590b9f
        ;   XREF to: 00590be6 (CONDITIONAL_JUMP)  ; LAB_00590be6
    MOV EAX,[0x01d5ba14]                ; 00590ba1 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00590ba6
    PUSH EAX                            ; 00590bad
    MOV ESI,dword ptr [EAX + 0x154]     ; 00590bae
    CALL dword ptr [ESI + 0x10c]        ; 00590bb4
    ADD ESP,0x4                         ; 00590bba
    TEST EAX,EAX                        ; 00590bbd
    JZ 0x005901f0                       ; 00590bbf
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,[0x005fe9dc]                ; 00590bc5 | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 00590bca | g_CGameInstance.field580_0x244
    MOV EAX,[0x01d5ba14]                ; 00590bd4 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00590bd9
    MOV dword ptr [EBX + 0xcde4],EAX    ; 00590be0
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00590be6
        ;   Label: LAB_00590be6
    JZ 0x005901f0                       ; 00590bed
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH EBX                            ; 00590bf3
    CALL core_kedward.cpp_FUN_005919a0  ; 00590bf4
        ;   XREF to: 005919a0 (UNCONDITIONAL_CALL)  ; undefined core_kedward.cpp_FUN_005919a0()
    ADD ESP,0x4                         ; 00590bf9
    JMP 0x005901f0                      ; 00590bfc
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV ESI,dword ptr [EBX + 0xd068]    ; 00590c01
        ;   Label: caseD_1
    TEST ESI,ESI                        ; 00590c07
    JZ 0x00590caa                       ; 00590c09
        ;   XREF to: 00590caa (CONDITIONAL_JUMP)  ; LAB_00590caa
    PUSH dword ptr [EBP + 0x92]         ; 00590c0f
        ;   Label: LAB_00590c0f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00590c15
    PUSH EBX                            ; 00590c1b
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00590c1c
    CALL dword ptr [EAX + 0x144]        ; 00590c22
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00590c28
    ADD ESP,0x8                         ; 00590c2e
    TEST EDX,EDX                        ; 00590c31
    JNZ 0x00590c76                      ; 00590c33
        ;   XREF to: 00590c76 (CONDITIONAL_JUMP)  ; LAB_00590c76
    MOV EAX,[0x01d5ba14]                ; 00590c35 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00590c3a
    PUSH EAX                            ; 00590c41
    MOV ESI,dword ptr [EAX + 0x154]     ; 00590c42
    CALL dword ptr [ESI + 0x10c]        ; 00590c48
    ADD ESP,0x4                         ; 00590c4e
    TEST EAX,EAX                        ; 00590c51
    JZ 0x00590c76                       ; 00590c53
        ;   XREF to: 00590c76 (CONDITIONAL_JUMP)  ; LAB_00590c76
    MOV EAX,[0x005fe9dc]                ; 00590c55 | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 00590c5a | g_CGameInstance.field580_0x244
    MOV EAX,[0x01d5ba14]                ; 00590c64 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00590c69
    MOV dword ptr [EBX + 0xcde4],EAX    ; 00590c70
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00590c76
        ;   Label: LAB_00590c76
    JNZ 0x00590ccb                      ; 00590c7d
        ;   XREF to: 00590ccb (CONDITIONAL_JUMP)  ; LAB_00590ccb
    PUSH dword ptr [EBP + 0x92]         ; 00590c7f
    PUSH EBX                            ; 00590c85
    CALL core_enemy.cpp_FUN_00489ff0    ; 00590c86
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00590c8b
    TEST EAX,EAX                        ; 00590c8e
    JNZ 0x005901f0                      ; 00590c90
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x1                            ; 00590c96
    PUSH EAX                            ; 00590c98
    MOV EDX,dword ptr [EBP + 0x56]      ; 00590c99
    PUSH EDX                            ; 00590c9c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00590c9d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00590ca2
    JMP 0x005901f0                      ; 00590ca5
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0xd094],0x0    ; 00590caa
        ;   Label: LAB_00590caa
    JZ 0x00590c0f                       ; 00590cb1
        ;   XREF to: 00590c0f (CONDITIONAL_JUMP)  ; LAB_00590c0f
    PUSH 0x1                            ; 00590cb7
    PUSH ESI                            ; 00590cb9
    MOV EAX,dword ptr [EBP + 0x56]      ; 00590cba
    PUSH EAX                            ; 00590cbd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00590cbe
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00590cc3
    JMP 0x005901f0                      ; 00590cc6
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    TEST EDI,EDI                        ; 00590ccb
        ;   Label: LAB_00590ccb
    JNZ 0x00590cdd                      ; 00590ccd
        ;   XREF to: 00590cdd (CONDITIONAL_JUMP)  ; LAB_00590cdd
    PUSH EBX                            ; 00590ccf
    CALL core_kedward.cpp_FUN_005919a0  ; 00590cd0
        ;   XREF to: 005919a0 (UNCONDITIONAL_CALL)  ; undefined core_kedward.cpp_FUN_005919a0()
    ADD ESP,0x4                         ; 00590cd5
    JMP 0x005901f0                      ; 00590cd8
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBP + 0x52]      ; 00590cdd
        ;   Label: LAB_00590cdd
    MOV dword ptr [EAX + 0x8],0x0       ; 00590ce0
    MOV EDX,dword ptr [EAX + 0x8]       ; 00590ce7
    MOV dword ptr [EAX + 0x4],EDX       ; 00590cea
    MOV EDX,dword ptr [EAX + 0x4]       ; 00590ced
    MOV dword ptr [EAX],EDX             ; 00590cf0
    MOV ESI,dword ptr [EBX + 0xd078]    ; 00590cf2
    TEST ESI,ESI                        ; 00590cf8
    JZ 0x00590e71                       ; 00590cfa
        ;   XREF to: 00590e71 (CONDITIONAL_JUMP)  ; LAB_00590e71
    FLD float ptr [EBX + 0xd080]        ; 00590d00
    FLDZ                                ; 00590d06
    FCOMPP                              ; 00590d08
    FNSTSW AX                           ; 00590d0a
    SAHF                                ; 00590d0c
    JC 0x00590e22                       ; 00590d0d
        ;   XREF to: 00590e22 (CONDITIONAL_JUMP)  ; LAB_00590e22
    PUSH 0x40a00000                     ; 00590d13
    PUSH 0xc0a00000                     ; 00590d18
    CALL core_actor.cpp_FUN_0040ce40    ; 00590d1d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    ADD ESP,0x8                         ; 00590d22
    PUSH 0x40a00000                     ; 00590d25
    PUSH 0xc0a00000                     ; 00590d2a
    MOV dword ptr [EBP + 0x6e],EAX      ; 00590d2f
    CALL core_actor.cpp_FUN_0040ce40    ; 00590d32
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBP + 0x76],EAX      ; 00590d37
    FLD float ptr [EBP + 0x76]          ; 00590d3a
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00590d3d
    FSTP float ptr [EBP + 0x32]         ; 00590d40
    MOV dword ptr [EBP + 0x72],EAX      ; 00590d43
    MOV EAX,dword ptr [EBP + 0x32]      ; 00590d46
    MOV dword ptr [EBP + 0xfffffe76],EAX ; 00590d49
    XOR EAX,EAX                         ; 00590d4f
    MOV dword ptr [EBP + 0xfffffe7a],EAX ; 00590d51
    MOV EAX,dword ptr [EBP + 0x72]      ; 00590d57
    MOV EDX,dword ptr [EBP + 0x5e]      ; 00590d5a
    MOV dword ptr [EBP + 0xfffffe7e],EAX ; 00590d5d
    LEA EAX,[EBP + 0xfffffe76]          ; 00590d63
    ADD ESP,0x8                         ; 00590d69
    CMP EAX,EDX                         ; 00590d6c
    JZ 0x00590d87                       ; 00590d6e
        ;   XREF to: 00590d87 (CONDITIONAL_JUMP)  ; LAB_00590d87
    MOV EAX,dword ptr [EBP + 0x32]      ; 00590d70
    MOV dword ptr [EDX],EAX             ; 00590d73
    MOV EAX,dword ptr [EBP + 0xfffffe7a] ; 00590d75
    MOV dword ptr [EDX + 0x4],EAX       ; 00590d7b
    MOV EAX,dword ptr [EBP + 0xfffffe7e] ; 00590d7e
    MOV dword ptr [EDX + 0x8],EAX       ; 00590d84
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00590d87
        ;   Label: LAB_00590d87
    FLD float ptr [EAX + 0x4]           ; 00590d8a
    FMUL ST0                            ; 00590d8d
    FLD float ptr [EAX]                 ; 00590d8f
    FMUL ST0                            ; 00590d91
    FADDP                               ; 00590d93
    FLD float ptr [EAX + 0x8]           ; 00590d95
    FMUL ST0                            ; 00590d98
    FADDP                               ; 00590d9a
    FSQRT                               ; 00590d9c
    FLDZ                                ; 00590d9e
    FXCH                                ; 00590da0
    FSTP float ptr [EBP + 0x2e]         ; 00590da2
    FCOMP float ptr [EBP + 0x2e]        ; 00590da5
    FNSTSW AX                           ; 00590da8
    SAHF                                ; 00590daa
    JNC 0x00590e57                      ; 00590dab
        ;   XREF to: 00590e57 (CONDITIONAL_JUMP)  ; LAB_00590e57
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00590db1
    FLD1                                ; 00590db4
    FLD float ptr [EAX]                 ; 00590db6
    FXCH                                ; 00590db8
    FDIV float ptr [EBP + 0x2e]         ; 00590dba
    FXCH                                ; 00590dbd
    FMUL ST1                            ; 00590dbf
    FLD float ptr [EAX + 0x4]           ; 00590dc1
    FMUL ST2                            ; 00590dc4
    FLD float ptr [EAX + 0x8]           ; 00590dc6
    FMULP ST3                           ; 00590dc9
    FXCH                                ; 00590dcb
    FSTP float ptr [EAX]                ; 00590dcd
    FSTP float ptr [EAX + 0x4]          ; 00590dcf
    FSTP float ptr [EAX + 0x8]          ; 00590dd2
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00590dd5
        ;   Label: LAB_00590dd5
    FLD float ptr [0x005d8e74]          ; 00590dd8 | DAT_005d8e74
    FLD float ptr [EAX]                 ; 00590dde
    FMUL ST1                            ; 00590de0
    FLD float ptr [EAX + 0x4]           ; 00590de2
    FMUL ST2                            ; 00590de5
    FLD float ptr [EAX + 0x8]           ; 00590de7
    FMULP ST3                           ; 00590dea
    FXCH                                ; 00590dec
    FSTP float ptr [EAX]                ; 00590dee
    FSTP float ptr [EAX + 0x4]          ; 00590df0
    FSTP float ptr [EAX + 0x8]          ; 00590df3
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00590df6
    MOV EDX,dword ptr [EBP + 0x5e]      ; 00590dfc
    FLD float ptr [EAX + 0x20]          ; 00590dff
    FADD float ptr [EDX]                ; 00590e02
    FSTP float ptr [EDX]                ; 00590e04
    FLD float ptr [EAX + 0x24]          ; 00590e06
    FADD float ptr [EDX + 0x4]          ; 00590e09
    FSTP float ptr [EDX + 0x4]          ; 00590e0c
    FLD float ptr [EAX + 0x28]          ; 00590e0f
    FADD float ptr [EDX + 0x8]          ; 00590e12
    FSTP float ptr [EDX + 0x8]          ; 00590e15
    MOV dword ptr [EBX + 0xd080],0x3f800000 ; 00590e18
    PUSH 0x0                            ; 00590e22
        ;   Label: LAB_00590e22
    LEA EAX,[EBP + 0xfffffe2e]          ; 00590e24
    PUSH 0x3f800000                     ; 00590e2a
    PUSH EAX                            ; 00590e2f
    XOR ECX,ECX                         ; 00590e30
    PUSH ECX                            ; 00590e32
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00590e33
    PUSH EAX                            ; 00590e36
    MOV dword ptr [EBP + 0xfffffe2e],ECX ; 00590e37
    PUSH EBX                            ; 00590e3d
    MOV dword ptr [EBP + 0xfffffe32],ECX ; 00590e3e
    MOV dword ptr [EBP + 0xfffffe36],ECX ; 00590e44
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00590e4a
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00590e4f
    JMP 0x005901f0                      ; 00590e52
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00590e57
        ;   Label: LAB_00590e57
    MOV dword ptr [EAX + 0x8],0x0       ; 00590e5a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00590e61
    MOV dword ptr [EAX + 0x4],EDX       ; 00590e64
    MOV EDX,dword ptr [EAX + 0x4]       ; 00590e67
    MOV dword ptr [EAX],EDX             ; 00590e6a
    JMP 0x00590dd5                      ; 00590e6c
        ;   XREF to: 00590dd5 (UNCONDITIONAL_JUMP)  ; LAB_00590dd5
    PUSH 0x3eb2b8c2                     ; 00590e71
        ;   Label: LAB_00590e71
    PUSH 0x3f8ccccd                     ; 00590e76
    MOV EAX,[0x005e71f8]                ; 00590e7b | DAT_005e71f8
    MOV dword ptr [EBP + 0xfffffe0a],ESI ; 00590e80
    MOV dword ptr [EBP + 0xfffffe12],EAX ; 00590e86
    LEA EAX,[EBP + 0xfffffe0a]          ; 00590e8c
    MOV dword ptr [EBP + 0xfffffe0e],ESI ; 00590e92
    PUSH EAX                            ; 00590e98
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00590e99
    PUSH EAX                            ; 00590e9f
    MOV ESI,dword ptr [EAX + 0x154]     ; 00590ea0
    CALL dword ptr [ESI + 0xc4]         ; 00590ea6
    ADD ESP,0x4                         ; 00590eac
    PUSH EAX                            ; 00590eaf
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00590eb0
    ADD EAX,0x20                        ; 00590eb6
    PUSH EAX                            ; 00590eb9
    PUSH EBX                            ; 00590eba
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00590ebb
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00590ec0
    TEST EAX,EAX                        ; 00590ec3
    JL 0x00590efd                       ; 00590ec5
        ;   XREF to: 00590efd (CONDITIONAL_JUMP)  ; LAB_00590efd
    JLE 0x005901f0                      ; 00590ec7
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x64                           ; 00590ecd
    PUSH 0x0                            ; 00590ecf
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00590ed1
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00590ed6
    CMP EAX,0x4b                        ; 00590ed9
    JGE 0x00590f27                      ; 00590edc
        ;   XREF to: 00590f27 (CONDITIONAL_JUMP)  ; LAB_00590f27
    PUSH 0x1                            ; 00590ede
    PUSH 0x3                            ; 00590ee0
    MOV ECX,dword ptr [EBP + 0x56]      ; 00590ee2
    PUSH ECX                            ; 00590ee5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00590ee6
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00590ee6
    ADD ESP,0xc                         ; 00590eeb
    MOV dword ptr [EBX + 0xcde0],0x3f4ccccd ; 00590eee
    JMP 0x005901f0                      ; 00590ef8
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    PUSH EBX                            ; 00590efd
        ;   Label: LAB_00590efd
    PUSH 0x5d8e32                       ; 00590efe | = "%s gave up chase - I'm confused\n"
    MOV ESI,dword ptr [0x005f1690]      ; 00590f03 | g_CConsolePtr
    PUSH ESI                            ; 00590f09 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00590f0a
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00590f0f
    PUSH 0x1                            ; 00590f12
    PUSH 0x0                            ; 00590f14
    MOV EDI,dword ptr [EBP + 0x56]      ; 00590f16
    PUSH EDI                            ; 00590f19
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00590f1a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00590f1f
    JMP 0x005901f0                      ; 00590f22
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x1                            ; 00590f27
        ;   Label: LAB_00590f27
    PUSH 0x4                            ; 00590f29
    MOV EDX,dword ptr [EBP + 0x56]      ; 00590f2b
    PUSH EDX                            ; 00590f2e
    JMP 0x00590ee6                      ; 00590f2f
        ;   XREF to: 00590ee6 (UNCONDITIONAL_JUMP)  ; LAB_00590ee6
    PUSH dword ptr [EBP + 0x92]         ; 00590f31
        ;   Label: caseD_5
    MOV EAX,dword ptr [EBX + 0x154]     ; 00590f37
    PUSH EBX                            ; 00590f3d
    CALL dword ptr [EAX + 0x144]        ; 00590f3e
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00590f44
    ADD ESP,0x8                         ; 00590f4a
    TEST EDI,EDI                        ; 00590f4d
    JNZ 0x00590f5f                      ; 00590f4f
        ;   XREF to: 00590f5f (CONDITIONAL_JUMP)  ; LAB_00590f5f
    PUSH EBX                            ; 00590f51
    CALL core_kedward.cpp_FUN_005919a0  ; 00590f52
        ;   XREF to: 005919a0 (UNCONDITIONAL_CALL)  ; undefined core_kedward.cpp_FUN_005919a0()
    ADD ESP,0x4                         ; 00590f57
    JMP 0x005901f0                      ; 00590f5a
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV EDX,dword ptr [EBP + 0x4e]      ; 00590f5f
        ;   Label: LAB_00590f5f
    LEA ESI,[EBP + 0xfffffe82]          ; 00590f62
    FLD float ptr [EDX]                 ; 00590f68
    FLD float ptr [EDX + 0x4]           ; 00590f6a
    FLD float ptr [EDX + 0x8]           ; 00590f6d
    FXCH ST2                            ; 00590f70
    FSUB float ptr [EDI + 0x20]         ; 00590f72
    FXCH                                ; 00590f75
    FSUB float ptr [EDI + 0x24]         ; 00590f77
    FXCH ST2                            ; 00590f7a
    FSUB float ptr [EDI + 0x28]         ; 00590f7c
    FXCH                                ; 00590f7f
    FSTP float ptr [EBP + 0xfffffe82]   ; 00590f81
    FXCH                                ; 00590f87
    FSTP float ptr [EBP + 0xfffffe86]   ; 00590f89
    LEA EDI,[EBP + 0xfffffdc2]          ; 00590f8f
    FSTP float ptr [EBP + 0xfffffe8a]   ; 00590f95
    MOVSD ES:EDI,ESI                    ; 00590f9b
    MOVSD ES:EDI,ESI                    ; 00590f9c
    MOVSD ES:EDI,ESI                    ; 00590f9d
    LEA EAX,[EBP + 0xfffffdc2]          ; 00590f9e
    LEA ESI,[EBP + 0xfffffe9a]          ; 00590fa4
    CMP ESI,EAX                         ; 00590faa
    JZ 0x00590fd2                       ; 00590fac
        ;   XREF to: 00590fd2 (CONDITIONAL_JUMP)  ; LAB_00590fd2
    MOV EAX,dword ptr [EBP + 0xfffffdc2] ; 00590fae
    MOV dword ptr [EBP + 0xfffffe9a],EAX ; 00590fb4
    MOV EAX,dword ptr [EBP + 0xfffffdc6] ; 00590fba
    MOV dword ptr [EBP + 0xfffffe9e],EAX ; 00590fc0
    MOV EAX,dword ptr [EBP + 0xfffffdca] ; 00590fc6
    MOV dword ptr [EBP + 0xfffffea2],EAX ; 00590fcc
    MOV EAX,dword ptr [EBP + 0x56]      ; 00590fd2
        ;   Label: LAB_00590fd2
    PUSH EAX                            ; 00590fd5
    CALL core_motion.cpp_FUN_004fc930   ; 00590fd6
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    FLD float ptr [EBP + 0xfffffe9e]    ; 00590fdb
    FMUL ST0                            ; 00590fe1
    FLD float ptr [EBP + 0xfffffe9a]    ; 00590fe3
    FMUL ST0                            ; 00590fe9
    FADDP                               ; 00590feb
    FLD float ptr [EBP + 0xfffffea2]    ; 00590fed
    FMUL ST0                            ; 00590ff3
    FADDP                               ; 00590ff5
    MOV dword ptr [EBP + 0x76],EAX      ; 00590ff7
    FSTP float ptr [EBP + 0xa]          ; 00590ffa
    MOV EAX,dword ptr [EBP + 0xa]       ; 00590ffd
    MOV EDX,dword ptr [0x01d1a0a4]      ; 00591000 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00591006
    ADD ESP,0x4                         ; 00591008
    ADD EAX,EDX                         ; 0059100b
    FLD float ptr [EBP + 0x76]          ; 0059100d
    MOV dword ptr [EBP + 0x22],EAX      ; 00591010
    FSTP float ptr [EBP + 0x46]         ; 00591013
    FLD float ptr [EBP + 0x22]          ; 00591016
    FCOMP float ptr [0x005e71f8]        ; 00591019 | DAT_005e71f8
    FNSTSW AX                           ; 0059101f
    SAHF                                ; 00591021
    JBE 0x00591040                      ; 00591022
        ;   XREF to: 00591040 (CONDITIONAL_JUMP)  ; LAB_00591040
    FLD float ptr [EBP + 0x46]          ; 00591024
    FCOMP double ptr [0x005d8ea4]       ; 00591027 | DAT_005d8ea4
    FNSTSW AX                           ; 0059102d
    SAHF                                ; 0059102f
    JBE 0x00591040                      ; 00591030
        ;   XREF to: 00591040 (CONDITIONAL_JUMP)  ; LAB_00591040
    PUSH EBX                            ; 00591032
    CALL core_kedward.cpp_FUN_005919a0  ; 00591033
        ;   XREF to: 005919a0 (UNCONDITIONAL_CALL)  ; undefined core_kedward.cpp_FUN_005919a0()
    ADD ESP,0x4                         ; 00591038
    JMP 0x005901f0                      ; 0059103b
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV ECX,dword ptr [EBP + 0x46]      ; 00591040
        ;   Label: LAB_00591040
    CMP ECX,0x3f800000                  ; 00591043
    JL 0x005901f0                       ; 00591049
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    CMP ECX,0x40000000                  ; 0059104f
    JG 0x005901f0                       ; 00591055
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    LEA EAX,[EBP + 0xfffffd02]          ; 0059105b
    PUSH EAX                            ; 00591061
    MOV EDI,0x41f00000                  ; 00591062
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00591067
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0059106c
    MOV dword ptr [EBP + 0xfffffd06],EDI ; 0059106f
    MOV dword ptr [EBP + 0xfffffd36],EBX ; 00591075
    MOV dword ptr [EBP + 0xfffffd3a],EBX ; 0059107b
    LEA EAX,[EBP + 0xfffffd02]          ; 00591081
    MOV EDX,dword ptr [EBX + 0xd074]    ; 00591087
    PUSH EAX                            ; 0059108d
    IMUL EAX,EDX,0x30                   ; 0059108e
    ADD EAX,dword ptr [EBP + 0x3a]      ; 00591091
    PUSH 0x40000000                     ; 00591094
    PUSH EAX                            ; 00591099
    PUSH 0x2cfd900                      ; 0059109a | DAT_02cfd900
    LEA ESI,[EBP + 0xffffff4e]          ; 0059109f
    LEA EDI,[EBP + 0xfffffeca]          ; 005910a5
    CALL core_xform.cpp_FUN_00583260    ; 005910ab
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 005910b0
    LEA EAX,[EBP + 0xfffffeca]          ; 005910b3
    LEA ESI,[EBP + 0xffffff4e]          ; 005910b9
    PUSH EAX                            ; 005910bf
    MOVSD ES:EDI,ESI                    ; 005910c0
    MOVSD ES:EDI,ESI                    ; 005910c1
    MOVSD ES:EDI,ESI                    ; 005910c2
    PUSH EBX                            ; 005910c3
    LEA ESI,[EBP + 0xffffff06]          ; 005910c4
    CALL core_actor.cpp_FUN_00408b80    ; 005910ca
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 005910cf
    LEA EAX,[EBP + 0xfffffdce]          ; 005910d2
    PUSH EAX                            ; 005910d8
    LEA EDI,[EBP + 0xfffffdce]          ; 005910d9
    LEA ESI,[EBP + 0xffffff06]          ; 005910df
    PUSH EBX                            ; 005910e5
    MOVSD ES:EDI,ESI                    ; 005910e6
    MOVSD ES:EDI,ESI                    ; 005910e7
    MOVSD ES:EDI,ESI                    ; 005910e8
    CALL core_enemy.cpp_FUN_004893f0    ; 005910e9
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 005910ee
    JMP 0x005901f0                      ; 005910f1
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    PUSH dword ptr [EBP + 0x92]         ; 005910f6
        ;   Label: caseD_4
    MOV EAX,dword ptr [EBX + 0x154]     ; 005910fc
    PUSH EBX                            ; 00591102
    CALL dword ptr [EAX + 0x144]        ; 00591103
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00591109
    ADD ESP,0x8                         ; 0059110f
    TEST ESI,ESI                        ; 00591112
    JNZ 0x00591124                      ; 00591114
        ;   XREF to: 00591124 (CONDITIONAL_JUMP)  ; LAB_00591124
    PUSH EBX                            ; 00591116
    CALL core_kedward.cpp_FUN_005919a0  ; 00591117
        ;   XREF to: 005919a0 (UNCONDITIONAL_CALL)  ; undefined core_kedward.cpp_FUN_005919a0()
    ADD ESP,0x4                         ; 0059111c
    JMP 0x005901f0                      ; 0059111f
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV EDX,dword ptr [EBP + 0x4e]      ; 00591124
        ;   Label: LAB_00591124
    LEA EDI,[EBP + 0xffffff42]          ; 00591127
    FLD float ptr [EDX]                 ; 0059112d
    FLD float ptr [EDX + 0x4]           ; 0059112f
    FLD float ptr [EDX + 0x8]           ; 00591132
    FXCH ST2                            ; 00591135
    FSUB float ptr [ESI + 0x20]         ; 00591137
    FXCH                                ; 0059113a
    FSUB float ptr [ESI + 0x24]         ; 0059113c
    FXCH ST2                            ; 0059113f
    FSUB float ptr [ESI + 0x28]         ; 00591141
    FXCH                                ; 00591144
    FSTP float ptr [EBP + 0xfffffed6]   ; 00591146
    FXCH                                ; 0059114c
    FSTP float ptr [EBP + 0xfffffeda]   ; 0059114e
    LEA ESI,[EBP + 0xfffffed6]          ; 00591154
    FSTP float ptr [EBP + 0xfffffede]   ; 0059115a
    MOVSD ES:EDI,ESI                    ; 00591160
    MOVSD ES:EDI,ESI                    ; 00591161
    MOVSD ES:EDI,ESI                    ; 00591162
    LEA EAX,[EBP + 0xffffff42]          ; 00591163
    LEA ESI,[EBP + 0xffffff36]          ; 00591169
    CMP ESI,EAX                         ; 0059116f
    JZ 0x00591197                       ; 00591171
        ;   XREF to: 00591197 (CONDITIONAL_JUMP)  ; LAB_00591197
    MOV EAX,dword ptr [EBP + 0xffffff42] ; 00591173
    MOV dword ptr [EBP + 0xffffff36],EAX ; 00591179
    MOV EAX,dword ptr [EBP + 0xffffff46] ; 0059117f
    MOV dword ptr [EBP + 0xffffff3a],EAX ; 00591185
    MOV EAX,dword ptr [EBP + 0xffffff4a] ; 0059118b
    MOV dword ptr [EBP + 0xffffff3e],EAX ; 00591191
    MOV EDI,dword ptr [EBP + 0x56]      ; 00591197
        ;   Label: LAB_00591197
    PUSH EDI                            ; 0059119a
    CALL core_motion.cpp_FUN_004fc930   ; 0059119b
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    FLD float ptr [EBP + 0xffffff3a]    ; 005911a0
    FMUL ST0                            ; 005911a6
    FLD float ptr [EBP + 0xffffff36]    ; 005911a8
    FMUL ST0                            ; 005911ae
    FADDP                               ; 005911b0
    FLD float ptr [EBP + 0xffffff3e]    ; 005911b2
    FMUL ST0                            ; 005911b8
    FLD float ptr [0x005e71f8]          ; 005911ba | DAT_005e71f8
    FLD1                                ; 005911c0
    MOV EDX,dword ptr [0x01d1a0a4]      ; 005911c2 | DAT_01d1a0a4
    FXCH ST2                            ; 005911c8
    FADDP ST3,ST0                       ; 005911ca
    MOV dword ptr [EBP + 0x76],EAX      ; 005911cc
    FXCH ST2                            ; 005911cf
    FSTP float ptr [EBP + 0x12]         ; 005911d1
    MOV EAX,dword ptr [EBP + 0x12]      ; 005911d4
    ADD ESP,0x4                         ; 005911d7
    SAR EAX,0x1                         ; 005911da
    FLD float ptr [EBP + 0x76]          ; 005911dc
    ADD EAX,EDX                         ; 005911df
    FXCH                                ; 005911e1
    FADDP ST2,ST0                       ; 005911e3
    MOV dword ptr [EBP + 0x16],EAX      ; 005911e5
    FSTP float ptr [EBP + 0x3e]         ; 005911e8
    FLD float ptr [EBP + 0x16]          ; 005911eb
    FCOMPP                              ; 005911ee
    FNSTSW AX                           ; 005911f0
    SAHF                                ; 005911f2
    JBE 0x00591211                      ; 005911f3
        ;   XREF to: 00591211 (CONDITIONAL_JUMP)  ; LAB_00591211
    FLD float ptr [EBP + 0x3e]          ; 005911f5
    FCOMP double ptr [0x005d8ea4]       ; 005911f8 | DAT_005d8ea4
    FNSTSW AX                           ; 005911fe
    SAHF                                ; 00591200
    JBE 0x00591211                      ; 00591201
        ;   XREF to: 00591211 (CONDITIONAL_JUMP)  ; LAB_00591211
    PUSH EBX                            ; 00591203
    CALL core_kedward.cpp_FUN_005919a0  ; 00591204
        ;   XREF to: 005919a0 (UNCONDITIONAL_CALL)  ; undefined core_kedward.cpp_FUN_005919a0()
    ADD ESP,0x4                         ; 00591209
    JMP 0x005901f0                      ; 0059120c
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV ECX,dword ptr [EBP + 0x3e]      ; 00591211
        ;   Label: LAB_00591211
    CMP ECX,0x3f800000                  ; 00591214
    JL 0x005901f0                       ; 0059121a
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    CMP ECX,0x40000000                  ; 00591220
    JG 0x005901f0                       ; 00591226
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    LEA EAX,[EBP + 0xfffffd7a]          ; 0059122c
    PUSH EAX                            ; 00591232
    MOV EDI,0x41a00000                  ; 00591233
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00591238
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0059123d
    MOV dword ptr [EBP + 0xfffffd7e],EDI ; 00591240
    MOV dword ptr [EBP + 0xfffffdae],EBX ; 00591246
    MOV dword ptr [EBP + 0xfffffdb2],EBX ; 0059124c
    LEA EAX,[EBP + 0xfffffd7a]          ; 00591252
    MOV EDX,dword ptr [EBX + 0xd074]    ; 00591258
    PUSH EAX                            ; 0059125e
    IMUL EAX,EDX,0x30                   ; 0059125f
    ADD EAX,dword ptr [EBP + 0x3a]      ; 00591262
    PUSH 0x40000000                     ; 00591265
    PUSH EAX                            ; 0059126a
    PUSH 0x2cfd900                      ; 0059126b | DAT_02cfd900
    LEA ESI,[EBP + 0xfffffea6]          ; 00591270
    LEA EDI,[EBP + 0xfffffe6a]          ; 00591276
    CALL core_xform.cpp_FUN_00583260    ; 0059127c
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00591281
    LEA EAX,[EBP + 0xfffffe6a]          ; 00591284
    LEA ESI,[EBP + 0xfffffea6]          ; 0059128a
    PUSH EAX                            ; 00591290
    MOVSD ES:EDI,ESI                    ; 00591291
    MOVSD ES:EDI,ESI                    ; 00591292
    MOVSD ES:EDI,ESI                    ; 00591293
    PUSH EBX                            ; 00591294
    LEA ESI,[EBP + 0xfffffeb2]          ; 00591295
    CALL core_actor.cpp_FUN_00408b80    ; 0059129b
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 005912a0
    LEA EAX,[EBP + -0x22]               ; 005912a3
    PUSH EAX                            ; 005912a6
    LEA EDI,[EBP + -0x22]               ; 005912a7
    LEA ESI,[EBP + 0xfffffeb2]          ; 005912aa
    PUSH EBX                            ; 005912b0
    MOVSD ES:EDI,ESI                    ; 005912b1
    MOVSD ES:EDI,ESI                    ; 005912b2
    MOVSD ES:EDI,ESI                    ; 005912b3
    CALL core_enemy.cpp_FUN_004893f0    ; 005912b4
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 005912b9
    JMP 0x005901f0                      ; 005912bc
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    PUSH dword ptr [EBP + 0x92]         ; 005912c1
        ;   Label: caseD_3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005912c7
    PUSH EBX                            ; 005912cd
    CALL dword ptr [EAX + 0x144]        ; 005912ce
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 005912d4
    ADD ESP,0x8                         ; 005912da
    TEST ESI,ESI                        ; 005912dd
    JNZ 0x005912ef                      ; 005912df
        ;   XREF to: 005912ef (CONDITIONAL_JUMP)  ; LAB_005912ef
    PUSH EBX                            ; 005912e1
    CALL core_kedward.cpp_FUN_005919a0  ; 005912e2
        ;   XREF to: 005919a0 (UNCONDITIONAL_CALL)  ; undefined core_kedward.cpp_FUN_005919a0()
    ADD ESP,0x4                         ; 005912e7
    JMP 0x005901f0                      ; 005912ea
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV EDX,dword ptr [EBP + 0x4e]      ; 005912ef
        ;   Label: LAB_005912ef
    LEA EDI,[EBP + -0x46]               ; 005912f2
    FLD float ptr [EDX]                 ; 005912f5
    FLD float ptr [EDX + 0x4]           ; 005912f7
    FLD float ptr [EDX + 0x8]           ; 005912fa
    FXCH ST2                            ; 005912fd
    FSUB float ptr [ESI + 0x20]         ; 005912ff
    FXCH                                ; 00591302
    FSUB float ptr [ESI + 0x24]         ; 00591304
    FXCH ST2                            ; 00591307
    FSUB float ptr [ESI + 0x28]         ; 00591309
    FXCH                                ; 0059130c
    FSTP float ptr [EBP + 0xfffffdfe]   ; 0059130e
    FXCH                                ; 00591314
    FSTP float ptr [EBP + 0xfffffe02]   ; 00591316
    LEA ESI,[EBP + 0xfffffdfe]          ; 0059131c
    FSTP float ptr [EBP + 0xfffffe06]   ; 00591322
    MOVSD ES:EDI,ESI                    ; 00591328
    MOVSD ES:EDI,ESI                    ; 00591329
    MOVSD ES:EDI,ESI                    ; 0059132a
    LEA EAX,[EBP + -0x46]               ; 0059132b
    LEA ESI,[EBP + 0xfffffebe]          ; 0059132e
    CMP ESI,EAX                         ; 00591334
    JZ 0x00591353                       ; 00591336
        ;   XREF to: 00591353 (CONDITIONAL_JUMP)  ; LAB_00591353
    MOV EAX,dword ptr [EBP + -0x46]     ; 00591338
    MOV dword ptr [EBP + 0xfffffebe],EAX ; 0059133b
    MOV EAX,dword ptr [EBP + -0x42]     ; 00591341
    MOV dword ptr [EBP + 0xfffffec2],EAX ; 00591344
    MOV EAX,dword ptr [EBP + -0x3e]     ; 0059134a
    MOV dword ptr [EBP + 0xfffffec6],EAX ; 0059134d
    MOV EDI,dword ptr [EBP + 0x56]      ; 00591353
        ;   Label: LAB_00591353
    PUSH EDI                            ; 00591356
    CALL core_motion.cpp_FUN_004fc930   ; 00591357
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    FLD float ptr [EBP + 0xfffffec2]    ; 0059135c
    FMUL ST0                            ; 00591362
    FLD float ptr [EBP + 0xfffffebe]    ; 00591364
    FMUL ST0                            ; 0059136a
    FADDP                               ; 0059136c
    FLD float ptr [EBP + 0xfffffec6]    ; 0059136e
    FMUL ST0                            ; 00591374
    FADDP                               ; 00591376
    MOV dword ptr [EBP + 0x76],EAX      ; 00591378
    FSTP float ptr [EBP + 0x1a]         ; 0059137b
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0059137e
    MOV EDX,dword ptr [0x01d1a0a4]      ; 00591381 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00591387
    ADD ESP,0x4                         ; 00591389
    ADD EAX,EDX                         ; 0059138c
    FLD float ptr [EBP + 0x76]          ; 0059138e
    MOV dword ptr [EBP + 0x1e],EAX      ; 00591391
    FSTP float ptr [EBP + 0x42]         ; 00591394
    FLD float ptr [EBP + 0x1e]          ; 00591397
    FCOMP float ptr [0x005e71f8]        ; 0059139a | DAT_005e71f8
    FNSTSW AX                           ; 005913a0
    SAHF                                ; 005913a2
    JBE 0x005913c1                      ; 005913a3
        ;   XREF to: 005913c1 (CONDITIONAL_JUMP)  ; LAB_005913c1
    FLD float ptr [EBP + 0x42]          ; 005913a5
    FCOMP double ptr [0x005d8eac]       ; 005913a8 | DAT_005d8eac
    FNSTSW AX                           ; 005913ae
    SAHF                                ; 005913b0
    JBE 0x005913c1                      ; 005913b1
        ;   XREF to: 005913c1 (CONDITIONAL_JUMP)  ; LAB_005913c1
    PUSH EBX                            ; 005913b3
    CALL core_kedward.cpp_FUN_005919a0  ; 005913b4
        ;   XREF to: 005919a0 (UNCONDITIONAL_CALL)  ; undefined core_kedward.cpp_FUN_005919a0()
    ADD ESP,0x4                         ; 005913b9
    JMP 0x005901f0                      ; 005913bc
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV ECX,dword ptr [EBP + 0x42]      ; 005913c1
        ;   Label: LAB_005913c1
    CMP ECX,0x3f800000                  ; 005913c4
    JL 0x005901f0                       ; 005913ca
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    CMP ECX,0x40000000                  ; 005913d0
    JG 0x005901f0                       ; 005913d6
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    LEA EAX,[EBP + 0xfffffd3e]          ; 005913dc
    PUSH EAX                            ; 005913e2
    MOV EDI,0x41200000                  ; 005913e3
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 005913e8
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005913ed
    MOV dword ptr [EBP + 0xfffffd42],EDI ; 005913f0
    MOV dword ptr [EBP + 0xfffffd72],EBX ; 005913f6
    MOV dword ptr [EBP + 0xfffffd76],EBX ; 005913fc
    LEA EAX,[EBP + 0xfffffd3e]          ; 00591402
    MOV EDX,dword ptr [EBX + 0xd074]    ; 00591408
    PUSH EAX                            ; 0059140e
    IMUL EAX,EDX,0x30                   ; 0059140f
    ADD EAX,dword ptr [EBP + 0x3a]      ; 00591412
    PUSH 0x40000000                     ; 00591415
    PUSH EAX                            ; 0059141a
    PUSH 0x2cfd900                      ; 0059141b | DAT_02cfd900
    LEA ESI,[EBP + 0xfffffe16]          ; 00591420
    LEA EDI,[EBP + 0xfffffdf2]          ; 00591426
    CALL core_xform.cpp_FUN_00583260    ; 0059142c
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00591431
    LEA EAX,[EBP + 0xfffffdf2]          ; 00591434
    LEA ESI,[EBP + 0xfffffe16]          ; 0059143a
    PUSH EAX                            ; 00591440
    MOVSD ES:EDI,ESI                    ; 00591441
    MOVSD ES:EDI,ESI                    ; 00591442
    MOVSD ES:EDI,ESI                    ; 00591443
    PUSH EBX                            ; 00591444
    LEA ESI,[EBP + 0xfffffe3a]          ; 00591445
    CALL core_actor.cpp_FUN_00408b80    ; 0059144b
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00591450
    LEA EAX,[EBP + 0xffffff12]          ; 00591453
    PUSH EAX                            ; 00591459
    LEA EDI,[EBP + 0xffffff12]          ; 0059145a
    LEA ESI,[EBP + 0xfffffe3a]          ; 00591460
    PUSH EBX                            ; 00591466
    MOVSD ES:EDI,ESI                    ; 00591467
    MOVSD ES:EDI,ESI                    ; 00591468
    MOVSD ES:EDI,ESI                    ; 00591469
    CALL core_enemy.cpp_FUN_004893f0    ; 0059146a
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0059146f
    JMP 0x005901f0                      ; 00591472
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,[0x01d5ba14]                ; 00591477 | DAT_01d5ba14
        ;   Label: caseD_c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059147c
    PUSH EAX                            ; 00591483
    MOV ESI,dword ptr [EAX + 0x154]     ; 00591484
    CALL dword ptr [ESI + 0x10c]        ; 0059148a
    ADD ESP,0x4                         ; 00591490
    TEST EAX,EAX                        ; 00591493
    JNZ 0x0059155a                      ; 00591495
        ;   XREF to: 0059155a (CONDITIONAL_JUMP)  ; LAB_0059155a
    MOV EAX,[0x01d5ba14]                ; 0059149b | DAT_01d5ba14
    MOV EDX,dword ptr [EBP + 0x4e]      ; 005914a0
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 005914a3
    LEA EDI,[EBP + 0xfffffe8e]          ; 005914aa
    LEA ESI,[EBP + 0xfffffdda]          ; 005914b0
    FLD float ptr [EAX + 0x24]          ; 005914b6
    FLD float ptr [EAX + 0x28]          ; 005914b9
    FLD float ptr [EAX + 0x20]          ; 005914bc
    LEA EAX,[EBP + 0xfffffe8e]          ; 005914bf
    FSUB float ptr [EDX]                ; 005914c5
    FXCH ST2                            ; 005914c7
    FSUB float ptr [EDX + 0x4]          ; 005914c9
    FXCH                                ; 005914cc
    FSUB float ptr [EDX + 0x8]          ; 005914ce
    FXCH ST2                            ; 005914d1
    FSTP float ptr [EBP + 0xfffffdda]   ; 005914d3
    FSTP float ptr [EBP + 0xfffffdde]   ; 005914d9
    FSTP float ptr [EBP + 0xfffffde2]   ; 005914df
    MOVSD ES:EDI,ESI                    ; 005914e5
    MOVSD ES:EDI,ESI                    ; 005914e6
    MOVSD ES:EDI,ESI                    ; 005914e7
    PUSH EAX                            ; 005914e8
    LEA ESI,[EBP + 0xfffffee2]          ; 005914e9
    LEA EDI,[EBP + -0x76]               ; 005914ef
    CALL core_vecdir.cpp_FUN_00576250   ; 005914f2
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[EBP + 0xfffffee2]          ; 005914f7
    MOVSD ES:EDI,ESI                    ; 005914fd
    MOVSD ES:EDI,ESI                    ; 005914fe
    MOVSD ES:EDI,ESI                    ; 005914ff
    ADD ESP,0x4                         ; 00591500
    FLD float ptr [EBP + -0x72]         ; 00591503
    FSUB float ptr [EBX + 0x34]         ; 00591506
    SUB ESP,0x4                         ; 00591509
    FSTP float ptr [ESP]                ; 0059150c
    CALL core_actor.cpp_FUN_0040cfa0    ; 0059150f
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    FLD float ptr [EBP + -0x76]         ; 00591514
    ADD ESP,0x4                         ; 00591517
    MOV dword ptr [EBP + 0x76],EAX      ; 0059151a
    SUB ESP,0x4                         ; 0059151d
    FSUB float ptr [EBX + 0x30]         ; 00591520
    FLD float ptr [EBP + 0x76]          ; 00591523
    FXCH                                ; 00591526
    FSTP float ptr [ESP]                ; 00591528
    FSTP float ptr [EBP + 0x26]         ; 0059152b
    CALL core_actor.cpp_FUN_0040cfa0    ; 0059152e
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    FLD float ptr [EBX + 0x34]          ; 00591533
    FLD float ptr [EBX + 0x30]          ; 00591536
    MOV dword ptr [EBP + 0x76],EAX      ; 00591539
    ADD ESP,0x4                         ; 0059153c
    FLD float ptr [EBP + 0x76]          ; 0059153f
    FXCH ST2                            ; 00591542
    FADD float ptr [EBP + 0x26]         ; 00591544
    PUSH EBX                            ; 00591547
    FXCH                                ; 00591548
    FADDP ST2,ST0                       ; 0059154a
    FSTP float ptr [EBX + 0x34]         ; 0059154c
    FSTP float ptr [EBX + 0x30]         ; 0059154f
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 00591552
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00591557
    MOV EAX,[0x01d5ba14]                ; 0059155a | DAT_01d5ba14
        ;   Label: LAB_0059155a
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059155f
    PUSH EAX                            ; 00591566
    MOV ESI,dword ptr [EAX + 0x154]     ; 00591567
    CALL dword ptr [ESI + 0x10c]        ; 0059156d
    ADD ESP,0x4                         ; 00591573
    TEST EAX,EAX                        ; 00591576
    JZ 0x005901f0                       ; 00591578
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EDX,dword ptr [EBP + 0x56]      ; 0059157e
    PUSH EDX                            ; 00591581
    CALL core_motion.cpp_FUN_004fc930   ; 00591582
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00591587
    ADD ESP,0x4                         ; 0059158a
    FLD float ptr [EBP + 0x76]          ; 0059158d
    FCOMP double ptr [0x005d8e8c]       ; 00591590 | DAT_005d8e8c
    FNSTSW AX                           ; 00591596
    SAHF                                ; 00591598
    JBE 0x005901f0                      ; 00591599
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x1                            ; 0059159f
    PUSH 0x0                            ; 005915a1
    MOV ECX,dword ptr [EBP + 0x56]      ; 005915a3
    PUSH ECX                            ; 005915a6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005915a7
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005915ac
    JMP 0x005901f0                      ; 005915af
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0xd068]    ; 005915b4
        ;   Label: caseD_d
    TEST EAX,EAX                        ; 005915ba
    JNZ 0x005901f0                      ; 005915bc
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    MOV dword ptr [EBX + 0xd068],0x1    ; 005915c2
    MOV dword ptr [EBX + 0xd064],EAX    ; 005915cc
    JMP 0x005901f0                      ; 005915d2
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV ESI,dword ptr [EBX + 0xd068]    ; 005915d7
        ;   Label: caseD_e
    CMP ESI,0x1                         ; 005915dd
    JNZ 0x005901f0                      ; 005915e0
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    MOV dword ptr [EBX + 0xd068],0x0    ; 005915e6
    MOV EDI,dword ptr [EBX + 0xd094]    ; 005915f0
    MOV dword ptr [EBX + 0xd064],0x0    ; 005915f6
    TEST EDI,EDI                        ; 00591600
    JNZ 0x005901f0                      ; 00591602
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    MOV dword ptr [EBX + 0xd07c],0x40800000 ; 00591608
    MOV dword ptr [EBX + 0xd078],ESI    ; 00591612
    JMP 0x005901f0                      ; 00591618
        ;   XREF to: 005901f0 (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP ESI,0x14                        ; 0059161d
        ;   Label: LAB_0059161d
    JA 0x005901f0                       ; 00591620
        ;   XREF to: 005901f0 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [ESI*0x4 + 0x58ffb0]  ; 00591626 | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD
    PUSH 0x1                            ; 0059162d
        ;   Label: LAB_0059162d
    PUSH 0xc                            ; 0059162f
    MOV ESI,dword ptr [EBP + 0x56]      ; 00591631
    PUSH ESI                            ; 00591634
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00591635
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059163a
    JMP 0x00590235                      ; 0059163d
        ;   XREF to: 00590235 (UNCONDITIONAL_JUMP)  ; LAB_00590235
    PUSH EBX                            ; 00591642
        ;   Label: LAB_00591642
    CALL core_charactr.cpp_FUN_0042cd30 ; 00591643
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00591648
    MOV EAX,dword ptr [EBP + 0x56]      ; 0059164b
    PUSH EAX                            ; 0059164e
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0059164f
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00591654
    PUSH dword ptr [EBP + 0x92]         ; 00591657
    PUSH EBX                            ; 0059165d
    CALL core_charactr.cpp_FUN_00433350 ; 0059165e
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00591663
    LEA ESP,[EBP + 0x7a]                ; 00591666
        ;   Label: LAB_00591666
    POP EBP                             ; 00591669
    POP EDI                             ; 0059166a
    POP ESI                             ; 0059166b
    POP EBX                             ; 0059166c
    RET                                 ; 0059166d

