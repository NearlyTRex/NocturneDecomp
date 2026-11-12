; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004c5350(CGargoyle *this_ptr,float delta_time)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004c5334 = 004c5836
;   undefined4 s_s_confused_while_walking_005c3f2f+1
;   TerminatedCString s_gargoyle_alive_wav_005c3f5a
;   TerminatedCString s_gargoyle_stone_wav_005c3f6e
;   TerminatedCString s_gargoyle_stone_wav_005c3f81
;   undefined4 DAT_005c3f98
;   undefined4 DAT_005e076c
;   undefined4 DAT_005e0778
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01d22cac
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_00434850
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5350
        ;   Label: core_gargoyle.cpp_CGargoyle_process_FUN_004c5350
    PUSH ESI                            ; 004c5351
    PUSH EDI                            ; 004c5352
    PUSH EBP                            ; 004c5353
    MOV EBP,ESP                         ; 004c5354
    SUB ESP,0x16c                       ; 004c5356
    SUB EBP,0x7a                        ; 004c535c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004c535f
    PUSH dword ptr [EBP + 0x92]         ; 004c5365
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c536b
    PUSH EBX                            ; 004c5371
    CALL dword ptr [EAX + 0x148]        ; 004c5372
    ADD ESP,0x8                         ; 004c5378
    TEST EAX,EAX                        ; 004c537b
    JZ 0x004c53d7                       ; 004c537d
        ;   XREF to: 004c53d7 (CONDITIONAL_JUMP)  ; LAB_004c53d7
    LEA EAX,[EBX + 0x249c]              ; 004c537f
        ;   Label: LAB_004c537f
    MOV dword ptr [EAX + 0x8],0x0       ; 004c5385
    FLD float ptr [EBP + 0x92]          ; 004c538c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c5392
    MOV dword ptr [EAX + 0x4],EDX       ; 004c5395
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c5398
    MOV dword ptr [EAX],EDX             ; 004c539b
    FMUL float ptr [EBX + 0xcdcc]       ; 004c539d
    LEA EAX,[EBX + 0x158]               ; 004c53a3
    FSTP float ptr [EBP + 0x52]         ; 004c53a9
    MOV dword ptr [EBP + 0x6e],EAX      ; 004c53ac
    FLD float ptr [EBP + 0x52]          ; 004c53af
        ;   Label: LAB_004c53af
    FLDZ                                ; 004c53b2
    FCOMPP                              ; 004c53b4
    FNSTSW AX                           ; 004c53b6
    SAHF                                ; 004c53b8
    JNC 0x004c53fb                      ; 004c53b9
        ;   XREF to: 004c53fb (CONDITIONAL_JUMP)  ; LAB_004c53fb
    LEA EAX,[EBP + 0x52]                ; 004c53bb
    PUSH EAX                            ; 004c53be
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004c53bf
    PUSH EAX                            ; 004c53c2
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 004c53c3
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004c53c8
    PUSH EAX                            ; 004c53cb
    PUSH EBX                            ; 004c53cc
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 004c53cd
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004c53d2
    JMP 0x004c53af                      ; 004c53d5
        ;   XREF to: 004c53af (UNCONDITIONAL_JUMP)  ; LAB_004c53af
    LEA EAX,[EBX + 0x158]               ; 004c53d7
        ;   Label: LAB_004c53d7
    PUSH EAX                            ; 004c53dd
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004c53de
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c53e3
    ADD ESP,0x4                         ; 004c53e6
    CMP EAX,0x8                         ; 004c53e9
    JZ 0x004c53f3                       ; 004c53ec
        ;   XREF to: 004c53f3 (CONDITIONAL_JUMP)  ; LAB_004c53f3
    CMP EAX,0x5                         ; 004c53ee
    JNZ 0x004c537f                      ; 004c53f1
        ;   XREF to: 004c537f (CONDITIONAL_JUMP)  ; LAB_004c537f
    LEA ESP,[EBP + 0x7a]                ; 004c53f3
        ;   Label: LAB_004c53f3
    POP EBP                             ; 004c53f6
    POP EDI                             ; 004c53f7
    POP ESI                             ; 004c53f8
    POP EBX                             ; 004c53f9
    RET                                 ; 004c53fa
    FLD float ptr [EBP + 0x92]          ; 004c53fb
        ;   Label: LAB_004c53fb
    FMUL float ptr [EBX + 0xcdcc]       ; 004c5401
    SUB ESP,0x4                         ; 004c5407
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 004c540a
    MOV dword ptr [EBX + 0x2524],EAX    ; 004c5410
    FSTP float ptr [ESP]                ; 004c5416
    PUSH EBX                            ; 004c5419
    CALL core_charactr.cpp_FUN_00434850 ; 004c541a
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 004c541f
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004c5422
    PUSH EDX                            ; 004c5425
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004c5426
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004c542b
    PUSH dword ptr [EBP + 0x92]         ; 004c542e
    MOV ESI,dword ptr [EAX + 0x24]      ; 004c5434
    PUSH EBX                            ; 004c5437
    MOV dword ptr [EBP + 0x5e],ESI      ; 004c5438
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 004c543b
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c5440
    TEST EAX,EAX                        ; 004c5443
    JZ 0x004c5d6b                       ; 004c5445
        ;   XREF to: 004c5d6b (CONDITIONAL_JUMP)  ; LAB_004c5d6b
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004c544b
    CMP EAX,0x2                         ; 004c5451
    JNC 0x004c56e4                      ; 004c5454
        ;   XREF to: 004c56e4 (CONDITIONAL_JUMP)  ; LAB_004c56e4
    CMP EAX,0x1                         ; 004c545a
    JNZ 0x004c56ef                      ; 004c545d
        ;   XREF to: 004c56ef (CONDITIONAL_JUMP)  ; LAB_004c56ef
    PUSH 0x1                            ; 004c5463
        ;   Label: LAB_004c5463
    PUSH 0x1                            ; 004c5465
    LEA EAX,[EBX + 0x158]               ; 004c5467
        ;   Label: LAB_004c5467
    PUSH EAX                            ; 004c546d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c546e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c5473
        ;   Label: LAB_004c5473
    LEA EAX,[EBX + 0x249c]              ; 004c5476
    MOV dword ptr [EAX + 0x8],0x0       ; 004c547c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c5483
    MOV dword ptr [EAX + 0x4],EDX       ; 004c5486
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c5489
    MOV dword ptr [EAX],EDX             ; 004c548c
    FLD float ptr [EBX + 0xcde0]        ; 004c548e
        ;   Label: caseD_4
    FLDZ                                ; 004c5494
    FCOMPP                              ; 004c5496
    FNSTSW AX                           ; 004c5498
    SAHF                                ; 004c549a
    JNC 0x004c54af                      ; 004c549b
        ;   XREF to: 004c54af (CONDITIONAL_JUMP)  ; LAB_004c54af
    FLD float ptr [EBX + 0xcde0]        ; 004c549d
    FSUB float ptr [EBP + 0x92]         ; 004c54a3
    FSTP float ptr [EBX + 0xcde0]       ; 004c54a9
    PUSH EBX                            ; 004c54af
        ;   Label: LAB_004c54af
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 004c54b0
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c54b5
    TEST EAX,EAX                        ; 004c54b8
    JZ 0x004c55ac                       ; 004c54ba
        ;   XREF to: 004c55ac (CONDITIONAL_JUMP)  ; LAB_004c55ac
    PUSH dword ptr [EBP + 0x92]         ; 004c54c0
    PUSH EBX                            ; 004c54c6
    LEA ESI,[EBX + 0x2518]              ; 004c54c7
    CALL core_charactr.cpp_FUN_0042c1e0 ; 004c54cd
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 004c54d2
    FMUL float ptr [EBP + 0x92]         ; 004c54d4
    FLD float ptr [ESI + 0x4]           ; 004c54da
    FMUL float ptr [EBP + 0x92]         ; 004c54dd
    FLD float ptr [ESI + 0x8]           ; 004c54e3
    FMUL float ptr [EBP + 0x92]         ; 004c54e6
    LEA EDI,[EBP + -0x3e]               ; 004c54ec
    LEA ESI,[EBP + 0xffffff7a]          ; 004c54ef
    FXCH ST2                            ; 004c54f5
    FSTP float ptr [EBP + 0xffffff7a]   ; 004c54f7
    FSTP float ptr [EBP + 0xffffff7e]   ; 004c54fd
    FSTP float ptr [EBP + -0x7e]        ; 004c5503
    MOVSD ES:EDI,ESI                    ; 004c5506
    MOVSD ES:EDI,ESI                    ; 004c5507
    MOVSD ES:EDI,ESI                    ; 004c5508
    LEA EAX,[EBX + 0x250c]              ; 004c5509
    FLD float ptr [EBP + -0x3e]         ; 004c550f
    FLD float ptr [EBP + -0x3a]         ; 004c5512
    FLD float ptr [EBP + -0x36]         ; 004c5515
    LEA EDI,[EBP + 0x2e]                ; 004c5518
    LEA ESI,[EBP + -0x1a]               ; 004c551b
    FXCH ST2                            ; 004c551e
    FADD float ptr [EAX]                ; 004c5520
    FXCH                                ; 004c5522
    FADD float ptr [EAX + 0x4]          ; 004c5524
    FXCH ST2                            ; 004c5527
    FADD float ptr [EAX + 0x8]          ; 004c5529
    FXCH                                ; 004c552c
    FSTP float ptr [EBP + -0x1a]        ; 004c552e
    FXCH                                ; 004c5531
    FSTP float ptr [EBP + -0x16]        ; 004c5533
    FSTP float ptr [EBP + -0x12]        ; 004c5536
    MOVSD ES:EDI,ESI                    ; 004c5539
    MOVSD ES:EDI,ESI                    ; 004c553a
    MOVSD ES:EDI,ESI                    ; 004c553b
    LEA EDX,[EBX + 0x249c]              ; 004c553c
    FLD float ptr [EBP + 0x2e]          ; 004c5542
    FLD float ptr [EBP + 0x32]          ; 004c5545
    FLD float ptr [EBP + 0x36]          ; 004c5548
    LEA EDI,[EBP + -0x26]               ; 004c554b
    LEA ESI,[EBP + 0xffffff4a]          ; 004c554e
    FXCH ST2                            ; 004c5554
    FADD float ptr [EDX]                ; 004c5556
    FXCH                                ; 004c5558
    FADD float ptr [EDX + 0x4]          ; 004c555a
    FXCH ST2                            ; 004c555d
    FADD float ptr [EDX + 0x8]          ; 004c555f
    FXCH                                ; 004c5562
    FSTP float ptr [EBP + 0xffffff4a]   ; 004c5564
    FXCH                                ; 004c556a
    FSTP float ptr [EBP + 0xffffff4e]   ; 004c556c
    FSTP float ptr [EBP + 0xffffff52]   ; 004c5572
    MOVSD ES:EDI,ESI                    ; 004c5578
    MOVSD ES:EDI,ESI                    ; 004c5579
    MOVSD ES:EDI,ESI                    ; 004c557a
    MOV dword ptr [EAX + 0x8],0x0       ; 004c557b
    ADD ESP,0x8                         ; 004c5582
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c5585
    MOV dword ptr [EAX + 0x4],ECX       ; 004c5588
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c558b
    MOV dword ptr [EAX],ECX             ; 004c558e
    MOV dword ptr [EDX + 0x8],0x0       ; 004c5590
    LEA EAX,[EBP + -0x26]               ; 004c5597
    FLD float ptr [EDX + 0x8]           ; 004c559a
    PUSH EAX                            ; 004c559d
    FST float ptr [EDX + 0x4]           ; 004c559e
    PUSH EBX                            ; 004c55a1
    FSTP float ptr [EDX]                ; 004c55a2
    CALL core_charactr.cpp_FUN_0042c230 ; 004c55a4
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004c55a9
    PUSH EBX                            ; 004c55ac
        ;   Label: LAB_004c55ac
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 004c55ad
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c55b2
    LEA EAX,[EBX + 0x158]               ; 004c55b5
    PUSH EAX                            ; 004c55bb
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 004c55bc
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c55c1
    PUSH dword ptr [EBP + 0x92]         ; 004c55c4
    PUSH EBX                            ; 004c55ca
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 004c55cb
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBP + 0x5e]      ; 004c55d0
    ADD ESP,0x8                         ; 004c55d3
    CMP ECX,0x5                         ; 004c55d6
    JNZ 0x004c5d7b                      ; 004c55d9
        ;   XREF to: 004c5d7b (CONDITIONAL_JUMP)  ; LAB_004c5d7b
    MOV EAX,dword ptr [EBX + 0xd084]    ; 004c55df
    SHL EAX,0x8                         ; 004c55e5
    MOV dword ptr [EBX + 0xd09c],EAX    ; 004c55e8
    MOV EAX,dword ptr [EBX + 0xd088]    ; 004c55ee
    SHL EAX,0x8                         ; 004c55f4
    MOV dword ptr [EBX + 0xd0a0],EAX    ; 004c55f7
    MOV EAX,dword ptr [EBX + 0xd08c]    ; 004c55fd
    SHL EAX,0x8                         ; 004c5603
    MOV dword ptr [EBX + 0xd0a4],EAX    ; 004c5606
    MOV ESI,dword ptr [EBX + 0xd09c]    ; 004c560c
        ;   Label: LAB_004c560c
    MOV EAX,dword ptr [EBX + 0x108]     ; 004c5612
    CMP EAX,ESI                         ; 004c5618
    JGE 0x004c5d9e                      ; 004c561a
        ;   XREF to: 004c5d9e (CONDITIONAL_JUMP)  ; LAB_004c5d9e
    MOV EAX,[0x01c5fad0]                ; 004c5620 | DAT_01c5fad0
    MOV ESI,dword ptr [EBX + 0x108]     ; 004c5625
    ADD ESI,EAX                         ; 004c562b
    MOV EDI,dword ptr [EBX + 0xd09c]    ; 004c562d
    MOV dword ptr [EBX + 0x108],ESI     ; 004c5633
    CMP ESI,EDI                         ; 004c5639
    JLE 0x004c5643                      ; 004c563b
        ;   XREF to: 004c5643 (CONDITIONAL_JUMP)  ; LAB_004c5643
    MOV dword ptr [EBX + 0x108],EDI     ; 004c563d
    MOV EDX,dword ptr [EBX + 0xd0a0]    ; 004c5643
        ;   Label: LAB_004c5643
    MOV EAX,dword ptr [EBX + 0x10c]     ; 004c5649
    CMP EAX,EDX                         ; 004c564f
    JGE 0x004c5dd0                      ; 004c5651
        ;   XREF to: 004c5dd0 (CONDITIONAL_JUMP)  ; LAB_004c5dd0
    MOV EAX,[0x01c5fad0]                ; 004c5657 | DAT_01c5fad0
    MOV EDX,dword ptr [EBX + 0x10c]     ; 004c565c
    ADD EDX,EAX                         ; 004c5662
    MOV ECX,dword ptr [EBX + 0xd0a0]    ; 004c5664
    MOV dword ptr [EBX + 0x10c],EDX     ; 004c566a
    CMP EDX,ECX                         ; 004c5670
    JLE 0x004c567a                      ; 004c5672
        ;   XREF to: 004c567a (CONDITIONAL_JUMP)  ; LAB_004c567a
    MOV dword ptr [EBX + 0x10c],ECX     ; 004c5674
    MOV ESI,dword ptr [EBX + 0xd0a4]    ; 004c567a
        ;   Label: LAB_004c567a
    MOV EAX,dword ptr [EBX + 0x110]     ; 004c5680
    CMP EAX,ESI                         ; 004c5686
    JGE 0x004c5e02                      ; 004c5688
        ;   XREF to: 004c5e02 (CONDITIONAL_JUMP)  ; LAB_004c5e02
    MOV EAX,[0x01c5fad0]                ; 004c568e | DAT_01c5fad0
    MOV ESI,dword ptr [EBX + 0x110]     ; 004c5693
    ADD ESI,EAX                         ; 004c5699
    MOV EDI,dword ptr [EBX + 0xd0a4]    ; 004c569b
    MOV dword ptr [EBX + 0x110],ESI     ; 004c56a1
    CMP ESI,EDI                         ; 004c56a7
    JLE 0x004c53f3                      ; 004c56a9
        ;   XREF to: 004c53f3 (CONDITIONAL_JUMP)  ; LAB_004c53f3
    MOV dword ptr [EBX + 0x110],EDI     ; 004c56af
    LEA ESP,[EBP + 0x7a]                ; 004c56b5
    POP EBP                             ; 004c56b8
    POP EDI                             ; 004c56b9
    POP ESI                             ; 004c56ba
    POP EBX                             ; 004c56bb
    RET                                 ; 004c56bc
    PUSH 0x1                            ; 004c56bd
        ;   Label: LAB_004c56bd
    PUSH 0x0                            ; 004c56bf
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004c56c1
    PUSH EAX                            ; 004c56c4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c56c5
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c56ca
    PUSH EBX                            ; 004c56cd
    PUSH 0x5c3f30                       ; 004c56ce | s_s_confused_while_walking_005c3f2f+1
    MOV EDX,dword ptr [0x005f1690]      ; 004c56d3 | g_CConsolePtr
    PUSH EDX                            ; 004c56d9 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004c56da
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    JMP 0x004c5473                      ; 004c56df
        ;   XREF to: 004c5473 (UNCONDITIONAL_JUMP)  ; LAB_004c5473
    JBE 0x004c5463                      ; 004c56e4
        ;   XREF to: 004c5463 (CONDITIONAL_JUMP)  ; LAB_004c5463
        ;   Label: LAB_004c56e4
    CMP EAX,0x3                         ; 004c56ea
    JZ 0x004c56bd                       ; 004c56ed
        ;   XREF to: 004c56bd (CONDITIONAL_JUMP)  ; LAB_004c56bd
    PUSH 0x1                            ; 004c56ef
        ;   Label: LAB_004c56ef
    PUSH 0x0                            ; 004c56f1
    JMP 0x004c5467                      ; 004c56f3
        ;   XREF to: 004c5467 (UNCONDITIONAL_JUMP)  ; LAB_004c5467
    LEA EAX,[EBP + 0xffffff0e]          ; 004c56f8
        ;   Label: caseD_3
    PUSH EAX                            ; 004c56fe
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004c56ff
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004c5704
    PUSH 0x40a00000                     ; 004c5707
    PUSH 0x40400000                     ; 004c570c
    LEA ESI,[EBP + -0x2]                ; 004c5711
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c5714
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c5719
    ADD ESP,0x8                         ; 004c571c
    LEA EAX,[EBP + 0xffffff0e]          ; 004c571f
    MOV EDX,dword ptr [0x01d22cac]      ; 004c5725 | DAT_01d22cac
    PUSH EAX                            ; 004c572b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c572c
    MOV dword ptr [EBP + 0xffffff42],EBX ; 004c5733
    SUB EAX,EDX                         ; 004c5739
    MOV dword ptr [EBP + 0xffffff46],EBX ; 004c573b
    SHL EAX,0x4                         ; 004c5741
    LEA EDX,[EBX + 0xfd8]               ; 004c5744
    PUSH 0x3ecccccd                     ; 004c574a
    ADD EAX,EDX                         ; 004c574f
    LEA EDI,[EBP + -0x62]               ; 004c5751
    PUSH EAX                            ; 004c5754
    FLD float ptr [EBP + 0x76]          ; 004c5755
    PUSH 0x2cfd900                      ; 004c5758 | DAT_02cfd900
    FSTP float ptr [EBP + 0xffffff12]   ; 004c575d
    CALL core_xform.cpp_FUN_00583260    ; 004c5763
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 004c5768
    LEA EAX,[EBP + -0x62]               ; 004c576b
    LEA ESI,[EBP + -0x2]                ; 004c576e
    PUSH EAX                            ; 004c5771
    MOVSD ES:EDI,ESI                    ; 004c5772
    MOVSD ES:EDI,ESI                    ; 004c5773
    MOVSD ES:EDI,ESI                    ; 004c5774
    PUSH EBX                            ; 004c5775
    LEA ESI,[EBP + 0x16]                ; 004c5776
    CALL core_actor.cpp_FUN_00408b80    ; 004c5779
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004c577e
    LEA EAX,[EBP + 0xffffff6e]          ; 004c5781
    PUSH EAX                            ; 004c5787
    LEA EDI,[EBP + 0xffffff6e]          ; 004c5788
    LEA ESI,[EBP + 0x16]                ; 004c578e
    PUSH EBX                            ; 004c5791
    MOVSD ES:EDI,ESI                    ; 004c5792
    MOVSD ES:EDI,ESI                    ; 004c5793
    MOVSD ES:EDI,ESI                    ; 004c5794
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 004c5795
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004c579a
    JMP 0x004c548e                      ; 004c579d
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004c57a2
        ;   Label: caseD_5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c57a8
    PUSH EBX                            ; 004c57ae
    CALL dword ptr [EAX + 0x144]        ; 004c57af
    ADD ESP,0x8                         ; 004c57b5
    PUSH EBX                            ; 004c57b8
    CALL core_gargoyle.cpp_FUN_004c51a0 ; 004c57b9
        ;   XREF to: 004c51a0 (UNCONDITIONAL_CALL)  ; undefined core_gargoyle.cpp_FUN_004c51a0()
    ADD ESP,0x4                         ; 004c57be
    TEST EAX,EAX                        ; 004c57c1
    JZ 0x004c548e                       ; 004c57c3
        ;   XREF to: 004c548e (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xd0ac]        ; 004c57c9
    FSUB float ptr [EBP + 0x92]         ; 004c57cf
    FST float ptr [EBX + 0xd0ac]        ; 004c57d5
    FLDZ                                ; 004c57db
    FCOMPP                              ; 004c57dd
    FNSTSW AX                           ; 004c57df
    SAHF                                ; 004c57e1
    JBE 0x004c548e                      ; 004c57e2
        ;   XREF to: 004c548e (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c57e8
    PUSH 0x0                            ; 004c57ea
    MOV ECX,dword ptr [EBP + 0x6e]      ; 004c57ec
    PUSH ECX                            ; 004c57ef
    MOV dword ptr [EBX + 0xd0ac],0x0    ; 004c57f0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c57fa
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c57ff
    MOV ESI,dword ptr [EBX + 0xd098]    ; 004c5802
    PUSH ESI                            ; 004c5808
    CALL sound_sndmain.cpp_FUN_00556700 ; 004c5809
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004c580e
    TEST EAX,EAX                        ; 004c5811
    JNZ 0x004c548e                      ; 004c5813
        ;   XREF to: 004c548e (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x5c3f5a                       ; 004c5819 | = "gargoyle-alive?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c581e
    PUSH EBX                            ; 004c5824
    CALL dword ptr [EAX + 0x2c]         ; 004c5825
    ADD ESP,0x8                         ; 004c5828
    MOV dword ptr [EBX + 0xd098],EAX    ; 004c582b
    JMP 0x004c548e                      ; 004c5831
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004c5836
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c583c
    PUSH EBX                            ; 004c5842
    CALL dword ptr [EAX + 0x144]        ; 004c5843
    ADD ESP,0x8                         ; 004c5849
    PUSH EBX                            ; 004c584c
    CALL core_gargoyle.cpp_FUN_004c51a0 ; 004c584d
        ;   XREF to: 004c51a0 (UNCONDITIONAL_CALL)  ; undefined core_gargoyle.cpp_FUN_004c51a0()
    ADD ESP,0x4                         ; 004c5852
    TEST EAX,EAX                        ; 004c5855
    JZ 0x004c5914                       ; 004c5857
        ;   XREF to: 004c5914 (CONDITIONAL_JUMP)  ; LAB_004c5914
    CMP dword ptr [EBX + 0xd0a8],0x0    ; 004c585d
    JNZ 0x004c5973                      ; 004c5864
        ;   XREF to: 004c5973 (CONDITIONAL_JUMP)  ; LAB_004c5973
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004c586a
    TEST EDX,EDX                        ; 004c5870
    JZ 0x004c5a15                       ; 004c5872
        ;   XREF to: 004c5a15 (CONDITIONAL_JUMP)  ; LAB_004c5a15
    FLD float ptr [EDX + 0x20]          ; 004c5878
    FLD float ptr [EDX + 0x24]          ; 004c587b
    FLD float ptr [EDX + 0x28]          ; 004c587e
    LEA EAX,[EBX + 0x20]                ; 004c5881
    LEA EDI,[EBP + -0x4a]               ; 004c5884
    LEA ESI,[EBP + -0x7a]               ; 004c5887
    FXCH ST2                            ; 004c588a
    FSUB float ptr [EAX]                ; 004c588c
    FXCH                                ; 004c588e
    FSUB float ptr [EAX + 0x4]          ; 004c5890
    FXCH ST2                            ; 004c5893
    FSUB float ptr [EAX + 0x8]          ; 004c5895
    FXCH                                ; 004c5898
    FSTP float ptr [EBP + -0x7a]        ; 004c589a
    FXCH                                ; 004c589d
    FSTP float ptr [EBP + -0x76]        ; 004c589f
    FSTP float ptr [EBP + -0x72]        ; 004c58a2
    MOVSD ES:EDI,ESI                    ; 004c58a5
    MOVSD ES:EDI,ESI                    ; 004c58a6
    MOVSD ES:EDI,ESI                    ; 004c58a7
    FLD float ptr [EBP + -0x46]         ; 004c58a8
    FMUL ST0                            ; 004c58ab
    FLD float ptr [EBP + -0x4a]         ; 004c58ad
    FMUL ST0                            ; 004c58b0
    FADDP                               ; 004c58b2
    FLD float ptr [EBP + -0x42]         ; 004c58b4
    FMUL ST0                            ; 004c58b7
    FADDP                               ; 004c58b9
    FSQRT                               ; 004c58bb
    FSTP float ptr [EBP + 0x56]         ; 004c58bd
    MOV EAX,dword ptr [EBP + 0x56]      ; 004c58c0
    FLD float ptr [EBP + 0x56]          ; 004c58c3
    MOV dword ptr [EBP + 0x62],EAX      ; 004c58c6
    FCOMP float ptr [0x005e076c]        ; 004c58c9 | DAT_005e076c
    FNSTSW AX                           ; 004c58cf
    SAHF                                ; 004c58d1
    JC 0x004c5988                       ; 004c58d2
        ;   XREF to: 004c5988 (CONDITIONAL_JUMP)  ; LAB_004c5988
    FLD float ptr [EBP + 0x62]          ; 004c58d8
        ;   Label: LAB_004c58d8
    FCOMP float ptr [EBX + 0xcddc]      ; 004c58db
    FNSTSW AX                           ; 004c58e1
    SAHF                                ; 004c58e3
    JNC 0x004c548e                      ; 004c58e4
        ;   XREF to: 004c548e (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBP + 0x62]          ; 004c58ea
    LEA ESI,[EBX + 0x158]               ; 004c58ed
    FCOMP float ptr [0x005e0778]        ; 004c58f3 | DAT_005e0778
    FNSTSW AX                           ; 004c58f9
    SAHF                                ; 004c58fb
    JNC 0x004c59e0                      ; 004c58fc
        ;   XREF to: 004c59e0 (CONDITIONAL_JUMP)  ; LAB_004c59e0
    PUSH 0x1                            ; 004c5902
    PUSH 0x1                            ; 004c5904
    PUSH ESI                            ; 004c5906
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c5907
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c590c
    JMP 0x004c548e                      ; 004c590f
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3f800000                     ; 004c5914
        ;   Label: LAB_004c5914
    PUSH 0x0                            ; 004c5919
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c591b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    ADD ESP,0x8                         ; 004c5920
    PUSH 0x1                            ; 004c5923
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004c5925
    MOV dword ptr [EBP + 0x76],EAX      ; 004c5928
    PUSH 0x5                            ; 004c592b
    FLD float ptr [EBP + 0x76]          ; 004c592d
    PUSH ESI                            ; 004c5930
    FSTP float ptr [EBX + 0xd0ac]       ; 004c5931
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c5937
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c593c
    MOV EDI,dword ptr [EBX + 0xd098]    ; 004c593f
    PUSH EDI                            ; 004c5945
    CALL sound_sndmain.cpp_FUN_00556700 ; 004c5946
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004c594b
    TEST EAX,EAX                        ; 004c594e
    JNZ 0x004c548e                      ; 004c5950
        ;   XREF to: 004c548e (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x5c3f6e                       ; 004c5956 | = "gargoyle-stone.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c595b
    PUSH EBX                            ; 004c5961
    CALL dword ptr [EAX + 0x2c]         ; 004c5962
    ADD ESP,0x8                         ; 004c5965
    MOV dword ptr [EBX + 0xd098],EAX    ; 004c5968
    JMP 0x004c548e                      ; 004c596e
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c5973
        ;   Label: LAB_004c5973
    PUSH 0x1                            ; 004c5975
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004c5977
    PUSH EDI                            ; 004c597a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c597b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c5980
    JMP 0x004c548e                      ; 004c5983
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    LEA EAX,[EBP + -0x4a]               ; 004c5988
        ;   Label: LAB_004c5988
    PUSH EAX                            ; 004c598b
    LEA ESI,[EBP + -0x56]               ; 004c598c
    LEA EDI,[EBP + 0x3a]                ; 004c598f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004c5992
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + -0x56]               ; 004c5997
    MOVSD ES:EDI,ESI                    ; 004c599a
    MOVSD ES:EDI,ESI                    ; 004c599b
    MOVSD ES:EDI,ESI                    ; 004c599c
    ADD ESP,0x4                         ; 004c599d
    FLD float ptr [EBP + 0x3e]          ; 004c59a0
    FSUB float ptr [EBX + 0x34]         ; 004c59a3
    SUB ESP,0x4                         ; 004c59a6
    FSTP float ptr [ESP]                ; 004c59a9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004c59ac
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c59b1
    FLD float ptr [EBP + 0x76]          ; 004c59b4
    FABS                                ; 004c59b7
    ADD ESP,0x4                         ; 004c59b9
    FCOMP double ptr [0x005c3f98]       ; 004c59bc | DAT_005c3f98
    FNSTSW AX                           ; 004c59c2
    SAHF                                ; 004c59c4
    JNC 0x004c58d8                      ; 004c59c5
        ;   XREF to: 004c58d8 (CONDITIONAL_JUMP)  ; LAB_004c58d8
    PUSH 0x1                            ; 004c59cb
    PUSH 0x3                            ; 004c59cd
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004c59cf
    PUSH ESI                            ; 004c59d2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c59d3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c59d8
    JMP 0x004c58d8                      ; 004c59db
        ;   XREF to: 004c58d8 (UNCONDITIONAL_JUMP)  ; LAB_004c58d8
    PUSH 0x3dcccccd                     ; 004c59e0
        ;   Label: LAB_004c59e0
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004c59e5
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004c59ea
    TEST EAX,EAX                        ; 004c59ed
    JZ 0x004c5a03                       ; 004c59ef
        ;   XREF to: 004c5a03 (CONDITIONAL_JUMP)  ; LAB_004c5a03
    PUSH 0x1                            ; 004c59f1
    PUSH 0x4                            ; 004c59f3
    PUSH ESI                            ; 004c59f5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c59f6
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c59fb
    JMP 0x004c548e                      ; 004c59fe
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c5a03
        ;   Label: LAB_004c5a03
    PUSH 0x2                            ; 004c5a05
    PUSH ESI                            ; 004c5a07
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c5a08
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c5a0d
    JMP 0x004c548e                      ; 004c5a10
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004c5a15
        ;   Label: LAB_004c5a15
    PUSH EBX                            ; 004c5a1b
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 004c5a1c
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c5a21
    TEST EAX,EAX                        ; 004c5a24
    JZ 0x004c548e                       ; 004c5a26
        ;   XREF to: 004c548e (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c5a2c
    PUSH 0x1                            ; 004c5a2e
    MOV ECX,dword ptr [EBP + 0x6e]      ; 004c5a30
    PUSH ECX                            ; 004c5a33
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c5a34
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c5a39
    JMP 0x004c548e                      ; 004c5a3c
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004c5a41
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c5a47
    PUSH EBX                            ; 004c5a4d
    CALL dword ptr [EAX + 0x144]        ; 004c5a4e
    ADD ESP,0x8                         ; 004c5a54
    PUSH EBX                            ; 004c5a57
    CALL core_gargoyle.cpp_FUN_004c51a0 ; 004c5a58
        ;   XREF to: 004c51a0 (UNCONDITIONAL_CALL)  ; undefined core_gargoyle.cpp_FUN_004c51a0()
    LEA EDX,[EBX + 0x158]               ; 004c5a5d
    ADD ESP,0x4                         ; 004c5a63
    MOV dword ptr [EBP + 0x6a],EDX      ; 004c5a66
    TEST EAX,EAX                        ; 004c5a69
    JZ 0x004c5aba                       ; 004c5a6b
        ;   XREF to: 004c5aba (CONDITIONAL_JUMP)  ; LAB_004c5aba
    MOV EDX,dword ptr [EBX + 0xd0a8]    ; 004c5a6d
    LEA EAX,[EBX + 0x249c]              ; 004c5a73
    TEST EDX,EDX                        ; 004c5a79
    JNZ 0x004c5b19                      ; 004c5a7b
        ;   XREF to: 004c5b19 (CONDITIONAL_JUMP)  ; LAB_004c5b19
    CMP dword ptr [EBX + 0xcde4],0x0    ; 004c5a81
    JNZ 0x004c5b87                      ; 004c5a88
        ;   XREF to: 004c5b87 (CONDITIONAL_JUMP)  ; LAB_004c5b87
    PUSH dword ptr [EBP + 0x92]         ; 004c5a8e
    PUSH EBX                            ; 004c5a94
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 004c5a95
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c5a9a
    TEST EAX,EAX                        ; 004c5a9d
    JZ 0x004c5b73                       ; 004c5a9f
        ;   XREF to: 004c5b73 (CONDITIONAL_JUMP)  ; LAB_004c5b73
    PUSH 0x1                            ; 004c5aa5
    PUSH 0x1                            ; 004c5aa7
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004c5aa9
    PUSH EDI                            ; 004c5aac
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c5aad
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c5ab2
    JMP 0x004c548e                      ; 004c5ab5
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3f800000                     ; 004c5aba
        ;   Label: LAB_004c5aba
    PUSH 0x0                            ; 004c5abf
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c5ac1
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    ADD ESP,0x8                         ; 004c5ac6
    PUSH 0x1                            ; 004c5ac9
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004c5acb
    MOV dword ptr [EBP + 0x76],EAX      ; 004c5ace
    PUSH 0x5                            ; 004c5ad1
    FLD float ptr [EBP + 0x76]          ; 004c5ad3
    PUSH EDI                            ; 004c5ad6
    FSTP float ptr [EBX + 0xd0ac]       ; 004c5ad7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c5add
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c5ae2
    MOV EAX,dword ptr [EBX + 0xd098]    ; 004c5ae5
    PUSH EAX                            ; 004c5aeb
    CALL sound_sndmain.cpp_FUN_00556700 ; 004c5aec
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004c5af1
    TEST EAX,EAX                        ; 004c5af4
    JNZ 0x004c548e                      ; 004c5af6
        ;   XREF to: 004c548e (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x5c3f81                       ; 004c5afc | = "gargoyle-stone.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c5b01
    PUSH EBX                            ; 004c5b07
    CALL dword ptr [EAX + 0x2c]         ; 004c5b08
    ADD ESP,0x8                         ; 004c5b0b
    MOV dword ptr [EBX + 0xd098],EAX    ; 004c5b0e
    JMP 0x004c548e                      ; 004c5b14
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV dword ptr [EAX + 0x8],0x0       ; 004c5b19
        ;   Label: LAB_004c5b19
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c5b20
    MOV dword ptr [EAX + 0x4],EDX       ; 004c5b23
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c5b26
    MOV dword ptr [EAX],EDX             ; 004c5b29
    XOR EAX,EAX                         ; 004c5b2b
    PUSH 0x3e32b8c2                     ; 004c5b2d
    MOV dword ptr [EBP + 0xa],EAX       ; 004c5b32
    MOV dword ptr [EBP + 0xe],EAX       ; 004c5b35
    MOV dword ptr [EBP + 0x12],EAX      ; 004c5b38
    LEA EAX,[EBP + 0xa]                 ; 004c5b3b
    PUSH 0x3f000000                     ; 004c5b3e
    PUSH EAX                            ; 004c5b43
    MOV EAX,dword ptr [EBX + 0xd090]    ; 004c5b44
    PUSH EAX                            ; 004c5b4a
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c5b4b
    CALL dword ptr [EDX + 0xc4]         ; 004c5b51
    ADD ESP,0x4                         ; 004c5b57
    PUSH EAX                            ; 004c5b5a
    MOV EAX,dword ptr [EBX + 0xd090]    ; 004c5b5b
    ADD EAX,0x20                        ; 004c5b61
    PUSH EAX                            ; 004c5b64
    PUSH EBX                            ; 004c5b65
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004c5b66
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c5b6b
    JMP 0x004c548e                      ; 004c5b6e
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c5b73
        ;   Label: LAB_004c5b73
    PUSH EAX                            ; 004c5b75
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004c5b76
    PUSH ESI                            ; 004c5b79
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c5b7a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c5b7f
    JMP 0x004c548e                      ; 004c5b82
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3e32b8c2                     ; 004c5b87
        ;   Label: LAB_004c5b87
    PUSH 0x3f000000                     ; 004c5b8c
    MOV EDX,dword ptr [0x005e076c]      ; 004c5b91 | DAT_005e076c
    MOV dword ptr [EAX + 0x8],0x0       ; 004c5b97
    XOR ESI,ESI                         ; 004c5b9e
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c5ba0
    MOV dword ptr [EAX + 0x4],ECX       ; 004c5ba3
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c5ba6
    MOV dword ptr [EAX],ECX             ; 004c5ba9
    LEA EAX,[EBP + 0x46]                ; 004c5bab
    MOV dword ptr [EBP + 0x46],ESI      ; 004c5bae
    MOV dword ptr [EBP + 0x4a],ESI      ; 004c5bb1
    MOV dword ptr [EBP + 0x4e],EDX      ; 004c5bb4
    PUSH EAX                            ; 004c5bb7
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c5bb8
    PUSH EAX                            ; 004c5bbe
    MOV dword ptr [EBP + 0x72],EDX      ; 004c5bbf
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c5bc2
    CALL dword ptr [EDX + 0xc4]         ; 004c5bc8
    ADD ESP,0x4                         ; 004c5bce
    PUSH EAX                            ; 004c5bd1
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c5bd2
    ADD EAX,0x20                        ; 004c5bd8
    PUSH EAX                            ; 004c5bdb
    PUSH EBX                            ; 004c5bdc
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004c5bdd
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c5be2
    TEST EAX,EAX                        ; 004c5be5
    JL 0x004c548e                       ; 004c5be7
        ;   XREF to: 004c548e (CONDITIONAL_JUMP)  ; caseD_4
    LEA EDI,[EBP + -0x6e]               ; 004c5bed
    LEA EAX,[EBX + 0x20]                ; 004c5bf0
    LEA ESI,[EBP + -0xe]                ; 004c5bf3
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004c5bf6
    FLD float ptr [EAX]                 ; 004c5bfc
    FLD float ptr [EAX + 0x4]           ; 004c5bfe
    FLD float ptr [EAX + 0x8]           ; 004c5c01
    FXCH ST2                            ; 004c5c04
    FSUB float ptr [EDX + 0x20]         ; 004c5c06
    FXCH                                ; 004c5c09
    FSUB float ptr [EDX + 0x24]         ; 004c5c0b
    FXCH ST2                            ; 004c5c0e
    FSUB float ptr [EDX + 0x28]         ; 004c5c10
    FXCH                                ; 004c5c13
    FSTP float ptr [EBP + -0xe]         ; 004c5c15
    FXCH                                ; 004c5c18
    FSTP float ptr [EBP + -0xa]         ; 004c5c1a
    FSTP float ptr [EBP + -0x6]         ; 004c5c1d
    MOVSD ES:EDI,ESI                    ; 004c5c20
    MOVSD ES:EDI,ESI                    ; 004c5c21
    MOVSD ES:EDI,ESI                    ; 004c5c22
    FLD float ptr [EBP + -0x6e]         ; 004c5c23
    FMUL ST0                            ; 004c5c26
    FLD float ptr [EBP + -0x66]         ; 004c5c28
    FMUL ST0                            ; 004c5c2b
    XOR EAX,EAX                         ; 004c5c2d
    FADDP                               ; 004c5c2f
    MOV dword ptr [EBP + -0x6a],EAX     ; 004c5c31
    FSQRT                               ; 004c5c34
    FSTP float ptr [EBP + 0x5a]         ; 004c5c36
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004c5c39
    FLD float ptr [EBP + 0x5a]          ; 004c5c3c
    MOV dword ptr [EBP + 0x66],EAX      ; 004c5c3f
    FCOMP float ptr [0x005e0778]        ; 004c5c42 | DAT_005e0778
    FNSTSW AX                           ; 004c5c48
    SAHF                                ; 004c5c4a
    JBE 0x004c5c72                      ; 004c5c4b
        ;   XREF to: 004c5c72 (CONDITIONAL_JUMP)  ; LAB_004c5c72
    PUSH 0x3dcccccd                     ; 004c5c4d
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004c5c52
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004c5c57
    TEST EAX,EAX                        ; 004c5c5a
    JZ 0x004c5d5e                       ; 004c5c5c
        ;   XREF to: 004c5d5e (CONDITIONAL_JUMP)  ; LAB_004c5d5e
    PUSH 0x1                            ; 004c5c62
    PUSH 0x4                            ; 004c5c64
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004c5c66
    PUSH ECX                            ; 004c5c69
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c5c6a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004c5c6a
    ADD ESP,0xc                         ; 004c5c6f
    FLD float ptr [EBP + 0x66]          ; 004c5c72
        ;   Label: LAB_004c5c72
    FCOMP float ptr [EBP + 0x72]        ; 004c5c75
    FNSTSW AX                           ; 004c5c78
    SAHF                                ; 004c5c7a
    JA 0x004c5d34                       ; 004c5c7b
        ;   XREF to: 004c5d34 (CONDITIONAL_JUMP)  ; LAB_004c5d34
    FLD float ptr [EBX + 0xcde0]        ; 004c5c81
    FLDZ                                ; 004c5c87
    FCOMPP                              ; 004c5c89
    FNSTSW AX                           ; 004c5c8b
    SAHF                                ; 004c5c8d
    JC 0x004c5d34                       ; 004c5c8e
        ;   XREF to: 004c5d34 (CONDITIONAL_JUMP)  ; LAB_004c5d34
    LEA EDI,[EBP + 0x22]                ; 004c5c94
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c5c97
    LEA ESI,[EBP + 0xffffff56]          ; 004c5c9d
    LEA EDX,[EBX + 0x20]                ; 004c5ca3
    FLD float ptr [EAX + 0x24]          ; 004c5ca6
    FLD float ptr [EAX + 0x28]          ; 004c5ca9
    FLD float ptr [EAX + 0x20]          ; 004c5cac
    LEA EAX,[EBP + 0x22]                ; 004c5caf
    FSUB float ptr [EDX]                ; 004c5cb2
    FXCH ST2                            ; 004c5cb4
    FSUB float ptr [EDX + 0x4]          ; 004c5cb6
    FXCH                                ; 004c5cb9
    FSUB float ptr [EDX + 0x8]          ; 004c5cbb
    FXCH ST2                            ; 004c5cbe
    FSTP float ptr [EBP + 0xffffff56]   ; 004c5cc0
    FSTP float ptr [EBP + 0xffffff5a]   ; 004c5cc6
    FSTP float ptr [EBP + 0xffffff5e]   ; 004c5ccc
    MOVSD ES:EDI,ESI                    ; 004c5cd2
    MOVSD ES:EDI,ESI                    ; 004c5cd3
    MOVSD ES:EDI,ESI                    ; 004c5cd4
    PUSH EAX                            ; 004c5cd5
    LEA ESI,[EBP + -0x32]               ; 004c5cd6
    LEA EDI,[EBP + 0xffffff62]          ; 004c5cd9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004c5cdf
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + -0x32]               ; 004c5ce4
    MOVSD ES:EDI,ESI                    ; 004c5ce7
    MOVSD ES:EDI,ESI                    ; 004c5ce8
    MOVSD ES:EDI,ESI                    ; 004c5ce9
    ADD ESP,0x4                         ; 004c5cea
    FLD float ptr [EBP + 0xffffff66]    ; 004c5ced
    FSUB float ptr [EBX + 0x34]         ; 004c5cf3
    SUB ESP,0x4                         ; 004c5cf6
    FSTP float ptr [ESP]                ; 004c5cf9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004c5cfc
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c5d01
    FLD float ptr [EBP + 0x76]          ; 004c5d04
    FABS                                ; 004c5d07
    ADD ESP,0x4                         ; 004c5d09
    FCOMP double ptr [0x005c3f98]       ; 004c5d0c | DAT_005c3f98
    FNSTSW AX                           ; 004c5d12
    SAHF                                ; 004c5d14
    JNC 0x004c5d34                      ; 004c5d15
        ;   XREF to: 004c5d34 (CONDITIONAL_JUMP)  ; LAB_004c5d34
    PUSH 0x1                            ; 004c5d17
    PUSH 0x3                            ; 004c5d19
    LEA EAX,[EBX + 0x158]               ; 004c5d1b
    PUSH EAX                            ; 004c5d21
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c5d22
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c5d27
    MOV dword ptr [EBX + 0xcde0],0x3f800000 ; 004c5d2a
    FLD float ptr [EBP + 0x66]          ; 004c5d34
        ;   Label: LAB_004c5d34
    FCOMP float ptr [EBX + 0xcddc]      ; 004c5d37
    FNSTSW AX                           ; 004c5d3d
    SAHF                                ; 004c5d3f
    JBE 0x004c548e                      ; 004c5d40
        ;   XREF to: 004c548e (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c5d46
    PUSH 0x0                            ; 004c5d48
    LEA EAX,[EBX + 0x158]               ; 004c5d4a
    PUSH EAX                            ; 004c5d50
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c5d51
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c5d56
    JMP 0x004c548e                      ; 004c5d59
        ;   XREF to: 004c548e (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004c5d5e
        ;   Label: LAB_004c5d5e
    PUSH 0x2                            ; 004c5d60
    MOV EDX,dword ptr [EBP + 0x6a]      ; 004c5d62
    PUSH EDX                            ; 004c5d65
    JMP 0x004c5c6a                      ; 004c5d66
        ;   XREF to: 004c5c6a (UNCONDITIONAL_JUMP)  ; LAB_004c5c6a
    CMP ESI,0x5                         ; 004c5d6b
        ;   Label: LAB_004c5d6b
    JA 0x004c548e                       ; 004c5d6e
        ;   XREF to: 004c548e (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [ESI*0x4 + 0x4c5334]  ; 004c5d74 | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [EBX + 0xd0a0],0xffff ; 004c5d7b
        ;   Label: LAB_004c5d7b
    MOV dword ptr [EBX + 0xd0a4],0xffff ; 004c5d85
    MOV dword ptr [EBX + 0xd09c],0xffff ; 004c5d8f
    JMP 0x004c560c                      ; 004c5d99
        ;   XREF to: 004c560c (UNCONDITIONAL_JUMP)  ; LAB_004c560c
    JLE 0x004c5643                      ; 004c5d9e
        ;   XREF to: 004c5643 (CONDITIONAL_JUMP)  ; LAB_004c5643
        ;   Label: LAB_004c5d9e
    MOV EAX,[0x01c5fad0]                ; 004c5da4 | DAT_01c5fad0
    MOV EDX,dword ptr [EBX + 0x108]     ; 004c5da9
    SUB EDX,EAX                         ; 004c5daf
    MOV ECX,dword ptr [EBX + 0xd09c]    ; 004c5db1
    MOV dword ptr [EBX + 0x108],EDX     ; 004c5db7
    CMP EDX,ECX                         ; 004c5dbd
    JGE 0x004c5643                      ; 004c5dbf
        ;   XREF to: 004c5643 (CONDITIONAL_JUMP)  ; LAB_004c5643
    MOV dword ptr [EBX + 0x108],ECX     ; 004c5dc5
    JMP 0x004c5643                      ; 004c5dcb
        ;   XREF to: 004c5643 (UNCONDITIONAL_JUMP)  ; LAB_004c5643
    JLE 0x004c567a                      ; 004c5dd0
        ;   XREF to: 004c567a (CONDITIONAL_JUMP)  ; LAB_004c567a
        ;   Label: LAB_004c5dd0
    MOV EAX,[0x01c5fad0]                ; 004c5dd6 | DAT_01c5fad0
    MOV ESI,dword ptr [EBX + 0x10c]     ; 004c5ddb
    SUB ESI,EAX                         ; 004c5de1
    MOV EDI,dword ptr [EBX + 0xd0a0]    ; 004c5de3
    MOV dword ptr [EBX + 0x10c],ESI     ; 004c5de9
    CMP ESI,EDI                         ; 004c5def
    JGE 0x004c567a                      ; 004c5df1
        ;   XREF to: 004c567a (CONDITIONAL_JUMP)  ; LAB_004c567a
    MOV dword ptr [EBX + 0x10c],EDI     ; 004c5df7
    JMP 0x004c567a                      ; 004c5dfd
        ;   XREF to: 004c567a (UNCONDITIONAL_JUMP)  ; LAB_004c567a
    JLE 0x004c53f3                      ; 004c5e02
        ;   XREF to: 004c53f3 (CONDITIONAL_JUMP)  ; LAB_004c53f3
        ;   Label: LAB_004c5e02
    MOV EAX,[0x01c5fad0]                ; 004c5e08 | DAT_01c5fad0
    MOV EDX,dword ptr [EBX + 0x110]     ; 004c5e0d
    SUB EDX,EAX                         ; 004c5e13
    MOV ECX,dword ptr [EBX + 0xd0a4]    ; 004c5e15
    MOV dword ptr [EBX + 0x110],EDX     ; 004c5e1b
    CMP EDX,ECX                         ; 004c5e21
    JGE 0x004c53f3                      ; 004c5e23
        ;   XREF to: 004c53f3 (CONDITIONAL_JUMP)  ; LAB_004c53f3
    MOV dword ptr [EBX + 0x110],ECX     ; 004c5e29
    LEA ESP,[EBP + 0x7a]                ; 004c5e2f
    POP EBP                             ; 004c5e32
    POP EDI                             ; 004c5e33
    POP ESI                             ; 004c5e34
    POP EBX                             ; 004c5e35
    RET                                 ; 004c5e36

