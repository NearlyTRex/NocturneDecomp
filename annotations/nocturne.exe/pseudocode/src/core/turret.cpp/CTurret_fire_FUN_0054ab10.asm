; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_turret_cpp_CTurret_fire_FUN_0054ab10(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x5c]:1  local_5c
;
; Referenced Globals:
;   float FLOAT_00596ec1 = -0.125
;   double DOUBLE_00596ec5 = 10
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005be368
;   undefined4 g_CCharacterActorType_00765a60.name_hash
;   undefined4 g_CCrateActorType_0077bd40.name_hash
;   undefined4 g_CFlameCanActorType_01c70654.name_hash
;   undefined4 g_CGlassActorType_01c78c40.name_hash
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3fac
;   undefined4 DAT_01fa3fb0
;   undefined4 DAT_01fa3fb4
;   undefined4 DAT_01fa3fb8
;   undefined4 DAT_01fa3fbc
;   undefined4 DAT_01fa3fc0
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_crate.cpp_CCrate_explode_FUN_0043cdb0
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
;   core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
;   core_glass.cpp_CGlass_shatter_FUN_004ada20
;   core_glass.cpp_FUN_004aded0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
;   core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ab10
        ;   Label: core_turret.cpp_CTurret_fire_FUN_0054ab10
    PUSH ESI                            ; 0054ab11
    PUSH EDI                            ; 0054ab12
    PUSH EBP                            ; 0054ab13
    MOV EBP,ESP                         ; 0054ab14
    SUB ESP,0xd4                        ; 0054ab16
    AND ESP,0xfffffff8                  ; 0054ab1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054ab1f
    LEA EAX,[ESP + 0x8c]                ; 0054ab22
    PUSH EAX                            ; 0054ab29
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0054ab2a
    PUSH EBX                            ; 0054ab30
    CALL dword ptr [ESI + 0xd8]         ; 0054ab31
    ADD ESP,0x8                         ; 0054ab37
    PUSH EAX                            ; 0054ab3a
    LEA EAX,[ESP + 0x48]                ; 0054ab3b
    PUSH EAX                            ; 0054ab3f
    PUSH EBX                            ; 0054ab40
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0054ab41
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0054ab46
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 0054ab49
    MOV dword ptr [ESP + 0x88],EAX      ; 0054ab4f
    LEA EAX,[ESP + 0x80]                ; 0054ab56
    PUSH EAX                            ; 0054ab5d
    LEA EAX,[ESP + 0xb4]                ; 0054ab5e
    PUSH EAX                            ; 0054ab65
    XOR EDX,EDX                         ; 0054ab66
    PUSH EBX                            ; 0054ab68
    MOV dword ptr [ESP + 0x8c],EDX      ; 0054ab69
    MOV dword ptr [ESP + 0x90],EDX      ; 0054ab70
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0054ab77
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    ADD ESP,0xc                         ; 0054ab7c
    MOV ESI,dword ptr [0x005be368]      ; 0054ab7f | DAT_005be368
    FLD float ptr [ESP + 0x44]          ; 0054ab85
    FLD float ptr [ESP + 0x48]          ; 0054ab89
    FLD float ptr [ESP + 0x4c]          ; 0054ab8d
    MOV EAX,dword ptr [ESP + 0x44]      ; 0054ab91
    PUSH 0x1                            ; 0054ab95
    FXCH ST2                            ; 0054ab97
    FADD float ptr [ESP + 0xb4]         ; 0054ab99
    FXCH                                ; 0054aba0
    FADD float ptr [ESP + 0xb8]         ; 0054aba2
    FXCH ST2                            ; 0054aba9
    FADD float ptr [ESP + 0xbc]         ; 0054abab
    MOV dword ptr [ESP + 0x78],EAX      ; 0054abb2
    PUSH ESI                            ; 0054abb6 | DAT_01e57284
    FXCH                                ; 0054abb7
    FSTP float ptr [ESP + 0x58]         ; 0054abb9
    MOV EAX,dword ptr [ESP + 0x50]      ; 0054abbd
    FXCH                                ; 0054abc1
    FSTP float ptr [ESP + 0x5c]         ; 0054abc3
    MOV dword ptr [ESP + 0x80],EAX      ; 0054abc7
    MOV EAX,dword ptr [ESP + 0x54]      ; 0054abce
    FSTP float ptr [ESP + 0x60]         ; 0054abd2
    MOV dword ptr [ESP + 0x84],EAX      ; 0054abd6
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 0054abdd
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0054abe2
    PUSH EBX                            ; 0054abe5
    MOV EDI,dword ptr [0x005be368]      ; 0054abe6 | DAT_005be368
    PUSH EDI                            ; 0054abec | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0054abed
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0054abf2
    XOR EAX,EAX                         ; 0054abf5
    MOV dword ptr [ESP + 0xc4],EAX      ; 0054abf7
    LEA EAX,[ESP + 0x50]                ; 0054abfe
        ;   Label: LAB_0054abfe
    PUSH EAX                            ; 0054ac02
    LEA EAX,[ESP + 0x78]                ; 0054ac03
    PUSH EAX                            ; 0054ac07
    MOV EDX,dword ptr [0x005be368]      ; 0054ac08 | DAT_005be368
    PUSH EDX                            ; 0054ac0e | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 0054ac0f
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00()
    MOV dword ptr [ESP + 0xdc],EAX      ; 0054ac14
    FLD float ptr [ESP + 0xdc]          ; 0054ac1b
    ADD ESP,0xc                         ; 0054ac22
    FLDZ                                ; 0054ac25
    FXCH                                ; 0054ac27
    FSTP double ptr [ESP]               ; 0054ac29
    FCOMP double ptr [ESP]              ; 0054ac2c
    FNSTSW AX                           ; 0054ac2f
    SAHF                                ; 0054ac31
    JA 0x0054aec3                       ; 0054ac32
        ;   XREF to: 0054aec3 (CONDITIONAL_JUMP)  ; LAB_0054aec3
    FLD1                                ; 0054ac38
    FCOMP double ptr [ESP]              ; 0054ac3a
    FNSTSW AX                           ; 0054ac3d
    SAHF                                ; 0054ac3f
    JC 0x0054aec3                       ; 0054ac40
        ;   XREF to: 0054aec3 (CONDITIONAL_JUMP)  ; LAB_0054aec3
    MOV ECX,dword ptr [0x00765a98]      ; 0054ac46 | g_CCharacterActorType_00765a60.name_hash
    MOV EAX,[0x005be368]                ; 0054ac4c | DAT_005be368
    PUSH ECX                            ; 0054ac51
    MOV ESI,dword ptr [EAX + 0x14cd5c]  ; 0054ac52 | DAT_01fa3fe0
    PUSH ESI                            ; 0054ac58
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054ac59
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0054ac5e
    MOV EDI,EAX                         ; 0054ac61
    TEST EAX,EAX                        ; 0054ac63
    JZ 0x0054ac7d                       ; 0054ac65
        ;   XREF to: 0054ac7d (CONDITIONAL_JUMP)  ; LAB_0054ac7d
    PUSH EAX                            ; 0054ac67
    MOV ESI,dword ptr [EAX + 0x14c]     ; 0054ac68
    CALL dword ptr [ESI + 0x104]        ; 0054ac6e
    ADD ESP,0x4                         ; 0054ac74
    TEST EAX,EAX                        ; 0054ac77
    JLE 0x0054ac7d                      ; 0054ac79
        ;   XREF to: 0054ac7d (CONDITIONAL_JUMP)  ; LAB_0054ac7d
    XOR EDI,EDI                         ; 0054ac7b
    MOV EAX,[0x01c78c78]                ; 0054ac7d | g_CGlassActorType_01c78c40.name_hash
        ;   Label: LAB_0054ac7d
    PUSH EAX                            ; 0054ac82
    MOV EAX,[0x005be368]                ; 0054ac83 | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 0054ac88 | DAT_01fa3fe0
    PUSH EDX                            ; 0054ac8e
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054ac8f
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0xd0],EAX      ; 0054ac94
    ADD ESP,0x8                         ; 0054ac9b
    MOV ECX,dword ptr [0x02dd10bc]      ; 0054ac9e | g_CTriggerActorType_02dd1084.name_hash
    MOV EAX,[0x005be368]                ; 0054aca4 | DAT_005be368
    PUSH ECX                            ; 0054aca9
    MOV ESI,dword ptr [EAX + 0x14cd5c]  ; 0054acaa | DAT_01fa3fe0
    PUSH ESI                            ; 0054acb0
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054acb1
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0054acb6
    MOV ESI,EAX                         ; 0054acb9
    MOV dword ptr [ESP + 0xbc],EAX      ; 0054acbb
    MOV EAX,[0x0077bd78]                ; 0054acc2 | g_CCrateActorType_0077bd40.name_hash
    PUSH EAX                            ; 0054acc7
    MOV EAX,[0x005be368]                ; 0054acc8 | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 0054accd | DAT_01fa3fe0
    PUSH EDX                            ; 0054acd3
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054acd4
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0xc8],EAX      ; 0054acd9
    ADD ESP,0x8                         ; 0054ace0
    MOV ECX,dword ptr [0x01c7068c]      ; 0054ace3 | g_CFlameCanActorType_01c70654.name_hash
    MOV EAX,[0x005be368]                ; 0054ace9 | DAT_005be368
    PUSH ECX                            ; 0054acee
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 0054acef | DAT_01fa3fe0
    PUSH EDX                            ; 0054acf5
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054acf6
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0054acfb
    TEST EDI,EDI                        ; 0054acfe
    JZ 0x0054af35                       ; 0054ad00
        ;   XREF to: 0054af35 (CONDITIONAL_JUMP)  ; LAB_0054af35
    LEA EAX,[ESP + 0x8]                 ; 0054ad06
    PUSH EAX                            ; 0054ad0a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0054ad0b
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    MOV EAX,[0x005be368]                ; 0054ad10 | DAT_005be368
    ADD ESP,0x4                         ; 0054ad15
    MOV EAX,dword ptr [EAX + 0x14cd60]  ; 0054ad18 | DAT_01fa3fe4
    MOV dword ptr [ESP + 0x8],EAX       ; 0054ad1e
    PUSH EBX                            ; 0054ad22
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054ad23
    CALL dword ptr [EAX + 0xe4]         ; 0054ad29
    MOV dword ptr [ESP + 0xd4],EAX      ; 0054ad2f
    MOV ESI,0x3ecccccd                  ; 0054ad36
    FLD float ptr [ESP + 0xd4]          ; 0054ad3b
    ADD ESP,0x4                         ; 0054ad42
    MOV dword ptr [ESP + 0x10],ESI      ; 0054ad45
    MOV ESI,dword ptr [0x005be368]      ; 0054ad49 | DAT_005be368
    LEA EAX,[ESI + 0x14cd34]            ; 0054ad4f
    FSTP float ptr [ESP + 0xc]          ; 0054ad55
    FLD float ptr [EAX]                 ; 0054ad59 | DAT_01fa3fb8
    FSUB float ptr [ESI + 0x14cd28]     ; 0054ad5b | DAT_01fa3fac
    FSTP float ptr [ESP + 0x5c]         ; 0054ad61
    FLD float ptr [EAX + 0x4]           ; 0054ad65 | DAT_01fa3fbc
    FSUB float ptr [ESI + 0x14cd2c]     ; 0054ad68 | DAT_01fa3fb0
    FST float ptr [ESP + 0x60]          ; 0054ad6e
    FMUL float ptr [ESP + 0x60]         ; 0054ad72
    FLD float ptr [ESP + 0x5c]          ; 0054ad76
    FMUL ST0                            ; 0054ad7a
    FLD float ptr [EAX + 0x8]           ; 0054ad7c | DAT_01fa3fc0
    FSUB float ptr [ESI + 0x14cd30]     ; 0054ad7f | DAT_01fa3fb4
    FXCH                                ; 0054ad85
    FADDP ST2,ST0                       ; 0054ad87
    FST float ptr [ESP + 0x64]          ; 0054ad89
    FMUL float ptr [ESP + 0x64]         ; 0054ad8d
    FADDP                               ; 0054ad91
    FSQRT                               ; 0054ad93
    FDIVR double ptr [0x00596ec5]       ; 0054ad95 | DOUBLE_00596ec5
    FLD float ptr [ESP + 0x5c]          ; 0054ad9b
    FXCH                                ; 0054ad9f
    FSTP float ptr [ESP + 0xcc]         ; 0054ada1
    FMUL float ptr [ESP + 0xcc]         ; 0054ada8
    FLD float ptr [ESP + 0x60]          ; 0054adaf
    FMUL float ptr [ESP + 0xcc]         ; 0054adb3
    FLD float ptr [ESP + 0x64]          ; 0054adba
    FMUL float ptr [ESP + 0xcc]         ; 0054adbe
    LEA ESI,[ESP + 0x14]                ; 0054adc5
    LEA EAX,[ESP + 0x98]                ; 0054adc9
    FXCH ST2                            ; 0054add0
    FSTP float ptr [ESP + 0x98]         ; 0054add2
    FSTP float ptr [ESP + 0x9c]         ; 0054add9
    FSTP float ptr [ESP + 0xa0]         ; 0054ade0
    CMP ESI,EAX                         ; 0054ade7
    JZ 0x0054ae0c                       ; 0054ade9
        ;   XREF to: 0054ae0c (CONDITIONAL_JUMP)  ; LAB_0054ae0c
    MOV EAX,dword ptr [ESP + 0x98]      ; 0054adeb
    MOV dword ptr [ESP + 0x14],EAX      ; 0054adf2
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0054adf6
    MOV dword ptr [ESP + 0x18],EAX      ; 0054adfd
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0054ae01
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054ae08
    MOV EAX,[0x005be368]                ; 0054ae0c | DAT_005be368
        ;   Label: LAB_0054ae0c
    ADD EAX,0x14cd50                    ; 0054ae11
    PUSH EAX                            ; 0054ae16 | DAT_01fa3fd4
    LEA EAX,[ESP + 0x6c]                ; 0054ae17
    PUSH EAX                            ; 0054ae1b
    PUSH EDI                            ; 0054ae1c
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0054ae1d
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV ESI,EAX                         ; 0054ae22
    LEA EAX,[ESP + 0x30]                ; 0054ae24
    ADD ESP,0xc                         ; 0054ae28
    CMP EAX,ESI                         ; 0054ae2b
    JZ 0x0054ae43                       ; 0054ae2d
        ;   XREF to: 0054ae43 (CONDITIONAL_JUMP)  ; LAB_0054ae43
    MOV EAX,dword ptr [ESI]             ; 0054ae2f
    MOV dword ptr [ESP + 0x24],EAX      ; 0054ae31
    MOV EAX,dword ptr [ESI + 0x4]       ; 0054ae35
    MOV dword ptr [ESP + 0x28],EAX      ; 0054ae38
    MOV EAX,dword ptr [ESI + 0x8]       ; 0054ae3c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0054ae3f
    MOV EAX,dword ptr [EBX + 0x564]     ; 0054ae43
        ;   Label: LAB_0054ae43
    MOV EDX,0x3f800000                  ; 0054ae49
    MOV dword ptr [ESP + 0x30],EAX      ; 0054ae4e
    MOV dword ptr [ESP + 0x34],EDX      ; 0054ae52
    MOV EAX,0x65                        ; 0054ae56
    MOV dword ptr [ESP + 0x3c],EBX      ; 0054ae5b
    MOV dword ptr [ESP + 0x38],EAX      ; 0054ae5f
    PUSH EBX                            ; 0054ae63
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054ae64
    CALL dword ptr [EAX + 0x8c]         ; 0054ae6a
    ADD ESP,0x4                         ; 0054ae70
    MOV dword ptr [ESP + 0x40],EAX      ; 0054ae73
    LEA EAX,[ESP + 0x8]                 ; 0054ae77
    PUSH EAX                            ; 0054ae7b
    MOV ESI,dword ptr [EDI + 0x14c]     ; 0054ae7c
    PUSH EDI                            ; 0054ae82
    CALL dword ptr [ESI + 0x100]        ; 0054ae83
    MOV ECX,dword ptr [EBX + 0x2dc]     ; 0054ae89
    ADD ESP,0x8                         ; 0054ae8f
    TEST ECX,ECX                        ; 0054ae92
    JZ 0x0054aec3                       ; 0054ae94
        ;   XREF to: 0054aec3 (CONDITIONAL_JUMP)  ; LAB_0054aec3
    MOV EAX,[0x005be368]                ; 0054ae96 | DAT_005be368
    MOV ESI,dword ptr [EAX + 0x14cd5c]  ; 0054ae9b | DAT_01fa3fe0
    PUSH ESI                            ; 0054aea1
    PUSH EAX                            ; 0054aea2 | DAT_01e57284
        ;   Label: LAB_0054aea2
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0054aea3
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0054aea8
        ;   Label: LAB_0054aea8
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0054aeab
        ;   Label: LAB_0054aeab
    INC EDI                             ; 0054aeb2
    MOV dword ptr [ESP + 0xc4],EDI      ; 0054aeb3
    CMP EDI,0x4                         ; 0054aeba
    JL 0x0054abfe                       ; 0054aebd
        ;   XREF to: 0054abfe (CONDITIONAL_JUMP)  ; LAB_0054abfe
    MOV EAX,dword ptr [ESP + 0x44]      ; 0054aec3
        ;   Label: LAB_0054aec3
    MOV dword ptr [ESP + 0xa4],EAX      ; 0054aec7
    MOV EAX,dword ptr [ESP + 0x48]      ; 0054aece
    MOV dword ptr [ESP + 0xa8],EAX      ; 0054aed2
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0054aed9
    MOV dword ptr [ESP + 0xac],EAX      ; 0054aedd
    LEA EAX,[EBX + 0x3c]                ; 0054aee4
    MOV EDX,dword ptr [0x005b80f0]      ; 0054aee7 | DAT_005b80f0
    PUSH EAX                            ; 0054aeed
    LEA EAX,[ESP + 0xa8]                ; 0054aeee
    FLD float ptr [ESP + 0xac]          ; 0054aef5
    PUSH EAX                            ; 0054aefc
    FADD float ptr [0x00596ec1]         ; 0054aefd | FLOAT_00596ec1
    PUSH EDX                            ; 0054af03
    FSTP float ptr [ESP + 0xb4]         ; 0054af04
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20 ; 0054af0b
        ;   XREF to: 0048af20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    FLD float ptr [EBX + 0x76c]         ; 0054af10
    MOV EAX,0x1                         ; 0054af16
    MOV dword ptr [EBX + 0x8a8],0x2     ; 0054af1b
    ADD ESP,0xc                         ; 0054af25
    FSTP float ptr [EBX + 0x2f8]        ; 0054af28
    MOV ESP,EBP                         ; 0054af2e
    POP EBP                             ; 0054af30
    POP EDI                             ; 0054af31
    POP ESI                             ; 0054af32
    POP EBX                             ; 0054af33
    RET                                 ; 0054af34
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0054af35
        ;   Label: LAB_0054af35
    TEST ECX,ECX                        ; 0054af3c
    JNZ 0x0054af9e                      ; 0054af3e
        ;   XREF to: 0054af9e (CONDITIONAL_JUMP)  ; LAB_0054af9e
    TEST ESI,ESI                        ; 0054af40
    JZ 0x0054afcc                       ; 0054af42
        ;   XREF to: 0054afcc (CONDITIONAL_JUMP)  ; LAB_0054afcc
    PUSH ESI                            ; 0054af48
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580 ; 0054af49
        ;   XREF to: 00548580 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 0054af4e
    PUSH EBX                            ; 0054af51
    PUSH ESI                            ; 0054af52
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005485a0 ; 0054af53
        ;   XREF to: 005485a0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0054af58
    TEST EAX,EAX                        ; 0054af5b
    JZ 0x0054af8c                       ; 0054af5d
        ;   XREF to: 0054af8c (CONDITIONAL_JUMP)  ; LAB_0054af8c
    PUSH EBX                            ; 0054af5f
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054af60
    CALL dword ptr [EAX + 0xe4]         ; 0054af66
    MOV dword ptr [ESP + 0xd4],EAX      ; 0054af6c
    FLD float ptr [ESP + 0xd4]          ; 0054af73
    ADD ESP,0x4                         ; 0054af7a
    SUB ESP,0x4                         ; 0054af7d
    FSTP float ptr [ESP]                ; 0054af80
    PUSH ESI                            ; 0054af83
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0 ; 0054af84
        ;   XREF to: 005485e0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0054af89
    MOV EDI,dword ptr [ESP + 0xbc]      ; 0054af8c
        ;   Label: LAB_0054af8c
    PUSH EDI                            ; 0054af93
    MOV EAX,[0x005be368]                ; 0054af94 | DAT_005be368
    JMP 0x0054aea2                      ; 0054af99
        ;   XREF to: 0054aea2 (UNCONDITIONAL_JUMP)  ; LAB_0054aea2
    PUSH ECX                            ; 0054af9e
        ;   Label: LAB_0054af9e
    CALL core_glass.cpp_FUN_004aded0    ; 0054af9f
        ;   XREF to: 004aded0 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004aded0()
    ADD ESP,0x4                         ; 0054afa4
    TEST EAX,EAX                        ; 0054afa7
    JZ 0x0054aec3                       ; 0054afa9
        ;   XREF to: 0054aec3 (CONDITIONAL_JUMP)  ; LAB_0054aec3
    MOV EAX,[0x005be368]                ; 0054afaf | DAT_005be368
    ADD EAX,0x14cd50                    ; 0054afb4
    PUSH EAX                            ; 0054afb9 | DAT_01fa3fd4
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0054afba
    PUSH ECX                            ; 0054afc1
    CALL core_glass.cpp_CGlass_shatter_FUN_004ada20 ; 0054afc2
        ;   XREF to: 004ada20 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004ada20(CGlass * this_ptr, CVector3f * location)
    JMP 0x0054aea8                      ; 0054afc7
        ;   XREF to: 0054aea8 (UNCONDITIONAL_JUMP)  ; LAB_0054aea8
    MOV ESI,dword ptr [ESP + 0xc0]      ; 0054afcc
        ;   Label: LAB_0054afcc
    TEST ESI,ESI                        ; 0054afd3
    JNZ 0x0054afe9                      ; 0054afd5
        ;   XREF to: 0054afe9 (CONDITIONAL_JUMP)  ; LAB_0054afe9
    TEST EAX,EAX                        ; 0054afd7
    JZ 0x0054aff7                       ; 0054afd9
        ;   XREF to: 0054aff7 (CONDITIONAL_JUMP)  ; LAB_0054aff7
    PUSH EAX                            ; 0054afdb
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550 ; 0054afdc
        ;   XREF to: 0048e550 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0054afe1
    JMP 0x0054aeab                      ; 0054afe4
        ;   XREF to: 0054aeab (UNCONDITIONAL_JUMP)  ; LAB_0054aeab
    PUSH ESI                            ; 0054afe9
        ;   Label: LAB_0054afe9
    CALL core_crate.cpp_CCrate_explode_FUN_0043cdb0 ; 0054afea
        ;   XREF to: 0043cdb0 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_CCrate_explode_FUN_0043cdb0(CCrate * this_ptr)
    ADD ESP,0x4                         ; 0054afef
    JMP 0x0054aeab                      ; 0054aff2
        ;   XREF to: 0054aeab (UNCONDITIONAL_JUMP)  ; LAB_0054aeab
    MOV EAX,[0x005be368]                ; 0054aff7 | DAT_005be368
        ;   Label: LAB_0054aff7
    MOV EDI,dword ptr [EAX + 0x14cd5c]  ; 0054affc | DAT_01fa3fe0
    PUSH EDI                            ; 0054b002
    MOV EDX,dword ptr [EAX + 0x14cd4c]  ; 0054b003 | DAT_01fa3fd0
    PUSH EDX                            ; 0054b009
    LEA ESI,[EAX + 0x14cd40]            ; 0054b00a
    PUSH ESI                            ; 0054b010 | DAT_01fa3fc4
    ADD EAX,0x14cd50                    ; 0054b011
    PUSH EAX                            ; 0054b016 | DAT_01fa3fd4
    MOV ECX,dword ptr [0x005b80f0]      ; 0054b017 | DAT_005b80f0
    PUSH ECX                            ; 0054b01d
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60 ; 0054b01e
        ;   XREF to: 0048ab60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 0054b023
    JMP 0x0054aec3                      ; 0054b026
        ;   XREF to: 0054aec3 (UNCONDITIONAL_JUMP)  ; LAB_0054aec3

