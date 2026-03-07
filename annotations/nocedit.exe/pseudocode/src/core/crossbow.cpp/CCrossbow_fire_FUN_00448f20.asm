; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00448f20(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x4c]:1  local_4c
;
; Referenced Globals:
;   TerminatedCString s_bow_wav_00619b86
;   double DOUBLE_00619b92 = 1.5
;   double DOUBLE_00619b9a = 10
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CSound* g_CSoundPtr = 03f6af64
;   undefined4 g_CCharacterClassInfo.name_hash
;   CFireEffect g_CFireEffectInstance
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_03261388
;   undefined4 DAT_0326138c
;   undefined4 DAT_03261390
;   undefined4 DAT_03261394
;   undefined4 DAT_03261398
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
;   core_glass.cpp_CGlass_shatter_FUN_004eaef0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
;   core_sound.cpp_CSound_playActorSound_FUN_005b3a40
;   core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
;   core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448f20
        ;   Label: core_crossbow.cpp_CCrossbow_fire_FUN_00448f20
    PUSH ESI                            ; 00448f21
    PUSH EDI                            ; 00448f22
    PUSH EBP                            ; 00448f23
    MOV EBP,ESP                         ; 00448f24
    SUB ESP,0xf0                        ; 00448f26
    AND ESP,0xfffffff8                  ; 00448f2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00448f2f
    LEA ESI,[ESP + 0xb4]                ; 00448f32
    PUSH ESI                            ; 00448f39
    MOV EAX,dword ptr [EBX + 0x154]     ; 00448f3a
    PUSH EBX                            ; 00448f40
    CALL dword ptr [EAX + 0xf4]         ; 00448f41
    ADD ESP,0x8                         ; 00448f47
    PUSH EAX                            ; 00448f4a
    LEA EAX,[ESP + 0x94]                ; 00448f4b
    PUSH EAX                            ; 00448f52
    PUSH EBX                            ; 00448f53
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00448f54
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00448f59
    PUSH EBX                            ; 00448f5c
    CALL core_weapon.cpp_CWeapon_fire_FUN_005ee6e0 ; 00448f5d
        ;   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005ee6e0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00448f62
    TEST EAX,EAX                        ; 00448f65
    JNZ 0x00448f70                      ; 00448f67
        ;   XREF to: 00448f70 (CONDITIONAL_JUMP)  ; LAB_00448f70
    MOV ESP,EBP                         ; 00448f69
    POP EBP                             ; 00448f6b
    POP EDI                             ; 00448f6c
    POP ESI                             ; 00448f6d
    POP EBX                             ; 00448f6e
    RET                                 ; 00448f6f
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 00448f70
        ;   Label: LAB_00448f70
    MOV dword ptr [ESP + 0x80],EAX      ; 00448f76
    LEA EAX,[ESP + 0x78]                ; 00448f7d
    PUSH EAX                            ; 00448f81
    LEA EAX,[ESP + 0x64]                ; 00448f82
    PUSH EAX                            ; 00448f86
    XOR EDX,EDX                         ; 00448f87
    PUSH EBX                            ; 00448f89
    MOV dword ptr [ESP + 0x84],EDX      ; 00448f8a
    MOV dword ptr [ESP + 0x88],EDX      ; 00448f91
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00448f98
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00448f9d
    FLD float ptr [ESP + 0x90]          ; 00448fa0
    FLD float ptr [ESP + 0x94]          ; 00448fa7
    FLD float ptr [ESP + 0x98]          ; 00448fae
    FXCH ST2                            ; 00448fb5
    FADD float ptr [ESP + 0x60]         ; 00448fb7
    FXCH                                ; 00448fbb
    FADD float ptr [ESP + 0x64]         ; 00448fbd
    FXCH ST2                            ; 00448fc1
    FADD float ptr [ESP + 0x68]         ; 00448fc3
    FXCH                                ; 00448fc7
    FSTP float ptr [ESP + 0x84]         ; 00448fc9
    FXCH                                ; 00448fd0
    FSTP float ptr [ESP + 0x88]         ; 00448fd2
    FSTP float ptr [ESP + 0x8c]         ; 00448fd9
    FLD float ptr [EBX + 0x2e8]         ; 00448fe0
    FDIVR double ptr [0x00619b92]       ; 00448fe6 | DOUBLE_00619b92
    FLD float ptr [ESP + 0x60]          ; 00448fec
    FXCH                                ; 00448ff0
    FSTP float ptr [ESP + 0xd8]         ; 00448ff2
    FMUL float ptr [ESP + 0xd8]         ; 00448ff9
    FLD float ptr [ESP + 0x64]          ; 00449000
    FMUL float ptr [ESP + 0xd8]         ; 00449004
    FLD float ptr [ESP + 0x68]          ; 0044900b
    FMUL float ptr [ESP + 0xd8]         ; 0044900f
    MOV ESI,dword ptr [0x006810c8]      ; 00449016 | g_CDemonSetPtr
    FLD float ptr [ESP + 0x90]          ; 0044901c
    FLD float ptr [ESP + 0x94]          ; 00449023
    FLD float ptr [ESP + 0x98]          ; 0044902a
    PUSH ESI                            ; 00449031 | g_CDemonSetInstance
    FXCH ST5                            ; 00449032
    FSTP float ptr [ESP + 0xac]         ; 00449034
    FXCH ST3                            ; 0044903b
    FSTP float ptr [ESP + 0xb0]         ; 0044903d
    FXCH                                ; 00449044
    FSTP float ptr [ESP + 0xb4]         ; 00449046
    FSUB float ptr [ESP + 0xac]         ; 0044904d
    FXCH                                ; 00449054
    FSUB float ptr [ESP + 0xb0]         ; 00449056
    FXCH ST2                            ; 0044905d
    FSUB float ptr [ESP + 0xb4]         ; 0044905f
    FXCH                                ; 00449066
    FSTP float ptr [ESP + 0x70]         ; 00449068
    FXCH                                ; 0044906c
    FSTP float ptr [ESP + 0x74]         ; 0044906e
    FSTP float ptr [ESP + 0x78]         ; 00449072
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 00449076
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0044907b
    PUSH 0x1                            ; 0044907e
    MOV EDI,dword ptr [0x006810c8]      ; 00449080 | g_CDemonSetPtr
    PUSH EDI                            ; 00449086 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 00449087
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0044908c
    PUSH EBX                            ; 0044908f
    MOV EAX,[0x006810c8]                ; 00449090 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 00449095 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 00449096
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EDX,dword ptr [EBX + 0x304]     ; 0044909b
    ADD ESP,0x8                         ; 004490a1
    TEST EDX,EDX                        ; 004490a4
    JNZ 0x004491b1                      ; 004490a6
        ;   XREF to: 004491b1 (CONDITIONAL_JUMP)  ; LAB_004491b1
    XOR EDI,EDI                         ; 004490ac
        ;   Label: LAB_004490ac
    MOV dword ptr [ESP + 0xe0],EDI      ; 004490ae
    LEA EAX,[ESP + 0x84]                ; 004490b5
        ;   Label: LAB_004490b5
    PUSH EAX                            ; 004490bc
    LEA EAX,[ESP + 0x70]                ; 004490bd
    PUSH EAX                            ; 004490c1
    MOV EAX,[0x006810c8]                ; 004490c2 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 004490c7 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 004490c8
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0xf8],EAX      ; 004490cd
    FLD float ptr [ESP + 0xf8]          ; 004490d4
    ADD ESP,0xc                         ; 004490db
    FLDZ                                ; 004490de
    FXCH                                ; 004490e0
    FST float ptr [ESP + 0x8]           ; 004490e2
    FSTP double ptr [ESP]               ; 004490e6
    FCOMP double ptr [ESP]              ; 004490e9
    FNSTSW AX                           ; 004490ec
    SAHF                                ; 004490ee
    JBE 0x004491c6                      ; 004490ef
        ;   XREF to: 004491c6 (CONDITIONAL_JUMP)  ; LAB_004491c6
    MOV ESI,dword ptr [0x006810c8]      ; 004490f5 | g_CDemonSetPtr
        ;   Label: LAB_004490f5
    PUSH ESI                            ; 004490fb | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 004490fc
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00449101
    FLD float ptr [ESP + 0x8]           ; 00449104
    FLD1                                ; 00449108
    FCOMPP                              ; 0044910a
    FNSTSW AX                           ; 0044910c
    SAHF                                ; 0044910e
    JNC 0x00449119                      ; 0044910f
        ;   XREF to: 00449119 (CONDITIONAL_JUMP)  ; LAB_00449119
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00449111
    FLD float ptr [ESP + 0x8]           ; 00449119
        ;   Label: LAB_00449119
    FLD float ptr [ESP + 0x60]          ; 0044911d
    FMUL ST1                            ; 00449121
    FLD float ptr [ESP + 0x64]          ; 00449123
    FMUL ST2                            ; 00449127
    FLD float ptr [ESP + 0x68]          ; 00449129
    FMULP ST3                           ; 0044912d
    FLD float ptr [ESP + 0x6c]          ; 0044912f
    FLD float ptr [ESP + 0x70]          ; 00449133
    LEA EAX,[ESP + 0x90]                ; 00449137
    FLD float ptr [ESP + 0x74]          ; 0044913e
    PUSH EAX                            ; 00449142
    FXCH ST4                            ; 00449143
    FSTP float ptr [ESP + 0xa0]         ; 00449145
    FXCH ST2                            ; 0044914c
    FSTP float ptr [ESP + 0xa4]         ; 0044914e
    FXCH ST3                            ; 00449155
    FSTP float ptr [ESP + 0xa8]         ; 00449157
    PUSH 0x619b86                       ; 0044915e | = "bow-!.wav"
    MOV EAX,[0x00681ef8]                ; 00449163 | g_CSoundInstance | g_CSoundPtr
    FXCH ST2                            ; 00449168
    FADD float ptr [ESP + 0xa4]         ; 0044916a
    FXCH ST2                            ; 00449171
    FADD float ptr [ESP + 0xa8]         ; 00449173
    FXCH                                ; 0044917a
    FADD float ptr [ESP + 0xac]         ; 0044917c
    PUSH EBX                            ; 00449183
    FXCH ST2                            ; 00449184
    FSTP float ptr [ESP + 0x54]         ; 00449186
    FSTP float ptr [ESP + 0x58]         ; 0044918a
    PUSH EAX                            ; 0044918e | g_CSoundInstance
    FSTP float ptr [ESP + 0x60]         ; 0044918f
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 00449193
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 00449198
    ADD ESP,0x10                        ; 0044919d
    MOV dword ptr [EBX + 0x300],0x3f2a7efa ; 004491a0
    MOV ESP,EBP                         ; 004491aa
    POP EBP                             ; 004491ac
    POP EDI                             ; 004491ad
    POP ESI                             ; 004491ae
    POP EBX                             ; 004491af
    RET                                 ; 004491b0
    PUSH EDX                            ; 004491b1
        ;   Label: LAB_004491b1
    MOV ESI,dword ptr [0x006810c8]      ; 004491b2 | g_CDemonSetPtr
    PUSH ESI                            ; 004491b8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004491b9
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004491be
    JMP 0x004490ac                      ; 004491c1
        ;   XREF to: 004490ac (UNCONDITIONAL_JUMP)  ; LAB_004490ac
    FLD1                                ; 004491c6
        ;   Label: LAB_004491c6
    FCOMP double ptr [ESP]              ; 004491c8
    FNSTSW AX                           ; 004491cb
    SAHF                                ; 004491cd
    JC 0x004490f5                       ; 004491ce
        ;   XREF to: 004490f5 (CONDITIONAL_JUMP)  ; LAB_004490f5
    MOV EDX,dword ptr [0x00823c4c]      ; 004491d4 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 004491da | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004491df
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 004491e0 | DAT_032613bc
    PUSH ECX                            ; 004491e6
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004491e7
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004491ec
    MOV ESI,EAX                         ; 004491ef
    TEST EAX,EAX                        ; 004491f1
    JZ 0x0044920b                       ; 004491f3
        ;   XREF to: 0044920b (CONDITIONAL_JUMP)  ; LAB_0044920b
    PUSH EAX                            ; 004491f5
    MOV EDI,dword ptr [EAX + 0x154]     ; 004491f6
    CALL dword ptr [EDI + 0x120]        ; 004491fc
    ADD ESP,0x4                         ; 00449202
    TEST EAX,EAX                        ; 00449205
    JLE 0x0044920b                      ; 00449207
        ;   XREF to: 0044920b (CONDITIONAL_JUMP)  ; LAB_0044920b
    XOR ESI,ESI                         ; 00449209
    MOV EDI,dword ptr [0x02d83360]      ; 0044920b | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0044920b
    MOV EAX,[0x006810c8]                ; 00449211 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDI                            ; 00449216
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00449217 | DAT_032613bc
    PUSH EDX                            ; 0044921d
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0044921e
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0xf0],EAX      ; 00449223
    ADD ESP,0x8                         ; 0044922a
    MOV ECX,dword ptr [0x03f87490]      ; 0044922d | g_CTriggerClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 00449233 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 00449238
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 00449239 | DAT_032613bc
    PUSH EDI                            ; 0044923f
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00449240
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00449245
    MOV EDI,EAX                         ; 00449248
    MOV dword ptr [ESP + 0xdc],EAX      ; 0044924a
    TEST ESI,ESI                        ; 00449251
    JNZ 0x004492cc                      ; 00449253
        ;   XREF to: 004492cc (CONDITIONAL_JUMP)  ; LAB_004492cc
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00449255
    TEST EAX,EAX                        ; 0044925c
    JNZ 0x004494c1                      ; 0044925e
        ;   XREF to: 004494c1 (CONDITIONAL_JUMP)  ; LAB_004494c1
    TEST EDI,EDI                        ; 00449264
    JZ 0x0044950a                       ; 00449266
        ;   XREF to: 0044950a (CONDITIONAL_JUMP)  ; LAB_0044950a
    PUSH EDI                            ; 0044926c
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0 ; 0044926d
        ;   XREF to: 005e0aa0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 00449272
    PUSH EBX                            ; 00449275
    PUSH EDI                            ; 00449276
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0 ; 00449277
        ;   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0044927c
    TEST EAX,EAX                        ; 0044927f
    JZ 0x004492b0                       ; 00449281
        ;   XREF to: 004492b0 (CONDITIONAL_JUMP)  ; LAB_004492b0
    PUSH EBX                            ; 00449283
    MOV EAX,dword ptr [EBX + 0x154]     ; 00449284
    CALL dword ptr [EAX + 0x100]        ; 0044928a
    MOV dword ptr [ESP + 0xf0],EAX      ; 00449290
    FLD float ptr [ESP + 0xf0]          ; 00449297
    ADD ESP,0x4                         ; 0044929e
    SUB ESP,0x4                         ; 004492a1
    FSTP float ptr [ESP]                ; 004492a4
    PUSH EDI                            ; 004492a7
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00 ; 004492a8
        ;   XREF to: 005e0b00 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 004492ad
    MOV ESI,dword ptr [ESP + 0xdc]      ; 004492b0
        ;   Label: LAB_004492b0
    PUSH ESI                            ; 004492b7
    MOV EDI,dword ptr [0x006810c8]      ; 004492b8 | g_CDemonSetPtr
    PUSH EDI                            ; 004492be | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004492bf
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004492c4
    JMP 0x004494ed                      ; 004492c7
        ;   XREF to: 004494ed (UNCONDITIONAL_JUMP)  ; LAB_004494ed
    PUSH ESI                            ; 004492cc
        ;   Label: LAB_004492cc
    MOV EAX,dword ptr [ESI + 0x154]     ; 004492cd
    CALL dword ptr [EAX + 0xf4]         ; 004492d3
    ADD ESP,0x4                         ; 004492d9
    TEST EAX,EAX                        ; 004492dc
    JZ 0x00449313                       ; 004492de
        ;   XREF to: 00449313 (CONDITIONAL_JUMP)  ; LAB_00449313
    CMP dword ptr [ESP + 0xe0],0x0      ; 004492e0
    JNZ 0x004490f5                      ; 004492e8
        ;   XREF to: 004490f5 (CONDITIONAL_JUMP)  ; LAB_004490f5
    MOV ECX,dword ptr [EBX + 0x568]     ; 004492ee
    MOV EDX,dword ptr [0x006810c8]      ; 004492f4 | g_CDemonSetInstance | g_CDemonSetPtr
    INC ECX                             ; 004492fa
    PUSH EDX                            ; 004492fb | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x568],ECX     ; 004492fc
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 00449302
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00449307
    XOR EAX,EAX                         ; 0044930a
    MOV ESP,EBP                         ; 0044930c
    POP EBP                             ; 0044930e
    POP EDI                             ; 0044930f
    POP ESI                             ; 00449310
    POP EBX                             ; 00449311
    RET                                 ; 00449312
    LEA EAX,[ESP + 0xc]                 ; 00449313
        ;   Label: LAB_00449313
    PUSH EAX                            ; 00449317
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00449318
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EAX,[0x006810c8]                ; 0044931d | g_CDemonSetPtr
    ADD ESP,0x4                         ; 00449322
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 00449325 | DAT_032613c0
    MOV dword ptr [ESP + 0xc],EAX       ; 0044932b
    PUSH EBX                            ; 0044932f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00449330
    CALL dword ptr [EAX + 0x100]        ; 00449336
    MOV ECX,0x3ecccccd                  ; 0044933c
    MOV dword ptr [ESP + 0xf0],EAX      ; 00449341
    MOV EDI,dword ptr [0x006810c8]      ; 00449348 | g_CDemonSetPtr
    FLD float ptr [ESP + 0xf0]          ; 0044934e
    ADD ESP,0x4                         ; 00449355
    LEA EAX,[EDI + 0x14d11c]            ; 00449358 | DAT_03261394
    MOV dword ptr [ESP + 0x14],ECX      ; 0044935e
    FSTP float ptr [ESP + 0x10]         ; 00449362
    FLD float ptr [EAX]                 ; 00449366 | DAT_03261394
    FSUB float ptr [EDI + 0x14d110]     ; 00449368 | DAT_03261388
    FSTP float ptr [ESP + 0x54]         ; 0044936e
    FLD float ptr [EAX + 0x4]           ; 00449372 | DAT_03261398
    FSUB float ptr [EDI + 0x14d114]     ; 00449375 | DAT_0326138c
    FST float ptr [ESP + 0x58]          ; 0044937b
    FMUL float ptr [ESP + 0x58]         ; 0044937f
    FLD float ptr [ESP + 0x54]          ; 00449383
    FMUL ST0                            ; 00449387
    FLD float ptr [EAX + 0x8]           ; 00449389 | DAT_0326139c
    FSUB float ptr [EDI + 0x14d118]     ; 0044938c | DAT_03261390
    FXCH                                ; 00449392
    FADDP ST2,ST0                       ; 00449394
    FST float ptr [ESP + 0x5c]          ; 00449396
    FMUL float ptr [ESP + 0x5c]         ; 0044939a
    FADDP                               ; 0044939e
    FSQRT                               ; 004493a0
    FDIVR double ptr [0x00619b9a]       ; 004493a2 | DOUBLE_00619b9a
    FLD float ptr [ESP + 0x54]          ; 004493a8
    FXCH                                ; 004493ac
    FSTP float ptr [ESP + 0xe4]         ; 004493ae
    FMUL float ptr [ESP + 0xe4]         ; 004493b5
    FLD float ptr [ESP + 0x58]          ; 004493bc
    FMUL float ptr [ESP + 0xe4]         ; 004493c0
    FLD float ptr [ESP + 0x5c]          ; 004493c7
    FMUL float ptr [ESP + 0xe4]         ; 004493cb
    LEA EDI,[ESP + 0xc0]                ; 004493d2
    LEA EAX,[ESP + 0x18]                ; 004493d9
    FXCH ST2                            ; 004493dd
    FSTP float ptr [ESP + 0xc0]         ; 004493df
    FSTP float ptr [ESP + 0xc4]         ; 004493e6
    FSTP float ptr [ESP + 0xc8]         ; 004493ed
    CMP EAX,EDI                         ; 004493f4
    JZ 0x00449419                       ; 004493f6
        ;   XREF to: 00449419 (CONDITIONAL_JUMP)  ; LAB_00449419
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004493f8
    MOV dword ptr [ESP + 0x18],EAX      ; 004493ff
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00449403
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044940a
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0044940e
    MOV dword ptr [ESP + 0x20],EAX      ; 00449415
    MOV EAX,[0x006810c8]                ; 00449419 | g_CDemonSetPtr
        ;   Label: LAB_00449419
    ADD EAX,0x14d138                    ; 0044941e
    PUSH EAX                            ; 00449423 | DAT_032613b0
    LEA EAX,[ESP + 0xd0]                ; 00449424
    PUSH EAX                            ; 0044942b
    PUSH ESI                            ; 0044942c
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0044942d
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDI,EAX                         ; 00449432
    LEA EAX,[ESP + 0x34]                ; 00449434
    ADD ESP,0xc                         ; 00449438
    CMP EAX,EDI                         ; 0044943b
    JZ 0x00449453                       ; 0044943d
        ;   XREF to: 00449453 (CONDITIONAL_JUMP)  ; LAB_00449453
    MOV EAX,dword ptr [EDI]             ; 0044943f
    MOV dword ptr [ESP + 0x28],EAX      ; 00449441
    MOV EAX,dword ptr [EDI + 0x4]       ; 00449445
    MOV dword ptr [ESP + 0x2c],EAX      ; 00449448
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044944c
    MOV dword ptr [ESP + 0x30],EAX      ; 0044944f
    MOV EAX,dword ptr [EBX + 0x56c]     ; 00449453
        ;   Label: LAB_00449453
    MOV EDI,0x68                        ; 00449459
    MOV dword ptr [ESP + 0x34],EAX      ; 0044945e
    MOV dword ptr [ESP + 0x3c],EDI      ; 00449462
    MOV EAX,0x3e19999a                  ; 00449466
    MOV dword ptr [ESP + 0x40],EBX      ; 0044946b
    MOV dword ptr [ESP + 0x38],EAX      ; 0044946f
    PUSH EBX                            ; 00449473
    MOV EAX,dword ptr [EBX + 0x154]     ; 00449474
    CALL dword ptr [EAX + 0x8c]         ; 0044947a
    ADD ESP,0x4                         ; 00449480
    LEA EDI,[ESP + 0xc]                 ; 00449483
    PUSH EDI                            ; 00449487
    MOV dword ptr [ESP + 0x48],EAX      ; 00449488
    PUSH ESI                            ; 0044948c
    MOV EAX,dword ptr [ESI + 0x154]     ; 0044948d
    CALL dword ptr [EAX + 0x11c]        ; 00449493
    MOV EDX,dword ptr [EBX + 0x2e4]     ; 00449499
    ADD ESP,0x8                         ; 0044949f
    TEST EDX,EDX                        ; 004494a2
    JZ 0x004490f5                       ; 004494a4
        ;   XREF to: 004490f5 (CONDITIONAL_JUMP)  ; LAB_004490f5
    MOV EAX,[0x006810c8]                ; 004494aa | g_CDemonSetInstance | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 004494af | DAT_032613bc
    PUSH ECX                            ; 004494b5
    PUSH EAX                            ; 004494b6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004494b7
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004494bc
    JMP 0x004494ed                      ; 004494bf
        ;   XREF to: 004494ed (UNCONDITIONAL_JUMP)  ; LAB_004494ed
    PUSH EAX                            ; 004494c1
        ;   Label: LAB_004494c1
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0 ; 004494c2
        ;   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004494c7
    TEST EAX,EAX                        ; 004494ca
    JZ 0x004490f5                       ; 004494cc
        ;   XREF to: 004490f5 (CONDITIONAL_JUMP)  ; LAB_004490f5
    MOV EAX,[0x006810c8]                ; 004494d2 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 004494d7 | DAT_032613b0
    PUSH EAX                            ; 004494dc | DAT_032613b0
    MOV EDX,dword ptr [ESP + 0xec]      ; 004494dd
    PUSH EDX                            ; 004494e4
    CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0 ; 004494e5
        ;   XREF to: 004eaef0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location)
    ADD ESP,0x8                         ; 004494ea
    MOV ESI,dword ptr [ESP + 0xe0]      ; 004494ed
        ;   Label: LAB_004494ed
    INC ESI                             ; 004494f4
    MOV dword ptr [ESP + 0xe0],ESI      ; 004494f5
    CMP ESI,0x4                         ; 004494fc
    JL 0x004490b5                       ; 004494ff
        ;   XREF to: 004490b5 (CONDITIONAL_JUMP)  ; LAB_004490b5
    JMP 0x004490f5                      ; 00449505
        ;   XREF to: 004490f5 (UNCONDITIONAL_JUMP)  ; LAB_004490f5
    MOV EAX,[0x006810c8]                ; 0044950a | g_CDemonSetPtr
        ;   Label: LAB_0044950a
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 0044950f | DAT_032613ac
    PUSH EDX                            ; 00449515
    LEA ESI,[EAX + 0x14d128]            ; 00449516 | DAT_032613a0
    PUSH ESI                            ; 0044951c | DAT_032613a0
    LEA ESI,[EBX + 0x30]                ; 0044951d
    PUSH ESI                            ; 00449520
    ADD EAX,0x14d138                    ; 00449521 | DAT_032613b0
    PUSH EAX                            ; 00449526 | DAT_032613b0
    MOV ECX,dword ptr [0x0067a3d0]      ; 00449527 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 0044952d | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0 ; 0044952e
        ;   XREF to: 004c7bb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0(CFireEffect * this_ptr, CVector3f * impact_position, CVector3f * orientation_angles, CVector3f * surface_normal, ...)
    ADD ESP,0x14                        ; 00449533
    JMP 0x004490f5                      ; 00449536
        ;   XREF to: 004490f5 (UNCONDITIONAL_JUMP)  ; LAB_004490f5

