; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_process_FUN_0040f4d0(CBaron *this_ptr,float delta_time)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0040f4b8 = 0040f9c4
;   TerminatedCString s_s_confused_while_walking_005d34a0
;   undefined4 DAT_00610914
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061c010
;   undefined4 DAT_007c3498
;   undefined4 DAT_007c34cc
;   undefined4 DAT_007c34d0
;   undefined4 DAT_007c34dc
;   CConsole g_CConsoleInstance
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_baron.cpp_CBaron_advanceMotion_FUN_00410110
;   core_baron.cpp_CBaron_updateMountedPosition_FUN_0040fc00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_00435320
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
;   core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004b7150
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f4d0
        ;   Label: core_baron.cpp_CBaron_process_FUN_0040f4d0
    PUSH ESI                            ; 0040f4d1
    PUSH EDI                            ; 0040f4d2
    PUSH EBP                            ; 0040f4d3
    SUB ESP,0xa8                        ; 0040f4d4
    MOV EBX,dword ptr [ESP + 0xbc]      ; 0040f4da
    MOV EDX,dword ptr [EBX + 0x200a4]   ; 0040f4e1
    LEA ESI,[EBX + 0x158]               ; 0040f4e7
    TEST EDX,EDX                        ; 0040f4ed
    JZ 0x0040f535                       ; 0040f4ef
        ;   XREF to: 0040f535 (CONDITIONAL_JUMP)  ; LAB_0040f535
    LEA EAX,[EBX + 0x20010]             ; 0040f4f1
    PUSH EAX                            ; 0040f4f7
    MOV ECX,dword ptr [0x0061b4d0]      ; 0040f4f8 | DAT_0061b4d0
    PUSH ECX                            ; 0040f4fe
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0040f4ff
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0040f504
    TEST EAX,EAX                        ; 0040f507
    JZ 0x0040f518                       ; 0040f509
        ;   XREF to: 0040f518 (CONDITIONAL_JUMP)  ; LAB_0040f518
    PUSH 0x1                            ; 0040f50b
    PUSH 0x7                            ; 0040f50d
    PUSH ESI                            ; 0040f50f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0040f510
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0040f515
    CMP dword ptr [EBX + 0x200a4],0x0   ; 0040f518
        ;   Label: LAB_0040f518
    JNZ 0x0040f572                      ; 0040f51f
        ;   XREF to: 0040f572 (CONDITIONAL_JUMP)  ; LAB_0040f572
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 0040f521
    JNZ 0x0040f572                      ; 0040f528
        ;   XREF to: 0040f572 (CONDITIONAL_JUMP)  ; LAB_0040f572
    ADD ESP,0xa8                        ; 0040f52a
        ;   Label: LAB_0040f52a
    POP EBP                             ; 0040f530
    POP EDI                             ; 0040f531
    POP ESI                             ; 0040f532
    POP EBX                             ; 0040f533
    RET                                 ; 0040f534
    LEA EAX,[EBX + 0x1ffac]             ; 0040f535
        ;   Label: LAB_0040f535
    PUSH EAX                            ; 0040f53b
    MOV EDI,dword ptr [0x0061b4d0]      ; 0040f53c | DAT_0061b4d0
    PUSH EDI                            ; 0040f542
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0040f543
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0040f548
    TEST EAX,EAX                        ; 0040f54b
    JZ 0x0040f518                       ; 0040f54d
        ;   XREF to: 0040f518 (CONDITIONAL_JUMP)  ; LAB_0040f518
    PUSH 0x1                            ; 0040f54f
    PUSH 0x6                            ; 0040f551
    PUSH ESI                            ; 0040f553
    MOV dword ptr [EBX + 0x200a4],0x1   ; 0040f554
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0040f55e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0040f563
    MOV dword ptr [EBX + 0x200a8],0x1   ; 0040f566
    JMP 0x0040f518                      ; 0040f570
        ;   XREF to: 0040f518 (UNCONDITIONAL_JUMP)  ; LAB_0040f518
    PUSH dword ptr [ESP + 0xc0]         ; 0040f572
        ;   Label: LAB_0040f572
    PUSH EBX                            ; 0040f579
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 0040f57a
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0040f57f
    TEST EAX,EAX                        ; 0040f582
    JZ 0x0040f52a                       ; 0040f584
        ;   XREF to: 0040f52a (CONDITIONAL_JUMP)  ; LAB_0040f52a
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 0040f586
    JZ 0x0040f794                       ; 0040f58d
        ;   XREF to: 0040f794 (CONDITIONAL_JUMP)  ; LAB_0040f794
    PUSH dword ptr [ESP + 0xc0]         ; 0040f593
        ;   Label: LAB_0040f593
    PUSH EBX                            ; 0040f59a
    CALL core_charactr.cpp_FUN_00435320 ; 0040f59b
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 0040f5a0
    FLD float ptr [EBX + 0xc1d0]        ; 0040f5a3
    FSUB float ptr [ESP + 0xc0]         ; 0040f5a9
    FST float ptr [EBX + 0xc1d0]        ; 0040f5b0
    FLDZ                                ; 0040f5b6
    FCOMPP                              ; 0040f5b8
    FNSTSW AX                           ; 0040f5ba
    SAHF                                ; 0040f5bc
    JBE 0x0040f5c9                      ; 0040f5bd
        ;   XREF to: 0040f5c9 (CONDITIONAL_JUMP)  ; LAB_0040f5c9
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 0040f5bf
    LEA EAX,[EBX + 0x249c]              ; 0040f5c9
        ;   Label: LAB_0040f5c9
    PUSH dword ptr [ESP + 0xc0]         ; 0040f5cf
    MOV dword ptr [EAX + 0x8],0x0       ; 0040f5d6
    PUSH EBX                            ; 0040f5dd
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040f5de
    MOV dword ptr [EAX + 0x4],EDX       ; 0040f5e1
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040f5e4
    MOV dword ptr [EAX],EDX             ; 0040f5e7
    CALL core_baron.cpp_CBaron_advanceMotion_FUN_00410110 ; 0040f5e9
        ;   XREF to: 00410110 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaron_advanceMotion_FUN_00410110(CBaron * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x200a4]   ; 0040f5ee
    ADD ESP,0x8                         ; 0040f5f4
    TEST ECX,ECX                        ; 0040f5f7
    JZ 0x0040f52a                       ; 0040f5f9
        ;   XREF to: 0040f52a (CONDITIONAL_JUMP)  ; LAB_0040f52a
    PUSH dword ptr [ESP + 0xc0]         ; 0040f5ff
    PUSH EBX                            ; 0040f606
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 0040f607
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    MOV ESI,EAX                         ; 0040f60c
    ADD ESP,0x8                         ; 0040f60e
    LEA EAX,[EBX + 0x158]               ; 0040f611
    TEST ESI,ESI                        ; 0040f617
    JZ 0x0040fa4a                       ; 0040f619
        ;   XREF to: 0040fa4a (CONDITIONAL_JUMP)  ; LAB_0040fa4a
    MOV ESI,dword ptr [EBX + 0x273c]    ; 0040f61f
    CMP ESI,0x2                         ; 0040f625
    JNC 0x0040f7d6                      ; 0040f628
        ;   XREF to: 0040f7d6 (CONDITIONAL_JUMP)  ; LAB_0040f7d6
    CMP ESI,0x1                         ; 0040f62e
    JNZ 0x0040f7dd                      ; 0040f631
        ;   XREF to: 0040f7dd (CONDITIONAL_JUMP)  ; LAB_0040f7dd
    PUSH ESI                            ; 0040f637
    PUSH ESI                            ; 0040f638
    PUSH EAX                            ; 0040f639
        ;   Label: LAB_0040f639
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0040f63a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0040f63a
    ADD ESP,0xc                         ; 0040f63f
        ;   Label: LAB_0040f63f
    LEA EAX,[EBX + 0x249c]              ; 0040f642
        ;   Label: default
    PUSH dword ptr [ESP + 0xc0]         ; 0040f648
    MOV dword ptr [EAX + 0x8],0x0       ; 0040f64f
    PUSH EBX                            ; 0040f656
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040f657
    MOV dword ptr [EAX + 0x4],EDX       ; 0040f65a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040f65d
    MOV dword ptr [EAX],EDX             ; 0040f660
    CALL core_charactr.cpp_FUN_0042d700 ; 0040f662
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    ADD ESP,0x8                         ; 0040f667
    PUSH EBX                            ; 0040f66a
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 0040f66b
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0040f670
    LEA EBP,[EBX + 0x158]               ; 0040f673
    PUSH EBP                            ; 0040f679
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 0040f67a
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040f67f
    PUSH 0x567360                       ; 0040f682
    MOV EAX,[0x007c3498]                ; 0040f687 | DAT_007c3498
    PUSH EAX                            ; 0040f68c
    LEA EAX,[EBX + 0x20074]             ; 0040f68d
    PUSH dword ptr [EBX + 0x20080]      ; 0040f693
    PUSH EAX                            ; 0040f699
    LEA ESI,[ESP + 0x10]                ; 0040f69a
    CALL core_xform.cpp_FUN_005b7ed0    ; 0040f69e
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    ADD ESP,0x4                         ; 0040f6a3
    LEA EAX,[ESP + 0x1c]                ; 0040f6a6
    PUSH EAX                            ; 0040f6aa
    LEA EDI,[ESP + 0x20]                ; 0040f6ab
    LEA ESI,[ESP + 0x10]                ; 0040f6af
    PUSH EBP                            ; 0040f6b3
    MOVSD ES:EDI,ESI                    ; 0040f6b4
    MOVSD ES:EDI,ESI                    ; 0040f6b5
    MOVSD ES:EDI,ESI                    ; 0040f6b6
    MOVSD ES:EDI,ESI                    ; 0040f6b7
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60 ; 0040f6b8
        ;   XREF to: 00568d60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0040f6bd
    PUSH dword ptr [ESP + 0xc0]         ; 0040f6c0
    PUSH EBX                            ; 0040f6c7
    XOR ESI,ESI                         ; 0040f6c8
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 0040f6ca
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0040f6cf
    ADD EBX,0x20                        ; 0040f6d2
    PUSH 0x40000000                     ; 0040f6d5
        ;   Label: LAB_0040f6d5
    PUSH 0xc0000000                     ; 0040f6da
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0040f6df
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xac],EAX      ; 0040f6e4
    FLD float ptr [ESP + 0xac]          ; 0040f6eb
    ADD ESP,0x8                         ; 0040f6f2
    INC ESI                             ; 0040f6f5
    MOV EDX,0x40000000                  ; 0040f6f6
    PUSH 0x40000000                     ; 0040f6fb
    FSTP float ptr [ESP + 0x54]         ; 0040f700
    PUSH 0xc0000000                     ; 0040f704
    MOV dword ptr [ESP + 0x5c],EDX      ; 0040f709
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0040f70d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xac],EAX      ; 0040f712
    MOV ECX,dword ptr [0x0061c010]      ; 0040f719 | DAT_0061c010
    FLD float ptr [ESP + 0xac]          ; 0040f71f
    ADD ESP,0x8                         ; 0040f726
    LEA EAX,[ESP + 0x50]                ; 0040f729
    FLD float ptr [ESP + 0x50]          ; 0040f72d
    FLD float ptr [ESP + 0x54]          ; 0040f731
    FXCH ST2                            ; 0040f735
    FSTP float ptr [ESP + 0x58]         ; 0040f737
    PUSH 0xffff                         ; 0040f73b
    FLD float ptr [ESP + 0x5c]          ; 0040f740
    PUSH 0x0                            ; 0040f744
    FXCH                                ; 0040f746
    FADD float ptr [EBX]                ; 0040f748
    PUSH 0x40000000                     ; 0040f74a
    FSTP float ptr [ESP + 0x5c]         ; 0040f74f
    FXCH                                ; 0040f753
    FADD float ptr [EBX + 0x4]          ; 0040f755
    PUSH EAX                            ; 0040f758
    FSTP float ptr [ESP + 0x64]         ; 0040f759
    FADD float ptr [EBX + 0x8]          ; 0040f75d
    PUSH ECX                            ; 0040f760
    FSTP float ptr [ESP + 0x6c]         ; 0040f761
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 0040f765
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0040f76a
    CMP ESI,0x2                         ; 0040f76d
    JL 0x0040f6d5                       ; 0040f770
        ;   XREF to: 0040f6d5 (CONDITIONAL_JUMP)  ; LAB_0040f6d5
    FLD float ptr [0x007c34dc]          ; 0040f776 | DAT_007c34dc
    FADD float ptr [ESP + 0xc0]         ; 0040f77c
    FSTP float ptr [0x007c34dc]         ; 0040f783 | DAT_007c34dc
    ADD ESP,0xa8                        ; 0040f789
    POP EBP                             ; 0040f78f
    POP EDI                             ; 0040f790
    POP ESI                             ; 0040f791
    POP EBX                             ; 0040f792
    RET                                 ; 0040f793
    PUSH dword ptr [ESP + 0xc0]         ; 0040f794
        ;   Label: LAB_0040f794
    PUSH EBX                            ; 0040f79b
    CALL core_baron.cpp_CBaron_updateMountedPosition_FUN_0040fc00 ; 0040f79c
        ;   XREF to: 0040fc00 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaron_updateMountedPosition_FUN_0040fc00(CBaron * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0040f7a1
    JMP 0x0040f593                      ; 0040f7a4
        ;   XREF to: 0040f593 (UNCONDITIONAL_JUMP)  ; LAB_0040f593
    PUSH 0x1                            ; 0040f7a9
        ;   Label: LAB_0040f7a9
    PUSH 0x0                            ; 0040f7ab
    PUSH EAX                            ; 0040f7ad
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0040f7ae
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0040f7b3
    PUSH EBX                            ; 0040f7b6
    PUSH 0x5d34a0                       ; 0040f7b7 | = "%s confused while walking to scriptDe..."
    MOV EBP,dword ptr [0x00611100]      ; 0040f7bc | g_CConsolePtr
    PUSH EBP                            ; 0040f7c2 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0040f7c3
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x0040f63f                      ; 0040f7c8
        ;   XREF to: 0040f63f (UNCONDITIONAL_JUMP)  ; LAB_0040f63f
    PUSH 0x1                            ; 0040f7cd
        ;   Label: LAB_0040f7cd
    PUSH 0x3                            ; 0040f7cf
    JMP 0x0040f639                      ; 0040f7d1
        ;   XREF to: 0040f639 (UNCONDITIONAL_JUMP)  ; LAB_0040f639
    JBE 0x0040f7cd                      ; 0040f7d6
        ;   XREF to: 0040f7cd (CONDITIONAL_JUMP)  ; LAB_0040f7cd
        ;   Label: LAB_0040f7d6
    CMP ESI,0x3                         ; 0040f7d8
    JZ 0x0040f7a9                       ; 0040f7db
        ;   XREF to: 0040f7a9 (CONDITIONAL_JUMP)  ; LAB_0040f7a9
    PUSH 0x1                            ; 0040f7dd
        ;   Label: LAB_0040f7dd
    PUSH 0x0                            ; 0040f7df
    LEA EAX,[EBX + 0x158]               ; 0040f7e1
    JMP 0x0040f639                      ; 0040f7e7
        ;   XREF to: 0040f639 (UNCONDITIONAL_JUMP)  ; LAB_0040f639
    MOV ESI,dword ptr [0x007c34cc]      ; 0040f7ec | DAT_007c34cc
        ;   Label: caseD_4
    LEA EAX,[ESI*0x4 + 0x0]             ; 0040f7f2
    SUB EAX,ESI                         ; 0040f7f9
    MOV ESI,EAX                         ; 0040f7fb
    SHL ESI,0x4                         ; 0040f7fd
    LEA EAX,[EBX + 0xfd8]               ; 0040f800
    ADD EAX,ESI                         ; 0040f806
    PUSH EAX                            ; 0040f808
    PUSH 0x2c8af28                      ; 0040f809 | DAT_02c8af28
    LEA ESI,[ESP + 0x94]                ; 0040f80e
    LEA EDI,[ESP + 0x88]                ; 0040f815
    CALL core_xform.cpp_FUN_005b5080    ; 0040f81c
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0040f821
    LEA EAX,[ESP + 0x80]                ; 0040f824
    LEA ESI,[ESP + 0x8c]                ; 0040f82b
    PUSH EAX                            ; 0040f832
    MOVSD ES:EDI,ESI                    ; 0040f833
    MOVSD ES:EDI,ESI                    ; 0040f834
    MOVSD ES:EDI,ESI                    ; 0040f835
    PUSH EBX                            ; 0040f836
    LEA ESI,[ESP + 0x4c]                ; 0040f837
    LEA EDI,[ESP + 0x28]                ; 0040f83b
    CALL core_actor.cpp_FUN_00408b40    ; 0040f83f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x4c]                ; 0040f844
    ADD ESP,0x8                         ; 0040f848
    MOVSD ES:EDI,ESI                    ; 0040f84b
    MOVSD ES:EDI,ESI                    ; 0040f84c
    MOVSD ES:EDI,ESI                    ; 0040f84d
    LEA EAX,[ESP + 0x74]                ; 0040f84e
    LEA ESI,[ESP + 0x20]                ; 0040f852
    CMP EAX,ESI                         ; 0040f856
    JZ 0x0040f872                       ; 0040f858
        ;   XREF to: 0040f872 (CONDITIONAL_JUMP)  ; LAB_0040f872
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040f85a
    MOV dword ptr [ESP + 0x74],EAX      ; 0040f85e
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040f862
    MOV dword ptr [ESP + 0x78],EAX      ; 0040f866
    MOV EAX,dword ptr [ESP + 0x28]      ; 0040f86a
    MOV dword ptr [ESP + 0x7c],EAX      ; 0040f86e
    MOV ESI,dword ptr [0x007c34d0]      ; 0040f872 | DAT_007c34d0
        ;   Label: LAB_0040f872
    LEA EAX,[ESI*0x4 + 0x0]             ; 0040f878
    SUB EAX,ESI                         ; 0040f87f
    MOV ESI,EAX                         ; 0040f881
    SHL ESI,0x4                         ; 0040f883
    LEA EAX,[EBX + 0xfd8]               ; 0040f886
    ADD EAX,ESI                         ; 0040f88c
    PUSH EAX                            ; 0040f88e
    PUSH 0x2c8af28                      ; 0040f88f | DAT_02c8af28
    LEA ESI,[ESP + 0x40]                ; 0040f894
    LEA EDI,[ESP + 0x70]                ; 0040f898
    CALL core_xform.cpp_FUN_005b5080    ; 0040f89c
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0040f8a1
    LEA EAX,[ESP + 0x68]                ; 0040f8a4
    LEA ESI,[ESP + 0x38]                ; 0040f8a8
    PUSH EAX                            ; 0040f8ac
    MOVSD ES:EDI,ESI                    ; 0040f8ad
    MOVSD ES:EDI,ESI                    ; 0040f8ae
    MOVSD ES:EDI,ESI                    ; 0040f8af
    PUSH EBX                            ; 0040f8b0
    LEA ESI,[ESP + 0x34]                ; 0040f8b1
    LEA EDI,[ESP + 0x64]                ; 0040f8b5
    CALL core_actor.cpp_FUN_00408b40    ; 0040f8b9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x34]                ; 0040f8be
    ADD ESP,0x8                         ; 0040f8c2
    MOVSD ES:EDI,ESI                    ; 0040f8c5
    MOVSD ES:EDI,ESI                    ; 0040f8c6
    MOVSD ES:EDI,ESI                    ; 0040f8c7
    LEA EAX,[ESP + 0x5c]                ; 0040f8c8
    LEA ESI,[ESP + 0x98]                ; 0040f8cc
    CMP ESI,EAX                         ; 0040f8d3
    JZ 0x0040f8f8                       ; 0040f8d5
        ;   XREF to: 0040f8f8 (CONDITIONAL_JUMP)  ; LAB_0040f8f8
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0040f8d7
    MOV dword ptr [ESP + 0x98],EAX      ; 0040f8db
    MOV EAX,dword ptr [ESP + 0x60]      ; 0040f8e2
    MOV dword ptr [ESP + 0x9c],EAX      ; 0040f8e6
    MOV EAX,dword ptr [ESP + 0x64]      ; 0040f8ed
    MOV dword ptr [ESP + 0xa0],EAX      ; 0040f8f1
    CMP dword ptr [EBX + 0x20088],0x0   ; 0040f8f8
        ;   Label: LAB_0040f8f8
    JNZ 0x0040f965                      ; 0040f8ff
        ;   XREF to: 0040f965 (CONDITIONAL_JUMP)  ; LAB_0040f965
    PUSH 0x610914                       ; 0040f901 | DAT_00610914
    PUSH 0x3f000000                     ; 0040f906
    PUSH 0x3f000000                     ; 0040f90b
    LEA EAX,[EBX + 0x2008c]             ; 0040f910
    PUSH 0x40000000                     ; 0040f916
    PUSH EAX                            ; 0040f91b
    LEA EAX,[ESP + 0x88]                ; 0040f91c
    PUSH EAX                            ; 0040f923
    MOV EDI,dword ptr [0x0061c010]      ; 0040f924 | DAT_0061c010
    PUSH EDI                            ; 0040f92a
    CALL core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004b7150 ; 0040f92b
        ;   XREF to: 004b7150 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004b7150(CFireEffect * this_ptr, CVector3f * start_point, CVector3f * end_point, float size, ...)
    ADD ESP,0x1c                        ; 0040f930
    PUSH 0x610914                       ; 0040f933 | DAT_00610914
    PUSH 0x3f000000                     ; 0040f938
    PUSH 0x3f000000                     ; 0040f93d
    LEA EAX,[EBX + 0x20098]             ; 0040f942
    PUSH 0x40000000                     ; 0040f948
    PUSH EAX                            ; 0040f94d
    LEA EAX,[ESP + 0xac]                ; 0040f94e
    PUSH EAX                            ; 0040f955
    MOV EBP,dword ptr [0x0061c010]      ; 0040f956 | DAT_0061c010
    PUSH EBP                            ; 0040f95c
    CALL core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004b7150 ; 0040f95d
        ;   XREF to: 004b7150 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004b7150(CFireEffect * this_ptr, CVector3f * start_point, CVector3f * end_point, float size, ...)
    ADD ESP,0x1c                        ; 0040f962
    LEA EAX,[ESP + 0x74]                ; 0040f965
        ;   Label: LAB_0040f965
    LEA ESI,[EBX + 0x2008c]             ; 0040f969
    CMP ESI,EAX                         ; 0040f96f
    JZ 0x0040f987                       ; 0040f971
        ;   XREF to: 0040f987 (CONDITIONAL_JUMP)  ; LAB_0040f987
    MOV EAX,dword ptr [ESP + 0x74]      ; 0040f973
    MOV dword ptr [ESI],EAX             ; 0040f977
    MOV EAX,dword ptr [ESP + 0x78]      ; 0040f979
    MOV dword ptr [ESI + 0x4],EAX       ; 0040f97d
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0040f980
    MOV dword ptr [ESI + 0x8],EAX       ; 0040f984
    LEA EAX,[ESP + 0x98]                ; 0040f987
        ;   Label: LAB_0040f987
    LEA ESI,[EBX + 0x20098]             ; 0040f98e
    CMP ESI,EAX                         ; 0040f994
    JZ 0x0040f9b5                       ; 0040f996
        ;   XREF to: 0040f9b5 (CONDITIONAL_JUMP)  ; LAB_0040f9b5
    MOV EAX,dword ptr [ESP + 0x98]      ; 0040f998
    MOV dword ptr [ESI],EAX             ; 0040f99f
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0040f9a1
    MOV dword ptr [ESI + 0x4],EAX       ; 0040f9a8
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0040f9ab
    MOV dword ptr [ESI + 0x8],EAX       ; 0040f9b2
    MOV dword ptr [EBX + 0x20088],0x0   ; 0040f9b5
        ;   Label: LAB_0040f9b5
    JMP 0x0040f642                      ; 0040f9bf
        ;   XREF to: 0040f642 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0xc1d8]    ; 0040f9c4
        ;   Label: caseD_0
    XOR ESI,ESI                         ; 0040f9ca
    TEST EAX,EAX                        ; 0040f9cc
    JZ 0x0040f9de                       ; 0040f9ce
        ;   XREF to: 0040f9de (CONDITIONAL_JUMP)  ; LAB_0040f9de
    CMP dword ptr [EBX + 0xc1e0],0x0    ; 0040f9d0
    JZ 0x0040fa43                       ; 0040f9d7
        ;   XREF to: 0040fa43 (CONDITIONAL_JUMP)  ; LAB_0040fa43
    MOV ESI,0x3                         ; 0040f9d9
    CMP dword ptr [EBX + 0xc1dc],0x0    ; 0040f9de
        ;   Label: LAB_0040f9de
    JZ 0x0040f9ec                       ; 0040f9e5
        ;   XREF to: 0040f9ec (CONDITIONAL_JUMP)  ; LAB_0040f9ec
    MOV ESI,0x2                         ; 0040f9e7
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 0040f9ec
        ;   Label: LAB_0040f9ec
    JZ 0x0040fa0e                       ; 0040f9f3
        ;   XREF to: 0040fa0e (CONDITIONAL_JUMP)  ; LAB_0040fa0e
    MOV dword ptr [EBX + 0x20088],0x1   ; 0040f9f5
    MOV ESI,0x4                         ; 0040f9ff
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 0040fa04
    FLD float ptr [EBX + 0xc200]        ; 0040fa0e
        ;   Label: LAB_0040fa0e
    LEA EBP,[EBX + 0x158]               ; 0040fa14
    FMUL float ptr [EBX + 0x2528]       ; 0040fa1a
    PUSH EBP                            ; 0040fa20
    FSTP float ptr [EBX + 0x2508]       ; 0040fa21
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0040fa27
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0040fa2c
    ADD ESP,0x4                         ; 0040fa2f
    CMP ESI,EAX                         ; 0040fa32
    JZ 0x0040f642                       ; 0040fa34
        ;   XREF to: 0040f642 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 0040fa3a
    PUSH ESI                            ; 0040fa3c
    PUSH EBP                            ; 0040fa3d
    JMP 0x0040f63a                      ; 0040fa3e
        ;   XREF to: 0040f63a (UNCONDITIONAL_JUMP)  ; LAB_0040f63a
    MOV ESI,0x1                         ; 0040fa43
        ;   Label: LAB_0040fa43
    JMP 0x0040f9de                      ; 0040fa48
        ;   XREF to: 0040f9de (UNCONDITIONAL_JUMP)  ; LAB_0040f9de
    PUSH EAX                            ; 0040fa4a
        ;   Label: LAB_0040fa4a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0040fa4b
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0040fa50
    ADD ESP,0x4                         ; 0040fa53
    CMP EAX,0x4                         ; 0040fa56
    JA 0x0040f642                       ; 0040fa59
        ;   XREF to: 0040f642 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x40f4b8]  ; 0040fa5f | caseD_3 | caseD_4 | switchdataD_0040f4b8
        ;   Label: switchD

