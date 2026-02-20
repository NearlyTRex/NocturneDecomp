; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gun_cpp_CGun_fire_FUN_004f0350(CGun *this_ptr)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x60]:1  local_60
;
; Referenced Globals:
;   TerminatedCString s_s_45_dry_wav_0062e7a0
;   TerminatedCString s_s_45_wav_0062e7ad
;   double DOUBLE_0062e7c3 = 1.5
;   float FLOAT_0062e7cb = -0.125
;   double DOUBLE_0062e7d3 = 10
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CSound* g_CSoundPtr = 03f6af64
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   CFireEffect g_CFireEffectInstance
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_03261388
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_crate.cpp_CCrate_FUN_00448a70
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
;   core_flamecan.cpp_CFlameCan_FUN_004cb340
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
;   core_glass.cpp_CGlass_shatter_FUN_004eaef0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0350
        ;   Label: core_gun.cpp_CGun_fire_FUN_004f0350
    PUSH ESI                            ; 004f0351
    PUSH EDI                            ; 004f0352
    PUSH EBP                            ; 004f0353
    MOV EBP,ESP                         ; 004f0354
    SUB ESP,0x13c                       ; 004f0356
    AND ESP,0xfffffff8                  ; 004f035c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f035f
    LEA EAX,[ESP + 0xf0]                ; 004f0362
    PUSH EAX                            ; 004f0369
    MOV ESI,dword ptr [EBX + 0x154]     ; 004f036a
    PUSH EBX                            ; 004f0370
    CALL dword ptr [ESI + 0xf4]         ; 004f0371
    ADD ESP,0x8                         ; 004f0377
    PUSH EAX                            ; 004f037a
    LEA EAX,[ESP + 0x94]                ; 004f037b
    PUSH EAX                            ; 004f0382
    PUSH EBX                            ; 004f0383
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f0384
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f0389
    PUSH EBX                            ; 004f038c
    CALL core_weapon.cpp_CWeapon_fire_FUN_005ee6e0 ; 004f038d
        ;   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005ee6e0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004f0392
    TEST EAX,EAX                        ; 004f0395
    JZ 0x004f06df                       ; 004f0397
        ;   XREF to: 004f06df (CONDITIONAL_JUMP)  ; LAB_004f06df
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 004f039d
    MOV dword ptr [ESP + 0xb0],EAX      ; 004f03a3
    LEA EAX,[ESP + 0xa8]                ; 004f03aa
    PUSH EAX                            ; 004f03b1
    LEA EAX,[ESP + 0x118]               ; 004f03b2
    PUSH EAX                            ; 004f03b9
    XOR ECX,ECX                         ; 004f03ba
    PUSH EBX                            ; 004f03bc
    MOV dword ptr [ESP + 0xb4],ECX      ; 004f03bd
    MOV dword ptr [ESP + 0xb8],ECX      ; 004f03c4
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004f03cb
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004f03d0
    FLD float ptr [ESP + 0x90]          ; 004f03d3
    FLD float ptr [ESP + 0x94]          ; 004f03da
    FLD float ptr [ESP + 0x98]          ; 004f03e1
    FXCH ST2                            ; 004f03e8
    FADD float ptr [ESP + 0x114]        ; 004f03ea
    FXCH                                ; 004f03f1
    FADD float ptr [ESP + 0x118]        ; 004f03f3
    FXCH ST2                            ; 004f03fa
    FADD float ptr [ESP + 0x11c]        ; 004f03fc
    FXCH                                ; 004f0403
    FSTP float ptr [ESP + 0x9c]         ; 004f0405
    FXCH                                ; 004f040c
    FSTP float ptr [ESP + 0xa0]         ; 004f040e
    FSTP float ptr [ESP + 0xa4]         ; 004f0415
    FLD float ptr [EBX + 0x2e8]         ; 004f041c
    FDIVR double ptr [0x0062e7c3]       ; 004f0422 | DOUBLE_0062e7c3
    FLD float ptr [ESP + 0x114]         ; 004f0428
    FXCH                                ; 004f042f
    FSTP float ptr [ESP + 0x120]        ; 004f0431
    FMUL float ptr [ESP + 0x120]        ; 004f0438
    FLD float ptr [ESP + 0x118]         ; 004f043f
    FMUL float ptr [ESP + 0x120]        ; 004f0446
    FLD float ptr [ESP + 0x11c]         ; 004f044d
    FMUL float ptr [ESP + 0x120]        ; 004f0454
    MOV EDI,dword ptr [0x006810c8]      ; 004f045b | g_CDemonSetPtr
    FLD float ptr [ESP + 0x90]          ; 004f0461
    FLD float ptr [ESP + 0x94]          ; 004f0468
    FLD float ptr [ESP + 0x98]          ; 004f046f
    PUSH EDI                            ; 004f0476 | g_CDemonSetInstance
    FXCH ST5                            ; 004f0477
    FSTP float ptr [ESP + 0x10c]        ; 004f0479
    FXCH ST3                            ; 004f0480
    FSTP float ptr [ESP + 0x110]        ; 004f0482
    FXCH                                ; 004f0489
    FSTP float ptr [ESP + 0x114]        ; 004f048b
    FSUB float ptr [ESP + 0x10c]        ; 004f0492
    FXCH                                ; 004f0499
    FSUB float ptr [ESP + 0x110]        ; 004f049b
    FXCH ST2                            ; 004f04a2
    FSUB float ptr [ESP + 0x114]        ; 004f04a4
    FXCH                                ; 004f04ab
    FSTP float ptr [ESP + 0x70]         ; 004f04ad
    FXCH                                ; 004f04b1
    FSTP float ptr [ESP + 0x74]         ; 004f04b3
    FSTP float ptr [ESP + 0x78]         ; 004f04b7
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 004f04bb
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004f04c0
    PUSH 0x1                            ; 004f04c3
    MOV EAX,[0x006810c8]                ; 004f04c5 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 004f04ca | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 004f04cb
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004f04d0
    PUSH EBX                            ; 004f04d3
    MOV EDX,dword ptr [0x006810c8]      ; 004f04d4 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 004f04da | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004f04db
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x304]     ; 004f04e0
    ADD ESP,0x8                         ; 004f04e6
    TEST ECX,ECX                        ; 004f04e9
    JNZ 0x004f0705                      ; 004f04eb
        ;   XREF to: 004f0705 (CONDITIONAL_JUMP)  ; LAB_004f0705
    XOR EAX,EAX                         ; 004f04f1
        ;   Label: LAB_004f04f1
    MOV dword ptr [ESP + 0x12c],EAX     ; 004f04f3
    LEA EAX,[ESP + 0x9c]                ; 004f04fa
        ;   Label: LAB_004f04fa
    PUSH EAX                            ; 004f0501
    LEA EAX,[ESP + 0x70]                ; 004f0502
    PUSH EAX                            ; 004f0506
    MOV EDX,dword ptr [0x006810c8]      ; 004f0507 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 004f050d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 004f050e
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x144],EAX     ; 004f0513
    FLD float ptr [ESP + 0x144]         ; 004f051a
    ADD ESP,0xc                         ; 004f0521
    FLDZ                                ; 004f0524
    FXCH                                ; 004f0526
    FSTP double ptr [ESP]               ; 004f0528
    FCOMP double ptr [ESP]              ; 004f052b
    FNSTSW AX                           ; 004f052e
    SAHF                                ; 004f0530
    JBE 0x004f071a                      ; 004f0531
        ;   XREF to: 004f071a (CONDITIONAL_JUMP)  ; LAB_004f071a
    MOV EDI,dword ptr [0x006810c8]      ; 004f0537 | g_CDemonSetPtr
        ;   Label: LAB_004f0537
    PUSH EDI                            ; 004f053d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 004f053e
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004f0543
    MOV EAX,dword ptr [ESP + 0x90]      ; 004f0546
    MOV dword ptr [ESP + 0xfc],EAX      ; 004f054d
    MOV EAX,dword ptr [ESP + 0x94]      ; 004f0554
    MOV dword ptr [ESP + 0x100],EAX     ; 004f055b
    MOV EAX,dword ptr [ESP + 0x98]      ; 004f0562
    MOV dword ptr [ESP + 0x104],EAX     ; 004f0569
    LEA EAX,[EBX + 0x3c]                ; 004f0570
    PUSH EAX                            ; 004f0573
    LEA EAX,[ESP + 0x100]               ; 004f0574
    FLD float ptr [ESP + 0x104]         ; 004f057b
    PUSH EAX                            ; 004f0582
    MOV EAX,[0x0067a3d0]                ; 004f0583 | g_CFireEffectPtr | g_CFireEffectInstance
    FADD float ptr [0x0062e7cb]         ; 004f0588 | FLOAT_0062e7cb
    PUSH EAX                            ; 004f058e | g_CFireEffectInstance
    FSTP float ptr [ESP + 0x10c]        ; 004f058f
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60 ; 004f0596
        ;   XREF to: 004c7a60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60(CFireEffect * this_ptr)
    ADD ESP,0xc                         ; 004f059b
    LEA EAX,[ESP + 0x90]                ; 004f059e
    PUSH EAX                            ; 004f05a5
    PUSH 0x62e7ad                       ; 004f05a6 | = "45.wav"
    PUSH EBX                            ; 004f05ab
    MOV EDX,dword ptr [0x00681ef8]      ; 004f05ac | g_CSoundPtr | g_CSoundInstance
    PUSH EDX                            ; 004f05b2 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 004f05b3
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004f05b8
    MOV EDI,0xc0800000                  ; 004f05bb
    MOV ECX,0x40400000                  ; 004f05c0
    PUSH 0x3ec90fdb                     ; 004f05c5
    MOV dword ptr [EBX + 0x300],0x3eaa7efa ; 004f05ca
    PUSH 0xbec90fdb                     ; 004f05d4
    MOV dword ptr [ESP + 0xc8],ECX      ; 004f05d9
    MOV dword ptr [ESP + 0xcc],ECX      ; 004f05e0
    MOV dword ptr [ESP + 0xd0],EDI      ; 004f05e7
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004f05ee
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    LEA EAX,[ESP + 0x90]                ; 004f06df
        ;   Label: LAB_004f06df
    PUSH EAX                            ; 004f06e6
    PUSH 0x62e7a0                       ; 004f06e7 | = "45-dry-!.wav"
    PUSH EBX                            ; 004f06ec
    MOV EDX,dword ptr [0x00681ef8]      ; 004f06ed | g_CSoundPtr | g_CSoundInstance
    PUSH EDX                            ; 004f06f3 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 004f06f4
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004f06f9
    XOR EAX,EAX                         ; 004f06fc
    MOV ESP,EBP                         ; 004f06fe
    POP EBP                             ; 004f0700
    POP EDI                             ; 004f0701
    POP ESI                             ; 004f0702
    POP EBX                             ; 004f0703
    RET                                 ; 004f0704
    PUSH ECX                            ; 004f0705
        ;   Label: LAB_004f0705
    MOV EDI,dword ptr [0x006810c8]      ; 004f0706 | g_CDemonSetPtr
    PUSH EDI                            ; 004f070c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004f070d
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f0712
    JMP 0x004f04f1                      ; 004f0715
        ;   XREF to: 004f04f1 (UNCONDITIONAL_JUMP)  ; LAB_004f04f1
    FLD1                                ; 004f071a
        ;   Label: LAB_004f071a
    FCOMP double ptr [ESP]              ; 004f071c
    FNSTSW AX                           ; 004f071f
    SAHF                                ; 004f0721
    JC 0x004f0537                       ; 004f0722
        ;   XREF to: 004f0537 (CONDITIONAL_JUMP)  ; LAB_004f0537
    MOV ECX,dword ptr [0x00823c4c]      ; 004f0728 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 004f072e | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 004f0733
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004f0734 | DAT_032613bc
    PUSH ESI                            ; 004f073a
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f073b
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f0740
    MOV ESI,EAX                         ; 004f0743
    TEST EAX,EAX                        ; 004f0745
    JZ 0x004f075f                       ; 004f0747
        ;   XREF to: 004f075f (CONDITIONAL_JUMP)  ; LAB_004f075f
    PUSH EAX                            ; 004f0749
    MOV EDI,dword ptr [EAX + 0x154]     ; 004f074a
    CALL dword ptr [EDI + 0x120]        ; 004f0750
    ADD ESP,0x4                         ; 004f0756
    TEST EAX,EAX                        ; 004f0759
    JLE 0x004f075f                      ; 004f075b
        ;   XREF to: 004f075f (CONDITIONAL_JUMP)  ; LAB_004f075f
    XOR ESI,ESI                         ; 004f075d
    MOV EDI,dword ptr [0x02d83360]      ; 004f075f | g_CGlassClassInfo.name_hash
        ;   Label: LAB_004f075f
    MOV EAX,[0x006810c8]                ; 004f0765 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDI                            ; 004f076a
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004f076b | DAT_032613bc
    PUSH EDX                            ; 004f0771
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f0772
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x13c],EAX     ; 004f0777
    ADD ESP,0x8                         ; 004f077e
    MOV ECX,dword ptr [0x03f87490]      ; 004f0781 | g_CTriggerClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 004f0787 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 004f078c
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 004f078d | DAT_032613bc
    PUSH EDI                            ; 004f0793
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f0794
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f0799
    MOV EDI,EAX                         ; 004f079c
    MOV dword ptr [ESP + 0x124],EAX     ; 004f079e
    MOV EAX,[0x0088797c]                ; 004f07a5 | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 004f07aa
    MOV EAX,[0x006810c8]                ; 004f07ab | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004f07b0 | DAT_032613bc
    PUSH EDX                            ; 004f07b6
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f07b7
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x130],EAX     ; 004f07bc
    ADD ESP,0x8                         ; 004f07c3
    MOV ECX,dword ptr [0x02d7a738]      ; 004f07c6 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 004f07cc | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 004f07d1
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004f07d2 | DAT_032613bc
    PUSH EDX                            ; 004f07d8
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f07d9
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f07de
    TEST ESI,ESI                        ; 004f07e1
    JNZ 0x004f0821                      ; 004f07e3
        ;   XREF to: 004f0821 (CONDITIONAL_JUMP)  ; LAB_004f0821
    MOV ECX,dword ptr [ESP + 0x134]     ; 004f07e5
    TEST ECX,ECX                        ; 004f07ec
    JNZ 0x004f0a33                      ; 004f07ee
        ;   XREF to: 004f0a33 (CONDITIONAL_JUMP)  ; LAB_004f0a33
    TEST EDI,EDI                        ; 004f07f4
    JNZ 0x004f0a61                      ; 004f07f6
        ;   XREF to: 004f0a61 (CONDITIONAL_JUMP)  ; LAB_004f0a61
    MOV ESI,dword ptr [ESP + 0x128]     ; 004f07fc
    TEST ESI,ESI                        ; 004f0803
    JNZ 0x004f0abd                      ; 004f0805
        ;   XREF to: 004f0abd (CONDITIONAL_JUMP)  ; LAB_004f0abd
    TEST EAX,EAX                        ; 004f080b
    JZ 0x004f0ae3                       ; 004f080d
        ;   XREF to: 004f0ae3 (CONDITIONAL_JUMP)  ; LAB_004f0ae3
    PUSH EAX                            ; 004f0813
    CALL core_flamecan.cpp_CFlameCan_FUN_004cb340 ; 004f0814
        ;   XREF to: 004cb340 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_FUN_004cb340(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004f0819
    JMP 0x004f0ac6                      ; 004f081c
        ;   XREF to: 004f0ac6 (UNCONDITIONAL_JUMP)  ; LAB_004f0ac6
    PUSH ESI                            ; 004f0821
        ;   Label: LAB_004f0821
    MOV EAX,dword ptr [ESI + 0x154]     ; 004f0822
    CALL dword ptr [EAX + 0xf4]         ; 004f0828
    ADD ESP,0x4                         ; 004f082e
    TEST EAX,EAX                        ; 004f0831
    JZ 0x004f0868                       ; 004f0833
        ;   XREF to: 004f0868 (CONDITIONAL_JUMP)  ; LAB_004f0868
    CMP dword ptr [ESP + 0x12c],0x0     ; 004f0835
    JNZ 0x004f0537                      ; 004f083d
        ;   XREF to: 004f0537 (CONDITIONAL_JUMP)  ; LAB_004f0537
    MOV ESI,dword ptr [EBX + 0x568]     ; 004f0843
    MOV ECX,dword ptr [0x006810c8]      ; 004f0849 | g_CDemonSetPtr | g_CDemonSetInstance
    INC ESI                             ; 004f084f
    PUSH ECX                            ; 004f0850 | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x568],ESI     ; 004f0851
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 004f0857
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004f085c
    XOR EAX,EAX                         ; 004f085f
    MOV ESP,EBP                         ; 004f0861
    POP EBP                             ; 004f0863
    POP EDI                             ; 004f0864
    POP ESI                             ; 004f0865
    POP EBX                             ; 004f0866
    RET                                 ; 004f0867
    LEA EAX,[ESP + 0x8]                 ; 004f0868
        ;   Label: LAB_004f0868
    PUSH EAX                            ; 004f086c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004f086d
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EAX,[0x006810c8]                ; 004f0872 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004f0877
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 004f087a | DAT_032613c0
    MOV dword ptr [ESP + 0x8],EAX       ; 004f0880
    PUSH EBX                            ; 004f0884
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f0885
    CALL dword ptr [EAX + 0x100]        ; 004f088b
    MOV dword ptr [ESP + 0x13c],EAX     ; 004f0891
    MOV EDI,0x3ecccccd                  ; 004f0898
    FLD float ptr [ESP + 0x13c]         ; 004f089d
    ADD ESP,0x4                         ; 004f08a4
    MOV EAX,[0x006810c8]                ; 004f08a7 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x10],EDI      ; 004f08ac
    LEA EDI,[EAX + 0x14d11c]            ; 004f08b0 | DAT_03261394
    FSTP float ptr [ESP + 0xc]          ; 004f08b6
    FLD float ptr [EDI]                 ; 004f08ba | DAT_03261394
    FSUB float ptr [EAX + 0x14d110]     ; 004f08bc | DAT_03261388
    FSTP float ptr [ESP + 0x84]         ; 004f08c2
    FLD float ptr [EDI + 0x4]           ; 004f08c9 | DAT_03261398
    FSUB float ptr [EAX + 0x14d114]     ; 004f08cc | DAT_0326138c
    FST float ptr [ESP + 0x88]          ; 004f08d2
    FMUL float ptr [ESP + 0x88]         ; 004f08d9
    FLD float ptr [ESP + 0x84]          ; 004f08e0
    FMUL ST0                            ; 004f08e7
    FLD float ptr [EDI + 0x8]           ; 004f08e9 | DAT_0326139c
    FSUB float ptr [EAX + 0x14d118]     ; 004f08ec | DAT_03261390
    FXCH                                ; 004f08f2
    FADDP ST2,ST0                       ; 004f08f4
    FST float ptr [ESP + 0x8c]          ; 004f08f6
    FMUL float ptr [ESP + 0x8c]         ; 004f08fd
    FADDP                               ; 004f0904
    FSQRT                               ; 004f0906
    FDIVR double ptr [0x0062e7d3]       ; 004f0908 | DOUBLE_0062e7d3
    FLD float ptr [ESP + 0x84]          ; 004f090e
    FXCH                                ; 004f0915
    FSTP float ptr [ESP + 0x130]        ; 004f0917
    FMUL float ptr [ESP + 0x130]        ; 004f091e
    FLD float ptr [ESP + 0x88]          ; 004f0925
    FMUL float ptr [ESP + 0x130]        ; 004f092c
    FLD float ptr [ESP + 0x8c]          ; 004f0933
    FMUL float ptr [ESP + 0x130]        ; 004f093a
    LEA EDI,[ESP + 0x14]                ; 004f0941
    LEA EAX,[ESP + 0xb4]                ; 004f0945
    FXCH ST2                            ; 004f094c
    FSTP float ptr [ESP + 0xb4]         ; 004f094e
    FSTP float ptr [ESP + 0xb8]         ; 004f0955
    FSTP float ptr [ESP + 0xbc]         ; 004f095c
    CMP EDI,EAX                         ; 004f0963
    JZ 0x004f0988                       ; 004f0965
        ;   XREF to: 004f0988 (CONDITIONAL_JUMP)  ; LAB_004f0988
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004f0967
    MOV dword ptr [ESP + 0x14],EAX      ; 004f096e
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004f0972
    MOV dword ptr [ESP + 0x18],EAX      ; 004f0979
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004f097d
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f0984
    MOV EAX,[0x006810c8]                ; 004f0988 | g_CDemonSetPtr
        ;   Label: LAB_004f0988
    ADD EAX,0x14d138                    ; 004f098d
    PUSH EAX                            ; 004f0992 | DAT_032613b0
    LEA EAX,[ESP + 0xe8]                ; 004f0993
    PUSH EAX                            ; 004f099a
    PUSH ESI                            ; 004f099b
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004f099c
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDI,EAX                         ; 004f09a1
    LEA EAX,[ESP + 0x30]                ; 004f09a3
    ADD ESP,0xc                         ; 004f09a7
    CMP EAX,EDI                         ; 004f09aa
    JZ 0x004f09c2                       ; 004f09ac
        ;   XREF to: 004f09c2 (CONDITIONAL_JUMP)  ; LAB_004f09c2
    MOV EAX,dword ptr [EDI]             ; 004f09ae
    MOV dword ptr [ESP + 0x24],EAX      ; 004f09b0
    MOV EAX,dword ptr [EDI + 0x4]       ; 004f09b4
    MOV dword ptr [ESP + 0x28],EAX      ; 004f09b7
    MOV EAX,dword ptr [EDI + 0x8]       ; 004f09bb
    MOV dword ptr [ESP + 0x2c],EAX      ; 004f09be
    MOV EAX,dword ptr [EBX + 0x56c]     ; 004f09c2
        ;   Label: LAB_004f09c2
    MOV EDX,0x3e19999a                  ; 004f09c8
    MOV dword ptr [ESP + 0x30],EAX      ; 004f09cd
    MOV dword ptr [ESP + 0x34],EDX      ; 004f09d1
    MOV EAX,0x65                        ; 004f09d5
    MOV dword ptr [ESP + 0x3c],EBX      ; 004f09da
    MOV dword ptr [ESP + 0x38],EAX      ; 004f09de
    PUSH EBX                            ; 004f09e2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f09e3
    CALL dword ptr [EAX + 0x8c]         ; 004f09e9
    ADD ESP,0x4                         ; 004f09ef
    MOV dword ptr [ESP + 0x40],EAX      ; 004f09f2
    LEA EAX,[ESP + 0x8]                 ; 004f09f6
    PUSH EAX                            ; 004f09fa
    MOV EDI,dword ptr [ESI + 0x154]     ; 004f09fb
    PUSH ESI                            ; 004f0a01
    CALL dword ptr [EDI + 0x11c]        ; 004f0a02
    MOV ECX,dword ptr [EBX + 0x2e4]     ; 004f0a08
    ADD ESP,0x8                         ; 004f0a0e
    TEST ECX,ECX                        ; 004f0a11
    JZ 0x004f0537                       ; 004f0a13
        ;   XREF to: 004f0537 (CONDITIONAL_JUMP)  ; LAB_004f0537
    MOV EAX,[0x006810c8]                ; 004f0a19 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004f0a1e | DAT_032613bc
    PUSH ESI                            ; 004f0a24
    PUSH EAX                            ; 004f0a25 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004f0a26
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f0a2b
    JMP 0x004f0ac6                      ; 004f0a2e
        ;   XREF to: 004f0ac6 (UNCONDITIONAL_JUMP)  ; LAB_004f0ac6
    PUSH ECX                            ; 004f0a33
        ;   Label: LAB_004f0a33
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0 ; 004f0a34
        ;   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004f0a39
    TEST EAX,EAX                        ; 004f0a3c
    JZ 0x004f0537                       ; 004f0a3e
        ;   XREF to: 004f0537 (CONDITIONAL_JUMP)  ; LAB_004f0537
    MOV EAX,[0x006810c8]                ; 004f0a44 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 004f0a49 | DAT_032613b0
    PUSH EAX                            ; 004f0a4e | DAT_032613b0
    MOV ECX,dword ptr [ESP + 0x138]     ; 004f0a4f
    PUSH ECX                            ; 004f0a56
    CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0 ; 004f0a57
        ;   XREF to: 004eaef0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location)
    ADD ESP,0x8                         ; 004f0a5c
    JMP 0x004f0ac6                      ; 004f0a5f
        ;   XREF to: 004f0ac6 (UNCONDITIONAL_JUMP)  ; LAB_004f0ac6
    PUSH EDI                            ; 004f0a61
        ;   Label: LAB_004f0a61
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0 ; 004f0a62
        ;   XREF to: 005e0aa0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 004f0a67
    PUSH EBX                            ; 004f0a6a
    PUSH EDI                            ; 004f0a6b
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0 ; 004f0a6c
        ;   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0(CTrigger * this_ptr, char * damage_actor_wildcard_name)
    ADD ESP,0x8                         ; 004f0a71
    TEST EAX,EAX                        ; 004f0a74
    JZ 0x004f0aa5                       ; 004f0a76
        ;   XREF to: 004f0aa5 (CONDITIONAL_JUMP)  ; LAB_004f0aa5
    PUSH EBX                            ; 004f0a78
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f0a79
    CALL dword ptr [EAX + 0x100]        ; 004f0a7f
    MOV dword ptr [ESP + 0x13c],EAX     ; 004f0a85
    FLD float ptr [ESP + 0x13c]         ; 004f0a8c
    ADD ESP,0x4                         ; 004f0a93
    SUB ESP,0x4                         ; 004f0a96
    FSTP float ptr [ESP]                ; 004f0a99
    PUSH EDI                            ; 004f0a9c
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00 ; 004f0a9d
        ;   XREF to: 005e0b00 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 004f0aa2
    MOV EDI,dword ptr [ESP + 0x124]     ; 004f0aa5
        ;   Label: LAB_004f0aa5
    PUSH EDI                            ; 004f0aac
    MOV EAX,[0x006810c8]                ; 004f0aad | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 004f0ab2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004f0ab3
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f0ab8
    JMP 0x004f0ac6                      ; 004f0abb
        ;   XREF to: 004f0ac6 (UNCONDITIONAL_JUMP)  ; LAB_004f0ac6
    PUSH ESI                            ; 004f0abd
        ;   Label: LAB_004f0abd
    CALL core_crate.cpp_CCrate_FUN_00448a70 ; 004f0abe
        ;   XREF to: 00448a70 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_CCrate_FUN_00448a70(CCrate * this_ptr)
    ADD ESP,0x4                         ; 004f0ac3
    MOV EDI,dword ptr [ESP + 0x12c]     ; 004f0ac6
        ;   Label: LAB_004f0ac6
    INC EDI                             ; 004f0acd
    MOV dword ptr [ESP + 0x12c],EDI     ; 004f0ace
    CMP EDI,0x4                         ; 004f0ad5
    JL 0x004f04fa                       ; 004f0ad8
        ;   XREF to: 004f04fa (CONDITIONAL_JUMP)  ; LAB_004f04fa
    JMP 0x004f0537                      ; 004f0ade
        ;   XREF to: 004f0537 (UNCONDITIONAL_JUMP)  ; LAB_004f0537
    MOV EAX,[0x006810c8]                ; 004f0ae3 | g_CDemonSetPtr
        ;   Label: LAB_004f0ae3
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 004f0ae8 | DAT_032613bc
    PUSH EDI                            ; 004f0aee
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 004f0aef | DAT_032613ac
    PUSH EDX                            ; 004f0af5
    LEA ESI,[EAX + 0x14d128]            ; 004f0af6 | DAT_032613a0
    PUSH ESI                            ; 004f0afc | DAT_032613a0
    ADD EAX,0x14d138                    ; 004f0afd | DAT_032613b0
    PUSH EAX                            ; 004f0b02 | DAT_032613b0
    MOV ECX,dword ptr [0x0067a3d0]      ; 004f0b03 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH ECX                            ; 004f0b09 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0 ; 004f0b0a
        ;   XREF to: 004c76a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 004f0b0f
    JMP 0x004f0537                      ; 004f0b12
        ;   XREF to: 004f0537 (UNCONDITIONAL_JUMP)  ; LAB_004f0537

