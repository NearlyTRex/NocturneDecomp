; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_render_FUN_0049c780(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80 at 0052f172
;   core_set.cpp_FUN_0052f2a0 at 0052f651
;   core_set.cpp_FUN_0052fad0 at 0052fcf5
;   core_set.cpp_FUN_0052fea0 at 005300b6
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CSimpleParticleSystem* g_CSimpleParticleSystemPtr = 026687b0
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c3f8e0
;   undefined4 DAT_01c3f90c
;   undefined4 DAT_01c558e0
;   undefined4 DAT_01c594e8
;   undefined4 g_SparkPool[0].base.lifetime_remaining
;   undefined4 g_SparkPool[0].base.vtable
;   undefined4 g_SparkPool[1].base.lifetime_remaining
;   undefined4 g_SparkPool[1].base.vtable
;   undefined4 CFirefly_ARRAY_01c848f8[0].base.lifetime_remaining
;   undefined4 CFirefly_ARRAY_01c848f8[0].base.vtable
;   undefined4 CFirefly_ARRAY_01c848f8[1].base.lifetime_remaining
;   ... and 38 more
;
; Called Functions:
;   core_fire.cpp_CBulletHole_render_FUN_00493dd0
;   core_fire.cpp_CBulletHole_setupRenderState_FUN_00493d50
;   core_fire.cpp_CBulletTrail_render_FUN_00497350
;   core_fire.cpp_CExplosion_render_FUN_00498ed0
;   core_fire.cpp_CFireball_setupRenderState_FUN_00495bb0
;   core_fire.cpp_CFirefly_setupRenderState_FUN_00495020
;   core_fire.cpp_CGunFlame_render_FUN_0049a500
;   core_fire.cpp_CLaserBeam_render_FUN_00497800
;   core_fire.cpp_CLightningBolt_render_FUN_0049abd0
;   core_fire.cpp_CMuzzleFlash_render_FUN_00496a90
;   core_fire.cpp_CSmokeParticle_render_FUN_00493710
;   core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00493410
;   core_fire.cpp_CSpark_setupRenderState_FUN_00494670
;   core_fire.cpp_CStake_render_FUN_004944c0
;   core_fire.cpp_CToss_render_FUN_00499570
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c780
        ;   Label: core_fire.cpp_CFireEffect_render_FUN_0049c780
    PUSH ESI                            ; 0049c781
    PUSH EDI                            ; 0049c782
    PUSH EBP                            ; 0049c783
    MOV EBP,ESP                         ; 0049c784
    AND ESP,0xfffffff8                  ; 0049c786
    MOV EDX,dword ptr [0x01c594e8]      ; 0049c789 | DAT_01c594e8
    XOR ESI,ESI                         ; 0049c78f
    TEST EDX,EDX                        ; 0049c791
    JLE 0x0049c7b5                      ; 0049c793
        ;   XREF to: 0049c7b5 (CONDITIONAL_JUMP)  ; LAB_0049c7b5
    XOR EBX,EBX                         ; 0049c795
    CMP dword ptr [EBX + 0x1c594f0],0x0 ; 0049c797
        ;   Label: LAB_0049c797
    JZ 0x0049cb38                       ; 0049c79e
        ;   XREF to: 0049cb38 (CONDITIONAL_JUMP)  ; LAB_0049cb38
    MOV ECX,dword ptr [0x01c594e8]      ; 0049c7a4 | DAT_01c594e8
        ;   Label: LAB_0049c7a4
    INC ESI                             ; 0049c7aa
    ADD EBX,0x260                       ; 0049c7ab
    CMP ESI,ECX                         ; 0049c7b1
    JL 0x0049c797                       ; 0049c7b3
        ;   XREF to: 0049c797 (CONDITIONAL_JUMP)  ; LAB_0049c797
    MOV EBX,0x1c93cd8                   ; 0049c7b5
        ;   Label: LAB_0049c7b5
    LEA ESI,[EBX + 0x1400]              ; 0049c7ba
    FLD float ptr [EBX + 0x24]          ; 0049c7c0 | g_RockPool[0].base.lifetime_remaining | g_RockPool[1].base.lifetime_remaining
        ;   Label: LAB_0049c7c0
    FLDZ                                ; 0049c7c3
    FCOMPP                              ; 0049c7c5
    FNSTSW AX                           ; 0049c7c7
    SAHF                                ; 0049c7c9
    JNC 0x0049c7d6                      ; 0049c7ca
        ;   XREF to: 0049c7d6 (CONDITIONAL_JUMP)  ; LAB_0049c7d6
    PUSH EBX                            ; 0049c7cc
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c7cd | g_RockPool[0].base.vtable | g_RockPool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 0049c7d0
    ADD ESP,0x4                         ; 0049c7d3
    ADD EBX,0x50                        ; 0049c7d6
        ;   Label: LAB_0049c7d6
    CMP EBX,ESI                         ; 0049c7d9
    JNZ 0x0049c7c0                      ; 0049c7db
        ;   XREF to: 0049c7c0 (CONDITIONAL_JUMP)  ; LAB_0049c7c0
    MOV EBX,0x1c950dc                   ; 0049c7dd
    LEA ESI,[EBX + 0x1500]              ; 0049c7e2
    FLD float ptr [EBX + 0x24]          ; 0049c7e8 | CLeaf_ARRAY_01c950dc[0].base.lifetime_remaining | CLeaf_ARRAY_01c950dc[1].base.lifetime_remaining
        ;   Label: LAB_0049c7e8
    FLDZ                                ; 0049c7eb
    FCOMPP                              ; 0049c7ed
    FNSTSW AX                           ; 0049c7ef
    SAHF                                ; 0049c7f1
    JNC 0x0049c7fe                      ; 0049c7f2
        ;   XREF to: 0049c7fe (CONDITIONAL_JUMP)  ; LAB_0049c7fe
    PUSH EBX                            ; 0049c7f4
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c7f5 | CLeaf_ARRAY_01c950dc[0].base.vtable | CLeaf_ARRAY_01c950dc[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 0049c7f8
    ADD ESP,0x4                         ; 0049c7fb
    ADD EBX,0x54                        ; 0049c7fe
        ;   Label: LAB_0049c7fe
    CMP EBX,ESI                         ; 0049c801
    JNZ 0x0049c7e8                      ; 0049c803
        ;   XREF to: 0049c7e8 (CONDITIONAL_JUMP)  ; LAB_0049c7e8
    MOV EBX,0x1c848f8                   ; 0049c805
    LEA ESI,[EBX + 0x1700]              ; 0049c80a
    FLD float ptr [EBX + 0x24]          ; 0049c810 | CFirefly_ARRAY_01c848f8[0].base.lifetime_remaining | CFirefly_ARRAY_01c848f8[1].base.lifetime_remaining
        ;   Label: LAB_0049c810
    FLDZ                                ; 0049c813
    FCOMPP                              ; 0049c815
    FNSTSW AX                           ; 0049c817
    SAHF                                ; 0049c819
    JNC 0x0049c826                      ; 0049c81a
        ;   XREF to: 0049c826 (CONDITIONAL_JUMP)  ; LAB_0049c826
    PUSH EBX                            ; 0049c81c
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c81d | CFirefly_ARRAY_01c848f8[0].base.vtable | CFirefly_ARRAY_01c848f8[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 0049c820
    ADD ESP,0x4                         ; 0049c823
    ADD EBX,0x5c                        ; 0049c826
        ;   Label: LAB_0049c826
    CMP EBX,ESI                         ; 0049c829
    JNZ 0x0049c810                      ; 0049c82b
        ;   XREF to: 0049c810 (CONDITIONAL_JUMP)  ; LAB_0049c810
    PUSH 0x1c913d4                      ; 0049c82d
    MOV EBX,0x1c913d4                   ; 0049c832
    CALL core_fire.cpp_CFireball_setupRenderState_FUN_00495bb0 ; 0049c837
        ;   XREF to: 00495bb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireball_setupRenderState_FUN_00495bb0(CFireball * this_ptr)
    ADD ESP,0x4                         ; 0049c83c
    LEA ESI,[EBX + 0x2900]              ; 0049c83f
    FLD float ptr [EBX + 0x24]          ; 0049c845 | g_FireballPool[0].base.lifetime_remaining | g_FireballPool[1].base.lifetime_remaining
        ;   Label: LAB_0049c845
    FLDZ                                ; 0049c848
    FCOMPP                              ; 0049c84a
    FNSTSW AX                           ; 0049c84c
    SAHF                                ; 0049c84e
    JNC 0x0049c85b                      ; 0049c84f
        ;   XREF to: 0049c85b (CONDITIONAL_JUMP)  ; LAB_0049c85b
    PUSH EBX                            ; 0049c851
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c852 | g_FireballPool[0].base.vtable | g_FireballPool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 0049c855
    ADD ESP,0x4                         ; 0049c858
    ADD EBX,0xa4                        ; 0049c85b
        ;   Label: LAB_0049c85b
    CMP EBX,ESI                         ; 0049c861
    JNZ 0x0049c845                      ; 0049c863
        ;   XREF to: 0049c845 (CONDITIONAL_JUMP)  ; LAB_0049c845
    MOV EBX,0x1ca23bc                   ; 0049c865
    LEA ESI,[EBX + 0x12c0]              ; 0049c86a
    PUSH EBX                            ; 0049c870
        ;   Label: LAB_0049c870
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c871 | g_ShellPool[0].base.vtable | g_ShellPool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 0049c874
    ADD EBX,0x60                        ; 0049c877
    ADD ESP,0x4                         ; 0049c87a
    CMP EBX,ESI                         ; 0049c87d
    JNZ 0x0049c870                      ; 0049c87f
        ;   XREF to: 0049c870 (CONDITIONAL_JUMP)  ; LAB_0049c870
    MOV EAX,[0x0060b280]                ; 0049c881 | DAT_0060b280
    PUSH EAX                            ; 0049c886 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0049c887
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0049c88c
    TEST EAX,EAX                        ; 0049c88f
    JNZ 0x0049cb31                      ; 0049c891
        ;   XREF to: 0049cb31 (CONDITIONAL_JUMP)  ; LAB_0049cb31
    PUSH EAX                            ; 0049c897
    PUSH EAX                            ; 0049c898
    PUSH EAX                            ; 0049c899
    PUSH EAX                            ; 0049c89a
    PUSH EAX                            ; 0049c89b
    MOV EDX,dword ptr [0x0061b5a8]      ; 0049c89c | g_CDemonSetPtr
    PUSH EDX                            ; 0049c8a2 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980 ; 0049c8a3
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 0049c8a8
    PUSH 0x1c558e8                      ; 0049c8ab
    XOR ESI,ESI                         ; 0049c8b0
    CALL core_fire.cpp_CBulletHole_setupRenderState_FUN_00493d50 ; 0049c8b2
        ;   XREF to: 00493d50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_setupRenderState_FUN_00493d50(CBulletHole * this_ptr)
    MOV ECX,dword ptr [0x01c558e0]      ; 0049c8b7 | DAT_01c558e0
    ADD ESP,0x4                         ; 0049c8bd
    TEST ECX,ECX                        ; 0049c8c0
    JLE 0x0049c8ed                      ; 0049c8c2
        ;   XREF to: 0049c8ed (CONDITIONAL_JUMP)  ; LAB_0049c8ed
    XOR EBX,EBX                         ; 0049c8c4
    CMP dword ptr [EBX + 0x1c558f8],0x0 ; 0049c8c6
        ;   Label: LAB_0049c8c6
    JZ 0x0049c8df                       ; 0049c8cd
        ;   XREF to: 0049c8df (CONDITIONAL_JUMP)  ; LAB_0049c8df
    MOV EAX,0x1c558e8                   ; 0049c8cf
    ADD EAX,EBX                         ; 0049c8d4
    PUSH EAX                            ; 0049c8d6
    CALL core_fire.cpp_CBulletHole_render_FUN_00493dd0 ; 0049c8d7
        ;   XREF to: 00493dd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_00493dd0(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 0049c8dc
    MOV EDI,dword ptr [0x01c558e0]      ; 0049c8df | DAT_01c558e0
        ;   Label: LAB_0049c8df
    INC ESI                             ; 0049c8e5
    ADD EBX,0x3c                        ; 0049c8e6
    CMP ESI,EDI                         ; 0049c8e9
    JL 0x0049c8c6                       ; 0049c8eb
        ;   XREF to: 0049c8c6 (CONDITIONAL_JUMP)  ; LAB_0049c8c6
    PUSH 0x1c3f8e0                      ; 0049c8ed | DAT_01c3f8e0
        ;   Label: LAB_0049c8ed
    MOV EBX,0x1c3f8e0                   ; 0049c8f2
    CALL core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00493410 ; 0049c8f7
        ;   XREF to: 00493410 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00493410(CSmokeParticle * this_ptr)
    ADD ESP,0x4                         ; 0049c8fc
    LEA ESI,[EBX + 0x16000]             ; 0049c8ff
    MOV EAX,dword ptr [EBX]             ; 0049c905 | DAT_01c3f8e0 | DAT_01c3f90c
        ;   Label: LAB_0049c905
    TEST EAX,EAX                        ; 0049c907
    JZ 0x0049c914                       ; 0049c909
        ;   XREF to: 0049c914 (CONDITIONAL_JUMP)  ; LAB_0049c914
    PUSH EBX                            ; 0049c90b | DAT_01c3f8e0 | DAT_01c3f90c
    CALL core_fire.cpp_CSmokeParticle_render_FUN_00493710 ; 0049c90c
        ;   XREF to: 00493710 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_render_FUN_00493710(CSmokeParticle * this_ptr)
    ADD ESP,0x4                         ; 0049c911
    ADD EBX,0x2c                        ; 0049c914
        ;   Label: LAB_0049c914
    CMP EBX,ESI                         ; 0049c917
    JNZ 0x0049c905                      ; 0049c919
        ;   XREF to: 0049c905 (CONDITIONAL_JUMP)  ; LAB_0049c905
    MOV EBX,0x1c86730                   ; 0049c91b
    MOV ESI,0x1c85ffc                   ; 0049c920
    LEA EDI,[EBX + 0x730]               ; 0049c925
    MOV EAX,dword ptr [ESI]             ; 0049c92b | DAT_01c85ffc | DAT_01c86058
        ;   Label: LAB_0049c92b
    TEST EAX,EAX                        ; 0049c92d
    JZ 0x0049c93a                       ; 0049c92f
        ;   XREF to: 0049c93a (CONDITIONAL_JUMP)  ; LAB_0049c93a
    PUSH ESI                            ; 0049c931 | DAT_01c85ffc | DAT_01c86058
    CALL core_fire.cpp_CMuzzleFlash_render_FUN_00496a90 ; 0049c932
        ;   XREF to: 00496a90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CMuzzleFlash_render_FUN_00496a90(CMuzzleFlash * this_ptr)
    ADD ESP,0x4                         ; 0049c937
    MOV EAX,dword ptr [EBX]             ; 0049c93a | DAT_01c86730 | DAT_01c8678c
        ;   Label: LAB_0049c93a
    TEST EAX,EAX                        ; 0049c93c
    JZ 0x0049c949                       ; 0049c93e
        ;   XREF to: 0049c949 (CONDITIONAL_JUMP)  ; LAB_0049c949
    PUSH EBX                            ; 0049c940 | DAT_01c86730 | DAT_01c8678c
    CALL unkaddr_0059d350.cpp_CMuzzleEffect_render_FUN_0059d440 ; 0049c941
        ;   XREF to: 0059d440 (UNCONDITIONAL_CALL)  ; void unkaddr_0059d350.cpp_CMuzzleEffect_render_FUN_0059d440(CMuzzleEffect * this_ptr)
    ADD ESP,0x4                         ; 0049c946
    ADD EBX,0x5c                        ; 0049c949
        ;   Label: LAB_0049c949
    ADD ESI,0x5c                        ; 0049c94c
    CMP EBX,EDI                         ; 0049c94f
    JNZ 0x0049c92b                      ; 0049c951
        ;   XREF to: 0049c92b (CONDITIONAL_JUMP)  ; LAB_0049c92b
    MOV EDX,dword ptr [0x01c965dc]      ; 0049c953 | DAT_01c965dc
    XOR ESI,ESI                         ; 0049c959
    TEST EDX,EDX                        ; 0049c95b
    JLE 0x0049c980                      ; 0049c95d
        ;   XREF to: 0049c980 (CONDITIONAL_JUMP)  ; LAB_0049c980
    MOV EBX,0x1c965e0                   ; 0049c95f
    PUSH EBX                            ; 0049c964
        ;   Label: LAB_0049c964
    CALL core_fire.cpp_CLaserBeam_render_FUN_00497800 ; 0049c965
        ;   XREF to: 00497800 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLaserBeam_render_FUN_00497800(CLaserBeam * this_ptr)
    INC ESI                             ; 0049c96a
    MOV ECX,dword ptr [0x01c965dc]      ; 0049c96b | DAT_01c965dc
    ADD ESP,0x4                         ; 0049c971
    ADD EBX,0x40                        ; 0049c974
    CMP ESI,ECX                         ; 0049c977
    JL 0x0049c964                       ; 0049c979
        ;   XREF to: 0049c964 (CONDITIONAL_JUMP)  ; LAB_0049c964
    LEA EAX,[EAX]                       ; 0049c97b
    MOV ECX,ECX                         ; 0049c97e
    PUSH 0x1c7f4f4                      ; 0049c980
        ;   Label: LAB_0049c980
    MOV EBX,0x1c7f4f4                   ; 0049c985
    CALL core_fire.cpp_CSpark_setupRenderState_FUN_00494670 ; 0049c98a
        ;   XREF to: 00494670 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSpark_setupRenderState_FUN_00494670(CSpark * this_ptr)
    ADD ESP,0x4                         ; 0049c98f
    LEA ESI,[EBX + 0x5400]              ; 0049c992
    FLD float ptr [EBX + 0x24]          ; 0049c998 | g_SparkPool[0].base.lifetime_remaining | g_SparkPool[1].base.lifetime_remaining
        ;   Label: LAB_0049c998
    FLDZ                                ; 0049c99b
    FCOMPP                              ; 0049c99d
    FNSTSW AX                           ; 0049c99f
    SAHF                                ; 0049c9a1
    JNC 0x0049c9ae                      ; 0049c9a2
        ;   XREF to: 0049c9ae (CONDITIONAL_JUMP)  ; LAB_0049c9ae
    PUSH EBX                            ; 0049c9a4
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c9a5 | g_SparkPool[0].base.vtable | g_SparkPool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 0049c9a8
    ADD ESP,0x4                         ; 0049c9ab
    ADD EBX,0x54                        ; 0049c9ae
        ;   Label: LAB_0049c9ae
    CMP EBX,ESI                         ; 0049c9b1
    JNZ 0x0049c998                      ; 0049c9b3
        ;   XREF to: 0049c998 (CONDITIONAL_JUMP)  ; LAB_0049c998
    PUSH 0x1c848f8                      ; 0049c9b5
    MOV EBX,0x1c848f8                   ; 0049c9ba
    CALL core_fire.cpp_CFirefly_setupRenderState_FUN_00495020 ; 0049c9bf
        ;   XREF to: 00495020 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFirefly_setupRenderState_FUN_00495020(CFirefly * this_ptr)
    ADD ESP,0x4                         ; 0049c9c4
    LEA ESI,[EBX + 0x1700]              ; 0049c9c7
    FLD float ptr [EBX + 0x24]          ; 0049c9cd | CFirefly_ARRAY_01c848f8[0].base.lifetime_remaining | CFirefly_ARRAY_01c848f8[1].base.lifetime_remaining
        ;   Label: LAB_0049c9cd
    FLDZ                                ; 0049c9d0
    FCOMPP                              ; 0049c9d2
    FNSTSW AX                           ; 0049c9d4
    SAHF                                ; 0049c9d6
    JNC 0x0049c9e3                      ; 0049c9d7
        ;   XREF to: 0049c9e3 (CONDITIONAL_JUMP)  ; LAB_0049c9e3
    PUSH EBX                            ; 0049c9d9
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049c9da | CFirefly_ARRAY_01c848f8[0].base.vtable | CFirefly_ARRAY_01c848f8[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 0049c9dd
    ADD ESP,0x4                         ; 0049c9e0
    ADD EBX,0x5c                        ; 0049c9e3
        ;   Label: LAB_0049c9e3
    CMP EBX,ESI                         ; 0049c9e6
    JNZ 0x0049c9cd                      ; 0049c9e8
        ;   XREF to: 0049c9cd (CONDITIONAL_JUMP)  ; LAB_0049c9cd
    MOV EBX,0x1c86e64                   ; 0049c9ea
    LEA ESI,[EBX + 0xa400]              ; 0049c9ef
    FLD float ptr [EBX + 0x24]          ; 0049c9f5 | g_GlassParticlePool[0].base.lifetime_remaining | g_GlassParticlePool[1].base.lifetime_remaining
        ;   Label: LAB_0049c9f5
    FLDZ                                ; 0049c9f8
    FCOMPP                              ; 0049c9fa
    FNSTSW AX                           ; 0049c9fc
    SAHF                                ; 0049c9fe
    JNC 0x0049ca0b                      ; 0049c9ff
        ;   XREF to: 0049ca0b (CONDITIONAL_JUMP)  ; LAB_0049ca0b
    PUSH EBX                            ; 0049ca01
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049ca02 | g_GlassParticlePool[0].base.vtable | g_GlassParticlePool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 0049ca05
    ADD ESP,0x4                         ; 0049ca08
    ADD EBX,0xa4                        ; 0049ca0b
        ;   Label: LAB_0049ca0b
    CMP EBX,ESI                         ; 0049ca11
    JNZ 0x0049c9f5                      ; 0049ca13
        ;   XREF to: 0049c9f5 (CONDITIONAL_JUMP)  ; LAB_0049c9f5
    MOV EBX,0x1c91268                   ; 0049ca15
    LEA ESI,[EBX + 0x168]               ; 0049ca1a
    MOV EAX,dword ptr [EBX + 0x20]      ; 0049ca20 | DAT_01c91288 | DAT_01c912ac
        ;   Label: LAB_0049ca20
    TEST EAX,EAX                        ; 0049ca23
    JZ 0x0049ca30                       ; 0049ca25
        ;   XREF to: 0049ca30 (CONDITIONAL_JUMP)  ; LAB_0049ca30
    PUSH EBX                            ; 0049ca27
    CALL core_fire.cpp_CBulletTrail_render_FUN_00497350 ; 0049ca28
        ;   XREF to: 00497350 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_render_FUN_00497350(CBulletTrail * this_ptr)
    ADD ESP,0x4                         ; 0049ca2d
    ADD EBX,0x24                        ; 0049ca30
        ;   Label: LAB_0049ca30
    CMP EBX,ESI                         ; 0049ca33
    JNZ 0x0049ca20                      ; 0049ca35
        ;   XREF to: 0049ca20 (CONDITIONAL_JUMP)  ; LAB_0049ca20
    MOV EBX,0x1c975e4                   ; 0049ca37
    LEA ESI,[EBX + 0x118]               ; 0049ca3c
    PUSH EBX                            ; 0049ca42 | DAT_01c97600
        ;   Label: LAB_0049ca42
    CALL core_fire.cpp_CExplosion_render_FUN_00498ed0 ; 0049ca43
        ;   XREF to: 00498ed0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CExplosion_render_FUN_00498ed0(CExplosion * this_ptr)
    ADD EBX,0x1c                        ; 0049ca48
    ADD ESP,0x4                         ; 0049ca4b
    CMP EBX,ESI                         ; 0049ca4e
    JNZ 0x0049ca42                      ; 0049ca50
        ;   XREF to: 0049ca42 (CONDITIONAL_JUMP)  ; LAB_0049ca42
    MOV EBX,0x1c97700                   ; 0049ca52
    LEA ESI,[EBX + 0x4dd0]              ; 0049ca57
    PUSH EBX                            ; 0049ca5d
        ;   Label: LAB_0049ca5d
    CALL core_fire.cpp_CToss_render_FUN_00499570 ; 0049ca5e
        ;   XREF to: 00499570 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_render_FUN_00499570(CToss * this_ptr)
    ADD EBX,0x3e4                       ; 0049ca63
    ADD ESP,0x4                         ; 0049ca69
    CMP EBX,ESI                         ; 0049ca6c
    JNZ 0x0049ca5d                      ; 0049ca6e
        ;   XREF to: 0049ca5d (CONDITIONAL_JUMP)  ; LAB_0049ca5d
    MOV EBX,0x1c9cd98                   ; 0049ca70
    LEA ESI,[EBX + 0x4650]              ; 0049ca75
    PUSH EBX                            ; 0049ca7b | DAT_01c9cd98 | DAT_01c9cdbc
        ;   Label: LAB_0049ca7b
    CALL core_fire.cpp_CGunFlame_render_FUN_0049a500 ; 0049ca7c
        ;   XREF to: 0049a500 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_render_FUN_0049a500(CGunFlame * this_ptr)
    ADD EBX,0x24                        ; 0049ca81
    ADD ESP,0x4                         ; 0049ca84
    CMP EBX,ESI                         ; 0049ca87
    JNZ 0x0049ca7b                      ; 0049ca89
        ;   XREF to: 0049ca7b (CONDITIONAL_JUMP)  ; LAB_0049ca7b
    MOV EBX,0x1ca13ec                   ; 0049ca8b
    LEA ESI,[EBX + 0x1b8]               ; 0049ca90
    PUSH EBX                            ; 0049ca96
        ;   Label: LAB_0049ca96
    CALL core_fire.cpp_CLightningBolt_render_FUN_0049abd0 ; 0049ca97
        ;   XREF to: 0049abd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_render_FUN_0049abd0(CLightningBolt * this_ptr)
    ADD EBX,0x2c                        ; 0049ca9c
    ADD ESP,0x4                         ; 0049ca9f
    CMP EBX,ESI                         ; 0049caa2
    JNZ 0x0049ca96                      ; 0049caa4
        ;   XREF to: 0049ca96 (CONDITIONAL_JUMP)  ; LAB_0049ca96
    MOV EBX,0x1ca15a8                   ; 0049caa6
    LEA ESI,[EBX + 0xe10]               ; 0049caab
    PUSH EBX                            ; 0049cab1
        ;   Label: LAB_0049cab1
    CALL core_fire.cpp_CTrail_render_FUN_0049b380 ; 0049cab2
        ;   XREF to: 0049b380 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_render_FUN_0049b380(CTrail * this_ptr)
    ADD EBX,0x24                        ; 0049cab7
    ADD ESP,0x4                         ; 0049caba
    CMP EBX,ESI                         ; 0049cabd
    JNZ 0x0049cab1                      ; 0049cabf
        ;   XREF to: 0049cab1 (CONDITIONAL_JUMP)  ; LAB_0049cab1
    MOV EBX,0x1ca3680                   ; 0049cac1
    LEA ESI,[EBX + 0x4000]              ; 0049cac6
    FLD float ptr [EBX + 0x24]          ; 0049cacc | g_PopcornPool[0].base.lifetime_remaining | g_PopcornPool[1].base.lifetime_remaining
        ;   Label: LAB_0049cacc
    FLDZ                                ; 0049cacf
    FCOMPP                              ; 0049cad1
    FNSTSW AX                           ; 0049cad3
    SAHF                                ; 0049cad5
    JNC 0x0049cae2                      ; 0049cad6
        ;   XREF to: 0049cae2 (CONDITIONAL_JUMP)  ; LAB_0049cae2
    PUSH EBX                            ; 0049cad8
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049cad9 | g_PopcornPool[0].base.vtable | g_PopcornPool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 0049cadc
    ADD ESP,0x4                         ; 0049cadf
    ADD EBX,0x40                        ; 0049cae2
        ;   Label: LAB_0049cae2
    CMP EBX,ESI                         ; 0049cae5
    JNZ 0x0049cacc                      ; 0049cae7
        ;   XREF to: 0049cacc (CONDITIONAL_JUMP)  ; LAB_0049cacc
    MOV EBX,0x1ca7684                   ; 0049cae9
    LEA ESI,[EBX + 0x4000]              ; 0049caee
    FLD float ptr [EBX + 0x24]          ; 0049caf4 | g_RainDropPool[0].base.lifetime_remaining | g_RainDropPool[1].base.lifetime_remaining
        ;   Label: LAB_0049caf4
    FLDZ                                ; 0049caf7
    FCOMPP                              ; 0049caf9
    FNSTSW AX                           ; 0049cafb
    SAHF                                ; 0049cafd
    JNC 0x0049cb0a                      ; 0049cafe
        ;   XREF to: 0049cb0a (CONDITIONAL_JUMP)  ; LAB_0049cb0a
    PUSH EBX                            ; 0049cb00
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049cb01 | g_RainDropPool[0].base.vtable | g_RainDropPool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 0049cb04
    ADD ESP,0x4                         ; 0049cb07
    ADD EBX,0x40                        ; 0049cb0a
        ;   Label: LAB_0049cb0a
    CMP EBX,ESI                         ; 0049cb0d
    JNZ 0x0049caf4                      ; 0049cb0f
        ;   XREF to: 0049caf4 (CONDITIONAL_JUMP)  ; LAB_0049caf4
    PUSH 0x0                            ; 0049cb11
    MOV EBX,dword ptr [0x0060b280]      ; 0049cb13 | DAT_0060b280
    PUSH EBX                            ; 0049cb19 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 0049cb1a
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0049cb1f
    MOV ESI,dword ptr [0x0061ebfc]      ; 0049cb22 | g_CSimpleParticleSystemPtr
    PUSH ESI                            ; 0049cb28
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_render_FUN_005a8290 ; 0049cb29
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_render_FUN_005a8290(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 0049cb2e
    MOV ESP,EBP                         ; 0049cb31
        ;   Label: LAB_0049cb31
    POP EBP                             ; 0049cb33
    POP EDI                             ; 0049cb34
    POP ESI                             ; 0049cb35
    POP EBX                             ; 0049cb36
    RET                                 ; 0049cb37
    MOV EAX,0x1c594f0                   ; 0049cb38
        ;   Label: LAB_0049cb38
    ADD EAX,EBX                         ; 0049cb3d
    PUSH EAX                            ; 0049cb3f
    CALL core_fire.cpp_CStake_render_FUN_004944c0 ; 0049cb40
        ;   XREF to: 004944c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_render_FUN_004944c0(CStake * this_ptr)
    ADD ESP,0x4                         ; 0049cb45
    JMP 0x0049c7a4                      ; 0049cb48
        ;   XREF to: 0049c7a4 (UNCONDITIONAL_JUMP)  ; LAB_0049c7a4

