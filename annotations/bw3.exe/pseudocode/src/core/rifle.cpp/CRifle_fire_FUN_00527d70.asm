; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_rifle_cpp_CRifle_fire_FUN_00527d70(CRifle *this_ptr)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_shotgun_noammo_wav_005cdb1c+1
;   TerminatedCString s_s_45_wav_005cdb30
;   undefined4 DAT_005cdb39
;   undefined4 DAT_005cdb41
;   undefined4 DAT_005cdb49
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ray_origin.x
;   undefined4 g_CDemonSetInstance.ray_origin.y
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_crate.cpp_FUN_004461c0
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004a2090
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0
;   core_glass.cpp_FUN_004cc040
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90
;   core_setcolid.cpp_FUN_0053ccc0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527d70
        ;   Label: core_rifle.cpp_CRifle_fire_FUN_00527d70
    PUSH ESI                            ; 00527d71
    PUSH EDI                            ; 00527d72
    PUSH EBP                            ; 00527d73
    MOV EBP,ESP                         ; 00527d74
    SUB ESP,0x158                       ; 00527d76
    AND ESP,0xfffffff8                  ; 00527d7c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00527d7f
    PUSH EBX                            ; 00527d82
    MOV EAX,dword ptr [EBX + 0x154]     ; 00527d83
    LEA ESI,[ESP + 0x120]               ; 00527d89
    LEA EDI,[ESP + 0xa8]                ; 00527d90
    CALL dword ptr [EAX + 0xe0]         ; 00527d97
    ADD ESP,0x4                         ; 00527d9d
    LEA EAX,[ESP + 0xa4]                ; 00527da0
    LEA ESI,[ESP + 0x11c]               ; 00527da7
    PUSH EAX                            ; 00527dae
    MOVSD ES:EDI,ESI                    ; 00527daf
    MOVSD ES:EDI,ESI                    ; 00527db0
    MOVSD ES:EDI,ESI                    ; 00527db1
    PUSH EBX                            ; 00527db2
    LEA ESI,[ESP + 0x58]                ; 00527db3
    CALL core_actor.cpp_FUN_00408b80    ; 00527db7
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00527dbc
    LEA EDI,[ESP + 0xd4]                ; 00527dbf
    LEA ESI,[ESP + 0x50]                ; 00527dc6
    PUSH EBX                            ; 00527dca
    MOVSD ES:EDI,ESI                    ; 00527dcb
    MOVSD ES:EDI,ESI                    ; 00527dcc
    MOVSD ES:EDI,ESI                    ; 00527dcd
    CALL core_weapon.cpp_CWeapon_fire_FUN_0057b880 ; 00527dce
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0057b880(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00527dd3
    TEST EAX,EAX                        ; 00527dd6
    JZ 0x00528107                       ; 00527dd8
        ;   XREF to: 00528107 (CONDITIONAL_JUMP)  ; LAB_00528107
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 00527dde
    MOV dword ptr [ESP + 0x94],EAX      ; 00527de4
    LEA EAX,[ESP + 0x8c]                ; 00527deb
    LEA ESI,[ESP + 0x74]                ; 00527df2
    PUSH EAX                            ; 00527df6
    LEA EDI,[ESP + 0xfc]                ; 00527df7
    XOR ECX,ECX                         ; 00527dfe
    PUSH EBX                            ; 00527e00
    MOV dword ptr [ESP + 0x94],ECX      ; 00527e01
    MOV dword ptr [ESP + 0x98],ECX      ; 00527e08
    CALL core_actor.cpp_FUN_00408b00    ; 00527e0f
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 00527e14
    LEA ESI,[ESP + 0x74]                ; 00527e17
    FLD float ptr [ESP + 0xd4]          ; 00527e1b
    FLD float ptr [ESP + 0xd8]          ; 00527e22
    MOVSD ES:EDI,ESI                    ; 00527e29
    MOVSD ES:EDI,ESI                    ; 00527e2a
    MOVSD ES:EDI,ESI                    ; 00527e2b
    FLD float ptr [ESP + 0xdc]          ; 00527e2c
    LEA EDI,[ESP + 0xe0]                ; 00527e33
    LEA ESI,[ESP + 0xb0]                ; 00527e3a
    FXCH ST2                            ; 00527e41
    FADD float ptr [ESP + 0xf8]         ; 00527e43
    FXCH                                ; 00527e4a
    FADD float ptr [ESP + 0xfc]         ; 00527e4c
    FXCH ST2                            ; 00527e53
    FADD float ptr [ESP + 0x100]        ; 00527e55
    FXCH                                ; 00527e5c
    FSTP float ptr [ESP + 0xb0]         ; 00527e5e
    FXCH                                ; 00527e65
    FSTP float ptr [ESP + 0xb4]         ; 00527e67
    FSTP float ptr [ESP + 0xb8]         ; 00527e6e
    MOVSD ES:EDI,ESI                    ; 00527e75
    MOVSD ES:EDI,ESI                    ; 00527e76
    MOVSD ES:EDI,ESI                    ; 00527e77
    FLD float ptr [EBX + 0x2e8]         ; 00527e78
    FDIVR double ptr [0x005cdb39]       ; 00527e7e | DAT_005cdb39
    FLD float ptr [ESP + 0xf8]          ; 00527e84
    FXCH                                ; 00527e8b
    FSTP float ptr [ESP + 0x138]        ; 00527e8d
    FMUL float ptr [ESP + 0x138]        ; 00527e94
    FLD float ptr [ESP + 0xfc]          ; 00527e9b
    FMUL float ptr [ESP + 0x138]        ; 00527ea2
    FLD float ptr [ESP + 0x100]         ; 00527ea9
    FMUL float ptr [ESP + 0x138]        ; 00527eb0
    FLD float ptr [ESP + 0xd4]          ; 00527eb7
    FLD float ptr [ESP + 0xd8]          ; 00527ebe
    LEA EDI,[ESP + 0xec]                ; 00527ec5
    LEA ESI,[ESP + 0x128]               ; 00527ecc
    FXCH ST4                            ; 00527ed3
    FSTP float ptr [ESP + 0x128]        ; 00527ed5
    FXCH ST2                            ; 00527edc
    FSTP float ptr [ESP + 0x12c]        ; 00527ede
    FSTP float ptr [ESP + 0x130]        ; 00527ee5
    MOVSD ES:EDI,ESI                    ; 00527eec
    MOVSD ES:EDI,ESI                    ; 00527eed
    MOVSD ES:EDI,ESI                    ; 00527eee
    FLD float ptr [ESP + 0xdc]          ; 00527eef
    LEA EDI,[ESP + 0x5c]                ; 00527ef6
    LEA ESI,[ESP + 0x104]               ; 00527efa
    FXCH                                ; 00527f01
    FSUB float ptr [ESP + 0xec]         ; 00527f03
    FXCH ST2                            ; 00527f0a
    FSUB float ptr [ESP + 0xf0]         ; 00527f0c
    FXCH                                ; 00527f13
    FSUB float ptr [ESP + 0xf4]         ; 00527f15
    FXCH ST2                            ; 00527f1c
    FSTP float ptr [ESP + 0x104]        ; 00527f1e
    FSTP float ptr [ESP + 0x108]        ; 00527f25
    FSTP float ptr [ESP + 0x10c]        ; 00527f2c
    MOVSD ES:EDI,ESI                    ; 00527f33
    MOVSD ES:EDI,ESI                    ; 00527f34
    MOVSD ES:EDI,ESI                    ; 00527f35
    MOV EDI,dword ptr [0x00603b28]      ; 00527f36 | g_CDemonSetPtr
    PUSH EDI                            ; 00527f3c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00527f3d
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00527f42
    PUSH 0x1                            ; 00527f45
    MOV EAX,[0x00603b28]                ; 00527f47 | g_CDemonSetPtr
    PUSH EAX                            ; 00527f4c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 00527f4d
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00527f52
    PUSH EBX                            ; 00527f55
    MOV EDX,dword ptr [0x00603b28]      ; 00527f56 | g_CDemonSetPtr
    PUSH EDX                            ; 00527f5c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00527f5d
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x304]     ; 00527f62
    ADD ESP,0x8                         ; 00527f68
    TEST ECX,ECX                        ; 00527f6b
    JNZ 0x00528126                      ; 00527f6d
        ;   XREF to: 00528126 (CONDITIONAL_JUMP)  ; LAB_00528126
    XOR EAX,EAX                         ; 00527f73
        ;   Label: LAB_00527f73
    MOV dword ptr [ESP + 0x148],EAX     ; 00527f75
    LEA EAX,[ESP + 0xe0]                ; 00527f7c
        ;   Label: LAB_00527f7c
    PUSH EAX                            ; 00527f83
    LEA EAX,[ESP + 0x60]                ; 00527f84
    PUSH EAX                            ; 00527f88
    MOV EDX,dword ptr [0x00603b28]      ; 00527f89 | g_CDemonSetPtr
    PUSH EDX                            ; 00527f8f | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 00527f90
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x160],EAX     ; 00527f95
    FLD float ptr [ESP + 0x160]         ; 00527f9c
    ADD ESP,0xc                         ; 00527fa3
    FLDZ                                ; 00527fa6
    FXCH                                ; 00527fa8
    FSTP double ptr [ESP]               ; 00527faa
    FCOMP double ptr [ESP]              ; 00527fad
    FNSTSW AX                           ; 00527fb0
    SAHF                                ; 00527fb2
    JA 0x00528153                       ; 00527fb3
        ;   XREF to: 00528153 (CONDITIONAL_JUMP)  ; LAB_00528153
    FLD1                                ; 00527fb9
    FCOMP double ptr [ESP]              ; 00527fbb
    FNSTSW AX                           ; 00527fbe
    SAHF                                ; 00527fc0
    JC 0x00528153                       ; 00527fc1
        ;   XREF to: 00528153 (CONDITIONAL_JUMP)  ; LAB_00528153
    MOV ECX,dword ptr [0x007e2cec]      ; 00527fc7 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x00603b28]                ; 00527fcd | g_CDemonSetPtr
    PUSH ECX                            ; 00527fd2
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 00527fd3 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 00527fd9
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00527fda
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00527fdf
    MOV dword ptr [ESP + 0x150],EAX     ; 00527fe2
    TEST EAX,EAX                        ; 00527fe9
    JZ 0x0052800a                       ; 00527feb
        ;   XREF to: 0052800a (CONDITIONAL_JUMP)  ; LAB_0052800a
    PUSH EAX                            ; 00527fed
    MOV ESI,dword ptr [EAX + 0x154]     ; 00527fee
    CALL dword ptr [ESI + 0x10c]        ; 00527ff4
    ADD ESP,0x4                         ; 00527ffa
    TEST EAX,EAX                        ; 00527ffd
    JLE 0x0052800a                      ; 00527fff
        ;   XREF to: 0052800a (CONDITIONAL_JUMP)  ; LAB_0052800a
    XOR EDI,EDI                         ; 00528001
    MOV dword ptr [ESP + 0x150],EDI     ; 00528003
    MOV EAX,[0x01d22e04]                ; 0052800a | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0052800a
    PUSH EAX                            ; 0052800f
    MOV EAX,[0x00603b28]                ; 00528010 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00528015 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0052801b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0052801c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ECX,dword ptr [0x02cfd894]      ; 00528021 | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 00528027
    MOV EDI,EAX                         ; 0052802a
    MOV EAX,[0x00603b28]                ; 0052802c | g_CDemonSetPtr
    PUSH ECX                            ; 00528031
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 00528032 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 00528038
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00528039
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0052803e
    MOV ESI,EAX                         ; 00528041
    MOV dword ptr [ESP + 0x13c],EAX     ; 00528043
    MOV EAX,[0x007f8fc8]                ; 0052804a | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 0052804f
    MOV EAX,[0x00603b28]                ; 00528050 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00528055 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0052805b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0052805c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x14c],EAX     ; 00528061
    ADD ESP,0x8                         ; 00528068
    MOV ECX,dword ptr [0x01d0cf60]      ; 0052806b | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x00603b28]                ; 00528071 | g_CDemonSetPtr
    PUSH ECX                            ; 00528076
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00528077 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0052807d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0052807e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x148],EAX     ; 00528083
    ADD ESP,0x8                         ; 0052808a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0052808d
    PUSH EBX                            ; 00528093
    CALL dword ptr [EAX + 0xec]         ; 00528094
    MOV dword ptr [ESP + 0x158],EAX     ; 0052809a
    FLD float ptr [ESP + 0x158]         ; 005280a1
    ADD ESP,0x4                         ; 005280a8
    MOV ECX,dword ptr [ESP + 0x150]     ; 005280ab
    FSTP float ptr [ESP + 0x134]        ; 005280b2
    TEST ECX,ECX                        ; 005280b9
    JZ 0x005283e0                       ; 005280bb
        ;   XREF to: 005283e0 (CONDITIONAL_JUMP)  ; LAB_005283e0
    PUSH ECX                            ; 005280c1
    MOV EAX,dword ptr [ECX + 0x154]     ; 005280c2
    CALL dword ptr [EAX + 0xe0]         ; 005280c8
    ADD ESP,0x4                         ; 005280ce
    TEST EAX,EAX                        ; 005280d1
    JZ 0x005281d5                       ; 005280d3
        ;   XREF to: 005281d5 (CONDITIONAL_JUMP)  ; LAB_005281d5
    CMP dword ptr [ESP + 0x148],0x0     ; 005280d9
    JNZ 0x00528153                      ; 005280e1
        ;   XREF to: 00528153 (CONDITIONAL_JUMP)  ; LAB_00528153
    MOV EDX,dword ptr [EBX + 0x568]     ; 005280e3
    MOV EAX,[0x00603b28]                ; 005280e9 | g_CDemonSetPtr
    INC EDX                             ; 005280ee
    PUSH EAX                            ; 005280ef | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x568],EDX     ; 005280f0
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 005280f6
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005280fb
    XOR EAX,EAX                         ; 005280fe
        ;   Label: LAB_005280fe
    MOV ESP,EBP                         ; 00528100
    POP EBP                             ; 00528102
    POP EDI                             ; 00528103
    POP ESI                             ; 00528104
    POP EBX                             ; 00528105
    RET                                 ; 00528106
    LEA EAX,[ESP + 0xd4]                ; 00528107
        ;   Label: LAB_00528107
    PUSH EAX                            ; 0052810e
    PUSH 0x5cdb1d                       ; 0052810f | s_shotgun_noammo_wav_005cdb1c+1
    PUSH EBX                            ; 00528114
    MOV EDX,dword ptr [0x006045f8]      ; 00528115 | DAT_006045f8
    PUSH EDX                            ; 0052811b
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0052811c
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00528121
    JMP 0x005280fe                      ; 00528124
        ;   XREF to: 005280fe (UNCONDITIONAL_JUMP)  ; LAB_005280fe
    PUSH ECX                            ; 00528126
        ;   Label: LAB_00528126
    MOV EDI,dword ptr [0x00603b28]      ; 00528127 | g_CDemonSetPtr
    PUSH EDI                            ; 0052812d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0052812e
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00528133
    JMP 0x00527f73                      ; 00528136
        ;   XREF to: 00527f73 (UNCONDITIONAL_JUMP)  ; LAB_00527f73
    MOV ECX,dword ptr [ESP + 0x148]     ; 0052813b
        ;   Label: LAB_0052813b
    INC ECX                             ; 00528142
    MOV dword ptr [ESP + 0x148],ECX     ; 00528143
    CMP ECX,0x4                         ; 0052814a
    JL 0x00527f7c                       ; 0052814d
        ;   XREF to: 00527f7c (CONDITIONAL_JUMP)  ; LAB_00527f7c
    MOV ECX,dword ptr [0x00603b28]      ; 00528153 | g_CDemonSetPtr
        ;   Label: LAB_00528153
    PUSH ECX                            ; 00528159 | g_CDemonSetInstance
    LEA EDI,[ESP + 0xc0]                ; 0052815a
    LEA ESI,[ESP + 0xd8]                ; 00528161
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00528168
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052816d
    LEA EAX,[EBX + 0x3c]                ; 00528170
    MOVSD ES:EDI,ESI                    ; 00528173
    MOVSD ES:EDI,ESI                    ; 00528174
    MOVSD ES:EDI,ESI                    ; 00528175
    PUSH EAX                            ; 00528176
    FLD float ptr [ESP + 0xc4]          ; 00528177
    LEA EAX,[ESP + 0xc0]                ; 0052817e
    MOV ESI,dword ptr [0x005fc5a0]      ; 00528185 | DAT_005fc5a0
    PUSH EAX                            ; 0052818b
    FADD float ptr [0x005cdb41]         ; 0052818c | DAT_005cdb41
    PUSH ESI                            ; 00528192
    FSTP float ptr [ESP + 0xcc]         ; 00528193
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450 ; 0052819a
        ;   XREF to: 004a2450 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 0052819f
    LEA EAX,[ESP + 0xd4]                ; 005281a2
    PUSH EAX                            ; 005281a9
    PUSH 0x5cdb30                       ; 005281aa | = "45.wav"
    PUSH EBX                            ; 005281af
    MOV EDI,dword ptr [0x006045f8]      ; 005281b0 | DAT_006045f8
    PUSH EDI                            ; 005281b6
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 005281b7
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 005281bc
    ADD ESP,0x10                        ; 005281c1
    MOV dword ptr [EBX + 0x300],0x3fc00000 ; 005281c4
    MOV ESP,EBP                         ; 005281ce
    POP EBP                             ; 005281d0
    POP EDI                             ; 005281d1
    POP ESI                             ; 005281d2
    POP EBX                             ; 005281d3
    RET                                 ; 005281d4
    LEA EAX,[ESP + 0x8]                 ; 005281d5
        ;   Label: LAB_005281d5
    PUSH EAX                            ; 005281d9
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 005281da
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,[0x00603b28]                ; 005281df | g_CDemonSetPtr
    ADD ESP,0x4                         ; 005281e4
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 005281e7 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0x8],EAX       ; 005281ed
    PUSH EBX                            ; 005281f1
    MOV EAX,dword ptr [EBX + 0x154]     ; 005281f2
    CALL dword ptr [EAX + 0xec]         ; 005281f8
    MOV dword ptr [ESP + 0x158],EAX     ; 005281fe
    MOV EDI,0x3ecccccd                  ; 00528205
    FLD float ptr [ESP + 0x158]         ; 0052820a
    MOV EAX,[0x00603b28]                ; 00528211 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 00528216
    LEA ESI,[EAX + 0x14d11c]            ; 00528219
    MOV dword ptr [ESP + 0x10],EDI      ; 0052821f
    FSTP float ptr [ESP + 0xc]          ; 00528223
    FLD float ptr [ESI + 0x4]           ; 00528227 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [ESI + 0x8]           ; 0052822a | g_CDemonSetInstance.ray_target.z
    FLD float ptr [ESI]                 ; 0052822d | g_CDemonSetInstance.ray_target.x
    LEA EDI,[ESP + 0x44]                ; 0052822f
    LEA ESI,[ESP + 0x110]               ; 00528233
    FSUB float ptr [EAX + 0x14d110]     ; 0052823a | g_CDemonSetInstance.ray_origin.x
    FXCH ST2                            ; 00528240
    FSUB float ptr [EAX + 0x14d114]     ; 00528242 | g_CDemonSetInstance.ray_origin.y
    FXCH                                ; 00528248
    FSUB float ptr [EAX + 0x14d118]     ; 0052824a | g_CDemonSetInstance.ray_origin.z
    FXCH ST2                            ; 00528250
    FSTP float ptr [ESP + 0x110]        ; 00528252
    FSTP float ptr [ESP + 0x114]        ; 00528259
    FSTP float ptr [ESP + 0x118]        ; 00528260
    MOVSD ES:EDI,ESI                    ; 00528267
    MOVSD ES:EDI,ESI                    ; 00528268
    MOVSD ES:EDI,ESI                    ; 00528269
    FLD float ptr [ESP + 0x48]          ; 0052826a
    FMUL ST0                            ; 0052826e
    FLD float ptr [ESP + 0x44]          ; 00528270
    FMUL ST0                            ; 00528274
    FADDP                               ; 00528276
    FLD float ptr [ESP + 0x4c]          ; 00528278
    FMUL ST0                            ; 0052827c
    FADDP                               ; 0052827e
    FSQRT                               ; 00528280
    FDIVR double ptr [0x005cdb49]       ; 00528282 | DAT_005cdb49
    FLD float ptr [ESP + 0x44]          ; 00528288
    FXCH                                ; 0052828c
    FSTP float ptr [ESP + 0x14c]        ; 0052828e
    FMUL float ptr [ESP + 0x14c]        ; 00528295
    FLD float ptr [ESP + 0x48]          ; 0052829c
    FMUL float ptr [ESP + 0x14c]        ; 005282a0
    FLD float ptr [ESP + 0x4c]          ; 005282a7
    FMUL float ptr [ESP + 0x14c]        ; 005282ab
    LEA EDI,[ESP + 0x80]                ; 005282b2
    LEA ESI,[ESP + 0x68]                ; 005282b9
    FXCH ST2                            ; 005282bd
    FSTP float ptr [ESP + 0x68]         ; 005282bf
    FSTP float ptr [ESP + 0x6c]         ; 005282c3
    FSTP float ptr [ESP + 0x70]         ; 005282c7
    MOVSD ES:EDI,ESI                    ; 005282cb
    MOVSD ES:EDI,ESI                    ; 005282cc
    MOVSD ES:EDI,ESI                    ; 005282cd
    LEA EAX,[ESP + 0x80]                ; 005282ce
    LEA ESI,[ESP + 0x14]                ; 005282d5
    CMP ESI,EAX                         ; 005282d9
    JZ 0x005282fe                       ; 005282db
        ;   XREF to: 005282fe (CONDITIONAL_JUMP)  ; LAB_005282fe
    MOV EAX,dword ptr [ESP + 0x80]      ; 005282dd
    MOV dword ptr [ESP + 0x14],EAX      ; 005282e4
    MOV EAX,dword ptr [ESP + 0x84]      ; 005282e8
    MOV dword ptr [ESP + 0x18],EAX      ; 005282ef
    MOV EAX,dword ptr [ESP + 0x88]      ; 005282f3
    MOV dword ptr [ESP + 0x1c],EAX      ; 005282fa
    MOV EAX,[0x00603b28]                ; 005282fe | g_CDemonSetPtr
        ;   Label: LAB_005282fe
    ADD EAX,0x14d138                    ; 00528303
    PUSH EAX                            ; 00528308 | g_CDemonSetInstance.collision_impact_position.x
    MOV EAX,dword ptr [ESP + 0x154]     ; 00528309
    PUSH EAX                            ; 00528310
    LEA ESI,[ESP + 0xa0]                ; 00528311
    LEA EDI,[ESP + 0xd0]                ; 00528318
    CALL core_actor.cpp_FUN_00408bf0    ; 0052831f
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0xa0]                ; 00528324
    ADD ESP,0x8                         ; 0052832b
    MOVSD ES:EDI,ESI                    ; 0052832e
    MOVSD ES:EDI,ESI                    ; 0052832f
    MOVSD ES:EDI,ESI                    ; 00528330
    LEA EAX,[ESP + 0xc8]                ; 00528331
    LEA ESI,[ESP + 0x24]                ; 00528338
    CMP ESI,EAX                         ; 0052833c
    JZ 0x00528361                       ; 0052833e
        ;   XREF to: 00528361 (CONDITIONAL_JUMP)  ; LAB_00528361
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00528340
    MOV dword ptr [ESP + 0x24],EAX      ; 00528347
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052834b
    MOV dword ptr [ESP + 0x28],EAX      ; 00528352
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00528356
    MOV dword ptr [ESP + 0x2c],EAX      ; 0052835d
    MOV EDX,0x65                        ; 00528361
        ;   Label: LAB_00528361
    MOV EAX,dword ptr [EBX + 0x56c]     ; 00528366
    MOV ECX,0x3e19999a                  ; 0052836c
    MOV dword ptr [ESP + 0x30],EAX      ; 00528371
    MOV dword ptr [ESP + 0x38],EDX      ; 00528375
    MOV dword ptr [ESP + 0x34],ECX      ; 00528379
    MOV dword ptr [ESP + 0x3c],EBX      ; 0052837d
    PUSH EBX                            ; 00528381
    MOV EAX,dword ptr [EBX + 0x154]     ; 00528382
    CALL dword ptr [EAX + 0x94]         ; 00528388
    ADD ESP,0x4                         ; 0052838e
    MOV dword ptr [ESP + 0x40],EAX      ; 00528391
    LEA EAX,[ESP + 0x8]                 ; 00528395
    MOV ESI,dword ptr [ESP + 0x150]     ; 00528399
    PUSH EAX                            ; 005283a0
    MOV EDI,dword ptr [ESP + 0x154]     ; 005283a1
    MOV ESI,dword ptr [ESI + 0x154]     ; 005283a8
    PUSH EDI                            ; 005283ae
    CALL dword ptr [ESI + 0x108]        ; 005283af
    MOV EAX,dword ptr [EBX + 0x2e4]     ; 005283b5
    ADD ESP,0x8                         ; 005283bb
    TEST EAX,EAX                        ; 005283be
    JZ 0x00528153                       ; 005283c0
        ;   XREF to: 00528153 (CONDITIONAL_JUMP)  ; LAB_00528153
    MOV EAX,[0x00603b28]                ; 005283c6 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005283cb | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 005283d1
    PUSH EAX                            ; 005283d2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 005283d3
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005283d8
    JMP 0x0052813b                      ; 005283db
        ;   XREF to: 0052813b (UNCONDITIONAL_JUMP)  ; LAB_0052813b
    TEST EDI,EDI                        ; 005283e0
        ;   Label: LAB_005283e0
    JNZ 0x00528414                      ; 005283e2
        ;   XREF to: 00528414 (CONDITIONAL_JUMP)  ; LAB_00528414
    TEST ESI,ESI                        ; 005283e4
    JNZ 0x0052843e                      ; 005283e6
        ;   XREF to: 0052843e (CONDITIONAL_JUMP)  ; LAB_0052843e
    MOV ESI,dword ptr [ESP + 0x144]     ; 005283e8
    TEST ESI,ESI                        ; 005283ef
    JNZ 0x00528481                      ; 005283f1
        ;   XREF to: 00528481 (CONDITIONAL_JUMP)  ; LAB_00528481
    MOV EDI,dword ptr [ESP + 0x140]     ; 005283f7
    TEST EDI,EDI                        ; 005283fe
    JZ 0x0052848f                       ; 00528400
        ;   XREF to: 0052848f (CONDITIONAL_JUMP)  ; LAB_0052848f
    PUSH EDI                            ; 00528406
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110 ; 00528407
        ;   XREF to: 004a7110 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0052840c
    JMP 0x0052813b                      ; 0052840f
        ;   XREF to: 0052813b (UNCONDITIONAL_JUMP)  ; LAB_0052813b
    PUSH EDI                            ; 00528414
        ;   Label: LAB_00528414
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0 ; 00528415
        ;   XREF to: 004cc5d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0052841a
    TEST EAX,EAX                        ; 0052841d
    JZ 0x00528153                       ; 0052841f
        ;   XREF to: 00528153 (CONDITIONAL_JUMP)  ; LAB_00528153
    MOV EAX,[0x00603b28]                ; 00528425 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 0052842a
    PUSH EAX                            ; 0052842f | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 00528430
    CALL core_glass.cpp_FUN_004cc040    ; 00528431
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004cc040()
    ADD ESP,0x8                         ; 00528436
    JMP 0x0052813b                      ; 00528439
        ;   XREF to: 0052813b (UNCONDITIONAL_JUMP)  ; LAB_0052813b
    PUSH ESI                            ; 0052843e
        ;   Label: LAB_0052843e
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0 ; 0052843f
        ;   XREF to: 0056edc0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 00528444
    PUSH EBX                            ; 00528447
    PUSH ESI                            ; 00528448
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0 ; 00528449
        ;   XREF to: 0056ede0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0052844e
    TEST EAX,EAX                        ; 00528451
    JZ 0x00528465                       ; 00528453
        ;   XREF to: 00528465 (CONDITIONAL_JUMP)  ; LAB_00528465
    PUSH dword ptr [ESP + 0x134]        ; 00528455
    PUSH ESI                            ; 0052845c
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20 ; 0052845d
        ;   XREF to: 0056ee20 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 00528462
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00528465
        ;   Label: LAB_00528465
    PUSH EDX                            ; 0052846c
    MOV ECX,dword ptr [0x00603b28]      ; 0052846d | g_CDemonSetPtr
    PUSH ECX                            ; 00528473 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00528474
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00528479
    JMP 0x0052813b                      ; 0052847c
        ;   XREF to: 0052813b (UNCONDITIONAL_JUMP)  ; LAB_0052813b
    PUSH ESI                            ; 00528481
        ;   Label: LAB_00528481
    CALL core_crate.cpp_FUN_004461c0    ; 00528482
        ;   XREF to: 004461c0 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_004461c0(CCrate * this_ptr)
    ADD ESP,0x4                         ; 00528487
    JMP 0x0052813b                      ; 0052848a
        ;   XREF to: 0052813b (UNCONDITIONAL_JUMP)  ; LAB_0052813b
    MOV EAX,[0x00603b28]                ; 0052848f | g_CDemonSetPtr
        ;   Label: LAB_0052848f
    PUSH ECX                            ; 00528494
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00528495 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0052849b
    MOV ECX,dword ptr [EAX + 0x14d134]  ; 0052849c | g_CDemonSetInstance.ground_type
    PUSH ECX                            ; 005284a2
    LEA ESI,[EAX + 0x14d128]            ; 005284a3
    PUSH ESI                            ; 005284a9 | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 005284aa
    PUSH EAX                            ; 005284af | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [0x005fc5a0]      ; 005284b0 | DAT_005fc5a0
    PUSH ESI                            ; 005284b6
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_004a2090 ; 005284b7
        ;   XREF to: 004a2090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_004a2090(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x18                        ; 005284bc
    JMP 0x00528153                      ; 005284bf
        ;   XREF to: 00528153 (UNCONDITIONAL_JUMP)  ; LAB_00528153

