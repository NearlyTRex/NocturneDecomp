; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sentinel_cpp_CSentinel_process_FUN_00531380(CSentinel *this_ptr,float delta_time)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00531320 = 005315de
;   undefined1* switchdataD_00531334 = 0053182a
;   TerminatedCString s_wing_wav_005d004e
;   TerminatedCString s_sentinel_fall_wav_005d0058
;   TerminatedCString s_s_confused_while_walking_005d006a
;   undefined4 DAT_005d009a
;   undefined4 DAT_005d00a2
;   undefined4 DAT_005d00aa
;   undefined4 DAT_005e3a08
;   undefined4 DAT_005e3a14
;   CConsole* g_CConsolePtr = 007f7ea4
;   CGore* g_CGorePtr = 01d22e44
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01ed785c
;   undefined4 DAT_01ed7864
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_00434850
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531380
        ;   Label: core_sentinel.cpp_CSentinel_process_FUN_00531380
    PUSH ESI                            ; 00531381
    PUSH EDI                            ; 00531382
    PUSH EBP                            ; 00531383
    MOV EBP,ESP                         ; 00531384
    SUB ESP,0x280                       ; 00531386
    SUB EBP,0x7a                        ; 0053138c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053138f
    PUSH dword ptr [EBP + 0x92]         ; 00531395
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053139b
    PUSH EBX                            ; 005313a1
    CALL dword ptr [EAX + 0x148]        ; 005313a2
    ADD ESP,0x8                         ; 005313a8
    TEST EAX,EAX                        ; 005313ab
    JZ 0x005315d6                       ; 005313ad
        ;   XREF to: 005315d6 (CONDITIONAL_JUMP)  ; LAB_005315d6
    LEA EAX,[EBX + 0x249c]              ; 005313b3
    MOV dword ptr [EAX + 0x8],0x0       ; 005313b9
    FLD float ptr [EBP + 0x92]          ; 005313c0
    MOV EDX,dword ptr [EAX + 0x8]       ; 005313c6
    MOV dword ptr [EAX + 0x4],EDX       ; 005313c9
    MOV EDX,dword ptr [EAX + 0x4]       ; 005313cc
    MOV dword ptr [EAX],EDX             ; 005313cf
    FMUL float ptr [EBX + 0xcdcc]       ; 005313d1
    LEA EAX,[EBX + 0x158]               ; 005313d7
    FSTP float ptr [EBP + 0x4e]         ; 005313dd
    MOV dword ptr [EBP + 0x6e],EAX      ; 005313e0
    FLD float ptr [EBP + 0x4e]          ; 005313e3
        ;   Label: LAB_005313e3
    FLDZ                                ; 005313e6
    FCOMPP                              ; 005313e8
    FNSTSW AX                           ; 005313ea
    SAHF                                ; 005313ec
    JC 0x005317ab                       ; 005313ed
        ;   XREF to: 005317ab (CONDITIONAL_JUMP)  ; LAB_005317ab
    FLD float ptr [EBP + 0x92]          ; 005313f3
    FMUL float ptr [EBX + 0xcdcc]       ; 005313f9
    SUB ESP,0x4                         ; 005313ff
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00531402
    MOV dword ptr [EBX + 0x2524],EAX    ; 00531408
    FSTP float ptr [ESP]                ; 0053140e
    PUSH EBX                            ; 00531411
    CALL core_charactr.cpp_FUN_00434850 ; 00531412
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 00531417
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0053141a
    PUSH EDX                            ; 0053141d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0053141e
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00531423
    PUSH dword ptr [EBP + 0x92]         ; 00531426
    MOV ESI,dword ptr [EAX + 0x24]      ; 0053142c
    PUSH EBX                            ; 0053142f
    MOV EDI,ESI                         ; 00531430
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 00531432
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00531437
    TEST EAX,EAX                        ; 0053143a
    JZ 0x00531807                       ; 0053143c
        ;   XREF to: 00531807 (CONDITIONAL_JUMP)  ; LAB_00531807
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00531442
    CMP EAX,0x2                         ; 00531448
    JNC 0x005317f3                      ; 0053144b
        ;   XREF to: 005317f3 (CONDITIONAL_JUMP)  ; LAB_005317f3
    CMP EAX,0x1                         ; 00531451
    JNZ 0x005317fe                      ; 00531454
        ;   XREF to: 005317fe (CONDITIONAL_JUMP)  ; LAB_005317fe
    PUSH 0x1                            ; 0053145a
        ;   Label: LAB_0053145a
    PUSH 0x2                            ; 0053145c
    LEA EAX,[EBX + 0x158]               ; 0053145e
        ;   Label: LAB_0053145e
    PUSH EAX                            ; 00531464
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531465
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053146a
        ;   Label: LAB_0053146a
    LEA EAX,[EBX + 0x249c]              ; 0053146d
    MOV dword ptr [EAX + 0x8],0x0       ; 00531473
    MOV EDX,dword ptr [EAX + 0x8]       ; 0053147a
    MOV dword ptr [EAX + 0x4],EDX       ; 0053147d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00531480
    MOV dword ptr [EAX],EDX             ; 00531483
    FLD float ptr [EBX + 0xcde0]        ; 00531485
        ;   Label: caseD_5
    FLDZ                                ; 0053148b
    FCOMPP                              ; 0053148d
    FNSTSW AX                           ; 0053148f
    SAHF                                ; 00531491
    JNC 0x005314a6                      ; 00531492
        ;   XREF to: 005314a6 (CONDITIONAL_JUMP)  ; LAB_005314a6
    FLD float ptr [EBX + 0xcde0]        ; 00531494
    FSUB float ptr [EBP + 0x92]         ; 0053149a
    FSTP float ptr [EBX + 0xcde0]       ; 005314a0
    PUSH EBX                            ; 005314a6
        ;   Label: LAB_005314a6
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 005314a7
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005314ac
    TEST EAX,EAX                        ; 005314af
    JZ 0x005315af                       ; 005314b1
        ;   XREF to: 005315af (CONDITIONAL_JUMP)  ; LAB_005315af
    PUSH dword ptr [EBP + 0x92]         ; 005314b7
    PUSH EBX                            ; 005314bd
    LEA ESI,[EBX + 0x2518]              ; 005314be
    CALL core_charactr.cpp_FUN_0042c1e0 ; 005314c4
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 005314c9
    FMUL float ptr [EBP + 0x92]         ; 005314cb
    FLD float ptr [ESI + 0x4]           ; 005314d1
    FMUL float ptr [EBP + 0x92]         ; 005314d4
    FLD float ptr [ESI + 0x8]           ; 005314da
    FMUL float ptr [EBP + 0x92]         ; 005314dd
    LEA EDI,[EBP + 0xfffffe8a]          ; 005314e3
    LEA ESI,[EBP + 0xfffffec6]          ; 005314e9
    FXCH ST2                            ; 005314ef
    FSTP float ptr [EBP + 0xfffffec6]   ; 005314f1
    FSTP float ptr [EBP + 0xfffffeca]   ; 005314f7
    FSTP float ptr [EBP + 0xfffffece]   ; 005314fd
    MOVSD ES:EDI,ESI                    ; 00531503
    MOVSD ES:EDI,ESI                    ; 00531504
    MOVSD ES:EDI,ESI                    ; 00531505
    LEA EDX,[EBX + 0x250c]              ; 00531506
    FLD float ptr [EBP + 0xfffffe8a]    ; 0053150c
    FLD float ptr [EBP + 0xfffffe8e]    ; 00531512
    FLD float ptr [EBP + 0xfffffe92]    ; 00531518
    LEA EDI,[EBP + 0x3a]                ; 0053151e
    LEA ESI,[EBP + -0x6e]               ; 00531521
    FXCH ST2                            ; 00531524
    FADD float ptr [EDX]                ; 00531526
    FXCH                                ; 00531528
    FADD float ptr [EDX + 0x4]          ; 0053152a
    FXCH ST2                            ; 0053152d
    FADD float ptr [EDX + 0x8]          ; 0053152f
    FXCH                                ; 00531532
    FSTP float ptr [EBP + -0x6e]        ; 00531534
    FXCH                                ; 00531537
    FSTP float ptr [EBP + -0x6a]        ; 00531539
    FSTP float ptr [EBP + -0x66]        ; 0053153c
    MOVSD ES:EDI,ESI                    ; 0053153f
    MOVSD ES:EDI,ESI                    ; 00531540
    MOVSD ES:EDI,ESI                    ; 00531541
    LEA EAX,[EBX + 0x249c]              ; 00531542
    FLD float ptr [EBP + 0x3a]          ; 00531548
    FLD float ptr [EBP + 0x3e]          ; 0053154b
    FLD float ptr [EBP + 0x42]          ; 0053154e
    LEA EDI,[EBP + 0xfffffeae]          ; 00531551
    LEA ESI,[EBP + -0x4a]               ; 00531557
    FXCH ST2                            ; 0053155a
    FADD float ptr [EAX]                ; 0053155c
    FXCH                                ; 0053155e
    FADD float ptr [EAX + 0x4]          ; 00531560
    FXCH ST2                            ; 00531563
    FADD float ptr [EAX + 0x8]          ; 00531565
    FXCH                                ; 00531568
    FSTP float ptr [EBP + -0x4a]        ; 0053156a
    FXCH                                ; 0053156d
    FSTP float ptr [EBP + -0x46]        ; 0053156f
    FSTP float ptr [EBP + -0x42]        ; 00531572
    MOVSD ES:EDI,ESI                    ; 00531575
    MOVSD ES:EDI,ESI                    ; 00531576
    MOVSD ES:EDI,ESI                    ; 00531577
    MOV dword ptr [EDX + 0x8],0x0       ; 00531578
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053157f
    MOV dword ptr [EDX + 0x4],ECX       ; 00531582
    MOV ECX,dword ptr [EDX + 0x4]       ; 00531585
    MOV dword ptr [EDX],ECX             ; 00531588
    MOV dword ptr [EAX + 0x8],0x0       ; 0053158a
    ADD ESP,0x8                         ; 00531591
    MOV EDX,dword ptr [EAX + 0x8]       ; 00531594
    MOV dword ptr [EAX + 0x4],EDX       ; 00531597
    MOV EDX,dword ptr [EAX + 0x4]       ; 0053159a
    MOV dword ptr [EAX],EDX             ; 0053159d
    LEA EAX,[EBP + 0xfffffeae]          ; 0053159f
    PUSH EAX                            ; 005315a5
    PUSH EBX                            ; 005315a6
    CALL core_charactr.cpp_FUN_0042c230 ; 005315a7
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005315ac
    PUSH EBX                            ; 005315af
        ;   Label: LAB_005315af
    CALL core_charactr.cpp_FUN_0042cd30 ; 005315b0
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005315b5
    LEA EAX,[EBX + 0x158]               ; 005315b8
    PUSH EAX                            ; 005315be
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 005315bf
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005315c4
    PUSH dword ptr [EBP + 0x92]         ; 005315c7
    PUSH EBX                            ; 005315cd
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 005315ce
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005315d3
    LEA ESP,[EBP + 0x7a]                ; 005315d6
        ;   Label: LAB_005315d6
    POP EBP                             ; 005315d9
    POP EDI                             ; 005315da
    POP ESI                             ; 005315db
    POP EBX                             ; 005315dc
    RET                                 ; 005315dd
    MOV EDX,0x1                         ; 005315de
        ;   Label: caseD_64
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 005315e3
    MOV dword ptr [EBP + 0x72],EDX      ; 005315e9
    TEST ECX,ECX                        ; 005315ec
    JNZ 0x00531605                      ; 005315ee
        ;   XREF to: 00531605 (CONDITIONAL_JUMP)  ; LAB_00531605
    PUSH 0x1                            ; 005315f0
        ;   Label: LAB_005315f0
    PUSH 0x0                            ; 005315f2
    MOV EDI,dword ptr [EBP + 0x6e]      ; 005315f4
    PUSH EDI                            ; 005315f7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005315f8
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005315fd
    JMP 0x005313e3                      ; 00531600
        ;   XREF to: 005313e3 (UNCONDITIONAL_JUMP)  ; LAB_005313e3
    PUSH ECX                            ; 00531605
        ;   Label: LAB_00531605
    MOV EDX,dword ptr [ECX + 0x154]     ; 00531606
    CALL dword ptr [EDX + 0x10c]        ; 0053160c
    ADD ESP,0x4                         ; 00531612
    TEST EAX,EAX                        ; 00531615
    JNZ 0x005315f0                      ; 00531617
        ;   XREF to: 005315f0 (CONDITIONAL_JUMP)  ; LAB_005315f0
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00531619
    PUSH EAX                            ; 0053161f
    MOV EDX,dword ptr [EAX + 0x154]     ; 00531620
    CALL dword ptr [EDX + 0xf4]         ; 00531626
    ADD ESP,0x4                         ; 0053162c
    TEST EAX,EAX                        ; 0053162f
    JNZ 0x005315f0                      ; 00531631
        ;   XREF to: 005315f0 (CONDITIONAL_JUMP)  ; LAB_005315f0
    PUSH 0x0                            ; 00531633
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00531635
    PUSH EBX                            ; 0053163b
    MOV EDX,dword ptr [EAX + 0x154]     ; 0053163c
    PUSH EAX                            ; 00531642
    CALL dword ptr [EDX + 0xe8]         ; 00531643
    ADD ESP,0xc                         ; 00531649
    TEST EAX,EAX                        ; 0053164c
    JZ 0x005315f0                       ; 0053164e
        ;   XREF to: 005315f0 (CONDITIONAL_JUMP)  ; LAB_005315f0
    MOV EAX,[0x005e3a08]                ; 00531650 | DAT_005e3a08
    MOV dword ptr [EBP + -0x5a],EAX     ; 00531655
    LEA EAX,[EBP + -0x62]               ; 00531658
    XOR ESI,ESI                         ; 0053165b
    PUSH EAX                            ; 0053165d
    MOV dword ptr [EBP + -0x62],ESI     ; 0053165e
    MOV dword ptr [EBP + -0x5e],ESI     ; 00531661
    PUSH EBX                            ; 00531664
    LEA ESI,[EBP + -0x32]               ; 00531665
    LEA EDI,[EBP + 0xffffff3e]          ; 00531668
    CALL core_actor.cpp_FUN_00408b80    ; 0053166e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + -0x32]               ; 00531673
    MOVSD ES:EDI,ESI                    ; 00531676
    MOVSD ES:EDI,ESI                    ; 00531677
    MOVSD ES:EDI,ESI                    ; 00531678
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00531679
    FLD float ptr [EBP + 0xffffff3e]    ; 0053167f
    FSUB float ptr [EAX + 0x20]         ; 00531685
    FMUL ST0                            ; 00531688
    FLD float ptr [EBP + 0xffffff46]    ; 0053168a
    FSUB float ptr [EAX + 0x28]         ; 00531690
    FMUL ST0                            ; 00531693
    FADDP                               ; 00531695
    FSQRT                               ; 00531697
    ADD ESP,0x8                         ; 00531699
    FCOMP double ptr [0x005d00a2]       ; 0053169c | DAT_005d00a2
    FNSTSW AX                           ; 005316a2
    SAHF                                ; 005316a4
    JBE 0x005316ac                      ; 005316a5
        ;   XREF to: 005316ac (CONDITIONAL_JUMP)  ; LAB_005316ac
    XOR EAX,EAX                         ; 005316a7
    MOV dword ptr [EBP + 0x72],EAX      ; 005316a9
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 005316ac
        ;   Label: LAB_005316ac
    FLD float ptr [EBP + 0xffffff42]    ; 005316b2
    FSUB float ptr [EDX + 0x24]         ; 005316b8
    FABS                                ; 005316bb
    FCOMP double ptr [0x005d00aa]       ; 005316bd | DAT_005d00aa
    FNSTSW AX                           ; 005316c3
    SAHF                                ; 005316c5
    JA 0x005315f0                       ; 005316c6
        ;   XREF to: 005315f0 (CONDITIONAL_JUMP)  ; LAB_005315f0
    CMP dword ptr [EBP + 0x72],0x0      ; 005316cc
    JNZ 0x005316e1                      ; 005316d0
        ;   XREF to: 005316e1 (CONDITIONAL_JUMP)  ; LAB_005316e1
    CMP dword ptr [EBP + 0x72],0x0      ; 005316d2
        ;   Label: LAB_005316d2
    JNZ 0x005313e3                      ; 005316d6
        ;   XREF to: 005313e3 (CONDITIONAL_JUMP)  ; LAB_005313e3
    JMP 0x005315f0                      ; 005316dc
        ;   XREF to: 005315f0 (UNCONDITIONAL_JUMP)  ; LAB_005315f0
    PUSH 0x0                            ; 005316e1
        ;   Label: LAB_005316e1
    PUSH EBX                            ; 005316e3
    MOV EAX,dword ptr [EDX + 0x154]     ; 005316e4
    PUSH EDX                            ; 005316ea
    CALL dword ptr [EAX + 0xec]         ; 005316eb
    ADD ESP,0xc                         ; 005316f1
    TEST EAX,EAX                        ; 005316f4
    JNZ 0x005316d2                      ; 005316f6
        ;   XREF to: 005316d2 (CONDITIONAL_JUMP)  ; LAB_005316d2
    JMP 0x005315f0                      ; 005316f8
        ;   XREF to: 005315f0 (UNCONDITIONAL_JUMP)  ; LAB_005315f0
    PUSH EBX                            ; 005316fd
        ;   Label: caseD_65
    MOV EAX,dword ptr [EBX + 0x154]     ; 005316fe
    CALL dword ptr [EAX + 0xf8]         ; 00531704
    ADD ESP,0x4                         ; 0053170a
    JMP 0x005313e3                      ; 0053170d
        ;   XREF to: 005313e3 (UNCONDITIONAL_JUMP)  ; LAB_005313e3
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00531712
        ;   Label: caseD_66
    JZ 0x005313e3                       ; 00531719
        ;   XREF to: 005313e3 (CONDITIONAL_JUMP)  ; LAB_005313e3
    LEA EAX,[EBP + 0xfffffe36]          ; 0053171f
    PUSH EAX                            ; 00531725
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00531726
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0053172b
    PUSH 0x40a00000                     ; 0053172e
    PUSH 0x3f800000                     ; 00531733
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00531738
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    LEA EDX,[EBP + 0xfffffe36]          ; 0053173d
    MOV dword ptr [EBP + 0x76],EAX      ; 00531743
    ADD ESP,0x8                         ; 00531746
    FLD float ptr [EBP + 0x76]          ; 00531749
    PUSH EDX                            ; 0053174c
    FSTP float ptr [EBP + 0xfffffe3a]   ; 0053174d
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00531753
    PUSH EAX                            ; 00531759
    MOV ESI,dword ptr [EAX + 0x154]     ; 0053175a
    CALL dword ptr [ESI + 0x108]        ; 00531760
    ADD ESP,0x8                         ; 00531766
    JMP 0x005313e3                      ; 00531769
        ;   XREF to: 005313e3 (UNCONDITIONAL_JUMP)  ; LAB_005313e3
    PUSH 0x5d004e                       ; 0053176e | = "wing?.wav"
        ;   Label: caseD_67
    MOV EAX,dword ptr [EBX + 0x154]     ; 00531773
    PUSH EBX                            ; 00531779
    CALL dword ptr [EAX + 0x2c]         ; 0053177a
    ADD ESP,0x8                         ; 0053177d
    JMP 0x005313e3                      ; 00531780
        ;   XREF to: 005313e3 (UNCONDITIONAL_JUMP)  ; LAB_005313e3
    PUSH 0x5d0058                       ; 00531785 | = "sentinel-fall.wav"
        ;   Label: caseD_68
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053178a
    PUSH EBX                            ; 00531790
    CALL dword ptr [EAX + 0x2c]         ; 00531791
    ADD ESP,0x8                         ; 00531794
    JMP 0x005313e3                      ; 00531797
        ;   XREF to: 005313e3 (UNCONDITIONAL_JUMP)  ; LAB_005313e3
    PUSH EDX                            ; 0053179c
        ;   Label: default
    PUSH EBX                            ; 0053179d
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0053179e
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005317a3
    JMP 0x005313e3                      ; 005317a6
        ;   XREF to: 005313e3 (UNCONDITIONAL_JUMP)  ; LAB_005313e3
    LEA EAX,[EBP + 0x4e]                ; 005317ab
        ;   Label: LAB_005317ab
    PUSH EAX                            ; 005317ae
    MOV EDI,dword ptr [EBP + 0x6e]      ; 005317af
    PUSH EDI                            ; 005317b2
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 005317b3
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    MOV EDX,EAX                         ; 005317b8
    SUB EAX,0x64                        ; 005317ba
    ADD ESP,0x8                         ; 005317bd
    CMP EAX,0x4                         ; 005317c0
    JA 0x0053179c                       ; 005317c3
        ;   XREF to: 0053179c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x531320]  ; 005317c5 | caseD_64 | caseD_65 | caseD_66
        ;   Label: switchD
    PUSH 0x1                            ; 005317cc
        ;   Label: LAB_005317cc
    PUSH 0x0                            ; 005317ce
    MOV ECX,dword ptr [EBP + 0x6e]      ; 005317d0
    PUSH ECX                            ; 005317d3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005317d4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005317d9
    PUSH EBX                            ; 005317dc
    PUSH 0x5d006a                       ; 005317dd | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x005f1690]      ; 005317e2 | g_CConsolePtr
    PUSH ESI                            ; 005317e8 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 005317e9
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x0053146a                      ; 005317ee
        ;   XREF to: 0053146a (UNCONDITIONAL_JUMP)  ; LAB_0053146a
    JBE 0x0053145a                      ; 005317f3
        ;   XREF to: 0053145a (CONDITIONAL_JUMP)  ; LAB_0053145a
        ;   Label: LAB_005317f3
    CMP EAX,0x3                         ; 005317f9
    JZ 0x005317cc                       ; 005317fc
        ;   XREF to: 005317cc (CONDITIONAL_JUMP)  ; LAB_005317cc
    PUSH 0x1                            ; 005317fe
        ;   Label: LAB_005317fe
    PUSH 0x0                            ; 00531800
    JMP 0x0053145e                      ; 00531802
        ;   XREF to: 0053145e (UNCONDITIONAL_JUMP)  ; LAB_0053145e
    CMP ESI,0xa                         ; 00531807
        ;   Label: LAB_00531807
    JNZ 0x005318ee                      ; 0053180a
        ;   XREF to: 005318ee (CONDITIONAL_JUMP)  ; LAB_005318ee
    MOV dword ptr [EBX + 0x3270],0x3f000000 ; 00531810
        ;   Label: LAB_00531810
    CMP EDI,0xf                         ; 0053181a
    JA 0x00531485                       ; 0053181d
        ;   XREF to: 00531485 (CONDITIONAL_JUMP)  ; caseD_d
    JMP dword ptr [EDI*0x4 + 0x531334]  ; 00531823 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH dword ptr [EBP + 0x92]         ; 0053182a
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 00531830
    PUSH EBX                            ; 00531836
    CALL dword ptr [EAX + 0x144]        ; 00531837
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0053183d
    ADD ESP,0x8                         ; 00531843
    TEST EDX,EDX                        ; 00531846
    JZ 0x00531b36                       ; 00531848
        ;   XREF to: 00531b36 (CONDITIONAL_JUMP)  ; LAB_00531b36
    MOV EAX,EDX                         ; 0053184e
    LEA EDI,[EBP + 0x22]                ; 00531850
    LEA ESI,[EBP + 0xffffff62]          ; 00531853
    FLD float ptr [EAX + 0x20]          ; 00531859
    FLD float ptr [EAX + 0x24]          ; 0053185c
    LEA EDX,[EBX + 0x20]                ; 0053185f
    FLD float ptr [EAX + 0x28]          ; 00531862
    FXCH ST2                            ; 00531865
    FSUB float ptr [EDX]                ; 00531867
    FXCH                                ; 00531869
    FSUB float ptr [EDX + 0x4]          ; 0053186b
    FXCH ST2                            ; 0053186e
    FSUB float ptr [EDX + 0x8]          ; 00531870
    FXCH                                ; 00531873
    FSTP float ptr [EBP + 0xffffff62]   ; 00531875
    FXCH                                ; 0053187b
    FSTP float ptr [EBP + 0xffffff66]   ; 0053187d
    FSTP float ptr [EBP + 0xffffff6a]   ; 00531883
    MOVSD ES:EDI,ESI                    ; 00531889
    MOVSD ES:EDI,ESI                    ; 0053188a
    MOVSD ES:EDI,ESI                    ; 0053188b
    LEA EDI,[EBP + 0x16]                ; 0053188c
    LEA ESI,[EBP + 0x22]                ; 0053188f
    MOVSD ES:EDI,ESI                    ; 00531892
    MOVSD ES:EDI,ESI                    ; 00531893
    MOVSD ES:EDI,ESI                    ; 00531894
    LEA EDI,[EBP + 0xfffffe96]          ; 00531895
    LEA ESI,[EBP + 0x16]                ; 0053189b
    MOVSD ES:EDI,ESI                    ; 0053189e
    MOVSD ES:EDI,ESI                    ; 0053189f
    MOVSD ES:EDI,ESI                    ; 005318a0
    FLD float ptr [EBP + 0xfffffe9a]    ; 005318a1
    FMUL ST0                            ; 005318a7
    FLD float ptr [EBP + 0xfffffe96]    ; 005318a9
    FMUL ST0                            ; 005318af
    FADDP                               ; 005318b1
    FLD float ptr [EBP + 0xfffffe9e]    ; 005318b3
    FMUL ST0                            ; 005318b9
    FADDP                               ; 005318bb
    LEA EAX,[EBP + 0x66]                ; 005318bd
    FSTP float ptr [EBP + 0x66]         ; 005318c0
    FLD float ptr [EAX]                 ; 005318c3
    FSQRT                               ; 005318c5
    FCOMP float ptr [0x005e3a14]        ; 005318c7 | DAT_005e3a14
    FNSTSW AX                           ; 005318cd
    SAHF                                ; 005318cf
    JBE 0x00531b1e                      ; 005318d0
        ;   XREF to: 00531b1e (CONDITIONAL_JUMP)  ; LAB_00531b1e
    PUSH 0x1                            ; 005318d6
    PUSH 0x3                            ; 005318d8
    LEA EAX,[EBX + 0x158]               ; 005318da
    PUSH EAX                            ; 005318e0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005318e1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005318e6
    JMP 0x00531485                      ; 005318e9
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    CMP ESI,0xb                         ; 005318ee
        ;   Label: LAB_005318ee
    JZ 0x00531810                       ; 005318f1
        ;   XREF to: 00531810 (CONDITIONAL_JUMP)  ; LAB_00531810
    MOV dword ptr [EBX + 0x3270],0x40000000 ; 005318f7
    CMP EDI,0xf                         ; 00531901
    JA 0x00531485                       ; 00531904
        ;   XREF to: 00531485 (CONDITIONAL_JUMP)  ; caseD_d
    JMP dword ptr [EDI*0x4 + 0x531334]  ; 0053190a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,dword ptr [EBX + 0xcdd0]    ; 00531911
        ;   Label: caseD_9
    TEST ESI,ESI                        ; 00531917
    JNZ 0x00531485                      ; 00531919
        ;   XREF to: 00531485 (CONDITIONAL_JUMP)  ; caseD_d
    CMP dword ptr [EBX + 0xdc],0x0      ; 0053191f
    JNZ 0x00531485                      ; 00531926
        ;   XREF to: 00531485 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH ESI                            ; 0053192c
    LEA EAX,[EBX + 0x158]               ; 0053192d
    PUSH EAX                            ; 00531933
    LEA ESI,[EBP + 0xffffff6e]          ; 00531934
    LEA EDI,[EBP + 0xffffff26]          ; 0053193a
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00531940
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 00531945
    LEA EAX,[EBP + 0xffffff26]          ; 00531948
    LEA ESI,[EBP + 0xffffff6e]          ; 0053194e
    PUSH EAX                            ; 00531954
    MOVSD ES:EDI,ESI                    ; 00531955
    MOVSD ES:EDI,ESI                    ; 00531956
    MOVSD ES:EDI,ESI                    ; 00531957
    PUSH EBX                            ; 00531958
    LEA ESI,[EBP + 0xffffff4a]          ; 00531959
    CALL core_actor.cpp_FUN_00408b80    ; 0053195f
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00531964
    PUSH 0x0                            ; 00531967
    LEA EAX,[EBP + 0xffffff1a]          ; 00531969
    LEA EDI,[EBP + 0xffffff1a]          ; 0053196f
    PUSH EAX                            ; 00531975
    MOV EAX,[0x005fed24]                ; 00531976 | g_CGorePtr
    LEA ESI,[EBP + 0xffffff4a]          ; 0053197b
    PUSH EAX                            ; 00531981
    MOVSD ES:EDI,ESI                    ; 00531982
    MOVSD ES:EDI,ESI                    ; 00531983
    MOVSD ES:EDI,ESI                    ; 00531984
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 00531985
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0053198a
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 0053198d
    JMP 0x00531485                      ; 00531997
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EAX,[EBP + 0xfffffdfa]          ; 0053199c
        ;   Label: caseD_4
    PUSH EAX                            ; 005319a2
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 005319a3
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005319a8
    PUSH 0x41700000                     ; 005319ab
    PUSH 0x40e00000                     ; 005319b0
    LEA ESI,[EBP + -0x26]               ; 005319b5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 005319b8
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005319bd
    ADD ESP,0x8                         ; 005319c0
    LEA EAX,[EBP + 0xfffffdfa]          ; 005319c3
    MOV EDX,dword ptr [0x01ed7864]      ; 005319c9 | DAT_01ed7864
    PUSH EAX                            ; 005319cf
    LEA EAX,[EDX*0x4 + 0x0]             ; 005319d0
    MOV dword ptr [EBP + 0xfffffe2e],EBX ; 005319d7
    SUB EAX,EDX                         ; 005319dd
    MOV dword ptr [EBP + 0xfffffe32],EBX ; 005319df
    SHL EAX,0x4                         ; 005319e5
    LEA EDX,[EBX + 0xfd8]               ; 005319e8
    PUSH 0x3f800000                     ; 005319ee
    ADD EAX,EDX                         ; 005319f3
    LEA EDI,[EBP + -0x7a]               ; 005319f5
    PUSH EAX                            ; 005319f8
    FLD float ptr [EBP + 0x76]          ; 005319f9
    PUSH 0x2cfd900                      ; 005319fc | DAT_02cfd900
    FSTP float ptr [EBP + 0xfffffdfe]   ; 00531a01
    MOV dword ptr [EBP + 0x4a],EDX      ; 00531a07
    CALL core_xform.cpp_FUN_00583260    ; 00531a0a
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00531a0f
    LEA EAX,[EBP + -0x7a]               ; 00531a12
    LEA ESI,[EBP + -0x26]               ; 00531a15
    PUSH EAX                            ; 00531a18
    MOVSD ES:EDI,ESI                    ; 00531a19
    MOVSD ES:EDI,ESI                    ; 00531a1a
    MOVSD ES:EDI,ESI                    ; 00531a1b
    PUSH EBX                            ; 00531a1c
    LEA ESI,[EBP + 0xfffffed2]          ; 00531a1d
    CALL core_actor.cpp_FUN_00408b80    ; 00531a23
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00531a28
    LEA EAX,[EBP + -0xe]                ; 00531a2b
    PUSH EAX                            ; 00531a2e
    LEA EDI,[EBP + -0xe]                ; 00531a2f
    LEA ESI,[EBP + 0xfffffed2]          ; 00531a32
    PUSH EBX                            ; 00531a38
    MOVSD ES:EDI,ESI                    ; 00531a39
    MOVSD ES:EDI,ESI                    ; 00531a3a
    MOVSD ES:EDI,ESI                    ; 00531a3b
    CALL core_enemy.cpp_FUN_004893f0    ; 00531a3c
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 00531a41
    PUSH 0x41f00000                     ; 00531a44
    LEA ESI,[EBP + -0x3e]               ; 00531a49
    PUSH 0x41700000                     ; 00531a4c
    LEA EDI,[EBP + -0x2]                ; 00531a51
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00531a54
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00531a59
    ADD ESP,0x8                         ; 00531a5c
    LEA EAX,[EBP + 0xfffffdfa]          ; 00531a5f
    MOV EDX,dword ptr [0x01ed785c]      ; 00531a65 | DAT_01ed785c
    PUSH EAX                            ; 00531a6b
    LEA EAX,[EDX*0x4 + 0x0]             ; 00531a6c
    MOV ECX,dword ptr [EBP + 0x4a]      ; 00531a73
    SUB EAX,EDX                         ; 00531a76
    MOV dword ptr [EBP + 0xfffffe2e],EBX ; 00531a78
    SHL EAX,0x4                         ; 00531a7e
    PUSH 0x3f800000                     ; 00531a81
    ADD EAX,ECX                         ; 00531a86
    MOV dword ptr [EBP + 0xfffffe32],EBX ; 00531a88
    PUSH EAX                            ; 00531a8e
    FLD float ptr [EBP + 0x76]          ; 00531a8f
    PUSH 0x2cfd900                      ; 00531a92 | DAT_02cfd900
    FSTP float ptr [EBP + 0xfffffdfe]   ; 00531a97
    CALL core_xform.cpp_FUN_00583260    ; 00531a9d
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00531aa2
    LEA EAX,[EBP + -0x2]                ; 00531aa5
    LEA ESI,[EBP + -0x3e]               ; 00531aa8
    PUSH EAX                            ; 00531aab
    MOVSD ES:EDI,ESI                    ; 00531aac
    MOVSD ES:EDI,ESI                    ; 00531aad
    MOVSD ES:EDI,ESI                    ; 00531aae
    PUSH EBX                            ; 00531aaf
    LEA ESI,[EBP + 0xffffff0e]          ; 00531ab0
    CALL core_actor.cpp_FUN_00408b80    ; 00531ab6
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00531abb
    LEA EAX,[EBP + 0xffffff56]          ; 00531abe
    PUSH EAX                            ; 00531ac4
    LEA EDI,[EBP + 0xffffff56]          ; 00531ac5
    LEA ESI,[EBP + 0xffffff0e]          ; 00531acb
    PUSH EBX                            ; 00531ad1
    MOVSD ES:EDI,ESI                    ; 00531ad2
    MOVSD ES:EDI,ESI                    ; 00531ad3
    MOVSD ES:EDI,ESI                    ; 00531ad4
    CALL core_enemy.cpp_FUN_004893f0    ; 00531ad5
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 00531ada
    JMP 0x00531485                      ; 00531add
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 00531ae2
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 00531ae8
    PUSH EBX                            ; 00531aee
    CALL dword ptr [EAX + 0x144]        ; 00531aef
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00531af5
    ADD ESP,0x8                         ; 00531afb
    TEST EAX,EAX                        ; 00531afe
    JZ 0x00531485                       ; 00531b00
        ;   XREF to: 00531485 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00531b06
    PUSH 0x0                            ; 00531b08
    LEA EAX,[EBX + 0x158]               ; 00531b0a
    PUSH EAX                            ; 00531b10
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531b11
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531b16
    JMP 0x00531485                      ; 00531b19
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00531b1e
        ;   Label: LAB_00531b1e
    PUSH 0x2                            ; 00531b20
    LEA EAX,[EBX + 0x158]               ; 00531b22
    PUSH EAX                            ; 00531b28
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531b29
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531b2e
    JMP 0x00531485                      ; 00531b31
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 00531b36
        ;   Label: LAB_00531b36
    PUSH EBX                            ; 00531b3c
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 00531b3d
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00531b42
    TEST EAX,EAX                        ; 00531b45
    JZ 0x00531b61                       ; 00531b47
        ;   XREF to: 00531b61 (CONDITIONAL_JUMP)  ; LAB_00531b61
    PUSH 0x1                            ; 00531b49
    PUSH 0x2                            ; 00531b4b
    LEA EAX,[EBX + 0x158]               ; 00531b4d
    PUSH EAX                            ; 00531b53
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531b54
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531b59
    JMP 0x00531485                      ; 00531b5c
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00531b61
        ;   Label: LAB_00531b61
    PUSH 0x1                            ; 00531b63
    LEA EAX,[EBX + 0x158]               ; 00531b65
    PUSH EAX                            ; 00531b6b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531b6c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531b71
    JMP 0x00531485                      ; 00531b74
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    FLD float ptr [EBX + 0xd058]        ; 00531b79
        ;   Label: caseD_a
    FSUB float ptr [EBP + 0x92]         ; 00531b7f
    FST float ptr [EBX + 0xd058]        ; 00531b85
    FLDZ                                ; 00531b8b
    FCOMPP                              ; 00531b8d
    FNSTSW AX                           ; 00531b8f
    SAHF                                ; 00531b91
    JBE 0x00531485                      ; 00531b92
        ;   XREF to: 00531485 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00531b98
    PUSH 0xb                            ; 00531b9a
    LEA EAX,[EBX + 0x158]               ; 00531b9c
    PUSH EAX                            ; 00531ba2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531ba3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531ba8
    JMP 0x00531485                      ; 00531bab
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 00531bb0
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x154]     ; 00531bb6
    PUSH EBX                            ; 00531bbc
    CALL dword ptr [EAX + 0x144]        ; 00531bbd
    ADD ESP,0x8                         ; 00531bc3
    LEA EAX,[EBX + 0x158]               ; 00531bc6
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00531bcc
    MOV dword ptr [EBP + 0x62],EAX      ; 00531bd2
    TEST ESI,ESI                        ; 00531bd5
    JNZ 0x00531c15                      ; 00531bd7
        ;   XREF to: 00531c15 (CONDITIONAL_JUMP)  ; LAB_00531c15
    PUSH dword ptr [EBP + 0x92]         ; 00531bd9
    PUSH EBX                            ; 00531bdf
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 00531be0
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00531be5
    TEST EAX,EAX                        ; 00531be8
    JZ 0x00531c01                       ; 00531bea
        ;   XREF to: 00531c01 (CONDITIONAL_JUMP)  ; LAB_00531c01
    PUSH 0x1                            ; 00531bec
    PUSH 0x2                            ; 00531bee
    MOV EDI,dword ptr [EBP + 0x62]      ; 00531bf0
    PUSH EDI                            ; 00531bf3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531bf4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531bf9
    JMP 0x00531485                      ; 00531bfc
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00531c01
        ;   Label: LAB_00531c01
    PUSH ESI                            ; 00531c03
    MOV ESI,dword ptr [EBP + 0x62]      ; 00531c04
    PUSH ESI                            ; 00531c07
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531c08
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531c0d
    JMP 0x00531485                      ; 00531c10
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    MOV EAX,[0x005e3a08]                ; 00531c15 | DAT_005e3a08
        ;   Label: LAB_00531c15
    PUSH 0x3e32b8c2                     ; 00531c1a
    MOV dword ptr [EBP + 0x5e],EAX      ; 00531c1f
    LEA EAX,[EBX + 0x249c]              ; 00531c22
    PUSH 0x3f000000                     ; 00531c28
    MOV dword ptr [EAX + 0x8],0x0       ; 00531c2d
    XOR EDI,EDI                         ; 00531c34
    MOV EDX,dword ptr [EAX + 0x8]       ; 00531c36
    MOV dword ptr [EAX + 0x4],EDX       ; 00531c39
    MOV EDX,dword ptr [EAX + 0x4]       ; 00531c3c
    MOV dword ptr [EAX],EDX             ; 00531c3f
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00531c41
    MOV dword ptr [EBP + 0xffffff02],EDI ; 00531c44
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 00531c4a
    LEA EAX,[EBP + 0xffffff02]          ; 00531c50
    MOV dword ptr [EBP + 0xffffff06],EDI ; 00531c56
    PUSH EAX                            ; 00531c5c
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00531c5d
    PUSH EAX                            ; 00531c63
    MOV EDX,dword ptr [EAX + 0x154]     ; 00531c64
    CALL dword ptr [EDX + 0xc4]         ; 00531c6a
    ADD ESP,0x4                         ; 00531c70
    PUSH EAX                            ; 00531c73
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00531c74
    ADD EAX,0x20                        ; 00531c7a
    PUSH EAX                            ; 00531c7d
    PUSH EBX                            ; 00531c7e
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00531c7f
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00531c84
    TEST EAX,EAX                        ; 00531c87
    JL 0x00531485                       ; 00531c89
        ;   XREF to: 00531485 (CONDITIONAL_JUMP)  ; caseD_d
    LEA EDI,[EBP + 0xfffffe72]          ; 00531c8f
    LEA EAX,[EBX + 0x20]                ; 00531c95
    LEA ESI,[EBP + -0x1a]               ; 00531c98
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00531c9b
    FLD float ptr [EAX]                 ; 00531ca1
    FLD float ptr [EAX + 0x4]           ; 00531ca3
    FLD float ptr [EAX + 0x8]           ; 00531ca6
    FXCH ST2                            ; 00531ca9
    FSUB float ptr [EDX + 0x20]         ; 00531cab
    FXCH                                ; 00531cae
    FSUB float ptr [EDX + 0x24]         ; 00531cb0
    FXCH ST2                            ; 00531cb3
    FSUB float ptr [EDX + 0x28]         ; 00531cb5
    FXCH                                ; 00531cb8
    FSTP float ptr [EBP + -0x1a]        ; 00531cba
    FXCH                                ; 00531cbd
    FSTP float ptr [EBP + -0x16]        ; 00531cbf
    FSTP float ptr [EBP + -0x12]        ; 00531cc2
    MOVSD ES:EDI,ESI                    ; 00531cc5
    MOVSD ES:EDI,ESI                    ; 00531cc6
    MOVSD ES:EDI,ESI                    ; 00531cc7
    FLD float ptr [EBP + 0xfffffe72]    ; 00531cc8
    FMUL ST0                            ; 00531cce
    FLD float ptr [EBP + 0xfffffe7a]    ; 00531cd0
    FMUL ST0                            ; 00531cd6
    FADDP                               ; 00531cd8
    FSQRT                               ; 00531cda
    XOR EDX,EDX                         ; 00531cdc
    MOV dword ptr [EBP + 0xfffffe76],EDX ; 00531cde
    FSTP float ptr [EBP + 0x56]         ; 00531ce4
    MOV EAX,dword ptr [EBP + 0x56]      ; 00531ce7
    FLD float ptr [EBP + 0x56]          ; 00531cea
    MOV dword ptr [EBP + 0x5a],EAX      ; 00531ced
    FCOMP float ptr [0x005e3a14]        ; 00531cf0 | DAT_005e3a14
    FNSTSW AX                           ; 00531cf6
    SAHF                                ; 00531cf8
    JBE 0x00531d0b                      ; 00531cf9
        ;   XREF to: 00531d0b (CONDITIONAL_JUMP)  ; LAB_00531d0b
    PUSH 0x1                            ; 00531cfb
    PUSH 0x3                            ; 00531cfd
    MOV ECX,dword ptr [EBP + 0x62]      ; 00531cff
    PUSH ECX                            ; 00531d02
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531d03
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531d08
    FLD float ptr [EBP + 0x5a]          ; 00531d0b
        ;   Label: LAB_00531d0b
    FCOMP float ptr [EBP + 0x5e]        ; 00531d0e
    FNSTSW AX                           ; 00531d11
    SAHF                                ; 00531d13
    JA 0x00531de6                       ; 00531d14
        ;   XREF to: 00531de6 (CONDITIONAL_JUMP)  ; LAB_00531de6
    FLD float ptr [EBX + 0xcde0]        ; 00531d1a
    FLDZ                                ; 00531d20
    FCOMPP                              ; 00531d22
    FNSTSW AX                           ; 00531d24
    SAHF                                ; 00531d26
    JC 0x00531de6                       ; 00531d27
        ;   XREF to: 00531de6 (CONDITIONAL_JUMP)  ; LAB_00531de6
    LEA EDI,[EBP + 0xffffff7a]          ; 00531d2d
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00531d33
    LEA ESI,[EBP + 0xfffffeea]          ; 00531d39
    LEA EDX,[EBX + 0x20]                ; 00531d3f
    FLD float ptr [EAX + 0x24]          ; 00531d42
    FLD float ptr [EAX + 0x28]          ; 00531d45
    FLD float ptr [EAX + 0x20]          ; 00531d48
    LEA EAX,[EBP + 0xffffff7a]          ; 00531d4b
    FSUB float ptr [EDX]                ; 00531d51
    FXCH ST2                            ; 00531d53
    FSUB float ptr [EDX + 0x4]          ; 00531d55
    FXCH                                ; 00531d58
    FSUB float ptr [EDX + 0x8]          ; 00531d5a
    FXCH ST2                            ; 00531d5d
    FSTP float ptr [EBP + 0xfffffeea]   ; 00531d5f
    FSTP float ptr [EBP + 0xfffffeee]   ; 00531d65
    FSTP float ptr [EBP + 0xfffffef2]   ; 00531d6b
    MOVSD ES:EDI,ESI                    ; 00531d71
    MOVSD ES:EDI,ESI                    ; 00531d72
    MOVSD ES:EDI,ESI                    ; 00531d73
    PUSH EAX                            ; 00531d74
    LEA ESI,[EBP + 0xfffffea2]          ; 00531d75
    LEA EDI,[EBP + -0x56]               ; 00531d7b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 00531d7e
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xfffffea2]          ; 00531d83
    MOVSD ES:EDI,ESI                    ; 00531d89
    MOVSD ES:EDI,ESI                    ; 00531d8a
    MOVSD ES:EDI,ESI                    ; 00531d8b
    ADD ESP,0x4                         ; 00531d8c
    FLD float ptr [EBP + -0x52]         ; 00531d8f
    FSUB float ptr [EBX + 0x34]         ; 00531d92
    SUB ESP,0x4                         ; 00531d95
    FSTP float ptr [ESP]                ; 00531d98
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00531d9b
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00531da0
    FLD float ptr [EBP + 0x76]          ; 00531da3
    FABS                                ; 00531da6
    ADD ESP,0x4                         ; 00531da8
    FCOMP double ptr [0x005d009a]       ; 00531dab | DAT_005d009a
    FNSTSW AX                           ; 00531db1
    SAHF                                ; 00531db3
    JNC 0x00531de6                      ; 00531db4
        ;   XREF to: 00531de6 (CONDITIONAL_JUMP)  ; LAB_00531de6
    PUSH 0x3f000000                     ; 00531db6
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 00531dbb
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    MOV EDX,EAX                         ; 00531dc0
    ADD ESP,0x4                         ; 00531dc2
    LEA EAX,[EBX + 0x158]               ; 00531dc5
    TEST EDX,EDX                        ; 00531dcb
    JZ 0x00531e10                       ; 00531dcd
        ;   XREF to: 00531e10 (CONDITIONAL_JUMP)  ; LAB_00531e10
    PUSH 0x1                            ; 00531dcf
    PUSH 0x4                            ; 00531dd1
    PUSH EAX                            ; 00531dd3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531dd4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531dd9
    MOV dword ptr [EBX + 0xcde0],0x3f800000 ; 00531ddc
        ;   Label: LAB_00531ddc
    FLD float ptr [EBP + 0x5a]          ; 00531de6
        ;   Label: LAB_00531de6
    FCOMP float ptr [EBX + 0xcddc]      ; 00531de9
    FNSTSW AX                           ; 00531def
    SAHF                                ; 00531df1
    JBE 0x00531485                      ; 00531df2
        ;   XREF to: 00531485 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00531df8
    PUSH 0x0                            ; 00531dfa
    LEA EAX,[EBX + 0x158]               ; 00531dfc
    PUSH EAX                            ; 00531e02
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531e03
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531e08
    JMP 0x00531485                      ; 00531e0b
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00531e10
        ;   Label: LAB_00531e10
    PUSH 0xa                            ; 00531e12
    PUSH EAX                            ; 00531e14
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531e15
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531e1a
    MOV dword ptr [EBX + 0xd058],0x40a00000 ; 00531e1d
    JMP 0x00531ddc                      ; 00531e27
        ;   XREF to: 00531ddc (UNCONDITIONAL_JUMP)  ; LAB_00531ddc
    PUSH dword ptr [EBP + 0x92]         ; 00531e29
        ;   Label: caseD_3
    MOV EAX,dword ptr [EBX + 0x154]     ; 00531e2f
    PUSH EBX                            ; 00531e35
    CALL dword ptr [EAX + 0x144]        ; 00531e36
    ADD ESP,0x8                         ; 00531e3c
    LEA EAX,[EBX + 0x158]               ; 00531e3f
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00531e45
    MOV dword ptr [EBP + 0x6a],EAX      ; 00531e4b
    TEST ESI,ESI                        ; 00531e4e
    JNZ 0x00531e63                      ; 00531e50
        ;   XREF to: 00531e63 (CONDITIONAL_JUMP)  ; LAB_00531e63
    PUSH 0x1                            ; 00531e52
    PUSH ESI                            ; 00531e54
    PUSH EAX                            ; 00531e55
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531e56
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531e5b
    JMP 0x00531485                      ; 00531e5e
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3e32b8c2                     ; 00531e63
        ;   Label: LAB_00531e63
    LEA EAX,[EBX + 0x249c]              ; 00531e68
    PUSH 0x3f000000                     ; 00531e6e
    MOV dword ptr [EAX + 0x8],0x0       ; 00531e73
    XOR EDI,EDI                         ; 00531e7a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00531e7c
    MOV dword ptr [EAX + 0x4],EDX       ; 00531e7f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00531e82
    MOV dword ptr [EAX],EDX             ; 00531e85
    MOV EAX,[0x005e3a08]                ; 00531e87 | DAT_005e3a08
    MOV dword ptr [EBP + 0xfffffef6],EDI ; 00531e8c
    MOV dword ptr [EBP + 0xfffffefe],EAX ; 00531e92
    LEA EAX,[EBP + 0xfffffef6]          ; 00531e98
    MOV dword ptr [EBP + 0xfffffefa],EDI ; 00531e9e
    PUSH EAX                            ; 00531ea4
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00531ea5
    PUSH EAX                            ; 00531eab
    MOV EDX,dword ptr [EAX + 0x154]     ; 00531eac
    CALL dword ptr [EDX + 0xc4]         ; 00531eb2
    ADD ESP,0x4                         ; 00531eb8
    PUSH EAX                            ; 00531ebb
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00531ebc
    ADD EAX,0x20                        ; 00531ec2
    PUSH EAX                            ; 00531ec5
    PUSH EBX                            ; 00531ec6
    LEA ESI,[EBP + 0xfffffede]          ; 00531ec7
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00531ecd
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    LEA EAX,[EBX + 0x20]                ; 00531ed2
    LEA EDI,[EBP + 0xfffffeba]          ; 00531ed5
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00531edb
    FLD float ptr [EAX]                 ; 00531ee1
    FLD float ptr [EAX + 0x4]           ; 00531ee3
    FLD float ptr [EAX + 0x8]           ; 00531ee6
    FXCH ST2                            ; 00531ee9
    FSUB float ptr [EDX + 0x20]         ; 00531eeb
    FXCH                                ; 00531eee
    FSUB float ptr [EDX + 0x24]         ; 00531ef0
    FXCH ST2                            ; 00531ef3
    FSUB float ptr [EDX + 0x28]         ; 00531ef5
    FXCH                                ; 00531ef8
    FSTP float ptr [EBP + 0xfffffede]   ; 00531efa
    FXCH                                ; 00531f00
    FSTP float ptr [EBP + 0xfffffee2]   ; 00531f02
    FSTP float ptr [EBP + 0xfffffee6]   ; 00531f08
    MOVSD ES:EDI,ESI                    ; 00531f0e
    MOVSD ES:EDI,ESI                    ; 00531f0f
    MOVSD ES:EDI,ESI                    ; 00531f10
    FLD float ptr [EBP + 0xfffffebe]    ; 00531f11
    FMUL ST0                            ; 00531f17
    FLD float ptr [EBP + 0xfffffeba]    ; 00531f19
    FMUL ST0                            ; 00531f1f
    FADDP                               ; 00531f21
    FLD float ptr [EBP + 0xfffffec2]    ; 00531f23
    FMUL ST0                            ; 00531f29
    FADDP                               ; 00531f2b
    FSQRT                               ; 00531f2d
    ADD ESP,0x18                        ; 00531f2f
    FCOMP float ptr [0x005e3a14]        ; 00531f32 | DAT_005e3a14
    FNSTSW AX                           ; 00531f38
    SAHF                                ; 00531f3a
    JNC 0x00531fc8                      ; 00531f3b
        ;   XREF to: 00531fc8 (CONDITIONAL_JUMP)  ; LAB_00531fc8
    PUSH 0x3f000000                     ; 00531f41
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 00531f46
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00531f4b
    TEST EAX,EAX                        ; 00531f4e
    JZ 0x00531f8d                       ; 00531f50
        ;   XREF to: 00531f8d (CONDITIONAL_JUMP)  ; LAB_00531f8d
    PUSH 0x3f000000                     ; 00531f52
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 00531f57
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00531f5c
    TEST EAX,EAX                        ; 00531f5f
    JZ 0x00531f78                       ; 00531f61
        ;   XREF to: 00531f78 (CONDITIONAL_JUMP)  ; LAB_00531f78
    PUSH 0x1                            ; 00531f63
    PUSH 0xe                            ; 00531f65
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00531f67
    PUSH EDX                            ; 00531f6a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531f6b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531f70
    JMP 0x00531485                      ; 00531f73
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00531f78
        ;   Label: LAB_00531f78
    PUSH 0xf                            ; 00531f7a
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00531f7c
    PUSH EAX                            ; 00531f7f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531f80
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531f85
    JMP 0x00531485                      ; 00531f88
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3f000000                     ; 00531f8d
        ;   Label: LAB_00531f8d
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 00531f92
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00531f97
    TEST EAX,EAX                        ; 00531f9a
    JZ 0x00531fb3                       ; 00531f9c
        ;   XREF to: 00531fb3 (CONDITIONAL_JUMP)  ; LAB_00531fb3
    PUSH 0x1                            ; 00531f9e
    PUSH 0x4                            ; 00531fa0
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00531fa2
    PUSH EDI                            ; 00531fa5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531fa6
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531fab
    JMP 0x00531485                      ; 00531fae
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00531fb3
        ;   Label: LAB_00531fb3
    PUSH 0x2                            ; 00531fb5
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00531fb7
    PUSH ESI                            ; 00531fba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531fbb
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531fc0
    JMP 0x00531485                      ; 00531fc3
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3dcccccd                     ; 00531fc8
        ;   Label: LAB_00531fc8
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 00531fcd
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00531fd2
    TEST EAX,EAX                        ; 00531fd5
    JZ 0x00531485                       ; 00531fd7
        ;   XREF to: 00531485 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3f000000                     ; 00531fdd
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 00531fe2
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00531fe7
    TEST EAX,EAX                        ; 00531fea
    JZ 0x00532003                       ; 00531fec
        ;   XREF to: 00532003 (CONDITIONAL_JUMP)  ; LAB_00532003
    PUSH 0x1                            ; 00531fee
    PUSH 0xe                            ; 00531ff0
    MOV ECX,dword ptr [EBP + 0x6a]      ; 00531ff2
    PUSH ECX                            ; 00531ff5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00531ff6
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00531ffb
    JMP 0x00531485                      ; 00531ffe
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00532003
        ;   Label: LAB_00532003
    PUSH 0xf                            ; 00532005
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00532007
    PUSH EDX                            ; 0053200a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0053200b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00532010
    JMP 0x00531485                      ; 00532013
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 00532018
        ;   Label: caseD_e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053201e
    PUSH EBX                            ; 00532024
    CALL dword ptr [EAX + 0x144]        ; 00532025
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0053202b
    ADD ESP,0x8                         ; 00532031
    TEST ECX,ECX                        ; 00532034
    JNZ 0x0053204f                      ; 00532036
        ;   XREF to: 0053204f (CONDITIONAL_JUMP)  ; LAB_0053204f
    PUSH 0x1                            ; 00532038
    PUSH ECX                            ; 0053203a
    LEA EAX,[EBX + 0x158]               ; 0053203b
    PUSH EAX                            ; 00532041
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00532042
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00532047
    JMP 0x00531485                      ; 0053204a
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EDI,[EBP + 0xffffff32]          ; 0053204f
        ;   Label: LAB_0053204f
    MOV EAX,ECX                         ; 00532055
    LEA ESI,[EBP + 0xa]                 ; 00532057
    LEA EDX,[EBX + 0x20]                ; 0053205a
    FLD float ptr [EAX + 0x24]          ; 0053205d
    FLD float ptr [EAX + 0x28]          ; 00532060
    FLD float ptr [EAX + 0x20]          ; 00532063
    LEA EAX,[EBP + 0xffffff32]          ; 00532066
    FSUB float ptr [EDX]                ; 0053206c
    FXCH ST2                            ; 0053206e
    FSUB float ptr [EDX + 0x4]          ; 00532070
    FXCH                                ; 00532073
    FSUB float ptr [EDX + 0x8]          ; 00532075
    FXCH ST2                            ; 00532078
    FSTP float ptr [EBP + 0xa]          ; 0053207a
    FSTP float ptr [EBP + 0xe]          ; 0053207d
    FSTP float ptr [EBP + 0x12]         ; 00532080
    MOVSD ES:EDI,ESI                    ; 00532083
    MOVSD ES:EDI,ESI                    ; 00532084
    MOVSD ES:EDI,ESI                    ; 00532085
    PUSH EAX                            ; 00532086
    LEA ESI,[EBP + 0xfffffe7e]          ; 00532087
    LEA EDI,[EBP + 0x2e]                ; 0053208d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 00532090
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xfffffe7e]          ; 00532095
    MOVSD ES:EDI,ESI                    ; 0053209b
    MOVSD ES:EDI,ESI                    ; 0053209c
    MOVSD ES:EDI,ESI                    ; 0053209d
    MOV EAX,dword ptr [EBP + 0x32]      ; 0053209e
    ADD ESP,0x4                         ; 005320a1
    MOV dword ptr [EBX + 0x34],EAX      ; 005320a4
    JMP 0x00531485                      ; 005320a7
        ;   XREF to: 00531485 (UNCONDITIONAL_JUMP)  ; caseD_d

