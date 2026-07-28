; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_render_FUN_0048a650(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 at 00509952
;   core_set.cpp_FUN_00509a80 at 00509df1
;   core_set.cpp_FUN_0050a260 at 0050a466
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c0a140
;   undefined4 DAT_01c0a16c
;   undefined4 DAT_01c20140
;   undefined4 DAT_01c23d48
;   undefined4 DAT_01c49d6c
;   undefined4 DAT_01c49d88
;   undefined4 DAT_01c49db8
;   undefined4 DAT_01c49dd4
;   undefined4 DAT_01c4e958
;   undefined4 DAT_01c4e9b4
;   undefined4 DAT_01c4f0a4
;   undefined4 DAT_01c4f0c0
;   ... and 27 more
;
; Called Functions:
;   core_fire.cpp_CBulletHole_render_FUN_00482f50
;   core_fire.cpp_CBulletHole_setupRenderState_FUN_00482ed0
;   core_fire.cpp_CBulletTrail_render_FUN_004856c0
;   core_fire.cpp_CExplosion_render_FUN_00486fe0
;   core_fire.cpp_CFireball_setupRenderState_FUN_004842a0
;   core_fire.cpp_CGunFlame_render_FUN_00488580
;   core_fire.cpp_CLaserBeam_render_FUN_00485a90
;   core_fire.cpp_CLightningBolt_render_FUN_00488bf0
;   core_fire.cpp_CMuzzleFlash_render_FUN_00484f00
;   core_fire.cpp_CSmokeParticle_render_FUN_00482950
;   core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00482680
;   core_fire.cpp_CSpark_setupRenderState_FUN_004837a0
;   core_fire.cpp_CStake_render_FUN_004835d0
;   core_fire.cpp_CToss_render_FUN_00487630
;   core_fire.cpp_CTrail_render_FUN_00489360
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a650
        ;   Label: core_fire.cpp_CFireEffect_render_FUN_0048a650
    PUSH ESI                            ; 0048a651
    PUSH EDI                            ; 0048a652
    PUSH EBP                            ; 0048a653
    MOV EBP,ESP                         ; 0048a654
    AND ESP,0xfffffff8                  ; 0048a656
    MOV EDX,dword ptr [0x01c23d48]      ; 0048a659 | DAT_01c23d48
    XOR ESI,ESI                         ; 0048a65f
    TEST EDX,EDX                        ; 0048a661
    JLE 0x0048a685                      ; 0048a663
        ;   XREF to: 0048a685 (CONDITIONAL_JUMP)  ; LAB_0048a685
    XOR EBX,EBX                         ; 0048a665
    CMP dword ptr [EBX + 0x1c23d50],0x0 ; 0048a667
        ;   Label: LAB_0048a667
    JZ 0x0048a953                       ; 0048a66e
        ;   XREF to: 0048a953 (CONDITIONAL_JUMP)  ; LAB_0048a953
    MOV ECX,dword ptr [0x01c23d48]      ; 0048a674 | DAT_01c23d48
        ;   Label: LAB_0048a674
    INC ESI                             ; 0048a67a
    ADD EBX,0x260                       ; 0048a67b
    CMP ESI,ECX                         ; 0048a681
    JL 0x0048a667                       ; 0048a683
        ;   XREF to: 0048a667 (CONDITIONAL_JUMP)  ; LAB_0048a667
    MOV EBX,0x1c5b500                   ; 0048a685
        ;   Label: LAB_0048a685
    LEA ESI,[EBX + 0x1200]              ; 0048a68a
    FLD float ptr [EBX + 0x18]          ; 0048a690 | DAT_01c5b518 | DAT_01c5b560
        ;   Label: LAB_0048a690
    FLDZ                                ; 0048a693
    FCOMPP                              ; 0048a695
    FNSTSW AX                           ; 0048a697
    SAHF                                ; 0048a699
    JNC 0x0048a6a6                      ; 0048a69a
        ;   XREF to: 0048a6a6 (CONDITIONAL_JUMP)  ; LAB_0048a6a6
    PUSH EBX                            ; 0048a69c
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a69d | DAT_01c5b534 | DAT_01c5b57c
    CALL dword ptr [EAX + 0x8]          ; 0048a6a0
    ADD ESP,0x4                         ; 0048a6a3
    ADD EBX,0x48                        ; 0048a6a6
        ;   Label: LAB_0048a6a6
    CMP EBX,ESI                         ; 0048a6a9
    JNZ 0x0048a690                      ; 0048a6ab
        ;   XREF to: 0048a690 (CONDITIONAL_JUMP)  ; LAB_0048a690
    PUSH 0x1c58dfc                      ; 0048a6ad
    MOV EBX,0x1c58dfc                   ; 0048a6b2
    CALL core_fire.cpp_CFireball_setupRenderState_FUN_004842a0 ; 0048a6b7
        ;   XREF to: 004842a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireball_setupRenderState_FUN_004842a0(CFireball * this_ptr)
    ADD ESP,0x4                         ; 0048a6bc
    LEA ESI,[EBX + 0x2700]              ; 0048a6bf
    FLD float ptr [EBX + 0x18]          ; 0048a6c5 | DAT_01c58e14 | DAT_01c58eb0
        ;   Label: LAB_0048a6c5
    FLDZ                                ; 0048a6c8
    FCOMPP                              ; 0048a6ca
    FNSTSW AX                           ; 0048a6cc
    SAHF                                ; 0048a6ce
    JNC 0x0048a6db                      ; 0048a6cf
        ;   XREF to: 0048a6db (CONDITIONAL_JUMP)  ; LAB_0048a6db
    PUSH EBX                            ; 0048a6d1
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a6d2 | DAT_01c58e30 | DAT_01c58ecc
    CALL dword ptr [EAX + 0x8]          ; 0048a6d5
    ADD ESP,0x4                         ; 0048a6d8
    ADD EBX,0x9c                        ; 0048a6db
        ;   Label: LAB_0048a6db
    CMP EBX,ESI                         ; 0048a6e1
    JNZ 0x0048a6c5                      ; 0048a6e3
        ;   XREF to: 0048a6c5 (CONDITIONAL_JUMP)  ; LAB_0048a6c5
    MOV EBX,0x1c684e0                   ; 0048a6e5
    LEA ESI,[EBX + 0x1130]              ; 0048a6ea
    PUSH EBX                            ; 0048a6f0
        ;   Label: LAB_0048a6f0
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a6f1 | DAT_01c68514 | DAT_01c6856c
    CALL dword ptr [EAX + 0x8]          ; 0048a6f4
    ADD EBX,0x58                        ; 0048a6f7
    ADD ESP,0x4                         ; 0048a6fa
    CMP EBX,ESI                         ; 0048a6fd
    JNZ 0x0048a6f0                      ; 0048a6ff
        ;   XREF to: 0048a6f0 (CONDITIONAL_JUMP)  ; LAB_0048a6f0
    MOV EAX,[0x005ae704]                ; 0048a701 | DAT_005ae704
    PUSH EAX                            ; 0048a706 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0048a707
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0048a70c
    TEST EAX,EAX                        ; 0048a70f
    JNZ 0x0048a94c                      ; 0048a711
        ;   XREF to: 0048a94c (CONDITIONAL_JUMP)  ; LAB_0048a94c
    PUSH EAX                            ; 0048a717
    PUSH EAX                            ; 0048a718
    PUSH EAX                            ; 0048a719
    PUSH EAX                            ; 0048a71a
    PUSH EAX                            ; 0048a71b
    MOV EDX,dword ptr [0x005be368]      ; 0048a71c | DAT_005be368
    PUSH EDX                            ; 0048a722 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0 ; 0048a723
        ;   XREF to: 0050adc0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 0048a728
    PUSH 0x1c20148                      ; 0048a72b
    XOR ESI,ESI                         ; 0048a730
    CALL core_fire.cpp_CBulletHole_setupRenderState_FUN_00482ed0 ; 0048a732
        ;   XREF to: 00482ed0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CBulletHole_setupRenderState_FUN_00482ed0()
    MOV ECX,dword ptr [0x01c20140]      ; 0048a737 | DAT_01c20140
    ADD ESP,0x4                         ; 0048a73d
    TEST ECX,ECX                        ; 0048a740
    JLE 0x0048a76d                      ; 0048a742
        ;   XREF to: 0048a76d (CONDITIONAL_JUMP)  ; LAB_0048a76d
    XOR EBX,EBX                         ; 0048a744
    CMP dword ptr [EBX + 0x1c20158],0x0 ; 0048a746
        ;   Label: LAB_0048a746
    JZ 0x0048a75f                       ; 0048a74d
        ;   XREF to: 0048a75f (CONDITIONAL_JUMP)  ; LAB_0048a75f
    MOV EAX,0x1c20148                   ; 0048a74f
    ADD EAX,EBX                         ; 0048a754
    PUSH EAX                            ; 0048a756
    CALL core_fire.cpp_CBulletHole_render_FUN_00482f50 ; 0048a757
        ;   XREF to: 00482f50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_00482f50(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 0048a75c
    MOV EDI,dword ptr [0x01c20140]      ; 0048a75f | DAT_01c20140
        ;   Label: LAB_0048a75f
    INC ESI                             ; 0048a765
    ADD EBX,0x3c                        ; 0048a766
    CMP ESI,EDI                         ; 0048a769
    JL 0x0048a746                       ; 0048a76b
        ;   XREF to: 0048a746 (CONDITIONAL_JUMP)  ; LAB_0048a746
    PUSH 0x1c0a140                      ; 0048a76d | DAT_01c0a140
        ;   Label: LAB_0048a76d
    MOV EBX,0x1c0a140                   ; 0048a772
    CALL core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00482680 ; 0048a777
        ;   XREF to: 00482680 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00482680(CSmokeParticle * this_ptr)
    ADD ESP,0x4                         ; 0048a77c
    LEA ESI,[EBX + 0x16000]             ; 0048a77f
    MOV EAX,dword ptr [EBX]             ; 0048a785 | DAT_01c0a140 | DAT_01c0a16c
        ;   Label: LAB_0048a785
    TEST EAX,EAX                        ; 0048a787
    JZ 0x0048a794                       ; 0048a789
        ;   XREF to: 0048a794 (CONDITIONAL_JUMP)  ; LAB_0048a794
    PUSH EBX                            ; 0048a78b | DAT_01c0a140 | DAT_01c0a16c
    CALL core_fire.cpp_CSmokeParticle_render_FUN_00482950 ; 0048a78c
        ;   XREF to: 00482950 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_render_FUN_00482950(CSmokeParticle * this_ptr)
    ADD ESP,0x4                         ; 0048a791
    ADD EBX,0x2c                        ; 0048a794
        ;   Label: LAB_0048a794
    CMP EBX,ESI                         ; 0048a797
    JNZ 0x0048a785                      ; 0048a799
        ;   XREF to: 0048a785 (CONDITIONAL_JUMP)  ; LAB_0048a785
    MOV EBX,0x1c4e958                   ; 0048a79b
    LEA ESI,[EBX + 0x730]               ; 0048a7a0
    MOV EAX,dword ptr [EBX]             ; 0048a7a6 | DAT_01c4e958 | DAT_01c4e9b4
        ;   Label: LAB_0048a7a6
    TEST EAX,EAX                        ; 0048a7a8
    JZ 0x0048a7b5                       ; 0048a7aa
        ;   XREF to: 0048a7b5 (CONDITIONAL_JUMP)  ; LAB_0048a7b5
    PUSH EBX                            ; 0048a7ac | DAT_01c4e958 | DAT_01c4e9b4
    CALL core_fire.cpp_CMuzzleFlash_render_FUN_00484f00 ; 0048a7ad
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CMuzzleFlash_render_FUN_00484f00(CMuzzleFlash * this_ptr)
    ADD ESP,0x4                         ; 0048a7b2
    ADD EBX,0x5c                        ; 0048a7b5
        ;   Label: LAB_0048a7b5
    CMP EBX,ESI                         ; 0048a7b8
    JNZ 0x0048a7a6                      ; 0048a7ba
        ;   XREF to: 0048a7a6 (CONDITIONAL_JUMP)  ; LAB_0048a7a6
    MOV EDX,dword ptr [0x01c5c700]      ; 0048a7bc | DAT_01c5c700
    XOR EBX,ESI                         ; 0048a7c2
    TEST EDX,EDX                        ; 0048a7c4
    JLE 0x0048a7f0                      ; 0048a7c6
        ;   XREF to: 0048a7f0 (CONDITIONAL_JUMP)  ; LAB_0048a7f0
    MOV ESI,0x1c5c704                   ; 0048a7c8
    PUSH ESI                            ; 0048a7cd
        ;   Label: LAB_0048a7cd
    CALL core_fire.cpp_CLaserBeam_render_FUN_00485a90 ; 0048a7ce
        ;   XREF to: 00485a90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLaserBeam_render_FUN_00485a90(CLaserBeam * this_ptr)
    INC EBX                             ; 0048a7d3
    MOV ECX,dword ptr [0x01c5c700]      ; 0048a7d4 | DAT_01c5c700
    ADD ESP,0x4                         ; 0048a7da
    ADD ESI,0x40                        ; 0048a7dd
    CMP EBX,ECX                         ; 0048a7e0
    JL 0x0048a7cd                       ; 0048a7e2
        ;   XREF to: 0048a7cd (CONDITIONAL_JUMP)  ; LAB_0048a7cd
    LEA EAX,[EAX]                       ; 0048a7e4
    LEA EDX,[EDX]                       ; 0048a7ea
    PUSH 0x1c49d54                      ; 0048a7f0
        ;   Label: LAB_0048a7f0
    MOV EBX,0x1c49d54                   ; 0048a7f5
    CALL core_fire.cpp_CSpark_setupRenderState_FUN_004837a0 ; 0048a7fa
        ;   XREF to: 004837a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSpark_setupRenderState_FUN_004837a0(CSpark * this_ptr)
    ADD ESP,0x4                         ; 0048a7ff
    LEA ESI,[EBX + 0x4c00]              ; 0048a802
    FLD float ptr [EBX + 0x18]          ; 0048a808 | DAT_01c49d6c | DAT_01c49db8
        ;   Label: LAB_0048a808
    FLDZ                                ; 0048a80b
    FCOMPP                              ; 0048a80d
    FNSTSW AX                           ; 0048a80f
    SAHF                                ; 0048a811
    JNC 0x0048a81e                      ; 0048a812
        ;   XREF to: 0048a81e (CONDITIONAL_JUMP)  ; LAB_0048a81e
    PUSH EBX                            ; 0048a814
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a815 | DAT_01c49d88 | DAT_01c49dd4
    CALL dword ptr [EAX + 0x8]          ; 0048a818
    ADD ESP,0x4                         ; 0048a81b
    ADD EBX,0x4c                        ; 0048a81e
        ;   Label: LAB_0048a81e
    CMP EBX,ESI                         ; 0048a821
    JNZ 0x0048a808                      ; 0048a823
        ;   XREF to: 0048a808 (CONDITIONAL_JUMP)  ; LAB_0048a808
    MOV EBX,0x1c4f08c                   ; 0048a825
    LEA ESI,[EBX + 0x9c00]              ; 0048a82a
    FLD float ptr [EBX + 0x18]          ; 0048a830 | DAT_01c4f0a4 | DAT_01c4f140
        ;   Label: LAB_0048a830
    FLDZ                                ; 0048a833
    FCOMPP                              ; 0048a835
    FNSTSW AX                           ; 0048a837
    SAHF                                ; 0048a839
    JNC 0x0048a846                      ; 0048a83a
        ;   XREF to: 0048a846 (CONDITIONAL_JUMP)  ; LAB_0048a846
    PUSH EBX                            ; 0048a83c
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a83d | DAT_01c4f0c0 | DAT_01c4f15c
    CALL dword ptr [EAX + 0x8]          ; 0048a840
    ADD ESP,0x4                         ; 0048a843
    ADD EBX,0x9c                        ; 0048a846
        ;   Label: LAB_0048a846
    CMP EBX,ESI                         ; 0048a84c
    JNZ 0x0048a830                      ; 0048a84e
        ;   XREF to: 0048a830 (CONDITIONAL_JUMP)  ; LAB_0048a830
    MOV EBX,0x1c58c90                   ; 0048a850
    LEA ESI,[EBX + 0x168]               ; 0048a855
    MOV EAX,dword ptr [EBX + 0x20]      ; 0048a85b | DAT_01c58cb0 | DAT_01c58cd4
        ;   Label: LAB_0048a85b
    TEST EAX,EAX                        ; 0048a85e
    JZ 0x0048a86b                       ; 0048a860
        ;   XREF to: 0048a86b (CONDITIONAL_JUMP)  ; LAB_0048a86b
    PUSH EBX                            ; 0048a862
    CALL core_fire.cpp_CBulletTrail_render_FUN_004856c0 ; 0048a863
        ;   XREF to: 004856c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_render_FUN_004856c0(CBulletTrail * this_ptr)
    ADD ESP,0x4                         ; 0048a868
    ADD EBX,0x24                        ; 0048a86b
        ;   Label: LAB_0048a86b
    CMP EBX,ESI                         ; 0048a86e
    JNZ 0x0048a85b                      ; 0048a870
        ;   XREF to: 0048a85b (CONDITIONAL_JUMP)  ; LAB_0048a85b
    MOV EBX,0x1c5d708                   ; 0048a872
    LEA ESI,[EBX + 0x118]               ; 0048a877
    PUSH EBX                            ; 0048a87d | DAT_01c5d724
        ;   Label: LAB_0048a87d
    CALL core_fire.cpp_CExplosion_render_FUN_00486fe0 ; 0048a87e
        ;   XREF to: 00486fe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CExplosion_render_FUN_00486fe0(CExplosion * this_ptr)
    ADD EBX,0x1c                        ; 0048a883
    ADD ESP,0x4                         ; 0048a886
    CMP EBX,ESI                         ; 0048a889
    JNZ 0x0048a87d                      ; 0048a88b
        ;   XREF to: 0048a87d (CONDITIONAL_JUMP)  ; LAB_0048a87d
    MOV EBX,0x1c5d824                   ; 0048a88d
    LEA ESI,[EBX + 0x4dd0]              ; 0048a892
    PUSH EBX                            ; 0048a898
        ;   Label: LAB_0048a898
    CALL core_fire.cpp_CToss_render_FUN_00487630 ; 0048a899
        ;   XREF to: 00487630 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_render_FUN_00487630(CToss * this_ptr)
    ADD EBX,0x3e4                       ; 0048a89e
    ADD ESP,0x4                         ; 0048a8a4
    CMP EBX,ESI                         ; 0048a8a7
    JNZ 0x0048a898                      ; 0048a8a9
        ;   XREF to: 0048a898 (CONDITIONAL_JUMP)  ; LAB_0048a898
    MOV EBX,0x1c62ebc                   ; 0048a8ab
    LEA ESI,[EBX + 0x4650]              ; 0048a8b0
    PUSH EBX                            ; 0048a8b6 | DAT_01c62ebc | DAT_01c62ee0
        ;   Label: LAB_0048a8b6
    CALL core_fire.cpp_CGunFlame_render_FUN_00488580 ; 0048a8b7
        ;   XREF to: 00488580 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_render_FUN_00488580(CGunFlame * this_ptr)
    ADD EBX,0x24                        ; 0048a8bc
    ADD ESP,0x4                         ; 0048a8bf
    CMP EBX,ESI                         ; 0048a8c2
    JNZ 0x0048a8b6                      ; 0048a8c4
        ;   XREF to: 0048a8b6 (CONDITIONAL_JUMP)  ; LAB_0048a8b6
    MOV EBX,0x1c67510                   ; 0048a8c6
    LEA ESI,[EBX + 0x1b8]               ; 0048a8cb
    PUSH EBX                            ; 0048a8d1
        ;   Label: LAB_0048a8d1
    CALL core_fire.cpp_CLightningBolt_render_FUN_00488bf0 ; 0048a8d2
        ;   XREF to: 00488bf0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_render_FUN_00488bf0(CLightningBolt * this_ptr)
    ADD EBX,0x2c                        ; 0048a8d7
    ADD ESP,0x4                         ; 0048a8da
    CMP EBX,ESI                         ; 0048a8dd
    JNZ 0x0048a8d1                      ; 0048a8df
        ;   XREF to: 0048a8d1 (CONDITIONAL_JUMP)  ; LAB_0048a8d1
    MOV EBX,0x1c676cc                   ; 0048a8e1
    LEA ESI,[EBX + 0xe10]               ; 0048a8e6
    PUSH EBX                            ; 0048a8ec
        ;   Label: LAB_0048a8ec
    CALL core_fire.cpp_CTrail_render_FUN_00489360 ; 0048a8ed
        ;   XREF to: 00489360 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_render_FUN_00489360(CTrail * this_ptr)
    ADD EBX,0x24                        ; 0048a8f2
    ADD ESP,0x4                         ; 0048a8f5
    CMP EBX,ESI                         ; 0048a8f8
    JNZ 0x0048a8ec                      ; 0048a8fa
        ;   XREF to: 0048a8ec (CONDITIONAL_JUMP)  ; LAB_0048a8ec
    MOV EBX,0x1c69614                   ; 0048a8fc
    LEA ESI,[EBX + 0x3800]              ; 0048a901
    FLD float ptr [EBX + 0x18]          ; 0048a907 | DAT_01c6962c | DAT_01c69664
        ;   Label: LAB_0048a907
    FLDZ                                ; 0048a90a
    FCOMPP                              ; 0048a90c
    FNSTSW AX                           ; 0048a90e
    SAHF                                ; 0048a910
    JNC 0x0048a91d                      ; 0048a911
        ;   XREF to: 0048a91d (CONDITIONAL_JUMP)  ; LAB_0048a91d
    PUSH EBX                            ; 0048a913
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a914 | DAT_01c69648 | DAT_01c69680
    CALL dword ptr [EAX + 0x8]          ; 0048a917
    ADD ESP,0x4                         ; 0048a91a
    ADD EBX,0x38                        ; 0048a91d
        ;   Label: LAB_0048a91d
    CMP EBX,ESI                         ; 0048a920
    JNZ 0x0048a907                      ; 0048a922
        ;   XREF to: 0048a907 (CONDITIONAL_JUMP)  ; LAB_0048a907
    MOV EBX,0x1c6ce18                   ; 0048a924
    LEA ESI,[EBX + 0x3800]              ; 0048a929
    FLD float ptr [EBX + 0x18]          ; 0048a92f | DAT_01c6ce30 | DAT_01c6ce68
        ;   Label: LAB_0048a92f
    FLDZ                                ; 0048a932
    FCOMPP                              ; 0048a934
    FNSTSW AX                           ; 0048a936
    SAHF                                ; 0048a938
    JNC 0x0048a945                      ; 0048a939
        ;   XREF to: 0048a945 (CONDITIONAL_JUMP)  ; LAB_0048a945
    PUSH EBX                            ; 0048a93b
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048a93c | DAT_01c6ce4c | DAT_01c6ce84
    CALL dword ptr [EAX + 0x8]          ; 0048a93f
    ADD ESP,0x4                         ; 0048a942
    ADD EBX,0x38                        ; 0048a945
        ;   Label: LAB_0048a945
    CMP EBX,ESI                         ; 0048a948
    JNZ 0x0048a92f                      ; 0048a94a
        ;   XREF to: 0048a92f (CONDITIONAL_JUMP)  ; LAB_0048a92f
    MOV ESP,EBP                         ; 0048a94c
        ;   Label: LAB_0048a94c
    POP EBP                             ; 0048a94e
    POP EDI                             ; 0048a94f
    POP ESI                             ; 0048a950
    POP EBX                             ; 0048a951
    RET                                 ; 0048a952
    MOV EAX,0x1c23d50                   ; 0048a953
        ;   Label: LAB_0048a953
    ADD EAX,EBX                         ; 0048a958
    PUSH EAX                            ; 0048a95a
    CALL core_fire.cpp_CStake_render_FUN_004835d0 ; 0048a95b
        ;   XREF to: 004835d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_render_FUN_004835d0(CStake * this_ptr)
    ADD ESP,0x4                         ; 0048a960
    JMP 0x0048a674                      ; 0048a963
        ;   XREF to: 0048a674 (UNCONDITIONAL_JUMP)  ; LAB_0048a674

