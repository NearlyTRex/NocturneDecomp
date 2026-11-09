; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ghoul_cpp_FUN_004c9400(CGhoul *param_1,SDamageInfo *param_2)
;
;
; Referenced Globals:
;   undefined4 s_go_berzerk_005c43c4+1
;   TerminatedCString s_ghoul_die_wav_1_6_005c43d1
;   TerminatedCString s_guul_flinch_d_005c43e8
;   TerminatedCString s_ghoul_mad_wav_005c43f6
;   undefined4 DAT_005c440d
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_actor.cpp_FUN_0040cf40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_FUN_0042ff70
;   core_enemy.cpp_FUN_00489b80
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c9140
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_motion.cpp_FUN_004fb9c0
;   core_motion.cpp_FUN_004fc310
;   crt_math.c_round_FUN_005a3120
;   crt_unknown.c_FUN_005a28c0
;   engine_console.cpp_FUN_00441ff0
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9400
        ;   Label: core_ghoul.cpp_FUN_004c9400
    PUSH ESI                            ; 004c9401
    PUSH EDI                            ; 004c9402
    PUSH EBP                            ; 004c9403
    MOV EBP,ESP                         ; 004c9404
    SUB ESP,0x68                        ; 004c9406
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c9409
    MOV EDI,dword ptr [EBP + 0x18]      ; 004c940c
    MOV EDX,dword ptr [EBX + 0xd0a4]    ; 004c940f
    PUSH EDX                            ; 004c9415
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004c9416
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0xd0b4]    ; 004c941b
    ADD ESP,0x4                         ; 004c9421
    TEST ECX,ECX                        ; 004c9424
    JNZ 0x004c95da                      ; 004c9426
        ;   XREF to: 004c95da (CONDITIONAL_JUMP)  ; LAB_004c95da
    CMP dword ptr [EDI + 0x30],0x6c     ; 004c942c
        ;   Label: LAB_004c942c
    JNZ 0x004c943c                      ; 004c9430
        ;   XREF to: 004c943c (CONDITIONAL_JUMP)  ; LAB_004c943c
    MOV dword ptr [EBX + 0xd0b0],0x40800000 ; 004c9432
    PUSH EDI                            ; 004c943c
        ;   Label: LAB_004c943c
    PUSH EBX                            ; 004c943d
    CALL core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c9140 ; 004c943e
        ;   XREF to: 004c9140 (UNCONDITIONAL_CALL)  ; void core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c9140(CGhoul * this_ptr, SDamageInfo * damage_info)
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004c9443
    ADD ESP,0x8                         ; 004c9449
    TEST EDX,EDX                        ; 004c944c
    JZ 0x004c947c                       ; 004c944e
        ;   XREF to: 004c947c (CONDITIONAL_JUMP)  ; LAB_004c947c
    MOV EAX,EDX                         ; 004c9450
    PUSH EAX                            ; 004c9452
    MOV EDX,dword ptr [EDX + 0x154]     ; 004c9453
    CALL dword ptr [EDX + 0xf4]         ; 004c9459
    ADD ESP,0x4                         ; 004c945f
    CMP EAX,EBX                         ; 004c9462
    JNZ 0x004c947c                      ; 004c9464
        ;   XREF to: 004c947c (CONDITIONAL_JUMP)  ; LAB_004c947c
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c9466
    PUSH EAX                            ; 004c946c
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c946d
    CALL dword ptr [EDX + 0xf0]         ; 004c9473
    ADD ESP,0x4                         ; 004c9479
    FLD float ptr [EDI + 0x4]           ; 004c947c
        ;   Label: LAB_004c947c
    FSUBR float ptr [EBX + 0x2538]      ; 004c947f
    MOV EAX,dword ptr [EBX + 0xd0a0]    ; 004c9485
    FSTP float ptr [EBX + 0x2538]       ; 004c948b
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004c9491
    TEST ECX,ECX                        ; 004c9498
    JZ 0x004c964e                       ; 004c949a
        ;   XREF to: 004c964e (CONDITIONAL_JUMP)  ; LAB_004c964e
    FLD float ptr [EBX + 0x2538]        ; 004c94a0
        ;   Label: LAB_004c94a0
    FLDZ                                ; 004c94a6
    LEA EDX,[EBX + 0x158]               ; 004c94a8
    FCOMPP                              ; 004c94ae
    FNSTSW AX                           ; 004c94b0
    SAHF                                ; 004c94b2
    JC 0x004c96ba                       ; 004c94b3
        ;   XREF to: 004c96ba (CONDITIONAL_JUMP)  ; LAB_004c96ba
    MOV EAX,dword ptr [EBX + 0xce54]    ; 004c94b9
    MOV dword ptr [EBX + 0x2538],0x0    ; 004c94bf
    TEST EAX,EAX                        ; 004c94c9
    JNZ 0x004c9659                      ; 004c94cb
        ;   XREF to: 004c9659 (CONDITIONAL_JUMP)  ; LAB_004c9659
    PUSH EDX                            ; 004c94d1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004c94d2
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c94d7
    ADD ESP,0x4                         ; 004c94da
    CMP EAX,0xa                         ; 004c94dd
    JZ 0x004c95c9                       ; 004c94e0
        ;   XREF to: 004c95c9 (CONDITIONAL_JUMP)  ; LAB_004c95c9
    CMP EAX,0x9                         ; 004c94e6
    JZ 0x004c95c9                       ; 004c94e9
        ;   XREF to: 004c95c9 (CONDITIONAL_JUMP)  ; LAB_004c95c9
    MOV EAX,dword ptr [EBX + 0xd0a0]    ; 004c94ef
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004c94f5
    TEST EDX,EDX                        ; 004c94fc
    JZ 0x004c9673                       ; 004c94fe
        ;   XREF to: 004c9673 (CONDITIONAL_JUMP)  ; LAB_004c9673
    DEC dword ptr [EBX + 0xd070]        ; 004c9504
    MOV EAX,dword ptr [EBX + 0x3284]    ; 004c950a
        ;   Label: LAB_004c950a
    MOV ESI,0x6                         ; 004c9510
    TEST EAX,EAX                        ; 004c9515
    JLE 0x004c969b                      ; 004c9517
        ;   XREF to: 004c969b (CONDITIONAL_JUMP)  ; LAB_004c969b
    MOV EDX,dword ptr [EBX + 0x3284]    ; 004c951d
    XOR EAX,EAX                         ; 004c9523
    TEST EDX,EDX                        ; 004c9525
    JLE 0x004c9542                      ; 004c9527
        ;   XREF to: 004c9542 (CONDITIONAL_JUMP)  ; LAB_004c9542
    MOV EDX,EBX                         ; 004c9529
    MOV ECX,dword ptr [EDX + 0x3288]    ; 004c952b
        ;   Label: LAB_004c952b
    CMP ECX,dword ptr [EBX + 0xd09c]    ; 004c9531
    JNZ 0x004c967e                      ; 004c9537
        ;   XREF to: 004c967e (CONDITIONAL_JUMP)  ; LAB_004c967e
    MOV ESI,0x8                         ; 004c953d
        ;   Label: LAB_004c953d
    PUSH 0x1                            ; 004c9542
        ;   Label: LAB_004c9542
    PUSH ESI                            ; 004c9544
    LEA EAX,[EBX + 0x158]               ; 004c9545
    PUSH EAX                            ; 004c954b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c954c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c9551
    MOV ESI,dword ptr [EBX + 0xd0ac]    ; 004c9554
    PUSH ESI                            ; 004c955a
    CALL sound_sndmain.cpp_FUN_00556700 ; 004c955b
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004c9560
    TEST EAX,EAX                        ; 004c9563
    JNZ 0x004c957f                      ; 004c9565
        ;   XREF to: 004c957f (CONDITIONAL_JUMP)  ; LAB_004c957f
    PUSH 0x5c43d1                       ; 004c9567 | = "ghoul-die-!-?.wav @1.6"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c956c
    PUSH EBX                            ; 004c9572
    CALL dword ptr [EAX + 0x2c]         ; 004c9573
    ADD ESP,0x8                         ; 004c9576
    MOV dword ptr [EBX + 0xd0ac],EAX    ; 004c9579
    PUSH 0x41200000                     ; 004c957f
        ;   Label: LAB_004c957f
    PUSH 0x40800000                     ; 004c9584
    CALL core_actor.cpp_FUN_0040ce40    ; 004c9589
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBP + -0x4],EAX      ; 004c958e
    FLD float ptr [EBP + -0x4]          ; 004c9591
    FMUL double ptr [0x005c440d]        ; 004c9594 | DAT_005c440d
    ADD ESP,0x8                         ; 004c959a
    MOV dword ptr [EBX + 0xd060],0xa0000 ; 004c959d
    PUSH 0x41c80000                     ; 004c95a7
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c95ac
    PUSH 0x32                           ; 004c95b2
    CALL crt_math.c_round_FUN_005a3120  ; 004c95b4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH EBX                            ; 004c95b9
    FISTP dword ptr [EBX + 0xd05c]      ; 004c95ba
    CALL dword ptr [EAX + 0xa8]         ; 004c95c0
    ADD ESP,0xc                         ; 004c95c6
    PUSH EDI                            ; 004c95c9
        ;   Label: LAB_004c95c9
    PUSH EBX                            ; 004c95ca
    CALL core_enemy.cpp_FUN_00489b80    ; 004c95cb
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 004c95d0
    MOV ESP,EBP                         ; 004c95d3
    POP EBP                             ; 004c95d5
    POP EDI                             ; 004c95d6
    POP ESI                             ; 004c95d7
    POP EBX                             ; 004c95d8
    RET                                 ; 004c95d9
    LEA EAX,[EBX + 0x158]               ; 004c95da
        ;   Label: LAB_004c95da
    PUSH EAX                            ; 004c95e0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004c95e1
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c95e6
    ADD ESP,0x4                         ; 004c95e9
    TEST EAX,EAX                        ; 004c95ec
    JNZ 0x004c942c                      ; 004c95ee
        ;   XREF to: 004c942c (CONDITIONAL_JUMP)  ; LAB_004c942c
    MOV dword ptr [EBX + 0xd0b8],0x41f00000 ; 004c95f4
    MOV dword ptr [EBX + 0xd0b4],EAX    ; 004c95fe
    LEA EAX,[EBX + 0xd0c4]              ; 004c9604
    MOV dword ptr [EBX + 0xd0bc],0x1    ; 004c960a
    LEA EDX,[EBX + 0x20]                ; 004c9614
    MOV dword ptr [EBX + 0xd0c0],0x3f800000 ; 004c9617
    CMP EAX,EDX                         ; 004c9621
    JZ 0x004c9635                       ; 004c9623
        ;   XREF to: 004c9635 (CONDITIONAL_JUMP)  ; LAB_004c9635
    MOV ECX,dword ptr [EDX]             ; 004c9625
    MOV dword ptr [EAX],ECX             ; 004c9627
    MOV ECX,dword ptr [EDX + 0x4]       ; 004c9629
    MOV dword ptr [EAX + 0x4],ECX       ; 004c962c
    MOV ECX,dword ptr [EDX + 0x8]       ; 004c962f
    MOV dword ptr [EAX + 0x8],ECX       ; 004c9632
    PUSH 0x5c43c5                       ; 004c9635 | s_go_berzerk_005c43c4+1
        ;   Label: LAB_004c9635
    MOV ESI,dword ptr [0x005f1690]      ; 004c963a | g_CConsolePtr
    PUSH ESI                            ; 004c9640 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 004c9641
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 004c9646
    JMP 0x004c942c                      ; 004c9649
        ;   XREF to: 004c942c (UNCONDITIONAL_JUMP)  ; LAB_004c942c
    MOV dword ptr [EBX + 0x2538],ECX    ; 004c964e
        ;   Label: LAB_004c964e
    JMP 0x004c94a0                      ; 004c9654
        ;   XREF to: 004c94a0 (UNCONDITIONAL_JUMP)  ; LAB_004c94a0
    PUSH EBX                            ; 004c9659
        ;   Label: LAB_004c9659
    CALL core_charactr.cpp_FUN_0042ff70 ; 004c965a
        ;   XREF to: 0042ff70 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042ff70()
    ADD ESP,0x4                         ; 004c965f
    PUSH EDI                            ; 004c9662
    PUSH EBX                            ; 004c9663
    CALL core_enemy.cpp_FUN_00489b80    ; 004c9664
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 004c9669
    MOV ESP,EBP                         ; 004c966c
    POP EBP                             ; 004c966e
    POP EDI                             ; 004c966f
    POP ESI                             ; 004c9670
    POP EBX                             ; 004c9671
    RET                                 ; 004c9672
    MOV dword ptr [EBX + 0xd070],EDX    ; 004c9673
        ;   Label: LAB_004c9673
    JMP 0x004c950a                      ; 004c9679
        ;   XREF to: 004c950a (UNCONDITIONAL_JUMP)  ; LAB_004c950a
    JZ 0x004c953d                       ; 004c967e
        ;   XREF to: 004c953d (CONDITIONAL_JUMP)  ; LAB_004c953d
        ;   Label: LAB_004c967e
    INC EAX                             ; 004c9684
    MOV ECX,dword ptr [EBX + 0x3284]    ; 004c9685
    ADD EDX,0x38                        ; 004c968b
    CMP EAX,ECX                         ; 004c968e
    JL 0x004c952b                       ; 004c9690
        ;   XREF to: 004c952b (CONDITIONAL_JUMP)  ; LAB_004c952b
    JMP 0x004c9542                      ; 004c9696
        ;   XREF to: 004c9542 (UNCONDITIONAL_JUMP)  ; LAB_004c9542
    PUSH 0x3f000000                     ; 004c969b
        ;   Label: LAB_004c969b
    CALL core_actor.cpp_FUN_0040cf40    ; 004c96a0
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004c96a5
    TEST EAX,EAX                        ; 004c96a8
    JZ 0x004c9542                       ; 004c96aa
        ;   XREF to: 004c9542 (CONDITIONAL_JUMP)  ; LAB_004c9542
    MOV ESI,0x7                         ; 004c96b0
    JMP 0x004c9542                      ; 004c96b5
        ;   XREF to: 004c9542 (UNCONDITIONAL_JUMP)  ; LAB_004c9542
    PUSH EDX                            ; 004c96ba
        ;   Label: LAB_004c96ba
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004c96bb
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV ECX,dword ptr [EAX + 0x24]      ; 004c96c0
    ADD ESP,0x4                         ; 004c96c3
    MOV EDX,ECX                         ; 004c96c6
    XOR EAX,EAX                         ; 004c96c8
    CMP ECX,0x2                         ; 004c96ca
    JNZ 0x004c96d4                      ; 004c96cd
        ;   XREF to: 004c96d4 (CONDITIONAL_JUMP)  ; LAB_004c96d4
    MOV EAX,0x1                         ; 004c96cf
    CMP EDX,0xc                         ; 004c96d4
        ;   Label: LAB_004c96d4
    JNZ 0x004c96de                      ; 004c96d7
        ;   XREF to: 004c96de (CONDITIONAL_JUMP)  ; LAB_004c96de
    MOV EAX,0x1                         ; 004c96d9
    CMP EDX,0xb                         ; 004c96de
        ;   Label: LAB_004c96de
    JNZ 0x004c96e8                      ; 004c96e1
        ;   XREF to: 004c96e8 (CONDITIONAL_JUMP)  ; LAB_004c96e8
    MOV EAX,0x1                         ; 004c96e3
    TEST EDX,EDX                        ; 004c96e8
        ;   Label: LAB_004c96e8
    JNZ 0x004c9758                      ; 004c96ea
        ;   XREF to: 004c9758 (CONDITIONAL_JUMP)  ; LAB_004c9758
    PUSH 0x1                            ; 004c96ec
        ;   Label: LAB_004c96ec
    PUSH 0x3f000000                     ; 004c96ee
    CALL core_actor.cpp_FUN_0040cf40    ; 004c96f3
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004c96f8
    TEST EAX,EAX                        ; 004c96fb
    SETZ AL                             ; 004c96fd
    AND EAX,0xff                        ; 004c9700
    ADD EAX,0x3                         ; 004c9705
    PUSH EAX                            ; 004c9708
    LEA EAX,[EBX + 0x158]               ; 004c9709
    PUSH EAX                            ; 004c970f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c9710
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c9715
    MOV ESI,dword ptr [EBX + 0xd0a8]    ; 004c9718
        ;   Label: LAB_004c9718
    PUSH ESI                            ; 004c971e
    CALL sound_sndmain.cpp_FUN_00556700 ; 004c971f
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004c9724
    TEST EAX,EAX                        ; 004c9727
    JNZ 0x004c95c9                      ; 004c9729
        ;   XREF to: 004c95c9 (CONDITIONAL_JUMP)  ; LAB_004c95c9
    PUSH 0x5c43f6                       ; 004c972f | = "ghoul-mad-!-?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c9734
    PUSH EBX                            ; 004c973a
    CALL dword ptr [EAX + 0x2c]         ; 004c973b
    ADD ESP,0x8                         ; 004c973e
    MOV dword ptr [EBX + 0xd0a8],EAX    ; 004c9741
    PUSH EDI                            ; 004c9747
    PUSH EBX                            ; 004c9748
    CALL core_enemy.cpp_FUN_00489b80    ; 004c9749
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 004c974e
    MOV ESP,EBP                         ; 004c9751
    POP EBP                             ; 004c9753
    POP EDI                             ; 004c9754
    POP ESI                             ; 004c9755
    POP EBX                             ; 004c9756
    RET                                 ; 004c9757
    TEST EAX,EAX                        ; 004c9758
        ;   Label: LAB_004c9758
    JNZ 0x004c96ec                      ; 004c975a
        ;   XREF to: 004c96ec (CONDITIONAL_JUMP)  ; LAB_004c96ec
    PUSH 0x3e800000                     ; 004c975c
    CALL core_actor.cpp_FUN_0040cf40    ; 004c9761
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004c9766
    TEST EAX,EAX                        ; 004c9769
    JNZ 0x004c96ec                      ; 004c976b
        ;   XREF to: 004c96ec (CONDITIONAL_JUMP)  ; LAB_004c96ec
    PUSH 0x2                            ; 004c9771
    PUSH 0x1                            ; 004c9773
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004c9775
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c977a
    PUSH EAX                            ; 004c977d
    PUSH 0x5c43e8                       ; 004c977e | = "guul flinch%d"
    LEA EAX,[EBP + -0x68]               ; 004c9783
    PUSH EAX                            ; 004c9786
    CALL crt_unknown.c_FUN_005a28c0     ; 004c9787
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 004c978c
    PUSH 0x1                            ; 004c978f
    LEA EAX,[EBP + -0x68]               ; 004c9791
    PUSH EAX                            ; 004c9794
    LEA EAX,[EBX + 0x158]               ; 004c9795
    PUSH EAX                            ; 004c979b
    CALL core_motion.cpp_FUN_004fc310   ; 004c979c
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004c97a1
    PUSH EAX                            ; 004c97a4
    CALL core_motion.cpp_FUN_004fb9c0   ; 004c97a5
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    MOV dword ptr [EBX + 0xd068],0x3f800000 ; 004c97aa
    ADD ESP,0xc                         ; 004c97b4
    MOV dword ptr [EBX + 0xd06c],EAX    ; 004c97b7
    JMP 0x004c9718                      ; 004c97bd
        ;   XREF to: 004c9718 (UNCONDITIONAL_JUMP)  ; LAB_004c9718

