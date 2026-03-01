; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_process_FUN_004c6ec0(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e3451
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 00539925
;   core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220 at 0053e516
;
; Referenced Globals:
;   CSmokeParticle[2048] g_SmokeParticlePool
;   undefined4 DAT_02d14218
;   int g_BulletHoleActiveCount
;   CBulletHole[256] g_BulletHolePool
;   undefined4 DAT_02d2a230
;   int g_StakeActiveCount
;   CStake[256] g_StakePool
;   undefined4 DAT_02d2e054
;   undefined4 DAT_02d2e05c
;   undefined4 DAT_02d2e2b4
;   CSpark[256] g_SparkPool
;   undefined4 DAT_02d53e18
;   undefined4 DAT_02d53e34
;   undefined4 DAT_02d53e4c
;   undefined4 DAT_02d53e64
;   ... and 68 more
;
; Called Functions:
;   core_fire.cpp_CBulletHole_process_FUN_004bfa00
;   core_fire.cpp_CBulletTrail_process_FUN_004c21d0
;   core_fire.cpp_CCrater_process_FUN_004c4550
;   core_fire.cpp_CExplosion_process_FUN_004c3ac0
;   core_fire.cpp_CGunFlame_process_FUN_004c4f60
;   core_fire.cpp_CLightningBolt_process_FUN_004c56e0
;   core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00
;   core_fire.cpp_CSmokeParticle_process_FUN_004bf390
;   core_fire.cpp_CStake_process_FUN_004c0210
;   core_fire.cpp_CToss_process_FUN_004c4000
;   core_fire.cpp_CTrail_process_FUN_004c5e40
;   core_fire.cpp_initProcess_FUN_004c4b00
;   core_fire.cpp_updateTextureAnimCounts_FUN_004c3870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6ec0
        ;   Label: core_fire.cpp_CFireEffect_process_FUN_004c6ec0
    PUSH ESI                            ; 004c6ec1
    PUSH EDI                            ; 004c6ec2
    PUSH EBP                            ; 004c6ec3
    MOV EBP,ESP                         ; 004c6ec4
    AND ESP,0xfffffff8                  ; 004c6ec6
    XOR EDX,EDX                         ; 004c6ec9
    MOV EBX,0x2d141ec                   ; 004c6ecb | g_SmokeParticlePool
    MOV dword ptr [0x02d667ac],EDX      ; 004c6ed0 | g_LaserBeamActiveCount
    CALL core_fire.cpp_updateTextureAnimCounts_FUN_004c3870 ; 004c6ed6
        ;   XREF to: 004c3870 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_updateTextureAnimCounts_FUN_004c3870()
    LEA ESI,[EBX + 0x16000]             ; 004c6edb | g_BulletHoleActiveCount
    MOV EAX,dword ptr [EBX]             ; 004c6ee1 | g_SmokeParticlePool | DAT_02d14218
        ;   Label: LAB_004c6ee1
    TEST EAX,EAX                        ; 004c6ee3
    JNZ 0x004c7170                      ; 004c6ee5
        ;   XREF to: 004c7170 (CONDITIONAL_JUMP)  ; LAB_004c7170
    ADD EBX,0x2c                        ; 004c6eeb | DAT_02d14218
        ;   Label: LAB_004c6eeb
    CMP EBX,ESI                         ; 004c6eee
    JNZ 0x004c6ee1                      ; 004c6ef0
        ;   XREF to: 004c6ee1 (CONDITIONAL_JUMP)  ; LAB_004c6ee1
    MOV EBX,0x2d53e00                   ; 004c6ef2 | g_SparkPool
    LEA ESI,[EBX + 0x4c00]              ; 004c6ef7 | g_MuzzleFlashAllocIndex
    FLD float ptr [EBX + 0x18]          ; 004c6efd | DAT_02d53e18 | DAT_02d53e64
        ;   Label: LAB_004c6efd
    FLDZ                                ; 004c6f00
    FCOMPP                              ; 004c6f02
    FNSTSW AX                           ; 004c6f04
    SAHF                                ; 004c6f06
    JNC 0x004c6f13                      ; 004c6f07
        ;   XREF to: 004c6f13 (CONDITIONAL_JUMP)  ; LAB_004c6f13
    PUSH EBX                            ; 004c6f09 | g_SparkPool | DAT_02d53e4c
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c6f0a | DAT_02d53e34 | DAT_02d53e80
    CALL dword ptr [EAX + 0x4]          ; 004c6f0d
    ADD ESP,0x4                         ; 004c6f10
    ADD EBX,0x4c                        ; 004c6f13
        ;   Label: LAB_004c6f13
    CMP EBX,ESI                         ; 004c6f16
    JNZ 0x004c6efd                      ; 004c6f18
        ;   XREF to: 004c6efd (CONDITIONAL_JUMP)  ; LAB_004c6efd
    MOV EBX,0x2d58a04                   ; 004c6f1a | g_MuzzleFlashPool
    LEA ESI,[EBX + 0x730]               ; 004c6f1f | g_GlassParticleAllocIndex
    MOV EAX,dword ptr [EBX]             ; 004c6f25 | g_MuzzleFlashPool | DAT_02d58a60
        ;   Label: LAB_004c6f25
    TEST EAX,EAX                        ; 004c6f27
    JZ 0x004c6f34                       ; 004c6f29
        ;   XREF to: 004c6f34 (CONDITIONAL_JUMP)  ; LAB_004c6f34
    PUSH EBX                            ; 004c6f2b | g_MuzzleFlashPool | DAT_02d58a60
    CALL core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00 ; 004c6f2c
        ;   XREF to: 004c1a00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00(CMuzzleFlash * this_ptr)
    ADD ESP,0x4                         ; 004c6f31
    ADD EBX,0x5c                        ; 004c6f34 | DAT_02d58a60
        ;   Label: LAB_004c6f34
    CMP EBX,ESI                         ; 004c6f37
    JNZ 0x004c6f25                      ; 004c6f39
        ;   XREF to: 004c6f25 (CONDITIONAL_JUMP)  ; LAB_004c6f25
    MOV ECX,dword ptr [0x02d2ddf4]      ; 004c6f3b | g_StakeActiveCount
    XOR ESI,ESI                         ; 004c6f41
    TEST ECX,ECX                        ; 004c6f43
    JLE 0x004c6f70                      ; 004c6f45
        ;   XREF to: 004c6f70 (CONDITIONAL_JUMP)  ; LAB_004c6f70
    MOV EBX,0x2d2ddfc                   ; 004c6f47 | g_StakePool
    MOV EAX,dword ptr [EBX + 0x258]     ; 004c6f4c | DAT_02d2e054 | DAT_02d2e2b4
        ;   Label: LAB_004c6f4c
    TEST EAX,EAX                        ; 004c6f52
    JZ 0x004c6f5f                       ; 004c6f54
        ;   XREF to: 004c6f5f (CONDITIONAL_JUMP)  ; LAB_004c6f5f
    PUSH EBX                            ; 004c6f56 | g_StakePool | DAT_02d2e05c
    CALL core_fire.cpp_CStake_process_FUN_004c0210 ; 004c6f57
        ;   XREF to: 004c0210 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_process_FUN_004c0210(CStake * this_ptr)
    ADD ESP,0x4                         ; 004c6f5c
    MOV EDI,dword ptr [0x02d2ddf4]      ; 004c6f5f | g_StakeActiveCount
        ;   Label: LAB_004c6f5f
    INC ESI                             ; 004c6f65
    ADD EBX,0x260                       ; 004c6f66 | DAT_02d2e05c
    CMP ESI,EDI                         ; 004c6f6c
    JL 0x004c6f4c                       ; 004c6f6e
        ;   XREF to: 004c6f4c (CONDITIONAL_JUMP)  ; LAB_004c6f4c
    MOV EBX,0x2d59138                   ; 004c6f70 | g_GlassParticlePool
        ;   Label: LAB_004c6f70
    LEA ESI,[EBX + 0x9c00]              ; 004c6f75 | g_BulletTrailAllocIndex
    FLD float ptr [EBX + 0x18]          ; 004c6f7b | DAT_02d59150 | DAT_02d591ec
        ;   Label: LAB_004c6f7b
    FLDZ                                ; 004c6f7e
    FCOMPP                              ; 004c6f80
    FNSTSW AX                           ; 004c6f82
    SAHF                                ; 004c6f84
    JNC 0x004c6f91                      ; 004c6f85
        ;   XREF to: 004c6f91 (CONDITIONAL_JUMP)  ; LAB_004c6f91
    PUSH EBX                            ; 004c6f87 | g_GlassParticlePool | DAT_02d591d4
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c6f88 | DAT_02d5916c | DAT_02d59208
    CALL dword ptr [EAX + 0x4]          ; 004c6f8b
    ADD ESP,0x4                         ; 004c6f8e
    ADD EBX,0x9c                        ; 004c6f91
        ;   Label: LAB_004c6f91
    CMP EBX,ESI                         ; 004c6f97
    JNZ 0x004c6f7b                      ; 004c6f99
        ;   XREF to: 004c6f7b (CONDITIONAL_JUMP)  ; LAB_004c6f7b
    MOV EBX,0x2d62d3c                   ; 004c6f9b | g_BulletTrailPool
    LEA ESI,[EBX + 0x168]               ; 004c6fa0 | g_FireballAllocIndex
    MOV EAX,dword ptr [EBX + 0x20]      ; 004c6fa6 | DAT_02d62d5c | DAT_02d62d80
        ;   Label: LAB_004c6fa6
    TEST EAX,EAX                        ; 004c6fa9
    JZ 0x004c6fb6                       ; 004c6fab
        ;   XREF to: 004c6fb6 (CONDITIONAL_JUMP)  ; LAB_004c6fb6
    PUSH EBX                            ; 004c6fad | g_BulletTrailPool | DAT_02d62d60
    CALL core_fire.cpp_CBulletTrail_process_FUN_004c21d0 ; 004c6fae
        ;   XREF to: 004c21d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_process_FUN_004c21d0(CBulletTrail * this_ptr)
    ADD ESP,0x4                         ; 004c6fb3
    ADD EBX,0x24                        ; 004c6fb6 | DAT_02d62d60
        ;   Label: LAB_004c6fb6
    CMP EBX,ESI                         ; 004c6fb9
    JNZ 0x004c6fa6                      ; 004c6fbb
        ;   XREF to: 004c6fa6 (CONDITIONAL_JUMP)  ; LAB_004c6fa6
    MOV EBX,0x2d62ea8                   ; 004c6fbd | g_FireballPool
    LEA ESI,[EBX + 0x2700]              ; 004c6fc2 | g_RockAllocIndex
    FLD float ptr [EBX + 0x18]          ; 004c6fc8 | DAT_02d62ec0 | DAT_02d62f5c
        ;   Label: LAB_004c6fc8
    FLDZ                                ; 004c6fcb
    FCOMPP                              ; 004c6fcd
    FNSTSW AX                           ; 004c6fcf
    SAHF                                ; 004c6fd1
    JNC 0x004c6fde                      ; 004c6fd2
        ;   XREF to: 004c6fde (CONDITIONAL_JUMP)  ; LAB_004c6fde
    PUSH EBX                            ; 004c6fd4 | g_FireballPool | DAT_02d62f44
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c6fd5 | DAT_02d62edc | DAT_02d62f78
    CALL dword ptr [EAX + 0x4]          ; 004c6fd8
    ADD ESP,0x4                         ; 004c6fdb
    ADD EBX,0x9c                        ; 004c6fde
        ;   Label: LAB_004c6fde
    CMP EBX,ESI                         ; 004c6fe4
    JNZ 0x004c6fc8                      ; 004c6fe6
        ;   XREF to: 004c6fc8 (CONDITIONAL_JUMP)  ; LAB_004c6fc8
    MOV EBX,0x2d655ac                   ; 004c6fe8 | g_RockPool
    LEA ESI,[EBX + 0x1200]              ; 004c6fed | g_LaserBeamActiveCount
    FLD float ptr [EBX + 0x18]          ; 004c6ff3 | DAT_02d655c4 | DAT_02d6560c
        ;   Label: LAB_004c6ff3
    FLDZ                                ; 004c6ff6
    FCOMPP                              ; 004c6ff8
    FNSTSW AX                           ; 004c6ffa
    SAHF                                ; 004c6ffc
    JNC 0x004c7009                      ; 004c6ffd
        ;   XREF to: 004c7009 (CONDITIONAL_JUMP)  ; LAB_004c7009
    PUSH EBX                            ; 004c6fff | g_RockPool | DAT_02d655f4
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c7000 | DAT_02d655e0 | DAT_02d65628
    CALL dword ptr [EAX + 0x4]          ; 004c7003
    ADD ESP,0x4                         ; 004c7006
    ADD EBX,0x48                        ; 004c7009
        ;   Label: LAB_004c7009
    CMP EBX,ESI                         ; 004c700c
    JNZ 0x004c6ff3                      ; 004c700e
        ;   XREF to: 004c6ff3 (CONDITIONAL_JUMP)  ; LAB_004c6ff3
    MOV EAX,[0x02d2a1ec]                ; 004c7010 | g_BulletHoleActiveCount
    XOR EBX,ESI                         ; 004c7015
    TEST EAX,EAX                        ; 004c7017
    JLE 0x004c7040                      ; 004c7019
        ;   XREF to: 004c7040 (CONDITIONAL_JUMP)  ; LAB_004c7040
    MOV ESI,0x2d2a1f4                   ; 004c701b | g_BulletHolePool
    PUSH ESI                            ; 004c7020 | g_BulletHolePool | DAT_02d2a230
        ;   Label: LAB_004c7020
    CALL core_fire.cpp_CBulletHole_process_FUN_004bfa00 ; 004c7021
        ;   XREF to: 004bfa00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_process_FUN_004bfa00(CBulletHole * this_ptr)
    INC EBX                             ; 004c7026
    MOV EDX,dword ptr [0x02d2a1ec]      ; 004c7027 | g_BulletHoleActiveCount
    ADD ESP,0x4                         ; 004c702d
    ADD ESI,0x3c                        ; 004c7030
    CMP EBX,EDX                         ; 004c7033
    JL 0x004c7020                       ; 004c7035
        ;   XREF to: 004c7020 (CONDITIONAL_JUMP)  ; LAB_004c7020
    LEA EAX,[EAX]                       ; 004c7037
    LEA EDX,[EDX]                       ; 004c703d
    MOV EBX,0x2d677b4                   ; 004c7040 | g_ExplosionPool
        ;   Label: LAB_004c7040
    LEA ESI,[EBX + 0x118]               ; 004c7045 | g_TossAllocIndex
    PUSH EBX                            ; 004c704b | g_ExplosionPool | DAT_02d677d0
        ;   Label: LAB_004c704b
    CALL core_fire.cpp_CExplosion_process_FUN_004c3ac0 ; 004c704c
        ;   XREF to: 004c3ac0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CExplosion_process_FUN_004c3ac0(CExplosion * this_ptr)
    ADD EBX,0x1c                        ; 004c7051 | DAT_02d677d0
    ADD ESP,0x4                         ; 004c7054
    CMP EBX,ESI                         ; 004c7057
    JNZ 0x004c704b                      ; 004c7059
        ;   XREF to: 004c704b (CONDITIONAL_JUMP)  ; LAB_004c704b
    MOV EBX,0x2d678d0                   ; 004c705b | g_TossPool
    LEA ESI,[EBX + 0x4dd0]              ; 004c7060 | g_CraterAllocIndex
    PUSH EBX                            ; 004c7066 | g_TossPool | DAT_02d67cb4
        ;   Label: LAB_004c7066
    CALL core_fire.cpp_CToss_process_FUN_004c4000 ; 004c7067
        ;   XREF to: 004c4000 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_process_FUN_004c4000(CToss * this_ptr)
    ADD EBX,0x3e4                       ; 004c706c | DAT_02d67cb4
    ADD ESP,0x4                         ; 004c7072
    CMP EBX,ESI                         ; 004c7075
    JNZ 0x004c7066                      ; 004c7077
        ;   XREF to: 004c7066 (CONDITIONAL_JUMP)  ; LAB_004c7066
    MOV EBX,0x2d6c6a4                   ; 004c7079 | g_CraterPool
    LEA ESI,[EBX + 0x8c0]               ; 004c707e | g_GunFlameAllocIndex
    PUSH EBX                            ; 004c7084 | g_CraterPool | DAT_02d6c714
        ;   Label: LAB_004c7084
    CALL core_fire.cpp_CCrater_process_FUN_004c4550 ; 004c7085
        ;   XREF to: 004c4550 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_process_FUN_004c4550(CCrater * this_ptr)
    ADD EBX,0x70                        ; 004c708a | DAT_02d6c714
    ADD ESP,0x4                         ; 004c708d
    CMP EBX,ESI                         ; 004c7090
    JNZ 0x004c7084                      ; 004c7092
        ;   XREF to: 004c7084 (CONDITIONAL_JUMP)  ; LAB_004c7084
    MOV EBX,0x2d6cf68                   ; 004c7094 | g_GunFlamePool
    XOR ESI,ESI                         ; 004c7099
    LEA EDI,[EBX + 0x4650]              ; 004c709b | g_LightningBoltAllocIndex
    TEST dword ptr [EBX],0x7fffffff     ; 004c70a1 | g_GunFlamePool | DAT_02d6cf8c
        ;   Label: LAB_004c70a1
    JZ 0x004c70c0                       ; 004c70a7
        ;   XREF to: 004c70c0 (CONDITIONAL_JUMP)  ; LAB_004c70c0
    TEST ESI,ESI                        ; 004c70a9
    JNZ 0x004c70b7                      ; 004c70ab
        ;   XREF to: 004c70b7 (CONDITIONAL_JUMP)  ; LAB_004c70b7
    CALL core_fire.cpp_initProcess_FUN_004c4b00 ; 004c70ad
        ;   XREF to: 004c4b00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_initProcess_FUN_004c4b00()
    MOV ESI,0x1                         ; 004c70b2
    PUSH EBX                            ; 004c70b7 | g_GunFlamePool | DAT_02d6cf8c
        ;   Label: LAB_004c70b7
    CALL core_fire.cpp_CGunFlame_process_FUN_004c4f60 ; 004c70b8
        ;   XREF to: 004c4f60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_process_FUN_004c4f60(CGunFlame * this_ptr)
    ADD ESP,0x4                         ; 004c70bd
    ADD EBX,0x24                        ; 004c70c0 | DAT_02d6cf8c
        ;   Label: LAB_004c70c0
    CMP EBX,EDI                         ; 004c70c3
    JNZ 0x004c70a1                      ; 004c70c5
        ;   XREF to: 004c70a1 (CONDITIONAL_JUMP)  ; LAB_004c70a1
    MOV EBX,0x2d715bc                   ; 004c70c7 | g_LightningBoltPool
    LEA ESI,[EBX + 0x1b8]               ; 004c70cc | g_TrailAllocIndex
    PUSH EBX                            ; 004c70d2 | g_LightningBoltPool | DAT_02d715e8
        ;   Label: LAB_004c70d2
    CALL core_fire.cpp_CLightningBolt_process_FUN_004c56e0 ; 004c70d3
        ;   XREF to: 004c56e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_process_FUN_004c56e0(CLightningBolt * this_ptr)
    ADD EBX,0x2c                        ; 004c70d8 | DAT_02d715e8
    ADD ESP,0x4                         ; 004c70db
    CMP EBX,ESI                         ; 004c70de
    JNZ 0x004c70d2                      ; 004c70e0
        ;   XREF to: 004c70d2 (CONDITIONAL_JUMP)  ; LAB_004c70d2
    MOV EBX,0x2d71778                   ; 004c70e2 | g_TrailPool
    LEA ESI,[EBX + 0xe10]               ; 004c70e7 | g_ShellAllocIndex
    PUSH EBX                            ; 004c70ed | g_TrailPool | DAT_02d7179c
        ;   Label: LAB_004c70ed
    CALL core_fire.cpp_CTrail_process_FUN_004c5e40 ; 004c70ee
        ;   XREF to: 004c5e40 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_process_FUN_004c5e40(CTrail * this_ptr)
    ADD EBX,0x24                        ; 004c70f3 | DAT_02d7179c
    ADD ESP,0x4                         ; 004c70f6
    CMP EBX,ESI                         ; 004c70f9
    JNZ 0x004c70ed                      ; 004c70fb
        ;   XREF to: 004c70ed (CONDITIONAL_JUMP)  ; LAB_004c70ed
    MOV EBX,0x2d7258c                   ; 004c70fd | g_ShellPool
    LEA ESI,[EBX + 0x1130]              ; 004c7102 | g_PopcornAllocIndex
    PUSH EBX                            ; 004c7108 | g_ShellPool | DAT_02d725e4
        ;   Label: LAB_004c7108
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c7109 | DAT_02d725c0 | DAT_02d72618
    CALL dword ptr [EAX + 0x4]          ; 004c710c
    ADD EBX,0x58                        ; 004c710f
    ADD ESP,0x4                         ; 004c7112
    CMP EBX,ESI                         ; 004c7115
    JNZ 0x004c7108                      ; 004c7117
        ;   XREF to: 004c7108 (CONDITIONAL_JUMP)  ; LAB_004c7108
    MOV EBX,0x2d736c0                   ; 004c7119 | g_PopcornPool
    LEA ESI,[EBX + 0x3800]              ; 004c711e | g_RainDropAllocIndex
    FLD float ptr [EBX + 0x18]          ; 004c7124 | DAT_02d736d8 | DAT_02d73710
        ;   Label: LAB_004c7124
    FLDZ                                ; 004c7127
    FCOMPP                              ; 004c7129
    FNSTSW AX                           ; 004c712b
    SAHF                                ; 004c712d
    JNC 0x004c713a                      ; 004c712e
        ;   XREF to: 004c713a (CONDITIONAL_JUMP)  ; LAB_004c713a
    PUSH EBX                            ; 004c7130 | g_PopcornPool | DAT_02d736f8
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c7131 | DAT_02d736f4 | DAT_02d7372c
    CALL dword ptr [EAX + 0x4]          ; 004c7134
    ADD ESP,0x4                         ; 004c7137
    ADD EBX,0x38                        ; 004c713a
        ;   Label: LAB_004c713a
    CMP EBX,ESI                         ; 004c713d
    JNZ 0x004c7124                      ; 004c713f
        ;   XREF to: 004c7124 (CONDITIONAL_JUMP)  ; LAB_004c7124
    MOV EBX,0x2d76ec4                   ; 004c7141 | g_RainDropPool
    LEA ESI,[EBX + 0x3800]              ; 004c7146 | g_CFlameClassInfo
    FLD float ptr [EBX + 0x18]          ; 004c714c | DAT_02d76edc | DAT_02d76f14
        ;   Label: LAB_004c714c
    FLDZ                                ; 004c714f
    FCOMPP                              ; 004c7151
    FNSTSW AX                           ; 004c7153
    SAHF                                ; 004c7155
    JNC 0x004c7162                      ; 004c7156
        ;   XREF to: 004c7162 (CONDITIONAL_JUMP)  ; LAB_004c7162
    PUSH EBX                            ; 004c7158 | g_RainDropPool | DAT_02d76efc
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c7159 | DAT_02d76ef8 | DAT_02d76f30
    CALL dword ptr [EAX + 0x4]          ; 004c715c
    ADD ESP,0x4                         ; 004c715f
    ADD EBX,0x38                        ; 004c7162
        ;   Label: LAB_004c7162
    CMP EBX,ESI                         ; 004c7165
    JNZ 0x004c714c                      ; 004c7167
        ;   XREF to: 004c714c (CONDITIONAL_JUMP)  ; LAB_004c714c
    MOV ESP,EBP                         ; 004c7169
    POP EBP                             ; 004c716b
    POP EDI                             ; 004c716c
    POP ESI                             ; 004c716d
    POP EBX                             ; 004c716e
    RET                                 ; 004c716f
    PUSH EBX                            ; 004c7170 | g_SmokeParticlePool | DAT_02d14218
        ;   Label: LAB_004c7170
    CALL core_fire.cpp_CSmokeParticle_process_FUN_004bf390 ; 004c7171
        ;   XREF to: 004bf390 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_process_FUN_004bf390(CSmokeParticle * this_ptr)
    ADD ESP,0x4                         ; 004c7176
    JMP 0x004c6eeb                      ; 004c7179
        ;   XREF to: 004c6eeb (UNCONDITIONAL_JUMP)  ; LAB_004c6eeb

