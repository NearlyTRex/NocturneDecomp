; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_init_FUN_0049c190(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_event.cpp_FUN_00489670 at 0048c376
;   core_fire.cpp_CFireEffect_load_FUN_0049ea80 at 0049eaa1
;   core_fire.cpp_FUN_0049c170 at 0049c176
;   core_game.cpp_FUN_004b6170 at 004b683c
;   core_game.cpp_FUN_004bbf70 at 004bc67a
;
; Referenced Globals:
;   undefined4 DAT_01c3f8dc
;   undefined4 DAT_01c558e0
;   undefined4 DAT_01c558e4
;   undefined4 DAT_01c594e8
;   undefined4 DAT_01c594ec
;   undefined4 DAT_01c7f4f0
;   undefined4 g_SparkPool[0].field36_0x24
;   undefined4 g_SparkPool[1].field36_0x24
;   undefined4 DAT_01c848f4
;   undefined4 CFirefly_ARRAY_01c848f8[0].field36_0x24
;   undefined4 CFirefly_ARRAY_01c848f8[1].field36_0x24
;   undefined4 DAT_01c85ffc
;   undefined4 DAT_01c86058
;   undefined4 DAT_01c86730
;   undefined4 DAT_01c8678c
;   ... and 29 more
;
; Called Functions:
;   core_fire.cpp_CExplosion_ctor_FUN_00498c80
;   core_fire.cpp_CLightningBolt_reset_FUN_0049aae0
;   core_fire.cpp_CToss_reset_FUN_004992a0
;   core_fire.cpp_CTrail_reset_FUN_0049b2d0
;   core_fire.cpp_FUN_00493500
;   core_fire.cpp_FUN_004995f0
;   core_fire.cpp_FUN_0049a1a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c190
        ;   Label: core_fire.cpp_CFireEffect_init_FUN_0049c190
    PUSH ESI                            ; 0049c191
    PUSH EBP                            ; 0049c192
    MOV EBX,0x1c3f8e0                   ; 0049c193
    XOR EDX,EDX                         ; 0049c198
    LEA ESI,[EBX + 0x16000]             ; 0049c19a
    MOV dword ptr [0x01c3f8dc],EDX      ; 0049c1a0 | DAT_01c3f8dc
    PUSH EBX                            ; 0049c1a6
        ;   Label: LAB_0049c1a6
    CALL core_fire.cpp_FUN_00493500     ; 0049c1a7
        ;   XREF to: 00493500 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_00493500(CSmokeParticle * this_ptr)
    ADD EBX,0x2c                        ; 0049c1ac
    ADD ESP,0x4                         ; 0049c1af
    CMP EBX,ESI                         ; 0049c1b2
    JNZ 0x0049c1a6                      ; 0049c1b4
        ;   XREF to: 0049c1a6 (CONDITIONAL_JUMP)  ; LAB_0049c1a6
    MOV EAX,0x1c7f4f4                   ; 0049c1b6
    XOR ECX,ECX                         ; 0049c1bb
    XOR EBX,ESI                         ; 0049c1bd
    MOV dword ptr [0x01c558e4],ECX      ; 0049c1bf | DAT_01c558e4
    MOV dword ptr [0x01c558e0],EBX      ; 0049c1c5 | DAT_01c558e0
    MOV dword ptr [0x01c7f4f0],ECX      ; 0049c1cb | DAT_01c7f4f0
    LEA EBX,[EAX + 0x5400]              ; 0049c1d1
    ADD EAX,0x54                        ; 0049c1d7
        ;   Label: LAB_0049c1d7
    MOV dword ptr [EAX + -0x30],0x0     ; 0049c1da | g_SparkPool[0].field36_0x24 | g_SparkPool[1].field36_0x24
    CMP EAX,EBX                         ; 0049c1e1
    JNZ 0x0049c1d7                      ; 0049c1e3
        ;   XREF to: 0049c1d7 (CONDITIONAL_JUMP)  ; LAB_0049c1d7
    MOV EAX,0x1c848f8                   ; 0049c1e5
    LEA EBX,[EAX + 0x1700]              ; 0049c1ea
    ADD EAX,0x5c                        ; 0049c1f0
        ;   Label: LAB_0049c1f0
    MOV dword ptr [EAX + -0x38],0x0     ; 0049c1f3 | CFirefly_ARRAY_01c848f8[0].field36_0x24 | CFirefly_ARRAY_01c848f8[1].field36_0x24
    CMP EAX,EBX                         ; 0049c1fa
    JNZ 0x0049c1f0                      ; 0049c1fc
        ;   XREF to: 0049c1f0 (CONDITIONAL_JUMP)  ; LAB_0049c1f0
    MOV EAX,0x1c85ffc                   ; 0049c1fe
    MOV EBX,0x1c86730                   ; 0049c203
    XOR EDX,EDX                         ; 0049c208
    LEA ESI,[EAX + 0x730]               ; 0049c20a
    ADD EBX,0x5c                        ; 0049c210
        ;   Label: LAB_0049c210
    MOV dword ptr [EAX],EDX             ; 0049c213 | DAT_01c85ffc | DAT_01c86058
    ADD EAX,0x5c                        ; 0049c215
    MOV dword ptr [EBX + -0x5c],EDX     ; 0049c218 | DAT_01c86730 | DAT_01c8678c
    CMP EAX,ESI                         ; 0049c21b
    JNZ 0x0049c210                      ; 0049c21d
        ;   XREF to: 0049c210 (CONDITIONAL_JUMP)  ; LAB_0049c210
    PUSH EDI                            ; 0049c21f
    XOR EDI,EDI                         ; 0049c220
    XOR EAX,ESI                         ; 0049c222
    MOV dword ptr [0x01c594e8],EDI      ; 0049c224 | DAT_01c594e8
    MOV [0x01c86e60],EAX                ; 0049c22a | DAT_01c86e60
    MOV EAX,0x1c86e64                   ; 0049c22f
    MOV dword ptr [0x01c594ec],EDI      ; 0049c234 | DAT_01c594ec
    LEA EBX,[EAX + 0xa400]              ; 0049c23a
    ADD EAX,0xa4                        ; 0049c240
        ;   Label: LAB_0049c240
    MOV dword ptr [EAX + -0x80],0x0     ; 0049c245 | g_GlassParticlePool[0].field36_0x24 | g_GlassParticlePool[1].field36_0x24
    CMP EAX,EBX                         ; 0049c24c
    JNZ 0x0049c240                      ; 0049c24e
        ;   XREF to: 0049c240 (CONDITIONAL_JUMP)  ; LAB_0049c240
    MOV EAX,0x1c91268                   ; 0049c250
    LEA EBX,[EAX + 0x168]               ; 0049c255
    ADD EAX,0x24                        ; 0049c25b
        ;   Label: LAB_0049c25b
    MOV dword ptr [EAX + -0x4],0x0      ; 0049c25e | DAT_01c91288 | DAT_01c912ac
    CMP EAX,EBX                         ; 0049c265
    JNZ 0x0049c25b                      ; 0049c267
        ;   XREF to: 0049c25b (CONDITIONAL_JUMP)  ; LAB_0049c25b
    XOR EDX,EDX                         ; 0049c269
    MOV EAX,0x1c913d4                   ; 0049c26b
    MOV dword ptr [0x01c913d0],EDX      ; 0049c270 | DAT_01c913d0
    LEA EBX,[EAX + 0x2900]              ; 0049c276
    ADD EAX,0xa4                        ; 0049c27c
        ;   Label: LAB_0049c27c
    MOV dword ptr [EAX + -0x80],0x0     ; 0049c281 | g_FireballPool[0].field36_0x24 | g_FireballPool[1].field36_0x24
    CMP EAX,EBX                         ; 0049c288
    JNZ 0x0049c27c                      ; 0049c28a
        ;   XREF to: 0049c27c (CONDITIONAL_JUMP)  ; LAB_0049c27c
    XOR ECX,ECX                         ; 0049c28c
    MOV EAX,0x1c93cd8                   ; 0049c28e
    MOV dword ptr [0x01c93cd4],ECX      ; 0049c293 | DAT_01c93cd4
    LEA EBX,[EAX + 0x1400]              ; 0049c299
    ADD EAX,0x50                        ; 0049c29f
        ;   Label: LAB_0049c29f
    MOV dword ptr [EAX + -0x2c],0x0     ; 0049c2a2 | g_RockPool[0].field36_0x24 | g_RockPool[1].field36_0x24
    CMP EAX,EBX                         ; 0049c2a9
    JNZ 0x0049c29f                      ; 0049c2ab
        ;   XREF to: 0049c29f (CONDITIONAL_JUMP)  ; LAB_0049c29f
    XOR EBX,EBX                         ; 0049c2ad
    MOV EAX,0x1c950dc                   ; 0049c2af
    MOV dword ptr [0x01c950d8],EBX      ; 0049c2b4 | DAT_01c950d8
    LEA EBX,[EAX + 0x1500]              ; 0049c2ba
    ADD EAX,0x54                        ; 0049c2c0
        ;   Label: LAB_0049c2c0
    MOV dword ptr [EAX + -0x30],0x0     ; 0049c2c3 | CLeaf_ARRAY_01c950dc[0].field36_0x24 | CLeaf_ARRAY_01c950dc[1].field36_0x24
    CMP EAX,EBX                         ; 0049c2ca
    JNZ 0x0049c2c0                      ; 0049c2cc
        ;   XREF to: 0049c2c0 (CONDITIONAL_JUMP)  ; LAB_0049c2c0
    XOR ESI,ESI                         ; 0049c2ce
    MOV EAX,0x1c848f8                   ; 0049c2d0
    MOV dword ptr [0x01c848f4],ESI      ; 0049c2d5 | DAT_01c848f4
    LEA EBX,[EAX + 0x1700]              ; 0049c2db
    ADD EAX,0x5c                        ; 0049c2e1
        ;   Label: LAB_0049c2e1
    MOV dword ptr [EAX + -0x38],0x0     ; 0049c2e4 | CFirefly_ARRAY_01c848f8[0].field36_0x24 | CFirefly_ARRAY_01c848f8[1].field36_0x24
    CMP EAX,EBX                         ; 0049c2eb
    JNZ 0x0049c2e1                      ; 0049c2ed
        ;   XREF to: 0049c2e1 (CONDITIONAL_JUMP)  ; LAB_0049c2e1
    MOV EBX,0x1c975e4                   ; 0049c2ef
    XOR EDI,EDI                         ; 0049c2f4
    LEA ESI,[EBX + 0x118]               ; 0049c2f6
    MOV dword ptr [0x01c975e0],EDI      ; 0049c2fc | DAT_01c975e0
    PUSH EBX                            ; 0049c302
        ;   Label: LAB_0049c302
    CALL core_fire.cpp_CExplosion_ctor_FUN_00498c80 ; 0049c303
        ;   XREF to: 00498c80 (UNCONDITIONAL_CALL)  ; CExplosion * core_fire.cpp_CExplosion_ctor_FUN_00498c80(CExplosion * this_ptr)
    ADD EBX,0x1c                        ; 0049c308
    ADD ESP,0x4                         ; 0049c30b
    CMP EBX,ESI                         ; 0049c30e
    JNZ 0x0049c302                      ; 0049c310
        ;   XREF to: 0049c302 (CONDITIONAL_JUMP)  ; LAB_0049c302
    MOV EBX,0x1c97700                   ; 0049c312
    XOR EBP,EBP                         ; 0049c317
    LEA ESI,[EBX + 0x4dd0]              ; 0049c319
    MOV dword ptr [0x01c976fc],EBP      ; 0049c31f | DAT_01c976fc
    PUSH EBX                            ; 0049c325
        ;   Label: LAB_0049c325
    CALL core_fire.cpp_CToss_reset_FUN_004992a0 ; 0049c326
        ;   XREF to: 004992a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_reset_FUN_004992a0(CToss * this_ptr)
    ADD EBX,0x3e4                       ; 0049c32b
    ADD ESP,0x4                         ; 0049c331
    CMP EBX,ESI                         ; 0049c334
    JNZ 0x0049c325                      ; 0049c336
        ;   XREF to: 0049c325 (CONDITIONAL_JUMP)  ; LAB_0049c325
    MOV EBX,0x1c9c4d4                   ; 0049c338
    XOR EAX,EAX                         ; 0049c33d
    LEA ESI,[EBX + 0x8c0]               ; 0049c33f
    MOV [0x01c9c4d0],EAX                ; 0049c345 | DAT_01c9c4d0
    PUSH EBX                            ; 0049c34a
        ;   Label: LAB_0049c34a
    CALL core_fire.cpp_FUN_004995f0     ; 0049c34b
        ;   XREF to: 004995f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004995f0(CCrater * this_ptr)
    ADD EBX,0x70                        ; 0049c350
    ADD ESP,0x4                         ; 0049c353
    CMP EBX,ESI                         ; 0049c356
    JNZ 0x0049c34a                      ; 0049c358
        ;   XREF to: 0049c34a (CONDITIONAL_JUMP)  ; LAB_0049c34a
    MOV EBX,0x1c9cd98                   ; 0049c35a
    XOR EDX,EDX                         ; 0049c35f
    LEA ESI,[EBX + 0x4650]              ; 0049c361
    MOV dword ptr [0x01c9cd94],EDX      ; 0049c367 | DAT_01c9cd94
    PUSH EBX                            ; 0049c36d
        ;   Label: LAB_0049c36d
    CALL core_fire.cpp_FUN_0049a1a0     ; 0049c36e
        ;   XREF to: 0049a1a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049a1a0(CGunFlame * this_ptr)
    ADD EBX,0x24                        ; 0049c373
    ADD ESP,0x4                         ; 0049c376
    CMP EBX,ESI                         ; 0049c379
    JNZ 0x0049c36d                      ; 0049c37b
        ;   XREF to: 0049c36d (CONDITIONAL_JUMP)  ; LAB_0049c36d
    MOV EBX,0x1ca13ec                   ; 0049c37d
    XOR ECX,ECX                         ; 0049c382
    LEA ESI,[EBX + 0x1b8]               ; 0049c384
    MOV dword ptr [0x01ca13e8],ECX      ; 0049c38a | DAT_01ca13e8
    PUSH EBX                            ; 0049c390
        ;   Label: LAB_0049c390
    CALL core_fire.cpp_CLightningBolt_reset_FUN_0049aae0 ; 0049c391
        ;   XREF to: 0049aae0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_reset_FUN_0049aae0(CLightningBolt * this_ptr)
    ADD EBX,0x2c                        ; 0049c396
    ADD ESP,0x4                         ; 0049c399
    CMP EBX,ESI                         ; 0049c39c
    JNZ 0x0049c390                      ; 0049c39e
        ;   XREF to: 0049c390 (CONDITIONAL_JUMP)  ; LAB_0049c390
    XOR EBX,ESI                         ; 0049c3a0
    MOV dword ptr [0x01ca15a4],EBX      ; 0049c3a2 | DAT_01ca15a4
    MOV EBX,0x1ca15a8                   ; 0049c3a8
    LEA ESI,[EBX + 0xe10]               ; 0049c3ad
    PUSH EBX                            ; 0049c3b3
        ;   Label: LAB_0049c3b3
    CALL core_fire.cpp_CTrail_reset_FUN_0049b2d0 ; 0049c3b4
        ;   XREF to: 0049b2d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_reset_FUN_0049b2d0(CTrail * this_ptr)
    ADD EBX,0x24                        ; 0049c3b9
    ADD ESP,0x4                         ; 0049c3bc
    CMP EBX,ESI                         ; 0049c3bf
    JNZ 0x0049c3b3                      ; 0049c3c1
        ;   XREF to: 0049c3b3 (CONDITIONAL_JUMP)  ; LAB_0049c3b3
    XOR ESI,ESI                         ; 0049c3c3
    MOV EAX,0x1ca23bc                   ; 0049c3c5
    MOV dword ptr [0x01ca23b8],ESI      ; 0049c3ca | DAT_01ca23b8
    LEA EBX,[EAX + 0x12c0]              ; 0049c3d0
    ADD EAX,0x60                        ; 0049c3d6
        ;   Label: LAB_0049c3d6
    MOV dword ptr [EAX + -0x3c],0x0     ; 0049c3d9 | g_ShellPool[0].field36_0x24 | g_ShellPool[1].field36_0x24
    CMP EAX,EBX                         ; 0049c3e0
    JNZ 0x0049c3d6                      ; 0049c3e2
        ;   XREF to: 0049c3d6 (CONDITIONAL_JUMP)  ; LAB_0049c3d6
    XOR EDI,EDI                         ; 0049c3e4
    MOV EAX,0x1ca3680                   ; 0049c3e6
    MOV dword ptr [0x01ca367c],EDI      ; 0049c3eb | DAT_01ca367c
    LEA EBX,[EAX + 0x4000]              ; 0049c3f1
    POP EDI                             ; 0049c3f7
    ADD EAX,0x40                        ; 0049c3f8
        ;   Label: LAB_0049c3f8
    MOV dword ptr [EAX + -0x1c],0x0     ; 0049c3fb | g_PopcornPool[0].field36_0x24 | g_PopcornPool[1].field36_0x24
    CMP EAX,EBX                         ; 0049c402
    JNZ 0x0049c3f8                      ; 0049c404
        ;   XREF to: 0049c3f8 (CONDITIONAL_JUMP)  ; LAB_0049c3f8
    XOR EBP,EBP                         ; 0049c406
    MOV EAX,0x1ca7684                   ; 0049c408
    MOV dword ptr [0x01ca7680],EBP      ; 0049c40d | DAT_01ca7680
    LEA EBX,[EAX + 0x4000]              ; 0049c413
    ADD EAX,0x40                        ; 0049c419
        ;   Label: LAB_0049c419
    MOV dword ptr [EAX + -0x1c],0x0     ; 0049c41c | g_RainDropPool[0].field36_0x24 | g_RainDropPool[1].field36_0x24
    CMP EAX,EBX                         ; 0049c423
    JNZ 0x0049c419                      ; 0049c425
        ;   XREF to: 0049c419 (CONDITIONAL_JUMP)  ; LAB_0049c419
    POP EBP                             ; 0049c427
    POP ESI                             ; 0049c428
    POP EBX                             ; 0049c429
    RET                                 ; 0049c42a

