; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_004a7160(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
; Local Variables:
; SDamageInfo      Stack[-0x11c]:60  SStack_11c
; CVector3f        Stack[-0xe0]:12  CStack_e0
; CVector3f        Stack[-0xd4]:12  CStack_d4
; CVector3f        Stack[-0xc8]:12  CStack_c8
; CVector3f        Stack[-0xbc]:12  CStack_bc
; CVector3f        Stack[-0xb0]:12  CStack_b0
; float            Stack[-0xa4]:4  fStack_a4
; float            Stack[-0xa0]:4  fStack_a0
; float            Stack[-0x9c]:4  fStack_9c
; float            Stack[-0x98]:4  fStack_98
; float            Stack[-0x94]:4  fStack_94
; float            Stack[-0x90]:4  fStack_90
; CVector3f        Stack[-0x8c]:12  CStack_8c
; CVector3f        Stack[-0x80]:12  CStack_80
; float            Stack[-0x74]:4  fStack_74
; float            Stack[-0x70]:4  fStack_70
; float            Stack[-0x6c]:4  fStack_6c
; CVector3f[2]     Stack[-0x68]:24  local_68
; float            Stack[-0x48]:4  fStack_48
; float            Stack[-0x44]:4  fStack_44
; CCrate *         Stack[-0x40]:4  pCStack_40
; CFlameCan *      Stack[-0x3c]:4  pCStack_3c
; float            Stack[-0x38]:4  fStack_38
; CTrigger *       Stack[-0x34]:4  pCStack_34
; CGlass *         Stack[-0x30]:4  pCStack_30
; CFlameCan *      Stack[-0x2c]:4  pCStack_2c
; float            Stack[-0x28]:4  fStack_28
; int              Stack[-0x24]:4  iStack_24
; CGlass *         Stack[-0x20]:4  pCStack_20
; float            Stack[-0x1c]:4  fStack_1c
; float            Stack[-0x18]:4  fStack_18
;
; Referenced Globals:
;   TerminatedCString s_shotgun_noammo_wav_00623fd4
;   TerminatedCString s_elephantgun_wav_00623fe7
;   double DOUBLE_00623ffa = 3.14159265350000
;   double DOUBLE_00624002 = 0.00555555555555555
;   float FLOAT_0062400a = -0.125
;   double DOUBLE_00624012 = 1.5
;   double DOUBLE_0062401a = 10
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CSound* g_CSoundPtr = 03f6af64
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   CFireEffect g_CFireEffectInstance
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   ... and 14 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_crate.cpp_CCrate_explode_FUN_00448a70
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
;   core_glass.cpp_CGlass_shatter_FUN_004eaef0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7160
        ;   Label: core_elephant.cpp_CElephantGun_fire_FUN_004a7160
    PUSH ESI                            ; 004a7161
    PUSH EDI                            ; 004a7162
    PUSH EBP                            ; 004a7163
    MOV EBP,ESP                         ; 004a7164
    SUB ESP,0x114                       ; 004a7166
    AND ESP,0xfffffff8                  ; 004a716c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a716f
    LEA ESI,[ESP + 0xc0]                ; 004a7172
    PUSH ESI                            ; 004a7179
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a717a
    PUSH EBX                            ; 004a7180
    CALL dword ptr [EAX + 0xf4]         ; 004a7181
    ADD ESP,0x8                         ; 004a7187
    PUSH EAX                            ; 004a718a
    LEA EAX,[ESP + 0xac]                ; 004a718b
    PUSH EAX                            ; 004a7192
    PUSH EBX                            ; 004a7193
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004a7194
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004a7199
    PUSH EBX                            ; 004a719c
    CALL core_weapon.cpp_CWeapon_fire_FUN_005ee6e0 ; 004a719d
        ;   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005ee6e0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004a71a2
    TEST EAX,EAX                        ; 004a71a5
    JZ 0x004a747f                       ; 004a71a7
        ;   XREF to: 004a747f (CONDITIONAL_JUMP)  ; LAB_004a747f
    FLD float ptr [EBX + 0x578]         ; 004a71ad
    FMUL double ptr [0x00623ffa]        ; 004a71b3 | DOUBLE_00623ffa
    FMUL double ptr [0x00624002]        ; 004a71b9 | DOUBLE_00624002
    FPTAN                               ; 004a71bf
    FSTP ST0                            ; 004a71c1
    PUSH 0xf                            ; 004a71c3
    FMUL float ptr [EBX + 0x2e8]        ; 004a71c5
    PUSH 0xa                            ; 004a71cb
    FSTP float ptr [ESP + 0xec]         ; 004a71cd
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004a71d4
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004a71d9
    XOR ECX,ECX                         ; 004a71dc
    MOV dword ptr [ESP + 0xf0],EAX      ; 004a71de
    MOV dword ptr [ESP + 0xe8],ECX      ; 004a71e5
    TEST EAX,EAX                        ; 004a71ec
    JLE 0x004a7406                      ; 004a71ee
        ;   XREF to: 004a7406 (CONDITIONAL_JUMP)  ; LAB_004a7406
    PUSH 0x40c90fdb                     ; 004a71f4
        ;   Label: LAB_004a71f4
    PUSH 0x0                            ; 004a71f9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004a71fb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x118],EAX     ; 004a7200
    FLD float ptr [ESP + 0x118]         ; 004a7207
    ADD ESP,0x8                         ; 004a720e
    PUSH dword ptr [ESP + 0xe4]         ; 004a7211
    PUSH 0x0                            ; 004a7218
    FSTP float ptr [ESP + 0xe8]         ; 004a721a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004a7221
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x118],EAX     ; 004a7226
    FLD float ptr [ESP + 0x118]         ; 004a722d
    ADD ESP,0x8                         ; 004a7234
    FLD float ptr [ESP + 0xe0]          ; 004a7237
    FLD ST0                             ; 004a723e
    FCOS                                ; 004a7240
    FXCH                                ; 004a7242
    FSIN                                ; 004a7244
    FXCH                                ; 004a7246
    FMUL ST2                            ; 004a7248
    FXCH                                ; 004a724a
    FMULP ST2                           ; 004a724c
    FSTP float ptr [ESP + 0x6c]         ; 004a724e
    FSTP float ptr [ESP + 0x70]         ; 004a7252
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 004a7256
    MOV dword ptr [ESP + 0x74],EAX      ; 004a725c
    LEA EAX,[ESP + 0x6c]                ; 004a7260
    PUSH EAX                            ; 004a7264
    LEA EAX,[ESP + 0x7c]                ; 004a7265
    PUSH EAX                            ; 004a7269
    PUSH EBX                            ; 004a726a
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004a726b
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV ESI,EAX                         ; 004a7270
    LEA EAX,[ESP + 0x78]                ; 004a7272
    ADD ESP,0xc                         ; 004a7276
    CMP EAX,ESI                         ; 004a7279
    JZ 0x004a7291                       ; 004a727b
        ;   XREF to: 004a7291 (CONDITIONAL_JUMP)  ; LAB_004a7291
    MOV EAX,dword ptr [ESI]             ; 004a727d
    MOV dword ptr [ESP + 0x6c],EAX      ; 004a727f
    MOV EAX,dword ptr [ESI + 0x4]       ; 004a7283
    MOV dword ptr [ESP + 0x70],EAX      ; 004a7286
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a728a
    MOV dword ptr [ESP + 0x74],EAX      ; 004a728d
    FLD float ptr [ESP + 0xa8]          ; 004a7291
        ;   Label: LAB_004a7291
    FLD float ptr [ESP + 0xac]          ; 004a7298
    FLD float ptr [ESP + 0xb0]          ; 004a729f
    FXCH ST2                            ; 004a72a6
    FADD float ptr [ESP + 0x6c]         ; 004a72a8
    FXCH                                ; 004a72ac
    FADD float ptr [ESP + 0x70]         ; 004a72ae
    FXCH ST2                            ; 004a72b2
    FADD float ptr [ESP + 0x74]         ; 004a72b4
    FXCH                                ; 004a72b8
    FSTP float ptr [ESP + 0x54]         ; 004a72ba
    FXCH                                ; 004a72be
    FSTP float ptr [ESP + 0x58]         ; 004a72c0
    FSTP float ptr [ESP + 0x5c]         ; 004a72c4
    FLD float ptr [EBX + 0x2e8]         ; 004a72c8
    FDIVR double ptr [0x00624012]       ; 004a72ce | DOUBLE_00624012
    FLD float ptr [ESP + 0x6c]          ; 004a72d4
    FXCH                                ; 004a72d8
    FSTP float ptr [ESP + 0xec]         ; 004a72da
    FMUL float ptr [ESP + 0xec]         ; 004a72e1
    FLD float ptr [ESP + 0x70]          ; 004a72e8
    FMUL float ptr [ESP + 0xec]         ; 004a72ec
    FLD float ptr [ESP + 0x74]          ; 004a72f3
    FMUL float ptr [ESP + 0xec]         ; 004a72f7
    FLD float ptr [ESP + 0xa8]          ; 004a72fe
    FLD float ptr [ESP + 0xac]          ; 004a7305
    MOV ECX,dword ptr [0x006810c8]      ; 004a730c | g_CDemonSetPtr | g_CDemonSetInstance
    FLD float ptr [ESP + 0xb0]          ; 004a7312
    PUSH ECX                            ; 004a7319 | g_CDemonSetInstance
    FXCH ST5                            ; 004a731a
    FSTP float ptr [ESP + 0xb8]         ; 004a731c
    FXCH ST3                            ; 004a7323
    FSTP float ptr [ESP + 0xbc]         ; 004a7325
    FXCH                                ; 004a732c
    FSTP float ptr [ESP + 0xc0]         ; 004a732e
    FSUB float ptr [ESP + 0xb8]         ; 004a7335
    FXCH                                ; 004a733c
    FSUB float ptr [ESP + 0xbc]         ; 004a733e
    FXCH ST2                            ; 004a7345
    FSUB float ptr [ESP + 0xc0]         ; 004a7347
    FXCH                                ; 004a734e
    FSTP float ptr [ESP + 0xa0]         ; 004a7350
    FXCH                                ; 004a7357
    FSTP float ptr [ESP + 0xa4]         ; 004a7359
    FSTP float ptr [ESP + 0xa8]         ; 004a7360
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 004a7367
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004a736c
    PUSH 0x1                            ; 004a736f
    MOV ESI,dword ptr [0x006810c8]      ; 004a7371 | g_CDemonSetPtr
    PUSH ESI                            ; 004a7377 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 004a7378
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004a737d
    PUSH EBX                            ; 004a7380
    MOV EDI,dword ptr [0x006810c8]      ; 004a7381 | g_CDemonSetPtr
    PUSH EDI                            ; 004a7387 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004a7388
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,dword ptr [EBX + 0x304]     ; 004a738d
    ADD ESP,0x8                         ; 004a7393
    TEST EAX,EAX                        ; 004a7396
    JNZ 0x004a74a5                      ; 004a7398
        ;   XREF to: 004a74a5 (CONDITIONAL_JUMP)  ; LAB_004a74a5
    XOR ESI,ESI                         ; 004a739e
        ;   Label: LAB_004a739e
    MOV dword ptr [ESP + 0x104],ESI     ; 004a73a0
    LEA EAX,[ESP + 0x54]                ; 004a73a7
        ;   Label: LAB_004a73a7
    PUSH EAX                            ; 004a73ab
    LEA EAX,[ESP + 0xa0]                ; 004a73ac
    PUSH EAX                            ; 004a73b3
    MOV EDI,dword ptr [0x006810c8]      ; 004a73b4 | g_CDemonSetPtr
    PUSH EDI                            ; 004a73ba | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 004a73bb
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x11c],EAX     ; 004a73c0
    FLD float ptr [ESP + 0x11c]         ; 004a73c7
    ADD ESP,0xc                         ; 004a73ce
    FLDZ                                ; 004a73d1
    FXCH                                ; 004a73d3
    FST float ptr [ESP + 0x8]           ; 004a73d5
    FSTP double ptr [ESP]               ; 004a73d9
    FCOMP double ptr [ESP]              ; 004a73dc
    FNSTSW AX                           ; 004a73df
    SAHF                                ; 004a73e1
    JBE 0x004a74ba                      ; 004a73e2
        ;   XREF to: 004a74ba (CONDITIONAL_JUMP)  ; LAB_004a74ba
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004a73e8
        ;   Label: LAB_004a73e8
    INC ESI                             ; 004a73ef
    MOV EDI,dword ptr [ESP + 0xf0]      ; 004a73f0
    MOV dword ptr [ESP + 0xe8],ESI      ; 004a73f7
    CMP ESI,EDI                         ; 004a73fe
    JL 0x004a71f4                       ; 004a7400
        ;   XREF to: 004a71f4 (CONDITIONAL_JUMP)  ; LAB_004a71f4
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004a7406
        ;   Label: LAB_004a7406
    MOV dword ptr [ESP + 0x60],EAX      ; 004a740d
    MOV EAX,dword ptr [ESP + 0xac]      ; 004a7411
    MOV dword ptr [ESP + 0x64],EAX      ; 004a7418
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004a741c
    MOV dword ptr [ESP + 0x68],EAX      ; 004a7423
    LEA EAX,[EBX + 0x3c]                ; 004a7427
    PUSH EAX                            ; 004a742a
    LEA EAX,[ESP + 0x64]                ; 004a742b
    FLD float ptr [ESP + 0x68]          ; 004a742f
    PUSH EAX                            ; 004a7433
    MOV EAX,[0x0067a3d0]                ; 004a7434 | g_CFireEffectPtr | g_CFireEffectInstance
    FADD float ptr [0x0062400a]         ; 004a7439 | FLOAT_0062400a
    PUSH EAX                            ; 004a743f | g_CFireEffectInstance
    FSTP float ptr [ESP + 0x70]         ; 004a7440
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60 ; 004a7444
        ;   XREF to: 004c7a60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 004a7449
    LEA EAX,[ESP + 0xa8]                ; 004a744c
    PUSH EAX                            ; 004a7453
    PUSH 0x623fe7                       ; 004a7454 | = "elephantgun.wav"
    PUSH EBX                            ; 004a7459
    MOV EDX,dword ptr [0x00681ef8]      ; 004a745a | g_CSoundPtr | g_CSoundInstance
    PUSH EDX                            ; 004a7460 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 004a7461
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 004a7466
    ADD ESP,0x10                        ; 004a746b
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 004a746e
    MOV ESP,EBP                         ; 004a7478
    POP EBP                             ; 004a747a
    POP EDI                             ; 004a747b
    POP ESI                             ; 004a747c
    POP EBX                             ; 004a747d
    RET                                 ; 004a747e
    LEA EAX,[ESP + 0xa8]                ; 004a747f
        ;   Label: LAB_004a747f
    PUSH EAX                            ; 004a7486
    PUSH 0x623fd4                       ; 004a7487 | = "shotgun-noammo.wav"
    PUSH EBX                            ; 004a748c
    MOV EDX,dword ptr [0x00681ef8]      ; 004a748d | g_CSoundPtr | g_CSoundInstance
    PUSH EDX                            ; 004a7493 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 004a7494
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004a7499
    XOR EAX,EAX                         ; 004a749c
    MOV ESP,EBP                         ; 004a749e
    POP EBP                             ; 004a74a0
    POP EDI                             ; 004a74a1
    POP ESI                             ; 004a74a2
    POP EBX                             ; 004a74a3
    RET                                 ; 004a74a4
    PUSH EAX                            ; 004a74a5
        ;   Label: LAB_004a74a5
    MOV ECX,dword ptr [0x006810c8]      ; 004a74a6 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 004a74ac | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004a74ad
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a74b2
    JMP 0x004a739e                      ; 004a74b5
        ;   XREF to: 004a739e (UNCONDITIONAL_JUMP)  ; LAB_004a739e
    FLD1                                ; 004a74ba
        ;   Label: LAB_004a74ba
    FCOMP double ptr [ESP]              ; 004a74bc
    FNSTSW AX                           ; 004a74bf
    SAHF                                ; 004a74c1
    JC 0x004a73e8                       ; 004a74c2
        ;   XREF to: 004a73e8 (CONDITIONAL_JUMP)  ; LAB_004a73e8
    MOV EAX,[0x00823c4c]                ; 004a74c8 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 004a74cd
    MOV EAX,[0x006810c8]                ; 004a74ce | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004a74d3 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004a74d9
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004a74da
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a74df
    MOV ESI,EAX                         ; 004a74e2
    TEST EAX,EAX                        ; 004a74e4
    JZ 0x004a74fe                       ; 004a74e6
        ;   XREF to: 004a74fe (CONDITIONAL_JUMP)  ; LAB_004a74fe
    PUSH EAX                            ; 004a74e8
    MOV EDI,dword ptr [EAX + 0x154]     ; 004a74e9
    CALL dword ptr [EDI + 0x120]        ; 004a74ef
    ADD ESP,0x4                         ; 004a74f5
    TEST EAX,EAX                        ; 004a74f8
    JLE 0x004a74fe                      ; 004a74fa
        ;   XREF to: 004a74fe (CONDITIONAL_JUMP)  ; LAB_004a74fe
    XOR ESI,ESI                         ; 004a74fc
    MOV ECX,dword ptr [0x02d83360]      ; 004a74fe | g_CGlassClassInfo.name_hash
        ;   Label: LAB_004a74fe
    MOV EAX,[0x006810c8]                ; 004a7504 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 004a7509
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 004a750a | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 004a7510
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004a7511
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x110],EAX     ; 004a7516
    ADD ESP,0x8                         ; 004a751d
    MOV EAX,[0x03f87490]                ; 004a7520 | g_CTriggerClassInfo.name_hash
    PUSH EAX                            ; 004a7525
    MOV EAX,[0x006810c8]                ; 004a7526 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004a752b | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004a7531
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004a7532
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ECX,dword ptr [0x0088797c]      ; 004a7537 | g_CCrateClassInfo.name_hash
    ADD ESP,0x8                         ; 004a753d
    MOV EDI,EAX                         ; 004a7540
    MOV dword ptr [ESP + 0xf4],EAX      ; 004a7542
    MOV EAX,[0x006810c8]                ; 004a7549 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 004a754e
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004a754f | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004a7555
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004a7556
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x100],EAX     ; 004a755b
    ADD ESP,0x8                         ; 004a7562
    MOV ECX,dword ptr [0x02d7a738]      ; 004a7565 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 004a756b | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 004a7570
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004a7571 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004a7577
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004a7578
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x104],EAX     ; 004a757d
    ADD ESP,0x8                         ; 004a7584
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a7587
    PUSH EBX                            ; 004a758d
    CALL dword ptr [EAX + 0x100]        ; 004a758e
    MOV dword ptr [ESP + 0x114],EAX     ; 004a7594
    FLD float ptr [ESP + 0x114]         ; 004a759b
    ADD ESP,0x4                         ; 004a75a2
    FLD1                                ; 004a75a5
    FSUB float ptr [ESP + 0x8]          ; 004a75a7
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004a75ab
    FMULP                               ; 004a75b2
    MOV dword ptr [ESP + 0x110],EAX     ; 004a75b4
    FILD dword ptr [ESP + 0x110]        ; 004a75bb
    FDIVP                               ; 004a75c2
    FSTP float ptr [ESP + 0x100]        ; 004a75c4
    TEST ESI,ESI                        ; 004a75cb
    JNZ 0x004a7629                      ; 004a75cd
        ;   XREF to: 004a7629 (CONDITIONAL_JUMP)  ; LAB_004a7629
    MOV ECX,dword ptr [ESP + 0x108]     ; 004a75cf
    TEST ECX,ECX                        ; 004a75d6
    JNZ 0x004a77ea                      ; 004a75d8
        ;   XREF to: 004a77ea (CONDITIONAL_JUMP)  ; LAB_004a77ea
    TEST EDI,EDI                        ; 004a75de
    JZ 0x004a7818                       ; 004a75e0
        ;   XREF to: 004a7818 (CONDITIONAL_JUMP)  ; LAB_004a7818
    PUSH EDI                            ; 004a75e6
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0 ; 004a75e7
        ;   XREF to: 005e0aa0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 004a75ec
    PUSH EBX                            ; 004a75ef
    PUSH EDI                            ; 004a75f0
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0 ; 004a75f1
        ;   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a75f6
    TEST EAX,EAX                        ; 004a75f9
    JZ 0x004a760d                       ; 004a75fb
        ;   XREF to: 004a760d (CONDITIONAL_JUMP)  ; LAB_004a760d
    PUSH dword ptr [ESP + 0x100]        ; 004a75fd
    PUSH EDI                            ; 004a7604
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00 ; 004a7605
        ;   XREF to: 005e0b00 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 004a760a
    MOV EDX,dword ptr [ESP + 0xf4]      ; 004a760d
        ;   Label: LAB_004a760d
    PUSH EDX                            ; 004a7614
    MOV ECX,dword ptr [0x006810c8]      ; 004a7615 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 004a761b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004a761c
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a7621
    JMP 0x004a7842                      ; 004a7624
        ;   XREF to: 004a7842 (UNCONDITIONAL_JUMP)  ; LAB_004a7842
    PUSH ESI                            ; 004a7629
        ;   Label: LAB_004a7629
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a762a
    CALL dword ptr [EAX + 0xf4]         ; 004a7630
    ADD ESP,0x4                         ; 004a7636
    TEST EAX,EAX                        ; 004a7639
    JNZ 0x004a73e8                      ; 004a763b
        ;   XREF to: 004a73e8 (CONDITIONAL_JUMP)  ; LAB_004a73e8
    LEA EAX,[ESP + 0xc]                 ; 004a7641
    PUSH EAX                            ; 004a7645
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004a7646
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EDI,dword ptr [0x006810c8]      ; 004a764b | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004a7651
    MOV EAX,dword ptr [EDI + 0x14d148]  ; 004a7654 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0xc],EAX       ; 004a765a
    MOV EAX,dword ptr [ESP + 0x100]     ; 004a765e
    MOV dword ptr [ESP + 0x10],EAX      ; 004a7665
    MOV dword ptr [ESP + 0x14],0x3ecccccd ; 004a7669
    LEA EAX,[EDI + 0x14d11c]            ; 004a7671 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX]                 ; 004a7677 | g_CDemonSetInstance.ray_target.x
    FSUB float ptr [EDI + 0x14d110]     ; 004a7679 | g_CDemonSetInstance.ray_origin.x
    FSTP float ptr [ESP + 0x90]         ; 004a767f
    FLD float ptr [EAX + 0x4]           ; 004a7686 | g_CDemonSetInstance.ray_target.y
    FSUB float ptr [EDI + 0x14d114]     ; 004a7689 | g_CDemonSetInstance.ray_origin.y
    FST float ptr [ESP + 0x94]          ; 004a768f
    FMUL float ptr [ESP + 0x94]         ; 004a7696
    FLD float ptr [ESP + 0x90]          ; 004a769d
    FMUL ST0                            ; 004a76a4
    FLD float ptr [EAX + 0x8]           ; 004a76a6 | g_CDemonSetInstance.ray_target.z
    FSUB float ptr [EDI + 0x14d118]     ; 004a76a9 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 004a76af
    FADDP ST2,ST0                       ; 004a76b1
    FST float ptr [ESP + 0x98]          ; 004a76b3
    FMUL float ptr [ESP + 0x98]         ; 004a76ba
    FADDP                               ; 004a76c1
    FSQRT                               ; 004a76c3
    FDIVR double ptr [0x0062401a]       ; 004a76c5 | DOUBLE_0062401a
    FLD float ptr [ESP + 0x90]          ; 004a76cb
    FXCH                                ; 004a76d2
    FSTP float ptr [ESP + 0x10c]        ; 004a76d4
    FMUL float ptr [ESP + 0x10c]        ; 004a76db
    FLD float ptr [ESP + 0x94]          ; 004a76e2
    FMUL float ptr [ESP + 0x10c]        ; 004a76e9
    FLD float ptr [ESP + 0x98]          ; 004a76f0
    FMUL float ptr [ESP + 0x10c]        ; 004a76f7
    LEA EDI,[ESP + 0x18]                ; 004a76fe
    LEA EAX,[ESP + 0x84]                ; 004a7702
    FXCH ST2                            ; 004a7709
    FSTP float ptr [ESP + 0x84]         ; 004a770b
    FSTP float ptr [ESP + 0x88]         ; 004a7712
    FSTP float ptr [ESP + 0x8c]         ; 004a7719
    CMP EDI,EAX                         ; 004a7720
    JZ 0x004a7745                       ; 004a7722
        ;   XREF to: 004a7745 (CONDITIONAL_JUMP)  ; LAB_004a7745
    MOV EAX,dword ptr [ESP + 0x84]      ; 004a7724
    MOV dword ptr [ESP + 0x18],EAX      ; 004a772b
    MOV EAX,dword ptr [ESP + 0x88]      ; 004a772f
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a7736
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004a773a
    MOV dword ptr [ESP + 0x20],EAX      ; 004a7741
    MOV EAX,[0x006810c8]                ; 004a7745 | g_CDemonSetPtr
        ;   Label: LAB_004a7745
    ADD EAX,0x14d138                    ; 004a774a
    PUSH EAX                            ; 004a774f | g_CDemonSetInstance.collision_impact_position.x
    LEA EAX,[ESP + 0x4c]                ; 004a7750
    PUSH EAX                            ; 004a7754
    PUSH ESI                            ; 004a7755
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004a7756
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDI,EAX                         ; 004a775b
    LEA EAX,[ESP + 0x34]                ; 004a775d
    ADD ESP,0xc                         ; 004a7761
    CMP EAX,EDI                         ; 004a7764
    JZ 0x004a777c                       ; 004a7766
        ;   XREF to: 004a777c (CONDITIONAL_JUMP)  ; LAB_004a777c
    MOV EAX,dword ptr [EDI]             ; 004a7768
    MOV dword ptr [ESP + 0x28],EAX      ; 004a776a
    MOV EAX,dword ptr [EDI + 0x4]       ; 004a776e
    MOV dword ptr [ESP + 0x2c],EAX      ; 004a7771
    MOV EAX,dword ptr [EDI + 0x8]       ; 004a7775
    MOV dword ptr [ESP + 0x30],EAX      ; 004a7778
    MOV EDX,0x6b                        ; 004a777c
        ;   Label: LAB_004a777c
    MOV EAX,dword ptr [EBX + 0x56c]     ; 004a7781
    MOV ECX,0x3f800000                  ; 004a7787
    MOV dword ptr [ESP + 0x34],EAX      ; 004a778c
    MOV dword ptr [ESP + 0x3c],EDX      ; 004a7790
    MOV dword ptr [ESP + 0x38],ECX      ; 004a7794
    MOV dword ptr [ESP + 0x40],EBX      ; 004a7798
    PUSH EBX                            ; 004a779c
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a779d
    CALL dword ptr [EAX + 0x8c]         ; 004a77a3
    ADD ESP,0x4                         ; 004a77a9
    LEA EDI,[ESP + 0xc]                 ; 004a77ac
    PUSH EDI                            ; 004a77b0
    MOV dword ptr [ESP + 0x48],EAX      ; 004a77b1
    PUSH ESI                            ; 004a77b5
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a77b6
    CALL dword ptr [EAX + 0x11c]        ; 004a77bc
    MOV ESI,dword ptr [EBX + 0x2e4]     ; 004a77c2
    ADD ESP,0x8                         ; 004a77c8
    TEST ESI,ESI                        ; 004a77cb
    JZ 0x004a73e8                       ; 004a77cd
        ;   XREF to: 004a73e8 (CONDITIONAL_JUMP)  ; LAB_004a73e8
    MOV EAX,[0x006810c8]                ; 004a77d3 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 004a77d8 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 004a77de
    PUSH EAX                            ; 004a77df | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004a77e0
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a77e5
    JMP 0x004a7842                      ; 004a77e8
        ;   XREF to: 004a7842 (UNCONDITIONAL_JUMP)  ; LAB_004a7842
    PUSH ECX                            ; 004a77ea
        ;   Label: LAB_004a77ea
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0 ; 004a77eb
        ;   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004a77f0
    TEST EAX,EAX                        ; 004a77f3
    JZ 0x004a73e8                       ; 004a77f5
        ;   XREF to: 004a73e8 (CONDITIONAL_JUMP)  ; LAB_004a73e8
    MOV EAX,[0x006810c8]                ; 004a77fb | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 004a7800 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EAX                            ; 004a7805 | g_CDemonSetInstance.collision_impact_position.x
    MOV EDI,dword ptr [ESP + 0x10c]     ; 004a7806
    PUSH EDI                            ; 004a780d
    CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0 ; 004a780e
        ;   XREF to: 004eaef0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location)
    ADD ESP,0x8                         ; 004a7813
    JMP 0x004a7842                      ; 004a7816
        ;   XREF to: 004a7842 (UNCONDITIONAL_JUMP)  ; LAB_004a7842
    MOV ESI,dword ptr [ESP + 0xf8]      ; 004a7818
        ;   Label: LAB_004a7818
    TEST ESI,ESI                        ; 004a781f
    JNZ 0x004a7839                      ; 004a7821
        ;   XREF to: 004a7839 (CONDITIONAL_JUMP)  ; LAB_004a7839
    MOV EDI,dword ptr [ESP + 0xfc]      ; 004a7823
    TEST EDI,EDI                        ; 004a782a
    JZ 0x004a785f                       ; 004a782c
        ;   XREF to: 004a785f (CONDITIONAL_JUMP)  ; LAB_004a785f
    PUSH EDI                            ; 004a782e
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340 ; 004a782f
        ;   XREF to: 004cb340 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004a7834
    JMP 0x004a7842                      ; 004a7837
        ;   XREF to: 004a7842 (UNCONDITIONAL_JUMP)  ; LAB_004a7842
    PUSH ESI                            ; 004a7839
        ;   Label: LAB_004a7839
    CALL core_crate.cpp_CCrate_explode_FUN_00448a70 ; 004a783a
        ;   XREF to: 00448a70 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_CCrate_explode_FUN_00448a70(CCrate * this_ptr)
    ADD ESP,0x4                         ; 004a783f
    MOV EAX,dword ptr [ESP + 0x104]     ; 004a7842
        ;   Label: LAB_004a7842
    INC EAX                             ; 004a7849
    MOV dword ptr [ESP + 0x104],EAX     ; 004a784a
    CMP EAX,0x4                         ; 004a7851
    JL 0x004a73a7                       ; 004a7854
        ;   XREF to: 004a73a7 (CONDITIONAL_JUMP)  ; LAB_004a73a7
    JMP 0x004a73e8                      ; 004a785a
        ;   XREF to: 004a73e8 (UNCONDITIONAL_JUMP)  ; LAB_004a73e8
    MOV EAX,[0x006810c8]                ; 004a785f | g_CDemonSetPtr
        ;   Label: LAB_004a785f
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004a7864 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004a786a
    MOV ECX,dword ptr [EAX + 0x14d134]  ; 004a786b | g_CDemonSetInstance.ground_type
    PUSH ECX                            ; 004a7871
    LEA ESI,[EAX + 0x14d128]            ; 004a7872 | g_CDemonSetInstance.collision_normal.x
    PUSH ESI                            ; 004a7878 | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 004a7879 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EAX                            ; 004a787e | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [0x0067a3d0]      ; 004a787f | g_CFireEffectPtr
    PUSH ESI                            ; 004a7885 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0 ; 004a7886
        ;   XREF to: 004c76a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 004a788b
    JMP 0x004a73e8                      ; 004a788e
        ;   XREF to: 004a73e8 (UNCONDITIONAL_JUMP)  ; LAB_004a73e8

