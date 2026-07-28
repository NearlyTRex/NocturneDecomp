; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_process_FUN_0048a390(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a62d1
;
; Referenced Globals:
;   undefined4 DAT_01c0a140
;   undefined4 DAT_01c0a16c
;   undefined4 DAT_01c20140
;   undefined4 DAT_01c23d48
;   undefined4 DAT_01c23fa8
;   undefined4 DAT_01c24208
;   undefined4 DAT_01c49d6c
;   undefined4 DAT_01c49d88
;   undefined4 DAT_01c49db8
;   undefined4 DAT_01c49dd4
;   undefined4 DAT_01c4e958
;   undefined4 DAT_01c4e9b4
;   undefined4 DAT_01c4f0a4
;   undefined4 DAT_01c4f0c0
;   undefined4 DAT_01c4f140
;   ... and 25 more
;
; Called Functions:
;   core_fire.cpp_CBulletHole_process_FUN_00482e90
;   core_fire.cpp_CBulletTrail_process_FUN_004856a0
;   core_fire.cpp_CCrater_process_FUN_00487a20
;   core_fire.cpp_CExplosion_process_FUN_00486f90
;   core_fire.cpp_CGunFlame_process_FUN_00488430
;   core_fire.cpp_CLightningBolt_process_FUN_00488bb0
;   core_fire.cpp_CMuzzleFlash_process_FUN_00484ed0
;   core_fire.cpp_CSmokeParticle_process_FUN_00482820
;   core_fire.cpp_CStake_process_FUN_004836b0
;   core_fire.cpp_CToss_process_FUN_004874d0
;   core_fire.cpp_CTrail_process_FUN_00489310
;   core_fire.cpp_initProcess_FUN_00487fd0
;   core_fire.cpp_updateTextureAnimCounts_FUN_00486d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a390
        ;   Label: core_fire.cpp_CFireEffect_process_FUN_0048a390
    PUSH ESI                            ; 0048a391
    PUSH EDI                            ; 0048a392
    PUSH EBP                            ; 0048a393
    MOV EBP,ESP                         ; 0048a394
    AND ESP,0xfffffff8                  ; 0048a396
    XOR EDX,EDX                         ; 0048a399
    MOV EBX,0x1c0a140                   ; 0048a39b
    MOV dword ptr [0x01c5c700],EDX      ; 0048a3a0 | DAT_01c5c700
    CALL core_fire.cpp_updateTextureAnimCounts_FUN_00486d40 ; 0048a3a6
        ;   XREF to: 00486d40 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_updateTextureAnimCounts_FUN_00486d40()
    LEA ESI,[EBX + 0x16000]             ; 0048a3ab
    MOV EAX,dword ptr [EBX]             ; 0048a3b1 | DAT_01c0a140 | DAT_01c0a16c
        ;   Label: LAB_0048a3b1
    TEST EAX,EAX                        ; 0048a3b3
    JNZ 0x0048a640                      ; 0048a3b5
        ;   XREF to: 0048a640 (CONDITIONAL_JUMP)  ; LAB_0048a640
    ADD EBX,0x2c                        ; 0048a3bb
        ;   Label: LAB_0048a3bb
    CMP EBX,ESI                         ; 0048a3be
    JNZ 0x0048a3b1                      ; 0048a3c0
        ;   XREF to: 0048a3b1 (CONDITIONAL_JUMP)  ; LAB_0048a3b1
    MOV EBX,0x1c49d54                   ; 0048a3c2
    LEA ESI,[EBX + 0x4c00]              ; 0048a3c7
    FLD float ptr [EBX + 0x18]          ; 0048a3cd | DAT_01c49d6c | DAT_01c49db8
        ;   Label: LAB_0048a3cd
    FLDZ                                ; 0048a3d0
    FCOMPP                              ; 0048a3d2
    FNSTSW AX                           ; 0048a3d4
    SAHF                                ; 0048a3d6
    JNC 0x0048a3e3                      ; 0048a3d7
        ;   XREF to: 0048a3e3 (CONDITIONAL_JUMP)  ; LAB_0048a3e3
    PUSH EBX                            ; 0048a3d9
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a3da | DAT_01c49d88 | DAT_01c49dd4
    CALL dword ptr [EAX + 0x4]          ; 0048a3dd
    ADD ESP,0x4                         ; 0048a3e0
    ADD EBX,0x4c                        ; 0048a3e3
        ;   Label: LAB_0048a3e3
    CMP EBX,ESI                         ; 0048a3e6
    JNZ 0x0048a3cd                      ; 0048a3e8
        ;   XREF to: 0048a3cd (CONDITIONAL_JUMP)  ; LAB_0048a3cd
    MOV EBX,0x1c4e958                   ; 0048a3ea
    LEA ESI,[EBX + 0x730]               ; 0048a3ef
    MOV EAX,dword ptr [EBX]             ; 0048a3f5 | DAT_01c4e958 | DAT_01c4e9b4
        ;   Label: LAB_0048a3f5
    TEST EAX,EAX                        ; 0048a3f7
    JZ 0x0048a404                       ; 0048a3f9
        ;   XREF to: 0048a404 (CONDITIONAL_JUMP)  ; LAB_0048a404
    PUSH EBX                            ; 0048a3fb | DAT_01c4e958 | DAT_01c4e9b4
    CALL core_fire.cpp_CMuzzleFlash_process_FUN_00484ed0 ; 0048a3fc
        ;   XREF to: 00484ed0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CMuzzleFlash_process_FUN_00484ed0(CMuzzleFlash * this_ptr)
    ADD ESP,0x4                         ; 0048a401
    ADD EBX,0x5c                        ; 0048a404
        ;   Label: LAB_0048a404
    CMP EBX,ESI                         ; 0048a407
    JNZ 0x0048a3f5                      ; 0048a409
        ;   XREF to: 0048a3f5 (CONDITIONAL_JUMP)  ; LAB_0048a3f5
    MOV ECX,dword ptr [0x01c23d48]      ; 0048a40b | DAT_01c23d48
    XOR ESI,ESI                         ; 0048a411
    TEST ECX,ECX                        ; 0048a413
    JLE 0x0048a440                      ; 0048a415
        ;   XREF to: 0048a440 (CONDITIONAL_JUMP)  ; LAB_0048a440
    MOV EBX,0x1c23d50                   ; 0048a417
    MOV EAX,dword ptr [EBX + 0x258]     ; 0048a41c | DAT_01c23fa8 | DAT_01c24208
        ;   Label: LAB_0048a41c
    TEST EAX,EAX                        ; 0048a422
    JZ 0x0048a42f                       ; 0048a424
        ;   XREF to: 0048a42f (CONDITIONAL_JUMP)  ; LAB_0048a42f
    PUSH EBX                            ; 0048a426
    CALL core_fire.cpp_CStake_process_FUN_004836b0 ; 0048a427
        ;   XREF to: 004836b0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_process_FUN_004836b0(CStake * this_ptr)
    ADD ESP,0x4                         ; 0048a42c
    MOV EDI,dword ptr [0x01c23d48]      ; 0048a42f | DAT_01c23d48
        ;   Label: LAB_0048a42f
    INC ESI                             ; 0048a435
    ADD EBX,0x260                       ; 0048a436
    CMP ESI,EDI                         ; 0048a43c
    JL 0x0048a41c                       ; 0048a43e
        ;   XREF to: 0048a41c (CONDITIONAL_JUMP)  ; LAB_0048a41c
    MOV EBX,0x1c4f08c                   ; 0048a440
        ;   Label: LAB_0048a440
    LEA ESI,[EBX + 0x9c00]              ; 0048a445
    FLD float ptr [EBX + 0x18]          ; 0048a44b | DAT_01c4f0a4 | DAT_01c4f140
        ;   Label: LAB_0048a44b
    FLDZ                                ; 0048a44e
    FCOMPP                              ; 0048a450
    FNSTSW AX                           ; 0048a452
    SAHF                                ; 0048a454
    JNC 0x0048a461                      ; 0048a455
        ;   XREF to: 0048a461 (CONDITIONAL_JUMP)  ; LAB_0048a461
    PUSH EBX                            ; 0048a457
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a458 | DAT_01c4f0c0 | DAT_01c4f15c
    CALL dword ptr [EAX + 0x4]          ; 0048a45b
    ADD ESP,0x4                         ; 0048a45e
    ADD EBX,0x9c                        ; 0048a461
        ;   Label: LAB_0048a461
    CMP EBX,ESI                         ; 0048a467
    JNZ 0x0048a44b                      ; 0048a469
        ;   XREF to: 0048a44b (CONDITIONAL_JUMP)  ; LAB_0048a44b
    MOV EBX,0x1c58c90                   ; 0048a46b
    LEA ESI,[EBX + 0x168]               ; 0048a470
    MOV EAX,dword ptr [EBX + 0x20]      ; 0048a476 | DAT_01c58cb0 | DAT_01c58cd4
        ;   Label: LAB_0048a476
    TEST EAX,EAX                        ; 0048a479
    JZ 0x0048a486                       ; 0048a47b
        ;   XREF to: 0048a486 (CONDITIONAL_JUMP)  ; LAB_0048a486
    PUSH EBX                            ; 0048a47d
    CALL core_fire.cpp_CBulletTrail_process_FUN_004856a0 ; 0048a47e
        ;   XREF to: 004856a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_process_FUN_004856a0(CBulletTrail * this_ptr)
    ADD ESP,0x4                         ; 0048a483
    ADD EBX,0x24                        ; 0048a486
        ;   Label: LAB_0048a486
    CMP EBX,ESI                         ; 0048a489
    JNZ 0x0048a476                      ; 0048a48b
        ;   XREF to: 0048a476 (CONDITIONAL_JUMP)  ; LAB_0048a476
    MOV EBX,0x1c58dfc                   ; 0048a48d
    LEA ESI,[EBX + 0x2700]              ; 0048a492
    FLD float ptr [EBX + 0x18]          ; 0048a498 | DAT_01c58e14 | DAT_01c58eb0
        ;   Label: LAB_0048a498
    FLDZ                                ; 0048a49b
    FCOMPP                              ; 0048a49d
    FNSTSW AX                           ; 0048a49f
    SAHF                                ; 0048a4a1
    JNC 0x0048a4ae                      ; 0048a4a2
        ;   XREF to: 0048a4ae (CONDITIONAL_JUMP)  ; LAB_0048a4ae
    PUSH EBX                            ; 0048a4a4
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a4a5 | DAT_01c58e30 | DAT_01c58ecc
    CALL dword ptr [EAX + 0x4]          ; 0048a4a8
    ADD ESP,0x4                         ; 0048a4ab
    ADD EBX,0x9c                        ; 0048a4ae
        ;   Label: LAB_0048a4ae
    CMP EBX,ESI                         ; 0048a4b4
    JNZ 0x0048a498                      ; 0048a4b6
        ;   XREF to: 0048a498 (CONDITIONAL_JUMP)  ; LAB_0048a498
    MOV EBX,0x1c5b500                   ; 0048a4b8
    LEA ESI,[EBX + 0x1200]              ; 0048a4bd
    FLD float ptr [EBX + 0x18]          ; 0048a4c3 | DAT_01c5b518 | DAT_01c5b560
        ;   Label: LAB_0048a4c3
    FLDZ                                ; 0048a4c6
    FCOMPP                              ; 0048a4c8
    FNSTSW AX                           ; 0048a4ca
    SAHF                                ; 0048a4cc
    JNC 0x0048a4d9                      ; 0048a4cd
        ;   XREF to: 0048a4d9 (CONDITIONAL_JUMP)  ; LAB_0048a4d9
    PUSH EBX                            ; 0048a4cf
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a4d0 | DAT_01c5b534 | DAT_01c5b57c
    CALL dword ptr [EAX + 0x4]          ; 0048a4d3
    ADD ESP,0x4                         ; 0048a4d6
    ADD EBX,0x48                        ; 0048a4d9
        ;   Label: LAB_0048a4d9
    CMP EBX,ESI                         ; 0048a4dc
    JNZ 0x0048a4c3                      ; 0048a4de
        ;   XREF to: 0048a4c3 (CONDITIONAL_JUMP)  ; LAB_0048a4c3
    MOV EAX,[0x01c20140]                ; 0048a4e0 | DAT_01c20140
    XOR EBX,ESI                         ; 0048a4e5
    TEST EAX,EAX                        ; 0048a4e7
    JLE 0x0048a510                      ; 0048a4e9
        ;   XREF to: 0048a510 (CONDITIONAL_JUMP)  ; LAB_0048a510
    MOV ESI,0x1c20148                   ; 0048a4eb
    PUSH ESI                            ; 0048a4f0
        ;   Label: LAB_0048a4f0
    CALL core_fire.cpp_CBulletHole_process_FUN_00482e90 ; 0048a4f1
        ;   XREF to: 00482e90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_process_FUN_00482e90(CBulletHole * this_ptr)
    INC EBX                             ; 0048a4f6
    MOV EDX,dword ptr [0x01c20140]      ; 0048a4f7 | DAT_01c20140
    ADD ESP,0x4                         ; 0048a4fd
    ADD ESI,0x3c                        ; 0048a500
    CMP EBX,EDX                         ; 0048a503
    JL 0x0048a4f0                       ; 0048a505
        ;   XREF to: 0048a4f0 (CONDITIONAL_JUMP)  ; LAB_0048a4f0
    LEA EAX,[EAX]                       ; 0048a507
    LEA EDX,[EDX]                       ; 0048a50d
    MOV EBX,0x1c5d708                   ; 0048a510
        ;   Label: LAB_0048a510
    LEA ESI,[EBX + 0x118]               ; 0048a515
    PUSH EBX                            ; 0048a51b | DAT_01c5d724
        ;   Label: LAB_0048a51b
    CALL core_fire.cpp_CExplosion_process_FUN_00486f90 ; 0048a51c
        ;   XREF to: 00486f90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CExplosion_process_FUN_00486f90(CExplosion * this_ptr)
    ADD EBX,0x1c                        ; 0048a521
    ADD ESP,0x4                         ; 0048a524
    CMP EBX,ESI                         ; 0048a527
    JNZ 0x0048a51b                      ; 0048a529
        ;   XREF to: 0048a51b (CONDITIONAL_JUMP)  ; LAB_0048a51b
    MOV EBX,0x1c5d824                   ; 0048a52b
    LEA ESI,[EBX + 0x4dd0]              ; 0048a530
    PUSH EBX                            ; 0048a536
        ;   Label: LAB_0048a536
    CALL core_fire.cpp_CToss_process_FUN_004874d0 ; 0048a537
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_process_FUN_004874d0(CToss * this_ptr)
    ADD EBX,0x3e4                       ; 0048a53c
    ADD ESP,0x4                         ; 0048a542
    CMP EBX,ESI                         ; 0048a545
    JNZ 0x0048a536                      ; 0048a547
        ;   XREF to: 0048a536 (CONDITIONAL_JUMP)  ; LAB_0048a536
    MOV EBX,0x1c625f8                   ; 0048a549
    LEA ESI,[EBX + 0x8c0]               ; 0048a54e
    PUSH EBX                            ; 0048a554
        ;   Label: LAB_0048a554
    CALL core_fire.cpp_CCrater_process_FUN_00487a20 ; 0048a555
        ;   XREF to: 00487a20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_process_FUN_00487a20(CCrater * this_ptr)
    ADD EBX,0x70                        ; 0048a55a
    ADD ESP,0x4                         ; 0048a55d
    CMP EBX,ESI                         ; 0048a560
    JNZ 0x0048a554                      ; 0048a562
        ;   XREF to: 0048a554 (CONDITIONAL_JUMP)  ; LAB_0048a554
    MOV EBX,0x1c62ebc                   ; 0048a564
    XOR ESI,ESI                         ; 0048a569
    LEA EDI,[EBX + 0x4650]              ; 0048a56b
    TEST dword ptr [EBX],0x7fffffff     ; 0048a571 | DAT_01c62ebc | DAT_01c62ee0
        ;   Label: LAB_0048a571
    JZ 0x0048a590                       ; 0048a577
        ;   XREF to: 0048a590 (CONDITIONAL_JUMP)  ; LAB_0048a590
    TEST ESI,ESI                        ; 0048a579
    JNZ 0x0048a587                      ; 0048a57b
        ;   XREF to: 0048a587 (CONDITIONAL_JUMP)  ; LAB_0048a587
    CALL core_fire.cpp_initProcess_FUN_00487fd0 ; 0048a57d
        ;   XREF to: 00487fd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_initProcess_FUN_00487fd0()
    MOV ESI,0x1                         ; 0048a582
    PUSH EBX                            ; 0048a587 | DAT_01c62ebc | DAT_01c62ee0
        ;   Label: LAB_0048a587
    CALL core_fire.cpp_CGunFlame_process_FUN_00488430 ; 0048a588
        ;   XREF to: 00488430 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_process_FUN_00488430(CGunFlame * this_ptr)
    ADD ESP,0x4                         ; 0048a58d
    ADD EBX,0x24                        ; 0048a590
        ;   Label: LAB_0048a590
    CMP EBX,EDI                         ; 0048a593
    JNZ 0x0048a571                      ; 0048a595
        ;   XREF to: 0048a571 (CONDITIONAL_JUMP)  ; LAB_0048a571
    MOV EBX,0x1c67510                   ; 0048a597
    LEA ESI,[EBX + 0x1b8]               ; 0048a59c
    PUSH EBX                            ; 0048a5a2
        ;   Label: LAB_0048a5a2
    CALL core_fire.cpp_CLightningBolt_process_FUN_00488bb0 ; 0048a5a3
        ;   XREF to: 00488bb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_process_FUN_00488bb0(CLightningBolt * this_ptr)
    ADD EBX,0x2c                        ; 0048a5a8
    ADD ESP,0x4                         ; 0048a5ab
    CMP EBX,ESI                         ; 0048a5ae
    JNZ 0x0048a5a2                      ; 0048a5b0
        ;   XREF to: 0048a5a2 (CONDITIONAL_JUMP)  ; LAB_0048a5a2
    MOV EBX,0x1c676cc                   ; 0048a5b2
    LEA ESI,[EBX + 0xe10]               ; 0048a5b7
    PUSH EBX                            ; 0048a5bd
        ;   Label: LAB_0048a5bd
    CALL core_fire.cpp_CTrail_process_FUN_00489310 ; 0048a5be
        ;   XREF to: 00489310 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_process_FUN_00489310(CTrail * this_ptr)
    ADD EBX,0x24                        ; 0048a5c3
    ADD ESP,0x4                         ; 0048a5c6
    CMP EBX,ESI                         ; 0048a5c9
    JNZ 0x0048a5bd                      ; 0048a5cb
        ;   XREF to: 0048a5bd (CONDITIONAL_JUMP)  ; LAB_0048a5bd
    MOV EBX,0x1c684e0                   ; 0048a5cd
    LEA ESI,[EBX + 0x1130]              ; 0048a5d2
    PUSH EBX                            ; 0048a5d8
        ;   Label: LAB_0048a5d8
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a5d9 | DAT_01c68514 | DAT_01c6856c
    CALL dword ptr [EAX + 0x4]          ; 0048a5dc
    ADD EBX,0x58                        ; 0048a5df
    ADD ESP,0x4                         ; 0048a5e2
    CMP EBX,ESI                         ; 0048a5e5
    JNZ 0x0048a5d8                      ; 0048a5e7
        ;   XREF to: 0048a5d8 (CONDITIONAL_JUMP)  ; LAB_0048a5d8
    MOV EBX,0x1c69614                   ; 0048a5e9
    LEA ESI,[EBX + 0x3800]              ; 0048a5ee
    FLD float ptr [EBX + 0x18]          ; 0048a5f4 | DAT_01c6962c | DAT_01c69664
        ;   Label: LAB_0048a5f4
    FLDZ                                ; 0048a5f7
    FCOMPP                              ; 0048a5f9
    FNSTSW AX                           ; 0048a5fb
    SAHF                                ; 0048a5fd
    JNC 0x0048a60a                      ; 0048a5fe
        ;   XREF to: 0048a60a (CONDITIONAL_JUMP)  ; LAB_0048a60a
    PUSH EBX                            ; 0048a600
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a601 | DAT_01c69648 | DAT_01c69680
    CALL dword ptr [EAX + 0x4]          ; 0048a604
    ADD ESP,0x4                         ; 0048a607
    ADD EBX,0x38                        ; 0048a60a
        ;   Label: LAB_0048a60a
    CMP EBX,ESI                         ; 0048a60d
    JNZ 0x0048a5f4                      ; 0048a60f
        ;   XREF to: 0048a5f4 (CONDITIONAL_JUMP)  ; LAB_0048a5f4
    MOV EBX,0x1c6ce18                   ; 0048a611
    LEA ESI,[EBX + 0x3800]              ; 0048a616
    FLD float ptr [EBX + 0x18]          ; 0048a61c | DAT_01c6ce30 | DAT_01c6ce68
        ;   Label: LAB_0048a61c
    FLDZ                                ; 0048a61f
    FCOMPP                              ; 0048a621
    FNSTSW AX                           ; 0048a623
    SAHF                                ; 0048a625
    JNC 0x0048a632                      ; 0048a626
        ;   XREF to: 0048a632 (CONDITIONAL_JUMP)  ; LAB_0048a632
    PUSH EBX                            ; 0048a628
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a629 | DAT_01c6ce4c | DAT_01c6ce84
    CALL dword ptr [EAX + 0x4]          ; 0048a62c
    ADD ESP,0x4                         ; 0048a62f
    ADD EBX,0x38                        ; 0048a632
        ;   Label: LAB_0048a632
    CMP EBX,ESI                         ; 0048a635
    JNZ 0x0048a61c                      ; 0048a637
        ;   XREF to: 0048a61c (CONDITIONAL_JUMP)  ; LAB_0048a61c
    MOV ESP,EBP                         ; 0048a639
    POP EBP                             ; 0048a63b
    POP EDI                             ; 0048a63c
    POP ESI                             ; 0048a63d
    POP EBX                             ; 0048a63e
    RET                                 ; 0048a63f
    PUSH EBX                            ; 0048a640 | DAT_01c0a16c
        ;   Label: LAB_0048a640
    CALL core_fire.cpp_CSmokeParticle_process_FUN_00482820 ; 0048a641
        ;   XREF to: 00482820 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_process_FUN_00482820(CSmokeParticle * this_ptr)
    ADD ESP,0x4                         ; 0048a646
    JMP 0x0048a3bb                      ; 0048a649
        ;   XREF to: 0048a3bb (UNCONDITIONAL_JUMP)  ; LAB_0048a3bb

