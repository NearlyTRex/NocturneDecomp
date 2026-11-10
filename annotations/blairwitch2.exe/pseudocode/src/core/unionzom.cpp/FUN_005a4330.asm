; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_unionzom_cpp_FUN_005a4330(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f0312
;   TerminatedCString s_Death_005f0317
;   TerminatedCString s_Animation_005f031d
;   undefined4 DAT_005f0327
;   TerminatedCString s_Chasing_005f032c
;   TerminatedCString s_MeleeAttack_005f0334
;   TerminatedCString s_ChaseComplete_005f0340
;   TerminatedCString s_VanishAttack_005f034e
;   TerminatedCString s_ChaseComplete_005f035b
;   undefined4 DAT_005f0369
;   TerminatedCString s_Chasing_005f036e
;   TerminatedCString s_MeleeAttack_005f0376
;   TerminatedCString s_RangeAttack_005f0382
;   undefined4 DAT_005f038e
;   undefined4 DAT_005ff540
;
; Called Functions:
;   core_cloth.cpp_CClothList_setWindVelocity_FUN_005b1890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   unkaddr_0059d350.cpp_FUN_0059d7f0
;   unkaddr_0059d350.cpp_FUN_0059daa0
;   unkaddr_0059d350.cpp_FUN_0059dae0
;   unkafter_basicene.cpp_FUN_0059f570
;   unkafter_basicene.cpp_FUN_005a01a0
;   unkafter_superopt.cpp_FUN_005a8180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4330
        ;   Label: core_unionzom.cpp_FUN_005a4330
    PUSH ESI                            ; 005a4331
    PUSH EDI                            ; 005a4332
    SUB ESP,0x38                        ; 005a4333
    MOV EBX,dword ptr [ESP + 0x48]      ; 005a4336
    LEA EAX,[EBX + 0x264]               ; 005a433a
    PUSH dword ptr [ESP + 0x4c]         ; 005a4340
    PUSH EAX                            ; 005a4344
    CALL unkafter_superopt.cpp_FUN_005a8180 ; 005a4345
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8180()
    ADD ESP,0x8                         ; 005a434a
    PUSH 0x5f0312                       ; 005a434d | DAT_005f0312
    LEA EAX,[EBX + 0x10af8]             ; 005a4352
    PUSH EAX                            ; 005a4358
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a4359
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a435e
    TEST EAX,EAX                        ; 005a4361
    JNZ 0x005a44d1                      ; 005a4363
        ;   XREF to: 005a44d1 (CONDITIONAL_JUMP)  ; LAB_005a44d1
    PUSH 0x5f0317                       ; 005a4369 | = "Death"
        ;   Label: LAB_005a4369
    LEA ESI,[EBX + 0x10af8]             ; 005a436e
    PUSH ESI                            ; 005a4374
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a4375
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a437a
    TEST EAX,EAX                        ; 005a437d
    JZ 0x005a44e9                       ; 005a437f
        ;   XREF to: 005a44e9 (CONDITIONAL_JUMP)  ; LAB_005a44e9
    CMP dword ptr [EBX + 0x10a78],0x0   ; 005a4385
        ;   Label: LAB_005a4385
    JZ 0x005a4407                       ; 005a438c
        ;   XREF to: 005a4407 (CONDITIONAL_JUMP)  ; LAB_005a4407
    PUSH 0x5f032c                       ; 005a4392 | = "Chasing"
    LEA ESI,[EBX + 0x10af8]             ; 005a4397
    PUSH ESI                            ; 005a439d
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a439e
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a43a3
    TEST EAX,EAX                        ; 005a43a6
    JZ 0x005a4407                       ; 005a43a8
        ;   XREF to: 005a4407 (CONDITIONAL_JUMP)  ; LAB_005a4407
    PUSH 0x5f0334                       ; 005a43aa | = "MeleeAttack"
    PUSH 0x5f0340                       ; 005a43af | = "ChaseComplete"
    PUSH ESI                            ; 005a43b4
    CALL unkaddr_0059d350.cpp_FUN_0059dae0 ; 005a43b5
        ;   XREF to: 0059dae0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dae0()
    ADD ESP,0xc                         ; 005a43ba
    TEST EAX,EAX                        ; 005a43bd
    JZ 0x005a4407                       ; 005a43bf
        ;   XREF to: 005a4407 (CONDITIONAL_JUMP)  ; LAB_005a4407
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a43c1
    LEA EDX,[EBX + 0x20]                ; 005a43c7
    FLD float ptr [EAX + 0x20]          ; 005a43ca
    FSUB float ptr [EDX]                ; 005a43cd
    FMUL ST0                            ; 005a43cf
    FLD float ptr [EAX + 0x28]          ; 005a43d1
    FSUB float ptr [EDX + 0x8]          ; 005a43d4
    FMUL ST0                            ; 005a43d7
    FADDP                               ; 005a43d9
    FSQRT                               ; 005a43db
    FCOMP float ptr [0x005ff540]        ; 005a43dd | DAT_005ff540
    FNSTSW AX                           ; 005a43e3
    SAHF                                ; 005a43e5
    JC 0x005a4407                       ; 005a43e6
        ;   XREF to: 005a4407 (CONDITIONAL_JUMP)  ; LAB_005a4407
    PUSH 0x5f034e                       ; 005a43e8 | = "VanishAttack"
    PUSH 0x5f035b                       ; 005a43ed | = "ChaseComplete"
    FLD float ptr [0x005ff540]          ; 005a43f2 | DAT_005ff540
    PUSH ESI                            ; 005a43f8
    FSTP float ptr [EBX + 0x11394]      ; 005a43f9
    CALL unkaddr_0059d350.cpp_FUN_0059d7f0 ; 005a43ff
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a4404
    PUSH 0x5f0369                       ; 005a4407 | DAT_005f0369
        ;   Label: LAB_005a4407
    LEA ESI,[EBX + 0x10af8]             ; 005a440c
    PUSH ESI                            ; 005a4412
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a4413
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a4418
    TEST EAX,EAX                        ; 005a441b
    JZ 0x005a452a                       ; 005a441d
        ;   XREF to: 005a452a (CONDITIONAL_JUMP)  ; LAB_005a452a
    CMP dword ptr [EBX + 0x113b8],0x0   ; 005a4423
        ;   Label: LAB_005a4423
    JNZ 0x005a4457                      ; 005a442a
        ;   XREF to: 005a4457 (CONDITIONAL_JUMP)  ; LAB_005a4457
    MOV ESI,dword ptr [EBX + 0x113c4]   ; 005a442c
    CMP ESI,0x3f800000                  ; 005a4432
    JZ 0x005a4457                       ; 005a4438
        ;   XREF to: 005a4457 (CONDITIONAL_JUMP)  ; LAB_005a4457
    PUSH 0x3f000000                     ; 005a443a
    PUSH 0x3f800000                     ; 005a443f
    PUSH ESI                            ; 005a4444
    PUSH EBX                            ; 005a4445
    CALL unkafter_basicene.cpp_FUN_005a01a0 ; 005a4446
        ;   XREF to: 005a01a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_005a01a0()
    ADD ESP,0x10                        ; 005a444b
    PUSH EBX                            ; 005a444e
    CALL unkafter_basicene.cpp_FUN_0059f570 ; 005a444f
        ;   XREF to: 0059f570 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f570()
    ADD ESP,0x4                         ; 005a4454
    LEA ESI,[EBX + 0x11354]             ; 005a4457
        ;   Label: LAB_005a4457
    FLD float ptr [0x005f038e]          ; 005a445d | DAT_005f038e
    FLD float ptr [ESI]                 ; 005a4463
    FMUL ST1                            ; 005a4465
    FLD float ptr [ESI + 0x4]           ; 005a4467
    FMUL ST2                            ; 005a446a
    FLD float ptr [ESI + 0x8]           ; 005a446c
    FMULP ST3                           ; 005a446f
    MOV EDI,ESP                         ; 005a4471
    LEA ESI,[ESP + 0xc]                 ; 005a4473
    FXCH                                ; 005a4477
    FSTP float ptr [ESP + 0xc]          ; 005a4479
    FSTP float ptr [ESP + 0x10]         ; 005a447d
    FSTP float ptr [ESP + 0x14]         ; 005a4481
    MOVSD ES:EDI,ESI                    ; 005a4485
    MOVSD ES:EDI,ESI                    ; 005a4486
    MOVSD ES:EDI,ESI                    ; 005a4487
    FLD float ptr [ESP + 0x4c]          ; 005a4488
    FLD float ptr [ESP]                 ; 005a448c
    FMUL ST1                            ; 005a448f
    LEA EAX,[ESP + 0x18]                ; 005a4491
    FLD float ptr [ESP + 0x4]           ; 005a4495
    FMUL ST2                            ; 005a4499
    PUSH EAX                            ; 005a449b
    ADD EBX,0x2d0c                      ; 005a449c
    FLD float ptr [ESP + 0xc]           ; 005a44a2
    FMULP ST3                           ; 005a44a6
    PUSH EBX                            ; 005a44a8
    LEA EDI,[ESP + 0x20]                ; 005a44a9
    LEA ESI,[ESP + 0x2c]                ; 005a44ad
    FXCH                                ; 005a44b1
    FSTP float ptr [ESP + 0x2c]         ; 005a44b3
    FSTP float ptr [ESP + 0x30]         ; 005a44b7
    FSTP float ptr [ESP + 0x34]         ; 005a44bb
    MOVSD ES:EDI,ESI                    ; 005a44bf
    MOVSD ES:EDI,ESI                    ; 005a44c0
    MOVSD ES:EDI,ESI                    ; 005a44c1
    CALL core_cloth.cpp_CClothList_setWindVelocity_FUN_005b1890 ; 005a44c2
        ;   XREF to: 005b1890 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_setWindVelocity_FUN_005b1890(CClothList * this_ptr, CVector3f * wind_velocity)
    ADD ESP,0x8                         ; 005a44c7
    ADD ESP,0x38                        ; 005a44ca
    POP EDI                             ; 005a44cd
    POP ESI                             ; 005a44ce
    POP EBX                             ; 005a44cf
    RET                                 ; 005a44d0
    PUSH 0x1                            ; 005a44d1
        ;   Label: LAB_005a44d1
    PUSH 0x8                            ; 005a44d3
    LEA EAX,[EBX + 0x2b4]               ; 005a44d5
    PUSH EAX                            ; 005a44db
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a44dc
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a44e1
    JMP 0x005a4369                      ; 005a44e4
        ;   XREF to: 005a4369 (UNCONDITIONAL_JUMP)  ; LAB_005a4369
    PUSH 0x5f031d                       ; 005a44e9 | = "Animation"
        ;   Label: LAB_005a44e9
    PUSH ESI                            ; 005a44ee
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a44ef
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a44f4
    TEST EAX,EAX                        ; 005a44f7
    JNZ 0x005a4385                      ; 005a44f9
        ;   XREF to: 005a4385 (CONDITIONAL_JUMP)  ; LAB_005a4385
    PUSH 0x5f0327                       ; 005a44ff | DAT_005f0327
    PUSH ESI                            ; 005a4504
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a4505
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a450a
    TEST EAX,EAX                        ; 005a450d
    JNZ 0x005a4385                      ; 005a450f
        ;   XREF to: 005a4385 (CONDITIONAL_JUMP)  ; LAB_005a4385
    PUSH EBX                            ; 005a4515
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a4516
    CALL dword ptr [EAX + 0x17c]        ; 005a451c
    ADD ESP,0x4                         ; 005a4522
    JMP 0x005a4385                      ; 005a4525
        ;   XREF to: 005a4385 (UNCONDITIONAL_JUMP)  ; LAB_005a4385
    PUSH 0x5f036e                       ; 005a452a | = "Chasing"
        ;   Label: LAB_005a452a
    PUSH ESI                            ; 005a452f
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a4530
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a4535
    TEST EAX,EAX                        ; 005a4538
    JNZ 0x005a4423                      ; 005a453a
        ;   XREF to: 005a4423 (CONDITIONAL_JUMP)  ; LAB_005a4423
    PUSH 0x5f0376                       ; 005a4540 | = "MeleeAttack"
    PUSH ESI                            ; 005a4545
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a4546
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a454b
    TEST EAX,EAX                        ; 005a454e
    JNZ 0x005a4423                      ; 005a4550
        ;   XREF to: 005a4423 (CONDITIONAL_JUMP)  ; LAB_005a4423
    PUSH 0x5f0382                       ; 005a4556 | = "RangeAttack"
    PUSH ESI                            ; 005a455b
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a455c
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a4561
    TEST EAX,EAX                        ; 005a4564
    JNZ 0x005a4423                      ; 005a4566
        ;   XREF to: 005a4423 (CONDITIONAL_JUMP)  ; LAB_005a4423
    JMP 0x005a4457                      ; 005a456c
        ;   XREF to: 005a4457 (UNCONDITIONAL_JUMP)  ; LAB_005a4457

