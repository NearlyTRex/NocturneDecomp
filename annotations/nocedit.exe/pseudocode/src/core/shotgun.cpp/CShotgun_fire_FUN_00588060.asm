; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00588060(CShotgun *this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
; Local Variables:
; SDamageInfo      Stack[-0x11c]:60  SStack_11c
; float            Stack[-0xe0]:4  fStack_e0
; float            Stack[-0xdc]:4  fStack_dc
; float            Stack[-0xd8]:4  fStack_d8
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
; CVector3f        Stack[-0x80]:12  local_80
; CVector3f        Stack[-0x74]:12  CStack_74
; CVector3f[2]     Stack[-0x68]:24  aCStack_68
; float            Stack[-0x4c]:4  fStack_4c
; CFlameCan *      Stack[-0x48]:4  pCStack_48
; CCrate *         Stack[-0x44]:4  pCStack_44
; int              Stack[-0x40]:4  iStack_40
; float            Stack[-0x3c]:4  fStack_3c
; float            Stack[-0x38]:4  fStack_38
; CTrigger *       Stack[-0x34]:4  pCStack_34
; CFlameCan *      Stack[-0x30]:4  pCStack_30
; CCrate *         Stack[-0x2c]:4  pCStack_2c
; float            Stack[-0x28]:4  fStack_28
; int              Stack[-0x24]:4  iStack_24
; CGlass *         Stack[-0x20]:4  pCStack_20
; float            Stack[-0x1c]:4  fStack_1c
; float            Stack[-0x18]:4  fStack_18
;
; Referenced Globals:
;   TerminatedCString s_shotgun_noammo_wav_00649b08
;   TerminatedCString s_shotgun_wav_00649b1b
;   double DOUBLE_00649b27 = 3.14159265350000
;   double DOUBLE_00649b2f = 0.00555555555555555
;   float FLOAT_00649b37 = -0.125
;   double DOUBLE_00649b3f = 1.5
;   double DOUBLE_00649b47 = 10
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

    PUSH EBX                            ; 00588060
        ;   Label: core_shotgun.cpp_CShotgun_fire_FUN_00588060
    PUSH ESI                            ; 00588061
    PUSH EDI                            ; 00588062
    PUSH EBP                            ; 00588063
    MOV EBP,ESP                         ; 00588064
    SUB ESP,0x114                       ; 00588066
    AND ESP,0xfffffff8                  ; 0058806c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058806f
    LEA EAX,[ESP + 0xa8]                ; 00588072
    PUSH EAX                            ; 00588079
    MOV ESI,dword ptr [EBX + 0x154]     ; 0058807a
    PUSH EBX                            ; 00588080
    CALL dword ptr [ESI + 0xf4]         ; 00588081
    ADD ESP,0x8                         ; 00588087
    PUSH EAX                            ; 0058808a
    LEA EAX,[ESP + 0x70]                ; 0058808b
    PUSH EAX                            ; 0058808f
    PUSH EBX                            ; 00588090
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00588091
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00588096
    PUSH EBX                            ; 00588099
    CALL core_weapon.cpp_CWeapon_fire_FUN_005ee6e0 ; 0058809a
        ;   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005ee6e0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0058809f
    TEST EAX,EAX                        ; 005880a2
    JZ 0x00588398                       ; 005880a4
        ;   XREF to: 00588398 (CONDITIONAL_JUMP)  ; LAB_00588398
    FLD float ptr [EBX + 0x578]         ; 005880aa
    FMUL double ptr [0x00649b27]        ; 005880b0 | DOUBLE_00649b27
    FMUL double ptr [0x00649b2f]        ; 005880b6 | DOUBLE_00649b2f
    FPTAN                               ; 005880bc
    FSTP ST0                            ; 005880be
    PUSH 0xf                            ; 005880c0
    FMUL float ptr [EBX + 0x2e8]        ; 005880c2
    PUSH 0xa                            ; 005880c8
    FSTP float ptr [ESP + 0xec]         ; 005880ca
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005880d1
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 005880d6
    XOR ECX,ECX                         ; 005880d9
    MOV dword ptr [ESP + 0xf0],EAX      ; 005880db
    MOV dword ptr [ESP + 0xe8],ECX      ; 005880e2
    TEST EAX,EAX                        ; 005880e9
    JLE 0x0058830a                      ; 005880eb
        ;   XREF to: 0058830a (CONDITIONAL_JUMP)  ; LAB_0058830a
    PUSH 0x40c90fdb                     ; 005880f1
        ;   Label: LAB_005880f1
    PUSH 0x0                            ; 005880f6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005880f8
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x118],EAX     ; 005880fd
    FLD float ptr [ESP + 0x118]         ; 00588104
    ADD ESP,0x8                         ; 0058810b
    PUSH dword ptr [ESP + 0xe4]         ; 0058810e
    PUSH 0x0                            ; 00588115
    FSTP float ptr [ESP + 0xe4]         ; 00588117
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0058811e
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x118],EAX     ; 00588123
    FLD float ptr [ESP + 0x118]         ; 0058812a
    ADD ESP,0x8                         ; 00588131
    FLD float ptr [ESP + 0xdc]          ; 00588134
    FLD ST0                             ; 0058813b
    FCOS                                ; 0058813d
    FXCH                                ; 0058813f
    FSIN                                ; 00588141
    FXCH                                ; 00588143
    FMUL ST2                            ; 00588145
    FXCH                                ; 00588147
    FMULP ST2                           ; 00588149
    FSTP float ptr [ESP + 0x78]         ; 0058814b
    FSTP float ptr [ESP + 0x7c]         ; 0058814f
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 00588153
    MOV dword ptr [ESP + 0x80],EAX      ; 00588159
    LEA EAX,[ESP + 0x78]                ; 00588160
    PUSH EAX                            ; 00588164
    LEA EAX,[ESP + 0x64]                ; 00588165
    PUSH EAX                            ; 00588169
    PUSH EBX                            ; 0058816a
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0058816b
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV ESI,EAX                         ; 00588170
    LEA EAX,[ESP + 0x84]                ; 00588172
    ADD ESP,0xc                         ; 00588179
    CMP EAX,ESI                         ; 0058817c
    JZ 0x00588197                       ; 0058817e
        ;   XREF to: 00588197 (CONDITIONAL_JUMP)  ; LAB_00588197
    MOV EAX,dword ptr [ESI]             ; 00588180
    MOV dword ptr [ESP + 0x78],EAX      ; 00588182
    MOV EAX,dword ptr [ESI + 0x4]       ; 00588186
    MOV dword ptr [ESP + 0x7c],EAX      ; 00588189
    MOV EAX,dword ptr [ESI + 0x8]       ; 0058818d
    MOV dword ptr [ESP + 0x80],EAX      ; 00588190
    FLD float ptr [ESP + 0x6c]          ; 00588197
        ;   Label: LAB_00588197
    FLD float ptr [ESP + 0x70]          ; 0058819b
    FLD float ptr [ESP + 0x74]          ; 0058819f
    FXCH ST2                            ; 005881a3
    FADD float ptr [ESP + 0x78]         ; 005881a5
    FXCH                                ; 005881a9
    FADD float ptr [ESP + 0x7c]         ; 005881ab
    FXCH ST2                            ; 005881af
    FADD float ptr [ESP + 0x80]         ; 005881b1
    FXCH                                ; 005881b8
    FSTP float ptr [ESP + 0xb4]         ; 005881ba
    FXCH                                ; 005881c1
    FSTP float ptr [ESP + 0xb8]         ; 005881c3
    FSTP float ptr [ESP + 0xbc]         ; 005881ca
    FLD float ptr [EBX + 0x2e8]         ; 005881d1
    FDIVR double ptr [0x00649b3f]       ; 005881d7 | DOUBLE_00649b3f
    FLD float ptr [ESP + 0x78]          ; 005881dd
    FXCH                                ; 005881e1
    FSTP float ptr [ESP + 0xec]         ; 005881e3
    FMUL float ptr [ESP + 0xec]         ; 005881ea
    FLD float ptr [ESP + 0x7c]          ; 005881f1
    FMUL float ptr [ESP + 0xec]         ; 005881f5
    FLD float ptr [ESP + 0x80]          ; 005881fc
    FMUL float ptr [ESP + 0xec]         ; 00588203
    FLD float ptr [ESP + 0x6c]          ; 0058820a
    FLD float ptr [ESP + 0x70]          ; 0058820e
    MOV ESI,dword ptr [0x006810c8]      ; 00588212 | g_CDemonSetPtr
    FLD float ptr [ESP + 0x74]          ; 00588218
    PUSH ESI                            ; 0058821c | g_CDemonSetInstance
    FXCH ST5                            ; 0058821d
    FSTP float ptr [ESP + 0x88]         ; 0058821f
    FXCH ST3                            ; 00588226
    FSTP float ptr [ESP + 0x8c]         ; 00588228
    FXCH                                ; 0058822f
    FSTP float ptr [ESP + 0x90]         ; 00588231
    FSUB float ptr [ESP + 0x88]         ; 00588238
    FXCH                                ; 0058823f
    FSUB float ptr [ESP + 0x8c]         ; 00588241
    FXCH ST2                            ; 00588248
    FSUB float ptr [ESP + 0x90]         ; 0058824a
    FXCH                                ; 00588251
    FSTP float ptr [ESP + 0xc4]         ; 00588253
    FXCH                                ; 0058825a
    FSTP float ptr [ESP + 0xc8]         ; 0058825c
    FSTP float ptr [ESP + 0xcc]         ; 00588263
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 0058826a
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058826f
    PUSH 0x1                            ; 00588272
    MOV EDI,dword ptr [0x006810c8]      ; 00588274 | g_CDemonSetPtr
    PUSH EDI                            ; 0058827a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 0058827b
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00588280
    PUSH EBX                            ; 00588283
    MOV EAX,[0x006810c8]                ; 00588284 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 00588289 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0058828a
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EDX,dword ptr [EBX + 0x304]     ; 0058828f
    ADD ESP,0x8                         ; 00588295
    TEST EDX,EDX                        ; 00588298
    JNZ 0x005883bb                      ; 0058829a
        ;   XREF to: 005883bb (CONDITIONAL_JUMP)  ; LAB_005883bb
    XOR EDI,EDI                         ; 005882a0
        ;   Label: LAB_005882a0
    MOV dword ptr [ESP + 0x104],EDI     ; 005882a2
    LEA EAX,[ESP + 0xb4]                ; 005882a9
        ;   Label: LAB_005882a9
    PUSH EAX                            ; 005882b0
    LEA EAX,[ESP + 0xc4]                ; 005882b1
    PUSH EAX                            ; 005882b8
    MOV EAX,[0x006810c8]                ; 005882b9 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 005882be | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 005882bf
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x11c],EAX     ; 005882c4
    FLD float ptr [ESP + 0x11c]         ; 005882cb
    ADD ESP,0xc                         ; 005882d2
    FLDZ                                ; 005882d5
    FXCH                                ; 005882d7
    FST float ptr [ESP + 0x8]           ; 005882d9
    FSTP double ptr [ESP]               ; 005882dd
    FCOMP double ptr [ESP]              ; 005882e0
    FNSTSW AX                           ; 005882e3
    SAHF                                ; 005882e5
    JBE 0x005883d0                      ; 005882e6
        ;   XREF to: 005883d0 (CONDITIONAL_JUMP)  ; LAB_005883d0
    MOV ESI,dword ptr [ESP + 0xe8]      ; 005882ec
        ;   Label: LAB_005882ec
    INC ESI                             ; 005882f3
    MOV EDI,dword ptr [ESP + 0xf0]      ; 005882f4
    MOV dword ptr [ESP + 0xe8],ESI      ; 005882fb
    CMP ESI,EDI                         ; 00588302
    JL 0x005880f1                       ; 00588304
        ;   XREF to: 005880f1 (CONDITIONAL_JUMP)  ; LAB_005880f1
    MOV EAX,[0x006810c8]                ; 0058830a | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0058830a
    PUSH EAX                            ; 0058830f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 00588310
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00588315
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00588318
    MOV dword ptr [ESP + 0x9c],EAX      ; 0058831c
    MOV EAX,dword ptr [ESP + 0x70]      ; 00588323
    MOV dword ptr [ESP + 0xa0],EAX      ; 00588327
    MOV EAX,dword ptr [ESP + 0x74]      ; 0058832e
    MOV dword ptr [ESP + 0xa4],EAX      ; 00588332
    LEA EAX,[EBX + 0x3c]                ; 00588339
    MOV EDX,dword ptr [0x0067a3d0]      ; 0058833c | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EAX                            ; 00588342
    LEA EAX,[ESP + 0xa0]                ; 00588343
    FLD float ptr [ESP + 0xa4]          ; 0058834a
    PUSH EAX                            ; 00588351
    FADD float ptr [0x00649b37]         ; 00588352 | FLOAT_00649b37
    PUSH EDX                            ; 00588358 | g_CFireEffectInstance
    FSTP float ptr [ESP + 0xac]         ; 00588359
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60 ; 00588360
        ;   XREF to: 004c7a60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 00588365
    LEA EAX,[ESP + 0x6c]                ; 00588368
    PUSH EAX                            ; 0058836c
    PUSH 0x649b1b                       ; 0058836d | = "shotgun.wav"
    PUSH EBX                            ; 00588372
    MOV ECX,dword ptr [0x00681ef8]      ; 00588373 | g_CSoundPtr | g_CSoundInstance
    PUSH ECX                            ; 00588379 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 0058837a
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 0058837f
    ADD ESP,0x10                        ; 00588384
    MOV dword ptr [EBX + 0x300],0x3f2a7efa ; 00588387
    MOV ESP,EBP                         ; 00588391
    POP EBP                             ; 00588393
    POP EDI                             ; 00588394
    POP ESI                             ; 00588395
    POP EBX                             ; 00588396
    RET                                 ; 00588397
    LEA EAX,[ESP + 0x6c]                ; 00588398
        ;   Label: LAB_00588398
    PUSH EAX                            ; 0058839c
    PUSH 0x649b08                       ; 0058839d | = "shotgun-noammo.wav"
    PUSH EBX                            ; 005883a2
    MOV EDX,dword ptr [0x00681ef8]      ; 005883a3 | g_CSoundPtr | g_CSoundInstance
    PUSH EDX                            ; 005883a9 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 005883aa
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005883af
    XOR EAX,EAX                         ; 005883b2
    MOV ESP,EBP                         ; 005883b4
    POP EBP                             ; 005883b6
    POP EDI                             ; 005883b7
    POP ESI                             ; 005883b8
    POP EBX                             ; 005883b9
    RET                                 ; 005883ba
    PUSH EDX                            ; 005883bb
        ;   Label: LAB_005883bb
    MOV ESI,dword ptr [0x006810c8]      ; 005883bc | g_CDemonSetPtr
    PUSH ESI                            ; 005883c2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005883c3
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005883c8
    JMP 0x005882a0                      ; 005883cb
        ;   XREF to: 005882a0 (UNCONDITIONAL_JUMP)  ; LAB_005882a0
    FLD1                                ; 005883d0
        ;   Label: LAB_005883d0
    FCOMP double ptr [ESP]              ; 005883d2
    FNSTSW AX                           ; 005883d5
    SAHF                                ; 005883d7
    JC 0x005882ec                       ; 005883d8
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
    MOV EDX,dword ptr [0x00823c4c]      ; 005883de | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 005883e4 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 005883e9
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 005883ea | g_CDemonSetInstance.collision_actor
    PUSH ECX                            ; 005883f0
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005883f1
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005883f6
    MOV ESI,EAX                         ; 005883f9
    TEST EAX,EAX                        ; 005883fb
    JZ 0x00588415                       ; 005883fd
        ;   XREF to: 00588415 (CONDITIONAL_JUMP)  ; LAB_00588415
    PUSH EAX                            ; 005883ff
    MOV EDI,dword ptr [EAX + 0x154]     ; 00588400
    CALL dword ptr [EDI + 0x120]        ; 00588406
    ADD ESP,0x4                         ; 0058840c
    TEST EAX,EAX                        ; 0058840f
    JLE 0x00588415                      ; 00588411
        ;   XREF to: 00588415 (CONDITIONAL_JUMP)  ; LAB_00588415
    XOR ESI,ESI                         ; 00588413
    MOV EDI,dword ptr [0x02d83360]      ; 00588415 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00588415
    MOV EAX,[0x006810c8]                ; 0058841b | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDI                            ; 00588420
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00588421 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00588427
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00588428
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x110],EAX     ; 0058842d
    ADD ESP,0x8                         ; 00588434
    MOV ECX,dword ptr [0x03f87490]      ; 00588437 | g_CTriggerClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 0058843d | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 00588442
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 00588443 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 00588449
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0058844a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0058844f
    MOV EDI,EAX                         ; 00588452
    MOV dword ptr [ESP + 0xf4],EAX      ; 00588454
    MOV EAX,[0x0088797c]                ; 0058845b | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 00588460
    MOV EAX,[0x006810c8]                ; 00588461 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00588466 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0058846c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0058846d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x104],EAX     ; 00588472
    ADD ESP,0x8                         ; 00588479
    MOV ECX,dword ptr [0x02d7a738]      ; 0058847c | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 00588482 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 00588487
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00588488 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0058848e
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0058848f
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x100],EAX     ; 00588494
    ADD ESP,0x8                         ; 0058849b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058849e
    PUSH EBX                            ; 005884a4
    CALL dword ptr [EAX + 0x100]        ; 005884a5
    MOV dword ptr [ESP + 0x114],EAX     ; 005884ab
    FLD float ptr [ESP + 0x114]         ; 005884b2
    ADD ESP,0x4                         ; 005884b9
    FLD1                                ; 005884bc
    FSUB float ptr [ESP + 0x8]          ; 005884be
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005884c2
    FMULP                               ; 005884c9
    MOV dword ptr [ESP + 0x110],EAX     ; 005884cb
    FILD dword ptr [ESP + 0x110]        ; 005884d2
    FDIVP                               ; 005884d9
    FSTP float ptr [ESP + 0x100]        ; 005884db
    TEST ESI,ESI                        ; 005884e2
    JNZ 0x00588540                      ; 005884e4
        ;   XREF to: 00588540 (CONDITIONAL_JUMP)  ; LAB_00588540
    MOV ECX,dword ptr [ESP + 0x108]     ; 005884e6
    TEST ECX,ECX                        ; 005884ed
    JNZ 0x005886ec                      ; 005884ef
        ;   XREF to: 005886ec (CONDITIONAL_JUMP)  ; LAB_005886ec
    TEST EDI,EDI                        ; 005884f5
    JZ 0x0058871a                       ; 005884f7
        ;   XREF to: 0058871a (CONDITIONAL_JUMP)  ; LAB_0058871a
    PUSH EDI                            ; 005884fd
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0 ; 005884fe
        ;   XREF to: 005e0aa0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 00588503
    PUSH EBX                            ; 00588506
    PUSH EDI                            ; 00588507
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0 ; 00588508
        ;   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058850d
    TEST EAX,EAX                        ; 00588510
    JZ 0x00588524                       ; 00588512
        ;   XREF to: 00588524 (CONDITIONAL_JUMP)  ; LAB_00588524
    PUSH dword ptr [ESP + 0x100]        ; 00588514
    PUSH EDI                            ; 0058851b
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00 ; 0058851c
        ;   XREF to: 005e0b00 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 00588521
    MOV EDX,dword ptr [ESP + 0xf4]      ; 00588524
        ;   Label: LAB_00588524
    PUSH EDX                            ; 0058852b
    MOV ECX,dword ptr [0x006810c8]      ; 0058852c | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 00588532 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 00588533
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00588538
    JMP 0x00588744                      ; 0058853b
        ;   XREF to: 00588744 (UNCONDITIONAL_JUMP)  ; LAB_00588744
    PUSH ESI                            ; 00588540
        ;   Label: LAB_00588540
    MOV EAX,dword ptr [ESI + 0x154]     ; 00588541
    CALL dword ptr [EAX + 0xf4]         ; 00588547
    ADD ESP,0x4                         ; 0058854d
    TEST EAX,EAX                        ; 00588550
    JNZ 0x005882ec                      ; 00588552
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
    LEA EAX,[ESP + 0xc]                 ; 00588558
    PUSH EAX                            ; 0058855c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0058855d
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EDI,dword ptr [0x006810c8]      ; 00588562 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 00588568
    MOV EAX,dword ptr [EDI + 0x14d148]  ; 0058856b | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0xc],EAX       ; 00588571
    MOV EAX,dword ptr [ESP + 0x100]     ; 00588575
    MOV dword ptr [ESP + 0x10],EAX      ; 0058857c
    MOV dword ptr [ESP + 0x14],0x3ecccccd ; 00588580
    LEA EAX,[EDI + 0x14d11c]            ; 00588588 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX]                 ; 0058858e | g_CDemonSetInstance.ray_target.x
    FSUB float ptr [EDI + 0x14d110]     ; 00588590 | g_CDemonSetInstance.ray_origin.x
    FSTP float ptr [ESP + 0x90]         ; 00588596
    FLD float ptr [EAX + 0x4]           ; 0058859d | g_CDemonSetInstance.ray_target.y
    FSUB float ptr [EDI + 0x14d114]     ; 005885a0 | g_CDemonSetInstance.ray_origin.y
    FST float ptr [ESP + 0x94]          ; 005885a6
    FMUL float ptr [ESP + 0x94]         ; 005885ad
    FLD float ptr [ESP + 0x90]          ; 005885b4
    FMUL ST0                            ; 005885bb
    FLD float ptr [EAX + 0x8]           ; 005885bd | g_CDemonSetInstance.ray_target.z
    FSUB float ptr [EDI + 0x14d118]     ; 005885c0 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 005885c6
    FADDP ST2,ST0                       ; 005885c8
    FST float ptr [ESP + 0x98]          ; 005885ca
    FMUL float ptr [ESP + 0x98]         ; 005885d1
    FADDP                               ; 005885d8
    FSQRT                               ; 005885da
    FDIVR double ptr [0x00649b47]       ; 005885dc | DOUBLE_00649b47
    FLD float ptr [ESP + 0x90]          ; 005885e2
    FXCH                                ; 005885e9
    FSTP float ptr [ESP + 0x10c]        ; 005885eb
    FMUL float ptr [ESP + 0x10c]        ; 005885f2
    FLD float ptr [ESP + 0x94]          ; 005885f9
    FMUL float ptr [ESP + 0x10c]        ; 00588600
    FLD float ptr [ESP + 0x98]          ; 00588607
    FMUL float ptr [ESP + 0x10c]        ; 0058860e
    LEA EDI,[ESP + 0x18]                ; 00588615
    LEA EAX,[ESP + 0x48]                ; 00588619
    FXCH ST2                            ; 0058861d
    FSTP float ptr [ESP + 0x48]         ; 0058861f
    FSTP float ptr [ESP + 0x4c]         ; 00588623
    FSTP float ptr [ESP + 0x50]         ; 00588627
    CMP EDI,EAX                         ; 0058862b
    JZ 0x00588647                       ; 0058862d
        ;   XREF to: 00588647 (CONDITIONAL_JUMP)  ; LAB_00588647
    MOV EAX,dword ptr [ESP + 0x48]      ; 0058862f
    MOV dword ptr [ESP + 0x18],EAX      ; 00588633
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00588637
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058863b
    MOV EAX,dword ptr [ESP + 0x50]      ; 0058863f
    MOV dword ptr [ESP + 0x20],EAX      ; 00588643
    MOV EAX,[0x006810c8]                ; 00588647 | g_CDemonSetPtr
        ;   Label: LAB_00588647
    ADD EAX,0x14d138                    ; 0058864c
    PUSH EAX                            ; 00588651 | g_CDemonSetInstance.collision_impact_position.x
    LEA EAX,[ESP + 0x58]                ; 00588652
    PUSH EAX                            ; 00588656
    PUSH ESI                            ; 00588657
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00588658
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDI,EAX                         ; 0058865d
    LEA EAX,[ESP + 0x34]                ; 0058865f
    ADD ESP,0xc                         ; 00588663
    CMP EAX,EDI                         ; 00588666
    JZ 0x0058867e                       ; 00588668
        ;   XREF to: 0058867e (CONDITIONAL_JUMP)  ; LAB_0058867e
    MOV EAX,dword ptr [EDI]             ; 0058866a
    MOV dword ptr [ESP + 0x28],EAX      ; 0058866c
    MOV EAX,dword ptr [EDI + 0x4]       ; 00588670
    MOV dword ptr [ESP + 0x2c],EAX      ; 00588673
    MOV EAX,dword ptr [EDI + 0x8]       ; 00588677
    MOV dword ptr [ESP + 0x30],EAX      ; 0058867a
    MOV EDX,0x65                        ; 0058867e
        ;   Label: LAB_0058867e
    MOV EAX,dword ptr [EBX + 0x56c]     ; 00588683
    MOV ECX,0x3e19999a                  ; 00588689
    MOV dword ptr [ESP + 0x34],EAX      ; 0058868e
    MOV dword ptr [ESP + 0x3c],EDX      ; 00588692
    MOV dword ptr [ESP + 0x38],ECX      ; 00588696
    MOV dword ptr [ESP + 0x40],EBX      ; 0058869a
    PUSH EBX                            ; 0058869e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058869f
    CALL dword ptr [EAX + 0x8c]         ; 005886a5
    ADD ESP,0x4                         ; 005886ab
    LEA EDI,[ESP + 0xc]                 ; 005886ae
    PUSH EDI                            ; 005886b2
    MOV dword ptr [ESP + 0x48],EAX      ; 005886b3
    PUSH ESI                            ; 005886b7
    MOV EAX,dword ptr [ESI + 0x154]     ; 005886b8
    CALL dword ptr [EAX + 0x11c]        ; 005886be
    MOV ESI,dword ptr [EBX + 0x2e4]     ; 005886c4
    ADD ESP,0x8                         ; 005886ca
    TEST ESI,ESI                        ; 005886cd
    JZ 0x005882ec                       ; 005886cf
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
    MOV EAX,[0x006810c8]                ; 005886d5 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 005886da | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 005886e0
    PUSH EAX                            ; 005886e1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005886e2
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005886e7
    JMP 0x00588744                      ; 005886ea
        ;   XREF to: 00588744 (UNCONDITIONAL_JUMP)  ; LAB_00588744
    PUSH ECX                            ; 005886ec
        ;   Label: LAB_005886ec
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0 ; 005886ed
        ;   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 005886f2
    TEST EAX,EAX                        ; 005886f5
    JZ 0x005882ec                       ; 005886f7
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
    MOV EAX,[0x006810c8]                ; 005886fd | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 00588702 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EAX                            ; 00588707 | g_CDemonSetInstance.collision_impact_position.x
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00588708
    PUSH EDI                            ; 0058870f
    CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0 ; 00588710
        ;   XREF to: 004eaef0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location)
    ADD ESP,0x8                         ; 00588715
    JMP 0x00588744                      ; 00588718
        ;   XREF to: 00588744 (UNCONDITIONAL_JUMP)  ; LAB_00588744
    MOV ESI,dword ptr [ESP + 0xfc]      ; 0058871a
        ;   Label: LAB_0058871a
    TEST ESI,ESI                        ; 00588721
    JNZ 0x0058873b                      ; 00588723
        ;   XREF to: 0058873b (CONDITIONAL_JUMP)  ; LAB_0058873b
    MOV EDI,dword ptr [ESP + 0xf8]      ; 00588725
    TEST EDI,EDI                        ; 0058872c
    JZ 0x00588761                       ; 0058872e
        ;   XREF to: 00588761 (CONDITIONAL_JUMP)  ; LAB_00588761
    PUSH EDI                            ; 00588730
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340 ; 00588731
        ;   XREF to: 004cb340 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 00588736
    JMP 0x00588744                      ; 00588739
        ;   XREF to: 00588744 (UNCONDITIONAL_JUMP)  ; LAB_00588744
    PUSH ESI                            ; 0058873b
        ;   Label: LAB_0058873b
    CALL core_crate.cpp_CCrate_explode_FUN_00448a70 ; 0058873c
        ;   XREF to: 00448a70 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_CCrate_explode_FUN_00448a70(CCrate * this_ptr)
    ADD ESP,0x4                         ; 00588741
    MOV EAX,dword ptr [ESP + 0x104]     ; 00588744
        ;   Label: LAB_00588744
    INC EAX                             ; 0058874b
    MOV dword ptr [ESP + 0x104],EAX     ; 0058874c
    CMP EAX,0x4                         ; 00588753
    JL 0x005882a9                       ; 00588756
        ;   XREF to: 005882a9 (CONDITIONAL_JUMP)  ; LAB_005882a9
    JMP 0x005882ec                      ; 0058875c
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    MOV EAX,[0x006810c8]                ; 00588761 | g_CDemonSetPtr
        ;   Label: LAB_00588761
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00588766 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0058876c
    MOV ECX,dword ptr [EAX + 0x14d134]  ; 0058876d | g_CDemonSetInstance.ground_type
    PUSH ECX                            ; 00588773
    LEA ESI,[EAX + 0x14d128]            ; 00588774 | g_CDemonSetInstance.collision_normal.x
    PUSH ESI                            ; 0058877a | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 0058877b | g_CDemonSetInstance.collision_impact_position.x
    PUSH EAX                            ; 00588780 | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [0x0067a3d0]      ; 00588781 | g_CFireEffectPtr
    PUSH ESI                            ; 00588787 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0 ; 00588788
        ;   XREF to: 004c76a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 0058878d
    JMP 0x005882ec                      ; 00588790
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec

