; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_yow_cpp_CYow_process_FUN_005b8440(CYow *this_ptr,float param_2)
;
; Parameters:
; CYow *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   param_2
;
; Referenced Globals:
;   TerminatedCString s_dog_attack_wav_005fa2a6
;   TerminatedCString s_YowDead_005fa2b6
;   TerminatedCString s_dog_alert_wav_005fa2be
;   TerminatedCString s_dog_alert_wav_005fa2cd
;   TerminatedCString s_dog_attack_wav_005fa2dc
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005fa2ec
;   TerminatedCString s_dog_attack_wav_005fa30d
;   undefined4 DAT_005fa324
;   undefined4 DAT_005fa32c
;   undefined4 DAT_005fa334
;   undefined4 DAT_005fa33c
;   undefined4 DAT_005fa340
;   undefined4 DAT_0060820c
;   undefined4 DAT_00608218
;   CConsole* g_CConsolePtr = 007db5f0
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00432f10
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_0042d750
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processSmoking_FUN_00434790
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   ... and 16 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8440
        ;   Label: core_yow.cpp_CYow_process_FUN_005b8440
    PUSH ESI                            ; 005b8441
    PUSH EDI                            ; 005b8442
    PUSH EBP                            ; 005b8443
    MOV EBP,ESP                         ; 005b8444
    SUB ESP,0x14c                       ; 005b8446
    SUB EBP,0x7a                        ; 005b844c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005b844f
    PUSH dword ptr [EBP + 0x92]         ; 005b8455
    PUSH EBX                            ; 005b845b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 005b845c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005b8461
    TEST EAX,EAX                        ; 005b8464
    JZ 0x005b878d                       ; 005b8466
        ;   XREF to: 005b878d (CONDITIONAL_JUMP)  ; LAB_005b878d
    MOV EAX,dword ptr [EBX + 0xc298]    ; 005b846c
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005b8472
    JZ 0x005b851c                       ; 005b847a
        ;   XREF to: 005b851c (CONDITIONAL_JUMP)  ; LAB_005b851c
    MOV EAX,dword ptr [EBX + 0xc29c]    ; 005b8480
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005b8486
    JZ 0x005b851c                       ; 005b848e
        ;   XREF to: 005b851c (CONDITIONAL_JUMP)  ; LAB_005b851c
    PUSH dword ptr [EBP + 0x92]         ; 005b8494
        ;   Label: LAB_005b8494
    PUSH EBX                            ; 005b849a
    CALL core_charactr.cpp_CCharacter_processSmoking_FUN_00434790 ; 005b849b
        ;   XREF to: 00434790 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processSmoking_FUN_00434790(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005b84a0
    MOV ESI,dword ptr [EBX + 0xc1d4]    ; 005b84a3
    XOR EAX,EAX                         ; 005b84a9
    CMP ESI,0x1                         ; 005b84ab
    JZ 0x005b854c                       ; 005b84ae
        ;   XREF to: 005b854c (CONDITIONAL_JUMP)  ; LAB_005b854c
    PUSH EAX                            ; 005b84b4
        ;   Label: LAB_005b84b4
    PUSH dword ptr [EBP + 0x92]         ; 005b84b5
    PUSH EBX                            ; 005b84bb
    CALL core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00432f10 ; 005b84bc
        ;   XREF to: 00432f10 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00432f10(CCharacter * this_ptr, float delta_time, int disable_search)
    LEA EAX,[EBX + 0x249c]              ; 005b84c1
    MOV dword ptr [EAX + 0x8],0x0       ; 005b84c7
    FLD float ptr [EBP + 0x92]          ; 005b84ce
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b84d4
    MOV dword ptr [EAX + 0x4],EDX       ; 005b84d7
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b84da
    MOV dword ptr [EAX],EDX             ; 005b84dd
    FMUL float ptr [EBX + 0xc1d0]       ; 005b84df
    FMUL float ptr [EBX + 0xc2b4]       ; 005b84e5
    ADD ESP,0xc                         ; 005b84eb
    LEA ESI,[EBX + 0x158]               ; 005b84ee
    FSTP float ptr [EBP + 0x5e]         ; 005b84f4
    FLD float ptr [EBP + 0x5e]          ; 005b84f7
        ;   Label: LAB_005b84f7
    FLDZ                                ; 005b84fa
    FCOMPP                              ; 005b84fc
    FNSTSW AX                           ; 005b84fe
    SAHF                                ; 005b8500
    JNC 0x005b8553                      ; 005b8501
        ;   XREF to: 005b8553 (CONDITIONAL_JUMP)  ; LAB_005b8553
    LEA EAX,[EBP + 0x5e]                ; 005b8503
    PUSH EAX                            ; 005b8506
    PUSH ESI                            ; 005b8507
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 005b8508
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005b850d
    PUSH EAX                            ; 005b8510
    PUSH EBX                            ; 005b8511
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 005b8512
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005b8517
    JMP 0x005b84f7                      ; 005b851a
        ;   XREF to: 005b84f7 (UNCONDITIONAL_JUMP)  ; LAB_005b84f7
    PUSH EBX                            ; 005b851c
        ;   Label: LAB_005b851c
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b851d
    CALL dword ptr [EAX + 0x10c]        ; 005b8523
    ADD ESP,0x4                         ; 005b8529
    TEST EAX,EAX                        ; 005b852c
    JNZ 0x005b8494                      ; 005b852e
        ;   XREF to: 005b8494 (CONDITIONAL_JUMP)  ; LAB_005b8494
    PUSH 0x1                            ; 005b8534
    PUSH 0x10                           ; 005b8536
    LEA EAX,[EBX + 0x158]               ; 005b8538
    PUSH EAX                            ; 005b853e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b853f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b8544
    JMP 0x005b8494                      ; 005b8547
        ;   XREF to: 005b8494 (UNCONDITIONAL_JUMP)  ; LAB_005b8494
    MOV EAX,ESI                         ; 005b854c
        ;   Label: LAB_005b854c
    JMP 0x005b84b4                      ; 005b854e
        ;   XREF to: 005b84b4 (UNCONDITIONAL_JUMP)  ; LAB_005b84b4
    PUSH ESI                            ; 005b8553
        ;   Label: LAB_005b8553
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005b8554
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    FLD float ptr [EBP + 0x92]          ; 005b8559
    FMUL float ptr [EBX + 0xc1d0]       ; 005b855f
    FLD float ptr [EBX + 0x24a4]        ; 005b8565
    ADD ESP,0x4                         ; 005b856b
    MOV ESI,dword ptr [EAX + 0x24]      ; 005b856e
    SUB ESP,0x4                         ; 005b8571
    FSTP float ptr [EBX + 0x2524]       ; 005b8574
    FSTP float ptr [ESP]                ; 005b857a
    PUSH EBX                            ; 005b857d
    MOV dword ptr [EBP + 0x6a],ESI      ; 005b857e
    CALL core_charactr.cpp_FUN_00435320 ; 005b8581
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 005b8586
    CMP ESI,0x8                         ; 005b8589
    JNZ 0x005b85a4                      ; 005b858c
        ;   XREF to: 005b85a4 (CONDITIONAL_JUMP)  ; LAB_005b85a4
    FLD float ptr [EBX + 0x2528]        ; 005b858e
    FLD ST0                             ; 005b8594
    FMUL double ptr [0x005fa324]        ; 005b8596 | DAT_005fa324
    FSTP ST1                            ; 005b859c
    FSTP float ptr [EBX + 0x2528]       ; 005b859e
    PUSH dword ptr [EBP + 0x92]         ; 005b85a4
        ;   Label: LAB_005b85a4
    PUSH EBX                            ; 005b85aa
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 005b85ab
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005b85b0
    TEST EAX,EAX                        ; 005b85b3
    JZ 0x005b8e8b                       ; 005b85b5
        ;   XREF to: 005b8e8b (CONDITIONAL_JUMP)  ; LAB_005b8e8b
    MOV EAX,dword ptr [EBX + 0x273c]    ; 005b85bb
    LEA ESI,[EBX + 0x158]               ; 005b85c1
    CMP EAX,0x2                         ; 005b85c7
    JNC 0x005b87ed                      ; 005b85ca
        ;   XREF to: 005b87ed (CONDITIONAL_JUMP)  ; LAB_005b87ed
    CMP EAX,0x1                         ; 005b85d0
    JNZ 0x005b87f4                      ; 005b85d3
        ;   XREF to: 005b87f4 (CONDITIONAL_JUMP)  ; LAB_005b87f4
    PUSH ESI                            ; 005b85d9
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020 ; 005b85da
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 005b85df
    ADD ESP,0x4                         ; 005b85e2
    FLD float ptr [EBP + 0x76]          ; 005b85e5
    FCOMP double ptr [0x005fa334]       ; 005b85e8 | DAT_005fa334
    FNSTSW AX                           ; 005b85ee
    SAHF                                ; 005b85f0
    JBE 0x005b860e                      ; 005b85f1
        ;   XREF to: 005b860e (CONDITIONAL_JUMP)  ; LAB_005b860e
    PUSH 0x1                            ; 005b85f3
    PUSH 0x2                            ; 005b85f5
    PUSH 0x0                            ; 005b85f7
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b85f9
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b85fe
    ADD EAX,0x5                         ; 005b8601
    PUSH EAX                            ; 005b8604
        ;   Label: LAB_005b8604
    PUSH ESI                            ; 005b8605
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b8606
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b860b
        ;   Label: LAB_005b860b
    LEA EAX,[EBX + 0x249c]              ; 005b860e
        ;   Label: LAB_005b860e
    MOV dword ptr [EAX + 0x8],0x0       ; 005b8614
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b861b
    MOV dword ptr [EAX + 0x4],EDX       ; 005b861e
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b8621
    MOV dword ptr [EAX],EDX             ; 005b8624
    FLD float ptr [EBX + 0xc1e4]        ; 005b8626
        ;   Label: caseD_4
    FLDZ                                ; 005b862c
    FCOMPP                              ; 005b862e
    FNSTSW AX                           ; 005b8630
    SAHF                                ; 005b8632
    JNC 0x005b8647                      ; 005b8633
        ;   XREF to: 005b8647 (CONDITIONAL_JUMP)  ; LAB_005b8647
    FLD float ptr [EBX + 0xc1e4]        ; 005b8635
    FSUB float ptr [EBP + 0x92]         ; 005b863b
    FSTP float ptr [EBX + 0xc1e4]       ; 005b8641
    PUSH EBX                            ; 005b8647
        ;   Label: LAB_005b8647
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 005b8648
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005b864d
    TEST EAX,EAX                        ; 005b8650
    JZ 0x005b8766                       ; 005b8652
        ;   XREF to: 005b8766 (CONDITIONAL_JUMP)  ; LAB_005b8766
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 005b8658
    TEST EDI,EDI                        ; 005b865e
    JZ 0x005b868c                       ; 005b8660
        ;   XREF to: 005b868c (CONDITIONAL_JUMP)  ; LAB_005b868c
    PUSH EDI                            ; 005b8662
    MOV EDX,dword ptr [EDI + 0x154]     ; 005b8663
    CALL dword ptr [EDX + 0xf4]         ; 005b8669
    ADD ESP,0x4                         ; 005b866f
    CMP EAX,EBX                         ; 005b8672
    JNZ 0x005b868c                      ; 005b8674
        ;   XREF to: 005b868c (CONDITIONAL_JUMP)  ; LAB_005b868c
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005b8676
    PUSH EAX                            ; 005b867c
    MOV EDX,dword ptr [0x00622c18]      ; 005b867d | g_CDemonSetPtr
    PUSH EDX                            ; 005b8683 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005b8684
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005b8689
    PUSH dword ptr [EBP + 0x92]         ; 005b868c
        ;   Label: LAB_005b868c
    PUSH EBX                            ; 005b8692
    LEA ESI,[EBX + 0x2518]              ; 005b8693
    CALL core_charactr.cpp_FUN_0042d700 ; 005b8699
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 005b869e
    FMUL float ptr [EBP + 0x92]         ; 005b86a0
    FLD float ptr [ESI + 0x4]           ; 005b86a6
    FMUL float ptr [EBP + 0x92]         ; 005b86a9
    FLD float ptr [ESI + 0x8]           ; 005b86af
    FMUL float ptr [EBP + 0x92]         ; 005b86b2
    LEA EDI,[EBP + 0x42]                ; 005b86b8
    LEA ESI,[EBP + -0x5a]               ; 005b86bb
    FXCH ST2                            ; 005b86be
    FSTP float ptr [EBP + -0x5a]        ; 005b86c0
    FSTP float ptr [EBP + -0x56]        ; 005b86c3
    FSTP float ptr [EBP + -0x52]        ; 005b86c6
    MOVSD ES:EDI,ESI                    ; 005b86c9
    MOVSD ES:EDI,ESI                    ; 005b86ca
    MOVSD ES:EDI,ESI                    ; 005b86cb
    LEA EDX,[EBX + 0x250c]              ; 005b86cc
    FLD float ptr [EBP + 0x42]          ; 005b86d2
    FLD float ptr [EBP + 0x46]          ; 005b86d5
    FLD float ptr [EBP + 0x4a]          ; 005b86d8
    LEA EDI,[EBP + 0x1e]                ; 005b86db
    LEA ESI,[EBP + -0x12]               ; 005b86de
    FXCH ST2                            ; 005b86e1
    FADD float ptr [EDX]                ; 005b86e3
    FXCH                                ; 005b86e5
    FADD float ptr [EDX + 0x4]          ; 005b86e7
    FXCH ST2                            ; 005b86ea
    FADD float ptr [EDX + 0x8]          ; 005b86ec
    FXCH                                ; 005b86ef
    FSTP float ptr [EBP + -0x12]        ; 005b86f1
    FXCH                                ; 005b86f4
    FSTP float ptr [EBP + -0xe]         ; 005b86f6
    FSTP float ptr [EBP + -0xa]         ; 005b86f9
    MOVSD ES:EDI,ESI                    ; 005b86fc
    MOVSD ES:EDI,ESI                    ; 005b86fd
    MOVSD ES:EDI,ESI                    ; 005b86fe
    LEA EAX,[EBX + 0x249c]              ; 005b86ff
    FLD float ptr [EBP + 0x1e]          ; 005b8705
    FLD float ptr [EBP + 0x22]          ; 005b8708
    FLD float ptr [EBP + 0x26]          ; 005b870b
    LEA EDI,[EBP + -0x66]               ; 005b870e
    LEA ESI,[EBP + 0x2a]                ; 005b8711
    FXCH ST2                            ; 005b8714
    FADD float ptr [EAX]                ; 005b8716
    FXCH                                ; 005b8718
    FADD float ptr [EAX + 0x4]          ; 005b871a
    FXCH ST2                            ; 005b871d
    FADD float ptr [EAX + 0x8]          ; 005b871f
    FXCH                                ; 005b8722
    FSTP float ptr [EBP + 0x2a]         ; 005b8724
    FXCH                                ; 005b8727
    FSTP float ptr [EBP + 0x2e]         ; 005b8729
    FSTP float ptr [EBP + 0x32]         ; 005b872c
    MOVSD ES:EDI,ESI                    ; 005b872f
    MOVSD ES:EDI,ESI                    ; 005b8730
    MOVSD ES:EDI,ESI                    ; 005b8731
    MOV dword ptr [EDX + 0x8],0x0       ; 005b8732
    MOV ECX,dword ptr [EDX + 0x8]       ; 005b8739
    MOV dword ptr [EDX + 0x4],ECX       ; 005b873c
    MOV ECX,dword ptr [EDX + 0x4]       ; 005b873f
    MOV dword ptr [EDX],ECX             ; 005b8742
    MOV dword ptr [EAX + 0x8],0x0       ; 005b8744
    ADD ESP,0x8                         ; 005b874b
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b874e
    MOV dword ptr [EAX + 0x4],EDX       ; 005b8751
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b8754
    MOV dword ptr [EAX],EDX             ; 005b8757
    LEA EAX,[EBP + -0x66]               ; 005b8759
    PUSH EAX                            ; 005b875c
    PUSH EBX                            ; 005b875d
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_0042d750 ; 005b875e
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005b8763
    PUSH EBX                            ; 005b8766
        ;   Label: LAB_005b8766
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 005b8767
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005b876c
    LEA EAX,[EBX + 0x158]               ; 005b876f
    PUSH EAX                            ; 005b8775
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 005b8776
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005b877b
    PUSH dword ptr [EBP + 0x92]         ; 005b877e
    PUSH EBX                            ; 005b8784
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 005b8785
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005b878a
    LEA ESP,[EBP + 0x7a]                ; 005b878d
        ;   Label: LAB_005b878d
    POP EBP                             ; 005b8790
    POP EDI                             ; 005b8791
    POP ESI                             ; 005b8792
    POP EBX                             ; 005b8793
    RET                                 ; 005b8794
    PUSH 0x1                            ; 005b8795
        ;   Label: LAB_005b8795
    PUSH 0x0                            ; 005b8797
    PUSH ESI                            ; 005b8799
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b879a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b879f
    PUSH EBX                            ; 005b87a2
    PUSH 0x5fa27c                       ; 005b87a3
    MOV ESI,dword ptr [0x00611100]      ; 005b87a8 | g_CConsolePtr
    PUSH ESI                            ; 005b87ae
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 005b87af
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x005b860b                      ; 005b87b4
        ;   XREF to: 005b860b (UNCONDITIONAL_JUMP)  ; LAB_005b860b
    PUSH ESI                            ; 005b87b9
        ;   Label: LAB_005b87b9
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020 ; 005b87ba
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 005b87bf
    ADD ESP,0x4                         ; 005b87c2
    FLD float ptr [EBP + 0x76]          ; 005b87c5
    FCOMP double ptr [0x005fa334]       ; 005b87c8 | DAT_005fa334
    FNSTSW AX                           ; 005b87ce
    SAHF                                ; 005b87d0
    JBE 0x005b860e                      ; 005b87d1
        ;   XREF to: 005b860e (CONDITIONAL_JUMP)  ; LAB_005b860e
    PUSH 0x1                            ; 005b87d7
    PUSH 0x0                            ; 005b87d9
    PUSH 0x0                            ; 005b87db
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b87dd
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b87e2
    ADD EAX,0x8                         ; 005b87e5
    JMP 0x005b8604                      ; 005b87e8
        ;   XREF to: 005b8604 (UNCONDITIONAL_JUMP)  ; LAB_005b8604
    JBE 0x005b87b9                      ; 005b87ed
        ;   XREF to: 005b87b9 (CONDITIONAL_JUMP)  ; LAB_005b87b9
        ;   Label: LAB_005b87ed
    CMP EAX,0x3                         ; 005b87ef
    JZ 0x005b8795                       ; 005b87f2
        ;   XREF to: 005b8795 (CONDITIONAL_JUMP)  ; LAB_005b8795
    LEA ESI,[EBX + 0x158]               ; 005b87f4
        ;   Label: LAB_005b87f4
    PUSH ESI                            ; 005b87fa
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020 ; 005b87fb
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 005b8800
    ADD ESP,0x4                         ; 005b8803
    FLD float ptr [EBP + 0x76]          ; 005b8806
    FCOMP double ptr [0x005fa334]       ; 005b8809 | DAT_005fa334
    FNSTSW AX                           ; 005b880f
    SAHF                                ; 005b8811
    JBE 0x005b860e                      ; 005b8812
        ;   XREF to: 005b860e (CONDITIONAL_JUMP)  ; LAB_005b860e
    PUSH 0x1                            ; 005b8818
    PUSH 0x3                            ; 005b881a
    PUSH 0x0                            ; 005b881c
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b881e
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b8823
    JMP 0x005b8604                      ; 005b8826
        ;   XREF to: 005b8604 (UNCONDITIONAL_JUMP)  ; LAB_005b8604
    LEA EAX,[EBP + 0xffffff2e]          ; 005b882b
        ;   Label: caseD_9
    PUSH EAX                            ; 005b8831
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005b8832
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005b8837
    PUSH 0x41700000                     ; 005b883a
    PUSH 0x40e00000                     ; 005b883f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005b8844
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005b8849
    MOV dword ptr [EBP + 0xffffff62],EBX ; 005b884c
    MOV dword ptr [EBP + 0xffffff66],EBX ; 005b8852
    ADD ESP,0x8                         ; 005b8858
    FLD float ptr [EBP + 0x76]          ; 005b885b
    LEA EAX,[EBP + 0xffffff2e]          ; 005b885e
    FSTP float ptr [EBP + 0xffffff32]   ; 005b8864
    MOV EDX,dword ptr [EBX + 0xc26c]    ; 005b886a
    PUSH EAX                            ; 005b8870
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b8871
    SUB EAX,EDX                         ; 005b8878
    SHL EAX,0x4                         ; 005b887a
    LEA EDX,[EBX + 0xfd8]               ; 005b887d
    ADD EAX,EDX                         ; 005b8883
    PUSH 0x3f333333                     ; 005b8885
    PUSH EAX                            ; 005b888a
    PUSH 0x2c8af28                      ; 005b888b | DAT_02c8af28
    LEA ESI,[EBP + -0x36]               ; 005b8890
    LEA EDI,[EBP + -0x72]               ; 005b8893
    CALL core_xform.cpp_transformVector3x4_FUN_005b5080 ; 005b8896
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005b5080(CVector3f * input_vector, CMatrix3x4f * matrix, CVector3f * output_vector)
    ADD ESP,0x8                         ; 005b889b
    LEA EAX,[EBP + -0x72]               ; 005b889e
    LEA ESI,[EBP + -0x36]               ; 005b88a1
    PUSH EAX                            ; 005b88a4
    MOVSD ES:EDI,ESI                    ; 005b88a5
    MOVSD ES:EDI,ESI                    ; 005b88a6
    MOVSD ES:EDI,ESI                    ; 005b88a7
    PUSH EBX                            ; 005b88a8
    LEA ESI,[EBP + -0x7e]               ; 005b88a9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40 ; 005b88ac
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40(CDemonActor * this_ptr, CVector3f * input_local_point, CVector3f * output_world_point)
    ADD ESP,0x8                         ; 005b88b1
    LEA EAX,[EBP + -0x6]                ; 005b88b4
    PUSH EAX                            ; 005b88b7
    LEA EDI,[EBP + -0x6]                ; 005b88b8
    LEA ESI,[EBP + -0x7e]               ; 005b88bb
    PUSH EBX                            ; 005b88be
    MOVSD ES:EDI,ESI                    ; 005b88bf
    MOVSD ES:EDI,ESI                    ; 005b88c0
    MOVSD ES:EDI,ESI                    ; 005b88c1
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 005b88c2
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005b88c7
    MOV EDI,dword ptr [EBX + 0xc2b0]    ; 005b88ca
    PUSH EDI                            ; 005b88d0
    MOV EAX,[0x006236b8]                ; 005b88d1 | DAT_006236b8
    PUSH EAX                            ; 005b88d6
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 005b88d7
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 005b88dc
    TEST EAX,EAX                        ; 005b88df
    JNZ 0x005b8626                      ; 005b88e1
        ;   XREF to: 005b8626 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5fa2a6                       ; 005b88e7 | = "dog-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b88ec
    PUSH EBX                            ; 005b88f2
    CALL dword ptr [EAX + 0x2c]         ; 005b88f3
    ADD ESP,0x8                         ; 005b88f6
    MOV dword ptr [EBX + 0xc2b0],EAX    ; 005b88f9
    JMP 0x005b8626                      ; 005b88ff
        ;   XREF to: 005b8626 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,dword ptr [EBX + 0xc1d4]    ; 005b8904
        ;   Label: caseD_13
    TEST EAX,EAX                        ; 005b890a
    JNZ 0x005b8626                      ; 005b890c
        ;   XREF to: 005b8626 (CONDITIONAL_JUMP)  ; caseD_12
    CMP dword ptr [EBX + 0xdc],0x0      ; 005b8912
    JNZ 0x005b8626                      ; 005b8919
        ;   XREF to: 005b8626 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH EAX                            ; 005b891f
    LEA EAX,[EBX + 0x158]               ; 005b8920
    PUSH EAX                            ; 005b8926
    LEA ESI,[EBP + -0x2a]               ; 005b8927
    LEA EDI,[EBP + -0x42]               ; 005b892a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 005b892d
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 005b8932
    LEA EAX,[EBP + -0x42]               ; 005b8935
    LEA ESI,[EBP + -0x2a]               ; 005b8938
    PUSH EAX                            ; 005b893b
    MOVSD ES:EDI,ESI                    ; 005b893c
    MOVSD ES:EDI,ESI                    ; 005b893d
    MOVSD ES:EDI,ESI                    ; 005b893e
    PUSH EBX                            ; 005b893f
    LEA ESI,[EBP + -0x1e]               ; 005b8940
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40 ; 005b8943
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40(CDemonActor * this_ptr, CVector3f * input_local_point, CVector3f * output_world_point)
    ADD ESP,0x8                         ; 005b8948
    PUSH 0x0                            ; 005b894b
    LEA EAX,[EBP + 0x36]                ; 005b894d
    LEA EDI,[EBP + 0x36]                ; 005b8950
    PUSH EAX                            ; 005b8953
    MOV ECX,dword ptr [0x0061dca4]      ; 005b8954 | g_CGorePtr
    LEA ESI,[EBP + -0x1e]               ; 005b895a
    PUSH ECX                            ; 005b895d
    MOVSD ES:EDI,ESI                    ; 005b895e
    MOVSD ES:EDI,ESI                    ; 005b895f
    MOVSD ES:EDI,ESI                    ; 005b8960
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 005b8961
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 005b8966
    PUSH 0x5fa2b6                       ; 005b8969 | = "YowDead"
    MOV ESI,dword ptr [0x0061b4d0]      ; 005b896e | DAT_0061b4d0
    PUSH ESI                            ; 005b8974
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 005b8975
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 005b897f
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 005b8984
    JMP 0x005b8626                      ; 005b8987
        ;   XREF to: 005b8626 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH dword ptr [EBP + 0x92]         ; 005b898c
        ;   Label: caseD_0
    PUSH EBX                            ; 005b8992
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 005b8993
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    LEA EDX,[EBX + 0x158]               ; 005b8998
    ADD ESP,0x8                         ; 005b899e
    MOV dword ptr [EBP + 0x66],EDX      ; 005b89a1
    TEST EAX,EAX                        ; 005b89a4
    JZ 0x005b89e9                       ; 005b89a6
        ;   XREF to: 005b89e9 (CONDITIONAL_JUMP)  ; LAB_005b89e9
    PUSH EDX                            ; 005b89a8
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020 ; 005b89a9
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 005b89ae
    ADD ESP,0x4                         ; 005b89b1
    FLD float ptr [EBP + 0x76]          ; 005b89b4
    FCOMP double ptr [0x005fa334]       ; 005b89b7 | DAT_005fa334
    FNSTSW AX                           ; 005b89bd
    SAHF                                ; 005b89bf
    JBE 0x005b8626                      ; 005b89c0
        ;   XREF to: 005b8626 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 005b89c6
    PUSH 0x2                            ; 005b89c8
    PUSH 0x0                            ; 005b89ca
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b89cc
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b89d1
    ADD EAX,0x5                         ; 005b89d4
    PUSH EAX                            ; 005b89d7
    MOV ECX,dword ptr [EBP + 0x66]      ; 005b89d8
    PUSH ECX                            ; 005b89db
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b89dc
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b89e1
    JMP 0x005b8626                      ; 005b89e4
        ;   XREF to: 005b8626 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH dword ptr [EBP + 0x92]         ; 005b89e9
        ;   Label: LAB_005b89e9
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b89ef
    PUSH EBX                            ; 005b89f5
    CALL dword ptr [EAX + 0x144]        ; 005b89f6
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005b89fc
    ADD ESP,0x8                         ; 005b8a02
    TEST EAX,EAX                        ; 005b8a05
    JZ 0x005b8626                       ; 005b8a07
        ;   XREF to: 005b8626 (CONDITIONAL_JUMP)  ; caseD_12
    FLD float ptr [EAX + 0x20]          ; 005b8a0d
    FLD float ptr [EAX + 0x24]          ; 005b8a10
    FLD float ptr [EAX + 0x28]          ; 005b8a13
    LEA EDX,[EBX + 0x20]                ; 005b8a16
    LEA EDI,[EBP + 0xffffff6a]          ; 005b8a19
    LEA ESI,[EBP + -0x4e]               ; 005b8a1f
    FXCH ST2                            ; 005b8a22
    FSUB float ptr [EDX]                ; 005b8a24
    FXCH                                ; 005b8a26
    FSUB float ptr [EDX + 0x4]          ; 005b8a28
    FXCH ST2                            ; 005b8a2b
    FSUB float ptr [EDX + 0x8]          ; 005b8a2d
    FXCH                                ; 005b8a30
    FSTP float ptr [EBP + -0x4e]        ; 005b8a32
    FXCH                                ; 005b8a35
    FSTP float ptr [EBP + -0x4a]        ; 005b8a37
    FSTP float ptr [EBP + -0x46]        ; 005b8a3a
    MOVSD ES:EDI,ESI                    ; 005b8a3d
    MOVSD ES:EDI,ESI                    ; 005b8a3e
    MOVSD ES:EDI,ESI                    ; 005b8a3f
    FLD float ptr [EBP + 0xffffff6e]    ; 005b8a40
    FMUL ST0                            ; 005b8a46
    FLD float ptr [EBP + 0xffffff6a]    ; 005b8a48
    FMUL ST0                            ; 005b8a4e
    FADDP                               ; 005b8a50
    FLD float ptr [EBP + 0xffffff72]    ; 005b8a52
    FMUL ST0                            ; 005b8a58
    FADDP                               ; 005b8a5a
    FSTP float ptr [EBP + 0x56]         ; 005b8a5c
    MOV EAX,dword ptr [EBP + 0x56]      ; 005b8a5f
    MOV EDX,dword ptr [0x01cc804c]      ; 005b8a62 | DAT_01cc804c
    SAR EAX,0x1                         ; 005b8a68
    ADD EAX,EDX                         ; 005b8a6a
    MOV dword ptr [EBP + 0x5a],EAX      ; 005b8a6c
    FLD float ptr [EBP + 0x5a]          ; 005b8a6f
    FCOMP float ptr [0x00608218]        ; 005b8a72 | DAT_00608218
    FNSTSW AX                           ; 005b8a78
    SAHF                                ; 005b8a7a
    JC 0x005b8ad5                       ; 005b8a7b
        ;   XREF to: 005b8ad5 (CONDITIONAL_JUMP)  ; LAB_005b8ad5
    PUSH 0x1                            ; 005b8a7d
    PUSH 0x0                            ; 005b8a7f
    PUSH 0x0                            ; 005b8a81
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b8a83
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b8a88
    ADD EAX,0x8                         ; 005b8a8b
    PUSH EAX                            ; 005b8a8e
    MOV ECX,dword ptr [EBP + 0x66]      ; 005b8a8f
    PUSH ECX                            ; 005b8a92
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b8a93
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005b8a93
    ADD ESP,0xc                         ; 005b8a98
    MOV EDI,dword ptr [EBX + 0xc2b0]    ; 005b8a9b
    PUSH EDI                            ; 005b8aa1
    MOV EAX,[0x006236b8]                ; 005b8aa2 | DAT_006236b8
    PUSH EAX                            ; 005b8aa7
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 005b8aa8
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 005b8aad
    TEST EAX,EAX                        ; 005b8ab0
    JNZ 0x005b8626                      ; 005b8ab2
        ;   XREF to: 005b8626 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5fa2be                       ; 005b8ab8 | = "dog-alert?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b8abd
    PUSH EBX                            ; 005b8ac3
    CALL dword ptr [EAX + 0x2c]         ; 005b8ac4
    ADD ESP,0x8                         ; 005b8ac7
    MOV dword ptr [EBX + 0xc2b0],EAX    ; 005b8aca
    JMP 0x005b8626                      ; 005b8ad0
        ;   XREF to: 005b8626 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 005b8ad5
        ;   Label: LAB_005b8ad5
    PUSH 0x2                            ; 005b8ad7
    PUSH 0x0                            ; 005b8ad9
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b8adb
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b8ae0
    ADD EAX,0x5                         ; 005b8ae3
    PUSH EAX                            ; 005b8ae6
    MOV ESI,dword ptr [EBP + 0x66]      ; 005b8ae7
    PUSH ESI                            ; 005b8aea
    JMP 0x005b8a93                      ; 005b8aeb
        ;   XREF to: 005b8a93 (UNCONDITIONAL_JUMP)  ; LAB_005b8a93
    PUSH 0x3c23d70a                     ; 005b8aed
        ;   Label: caseD_5
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 005b8af2
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 005b8af7
    TEST EAX,EAX                        ; 005b8afa
    JZ 0x005b8b1c                       ; 005b8afc
        ;   XREF to: 005b8b1c (CONDITIONAL_JUMP)  ; LAB_005b8b1c
    MOV EDX,dword ptr [EBX + 0xc2b0]    ; 005b8afe
    PUSH EDX                            ; 005b8b04
    MOV ECX,dword ptr [0x006236b8]      ; 005b8b05 | DAT_006236b8
    PUSH ECX                            ; 005b8b0b
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 005b8b0c
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 005b8b11
    TEST EAX,EAX                        ; 005b8b14
    JZ 0x005b8d69                       ; 005b8b16
        ;   XREF to: 005b8d69 (CONDITIONAL_JUMP)  ; LAB_005b8d69
    PUSH dword ptr [EBP + 0x92]         ; 005b8b1c
        ;   Label: LAB_005b8b1c
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b8b22
    PUSH EBX                            ; 005b8b28
    CALL dword ptr [EAX + 0x144]        ; 005b8b29
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 005b8b2f
    ADD ESP,0x8                         ; 005b8b35
    TEST ESI,ESI                        ; 005b8b38
    JZ 0x005b8d86                       ; 005b8b3a
        ;   XREF to: 005b8d86 (CONDITIONAL_JUMP)  ; LAB_005b8d86
    LEA EDX,[EBX + 0x20]                ; 005b8b40
    LEA EDI,[EBP + 0xffffff76]          ; 005b8b43
    FLD float ptr [EDX]                 ; 005b8b49
    FLD float ptr [EDX + 0x4]           ; 005b8b4b
    FLD float ptr [EDX + 0x8]           ; 005b8b4e
    FXCH ST2                            ; 005b8b51
    FSUB float ptr [ESI + 0x20]         ; 005b8b53
    FXCH                                ; 005b8b56
    FSUB float ptr [ESI + 0x24]         ; 005b8b58
    FXCH ST2                            ; 005b8b5b
    FSUB float ptr [ESI + 0x28]         ; 005b8b5d
    FXCH                                ; 005b8b60
    FSTP float ptr [EBP + 0x6]          ; 005b8b62
    FXCH                                ; 005b8b65
    FSTP float ptr [EBP + 0xa]          ; 005b8b67
    LEA ESI,[EBP + 0x6]                 ; 005b8b6a
    FSTP float ptr [EBP + 0xe]          ; 005b8b6d
    MOVSD ES:EDI,ESI                    ; 005b8b70
    MOVSD ES:EDI,ESI                    ; 005b8b71
    MOVSD ES:EDI,ESI                    ; 005b8b72
    FLD float ptr [EBP + 0xffffff7a]    ; 005b8b73
    FMUL ST0                            ; 005b8b79
    FLD float ptr [EBP + 0xffffff76]    ; 005b8b7b
    FMUL ST0                            ; 005b8b81
    FADDP                               ; 005b8b83
    FLD float ptr [EBP + 0xffffff7e]    ; 005b8b85
    FMUL ST0                            ; 005b8b8b
    FADDP                               ; 005b8b8d
    FSQRT                               ; 005b8b8f
    FSTP float ptr [EBP + 0x72]         ; 005b8b91
    MOV EAX,dword ptr [EBP + 0x72]      ; 005b8b94
    FLD float ptr [EBP + 0x72]          ; 005b8b97
    MOV dword ptr [EBP + 0x62],EAX      ; 005b8b9a
    FCOMP float ptr [0x00608218]        ; 005b8b9d | DAT_00608218
    FNSTSW AX                           ; 005b8ba3
    SAHF                                ; 005b8ba5
    JBE 0x005b8df9                      ; 005b8ba6
        ;   XREF to: 005b8df9 (CONDITIONAL_JUMP)  ; LAB_005b8df9
    CMP dword ptr [EBP + 0x6a],0x5      ; 005b8bac
    JNZ 0x005b8df9                      ; 005b8bb0
        ;   XREF to: 005b8df9 (CONDITIONAL_JUMP)  ; LAB_005b8df9
    FLD float ptr [EBX + 0xc1e4]        ; 005b8bb6
        ;   Label: LAB_005b8bb6
    LEA ESI,[EBX + 0x158]               ; 005b8bbc
    FCOMP double ptr [0x005fa32c]       ; 005b8bc2 | DAT_005fa32c
    FNSTSW AX                           ; 005b8bc8
    SAHF                                ; 005b8bca
    JBE 0x005b8e13                      ; 005b8bcb
        ;   XREF to: 005b8e13 (CONDITIONAL_JUMP)  ; LAB_005b8e13
    PUSH ESI                            ; 005b8bd1
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020 ; 005b8bd2
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 005b8bd7
    ADD ESP,0x4                         ; 005b8bda
    FLD float ptr [EBP + 0x76]          ; 005b8bdd
    FCOMP double ptr [0x005fa334]       ; 005b8be0 | DAT_005fa334
    FNSTSW AX                           ; 005b8be6
    SAHF                                ; 005b8be8
    JBE 0x005b8c06                      ; 005b8be9
        ;   XREF to: 005b8c06 (CONDITIONAL_JUMP)  ; LAB_005b8c06
    PUSH 0x1                            ; 005b8beb
    PUSH 0x2                            ; 005b8bed
    PUSH 0x0                            ; 005b8bef
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b8bf1
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b8bf6
    ADD EAX,0x5                         ; 005b8bf9
    PUSH EAX                            ; 005b8bfc
        ;   Label: LAB_005b8bfc
    PUSH ESI                            ; 005b8bfd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b8bfe
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b8c03
    FLD float ptr [EBP + 0x62]          ; 005b8c06
        ;   Label: LAB_005b8c06
    FCOMP float ptr [0x005fa33c]        ; 005b8c09 | DAT_005fa33c
    FNSTSW AX                           ; 005b8c0f
    SAHF                                ; 005b8c11
    JBE 0x005b8c7c                      ; 005b8c12
        ;   XREF to: 005b8c7c (CONDITIONAL_JUMP)  ; LAB_005b8c7c
    FLD float ptr [EBP + 0x62]          ; 005b8c14
    FCOMP float ptr [0x005fa340]        ; 005b8c17 | DAT_005fa340
    FNSTSW AX                           ; 005b8c1d
    SAHF                                ; 005b8c1f
    JNC 0x005b8c7c                      ; 005b8c20
        ;   XREF to: 005b8c7c (CONDITIONAL_JUMP)  ; LAB_005b8c7c
    PUSH 0xa                            ; 005b8c22
    PUSH 0x0                            ; 005b8c24
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b8c26
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b8c2b
    CMP EAX,0x5                         ; 005b8c2e
    JNZ 0x005b8c7c                      ; 005b8c31
        ;   XREF to: 005b8c7c (CONDITIONAL_JUMP)  ; LAB_005b8c7c
    PUSH 0x1                            ; 005b8c33
    PUSH 0x1                            ; 005b8c35
    PUSH 0x0                            ; 005b8c37
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b8c39
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b8c3e
    ADD EAX,0x9                         ; 005b8c41
    PUSH EAX                            ; 005b8c44
    LEA EAX,[EBX + 0x158]               ; 005b8c45
    PUSH EAX                            ; 005b8c4b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b8c4c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b8c51
    MOV ECX,dword ptr [EBX + 0xc2b0]    ; 005b8c54
    PUSH ECX                            ; 005b8c5a
    MOV ESI,dword ptr [0x006236b8]      ; 005b8c5b | DAT_006236b8
    PUSH ESI                            ; 005b8c61
    MOV dword ptr [EBX + 0xc1e4],0x40200000 ; 005b8c62
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 005b8c6c
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 005b8c71
    TEST EAX,EAX                        ; 005b8c74
    JZ 0x005b8e47                       ; 005b8c76
        ;   XREF to: 005b8e47 (CONDITIONAL_JUMP)  ; LAB_005b8e47
    MOV EAX,[0x0060820c]                ; 005b8c7c | DAT_0060820c
        ;   Label: LAB_005b8c7c
    PUSH 0x3f060a92                     ; 005b8c81
    MOV dword ptr [EBP + 0x6e],EAX      ; 005b8c86
    LEA EAX,[EBX + 0x249c]              ; 005b8c89
    PUSH 0x3fc00000                     ; 005b8c8f
    MOV dword ptr [EAX + 0x8],0x0       ; 005b8c94
    XOR EDI,EDI                         ; 005b8c9b
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b8c9d
    MOV dword ptr [EAX + 0x4],EDX       ; 005b8ca0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b8ca3
    MOV dword ptr [EAX],EDX             ; 005b8ca6
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005b8ca8
    MOV dword ptr [EBP + 0x12],EDI      ; 005b8cab
    MOV dword ptr [EBP + 0x1a],EAX      ; 005b8cae
    LEA EAX,[EBP + 0x12]                ; 005b8cb1
    MOV dword ptr [EBP + 0x16],EDI      ; 005b8cb4
    PUSH EAX                            ; 005b8cb7
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005b8cb8
    PUSH EAX                            ; 005b8cbe
    MOV EDX,dword ptr [EAX + 0x154]     ; 005b8cbf
    CALL dword ptr [EDX + 0xc4]         ; 005b8cc5
    ADD ESP,0x4                         ; 005b8ccb
    PUSH EAX                            ; 005b8cce
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005b8ccf
    ADD EAX,0x20                        ; 005b8cd5
    PUSH EAX                            ; 005b8cd8
    PUSH EBX                            ; 005b8cd9
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 005b8cda
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005b8cdf
    LEA ESI,[EBX + 0x158]               ; 005b8ce2
    TEST EAX,EAX                        ; 005b8ce8
    JL 0x005b8e64                       ; 005b8cea
        ;   XREF to: 005b8e64 (CONDITIONAL_JUMP)  ; LAB_005b8e64
    JLE 0x005b8626                      ; 005b8cf0
        ;   XREF to: 005b8626 (CONDITIONAL_JUMP)  ; caseD_12
    FLD float ptr [EBX + 0xc1e4]        ; 005b8cf6
    FLDZ                                ; 005b8cfc
    FCOMPP                              ; 005b8cfe
    FNSTSW AX                           ; 005b8d00
    SAHF                                ; 005b8d02
    JC 0x005b8626                       ; 005b8d03
        ;   XREF to: 005b8626 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 005b8d09
    PUSH 0x3                            ; 005b8d0b
    PUSH 0x2                            ; 005b8d0d
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b8d0f
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b8d14
    ADD EAX,0x9                         ; 005b8d17
    PUSH EAX                            ; 005b8d1a
    PUSH ESI                            ; 005b8d1b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b8d1c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b8d21
    MOV EDX,dword ptr [EBX + 0xc2b0]    ; 005b8d24
    PUSH EDX                            ; 005b8d2a
    MOV ECX,dword ptr [0x006236b8]      ; 005b8d2b | DAT_006236b8
    PUSH ECX                            ; 005b8d31
    MOV dword ptr [EBX + 0xc1e4],0x40200000 ; 005b8d32
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 005b8d3c
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 005b8d41
    TEST EAX,EAX                        ; 005b8d44
    JNZ 0x005b8626                      ; 005b8d46
        ;   XREF to: 005b8626 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5fa30d                       ; 005b8d4c | = "dog-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b8d51
    PUSH EBX                            ; 005b8d57
    CALL dword ptr [EAX + 0x2c]         ; 005b8d58
    ADD ESP,0x8                         ; 005b8d5b
    MOV dword ptr [EBX + 0xc2b0],EAX    ; 005b8d5e
    JMP 0x005b8626                      ; 005b8d64
        ;   XREF to: 005b8626 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5fa2cd                       ; 005b8d69 | = "dog-alert?.wav"
        ;   Label: LAB_005b8d69
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b8d6e
    PUSH EBX                            ; 005b8d74
    CALL dword ptr [EAX + 0x2c]         ; 005b8d75
    ADD ESP,0x8                         ; 005b8d78
    MOV dword ptr [EBX + 0xc2b0],EAX    ; 005b8d7b
    JMP 0x005b8b1c                      ; 005b8d81
        ;   XREF to: 005b8b1c (UNCONDITIONAL_JUMP)  ; LAB_005b8b1c
    PUSH dword ptr [EBP + 0x92]         ; 005b8d86
        ;   Label: LAB_005b8d86
    PUSH EBX                            ; 005b8d8c
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 005b8d8d
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005b8d92
    LEA ESI,[EBX + 0x158]               ; 005b8d95
    TEST EAX,EAX                        ; 005b8d9b
    JZ 0x005b8ddd                       ; 005b8d9d
        ;   XREF to: 005b8ddd (CONDITIONAL_JUMP)  ; LAB_005b8ddd
    PUSH ESI                            ; 005b8d9f
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020 ; 005b8da0
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 005b8da5
    ADD ESP,0x4                         ; 005b8da8
    FLD float ptr [EBP + 0x76]          ; 005b8dab
    FCOMP double ptr [0x005fa334]       ; 005b8dae | DAT_005fa334
    FNSTSW AX                           ; 005b8db4
    SAHF                                ; 005b8db6
    JBE 0x005b8626                      ; 005b8db7
        ;   XREF to: 005b8626 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 005b8dbd
    PUSH 0x2                            ; 005b8dbf
    PUSH 0x0                            ; 005b8dc1
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b8dc3
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b8dc8
    ADD EAX,0x5                         ; 005b8dcb
    PUSH EAX                            ; 005b8dce
    PUSH ESI                            ; 005b8dcf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b8dd0
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b8dd5
    JMP 0x005b8626                      ; 005b8dd8
        ;   XREF to: 005b8626 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 005b8ddd
        ;   Label: LAB_005b8ddd
    PUSH 0x3                            ; 005b8ddf
    PUSH EAX                            ; 005b8de1
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b8de2
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b8de7
    PUSH EAX                            ; 005b8dea
    PUSH ESI                            ; 005b8deb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b8dec
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b8df1
    JMP 0x005b8626                      ; 005b8df4
        ;   XREF to: 005b8626 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005b8df9
        ;   Label: LAB_005b8df9
    CMP EAX,0x6                         ; 005b8dfc
    JZ 0x005b8bb6                       ; 005b8dff
        ;   XREF to: 005b8bb6 (CONDITIONAL_JUMP)  ; LAB_005b8bb6
    CMP EAX,0x7                         ; 005b8e05
    JZ 0x005b8bb6                       ; 005b8e08
        ;   XREF to: 005b8bb6 (CONDITIONAL_JUMP)  ; LAB_005b8bb6
    JMP 0x005b8c06                      ; 005b8e0e
        ;   XREF to: 005b8c06 (UNCONDITIONAL_JUMP)  ; LAB_005b8c06
    PUSH ESI                            ; 005b8e13
        ;   Label: LAB_005b8e13
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020 ; 005b8e14
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 005b8e19
    ADD ESP,0x4                         ; 005b8e1c
    FLD float ptr [EBP + 0x76]          ; 005b8e1f
    FCOMP double ptr [0x005fa334]       ; 005b8e22 | DAT_005fa334
    FNSTSW AX                           ; 005b8e28
    SAHF                                ; 005b8e2a
    JBE 0x005b8c06                      ; 005b8e2b
        ;   XREF to: 005b8c06 (CONDITIONAL_JUMP)  ; LAB_005b8c06
    PUSH 0x1                            ; 005b8e31
    PUSH 0x0                            ; 005b8e33
    PUSH 0x0                            ; 005b8e35
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b8e37
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b8e3c
    ADD EAX,0x8                         ; 005b8e3f
    JMP 0x005b8bfc                      ; 005b8e42
        ;   XREF to: 005b8bfc (UNCONDITIONAL_JUMP)  ; LAB_005b8bfc
    PUSH 0x5fa2dc                       ; 005b8e47 | = "dog-attack?.wav"
        ;   Label: LAB_005b8e47
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b8e4c
    PUSH EBX                            ; 005b8e52
    CALL dword ptr [EAX + 0x2c]         ; 005b8e53
    ADD ESP,0x8                         ; 005b8e56
    MOV dword ptr [EBX + 0xc2b0],EAX    ; 005b8e59
    JMP 0x005b8c7c                      ; 005b8e5f
        ;   XREF to: 005b8c7c (UNCONDITIONAL_JUMP)  ; LAB_005b8c7c
    PUSH EBX                            ; 005b8e64
        ;   Label: LAB_005b8e64
    PUSH 0x5fa2ec                       ; 005b8e65 | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x00611100]      ; 005b8e6a | g_CConsolePtr
    PUSH EDI                            ; 005b8e70 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 005b8e71
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005b8e76
    PUSH 0x1                            ; 005b8e79
    PUSH 0x0                            ; 005b8e7b
    PUSH ESI                            ; 005b8e7d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b8e7e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b8e83
    JMP 0x005b8626                      ; 005b8e86
        ;   XREF to: 005b8626 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDI,dword ptr [EBP + 0x6a]      ; 005b8e8b
        ;   Label: LAB_005b8e8b
    CMP EDI,0x15                        ; 005b8e8e
    JA 0x005b8626                       ; 005b8e91
        ;   XREF to: 005b8626 (CONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,EDI                         ; 005b8e97
    JMP dword ptr [EAX*0x4 + 0x5b83dc]  ; 005b8e99 | caseD_3 | caseD_12 | caseD_8
        ;   Label: switchD

