; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_process_FUN_0049f310(CEmitter *this_ptr,float delta_time)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0049f2d4 = 0049f422
;   undefined4 s_none_005dc96a+1
;   undefined4 DAT_005dc970
;   undefined4 DAT_005dc977
;   undefined4 DAT_005dc97b
;   undefined4 DAT_005dc97f
;   undefined4 DAT_005dc987
;   undefined4 DAT_005dc98f
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061c010
;   CGame* g_CGamePtr = 01ccf390
;   CGore* g_CGorePtr = 01cd0e3c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CGameInstance.foul_language_flag
;   undefined4 DAT_01d06ab4
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_emitter.cpp_FUN_004a02e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_fire.cpp_CFireEffect_createFirefly_FUN_004b5fa0
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_004b6f80
;   core_fire.cpp_CFireEffect_createLeaf_FUN_004b5f00
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_004b6fe0
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f310
        ;   Label: core_emitter.cpp_CEmitter_process_FUN_0049f310
    PUSH ESI                            ; 0049f311
    PUSH EDI                            ; 0049f312
    PUSH EBP                            ; 0049f313
    MOV EBP,ESP                         ; 0049f314
    SUB ESP,0x18c                       ; 0049f316
    AND ESP,0xfffffff8                  ; 0049f31c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049f31f
    PUSH 0x5dc96b                       ; 0049f322 | s_none_005dc96a+1
    LEA EDI,[EBX + 0x16c]               ; 0049f327
    PUSH EDI                            ; 0049f32d
    MOV ESI,dword ptr [EBX + 0x4b0]     ; 0049f32e
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0049f334
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049f339
    TEST EAX,EAX                        ; 0049f33c
    JNZ 0x0049f51e                      ; 0049f33e
        ;   XREF to: 0049f51e (CONDITIONAL_JUMP)  ; LAB_0049f51e
    LEA EAX,[EBX + 0x1d0]               ; 0049f344
        ;   Label: LAB_0049f344
    PUSH EAX                            ; 0049f34a
    MOV EDI,dword ptr [0x0061b4d0]      ; 0049f34b | DAT_0061b4d0
    PUSH EDI                            ; 0049f351
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0049f352
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0049f357
    TEST EAX,EAX                        ; 0049f35a
    JZ 0x0049f372                       ; 0049f35c
        ;   XREF to: 0049f372 (CONDITIONAL_JUMP)  ; LAB_0049f372
    MOV dword ptr [EBX + 0x168],0x0     ; 0049f35e
    MOV dword ptr [EBX + 0x3ec],0x0     ; 0049f368
    CMP dword ptr [EBX + 0x158],0xa     ; 0049f372
        ;   Label: LAB_0049f372
    JNZ 0x0049f3c7                      ; 0049f379
        ;   XREF to: 0049f3c7 (CONDITIONAL_JUMP)  ; LAB_0049f3c7
    PUSH dword ptr [EBX + 0x3f4]        ; 0049f37b
    SUB ESP,0x8                         ; 0049f381
    FLD float ptr [EBX + 0x28]          ; 0049f384
    FSTP double ptr [ESP]               ; 0049f387
    SUB ESP,0x8                         ; 0049f38a
    FLD float ptr [EBX + 0x24]          ; 0049f38d
    FSTP double ptr [ESP]               ; 0049f390
    SUB ESP,0x8                         ; 0049f393
    FLD float ptr [EBX + 0x20]          ; 0049f396
    FSTP double ptr [ESP]               ; 0049f399
    XOR ESI,ESI                         ; 0049f39c
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_00574010 ; 0049f39e
        ;   XREF to: 00574010 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_00574010(double pos_x, double pos_y, double pos_z, float radius)
    ADD ESP,0x1c                        ; 0049f3a3
    TEST EAX,EAX                        ; 0049f3a6
    JZ 0x0049f3bf                       ; 0049f3a8
        ;   XREF to: 0049f3bf (CONDITIONAL_JUMP)  ; LAB_0049f3bf
    MOV EAX,[0x0061d95c]                ; 0049f3aa | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x1c]      ; 0049f3af | g_CGameInstance.foul_language_flag
    MOV ESI,0x1                         ; 0049f3b2
    TEST EDX,EDX                        ; 0049f3b7
    JZ 0x0049f570                       ; 0049f3b9
        ;   XREF to: 0049f570 (CONDITIONAL_JUMP)  ; LAB_0049f570
    TEST ESI,ESI                        ; 0049f3bf
        ;   Label: LAB_0049f3bf
    JZ 0x0049f590                       ; 0049f3c1
        ;   XREF to: 0049f590 (CONDITIONAL_JUMP)  ; LAB_0049f590
    CMP dword ptr [EBX + 0x168],0x0     ; 0049f3c7
        ;   Label: LAB_0049f3c7
    JZ 0x0049fd3c                       ; 0049f3ce
        ;   XREF to: 0049fd3c (CONDITIONAL_JUMP)  ; LAB_0049fd3c
    FLD float ptr [EBX + 0x464]         ; 0049f3d4
    FADD float ptr [EBP + 0x18]         ; 0049f3da
    FST float ptr [EBX + 0x464]         ; 0049f3dd
    FCOMP float ptr [EBX + 0x468]       ; 0049f3e3
    FNSTSW AX                           ; 0049f3e9
    SAHF                                ; 0049f3eb
    JC 0x0049f4cb                       ; 0049f3ec
        ;   XREF to: 0049f4cb (CONDITIONAL_JUMP)  ; LAB_0049f4cb
    FLD float ptr [EBX + 0x468]         ; 0049f3f2
    FSUBR float ptr [EBX + 0x464]       ; 0049f3f8
    FSTP float ptr [EBX + 0x464]        ; 0049f3fe
    TEST ESI,ESI                        ; 0049f404
    JZ 0x0049f4cb                       ; 0049f406
        ;   XREF to: 0049f4cb (CONDITIONAL_JUMP)  ; LAB_0049f4cb
    MOV EAX,dword ptr [EBX + 0x158]     ; 0049f40c
    CMP EAX,0xd                         ; 0049f412
    JA 0x0049f4ab                       ; 0049f415
        ;   XREF to: 0049f4ab (CONDITIONAL_JUMP)  ; caseD_a
    JMP dword ptr [EAX*0x4 + 0x49f2d4]  ; 0049f41b | caseD_0 | caseD_1 | caseD_a
        ;   Label: switchD
    PUSH 0xffff                         ; 0049f422
        ;   Label: caseD_0
    PUSH 0x0                            ; 0049f427
    PUSH 0x10000                        ; 0049f429
    PUSH 0x4000                         ; 0049f42e
    PUSH 0x0                            ; 0049f433
    LEA ESI,[EBX + 0x20]                ; 0049f435
    PUSH ESI                            ; 0049f438
    MOV EDI,dword ptr [0x0061c010]      ; 0049f439 | DAT_0061c010
    PUSH EDI                            ; 0049f43f
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 0049f440
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0049f445
    PUSH ESI                            ; 0049f448
        ;   Label: LAB_0049f448
    LEA ESI,[EBX + 0x470]               ; 0049f449
    PUSH ESI                            ; 0049f44f
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970 ; 0049f450
        ;   XREF to: 0045e970 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0049f455
    PUSH 0x7fff                         ; 0049f458
    PUSH 0x0                            ; 0049f45d
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0049f45f
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    MOV EDX,EAX                         ; 0049f464
    SAR EDX,0x1f                        ; 0049f466
    MOV dword ptr [ESI + 0x3c],EAX      ; 0049f469
    SHL EDX,0x8                         ; 0049f46c
    SBB EAX,EDX                         ; 0049f46f
    SAR EAX,0x8                         ; 0049f471
    MOV EDX,EAX                         ; 0049f474
    SAR EDX,0x1f                        ; 0049f476
    SHL EDX,0x2                         ; 0049f479
    SBB EAX,EDX                         ; 0049f47c
    SAR EAX,0x2                         ; 0049f47e
    ADD ESP,0x8                         ; 0049f481
    PUSH 0x41200000                     ; 0049f484
    PUSH ESI                            ; 0049f489
    MOV byte ptr [ESI + 0x1c],AL        ; 0049f48a
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0 ; 0049f48d
        ;   XREF to: 0045e9c0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0(CDemonGlobe * this_ptr, float radius)
        ;   Label: LAB_0049f48d
    ADD ESP,0x8                         ; 0049f492
    PUSH ESI                            ; 0049f495
    MOV EAX,[0x00622c18]                ; 0049f496 | g_CDemonSetPtr
    PUSH EAX                            ; 0049f49b | g_CDemonSetInstance
    MOV dword ptr [ESI + 0x20],0x0      ; 0049f49c
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960 ; 0049f4a3
        ;   XREF to: 00551960 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 0049f4a8
    CMP byte ptr [EBX + 0x3f8],0x0      ; 0049f4ab
        ;   Label: caseD_2
    JZ 0x0049f4cb                       ; 0049f4b2
        ;   XREF to: 0049f4cb (CONDITIONAL_JUMP)  ; LAB_0049f4cb
    MOV EDX,dword ptr [EBX + 0x45c]     ; 0049f4b4
    PUSH EDX                            ; 0049f4ba
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 0049f4bb
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0049f4c0
    TEST EAX,EAX                        ; 0049f4c3
    JZ 0x0049fd07                       ; 0049f4c5
        ;   XREF to: 0049fd07 (CONDITIONAL_JUMP)  ; LAB_0049fd07
    MOV EAX,dword ptr [EBX + 0x168]     ; 0049f4cb
        ;   Label: LAB_0049f4cb
    MOV EDI,dword ptr [EBX + 0x3ec]     ; 0049f4d1
    MOV dword ptr [EBX + 0x4b4],EAX     ; 0049f4d7
    TEST EDI,EDI                        ; 0049f4dd
    JZ 0x0049f517                       ; 0049f4df
        ;   XREF to: 0049f517 (CONDITIONAL_JUMP)  ; LAB_0049f517
    CMP dword ptr [EBX + 0x3e4],0x0     ; 0049f4e1
    JZ 0x0049fda6                       ; 0049f4e8
        ;   XREF to: 0049fda6 (CONDITIONAL_JUMP)  ; LAB_0049fda6
    CMP dword ptr [EBX + 0x168],0x0     ; 0049f4ee
    JNZ 0x0049fd6d                      ; 0049f4f5
        ;   XREF to: 0049fd6d (CONDITIONAL_JUMP)  ; LAB_0049fd6d
    FLD float ptr [EBX + 0x46c]         ; 0049f4fb
    FSUB float ptr [EBP + 0x18]         ; 0049f501
    FST float ptr [EBX + 0x46c]         ; 0049f504
    FLDZ                                ; 0049f50a
    FCOMPP                              ; 0049f50c
    FNSTSW AX                           ; 0049f50e
    SAHF                                ; 0049f510
    JNC 0x0049fd50                      ; 0049f511
        ;   XREF to: 0049fd50 (CONDITIONAL_JUMP)  ; LAB_0049fd50
    MOV ESP,EBP                         ; 0049f517
        ;   Label: LAB_0049f517
    POP EBP                             ; 0049f519
    POP EDI                             ; 0049f51a
    POP ESI                             ; 0049f51b
    POP EBX                             ; 0049f51c
    RET                                 ; 0049f51d
    PUSH EDI                            ; 0049f51e
        ;   Label: LAB_0049f51e
    MOV EDX,dword ptr [0x0061b4d0]      ; 0049f51f | DAT_0061b4d0
    PUSH EDX                            ; 0049f525
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0049f526
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0049f52b
    TEST EAX,EAX                        ; 0049f52e
    JZ 0x0049f344                       ; 0049f530
        ;   XREF to: 0049f344 (CONDITIONAL_JUMP)  ; LAB_0049f344
    FLD float ptr [EBX + 0x234]         ; 0049f536
    MOV ESI,0x1                         ; 0049f53c
    PUSH EBX                            ; 0049f541
    MOV dword ptr [EBX + 0x3ec],0x1     ; 0049f542
    MOV ECX,dword ptr [0x00622c18]      ; 0049f54c | g_CDemonSetPtr
    MOV dword ptr [EBX + 0x168],0x1     ; 0049f552
    PUSH ECX                            ; 0049f55c | g_CDemonSetInstance
    FSTP float ptr [EBX + 0x46c]        ; 0049f55d
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060 ; 0049f563
        ;   XREF to: 0054f060 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0049f568
    JMP 0x0049f344                      ; 0049f56b
        ;   XREF to: 0049f344 (UNCONDITIONAL_JUMP)  ; LAB_0049f344
    PUSH 0x3                            ; 0049f570
        ;   Label: LAB_0049f570
    PUSH 0x5dc970                       ; 0049f572 | DAT_005dc970
    LEA EAX,[EBX + 0x3f8]               ; 0049f577
    PUSH EAX                            ; 0049f57d
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0049f57e
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0049f583
    TEST EAX,EAX                        ; 0049f586
    JNZ 0x0049f3bf                      ; 0049f588
        ;   XREF to: 0049f3bf (CONDITIONAL_JUMP)  ; LAB_0049f3bf
    XOR ESI,ESI                         ; 0049f58e
    MOV ECX,dword ptr [EBX + 0x45c]     ; 0049f590
        ;   Label: LAB_0049f590
    PUSH ECX                            ; 0049f596
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0049f597
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0049f59c
    JMP 0x0049f3c7                      ; 0049f59f
        ;   XREF to: 0049f3c7 (UNCONDITIONAL_JUMP)  ; LAB_0049f3c7
    XOR ECX,ECX                         ; 0049f5a4
        ;   Label: caseD_c
    MOV EDI,0x42000000                  ; 0049f5a6
    MOV dword ptr [ESP + 0x98],ECX      ; 0049f5ab
    MOV dword ptr [ESP + 0x90],ECX      ; 0049f5b2
    MOV dword ptr [ESP + 0x94],EDI      ; 0049f5b9
    PUSH dword ptr [EBX + 0x3e0]        ; 0049f5c0
    MOV EAX,dword ptr [EBX + 0x3dc]     ; 0049f5c6
    PUSH dword ptr [EBX + 0x3cc]        ; 0049f5cc
    PUSH EAX                            ; 0049f5d2
    MOV EDX,dword ptr [EBX + 0x3d0]     ; 0049f5d3
    PUSH EDX                            ; 0049f5d9
    MOV ECX,dword ptr [EBX + 0x3d8]     ; 0049f5da
    PUSH ECX                            ; 0049f5e0
    MOV ESI,dword ptr [EBX + 0x3d4]     ; 0049f5e1
    PUSH ESI                            ; 0049f5e7
    LEA EAX,[ESP + 0xa8]                ; 0049f5e8
    PUSH EAX                            ; 0049f5ef
    LEA ESI,[EBX + 0x20]                ; 0049f5f0
    PUSH ESI                            ; 0049f5f3
    MOV EDI,dword ptr [0x0061c010]      ; 0049f5f4 | DAT_0061c010
    PUSH EDI                            ; 0049f5fa
    CALL core_fire.cpp_CFireEffect_createFirefly_FUN_004b5fa0 ; 0049f5fb
        ;   XREF to: 004b5fa0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFirefly_FUN_004b5fa0(CFireEffect * this_ptr, undefined4 param_2, undefined4 param_3, int param_4, ...)
    ADD ESP,0x24                        ; 0049f600
    JMP 0x0049f448                      ; 0049f603
        ;   XREF to: 0049f448 (UNCONDITIONAL_JUMP)  ; LAB_0049f448
    LEA EDI,[ESP + 0x48]                ; 0049f608
        ;   Label: caseD_d
    LEA ESI,[EBX + 0x20]                ; 0049f60c
    MOVSD ES:EDI,ESI                    ; 0049f60f
    MOVSD ES:EDI,ESI                    ; 0049f610
    MOVSD ES:EDI,ESI                    ; 0049f611
    LEA EDI,[ESP + 0xfc]                ; 0049f612
    LEA ESI,[EBX + 0x30]                ; 0049f619
    MOVSD ES:EDI,ESI                    ; 0049f61c
    MOVSD ES:EDI,ESI                    ; 0049f61d
    MOVSD ES:EDI,ESI                    ; 0049f61e
    FLD float ptr [EBX + 0x4bc]         ; 0049f61f
    FMUL float ptr [0x005dc977]         ; 0049f625 | DAT_005dc977
    FLD float ptr [ESP + 0xfc]          ; 0049f62b
    FXCH                                ; 0049f632
    FSTP float ptr [ESP + 0x17c]        ; 0049f634
    FMUL float ptr [ESP + 0x17c]        ; 0049f63b
    PUSH 0x0                            ; 0049f642
    FLD float ptr [ESP + 0x104]         ; 0049f644
    FMUL float ptr [ESP + 0x180]        ; 0049f64b
    PUSH 0x3                            ; 0049f652
    LEA EAX,[ESP + 0x104]               ; 0049f654
    MOV EDX,dword ptr [0x0061dca4]      ; 0049f65b | g_CGorePtr
    PUSH EAX                            ; 0049f661
    LEA EAX,[ESP + 0x54]                ; 0049f662
    FLD float ptr [ESP + 0x110]         ; 0049f666
    PUSH EAX                            ; 0049f66d
    FMUL float ptr [ESP + 0x18c]        ; 0049f66e
    PUSH EDX                            ; 0049f675
    FXCH ST2                            ; 0049f676
    FSTP float ptr [ESP + 0x110]        ; 0049f678
    FSTP float ptr [ESP + 0x114]        ; 0049f67f
    FSTP float ptr [ESP + 0x118]        ; 0049f686
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 0049f68d
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0049f692
    JMP 0x0049f4ab                      ; 0049f695
        ;   XREF to: 0049f4ab (UNCONDITIONAL_JUMP)  ; caseD_a
    LEA ESI,[EBX + 0x20]                ; 0049f69a
        ;   Label: caseD_1
    XOR EDI,EDI                         ; 0049f69d
    LEA EAX,[ESP + 0x78]                ; 0049f69f
        ;   Label: LAB_0049f69f
    CMP EAX,ESI                         ; 0049f6a3
    JZ 0x0049f6be                       ; 0049f6a5
        ;   XREF to: 0049f6be (CONDITIONAL_JUMP)  ; LAB_0049f6be
    MOV EAX,dword ptr [ESI]             ; 0049f6a7
    MOV dword ptr [ESP + 0x78],EAX      ; 0049f6a9
    MOV EAX,dword ptr [ESI + 0x4]       ; 0049f6ad
    MOV dword ptr [ESP + 0x7c],EAX      ; 0049f6b0
    MOV EAX,dword ptr [ESI + 0x8]       ; 0049f6b4
    MOV dword ptr [ESP + 0x80],EAX      ; 0049f6b7
    PUSH 0x3f000000                     ; 0049f6be
        ;   Label: LAB_0049f6be
    PUSH 0xbf000000                     ; 0049f6c3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0049f6c8
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 0049f6cd
    FLD float ptr [ESP + 0x190]         ; 0049f6d4
    ADD ESP,0x8                         ; 0049f6db
    FMUL float ptr [EBX + 0x15c]        ; 0049f6de
    PUSH 0x3f000000                     ; 0049f6e4
    FADD float ptr [ESP + 0x7c]         ; 0049f6e9
    PUSH 0xbf000000                     ; 0049f6ed
    FSTP float ptr [ESP + 0x80]         ; 0049f6f2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0049f6f9
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 0049f6fe
    FLD float ptr [ESP + 0x190]         ; 0049f705
    FMUL float ptr [EBX + 0x164]        ; 0049f70c
    ADD ESP,0x8                         ; 0049f712
    XOR EDX,EDX                         ; 0049f715
    FADD float ptr [ESP + 0x80]         ; 0049f717
    MOV dword ptr [ESP + 0x6c],EDX      ; 0049f71e
    FSTP float ptr [ESP + 0x80]         ; 0049f722
    MOV EAX,dword ptr [EBX + 0x160]     ; 0049f729
    PUSH 0xffff                         ; 0049f72f
    MOV dword ptr [ESP + 0x74],EAX      ; 0049f734
    LEA EAX,[ESP + 0x70]                ; 0049f738
    PUSH EAX                            ; 0049f73c
    LEA EAX,[ESP + 0x80]                ; 0049f73d
    PUSH 0x3f800000                     ; 0049f744
    PUSH EAX                            ; 0049f749
    MOV EAX,[0x0061c010]                ; 0049f74a | DAT_0061c010
    PUSH EAX                            ; 0049f74f
    INC EDI                             ; 0049f750
    MOV dword ptr [ESP + 0x88],EDX      ; 0049f751
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 0049f758
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0049f75d
    CMP EDI,0x4                         ; 0049f760
    JGE 0x0049f4ab                      ; 0049f763
        ;   XREF to: 0049f4ab (CONDITIONAL_JUMP)  ; caseD_a
    JMP 0x0049f69f                      ; 0049f769
        ;   XREF to: 0049f69f (UNCONDITIONAL_JUMP)  ; LAB_0049f69f
    PUSH 0x3fc90fdb                     ; 0049f76e
        ;   Label: caseD_4
    PUSH 0x3f490fdb                     ; 0049f773
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0049f778
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 0049f77d
    FLD float ptr [ESP + 0x190]         ; 0049f784
    ADD ESP,0x8                         ; 0049f78b
    PUSH 0x40c90fdb                     ; 0049f78e
    PUSH 0x0                            ; 0049f793
    FSTP float ptr [ESP + 0x16c]        ; 0049f795
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0049f79c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 0049f7a1
    FLD float ptr [ESP + 0x190]         ; 0049f7a8
    ADD ESP,0x8                         ; 0049f7af
    MOV EAX,dword ptr [EBX + 0x3c4]     ; 0049f7b2
    FLD float ptr [ESP + 0x164]         ; 0049f7b8
    MOV dword ptr [ESP + 0x168],EAX     ; 0049f7bf
    FLD ST0                             ; 0049f7c6
    FCOS                                ; 0049f7c8
    FLD ST2                             ; 0049f7ca
    FCOS                                ; 0049f7cc
    FXCH ST2                            ; 0049f7ce
    FSIN                                ; 0049f7d0
    FXCH ST3                            ; 0049f7d2
    FSIN                                ; 0049f7d4
    FLD float ptr [ESP + 0x168]         ; 0049f7d6
    FMULP ST3                           ; 0049f7dd
    FLD float ptr [ESP + 0x168]         ; 0049f7df
    FMULP ST4                           ; 0049f7e6
    FMUL float ptr [ESP + 0x168]        ; 0049f7e8
    FXCH ST2                            ; 0049f7ef
    FMUL ST1                            ; 0049f7f1
    LEA EAX,[EBX + 0x248]               ; 0049f7f3
    FXCH ST2                            ; 0049f7f9
    FMULP                               ; 0049f7fb
    PUSH EAX                            ; 0049f7fd
    FXCH ST2                            ; 0049f7fe
    FSTP float ptr [ESP + 0x5c]         ; 0049f800
    FSTP float ptr [ESP + 0x58]         ; 0049f804
    FSTP float ptr [ESP + 0x60]         ; 0049f808
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0049f80c
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049f811
    PUSH EAX                            ; 0049f814
    LEA EAX,[ESP + 0x58]                ; 0049f815
    PUSH EAX                            ; 0049f819
    LEA EAX,[EBX + 0x20]                ; 0049f81a
    PUSH EAX                            ; 0049f81d
    MOV ESI,dword ptr [0x0061c010]      ; 0049f81e | DAT_0061c010
    PUSH ESI                            ; 0049f824
    CALL core_fire.cpp_CFireEffect_createRock_FUN_004b5eb0 ; 0049f825
        ;   XREF to: 004b5eb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRock_FUN_004b5eb0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 0049f82a
    JMP 0x0049f4ab                      ; 0049f82d
        ;   XREF to: 0049f4ab (UNCONDITIONAL_JUMP)  ; caseD_a
    XOR EDX,EDX                         ; 0049f832
        ;   Label: caseD_b
    MOV dword ptr [ESP + 0x44],EDX      ; 0049f834
    MOV dword ptr [ESP + 0x40],EDX      ; 0049f838
    MOV dword ptr [ESP + 0x3c],EDX      ; 0049f83c
    FLD float ptr [EBX + 0x4b8]         ; 0049f840
    FMUL float ptr [0x005dc97b]         ; 0049f846 | DAT_005dc97b
    SUB ESP,0x4                         ; 0049f84c
    FSTP float ptr [ESP]                ; 0049f84f
    PUSH 0x0                            ; 0049f852
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0049f854
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    FLD float ptr [EBX + 0x4b8]         ; 0049f859
    MOV dword ptr [ESP + 0x190],EAX     ; 0049f85f
    FMUL float ptr [0x005dc97b]         ; 0049f866 | DAT_005dc97b
    FLD float ptr [ESP + 0x190]         ; 0049f86c
    FSUB float ptr [EBX + 0x4b8]        ; 0049f873
    ADD ESP,0x8                         ; 0049f879
    FSTP float ptr [ESP + 0x180]        ; 0049f87c
    SUB ESP,0x4                         ; 0049f883
    FSTP float ptr [ESP]                ; 0049f886
    PUSH 0x0                            ; 0049f889
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0049f88b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 0049f890
    FLD float ptr [ESP + 0x190]         ; 0049f897
    ADD ESP,0x8                         ; 0049f89e
    FLD float ptr [EBX + 0x20]          ; 0049f8a1
    FADD float ptr [ESP + 0x180]        ; 0049f8a4
    FXCH                                ; 0049f8ab
    FSUB float ptr [EBX + 0x4b8]        ; 0049f8ad
    FXCH                                ; 0049f8b3
    FSTP float ptr [ESP + 0x84]         ; 0049f8b5
    MOV EAX,dword ptr [EBX + 0x24]      ; 0049f8bc
    MOV dword ptr [ESP + 0x88],EAX      ; 0049f8bf
    FADD float ptr [EBX + 0x28]         ; 0049f8c6
    LEA EAX,[EBX + 0x248]               ; 0049f8c9
    FSTP float ptr [ESP + 0x8c]         ; 0049f8cf
    PUSH dword ptr [EBX + 0x3c8]        ; 0049f8d6
    PUSH EAX                            ; 0049f8dc
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0049f8dd
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049f8e2
    PUSH EAX                            ; 0049f8e5
    LEA EAX,[ESP + 0x44]                ; 0049f8e6
    PUSH EAX                            ; 0049f8ea
    LEA EAX,[ESP + 0x90]                ; 0049f8eb
    PUSH EAX                            ; 0049f8f2
    MOV EDI,dword ptr [0x0061c010]      ; 0049f8f3 | DAT_0061c010
    PUSH EDI                            ; 0049f8f9
    CALL core_fire.cpp_CFireEffect_createLeaf_FUN_004b5f00 ; 0049f8fa
        ;   XREF to: 004b5f00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLeaf_FUN_004b5f00(CFireEffect * this_ptr, undefined4 param_2, undefined4 param_3, CKeyFramedModel * param_4, ...)
    ADD ESP,0x14                        ; 0049f8ff
    MOV EAX,dword ptr [EBX + 0x20]      ; 0049f902
    MOV dword ptr [ESP + 0x84],EAX      ; 0049f905
    MOV EAX,dword ptr [EBX + 0x28]      ; 0049f90c
    MOV dword ptr [ESP + 0x88],EAX      ; 0049f90f
    MOV dword ptr [ESP + 0x8c],EAX      ; 0049f916
    JMP 0x0049f4ab                      ; 0049f91d
        ;   XREF to: 0049f4ab (UNCONDITIONAL_JUMP)  ; caseD_a
    PUSH EBX                            ; 0049f922
        ;   Label: caseD_5
    LEA ESI,[ESP + 0x130]               ; 0049f923
    CALL core_emitter.cpp_FUN_004a02e0  ; 0049f92a
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; undefined core_emitter.cpp_FUN_004a02e0()
    ADD ESP,0x4                         ; 0049f92f
    PUSH 0x1                            ; 0049f932
    PUSH 0x2                            ; 0049f934
    LEA EAX,[EBX + 0x30]                ; 0049f936
    PUSH EAX                            ; 0049f939
    LEA EAX,[ESP + 0xfc]                ; 0049f93a
    LEA EDI,[ESP + 0xfc]                ; 0049f941
    PUSH EAX                            ; 0049f948
    MOV EDX,dword ptr [0x0061c010]      ; 0049f949 | DAT_0061c010
    LEA ESI,[ESP + 0x13c]               ; 0049f94f
    PUSH EDX                            ; 0049f956
    MOVSD ES:EDI,ESI                    ; 0049f957
    MOVSD ES:EDI,ESI                    ; 0049f958
    MOVSD ES:EDI,ESI                    ; 0049f959
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_004b6f80 ; 0049f95a
        ;   XREF to: 004b6f80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGunFlames_FUN_004b6f80(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    MOV ECX,dword ptr [0x01d06ab4]      ; 0049f95f | DAT_01d06ab4
    LEA EDI,[ESP + 0x128]               ; 0049f965
    MOV ECX,dword ptr [ECX*0x4 + 0x1d06aa4] ; 0049f96c
    LEA ESI,[ESP + 0xf8]                ; 0049f973
    LEA EAX,[ECX + 0x20]                ; 0049f97a
    ADD ESP,0x14                        ; 0049f97d
    LEA EDX,[EBX + 0x20]                ; 0049f980
    FLD float ptr [EAX]                 ; 0049f983
    FLD float ptr [EAX + 0x4]           ; 0049f985
    FLD float ptr [EAX + 0x8]           ; 0049f988
    FXCH ST2                            ; 0049f98b
    FSUB float ptr [EDX]                ; 0049f98d
    FXCH                                ; 0049f98f
    FSUB float ptr [EDX + 0x4]          ; 0049f991
    FXCH ST2                            ; 0049f994
    FSUB float ptr [EDX + 0x8]          ; 0049f996
    FXCH                                ; 0049f999
    FSTP float ptr [ESP + 0xe4]         ; 0049f99b
    FXCH                                ; 0049f9a2
    FSTP float ptr [ESP + 0xe8]         ; 0049f9a4
    FSTP float ptr [ESP + 0xec]         ; 0049f9ab
    MOVSD ES:EDI,ESI                    ; 0049f9b2
    MOVSD ES:EDI,ESI                    ; 0049f9b3
    MOVSD ES:EDI,ESI                    ; 0049f9b4
    FLD float ptr [ESP + 0x118]         ; 0049f9b5
    FMUL ST0                            ; 0049f9bc
    FLD float ptr [ESP + 0x114]         ; 0049f9be
    FMUL ST0                            ; 0049f9c5
    FADDP                               ; 0049f9c7
    FLD float ptr [ESP + 0x11c]         ; 0049f9c9
    FMUL ST0                            ; 0049f9d0
    FADDP                               ; 0049f9d2
    FSQRT                               ; 0049f9d4
    FCOMP double ptr [0x005dc98f]       ; 0049f9d6 | DAT_005dc98f
    FNSTSW AX                           ; 0049f9dc
    SAHF                                ; 0049f9de
    JNC 0x0049f4ab                      ; 0049f9df
        ;   XREF to: 0049f4ab (CONDITIONAL_JUMP)  ; caseD_a
    PUSH EDX                            ; 0049f9e5
    PUSH ECX                            ; 0049f9e6
    LEA ESI,[ESP + 0xbc]                ; 0049f9e7
    CALL core_actor.cpp_FUN_00408bb0    ; 0049f9ee
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    ADD ESP,0x8                         ; 0049f9f3
    PUSH 0x1                            ; 0049f9f6
    PUSH 0x3f800000                     ; 0049f9f8
    PUSH 0x0                            ; 0049f9fd
    PUSH 0x0                            ; 0049f9ff
    LEA EAX,[ESP + 0xb8]                ; 0049fa01
    PUSH EAX                            ; 0049fa08
    MOV EAX,[0x01d06ab4]                ; 0049fa09 | DAT_01d06ab4
    LEA EDI,[ESP + 0xbc]                ; 0049fa0e
    MOV ECX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0049fa15
    LEA ESI,[ESP + 0xc8]                ; 0049fa1c
    PUSH ECX                            ; 0049fa23
    MOVSD ES:EDI,ESI                    ; 0049fa24
    MOVSD ES:EDI,ESI                    ; 0049fa25
    MOVSD ES:EDI,ESI                    ; 0049fa26
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0 ; 0049fa27
        ;   XREF to: 004308a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 0049fa2c
    JMP 0x0049f4ab                      ; 0049fa2f
        ;   XREF to: 0049f4ab (UNCONDITIONAL_JUMP)  ; caseD_a
    PUSH 0x0                            ; 0049fa34
        ;   Label: caseD_6
    LEA ESI,[EBX + 0x20]                ; 0049fa36
    PUSH ESI                            ; 0049fa39
    MOV EDX,dword ptr [0x0061c010]      ; 0049fa3a | DAT_0061c010
    PUSH EDX                            ; 0049fa40
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_004b72d0 ; 0049fa41
        ;   XREF to: 004b72d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createPopcorn_FUN_004b72d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0049fa46
    PUSH 0x0                            ; 0049fa49
    PUSH ESI                            ; 0049fa4b
    MOV ECX,dword ptr [0x0061c010]      ; 0049fa4c | DAT_0061c010
    PUSH ECX                            ; 0049fa52
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_004b72d0 ; 0049fa53
        ;   XREF to: 004b72d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createPopcorn_FUN_004b72d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0049fa58
    PUSH 0x0                            ; 0049fa5b
    PUSH ESI                            ; 0049fa5d
    MOV EDI,dword ptr [0x0061c010]      ; 0049fa5e | DAT_0061c010
    PUSH EDI                            ; 0049fa64
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_004b72d0 ; 0049fa65
        ;   XREF to: 004b72d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createPopcorn_FUN_004b72d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0049fa6a
    PUSH 0x0                            ; 0049fa6d
    PUSH ESI                            ; 0049fa6f
    MOV EAX,[0x0061c010]                ; 0049fa70 | DAT_0061c010
    PUSH EAX                            ; 0049fa75
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_004b72d0 ; 0049fa76
        ;   XREF to: 004b72d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createPopcorn_FUN_004b72d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0049fa7b
    JMP 0x0049f4ab                      ; 0049fa7e
        ;   XREF to: 0049f4ab (UNCONDITIONAL_JUMP)  ; caseD_a
    FLD float ptr [EBX + 0x15c]         ; 0049fa83
        ;   Label: caseD_7
    FMUL double ptr [0x005dc987]        ; 0049fa89 | DAT_005dc987
    SUB ESP,0x4                         ; 0049fa8f
    FSTP float ptr [ESP]                ; 0049fa92
    PUSH 0x0                            ; 0049fa95
    LEA ESI,[EBX + 0x20]                ; 0049fa97
    PUSH dword ptr [EBX + 0x160]        ; 0049fa9a
    PUSH ESI                            ; 0049faa0
    MOV EDI,dword ptr [0x0061c010]      ; 0049faa1 | DAT_0061c010
    PUSH EDI                            ; 0049faa7
    CALL core_fire.cpp_CFireEffect_createLightningBolt_FUN_004b6fe0 ; 0049faa8
        ;   XREF to: 004b6fe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBolt_FUN_004b6fe0(CFireEffect * this_ptr, CVector3f * start_position, float start_width, int enable_camera_shake, ...)
    LEA EAX,[ESP + 0xb0]                ; 0049faad
    ADD ESP,0x14                        ; 0049fab4
    CMP EAX,ESI                         ; 0049fab7
    JZ 0x0049fad8                       ; 0049fab9
        ;   XREF to: 0049fad8 (CONDITIONAL_JUMP)  ; LAB_0049fad8
    MOV EAX,dword ptr [ESI]             ; 0049fabb
    MOV dword ptr [ESP + 0x9c],EAX      ; 0049fabd
    MOV EAX,dword ptr [ESI + 0x4]       ; 0049fac4
    MOV dword ptr [ESP + 0xa0],EAX      ; 0049fac7
    MOV EAX,dword ptr [ESI + 0x8]       ; 0049face
    MOV dword ptr [ESP + 0xa4],EAX      ; 0049fad1
    FLD float ptr [EBX + 0x160]         ; 0049fad8
        ;   Label: LAB_0049fad8
    FMUL double ptr [0x005dc987]        ; 0049fade | DAT_005dc987
    LEA EAX,[ESP + 0x9c]                ; 0049fae4
    LEA ESI,[EBX + 0x470]               ; 0049faeb
    PUSH EAX                            ; 0049faf1
    FLD float ptr [ESP + 0xa4]          ; 0049faf2
    FXCH                                ; 0049faf9
    FADD ST0,ST1                        ; 0049fafb
    PUSH ESI                            ; 0049fafd
    FSTP ST1                            ; 0049fafe
    FSTP float ptr [ESP + 0xa8]         ; 0049fb00
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970 ; 0049fb07
        ;   XREF to: 0045e970 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0049fb0c
    PUSH 0x7fff                         ; 0049fb0f
    PUSH 0x0                            ; 0049fb14
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0049fb16
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    MOV EDX,EAX                         ; 0049fb1b
    SAR EDX,0x1f                        ; 0049fb1d
    MOV dword ptr [ESI + 0x3c],EAX      ; 0049fb20
    SHL EDX,0x8                         ; 0049fb23
    SBB EAX,EDX                         ; 0049fb26
    SAR EAX,0x8                         ; 0049fb28
    MOV EDX,EAX                         ; 0049fb2b
    SAR EDX,0x1f                        ; 0049fb2d
    SHL EDX,0x2                         ; 0049fb30
    SBB EAX,EDX                         ; 0049fb33
    SAR EAX,0x2                         ; 0049fb35
    ADD ESP,0x8                         ; 0049fb38
    MOV byte ptr [ESI + 0x1c],AL        ; 0049fb3b
    PUSH dword ptr [EBX + 0x160]        ; 0049fb3e
    PUSH ESI                            ; 0049fb44
    JMP 0x0049f48d                      ; 0049fb45
        ;   XREF to: 0049f48d (UNCONDITIONAL_JUMP)  ; LAB_0049f48d
    PUSH 0xffff                         ; 0049fb4a
        ;   Label: caseD_8
    PUSH 0x1                            ; 0049fb4f
    PUSH 0x10000                        ; 0049fb51
    PUSH 0x4000                         ; 0049fb56
    PUSH 0x0                            ; 0049fb5b
    LEA EAX,[EBX + 0x20]                ; 0049fb5d
    PUSH EAX                            ; 0049fb60
    MOV ESI,dword ptr [0x0061c010]      ; 0049fb61 | DAT_0061c010
    PUSH ESI                            ; 0049fb67
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 0049fb68
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0049fb6d
    JMP 0x0049f4ab                      ; 0049fb70
        ;   XREF to: 0049f4ab (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV EAX,dword ptr [EBX + 0x3f0]     ; 0049fb75
        ;   Label: caseD_9
    TEST EAX,EAX                        ; 0049fb7b
    JZ 0x0049f4ab                       ; 0049fb7d
        ;   XREF to: 0049f4ab (CONDITIONAL_JUMP)  ; caseD_a
    PUSH EAX                            ; 0049fb83
    MOV EDX,dword ptr [EAX + 0x154]     ; 0049fb84
    LEA ESI,[ESP + 0x4]                 ; 0049fb8a
    LEA EDI,[ESP + 0x1c]                ; 0049fb8e
    CALL dword ptr [EDX + 0x1c]         ; 0049fb92
    MOV ECX,0x6                         ; 0049fb95
    LEA ESI,[ESP + 0x4]                 ; 0049fb9a
    ADD ESP,0x4                         ; 0049fb9e
    MOVSD.REP ES:EDI,ESI                ; 0049fba1
    LEA EAX,[ESP + 0x18]                ; 0049fba3
    FLD float ptr [ESP + 0x18]          ; 0049fba7
    FLD float ptr [ESP + 0x1c]          ; 0049fbab
    FLD float ptr [ESP + 0x20]          ; 0049fbaf
    LEA EDI,[ESP + 0x120]               ; 0049fbb3
    LEA ESI,[ESP + 0xcc]                ; 0049fbba
    FXCH ST2                            ; 0049fbc1
    FADD float ptr [EAX + 0xc]          ; 0049fbc3
    FXCH                                ; 0049fbc6
    FADD float ptr [EAX + 0x10]         ; 0049fbc8
    FXCH ST2                            ; 0049fbcb
    FADD float ptr [EAX + 0x14]         ; 0049fbcd
    FXCH                                ; 0049fbd0
    FSTP float ptr [ESP + 0xcc]         ; 0049fbd2
    FXCH                                ; 0049fbd9
    FSTP float ptr [ESP + 0xd0]         ; 0049fbdb
    FSTP float ptr [ESP + 0xd4]         ; 0049fbe2
    MOVSD ES:EDI,ESI                    ; 0049fbe9
    MOVSD ES:EDI,ESI                    ; 0049fbea
    MOVSD ES:EDI,ESI                    ; 0049fbeb
    FLD float ptr [0x005dc97f]          ; 0049fbec | DAT_005dc97f
    FLD float ptr [ESP + 0x120]         ; 0049fbf2
    FMUL ST1                            ; 0049fbf9
    FLD float ptr [ESP + 0x124]         ; 0049fbfb
    FMUL ST2                            ; 0049fc02
    FLD float ptr [ESP + 0x128]         ; 0049fc04
    FMULP ST3                           ; 0049fc0b
    LEA EAX,[ESP + 0x144]               ; 0049fc0d
    LEA EDI,[ESP + 0x144]               ; 0049fc14
    LEA ESI,[ESP + 0x138]               ; 0049fc1b
    FXCH                                ; 0049fc22
    FSTP float ptr [ESP + 0x138]        ; 0049fc24
    FSTP float ptr [ESP + 0x13c]        ; 0049fc2b
    FSTP float ptr [ESP + 0x140]        ; 0049fc32
    MOVSD ES:EDI,ESI                    ; 0049fc39
    MOVSD ES:EDI,ESI                    ; 0049fc3a
    MOVSD ES:EDI,ESI                    ; 0049fc3b
    PUSH EAX                            ; 0049fc3c
    MOV EDX,dword ptr [EBX + 0x3f0]     ; 0049fc3d
    PUSH EDX                            ; 0049fc43
    LEA ESI,[ESP + 0x38]                ; 0049fc44
    LEA EDI,[ESP + 0x68]                ; 0049fc48
    CALL core_actor.cpp_FUN_00408ac0    ; 0049fc4c
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x38]                ; 0049fc51
    ADD ESP,0x8                         ; 0049fc55
    MOVSD ES:EDI,ESI                    ; 0049fc58
    MOVSD ES:EDI,ESI                    ; 0049fc59
    MOVSD ES:EDI,ESI                    ; 0049fc5a
    LEA EDX,[ESP + 0x108]               ; 0049fc5b
    MOV EAX,dword ptr [EBX + 0x3f0]     ; 0049fc62
    LEA EDI,[ESP + 0x108]               ; 0049fc68
    LEA ESI,[ESP + 0xd8]                ; 0049fc6f
    FLD float ptr [EAX + 0x24]          ; 0049fc76
    FLD float ptr [EAX + 0x28]          ; 0049fc79
    FLD float ptr [EAX + 0x20]          ; 0049fc7c
    LEA EAX,[ESP + 0xc0]                ; 0049fc7f
    FADD float ptr [ESP + 0x60]         ; 0049fc86
    FXCH ST2                            ; 0049fc8a
    FADD float ptr [ESP + 0x64]         ; 0049fc8c
    FXCH                                ; 0049fc90
    FADD float ptr [ESP + 0x68]         ; 0049fc92
    FXCH ST2                            ; 0049fc96
    FSTP float ptr [ESP + 0xd8]         ; 0049fc98
    FSTP float ptr [ESP + 0xdc]         ; 0049fc9f
    FSTP float ptr [ESP + 0xe0]         ; 0049fca6
    MOVSD ES:EDI,ESI                    ; 0049fcad
    MOVSD ES:EDI,ESI                    ; 0049fcae
    MOVSD ES:EDI,ESI                    ; 0049fcaf
    CMP EAX,EDX                         ; 0049fcb0
    JZ 0x0049fcde                       ; 0049fcb2
        ;   XREF to: 0049fcde (CONDITIONAL_JUMP)  ; LAB_0049fcde
    MOV EAX,dword ptr [ESP + 0x108]     ; 0049fcb4
    MOV dword ptr [ESP + 0xc0],EAX      ; 0049fcbb
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0049fcc2
    MOV dword ptr [ESP + 0xc4],EAX      ; 0049fcc9
    MOV EAX,dword ptr [ESP + 0x110]     ; 0049fcd0
    MOV dword ptr [ESP + 0xc8],EAX      ; 0049fcd7
    PUSH 0x40800000                     ; 0049fcde
        ;   Label: LAB_0049fcde
    PUSH 0x0                            ; 0049fce3
    PUSH 0x0                            ; 0049fce5
    LEA EAX,[ESP + 0xcc]                ; 0049fce7
    PUSH EAX                            ; 0049fcee
    LEA EAX,[EBX + 0x20]                ; 0049fcef
    PUSH EAX                            ; 0049fcf2
    MOV ECX,dword ptr [0x0061c010]      ; 0049fcf3 | DAT_0061c010
    PUSH ECX                            ; 0049fcf9
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060 ; 0049fcfa
        ;   XREF to: 004b7060 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
    ADD ESP,0x18                        ; 0049fcff
    JMP 0x0049f4ab                      ; 0049fd02
        ;   XREF to: 0049f4ab (UNCONDITIONAL_JUMP)  ; caseD_a
    CMP dword ptr [EBX + 0x460],0x1     ; 0049fd07
        ;   Label: LAB_0049fd07
    JNZ 0x0049fd1d                      ; 0049fd0e
        ;   XREF to: 0049fd1d (CONDITIONAL_JUMP)  ; LAB_0049fd1d
    CMP dword ptr [EBX + 0x4b4],0x0     ; 0049fd10
    JNZ 0x0049f4cb                      ; 0049fd17
        ;   XREF to: 0049f4cb (CONDITIONAL_JUMP)  ; LAB_0049f4cb
    LEA EAX,[EBX + 0x3f8]               ; 0049fd1d
        ;   Label: LAB_0049fd1d
    PUSH EAX                            ; 0049fd23
    MOV EDX,dword ptr [EBX + 0x154]     ; 0049fd24
    PUSH EBX                            ; 0049fd2a
    CALL dword ptr [EDX + 0x2c]         ; 0049fd2b
    ADD ESP,0x8                         ; 0049fd2e
    MOV dword ptr [EBX + 0x45c],EAX     ; 0049fd31
    JMP 0x0049f4cb                      ; 0049fd37
        ;   XREF to: 0049f4cb (UNCONDITIONAL_JUMP)  ; LAB_0049f4cb
    MOV EAX,dword ptr [EBX + 0x45c]     ; 0049fd3c
        ;   Label: LAB_0049fd3c
    PUSH EAX                            ; 0049fd42
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0049fd43
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0049fd48
    JMP 0x0049f4cb                      ; 0049fd4b
        ;   XREF to: 0049f4cb (UNCONDITIONAL_JUMP)  ; LAB_0049f4cb
    MOV dword ptr [EBX + 0x168],0x1     ; 0049fd50
        ;   Label: LAB_0049fd50
    MOV EAX,dword ptr [EBX + 0x234]     ; 0049fd5a
    MOV dword ptr [EBX + 0x46c],EAX     ; 0049fd60
    MOV ESP,EBP                         ; 0049fd66
    POP EBP                             ; 0049fd68
    POP EDI                             ; 0049fd69
    POP ESI                             ; 0049fd6a
    POP EBX                             ; 0049fd6b
    RET                                 ; 0049fd6c
    FLD float ptr [EBX + 0x46c]         ; 0049fd6d
        ;   Label: LAB_0049fd6d
    FSUB float ptr [EBP + 0x18]         ; 0049fd73
    FST float ptr [EBX + 0x46c]         ; 0049fd76
    FLDZ                                ; 0049fd7c
    FCOMPP                              ; 0049fd7e
    FNSTSW AX                           ; 0049fd80
    SAHF                                ; 0049fd82
    JC 0x0049f517                       ; 0049fd83
        ;   XREF to: 0049f517 (CONDITIONAL_JUMP)  ; LAB_0049f517
    MOV dword ptr [EBX + 0x168],0x0     ; 0049fd89
    MOV EAX,dword ptr [EBX + 0x3e8]     ; 0049fd93
    MOV dword ptr [EBX + 0x46c],EAX     ; 0049fd99
    MOV ESP,EBP                         ; 0049fd9f
    POP EBP                             ; 0049fda1
    POP EDI                             ; 0049fda2
    POP ESI                             ; 0049fda3
    POP EBX                             ; 0049fda4
    RET                                 ; 0049fda5
    FLD float ptr [EBX + 0x234]         ; 0049fda6
        ;   Label: LAB_0049fda6
    FLDZ                                ; 0049fdac
    FCOMPP                              ; 0049fdae
    FNSTSW AX                           ; 0049fdb0
    SAHF                                ; 0049fdb2
    JNC 0x0049f517                      ; 0049fdb3
        ;   XREF to: 0049f517 (CONDITIONAL_JUMP)  ; LAB_0049f517
    FLD float ptr [EBX + 0x46c]         ; 0049fdb9
    FSUB float ptr [EBP + 0x18]         ; 0049fdbf
    FST float ptr [EBX + 0x46c]         ; 0049fdc2
    FLDZ                                ; 0049fdc8
    FCOMPP                              ; 0049fdca
    FNSTSW AX                           ; 0049fdcc
    SAHF                                ; 0049fdce
    JC 0x0049f517                       ; 0049fdcf
        ;   XREF to: 0049f517 (CONDITIONAL_JUMP)  ; LAB_0049f517
    MOV dword ptr [EBX + 0x46c],0x0     ; 0049fdd5
    MOV dword ptr [EBX + 0x168],0x0     ; 0049fddf
    MOV ESP,EBP                         ; 0049fde9
    POP EBP                             ; 0049fdeb
    POP EDI                             ; 0049fdec
    POP ESI                             ; 0049fded
    POP EBX                             ; 0049fdee
    RET                                 ; 0049fdef

