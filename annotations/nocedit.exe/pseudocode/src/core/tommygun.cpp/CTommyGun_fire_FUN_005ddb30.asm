; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_005ddb30(CTommyGun *this_ptr)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
; Local Variables:
; SDamageInfo      Stack[-0x148]:60  SStack_148
; CMatrix3x3f      Stack[-0x10c]:36  CStack_10c
; CVector3f        Stack[-0xe4]:12  CStack_e4
; CVector3f        Stack[-0xd8]:12  CStack_d8
; CVector3f        Stack[-0xcc]:12  CStack_cc
; CVector3f        Stack[-0xc0]:12  CStack_c0
; CVector3f        Stack[-0xb4]:12  CStack_b4
; CVector3f        Stack[-0xa8]:12  CStack_a8
; CVector3f        Stack[-0x9c]:12  CStack_9c
; CVector3f        Stack[-0x90]:12  CStack_90
; CVector3f        Stack[-0x84]:12  CStack_84
; CVector3f        Stack[-0x78]:12  CStack_78
; float            Stack[-0x6c]:4  fStack_6c
; float            Stack[-0x68]:4  fStack_68
; float            Stack[-0x64]:4  fStack_64
; CVector3f        Stack[-0x60]:12  local_60
; float            Stack[-0x54]:4  fStack_54
; float            Stack[-0x50]:4  fStack_50
; float            Stack[-0x4c]:4  fStack_4c
; float            Stack[-0x48]:4  fStack_48
; float            Stack[-0x44]:4  fStack_44
; float            Stack[-0x40]:4  fStack_40
; CVector3f        Stack[-0x3c]:12  CStack_3c
; float            Stack[-0x30]:4  fStack_30
; float            Stack[-0x2c]:4  fStack_2c
; CTrigger *       Stack[-0x28]:4  pCStack_28
; CCrate *         Stack[-0x24]:4  pCStack_24
; int              Stack[-0x20]:4  iStack_20
; CGlass *         Stack[-0x1c]:4  pCStack_1c
; float            Stack[-0x18]:4  fStack_18
;
; Referenced Globals:
;   TerminatedCString s_s_45_dry_wav_2_0_006554ad
;   float FLOAT_006554cd = 0.1000000
;   double DOUBLE_006554d1 = 2.5
;   float FLOAT_006554d9 = -0.125
;   double DOUBLE_006554e1 = 10
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   CFireEffect g_CFireEffectInstance
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   undefined4 g_CHeroClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ray_origin.x
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_crate.cpp_CCrate_explode_FUN_00448a70
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
;   core_glass.cpp_CGlass_shatter_FUN_004eaef0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ddb30
        ;   Label: core_tommygun.cpp_CTommyGun_fire_FUN_005ddb30
    PUSH ESI                            ; 005ddb31
    PUSH EDI                            ; 005ddb32
    PUSH EBP                            ; 005ddb33
    MOV EBP,ESP                         ; 005ddb34
    SUB ESP,0x13c                       ; 005ddb36
    AND ESP,0xfffffff8                  ; 005ddb3c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ddb3f
    FLD float ptr [EBX + 0x300]         ; 005ddb42
    FLDZ                                ; 005ddb48
    MOV dword ptr [EBX + 0x578],0x2     ; 005ddb4a
    FCOMPP                              ; 005ddb54
    FNSTSW AX                           ; 005ddb56
    SAHF                                ; 005ddb58
    JNC 0x005ddb64                      ; 005ddb59
        ;   XREF to: 005ddb64 (CONDITIONAL_JUMP)  ; LAB_005ddb64
    XOR EAX,EAX                         ; 005ddb5b
    MOV ESP,EBP                         ; 005ddb5d
    POP EBP                             ; 005ddb5f
    POP EDI                             ; 005ddb60
    POP ESI                             ; 005ddb61
    POP EBX                             ; 005ddb62
    RET                                 ; 005ddb63
    FLD float ptr [EBX + 0x300]         ; 005ddb64
        ;   Label: LAB_005ddb64
    LEA EAX,[ESP + 0xf0]                ; 005ddb6a
    MOV ESI,dword ptr [EBX + 0x154]     ; 005ddb71
    PUSH EAX                            ; 005ddb77
    FADD float ptr [0x006554cd]         ; 005ddb78 | FLOAT_006554cd
    PUSH EBX                            ; 005ddb7e
    FSTP float ptr [EBX + 0x300]        ; 005ddb7f
    CALL dword ptr [ESI + 0xf4]         ; 005ddb85
    ADD ESP,0x8                         ; 005ddb8b
    PUSH EAX                            ; 005ddb8e
    LEA EAX,[ESP + 0xd0]                ; 005ddb8f
    PUSH EAX                            ; 005ddb96
    PUSH EBX                            ; 005ddb97
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005ddb98
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005ddb9d
    PUSH EBX                            ; 005ddba0
    CALL core_weapon.cpp_CWeapon_fire_FUN_005ee6e0 ; 005ddba1
        ;   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005ee6e0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005ddba6
    TEST EAX,EAX                        ; 005ddba9
    JZ 0x005ddecb                       ; 005ddbab
        ;   XREF to: 005ddecb (CONDITIONAL_JUMP)  ; LAB_005ddecb
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 005ddbb1
    MOV dword ptr [ESP + 0x98],EAX      ; 005ddbb7
    LEA EAX,[ESP + 0x90]                ; 005ddbbe
    PUSH EAX                            ; 005ddbc5
    LEA EAX,[ESP + 0x88]                ; 005ddbc6
    PUSH EAX                            ; 005ddbcd
    XOR ECX,ECX                         ; 005ddbce
    PUSH EBX                            ; 005ddbd0
    MOV dword ptr [ESP + 0x9c],ECX      ; 005ddbd1
    MOV dword ptr [ESP + 0xa0],ECX      ; 005ddbd8
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005ddbdf
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005ddbe4
    FLD float ptr [ESP + 0xcc]          ; 005ddbe7
    FLD float ptr [ESP + 0xd0]          ; 005ddbee
    FLD float ptr [ESP + 0xd4]          ; 005ddbf5
    FXCH ST2                            ; 005ddbfc
    FADD float ptr [ESP + 0x84]         ; 005ddbfe
    FXCH                                ; 005ddc05
    FADD float ptr [ESP + 0x88]         ; 005ddc07
    FXCH ST2                            ; 005ddc0e
    FADD float ptr [ESP + 0x8c]         ; 005ddc10
    FXCH                                ; 005ddc17
    FSTP float ptr [ESP + 0x78]         ; 005ddc19
    FXCH                                ; 005ddc1d
    FSTP float ptr [ESP + 0x7c]         ; 005ddc1f
    FSTP float ptr [ESP + 0x80]         ; 005ddc23
    FLD float ptr [EBX + 0x2e8]         ; 005ddc2a
    FDIVR double ptr [0x006554d1]       ; 005ddc30 | DOUBLE_006554d1
    FLD float ptr [ESP + 0x84]          ; 005ddc36
    FXCH                                ; 005ddc3d
    FSTP float ptr [ESP + 0x124]        ; 005ddc3f
    FMUL float ptr [ESP + 0x124]        ; 005ddc46
    FLD float ptr [ESP + 0x88]          ; 005ddc4d
    FMUL float ptr [ESP + 0x124]        ; 005ddc54
    FLD float ptr [ESP + 0x8c]          ; 005ddc5b
    FMUL float ptr [ESP + 0x124]        ; 005ddc62
    MOV EDI,dword ptr [0x006810c8]      ; 005ddc69 | g_CDemonSetPtr
    FLD float ptr [ESP + 0xcc]          ; 005ddc6f
    FLD float ptr [ESP + 0xd0]          ; 005ddc76
    FLD float ptr [ESP + 0xd4]          ; 005ddc7d
    PUSH EDI                            ; 005ddc84 | g_CDemonSetInstance
    FXCH ST5                            ; 005ddc85
    FSTP float ptr [ESP + 0x10c]        ; 005ddc87
    FXCH ST3                            ; 005ddc8e
    FSTP float ptr [ESP + 0x110]        ; 005ddc90
    FXCH                                ; 005ddc97
    FSTP float ptr [ESP + 0x114]        ; 005ddc99
    FSUB float ptr [ESP + 0x10c]        ; 005ddca0
    FXCH                                ; 005ddca7
    FSUB float ptr [ESP + 0x110]        ; 005ddca9
    FXCH ST2                            ; 005ddcb0
    FSUB float ptr [ESP + 0x114]        ; 005ddcb2
    FXCH                                ; 005ddcb9
    FSTP float ptr [ESP + 0xdc]         ; 005ddcbb
    FXCH                                ; 005ddcc2
    FSTP float ptr [ESP + 0xe0]         ; 005ddcc4
    FSTP float ptr [ESP + 0xe4]         ; 005ddccb
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005ddcd2
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005ddcd7
    PUSH 0x1                            ; 005ddcda
    MOV EAX,[0x006810c8]                ; 005ddcdc | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 005ddce1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 005ddce2
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 005ddce7
    PUSH EBX                            ; 005ddcea
    MOV EDX,dword ptr [0x006810c8]      ; 005ddceb | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 005ddcf1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005ddcf2
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x304]     ; 005ddcf7
    ADD ESP,0x8                         ; 005ddcfd
    TEST ECX,ECX                        ; 005ddd00
    JNZ 0x005ddf05                      ; 005ddd02
        ;   XREF to: 005ddf05 (CONDITIONAL_JUMP)  ; LAB_005ddf05
    XOR EAX,EAX                         ; 005ddd08
        ;   Label: LAB_005ddd08
    MOV dword ptr [ESP + 0x130],EAX     ; 005ddd0a
    LEA EAX,[ESP + 0x78]                ; 005ddd11
        ;   Label: LAB_005ddd11
    PUSH EAX                            ; 005ddd15
    LEA EAX,[ESP + 0xdc]                ; 005ddd16
    PUSH EAX                            ; 005ddd1d
    MOV EDX,dword ptr [0x006810c8]      ; 005ddd1e | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 005ddd24 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 005ddd25
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x144],EAX     ; 005ddd2a
    FLD float ptr [ESP + 0x144]         ; 005ddd31
    ADD ESP,0xc                         ; 005ddd38
    FLDZ                                ; 005ddd3b
    FXCH                                ; 005ddd3d
    FSTP double ptr [ESP]               ; 005ddd3f
    FCOMP double ptr [ESP]              ; 005ddd42
    FNSTSW AX                           ; 005ddd45
    SAHF                                ; 005ddd47
    JBE 0x005ddf1a                      ; 005ddd48
        ;   XREF to: 005ddf1a (CONDITIONAL_JUMP)  ; LAB_005ddf1a
    MOV ECX,dword ptr [0x006810c8]      ; 005ddd4e | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_005ddd4e
    PUSH ECX                            ; 005ddd54 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005ddd55
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    MOV ESI,dword ptr [EBX + 0x574]     ; 005ddd5a
    ADD ESP,0x4                         ; 005ddd60
    TEST ESI,ESI                        ; 005ddd63
    JZ 0x005ddebf                       ; 005ddd65
        ;   XREF to: 005ddebf (CONDITIONAL_JUMP)  ; LAB_005ddebf
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005ddd6b
    MOV dword ptr [ESP + 0xb4],EAX      ; 005ddd72
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005ddd79
    MOV dword ptr [ESP + 0xb8],EAX      ; 005ddd80
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005ddd87
    MOV dword ptr [ESP + 0xbc],EAX      ; 005ddd8e
    LEA EAX,[EBX + 0x3c]                ; 005ddd95
    MOV EDI,dword ptr [0x0067a3d0]      ; 005ddd98 | g_CFireEffectPtr
    PUSH EAX                            ; 005ddd9e
    LEA EAX,[ESP + 0xb8]                ; 005ddd9f
    FLD float ptr [ESP + 0xbc]          ; 005ddda6
    PUSH EAX                            ; 005dddad
    FADD float ptr [0x006554d9]         ; 005dddae | FLOAT_006554d9
    PUSH EDI                            ; 005dddb4 | g_CFireEffectInstance
    FSTP float ptr [ESP + 0xc4]         ; 005dddb5
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60 ; 005dddbc
        ;   XREF to: 004c7a60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 005dddc1
    MOV EAX,0x40a00000                  ; 005dddc4
    MOV EDX,0x40c00000                  ; 005dddc9
    PUSH 0x3ec90fdb                     ; 005dddce
    MOV ECX,0xc0c00000                  ; 005dddd3
    PUSH 0xbec90fdb                     ; 005dddd8
    MOV dword ptr [ESP + 0x74],EAX      ; 005ddddd
    MOV dword ptr [ESP + 0x78],EDX      ; 005ddde1
    MOV dword ptr [ESP + 0x7c],ECX      ; 005ddde5
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005ddde9
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,0x1                         ; 005ddebf
        ;   Label: LAB_005ddebf
    MOV ESP,EBP                         ; 005ddec4
    POP EBP                             ; 005ddec6
    POP EDI                             ; 005ddec7
    POP ESI                             ; 005ddec8
    POP EBX                             ; 005ddec9
    RET                                 ; 005ddeca
    PUSH 0x6554ad                       ; 005ddecb | = "45-dry-!.wav @2.0"
        ;   Label: LAB_005ddecb
    MOV dword ptr [EBX + 0x578],EAX     ; 005dded0
    PUSH EBX                            ; 005dded6
    MOV EAX,dword ptr [EBX + 0x154]     ; 005dded7
    CALL dword ptr [EAX + 0x24]         ; 005ddedd
    ADD ESP,0x8                         ; 005ddee0
    MOV EDX,dword ptr [EBX + 0x57c]     ; 005ddee3
    PUSH EDX                            ; 005ddee9
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005ddeea
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005ddeef
    MOV dword ptr [EBX + 0x57c],0x0     ; 005ddef2
    XOR EAX,EAX                         ; 005ddefc
    MOV ESP,EBP                         ; 005ddefe
    POP EBP                             ; 005ddf00
    POP EDI                             ; 005ddf01
    POP ESI                             ; 005ddf02
    POP EBX                             ; 005ddf03
    RET                                 ; 005ddf04
    PUSH ECX                            ; 005ddf05
        ;   Label: LAB_005ddf05
    MOV EDI,dword ptr [0x006810c8]      ; 005ddf06 | g_CDemonSetPtr
    PUSH EDI                            ; 005ddf0c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005ddf0d
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005ddf12
    JMP 0x005ddd08                      ; 005ddf15
        ;   XREF to: 005ddd08 (UNCONDITIONAL_JUMP)  ; LAB_005ddd08
    FLD1                                ; 005ddf1a
        ;   Label: LAB_005ddf1a
    FCOMP double ptr [ESP]              ; 005ddf1c
    FNSTSW AX                           ; 005ddf1f
    SAHF                                ; 005ddf21
    JC 0x005ddd4e                       ; 005ddf22
        ;   XREF to: 005ddd4e (CONDITIONAL_JUMP)  ; LAB_005ddd4e
    MOV ECX,dword ptr [0x00823c4c]      ; 005ddf28 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 005ddf2e | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 005ddf33
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 005ddf34 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 005ddf3a
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005ddf3b
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005ddf40
    MOV ESI,EAX                         ; 005ddf43
    TEST EAX,EAX                        ; 005ddf45
    JZ 0x005ddf5f                       ; 005ddf47
        ;   XREF to: 005ddf5f (CONDITIONAL_JUMP)  ; LAB_005ddf5f
    PUSH EAX                            ; 005ddf49
    MOV EDI,dword ptr [EAX + 0x154]     ; 005ddf4a
    CALL dword ptr [EDI + 0x120]        ; 005ddf50
    ADD ESP,0x4                         ; 005ddf56
    TEST EAX,EAX                        ; 005ddf59
    JLE 0x005ddf5f                      ; 005ddf5b
        ;   XREF to: 005ddf5f (CONDITIONAL_JUMP)  ; LAB_005ddf5f
    XOR ESI,ESI                         ; 005ddf5d
    MOV EDI,dword ptr [0x02d83360]      ; 005ddf5f | g_CGlassClassInfo.name_hash
        ;   Label: LAB_005ddf5f
    MOV EAX,[0x006810c8]                ; 005ddf65 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDI                            ; 005ddf6a
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005ddf6b | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 005ddf71
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005ddf72
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x13c],EAX     ; 005ddf77
    ADD ESP,0x8                         ; 005ddf7e
    MOV ECX,dword ptr [0x03f87490]      ; 005ddf81 | g_CTriggerClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 005ddf87 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 005ddf8c
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 005ddf8d | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 005ddf93
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005ddf94
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005ddf99
    MOV EDI,EAX                         ; 005ddf9c
    MOV dword ptr [ESP + 0x128],EAX     ; 005ddf9e
    MOV EAX,[0x0088797c]                ; 005ddfa5 | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 005ddfaa
    MOV EAX,[0x006810c8]                ; 005ddfab | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005ddfb0 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 005ddfb6
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005ddfb7
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x134],EAX     ; 005ddfbc
    ADD ESP,0x8                         ; 005ddfc3
    MOV ECX,dword ptr [0x02d7a738]      ; 005ddfc6 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 005ddfcc | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 005ddfd1
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005ddfd2 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 005ddfd8
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005ddfd9
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005ddfde
    TEST ESI,ESI                        ; 005ddfe1
    JNZ 0x005de021                      ; 005ddfe3
        ;   XREF to: 005de021 (CONDITIONAL_JUMP)  ; LAB_005de021
    MOV ECX,dword ptr [ESP + 0x134]     ; 005ddfe5
    TEST ECX,ECX                        ; 005ddfec
    JNZ 0x005de24c                      ; 005ddfee
        ;   XREF to: 005de24c (CONDITIONAL_JUMP)  ; LAB_005de24c
    TEST EDI,EDI                        ; 005ddff4
    JNZ 0x005de27a                      ; 005ddff6
        ;   XREF to: 005de27a (CONDITIONAL_JUMP)  ; LAB_005de27a
    MOV ESI,dword ptr [ESP + 0x12c]     ; 005ddffc
    TEST ESI,ESI                        ; 005de003
    JNZ 0x005de2d6                      ; 005de005
        ;   XREF to: 005de2d6 (CONDITIONAL_JUMP)  ; LAB_005de2d6
    TEST EAX,EAX                        ; 005de00b
    JZ 0x005de2fc                       ; 005de00d
        ;   XREF to: 005de2fc (CONDITIONAL_JUMP)  ; LAB_005de2fc
    PUSH EAX                            ; 005de013
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340 ; 005de014
        ;   XREF to: 004cb340 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 005de019
    JMP 0x005de2df                      ; 005de01c
        ;   XREF to: 005de2df (UNCONDITIONAL_JUMP)  ; LAB_005de2df
    PUSH ESI                            ; 005de021
        ;   Label: LAB_005de021
    MOV EAX,dword ptr [ESI + 0x154]     ; 005de022
    CALL dword ptr [EAX + 0xf4]         ; 005de028
    ADD ESP,0x4                         ; 005de02e
    TEST EAX,EAX                        ; 005de031
    JZ 0x005de081                       ; 005de033
        ;   XREF to: 005de081 (CONDITIONAL_JUMP)  ; LAB_005de081
    MOV EDI,dword ptr [0x02db880c]      ; 005de035 | g_CHeroClassInfo.name_hash
    PUSH EDI                            ; 005de03b
    MOV EAX,dword ptr [EBX + 0x304]     ; 005de03c
    PUSH EAX                            ; 005de042
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005de043
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005de048
    TEST EAX,EAX                        ; 005de04b
    JZ 0x005de081                       ; 005de04d
        ;   XREF to: 005de081 (CONDITIONAL_JUMP)  ; LAB_005de081
    CMP dword ptr [ESP + 0x130],0x0     ; 005de04f
    JNZ 0x005ddd4e                      ; 005de057
        ;   XREF to: 005ddd4e (CONDITIONAL_JUMP)  ; LAB_005ddd4e
    MOV EDX,dword ptr [EBX + 0x568]     ; 005de05d
    MOV EAX,[0x006810c8]                ; 005de063 | g_CDemonSetPtr | g_CDemonSetInstance
    INC EDX                             ; 005de068
    PUSH EAX                            ; 005de069 | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x568],EDX     ; 005de06a
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005de070
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005de075
    XOR EAX,EAX                         ; 005de078
    MOV ESP,EBP                         ; 005de07a
    POP EBP                             ; 005de07c
    POP EDI                             ; 005de07d
    POP ESI                             ; 005de07e
    POP EBX                             ; 005de07f
    RET                                 ; 005de080
    LEA EAX,[ESP + 0x8]                 ; 005de081
        ;   Label: LAB_005de081
    PUSH EAX                            ; 005de085
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005de086
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EAX,[0x006810c8]                ; 005de08b | g_CDemonSetPtr
    ADD ESP,0x4                         ; 005de090
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 005de093 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0x8],EAX       ; 005de099
    PUSH EBX                            ; 005de09d
    MOV EAX,dword ptr [EBX + 0x154]     ; 005de09e
    CALL dword ptr [EAX + 0x100]        ; 005de0a4
    MOV dword ptr [ESP + 0x13c],EAX     ; 005de0aa
    MOV EDX,0x3ecccccd                  ; 005de0b1
    FLD float ptr [ESP + 0x13c]         ; 005de0b6
    MOV EAX,[0x006810c8]                ; 005de0bd | g_CDemonSetPtr
    ADD ESP,0x4                         ; 005de0c2
    LEA EDI,[EAX + 0x14d11c]            ; 005de0c5 | g_CDemonSetInstance.ray_target.x
    MOV dword ptr [ESP + 0x10],EDX      ; 005de0cb
    FSTP float ptr [ESP + 0xc]          ; 005de0cf
    FLD float ptr [EDI]                 ; 005de0d3 | g_CDemonSetInstance.ray_target.x
    FSUB float ptr [EAX + 0x14d110]     ; 005de0d5 | g_CDemonSetInstance.ray_origin.x
    FSTP float ptr [ESP + 0xfc]         ; 005de0db
    FLD float ptr [EDI + 0x4]           ; 005de0e2 | g_CDemonSetInstance.ray_target.y
    FSUB float ptr [EAX + 0x14d114]     ; 005de0e5 | g_CDemonSetInstance.ray_origin.y
    FST float ptr [ESP + 0x100]         ; 005de0eb
    FMUL float ptr [ESP + 0x100]        ; 005de0f2
    FLD float ptr [ESP + 0xfc]          ; 005de0f9
    FMUL ST0                            ; 005de100
    FLD float ptr [EDI + 0x8]           ; 005de102 | g_CDemonSetInstance.ray_target.z
    FSUB float ptr [EAX + 0x14d118]     ; 005de105 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 005de10b
    FADDP ST2,ST0                       ; 005de10d
    FST float ptr [ESP + 0x104]         ; 005de10f
    FMUL float ptr [ESP + 0x104]        ; 005de116
    FADDP                               ; 005de11d
    FSQRT                               ; 005de11f
    FDIVR double ptr [0x006554e1]       ; 005de121 | DOUBLE_006554e1
    FLD float ptr [ESP + 0xfc]          ; 005de127
    FXCH                                ; 005de12e
    FSTP float ptr [ESP + 0x120]        ; 005de130
    FMUL float ptr [ESP + 0x120]        ; 005de137
    FLD float ptr [ESP + 0x100]         ; 005de13e
    FMUL float ptr [ESP + 0x120]        ; 005de145
    FLD float ptr [ESP + 0x104]         ; 005de14c
    FMUL float ptr [ESP + 0x120]        ; 005de153
    LEA EDI,[ESP + 0xe4]                ; 005de15a
    LEA EAX,[ESP + 0x14]                ; 005de161
    FXCH ST2                            ; 005de165
    FSTP float ptr [ESP + 0xe4]         ; 005de167
    FSTP float ptr [ESP + 0xe8]         ; 005de16e
    FSTP float ptr [ESP + 0xec]         ; 005de175
    CMP EAX,EDI                         ; 005de17c
    JZ 0x005de1a1                       ; 005de17e
        ;   XREF to: 005de1a1 (CONDITIONAL_JUMP)  ; LAB_005de1a1
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005de180
    MOV dword ptr [ESP + 0x14],EAX      ; 005de187
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005de18b
    MOV dword ptr [ESP + 0x18],EAX      ; 005de192
    MOV EAX,dword ptr [ESP + 0xec]      ; 005de196
    MOV dword ptr [ESP + 0x1c],EAX      ; 005de19d
    MOV EAX,[0x006810c8]                ; 005de1a1 | g_CDemonSetPtr
        ;   Label: LAB_005de1a1
    ADD EAX,0x14d138                    ; 005de1a6
    PUSH EAX                            ; 005de1ab | g_CDemonSetInstance.collision_impact_position.x
    LEA EAX,[ESP + 0x118]               ; 005de1ac
    PUSH EAX                            ; 005de1b3
    PUSH ESI                            ; 005de1b4
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005de1b5
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDI,EAX                         ; 005de1ba
    LEA EAX,[ESP + 0x30]                ; 005de1bc
    ADD ESP,0xc                         ; 005de1c0
    CMP EAX,EDI                         ; 005de1c3
    JZ 0x005de1db                       ; 005de1c5
        ;   XREF to: 005de1db (CONDITIONAL_JUMP)  ; LAB_005de1db
    MOV EAX,dword ptr [EDI]             ; 005de1c7
    MOV dword ptr [ESP + 0x24],EAX      ; 005de1c9
    MOV EAX,dword ptr [EDI + 0x4]       ; 005de1cd
    MOV dword ptr [ESP + 0x28],EAX      ; 005de1d0
    MOV EAX,dword ptr [EDI + 0x8]       ; 005de1d4
    MOV dword ptr [ESP + 0x2c],EAX      ; 005de1d7
    MOV ECX,0x65                        ; 005de1db
        ;   Label: LAB_005de1db
    MOV EAX,dword ptr [EBX + 0x56c]     ; 005de1e0
    MOV EDI,0x3e19999a                  ; 005de1e6
    MOV dword ptr [ESP + 0x30],EAX      ; 005de1eb
    MOV dword ptr [ESP + 0x38],ECX      ; 005de1ef
    MOV dword ptr [ESP + 0x34],EDI      ; 005de1f3
    MOV dword ptr [ESP + 0x3c],EBX      ; 005de1f7
    PUSH EBX                            ; 005de1fb
    MOV EAX,dword ptr [EBX + 0x154]     ; 005de1fc
    CALL dword ptr [EAX + 0x8c]         ; 005de202
    ADD ESP,0x4                         ; 005de208
    MOV dword ptr [ESP + 0x40],EAX      ; 005de20b
    LEA EAX,[ESP + 0x8]                 ; 005de20f
    PUSH EAX                            ; 005de213
    MOV EDI,dword ptr [ESI + 0x154]     ; 005de214
    PUSH ESI                            ; 005de21a
    CALL dword ptr [EDI + 0x11c]        ; 005de21b
    MOV EAX,dword ptr [EBX + 0x2e4]     ; 005de221
    ADD ESP,0x8                         ; 005de227
    TEST EAX,EAX                        ; 005de22a
    JZ 0x005ddd4e                       ; 005de22c
        ;   XREF to: 005ddd4e (CONDITIONAL_JUMP)  ; LAB_005ddd4e
    MOV EAX,[0x006810c8]                ; 005de232 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005de237 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 005de23d
    PUSH EAX                            ; 005de23e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005de23f
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005de244
    JMP 0x005de2df                      ; 005de247
        ;   XREF to: 005de2df (UNCONDITIONAL_JUMP)  ; LAB_005de2df
    PUSH ECX                            ; 005de24c
        ;   Label: LAB_005de24c
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0 ; 005de24d
        ;   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 005de252
    TEST EAX,EAX                        ; 005de255
    JZ 0x005ddd4e                       ; 005de257
        ;   XREF to: 005ddd4e (CONDITIONAL_JUMP)  ; LAB_005ddd4e
    MOV EAX,[0x006810c8]                ; 005de25d | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 005de262 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EAX                            ; 005de267 | g_CDemonSetInstance.collision_impact_position.x
    MOV ECX,dword ptr [ESP + 0x138]     ; 005de268
    PUSH ECX                            ; 005de26f
    CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0 ; 005de270
        ;   XREF to: 004eaef0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location)
    ADD ESP,0x8                         ; 005de275
    JMP 0x005de2df                      ; 005de278
        ;   XREF to: 005de2df (UNCONDITIONAL_JUMP)  ; LAB_005de2df
    PUSH EDI                            ; 005de27a
        ;   Label: LAB_005de27a
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0 ; 005de27b
        ;   XREF to: 005e0aa0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 005de280
    PUSH EBX                            ; 005de283
    PUSH EDI                            ; 005de284
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0 ; 005de285
        ;   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005de28a
    TEST EAX,EAX                        ; 005de28d
    JZ 0x005de2be                       ; 005de28f
        ;   XREF to: 005de2be (CONDITIONAL_JUMP)  ; LAB_005de2be
    PUSH EBX                            ; 005de291
    MOV EAX,dword ptr [EBX + 0x154]     ; 005de292
    CALL dword ptr [EAX + 0x100]        ; 005de298
    MOV dword ptr [ESP + 0x13c],EAX     ; 005de29e
    FLD float ptr [ESP + 0x13c]         ; 005de2a5
    ADD ESP,0x4                         ; 005de2ac
    SUB ESP,0x4                         ; 005de2af
    FSTP float ptr [ESP]                ; 005de2b2
    PUSH EDI                            ; 005de2b5
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00 ; 005de2b6
        ;   XREF to: 005e0b00 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 005de2bb
    MOV EDI,dword ptr [ESP + 0x128]     ; 005de2be
        ;   Label: LAB_005de2be
    PUSH EDI                            ; 005de2c5
    MOV EAX,[0x006810c8]                ; 005de2c6 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 005de2cb | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005de2cc
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005de2d1
    JMP 0x005de2df                      ; 005de2d4
        ;   XREF to: 005de2df (UNCONDITIONAL_JUMP)  ; LAB_005de2df
    PUSH ESI                            ; 005de2d6
        ;   Label: LAB_005de2d6
    CALL core_crate.cpp_CCrate_explode_FUN_00448a70 ; 005de2d7
        ;   XREF to: 00448a70 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_CCrate_explode_FUN_00448a70(CCrate * this_ptr)
    ADD ESP,0x4                         ; 005de2dc
    MOV ECX,dword ptr [ESP + 0x130]     ; 005de2df
        ;   Label: LAB_005de2df
    INC ECX                             ; 005de2e6
    MOV dword ptr [ESP + 0x130],ECX     ; 005de2e7
    CMP ECX,0x4                         ; 005de2ee
    JL 0x005ddd11                       ; 005de2f1
        ;   XREF to: 005ddd11 (CONDITIONAL_JUMP)  ; LAB_005ddd11
    JMP 0x005ddd4e                      ; 005de2f7
        ;   XREF to: 005ddd4e (UNCONDITIONAL_JUMP)  ; LAB_005ddd4e
    MOV EAX,[0x006810c8]                ; 005de2fc | g_CDemonSetPtr
        ;   Label: LAB_005de2fc
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 005de301 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 005de307
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 005de308 | g_CDemonSetInstance.ground_type
    PUSH EDX                            ; 005de30e
    LEA ESI,[EAX + 0x14d128]            ; 005de30f | g_CDemonSetInstance.collision_normal.x
    PUSH ESI                            ; 005de315 | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 005de316 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EAX                            ; 005de31b | g_CDemonSetInstance.collision_impact_position.x
    MOV ECX,dword ptr [0x0067a3d0]      ; 005de31c | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH ECX                            ; 005de322 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0 ; 005de323
        ;   XREF to: 004c76a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 005de328
    JMP 0x005ddd4e                      ; 005de32b
        ;   XREF to: 005ddd4e (UNCONDITIONAL_JUMP)  ; LAB_005ddd4e

