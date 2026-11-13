; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_process_FUN_004e9250(CHaystack *this_ptr,float delta_time)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004e9224 = 004e95cc
;   TerminatedCString s_s_confused_while_walking_005e4508
;   undefined4 DAT_005e4533
;   undefined4 DAT_005e4537
;   undefined4 DAT_005e453b
;   undefined4 DAT_005e453f
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d069d8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00435320
;   core_haystack.cpp_CHaystack_advanceMotion_FUN_004e9f20
;   core_haystack.cpp_CHaystack_updateAI_FUN_004e98b0
;   core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0
;   core_hero.cpp_CHero_tryInteract_FUN_004eb090
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9250
        ;   Label: core_haystack.cpp_CHaystack_process_FUN_004e9250
    PUSH ESI                            ; 004e9251
    PUSH EDI                            ; 004e9252
    PUSH EBP                            ; 004e9253
    SUB ESP,0xac                        ; 004e9254
    MOV EBX,dword ptr [ESP + 0xc0]      ; 004e925a
    PUSH dword ptr [ESP + 0xc4]         ; 004e9261
    PUSH EBX                            ; 004e9268
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 004e9269
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e926e
    TEST EAX,EAX                        ; 004e9271
    JZ 0x004e9569                       ; 004e9273
        ;   XREF to: 004e9569 (CONDITIONAL_JUMP)  ; caseD_9
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 004e9279
    JZ 0x004e9574                       ; 004e9280
        ;   XREF to: 004e9574 (CONDITIONAL_JUMP)  ; LAB_004e9574
    PUSH dword ptr [ESP + 0xc4]         ; 004e9286
        ;   Label: LAB_004e9286
    PUSH EBX                            ; 004e928d
    CALL core_charactr.cpp_FUN_00435320 ; 004e928e
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 004e9293
    FLD float ptr [EBX + 0xc1d0]        ; 004e9296
    FSUB float ptr [ESP + 0xc4]         ; 004e929c
    FST float ptr [EBX + 0xc1d0]        ; 004e92a3
    FLDZ                                ; 004e92a9
    FCOMPP                              ; 004e92ab
    FNSTSW AX                           ; 004e92ad
    SAHF                                ; 004e92af
    JBE 0x004e92bc                      ; 004e92b0
        ;   XREF to: 004e92bc (CONDITIONAL_JUMP)  ; LAB_004e92bc
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 004e92b2
    LEA EAX,[EBX + 0x249c]              ; 004e92bc
        ;   Label: LAB_004e92bc
    PUSH dword ptr [ESP + 0xc4]         ; 004e92c2
    MOV dword ptr [EAX + 0x8],0x0       ; 004e92c9
    PUSH EBX                            ; 004e92d0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e92d1
    MOV dword ptr [EAX + 0x4],EDX       ; 004e92d4
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e92d7
    MOV dword ptr [EAX],EDX             ; 004e92da
    CALL core_haystack.cpp_CHaystack_advanceMotion_FUN_004e9f20 ; 004e92dc
        ;   XREF to: 004e9f20 (UNCONDITIONAL_CALL)  ; void core_haystack.cpp_CHaystack_advanceMotion_FUN_004e9f20(CHaystack * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e92e1
    PUSH dword ptr [ESP + 0xc4]         ; 004e92e4
    PUSH EBX                            ; 004e92eb
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 004e92ec
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    MOV EDX,EAX                         ; 004e92f1
    ADD ESP,0x8                         ; 004e92f3
    LEA EAX,[EBX + 0x158]               ; 004e92f6
    TEST EDX,EDX                        ; 004e92fc
    JZ 0x004e973e                       ; 004e92fe
        ;   XREF to: 004e973e (CONDITIONAL_JUMP)  ; LAB_004e973e
    MOV EDX,dword ptr [EBX + 0x273c]    ; 004e9304
    CMP EDX,0x2                         ; 004e930a
    JNC 0x004e95b6                      ; 004e930d
        ;   XREF to: 004e95b6 (CONDITIONAL_JUMP)  ; LAB_004e95b6
    CMP EDX,0x1                         ; 004e9313
    JNZ 0x004e95bd                      ; 004e9316
        ;   XREF to: 004e95bd (CONDITIONAL_JUMP)  ; LAB_004e95bd
    PUSH EDX                            ; 004e931c
    PUSH EDX                            ; 004e931d
    PUSH EAX                            ; 004e931e
        ;   Label: LAB_004e931e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004e931f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004e931f
    ADD ESP,0xc                         ; 004e9324
        ;   Label: LAB_004e9324
    MOV EDI,dword ptr [EBX + 0x26fc]    ; 004e9327
        ;   Label: caseD_4
    TEST EDI,EDI                        ; 004e932d
    JZ 0x004e977c                       ; 004e932f
        ;   XREF to: 004e977c (CONDITIONAL_JUMP)  ; LAB_004e977c
    CMP dword ptr [EBX + 0x2700],0x0    ; 004e9335
    JNZ 0x004e9457                      ; 004e933c
        ;   XREF to: 004e9457 (CONDITIONAL_JUMP)  ; LAB_004e9457
    LEA EAX,[EDI + 0x20]                ; 004e9342
    PUSH EAX                            ; 004e9345
    PUSH EBX                            ; 004e9346
    LEA ESI,[ESP + 0x70]                ; 004e9347
    LEA EDI,[ESP + 0x64]                ; 004e934b
    CALL core_actor.cpp_FUN_00408bb0    ; 004e934f
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x70]                ; 004e9354
    ADD ESP,0x8                         ; 004e9358
    LEA EAX,[ESP + 0x5c]                ; 004e935b
    MOVSD ES:EDI,ESI                    ; 004e935f
    MOVSD ES:EDI,ESI                    ; 004e9360
    MOVSD ES:EDI,ESI                    ; 004e9361
    PUSH EAX                            ; 004e9362
    LEA ESI,[ESP + 0x78]                ; 004e9363
    LEA EDI,[ESP + 0x48]                ; 004e9367
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004e936b
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x78]                ; 004e9370
    ADD ESP,0x4                         ; 004e9374
    MOVSD ES:EDI,ESI                    ; 004e9377
    MOVSD ES:EDI,ESI                    ; 004e9378
    MOVSD ES:EDI,ESI                    ; 004e9379
    PUSH dword ptr [ESP + 0x48]         ; 004e937a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004e937e
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0xac],EAX      ; 004e9383
    FLD float ptr [ESP + 0xac]          ; 004e938a
    ADD ESP,0x4                         ; 004e9391
    FST float ptr [ESP + 0xa0]          ; 004e9394
    FCOMP float ptr [0x005e4533]        ; 004e939b | DAT_005e4533
    FNSTSW AX                           ; 004e93a1
    SAHF                                ; 004e93a3
    JNC 0x004e93ba                      ; 004e93a4
        ;   XREF to: 004e93ba (CONDITIONAL_JUMP)  ; LAB_004e93ba
    FLD float ptr [ESP + 0xa0]          ; 004e93a6
    FADD float ptr [0x005e4537]         ; 004e93ad | DAT_005e4537
    FSTP float ptr [ESP + 0xa0]         ; 004e93b3
    FLD float ptr [ESP + 0xa0]          ; 004e93ba
        ;   Label: LAB_004e93ba
    FCOMP float ptr [0x005e453b]        ; 004e93c1 | DAT_005e453b
    FNSTSW AX                           ; 004e93c7
    SAHF                                ; 004e93c9
    JBE 0x004e93e0                      ; 004e93ca
        ;   XREF to: 004e93e0 (CONDITIONAL_JUMP)  ; LAB_004e93e0
    FLD float ptr [ESP + 0xa0]          ; 004e93cc
    FADD float ptr [0x005e453f]         ; 004e93d3 | DAT_005e453f
    FSTP float ptr [ESP + 0xa0]         ; 004e93d9
    FLD float ptr [ESP + 0xc4]          ; 004e93e0
        ;   Label: LAB_004e93e0
    FMUL float ptr [0x005e4537]         ; 004e93e7 | DAT_005e4537
    FLD float ptr [ESP + 0xa0]          ; 004e93ed
    FXCH                                ; 004e93f4
    FST float ptr [ESP + 0x98]          ; 004e93f6
    FCHS                                ; 004e93fd
    FSTP float ptr [ESP + 0xa4]         ; 004e93ff
    FCOMP float ptr [ESP + 0xa4]        ; 004e9406
    FNSTSW AX                           ; 004e940d
    SAHF                                ; 004e940f
    JNC 0x004e9420                      ; 004e9410
        ;   XREF to: 004e9420 (CONDITIONAL_JUMP)  ; LAB_004e9420
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004e9412
    MOV dword ptr [ESP + 0xa0],EAX      ; 004e9419
    FLD float ptr [ESP + 0xa0]          ; 004e9420
        ;   Label: LAB_004e9420
    FCOMP float ptr [ESP + 0x98]        ; 004e9427
    FNSTSW AX                           ; 004e942e
    SAHF                                ; 004e9430
    JBE 0x004e9441                      ; 004e9431
        ;   XREF to: 004e9441 (CONDITIONAL_JUMP)  ; LAB_004e9441
    MOV EAX,dword ptr [ESP + 0x98]      ; 004e9433
    MOV dword ptr [ESP + 0xa0],EAX      ; 004e943a
    FLD float ptr [EBX + 0x34]          ; 004e9441
        ;   Label: LAB_004e9441
    FADD float ptr [ESP + 0xa0]         ; 004e9444
    PUSH EBX                            ; 004e944b
    FSTP float ptr [EBX + 0x34]         ; 004e944c
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 004e944f
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e9454
    PUSH 0x0                            ; 004e9457
        ;   Label: LAB_004e9457
    LEA ESI,[ESP + 0x84]                ; 004e9459
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 004e9460
    LEA EBP,[EBX + 0x158]               ; 004e9466
    MOV dword ptr [ESP + 0xa0],EAX      ; 004e946c
    PUSH EBP                            ; 004e9473
    MOV EAX,dword ptr [EAX + 0x154]     ; 004e9474
    LEA EDI,[ESP + 0x28]                ; 004e947a
    MOV dword ptr [ESP + 0xb0],EAX      ; 004e947e
    CALL core_skeleton.cpp_FUN_00569130 ; 004e9485
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 004e948a
    LEA EAX,[ESP + 0x20]                ; 004e948d
    LEA ESI,[ESP + 0x80]                ; 004e9491
    PUSH EAX                            ; 004e9498
    MOVSD ES:EDI,ESI                    ; 004e9499
    MOVSD ES:EDI,ESI                    ; 004e949a
    MOVSD ES:EDI,ESI                    ; 004e949b
    PUSH EBX                            ; 004e949c
    MOV ESI,dword ptr [ESP + 0xa4]      ; 004e949d
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004e94a4
    PUSH ESI                            ; 004e94ab
    CALL dword ptr [EAX + 0x110]        ; 004e94ac
    ADD ESP,0xc                         ; 004e94b2
    TEST EAX,EAX                        ; 004e94b5
    JZ 0x004e975a                       ; 004e94b7
        ;   XREF to: 004e975a (CONDITIONAL_JUMP)  ; LAB_004e975a
    CMP dword ptr [EBX + 0x26fc],0x0    ; 004e94bd
    JNZ 0x004e9765                      ; 004e94c4
        ;   XREF to: 004e9765 (CONDITIONAL_JUMP)  ; LAB_004e9765
    PUSH 0x1                            ; 004e94ca
        ;   Label: LAB_004e94ca
    PUSH 0x0                            ; 004e94cc
    LEA EAX,[EBX + 0x158]               ; 004e94ce
    PUSH EAX                            ; 004e94d4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004e94d5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004e94d5
    ADD ESP,0xc                         ; 004e94da
    PUSH EBX                            ; 004e94dd
        ;   Label: LAB_004e94dd
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 004e94de
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004e94e3
    LEA EBP,[EBX + 0x158]               ; 004e94e6
    PUSH EBP                            ; 004e94ec
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004e94ed
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e94f2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e94f5
    PUSH EBX                            ; 004e94fb
    CALL dword ptr [EAX + 0x10c]        ; 004e94fc
    ADD ESP,0x4                         ; 004e9502
    TEST EAX,EAX                        ; 004e9505
    JNZ 0x004e9559                      ; 004e9507
        ;   XREF to: 004e9559 (CONDITIONAL_JUMP)  ; LAB_004e9559
    PUSH EBP                            ; 004e9509
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004e950a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e950f
    ADD ESP,0x4                         ; 004e9512
    CMP EAX,0x13                        ; 004e9515
    JZ 0x004e9559                       ; 004e9518
        ;   XREF to: 004e9559 (CONDITIONAL_JUMP)  ; LAB_004e9559
    PUSH 0x567360                       ; 004e951a
    MOV EDX,dword ptr [0x01d069d8]      ; 004e951f | DAT_01d069d8
    PUSH EDX                            ; 004e9525
    LEA EAX,[EBX + 0x1ffb4]             ; 004e9526
    PUSH dword ptr [EBX + 0x1ffc0]      ; 004e952c
    PUSH EAX                            ; 004e9532
    LEA ESI,[ESP + 0x10]                ; 004e9533
    CALL core_xform.cpp_FUN_005b7ed0    ; 004e9537
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    ADD ESP,0x4                         ; 004e953c
    LEA EAX,[ESP + 0x1c]                ; 004e953f
    PUSH EAX                            ; 004e9543
    LEA EDI,[ESP + 0x20]                ; 004e9544
    LEA ESI,[ESP + 0x10]                ; 004e9548
    PUSH EBP                            ; 004e954c
    MOVSD ES:EDI,ESI                    ; 004e954d
    MOVSD ES:EDI,ESI                    ; 004e954e
    MOVSD ES:EDI,ESI                    ; 004e954f
    MOVSD ES:EDI,ESI                    ; 004e9550
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60 ; 004e9551
        ;   XREF to: 00568d60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004e9556
    PUSH dword ptr [ESP + 0xc4]         ; 004e9559
        ;   Label: LAB_004e9559
    PUSH EBX                            ; 004e9560
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 004e9561
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e9566
    ADD ESP,0xac                        ; 004e9569
        ;   Label: caseD_9
    POP EBP                             ; 004e956f
    POP EDI                             ; 004e9570
    POP ESI                             ; 004e9571
    POP EBX                             ; 004e9572
    RET                                 ; 004e9573
    PUSH dword ptr [ESP + 0xc4]         ; 004e9574
        ;   Label: LAB_004e9574
    PUSH EBX                            ; 004e957b
    CALL core_haystack.cpp_CHaystack_updateAI_FUN_004e98b0 ; 004e957c
        ;   XREF to: 004e98b0 (UNCONDITIONAL_CALL)  ; void core_haystack.cpp_CHaystack_updateAI_FUN_004e98b0(CHaystack * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e9581
    JMP 0x004e9286                      ; 004e9584
        ;   XREF to: 004e9286 (UNCONDITIONAL_JUMP)  ; LAB_004e9286
    PUSH 0x1                            ; 004e9589
        ;   Label: LAB_004e9589
    PUSH 0x0                            ; 004e958b
    PUSH EAX                            ; 004e958d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004e958e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e9593
    PUSH EBX                            ; 004e9596
    PUSH 0x5e4508                       ; 004e9597 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 004e959c | g_CConsolePtr
    PUSH ESI                            ; 004e95a2 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004e95a3
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x004e9324                      ; 004e95a8
        ;   XREF to: 004e9324 (UNCONDITIONAL_JUMP)  ; LAB_004e9324
    PUSH 0x1                            ; 004e95ad
        ;   Label: LAB_004e95ad
    PUSH 0x2                            ; 004e95af
    JMP 0x004e931e                      ; 004e95b1
        ;   XREF to: 004e931e (UNCONDITIONAL_JUMP)  ; LAB_004e931e
    JBE 0x004e95ad                      ; 004e95b6
        ;   XREF to: 004e95ad (CONDITIONAL_JUMP)  ; LAB_004e95ad
        ;   Label: LAB_004e95b6
    CMP EDX,0x3                         ; 004e95b8
    JZ 0x004e9589                       ; 004e95bb
        ;   XREF to: 004e9589 (CONDITIONAL_JUMP)  ; LAB_004e9589
    PUSH 0x1                            ; 004e95bd
        ;   Label: LAB_004e95bd
    PUSH 0x0                            ; 004e95bf
    LEA EAX,[EBX + 0x158]               ; 004e95c1
    JMP 0x004e931e                      ; 004e95c7
        ;   XREF to: 004e931e (UNCONDITIONAL_JUMP)  ; LAB_004e931e
    CMP dword ptr [EBX + 0x2500],0x0    ; 004e95cc
        ;   Label: caseD_0
    JZ 0x004e9327                       ; 004e95d3
        ;   XREF to: 004e9327 (CONDITIONAL_JUMP)  ; caseD_8
    MOV EDI,dword ptr [EBX + 0x1ffac]   ; 004e95d9
    XOR ESI,ESI                         ; 004e95df
    TEST EDI,EDI                        ; 004e95e1
    JZ 0x004e95ea                       ; 004e95e3
        ;   XREF to: 004e95ea (CONDITIONAL_JUMP)  ; LAB_004e95ea
    MOV ESI,0xa                         ; 004e95e5
    CMP dword ptr [EBX + 0xc1d8],0x0    ; 004e95ea
        ;   Label: LAB_004e95ea
    JZ 0x004e9605                       ; 004e95f1
        ;   XREF to: 004e9605 (CONDITIONAL_JUMP)  ; LAB_004e9605
    CMP dword ptr [EBX + 0xc1e0],0x0    ; 004e95f3
    JZ 0x004e96b5                       ; 004e95fa
        ;   XREF to: 004e96b5 (CONDITIONAL_JUMP)  ; LAB_004e96b5
    MOV ESI,0x2                         ; 004e9600
    CMP dword ptr [EBX + 0xc1dc],0x0    ; 004e9605
        ;   Label: LAB_004e9605
    JZ 0x004e9613                       ; 004e960c
        ;   XREF to: 004e9613 (CONDITIONAL_JUMP)  ; LAB_004e9613
    MOV ESI,0x3                         ; 004e960e
    CMP dword ptr [EBX + 0xc1f0],0x0    ; 004e9613
        ;   Label: LAB_004e9613
    JZ 0x004e9647                       ; 004e961a
        ;   XREF to: 004e9647 (CONDITIONAL_JUMP)  ; LAB_004e9647
    MOV ESI,dword ptr [EBX + 0x1ffac]   ; 004e961c
    MOV dword ptr [EBX + 0xc1f0],0x0    ; 004e9622
    TEST ESI,ESI                        ; 004e962c
    SETZ AL                             ; 004e962e
    AND EAX,0xff                        ; 004e9631
    MOV dword ptr [EBX + 0x1ffac],EAX   ; 004e9636
    JZ 0x004e96bf                       ; 004e963c
        ;   XREF to: 004e96bf (CONDITIONAL_JUMP)  ; LAB_004e96bf
    MOV ESI,0xa                         ; 004e9642
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 004e9647
        ;   Label: LAB_004e9647
    JZ 0x004e9680                       ; 004e964e
        ;   XREF to: 004e9680 (CONDITIONAL_JUMP)  ; LAB_004e9680
    MOV EAX,dword ptr [EBX + 0x1ffac]   ; 004e9650
    MOV EBP,0x1                         ; 004e9656
    TEST EAX,EAX                        ; 004e965b
    JZ 0x004e96c3                       ; 004e965d
        ;   XREF to: 004e96c3 (CONDITIONAL_JUMP)  ; LAB_004e96c3
    TEST EBP,EBP                        ; 004e965f
        ;   Label: LAB_004e965f
    JZ 0x004e9680                       ; 004e9661
        ;   XREF to: 004e9680 (CONDITIONAL_JUMP)  ; LAB_004e9680
    MOV ECX,dword ptr [EBX + 0x1ffb0]   ; 004e9663
        ;   Label: LAB_004e9663
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 004e9669
    TEST ECX,ECX                        ; 004e9673
    JZ 0x004e9734                       ; 004e9675
        ;   XREF to: 004e9734 (CONDITIONAL_JUMP)  ; LAB_004e9734
    MOV ESI,0xe                         ; 004e967b
    FLD float ptr [EBX + 0xc200]        ; 004e9680
        ;   Label: LAB_004e9680
    LEA EBP,[EBX + 0x158]               ; 004e9686
    FMUL float ptr [EBX + 0x2528]       ; 004e968c
    PUSH EBP                            ; 004e9692
    FSTP float ptr [EBX + 0x2508]       ; 004e9693
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004e9699
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e969e
    ADD ESP,0x4                         ; 004e96a1
    CMP ESI,EAX                         ; 004e96a4
    JZ 0x004e9327                       ; 004e96a6
        ;   XREF to: 004e9327 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004e96ac
    PUSH ESI                            ; 004e96ae
    PUSH EBP                            ; 004e96af
    JMP 0x004e931f                      ; 004e96b0
        ;   XREF to: 004e931f (UNCONDITIONAL_JUMP)  ; LAB_004e931f
    MOV ESI,0x1                         ; 004e96b5
        ;   Label: LAB_004e96b5
    JMP 0x004e9605                      ; 004e96ba
        ;   XREF to: 004e9605 (UNCONDITIONAL_JUMP)  ; LAB_004e9605
    XOR ESI,ESI                         ; 004e96bf
        ;   Label: LAB_004e96bf
    JMP 0x004e9647                      ; 004e96c1
        ;   XREF to: 004e9647 (UNCONDITIONAL_JUMP)  ; LAB_004e9647
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 004e96c3
        ;   Label: LAB_004e96c3
    JZ 0x004e965f                       ; 004e96ca
        ;   XREF to: 004e965f (CONDITIONAL_JUMP)  ; LAB_004e965f
    PUSH EBX                            ; 004e96cc
    CALL core_hero.cpp_CHero_tryInteract_FUN_004eb090 ; 004e96cd
        ;   XREF to: 004eb090 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryInteract_FUN_004eb090(CHero * this_ptr)
    XOR EBP,EBP                         ; 004e96d2
    ADD ESP,0x4                         ; 004e96d4
    TEST EAX,EAX                        ; 004e96d7
    JNZ 0x004e965f                      ; 004e96d9
        ;   XREF to: 004e965f (CONDITIONAL_JUMP)  ; LAB_004e965f
    PUSH EAX                            ; 004e96db
    PUSH EBX                            ; 004e96dc
    CALL core_hero.cpp_FUN_004eb3e0     ; 004e96dd
        ;   XREF to: 004eb3e0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb3e0()
    ADD ESP,0x8                         ; 004e96e2
    MOV EDI,EAX                         ; 004e96e5
    TEST EAX,EAX                        ; 004e96e7
    JBE 0x004e96f0                      ; 004e96e9
        ;   XREF to: 004e96f0 (CONDITIONAL_JUMP)  ; LAB_004e96f0
    CMP EAX,0x1                         ; 004e96eb
    JNZ 0x004e971b                      ; 004e96ee
        ;   XREF to: 004e971b (CONDITIONAL_JUMP)  ; LAB_004e971b
    TEST EDI,EDI                        ; 004e96f0
        ;   Label: LAB_004e96f0
    JNZ 0x004e965f                      ; 004e96f2
        ;   XREF to: 004e965f (CONDITIONAL_JUMP)  ; LAB_004e965f
    PUSH EBX                            ; 004e96f8
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240 ; 004e96f9
        ;   XREF to: 004eb240 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(CHero * this_ptr)
    ADD ESP,0x4                         ; 004e96fe
    TEST EAX,EAX                        ; 004e9701
    JNZ 0x004e965f                      ; 004e9703
        ;   XREF to: 004e965f (CONDITIONAL_JUMP)  ; LAB_004e965f
    PUSH EBX                            ; 004e9709
    CALL core_hero.cpp_FUN_004eb660     ; 004e970a
        ;   XREF to: 004eb660 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004eb660(CHero * this_ptr)
    ADD ESP,0x4                         ; 004e970f
    TEST EAX,EAX                        ; 004e9712
    JNZ 0x004e9726                      ; 004e9714
        ;   XREF to: 004e9726 (CONDITIONAL_JUMP)  ; LAB_004e9726
    JMP 0x004e9663                      ; 004e9716
        ;   XREF to: 004e9663 (UNCONDITIONAL_JUMP)  ; LAB_004e9663
    PUSH EBX                            ; 004e971b
        ;   Label: LAB_004e971b
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0 ; 004e971c
        ;   XREF to: 004eb5e0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004e9721
    JMP 0x004e96f0                      ; 004e9724
        ;   XREF to: 004e96f0 (UNCONDITIONAL_JUMP)  ; LAB_004e96f0
    PUSH EBX                            ; 004e9726
        ;   Label: LAB_004e9726
    CALL core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0 ; 004e9727
        ;   XREF to: 004eb7f0 (UNCONDITIONAL_CALL)  ; undefined4 core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004e972c
    JMP 0x004e965f                      ; 004e972f
        ;   XREF to: 004e965f (UNCONDITIONAL_JUMP)  ; LAB_004e965f
    MOV ESI,0xf                         ; 004e9734
        ;   Label: LAB_004e9734
    JMP 0x004e9680                      ; 004e9739
        ;   XREF to: 004e9680 (UNCONDITIONAL_JUMP)  ; LAB_004e9680
    PUSH EAX                            ; 004e973e
        ;   Label: LAB_004e973e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004e973f
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e9744
    ADD ESP,0x4                         ; 004e9747
    CMP EAX,0xa                         ; 004e974a
    JA 0x004e9327                       ; 004e974d
        ;   XREF to: 004e9327 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x4e9224]  ; 004e9753 | caseD_a | caseD_8 | caseD_9
        ;   Label: switchD
    MOV dword ptr [EBX + 0x26fc],EAX    ; 004e975a
        ;   Label: LAB_004e975a
    JMP 0x004e94ca                      ; 004e9760
        ;   XREF to: 004e94ca (UNCONDITIONAL_JUMP)  ; LAB_004e94ca
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 004e9765
        ;   Label: LAB_004e9765
    JZ 0x004e94dd                       ; 004e976c
        ;   XREF to: 004e94dd (CONDITIONAL_JUMP)  ; LAB_004e94dd
    PUSH 0x1                            ; 004e9772
    PUSH 0x11                           ; 004e9774
    PUSH EBP                            ; 004e9776
    JMP 0x004e94d5                      ; 004e9777
        ;   XREF to: 004e94d5 (UNCONDITIONAL_JUMP)  ; LAB_004e94d5
    PUSH dword ptr [ESP + 0xc4]         ; 004e977c
        ;   Label: LAB_004e977c
    PUSH EBX                            ; 004e9783
    LEA EDI,[ESP + 0x40]                ; 004e9784
    CALL core_charactr.cpp_FUN_0042d700 ; 004e9788
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    LEA EAX,[EBX + 0x249c]              ; 004e978d
    LEA ESI,[ESP + 0x34]                ; 004e9793
    ADD ESP,0x8                         ; 004e9797
    FLD float ptr [EAX]                 ; 004e979a
    FLD float ptr [EAX + 0x4]           ; 004e979c
    LEA EDX,[EBX + 0x250c]              ; 004e979f
    FLD float ptr [EAX + 0x8]           ; 004e97a5
    FXCH ST2                            ; 004e97a8
    FADD float ptr [EDX]                ; 004e97aa
    FXCH                                ; 004e97ac
    FADD float ptr [EDX + 0x4]          ; 004e97ae
    FXCH ST2                            ; 004e97b1
    FADD float ptr [EDX + 0x8]          ; 004e97b3
    FXCH                                ; 004e97b6
    FSTP float ptr [ESP + 0x2c]         ; 004e97b8
    FXCH                                ; 004e97bc
    FSTP float ptr [ESP + 0x30]         ; 004e97be
    FSTP float ptr [ESP + 0x34]         ; 004e97c2
    MOVSD ES:EDI,ESI                    ; 004e97c6
    MOVSD ES:EDI,ESI                    ; 004e97c7
    MOVSD ES:EDI,ESI                    ; 004e97c8
    MOV dword ptr [EAX + 0x8],0x0       ; 004e97c9
    MOV ECX,dword ptr [EAX + 0x8]       ; 004e97d0
    MOV dword ptr [EAX + 0x4],ECX       ; 004e97d3
    MOV ECX,dword ptr [EAX + 0x4]       ; 004e97d6
    MOV dword ptr [EAX],ECX             ; 004e97d9
    MOV dword ptr [EDX + 0x8],0x0       ; 004e97db
    LEA EAX,[EBX + 0x158]               ; 004e97e2
    FLD float ptr [EDX + 0x8]           ; 004e97e8
    PUSH EAX                            ; 004e97eb
    FST float ptr [EDX + 0x4]           ; 004e97ec
    FSTP float ptr [EDX]                ; 004e97ef
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004e97f1
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e97f6
    ADD ESP,0x4                         ; 004e97f9
    CMP EAX,0xe                         ; 004e97fc
    JNZ 0x004e9896                      ; 004e97ff
        ;   XREF to: 004e9896 (CONDITIONAL_JUMP)  ; LAB_004e9896
    XOR EBP,EBP                         ; 004e9805
        ;   Label: LAB_004e9805
    MOV dword ptr [ESP + 0x3c],EBP      ; 004e9807
    MOV dword ptr [ESP + 0x38],EBP      ; 004e980b
    MOV dword ptr [ESP + 0x40],EBP      ; 004e980f
    LEA EAX,[EBX + 0x2518]              ; 004e9813
        ;   Label: LAB_004e9813
    FLD float ptr [ESP + 0xc4]          ; 004e9819
    FLD float ptr [EAX]                 ; 004e9820
    FMUL ST1                            ; 004e9822
    FLD float ptr [EAX + 0x4]           ; 004e9824
    FMUL ST2                            ; 004e9827
    FLD float ptr [EAX + 0x8]           ; 004e9829
    FMULP ST3                           ; 004e982c
    FLD float ptr [ESP + 0x38]          ; 004e982e
    FLD float ptr [ESP + 0x3c]          ; 004e9832
    FLD float ptr [ESP + 0x40]          ; 004e9836
    LEA EDI,[ESP + 0x8c]                ; 004e983a
    LEA ESI,[ESP + 0x50]                ; 004e9841
    LEA EAX,[ESP + 0x38]                ; 004e9845
    FXCH ST4                            ; 004e9849
    FSTP float ptr [ESP + 0x50]         ; 004e984b
    FXCH ST2                            ; 004e984f
    FSTP float ptr [ESP + 0x54]         ; 004e9851
    FXCH ST3                            ; 004e9855
    FSTP float ptr [ESP + 0x58]         ; 004e9857
    PUSH EAX                            ; 004e985b
    MOVSD ES:EDI,ESI                    ; 004e985c
    MOVSD ES:EDI,ESI                    ; 004e985d
    MOVSD ES:EDI,ESI                    ; 004e985e
    PUSH EBX                            ; 004e985f
    FXCH ST2                            ; 004e9860
    FADD float ptr [ESP + 0x94]         ; 004e9862
    FXCH ST2                            ; 004e9869
    FADD float ptr [ESP + 0x98]         ; 004e986b
    FXCH                                ; 004e9872
    FADD float ptr [ESP + 0x9c]         ; 004e9874
    FXCH ST2                            ; 004e987b
    FSTP float ptr [ESP + 0x40]         ; 004e987d
    FSTP float ptr [ESP + 0x44]         ; 004e9881
    FSTP float ptr [ESP + 0x48]         ; 004e9885
    CALL core_charactr.cpp_FUN_0042d750 ; 004e9889
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004e988e
    JMP 0x004e94dd                      ; 004e9891
        ;   XREF to: 004e94dd (UNCONDITIONAL_JUMP)  ; LAB_004e94dd
    CMP EAX,0xf                         ; 004e9896
        ;   Label: LAB_004e9896
    JZ 0x004e9805                       ; 004e9899
        ;   XREF to: 004e9805 (CONDITIONAL_JUMP)  ; LAB_004e9805
    JMP 0x004e9813                      ; 004e989f
        ;   XREF to: 004e9813 (UNCONDITIONAL_JUMP)  ; LAB_004e9813

