; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_succubus_cpp_CSuccubus_process_FUN_0056f6d0(CSuccubus *this_ptr,float delta_time)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 s_s_confused_while_walking_005ec0e1+1
;   TerminatedCString s_succubus_morph_wav_005ec10c
;   TerminatedCString s_hdwing_cth_005ec11f
;   undefined4 s_hdwing_cth_005ec11f+1
;   undefined4 s_hdwing_cth_005ec11f+2
;   undefined4 s_hdwing_cth_005ec11f+3
;   TerminatedCString s_succubusShutUp_005ec12a
;   TerminatedCString s_succubus_horny_wav_005ec139
;   undefined4 DAT_005fc3c8
;   undefined4 DAT_005fc3d4
;   undefined4 DAT_005fc3d8
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_006141f0
;   undefined4 DAT_00618170
;   CConsole g_CConsoleInstance
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00424430
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_0042b2a0
;   core_cloth.cpp_CClothList_process_FUN_005b1780
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_hotdemon.cpp_CHotDemon_ctor_FUN_004d37f0
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f6d0
        ;   Label: core_succubus.cpp_CSuccubus_process_FUN_0056f6d0
    PUSH ESI                            ; 0056f6d1
    PUSH EDI                            ; 0056f6d2
    PUSH EBP                            ; 0056f6d3
    MOV EBP,ESP                         ; 0056f6d4
    SUB ESP,0x9c                        ; 0056f6d6
    SUB EBP,0x7a                        ; 0056f6dc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0056f6df
    PUSH dword ptr [EBP + 0x92]         ; 0056f6e5
    PUSH EBX                            ; 0056f6eb
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 0056f6ec
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0056f6f1
    TEST EAX,EAX                        ; 0056f6f4
    JZ 0x0056fb68                       ; 0056f6f6
        ;   XREF to: 0056fb68 (CONDITIONAL_JUMP)  ; LAB_0056fb68
    LEA EAX,[EBX + 0x2508]              ; 0056f6fc
    MOV dword ptr [EAX + 0x8],0x0       ; 0056f702
    FLD float ptr [EBP + 0x92]          ; 0056f709
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056f70f
    MOV dword ptr [EAX + 0x4],EDX       ; 0056f712
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056f715
    MOV dword ptr [EAX],EDX             ; 0056f718
    FMUL float ptr [EBX + 0x10a60]      ; 0056f71a
    LEA ESI,[EBX + 0x2b4]               ; 0056f720
    FSTP float ptr [EBP + 0x62]         ; 0056f726
    FLD float ptr [EBP + 0x62]          ; 0056f729
        ;   Label: LAB_0056f729
    FLDZ                                ; 0056f72c
    FCOMPP                              ; 0056f72e
    FNSTSW AX                           ; 0056f730
    SAHF                                ; 0056f732
    JC 0x0056f77d                       ; 0056f733
        ;   XREF to: 0056f77d (CONDITIONAL_JUMP)  ; LAB_0056f77d
    LEA EAX,[EBX + 0x12d4c]             ; 0056f735
    MOV dword ptr [EAX + 0x8],0x0       ; 0056f73b
    FLD float ptr [EBP + 0x92]          ; 0056f742
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056f748
    MOV dword ptr [EAX + 0x4],EDX       ; 0056f74b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056f74e
    MOV dword ptr [EAX],EDX             ; 0056f751
    FMUL float ptr [EBX + 0x10a60]      ; 0056f753
    LEA ESI,[EBX + 0x10af8]             ; 0056f759
    FSTP float ptr [EBP + 0x62]         ; 0056f75f
    FLD float ptr [EBP + 0x62]          ; 0056f762
        ;   Label: LAB_0056f762
    FLDZ                                ; 0056f765
    FCOMPP                              ; 0056f767
    FNSTSW AX                           ; 0056f769
    SAHF                                ; 0056f76b
    JNC 0x0056f796                      ; 0056f76c
        ;   XREF to: 0056f796 (CONDITIONAL_JUMP)  ; LAB_0056f796
    LEA EAX,[EBP + 0x62]                ; 0056f76e
    PUSH EAX                            ; 0056f771
    PUSH ESI                            ; 0056f772
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 0056f773
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0056f778
    JMP 0x0056f762                      ; 0056f77b
        ;   XREF to: 0056f762 (UNCONDITIONAL_JUMP)  ; LAB_0056f762
    LEA EAX,[EBP + 0x62]                ; 0056f77d
        ;   Label: LAB_0056f77d
    PUSH EAX                            ; 0056f780
    PUSH ESI                            ; 0056f781
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 0056f782
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0056f787
    PUSH EAX                            ; 0056f78a
    PUSH EBX                            ; 0056f78b
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 0056f78c
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0056f791
    JMP 0x0056f729                      ; 0056f794
        ;   XREF to: 0056f729 (UNCONDITIONAL_JUMP)  ; LAB_0056f729
    FLD float ptr [EBP + 0x92]          ; 0056f796
        ;   Label: LAB_0056f796
    FMUL float ptr [EBX + 0x10a60]      ; 0056f79c
    SUB ESP,0x4                         ; 0056f7a2
    MOV EAX,dword ptr [EBX + 0x2510]    ; 0056f7a5
    MOV dword ptr [EBX + 0x2594],EAX    ; 0056f7ab
    FSTP float ptr [ESP]                ; 0056f7b1
    PUSH EBX                            ; 0056f7b4
    CALL core_charactr.cpp_FUN_0042b2a0 ; 0056f7b5
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 0056f7ba
    LEA EAX,[EBX + 0x2b4]               ; 0056f7bd
    PUSH EAX                            ; 0056f7c3
    MOV dword ptr [EBP + 0x6e],EAX      ; 0056f7c4
    CALL core_motion.cpp_FUN_005035c0   ; 0056f7c7
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0056f7cc
    PUSH dword ptr [EBP + 0x92]         ; 0056f7cf
    PUSH EBX                            ; 0056f7d5
    MOV ESI,dword ptr [EAX + 0x24]      ; 0056f7d6
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 0056f7d9
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0056f7de
    TEST EAX,EAX                        ; 0056f7e1
    JZ 0x0056fdce                       ; 0056f7e3
        ;   XREF to: 0056fdce (CONDITIONAL_JUMP)  ; LAB_0056fdce
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 0056f7e9
    CMP EAX,0x2                         ; 0056f7ef
    JNC 0x0056fb97                      ; 0056f7f2
        ;   XREF to: 0056fb97 (CONDITIONAL_JUMP)  ; LAB_0056fb97
    CMP EAX,0x1                         ; 0056f7f8
    JNZ 0x0056fba2                      ; 0056f7fb
        ;   XREF to: 0056fba2 (CONDITIONAL_JUMP)  ; LAB_0056fba2
    PUSH 0x1                            ; 0056f801
        ;   Label: LAB_0056f801
    PUSH 0x1                            ; 0056f803
    LEA EAX,[EBX + 0x2b4]               ; 0056f805
        ;   Label: LAB_0056f805
    PUSH EAX                            ; 0056f80b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056f80c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056f811
        ;   Label: LAB_0056f811
    LEA EAX,[EBX + 0x2508]              ; 0056f814
    MOV dword ptr [EAX + 0x8],0x0       ; 0056f81a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056f821
    MOV dword ptr [EAX + 0x4],EDX       ; 0056f824
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056f827
    MOV dword ptr [EAX],EDX             ; 0056f82a
    FLD float ptr [EBX + 0x10a74]       ; 0056f82c
        ;   Label: LAB_0056f82c
    FLDZ                                ; 0056f832
    FCOMPP                              ; 0056f834
    FNSTSW AX                           ; 0056f836
    SAHF                                ; 0056f838
    JNC 0x0056f84d                      ; 0056f839
        ;   XREF to: 0056f84d (CONDITIONAL_JUMP)  ; LAB_0056f84d
    FLD float ptr [EBX + 0x10a74]       ; 0056f83b
    FSUB float ptr [EBP + 0x92]         ; 0056f841
    FSTP float ptr [EBX + 0x10a74]      ; 0056f847
    PUSH EBX                            ; 0056f84d
        ;   Label: LAB_0056f84d
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00424430 ; 0056f84e
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0056f853
    TEST EAX,EAX                        ; 0056f856
    JZ 0x0056f935                       ; 0056f858
        ;   XREF to: 0056f935 (CONDITIONAL_JUMP)  ; LAB_0056f935
    PUSH dword ptr [EBP + 0x92]         ; 0056f85e
    PUSH EBX                            ; 0056f864
    LEA ESI,[EBX + 0x2588]              ; 0056f865
    CALL core_charactr.cpp_FUN_00423a10 ; 0056f86b
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 0056f870
    FMUL float ptr [EBP + 0x92]         ; 0056f872
    FLD float ptr [ESI + 0x4]           ; 0056f878
    FMUL float ptr [EBP + 0x92]         ; 0056f87b
    FLD float ptr [ESI + 0x8]           ; 0056f881
    FMUL float ptr [EBP + 0x92]         ; 0056f884
    LEA EDI,[EBP + -0x22]               ; 0056f88a
    LEA ESI,[EBP + 0x2]                 ; 0056f88d
    FXCH ST2                            ; 0056f890
    FSTP float ptr [EBP + 0x2]          ; 0056f892
    FSTP float ptr [EBP + 0x6]          ; 0056f895
    FSTP float ptr [EBP + 0xa]          ; 0056f898
    MOVSD ES:EDI,ESI                    ; 0056f89b
    MOVSD ES:EDI,ESI                    ; 0056f89c
    MOVSD ES:EDI,ESI                    ; 0056f89d
    LEA EAX,[EBX + 0x257c]              ; 0056f89e
    FLD float ptr [EBP + -0x22]         ; 0056f8a4
    FLD float ptr [EBP + -0x1e]         ; 0056f8a7
    FLD float ptr [EBP + -0x1a]         ; 0056f8aa
    LEA EDI,[EBP + 0x1a]                ; 0056f8ad
    LEA ESI,[EBP + 0x56]                ; 0056f8b0
    FXCH ST2                            ; 0056f8b3
    FADD float ptr [EAX]                ; 0056f8b5
    FXCH                                ; 0056f8b7
    FADD float ptr [EAX + 0x4]          ; 0056f8b9
    FXCH ST2                            ; 0056f8bc
    FADD float ptr [EAX + 0x8]          ; 0056f8be
    FXCH                                ; 0056f8c1
    FSTP float ptr [EBP + 0x56]         ; 0056f8c3
    FXCH                                ; 0056f8c6
    FSTP float ptr [EBP + 0x5a]         ; 0056f8c8
    FSTP float ptr [EBP + 0x5e]         ; 0056f8cb
    MOVSD ES:EDI,ESI                    ; 0056f8ce
    MOVSD ES:EDI,ESI                    ; 0056f8cf
    MOVSD ES:EDI,ESI                    ; 0056f8d0
    LEA EDX,[EBX + 0x2508]              ; 0056f8d1
    FLD float ptr [EBP + 0x1a]          ; 0056f8d7
    FLD float ptr [EBP + 0x1e]          ; 0056f8da
    FLD float ptr [EBP + 0x22]          ; 0056f8dd
    LEA EDI,[EBP + 0x26]                ; 0056f8e0
    LEA ESI,[EBP + 0xe]                 ; 0056f8e3
    FXCH ST2                            ; 0056f8e6
    FADD float ptr [EDX]                ; 0056f8e8
    FXCH                                ; 0056f8ea
    FADD float ptr [EDX + 0x4]          ; 0056f8ec
    FXCH ST2                            ; 0056f8ef
    FADD float ptr [EDX + 0x8]          ; 0056f8f1
    FXCH                                ; 0056f8f4
    FSTP float ptr [EBP + 0xe]          ; 0056f8f6
    FXCH                                ; 0056f8f9
    FSTP float ptr [EBP + 0x12]         ; 0056f8fb
    FSTP float ptr [EBP + 0x16]         ; 0056f8fe
    MOVSD ES:EDI,ESI                    ; 0056f901
    MOVSD ES:EDI,ESI                    ; 0056f902
    MOVSD ES:EDI,ESI                    ; 0056f903
    MOV dword ptr [EAX + 0x8],0x0       ; 0056f904
    ADD ESP,0x8                         ; 0056f90b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0056f90e
    MOV dword ptr [EAX + 0x4],ECX       ; 0056f911
    MOV ECX,dword ptr [EAX + 0x4]       ; 0056f914
    MOV dword ptr [EAX],ECX             ; 0056f917
    MOV dword ptr [EDX + 0x8],0x0       ; 0056f919
    LEA EAX,[EBP + 0x26]                ; 0056f920
    FLD float ptr [EDX + 0x8]           ; 0056f923
    PUSH EAX                            ; 0056f926
    FST float ptr [EDX + 0x4]           ; 0056f927
    PUSH EBX                            ; 0056f92a
    FSTP float ptr [EDX]                ; 0056f92b
    CALL core_charactr.cpp_FUN_00423a60 ; 0056f92d
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0056f932
    PUSH EBX                            ; 0056f935
        ;   Label: LAB_0056f935
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 0056f936
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0056f93b
    LEA ESI,[EBX + 0x2b4]               ; 0056f93e
    PUSH ESI                            ; 0056f944
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 0056f945
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056f94a
    PUSH dword ptr [EBP + 0x92]         ; 0056f94d
    PUSH EBX                            ; 0056f953
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 0056f954
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0056f959
    PUSH ESI                            ; 0056f95c
    CALL core_motion.cpp_FUN_005035c0   ; 0056f95d
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0056f962
    MOV EDX,dword ptr [ESI + 0x8]       ; 0056f965
    PUSH EDX                            ; 0056f968
    PUSH EAX                            ; 0056f969
    LEA ESI,[EBX + 0x10af8]             ; 0056f96a
    MOV dword ptr [EBP + 0x6a],EAX      ; 0056f970
    PUSH ESI                            ; 0056f973
    MOV dword ptr [EBP + 0x66],EDX      ; 0056f974
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950 ; 0056f977
        ;   XREF to: 00503950 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 0056f97c
    PUSH ESI                            ; 0056f97f
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0 ; 0056f980
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(CDeformableModelInstance * this_ptr)
    MOV ECX,dword ptr [EBX + 0x12f70]   ; 0056f985
    ADD ESP,0x4                         ; 0056f98b
    TEST ECX,ECX                        ; 0056f98e
    JZ 0x0056fae7                       ; 0056f990
        ;   XREF to: 0056fae7 (CONDITIONAL_JUMP)  ; LAB_0056fae7
    FLD float ptr [EBX + 0x12f74]       ; 0056f996
    FADD float ptr [EBP + 0x92]         ; 0056f99c
    FST float ptr [EBX + 0x12f74]       ; 0056f9a2
    FCOMP float ptr [0x005fc3d8]        ; 0056f9a8 | DAT_005fc3d8
    FNSTSW AX                           ; 0056f9ae
    SAHF                                ; 0056f9b0
    JBE 0x0056fae7                      ; 0056f9b1
        ;   XREF to: 0056fae7 (CONDITIONAL_JUMP)  ; LAB_0056fae7
    PUSH 0x10b2c                        ; 0056f9b7
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0056f9bc
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0056f9c1
    TEST EAX,EAX                        ; 0056f9c4
    JZ 0x0056f9d1                       ; 0056f9c6
        ;   XREF to: 0056f9d1 (CONDITIONAL_JUMP)  ; LAB_0056f9d1
    PUSH EAX                            ; 0056f9c8
    CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004d37f0 ; 0056f9c9
        ;   XREF to: 004d37f0 (UNCONDITIONAL_CALL)  ; CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004d37f0(CHotDemon * this_ptr)
    ADD ESP,0x4                         ; 0056f9ce
    MOV ESI,EAX                         ; 0056f9d1
        ;   Label: LAB_0056f9d1
    MOV dword ptr [EBP + 0x72],ESI      ; 0056f9d3
    TEST ESI,ESI                        ; 0056f9d6
    JZ 0x0056fae7                       ; 0056f9d8
        ;   XREF to: 0056fae7 (CONDITIONAL_JUMP)  ; LAB_0056fae7
    PUSH ESI                            ; 0056f9de
    MOV EDI,dword ptr [0x00618170]      ; 0056f9df | DAT_00618170
    PUSH EDI                            ; 0056f9e5 | DAT_01d182f0
    MOV dword ptr [EBX + 0x70],0x2      ; 0056f9e6
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0 ; 0056f9ed
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0(CDemonMission * this_ptr, CDemonActor * actor)
    LEA EAX,[EBX + 0x20]                ; 0056f9f2
    LEA EDX,[ESI + 0x20]                ; 0056f9f5
    MOV ECX,dword ptr [EAX]             ; 0056f9f8
    MOV dword ptr [EDX],ECX             ; 0056f9fa
    MOV ECX,dword ptr [EAX + 0x4]       ; 0056f9fc
    MOV dword ptr [EDX + 0x4],ECX       ; 0056f9ff
    MOV ECX,dword ptr [EAX + 0x8]       ; 0056fa02
    MOV dword ptr [EDX + 0x8],ECX       ; 0056fa05
    MOV EAX,dword ptr [EAX + 0xc]       ; 0056fa08
    ADD ESI,0x30                        ; 0056fa0b
    MOV dword ptr [EDX + 0xc],EAX       ; 0056fa0e
    LEA EAX,[EBX + 0x30]                ; 0056fa11
    ADD ESP,0x8                         ; 0056fa14
    CMP ESI,EAX                         ; 0056fa17
    JZ 0x0056fa2b                       ; 0056fa19
        ;   XREF to: 0056fa2b (CONDITIONAL_JUMP)  ; LAB_0056fa2b
    MOV EDX,dword ptr [EAX]             ; 0056fa1b
    MOV dword ptr [ESI],EDX             ; 0056fa1d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056fa1f
    MOV dword ptr [ESI + 0x4],EDX       ; 0056fa22
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056fa25
    MOV dword ptr [ESI + 0x8],EDX       ; 0056fa28
    MOV EAX,dword ptr [EBP + 0x72]      ; 0056fa2b
        ;   Label: LAB_0056fa2b
    MOV ESI,0x5ec11f                    ; 0056fa2e | = "hdwing.cth"
    MOV EDX,dword ptr [EBP + 0x72]      ; 0056fa33
    LEA EDI,[EAX + 0x2d10]              ; 0056fa36
    MOV dword ptr [EAX + 0x2d0c],0x1    ; 0056fa3c
    PUSH EDI                            ; 0056fa46
    MOV AL,byte ptr [ESI]               ; 0056fa47 | = "hdwing.cth" | s_hdwing_cth_005ec11f+2
        ;   Label: LAB_0056fa47
    MOV byte ptr [EDI],AL               ; 0056fa49
    CMP AL,0x0                          ; 0056fa4b
    JZ 0x0056fa5f                       ; 0056fa4d
        ;   XREF to: 0056fa5f (CONDITIONAL_JUMP)  ; LAB_0056fa5f
    MOV AL,byte ptr [ESI + 0x1]         ; 0056fa4f | s_hdwing_cth_005ec11f+1 | s_hdwing_cth_005ec11f+3
    ADD ESI,0x2                         ; 0056fa52
    MOV byte ptr [EDI + 0x1],AL         ; 0056fa55
    ADD EDI,0x2                         ; 0056fa58
    CMP AL,0x0                          ; 0056fa5b
    JNZ 0x0056fa47                      ; 0056fa5d
        ;   XREF to: 0056fa47 (CONDITIONAL_JUMP)  ; LAB_0056fa47
    POP EDI                             ; 0056fa5f
        ;   Label: LAB_0056fa5f
    MOV EAX,dword ptr [EBP + 0x72]      ; 0056fa60
    PUSH EDX                            ; 0056fa63
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0056fa64
    CALL dword ptr [EAX + 0x8]          ; 0056fa6a
    ADD ESP,0x4                         ; 0056fa6d
    MOV ECX,dword ptr [EBP + 0x6a]      ; 0056fa70
    PUSH dword ptr [EBP + 0x66]         ; 0056fa73
    MOV ESI,dword ptr [EBP + 0x72]      ; 0056fa76
    PUSH ECX                            ; 0056fa79
    ADD ESI,0x2b4                       ; 0056fa7a
    PUSH ESI                            ; 0056fa80
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950 ; 0056fa81
        ;   XREF to: 00503950 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 0056fa86
    PUSH ESI                            ; 0056fa89
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0 ; 0056fa8a
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(CDeformableModelInstance * this_ptr)
    MOV EDX,dword ptr [EBP + 0x72]      ; 0056fa8f
    MOV EAX,dword ptr [EBX + 0x108]     ; 0056fa92
    ADD ESP,0x4                         ; 0056fa98
    MOV dword ptr [EDX + 0x108],EAX     ; 0056fa9b
    PUSH EDX                            ; 0056faa1
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0056faa2
    MOV EDI,dword ptr [0x00618170]      ; 0056faa8 | DAT_00618170
    MOV dword ptr [EDX + 0x10c],EAX     ; 0056faae
    PUSH EDI                            ; 0056fab4 | DAT_01d182f0
    MOV EAX,dword ptr [EBX + 0x110]     ; 0056fab5
    MOV ESI,EDX                         ; 0056fabb
    MOV dword ptr [EDX + 0x110],EAX     ; 0056fabd
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200 ; 0056fac3
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200(CDemonMission * this_ptr, CDemonActor * actor)
    MOV EDX,ESI                         ; 0056fac8
    MOV EDX,dword ptr [EDX + 0x2ea0]    ; 0056faca
    MOV EAX,dword ptr [EBX + 0x12f40]   ; 0056fad0
    MOV dword ptr [EBX + 0x12f40],EDX   ; 0056fad6
    MOV EDX,ESI                         ; 0056fadc
    ADD ESP,0x8                         ; 0056fade
    MOV dword ptr [EDX + 0x2ea0],EAX    ; 0056fae1
    CMP dword ptr [EBX + 0x2828],0x0    ; 0056fae7
        ;   Label: LAB_0056fae7
    JZ 0x0056fb1a                       ; 0056faee
        ;   XREF to: 0056fb1a (CONDITIONAL_JUMP)  ; LAB_0056fb1a
    LEA EAX,[EBX + 0x10af8]             ; 0056faf0
    PUSH EAX                            ; 0056faf6
    PUSH dword ptr [EBX + 0x2574]       ; 0056faf7
    LEA EAX,[EBX + 0x30]                ; 0056fafd
    PUSH dword ptr [EBP + 0x92]         ; 0056fb00
    PUSH EAX                            ; 0056fb06
    LEA EAX,[EBX + 0x20]                ; 0056fb07
    PUSH EAX                            ; 0056fb0a
    LEA EAX,[EBX + 0x12dac]             ; 0056fb0b
    PUSH EAX                            ; 0056fb11
    CALL core_cloth.cpp_CClothList_process_FUN_005b1780 ; 0056fb12
        ;   XREF to: 005b1780 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_005b1780(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 0056fb17
    PUSH 0x5ec12a                       ; 0056fb1a | = "succubusShutUp"
        ;   Label: LAB_0056fb1a
    MOV EDX,dword ptr [0x006141f0]      ; 0056fb1f | DAT_006141f0
    PUSH EDX                            ; 0056fb25
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0056fb26
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0056fb2b
    TEST EAX,EAX                        ; 0056fb2e
    JNZ 0x0056fdf4                      ; 0056fb30
        ;   XREF to: 0056fdf4 (CONDITIONAL_JUMP)  ; LAB_0056fdf4
    MOV ECX,dword ptr [EBX + 0x12f68]   ; 0056fb36
    PUSH ECX                            ; 0056fb3c
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0056fb3d
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0056fb42
    TEST EAX,EAX                        ; 0056fb45
    JNZ 0x0056fb68                      ; 0056fb47
        ;   XREF to: 0056fb68 (CONDITIONAL_JUMP)  ; LAB_0056fb68
    FLD float ptr [EBX + 0x12f6c]       ; 0056fb49
    FSUB float ptr [EBP + 0x92]         ; 0056fb4f
    FST float ptr [EBX + 0x12f6c]       ; 0056fb55
    FLDZ                                ; 0056fb5b
    FCOMPP                              ; 0056fb5d
    FNSTSW AX                           ; 0056fb5f
    SAHF                                ; 0056fb61
    JA 0x0056fe0b                       ; 0056fb62
        ;   XREF to: 0056fe0b (CONDITIONAL_JUMP)  ; LAB_0056fe0b
    LEA ESP,[EBP + 0x7a]                ; 0056fb68
        ;   Label: LAB_0056fb68
    POP EBP                             ; 0056fb6b
    POP EDI                             ; 0056fb6c
    POP ESI                             ; 0056fb6d
    POP EBX                             ; 0056fb6e
    RET                                 ; 0056fb6f
    PUSH 0x1                            ; 0056fb70
        ;   Label: LAB_0056fb70
    PUSH 0x0                            ; 0056fb72
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0056fb74
    PUSH EAX                            ; 0056fb77
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056fb78
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056fb7d
    PUSH EBX                            ; 0056fb80
    PUSH 0x5ec0e2                       ; 0056fb81 | s_s_confused_while_walking_005ec0e1+1
    MOV EDX,dword ptr [0x00609ed0]      ; 0056fb86 | g_CConsolePtr
    PUSH EDX                            ; 0056fb8c | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0056fb8d
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    JMP 0x0056f811                      ; 0056fb92
        ;   XREF to: 0056f811 (UNCONDITIONAL_JUMP)  ; LAB_0056f811
    JBE 0x0056f801                      ; 0056fb97
        ;   XREF to: 0056f801 (CONDITIONAL_JUMP)  ; LAB_0056f801
        ;   Label: LAB_0056fb97
    CMP EAX,0x3                         ; 0056fb9d
    JZ 0x0056fb70                       ; 0056fba0
        ;   XREF to: 0056fb70 (CONDITIONAL_JUMP)  ; LAB_0056fb70
    PUSH 0x1                            ; 0056fba2
        ;   Label: LAB_0056fba2
    PUSH 0x0                            ; 0056fba4
    JMP 0x0056f805                      ; 0056fba6
        ;   XREF to: 0056f805 (UNCONDITIONAL_JUMP)  ; LAB_0056f805
    PUSH dword ptr [EBP + 0x92]         ; 0056fbab
        ;   Label: LAB_0056fbab
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056fbb1
    PUSH EBX                            ; 0056fbb7
    CALL dword ptr [EAX + 0x150]        ; 0056fbb8
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 0056fbbe
    ADD ESP,0x8                         ; 0056fbc4
    TEST ECX,ECX                        ; 0056fbc7
    JZ 0x0056fc34                       ; 0056fbc9
        ;   XREF to: 0056fc34 (CONDITIONAL_JUMP)  ; LAB_0056fc34
    LEA EAX,[EBX + 0x20]                ; 0056fbcb
    LEA EDI,[EBP + 0x4a]                ; 0056fbce
    LEA ESI,[EBP + -0x16]               ; 0056fbd1
    FLD float ptr [EAX]                 ; 0056fbd4
    FLD float ptr [EAX + 0x4]           ; 0056fbd6
    FLD float ptr [EAX + 0x8]           ; 0056fbd9
    FXCH ST2                            ; 0056fbdc
    FSUB float ptr [ECX + 0x20]         ; 0056fbde
    FXCH                                ; 0056fbe1
    FSUB float ptr [ECX + 0x24]         ; 0056fbe3
    FXCH ST2                            ; 0056fbe6
    FSUB float ptr [ECX + 0x28]         ; 0056fbe8
    FXCH                                ; 0056fbeb
    FSTP float ptr [EBP + -0x16]        ; 0056fbed
    FXCH                                ; 0056fbf0
    FSTP float ptr [EBP + -0x12]        ; 0056fbf2
    FSTP float ptr [EBP + -0xe]         ; 0056fbf5
    MOVSD ES:EDI,ESI                    ; 0056fbf8
    MOVSD ES:EDI,ESI                    ; 0056fbf9
    MOVSD ES:EDI,ESI                    ; 0056fbfa
    FLD float ptr [EBP + 0x4e]          ; 0056fbfb
    FMUL ST0                            ; 0056fbfe
    FLD float ptr [EBP + 0x4a]          ; 0056fc00
    FMUL ST0                            ; 0056fc03
    FADDP                               ; 0056fc05
    FLD float ptr [EBP + 0x52]          ; 0056fc07
    FMUL ST0                            ; 0056fc0a
    FADDP                               ; 0056fc0c
    FSQRT                               ; 0056fc0e
    FCOMP float ptr [EBX + 0x10a70]     ; 0056fc10
    FNSTSW AX                           ; 0056fc16
    SAHF                                ; 0056fc18
    JNC 0x0056f82c                      ; 0056fc19
        ;   XREF to: 0056f82c (CONDITIONAL_JUMP)  ; LAB_0056f82c
    PUSH 0x1                            ; 0056fc1f
    PUSH 0x1                            ; 0056fc21
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0056fc23
    PUSH EDI                            ; 0056fc26
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056fc27
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056fc2c
    JMP 0x0056f82c                      ; 0056fc2f
        ;   XREF to: 0056f82c (UNCONDITIONAL_JUMP)  ; LAB_0056f82c
    PUSH dword ptr [EBP + 0x92]         ; 0056fc34
        ;   Label: LAB_0056fc34
    PUSH EBX                            ; 0056fc3a
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 0056fc3b
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0056fc40
    TEST EAX,EAX                        ; 0056fc43
    JZ 0x0056f82c                       ; 0056fc45
        ;   XREF to: 0056f82c (CONDITIONAL_JUMP)  ; LAB_0056f82c
    PUSH 0x1                            ; 0056fc4b
    PUSH 0x1                            ; 0056fc4d
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0056fc4f
    PUSH ESI                            ; 0056fc52
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056fc53
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056fc58
    JMP 0x0056f82c                      ; 0056fc5b
        ;   XREF to: 0056f82c (UNCONDITIONAL_JUMP)  ; LAB_0056f82c
    PUSH dword ptr [EBP + 0x92]         ; 0056fc60
        ;   Label: LAB_0056fc60
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056fc66
    PUSH EBX                            ; 0056fc6c
    CALL dword ptr [EAX + 0x150]        ; 0056fc6d
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 0056fc73
    ADD ESP,0x8                         ; 0056fc79
    TEST ECX,ECX                        ; 0056fc7c
    JNZ 0x0056fcbe                      ; 0056fc7e
        ;   XREF to: 0056fcbe (CONDITIONAL_JUMP)  ; LAB_0056fcbe
    PUSH dword ptr [EBP + 0x92]         ; 0056fc80
    PUSH EBX                            ; 0056fc86
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 0056fc87
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    MOV EDX,EAX                         ; 0056fc8c
    ADD ESP,0x8                         ; 0056fc8e
    LEA EAX,[EBX + 0x2b4]               ; 0056fc91
    TEST EDX,EDX                        ; 0056fc97
    JZ 0x0056fcad                       ; 0056fc99
        ;   XREF to: 0056fcad (CONDITIONAL_JUMP)  ; LAB_0056fcad
    PUSH 0x1                            ; 0056fc9b
    PUSH 0x1                            ; 0056fc9d
    PUSH EAX                            ; 0056fc9f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056fca0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056fca5
    JMP 0x0056f82c                      ; 0056fca8
        ;   XREF to: 0056f82c (UNCONDITIONAL_JUMP)  ; LAB_0056f82c
    PUSH 0x1                            ; 0056fcad
        ;   Label: LAB_0056fcad
    PUSH EDX                            ; 0056fcaf
    PUSH EAX                            ; 0056fcb0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056fcb1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056fcb6
    JMP 0x0056f82c                      ; 0056fcb9
        ;   XREF to: 0056f82c (UNCONDITIONAL_JUMP)  ; LAB_0056f82c
    PUSH 0x3e32b8c2                     ; 0056fcbe
        ;   Label: LAB_0056fcbe
    LEA EAX,[EBX + 0x2508]              ; 0056fcc3
    PUSH 0x3f000000                     ; 0056fcc9
    MOV dword ptr [EAX + 0x8],0x0       ; 0056fcce
    XOR ESI,ESI                         ; 0056fcd5
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056fcd7
    MOV dword ptr [EAX + 0x4],EDX       ; 0056fcda
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056fcdd
    MOV dword ptr [EAX],EDX             ; 0056fce0
    MOV EAX,[0x005fc3c8]                ; 0056fce2 | DAT_005fc3c8
    MOV dword ptr [EBP + 0x32],ESI      ; 0056fce7
    MOV dword ptr [EBP + 0x3a],EAX      ; 0056fcea
    LEA EAX,[EBP + 0x32]                ; 0056fced
    MOV dword ptr [EBP + 0x36],ESI      ; 0056fcf0
    PUSH EAX                            ; 0056fcf3
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0056fcf4
    PUSH EAX                            ; 0056fcfa
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056fcfb
    CALL dword ptr [EDX + 0xcc]         ; 0056fd01
    ADD ESP,0x4                         ; 0056fd07
    PUSH EAX                            ; 0056fd0a
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0056fd0b
    ADD EAX,0x20                        ; 0056fd11
    PUSH EAX                            ; 0056fd14
    PUSH EBX                            ; 0056fd15
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0056fd16
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0056fd1b
    TEST EAX,EAX                        ; 0056fd1e
    JL 0x0056f82c                       ; 0056fd20
        ;   XREF to: 0056f82c (CONDITIONAL_JUMP)  ; LAB_0056f82c
    LEA EDI,[EBP + -0xa]                ; 0056fd26
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0056fd29
    LEA ESI,[EBP + 0x3e]                ; 0056fd2f
    LEA EAX,[EBX + 0x20]                ; 0056fd32
    FLD float ptr [EDX + 0x20]          ; 0056fd35
    FLD float ptr [EDX + 0x24]          ; 0056fd38
    FLD float ptr [EDX + 0x28]          ; 0056fd3b
    FXCH ST2                            ; 0056fd3e
    FSUB float ptr [EAX]                ; 0056fd40
    FXCH                                ; 0056fd42
    FSUB float ptr [EAX + 0x4]          ; 0056fd44
    FXCH ST2                            ; 0056fd47
    FSUB float ptr [EAX + 0x8]          ; 0056fd49
    FXCH                                ; 0056fd4c
    FSTP float ptr [EBP + 0x3e]         ; 0056fd4e
    FXCH                                ; 0056fd51
    FSTP float ptr [EBP + 0x42]         ; 0056fd53
    FSTP float ptr [EBP + 0x46]         ; 0056fd56
    MOVSD ES:EDI,ESI                    ; 0056fd59
    MOVSD ES:EDI,ESI                    ; 0056fd5a
    MOVSD ES:EDI,ESI                    ; 0056fd5b
    FLD float ptr [EBP + -0x6]          ; 0056fd5c
    FMUL ST0                            ; 0056fd5f
    FLD float ptr [EBP + -0xa]          ; 0056fd61
    FMUL ST0                            ; 0056fd64
    FADDP                               ; 0056fd66
    FLD float ptr [EBP + -0x2]          ; 0056fd68
    FMUL ST0                            ; 0056fd6b
    FADDP                               ; 0056fd6d
    FSQRT                               ; 0056fd6f
    FCOMP float ptr [0x005fc3d4]        ; 0056fd71 | DAT_005fc3d4
    FNSTSW AX                           ; 0056fd77
    SAHF                                ; 0056fd79
    JNC 0x0056f82c                      ; 0056fd7a
        ;   XREF to: 0056f82c (CONDITIONAL_JUMP)  ; LAB_0056f82c
    MOV EAX,dword ptr [EBX + 0x12f70]   ; 0056fd80
    TEST EAX,EAX                        ; 0056fd86
    JNZ 0x0056f82c                      ; 0056fd88
        ;   XREF to: 0056f82c (CONDITIONAL_JUMP)  ; LAB_0056f82c
    MOV EDX,dword ptr [EBX + 0x12f68]   ; 0056fd8e
    MOV dword ptr [EBX + 0x12f70],0x1   ; 0056fd94
    PUSH EDX                            ; 0056fd9e
    MOV dword ptr [EBX + 0x12f74],EAX   ; 0056fd9f
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0056fda5
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0056fdaa
    PUSH 0x5ec10c                       ; 0056fdad | = "succubus-morph.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056fdb2
    PUSH EBX                            ; 0056fdb8
    MOV dword ptr [EBX + 0x12f6c],0x461c3f9a ; 0056fdb9
    CALL dword ptr [EAX + 0x38]         ; 0056fdc3
    ADD ESP,0x8                         ; 0056fdc6
    JMP 0x0056f82c                      ; 0056fdc9
        ;   XREF to: 0056f82c (UNCONDITIONAL_JUMP)  ; LAB_0056f82c
    CMP ESI,0x1                         ; 0056fdce
        ;   Label: LAB_0056fdce
    JNC 0x0056fde0                      ; 0056fdd1
        ;   XREF to: 0056fde0 (CONDITIONAL_JUMP)  ; LAB_0056fde0
    TEST ESI,ESI                        ; 0056fdd3
    JZ 0x0056fbab                       ; 0056fdd5
        ;   XREF to: 0056fbab (CONDITIONAL_JUMP)  ; LAB_0056fbab
    JMP 0x0056f82c                      ; 0056fddb
        ;   XREF to: 0056f82c (UNCONDITIONAL_JUMP)  ; LAB_0056f82c
    JBE 0x0056fc60                      ; 0056fde0
        ;   XREF to: 0056fc60 (CONDITIONAL_JUMP)  ; LAB_0056fc60
        ;   Label: LAB_0056fde0
    CMP ESI,0x2                         ; 0056fde6
    JZ 0x0056fc60                       ; 0056fde9
        ;   XREF to: 0056fc60 (CONDITIONAL_JUMP)  ; LAB_0056fc60
    JMP 0x0056f82c                      ; 0056fdef
        ;   XREF to: 0056f82c (UNCONDITIONAL_JUMP)  ; LAB_0056f82c
    MOV ESI,dword ptr [EBX + 0x12f68]   ; 0056fdf4
        ;   Label: LAB_0056fdf4
    PUSH ESI                            ; 0056fdfa
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0056fdfb
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0056fe00
    LEA ESP,[EBP + 0x7a]                ; 0056fe03
    POP EBP                             ; 0056fe06
    POP EDI                             ; 0056fe07
    POP ESI                             ; 0056fe08
    POP EBX                             ; 0056fe09
    RET                                 ; 0056fe0a
    PUSH 0x41200000                     ; 0056fe0b
        ;   Label: LAB_0056fe0b
    PUSH 0x40a00000                     ; 0056fe10
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0056fe15
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 0056fe1a
    MOV dword ptr [EBP + 0x76],EAX      ; 0056fe1d
    PUSH 0x5ec139                       ; 0056fe20 | = "succubus-horny-?.wav"
    FLD float ptr [EBP + 0x76]          ; 0056fe25
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056fe28
    PUSH EBX                            ; 0056fe2e
    FSTP float ptr [EBX + 0x12f6c]      ; 0056fe2f
    CALL dword ptr [EAX + 0x34]         ; 0056fe35
    ADD ESP,0x8                         ; 0056fe38
    MOV dword ptr [EBX + 0x12f68],EAX   ; 0056fe3b
    LEA ESP,[EBP + 0x7a]                ; 0056fe41
    POP EBP                             ; 0056fe44
    POP EDI                             ; 0056fe45
    POP ESI                             ; 0056fe46
    POP EBX                             ; 0056fe47
    RET                                 ; 0056fe48

