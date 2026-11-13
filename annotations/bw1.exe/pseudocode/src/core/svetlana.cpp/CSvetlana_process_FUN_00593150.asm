; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00593150(CSvetlana *this_ptr,float delta_time)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0059311c = 005935b6
;   TerminatedCString s_s_confused_while_walking_005f7541
;   undefined4 DAT_005f756f
;   undefined4 DAT_005f7577
;   undefined4 DAT_005f757f
;   undefined4 DAT_005f7583
;   undefined4 DAT_005f7587
;   undefined4 DAT_005f758b
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;   undefined4 DAT_02c83708
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
;   core_charactr.cpp_FUN_00434790
;   core_charactr.cpp_FUN_00435320
;   core_cloth.cpp_CCloth_process_FUN_00440610
;   core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0
;   core_hero.cpp_CHero_tryInteract_FUN_004eb090
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593150
        ;   Label: core_svetlana.cpp_CSvetlana_process_FUN_00593150
    PUSH ESI                            ; 00593151
    PUSH EDI                            ; 00593152
    PUSH EBP                            ; 00593153
    SUB ESP,0xc0                        ; 00593154
    MOV EBX,dword ptr [ESP + 0xd4]      ; 0059315a
    FLD float ptr [EBX + 0x2538]        ; 00593161
    FCOMP double ptr [0x005f756f]       ; 00593167 | DAT_005f756f
    FNSTSW AX                           ; 0059316d
    SAHF                                ; 0059316f
    JNC 0x0059319a                      ; 00593170
        ;   XREF to: 0059319a (CONDITIONAL_JUMP)  ; LAB_0059319a
    FLD float ptr [EBX + 0x2538]        ; 00593172
    FADD float ptr [ESP + 0xd8]         ; 00593178
    FST float ptr [EBX + 0x2538]        ; 0059317f
    FCOMP double ptr [0x005f756f]       ; 00593185 | DAT_005f756f
    FNSTSW AX                           ; 0059318b
    SAHF                                ; 0059318d
    JBE 0x0059319a                      ; 0059318e
        ;   XREF to: 0059319a (CONDITIONAL_JUMP)  ; LAB_0059319a
    MOV dword ptr [EBX + 0x2538],0x42c80000 ; 00593190
    PUSH dword ptr [ESP + 0xd8]         ; 0059319a
        ;   Label: LAB_0059319a
    PUSH EBX                            ; 005931a1
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 005931a2
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005931a7
    TEST EAX,EAX                        ; 005931aa
    JZ 0x005931b7                       ; 005931ac
        ;   XREF to: 005931b7 (CONDITIONAL_JUMP)  ; caseD_9
    CMP dword ptr [EBX + 0x1ffa8],0x4   ; 005931ae
    JNZ 0x005931c2                      ; 005931b5
        ;   XREF to: 005931c2 (CONDITIONAL_JUMP)  ; LAB_005931c2
    ADD ESP,0xc0                        ; 005931b7
        ;   Label: caseD_9
    POP EBP                             ; 005931bd
    POP EDI                             ; 005931be
    POP ESI                             ; 005931bf
    POP EBX                             ; 005931c0
    RET                                 ; 005931c1
    PUSH dword ptr [ESP + 0xd8]         ; 005931c2
        ;   Label: LAB_005931c2
    PUSH EBX                            ; 005931c9
    CALL core_charactr.cpp_FUN_00434790 ; 005931ca
        ;   XREF to: 00434790 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434790()
    ADD ESP,0x8                         ; 005931cf
    PUSH dword ptr [ESP + 0xd8]         ; 005931d2
    PUSH EBX                            ; 005931d9
    CALL core_charactr.cpp_FUN_00435320 ; 005931da
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 005931df
    FLD float ptr [EBX + 0xc1d0]        ; 005931e2
    FSUB float ptr [ESP + 0xd8]         ; 005931e8
    FST float ptr [EBX + 0xc1d0]        ; 005931ef
    FLDZ                                ; 005931f5
    FCOMPP                              ; 005931f7
    FNSTSW AX                           ; 005931f9
    SAHF                                ; 005931fb
    JBE 0x00593208                      ; 005931fc
        ;   XREF to: 00593208 (CONDITIONAL_JUMP)  ; LAB_00593208
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 005931fe
    LEA ESI,[EBX + 0x249c]              ; 00593208
        ;   Label: LAB_00593208
    PUSH dword ptr [ESP + 0xd8]         ; 0059320e
    MOV dword ptr [ESI + 0x8],0x0       ; 00593215
    PUSH EBX                            ; 0059321c
    MOV EAX,dword ptr [ESI + 0x8]       ; 0059321d
    MOV dword ptr [ESI + 0x4],EAX       ; 00593220
    MOV EAX,dword ptr [ESI + 0x4]       ; 00593223
    MOV dword ptr [ESI],EAX             ; 00593226
    CALL core_svetlana.cpp_CSvetlana_advanceMotion_FUN_005940a0 ; 00593228
        ;   XREF to: 005940a0 (UNCONDITIONAL_CALL)  ; void core_svetlana.cpp_CSvetlana_advanceMotion_FUN_005940a0(CSvetlana * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059322d
    PUSH dword ptr [ESP + 0xd8]         ; 00593230
    FLD float ptr [EBX + 0x24a4]        ; 00593237
    PUSH EBX                            ; 0059323d
    FSTP float ptr [EBX + 0x2524]       ; 0059323e
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 00593244
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00593249
    TEST EAX,EAX                        ; 0059324c
    JZ 0x0059357b                       ; 0059324e
        ;   XREF to: 0059357b (CONDITIONAL_JUMP)  ; LAB_0059357b
    LEA EAX,[EBX + 0x158]               ; 00593254
    PUSH EAX                            ; 0059325a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0059325b
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00593260
    ADD ESP,0x4                         ; 00593263
    CMP EAX,0x1a                        ; 00593266
    JZ 0x00593282                       ; 00593269
        ;   XREF to: 00593282 (CONDITIONAL_JUMP)  ; LAB_00593282
    CMP EAX,0x1b                        ; 0059326b
    JZ 0x00593282                       ; 0059326e
        ;   XREF to: 00593282 (CONDITIONAL_JUMP)  ; LAB_00593282
    MOV dword ptr [ESI + 0x8],0x0       ; 00593270
    MOV EAX,dword ptr [ESI + 0x8]       ; 00593277
    MOV dword ptr [ESI + 0x4],EAX       ; 0059327a
    MOV EAX,dword ptr [ESI + 0x4]       ; 0059327d
    MOV dword ptr [ESI],EAX             ; 00593280
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00593282
        ;   Label: LAB_00593282
    LEA EDX,[EBX + 0x158]               ; 00593288
    CMP EAX,0x2                         ; 0059328e
    JNC 0x00593564                      ; 00593291
        ;   XREF to: 00593564 (CONDITIONAL_JUMP)  ; LAB_00593564
    CMP EAX,0x1                         ; 00593297
    JNZ 0x0059356b                      ; 0059329a
        ;   XREF to: 0059356b (CONDITIONAL_JUMP)  ; LAB_0059356b
    PUSH EAX                            ; 005932a0
    PUSH EAX                            ; 005932a1
    PUSH EDX                            ; 005932a2
        ;   Label: LAB_005932a2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005932a3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005932a3
    ADD ESP,0xc                         ; 005932a8
        ;   Label: LAB_005932a8
    MOV EDI,dword ptr [EBX + 0x26fc]    ; 005932ab
        ;   Label: caseD_4
    TEST EDI,EDI                        ; 005932b1
    JZ 0x0059374a                       ; 005932b3
        ;   XREF to: 0059374a (CONDITIONAL_JUMP)  ; LAB_0059374a
    CMP dword ptr [EBX + 0x2700],0x0    ; 005932b9
    JNZ 0x005933e1                      ; 005932c0
        ;   XREF to: 005933e1 (CONDITIONAL_JUMP)  ; LAB_005933e1
    LEA EAX,[EDI + 0x20]                ; 005932c6
    PUSH EAX                            ; 005932c9
    PUSH EBX                            ; 005932ca
    LEA ESI,[ESP + 0x7c]                ; 005932cb
    LEA EDI,[ESP + 0x40]                ; 005932cf
    CALL core_actor.cpp_FUN_00408bb0    ; 005932d3
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x7c]                ; 005932d8
    ADD ESP,0x8                         ; 005932dc
    LEA EAX,[ESP + 0x38]                ; 005932df
    MOVSD ES:EDI,ESI                    ; 005932e3
    MOVSD ES:EDI,ESI                    ; 005932e4
    MOVSD ES:EDI,ESI                    ; 005932e5
    PUSH EAX                            ; 005932e6
    LEA ESI,[ESP + 0x84]                ; 005932e7
    LEA EDI,[ESP + 0x54]                ; 005932ee
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 005932f2
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x84]                ; 005932f7
    ADD ESP,0x4                         ; 005932fe
    MOVSD ES:EDI,ESI                    ; 00593301
    MOVSD ES:EDI,ESI                    ; 00593302
    MOVSD ES:EDI,ESI                    ; 00593303
    PUSH dword ptr [ESP + 0x54]         ; 00593304
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00593308
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0xc0],EAX      ; 0059330d
    FLD float ptr [ESP + 0xc0]          ; 00593314
    ADD ESP,0x4                         ; 0059331b
    FST float ptr [ESP + 0xb8]          ; 0059331e
    FCOMP float ptr [0x005f757f]        ; 00593325 | DAT_005f757f
    FNSTSW AX                           ; 0059332b
    SAHF                                ; 0059332d
    JNC 0x00593344                      ; 0059332e
        ;   XREF to: 00593344 (CONDITIONAL_JUMP)  ; LAB_00593344
    FLD float ptr [ESP + 0xb8]          ; 00593330
    FADD float ptr [0x005f7583]         ; 00593337 | DAT_005f7583
    FSTP float ptr [ESP + 0xb8]         ; 0059333d
    FLD float ptr [ESP + 0xb8]          ; 00593344
        ;   Label: LAB_00593344
    FCOMP float ptr [0x005f7587]        ; 0059334b | DAT_005f7587
    FNSTSW AX                           ; 00593351
    SAHF                                ; 00593353
    JBE 0x0059336a                      ; 00593354
        ;   XREF to: 0059336a (CONDITIONAL_JUMP)  ; LAB_0059336a
    FLD float ptr [ESP + 0xb8]          ; 00593356
    FADD float ptr [0x005f758b]         ; 0059335d | DAT_005f758b
    FSTP float ptr [ESP + 0xb8]         ; 00593363
    FLD float ptr [ESP + 0xd8]          ; 0059336a
        ;   Label: LAB_0059336a
    FMUL float ptr [0x005f7583]         ; 00593371 | DAT_005f7583
    FLD float ptr [ESP + 0xb8]          ; 00593377
    FXCH                                ; 0059337e
    FST float ptr [ESP + 0xb4]          ; 00593380
    FCHS                                ; 00593387
    FSTP float ptr [ESP + 0xb0]         ; 00593389
    FCOMP float ptr [ESP + 0xb0]        ; 00593390
    FNSTSW AX                           ; 00593397
    SAHF                                ; 00593399
    JNC 0x005933aa                      ; 0059339a
        ;   XREF to: 005933aa (CONDITIONAL_JUMP)  ; LAB_005933aa
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0059339c
    MOV dword ptr [ESP + 0xb8],EAX      ; 005933a3
    FLD float ptr [ESP + 0xb8]          ; 005933aa
        ;   Label: LAB_005933aa
    FCOMP float ptr [ESP + 0xb4]        ; 005933b1
    FNSTSW AX                           ; 005933b8
    SAHF                                ; 005933ba
    JBE 0x005933cb                      ; 005933bb
        ;   XREF to: 005933cb (CONDITIONAL_JUMP)  ; LAB_005933cb
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005933bd
    MOV dword ptr [ESP + 0xb8],EAX      ; 005933c4
    FLD float ptr [EBX + 0x34]          ; 005933cb
        ;   Label: LAB_005933cb
    FADD float ptr [ESP + 0xb8]         ; 005933ce
    PUSH EBX                            ; 005933d5
    FSTP float ptr [EBX + 0x34]         ; 005933d6
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 005933d9
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005933de
    PUSH 0x0                            ; 005933e1
        ;   Label: LAB_005933e1
    LEA ESI,[ESP + 0x9c]                ; 005933e3
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 005933ea
    LEA EBP,[EBX + 0x158]               ; 005933f0
    MOV dword ptr [ESP + 0xb0],EAX      ; 005933f6
    PUSH EBP                            ; 005933fd
    MOV EAX,dword ptr [EAX + 0x154]     ; 005933fe
    LEA EDI,[ESP + 0x28]                ; 00593404
    MOV dword ptr [ESP + 0xc4],EAX      ; 00593408
    CALL core_skeleton.cpp_FUN_00569130 ; 0059340f
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 00593414
    LEA EAX,[ESP + 0x20]                ; 00593417
    LEA ESI,[ESP + 0x98]                ; 0059341b
    PUSH EAX                            ; 00593422
    MOVSD ES:EDI,ESI                    ; 00593423
    MOVSD ES:EDI,ESI                    ; 00593424
    MOVSD ES:EDI,ESI                    ; 00593425
    PUSH EBX                            ; 00593426
    MOV ESI,dword ptr [ESP + 0xb4]      ; 00593427
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0059342e
    PUSH ESI                            ; 00593435
    CALL dword ptr [EAX + 0x110]        ; 00593436
    ADD ESP,0xc                         ; 0059343c
    TEST EAX,EAX                        ; 0059343f
    JZ 0x00593728                       ; 00593441
        ;   XREF to: 00593728 (CONDITIONAL_JUMP)  ; LAB_00593728
    CMP dword ptr [EBX + 0x26fc],0x0    ; 00593447
    JNZ 0x00593733                      ; 0059344e
        ;   XREF to: 00593733 (CONDITIONAL_JUMP)  ; LAB_00593733
    PUSH 0x1                            ; 00593454
        ;   Label: LAB_00593454
    PUSH 0x0                            ; 00593456
    LEA EAX,[EBX + 0x158]               ; 00593458
    PUSH EAX                            ; 0059345e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0059345f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0059345f
    ADD ESP,0xc                         ; 00593464
    PUSH EBX                            ; 00593467
        ;   Label: LAB_00593467
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 00593468
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059346d
    LEA EBP,[EBX + 0x158]               ; 00593470
    PUSH EBP                            ; 00593476
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00593477
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059347c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059347f
    PUSH EBX                            ; 00593485
    CALL dword ptr [EAX + 0x10c]        ; 00593486
    ADD ESP,0x4                         ; 0059348c
    TEST EAX,EAX                        ; 0059348f
    JNZ 0x005934d2                      ; 00593491
        ;   XREF to: 005934d2 (CONDITIONAL_JUMP)  ; LAB_005934d2
    PUSH 0x567360                       ; 00593493
    MOV EDX,dword ptr [0x02c83708]      ; 00593498 | DAT_02c83708
    PUSH EDX                            ; 0059349e
    LEA EAX,[EBX + 0x95618]             ; 0059349f
    PUSH dword ptr [EBX + 0x95624]      ; 005934a5
    PUSH EAX                            ; 005934ab
    LEA ESI,[ESP + 0x20]                ; 005934ac
    CALL core_xform.cpp_FUN_005b7ed0    ; 005934b0
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    ADD ESP,0x4                         ; 005934b5
    LEA EAX,[ESP + 0xc]                 ; 005934b8
    PUSH EAX                            ; 005934bc
    LEA EDI,[ESP + 0x10]                ; 005934bd
    LEA ESI,[ESP + 0x20]                ; 005934c1
    PUSH EBP                            ; 005934c5
    MOVSD ES:EDI,ESI                    ; 005934c6
    MOVSD ES:EDI,ESI                    ; 005934c7
    MOVSD ES:EDI,ESI                    ; 005934c8
    MOVSD ES:EDI,ESI                    ; 005934c9
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60 ; 005934ca
        ;   XREF to: 00568d60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005934cf
    PUSH dword ptr [ESP + 0xd8]         ; 005934d2
        ;   Label: LAB_005934d2
    PUSH EBX                            ; 005934d9
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 005934da
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005934df
    LEA ESI,[EBX + 0x158]               ; 005934e2
    PUSH ESI                            ; 005934e8
    PUSH dword ptr [EBX + 0x2504]       ; 005934e9
    LEA EBP,[EBX + 0x30]                ; 005934ef
    PUSH dword ptr [ESP + 0xe0]         ; 005934f2
    PUSH EBP                            ; 005934f9
    LEA EDI,[EBX + 0x20]                ; 005934fa
    PUSH EDI                            ; 005934fd
    LEA EAX,[EBX + 0x1ffb4]             ; 005934fe
    PUSH EAX                            ; 00593504
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 00593505
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 0059350a
    PUSH ESI                            ; 0059350d
    PUSH dword ptr [EBX + 0x2504]       ; 0059350e
    PUSH dword ptr [ESP + 0xe0]         ; 00593514
    PUSH EBP                            ; 0059351b
    PUSH EDI                            ; 0059351c
    ADD EBX,0x5aae4                     ; 0059351d
    PUSH EBX                            ; 00593523
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 00593524
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 00593529
    ADD ESP,0xc0                        ; 0059352c
    POP EBP                             ; 00593532
    POP EDI                             ; 00593533
    POP ESI                             ; 00593534
    POP EBX                             ; 00593535
    RET                                 ; 00593536
    PUSH 0x1                            ; 00593537
        ;   Label: LAB_00593537
    PUSH 0x0                            ; 00593539
    PUSH EDX                            ; 0059353b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0059353c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00593541
    PUSH EBX                            ; 00593544
    PUSH 0x5f7541                       ; 00593545 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 0059354a | g_CConsolePtr
    PUSH ESI                            ; 00593550 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00593551
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x005932a8                      ; 00593556
        ;   XREF to: 005932a8 (UNCONDITIONAL_JUMP)  ; LAB_005932a8
    PUSH 0x1                            ; 0059355b
        ;   Label: LAB_0059355b
    PUSH 0x2                            ; 0059355d
    JMP 0x005932a2                      ; 0059355f
        ;   XREF to: 005932a2 (UNCONDITIONAL_JUMP)  ; LAB_005932a2
    JBE 0x0059355b                      ; 00593564
        ;   XREF to: 0059355b (CONDITIONAL_JUMP)  ; LAB_0059355b
        ;   Label: LAB_00593564
    CMP EAX,0x3                         ; 00593566
    JZ 0x00593537                       ; 00593569
        ;   XREF to: 00593537 (CONDITIONAL_JUMP)  ; LAB_00593537
    PUSH 0x1                            ; 0059356b
        ;   Label: LAB_0059356b
    PUSH 0x0                            ; 0059356d
    LEA EAX,[EBX + 0x158]               ; 0059356f
    PUSH EAX                            ; 00593575
    JMP 0x005932a3                      ; 00593576
        ;   XREF to: 005932a3 (UNCONDITIONAL_JUMP)  ; LAB_005932a3
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 0059357b
        ;   Label: LAB_0059357b
    JNZ 0x00593594                      ; 00593582
        ;   XREF to: 00593594 (CONDITIONAL_JUMP)  ; LAB_00593594
    PUSH dword ptr [ESP + 0xd8]         ; 00593584
    PUSH EBX                            ; 0059358b
    CALL core_svetlana.cpp_CSvetlana_processAI_FUN_005938c0 ; 0059358c
        ;   XREF to: 005938c0 (UNCONDITIONAL_CALL)  ; void core_svetlana.cpp_CSvetlana_processAI_FUN_005938c0(CSvetlana * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00593591
    LEA EAX,[EBX + 0x158]               ; 00593594
        ;   Label: LAB_00593594
    PUSH EAX                            ; 0059359a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0059359b
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005935a0
    ADD ESP,0x4                         ; 005935a3
    CMP EAX,0xa                         ; 005935a6
    JA 0x005932ab                       ; 005935a9
        ;   XREF to: 005932ab (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x59311c]  ; 005935af | caseD_a | caseD_8 | caseD_9
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2500],0x0    ; 005935b6
        ;   Label: caseD_0
    JZ 0x005932ab                       ; 005935bd
        ;   XREF to: 005932ab (CONDITIONAL_JUMP)  ; caseD_8
    MOV EDI,dword ptr [EBX + 0x1ffac]   ; 005935c3
    XOR ESI,ESI                         ; 005935c9
    TEST EDI,EDI                        ; 005935cb
    JZ 0x005935d4                       ; 005935cd
        ;   XREF to: 005935d4 (CONDITIONAL_JUMP)  ; LAB_005935d4
    MOV ESI,0xa                         ; 005935cf
    CMP dword ptr [EBX + 0xc1d8],0x0    ; 005935d4
        ;   Label: LAB_005935d4
    JZ 0x005935ef                       ; 005935db
        ;   XREF to: 005935ef (CONDITIONAL_JUMP)  ; LAB_005935ef
    CMP dword ptr [EBX + 0xc1e0],0x0    ; 005935dd
    JZ 0x0059369f                       ; 005935e4
        ;   XREF to: 0059369f (CONDITIONAL_JUMP)  ; LAB_0059369f
    MOV ESI,0x2                         ; 005935ea
    CMP dword ptr [EBX + 0xc1dc],0x0    ; 005935ef
        ;   Label: LAB_005935ef
    JZ 0x005935fd                       ; 005935f6
        ;   XREF to: 005935fd (CONDITIONAL_JUMP)  ; LAB_005935fd
    MOV ESI,0x3                         ; 005935f8
    CMP dword ptr [EBX + 0xc1f0],0x0    ; 005935fd
        ;   Label: LAB_005935fd
    JZ 0x00593631                       ; 00593604
        ;   XREF to: 00593631 (CONDITIONAL_JUMP)  ; LAB_00593631
    MOV ESI,dword ptr [EBX + 0x1ffac]   ; 00593606
    MOV dword ptr [EBX + 0xc1f0],0x0    ; 0059360c
    TEST ESI,ESI                        ; 00593616
    SETZ AL                             ; 00593618
    AND EAX,0xff                        ; 0059361b
    MOV dword ptr [EBX + 0x1ffac],EAX   ; 00593620
    JZ 0x005936a9                       ; 00593626
        ;   XREF to: 005936a9 (CONDITIONAL_JUMP)  ; LAB_005936a9
    MOV ESI,0xa                         ; 0059362c
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 00593631
        ;   Label: LAB_00593631
    JZ 0x0059366a                       ; 00593638
        ;   XREF to: 0059366a (CONDITIONAL_JUMP)  ; LAB_0059366a
    MOV EAX,dword ptr [EBX + 0x1ffac]   ; 0059363a
    MOV EDI,0x1                         ; 00593640
    TEST EAX,EAX                        ; 00593645
    JZ 0x005936ad                       ; 00593647
        ;   XREF to: 005936ad (CONDITIONAL_JUMP)  ; LAB_005936ad
    TEST EDI,EDI                        ; 00593649
        ;   Label: LAB_00593649
    JZ 0x0059366a                       ; 0059364b
        ;   XREF to: 0059366a (CONDITIONAL_JUMP)  ; LAB_0059366a
    MOV ECX,dword ptr [EBX + 0x1ffb0]   ; 0059364d
        ;   Label: LAB_0059364d
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 00593653
    TEST ECX,ECX                        ; 0059365d
    JZ 0x0059371e                       ; 0059365f
        ;   XREF to: 0059371e (CONDITIONAL_JUMP)  ; LAB_0059371e
    MOV ESI,0xe                         ; 00593665
    FLD float ptr [EBX + 0xc200]        ; 0059366a
        ;   Label: LAB_0059366a
    LEA EDI,[EBX + 0x158]               ; 00593670
    FMUL float ptr [EBX + 0x2528]       ; 00593676
    PUSH EDI                            ; 0059367c
    FSTP float ptr [EBX + 0x2508]       ; 0059367d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00593683
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00593688
    ADD ESP,0x4                         ; 0059368b
    CMP ESI,EAX                         ; 0059368e
    JZ 0x005932ab                       ; 00593690
        ;   XREF to: 005932ab (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 00593696
    PUSH ESI                            ; 00593698
    PUSH EDI                            ; 00593699
    JMP 0x005932a3                      ; 0059369a
        ;   XREF to: 005932a3 (UNCONDITIONAL_JUMP)  ; LAB_005932a3
    MOV ESI,0x1                         ; 0059369f
        ;   Label: LAB_0059369f
    JMP 0x005935ef                      ; 005936a4
        ;   XREF to: 005935ef (UNCONDITIONAL_JUMP)  ; LAB_005935ef
    XOR ESI,ESI                         ; 005936a9
        ;   Label: LAB_005936a9
    JMP 0x00593631                      ; 005936ab
        ;   XREF to: 00593631 (UNCONDITIONAL_JUMP)  ; LAB_00593631
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 005936ad
        ;   Label: LAB_005936ad
    JZ 0x00593649                       ; 005936b4
        ;   XREF to: 00593649 (CONDITIONAL_JUMP)  ; LAB_00593649
    PUSH EBX                            ; 005936b6
    CALL core_hero.cpp_CHero_tryInteract_FUN_004eb090 ; 005936b7
        ;   XREF to: 004eb090 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryInteract_FUN_004eb090(CHero * this_ptr)
    XOR EDI,EDI                         ; 005936bc
    ADD ESP,0x4                         ; 005936be
    TEST EAX,EAX                        ; 005936c1
    JNZ 0x00593649                      ; 005936c3
        ;   XREF to: 00593649 (CONDITIONAL_JUMP)  ; LAB_00593649
    PUSH EAX                            ; 005936c5
    PUSH EBX                            ; 005936c6
    CALL core_hero.cpp_FUN_004eb3e0     ; 005936c7
        ;   XREF to: 004eb3e0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb3e0()
    ADD ESP,0x8                         ; 005936cc
    MOV EBP,EAX                         ; 005936cf
    TEST EAX,EAX                        ; 005936d1
    JBE 0x005936da                      ; 005936d3
        ;   XREF to: 005936da (CONDITIONAL_JUMP)  ; LAB_005936da
    CMP EAX,0x1                         ; 005936d5
    JNZ 0x00593705                      ; 005936d8
        ;   XREF to: 00593705 (CONDITIONAL_JUMP)  ; LAB_00593705
    TEST EBP,EBP                        ; 005936da
        ;   Label: LAB_005936da
    JNZ 0x00593649                      ; 005936dc
        ;   XREF to: 00593649 (CONDITIONAL_JUMP)  ; LAB_00593649
    PUSH EBX                            ; 005936e2
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240 ; 005936e3
        ;   XREF to: 004eb240 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(CHero * this_ptr)
    ADD ESP,0x4                         ; 005936e8
    TEST EAX,EAX                        ; 005936eb
    JNZ 0x00593649                      ; 005936ed
        ;   XREF to: 00593649 (CONDITIONAL_JUMP)  ; LAB_00593649
    PUSH EBX                            ; 005936f3
    CALL core_hero.cpp_FUN_004eb660     ; 005936f4
        ;   XREF to: 004eb660 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004eb660(CHero * this_ptr)
    ADD ESP,0x4                         ; 005936f9
    TEST EAX,EAX                        ; 005936fc
    JNZ 0x00593710                      ; 005936fe
        ;   XREF to: 00593710 (CONDITIONAL_JUMP)  ; LAB_00593710
    JMP 0x0059364d                      ; 00593700
        ;   XREF to: 0059364d (UNCONDITIONAL_JUMP)  ; LAB_0059364d
    PUSH EBX                            ; 00593705
        ;   Label: LAB_00593705
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0 ; 00593706
        ;   XREF to: 004eb5e0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0059370b
    JMP 0x005936da                      ; 0059370e
        ;   XREF to: 005936da (UNCONDITIONAL_JUMP)  ; LAB_005936da
    PUSH EBX                            ; 00593710
        ;   Label: LAB_00593710
    CALL core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0 ; 00593711
        ;   XREF to: 004eb7f0 (UNCONDITIONAL_CALL)  ; undefined4 core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00593716
    JMP 0x00593649                      ; 00593719
        ;   XREF to: 00593649 (UNCONDITIONAL_JUMP)  ; LAB_00593649
    MOV ESI,0xf                         ; 0059371e
        ;   Label: LAB_0059371e
    JMP 0x0059366a                      ; 00593723
        ;   XREF to: 0059366a (UNCONDITIONAL_JUMP)  ; LAB_0059366a
    MOV dword ptr [EBX + 0x26fc],EAX    ; 00593728
        ;   Label: LAB_00593728
    JMP 0x00593454                      ; 0059372e
        ;   XREF to: 00593454 (UNCONDITIONAL_JUMP)  ; LAB_00593454
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 00593733
        ;   Label: LAB_00593733
    JZ 0x00593467                       ; 0059373a
        ;   XREF to: 00593467 (CONDITIONAL_JUMP)  ; LAB_00593467
    PUSH 0x1                            ; 00593740
    PUSH 0x10                           ; 00593742
    PUSH EBP                            ; 00593744
    JMP 0x0059345f                      ; 00593745
        ;   XREF to: 0059345f (UNCONDITIONAL_JUMP)  ; LAB_0059345f
    MOV dword ptr [ESP + 0x44],EDI      ; 0059374a
        ;   Label: LAB_0059374a
    LEA ESI,[EBX + 0x249c]              ; 0059374e
    MOV dword ptr [ESP + 0x48],EDI      ; 00593754
    MOV dword ptr [ESP + 0x4c],EDI      ; 00593758
    MOV EAX,dword ptr [ESI]             ; 0059375c
    MOV dword ptr [ESP + 0x44],EAX      ; 0059375e
    MOV EAX,dword ptr [ESI + 0x4]       ; 00593762
    MOV dword ptr [ESP + 0x48],EAX      ; 00593765
    MOV EAX,dword ptr [ESI + 0x8]       ; 00593769
    MOV dword ptr [ESP + 0x4c],EAX      ; 0059376c
    LEA EAX,[EBX + 0x158]               ; 00593770
    PUSH EAX                            ; 00593776
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00593777
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059377c
    ADD ESP,0x4                         ; 0059377f
    CMP EAX,0x1a                        ; 00593782
    JZ 0x00593797                       ; 00593785
        ;   XREF to: 00593797 (CONDITIONAL_JUMP)  ; LAB_00593797
    PUSH dword ptr [ESP + 0xd8]         ; 00593787
    PUSH EBX                            ; 0059378e
    CALL core_charactr.cpp_FUN_0042d700 ; 0059378f
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    ADD ESP,0x8                         ; 00593794
    LEA EAX,[EBX + 0x2518]              ; 00593797
        ;   Label: LAB_00593797
    FLD float ptr [ESP + 0xd8]          ; 0059379d
    FLD float ptr [EAX]                 ; 005937a4
    FMUL ST1                            ; 005937a6
    FLD float ptr [EAX + 0x4]           ; 005937a8
    FMUL ST2                            ; 005937ab
    FLD float ptr [EAX + 0x8]           ; 005937ad
    FMULP ST3                           ; 005937b0
    FLD float ptr [ESP + 0x44]          ; 005937b2
    FLD float ptr [ESP + 0x48]          ; 005937b6
    FLD float ptr [ESP + 0x4c]          ; 005937ba
    LEA EDI,[ESP + 0x8c]                ; 005937be
    LEA ESI,[ESP + 0x5c]                ; 005937c5
    LEA EDX,[EBX + 0x250c]              ; 005937c9
    FXCH ST4                            ; 005937cf
    FSTP float ptr [ESP + 0x5c]         ; 005937d1
    FXCH ST2                            ; 005937d5
    FSTP float ptr [ESP + 0x60]         ; 005937d7
    FXCH ST3                            ; 005937db
    FSTP float ptr [ESP + 0x64]         ; 005937dd
    MOVSD ES:EDI,ESI                    ; 005937e1
    MOVSD ES:EDI,ESI                    ; 005937e2
    MOVSD ES:EDI,ESI                    ; 005937e3
    LEA EAX,[EBX + 0x158]               ; 005937e4
    FLD float ptr [ESP + 0x8c]          ; 005937ea
    FLD float ptr [ESP + 0x90]          ; 005937f1
    FLD float ptr [ESP + 0x94]          ; 005937f8
    LEA EDI,[ESP + 0x2c]                ; 005937ff
    LEA ESI,[ESP + 0x68]                ; 00593803
    FXCH ST2                            ; 00593807
    FADD float ptr [EDX]                ; 00593809
    FXCH                                ; 0059380b
    FADD float ptr [EDX + 0x4]          ; 0059380d
    FXCH ST2                            ; 00593810
    FADD float ptr [EDX + 0x8]          ; 00593812
    FXCH                                ; 00593815
    FSTP float ptr [ESP + 0x68]         ; 00593817
    FXCH                                ; 0059381b
    FSTP float ptr [ESP + 0x6c]         ; 0059381d
    FSTP float ptr [ESP + 0x70]         ; 00593821
    MOVSD ES:EDI,ESI                    ; 00593825
    MOVSD ES:EDI,ESI                    ; 00593826
    MOVSD ES:EDI,ESI                    ; 00593827
    PUSH EAX                            ; 00593828
    FXCH ST2                            ; 00593829
    FADD float ptr [ESP + 0x30]         ; 0059382b
    FXCH ST2                            ; 0059382f
    FADD float ptr [ESP + 0x34]         ; 00593831
    FXCH                                ; 00593835
    FADD float ptr [ESP + 0x38]         ; 00593837
    FXCH ST2                            ; 0059383b
    FSTP float ptr [ESP + 0x48]         ; 0059383d
    FSTP float ptr [ESP + 0x4c]         ; 00593841
    FSTP float ptr [ESP + 0x50]         ; 00593845
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00593849
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059384e
    ADD ESP,0x4                         ; 00593851
    CMP EAX,0x17                        ; 00593854
    JZ 0x00593885                       ; 00593857
        ;   XREF to: 00593885 (CONDITIONAL_JUMP)  ; LAB_00593885
    CMP EAX,0x18                        ; 00593859
    JZ 0x00593885                       ; 0059385c
        ;   XREF to: 00593885 (CONDITIONAL_JUMP)  ; LAB_00593885
    CMP EAX,0x19                        ; 0059385e
    JZ 0x00593885                       ; 00593861
        ;   XREF to: 00593885 (CONDITIONAL_JUMP)  ; LAB_00593885
    CMP EAX,0x25                        ; 00593863
    JZ 0x00593885                       ; 00593866
        ;   XREF to: 00593885 (CONDITIONAL_JUMP)  ; LAB_00593885
    CMP EAX,0x26                        ; 00593868
    JZ 0x00593885                       ; 0059386b
        ;   XREF to: 00593885 (CONDITIONAL_JUMP)  ; LAB_00593885
    CMP EAX,0x27                        ; 0059386d
    JZ 0x00593885                       ; 00593870
        ;   XREF to: 00593885 (CONDITIONAL_JUMP)  ; LAB_00593885
    CMP EAX,0x28                        ; 00593872
    JZ 0x00593885                       ; 00593875
        ;   XREF to: 00593885 (CONDITIONAL_JUMP)  ; LAB_00593885
    LEA EAX,[ESP + 0x44]                ; 00593877
    PUSH EAX                            ; 0059387b
    PUSH EBX                            ; 0059387c
    CALL core_charactr.cpp_FUN_0042d750 ; 0059387d
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00593882
    LEA EAX,[EBX + 0x158]               ; 00593885
        ;   Label: LAB_00593885
    PUSH EAX                            ; 0059388b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0059388c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00593891
    ADD ESP,0x4                         ; 00593894
    CMP EAX,0x1a                        ; 00593897
    JNZ 0x00593467                      ; 0059389a
        ;   XREF to: 00593467 (CONDITIONAL_JUMP)  ; LAB_00593467
    FLD float ptr [ESP + 0xd8]          ; 005938a0
    FMUL double ptr [0x005f7577]        ; 005938a7 | DAT_005f7577
    FADD float ptr [EBX + 0x24]         ; 005938ad
    FSTP float ptr [EBX + 0x24]         ; 005938b0
    JMP 0x00593467                      ; 005938b3
        ;   XREF to: 00593467 (UNCONDITIONAL_JUMP)  ; LAB_00593467

