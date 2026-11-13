; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00570510(CSvetlana *this_ptr,float delta_time)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_005704dc = 00570976
;   TerminatedCString s_s_confused_while_walking_005ec2cd
;   undefined4 DAT_005ec2fb
;   undefined4 DAT_005ec303
;   undefined4 DAT_005ec30b
;   undefined4 DAT_005ec30f
;   undefined4 DAT_005ec313
;   undefined4 DAT_005ec317
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;   undefined4 DAT_0264bf38
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_0042b2a0
;   core_cloth.cpp_CCloth_process_FUN_005afdf0
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90
;   core_hero.cpp_FUN_004cec50
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570510
        ;   Label: core_svetlana.cpp_CSvetlana_process_FUN_00570510
    PUSH ESI                            ; 00570511
    PUSH EDI                            ; 00570512
    PUSH EBP                            ; 00570513
    SUB ESP,0xc0                        ; 00570514
    MOV EBX,dword ptr [ESP + 0xd4]      ; 0057051a
    FLD float ptr [EBX + 0x25a8]        ; 00570521
    FCOMP double ptr [0x005ec2fb]       ; 00570527 | DAT_005ec2fb
    FNSTSW AX                           ; 0057052d
    SAHF                                ; 0057052f
    JNC 0x0057055a                      ; 00570530
        ;   XREF to: 0057055a (CONDITIONAL_JUMP)  ; LAB_0057055a
    FLD float ptr [EBX + 0x25a8]        ; 00570532
    FADD float ptr [ESP + 0xd8]         ; 00570538
    FST float ptr [EBX + 0x25a8]        ; 0057053f
    FCOMP double ptr [0x005ec2fb]       ; 00570545 | DAT_005ec2fb
    FNSTSW AX                           ; 0057054b
    SAHF                                ; 0057054d
    JBE 0x0057055a                      ; 0057054e
        ;   XREF to: 0057055a (CONDITIONAL_JUMP)  ; LAB_0057055a
    MOV dword ptr [EBX + 0x25a8],0x42c80000 ; 00570550
    PUSH dword ptr [ESP + 0xd8]         ; 0057055a
        ;   Label: LAB_0057055a
    PUSH EBX                            ; 00570561
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 00570562
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00570567
    TEST EAX,EAX                        ; 0057056a
    JZ 0x00570577                       ; 0057056c
        ;   XREF to: 00570577 (CONDITIONAL_JUMP)  ; caseD_9
    CMP dword ptr [EBX + 0x25638],0x4   ; 0057056e
    JNZ 0x00570582                      ; 00570575
        ;   XREF to: 00570582 (CONDITIONAL_JUMP)  ; LAB_00570582
    ADD ESP,0xc0                        ; 00570577
        ;   Label: caseD_9
    POP EBP                             ; 0057057d
    POP EDI                             ; 0057057e
    POP ESI                             ; 0057057f
    POP EBX                             ; 00570580
    RET                                 ; 00570581
    PUSH dword ptr [ESP + 0xd8]         ; 00570582
        ;   Label: LAB_00570582
    PUSH EBX                            ; 00570589
    CALL core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0 ; 0057058a
        ;   XREF to: 0042a7a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0057058f
    PUSH dword ptr [ESP + 0xd8]         ; 00570592
    PUSH EBX                            ; 00570599
    CALL core_charactr.cpp_FUN_0042b2a0 ; 0057059a
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 0057059f
    FLD float ptr [EBX + 0x10a60]       ; 005705a2
    FSUB float ptr [ESP + 0xd8]         ; 005705a8
    FST float ptr [EBX + 0x10a60]       ; 005705af
    FLDZ                                ; 005705b5
    FCOMPP                              ; 005705b7
    FNSTSW AX                           ; 005705b9
    SAHF                                ; 005705bb
    JBE 0x005705c8                      ; 005705bc
        ;   XREF to: 005705c8 (CONDITIONAL_JUMP)  ; LAB_005705c8
    MOV dword ptr [EBX + 0x10a60],0x0   ; 005705be
    LEA ESI,[EBX + 0x2508]              ; 005705c8
        ;   Label: LAB_005705c8
    PUSH dword ptr [ESP + 0xd8]         ; 005705ce
    MOV dword ptr [ESI + 0x8],0x0       ; 005705d5
    PUSH EBX                            ; 005705dc
    MOV EAX,dword ptr [ESI + 0x8]       ; 005705dd
    MOV dword ptr [ESI + 0x4],EAX       ; 005705e0
    MOV EAX,dword ptr [ESI + 0x4]       ; 005705e3
    MOV dword ptr [ESI],EAX             ; 005705e6
    CALL core_svetlana.cpp_CSvetlana_advanceMotion_FUN_00571460 ; 005705e8
        ;   XREF to: 00571460 (UNCONDITIONAL_CALL)  ; void core_svetlana.cpp_CSvetlana_advanceMotion_FUN_00571460(CSvetlana * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005705ed
    PUSH dword ptr [ESP + 0xd8]         ; 005705f0
    FLD float ptr [EBX + 0x2510]        ; 005705f7
    PUSH EBX                            ; 005705fd
    FSTP float ptr [EBX + 0x2594]       ; 005705fe
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 00570604
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00570609
    TEST EAX,EAX                        ; 0057060c
    JZ 0x0057093b                       ; 0057060e
        ;   XREF to: 0057093b (CONDITIONAL_JUMP)  ; LAB_0057093b
    LEA EAX,[EBX + 0x2b4]               ; 00570614
    PUSH EAX                            ; 0057061a
    CALL core_motion.cpp_FUN_005035c0   ; 0057061b
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00570620
    ADD ESP,0x4                         ; 00570623
    CMP EAX,0x1a                        ; 00570626
    JZ 0x00570642                       ; 00570629
        ;   XREF to: 00570642 (CONDITIONAL_JUMP)  ; LAB_00570642
    CMP EAX,0x1b                        ; 0057062b
    JZ 0x00570642                       ; 0057062e
        ;   XREF to: 00570642 (CONDITIONAL_JUMP)  ; LAB_00570642
    MOV dword ptr [ESI + 0x8],0x0       ; 00570630
    MOV EAX,dword ptr [ESI + 0x8]       ; 00570637
    MOV dword ptr [ESI + 0x4],EAX       ; 0057063a
    MOV EAX,dword ptr [ESI + 0x4]       ; 0057063d
    MOV dword ptr [ESI],EAX             ; 00570640
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 00570642
        ;   Label: LAB_00570642
    LEA EDX,[EBX + 0x2b4]               ; 00570648
    CMP EAX,0x2                         ; 0057064e
    JNC 0x00570924                      ; 00570651
        ;   XREF to: 00570924 (CONDITIONAL_JUMP)  ; LAB_00570924
    CMP EAX,0x1                         ; 00570657
    JNZ 0x0057092b                      ; 0057065a
        ;   XREF to: 0057092b (CONDITIONAL_JUMP)  ; LAB_0057092b
    PUSH EAX                            ; 00570660
    PUSH EAX                            ; 00570661
    PUSH EDX                            ; 00570662
        ;   Label: LAB_00570662
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00570663
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00570663
    ADD ESP,0xc                         ; 00570668
        ;   Label: LAB_00570668
    MOV EDI,dword ptr [EBX + 0x276c]    ; 0057066b
        ;   Label: caseD_4
    TEST EDI,EDI                        ; 00570671
    JZ 0x00570b0a                       ; 00570673
        ;   XREF to: 00570b0a (CONDITIONAL_JUMP)  ; LAB_00570b0a
    CMP dword ptr [EBX + 0x2770],0x0    ; 00570679
    JNZ 0x005707a1                      ; 00570680
        ;   XREF to: 005707a1 (CONDITIONAL_JUMP)  ; LAB_005707a1
    LEA EAX,[EDI + 0x20]                ; 00570686
    PUSH EAX                            ; 00570689
    PUSH EBX                            ; 0057068a
    LEA ESI,[ESP + 0x7c]                ; 0057068b
    LEA EDI,[ESP + 0x40]                ; 0057068f
    CALL core_actor.cpp_FUN_00408de0    ; 00570693
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x7c]                ; 00570698
    ADD ESP,0x8                         ; 0057069c
    LEA EAX,[ESP + 0x38]                ; 0057069f
    MOVSD ES:EDI,ESI                    ; 005706a3
    MOVSD ES:EDI,ESI                    ; 005706a4
    MOVSD ES:EDI,ESI                    ; 005706a5
    PUSH EAX                            ; 005706a6
    LEA ESI,[ESP + 0x84]                ; 005706a7
    LEA EDI,[ESP + 0x54]                ; 005706ae
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 005706b2
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x84]                ; 005706b7
    ADD ESP,0x4                         ; 005706be
    MOVSD ES:EDI,ESI                    ; 005706c1
    MOVSD ES:EDI,ESI                    ; 005706c2
    MOVSD ES:EDI,ESI                    ; 005706c3
    PUSH dword ptr [ESP + 0x54]         ; 005706c4
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 005706c8
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0xc0],EAX      ; 005706cd
    FLD float ptr [ESP + 0xc0]          ; 005706d4
    ADD ESP,0x4                         ; 005706db
    FST float ptr [ESP + 0xb8]          ; 005706de
    FCOMP float ptr [0x005ec30b]        ; 005706e5 | DAT_005ec30b
    FNSTSW AX                           ; 005706eb
    SAHF                                ; 005706ed
    JNC 0x00570704                      ; 005706ee
        ;   XREF to: 00570704 (CONDITIONAL_JUMP)  ; LAB_00570704
    FLD float ptr [ESP + 0xb8]          ; 005706f0
    FADD float ptr [0x005ec30f]         ; 005706f7 | DAT_005ec30f
    FSTP float ptr [ESP + 0xb8]         ; 005706fd
    FLD float ptr [ESP + 0xb8]          ; 00570704
        ;   Label: LAB_00570704
    FCOMP float ptr [0x005ec313]        ; 0057070b | DAT_005ec313
    FNSTSW AX                           ; 00570711
    SAHF                                ; 00570713
    JBE 0x0057072a                      ; 00570714
        ;   XREF to: 0057072a (CONDITIONAL_JUMP)  ; LAB_0057072a
    FLD float ptr [ESP + 0xb8]          ; 00570716
    FADD float ptr [0x005ec317]         ; 0057071d | DAT_005ec317
    FSTP float ptr [ESP + 0xb8]         ; 00570723
    FLD float ptr [ESP + 0xd8]          ; 0057072a
        ;   Label: LAB_0057072a
    FMUL float ptr [0x005ec30f]         ; 00570731 | DAT_005ec30f
    FLD float ptr [ESP + 0xb8]          ; 00570737
    FXCH                                ; 0057073e
    FST float ptr [ESP + 0xb4]          ; 00570740
    FCHS                                ; 00570747
    FSTP float ptr [ESP + 0xb0]         ; 00570749
    FCOMP float ptr [ESP + 0xb0]        ; 00570750
    FNSTSW AX                           ; 00570757
    SAHF                                ; 00570759
    JNC 0x0057076a                      ; 0057075a
        ;   XREF to: 0057076a (CONDITIONAL_JUMP)  ; LAB_0057076a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0057075c
    MOV dword ptr [ESP + 0xb8],EAX      ; 00570763
    FLD float ptr [ESP + 0xb8]          ; 0057076a
        ;   Label: LAB_0057076a
    FCOMP float ptr [ESP + 0xb4]        ; 00570771
    FNSTSW AX                           ; 00570778
    SAHF                                ; 0057077a
    JBE 0x0057078b                      ; 0057077b
        ;   XREF to: 0057078b (CONDITIONAL_JUMP)  ; LAB_0057078b
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0057077d
    MOV dword ptr [ESP + 0xb8],EAX      ; 00570784
    FLD float ptr [EBX + 0x34]          ; 0057078b
        ;   Label: LAB_0057078b
    FADD float ptr [ESP + 0xb8]         ; 0057078e
    PUSH EBX                            ; 00570795
    FSTP float ptr [EBX + 0x34]         ; 00570796
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00570799
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057079e
    PUSH 0x0                            ; 005707a1
        ;   Label: LAB_005707a1
    LEA ESI,[ESP + 0x9c]                ; 005707a3
    MOV EAX,dword ptr [EBX + 0x276c]    ; 005707aa
    LEA EBP,[EBX + 0x2b4]               ; 005707b0
    MOV dword ptr [ESP + 0xb0],EAX      ; 005707b6
    PUSH EBP                            ; 005707bd
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 005707be
    LEA EDI,[ESP + 0x28]                ; 005707c4
    MOV dword ptr [ESP + 0xc4],EAX      ; 005707c8
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 005707cf
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 005707d4
    LEA EAX,[ESP + 0x20]                ; 005707d7
    LEA ESI,[ESP + 0x98]                ; 005707db
    PUSH EAX                            ; 005707e2
    MOVSD ES:EDI,ESI                    ; 005707e3
    MOVSD ES:EDI,ESI                    ; 005707e4
    MOVSD ES:EDI,ESI                    ; 005707e5
    PUSH EBX                            ; 005707e6
    MOV ESI,dword ptr [ESP + 0xb4]      ; 005707e7
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005707ee
    PUSH ESI                            ; 005707f5
    CALL dword ptr [EAX + 0x118]        ; 005707f6
    ADD ESP,0xc                         ; 005707fc
    TEST EAX,EAX                        ; 005707ff
    JZ 0x00570ae8                       ; 00570801
        ;   XREF to: 00570ae8 (CONDITIONAL_JUMP)  ; LAB_00570ae8
    CMP dword ptr [EBX + 0x276c],0x0    ; 00570807
    JNZ 0x00570af3                      ; 0057080e
        ;   XREF to: 00570af3 (CONDITIONAL_JUMP)  ; LAB_00570af3
    PUSH 0x1                            ; 00570814
        ;   Label: LAB_00570814
    PUSH 0x0                            ; 00570816
    LEA EAX,[EBX + 0x2b4]               ; 00570818
    PUSH EAX                            ; 0057081e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0057081f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0057081f
    ADD ESP,0xc                         ; 00570824
    PUSH EBX                            ; 00570827
        ;   Label: LAB_00570827
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 00570828
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0057082d
    LEA EBP,[EBX + 0x2b4]               ; 00570830
    PUSH EBP                            ; 00570836
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 00570837
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0057083c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057083f
    PUSH EBX                            ; 00570845
    CALL dword ptr [EAX + 0x114]        ; 00570846
    ADD ESP,0x4                         ; 0057084c
    TEST EAX,EAX                        ; 0057084f
    JNZ 0x00570892                      ; 00570851
        ;   XREF to: 00570892 (CONDITIONAL_JUMP)  ; LAB_00570892
    PUSH 0x544cc0                       ; 00570853
    MOV EDX,dword ptr [0x0264bf38]      ; 00570858 | DAT_0264bf38
    PUSH EDX                            ; 0057085e
    LEA EAX,[EBX + 0x9acac]             ; 0057085f
    PUSH dword ptr [EBX + 0x9acb8]      ; 00570865
    PUSH EAX                            ; 0057086b
    LEA ESI,[ESP + 0x20]                ; 0057086c
    CALL core_xform.cpp_FUN_00594380    ; 00570870
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00594380()
    ADD ESP,0x4                         ; 00570875
    LEA EAX,[ESP + 0xc]                 ; 00570878
    PUSH EAX                            ; 0057087c
    LEA EDI,[ESP + 0x10]                ; 0057087d
    LEA ESI,[ESP + 0x20]                ; 00570881
    PUSH EBP                            ; 00570885
    MOVSD ES:EDI,ESI                    ; 00570886
    MOVSD ES:EDI,ESI                    ; 00570887
    MOVSD ES:EDI,ESI                    ; 00570888
    MOVSD ES:EDI,ESI                    ; 00570889
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0 ; 0057088a
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0057088f
    PUSH dword ptr [ESP + 0xd8]         ; 00570892
        ;   Label: LAB_00570892
    PUSH EBX                            ; 00570899
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 0057089a
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0057089f
    LEA ESI,[EBX + 0x2b4]               ; 005708a2
    PUSH ESI                            ; 005708a8
    PUSH dword ptr [EBX + 0x2574]       ; 005708a9
    LEA EBP,[EBX + 0x30]                ; 005708af
    PUSH dword ptr [ESP + 0xe0]         ; 005708b2
    PUSH EBP                            ; 005708b9
    LEA EDI,[EBX + 0x20]                ; 005708ba
    PUSH EDI                            ; 005708bd
    LEA EAX,[EBX + 0x25648]             ; 005708be
    PUSH EAX                            ; 005708c4
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 005708c5
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005708ca
    PUSH ESI                            ; 005708cd
    PUSH dword ptr [EBX + 0x2574]       ; 005708ce
    PUSH dword ptr [ESP + 0xe0]         ; 005708d4
    PUSH EBP                            ; 005708db
    PUSH EDI                            ; 005708dc
    ADD EBX,0x60178                     ; 005708dd
    PUSH EBX                            ; 005708e3
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 005708e4
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005708e9
    ADD ESP,0xc0                        ; 005708ec
    POP EBP                             ; 005708f2
    POP EDI                             ; 005708f3
    POP ESI                             ; 005708f4
    POP EBX                             ; 005708f5
    RET                                 ; 005708f6
    PUSH 0x1                            ; 005708f7
        ;   Label: LAB_005708f7
    PUSH 0x0                            ; 005708f9
    PUSH EDX                            ; 005708fb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005708fc
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00570901
    PUSH EBX                            ; 00570904
    PUSH 0x5ec2cd                       ; 00570905 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00609ed0]      ; 0057090a | g_CConsolePtr
    PUSH ESI                            ; 00570910 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00570911
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x00570668                      ; 00570916
        ;   XREF to: 00570668 (UNCONDITIONAL_JUMP)  ; LAB_00570668
    PUSH 0x1                            ; 0057091b
        ;   Label: LAB_0057091b
    PUSH 0x2                            ; 0057091d
    JMP 0x00570662                      ; 0057091f
        ;   XREF to: 00570662 (UNCONDITIONAL_JUMP)  ; LAB_00570662
    JBE 0x0057091b                      ; 00570924
        ;   XREF to: 0057091b (CONDITIONAL_JUMP)  ; LAB_0057091b
        ;   Label: LAB_00570924
    CMP EAX,0x3                         ; 00570926
    JZ 0x005708f7                       ; 00570929
        ;   XREF to: 005708f7 (CONDITIONAL_JUMP)  ; LAB_005708f7
    PUSH 0x1                            ; 0057092b
        ;   Label: LAB_0057092b
    PUSH 0x0                            ; 0057092d
    LEA EAX,[EBX + 0x2b4]               ; 0057092f
    PUSH EAX                            ; 00570935
    JMP 0x00570663                      ; 00570936
        ;   XREF to: 00570663 (UNCONDITIONAL_JUMP)  ; LAB_00570663
    CMP dword ptr [EBX + 0x10a64],0x2   ; 0057093b
        ;   Label: LAB_0057093b
    JNZ 0x00570954                      ; 00570942
        ;   XREF to: 00570954 (CONDITIONAL_JUMP)  ; LAB_00570954
    PUSH dword ptr [ESP + 0xd8]         ; 00570944
    PUSH EBX                            ; 0057094b
    CALL core_svetlana.cpp_CSvetlana_processAI_FUN_00570c80 ; 0057094c
        ;   XREF to: 00570c80 (UNCONDITIONAL_CALL)  ; void core_svetlana.cpp_CSvetlana_processAI_FUN_00570c80(CSvetlana * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00570951
    LEA EAX,[EBX + 0x2b4]               ; 00570954
        ;   Label: LAB_00570954
    PUSH EAX                            ; 0057095a
    CALL core_motion.cpp_FUN_005035c0   ; 0057095b
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00570960
    ADD ESP,0x4                         ; 00570963
    CMP EAX,0xa                         ; 00570966
    JA 0x0057066b                       ; 00570969
        ;   XREF to: 0057066b (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x5704dc]  ; 0057096f | caseD_a | caseD_8 | caseD_9
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2570],0x0    ; 00570976
        ;   Label: caseD_0
    JZ 0x0057066b                       ; 0057097d
        ;   XREF to: 0057066b (CONDITIONAL_JUMP)  ; caseD_8
    MOV EDI,dword ptr [EBX + 0x25640]   ; 00570983
    XOR ESI,ESI                         ; 00570989
    TEST EDI,EDI                        ; 0057098b
    JZ 0x00570994                       ; 0057098d
        ;   XREF to: 00570994 (CONDITIONAL_JUMP)  ; LAB_00570994
    MOV ESI,0xa                         ; 0057098f
    CMP dword ptr [EBX + 0x10a68],0x0   ; 00570994
        ;   Label: LAB_00570994
    JZ 0x005709af                       ; 0057099b
        ;   XREF to: 005709af (CONDITIONAL_JUMP)  ; LAB_005709af
    CMP dword ptr [EBX + 0x10a70],0x0   ; 0057099d
    JZ 0x00570a5f                       ; 005709a4
        ;   XREF to: 00570a5f (CONDITIONAL_JUMP)  ; LAB_00570a5f
    MOV ESI,0x2                         ; 005709aa
    CMP dword ptr [EBX + 0x10a6c],0x0   ; 005709af
        ;   Label: LAB_005709af
    JZ 0x005709bd                       ; 005709b6
        ;   XREF to: 005709bd (CONDITIONAL_JUMP)  ; LAB_005709bd
    MOV ESI,0x3                         ; 005709b8
    CMP dword ptr [EBX + 0x10a80],0x0   ; 005709bd
        ;   Label: LAB_005709bd
    JZ 0x005709f1                       ; 005709c4
        ;   XREF to: 005709f1 (CONDITIONAL_JUMP)  ; LAB_005709f1
    MOV ESI,dword ptr [EBX + 0x25640]   ; 005709c6
    MOV dword ptr [EBX + 0x10a80],0x0   ; 005709cc
    TEST ESI,ESI                        ; 005709d6
    SETZ AL                             ; 005709d8
    AND EAX,0xff                        ; 005709db
    MOV dword ptr [EBX + 0x25640],EAX   ; 005709e0
    JZ 0x00570a69                       ; 005709e6
        ;   XREF to: 00570a69 (CONDITIONAL_JUMP)  ; LAB_00570a69
    MOV ESI,0xa                         ; 005709ec
    CMP dword ptr [EBX + 0x10a74],0x0   ; 005709f1
        ;   Label: LAB_005709f1
    JZ 0x00570a2a                       ; 005709f8
        ;   XREF to: 00570a2a (CONDITIONAL_JUMP)  ; LAB_00570a2a
    MOV EAX,dword ptr [EBX + 0x25640]   ; 005709fa
    MOV EDI,0x1                         ; 00570a00
    TEST EAX,EAX                        ; 00570a05
    JZ 0x00570a6d                       ; 00570a07
        ;   XREF to: 00570a6d (CONDITIONAL_JUMP)  ; LAB_00570a6d
    TEST EDI,EDI                        ; 00570a09
        ;   Label: LAB_00570a09
    JZ 0x00570a2a                       ; 00570a0b
        ;   XREF to: 00570a2a (CONDITIONAL_JUMP)  ; LAB_00570a2a
    MOV ECX,dword ptr [EBX + 0x25644]   ; 00570a0d
        ;   Label: LAB_00570a0d
    MOV dword ptr [EBX + 0x10a74],0x0   ; 00570a13
    TEST ECX,ECX                        ; 00570a1d
    JZ 0x00570ade                       ; 00570a1f
        ;   XREF to: 00570ade (CONDITIONAL_JUMP)  ; LAB_00570ade
    MOV ESI,0xe                         ; 00570a25
    FLD float ptr [EBX + 0x10a90]       ; 00570a2a
        ;   Label: LAB_00570a2a
    LEA EDI,[EBX + 0x2b4]               ; 00570a30
    FMUL float ptr [EBX + 0x2598]       ; 00570a36
    PUSH EDI                            ; 00570a3c
    FSTP float ptr [EBX + 0x2578]       ; 00570a3d
    CALL core_motion.cpp_FUN_005035c0   ; 00570a43
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00570a48
    ADD ESP,0x4                         ; 00570a4b
    CMP ESI,EAX                         ; 00570a4e
    JZ 0x0057066b                       ; 00570a50
        ;   XREF to: 0057066b (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 00570a56
    PUSH ESI                            ; 00570a58
    PUSH EDI                            ; 00570a59
    JMP 0x00570663                      ; 00570a5a
        ;   XREF to: 00570663 (UNCONDITIONAL_JUMP)  ; LAB_00570663
    MOV ESI,0x1                         ; 00570a5f
        ;   Label: LAB_00570a5f
    JMP 0x005709af                      ; 00570a64
        ;   XREF to: 005709af (UNCONDITIONAL_JUMP)  ; LAB_005709af
    XOR ESI,ESI                         ; 00570a69
        ;   Label: LAB_00570a69
    JMP 0x005709f1                      ; 00570a6b
        ;   XREF to: 005709f1 (UNCONDITIONAL_JUMP)  ; LAB_005709f1
    CMP dword ptr [EBX + 0x10a64],0x2   ; 00570a6d
        ;   Label: LAB_00570a6d
    JZ 0x00570a09                       ; 00570a74
        ;   XREF to: 00570a09 (CONDITIONAL_JUMP)  ; LAB_00570a09
    PUSH EBX                            ; 00570a76
    CALL core_hero.cpp_FUN_004cec50     ; 00570a77
        ;   XREF to: 004cec50 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cec50()
    XOR EDI,EDI                         ; 00570a7c
    ADD ESP,0x4                         ; 00570a7e
    TEST EAX,EAX                        ; 00570a81
    JNZ 0x00570a09                      ; 00570a83
        ;   XREF to: 00570a09 (CONDITIONAL_JUMP)  ; LAB_00570a09
    PUSH EAX                            ; 00570a85
    PUSH EBX                            ; 00570a86
    CALL core_hero.cpp_FUN_004cf030     ; 00570a87
        ;   XREF to: 004cf030 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf030()
    ADD ESP,0x8                         ; 00570a8c
    MOV EBP,EAX                         ; 00570a8f
    TEST EAX,EAX                        ; 00570a91
    JBE 0x00570a9a                      ; 00570a93
        ;   XREF to: 00570a9a (CONDITIONAL_JUMP)  ; LAB_00570a9a
    CMP EAX,0x1                         ; 00570a95
    JNZ 0x00570ac5                      ; 00570a98
        ;   XREF to: 00570ac5 (CONDITIONAL_JUMP)  ; LAB_00570ac5
    TEST EBP,EBP                        ; 00570a9a
        ;   Label: LAB_00570a9a
    JNZ 0x00570a09                      ; 00570a9c
        ;   XREF to: 00570a09 (CONDITIONAL_JUMP)  ; LAB_00570a09
    PUSH EBX                            ; 00570aa2
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90 ; 00570aa3
        ;   XREF to: 004cee90 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(CHero * this_ptr)
    ADD ESP,0x4                         ; 00570aa8
    TEST EAX,EAX                        ; 00570aab
    JNZ 0x00570a09                      ; 00570aad
        ;   XREF to: 00570a09 (CONDITIONAL_JUMP)  ; LAB_00570a09
    PUSH EBX                            ; 00570ab3
    CALL core_hero.cpp_FUN_004cf2b0     ; 00570ab4
        ;   XREF to: 004cf2b0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004cf2b0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00570ab9
    TEST EAX,EAX                        ; 00570abc
    JNZ 0x00570ad0                      ; 00570abe
        ;   XREF to: 00570ad0 (CONDITIONAL_JUMP)  ; LAB_00570ad0
    JMP 0x00570a0d                      ; 00570ac0
        ;   XREF to: 00570a0d (UNCONDITIONAL_JUMP)  ; LAB_00570a0d
    PUSH EBX                            ; 00570ac5
        ;   Label: LAB_00570ac5
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230 ; 00570ac6
        ;   XREF to: 004cf230 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230(CHero * this_ptr)
    ADD ESP,0x4                         ; 00570acb
    JMP 0x00570a9a                      ; 00570ace
        ;   XREF to: 00570a9a (UNCONDITIONAL_JUMP)  ; LAB_00570a9a
    PUSH EBX                            ; 00570ad0
        ;   Label: LAB_00570ad0
    CALL core_hero.cpp_FUN_004cf440     ; 00570ad1
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf440()
    ADD ESP,0x4                         ; 00570ad6
    JMP 0x00570a09                      ; 00570ad9
        ;   XREF to: 00570a09 (UNCONDITIONAL_JUMP)  ; LAB_00570a09
    MOV ESI,0xf                         ; 00570ade
        ;   Label: LAB_00570ade
    JMP 0x00570a2a                      ; 00570ae3
        ;   XREF to: 00570a2a (UNCONDITIONAL_JUMP)  ; LAB_00570a2a
    MOV dword ptr [EBX + 0x276c],EAX    ; 00570ae8
        ;   Label: LAB_00570ae8
    JMP 0x00570814                      ; 00570aee
        ;   XREF to: 00570814 (UNCONDITIONAL_JUMP)  ; LAB_00570814
    CMP dword ptr [EBX + 0x10a74],0x0   ; 00570af3
        ;   Label: LAB_00570af3
    JZ 0x00570827                       ; 00570afa
        ;   XREF to: 00570827 (CONDITIONAL_JUMP)  ; LAB_00570827
    PUSH 0x1                            ; 00570b00
    PUSH 0x10                           ; 00570b02
    PUSH EBP                            ; 00570b04
    JMP 0x0057081f                      ; 00570b05
        ;   XREF to: 0057081f (UNCONDITIONAL_JUMP)  ; LAB_0057081f
    MOV dword ptr [ESP + 0x44],EDI      ; 00570b0a
        ;   Label: LAB_00570b0a
    LEA ESI,[EBX + 0x2508]              ; 00570b0e
    MOV dword ptr [ESP + 0x48],EDI      ; 00570b14
    MOV dword ptr [ESP + 0x4c],EDI      ; 00570b18
    MOV EAX,dword ptr [ESI]             ; 00570b1c
    MOV dword ptr [ESP + 0x44],EAX      ; 00570b1e
    MOV EAX,dword ptr [ESI + 0x4]       ; 00570b22
    MOV dword ptr [ESP + 0x48],EAX      ; 00570b25
    MOV EAX,dword ptr [ESI + 0x8]       ; 00570b29
    MOV dword ptr [ESP + 0x4c],EAX      ; 00570b2c
    LEA EAX,[EBX + 0x2b4]               ; 00570b30
    PUSH EAX                            ; 00570b36
    CALL core_motion.cpp_FUN_005035c0   ; 00570b37
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00570b3c
    ADD ESP,0x4                         ; 00570b3f
    CMP EAX,0x1a                        ; 00570b42
    JZ 0x00570b57                       ; 00570b45
        ;   XREF to: 00570b57 (CONDITIONAL_JUMP)  ; LAB_00570b57
    PUSH dword ptr [ESP + 0xd8]         ; 00570b47
    PUSH EBX                            ; 00570b4e
    CALL core_charactr.cpp_FUN_00423a10 ; 00570b4f
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    ADD ESP,0x8                         ; 00570b54
    LEA EAX,[EBX + 0x2588]              ; 00570b57
        ;   Label: LAB_00570b57
    FLD float ptr [ESP + 0xd8]          ; 00570b5d
    FLD float ptr [EAX]                 ; 00570b64
    FMUL ST1                            ; 00570b66
    FLD float ptr [EAX + 0x4]           ; 00570b68
    FMUL ST2                            ; 00570b6b
    FLD float ptr [EAX + 0x8]           ; 00570b6d
    FMULP ST3                           ; 00570b70
    FLD float ptr [ESP + 0x44]          ; 00570b72
    FLD float ptr [ESP + 0x48]          ; 00570b76
    FLD float ptr [ESP + 0x4c]          ; 00570b7a
    LEA EDI,[ESP + 0x8c]                ; 00570b7e
    LEA ESI,[ESP + 0x5c]                ; 00570b85
    LEA EDX,[EBX + 0x257c]              ; 00570b89
    FXCH ST4                            ; 00570b8f
    FSTP float ptr [ESP + 0x5c]         ; 00570b91
    FXCH ST2                            ; 00570b95
    FSTP float ptr [ESP + 0x60]         ; 00570b97
    FXCH ST3                            ; 00570b9b
    FSTP float ptr [ESP + 0x64]         ; 00570b9d
    MOVSD ES:EDI,ESI                    ; 00570ba1
    MOVSD ES:EDI,ESI                    ; 00570ba2
    MOVSD ES:EDI,ESI                    ; 00570ba3
    LEA EAX,[EBX + 0x2b4]               ; 00570ba4
    FLD float ptr [ESP + 0x8c]          ; 00570baa
    FLD float ptr [ESP + 0x90]          ; 00570bb1
    FLD float ptr [ESP + 0x94]          ; 00570bb8
    LEA EDI,[ESP + 0x2c]                ; 00570bbf
    LEA ESI,[ESP + 0x68]                ; 00570bc3
    FXCH ST2                            ; 00570bc7
    FADD float ptr [EDX]                ; 00570bc9
    FXCH                                ; 00570bcb
    FADD float ptr [EDX + 0x4]          ; 00570bcd
    FXCH ST2                            ; 00570bd0
    FADD float ptr [EDX + 0x8]          ; 00570bd2
    FXCH                                ; 00570bd5
    FSTP float ptr [ESP + 0x68]         ; 00570bd7
    FXCH                                ; 00570bdb
    FSTP float ptr [ESP + 0x6c]         ; 00570bdd
    FSTP float ptr [ESP + 0x70]         ; 00570be1
    MOVSD ES:EDI,ESI                    ; 00570be5
    MOVSD ES:EDI,ESI                    ; 00570be6
    MOVSD ES:EDI,ESI                    ; 00570be7
    PUSH EAX                            ; 00570be8
    FXCH ST2                            ; 00570be9
    FADD float ptr [ESP + 0x30]         ; 00570beb
    FXCH ST2                            ; 00570bef
    FADD float ptr [ESP + 0x34]         ; 00570bf1
    FXCH                                ; 00570bf5
    FADD float ptr [ESP + 0x38]         ; 00570bf7
    FXCH ST2                            ; 00570bfb
    FSTP float ptr [ESP + 0x48]         ; 00570bfd
    FSTP float ptr [ESP + 0x4c]         ; 00570c01
    FSTP float ptr [ESP + 0x50]         ; 00570c05
    CALL core_motion.cpp_FUN_005035c0   ; 00570c09
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00570c0e
    ADD ESP,0x4                         ; 00570c11
    CMP EAX,0x17                        ; 00570c14
    JZ 0x00570c45                       ; 00570c17
        ;   XREF to: 00570c45 (CONDITIONAL_JUMP)  ; LAB_00570c45
    CMP EAX,0x18                        ; 00570c19
    JZ 0x00570c45                       ; 00570c1c
        ;   XREF to: 00570c45 (CONDITIONAL_JUMP)  ; LAB_00570c45
    CMP EAX,0x19                        ; 00570c1e
    JZ 0x00570c45                       ; 00570c21
        ;   XREF to: 00570c45 (CONDITIONAL_JUMP)  ; LAB_00570c45
    CMP EAX,0x25                        ; 00570c23
    JZ 0x00570c45                       ; 00570c26
        ;   XREF to: 00570c45 (CONDITIONAL_JUMP)  ; LAB_00570c45
    CMP EAX,0x26                        ; 00570c28
    JZ 0x00570c45                       ; 00570c2b
        ;   XREF to: 00570c45 (CONDITIONAL_JUMP)  ; LAB_00570c45
    CMP EAX,0x27                        ; 00570c2d
    JZ 0x00570c45                       ; 00570c30
        ;   XREF to: 00570c45 (CONDITIONAL_JUMP)  ; LAB_00570c45
    CMP EAX,0x28                        ; 00570c32
    JZ 0x00570c45                       ; 00570c35
        ;   XREF to: 00570c45 (CONDITIONAL_JUMP)  ; LAB_00570c45
    LEA EAX,[ESP + 0x44]                ; 00570c37
    PUSH EAX                            ; 00570c3b
    PUSH EBX                            ; 00570c3c
    CALL core_charactr.cpp_FUN_00423a60 ; 00570c3d
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00570c42
    LEA EAX,[EBX + 0x2b4]               ; 00570c45
        ;   Label: LAB_00570c45
    PUSH EAX                            ; 00570c4b
    CALL core_motion.cpp_FUN_005035c0   ; 00570c4c
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00570c51
    ADD ESP,0x4                         ; 00570c54
    CMP EAX,0x1a                        ; 00570c57
    JNZ 0x00570827                      ; 00570c5a
        ;   XREF to: 00570827 (CONDITIONAL_JUMP)  ; LAB_00570827
    FLD float ptr [ESP + 0xd8]          ; 00570c60
    FMUL double ptr [0x005ec303]        ; 00570c67 | DAT_005ec303
    FADD float ptr [EBX + 0x24]         ; 00570c6d
    FSTP float ptr [EBX + 0x24]         ; 00570c70
    JMP 0x00570827                      ; 00570c73
        ;   XREF to: 00570827 (UNCONDITIONAL_JUMP)  ; LAB_00570827

