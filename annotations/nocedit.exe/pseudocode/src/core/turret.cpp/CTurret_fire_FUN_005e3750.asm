; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_turret_cpp_CTurret_fire_FUN_005e3750(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; Local Variables:
; SDamageInfo      Stack[-0xe0]:60  SStack_e0
; CVector3f        Stack[-0xa4]:12  CStack_a4
; CVector3f        Stack[-0x98]:12  CStack_98
; float            Stack[-0x8c]:4  fStack_8c
; float            Stack[-0x88]:4  fStack_88
; float            Stack[-0x84]:4  fStack_84
; CVector3f        Stack[-0x80]:12  CStack_80
; CVector3f        Stack[-0x74]:12  CStack_74
; CVector3f        Stack[-0x68]:12  CStack_68
; CVector3f        Stack[-0x5c]:12  local_5c
; float            Stack[-0x50]:4  fStack_50
; float            Stack[-0x4c]:4  fStack_4c
; float            Stack[-0x48]:4  fStack_48
; CVector3f        Stack[-0x44]:12  CStack_44
; CVector3f        Stack[-0x38]:12  CStack_38
; CTrigger *       Stack[-0x2c]:4  pCStack_2c
; CCrate *         Stack[-0x28]:4  pCStack_28
; int              Stack[-0x24]:4  iStack_24
; CGlass *         Stack[-0x20]:4  pCStack_20
; float            Stack[-0x1c]:4  fStack_1c
; float            Stack[-0x18]:4  fStack_18
;
; Referenced Globals:
;   float FLOAT_006567a4 = -0.125
;   double DOUBLE_006567a8 = 10
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   CFireEffect g_CFireEffectInstance
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_03261388
;   undefined4 DAT_0326138c
;   undefined4 DAT_03261390
;   undefined4 DAT_03261394
;   undefined4 DAT_03261398
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_crate.cpp_CCrate_explode_FUN_00448a70
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
;   core_glass.cpp_CGlass_shatter_FUN_004eaef0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
;   core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e3750
        ;   Label: core_turret.cpp_CTurret_fire_FUN_005e3750
    PUSH ESI                            ; 005e3751
    PUSH EDI                            ; 005e3752
    PUSH EBP                            ; 005e3753
    MOV EBP,ESP                         ; 005e3754
    SUB ESP,0xd4                        ; 005e3756
    AND ESP,0xfffffff8                  ; 005e375c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005e375f
    LEA EAX,[ESP + 0x8c]                ; 005e3762
    PUSH EAX                            ; 005e3769
    MOV ESI,dword ptr [EBX + 0x154]     ; 005e376a
    PUSH EBX                            ; 005e3770
    CALL dword ptr [ESI + 0xf4]         ; 005e3771
    ADD ESP,0x8                         ; 005e3777
    PUSH EAX                            ; 005e377a
    LEA EAX,[ESP + 0x48]                ; 005e377b
    PUSH EAX                            ; 005e377f
    PUSH EBX                            ; 005e3780
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005e3781
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005e3786
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 005e3789
    MOV dword ptr [ESP + 0x88],EAX      ; 005e378f
    LEA EAX,[ESP + 0x80]                ; 005e3796
    PUSH EAX                            ; 005e379d
    LEA EAX,[ESP + 0xb4]                ; 005e379e
    PUSH EAX                            ; 005e37a5
    XOR EDX,EDX                         ; 005e37a6
    PUSH EBX                            ; 005e37a8
    MOV dword ptr [ESP + 0x8c],EDX      ; 005e37a9
    MOV dword ptr [ESP + 0x90],EDX      ; 005e37b0
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005e37b7
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005e37bc
    MOV ESI,dword ptr [0x006810c8]      ; 005e37bf | g_CDemonSetPtr
    FLD float ptr [ESP + 0x44]          ; 005e37c5
    FLD float ptr [ESP + 0x48]          ; 005e37c9
    FLD float ptr [ESP + 0x4c]          ; 005e37cd
    MOV EAX,dword ptr [ESP + 0x44]      ; 005e37d1
    PUSH 0x1                            ; 005e37d5
    FXCH ST2                            ; 005e37d7
    FADD float ptr [ESP + 0xb4]         ; 005e37d9
    FXCH                                ; 005e37e0
    FADD float ptr [ESP + 0xb8]         ; 005e37e2
    FXCH ST2                            ; 005e37e9
    FADD float ptr [ESP + 0xbc]         ; 005e37eb
    MOV dword ptr [ESP + 0x78],EAX      ; 005e37f2
    PUSH ESI                            ; 005e37f6 | g_CDemonSetInstance
    FXCH                                ; 005e37f7
    FSTP float ptr [ESP + 0x58]         ; 005e37f9
    MOV EAX,dword ptr [ESP + 0x50]      ; 005e37fd
    FXCH                                ; 005e3801
    FSTP float ptr [ESP + 0x5c]         ; 005e3803
    MOV dword ptr [ESP + 0x80],EAX      ; 005e3807
    MOV EAX,dword ptr [ESP + 0x54]      ; 005e380e
    FSTP float ptr [ESP + 0x60]         ; 005e3812
    MOV dword ptr [ESP + 0x84],EAX      ; 005e3816
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 005e381d
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 005e3822
    PUSH EBX                            ; 005e3825
    MOV EDI,dword ptr [0x006810c8]      ; 005e3826 | g_CDemonSetPtr
    PUSH EDI                            ; 005e382c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005e382d
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005e3832
    XOR EAX,EAX                         ; 005e3835
    MOV dword ptr [ESP + 0xc4],EAX      ; 005e3837
    LEA EAX,[ESP + 0x50]                ; 005e383e
        ;   Label: LAB_005e383e
    PUSH EAX                            ; 005e3842
    LEA EAX,[ESP + 0x78]                ; 005e3843
    PUSH EAX                            ; 005e3847
    MOV EDX,dword ptr [0x006810c8]      ; 005e3848 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 005e384e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 005e384f
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0xdc],EAX      ; 005e3854
    FLD float ptr [ESP + 0xdc]          ; 005e385b
    ADD ESP,0xc                         ; 005e3862
    FLDZ                                ; 005e3865
    FXCH                                ; 005e3867
    FSTP double ptr [ESP]               ; 005e3869
    FCOMP double ptr [ESP]              ; 005e386c
    FNSTSW AX                           ; 005e386f
    SAHF                                ; 005e3871
    JA 0x005e3b03                       ; 005e3872
        ;   XREF to: 005e3b03 (CONDITIONAL_JUMP)  ; LAB_005e3b03
    FLD1                                ; 005e3878
    FCOMP double ptr [ESP]              ; 005e387a
    FNSTSW AX                           ; 005e387d
    SAHF                                ; 005e387f
    JC 0x005e3b03                       ; 005e3880
        ;   XREF to: 005e3b03 (CONDITIONAL_JUMP)  ; LAB_005e3b03
    MOV ECX,dword ptr [0x00823c4c]      ; 005e3886 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 005e388c | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 005e3891
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 005e3892 | DAT_032613bc
    PUSH ESI                            ; 005e3898
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e3899
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005e389e
    MOV EDI,EAX                         ; 005e38a1
    TEST EAX,EAX                        ; 005e38a3
    JZ 0x005e38bd                       ; 005e38a5
        ;   XREF to: 005e38bd (CONDITIONAL_JUMP)  ; LAB_005e38bd
    PUSH EAX                            ; 005e38a7
    MOV ESI,dword ptr [EAX + 0x154]     ; 005e38a8
    CALL dword ptr [ESI + 0x120]        ; 005e38ae
    ADD ESP,0x4                         ; 005e38b4
    TEST EAX,EAX                        ; 005e38b7
    JLE 0x005e38bd                      ; 005e38b9
        ;   XREF to: 005e38bd (CONDITIONAL_JUMP)  ; LAB_005e38bd
    XOR EDI,EDI                         ; 005e38bb
    MOV EAX,[0x02d83360]                ; 005e38bd | g_CGlassClassInfo.name_hash
        ;   Label: LAB_005e38bd
    PUSH EAX                            ; 005e38c2
    MOV EAX,[0x006810c8]                ; 005e38c3 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005e38c8 | DAT_032613bc
    PUSH EDX                            ; 005e38ce
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e38cf
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0xd0],EAX      ; 005e38d4
    ADD ESP,0x8                         ; 005e38db
    MOV ECX,dword ptr [0x03f87490]      ; 005e38de | g_CTriggerClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 005e38e4 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 005e38e9
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 005e38ea | DAT_032613bc
    PUSH ESI                            ; 005e38f0
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e38f1
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005e38f6
    MOV ESI,EAX                         ; 005e38f9
    MOV dword ptr [ESP + 0xbc],EAX      ; 005e38fb
    MOV EAX,[0x0088797c]                ; 005e3902 | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 005e3907
    MOV EAX,[0x006810c8]                ; 005e3908 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005e390d | DAT_032613bc
    PUSH EDX                            ; 005e3913
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e3914
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0xc8],EAX      ; 005e3919
    ADD ESP,0x8                         ; 005e3920
    MOV ECX,dword ptr [0x02d7a738]      ; 005e3923 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 005e3929 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 005e392e
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005e392f | DAT_032613bc
    PUSH EDX                            ; 005e3935
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e3936
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005e393b
    TEST EDI,EDI                        ; 005e393e
    JZ 0x005e3b75                       ; 005e3940
        ;   XREF to: 005e3b75 (CONDITIONAL_JUMP)  ; LAB_005e3b75
    LEA EAX,[ESP + 0x8]                 ; 005e3946
    PUSH EAX                            ; 005e394a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005e394b
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EAX,[0x006810c8]                ; 005e3950 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 005e3955
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 005e3958 | DAT_032613c0
    MOV dword ptr [ESP + 0x8],EAX       ; 005e395e
    PUSH EBX                            ; 005e3962
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e3963
    CALL dword ptr [EAX + 0x100]        ; 005e3969
    MOV dword ptr [ESP + 0xd4],EAX      ; 005e396f
    MOV ESI,0x3ecccccd                  ; 005e3976
    FLD float ptr [ESP + 0xd4]          ; 005e397b
    ADD ESP,0x4                         ; 005e3982
    MOV dword ptr [ESP + 0x10],ESI      ; 005e3985
    MOV ESI,dword ptr [0x006810c8]      ; 005e3989 | g_CDemonSetPtr
    LEA EAX,[ESI + 0x14d11c]            ; 005e398f | DAT_03261394
    FSTP float ptr [ESP + 0xc]          ; 005e3995
    FLD float ptr [EAX]                 ; 005e3999 | DAT_03261394
    FSUB float ptr [ESI + 0x14d110]     ; 005e399b | DAT_03261388
    FSTP float ptr [ESP + 0x5c]         ; 005e39a1
    FLD float ptr [EAX + 0x4]           ; 005e39a5 | DAT_03261398
    FSUB float ptr [ESI + 0x14d114]     ; 005e39a8 | DAT_0326138c
    FST float ptr [ESP + 0x60]          ; 005e39ae
    FMUL float ptr [ESP + 0x60]         ; 005e39b2
    FLD float ptr [ESP + 0x5c]          ; 005e39b6
    FMUL ST0                            ; 005e39ba
    FLD float ptr [EAX + 0x8]           ; 005e39bc | DAT_0326139c
    FSUB float ptr [ESI + 0x14d118]     ; 005e39bf | DAT_03261390
    FXCH                                ; 005e39c5
    FADDP ST2,ST0                       ; 005e39c7
    FST float ptr [ESP + 0x64]          ; 005e39c9
    FMUL float ptr [ESP + 0x64]         ; 005e39cd
    FADDP                               ; 005e39d1
    FSQRT                               ; 005e39d3
    FDIVR double ptr [0x006567a8]       ; 005e39d5 | DOUBLE_006567a8
    FLD float ptr [ESP + 0x5c]          ; 005e39db
    FXCH                                ; 005e39df
    FSTP float ptr [ESP + 0xcc]         ; 005e39e1
    FMUL float ptr [ESP + 0xcc]         ; 005e39e8
    FLD float ptr [ESP + 0x60]          ; 005e39ef
    FMUL float ptr [ESP + 0xcc]         ; 005e39f3
    FLD float ptr [ESP + 0x64]          ; 005e39fa
    FMUL float ptr [ESP + 0xcc]         ; 005e39fe
    LEA ESI,[ESP + 0x14]                ; 005e3a05
    LEA EAX,[ESP + 0x98]                ; 005e3a09
    FXCH ST2                            ; 005e3a10
    FSTP float ptr [ESP + 0x98]         ; 005e3a12
    FSTP float ptr [ESP + 0x9c]         ; 005e3a19
    FSTP float ptr [ESP + 0xa0]         ; 005e3a20
    CMP ESI,EAX                         ; 005e3a27
    JZ 0x005e3a4c                       ; 005e3a29
        ;   XREF to: 005e3a4c (CONDITIONAL_JUMP)  ; LAB_005e3a4c
    MOV EAX,dword ptr [ESP + 0x98]      ; 005e3a2b
    MOV dword ptr [ESP + 0x14],EAX      ; 005e3a32
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005e3a36
    MOV dword ptr [ESP + 0x18],EAX      ; 005e3a3d
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005e3a41
    MOV dword ptr [ESP + 0x1c],EAX      ; 005e3a48
    MOV EAX,[0x006810c8]                ; 005e3a4c | g_CDemonSetPtr
        ;   Label: LAB_005e3a4c
    ADD EAX,0x14d138                    ; 005e3a51
    PUSH EAX                            ; 005e3a56 | DAT_032613b0
    LEA EAX,[ESP + 0x6c]                ; 005e3a57
    PUSH EAX                            ; 005e3a5b
    PUSH EDI                            ; 005e3a5c
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005e3a5d
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV ESI,EAX                         ; 005e3a62
    LEA EAX,[ESP + 0x30]                ; 005e3a64
    ADD ESP,0xc                         ; 005e3a68
    CMP EAX,ESI                         ; 005e3a6b
    JZ 0x005e3a83                       ; 005e3a6d
        ;   XREF to: 005e3a83 (CONDITIONAL_JUMP)  ; LAB_005e3a83
    MOV EAX,dword ptr [ESI]             ; 005e3a6f
    MOV dword ptr [ESP + 0x24],EAX      ; 005e3a71
    MOV EAX,dword ptr [ESI + 0x4]       ; 005e3a75
    MOV dword ptr [ESP + 0x28],EAX      ; 005e3a78
    MOV EAX,dword ptr [ESI + 0x8]       ; 005e3a7c
    MOV dword ptr [ESP + 0x2c],EAX      ; 005e3a7f
    MOV EAX,dword ptr [EBX + 0x56c]     ; 005e3a83
        ;   Label: LAB_005e3a83
    MOV EDX,0x3f800000                  ; 005e3a89
    MOV dword ptr [ESP + 0x30],EAX      ; 005e3a8e
    MOV dword ptr [ESP + 0x34],EDX      ; 005e3a92
    MOV EAX,0x65                        ; 005e3a96
    MOV dword ptr [ESP + 0x3c],EBX      ; 005e3a9b
    MOV dword ptr [ESP + 0x38],EAX      ; 005e3a9f
    PUSH EBX                            ; 005e3aa3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e3aa4
    CALL dword ptr [EAX + 0x8c]         ; 005e3aaa
    ADD ESP,0x4                         ; 005e3ab0
    MOV dword ptr [ESP + 0x40],EAX      ; 005e3ab3
    LEA EAX,[ESP + 0x8]                 ; 005e3ab7
    PUSH EAX                            ; 005e3abb
    MOV ESI,dword ptr [EDI + 0x154]     ; 005e3abc
    PUSH EDI                            ; 005e3ac2
    CALL dword ptr [ESI + 0x11c]        ; 005e3ac3
    MOV ECX,dword ptr [EBX + 0x2e4]     ; 005e3ac9
    ADD ESP,0x8                         ; 005e3acf
    TEST ECX,ECX                        ; 005e3ad2
    JZ 0x005e3b03                       ; 005e3ad4
        ;   XREF to: 005e3b03 (CONDITIONAL_JUMP)  ; LAB_005e3b03
    MOV EAX,[0x006810c8]                ; 005e3ad6 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 005e3adb | DAT_032613bc
    PUSH ESI                            ; 005e3ae1
    PUSH EAX                            ; 005e3ae2 | g_CDemonSetInstance
        ;   Label: LAB_005e3ae2
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005e3ae3
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005e3ae8
        ;   Label: LAB_005e3ae8
    MOV EDI,dword ptr [ESP + 0xc4]      ; 005e3aeb
        ;   Label: LAB_005e3aeb
    INC EDI                             ; 005e3af2
    MOV dword ptr [ESP + 0xc4],EDI      ; 005e3af3
    CMP EDI,0x4                         ; 005e3afa
    JL 0x005e383e                       ; 005e3afd
        ;   XREF to: 005e383e (CONDITIONAL_JUMP)  ; LAB_005e383e
    MOV EAX,dword ptr [ESP + 0x44]      ; 005e3b03
        ;   Label: LAB_005e3b03
    MOV dword ptr [ESP + 0xa4],EAX      ; 005e3b07
    MOV EAX,dword ptr [ESP + 0x48]      ; 005e3b0e
    MOV dword ptr [ESP + 0xa8],EAX      ; 005e3b12
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005e3b19
    MOV dword ptr [ESP + 0xac],EAX      ; 005e3b1d
    LEA EAX,[EBX + 0x3c]                ; 005e3b24
    MOV EDX,dword ptr [0x0067a3d0]      ; 005e3b27 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EAX                            ; 005e3b2d
    LEA EAX,[ESP + 0xa8]                ; 005e3b2e
    FLD float ptr [ESP + 0xac]          ; 005e3b35
    PUSH EAX                            ; 005e3b3c
    FADD float ptr [0x006567a4]         ; 005e3b3d | FLOAT_006567a4
    PUSH EDX                            ; 005e3b43 | g_CFireEffectInstance
    FSTP float ptr [ESP + 0xb4]         ; 005e3b44
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60 ; 005e3b4b
        ;   XREF to: 004c7a60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    FLD float ptr [EBX + 0x774]         ; 005e3b50
    MOV EAX,0x1                         ; 005e3b56
    MOV dword ptr [EBX + 0x8b0],0x2     ; 005e3b5b
    ADD ESP,0xc                         ; 005e3b65
    FSTP float ptr [EBX + 0x300]        ; 005e3b68
    MOV ESP,EBP                         ; 005e3b6e
    POP EBP                             ; 005e3b70
    POP EDI                             ; 005e3b71
    POP ESI                             ; 005e3b72
    POP EBX                             ; 005e3b73
    RET                                 ; 005e3b74
    MOV ECX,dword ptr [ESP + 0xc8]      ; 005e3b75
        ;   Label: LAB_005e3b75
    TEST ECX,ECX                        ; 005e3b7c
    JNZ 0x005e3bde                      ; 005e3b7e
        ;   XREF to: 005e3bde (CONDITIONAL_JUMP)  ; LAB_005e3bde
    TEST ESI,ESI                        ; 005e3b80
    JZ 0x005e3c0c                       ; 005e3b82
        ;   XREF to: 005e3c0c (CONDITIONAL_JUMP)  ; LAB_005e3c0c
    PUSH ESI                            ; 005e3b88
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0 ; 005e3b89
        ;   XREF to: 005e0aa0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 005e3b8e
    PUSH EBX                            ; 005e3b91
    PUSH ESI                            ; 005e3b92
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0 ; 005e3b93
        ;   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005e3b98
    TEST EAX,EAX                        ; 005e3b9b
    JZ 0x005e3bcc                       ; 005e3b9d
        ;   XREF to: 005e3bcc (CONDITIONAL_JUMP)  ; LAB_005e3bcc
    PUSH EBX                            ; 005e3b9f
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e3ba0
    CALL dword ptr [EAX + 0x100]        ; 005e3ba6
    MOV dword ptr [ESP + 0xd4],EAX      ; 005e3bac
    FLD float ptr [ESP + 0xd4]          ; 005e3bb3
    ADD ESP,0x4                         ; 005e3bba
    SUB ESP,0x4                         ; 005e3bbd
    FSTP float ptr [ESP]                ; 005e3bc0
    PUSH ESI                            ; 005e3bc3
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00 ; 005e3bc4
        ;   XREF to: 005e0b00 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 005e3bc9
    MOV EDI,dword ptr [ESP + 0xbc]      ; 005e3bcc
        ;   Label: LAB_005e3bcc
    PUSH EDI                            ; 005e3bd3
    MOV EAX,[0x006810c8]                ; 005e3bd4 | g_CDemonSetInstance | g_CDemonSetPtr
    JMP 0x005e3ae2                      ; 005e3bd9
        ;   XREF to: 005e3ae2 (UNCONDITIONAL_JUMP)  ; LAB_005e3ae2
    PUSH ECX                            ; 005e3bde
        ;   Label: LAB_005e3bde
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0 ; 005e3bdf
        ;   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 005e3be4
    TEST EAX,EAX                        ; 005e3be7
    JZ 0x005e3b03                       ; 005e3be9
        ;   XREF to: 005e3b03 (CONDITIONAL_JUMP)  ; LAB_005e3b03
    MOV EAX,[0x006810c8]                ; 005e3bef | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 005e3bf4 | DAT_032613b0
    PUSH EAX                            ; 005e3bf9 | DAT_032613b0
    MOV ECX,dword ptr [ESP + 0xcc]      ; 005e3bfa
    PUSH ECX                            ; 005e3c01
    CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0 ; 005e3c02
        ;   XREF to: 004eaef0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location)
    JMP 0x005e3ae8                      ; 005e3c07
        ;   XREF to: 005e3ae8 (UNCONDITIONAL_JUMP)  ; LAB_005e3ae8
    MOV ESI,dword ptr [ESP + 0xc0]      ; 005e3c0c
        ;   Label: LAB_005e3c0c
    TEST ESI,ESI                        ; 005e3c13
    JNZ 0x005e3c29                      ; 005e3c15
        ;   XREF to: 005e3c29 (CONDITIONAL_JUMP)  ; LAB_005e3c29
    TEST EAX,EAX                        ; 005e3c17
    JZ 0x005e3c37                       ; 005e3c19
        ;   XREF to: 005e3c37 (CONDITIONAL_JUMP)  ; LAB_005e3c37
    PUSH EAX                            ; 005e3c1b
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340 ; 005e3c1c
        ;   XREF to: 004cb340 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 005e3c21
    JMP 0x005e3aeb                      ; 005e3c24
        ;   XREF to: 005e3aeb (UNCONDITIONAL_JUMP)  ; LAB_005e3aeb
    PUSH ESI                            ; 005e3c29
        ;   Label: LAB_005e3c29
    CALL core_crate.cpp_CCrate_explode_FUN_00448a70 ; 005e3c2a
        ;   XREF to: 00448a70 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_CCrate_explode_FUN_00448a70(CCrate * this_ptr)
    ADD ESP,0x4                         ; 005e3c2f
    JMP 0x005e3aeb                      ; 005e3c32
        ;   XREF to: 005e3aeb (UNCONDITIONAL_JUMP)  ; LAB_005e3aeb
    MOV EAX,[0x006810c8]                ; 005e3c37 | g_CDemonSetPtr
        ;   Label: LAB_005e3c37
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 005e3c3c | DAT_032613bc
    PUSH EDI                            ; 005e3c42
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 005e3c43 | DAT_032613ac
    PUSH EDX                            ; 005e3c49
    LEA ESI,[EAX + 0x14d128]            ; 005e3c4a | DAT_032613a0
    PUSH ESI                            ; 005e3c50 | DAT_032613a0
    ADD EAX,0x14d138                    ; 005e3c51 | DAT_032613b0
    PUSH EAX                            ; 005e3c56 | DAT_032613b0
    MOV ECX,dword ptr [0x0067a3d0]      ; 005e3c57 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 005e3c5d | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0 ; 005e3c5e
        ;   XREF to: 004c76a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 005e3c63
    JMP 0x005e3b03                      ; 005e3c66
        ;   XREF to: 005e3b03 (UNCONDITIONAL_JUMP)  ; LAB_005e3b03

