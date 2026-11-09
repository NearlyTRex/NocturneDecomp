; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog_cpp_FUN_0045e360(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0045e338 = 0045e7bb
;   TerminatedCString s_s_confused_while_walking_005d08ac
;   TerminatedCString s_dog5_wav_005d08d6
;   TerminatedCString s_dog5_wav_005d08df
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d08e8
;   undefined4 DAT_005d090c
;   undefined4 DAT_005d0914
;   undefined4 DAT_005f5328
;   undefined4 DAT_005f5334
;   CConsole* g_CConsolePtr = 007c158c
;   CGore* g_CGorePtr = 01cb8284
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01caf5b4
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_0040cf60
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_00424430
;   core_charactr.cpp_FUN_00424470
;   core_charactr.cpp_FUN_004287f0
;   core_charactr.cpp_FUN_00429420
;   core_charactr.cpp_FUN_00429e90
;   core_charactr.cpp_FUN_0042a7a0
;   core_charactr.cpp_FUN_0042b2a0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e360
        ;   Label: core_dog.cpp_FUN_0045e360
    PUSH ESI                            ; 0045e361
    PUSH EDI                            ; 0045e362
    PUSH EBP                            ; 0045e363
    MOV EBP,ESP                         ; 0045e364
    SUB ESP,0x148                       ; 0045e366
    SUB EBP,0x7a                        ; 0045e36c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0045e36f
    PUSH dword ptr [EBP + 0x92]         ; 0045e375
    PUSH EBX                            ; 0045e37b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 0045e37c
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0045e381
    TEST EAX,EAX                        ; 0045e384
    JNZ 0x0045e390                      ; 0045e386
        ;   XREF to: 0045e390 (CONDITIONAL_JUMP)  ; LAB_0045e390
    LEA ESP,[EBP + 0x7a]                ; 0045e388
    POP EBP                             ; 0045e38b
    POP EDI                             ; 0045e38c
    POP ESI                             ; 0045e38d
    POP EBX                             ; 0045e38e
    RET                                 ; 0045e38f
    PUSH dword ptr [EBP + 0x92]         ; 0045e390
        ;   Label: LAB_0045e390
    PUSH EBX                            ; 0045e396
    CALL core_charactr.cpp_FUN_0042a7a0 ; 0045e397
        ;   XREF to: 0042a7a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042a7a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0045e39c
    PUSH 0x0                            ; 0045e39f
    PUSH dword ptr [EBP + 0x92]         ; 0045e3a1
    PUSH EBX                            ; 0045e3a7
    CALL core_charactr.cpp_FUN_00429420 ; 0045e3a8
        ;   XREF to: 00429420 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00429420(CCharacter * this_ptr, float delta_time, int disable_search)
    LEA EAX,[EBX + 0x2508]              ; 0045e3ad
    MOV dword ptr [EAX + 0x8],0x0       ; 0045e3b3
    FLD float ptr [EBP + 0x92]          ; 0045e3ba
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045e3c0
    MOV dword ptr [EAX + 0x4],EDX       ; 0045e3c3
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045e3c6
    MOV dword ptr [EAX],EDX             ; 0045e3c9
    FMUL float ptr [EBX + 0x10a60]      ; 0045e3cb
    ADD ESP,0xc                         ; 0045e3d1
    LEA ESI,[EBX + 0x2b4]               ; 0045e3d4
    FSTP float ptr [EBP + 0x66]         ; 0045e3da
    FLD float ptr [EBP + 0x66]          ; 0045e3dd
        ;   Label: LAB_0045e3dd
    FLDZ                                ; 0045e3e0
    FCOMPP                              ; 0045e3e2
    FNSTSW AX                           ; 0045e3e4
    SAHF                                ; 0045e3e6
    JNC 0x0045e402                      ; 0045e3e7
        ;   XREF to: 0045e402 (CONDITIONAL_JUMP)  ; LAB_0045e402
    LEA EAX,[EBP + 0x66]                ; 0045e3e9
    PUSH EAX                            ; 0045e3ec
    PUSH ESI                            ; 0045e3ed
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 0045e3ee
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0045e3f3
    PUSH EAX                            ; 0045e3f6
    PUSH EBX                            ; 0045e3f7
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 0045e3f8
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0045e3fd
    JMP 0x0045e3dd                      ; 0045e400
        ;   XREF to: 0045e3dd (UNCONDITIONAL_JUMP)  ; LAB_0045e3dd
    PUSH ESI                            ; 0045e402
        ;   Label: LAB_0045e402
    CALL core_motion.cpp_FUN_005035c0   ; 0045e403
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    FLD float ptr [EBP + 0x92]          ; 0045e408
    FMUL float ptr [EBX + 0x10a60]      ; 0045e40e
    FLD float ptr [EBX + 0x2510]        ; 0045e414
    ADD ESP,0x4                         ; 0045e41a
    MOV ESI,dword ptr [EAX + 0x24]      ; 0045e41d
    SUB ESP,0x4                         ; 0045e420
    FSTP float ptr [EBX + 0x2594]       ; 0045e423
    FSTP float ptr [ESP]                ; 0045e429
    PUSH EBX                            ; 0045e42c
    MOV dword ptr [EBP + 0x72],ESI      ; 0045e42d
    CALL core_charactr.cpp_FUN_0042b2a0 ; 0045e430
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 0045e435
    CMP ESI,0x2                         ; 0045e438
    JNZ 0x0045e453                      ; 0045e43b
        ;   XREF to: 0045e453 (CONDITIONAL_JUMP)  ; LAB_0045e453
    FLD float ptr [EBX + 0x2598]        ; 0045e43d
    FLD ST0                             ; 0045e443
    FMUL double ptr [0x005d090c]        ; 0045e445 | DAT_005d090c
    FSTP ST1                            ; 0045e44b
    FSTP float ptr [EBX + 0x2598]       ; 0045e44d
    PUSH dword ptr [EBP + 0x92]         ; 0045e453
        ;   Label: LAB_0045e453
    PUSH EBX                            ; 0045e459
    CALL core_charactr.cpp_FUN_004287f0 ; 0045e45a
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0045e45f
    TEST EAX,EAX                        ; 0045e462
    JZ 0x0045ea92                       ; 0045e464
        ;   XREF to: 0045ea92 (CONDITIONAL_JUMP)  ; LAB_0045ea92
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 0045e46a
    CMP EAX,0x2                         ; 0045e470
    JNC 0x0045e651                      ; 0045e473
        ;   XREF to: 0045e651 (CONDITIONAL_JUMP)  ; LAB_0045e651
    CMP EAX,0x1                         ; 0045e479
    JNZ 0x0045e65c                      ; 0045e47c
        ;   XREF to: 0045e65c (CONDITIONAL_JUMP)  ; LAB_0045e65c
    PUSH 0x1                            ; 0045e482
        ;   Label: LAB_0045e482
    PUSH 0x1                            ; 0045e484
    LEA EAX,[EBX + 0x2b4]               ; 0045e486
        ;   Label: LAB_0045e486
    PUSH EAX                            ; 0045e48c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045e48d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045e492
        ;   Label: LAB_0045e492
    LEA EAX,[EBX + 0x2508]              ; 0045e495
    MOV dword ptr [EAX + 0x8],0x0       ; 0045e49b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045e4a2
    MOV dword ptr [EAX + 0x4],EDX       ; 0045e4a5
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045e4a8
    MOV dword ptr [EAX],EDX             ; 0045e4ab
    FLD float ptr [EBX + 0x10a74]       ; 0045e4ad
        ;   Label: caseD_5
    FLDZ                                ; 0045e4b3
    FCOMPP                              ; 0045e4b5
    FNSTSW AX                           ; 0045e4b7
    SAHF                                ; 0045e4b9
    JNC 0x0045e4ce                      ; 0045e4ba
        ;   XREF to: 0045e4ce (CONDITIONAL_JUMP)  ; LAB_0045e4ce
    FLD float ptr [EBX + 0x10a74]       ; 0045e4bc
    FSUB float ptr [EBP + 0x92]         ; 0045e4c2
    FSTP float ptr [EBX + 0x10a74]      ; 0045e4c8
    PUSH EBX                            ; 0045e4ce
        ;   Label: LAB_0045e4ce
    CALL core_charactr.cpp_FUN_00424430 ; 0045e4cf
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0045e4d4
    TEST EAX,EAX                        ; 0045e4d7
    JZ 0x0045e5f8                       ; 0045e4d9
        ;   XREF to: 0045e5f8 (CONDITIONAL_JUMP)  ; LAB_0045e5f8
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 0045e4df
    TEST ESI,ESI                        ; 0045e4e5
    JZ 0x0045e512                       ; 0045e4e7
        ;   XREF to: 0045e512 (CONDITIONAL_JUMP)  ; LAB_0045e512
    PUSH ESI                            ; 0045e4e9
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 0045e4ea
    CALL dword ptr [EDX + 0xfc]         ; 0045e4f0
    ADD ESP,0x4                         ; 0045e4f6
    CMP EAX,EBX                         ; 0045e4f9
    JNZ 0x0045e512                      ; 0045e4fb
        ;   XREF to: 0045e512 (CONDITIONAL_JUMP)  ; LAB_0045e512
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 0045e4fd
    PUSH EDI                            ; 0045e503
    MOV EAX,[0x0061b5a8]                ; 0045e504 | g_CDemonSetPtr
    PUSH EAX                            ; 0045e509 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0045e50a
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045e50f
    PUSH dword ptr [EBP + 0x92]         ; 0045e512
        ;   Label: LAB_0045e512
    PUSH EBX                            ; 0045e518
    LEA ESI,[EBX + 0x2588]              ; 0045e519
    CALL core_charactr.cpp_FUN_00423a10 ; 0045e51f
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 0045e524
    FMUL float ptr [EBP + 0x92]         ; 0045e526
    FLD float ptr [ESI + 0x4]           ; 0045e52c
    FMUL float ptr [EBP + 0x92]         ; 0045e52f
    FLD float ptr [ESI + 0x8]           ; 0045e535
    FMUL float ptr [EBP + 0x92]         ; 0045e538
    LEA EDI,[EBP + -0x2]                ; 0045e53e
    LEA ESI,[EBP + 0x3a]                ; 0045e541
    FXCH ST2                            ; 0045e544
    FSTP float ptr [EBP + 0x3a]         ; 0045e546
    FSTP float ptr [EBP + 0x3e]         ; 0045e549
    FSTP float ptr [EBP + 0x42]         ; 0045e54c
    MOVSD ES:EDI,ESI                    ; 0045e54f
    MOVSD ES:EDI,ESI                    ; 0045e550
    MOVSD ES:EDI,ESI                    ; 0045e551
    LEA EDX,[EBX + 0x257c]              ; 0045e552
    FLD float ptr [EBP + -0x2]          ; 0045e558
    FLD float ptr [EBP + 0x2]           ; 0045e55b
    FLD float ptr [EBP + 0x6]           ; 0045e55e
    LEA EDI,[EBP + 0xffffff6e]          ; 0045e561
    LEA ESI,[EBP + 0x16]                ; 0045e567
    FXCH ST2                            ; 0045e56a
    FADD float ptr [EDX]                ; 0045e56c
    FXCH                                ; 0045e56e
    FADD float ptr [EDX + 0x4]          ; 0045e570
    FXCH ST2                            ; 0045e573
    FADD float ptr [EDX + 0x8]          ; 0045e575
    FXCH                                ; 0045e578
    FSTP float ptr [EBP + 0x16]         ; 0045e57a
    FXCH                                ; 0045e57d
    FSTP float ptr [EBP + 0x1a]         ; 0045e57f
    FSTP float ptr [EBP + 0x1e]         ; 0045e582
    MOVSD ES:EDI,ESI                    ; 0045e585
    MOVSD ES:EDI,ESI                    ; 0045e586
    MOVSD ES:EDI,ESI                    ; 0045e587
    LEA EAX,[EBX + 0x2508]              ; 0045e588
    FLD float ptr [EBP + 0xffffff6e]    ; 0045e58e
    FLD float ptr [EBP + 0xffffff72]    ; 0045e594
    FLD float ptr [EBP + 0xffffff76]    ; 0045e59a
    LEA EDI,[EBP + -0x56]               ; 0045e5a0
    LEA ESI,[EBP + -0x1a]               ; 0045e5a3
    FXCH ST2                            ; 0045e5a6
    FADD float ptr [EAX]                ; 0045e5a8
    FXCH                                ; 0045e5aa
    FADD float ptr [EAX + 0x4]          ; 0045e5ac
    FXCH ST2                            ; 0045e5af
    FADD float ptr [EAX + 0x8]          ; 0045e5b1
    FXCH                                ; 0045e5b4
    FSTP float ptr [EBP + -0x1a]        ; 0045e5b6
    FXCH                                ; 0045e5b9
    FSTP float ptr [EBP + -0x16]        ; 0045e5bb
    FSTP float ptr [EBP + -0x12]        ; 0045e5be
    MOVSD ES:EDI,ESI                    ; 0045e5c1
    MOVSD ES:EDI,ESI                    ; 0045e5c2
    MOVSD ES:EDI,ESI                    ; 0045e5c3
    MOV dword ptr [EDX + 0x8],0x0       ; 0045e5c4
    MOV ECX,dword ptr [EDX + 0x8]       ; 0045e5cb
    MOV dword ptr [EDX + 0x4],ECX       ; 0045e5ce
    MOV ECX,dword ptr [EDX + 0x4]       ; 0045e5d1
    MOV dword ptr [EDX],ECX             ; 0045e5d4
    MOV dword ptr [EAX + 0x8],0x0       ; 0045e5d6
    ADD ESP,0x8                         ; 0045e5dd
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045e5e0
    MOV dword ptr [EAX + 0x4],EDX       ; 0045e5e3
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045e5e6
    MOV dword ptr [EAX],EDX             ; 0045e5e9
    LEA EAX,[EBP + -0x56]               ; 0045e5eb
    PUSH EAX                            ; 0045e5ee
    PUSH EBX                            ; 0045e5ef
    CALL core_charactr.cpp_FUN_00423a60 ; 0045e5f0
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0045e5f5
    PUSH EBX                            ; 0045e5f8
        ;   Label: LAB_0045e5f8
    CALL core_charactr.cpp_FUN_00424470 ; 0045e5f9
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0045e5fe
    LEA EAX,[EBX + 0x2b4]               ; 0045e601
    PUSH EAX                            ; 0045e607
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 0045e608
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0045e60d
    PUSH dword ptr [EBP + 0x92]         ; 0045e610
    PUSH EBX                            ; 0045e616
    CALL core_charactr.cpp_FUN_00429e90 ; 0045e617
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0045e61c
    LEA ESP,[EBP + 0x7a]                ; 0045e61f
    POP EBP                             ; 0045e622
    POP EDI                             ; 0045e623
    POP ESI                             ; 0045e624
    POP EBX                             ; 0045e625
    RET                                 ; 0045e626
    PUSH 0x1                            ; 0045e627
        ;   Label: LAB_0045e627
    PUSH 0x0                            ; 0045e629
    LEA EAX,[EBX + 0x2b4]               ; 0045e62b
    PUSH EAX                            ; 0045e631
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045e632
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045e637
    PUSH EBX                            ; 0045e63a
    PUSH 0x5d08ac                       ; 0045e63b | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x00609ed0]      ; 0045e640 | g_CConsolePtr
    PUSH ECX                            ; 0045e646 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0045e647
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    JMP 0x0045e492                      ; 0045e64c
        ;   XREF to: 0045e492 (UNCONDITIONAL_JUMP)  ; LAB_0045e492
    JBE 0x0045e482                      ; 0045e651
        ;   XREF to: 0045e482 (CONDITIONAL_JUMP)  ; LAB_0045e482
        ;   Label: LAB_0045e651
    CMP EAX,0x3                         ; 0045e657
    JZ 0x0045e627                       ; 0045e65a
        ;   XREF to: 0045e627 (CONDITIONAL_JUMP)  ; LAB_0045e627
    PUSH 0x1                            ; 0045e65c
        ;   Label: LAB_0045e65c
    PUSH 0x0                            ; 0045e65e
    JMP 0x0045e486                      ; 0045e660
        ;   XREF to: 0045e486 (UNCONDITIONAL_JUMP)  ; LAB_0045e486
    LEA EAX,[EBP + 0xffffff32]          ; 0045e665
        ;   Label: caseD_3
    PUSH EAX                            ; 0045e66b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0045e66c
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0045e671
    PUSH 0x41700000                     ; 0045e674
    PUSH 0x40e00000                     ; 0045e679
    CALL core_actor.cpp_FUN_0040cf60    ; 0045e67e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 0045e683
    MOV dword ptr [EBP + 0xffffff66],EBX ; 0045e686
    MOV dword ptr [EBP + 0xffffff6a],EBX ; 0045e68c
    ADD ESP,0x8                         ; 0045e692
    FLD float ptr [EBP + 0x76]          ; 0045e695
    LEA EAX,[EBP + 0xffffff32]          ; 0045e698
    FSTP float ptr [EBP + 0xffffff36]   ; 0045e69e
    MOV EDX,dword ptr [EBX + 0x10afc]   ; 0045e6a4
    PUSH EAX                            ; 0045e6aa
    LEA EAX,[EDX*0x4 + 0x0]             ; 0045e6ab
    SUB EAX,EDX                         ; 0045e6b2
    MOV EDX,EAX                         ; 0045e6b4
    SHL EDX,0x4                         ; 0045e6b6
    LEA EAX,[EBX + 0x1134]              ; 0045e6b9
    ADD EAX,EDX                         ; 0045e6bf
    PUSH 0x3f333333                     ; 0045e6c1
    PUSH EAX                            ; 0045e6c6
    PUSH 0x265370c                      ; 0045e6c7 | DAT_0265370c
    LEA ESI,[EBP + 0xffffff7a]          ; 0045e6cc
    LEA EDI,[EBP + 0x46]                ; 0045e6d2
    CALL core_xform.cpp_FUN_00591530    ; 0045e6d5
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0045e6da
    LEA EAX,[EBP + 0x46]                ; 0045e6dd
    LEA ESI,[EBP + 0xffffff7a]          ; 0045e6e0
    PUSH EAX                            ; 0045e6e6
    MOVSD ES:EDI,ESI                    ; 0045e6e7
    MOVSD ES:EDI,ESI                    ; 0045e6e8
    MOVSD ES:EDI,ESI                    ; 0045e6e9
    PUSH EBX                            ; 0045e6ea
    LEA ESI,[EBP + 0x22]                ; 0045e6eb
    CALL core_actor.cpp_FUN_00408d70    ; 0045e6ee
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0045e6f3
    LEA EAX,[EBP + -0x26]               ; 0045e6f6
    PUSH EAX                            ; 0045e6f9
    LEA EDI,[EBP + -0x26]               ; 0045e6fa
    LEA ESI,[EBP + 0x22]                ; 0045e6fd
    PUSH EBX                            ; 0045e700
    MOVSD ES:EDI,ESI                    ; 0045e701
    MOVSD ES:EDI,ESI                    ; 0045e702
    MOVSD ES:EDI,ESI                    ; 0045e703
    CALL core_enemy.cpp_FUN_00488110    ; 0045e704
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0045e709
    MOV EAX,dword ptr [EBX + 0x10b00]   ; 0045e70c
    PUSH EAX                            ; 0045e712
    MOV EDX,dword ptr [0x0061c068]      ; 0045e713 | DAT_0061c068
    PUSH EDX                            ; 0045e719
    CALL core_sound.cpp_FUN_0055af70    ; 0045e71a
        ;   XREF to: 0055af70 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_0055af70(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0045e71f
    TEST EAX,EAX                        ; 0045e722
    JNZ 0x0045e4ad                      ; 0045e724
        ;   XREF to: 0045e4ad (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5d08d6                       ; 0045e72a | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045e72f
    PUSH EBX                            ; 0045e735
    CALL dword ptr [EAX + 0x34]         ; 0045e736
    ADD ESP,0x8                         ; 0045e739
    MOV dword ptr [EBX + 0x10b00],EAX   ; 0045e73c
    JMP 0x0045e4ad                      ; 0045e742
        ;   XREF to: 0045e4ad (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV ECX,dword ptr [EBX + 0x10a64]   ; 0045e747
        ;   Label: caseD_7
    TEST ECX,ECX                        ; 0045e74d
    JNZ 0x0045e4ad                      ; 0045e74f
        ;   XREF to: 0045e4ad (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0xdc],0x0      ; 0045e755
    JNZ 0x0045e4ad                      ; 0045e75c
        ;   XREF to: 0045e4ad (CONDITIONAL_JUMP)  ; caseD_6
    PUSH ECX                            ; 0045e762
    LEA EAX,[EBX + 0x2b4]               ; 0045e763
    PUSH EAX                            ; 0045e769
    LEA ESI,[EBP + 0x2e]                ; 0045e76a
    LEA EDI,[EBP + -0x32]               ; 0045e76d
    CALL core_skeleton.cpp_FUN_005469a0 ; 0045e770
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0045e775
    LEA EAX,[EBP + -0x32]               ; 0045e778
    LEA ESI,[EBP + 0x2e]                ; 0045e77b
    PUSH EAX                            ; 0045e77e
    MOVSD ES:EDI,ESI                    ; 0045e77f
    MOVSD ES:EDI,ESI                    ; 0045e780
    MOVSD ES:EDI,ESI                    ; 0045e781
    PUSH EBX                            ; 0045e782
    LEA ESI,[EBP + -0xe]                ; 0045e783
    LEA EDI,[EBP + -0x3e]               ; 0045e786
    CALL core_actor.cpp_FUN_00408d70    ; 0045e789
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0045e78e
    LEA ESI,[EBP + -0xe]                ; 0045e791
    LEA EAX,[EBP + -0x3e]               ; 0045e794
    PUSH 0x0                            ; 0045e797
    MOVSD ES:EDI,ESI                    ; 0045e799
    MOVSD ES:EDI,ESI                    ; 0045e79a
    MOVSD ES:EDI,ESI                    ; 0045e79b
    PUSH EAX                            ; 0045e79c
    MOV EDI,dword ptr [0x006167e0]      ; 0045e79d | g_CGorePtr
    PUSH EDI                            ; 0045e7a3
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 0045e7a4
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0045e7a9
    MOV dword ptr [EBX + 0x10a64],0x1   ; 0045e7ac
    JMP 0x0045e4ad                      ; 0045e7b6
        ;   XREF to: 0045e4ad (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 0045e7bb
        ;   Label: caseD_0
    PUSH EBX                            ; 0045e7c1
    CALL core_enemy.cpp_FUN_00488970    ; 0045e7c2
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488970(CEnemy * this_ptr, float delta_time)
    LEA EDX,[EBX + 0x2b4]               ; 0045e7c7
    ADD ESP,0x8                         ; 0045e7cd
    MOV dword ptr [EBP + 0x6e],EDX      ; 0045e7d0
    TEST EAX,EAX                        ; 0045e7d3
    JZ 0x0045e7e9                       ; 0045e7d5
        ;   XREF to: 0045e7e9 (CONDITIONAL_JUMP)  ; LAB_0045e7e9
    PUSH 0x1                            ; 0045e7d7
    PUSH 0x1                            ; 0045e7d9
    PUSH EDX                            ; 0045e7db
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045e7dc
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045e7e1
    JMP 0x0045e4ad                      ; 0045e7e4
        ;   XREF to: 0045e4ad (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 0045e7e9
        ;   Label: LAB_0045e7e9
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045e7ef
    PUSH EBX                            ; 0045e7f5
    CALL dword ptr [EAX + 0x150]        ; 0045e7f6
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0045e7fc
    ADD ESP,0x8                         ; 0045e802
    TEST EAX,EAX                        ; 0045e805
    JZ 0x0045e4ad                       ; 0045e807
        ;   XREF to: 0045e4ad (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EAX + 0x20]          ; 0045e80d
    FLD float ptr [EAX + 0x24]          ; 0045e810
    FLD float ptr [EAX + 0x28]          ; 0045e813
    LEA EDX,[EBX + 0x20]                ; 0045e816
    LEA EDI,[EBP + -0x7a]               ; 0045e819
    LEA ESI,[EBP + 0xa]                 ; 0045e81c
    FXCH ST2                            ; 0045e81f
    FSUB float ptr [EDX]                ; 0045e821
    FXCH                                ; 0045e823
    FSUB float ptr [EDX + 0x4]          ; 0045e825
    FXCH ST2                            ; 0045e828
    FSUB float ptr [EDX + 0x8]          ; 0045e82a
    FXCH                                ; 0045e82d
    FSTP float ptr [EBP + 0xa]          ; 0045e82f
    FXCH                                ; 0045e832
    FSTP float ptr [EBP + 0xe]          ; 0045e834
    FSTP float ptr [EBP + 0x12]         ; 0045e837
    MOVSD ES:EDI,ESI                    ; 0045e83a
    MOVSD ES:EDI,ESI                    ; 0045e83b
    MOVSD ES:EDI,ESI                    ; 0045e83c
    FLD float ptr [EBP + -0x76]         ; 0045e83d
    FMUL ST0                            ; 0045e840
    FLD float ptr [EBP + -0x7a]         ; 0045e842
    FMUL ST0                            ; 0045e845
    FADDP                               ; 0045e847
    FLD float ptr [EBP + -0x72]         ; 0045e849
    FMUL ST0                            ; 0045e84c
    FADDP                               ; 0045e84e
    FSTP float ptr [EBP + 0x5e]         ; 0045e850
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0045e853
    MOV EDX,dword ptr [0x01caf5b4]      ; 0045e856 | DAT_01caf5b4
    SAR EAX,0x1                         ; 0045e85c
    ADD EAX,EDX                         ; 0045e85e
    MOV dword ptr [EBP + 0x62],EAX      ; 0045e860
    FLD float ptr [EBP + 0x62]          ; 0045e863
    FCOMP float ptr [0x005f5334]        ; 0045e866 | DAT_005f5334
    FNSTSW AX                           ; 0045e86c
    SAHF                                ; 0045e86e
    JC 0x0045e8bb                       ; 0045e86f
        ;   XREF to: 0045e8bb (CONDITIONAL_JUMP)  ; LAB_0045e8bb
    PUSH 0x1                            ; 0045e871
    PUSH 0x2                            ; 0045e873
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0045e875
    PUSH ECX                            ; 0045e878
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045e879
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0045e879
    ADD ESP,0xc                         ; 0045e87e
    MOV EDI,dword ptr [EBX + 0x10b00]   ; 0045e881
    PUSH EDI                            ; 0045e887
    MOV EAX,[0x0061c068]                ; 0045e888 | DAT_0061c068
    PUSH EAX                            ; 0045e88d
    CALL core_sound.cpp_FUN_0055af70    ; 0045e88e
        ;   XREF to: 0055af70 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_0055af70(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0045e893
    TEST EAX,EAX                        ; 0045e896
    JNZ 0x0045e4ad                      ; 0045e898
        ;   XREF to: 0045e4ad (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5d08df                       ; 0045e89e | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045e8a3
    PUSH EBX                            ; 0045e8a9
    CALL dword ptr [EAX + 0x34]         ; 0045e8aa
    ADD ESP,0x8                         ; 0045e8ad
    MOV dword ptr [EBX + 0x10b00],EAX   ; 0045e8b0
    JMP 0x0045e4ad                      ; 0045e8b6
        ;   XREF to: 0045e4ad (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0045e8bb
        ;   Label: LAB_0045e8bb
    PUSH 0x1                            ; 0045e8bd
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0045e8bf
    PUSH ESI                            ; 0045e8c2
    JMP 0x0045e879                      ; 0045e8c3
        ;   XREF to: 0045e879 (UNCONDITIONAL_JUMP)  ; LAB_0045e879
    PUSH dword ptr [EBP + 0x92]         ; 0045e8c5
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045e8cb
    PUSH EBX                            ; 0045e8d1
    CALL dword ptr [EAX + 0x150]        ; 0045e8d2
    ADD ESP,0x8                         ; 0045e8d8
    LEA EAX,[EBX + 0x2b4]               ; 0045e8db
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 0045e8e1
    MOV dword ptr [EBP + 0x6a],EAX      ; 0045e8e7
    TEST ECX,ECX                        ; 0045e8ea
    JZ 0x0045ea26                       ; 0045e8ec
        ;   XREF to: 0045ea26 (CONDITIONAL_JUMP)  ; LAB_0045ea26
    LEA EDX,[EBX + 0x20]                ; 0045e8f2
    LEA EDI,[EBP + -0x6e]               ; 0045e8f5
    LEA ESI,[EBP + -0x4a]               ; 0045e8f8
    FLD float ptr [EDX]                 ; 0045e8fb
    FLD float ptr [EDX + 0x4]           ; 0045e8fd
    FLD float ptr [EDX + 0x8]           ; 0045e900
    FXCH ST2                            ; 0045e903
    FSUB float ptr [ECX + 0x20]         ; 0045e905
    FXCH                                ; 0045e908
    FSUB float ptr [ECX + 0x24]         ; 0045e90a
    FXCH ST2                            ; 0045e90d
    FSUB float ptr [ECX + 0x28]         ; 0045e90f
    FXCH                                ; 0045e912
    FSTP float ptr [EBP + -0x4a]        ; 0045e914
    FXCH                                ; 0045e917
    FSTP float ptr [EBP + -0x46]        ; 0045e919
    FSTP float ptr [EBP + -0x42]        ; 0045e91c
    MOVSD ES:EDI,ESI                    ; 0045e91f
    MOVSD ES:EDI,ESI                    ; 0045e920
    MOVSD ES:EDI,ESI                    ; 0045e921
    FLD float ptr [EBP + -0x6a]         ; 0045e922
    FMUL ST0                            ; 0045e925
    FLD float ptr [EBP + -0x6e]         ; 0045e927
    FMUL ST0                            ; 0045e92a
    FADDP                               ; 0045e92c
    FLD float ptr [EBP + -0x66]         ; 0045e92e
    FMUL ST0                            ; 0045e931
    FADDP                               ; 0045e933
    FSQRT                               ; 0045e935
    FCOMP float ptr [0x005f5334]        ; 0045e937 | DAT_005f5334
    FNSTSW AX                           ; 0045e93d
    SAHF                                ; 0045e93f
    JBE 0x0045e959                      ; 0045e940
        ;   XREF to: 0045e959 (CONDITIONAL_JUMP)  ; LAB_0045e959
    MOV ESI,dword ptr [EBP + 0x72]      ; 0045e942
    CMP ESI,0x1                         ; 0045e945
    JNZ 0x0045e959                      ; 0045e948
        ;   XREF to: 0045e959 (CONDITIONAL_JUMP)  ; LAB_0045e959
    PUSH ESI                            ; 0045e94a
    PUSH 0x2                            ; 0045e94b
    MOV EDI,dword ptr [EBP + 0x6a]      ; 0045e94d
    PUSH EDI                            ; 0045e950
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045e951
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045e956
    MOV EAX,[0x005f5328]                ; 0045e959 | DAT_005f5328
        ;   Label: LAB_0045e959
    MOV dword ptr [EBP + 0x5a],EAX      ; 0045e95e
    LEA EAX,[EBX + 0x2508]              ; 0045e961
    MOV dword ptr [EAX + 0x8],0x0       ; 0045e967
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045e96e
    MOV dword ptr [EAX + 0x4],EDX       ; 0045e971
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045e974
    MOV dword ptr [EAX],EDX             ; 0045e977
    XOR EAX,EAX                         ; 0045e979
    MOV dword ptr [EBP + -0x62],EAX     ; 0045e97b
    MOV dword ptr [EBP + -0x5e],EAX     ; 0045e97e
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0045e981
    PUSH 0x3e32b8c2                     ; 0045e984
    MOV dword ptr [EBP + -0x5a],EAX     ; 0045e989
    LEA EAX,[EBP + -0x62]               ; 0045e98c
    PUSH 0x3f000000                     ; 0045e98f
    PUSH EAX                            ; 0045e994
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0045e995
    PUSH EAX                            ; 0045e99b
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0045e99c
    CALL dword ptr [EDX + 0xcc]         ; 0045e9a2
    ADD ESP,0x4                         ; 0045e9a8
    PUSH EAX                            ; 0045e9ab
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0045e9ac
    ADD EAX,0x20                        ; 0045e9b2
    PUSH EAX                            ; 0045e9b5
    PUSH EBX                            ; 0045e9b6
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0045e9b7
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0045e9bc
    LEA ESI,[EBX + 0x2b4]               ; 0045e9bf
    TEST EAX,EAX                        ; 0045e9c5
    JL 0x0045ea62                       ; 0045e9c7
        ;   XREF to: 0045ea62 (CONDITIONAL_JUMP)  ; LAB_0045ea62
    JLE 0x0045e4ad                      ; 0045e9cd
        ;   XREF to: 0045e4ad (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBX + 0x10a74]       ; 0045e9d3
    FLDZ                                ; 0045e9d9
    FCOMPP                              ; 0045e9db
    FNSTSW AX                           ; 0045e9dd
    SAHF                                ; 0045e9df
    JC 0x0045e4ad                       ; 0045e9e0
        ;   XREF to: 0045e4ad (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x3f800000                     ; 0045e9e6
    PUSH 0x0                            ; 0045e9eb
    CALL core_actor.cpp_FUN_0040cf60    ; 0045e9ed
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 0045e9f2
    ADD ESP,0x8                         ; 0045e9f5
    FLD float ptr [EBP + 0x76]          ; 0045e9f8
    FCOMP double ptr [0x005d0914]       ; 0045e9fb | DAT_005d0914
    FNSTSW AX                           ; 0045ea01
    SAHF                                ; 0045ea03
    JA 0x0045ea89                       ; 0045ea04
        ;   XREF to: 0045ea89 (CONDITIONAL_JUMP)  ; LAB_0045ea89
    PUSH 0x1                            ; 0045ea0a
    PUSH 0x4                            ; 0045ea0c
    PUSH ESI                            ; 0045ea0e
        ;   Label: LAB_0045ea0e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045ea0f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045ea14
    MOV dword ptr [EBX + 0x10a74],0x40200000 ; 0045ea17
    JMP 0x0045e4ad                      ; 0045ea21
        ;   XREF to: 0045e4ad (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 0045ea26
        ;   Label: LAB_0045ea26
    PUSH EBX                            ; 0045ea2c
    CALL core_enemy.cpp_FUN_00488970    ; 0045ea2d
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0045ea32
    TEST EAX,EAX                        ; 0045ea35
    JZ 0x0045ea4e                       ; 0045ea37
        ;   XREF to: 0045ea4e (CONDITIONAL_JUMP)  ; LAB_0045ea4e
    PUSH 0x1                            ; 0045ea39
    PUSH 0x1                            ; 0045ea3b
    MOV EDI,dword ptr [EBP + 0x6a]      ; 0045ea3d
    PUSH EDI                            ; 0045ea40
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045ea41
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045ea46
    JMP 0x0045e4ad                      ; 0045ea49
        ;   XREF to: 0045e4ad (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0045ea4e
        ;   Label: LAB_0045ea4e
    PUSH EAX                            ; 0045ea50
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0045ea51
    PUSH ESI                            ; 0045ea54
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045ea55
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045ea5a
    JMP 0x0045e4ad                      ; 0045ea5d
        ;   XREF to: 0045e4ad (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 0045ea62
        ;   Label: LAB_0045ea62
    PUSH 0x5d08e8                       ; 0045ea63 | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0045ea68 | g_CConsolePtr
    PUSH ECX                            ; 0045ea6e | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0045ea6f
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 0045ea74
    PUSH 0x1                            ; 0045ea77
    PUSH 0x0                            ; 0045ea79
    PUSH ESI                            ; 0045ea7b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045ea7c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045ea81
    JMP 0x0045e4ad                      ; 0045ea84
        ;   XREF to: 0045e4ad (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0045ea89
        ;   Label: LAB_0045ea89
    PUSH 0x3                            ; 0045ea8b
    JMP 0x0045ea0e                      ; 0045ea8d
        ;   XREF to: 0045ea0e (UNCONDITIONAL_JUMP)  ; LAB_0045ea0e
    MOV EDX,dword ptr [EBP + 0x72]      ; 0045ea92
        ;   Label: LAB_0045ea92
    CMP EDX,0x7                         ; 0045ea95
    JA 0x0045e4ad                       ; 0045ea98
        ;   XREF to: 0045e4ad (CONDITIONAL_JUMP)  ; caseD_6
    MOV EAX,EDX                         ; 0045ea9e
    JMP dword ptr [EAX*0x4 + 0x45e338]  ; 0045eaa0 | caseD_0 | caseD_2 | caseD_4
        ;   Label: switchD

