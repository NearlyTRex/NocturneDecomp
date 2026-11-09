; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dracbrid_cpp_FUN_0047d480(CDraculaBride *param_1,SDamageInfo *param_2)
;
;
; Referenced Globals:
;   undefined4 s_s_4_bride_launch_wav_005daf9b+2
;   TerminatedCString s_bride_die_wav_005dafae
;   TerminatedCString s_bride_hurt_wav_005dafbd
;   undefined4 DAT_005dafcd
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040cc60
;   core_actor.cpp_FUN_0040cd00
;   core_charactr.cpp_FUN_004308a0
;   core_dracbrid.cpp_FUN_0047d430
;   core_dracbrid.cpp_FUN_0047d920
;   core_enemy.cpp_FUN_004a0f00
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047d480
        ;   Label: core_dracbrid.cpp_FUN_0047d480
    PUSH ESI                            ; 0047d481
    PUSH EDI                            ; 0047d482
    PUSH EBP                            ; 0047d483
    SUB ESP,0x54                        ; 0047d484
    MOV EBP,dword ptr [ESP + 0x68]      ; 0047d487
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0047d48b
    XOR EDX,EDX                         ; 0047d48f
    MOV ECX,dword ptr [EAX + 0x28]      ; 0047d491
    MOV dword ptr [ESP + 0x50],EDX      ; 0047d494
    CMP ECX,0x7                         ; 0047d498
    JZ 0x0047d5c2                       ; 0047d49b
        ;   XREF to: 0047d5c2 (CONDITIONAL_JUMP)  ; LAB_0047d5c2
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0047d4a1
        ;   Label: LAB_0047d4a1
    CMP dword ptr [EAX + 0x30],0x68     ; 0047d4a5
    JNZ 0x0047d4b3                      ; 0047d4a9
        ;   XREF to: 0047d4b3 (CONDITIONAL_JUMP)  ; LAB_0047d4b3
    MOV dword ptr [ESP + 0x50],0x1      ; 0047d4ab
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0047d4b3
        ;   Label: LAB_0047d4b3
    CMP dword ptr [EAX + 0x30],0x6c     ; 0047d4b7
    JNZ 0x0047d511                      ; 0047d4bb
        ;   XREF to: 0047d511 (CONDITIONAL_JUMP)  ; LAB_0047d511
    PUSH 0x0                            ; 0047d4bd
    LEA EAX,[EBP + 0x158]               ; 0047d4bf
    PUSH EAX                            ; 0047d4c5
    LEA ESI,[ESP + 0x8]                 ; 0047d4c6
    LEA EDI,[ESP + 0x44]                ; 0047d4ca
    CALL core_skeleton.cpp_FUN_00569130 ; 0047d4ce
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 0047d4d3
    LEA EAX,[ESP + 0x3c]                ; 0047d4d6
    MOV ESI,ESP                         ; 0047d4da
    PUSH EAX                            ; 0047d4dc
    MOVSD ES:EDI,ESI                    ; 0047d4dd
    MOVSD ES:EDI,ESI                    ; 0047d4de
    MOVSD ES:EDI,ESI                    ; 0047d4df
    PUSH EBP                            ; 0047d4e0
    LEA ESI,[ESP + 0x14]                ; 0047d4e1
    CALL core_actor.cpp_FUN_00408b40    ; 0047d4e5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0047d4ea
    PUSH 0x0                            ; 0047d4ed
    PUSH 0x41200000                     ; 0047d4ef
    PUSH 0x0                            ; 0047d4f4
    PUSH 0x0                            ; 0047d4f6
    LEA EAX,[ESP + 0x40]                ; 0047d4f8
    PUSH EAX                            ; 0047d4fc
    LEA EDI,[ESP + 0x44]                ; 0047d4fd
    LEA ESI,[ESP + 0x20]                ; 0047d501
    PUSH EBP                            ; 0047d505
    MOVSD ES:EDI,ESI                    ; 0047d506
    MOVSD ES:EDI,ESI                    ; 0047d507
    MOVSD ES:EDI,ESI                    ; 0047d508
    CALL core_charactr.cpp_FUN_004308a0 ; 0047d509
        ;   XREF to: 004308a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004308a0(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 0047d50e
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0047d511
        ;   Label: LAB_0047d511
    PUSH ESI                            ; 0047d515
    PUSH EBP                            ; 0047d516
    CALL core_dracbrid.cpp_FUN_0047d430 ; 0047d517
        ;   XREF to: 0047d430 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_0047d430(CDraculaBride * this_ptr, SDamageInfo * damage_info)
    MOV EAX,ESI                         ; 0047d51c
    ADD ESP,0x8                         ; 0047d51e
    FLD float ptr [EAX + 0x4]           ; 0047d521
    FSUBR float ptr [EBP + 0x2538]      ; 0047d524
    LEA EBX,[EBP + 0x158]               ; 0047d52a
    FST float ptr [EBP + 0x2538]        ; 0047d530
    FLDZ                                ; 0047d536
    FCOMPP                              ; 0047d538
    FNSTSW AX                           ; 0047d53a
    SAHF                                ; 0047d53c
    JC 0x0047d651                       ; 0047d53d
        ;   XREF to: 0047d651 (CONDITIONAL_JUMP)  ; LAB_0047d651
    PUSH EBX                            ; 0047d543
    MOV dword ptr [EBP + 0x2538],0x0    ; 0047d544
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0047d54e
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0047d553
    ADD ESP,0x4                         ; 0047d556
    CMP EAX,0x11                        ; 0047d559
    JZ 0x0047d597                       ; 0047d55c
        ;   XREF to: 0047d597 (CONDITIONAL_JUMP)  ; LAB_0047d597
    CMP EAX,0x10                        ; 0047d55e
    JZ 0x0047d597                       ; 0047d561
        ;   XREF to: 0047d597 (CONDITIONAL_JUMP)  ; LAB_0047d597
    CMP EAX,0xa                         ; 0047d563
    JZ 0x0047d597                       ; 0047d566
        ;   XREF to: 0047d597 (CONDITIONAL_JUMP)  ; LAB_0047d597
    CMP EAX,0x7                         ; 0047d568
    JZ 0x0047d597                       ; 0047d56b
        ;   XREF to: 0047d597 (CONDITIONAL_JUMP)  ; LAB_0047d597
    CMP dword ptr [ESP + 0x50],0x0      ; 0047d56d
    JZ 0x0047d627                       ; 0047d572
        ;   XREF to: 0047d627 (CONDITIONAL_JUMP)  ; LAB_0047d627
    PUSH 0x1                            ; 0047d578
    PUSH 0x7                            ; 0047d57a
    PUSH EBX                            ; 0047d57c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047d57d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047d582
    PUSH 0x5daf9d                       ; 0047d585 | s_s_4_bride_launch_wav_005daf9b+2
    MOV EAX,dword ptr [EBP + 0x154]     ; 0047d58a
    PUSH EBP                            ; 0047d590
    CALL dword ptr [EAX + 0x30]         ; 0047d591
    ADD ESP,0x8                         ; 0047d594
    PUSH 0x3ecccccd                     ; 0047d597
        ;   Label: LAB_0047d597
    CALL core_actor.cpp_FUN_0040cd00    ; 0047d59c
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0047d5a1
    TEST EAX,EAX                        ; 0047d5a4
    JNZ 0x0047d639                      ; 0047d5a6
        ;   XREF to: 0047d639 (CONDITIONAL_JUMP)  ; LAB_0047d639
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0047d5ac
        ;   Label: LAB_0047d5ac
    PUSH EAX                            ; 0047d5b0
    PUSH EBP                            ; 0047d5b1
    CALL core_enemy.cpp_FUN_004a0f00    ; 0047d5b2
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0f00()
    ADD ESP,0x8                         ; 0047d5b7
    ADD ESP,0x54                        ; 0047d5ba
    POP EBP                             ; 0047d5bd
    POP EDI                             ; 0047d5be
    POP ESI                             ; 0047d5bf
    POP EBX                             ; 0047d5c0
    RET                                 ; 0047d5c1
    FLD float ptr [EAX + 0x4]           ; 0047d5c2
        ;   Label: LAB_0047d5c2
    ADD EAX,0x1c                        ; 0047d5c5
    FLD ST0                             ; 0047d5c8
    FMUL double ptr [0x005dafcd]        ; 0047d5ca | DAT_005dafcd
    PUSH EAX                            ; 0047d5d0
    LEA ESI,[ESP + 0x28]                ; 0047d5d1
    LEA EDI,[ESP + 0x1c]                ; 0047d5d5
    PUSH EBP                            ; 0047d5d9
    FSTP ST1                            ; 0047d5da
    FSTP float ptr [EAX + -0x18]        ; 0047d5dc
    CALL core_actor.cpp_FUN_00408b40    ; 0047d5df
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x2c]                ; 0047d5e4
    ADD ESP,0x8                         ; 0047d5e8
    XOR EBX,EBX                         ; 0047d5eb
    MOVSD ES:EDI,ESI                    ; 0047d5ed
    MOVSD ES:EDI,ESI                    ; 0047d5ee
    MOVSD ES:EDI,ESI                    ; 0047d5ef
    MOV ESI,0x4000                      ; 0047d5f0
    PUSH 0xffff                         ; 0047d5f5
        ;   Label: LAB_0047d5f5
    PUSH 0x0                            ; 0047d5fa
    PUSH ESI                            ; 0047d5fc
    PUSH ESI                            ; 0047d5fd
    PUSH 0x0                            ; 0047d5fe
    LEA EAX,[ESP + 0x2c]                ; 0047d600
    PUSH EAX                            ; 0047d604
    MOV EDI,dword ptr [0x0061c010]      ; 0047d605 | DAT_0061c010
    PUSH EDI                            ; 0047d60b
    INC EBX                             ; 0047d60c
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 0047d60d
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0047d612
    CMP EBX,0x5                         ; 0047d615
    JL 0x0047d5f5                       ; 0047d618
        ;   XREF to: 0047d5f5 (CONDITIONAL_JUMP)  ; LAB_0047d5f5
    MOV dword ptr [ESP + 0x50],0x1      ; 0047d61a
    JMP 0x0047d4a1                      ; 0047d622
        ;   XREF to: 0047d4a1 (UNCONDITIONAL_JUMP)  ; LAB_0047d4a1
    PUSH 0x1                            ; 0047d627
        ;   Label: LAB_0047d627
    PUSH 0xa                            ; 0047d629
    PUSH EBX                            ; 0047d62b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047d62c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047d631
    JMP 0x0047d597                      ; 0047d634
        ;   XREF to: 0047d597 (UNCONDITIONAL_JUMP)  ; LAB_0047d597
    PUSH 0x40000000                     ; 0047d639
        ;   Label: LAB_0047d639
    PUSH 0x5dafae                       ; 0047d63e | = "bride-die?.wav"
    PUSH EBP                            ; 0047d643
    CALL core_dracbrid.cpp_FUN_0047d920 ; 0047d644
        ;   XREF to: 0047d920 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_0047d920(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 0047d649
    JMP 0x0047d5ac                      ; 0047d64c
        ;   XREF to: 0047d5ac (UNCONDITIONAL_JUMP)  ; LAB_0047d5ac
    PUSH EBX                            ; 0047d651
        ;   Label: LAB_0047d651
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0047d652
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0047d657
    ADD ESP,0x4                         ; 0047d65a
    CMP EAX,0x8                         ; 0047d65d
    JNZ 0x0047d6a2                      ; 0047d660
        ;   XREF to: 0047d6a2 (CONDITIONAL_JUMP)  ; LAB_0047d6a2
    PUSH 0x1                            ; 0047d662
        ;   Label: LAB_0047d662
    PUSH 0x1                            ; 0047d664
    LEA EAX,[EBP + 0x158]               ; 0047d666
        ;   Label: LAB_0047d666
    PUSH EAX                            ; 0047d66c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047d66d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047d672
    PUSH 0x3ecccccd                     ; 0047d675
        ;   Label: LAB_0047d675
    CALL core_actor.cpp_FUN_0040cd00    ; 0047d67a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0047d67f
    TEST EAX,EAX                        ; 0047d682
    JZ 0x0047d5ac                       ; 0047d684
        ;   XREF to: 0047d5ac (CONDITIONAL_JUMP)  ; LAB_0047d5ac
    PUSH 0x40000000                     ; 0047d68a
    PUSH 0x5dafbd                       ; 0047d68f | = "bride-hurt?.wav"
    PUSH EBP                            ; 0047d694
    CALL core_dracbrid.cpp_FUN_0047d920 ; 0047d695
        ;   XREF to: 0047d920 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_0047d920(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 0047d69a
    JMP 0x0047d5ac                      ; 0047d69d
        ;   XREF to: 0047d5ac (UNCONDITIONAL_JUMP)  ; LAB_0047d5ac
    CMP EAX,0x9                         ; 0047d6a2
        ;   Label: LAB_0047d6a2
    JZ 0x0047d662                       ; 0047d6a5
        ;   XREF to: 0047d662 (CONDITIONAL_JUMP)  ; LAB_0047d662
    CMP EAX,0x2                         ; 0047d6a7
    JZ 0x0047d662                       ; 0047d6aa
        ;   XREF to: 0047d662 (CONDITIONAL_JUMP)  ; LAB_0047d662
    TEST EAX,EAX                        ; 0047d6ac
    JZ 0x0047d6b5                       ; 0047d6ae
        ;   XREF to: 0047d6b5 (CONDITIONAL_JUMP)  ; LAB_0047d6b5
    CMP EAX,0xe                         ; 0047d6b0
    JNZ 0x0047d703                      ; 0047d6b3
        ;   XREF to: 0047d703 (CONDITIONAL_JUMP)  ; LAB_0047d703
    PUSH 0x2                            ; 0047d6b5
        ;   Label: LAB_0047d6b5
    PUSH 0x0                            ; 0047d6b7
    CALL core_actor.cpp_FUN_0040cc60    ; 0047d6b9
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0047d6be
    MOV EBX,EAX                         ; 0047d6c1
    TEST EAX,EAX                        ; 0047d6c3
    JNZ 0x0047d6da                      ; 0047d6c5
        ;   XREF to: 0047d6da (CONDITIONAL_JUMP)  ; LAB_0047d6da
    PUSH 0x1                            ; 0047d6c7
    PUSH 0x4                            ; 0047d6c9
    LEA EAX,[EBP + 0x158]               ; 0047d6cb
    PUSH EAX                            ; 0047d6d1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047d6d2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047d6d7
    CMP EBX,0x1                         ; 0047d6da
        ;   Label: LAB_0047d6da
    JNZ 0x0047d6f1                      ; 0047d6dd
        ;   XREF to: 0047d6f1 (CONDITIONAL_JUMP)  ; LAB_0047d6f1
    PUSH EBX                            ; 0047d6df
    PUSH 0x5                            ; 0047d6e0
    LEA EAX,[EBP + 0x158]               ; 0047d6e2
    PUSH EAX                            ; 0047d6e8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047d6e9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047d6ee
    CMP EBX,0x2                         ; 0047d6f1
        ;   Label: LAB_0047d6f1
    JNZ 0x0047d675                      ; 0047d6f4
        ;   XREF to: 0047d675 (CONDITIONAL_JUMP)  ; LAB_0047d675
    PUSH 0x1                            ; 0047d6fa
    PUSH 0x6                            ; 0047d6fc
    JMP 0x0047d666                      ; 0047d6fe
        ;   XREF to: 0047d666 (UNCONDITIONAL_JUMP)  ; LAB_0047d666
    CMP EAX,0x13                        ; 0047d703
        ;   Label: LAB_0047d703
    JZ 0x0047d6b5                       ; 0047d706
        ;   XREF to: 0047d6b5 (CONDITIONAL_JUMP)  ; LAB_0047d6b5
    CMP EAX,0xc                         ; 0047d708
    JZ 0x0047d6b5                       ; 0047d70b
        ;   XREF to: 0047d6b5 (CONDITIONAL_JUMP)  ; LAB_0047d6b5
    CMP EAX,0x12                        ; 0047d70d
    JZ 0x0047d6b5                       ; 0047d710
        ;   XREF to: 0047d6b5 (CONDITIONAL_JUMP)  ; LAB_0047d6b5
    CMP EAX,0x14                        ; 0047d712
    JZ 0x0047d6b5                       ; 0047d715
        ;   XREF to: 0047d6b5 (CONDITIONAL_JUMP)  ; LAB_0047d6b5
    CMP EAX,0x15                        ; 0047d717
    JZ 0x0047d6b5                       ; 0047d71a
        ;   XREF to: 0047d6b5 (CONDITIONAL_JUMP)  ; LAB_0047d6b5
    JMP 0x0047d675                      ; 0047d71c
        ;   XREF to: 0047d675 (UNCONDITIONAL_JUMP)  ; LAB_0047d675

