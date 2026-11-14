; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moocow_cpp_CMooCow_process_FUN_00521480(CMooCow *this_ptr,float delta_time)
;
; Parameters:
; CMooCow *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0052145c = 0052172c
;   TerminatedCString s_s_confused_while_walking_005ea37e
;   TerminatedCString s_cow_wav_005ea3a8
;   undefined4 DAT_005ea3b2
;   undefined4 DAT_005ea3ba
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_006236b8
;   CConsole g_CConsoleInstance
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
;   core_charactr.cpp_FUN_00435320
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_motion.cpp_FUN_00525020
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521480
        ;   Label: core_moocow.cpp_CMooCow_process_FUN_00521480
    PUSH ESI                            ; 00521481
    PUSH EDI                            ; 00521482
    PUSH EBP                            ; 00521483
    MOV EBP,ESP                         ; 00521484
    SUB ESP,0x50                        ; 00521486
    AND ESP,0xfffffff8                  ; 00521489
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052148c
    PUSH dword ptr [EBP + 0x18]         ; 0052148f
    PUSH EBX                            ; 00521492
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 00521493
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00521498
    TEST EAX,EAX                        ; 0052149b
    JNZ 0x005214a6                      ; 0052149d
        ;   XREF to: 005214a6 (CONDITIONAL_JUMP)  ; LAB_005214a6
    MOV ESP,EBP                         ; 0052149f
    POP EBP                             ; 005214a1
    POP EDI                             ; 005214a2
    POP ESI                             ; 005214a3
    POP EBX                             ; 005214a4
    RET                                 ; 005214a5
    PUSH 0x0                            ; 005214a6
        ;   Label: LAB_005214a6
    PUSH dword ptr [EBP + 0x18]         ; 005214a8
    PUSH EBX                            ; 005214ab
    CALL core_charactr.cpp_FUN_00432f10 ; 005214ac
        ;   XREF to: 00432f10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432f10()
    LEA EAX,[EBX + 0x249c]              ; 005214b1
    MOV dword ptr [EAX + 0x8],0x0       ; 005214b7
    ADD ESP,0xc                         ; 005214be
    MOV EDX,dword ptr [EAX + 0x8]       ; 005214c1
    MOV dword ptr [EAX + 0x4],EDX       ; 005214c4
    MOV EDX,dword ptr [EAX + 0x4]       ; 005214c7
    MOV dword ptr [EAX],EDX             ; 005214ca
    MOV EAX,dword ptr [EBP + 0x18]      ; 005214cc
    LEA ESI,[EBX + 0x158]               ; 005214cf
    MOV dword ptr [ESP],EAX             ; 005214d5
    FLD float ptr [ESP]                 ; 005214d8
        ;   Label: LAB_005214d8
    FLDZ                                ; 005214db
    FCOMPP                              ; 005214dd
    FNSTSW AX                           ; 005214df
    SAHF                                ; 005214e1
    JNC 0x005214fc                      ; 005214e2
        ;   XREF to: 005214fc (CONDITIONAL_JUMP)  ; LAB_005214fc
    MOV EAX,ESP                         ; 005214e4
    PUSH EAX                            ; 005214e6
    PUSH ESI                            ; 005214e7
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 005214e8
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005214ed
    PUSH EAX                            ; 005214f0
    PUSH EBX                            ; 005214f1
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 005214f2
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005214f7
    JMP 0x005214d8                      ; 005214fa
        ;   XREF to: 005214d8 (UNCONDITIONAL_JUMP)  ; LAB_005214d8
    PUSH dword ptr [EBP + 0x18]         ; 005214fc
        ;   Label: LAB_005214fc
    FLD float ptr [EBX + 0x24a4]        ; 005214ff
    PUSH EBX                            ; 00521505
    FSTP float ptr [EBX + 0x2524]       ; 00521506
    CALL core_charactr.cpp_FUN_00435320 ; 0052150c
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 00521511
    PUSH ESI                            ; 00521514
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00521515
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052151a
    PUSH dword ptr [EBP + 0x18]         ; 0052151d
    PUSH EBX                            ; 00521520
    MOV EDI,dword ptr [EAX + 0x24]      ; 00521521
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 00521524
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00521529
    TEST EAX,EAX                        ; 0052152c
    JZ 0x005217ba                       ; 0052152e
        ;   XREF to: 005217ba (CONDITIONAL_JUMP)  ; LAB_005217ba
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00521534
    CMP EAX,0x2                         ; 0052153a
    JNC 0x005216e6                      ; 0052153d
        ;   XREF to: 005216e6 (CONDITIONAL_JUMP)  ; LAB_005216e6
    CMP EAX,0x1                         ; 00521543
    JNZ 0x005216f1                      ; 00521546
        ;   XREF to: 005216f1 (CONDITIONAL_JUMP)  ; LAB_005216f1
    PUSH 0x1                            ; 0052154c
        ;   Label: LAB_0052154c
    PUSH 0x5                            ; 0052154e
    LEA EAX,[EBX + 0x158]               ; 00521550
    PUSH EAX                            ; 00521556
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00521557
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00521557
    ADD ESP,0xc                         ; 0052155c
        ;   Label: LAB_0052155c
    LEA EAX,[EBX + 0x249c]              ; 0052155f
        ;   Label: LAB_0052155f
    MOV dword ptr [EAX + 0x8],0x0       ; 00521565
    MOV EDX,dword ptr [EAX + 0x8]       ; 0052156c
    MOV dword ptr [EAX + 0x4],EDX       ; 0052156f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00521572
    MOV dword ptr [EAX],EDX             ; 00521575
    PUSH EBX                            ; 00521577
        ;   Label: caseD_5
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 00521578
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0052157d
    TEST EAX,EAX                        ; 00521580
    JZ 0x0052166c                       ; 00521582
        ;   XREF to: 0052166c (CONDITIONAL_JUMP)  ; LAB_0052166c
    PUSH dword ptr [EBP + 0x18]         ; 00521588
    PUSH EBX                            ; 0052158b
    LEA ESI,[EBX + 0x2518]              ; 0052158c
    CALL core_charactr.cpp_FUN_0042d700 ; 00521592
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    ADD ESP,0x8                         ; 00521597
    FLD float ptr [ESI]                 ; 0052159a
    FMUL float ptr [EBP + 0x18]         ; 0052159c
    FLD float ptr [ESI + 0x4]           ; 0052159f
    FMUL float ptr [EBP + 0x18]         ; 005215a2
    FLD float ptr [ESI + 0x8]           ; 005215a5
    FMUL float ptr [EBP + 0x18]         ; 005215a8
    LEA EDI,[ESP + 0x4]                 ; 005215ab
    LEA ESI,[ESP + 0x1c]                ; 005215af
    FXCH ST2                            ; 005215b3
    FSTP float ptr [ESP + 0x1c]         ; 005215b5
    FSTP float ptr [ESP + 0x20]         ; 005215b9
    FSTP float ptr [ESP + 0x24]         ; 005215bd
    MOVSD ES:EDI,ESI                    ; 005215c1
    MOVSD ES:EDI,ESI                    ; 005215c2
    MOVSD ES:EDI,ESI                    ; 005215c3
    LEA EDX,[EBX + 0x250c]              ; 005215c4
    FLD float ptr [ESP + 0x4]           ; 005215ca
    FLD float ptr [ESP + 0x8]           ; 005215ce
    FLD float ptr [ESP + 0xc]           ; 005215d2
    LEA EDI,[ESP + 0x10]                ; 005215d6
    LEA ESI,[ESP + 0x28]                ; 005215da
    FXCH ST2                            ; 005215de
    FADD float ptr [EDX]                ; 005215e0
    FXCH                                ; 005215e2
    FADD float ptr [EDX + 0x4]          ; 005215e4
    FXCH ST2                            ; 005215e7
    FADD float ptr [EDX + 0x8]          ; 005215e9
    FXCH                                ; 005215ec
    FSTP float ptr [ESP + 0x28]         ; 005215ee
    FXCH                                ; 005215f2
    FSTP float ptr [ESP + 0x2c]         ; 005215f4
    FSTP float ptr [ESP + 0x30]         ; 005215f8
    MOVSD ES:EDI,ESI                    ; 005215fc
    MOVSD ES:EDI,ESI                    ; 005215fd
    MOVSD ES:EDI,ESI                    ; 005215fe
    LEA EAX,[EBX + 0x249c]              ; 005215ff
    FLD float ptr [ESP + 0x10]          ; 00521605
    FLD float ptr [ESP + 0x14]          ; 00521609
    FLD float ptr [ESP + 0x18]          ; 0052160d
    LEA EDI,[ESP + 0x34]                ; 00521611
    LEA ESI,[ESP + 0x40]                ; 00521615
    FXCH ST2                            ; 00521619
    FADD float ptr [EAX]                ; 0052161b
    FXCH                                ; 0052161d
    FADD float ptr [EAX + 0x4]          ; 0052161f
    FXCH ST2                            ; 00521622
    FADD float ptr [EAX + 0x8]          ; 00521624
    FXCH                                ; 00521627
    FSTP float ptr [ESP + 0x40]         ; 00521629
    FXCH                                ; 0052162d
    FSTP float ptr [ESP + 0x44]         ; 0052162f
    FSTP float ptr [ESP + 0x48]         ; 00521633
    MOVSD ES:EDI,ESI                    ; 00521637
    MOVSD ES:EDI,ESI                    ; 00521638
    MOVSD ES:EDI,ESI                    ; 00521639
    MOV dword ptr [EDX + 0x8],0x0       ; 0052163a
    MOV ECX,dword ptr [EDX + 0x8]       ; 00521641
    MOV dword ptr [EDX + 0x4],ECX       ; 00521644
    MOV ECX,dword ptr [EDX + 0x4]       ; 00521647
    MOV dword ptr [EDX],ECX             ; 0052164a
    MOV dword ptr [EAX + 0x8],0x0       ; 0052164c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00521653
    MOV dword ptr [EAX + 0x4],EDX       ; 00521656
    MOV EDX,dword ptr [EAX + 0x4]       ; 00521659
    MOV dword ptr [EAX],EDX             ; 0052165c
    LEA EAX,[ESP + 0x34]                ; 0052165e
    PUSH EAX                            ; 00521662
    PUSH EBX                            ; 00521663
    CALL core_charactr.cpp_FUN_0042d750 ; 00521664
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00521669
    PUSH EBX                            ; 0052166c
        ;   Label: LAB_0052166c
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 0052166d
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00521672
    LEA EAX,[EBX + 0x158]               ; 00521675
    PUSH EAX                            ; 0052167b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 0052167c
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00521681
    PUSH dword ptr [EBP + 0x18]         ; 00521684
    PUSH EBX                            ; 00521687
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 00521688
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0052168d
    MOV ESP,EBP                         ; 00521690
    POP EBP                             ; 00521692
    POP EDI                             ; 00521693
    POP ESI                             ; 00521694
    POP EBX                             ; 00521695
    RET                                 ; 00521696
    PUSH ESI                            ; 00521697
        ;   Label: LAB_00521697
    CALL core_motion.cpp_FUN_00525020   ; 00521698
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x50],EAX      ; 0052169d
    FLD float ptr [ESP + 0x50]          ; 005216a1
    ADD ESP,0x4                         ; 005216a5
    FCOMP double ptr [0x005ea3ba]       ; 005216a8 | DAT_005ea3ba
    FNSTSW AX                           ; 005216ae
    SAHF                                ; 005216b0
    JBE 0x0052155f                      ; 005216b1
        ;   XREF to: 0052155f (CONDITIONAL_JUMP)  ; LAB_0052155f
    PUSH 0x1                            ; 005216b7
    PUSH 0x4                            ; 005216b9
    PUSH 0x0                            ; 005216bb
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005216bd
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005216c2
    PUSH EAX                            ; 005216c5
    PUSH ESI                            ; 005216c6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005216c7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005216cc
    PUSH EBX                            ; 005216cf
    PUSH 0x5ea37e                       ; 005216d0 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 005216d5 | g_CConsolePtr
    PUSH ESI                            ; 005216db | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 005216dc
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x0052155c                      ; 005216e1
        ;   XREF to: 0052155c (UNCONDITIONAL_JUMP)  ; LAB_0052155c
    JBE 0x0052154c                      ; 005216e6
        ;   XREF to: 0052154c (CONDITIONAL_JUMP)  ; LAB_0052154c
        ;   Label: LAB_005216e6
    CMP EAX,0x3                         ; 005216ec
    JZ 0x00521697                       ; 005216ef
        ;   XREF to: 00521697 (CONDITIONAL_JUMP)  ; LAB_00521697
    LEA ESI,[EBX + 0x158]               ; 005216f1
        ;   Label: LAB_005216f1
    PUSH ESI                            ; 005216f7
    CALL core_motion.cpp_FUN_00525020   ; 005216f8
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x50],EAX      ; 005216fd
    FLD float ptr [ESP + 0x50]          ; 00521701
    ADD ESP,0x4                         ; 00521705
    FCOMP double ptr [0x005ea3ba]       ; 00521708 | DAT_005ea3ba
    FNSTSW AX                           ; 0052170e
    SAHF                                ; 00521710
    JBE 0x0052155f                      ; 00521711
        ;   XREF to: 0052155f (CONDITIONAL_JUMP)  ; LAB_0052155f
    PUSH 0x1                            ; 00521717
    PUSH 0x4                            ; 00521719
    PUSH 0x0                            ; 0052171b
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0052171d
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00521722
    PUSH EAX                            ; 00521725
    PUSH ESI                            ; 00521726
    JMP 0x00521557                      ; 00521727
        ;   XREF to: 00521557 (UNCONDITIONAL_JUMP)  ; LAB_00521557
    LEA ESI,[EBX + 0x158]               ; 0052172c
        ;   Label: caseD_0
    PUSH ESI                            ; 00521732
    CALL core_motion.cpp_FUN_00525020   ; 00521733
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x50],EAX      ; 00521738
    FLD float ptr [ESP + 0x50]          ; 0052173c
    ADD ESP,0x4                         ; 00521740
    FCOMP double ptr [0x005ea3b2]       ; 00521743 | DAT_005ea3b2
    FNSTSW AX                           ; 00521749
    SAHF                                ; 0052174b
    JBE 0x00521577                      ; 0052174c
        ;   XREF to: 00521577 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 00521752
    PUSH 0x4                            ; 00521754
    PUSH 0x0                            ; 00521756
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00521758
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0052175d
    PUSH EAX                            ; 00521760
    PUSH ESI                            ; 00521761
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00521762
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00521767
    PUSH 0x5                            ; 0052176a
    PUSH 0x0                            ; 0052176c
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0052176e
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00521773
    CMP EAX,0x5                         ; 00521776
    JNZ 0x00521577                      ; 00521779
        ;   XREF to: 00521577 (CONDITIONAL_JUMP)  ; caseD_5
    MOV EDX,dword ptr [EBX + 0xc1d8]    ; 0052177f
    PUSH EDX                            ; 00521785
    MOV ECX,dword ptr [0x006236b8]      ; 00521786 | DAT_006236b8
    PUSH ECX                            ; 0052178c
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 0052178d
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00521792
    TEST EAX,EAX                        ; 00521795
    JNZ 0x00521577                      ; 00521797
        ;   XREF to: 00521577 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x5ea3a8                       ; 0052179d | = "cow?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005217a2
    PUSH EBX                            ; 005217a8
    CALL dword ptr [EAX + 0x2c]         ; 005217a9
    ADD ESP,0x8                         ; 005217ac
    MOV dword ptr [EBX + 0xc1d8],EAX    ; 005217af
    JMP 0x00521577                      ; 005217b5
        ;   XREF to: 00521577 (UNCONDITIONAL_JUMP)  ; caseD_5
    CMP EDI,0x5                         ; 005217ba
        ;   Label: LAB_005217ba
    JA 0x00521577                       ; 005217bd
        ;   XREF to: 00521577 (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EDI*0x4 + 0x52145c]  ; 005217c3 | caseD_4 | caseD_5 | switchdataD_0052145c
        ;   Label: switchD

