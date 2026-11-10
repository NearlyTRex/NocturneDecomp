; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_process_FUN_0049c430(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004bd570 at 004bd83a
;
; Referenced Globals:
;   undefined4 DAT_01c3f8e0
;   undefined4 DAT_01c3f90c
;   undefined4 DAT_01c558e0
;   undefined4 DAT_01c594e8
;   undefined4 g_StakePool[0].physics_box.is_valid
;   undefined4 g_StakePool[1].physics_box.is_valid
;   undefined4 g_SparkPool[0].field36_0x24
;   undefined4 g_SparkPool[0].field60_0x3c
;   undefined4 g_SparkPool[1].field36_0x24
;   undefined4 g_SparkPool[1].field60_0x3c
;   undefined4 CFirefly_ARRAY_01c848f8[0].field36_0x24
;   undefined4 CFirefly_ARRAY_01c848f8[0].field60_0x3c
;   undefined4 CFirefly_ARRAY_01c848f8[1].field36_0x24
;   undefined4 CFirefly_ARRAY_01c848f8[1].field60_0x3c
;   undefined4 DAT_01c85ffc
;   ... and 35 more
;
; Called Functions:
;   core_fire.cpp_CBulletTrail_process_FUN_00497330
;   core_fire.cpp_CCrater_process_FUN_00499930
;   core_fire.cpp_CExplosion_process_FUN_00498e80
;   core_fire.cpp_CGunFlame_process_FUN_0049a3a0
;   core_fire.cpp_CLightningBolt_process_FUN_0049ab90
;   core_fire.cpp_CMuzzleFlash_process_FUN_00496a60
;   core_fire.cpp_CStake_process_FUN_00494580
;   core_fire.cpp_CToss_process_FUN_004993f0
;   core_fire.cpp_CTrail_process_FUN_0049b330
;   core_fire.cpp_FUN_004935b0
;   core_fire.cpp_FUN_00493cf0
;   core_fire.cpp_initProcess_FUN_00499ee0
;   core_fire.cpp_updateTextureAnimCounts_FUN_00498c30
;   unkaddr_0059d350.cpp_FUN_0059d420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c430
        ;   Label: core_fire.cpp_CFireEffect_process_FUN_0049c430
    PUSH ESI                            ; 0049c431
    PUSH EDI                            ; 0049c432
    PUSH EBP                            ; 0049c433
    MOV EBP,ESP                         ; 0049c434
    AND ESP,0xfffffff8                  ; 0049c436
    XOR EDX,EDX                         ; 0049c439
    MOV EBX,0x1c3f8e0                   ; 0049c43b
    MOV dword ptr [0x01c965dc],EDX      ; 0049c440 | DAT_01c965dc
    CALL core_fire.cpp_updateTextureAnimCounts_FUN_00498c30 ; 0049c446
        ;   XREF to: 00498c30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_updateTextureAnimCounts_FUN_00498c30()
    LEA ESI,[EBX + 0x16000]             ; 0049c44b
    MOV EAX,dword ptr [EBX]             ; 0049c451 | DAT_01c3f8e0 | DAT_01c3f90c
        ;   Label: LAB_0049c451
    TEST EAX,EAX                        ; 0049c453
    JNZ 0x0049c770                      ; 0049c455
        ;   XREF to: 0049c770 (CONDITIONAL_JUMP)  ; LAB_0049c770
    ADD EBX,0x2c                        ; 0049c45b
        ;   Label: LAB_0049c45b
    CMP EBX,ESI                         ; 0049c45e
    JNZ 0x0049c451                      ; 0049c460
        ;   XREF to: 0049c451 (CONDITIONAL_JUMP)  ; LAB_0049c451
    MOV EBX,0x1c7f4f4                   ; 0049c462
    LEA ESI,[EBX + 0x5400]              ; 0049c467
    FLD float ptr [EBX + 0x24]          ; 0049c46d | g_SparkPool[0].field36_0x24 | g_SparkPool[1].field36_0x24
        ;   Label: LAB_0049c46d
    FLDZ                                ; 0049c470
    FCOMPP                              ; 0049c472
    FNSTSW AX                           ; 0049c474
    SAHF                                ; 0049c476
    JNC 0x0049c483                      ; 0049c477
        ;   XREF to: 0049c483 (CONDITIONAL_JUMP)  ; LAB_0049c483
    PUSH EBX                            ; 0049c479
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c47a | g_SparkPool[0].field60_0x3c | g_SparkPool[1].field60_0x3c
    CALL dword ptr [EAX + 0x4]          ; 0049c47d
    ADD ESP,0x4                         ; 0049c480
    ADD EBX,0x54                        ; 0049c483
        ;   Label: LAB_0049c483
    CMP EBX,ESI                         ; 0049c486
    JNZ 0x0049c46d                      ; 0049c488
        ;   XREF to: 0049c46d (CONDITIONAL_JUMP)  ; LAB_0049c46d
    MOV EBX,0x1c848f8                   ; 0049c48a
    LEA ESI,[EBX + 0x1700]              ; 0049c48f
    FLD float ptr [EBX + 0x24]          ; 0049c495 | CFirefly_ARRAY_01c848f8[0].field36_0x24 | CFirefly_ARRAY_01c848f8[1].field36_0x24
        ;   Label: LAB_0049c495
    FLDZ                                ; 0049c498
    FCOMPP                              ; 0049c49a
    FNSTSW AX                           ; 0049c49c
    SAHF                                ; 0049c49e
    JNC 0x0049c4ab                      ; 0049c49f
        ;   XREF to: 0049c4ab (CONDITIONAL_JUMP)  ; LAB_0049c4ab
    PUSH EBX                            ; 0049c4a1
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c4a2 | CFirefly_ARRAY_01c848f8[0].field60_0x3c | CFirefly_ARRAY_01c848f8[1].field60_0x3c
    CALL dword ptr [EAX + 0x4]          ; 0049c4a5
    ADD ESP,0x4                         ; 0049c4a8
    ADD EBX,0x5c                        ; 0049c4ab
        ;   Label: LAB_0049c4ab
    CMP EBX,ESI                         ; 0049c4ae
    JNZ 0x0049c495                      ; 0049c4b0
        ;   XREF to: 0049c495 (CONDITIONAL_JUMP)  ; LAB_0049c495
    MOV EBX,0x1c86730                   ; 0049c4b2
    MOV ESI,0x1c85ffc                   ; 0049c4b7
    LEA EDI,[EBX + 0x730]               ; 0049c4bc
    MOV EAX,dword ptr [ESI]             ; 0049c4c2 | DAT_01c85ffc | DAT_01c86058
        ;   Label: LAB_0049c4c2
    TEST EAX,EAX                        ; 0049c4c4
    JZ 0x0049c4d1                       ; 0049c4c6
        ;   XREF to: 0049c4d1 (CONDITIONAL_JUMP)  ; LAB_0049c4d1
    PUSH ESI                            ; 0049c4c8 | DAT_01c85ffc | DAT_01c86058
    CALL core_fire.cpp_CMuzzleFlash_process_FUN_00496a60 ; 0049c4c9
        ;   XREF to: 00496a60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CMuzzleFlash_process_FUN_00496a60(CMuzzleFlash * this_ptr)
    ADD ESP,0x4                         ; 0049c4ce
    MOV EAX,dword ptr [EBX]             ; 0049c4d1 | DAT_01c86730 | DAT_01c8678c
        ;   Label: LAB_0049c4d1
    TEST EAX,EAX                        ; 0049c4d3
    JZ 0x0049c4e0                       ; 0049c4d5
        ;   XREF to: 0049c4e0 (CONDITIONAL_JUMP)  ; LAB_0049c4e0
    PUSH EBX                            ; 0049c4d7 | DAT_01c86730 | DAT_01c8678c
    CALL unkaddr_0059d350.cpp_FUN_0059d420 ; 0049c4d8
        ;   XREF to: 0059d420 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d420()
    ADD ESP,0x4                         ; 0049c4dd
    ADD EBX,0x5c                        ; 0049c4e0
        ;   Label: LAB_0049c4e0
    ADD ESI,0x5c                        ; 0049c4e3
    CMP EBX,EDI                         ; 0049c4e6
    JNZ 0x0049c4c2                      ; 0049c4e8
        ;   XREF to: 0049c4c2 (CONDITIONAL_JUMP)  ; LAB_0049c4c2
    MOV ECX,dword ptr [0x01c594e8]      ; 0049c4ea | DAT_01c594e8
    XOR ESI,ESI                         ; 0049c4f0
    TEST ECX,ECX                        ; 0049c4f2
    JLE 0x0049c51f                      ; 0049c4f4
        ;   XREF to: 0049c51f (CONDITIONAL_JUMP)  ; LAB_0049c51f
    MOV EBX,0x1c594f0                   ; 0049c4f6
    MOV EAX,dword ptr [EBX + 0x258]     ; 0049c4fb | g_StakePool[0].physics_box.is_valid | g_StakePool[1].physics_box.is_valid
        ;   Label: LAB_0049c4fb
    TEST EAX,EAX                        ; 0049c501
    JZ 0x0049c50e                       ; 0049c503
        ;   XREF to: 0049c50e (CONDITIONAL_JUMP)  ; LAB_0049c50e
    PUSH EBX                            ; 0049c505
    CALL core_fire.cpp_CStake_process_FUN_00494580 ; 0049c506
        ;   XREF to: 00494580 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_process_FUN_00494580(CStake * this_ptr)
    ADD ESP,0x4                         ; 0049c50b
    MOV EDI,dword ptr [0x01c594e8]      ; 0049c50e | DAT_01c594e8
        ;   Label: LAB_0049c50e
    INC ESI                             ; 0049c514
    ADD EBX,0x260                       ; 0049c515
    CMP ESI,EDI                         ; 0049c51b
    JL 0x0049c4fb                       ; 0049c51d
        ;   XREF to: 0049c4fb (CONDITIONAL_JUMP)  ; LAB_0049c4fb
    MOV EBX,0x1c86e64                   ; 0049c51f
        ;   Label: LAB_0049c51f
    LEA ESI,[EBX + 0xa400]              ; 0049c524
    FLD float ptr [EBX + 0x24]          ; 0049c52a | g_GlassParticlePool[0].field36_0x24 | g_GlassParticlePool[1].field36_0x24
        ;   Label: LAB_0049c52a
    FLDZ                                ; 0049c52d
    FCOMPP                              ; 0049c52f
    FNSTSW AX                           ; 0049c531
    SAHF                                ; 0049c533
    JNC 0x0049c540                      ; 0049c534
        ;   XREF to: 0049c540 (CONDITIONAL_JUMP)  ; LAB_0049c540
    PUSH EBX                            ; 0049c536
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c537 | g_GlassParticlePool[0].field60_0x3c | g_GlassParticlePool[1].field60_0x3c
    CALL dword ptr [EAX + 0x4]          ; 0049c53a
    ADD ESP,0x4                         ; 0049c53d
    ADD EBX,0xa4                        ; 0049c540
        ;   Label: LAB_0049c540
    CMP EBX,ESI                         ; 0049c546
    JNZ 0x0049c52a                      ; 0049c548
        ;   XREF to: 0049c52a (CONDITIONAL_JUMP)  ; LAB_0049c52a
    MOV EBX,0x1c91268                   ; 0049c54a
    LEA ESI,[EBX + 0x168]               ; 0049c54f
    MOV EAX,dword ptr [EBX + 0x20]      ; 0049c555 | DAT_01c91288 | DAT_01c912ac
        ;   Label: LAB_0049c555
    TEST EAX,EAX                        ; 0049c558
    JZ 0x0049c565                       ; 0049c55a
        ;   XREF to: 0049c565 (CONDITIONAL_JUMP)  ; LAB_0049c565
    PUSH EBX                            ; 0049c55c
    CALL core_fire.cpp_CBulletTrail_process_FUN_00497330 ; 0049c55d
        ;   XREF to: 00497330 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_process_FUN_00497330(CBulletTrail * this_ptr)
    ADD ESP,0x4                         ; 0049c562
    ADD EBX,0x24                        ; 0049c565
        ;   Label: LAB_0049c565
    CMP EBX,ESI                         ; 0049c568
    JNZ 0x0049c555                      ; 0049c56a
        ;   XREF to: 0049c555 (CONDITIONAL_JUMP)  ; LAB_0049c555
    MOV EBX,0x1c913d4                   ; 0049c56c
    LEA ESI,[EBX + 0x2900]              ; 0049c571
    FLD float ptr [EBX + 0x24]          ; 0049c577 | g_FireballPool[0].field36_0x24 | g_FireballPool[1].field36_0x24
        ;   Label: LAB_0049c577
    FLDZ                                ; 0049c57a
    FCOMPP                              ; 0049c57c
    FNSTSW AX                           ; 0049c57e
    SAHF                                ; 0049c580
    JNC 0x0049c58d                      ; 0049c581
        ;   XREF to: 0049c58d (CONDITIONAL_JUMP)  ; LAB_0049c58d
    PUSH EBX                            ; 0049c583
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c584 | g_FireballPool[0].field60_0x3c | g_FireballPool[1].field60_0x3c
    CALL dword ptr [EAX + 0x4]          ; 0049c587
    ADD ESP,0x4                         ; 0049c58a
    ADD EBX,0xa4                        ; 0049c58d
        ;   Label: LAB_0049c58d
    CMP EBX,ESI                         ; 0049c593
    JNZ 0x0049c577                      ; 0049c595
        ;   XREF to: 0049c577 (CONDITIONAL_JUMP)  ; LAB_0049c577
    MOV EBX,0x1c93cd8                   ; 0049c597
    LEA ESI,[EBX + 0x1400]              ; 0049c59c
    FLD float ptr [EBX + 0x24]          ; 0049c5a2 | g_RockPool[0].field36_0x24 | g_RockPool[1].field36_0x24
        ;   Label: LAB_0049c5a2
    FLDZ                                ; 0049c5a5
    FCOMPP                              ; 0049c5a7
    FNSTSW AX                           ; 0049c5a9
    SAHF                                ; 0049c5ab
    JNC 0x0049c5b8                      ; 0049c5ac
        ;   XREF to: 0049c5b8 (CONDITIONAL_JUMP)  ; LAB_0049c5b8
    PUSH EBX                            ; 0049c5ae
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c5af | g_RockPool[0].field60_0x3c | g_RockPool[1].field60_0x3c
    CALL dword ptr [EAX + 0x4]          ; 0049c5b2
    ADD ESP,0x4                         ; 0049c5b5
    ADD EBX,0x50                        ; 0049c5b8
        ;   Label: LAB_0049c5b8
    CMP EBX,ESI                         ; 0049c5bb
    JNZ 0x0049c5a2                      ; 0049c5bd
        ;   XREF to: 0049c5a2 (CONDITIONAL_JUMP)  ; LAB_0049c5a2
    MOV EBX,0x1c950dc                   ; 0049c5bf
    LEA ESI,[EBX + 0x1500]              ; 0049c5c4
    FLD float ptr [EBX + 0x24]          ; 0049c5ca | CLeaf_ARRAY_01c950dc[0].field36_0x24 | CLeaf_ARRAY_01c950dc[1].field36_0x24
        ;   Label: LAB_0049c5ca
    FLDZ                                ; 0049c5cd
    FCOMPP                              ; 0049c5cf
    FNSTSW AX                           ; 0049c5d1
    SAHF                                ; 0049c5d3
    JNC 0x0049c5e0                      ; 0049c5d4
        ;   XREF to: 0049c5e0 (CONDITIONAL_JUMP)  ; LAB_0049c5e0
    PUSH EBX                            ; 0049c5d6
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c5d7 | CLeaf_ARRAY_01c950dc[0].field60_0x3c | CLeaf_ARRAY_01c950dc[1].field60_0x3c
    CALL dword ptr [EAX + 0x4]          ; 0049c5da
    ADD ESP,0x4                         ; 0049c5dd
    ADD EBX,0x54                        ; 0049c5e0
        ;   Label: LAB_0049c5e0
    CMP EBX,ESI                         ; 0049c5e3
    JNZ 0x0049c5ca                      ; 0049c5e5
        ;   XREF to: 0049c5ca (CONDITIONAL_JUMP)  ; LAB_0049c5ca
    MOV EBX,0x1c848f8                   ; 0049c5e7
    LEA ESI,[EBX + 0x1700]              ; 0049c5ec
    FLD float ptr [EBX + 0x24]          ; 0049c5f2 | CFirefly_ARRAY_01c848f8[0].field36_0x24 | CFirefly_ARRAY_01c848f8[1].field36_0x24
        ;   Label: LAB_0049c5f2
    FLDZ                                ; 0049c5f5
    FCOMPP                              ; 0049c5f7
    FNSTSW AX                           ; 0049c5f9
    SAHF                                ; 0049c5fb
    JNC 0x0049c608                      ; 0049c5fc
        ;   XREF to: 0049c608 (CONDITIONAL_JUMP)  ; LAB_0049c608
    PUSH EBX                            ; 0049c5fe
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c5ff | CFirefly_ARRAY_01c848f8[0].field60_0x3c | CFirefly_ARRAY_01c848f8[1].field60_0x3c
    CALL dword ptr [EAX + 0x4]          ; 0049c602
    ADD ESP,0x4                         ; 0049c605
    ADD EBX,0x5c                        ; 0049c608
        ;   Label: LAB_0049c608
    CMP EBX,ESI                         ; 0049c60b
    JNZ 0x0049c5f2                      ; 0049c60d
        ;   XREF to: 0049c5f2 (CONDITIONAL_JUMP)  ; LAB_0049c5f2
    MOV EAX,[0x01c558e0]                ; 0049c60f | DAT_01c558e0
    XOR EBX,ESI                         ; 0049c614
    TEST EAX,EAX                        ; 0049c616
    JLE 0x0049c640                      ; 0049c618
        ;   XREF to: 0049c640 (CONDITIONAL_JUMP)  ; LAB_0049c640
    MOV ESI,0x1c558e8                   ; 0049c61a
    PUSH ESI                            ; 0049c61f
        ;   Label: LAB_0049c61f
    CALL core_fire.cpp_FUN_00493cf0     ; 0049c620
        ;   XREF to: 00493cf0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_00493cf0()
    INC EBX                             ; 0049c625
    MOV EDX,dword ptr [0x01c558e0]      ; 0049c626 | DAT_01c558e0
    ADD ESP,0x4                         ; 0049c62c
    ADD ESI,0x3c                        ; 0049c62f
    CMP EBX,EDX                         ; 0049c632
    JL 0x0049c61f                       ; 0049c634
        ;   XREF to: 0049c61f (CONDITIONAL_JUMP)  ; LAB_0049c61f
    LEA EAX,[EAX]                       ; 0049c636
    LEA EDX,[EDX]                       ; 0049c63c
    MOV EBX,0x1c975e4                   ; 0049c640
        ;   Label: LAB_0049c640
    LEA ESI,[EBX + 0x118]               ; 0049c645
    PUSH EBX                            ; 0049c64b | DAT_01c97600
        ;   Label: LAB_0049c64b
    CALL core_fire.cpp_CExplosion_process_FUN_00498e80 ; 0049c64c
        ;   XREF to: 00498e80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CExplosion_process_FUN_00498e80(CExplosion * this_ptr)
    ADD EBX,0x1c                        ; 0049c651
    ADD ESP,0x4                         ; 0049c654
    CMP EBX,ESI                         ; 0049c657
    JNZ 0x0049c64b                      ; 0049c659
        ;   XREF to: 0049c64b (CONDITIONAL_JUMP)  ; LAB_0049c64b
    MOV EBX,0x1c97700                   ; 0049c65b
    LEA ESI,[EBX + 0x4dd0]              ; 0049c660
    PUSH EBX                            ; 0049c666
        ;   Label: LAB_0049c666
    CALL core_fire.cpp_CToss_process_FUN_004993f0 ; 0049c667
        ;   XREF to: 004993f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_process_FUN_004993f0(CToss * this_ptr)
    ADD EBX,0x3e4                       ; 0049c66c
    ADD ESP,0x4                         ; 0049c672
    CMP EBX,ESI                         ; 0049c675
    JNZ 0x0049c666                      ; 0049c677
        ;   XREF to: 0049c666 (CONDITIONAL_JUMP)  ; LAB_0049c666
    MOV EBX,0x1c9c4d4                   ; 0049c679
    LEA ESI,[EBX + 0x8c0]               ; 0049c67e
    PUSH EBX                            ; 0049c684
        ;   Label: LAB_0049c684
    CALL core_fire.cpp_CCrater_process_FUN_00499930 ; 0049c685
        ;   XREF to: 00499930 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_process_FUN_00499930(CCrater * this_ptr)
    ADD EBX,0x70                        ; 0049c68a
    ADD ESP,0x4                         ; 0049c68d
    CMP EBX,ESI                         ; 0049c690
    JNZ 0x0049c684                      ; 0049c692
        ;   XREF to: 0049c684 (CONDITIONAL_JUMP)  ; LAB_0049c684
    MOV EBX,0x1c9cd98                   ; 0049c694
    XOR ESI,ESI                         ; 0049c699
    LEA EDI,[EBX + 0x4650]              ; 0049c69b
    TEST dword ptr [EBX],0x7fffffff     ; 0049c6a1 | DAT_01c9cd98 | DAT_01c9cdbc
        ;   Label: LAB_0049c6a1
    JZ 0x0049c6c0                       ; 0049c6a7
        ;   XREF to: 0049c6c0 (CONDITIONAL_JUMP)  ; LAB_0049c6c0
    TEST ESI,ESI                        ; 0049c6a9
    JNZ 0x0049c6b7                      ; 0049c6ab
        ;   XREF to: 0049c6b7 (CONDITIONAL_JUMP)  ; LAB_0049c6b7
    CALL core_fire.cpp_initProcess_FUN_00499ee0 ; 0049c6ad
        ;   XREF to: 00499ee0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_initProcess_FUN_00499ee0()
    MOV ESI,0x1                         ; 0049c6b2
    PUSH EBX                            ; 0049c6b7 | DAT_01c9cd98 | DAT_01c9cdbc
        ;   Label: LAB_0049c6b7
    CALL core_fire.cpp_CGunFlame_process_FUN_0049a3a0 ; 0049c6b8
        ;   XREF to: 0049a3a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_process_FUN_0049a3a0(CGunFlame * this_ptr)
    ADD ESP,0x4                         ; 0049c6bd
    ADD EBX,0x24                        ; 0049c6c0
        ;   Label: LAB_0049c6c0
    CMP EBX,EDI                         ; 0049c6c3
    JNZ 0x0049c6a1                      ; 0049c6c5
        ;   XREF to: 0049c6a1 (CONDITIONAL_JUMP)  ; LAB_0049c6a1
    MOV EBX,0x1ca13ec                   ; 0049c6c7
    LEA ESI,[EBX + 0x1b8]               ; 0049c6cc
    PUSH EBX                            ; 0049c6d2
        ;   Label: LAB_0049c6d2
    CALL core_fire.cpp_CLightningBolt_process_FUN_0049ab90 ; 0049c6d3
        ;   XREF to: 0049ab90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_process_FUN_0049ab90(CLightningBolt * this_ptr)
    ADD EBX,0x2c                        ; 0049c6d8
    ADD ESP,0x4                         ; 0049c6db
    CMP EBX,ESI                         ; 0049c6de
    JNZ 0x0049c6d2                      ; 0049c6e0
        ;   XREF to: 0049c6d2 (CONDITIONAL_JUMP)  ; LAB_0049c6d2
    MOV EBX,0x1ca15a8                   ; 0049c6e2
    LEA ESI,[EBX + 0xe10]               ; 0049c6e7
    PUSH EBX                            ; 0049c6ed
        ;   Label: LAB_0049c6ed
    CALL core_fire.cpp_CTrail_process_FUN_0049b330 ; 0049c6ee
        ;   XREF to: 0049b330 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_process_FUN_0049b330(CTrail * this_ptr)
    ADD EBX,0x24                        ; 0049c6f3
    ADD ESP,0x4                         ; 0049c6f6
    CMP EBX,ESI                         ; 0049c6f9
    JNZ 0x0049c6ed                      ; 0049c6fb
        ;   XREF to: 0049c6ed (CONDITIONAL_JUMP)  ; LAB_0049c6ed
    MOV EBX,0x1ca23bc                   ; 0049c6fd
    LEA ESI,[EBX + 0x12c0]              ; 0049c702
    PUSH EBX                            ; 0049c708
        ;   Label: LAB_0049c708
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c709 | g_ShellPool[0].field60_0x3c | g_ShellPool[1].field60_0x3c
    CALL dword ptr [EAX + 0x4]          ; 0049c70c
    ADD EBX,0x60                        ; 0049c70f
    ADD ESP,0x4                         ; 0049c712
    CMP EBX,ESI                         ; 0049c715
    JNZ 0x0049c708                      ; 0049c717
        ;   XREF to: 0049c708 (CONDITIONAL_JUMP)  ; LAB_0049c708
    MOV EBX,0x1ca3680                   ; 0049c719
    LEA ESI,[EBX + 0x4000]              ; 0049c71e
    FLD float ptr [EBX + 0x24]          ; 0049c724 | g_PopcornPool[0].field36_0x24 | g_PopcornPool[1].field36_0x24
        ;   Label: LAB_0049c724
    FLDZ                                ; 0049c727
    FCOMPP                              ; 0049c729
    FNSTSW AX                           ; 0049c72b
    SAHF                                ; 0049c72d
    JNC 0x0049c73a                      ; 0049c72e
        ;   XREF to: 0049c73a (CONDITIONAL_JUMP)  ; LAB_0049c73a
    PUSH EBX                            ; 0049c730
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c731 | g_PopcornPool[0].field60_0x3c | g_PopcornPool[1].field60_0x3c
    CALL dword ptr [EAX + 0x4]          ; 0049c734
    ADD ESP,0x4                         ; 0049c737
    ADD EBX,0x40                        ; 0049c73a
        ;   Label: LAB_0049c73a
    CMP EBX,ESI                         ; 0049c73d
    JNZ 0x0049c724                      ; 0049c73f
        ;   XREF to: 0049c724 (CONDITIONAL_JUMP)  ; LAB_0049c724
    MOV EBX,0x1ca7684                   ; 0049c741
    LEA ESI,[EBX + 0x4000]              ; 0049c746
    FLD float ptr [EBX + 0x24]          ; 0049c74c | g_RainDropPool[0].field36_0x24 | g_RainDropPool[1].field36_0x24
        ;   Label: LAB_0049c74c
    FLDZ                                ; 0049c74f
    FCOMPP                              ; 0049c751
    FNSTSW AX                           ; 0049c753
    SAHF                                ; 0049c755
    JNC 0x0049c762                      ; 0049c756
        ;   XREF to: 0049c762 (CONDITIONAL_JUMP)  ; LAB_0049c762
    PUSH EBX                            ; 0049c758
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c759 | g_RainDropPool[0].field60_0x3c | g_RainDropPool[1].field60_0x3c
    CALL dword ptr [EAX + 0x4]          ; 0049c75c
    ADD ESP,0x4                         ; 0049c75f
    ADD EBX,0x40                        ; 0049c762
        ;   Label: LAB_0049c762
    CMP EBX,ESI                         ; 0049c765
    JNZ 0x0049c74c                      ; 0049c767
        ;   XREF to: 0049c74c (CONDITIONAL_JUMP)  ; LAB_0049c74c
    MOV ESP,EBP                         ; 0049c769
    POP EBP                             ; 0049c76b
    POP EDI                             ; 0049c76c
    POP ESI                             ; 0049c76d
    POP EBX                             ; 0049c76e
    RET                                 ; 0049c76f
    PUSH EBX                            ; 0049c770 | DAT_01c3f90c
        ;   Label: LAB_0049c770
    CALL core_fire.cpp_FUN_004935b0     ; 0049c771
        ;   XREF to: 004935b0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004935b0()
    ADD ESP,0x4                         ; 0049c776
    JMP 0x0049c45b                      ; 0049c779
        ;   XREF to: 0049c45b (UNCONDITIONAL_JUMP)  ; LAB_0049c45b

