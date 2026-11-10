; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shotgun_cpp_CShadowsc_process_FUN_00546400(CShadowsc *this_ptr,float delta_time)
;
; Parameters:
; CShadowsc *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_005463e4 = 00546928
;   TerminatedCString s_s_confused_while_walking_005d1477
;   TerminatedCString s_dog5_wav_005d14a1
;   TerminatedCString s_dog5_wav_005d14aa
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d14b3
;   undefined4 DAT_005d14d6
;   undefined4 DAT_005d14de
;   undefined4 DAT_005d14e6
;   undefined4 DAT_005d14ea
;   undefined4 DAT_005e434c
;   undefined4 DAT_005e4358
;   CConsole* g_CConsolePtr = 007f7ea4
;   CGore* g_CGorePtr = 01d22e44
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_00432330
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00434850
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546400
        ;   Label: core_shotgun.cpp_CShadowsc_process_FUN_00546400
    PUSH ESI                            ; 00546401
    PUSH EDI                            ; 00546402
    PUSH EBP                            ; 00546403
    MOV EBP,ESP                         ; 00546404
    SUB ESP,0x174                       ; 00546406
    SUB EBP,0x7a                        ; 0054640c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0054640f
    PUSH dword ptr [EBP + 0x92]         ; 00546415
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054641b
    PUSH EBX                            ; 00546421
    CALL dword ptr [EAX + 0x148]        ; 00546422
    ADD ESP,0x8                         ; 00546428
    TEST EAX,EAX                        ; 0054642b
    JNZ 0x00546437                      ; 0054642d
        ;   XREF to: 00546437 (CONDITIONAL_JUMP)  ; LAB_00546437
    LEA ESP,[EBP + 0x7a]                ; 0054642f
    POP EBP                             ; 00546432
    POP EDI                             ; 00546433
    POP ESI                             ; 00546434
    POP EBX                             ; 00546435
    RET                                 ; 00546436
    PUSH dword ptr [EBP + 0x92]         ; 00546437
        ;   Label: LAB_00546437
    PUSH EBX                            ; 0054643d
    CALL core_charactr.cpp_FUN_00433c60 ; 0054643e
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    ADD ESP,0x8                         ; 00546443
    MOV EDX,dword ptr [EBX + 0xcdd0]    ; 00546446
    XOR EAX,EAX                         ; 0054644c
    CMP EDX,0x1                         ; 0054644e
    JZ 0x005464bb                       ; 00546451
        ;   XREF to: 005464bb (CONDITIONAL_JUMP)  ; LAB_005464bb
    PUSH EAX                            ; 00546453
        ;   Label: LAB_00546453
    PUSH dword ptr [EBP + 0x92]         ; 00546454
    PUSH EBX                            ; 0054645a
    CALL core_charactr.cpp_FUN_00432330 ; 0054645b
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432330()
    LEA EAX,[EBX + 0x249c]              ; 00546460
    MOV dword ptr [EAX + 0x8],0x0       ; 00546466
    FLD float ptr [EBP + 0x92]          ; 0054646d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00546473
    MOV dword ptr [EAX + 0x4],EDX       ; 00546476
    MOV EDX,dword ptr [EAX + 0x4]       ; 00546479
    MOV dword ptr [EAX],EDX             ; 0054647c
    FMUL float ptr [EBX + 0xcdcc]       ; 0054647e
    FMUL float ptr [EBX + 0xd068]       ; 00546484
    ADD ESP,0xc                         ; 0054648a
    LEA ESI,[EBX + 0x158]               ; 0054648d
    FSTP float ptr [EBP + 0x5e]         ; 00546493
    FLD float ptr [EBP + 0x5e]          ; 00546496
        ;   Label: LAB_00546496
    FLDZ                                ; 00546499
    FCOMPP                              ; 0054649b
    FNSTSW AX                           ; 0054649d
    SAHF                                ; 0054649f
    JNC 0x005464bf                      ; 005464a0
        ;   XREF to: 005464bf (CONDITIONAL_JUMP)  ; LAB_005464bf
    LEA EAX,[EBP + 0x5e]                ; 005464a2
    PUSH EAX                            ; 005464a5
    PUSH ESI                            ; 005464a6
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 005464a7
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005464ac
    PUSH EAX                            ; 005464af
    PUSH EBX                            ; 005464b0
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 005464b1
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005464b6
    JMP 0x00546496                      ; 005464b9
        ;   XREF to: 00546496 (UNCONDITIONAL_JUMP)  ; LAB_00546496
    MOV EAX,EDX                         ; 005464bb
        ;   Label: LAB_005464bb
    JMP 0x00546453                      ; 005464bd
        ;   XREF to: 00546453 (UNCONDITIONAL_JUMP)  ; LAB_00546453
    LEA EAX,[EBX + 0x158]               ; 005464bf
        ;   Label: LAB_005464bf
    PUSH EAX                            ; 005464c5
    MOV dword ptr [EBP + 0x6e],EAX      ; 005464c6
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005464c9
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    FLD float ptr [EBP + 0x92]          ; 005464ce
    FMUL float ptr [EBX + 0xcdcc]       ; 005464d4
    FLD float ptr [EBX + 0x24a4]        ; 005464da
    ADD ESP,0x4                         ; 005464e0
    MOV EAX,dword ptr [EAX + 0x24]      ; 005464e3
    SUB ESP,0x4                         ; 005464e6
    FSTP float ptr [EBX + 0x2524]       ; 005464e9
    FSTP float ptr [ESP]                ; 005464ef
    PUSH EBX                            ; 005464f2
    MOV dword ptr [EBP + 0x66],EAX      ; 005464f3
    CALL core_charactr.cpp_FUN_00434850 ; 005464f6
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 005464fb
    PUSH dword ptr [EBP + 0x92]         ; 005464fe
    PUSH EBX                            ; 00546504
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 00546505
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0054650a
    TEST EAX,EAX                        ; 0054650d
    JZ 0x00546d30                       ; 0054650f
        ;   XREF to: 00546d30 (CONDITIONAL_JUMP)  ; LAB_00546d30
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00546515
    CMP EAX,0x2                         ; 0054651b
    JNC 0x0054671b                      ; 0054651e
        ;   XREF to: 0054671b (CONDITIONAL_JUMP)  ; LAB_0054671b
    CMP EAX,0x1                         ; 00546524
    JNZ 0x00546726                      ; 00546527
        ;   XREF to: 00546726 (CONDITIONAL_JUMP)  ; LAB_00546726
    LEA EAX,[EBX + 0x158]               ; 0054652d
        ;   Label: LAB_0054652d
    PUSH EAX                            ; 00546533
    CALL core_motion.cpp_FUN_004fc930   ; 00546534
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00546539
    ADD ESP,0x4                         ; 0054653c
    FLD float ptr [EBP + 0x76]          ; 0054653f
    FCOMP double ptr [0x005d14de]       ; 00546542 | DAT_005d14de
    FNSTSW AX                           ; 00546548
    SAHF                                ; 0054654a
    JBE 0x0054656e                      ; 0054654b
        ;   XREF to: 0054656e (CONDITIONAL_JUMP)  ; LAB_0054656e
    PUSH 0x1                            ; 0054654d
    PUSH 0x0                            ; 0054654f
    PUSH 0x0                            ; 00546551
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00546553
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00546558
    ADD EAX,0x2                         ; 0054655b
    PUSH EAX                            ; 0054655e
    LEA EAX,[EBX + 0x158]               ; 0054655f
    PUSH EAX                            ; 00546565
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00546566
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00546566
    ADD ESP,0xc                         ; 0054656b
        ;   Label: LAB_0054656b
    LEA EAX,[EBX + 0x249c]              ; 0054656e
        ;   Label: LAB_0054656e
    MOV dword ptr [EAX + 0x8],0x0       ; 00546574
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054657b
    MOV dword ptr [EAX + 0x4],EDX       ; 0054657e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00546581
    MOV dword ptr [EAX],EDX             ; 00546584
    FLD float ptr [EBX + 0xcde0]        ; 00546586
        ;   Label: caseD_5
    FLDZ                                ; 0054658c
    FCOMPP                              ; 0054658e
    FNSTSW AX                           ; 00546590
    SAHF                                ; 00546592
    JNC 0x005465a7                      ; 00546593
        ;   XREF to: 005465a7 (CONDITIONAL_JUMP)  ; LAB_005465a7
    FLD float ptr [EBX + 0xcde0]        ; 00546595
    FSUB float ptr [EBP + 0x92]         ; 0054659b
    FSTP float ptr [EBX + 0xcde0]       ; 005465a1
    PUSH EBX                            ; 005465a7
        ;   Label: LAB_005465a7
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 005465a8
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005465ad
    TEST EAX,EAX                        ; 005465b0
    JZ 0x005466c5                       ; 005465b2
        ;   XREF to: 005466c5 (CONDITIONAL_JUMP)  ; LAB_005466c5
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 005465b8
    TEST ESI,ESI                        ; 005465be
    JZ 0x005465eb                       ; 005465c0
        ;   XREF to: 005465eb (CONDITIONAL_JUMP)  ; LAB_005465eb
    PUSH ESI                            ; 005465c2
    MOV EDX,dword ptr [ESI + 0x154]     ; 005465c3
    CALL dword ptr [EDX + 0xf4]         ; 005465c9
    ADD ESP,0x4                         ; 005465cf
    CMP EAX,EBX                         ; 005465d2
    JNZ 0x005465eb                      ; 005465d4
        ;   XREF to: 005465eb (CONDITIONAL_JUMP)  ; LAB_005465eb
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 005465d6
    PUSH EDI                            ; 005465dc
    MOV EAX,[0x00603b28]                ; 005465dd | g_CDemonSetPtr
    PUSH EAX                            ; 005465e2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 005465e3
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005465e8
    PUSH dword ptr [EBP + 0x92]         ; 005465eb
        ;   Label: LAB_005465eb
    PUSH EBX                            ; 005465f1
    LEA ESI,[EBX + 0x2518]              ; 005465f2
    CALL core_charactr.cpp_FUN_0042c1e0 ; 005465f8
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 005465fd
    FMUL float ptr [EBP + 0x92]         ; 005465ff
    FLD float ptr [ESI + 0x4]           ; 00546605
    FMUL float ptr [EBP + 0x92]         ; 00546608
    FLD float ptr [ESI + 0x8]           ; 0054660e
    FMUL float ptr [EBP + 0x92]         ; 00546611
    LEA EDI,[EBP + -0x3a]               ; 00546617
    LEA ESI,[EBP + -0x6a]               ; 0054661a
    FXCH ST2                            ; 0054661d
    FSTP float ptr [EBP + -0x6a]        ; 0054661f
    FSTP float ptr [EBP + -0x66]        ; 00546622
    FSTP float ptr [EBP + -0x62]        ; 00546625
    MOVSD ES:EDI,ESI                    ; 00546628
    MOVSD ES:EDI,ESI                    ; 00546629
    MOVSD ES:EDI,ESI                    ; 0054662a
    LEA EDX,[EBX + 0x250c]              ; 0054662b
    FLD float ptr [EBP + -0x3a]         ; 00546631
    FLD float ptr [EBP + -0x36]         ; 00546634
    FLD float ptr [EBP + -0x32]         ; 00546637
    LEA EDI,[EBP + -0x52]               ; 0054663a
    LEA ESI,[EBP + 0x3e]                ; 0054663d
    FXCH ST2                            ; 00546640
    FADD float ptr [EDX]                ; 00546642
    FXCH                                ; 00546644
    FADD float ptr [EDX + 0x4]          ; 00546646
    FXCH ST2                            ; 00546649
    FADD float ptr [EDX + 0x8]          ; 0054664b
    FXCH                                ; 0054664e
    FSTP float ptr [EBP + 0x3e]         ; 00546650
    FXCH                                ; 00546653
    FSTP float ptr [EBP + 0x42]         ; 00546655
    FSTP float ptr [EBP + 0x46]         ; 00546658
    MOVSD ES:EDI,ESI                    ; 0054665b
    MOVSD ES:EDI,ESI                    ; 0054665c
    MOVSD ES:EDI,ESI                    ; 0054665d
    LEA EAX,[EBX + 0x249c]              ; 0054665e
    FLD float ptr [EBP + -0x52]         ; 00546664
    FLD float ptr [EBP + -0x4e]         ; 00546667
    FLD float ptr [EBP + -0x4a]         ; 0054666a
    LEA EDI,[EBP + 0xe]                 ; 0054666d
    LEA ESI,[EBP + 0x4a]                ; 00546670
    FXCH ST2                            ; 00546673
    FADD float ptr [EAX]                ; 00546675
    FXCH                                ; 00546677
    FADD float ptr [EAX + 0x4]          ; 00546679
    FXCH ST2                            ; 0054667c
    FADD float ptr [EAX + 0x8]          ; 0054667e
    FXCH                                ; 00546681
    FSTP float ptr [EBP + 0x4a]         ; 00546683
    FXCH                                ; 00546686
    FSTP float ptr [EBP + 0x4e]         ; 00546688
    FSTP float ptr [EBP + 0x52]         ; 0054668b
    MOVSD ES:EDI,ESI                    ; 0054668e
    MOVSD ES:EDI,ESI                    ; 0054668f
    MOVSD ES:EDI,ESI                    ; 00546690
    MOV dword ptr [EDX + 0x8],0x0       ; 00546691
    MOV ECX,dword ptr [EDX + 0x8]       ; 00546698
    MOV dword ptr [EDX + 0x4],ECX       ; 0054669b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0054669e
    MOV dword ptr [EDX],ECX             ; 005466a1
    MOV dword ptr [EAX + 0x8],0x0       ; 005466a3
    ADD ESP,0x8                         ; 005466aa
    MOV EDX,dword ptr [EAX + 0x8]       ; 005466ad
    MOV dword ptr [EAX + 0x4],EDX       ; 005466b0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005466b3
    MOV dword ptr [EAX],EDX             ; 005466b6
    LEA EAX,[EBP + 0xe]                 ; 005466b8
    PUSH EAX                            ; 005466bb
    PUSH EBX                            ; 005466bc
    CALL core_charactr.cpp_FUN_0042c230 ; 005466bd
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005466c2
    PUSH EBX                            ; 005466c5
        ;   Label: LAB_005466c5
    CALL core_charactr.cpp_FUN_0042cd30 ; 005466c6
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005466cb
    LEA EAX,[EBX + 0x158]               ; 005466ce
    PUSH EAX                            ; 005466d4
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 005466d5
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005466da
    PUSH dword ptr [EBP + 0x92]         ; 005466dd
    PUSH EBX                            ; 005466e3
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 005466e4
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005466e9
    LEA ESP,[EBP + 0x7a]                ; 005466ec
    POP EBP                             ; 005466ef
    POP EDI                             ; 005466f0
    POP ESI                             ; 005466f1
    POP EBX                             ; 005466f2
    RET                                 ; 005466f3
    PUSH 0x1                            ; 005466f4
        ;   Label: LAB_005466f4
    PUSH 0x1                            ; 005466f6
    MOV EDX,dword ptr [EBP + 0x6e]      ; 005466f8
    PUSH EDX                            ; 005466fb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005466fc
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00546701
    PUSH EBX                            ; 00546704
    PUSH 0x5d1477                       ; 00546705 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x005f1690]      ; 0054670a | g_CConsolePtr
    PUSH ECX                            ; 00546710 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00546711
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x0054656b                      ; 00546716
        ;   XREF to: 0054656b (UNCONDITIONAL_JUMP)  ; LAB_0054656b
    JBE 0x0054652d                      ; 0054671b
        ;   XREF to: 0054652d (CONDITIONAL_JUMP)  ; LAB_0054652d
        ;   Label: LAB_0054671b
    CMP EAX,0x3                         ; 00546721
    JZ 0x005466f4                       ; 00546724
        ;   XREF to: 005466f4 (CONDITIONAL_JUMP)  ; LAB_005466f4
    LEA ESI,[EBX + 0x158]               ; 00546726
        ;   Label: LAB_00546726
    PUSH ESI                            ; 0054672c
    CALL core_motion.cpp_FUN_004fc930   ; 0054672d
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00546732
    ADD ESP,0x4                         ; 00546735
    FLD float ptr [EBP + 0x76]          ; 00546738
    FCOMP double ptr [0x005d14de]       ; 0054673b | DAT_005d14de
    FNSTSW AX                           ; 00546741
    SAHF                                ; 00546743
    JBE 0x0054656e                      ; 00546744
        ;   XREF to: 0054656e (CONDITIONAL_JUMP)  ; LAB_0054656e
    PUSH 0x1                            ; 0054674a
    PUSH 0x0                            ; 0054674c
    PUSH 0x0                            ; 0054674e
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00546750
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00546755
    INC EAX                             ; 00546758
    PUSH EAX                            ; 00546759
    PUSH ESI                            ; 0054675a
    JMP 0x00546566                      ; 0054675b
        ;   XREF to: 00546566 (UNCONDITIONAL_JUMP)  ; LAB_00546566
    LEA EAX,[EBP + 0xffffff06]          ; 00546760
        ;   Label: caseD_3
    PUSH EAX                            ; 00546766
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00546767
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0054676c
    PUSH 0x420c0000                     ; 0054676f
    PUSH 0x41700000                     ; 00546774
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00546779
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0054677e
    MOV dword ptr [EBP + 0xffffff3a],EBX ; 00546781
    MOV dword ptr [EBP + 0xffffff3e],EBX ; 00546787
    ADD ESP,0x8                         ; 0054678d
    FLD float ptr [EBP + 0x76]          ; 00546790
    LEA EAX,[EBP + 0xffffff06]          ; 00546793
    FSTP float ptr [EBP + 0xffffff0a]   ; 00546799
    MOV EDX,dword ptr [EBX + 0xd05c]    ; 0054679f
    PUSH EAX                            ; 005467a5
    LEA EAX,[EDX*0x4 + 0x0]             ; 005467a6
    SUB EAX,EDX                         ; 005467ad
    SHL EAX,0x4                         ; 005467af
    LEA EDX,[EBX + 0xfd8]               ; 005467b2
    ADD EAX,EDX                         ; 005467b8
    PUSH 0x3fd9999a                     ; 005467ba
    PUSH EAX                            ; 005467bf
    LEA ESI,[EBP + -0x5e]               ; 005467c0
    PUSH 0x2cfd900                      ; 005467c3 | DAT_02cfd900
    LEA EDI,[EBP + 0xffffff4e]          ; 005467c8
    MOV dword ptr [EBP + 0x76],EDX      ; 005467ce
    CALL core_xform.cpp_FUN_00583260    ; 005467d1
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 005467d6
    LEA EAX,[EBP + 0xffffff4e]          ; 005467d9
    LEA ESI,[EBP + -0x5e]               ; 005467df
    PUSH EAX                            ; 005467e2
    MOVSD ES:EDI,ESI                    ; 005467e3
    MOVSD ES:EDI,ESI                    ; 005467e4
    MOVSD ES:EDI,ESI                    ; 005467e5
    PUSH EBX                            ; 005467e6
    LEA ESI,[EBP + -0x46]               ; 005467e7
    CALL core_actor.cpp_FUN_00408b80    ; 005467ea
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 005467ef
    LEA EAX,[EBP + 0xffffff42]          ; 005467f2
    PUSH EAX                            ; 005467f8
    LEA EDI,[EBP + 0xffffff42]          ; 005467f9
    LEA ESI,[EBP + -0x46]               ; 005467ff
    PUSH EBX                            ; 00546802
    MOVSD ES:EDI,ESI                    ; 00546803
    MOVSD ES:EDI,ESI                    ; 00546804
    MOVSD ES:EDI,ESI                    ; 00546805
    CALL core_enemy.cpp_FUN_004893f0    ; 00546806
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0054680b
    LEA EAX,[EBP + 0xffffff06]          ; 0054680e
    MOV EDX,dword ptr [EBX + 0xd060]    ; 00546814
    PUSH EAX                            ; 0054681a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054681b
    SUB EAX,EDX                         ; 00546822
    MOV ESI,dword ptr [EBP + 0x76]      ; 00546824
    SHL EAX,0x4                         ; 00546827
    ADD EAX,ESI                         ; 0054682a
    PUSH 0x3fd9999a                     ; 0054682c
    PUSH EAX                            ; 00546831
    PUSH 0x2cfd900                      ; 00546832 | DAT_02cfd900
    LEA ESI,[EBP + -0x22]               ; 00546837
    LEA EDI,[EBP + 0xffffff66]          ; 0054683a
    CALL core_xform.cpp_FUN_00583260    ; 00546840
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00546845
    LEA EAX,[EBP + 0xffffff66]          ; 00546848
    LEA ESI,[EBP + -0x22]               ; 0054684e
    PUSH EAX                            ; 00546851
    MOVSD ES:EDI,ESI                    ; 00546852
    MOVSD ES:EDI,ESI                    ; 00546853
    MOVSD ES:EDI,ESI                    ; 00546854
    PUSH EBX                            ; 00546855
    LEA ESI,[EBP + -0x16]               ; 00546856
    CALL core_actor.cpp_FUN_00408b80    ; 00546859
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0054685e
    LEA EAX,[EBP + -0x2e]               ; 00546861
    PUSH EAX                            ; 00546864
    LEA EDI,[EBP + -0x2e]               ; 00546865
    LEA ESI,[EBP + -0x16]               ; 00546868
    PUSH EBX                            ; 0054686b
    MOVSD ES:EDI,ESI                    ; 0054686c
    MOVSD ES:EDI,ESI                    ; 0054686d
    MOVSD ES:EDI,ESI                    ; 0054686e
    CALL core_enemy.cpp_FUN_004893f0    ; 0054686f
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 00546874
    MOV EDI,dword ptr [EBX + 0xd064]    ; 00546877
    PUSH EDI                            ; 0054687d
    MOV EAX,[0x006045f8]                ; 0054687e | DAT_006045f8
    PUSH EAX                            ; 00546883
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 00546884
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00546889
    TEST EAX,EAX                        ; 0054688c
    JNZ 0x00546586                      ; 0054688e
        ;   XREF to: 00546586 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5d14a1                       ; 00546894 | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00546899
    PUSH EBX                            ; 0054689f
    CALL dword ptr [EAX + 0x2c]         ; 005468a0
    ADD ESP,0x8                         ; 005468a3
    MOV dword ptr [EBX + 0xd064],EAX    ; 005468a6
    JMP 0x00546586                      ; 005468ac
        ;   XREF to: 00546586 (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV ESI,dword ptr [EBX + 0xcdd0]    ; 005468b1
        ;   Label: caseD_7
    TEST ESI,ESI                        ; 005468b7
    JNZ 0x00546586                      ; 005468b9
        ;   XREF to: 00546586 (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0xdc],0x0      ; 005468bf
    JNZ 0x00546586                      ; 005468c6
        ;   XREF to: 00546586 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH ESI                            ; 005468cc
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005468cd
    PUSH EAX                            ; 005468d0
    LEA ESI,[EBP + 0x32]                ; 005468d1
    LEA EDI,[EBP + 0x26]                ; 005468d4
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 005468d7
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 005468dc
    LEA EAX,[EBP + 0x26]                ; 005468df
    LEA ESI,[EBP + 0x32]                ; 005468e2
    PUSH EAX                            ; 005468e5
    MOVSD ES:EDI,ESI                    ; 005468e6
    MOVSD ES:EDI,ESI                    ; 005468e7
    MOVSD ES:EDI,ESI                    ; 005468e8
    PUSH EBX                            ; 005468e9
    LEA ESI,[EBP + 0xffffff7e]          ; 005468ea
    CALL core_actor.cpp_FUN_00408b80    ; 005468f0
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 005468f5
    PUSH 0x0                            ; 005468f8
    LEA EAX,[EBP + 0x2]                 ; 005468fa
    LEA EDI,[EBP + 0x2]                 ; 005468fd
    PUSH EAX                            ; 00546900
    MOV EDX,dword ptr [0x005fed24]      ; 00546901 | g_CGorePtr
    LEA ESI,[EBP + 0xffffff7e]          ; 00546907
    PUSH EDX                            ; 0054690d
    MOVSD ES:EDI,ESI                    ; 0054690e
    MOVSD ES:EDI,ESI                    ; 0054690f
    MOVSD ES:EDI,ESI                    ; 00546910
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 00546911
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00546916
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 00546919
    JMP 0x00546586                      ; 00546923
        ;   XREF to: 00546586 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 00546928
        ;   Label: caseD_1
    PUSH EBX                            ; 0054692e
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 0054692f
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00546934
    TEST EAX,EAX                        ; 00546937
    JZ 0x0054697c                       ; 00546939
        ;   XREF to: 0054697c (CONDITIONAL_JUMP)  ; LAB_0054697c
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0054693b
    PUSH EDI                            ; 0054693e
    CALL core_motion.cpp_FUN_004fc930   ; 0054693f
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00546944
    ADD ESP,0x4                         ; 00546947
    FLD float ptr [EBP + 0x76]          ; 0054694a
    FCOMP double ptr [0x005d14de]       ; 0054694d | DAT_005d14de
    FNSTSW AX                           ; 00546953
    SAHF                                ; 00546955
    JBE 0x00546586                      ; 00546956
        ;   XREF to: 00546586 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0054695c
    PUSH 0x0                            ; 0054695e
    PUSH 0x0                            ; 00546960
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00546962
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00546967
    ADD EAX,0x2                         ; 0054696a
    PUSH EAX                            ; 0054696d
    PUSH EDI                            ; 0054696e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0054696f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00546974
    JMP 0x00546586                      ; 00546977
        ;   XREF to: 00546586 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 0054697c
        ;   Label: LAB_0054697c
    MOV EAX,dword ptr [EBX + 0x154]     ; 00546982
    PUSH EBX                            ; 00546988
    CALL dword ptr [EAX + 0x144]        ; 00546989
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0054698f
    ADD ESP,0x8                         ; 00546995
    TEST ESI,ESI                        ; 00546998
    JZ 0x00546586                       ; 0054699a
        ;   XREF to: 00546586 (CONDITIONAL_JUMP)  ; caseD_6
    MOV EAX,ESI                         ; 005469a0
    LEA EDI,[EBP + 0xffffff5a]          ; 005469a2
    LEA EDX,[EBX + 0x20]                ; 005469a8
    FLD float ptr [EAX + 0x20]          ; 005469ab
    FLD float ptr [EAX + 0x24]          ; 005469ae
    FLD float ptr [EAX + 0x28]          ; 005469b1
    LEA ESI,[EBP + -0xa]                ; 005469b4
    FXCH ST2                            ; 005469b7
    FSUB float ptr [EDX]                ; 005469b9
    FXCH                                ; 005469bb
    FSUB float ptr [EDX + 0x4]          ; 005469bd
    FXCH ST2                            ; 005469c0
    FSUB float ptr [EDX + 0x8]          ; 005469c2
    FXCH                                ; 005469c5
    FSTP float ptr [EBP + -0xa]         ; 005469c7
    FXCH                                ; 005469ca
    FSTP float ptr [EBP + -0x6]         ; 005469cc
    FSTP float ptr [EBP + -0x2]         ; 005469cf
    MOVSD ES:EDI,ESI                    ; 005469d2
    MOVSD ES:EDI,ESI                    ; 005469d3
    MOVSD ES:EDI,ESI                    ; 005469d4
    FLD float ptr [EBP + 0xffffff5e]    ; 005469d5
    FMUL ST0                            ; 005469db
    FLD float ptr [EBP + 0xffffff5a]    ; 005469dd
    FMUL ST0                            ; 005469e3
    FADDP                               ; 005469e5
    FLD float ptr [EBP + 0xffffff62]    ; 005469e7
    FMUL ST0                            ; 005469ed
    FADDP                               ; 005469ef
    FSTP float ptr [EBP + 0x56]         ; 005469f1
    MOV EAX,dword ptr [EBP + 0x56]      ; 005469f4
    MOV EDI,dword ptr [0x01d1a0a4]      ; 005469f7 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 005469fd
    ADD EAX,EDI                         ; 005469ff
    MOV dword ptr [EBP + 0x5a],EAX      ; 00546a01
    FLD float ptr [EBP + 0x5a]          ; 00546a04
    FCOMP float ptr [0x005e4358]        ; 00546a07 | DAT_005e4358
    FNSTSW AX                           ; 00546a0d
    SAHF                                ; 00546a0f
    JC 0x00546a6b                       ; 00546a10
        ;   XREF to: 00546a6b (CONDITIONAL_JUMP)  ; LAB_00546a6b
    PUSH 0x1                            ; 00546a12
    PUSH 0x0                            ; 00546a14
    PUSH 0x0                            ; 00546a16
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00546a18
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00546a1d
    ADD EAX,0x2                         ; 00546a20
    PUSH EAX                            ; 00546a23
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00546a24
    PUSH EAX                            ; 00546a27
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00546a28
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00546a28
    ADD ESP,0xc                         ; 00546a2d
    MOV ECX,dword ptr [EBX + 0xd064]    ; 00546a30
    PUSH ECX                            ; 00546a36
    MOV ESI,dword ptr [0x006045f8]      ; 00546a37 | DAT_006045f8
    PUSH ESI                            ; 00546a3d
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 00546a3e
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00546a43
    TEST EAX,EAX                        ; 00546a46
    JNZ 0x00546586                      ; 00546a48
        ;   XREF to: 00546586 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5d14aa                       ; 00546a4e | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00546a53
    PUSH EBX                            ; 00546a59
    CALL dword ptr [EAX + 0x2c]         ; 00546a5a
    ADD ESP,0x8                         ; 00546a5d
    MOV dword ptr [EBX + 0xd064],EAX    ; 00546a60
    JMP 0x00546586                      ; 00546a66
        ;   XREF to: 00546586 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00546a6b
        ;   Label: LAB_00546a6b
    PUSH 0x0                            ; 00546a6d
    PUSH 0x0                            ; 00546a6f
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00546a71
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00546a76
    ADD EAX,0x2                         ; 00546a79
    PUSH EAX                            ; 00546a7c
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00546a7d
    PUSH EDX                            ; 00546a80
    JMP 0x00546a28                      ; 00546a81
        ;   XREF to: 00546a28 (UNCONDITIONAL_JUMP)  ; LAB_00546a28
    PUSH dword ptr [EBP + 0x92]         ; 00546a83
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x154]     ; 00546a89
    PUSH EBX                            ; 00546a8f
    CALL dword ptr [EAX + 0x144]        ; 00546a90
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00546a96
    ADD ESP,0x8                         ; 00546a9c
    TEST EDX,EDX                        ; 00546a9f
    JZ 0x00546c5a                       ; 00546aa1
        ;   XREF to: 00546c5a (CONDITIONAL_JUMP)  ; LAB_00546c5a
    MOV EAX,EDX                         ; 00546aa7
    LEA EDX,[EBX + 0x20]                ; 00546aa9
    LEA EDI,[EBP + -0x76]               ; 00546aac
    LEA ESI,[EBP + 0xffffff72]          ; 00546aaf
    FLD float ptr [EDX]                 ; 00546ab5
    FLD float ptr [EDX + 0x4]           ; 00546ab7
    FLD float ptr [EDX + 0x8]           ; 00546aba
    FXCH ST2                            ; 00546abd
    FSUB float ptr [EAX + 0x20]         ; 00546abf
    FXCH                                ; 00546ac2
    FSUB float ptr [EAX + 0x24]         ; 00546ac4
    FXCH ST2                            ; 00546ac7
    FSUB float ptr [EAX + 0x28]         ; 00546ac9
    FXCH                                ; 00546acc
    FSTP float ptr [EBP + 0xffffff72]   ; 00546ace
    FXCH                                ; 00546ad4
    FSTP float ptr [EBP + 0xffffff76]   ; 00546ad6
    FSTP float ptr [EBP + 0xffffff7a]   ; 00546adc
    MOVSD ES:EDI,ESI                    ; 00546ae2
    MOVSD ES:EDI,ESI                    ; 00546ae3
    MOVSD ES:EDI,ESI                    ; 00546ae4
    FLD float ptr [EBP + -0x72]         ; 00546ae5
    FMUL ST0                            ; 00546ae8
    FLD float ptr [EBP + -0x76]         ; 00546aea
    FMUL ST0                            ; 00546aed
    FADDP                               ; 00546aef
    FLD float ptr [EBP + -0x6e]         ; 00546af1
    FMUL ST0                            ; 00546af4
    FADDP                               ; 00546af6
    FSQRT                               ; 00546af8
    FSTP float ptr [EBP + 0x62]         ; 00546afa
    MOV EAX,dword ptr [EBP + 0x62]      ; 00546afd
    FLD float ptr [EBP + 0x62]          ; 00546b00
    MOV dword ptr [EBP + 0x6a],EAX      ; 00546b03
    FCOMP float ptr [0x005e4358]        ; 00546b06 | DAT_005e4358
    FNSTSW AX                           ; 00546b0c
    SAHF                                ; 00546b0e
    JBE 0x00546b67                      ; 00546b0f
        ;   XREF to: 00546b67 (CONDITIONAL_JUMP)  ; LAB_00546b67
    CMP dword ptr [EBP + 0x66],0x2      ; 00546b11
    JNZ 0x00546b67                      ; 00546b15
        ;   XREF to: 00546b67 (CONDITIONAL_JUMP)  ; LAB_00546b67
    FLD float ptr [EBX + 0xcde0]        ; 00546b17
    FCOMP double ptr [0x005d14d6]       ; 00546b1d | DAT_005d14d6
    FNSTSW AX                           ; 00546b23
    SAHF                                ; 00546b25
    JBE 0x00546cd0                      ; 00546b26
        ;   XREF to: 00546cd0 (CONDITIONAL_JUMP)  ; LAB_00546cd0
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00546b2c
    PUSH EAX                            ; 00546b2f
    CALL core_motion.cpp_FUN_004fc930   ; 00546b30
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00546b35
    ADD ESP,0x4                         ; 00546b38
    FLD float ptr [EBP + 0x76]          ; 00546b3b
    FCOMP double ptr [0x005d14de]       ; 00546b3e | DAT_005d14de
    FNSTSW AX                           ; 00546b44
    SAHF                                ; 00546b46
    JBE 0x00546b67                      ; 00546b47
        ;   XREF to: 00546b67 (CONDITIONAL_JUMP)  ; LAB_00546b67
    PUSH 0x1                            ; 00546b49
    PUSH 0x0                            ; 00546b4b
    PUSH 0x0                            ; 00546b4d
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00546b4f
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00546b54
    ADD EAX,0x2                         ; 00546b57
    PUSH EAX                            ; 00546b5a
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00546b5b
    PUSH EDX                            ; 00546b5e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00546b5f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00546b5f
    ADD ESP,0xc                         ; 00546b64
    FLD float ptr [EBP + 0x6a]          ; 00546b67
        ;   Label: LAB_00546b67
    FCOMP float ptr [0x005d14e6]        ; 00546b6a | DAT_005d14e6
    FNSTSW AX                           ; 00546b70
    SAHF                                ; 00546b72
    JBE 0x00546bb1                      ; 00546b73
        ;   XREF to: 00546bb1 (CONDITIONAL_JUMP)  ; LAB_00546bb1
    FLD float ptr [EBP + 0x6a]          ; 00546b75
    FCOMP float ptr [0x005d14ea]        ; 00546b78 | DAT_005d14ea
    FNSTSW AX                           ; 00546b7e
    SAHF                                ; 00546b80
    JNC 0x00546bb1                      ; 00546b81
        ;   XREF to: 00546bb1 (CONDITIONAL_JUMP)  ; LAB_00546bb1
    PUSH 0xa                            ; 00546b83
    PUSH 0x0                            ; 00546b85
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00546b87
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00546b8c
    CMP EAX,0x5                         ; 00546b8f
    JNZ 0x00546bb1                      ; 00546b92
        ;   XREF to: 00546bb1 (CONDITIONAL_JUMP)  ; LAB_00546bb1
    PUSH 0x1                            ; 00546b94
    PUSH 0x3                            ; 00546b96
    LEA EAX,[EBX + 0x158]               ; 00546b98
    PUSH EAX                            ; 00546b9e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00546b9f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00546ba4
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 00546ba7
    MOV EAX,[0x005e434c]                ; 00546bb1 | DAT_005e434c
        ;   Label: LAB_00546bb1
    PUSH 0x3e32b8c2                     ; 00546bb6
    MOV dword ptr [EBP + 0x72],EAX      ; 00546bbb
    LEA EAX,[EBX + 0x249c]              ; 00546bbe
    PUSH 0x3f000000                     ; 00546bc4
    MOV dword ptr [EAX + 0x8],0x0       ; 00546bc9
    XOR ECX,ECX                         ; 00546bd0
    MOV EDX,dword ptr [EAX + 0x8]       ; 00546bd2
    MOV dword ptr [EAX + 0x4],EDX       ; 00546bd5
    MOV EDX,dword ptr [EAX + 0x4]       ; 00546bd8
    MOV dword ptr [EAX],EDX             ; 00546bdb
    MOV EAX,dword ptr [EBP + 0x72]      ; 00546bdd
    MOV dword ptr [EBP + 0x1a],ECX      ; 00546be0
    MOV dword ptr [EBP + 0x22],EAX      ; 00546be3
    LEA EAX,[EBP + 0x1a]                ; 00546be6
    MOV dword ptr [EBP + 0x1e],ECX      ; 00546be9
    PUSH EAX                            ; 00546bec
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00546bed
    PUSH EAX                            ; 00546bf3
    MOV EDX,dword ptr [EAX + 0x154]     ; 00546bf4
    CALL dword ptr [EDX + 0xc4]         ; 00546bfa
    ADD ESP,0x4                         ; 00546c00
    PUSH EAX                            ; 00546c03
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00546c04
    ADD EAX,0x20                        ; 00546c0a
    PUSH EAX                            ; 00546c0d
    PUSH EBX                            ; 00546c0e
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00546c0f
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00546c14
    LEA ESI,[EBX + 0x158]               ; 00546c17
    TEST EAX,EAX                        ; 00546c1d
    JL 0x00546d09                       ; 00546c1f
        ;   XREF to: 00546d09 (CONDITIONAL_JUMP)  ; LAB_00546d09
    JLE 0x00546586                      ; 00546c25
        ;   XREF to: 00546586 (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBX + 0xcde0]        ; 00546c2b
    FLDZ                                ; 00546c31
    FCOMPP                              ; 00546c33
    FNSTSW AX                           ; 00546c35
    SAHF                                ; 00546c37
    JC 0x00546586                       ; 00546c38
        ;   XREF to: 00546586 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00546c3e
    PUSH 0x3                            ; 00546c40
    PUSH ESI                            ; 00546c42
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00546c43
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00546c48
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 00546c4b
    JMP 0x00546586                      ; 00546c55
        ;   XREF to: 00546586 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 00546c5a
        ;   Label: LAB_00546c5a
    PUSH EBX                            ; 00546c60
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 00546c61
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00546c66
    TEST EAX,EAX                        ; 00546c69
    JZ 0x00546cb1                       ; 00546c6b
        ;   XREF to: 00546cb1 (CONDITIONAL_JUMP)  ; LAB_00546cb1
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00546c6d
    PUSH EDX                            ; 00546c70
    CALL core_motion.cpp_FUN_004fc930   ; 00546c71
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00546c76
    ADD ESP,0x4                         ; 00546c79
    FLD float ptr [EBP + 0x76]          ; 00546c7c
    FCOMP double ptr [0x005d14de]       ; 00546c7f | DAT_005d14de
    FNSTSW AX                           ; 00546c85
    SAHF                                ; 00546c87
    JBE 0x00546586                      ; 00546c88
        ;   XREF to: 00546586 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00546c8e
    PUSH 0x0                            ; 00546c90
    PUSH 0x0                            ; 00546c92
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00546c94
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00546c99
    ADD EAX,0x2                         ; 00546c9c
    PUSH EAX                            ; 00546c9f
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00546ca0
    PUSH ECX                            ; 00546ca3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00546ca4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00546ca9
    JMP 0x00546586                      ; 00546cac
        ;   XREF to: 00546586 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00546cb1
        ;   Label: LAB_00546cb1
    PUSH EAX                            ; 00546cb3
    PUSH EAX                            ; 00546cb4
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00546cb5
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00546cba
    INC EAX                             ; 00546cbd
    PUSH EAX                            ; 00546cbe
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00546cbf
    PUSH EAX                            ; 00546cc2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00546cc3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00546cc8
    JMP 0x00546586                      ; 00546ccb
        ;   XREF to: 00546586 (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV ESI,dword ptr [EBP + 0x6e]      ; 00546cd0
        ;   Label: LAB_00546cd0
    PUSH ESI                            ; 00546cd3
    CALL core_motion.cpp_FUN_004fc930   ; 00546cd4
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00546cd9
    ADD ESP,0x4                         ; 00546cdc
    FLD float ptr [EBP + 0x76]          ; 00546cdf
    FCOMP double ptr [0x005d14de]       ; 00546ce2 | DAT_005d14de
    FNSTSW AX                           ; 00546ce8
    SAHF                                ; 00546cea
    JBE 0x00546b67                      ; 00546ceb
        ;   XREF to: 00546b67 (CONDITIONAL_JUMP)  ; LAB_00546b67
    PUSH 0x1                            ; 00546cf1
    PUSH 0x0                            ; 00546cf3
    PUSH 0x0                            ; 00546cf5
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00546cf7
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00546cfc
    ADD EAX,0x2                         ; 00546cff
    PUSH EAX                            ; 00546d02
    PUSH ESI                            ; 00546d03
    JMP 0x00546b5f                      ; 00546d04
        ;   XREF to: 00546b5f (UNCONDITIONAL_JUMP)  ; LAB_00546b5f
    PUSH EBX                            ; 00546d09
        ;   Label: LAB_00546d09
    PUSH 0x5d14b3                       ; 00546d0a | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00546d0f | g_CConsolePtr
    PUSH EDI                            ; 00546d15 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00546d16
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00546d1b
    PUSH 0x1                            ; 00546d1e
    PUSH 0x1                            ; 00546d20
    PUSH ESI                            ; 00546d22
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00546d23
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00546d28
    JMP 0x00546586                      ; 00546d2b
        ;   XREF to: 00546586 (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV EAX,dword ptr [EBP + 0x66]      ; 00546d30
        ;   Label: LAB_00546d30
    DEC EAX                             ; 00546d33
    CMP EAX,0x6                         ; 00546d34
    JA 0x00546586                       ; 00546d37
        ;   XREF to: 00546586 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x5463e4]  ; 00546d3d | caseD_1 | caseD_2 | caseD_4
        ;   Label: switchD

