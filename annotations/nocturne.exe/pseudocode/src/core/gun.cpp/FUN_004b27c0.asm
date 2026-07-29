; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_gun_cpp_FUN_004b27c0(CCharacter *param_1)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
;
; Referenced Globals:
;   TerminatedCString s_s_45_dry_wav_0058540a
;   TerminatedCString s_s_45_wav_00585417
;   TerminatedCString s_gatbullet_kfm_0058541e
;   double DOUBLE_0058542d = 1.5
;   double DOUBLE_00585435 = 1.57491875110704E-314
;   double DOUBLE_0058543d = 10
;   undefined4 DAT_005b80f0
;   int INT_005b9284 = 0x1c70f74
;   undefined4 DAT_005be368
;   undefined4 DAT_005bed68
;   undefined4 g_CCharacterActorType_00765a60.name_hash
;   undefined4 g_CCrateActorType_0077bd40.name_hash
;   undefined4 g_CFlameCanActorType_01c70654.name_hash
;   undefined4 g_CGlassActorType_01c78c40.name_hash
;   undefined4 DAT_01cae0e8
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_crate.cpp_CCrate_explode_FUN_0043cdb0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dmodel.cpp_loadModel_FUN_004543b0
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
;   core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0
;   core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
;   core_glass.cpp_CGlass_shatter_FUN_004ada20
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b27c0
        ;   Label: core_gun.cpp_FUN_004b27c0
    PUSH ESI                            ; 004b27c1
    PUSH EDI                            ; 004b27c2
    PUSH EBP                            ; 004b27c3
    MOV EBP,ESP                         ; 004b27c4
    SUB ESP,0x13c                       ; 004b27c6
    AND ESP,0xfffffff8                  ; 004b27cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b27cf
    LEA EAX,[ESP + 0xf0]                ; 004b27d2
    PUSH EAX                            ; 004b27d9
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004b27da
    PUSH EBX                            ; 004b27e0
    CALL dword ptr [ESI + 0xd8]         ; 004b27e1
    ADD ESP,0x8                         ; 004b27e7
    PUSH EAX                            ; 004b27ea
    LEA EAX,[ESP + 0xb8]                ; 004b27eb
    PUSH EAX                            ; 004b27f2
    PUSH EBX                            ; 004b27f3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004b27f4
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004b27f9
    PUSH EBX                            ; 004b27fc
    CALL core_weapon.cpp_CWeapon_fire_FUN_00554600 ; 004b27fd
        ;   XREF to: 00554600 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_00554600(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004b2802
    TEST EAX,EAX                        ; 004b2805
    JZ 0x004b2b79                       ; 004b2807
        ;   XREF to: 004b2b79 (CONDITIONAL_JUMP)  ; LAB_004b2b79
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 004b280d
    MOV dword ptr [ESP + 0x98],EAX      ; 004b2813
    LEA EAX,[ESP + 0x90]                ; 004b281a
    PUSH EAX                            ; 004b2821
    LEA EAX,[ESP + 0x118]               ; 004b2822
    PUSH EAX                            ; 004b2829
    XOR ECX,ECX                         ; 004b282a
    PUSH EBX                            ; 004b282c
    MOV dword ptr [ESP + 0x9c],ECX      ; 004b282d
    MOV dword ptr [ESP + 0xa0],ECX      ; 004b2834
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004b283b
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004b2840
    FLD float ptr [ESP + 0xb4]          ; 004b2843
    FLD float ptr [ESP + 0xb8]          ; 004b284a
    FLD float ptr [ESP + 0xbc]          ; 004b2851
    FXCH ST2                            ; 004b2858
    FADD float ptr [ESP + 0x114]        ; 004b285a
    FXCH                                ; 004b2861
    FADD float ptr [ESP + 0x118]        ; 004b2863
    FXCH ST2                            ; 004b286a
    FADD float ptr [ESP + 0x11c]        ; 004b286c
    FXCH                                ; 004b2873
    FSTP float ptr [ESP + 0xc0]         ; 004b2875
    FXCH                                ; 004b287c
    FSTP float ptr [ESP + 0xc4]         ; 004b287e
    FSTP float ptr [ESP + 0xc8]         ; 004b2885
    FLD float ptr [EBX + 0x2e0]         ; 004b288c
    FDIVR double ptr [0x0058542d]       ; 004b2892 | DOUBLE_0058542d
    FLD float ptr [ESP + 0x114]         ; 004b2898
    FXCH                                ; 004b289f
    FSTP float ptr [ESP + 0x120]        ; 004b28a1
    FMUL float ptr [ESP + 0x120]        ; 004b28a8
    FLD float ptr [ESP + 0x118]         ; 004b28af
    FMUL float ptr [ESP + 0x120]        ; 004b28b6
    FLD float ptr [ESP + 0x11c]         ; 004b28bd
    FMUL float ptr [ESP + 0x120]        ; 004b28c4
    MOV EDI,dword ptr [0x005be368]      ; 004b28cb | DAT_005be368
    FLD float ptr [ESP + 0xb4]          ; 004b28d1
    FLD float ptr [ESP + 0xb8]          ; 004b28d8
    FLD float ptr [ESP + 0xbc]          ; 004b28df
    PUSH EDI                            ; 004b28e6 | DAT_01e57284
    FXCH ST5                            ; 004b28e7
    FSTP float ptr [ESP + 0xdc]         ; 004b28e9
    FXCH ST3                            ; 004b28f0
    FSTP float ptr [ESP + 0xe0]         ; 004b28f2
    FXCH                                ; 004b28f9
    FSTP float ptr [ESP + 0xe4]         ; 004b28fb
    FSUB float ptr [ESP + 0xdc]         ; 004b2902
    FXCH                                ; 004b2909
    FSUB float ptr [ESP + 0xe0]         ; 004b290b
    FXCH ST2                            ; 004b2912
    FSUB float ptr [ESP + 0xe4]         ; 004b2914
    FXCH                                ; 004b291b
    FSTP float ptr [ESP + 0xe8]         ; 004b291d
    FXCH                                ; 004b2924
    FSTP float ptr [ESP + 0xec]         ; 004b2926
    FSTP float ptr [ESP + 0xf0]         ; 004b292d
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004b2934
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b2939
    PUSH 0x1                            ; 004b293c
    MOV EAX,[0x005be368]                ; 004b293e | DAT_005be368
    PUSH EAX                            ; 004b2943 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 004b2944
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004b2949
    PUSH EBX                            ; 004b294c
    MOV EDX,dword ptr [0x005be368]      ; 004b294d | DAT_005be368
    PUSH EDX                            ; 004b2953 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004b2954
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x2fc]     ; 004b2959
    ADD ESP,0x8                         ; 004b295f
    TEST ECX,ECX                        ; 004b2962
    JNZ 0x004b2b9f                      ; 004b2964
        ;   XREF to: 004b2b9f (CONDITIONAL_JUMP)  ; LAB_004b2b9f
    XOR EAX,EAX                         ; 004b296a
        ;   Label: LAB_004b296a
    MOV dword ptr [ESP + 0x12c],EAX     ; 004b296c
    LEA EAX,[ESP + 0xc0]                ; 004b2973
        ;   Label: LAB_004b2973
    PUSH EAX                            ; 004b297a
    LEA EAX,[ESP + 0xe8]                ; 004b297b
    PUSH EAX                            ; 004b2982
    MOV EDX,dword ptr [0x005be368]      ; 004b2983 | DAT_005be368
    PUSH EDX                            ; 004b2989 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 004b298a
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x144],EAX     ; 004b298f
    FLD float ptr [ESP + 0x144]         ; 004b2996
    ADD ESP,0xc                         ; 004b299d
    FLDZ                                ; 004b29a0
    FXCH                                ; 004b29a2
    FSTP double ptr [ESP]               ; 004b29a4
    FCOMP double ptr [ESP]              ; 004b29a7
    FNSTSW AX                           ; 004b29aa
    SAHF                                ; 004b29ac
    JBE 0x004b2bb4                      ; 004b29ad
        ;   XREF to: 004b2bb4 (CONDITIONAL_JUMP)  ; LAB_004b2bb4
    MOV EDI,dword ptr [0x005be368]      ; 004b29b3 | DAT_005be368
        ;   Label: LAB_004b29b3
    PUSH EDI                            ; 004b29b9 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004b29ba
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b29bf
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004b29c2
    MOV dword ptr [ESP + 0x6c],EAX      ; 004b29c9
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004b29cd
    MOV dword ptr [ESP + 0x70],EAX      ; 004b29d4
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004b29d8
    MOV dword ptr [ESP + 0x74],EAX      ; 004b29df
    LEA EAX,[EBX + 0x3c]                ; 004b29e3
    PUSH EAX                            ; 004b29e6
    LEA EAX,[ESP + 0x70]                ; 004b29e7
    FLD float ptr [ESP + 0x74]          ; 004b29eb
    PUSH EAX                            ; 004b29ef
    MOV EAX,[0x005b80f0]                ; 004b29f0 | DAT_005b80f0
    FADD float ptr [0x00585435]         ; 004b29f5 | DOUBLE_00585435
    PUSH EAX                            ; 004b29fb
    FSTP float ptr [ESP + 0x7c]         ; 004b29fc
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20 ; 004b2a00
        ;   XREF to: 0048af20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 004b2a05
    LEA EAX,[ESP + 0xb4]                ; 004b2a08
    PUSH EAX                            ; 004b2a0f
    PUSH 0x585417                       ; 004b2a10 | = "45.wav"
    PUSH EBX                            ; 004b2a15
    MOV EDX,dword ptr [0x005bed68]      ; 004b2a16 | DAT_005bed68
    PUSH EDX                            ; 004b2a1c
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 004b2a1d
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0052ea60(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004b2a22
    MOV EDI,0xc0800000                  ; 004b2a25
    MOV ECX,0x40400000                  ; 004b2a2a
    PUSH 0x3ec90fdb                     ; 004b2a2f
    MOV dword ptr [EBX + 0x2f8],0x3eaa7efa ; 004b2a34
    PUSH 0xbec90fdb                     ; 004b2a3e
    MOV dword ptr [ESP + 0x104],ECX     ; 004b2a43
    MOV dword ptr [ESP + 0x108],ECX     ; 004b2a4a
    MOV dword ptr [ESP + 0x10c],EDI     ; 004b2a51
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004b2a58
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x140],EAX     ; 004b2a5d
    FLD float ptr [ESP + 0x140]         ; 004b2a64
    ADD ESP,0x8                         ; 004b2a6b
    PUSH 0x3ec90fdb                     ; 004b2a6e
    PUSH 0xbec90fdb                     ; 004b2a73
    FSTP float ptr [ESP + 0xb0]         ; 004b2a78
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004b2a7f
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x140],EAX     ; 004b2a84
    FLD float ptr [ESP + 0x140]         ; 004b2a8b
    XOR EAX,EAX                         ; 004b2a92
    ADD ESP,0x8                         ; 004b2a94
    MOV dword ptr [ESP + 0xb0],EAX      ; 004b2a97
    LEA EAX,[ESP + 0xa8]                ; 004b2a9e
    PUSH EAX                            ; 004b2aa5
    LEA EAX,[ESP + 0x48]                ; 004b2aa6
    PUSH EAX                            ; 004b2aaa
    FSTP float ptr [ESP + 0xb4]         ; 004b2aab
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004b2ab2
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004b2ab7
    LEA EAX,[ESP + 0xfc]                ; 004b2aba
    PUSH EAX                            ; 004b2ac1
    LEA EAX,[ESP + 0x7c]                ; 004b2ac2
    PUSH EAX                            ; 004b2ac6
    LEA EAX,[ESP + 0x4c]                ; 004b2ac7
    PUSH EAX                            ; 004b2acb
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004b2acc
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004b2ad1
    PUSH EAX                            ; 004b2ad4
    LEA EAX,[ESP + 0x88]                ; 004b2ad5
    PUSH EAX                            ; 004b2adc
    PUSH EBX                            ; 004b2add
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004b2ade
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV ESI,EAX                         ; 004b2ae3
    LEA EAX,[ESP + 0x108]               ; 004b2ae5
    ADD ESP,0xc                         ; 004b2aec
    CMP EAX,ESI                         ; 004b2aef
    JZ 0x004b2b10                       ; 004b2af1
        ;   XREF to: 004b2b10 (CONDITIONAL_JUMP)  ; LAB_004b2b10
    MOV EAX,dword ptr [ESI]             ; 004b2af3
    MOV dword ptr [ESP + 0xfc],EAX      ; 004b2af5
    MOV EAX,dword ptr [ESI + 0x4]       ; 004b2afc
    MOV dword ptr [ESP + 0x100],EAX     ; 004b2aff
    MOV EAX,dword ptr [ESI + 0x8]       ; 004b2b06
    MOV dword ptr [ESP + 0x104],EAX     ; 004b2b09
    PUSH 0x58541e                       ; 004b2b10 | = "gatbullet.kfm"
        ;   Label: LAB_004b2b10
    CALL core_dmodel.cpp_loadModel_FUN_004543b0 ; 004b2b15
        ;   XREF to: 004543b0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_004543b0(char * filename)
    ADD ESP,0x4                         ; 004b2b1a
    PUSH EAX                            ; 004b2b1d
    LEA EAX,[ESP + 0x100]               ; 004b2b1e
    PUSH EAX                            ; 004b2b25
    LEA EAX,[EBX + 0x30]                ; 004b2b26
    PUSH EAX                            ; 004b2b29
    LEA EAX,[EBX + 0x20]                ; 004b2b2a
    PUSH EAX                            ; 004b2b2d
    MOV EDX,dword ptr [0x005b80f0]      ; 004b2b2e | DAT_005b80f0
    PUSH EDX                            ; 004b2b34
    CALL core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0 ; 004b2b35
        ;   XREF to: 0048c6b0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    ADD ESP,0x14                        ; 004b2b3a
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b2b3d
    PUSH EBX                            ; 004b2b43
    CALL dword ptr [EAX + 0x8c]         ; 004b2b44
    MOV EBX,dword ptr [0x01cae0e8]      ; 004b2b4a | DAT_01cae0e8
    MOV ECX,dword ptr [EBX*0x4 + 0x1cae0d8] ; 004b2b50
    ADD ESP,0x4                         ; 004b2b57
    CMP EAX,ECX                         ; 004b2b5a
    JNZ 0x004b2b6d                      ; 004b2b5c
        ;   XREF to: 004b2b6d (CONDITIONAL_JUMP)  ; LAB_004b2b6d
    MOV EBX,dword ptr [0x005b9284]      ; 004b2b5e | INT_005b9284
    PUSH EBX                            ; 004b2b64
    CALL xxx_unk.c_FUN_004940d0         ; 004b2b65
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_004940d0()
    ADD ESP,0x4                         ; 004b2b6a
    MOV EAX,0x1                         ; 004b2b6d
        ;   Label: LAB_004b2b6d
    MOV ESP,EBP                         ; 004b2b72
    POP EBP                             ; 004b2b74
    POP EDI                             ; 004b2b75
    POP ESI                             ; 004b2b76
    POP EBX                             ; 004b2b77
    RET                                 ; 004b2b78
    LEA EAX,[ESP + 0xb4]                ; 004b2b79
        ;   Label: LAB_004b2b79
    PUSH EAX                            ; 004b2b80
    PUSH 0x58540a                       ; 004b2b81 | = "45-dry-!.wav"
    PUSH EBX                            ; 004b2b86
    MOV EDX,dword ptr [0x005bed68]      ; 004b2b87 | DAT_005bed68
    PUSH EDX                            ; 004b2b8d
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 004b2b8e
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0052ea60(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004b2b93
    XOR EAX,EAX                         ; 004b2b96
    MOV ESP,EBP                         ; 004b2b98
    POP EBP                             ; 004b2b9a
    POP EDI                             ; 004b2b9b
    POP ESI                             ; 004b2b9c
    POP EBX                             ; 004b2b9d
    RET                                 ; 004b2b9e
    PUSH ECX                            ; 004b2b9f
        ;   Label: LAB_004b2b9f
    MOV EDI,dword ptr [0x005be368]      ; 004b2ba0 | DAT_005be368
    PUSH EDI                            ; 004b2ba6 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004b2ba7
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004b2bac
    JMP 0x004b296a                      ; 004b2baf
        ;   XREF to: 004b296a (UNCONDITIONAL_JUMP)  ; LAB_004b296a
    FLD1                                ; 004b2bb4
        ;   Label: LAB_004b2bb4
    FCOMP double ptr [ESP]              ; 004b2bb6
    FNSTSW AX                           ; 004b2bb9
    SAHF                                ; 004b2bbb
    JC 0x004b29b3                       ; 004b2bbc
        ;   XREF to: 004b29b3 (CONDITIONAL_JUMP)  ; LAB_004b29b3
    MOV ECX,dword ptr [0x00765a98]      ; 004b2bc2 | g_CCharacterActorType_00765a60.name_hash
    MOV EAX,[0x005be368]                ; 004b2bc8 | DAT_005be368
    PUSH ECX                            ; 004b2bcd
    MOV ESI,dword ptr [EAX + 0x14cd5c]  ; 004b2bce | DAT_01fa3fe0
    PUSH ESI                            ; 004b2bd4
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b2bd5
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004b2bda
    MOV ESI,EAX                         ; 004b2bdd
    TEST EAX,EAX                        ; 004b2bdf
    JZ 0x004b2bf9                       ; 004b2be1
        ;   XREF to: 004b2bf9 (CONDITIONAL_JUMP)  ; LAB_004b2bf9
    PUSH EAX                            ; 004b2be3
    MOV EDI,dword ptr [EAX + 0x14c]     ; 004b2be4
    CALL dword ptr [EDI + 0x104]        ; 004b2bea
    ADD ESP,0x4                         ; 004b2bf0
    TEST EAX,EAX                        ; 004b2bf3
    JLE 0x004b2bf9                      ; 004b2bf5
        ;   XREF to: 004b2bf9 (CONDITIONAL_JUMP)  ; LAB_004b2bf9
    XOR ESI,ESI                         ; 004b2bf7
    MOV EDI,dword ptr [0x01c78c78]      ; 004b2bf9 | g_CGlassActorType_01c78c40.name_hash
        ;   Label: LAB_004b2bf9
    MOV EAX,[0x005be368]                ; 004b2bff | DAT_005be368
    PUSH EDI                            ; 004b2c04
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 004b2c05 | DAT_01fa3fe0
    PUSH EDX                            ; 004b2c0b
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b2c0c
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x138],EAX     ; 004b2c11
    ADD ESP,0x8                         ; 004b2c18
    MOV ECX,dword ptr [0x02dd10bc]      ; 004b2c1b | g_CTriggerActorType_02dd1084.name_hash
    MOV EAX,[0x005be368]                ; 004b2c21 | DAT_005be368
    PUSH ECX                            ; 004b2c26
    MOV EDI,dword ptr [EAX + 0x14cd5c]  ; 004b2c27 | DAT_01fa3fe0
    PUSH EDI                            ; 004b2c2d
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b2c2e
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004b2c33
    MOV EDI,EAX                         ; 004b2c36
    MOV dword ptr [ESP + 0x124],EAX     ; 004b2c38
    MOV EAX,[0x0077bd78]                ; 004b2c3f | g_CCrateActorType_0077bd40.name_hash
    PUSH EAX                            ; 004b2c44
    MOV EAX,[0x005be368]                ; 004b2c45 | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 004b2c4a | DAT_01fa3fe0
    PUSH EDX                            ; 004b2c50
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b2c51
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x130],EAX     ; 004b2c56
    ADD ESP,0x8                         ; 004b2c5d
    MOV ECX,dword ptr [0x01c7068c]      ; 004b2c60 | g_CFlameCanActorType_01c70654.name_hash
    MOV EAX,[0x005be368]                ; 004b2c66 | DAT_005be368
    PUSH ECX                            ; 004b2c6b
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 004b2c6c | DAT_01fa3fe0
    PUSH EDX                            ; 004b2c72
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b2c73
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004b2c78
    TEST ESI,ESI                        ; 004b2c7b
    JNZ 0x004b2cbb                      ; 004b2c7d
        ;   XREF to: 004b2cbb (CONDITIONAL_JUMP)  ; LAB_004b2cbb
    MOV ECX,dword ptr [ESP + 0x130]     ; 004b2c7f
    TEST ECX,ECX                        ; 004b2c86
    JNZ 0x004b2ece                      ; 004b2c88
        ;   XREF to: 004b2ece (CONDITIONAL_JUMP)  ; LAB_004b2ece
    TEST EDI,EDI                        ; 004b2c8e
    JNZ 0x004b2efc                      ; 004b2c90
        ;   XREF to: 004b2efc (CONDITIONAL_JUMP)  ; LAB_004b2efc
    MOV ESI,dword ptr [ESP + 0x128]     ; 004b2c96
    TEST ESI,ESI                        ; 004b2c9d
    JNZ 0x004b2f58                      ; 004b2c9f
        ;   XREF to: 004b2f58 (CONDITIONAL_JUMP)  ; LAB_004b2f58
    TEST EAX,EAX                        ; 004b2ca5
    JZ 0x004b2f7e                       ; 004b2ca7
        ;   XREF to: 004b2f7e (CONDITIONAL_JUMP)  ; LAB_004b2f7e
    PUSH EAX                            ; 004b2cad
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550 ; 004b2cae
        ;   XREF to: 0048e550 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004b2cb3
    JMP 0x004b2f61                      ; 004b2cb6
        ;   XREF to: 004b2f61 (UNCONDITIONAL_JUMP)  ; LAB_004b2f61
    PUSH ESI                            ; 004b2cbb
        ;   Label: LAB_004b2cbb
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004b2cbc
    CALL dword ptr [EAX + 0xd8]         ; 004b2cc2
    ADD ESP,0x4                         ; 004b2cc8
    TEST EAX,EAX                        ; 004b2ccb
    JZ 0x004b2d02                       ; 004b2ccd
        ;   XREF to: 004b2d02 (CONDITIONAL_JUMP)  ; LAB_004b2d02
    CMP dword ptr [ESP + 0x12c],0x0     ; 004b2ccf
    JNZ 0x004b29b3                      ; 004b2cd7
        ;   XREF to: 004b29b3 (CONDITIONAL_JUMP)  ; LAB_004b29b3
    MOV ESI,dword ptr [EBX + 0x560]     ; 004b2cdd
    MOV ECX,dword ptr [0x005be368]      ; 004b2ce3 | DAT_005be368
    INC ESI                             ; 004b2ce9
    PUSH ECX                            ; 004b2cea | DAT_01e57284
    MOV dword ptr [EBX + 0x560],ESI     ; 004b2ceb
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004b2cf1
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b2cf6
    XOR EAX,EAX                         ; 004b2cf9
    MOV ESP,EBP                         ; 004b2cfb
    POP EBP                             ; 004b2cfd
    POP EDI                             ; 004b2cfe
    POP ESI                             ; 004b2cff
    POP EBX                             ; 004b2d00
    RET                                 ; 004b2d01
    LEA EAX,[ESP + 0x8]                 ; 004b2d02
        ;   Label: LAB_004b2d02
    PUSH EAX                            ; 004b2d06
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004b2d07
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    MOV EAX,[0x005be368]                ; 004b2d0c | DAT_005be368
    ADD ESP,0x4                         ; 004b2d11
    MOV EAX,dword ptr [EAX + 0x14cd60]  ; 004b2d14 | DAT_01fa3fe4
    MOV dword ptr [ESP + 0x8],EAX       ; 004b2d1a
    PUSH EBX                            ; 004b2d1e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b2d1f
    CALL dword ptr [EAX + 0xe4]         ; 004b2d25
    MOV dword ptr [ESP + 0x13c],EAX     ; 004b2d2b
    MOV EDI,0x3ecccccd                  ; 004b2d32
    FLD float ptr [ESP + 0x13c]         ; 004b2d37
    ADD ESP,0x4                         ; 004b2d3e
    MOV dword ptr [ESP + 0x10],EDI      ; 004b2d41
    MOV EDI,dword ptr [0x005be368]      ; 004b2d45 | DAT_005be368
    LEA EAX,[EDI + 0x14cd34]            ; 004b2d4b
    FSTP float ptr [ESP + 0xc]          ; 004b2d51
    FLD float ptr [EAX]                 ; 004b2d55 | DAT_01fa3fb8
    FSUB float ptr [EDI + 0x14cd28]     ; 004b2d57 | DAT_01fa3fac
    FSTP float ptr [ESP + 0x108]        ; 004b2d5d
    FLD float ptr [EAX + 0x4]           ; 004b2d64 | DAT_01fa3fbc
    FSUB float ptr [EDI + 0x14cd2c]     ; 004b2d67 | DAT_01fa3fb0
    FST float ptr [ESP + 0x10c]         ; 004b2d6d
    FMUL float ptr [ESP + 0x10c]        ; 004b2d74
    FLD float ptr [ESP + 0x108]         ; 004b2d7b
    FMUL ST0                            ; 004b2d82
    FLD float ptr [EAX + 0x8]           ; 004b2d84 | DAT_01fa3fc0
    FSUB float ptr [EDI + 0x14cd30]     ; 004b2d87 | DAT_01fa3fb4
    FXCH                                ; 004b2d8d
    FADDP ST2,ST0                       ; 004b2d8f
    FST float ptr [ESP + 0x110]         ; 004b2d91
    FMUL float ptr [ESP + 0x110]        ; 004b2d98
    FADDP                               ; 004b2d9f
    FSQRT                               ; 004b2da1
    FDIVR double ptr [0x0058543d]       ; 004b2da3 | DOUBLE_0058543d
    FLD float ptr [ESP + 0x108]         ; 004b2da9
    FXCH                                ; 004b2db0
    FSTP float ptr [ESP + 0x134]        ; 004b2db2
    FMUL float ptr [ESP + 0x134]        ; 004b2db9
    FLD float ptr [ESP + 0x10c]         ; 004b2dc0
    FMUL float ptr [ESP + 0x134]        ; 004b2dc7
    FLD float ptr [ESP + 0x110]         ; 004b2dce
    FMUL float ptr [ESP + 0x134]        ; 004b2dd5
    LEA EDI,[ESP + 0x14]                ; 004b2ddc
    LEA EAX,[ESP + 0x9c]                ; 004b2de0
    FXCH ST2                            ; 004b2de7
    FSTP float ptr [ESP + 0x9c]         ; 004b2de9
    FSTP float ptr [ESP + 0xa0]         ; 004b2df0
    FSTP float ptr [ESP + 0xa4]         ; 004b2df7
    CMP EDI,EAX                         ; 004b2dfe
    JZ 0x004b2e23                       ; 004b2e00
        ;   XREF to: 004b2e23 (CONDITIONAL_JUMP)  ; LAB_004b2e23
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004b2e02
    MOV dword ptr [ESP + 0x14],EAX      ; 004b2e09
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004b2e0d
    MOV dword ptr [ESP + 0x18],EAX      ; 004b2e14
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004b2e18
    MOV dword ptr [ESP + 0x1c],EAX      ; 004b2e1f
    MOV EAX,[0x005be368]                ; 004b2e23 | DAT_005be368
        ;   Label: LAB_004b2e23
    ADD EAX,0x14cd50                    ; 004b2e28
    PUSH EAX                            ; 004b2e2d | DAT_01fa3fd4
    LEA EAX,[ESP + 0xd0]                ; 004b2e2e
    PUSH EAX                            ; 004b2e35
    PUSH ESI                            ; 004b2e36
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004b2e37
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDI,EAX                         ; 004b2e3c
    LEA EAX,[ESP + 0x30]                ; 004b2e3e
    ADD ESP,0xc                         ; 004b2e42
    CMP EAX,EDI                         ; 004b2e45
    JZ 0x004b2e5d                       ; 004b2e47
        ;   XREF to: 004b2e5d (CONDITIONAL_JUMP)  ; LAB_004b2e5d
    MOV EAX,dword ptr [EDI]             ; 004b2e49
    MOV dword ptr [ESP + 0x24],EAX      ; 004b2e4b
    MOV EAX,dword ptr [EDI + 0x4]       ; 004b2e4f
    MOV dword ptr [ESP + 0x28],EAX      ; 004b2e52
    MOV EAX,dword ptr [EDI + 0x8]       ; 004b2e56
    MOV dword ptr [ESP + 0x2c],EAX      ; 004b2e59
    MOV EAX,dword ptr [EBX + 0x564]     ; 004b2e5d
        ;   Label: LAB_004b2e5d
    MOV EDX,0x3e19999a                  ; 004b2e63
    MOV dword ptr [ESP + 0x30],EAX      ; 004b2e68
    MOV dword ptr [ESP + 0x34],EDX      ; 004b2e6c
    MOV EAX,0x65                        ; 004b2e70
    MOV dword ptr [ESP + 0x3c],EBX      ; 004b2e75
    MOV dword ptr [ESP + 0x38],EAX      ; 004b2e79
    PUSH EBX                            ; 004b2e7d
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b2e7e
    CALL dword ptr [EAX + 0x8c]         ; 004b2e84
    ADD ESP,0x4                         ; 004b2e8a
    LEA EDI,[ESP + 0x8]                 ; 004b2e8d
    PUSH EDI                            ; 004b2e91
    MOV dword ptr [ESP + 0x44],EAX      ; 004b2e92
    PUSH ESI                            ; 004b2e96
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004b2e97
    CALL dword ptr [EAX + 0x100]        ; 004b2e9d
    MOV ECX,dword ptr [EBX + 0x2dc]     ; 004b2ea3
    ADD ESP,0x8                         ; 004b2ea9
    TEST ECX,ECX                        ; 004b2eac
    JZ 0x004b29b3                       ; 004b2eae
        ;   XREF to: 004b29b3 (CONDITIONAL_JUMP)  ; LAB_004b29b3
    MOV EAX,[0x005be368]                ; 004b2eb4 | DAT_005be368
    MOV ESI,dword ptr [EAX + 0x14cd5c]  ; 004b2eb9 | DAT_01fa3fe0
    PUSH ESI                            ; 004b2ebf
    PUSH EAX                            ; 004b2ec0 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004b2ec1
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004b2ec6
    JMP 0x004b2f61                      ; 004b2ec9
        ;   XREF to: 004b2f61 (UNCONDITIONAL_JUMP)  ; LAB_004b2f61
    PUSH ECX                            ; 004b2ece
        ;   Label: LAB_004b2ece
    CALL core_glass.cpp_FUN_004aded0    ; 004b2ecf
        ;   XREF to: 004aded0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_FUN_004aded0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004b2ed4
    TEST EAX,EAX                        ; 004b2ed7
    JZ 0x004b29b3                       ; 004b2ed9
        ;   XREF to: 004b29b3 (CONDITIONAL_JUMP)  ; LAB_004b29b3
    MOV EAX,[0x005be368]                ; 004b2edf | DAT_005be368
    ADD EAX,0x14cd50                    ; 004b2ee4
    PUSH EAX                            ; 004b2ee9 | DAT_01fa3fd4
    MOV ECX,dword ptr [ESP + 0x134]     ; 004b2eea
    PUSH ECX                            ; 004b2ef1
    CALL core_glass.cpp_CGlass_shatter_FUN_004ada20 ; 004b2ef2
        ;   XREF to: 004ada20 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004ada20(CGlass * this_ptr, CVector3f * location)
    ADD ESP,0x8                         ; 004b2ef7
    JMP 0x004b2f61                      ; 004b2efa
        ;   XREF to: 004b2f61 (UNCONDITIONAL_JUMP)  ; LAB_004b2f61
    PUSH EDI                            ; 004b2efc
        ;   Label: LAB_004b2efc
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580 ; 004b2efd
        ;   XREF to: 00548580 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 004b2f02
    PUSH EBX                            ; 004b2f05
    PUSH EDI                            ; 004b2f06
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005485a0 ; 004b2f07
        ;   XREF to: 005485a0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004b2f0c
    TEST EAX,EAX                        ; 004b2f0f
    JZ 0x004b2f40                       ; 004b2f11
        ;   XREF to: 004b2f40 (CONDITIONAL_JUMP)  ; LAB_004b2f40
    PUSH EBX                            ; 004b2f13
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b2f14
    CALL dword ptr [EAX + 0xe4]         ; 004b2f1a
    MOV dword ptr [ESP + 0x13c],EAX     ; 004b2f20
    FLD float ptr [ESP + 0x13c]         ; 004b2f27
    ADD ESP,0x4                         ; 004b2f2e
    SUB ESP,0x4                         ; 004b2f31
    FSTP float ptr [ESP]                ; 004b2f34
    PUSH EDI                            ; 004b2f37
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0 ; 004b2f38
        ;   XREF to: 005485e0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 004b2f3d
    MOV EDI,dword ptr [ESP + 0x124]     ; 004b2f40
        ;   Label: LAB_004b2f40
    PUSH EDI                            ; 004b2f47
    MOV EAX,[0x005be368]                ; 004b2f48 | DAT_005be368
    PUSH EAX                            ; 004b2f4d | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004b2f4e
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004b2f53
    JMP 0x004b2f61                      ; 004b2f56
        ;   XREF to: 004b2f61 (UNCONDITIONAL_JUMP)  ; LAB_004b2f61
    PUSH ESI                            ; 004b2f58
        ;   Label: LAB_004b2f58
    CALL core_crate.cpp_CCrate_explode_FUN_0043cdb0 ; 004b2f59
        ;   XREF to: 0043cdb0 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_CCrate_explode_FUN_0043cdb0(CCrate * this_ptr)
    ADD ESP,0x4                         ; 004b2f5e
    MOV EDI,dword ptr [ESP + 0x12c]     ; 004b2f61
        ;   Label: LAB_004b2f61
    INC EDI                             ; 004b2f68
    MOV dword ptr [ESP + 0x12c],EDI     ; 004b2f69
    CMP EDI,0x4                         ; 004b2f70
    JL 0x004b2973                       ; 004b2f73
        ;   XREF to: 004b2973 (CONDITIONAL_JUMP)  ; LAB_004b2973
    JMP 0x004b29b3                      ; 004b2f79
        ;   XREF to: 004b29b3 (UNCONDITIONAL_JUMP)  ; LAB_004b29b3
    MOV EAX,[0x005be368]                ; 004b2f7e | DAT_005be368
        ;   Label: LAB_004b2f7e
    MOV EDI,dword ptr [EAX + 0x14cd5c]  ; 004b2f83 | DAT_01fa3fe0
    PUSH EDI                            ; 004b2f89
    MOV EDX,dword ptr [EAX + 0x14cd4c]  ; 004b2f8a | DAT_01fa3fd0
    PUSH EDX                            ; 004b2f90
    LEA ESI,[EAX + 0x14cd40]            ; 004b2f91
    PUSH ESI                            ; 004b2f97 | DAT_01fa3fc4
    ADD EAX,0x14cd50                    ; 004b2f98
    PUSH EAX                            ; 004b2f9d | DAT_01fa3fd4
    MOV ECX,dword ptr [0x005b80f0]      ; 004b2f9e | DAT_005b80f0
    PUSH ECX                            ; 004b2fa4
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60 ; 004b2fa5
        ;   XREF to: 0048ab60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 004b2faa
    JMP 0x004b29b3                      ; 004b2fad
        ;   XREF to: 004b29b3 (UNCONDITIONAL_JUMP)  ; LAB_004b29b3

