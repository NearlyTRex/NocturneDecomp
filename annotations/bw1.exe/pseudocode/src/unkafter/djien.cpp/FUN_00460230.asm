; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_djien_cpp_FUN_00460230(CCharacter *param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_005d8be0
;   TerminatedCString s_DJIEN_reached_dest_going_005d8c0a
;   TerminatedCString s_djien_awake_wav_4_005d8c32
;   TerminatedCString s_DJIEN_protect_found_vict_005d8c46
;   TerminatedCString s_DJIEN_walk_waited_long_e_005d8c72
;   TerminatedCString s_DjienHome_005d8c9f
;   TerminatedCString s_DjienInZone_005d8ca9
;   TerminatedCString s_DJIEN_got_outside_of_box_005d8cb5
;   TerminatedCString s_DJIEN_lost_victim_hesita_005d8cdd
;   TerminatedCString s_DJIEN_reached_victim_or_005d8cfe
;   TerminatedCString s_DjienSacksGone_005d8d32
;   TerminatedCString s_DjienHeartDestroyed_005d8d41
;   TerminatedCString s_djien_die_wav_4_005d8d55
;   undefined4 DAT_005d8d68
;   undefined4 DAT_005d8d70
;   ... and 6 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_0042e120
;   core_charactr.cpp_FUN_0042e160
;   core_charactr.cpp_FUN_00431cc0
;   core_charactr.cpp_FUN_00432240
;   core_charactr.cpp_FUN_00433e80
;   core_charactr.cpp_FUN_00435320
;   core_charactr.cpp_FUN_00435380
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460230
        ;   Label: unkafter_djien.cpp_FUN_00460230
    PUSH ESI                            ; 00460231
    PUSH EDI                            ; 00460232
    PUSH EBP                            ; 00460233
    MOV EBP,ESP                         ; 00460234
    SUB ESP,0x80                        ; 00460236
    SUB EBP,0x7a                        ; 0046023c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0046023f
    PUSH dword ptr [EBP + 0x92]         ; 00460245
    PUSH EBX                            ; 0046024b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 0046024c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00460251
    TEST EAX,EAX                        ; 00460254
    JZ 0x00460524                       ; 00460256
        ;   XREF to: 00460524 (CONDITIONAL_JUMP)  ; LAB_00460524
    LEA EAX,[EBX + 0x249c]              ; 0046025c
    MOV dword ptr [EAX + 0x8],0x0       ; 00460262
    FLD float ptr [EBP + 0x92]          ; 00460269
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046026f
    MOV dword ptr [EAX + 0x4],EDX       ; 00460272
    MOV EDX,dword ptr [EAX + 0x4]       ; 00460275
    MOV dword ptr [EAX],EDX             ; 00460278
    FMUL float ptr [EBX + 0xc1d0]       ; 0046027a
    FMUL float ptr [EBX + 0xc2cc]       ; 00460280
    LEA ESI,[EBX + 0x158]               ; 00460286
    FSTP float ptr [EBP + 0x66]         ; 0046028c
    FLD float ptr [EBP + 0x66]          ; 0046028f
        ;   Label: LAB_0046028f
    FLDZ                                ; 00460292
    FCOMPP                              ; 00460294
    FNSTSW AX                           ; 00460296
    SAHF                                ; 00460298
    JC 0x0046052c                       ; 00460299
        ;   XREF to: 0046052c (CONDITIONAL_JUMP)  ; LAB_0046052c
    PUSH ESI                            ; 0046029f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004602a0
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    FLD float ptr [EBP + 0x92]          ; 004602a5
    FMUL float ptr [EBX + 0xc1d0]       ; 004602ab
    FMUL float ptr [0x005d8d68]         ; 004602b1 | DAT_005d8d68
    FLD float ptr [EBX + 0x24a4]        ; 004602b7
    ADD ESP,0x4                         ; 004602bd
    MOV EDI,dword ptr [EAX + 0x24]      ; 004602c0
    SUB ESP,0x4                         ; 004602c3
    FSTP float ptr [EBX + 0x2524]       ; 004602c6
    FSTP float ptr [ESP]                ; 004602cc
    PUSH EBX                            ; 004602cf
    CALL core_charactr.cpp_FUN_00435320 ; 004602d0
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 004602d5
    PUSH dword ptr [EBP + 0x92]         ; 004602d8
    PUSH EBX                            ; 004602de
    CALL core_charactr.cpp_FUN_00432240 ; 004602df
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004602e4
    TEST EAX,EAX                        ; 004602e7
    JZ 0x004605a5                       ; 004602e9
        ;   XREF to: 004605a5 (CONDITIONAL_JUMP)  ; LAB_004605a5
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004602ef
    CMP EAX,0x2                         ; 004602f5
    JNC 0x0046056c                      ; 004602f8
        ;   XREF to: 0046056c (CONDITIONAL_JUMP)  ; LAB_0046056c
    CMP EAX,0x1                         ; 004602fe
    JNZ 0x00460577                      ; 00460301
        ;   XREF to: 00460577 (CONDITIONAL_JUMP)  ; LAB_00460577
    PUSH 0x1                            ; 00460307
        ;   Label: LAB_00460307
    PUSH 0x6                            ; 00460309
    LEA EAX,[EBX + 0x158]               ; 0046030b
    PUSH EAX                            ; 00460311
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00460312
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00460312
    ADD ESP,0xc                         ; 00460317
        ;   Label: LAB_00460317
    LEA EAX,[EBX + 0x249c]              ; 0046031a
        ;   Label: LAB_0046031a
    MOV dword ptr [EAX + 0x8],0x0       ; 00460320
    MOV EDX,dword ptr [EAX + 0x8]       ; 00460327
    MOV dword ptr [EAX + 0x4],EDX       ; 0046032a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046032d
    MOV dword ptr [EAX],EDX             ; 00460330
    MOV EDX,dword ptr [EBX + 0xc2d4]    ; 00460332
        ;   Label: LAB_00460332
    CMP EDX,dword ptr [EBX + 0xc2d0]    ; 00460338
    JG 0x004603f1                       ; 0046033e
        ;   XREF to: 004603f1 (CONDITIONAL_JUMP)  ; LAB_004603f1
    PUSH 0x5d8d32                       ; 00460344 | = "DjienSacksGone"
    MOV ECX,dword ptr [0x0061b4d0]      ; 00460349 | DAT_0061b4d0
    PUSH ECX                            ; 0046034f
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00460350
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00460355
    PUSH 0x5d8d41                       ; 00460358 | = "DjienHeartDestroyed"
    MOV ESI,dword ptr [0x0061b4d0]      ; 0046035d | DAT_0061b4d0
    PUSH ESI                            ; 00460363
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00460364
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00460369
    TEST EAX,EAX                        ; 0046036c
    JZ 0x004603f1                       ; 0046036e
        ;   XREF to: 004603f1 (CONDITIONAL_JUMP)  ; LAB_004603f1
    LEA ESI,[EBX + 0x158]               ; 00460374
    PUSH ESI                            ; 0046037a
    MOV dword ptr [EBX + 0x2538],0x0    ; 0046037b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00460385
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0046038a
    ADD ESP,0x4                         ; 0046038d
    CMP EAX,0xf                         ; 00460390
    JZ 0x004603f1                       ; 00460393
        ;   XREF to: 004603f1 (CONDITIONAL_JUMP)  ; LAB_004603f1
    CMP EAX,0xe                         ; 00460395
    JZ 0x004603f1                       ; 00460398
        ;   XREF to: 004603f1 (CONDITIONAL_JUMP)  ; LAB_004603f1
    MOV EDI,dword ptr [EBX + 0xc2c8]    ; 0046039a
    PUSH EDI                            ; 004603a0
    MOV EAX,[0x006236b8]                ; 004603a1 | DAT_006236b8
    PUSH EAX                            ; 004603a6
    CALL core_sound.cpp_FUN_0057d9d0    ; 004603a7
        ;   XREF to: 0057d9d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057d9d0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004603ac
    PUSH 0x5d8d55                       ; 004603af | = "djien_die.wav@ 4"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004603b4
    PUSH EBX                            ; 004603ba
    CALL dword ptr [EAX + 0x2c]         ; 004603bb
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 004603be
    ADD ESP,0x8                         ; 004603c8
    MOV EDX,dword ptr [EBX + 0xc9bc]    ; 004603cb
    MOV dword ptr [EBX + 0xc2c8],EAX    ; 004603d1
    TEST EDX,EDX                        ; 004603d7
    JNZ 0x004603f1                      ; 004603d9
        ;   XREF to: 004603f1 (CONDITIONAL_JUMP)  ; LAB_004603f1
    PUSH EBX                            ; 004603db
    CALL unkafter_djien.cpp_FUN_00460cb0 ; 004603dc
        ;   XREF to: 00460cb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_djien.cpp_FUN_00460cb0()
    ADD ESP,0x4                         ; 004603e1
    PUSH 0x0                            ; 004603e4
    PUSH 0xf                            ; 004603e6
    PUSH ESI                            ; 004603e8
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10 ; 004603e9
        ;   XREF to: 00524b10 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 004603ee
    FLD float ptr [EBX + 0xc1e4]        ; 004603f1
        ;   Label: LAB_004603f1
    FLDZ                                ; 004603f7
    FCOMPP                              ; 004603f9
    FNSTSW AX                           ; 004603fb
    SAHF                                ; 004603fd
    JNC 0x00460412                      ; 004603fe
        ;   XREF to: 00460412 (CONDITIONAL_JUMP)  ; LAB_00460412
    FLD float ptr [EBX + 0xc1e4]        ; 00460400
    FSUB float ptr [EBP + 0x92]         ; 00460406
    FSTP float ptr [EBX + 0xc1e4]       ; 0046040c
    PUSH EBX                            ; 00460412
        ;   Label: LAB_00460412
    CALL core_charactr.cpp_FUN_0042e120 ; 00460413
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00460418
    TEST EAX,EAX                        ; 0046041b
    JZ 0x004604fd                       ; 0046041d
        ;   XREF to: 004604fd (CONDITIONAL_JUMP)  ; LAB_004604fd
    PUSH dword ptr [EBP + 0x92]         ; 00460423
    PUSH EBX                            ; 00460429
    LEA ESI,[EBX + 0x2518]              ; 0046042a
    CALL core_charactr.cpp_FUN_0042d700 ; 00460430
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 00460435
    FMUL float ptr [EBP + 0x92]         ; 00460437
    FLD float ptr [ESI + 0x4]           ; 0046043d
    FMUL float ptr [EBP + 0x92]         ; 00460440
    FLD float ptr [ESI + 0x8]           ; 00460446
    FMUL float ptr [EBP + 0x92]         ; 00460449
    LEA EDI,[EBP + -0x6]                ; 0046044f
    LEA ESI,[EBP + 0x1e]                ; 00460452
    FXCH ST2                            ; 00460455
    FSTP float ptr [EBP + 0x1e]         ; 00460457
    FSTP float ptr [EBP + 0x22]         ; 0046045a
    FSTP float ptr [EBP + 0x26]         ; 0046045d
    MOVSD ES:EDI,ESI                    ; 00460460
    MOVSD ES:EDI,ESI                    ; 00460461
    MOVSD ES:EDI,ESI                    ; 00460462
    LEA EDX,[EBX + 0x250c]              ; 00460463
    FLD float ptr [EBP + -0x6]          ; 00460469
    FLD float ptr [EBP + -0x2]          ; 0046046c
    FLD float ptr [EBP + 0x2]           ; 0046046f
    LEA EDI,[EBP + 0x36]                ; 00460472
    LEA ESI,[EBP + 0x2a]                ; 00460475
    FXCH ST2                            ; 00460478
    FADD float ptr [EDX]                ; 0046047a
    FXCH                                ; 0046047c
    FADD float ptr [EDX + 0x4]          ; 0046047e
    FXCH ST2                            ; 00460481
    FADD float ptr [EDX + 0x8]          ; 00460483
    FXCH                                ; 00460486
    FSTP float ptr [EBP + 0x2a]         ; 00460488
    FXCH                                ; 0046048b
    FSTP float ptr [EBP + 0x2e]         ; 0046048d
    FSTP float ptr [EBP + 0x32]         ; 00460490
    MOVSD ES:EDI,ESI                    ; 00460493
    MOVSD ES:EDI,ESI                    ; 00460494
    MOVSD ES:EDI,ESI                    ; 00460495
    LEA EAX,[EBX + 0x249c]              ; 00460496
    FLD float ptr [EBP + 0x36]          ; 0046049c
    FLD float ptr [EBP + 0x3a]          ; 0046049f
    FLD float ptr [EBP + 0x3e]          ; 004604a2
    LEA EDI,[EBP + 0x12]                ; 004604a5
    LEA ESI,[EBP + 0x4e]                ; 004604a8
    FXCH ST2                            ; 004604ab
    FADD float ptr [EAX]                ; 004604ad
    FXCH                                ; 004604af
    FADD float ptr [EAX + 0x4]          ; 004604b1
    FXCH ST2                            ; 004604b4
    FADD float ptr [EAX + 0x8]          ; 004604b6
    FXCH                                ; 004604b9
    FSTP float ptr [EBP + 0x4e]         ; 004604bb
    FXCH                                ; 004604be
    FSTP float ptr [EBP + 0x52]         ; 004604c0
    FSTP float ptr [EBP + 0x56]         ; 004604c3
    MOVSD ES:EDI,ESI                    ; 004604c6
    MOVSD ES:EDI,ESI                    ; 004604c7
    MOVSD ES:EDI,ESI                    ; 004604c8
    MOV dword ptr [EDX + 0x8],0x0       ; 004604c9
    MOV ECX,dword ptr [EDX + 0x8]       ; 004604d0
    MOV dword ptr [EDX + 0x4],ECX       ; 004604d3
    MOV ECX,dword ptr [EDX + 0x4]       ; 004604d6
    MOV dword ptr [EDX],ECX             ; 004604d9
    MOV dword ptr [EAX + 0x8],0x0       ; 004604db
    ADD ESP,0x8                         ; 004604e2
    MOV EDX,dword ptr [EAX + 0x8]       ; 004604e5
    MOV dword ptr [EAX + 0x4],EDX       ; 004604e8
    MOV EDX,dword ptr [EAX + 0x4]       ; 004604eb
    MOV dword ptr [EAX],EDX             ; 004604ee
    LEA EAX,[EBP + 0x12]                ; 004604f0
    PUSH EAX                            ; 004604f3
    PUSH EBX                            ; 004604f4
    CALL core_charactr.cpp_FUN_0042d750 ; 004604f5
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004604fa
    PUSH EBX                            ; 004604fd
        ;   Label: LAB_004604fd
    CALL core_charactr.cpp_FUN_0042e160 ; 004604fe
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00460503
    LEA EAX,[EBX + 0x158]               ; 00460506
    PUSH EAX                            ; 0046050c
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 0046050d
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00460512
    PUSH dword ptr [EBP + 0x92]         ; 00460515
    PUSH EBX                            ; 0046051b
    CALL core_charactr.cpp_FUN_00433e80 ; 0046051c
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00460521
    LEA ESP,[EBP + 0x7a]                ; 00460524
        ;   Label: LAB_00460524
    POP EBP                             ; 00460527
    POP EDI                             ; 00460528
    POP ESI                             ; 00460529
    POP EBX                             ; 0046052a
    RET                                 ; 0046052b
    LEA EAX,[EBP + 0x66]                ; 0046052c
        ;   Label: LAB_0046052c
    PUSH EAX                            ; 0046052f
    PUSH ESI                            ; 00460530
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 00460531
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00460536
    PUSH EAX                            ; 00460539
    PUSH EBX                            ; 0046053a
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 0046053b
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00460540
    JMP 0x0046028f                      ; 00460543
        ;   XREF to: 0046028f (UNCONDITIONAL_JUMP)  ; LAB_0046028f
    PUSH 0x1                            ; 00460548
        ;   Label: LAB_00460548
    PUSH 0x0                            ; 0046054a
    PUSH ESI                            ; 0046054c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046054d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00460552
    PUSH EBX                            ; 00460555
    PUSH 0x5d8be0                       ; 00460556 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00611100]      ; 0046055b | g_CConsolePtr
    PUSH EDI                            ; 00460561 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00460562
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x00460317                      ; 00460567
        ;   XREF to: 00460317 (UNCONDITIONAL_JUMP)  ; LAB_00460317
    JBE 0x00460307                      ; 0046056c
        ;   XREF to: 00460307 (CONDITIONAL_JUMP)  ; LAB_00460307
        ;   Label: LAB_0046056c
    CMP EAX,0x3                         ; 00460572
    JZ 0x00460548                       ; 00460575
        ;   XREF to: 00460548 (CONDITIONAL_JUMP)  ; LAB_00460548
    LEA ESI,[EBX + 0x158]               ; 00460577
        ;   Label: LAB_00460577
    PUSH ESI                            ; 0046057d
    CALL core_motion.cpp_FUN_00525020   ; 0046057e
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00460583
    ADD ESP,0x4                         ; 00460586
    FLD float ptr [EBP + 0x76]          ; 00460589
    FCOMP double ptr [0x005d8d70]       ; 0046058c | DAT_005d8d70
    FNSTSW AX                           ; 00460592
    SAHF                                ; 00460594
    JBE 0x0046031a                      ; 00460595
        ;   XREF to: 0046031a (CONDITIONAL_JUMP)  ; LAB_0046031a
    PUSH 0x1                            ; 0046059b
    PUSH 0x0                            ; 0046059d
    PUSH ESI                            ; 0046059f
    JMP 0x00460312                      ; 004605a0
        ;   XREF to: 00460312 (UNCONDITIONAL_JUMP)  ; LAB_00460312
    CMP dword ptr [EBX + 0xc2f0],0x0    ; 004605a5
        ;   Label: LAB_004605a5
    JZ 0x00460625                       ; 004605ac
        ;   XREF to: 00460625 (CONDITIONAL_JUMP)  ; LAB_00460625
    MOV dword ptr [EBX + 0xc1e8],EAX    ; 004605ae
    MOV dword ptr [EBX + 0xc9c4],EAX    ; 004605b4
    LEA EAX,[EBX + 0xc2f4]              ; 004605ba
    PUSH EAX                            ; 004605c0
    PUSH 0x41000000                     ; 004605c1
    MOV ECX,dword ptr [EBX + 0xc2f0]    ; 004605c6
    PUSH 0x3f800000                     ; 004605cc
    PUSH ECX                            ; 004605d1
    PUSH EBX                            ; 004605d2
    CALL core_charactr.cpp_FUN_00431cc0 ; 004605d3
        ;   XREF to: 00431cc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00431cc0()
    MOV EAX,dword ptr [EBX + 0xc2f4]    ; 004605d8
    ADD ESP,0x14                        ; 004605de
    CMP EAX,0x1                         ; 004605e1
    JNC 0x004606bf                      ; 004605e4
        ;   XREF to: 004606bf (CONDITIONAL_JUMP)  ; LAB_004606bf
    PUSH 0x1                            ; 004605ea
        ;   Label: LAB_004605ea
    PUSH 0x12                           ; 004605ec
    LEA EAX,[EBX + 0x158]               ; 004605ee
    MOV dword ptr [EBX + 0xc2f0],0x0    ; 004605f4
    PUSH EAX                            ; 004605fe
    MOV dword ptr [EBX + 0xc9c4],0x40800000 ; 004605ff
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00460609
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046060e
    PUSH 0x5d8c0a                       ; 00460611 | = "DJIEN: reached dest - going to protect\n"
    MOV ESI,dword ptr [0x00611100]      ; 00460616 | g_CConsolePtr
    PUSH ESI                            ; 0046061c | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0046061d
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 00460622
    CMP EDI,0x3                         ; 00460625
        ;   Label: LAB_00460625
    JNC 0x00460929                      ; 00460628
        ;   XREF to: 00460929 (CONDITIONAL_JUMP)  ; LAB_00460929
    CMP EDI,0x1                         ; 0046062e
    JNC 0x0046063b                      ; 00460631
        ;   XREF to: 0046063b (CONDITIONAL_JUMP)  ; LAB_0046063b
    TEST EDI,EDI                        ; 00460633
    JNZ 0x00460332                      ; 00460635
        ;   XREF to: 00460332 (CONDITIONAL_JUMP)  ; LAB_00460332
    FLD float ptr [EBX + 0xc9c4]        ; 0046063b
        ;   Label: LAB_0046063b
    FSUB float ptr [EBP + 0x92]         ; 00460641
    MOV dword ptr [EBX + 0xc9c0],0x0    ; 00460647
    FST float ptr [EBX + 0xc9c4]        ; 00460651
    FLDZ                                ; 00460657
    FCOMPP                              ; 00460659
    FNSTSW AX                           ; 0046065b
    SAHF                                ; 0046065d
    JC 0x00460332                       ; 0046065e
        ;   XREF to: 00460332 (CONDITIONAL_JUMP)  ; LAB_00460332
    PUSH 0x5d8c72                       ; 00460664 | = "DJIEN: walk waited long enough - goin..."
    MOV ESI,dword ptr [0x00611100]      ; 00460669 | g_CConsolePtr
    PUSH ESI                            ; 0046066f | g_CConsoleInstance
    MOV dword ptr [EBX + 0xc9c4],0x0    ; 00460670
    CALL engine_console.cpp_FUN_00445430 ; 0046067a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 0046067f
    PUSH 0x5d8c9f                       ; 00460682 | = "DjienHome"
    PUSH EBX                            ; 00460687
    CALL core_charactr.cpp_FUN_00435380 ; 00460688
        ;   XREF to: 00435380 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435380()
    ADD ESP,0x8                         ; 0046068d
    MOV dword ptr [EBX + 0xc2f0],EAX    ; 00460690
    JMP 0x00460332                      ; 00460696
        ;   XREF to: 00460332 (UNCONDITIONAL_JUMP)  ; LAB_00460332
    PUSH 0x1                            ; 0046069b
        ;   Label: LAB_0046069b
    PUSH 0x6                            ; 0046069d
    PUSH ESI                            ; 0046069f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004606a0
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004606a5
    JMP 0x00460625                      ; 004606a8
        ;   XREF to: 00460625 (UNCONDITIONAL_JUMP)  ; LAB_00460625
    PUSH 0x1                            ; 004606ad
        ;   Label: LAB_004606ad
    PUSH 0x7                            ; 004606af
    PUSH ESI                            ; 004606b1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004606b2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004606b7
    JMP 0x00460625                      ; 004606ba
        ;   XREF to: 00460625 (UNCONDITIONAL_JUMP)  ; LAB_00460625
    JBE 0x0046069b                      ; 004606bf
        ;   XREF to: 0046069b (CONDITIONAL_JUMP)  ; LAB_0046069b
        ;   Label: LAB_004606bf
    CMP EAX,0x2                         ; 004606c1
    JZ 0x004606ad                       ; 004606c4
        ;   XREF to: 004606ad (CONDITIONAL_JUMP)  ; LAB_004606ad
    JMP 0x004605ea                      ; 004606c6
        ;   XREF to: 004605ea (UNCONDITIONAL_JUMP)  ; LAB_004605ea
    MOV EDX,dword ptr [EBX + 0xc2c8]    ; 004606cb
        ;   Label: LAB_004606cb
    PUSH EDX                            ; 004606d1
    MOV ECX,dword ptr [0x006236b8]      ; 004606d2 | DAT_006236b8
    PUSH ECX                            ; 004606d8
    MOV dword ptr [EBX + 0xc9c0],0x1    ; 004606d9
    CALL core_sound.cpp_FUN_0057d9c0    ; 004606e3
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004606e8
    TEST EAX,EAX                        ; 004606eb
    JNZ 0x00460332                      ; 004606ed
        ;   XREF to: 00460332 (CONDITIONAL_JUMP)  ; LAB_00460332
    PUSH 0x5d8c32                       ; 004606f3 | = "djien_awake.wav @ 4"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004606f8
    PUSH EBX                            ; 004606fe
    CALL dword ptr [EAX + 0x2c]         ; 004606ff
    ADD ESP,0x8                         ; 00460702
    MOV dword ptr [EBX + 0xc2c8],EAX    ; 00460705
    JMP 0x00460332                      ; 0046070b
        ;   XREF to: 00460332 (UNCONDITIONAL_JUMP)  ; LAB_00460332
    FLD float ptr [EBX + 0xc9c4]        ; 00460710
        ;   Label: LAB_00460710
    FSUB float ptr [EBP + 0x92]         ; 00460716
    MOV dword ptr [EBX + 0xc9c0],0x1    ; 0046071c
    FST float ptr [EBX + 0xc9c4]        ; 00460726
    FLDZ                                ; 0046072c
    FCOMPP                              ; 0046072e
    FNSTSW AX                           ; 00460730
    SAHF                                ; 00460732
    JC 0x00460332                       ; 00460733
        ;   XREF to: 00460332 (CONDITIONAL_JUMP)  ; LAB_00460332
    PUSH dword ptr [EBP + 0x92]         ; 00460739
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046073f
    PUSH EBX                            ; 00460745
    MOV dword ptr [EBX + 0xc9c4],0x0    ; 00460746
    CALL dword ptr [EAX + 0x144]        ; 00460750
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 00460756
    ADD ESP,0x8                         ; 0046075c
    TEST EDI,EDI                        ; 0046075f
    JZ 0x00460332                       ; 00460761
        ;   XREF to: 00460332 (CONDITIONAL_JUMP)  ; LAB_00460332
    MOV EDX,EDI                         ; 00460767
    LEA ESI,[EBP + 0x42]                ; 00460769
    LEA EAX,[EBX + 0x20]                ; 0046076c
    FLD float ptr [EDX + 0x20]          ; 0046076f
    FLD float ptr [EDX + 0x24]          ; 00460772
    FLD float ptr [EDX + 0x28]          ; 00460775
    LEA EDI,[EBP + 0x5a]                ; 00460778
    FXCH ST2                            ; 0046077b
    FSUB float ptr [EAX]                ; 0046077d
    FXCH                                ; 0046077f
    FSUB float ptr [EAX + 0x4]          ; 00460781
    FXCH ST2                            ; 00460784
    FSUB float ptr [EAX + 0x8]          ; 00460786
    FXCH                                ; 00460789
    FSTP float ptr [EBP + 0x42]         ; 0046078b
    FXCH                                ; 0046078e
    FSTP float ptr [EBP + 0x46]         ; 00460790
    FSTP float ptr [EBP + 0x4a]         ; 00460793
    MOVSD ES:EDI,ESI                    ; 00460796
    MOVSD ES:EDI,ESI                    ; 00460797
    MOVSD ES:EDI,ESI                    ; 00460798
    FLD float ptr [EBP + 0x5e]          ; 00460799
    FMUL ST0                            ; 0046079c
    FLD float ptr [EBP + 0x5a]          ; 0046079e
    FMUL ST0                            ; 004607a1
    FADDP                               ; 004607a3
    FLD float ptr [EBP + 0x62]          ; 004607a5
    FMUL ST0                            ; 004607a8
    FADDP                               ; 004607aa
    FSTP float ptr [EBP + 0x6e]         ; 004607ac
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004607af
    MOV EDX,dword ptr [0x01cc804c]      ; 004607b2 | DAT_01cc804c
    SAR EAX,0x1                         ; 004607b8
    ADD EAX,EDX                         ; 004607ba
    MOV dword ptr [EBP + 0x6a],EAX      ; 004607bc
    FLD float ptr [EBP + 0x6a]          ; 004607bf
    FCOMP float ptr [EBX + 0xc1e0]      ; 004607c2
    FNSTSW AX                           ; 004607c8
    SAHF                                ; 004607ca
    JNC 0x00460332                      ; 004607cb
        ;   XREF to: 00460332 (CONDITIONAL_JUMP)  ; LAB_00460332
    PUSH 0x5d8c46                       ; 004607d1 | = "DJIEN: protect found victim - going t..."
    MOV ECX,dword ptr [0x00611100]      ; 004607d6 | g_CConsolePtr
    PUSH ECX                            ; 004607dc | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004607dd
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 004607e2
    PUSH 0x1                            ; 004607e5
    PUSH 0x7                            ; 004607e7
    LEA EAX,[EBX + 0x158]               ; 004607e9
    PUSH EAX                            ; 004607ef
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004607f0
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004607f5
    JMP 0x00460332                      ; 004607f8
        ;   XREF to: 00460332 (UNCONDITIONAL_JUMP)  ; LAB_00460332
    PUSH EBX                            ; 004607fd
        ;   Label: LAB_004607fd
    MOV EAX,dword ptr [EBX + 0x154]     ; 004607fe
    MOV dword ptr [EBX + 0xc9c0],0x1    ; 00460804
    CALL dword ptr [EAX + 0x150]        ; 0046080e
    MOV ESI,dword ptr [EBX + 0xc2f0]    ; 00460814
    ADD ESP,0x4                         ; 0046081a
    TEST ESI,ESI                        ; 0046081d
    JNZ 0x00460332                      ; 0046081f
        ;   XREF to: 00460332 (CONDITIONAL_JUMP)  ; LAB_00460332
    PUSH 0x5d8ca9                       ; 00460825 | = "DjienInZone"
    MOV EDI,dword ptr [0x0061b4d0]      ; 0046082a | DAT_0061b4d0
    PUSH EDI                            ; 00460830
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00460831
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00460836
    TEST EAX,EAX                        ; 00460839
    JZ 0x0046087e                       ; 0046083b
        ;   XREF to: 0046087e (CONDITIONAL_JUMP)  ; LAB_0046087e
    PUSH dword ptr [EBP + 0x92]         ; 0046083d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00460843
    PUSH EBX                            ; 00460849
    CALL dword ptr [EAX + 0x144]        ; 0046084a
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00460850
    ADD ESP,0x8                         ; 00460856
    TEST EDX,EDX                        ; 00460859
    JNZ 0x0046089f                      ; 0046085b
        ;   XREF to: 0046089f (CONDITIONAL_JUMP)  ; LAB_0046089f
    PUSH 0x5d8cdd                       ; 0046085d | = "DJIEN: lost victim - hesitating\n"
    MOV EAX,[0x00611100]                ; 00460862 | g_CConsolePtr
    PUSH EAX                            ; 00460867 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00460868
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 0046086d
    PUSH EBX                            ; 00460870
    CALL unkafter_djien.cpp_FUN_00460960 ; 00460871
        ;   XREF to: 00460960 (UNCONDITIONAL_CALL)  ; undefined unkafter_djien.cpp_FUN_00460960()
    ADD ESP,0x4                         ; 00460876
    JMP 0x00460332                      ; 00460879
        ;   XREF to: 00460332 (UNCONDITIONAL_JUMP)  ; LAB_00460332
    PUSH 0x5d8cb5                       ; 0046087e | = "DJIEN: got outside of box - hesitating\n"
        ;   Label: LAB_0046087e
    MOV EAX,[0x00611100]                ; 00460883 | g_CConsolePtr
    PUSH EAX                            ; 00460888 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00460889
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 0046088e
    PUSH EBX                            ; 00460891
    CALL unkafter_djien.cpp_FUN_00460960 ; 00460892
        ;   XREF to: 00460960 (UNCONDITIONAL_CALL)  ; undefined unkafter_djien.cpp_FUN_00460960()
    ADD ESP,0x4                         ; 00460897
    JMP 0x00460332                      ; 0046089a
        ;   XREF to: 00460332 (UNCONDITIONAL_JUMP)  ; LAB_00460332
    MOV EAX,[0x005fea1c]                ; 0046089f | DAT_005fea1c
        ;   Label: LAB_0046089f
    MOV dword ptr [EBP + 0x72],EAX      ; 004608a4
    LEA EAX,[EBX + 0x249c]              ; 004608a7
    PUSH 0x3e32b8c2                     ; 004608ad
    MOV dword ptr [EAX + 0x8],ESI       ; 004608b2
    PUSH 0x3f000000                     ; 004608b5
    MOV EDX,dword ptr [EAX + 0x8]       ; 004608ba
    MOV dword ptr [EAX + 0x4],EDX       ; 004608bd
    MOV EDX,dword ptr [EAX + 0x4]       ; 004608c0
    MOV dword ptr [EAX],EDX             ; 004608c3
    MOV EAX,dword ptr [EBP + 0x72]      ; 004608c5
    MOV dword ptr [EBP + 0x6],ESI       ; 004608c8
    MOV dword ptr [EBP + 0xe],EAX       ; 004608cb
    LEA EAX,[EBP + 0x6]                 ; 004608ce
    MOV dword ptr [EBP + 0xa],ESI       ; 004608d1
    PUSH EAX                            ; 004608d4
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004608d5
    PUSH EAX                            ; 004608db
    MOV EDX,dword ptr [EAX + 0x154]     ; 004608dc
    CALL dword ptr [EDX + 0xc4]         ; 004608e2
    ADD ESP,0x4                         ; 004608e8
    PUSH EAX                            ; 004608eb
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004608ec
    ADD EAX,0x20                        ; 004608f2
    PUSH EAX                            ; 004608f5
    PUSH EBX                            ; 004608f6
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 004608f7
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004608fc
    TEST EAX,EAX                        ; 004608ff
    JZ 0x00460332                       ; 00460901
        ;   XREF to: 00460332 (CONDITIONAL_JUMP)  ; LAB_00460332
    PUSH 0x5d8cfe                       ; 00460907 | = "DJIEN: reached victim or got confused..."
    MOV EDI,dword ptr [0x00611100]      ; 0046090c | g_CConsolePtr
    PUSH EDI                            ; 00460912 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00460913
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 00460918
    PUSH EBX                            ; 0046091b
    CALL unkafter_djien.cpp_FUN_00460960 ; 0046091c
        ;   XREF to: 00460960 (UNCONDITIONAL_CALL)  ; undefined unkafter_djien.cpp_FUN_00460960()
    ADD ESP,0x4                         ; 00460921
    JMP 0x00460332                      ; 00460924
        ;   XREF to: 00460332 (UNCONDITIONAL_JUMP)  ; LAB_00460332
    JBE 0x0046063b                      ; 00460929
        ;   XREF to: 0046063b (CONDITIONAL_JUMP)  ; LAB_0046063b
        ;   Label: LAB_00460929
    CMP EDI,0x6                         ; 0046092f
    JNC 0x00460942                      ; 00460932
        ;   XREF to: 00460942 (CONDITIONAL_JUMP)  ; LAB_00460942
    CMP EDI,0x5                         ; 00460934
    JZ 0x004606cb                       ; 00460937
        ;   XREF to: 004606cb (CONDITIONAL_JUMP)  ; LAB_004606cb
    JMP 0x00460332                      ; 0046093d
        ;   XREF to: 00460332 (UNCONDITIONAL_JUMP)  ; LAB_00460332
    JBE 0x004607fd                      ; 00460942
        ;   XREF to: 004607fd (CONDITIONAL_JUMP)  ; LAB_004607fd
        ;   Label: LAB_00460942
    CMP EDI,0x7                         ; 00460948
    JBE 0x004607fd                      ; 0046094b
        ;   XREF to: 004607fd (CONDITIONAL_JUMP)  ; LAB_004607fd
    CMP EDI,0x12                        ; 00460951
    JZ 0x00460710                       ; 00460954
        ;   XREF to: 00460710 (CONDITIONAL_JUMP)  ; LAB_00460710
    JMP 0x00460332                      ; 0046095a
        ;   XREF to: 00460332 (UNCONDITIONAL_JUMP)  ; LAB_00460332

