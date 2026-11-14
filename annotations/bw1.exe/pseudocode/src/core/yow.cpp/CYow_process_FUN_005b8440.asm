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
;   undefined4 DAT_005fa324
;   undefined4 DAT_005fa334
;   CConsole* g_CConsolePtr = 007db5f0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00432f10
;   core_charactr.cpp_FUN_00434790
;   core_charactr.cpp_FUN_00435320
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   ... and 4 more
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
    CALL core_charactr.cpp_FUN_00434790 ; 005b849b
        ;   XREF to: 00434790 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434790()
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
    CALL core_charactr.cpp_FUN_00432f10 ; 005b84bc
        ;   XREF to: 00432f10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432f10()
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
    CALL core_motion.cpp_FUN_00525020   ; 005b85da
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
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
        ;   Label: LAB_005b8626
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
    CALL core_charactr.cpp_FUN_0042d750 ; 005b875e
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
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
    CALL core_motion.cpp_FUN_00525020   ; 005b87ba
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
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
    CALL core_motion.cpp_FUN_00525020   ; 005b87fb
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
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
    MOV EDI,dword ptr [EBP + 0x6a]      ; 005b8e8b
        ;   Label: LAB_005b8e8b
    CMP EDI,0x15                        ; 005b8e8e
    JA 0x005b8626                       ; 005b8e91
        ;   XREF to: 005b8626 (CONDITIONAL_JUMP)  ; LAB_005b8626
    MOV EAX,EDI                         ; 005b8e97
    JMP dword ptr [EAX*0x4 + 0x5b83dc]  ; 005b8e99

