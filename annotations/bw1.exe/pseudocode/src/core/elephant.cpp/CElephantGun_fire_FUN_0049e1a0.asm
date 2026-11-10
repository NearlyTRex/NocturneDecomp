; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_0049e1a0(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_shotgun_noammo_wav_005dc8bc
;   TerminatedCString s_elephantgun_wav_005dc8cf
;   undefined4 DAT_005dc8df
;   undefined4 DAT_005dc8e7
;   undefined4 DAT_005dc8ef
;   undefined4 DAT_005dc8f7
;   undefined4 DAT_005dc8ff
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_crate.cpp_FUN_00449600
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40
;   core_glass.cpp_FUN_004e34b0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e1a0
        ;   Label: core_elephant.cpp_CElephantGun_fire_FUN_0049e1a0
    PUSH ESI                            ; 0049e1a1
    PUSH EDI                            ; 0049e1a2
    PUSH EBP                            ; 0049e1a3
    MOV EBP,ESP                         ; 0049e1a4
    SUB ESP,0x180                       ; 0049e1a6
    AND ESP,0xfffffff8                  ; 0049e1ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049e1af
    PUSH EBX                            ; 0049e1b2
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049e1b3
    LEA ESI,[ESP + 0xdc]                ; 0049e1b9
    LEA EDI,[ESP + 0xac]                ; 0049e1c0
    CALL dword ptr [EAX + 0xe0]         ; 0049e1c7
    ADD ESP,0x4                         ; 0049e1cd
    LEA EAX,[ESP + 0xa8]                ; 0049e1d0
    LEA ESI,[ESP + 0xd8]                ; 0049e1d7
    PUSH EAX                            ; 0049e1de
    MOVSD ES:EDI,ESI                    ; 0049e1df
    MOVSD ES:EDI,ESI                    ; 0049e1e0
    MOVSD ES:EDI,ESI                    ; 0049e1e1
    PUSH EBX                            ; 0049e1e2
    LEA ESI,[ESP + 0x110]               ; 0049e1e3
    CALL core_actor.cpp_FUN_00408b40    ; 0049e1ea
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0049e1ef
    LEA EDI,[ESP + 0xe4]                ; 0049e1f2
    LEA ESI,[ESP + 0x108]               ; 0049e1f9
    PUSH EBX                            ; 0049e200
    MOVSD ES:EDI,ESI                    ; 0049e201
    MOVSD ES:EDI,ESI                    ; 0049e202
    MOVSD ES:EDI,ESI                    ; 0049e203
    CALL core_weapon.cpp_CWeapon_fire_FUN_005adde0 ; 0049e204
        ;   XREF to: 005adde0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005adde0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0049e209
    TEST EAX,EAX                        ; 0049e20c
    JZ 0x0049e55b                       ; 0049e20e
        ;   XREF to: 0049e55b (CONDITIONAL_JUMP)  ; LAB_0049e55b
    FLD float ptr [EBX + 0x578]         ; 0049e214
    FMUL float ptr [0x005dc8df]         ; 0049e21a | DAT_005dc8df
    FMUL double ptr [0x005dc8e7]        ; 0049e220 | DAT_005dc8e7
    FPTAN                               ; 0049e226
    FSTP ST0                            ; 0049e228
    PUSH 0xf                            ; 0049e22a
    FMUL float ptr [EBX + 0x2e8]        ; 0049e22c
    PUSH 0xa                            ; 0049e232
    FSTP float ptr [ESP + 0x158]        ; 0049e234
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0049e23b
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0049e240
    XOR ECX,ECX                         ; 0049e243
    MOV dword ptr [ESP + 0x15c],EAX     ; 0049e245
    MOV dword ptr [ESP + 0x154],ECX     ; 0049e24c
    TEST EAX,EAX                        ; 0049e253
    JLE 0x0049e4e9                      ; 0049e255
        ;   XREF to: 0049e4e9 (CONDITIONAL_JUMP)  ; LAB_0049e4e9
    PUSH 0x40c90fdb                     ; 0049e25b
        ;   Label: LAB_0049e25b
    PUSH 0x0                            ; 0049e260
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0049e262
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x184],EAX     ; 0049e267
    FLD float ptr [ESP + 0x184]         ; 0049e26e
    ADD ESP,0x8                         ; 0049e275
    PUSH dword ptr [ESP + 0x150]        ; 0049e278
    PUSH 0x0                            ; 0049e27f
    FSTP float ptr [ESP + 0x150]        ; 0049e281
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0049e288
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x184],EAX     ; 0049e28d
    FLD float ptr [ESP + 0x184]         ; 0049e294
    ADD ESP,0x8                         ; 0049e29b
    FLD float ptr [ESP + 0x148]         ; 0049e29e
    FLD ST0                             ; 0049e2a5
    FCOS                                ; 0049e2a7
    FXCH                                ; 0049e2a9
    FSIN                                ; 0049e2ab
    FXCH                                ; 0049e2ad
    FMUL ST2                            ; 0049e2af
    FXCH                                ; 0049e2b1
    FMULP ST2                           ; 0049e2b3
    FSTP float ptr [ESP + 0xfc]         ; 0049e2b5
    FSTP float ptr [ESP + 0x100]        ; 0049e2bc
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 0049e2c3
    MOV dword ptr [ESP + 0x104],EAX     ; 0049e2c9
    LEA EAX,[ESP + 0xfc]                ; 0049e2d0
    PUSH EAX                            ; 0049e2d7
    PUSH EBX                            ; 0049e2d8
    LEA ESI,[ESP + 0xbc]                ; 0049e2d9
    LEA EDI,[ESP + 0xa4]                ; 0049e2e0
    CALL core_actor.cpp_FUN_00408ac0    ; 0049e2e7
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0xbc]                ; 0049e2ec
    ADD ESP,0x8                         ; 0049e2f3
    MOVSD ES:EDI,ESI                    ; 0049e2f6
    MOVSD ES:EDI,ESI                    ; 0049e2f7
    MOVSD ES:EDI,ESI                    ; 0049e2f8
    LEA EAX,[ESP + 0x9c]                ; 0049e2f9
    LEA ESI,[ESP + 0xfc]                ; 0049e300
    CMP ESI,EAX                         ; 0049e307
    JZ 0x0049e335                       ; 0049e309
        ;   XREF to: 0049e335 (CONDITIONAL_JUMP)  ; LAB_0049e335
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0049e30b
    MOV dword ptr [ESP + 0xfc],EAX      ; 0049e312
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0049e319
    MOV dword ptr [ESP + 0x100],EAX     ; 0049e320
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0049e327
    MOV dword ptr [ESP + 0x104],EAX     ; 0049e32e
    FLD float ptr [ESP + 0xe4]          ; 0049e335
        ;   Label: LAB_0049e335
    FLD float ptr [ESP + 0xe8]          ; 0049e33c
    FLD float ptr [ESP + 0xec]          ; 0049e343
    LEA EDI,[ESP + 0xf0]                ; 0049e34a
    LEA ESI,[ESP + 0x12c]               ; 0049e351
    FXCH ST2                            ; 0049e358
    FADD float ptr [ESP + 0xfc]         ; 0049e35a
    FXCH                                ; 0049e361
    FADD float ptr [ESP + 0x100]        ; 0049e363
    FXCH ST2                            ; 0049e36a
    FADD float ptr [ESP + 0x104]        ; 0049e36c
    FXCH                                ; 0049e373
    FSTP float ptr [ESP + 0x12c]        ; 0049e375
    FXCH                                ; 0049e37c
    FSTP float ptr [ESP + 0x130]        ; 0049e37e
    FSTP float ptr [ESP + 0x134]        ; 0049e385
    MOVSD ES:EDI,ESI                    ; 0049e38c
    MOVSD ES:EDI,ESI                    ; 0049e38d
    MOVSD ES:EDI,ESI                    ; 0049e38e
    FLD float ptr [EBX + 0x2e8]         ; 0049e38f
    FDIVR double ptr [0x005dc8f7]       ; 0049e395 | DAT_005dc8f7
    FLD float ptr [ESP + 0xfc]          ; 0049e39b
    FXCH                                ; 0049e3a2
    FSTP float ptr [ESP + 0x158]        ; 0049e3a4
    FMUL float ptr [ESP + 0x158]        ; 0049e3ab
    FLD float ptr [ESP + 0x100]         ; 0049e3b2
    FMUL float ptr [ESP + 0x158]        ; 0049e3b9
    FLD float ptr [ESP + 0x104]         ; 0049e3c0
    FMUL float ptr [ESP + 0x158]        ; 0049e3c7
    FLD float ptr [ESP + 0xe4]          ; 0049e3ce
    FLD float ptr [ESP + 0xe8]          ; 0049e3d5
    FLD float ptr [ESP + 0xec]          ; 0049e3dc
    MOV ECX,dword ptr [0x00622c18]      ; 0049e3e3 | g_CDemonSetPtr
    LEA EDI,[ESP + 0x60]                ; 0049e3e9
    LEA ESI,[ESP + 0x114]               ; 0049e3ed
    FXCH ST5                            ; 0049e3f4
    FSTP float ptr [ESP + 0x114]        ; 0049e3f6
    FXCH ST3                            ; 0049e3fd
    FSTP float ptr [ESP + 0x118]        ; 0049e3ff
    FXCH                                ; 0049e406
    FSTP float ptr [ESP + 0x11c]        ; 0049e408
    MOVSD ES:EDI,ESI                    ; 0049e40f
    MOVSD ES:EDI,ESI                    ; 0049e410
    MOVSD ES:EDI,ESI                    ; 0049e411
    PUSH ECX                            ; 0049e412 | g_CDemonSetInstance
    LEA EDI,[ESP + 0x7c]                ; 0049e413
    LEA ESI,[ESP + 0xc4]                ; 0049e417
    FSUB float ptr [ESP + 0x64]         ; 0049e41e
    FXCH                                ; 0049e422
    FSUB float ptr [ESP + 0x68]         ; 0049e424
    FXCH ST2                            ; 0049e428
    FSUB float ptr [ESP + 0x6c]         ; 0049e42a
    FXCH                                ; 0049e42e
    FSTP float ptr [ESP + 0xc4]         ; 0049e430
    FXCH                                ; 0049e437
    FSTP float ptr [ESP + 0xc8]         ; 0049e439
    FSTP float ptr [ESP + 0xcc]         ; 0049e440
    MOVSD ES:EDI,ESI                    ; 0049e447
    MOVSD ES:EDI,ESI                    ; 0049e448
    MOVSD ES:EDI,ESI                    ; 0049e449
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0049e44a
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0049e44f
    PUSH 0x1                            ; 0049e452
    MOV ESI,dword ptr [0x00622c18]      ; 0049e454 | g_CDemonSetPtr
    PUSH ESI                            ; 0049e45a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 0049e45b
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0049e460
    PUSH EBX                            ; 0049e463
    MOV EDI,dword ptr [0x00622c18]      ; 0049e464 | g_CDemonSetPtr
    PUSH EDI                            ; 0049e46a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0049e46b
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,dword ptr [EBX + 0x304]     ; 0049e470
    ADD ESP,0x8                         ; 0049e476
    TEST EAX,EAX                        ; 0049e479
    JNZ 0x0049e581                      ; 0049e47b
        ;   XREF to: 0049e581 (CONDITIONAL_JUMP)  ; LAB_0049e581
    XOR ESI,ESI                         ; 0049e481
        ;   Label: LAB_0049e481
    MOV dword ptr [ESP + 0x170],ESI     ; 0049e483
    LEA EAX,[ESP + 0xf0]                ; 0049e48a
        ;   Label: LAB_0049e48a
    PUSH EAX                            ; 0049e491
    LEA EAX,[ESP + 0x7c]                ; 0049e492
    PUSH EAX                            ; 0049e496
    MOV EDI,dword ptr [0x00622c18]      ; 0049e497 | g_CDemonSetPtr
    PUSH EDI                            ; 0049e49d | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 0049e49e
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x188],EAX     ; 0049e4a3
    FLD float ptr [ESP + 0x188]         ; 0049e4aa
    ADD ESP,0xc                         ; 0049e4b1
    FLDZ                                ; 0049e4b4
    FXCH                                ; 0049e4b6
    FST float ptr [ESP + 0x8]           ; 0049e4b8
    FSTP double ptr [ESP]               ; 0049e4bc
    FCOMP double ptr [ESP]              ; 0049e4bf
    FNSTSW AX                           ; 0049e4c2
    SAHF                                ; 0049e4c4
    JBE 0x0049e596                      ; 0049e4c5
        ;   XREF to: 0049e596 (CONDITIONAL_JUMP)  ; LAB_0049e596
    MOV ESI,dword ptr [ESP + 0x154]     ; 0049e4cb
        ;   Label: LAB_0049e4cb
    INC ESI                             ; 0049e4d2
    MOV EDI,dword ptr [ESP + 0x15c]     ; 0049e4d3
    MOV dword ptr [ESP + 0x154],ESI     ; 0049e4da
    CMP ESI,EDI                         ; 0049e4e1
    JL 0x0049e25b                       ; 0049e4e3
        ;   XREF to: 0049e25b (CONDITIONAL_JUMP)  ; LAB_0049e25b
    LEA EDI,[ESP + 0x120]               ; 0049e4e9
        ;   Label: LAB_0049e4e9
    LEA EAX,[EBX + 0x3c]                ; 0049e4f0
    LEA ESI,[ESP + 0xe4]                ; 0049e4f3
    PUSH EAX                            ; 0049e4fa
    MOVSD ES:EDI,ESI                    ; 0049e4fb
    MOVSD ES:EDI,ESI                    ; 0049e4fc
    MOVSD ES:EDI,ESI                    ; 0049e4fd
    LEA EAX,[ESP + 0x124]               ; 0049e4fe
    FLD float ptr [ESP + 0x128]         ; 0049e505
    PUSH EAX                            ; 0049e50c
    MOV EAX,[0x0061c010]                ; 0049e50d | DAT_0061c010
    FADD float ptr [0x005dc8ef]         ; 0049e512 | DAT_005dc8ef
    PUSH EAX                            ; 0049e518
    FSTP float ptr [ESP + 0x130]        ; 0049e519
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70 ; 0049e520
        ;   XREF to: 004b5a70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 0049e525
    LEA EAX,[ESP + 0xe4]                ; 0049e528
    PUSH EAX                            ; 0049e52f
    PUSH 0x5dc8cf                       ; 0049e530 | = "elephantgun.wav"
    PUSH EBX                            ; 0049e535
    MOV EDX,dword ptr [0x006236b8]      ; 0049e536 | DAT_006236b8
    PUSH EDX                            ; 0049e53c
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 0049e53d
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 0049e542
    ADD ESP,0x10                        ; 0049e547
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 0049e54a
    MOV ESP,EBP                         ; 0049e554
    POP EBP                             ; 0049e556
    POP EDI                             ; 0049e557
    POP ESI                             ; 0049e558
    POP EBX                             ; 0049e559
    RET                                 ; 0049e55a
    LEA EAX,[ESP + 0xe4]                ; 0049e55b
        ;   Label: LAB_0049e55b
    PUSH EAX                            ; 0049e562
    PUSH 0x5dc8bc                       ; 0049e563 | = "shotgun-noammo.wav"
    PUSH EBX                            ; 0049e568
    MOV EDX,dword ptr [0x006236b8]      ; 0049e569 | DAT_006236b8
    PUSH EDX                            ; 0049e56f
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 0049e570
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0049e575
    XOR EAX,EAX                         ; 0049e578
    MOV ESP,EBP                         ; 0049e57a
    POP EBP                             ; 0049e57c
    POP EDI                             ; 0049e57d
    POP ESI                             ; 0049e57e
    POP EBX                             ; 0049e57f
    RET                                 ; 0049e580
    PUSH EAX                            ; 0049e581
        ;   Label: LAB_0049e581
    MOV ECX,dword ptr [0x00622c18]      ; 0049e582 | g_CDemonSetPtr
    PUSH ECX                            ; 0049e588 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0049e589
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0049e58e
    JMP 0x0049e481                      ; 0049e591
        ;   XREF to: 0049e481 (UNCONDITIONAL_JUMP)  ; LAB_0049e481
    FLD1                                ; 0049e596
        ;   Label: LAB_0049e596
    FCOMP double ptr [ESP]              ; 0049e598
    FNSTSW AX                           ; 0049e59b
    SAHF                                ; 0049e59d
    JC 0x0049e4cb                       ; 0049e59e
        ;   XREF to: 0049e4cb (CONDITIONAL_JUMP)  ; LAB_0049e4cb
    MOV EAX,[0x007c637c]                ; 0049e5a4 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 0049e5a9
    MOV EAX,[0x00622c18]                ; 0049e5aa | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0049e5af | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0049e5b5
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0049e5b6
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0049e5bb
    MOV dword ptr [ESP + 0x178],EAX     ; 0049e5be
    TEST EAX,EAX                        ; 0049e5c5
    JZ 0x0049e5e6                       ; 0049e5c7
        ;   XREF to: 0049e5e6 (CONDITIONAL_JUMP)  ; LAB_0049e5e6
    PUSH EAX                            ; 0049e5c9
    MOV ESI,dword ptr [EAX + 0x154]     ; 0049e5ca
    CALL dword ptr [ESI + 0x10c]        ; 0049e5d0
    ADD ESP,0x4                         ; 0049e5d6
    TEST EAX,EAX                        ; 0049e5d9
    JLE 0x0049e5e6                      ; 0049e5db
        ;   XREF to: 0049e5e6 (CONDITIONAL_JUMP)  ; LAB_0049e5e6
    XOR ECX,ECX                         ; 0049e5dd
    MOV dword ptr [ESP + 0x178],ECX     ; 0049e5df
    MOV ESI,dword ptr [0x01cd0dfc]      ; 0049e5e6 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0049e5e6
    MOV EAX,[0x00622c18]                ; 0049e5ec | g_CDemonSetPtr
    PUSH ESI                            ; 0049e5f1
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 0049e5f2 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 0049e5f8
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0049e5f9
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0049e5fe
    MOV EDI,EAX                         ; 0049e601
    MOV EAX,[0x02c8ae44]                ; 0049e603 | g_CTriggerClassInfo.name_hash
    PUSH EAX                            ; 0049e608
    MOV EAX,[0x00622c18]                ; 0049e609 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0049e60e | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0049e614
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0049e615
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV ECX,dword ptr [0x007dc6d8]      ; 0049e61a | g_CCrateClassInfo.name_hash
    ADD ESP,0x8                         ; 0049e620
    MOV ESI,EAX                         ; 0049e623
    MOV dword ptr [ESP + 0x160],EAX     ; 0049e625
    MOV EAX,[0x00622c18]                ; 0049e62c | g_CDemonSetPtr
    PUSH ECX                            ; 0049e631
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0049e632 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0049e638
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0049e639
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0049e63e
    ADD ESP,0x8                         ; 0049e645
    MOV ECX,dword ptr [0x01cc4184]      ; 0049e648 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 0049e64e | g_CDemonSetPtr
    PUSH ECX                            ; 0049e653
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0049e654 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0049e65a
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0049e65b
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x170],EAX     ; 0049e660
    ADD ESP,0x8                         ; 0049e667
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049e66a
    PUSH EBX                            ; 0049e670
    CALL dword ptr [EAX + 0xec]         ; 0049e671
    MOV dword ptr [ESP + 0x180],EAX     ; 0049e677
    FLD float ptr [ESP + 0x180]         ; 0049e67e
    ADD ESP,0x4                         ; 0049e685
    FLD1                                ; 0049e688
    FSUB float ptr [ESP + 0x8]          ; 0049e68a
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0049e68e
    FMULP                               ; 0049e695
    MOV dword ptr [ESP + 0x17c],EAX     ; 0049e697
    FILD dword ptr [ESP + 0x17c]        ; 0049e69e
    FDIVP                               ; 0049e6a5
    MOV ECX,dword ptr [ESP + 0x178]     ; 0049e6a7
    FSTP float ptr [ESP + 0x16c]        ; 0049e6ae
    TEST ECX,ECX                        ; 0049e6b5
    JNZ 0x0049e70c                      ; 0049e6b7
        ;   XREF to: 0049e70c (CONDITIONAL_JUMP)  ; LAB_0049e70c
    TEST EDI,EDI                        ; 0049e6b9
    JNZ 0x0049e915                      ; 0049e6bb
        ;   XREF to: 0049e915 (CONDITIONAL_JUMP)  ; LAB_0049e915
    TEST ESI,ESI                        ; 0049e6c1
    JZ 0x0049e93c                       ; 0049e6c3
        ;   XREF to: 0049e93c (CONDITIONAL_JUMP)  ; LAB_0049e93c
    PUSH ESI                            ; 0049e6c9
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0 ; 0049e6ca
        ;   XREF to: 0059bdd0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 0049e6cf
    PUSH EBX                            ; 0049e6d2
    PUSH ESI                            ; 0049e6d3
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0 ; 0049e6d4
        ;   XREF to: 0059bdf0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0049e6d9
    TEST EAX,EAX                        ; 0049e6dc
    JZ 0x0049e6f0                       ; 0049e6de
        ;   XREF to: 0049e6f0 (CONDITIONAL_JUMP)  ; LAB_0049e6f0
    PUSH dword ptr [ESP + 0x16c]        ; 0049e6e0
    PUSH ESI                            ; 0049e6e7
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30 ; 0049e6e8
        ;   XREF to: 0059be30 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0049e6ed
    MOV EDX,dword ptr [ESP + 0x160]     ; 0049e6f0
        ;   Label: LAB_0049e6f0
    PUSH EDX                            ; 0049e6f7
    MOV ECX,dword ptr [0x00622c18]      ; 0049e6f8 | g_CDemonSetPtr
    PUSH ECX                            ; 0049e6fe | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0049e6ff
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0049e704
    JMP 0x0049e966                      ; 0049e707
        ;   XREF to: 0049e966 (UNCONDITIONAL_JUMP)  ; LAB_0049e966
    PUSH ECX                            ; 0049e70c
        ;   Label: LAB_0049e70c
    MOV EAX,dword ptr [ECX + 0x154]     ; 0049e70d
    CALL dword ptr [EAX + 0xe0]         ; 0049e713
    ADD ESP,0x4                         ; 0049e719
    TEST EAX,EAX                        ; 0049e71c
    JNZ 0x0049e4cb                      ; 0049e71e
        ;   XREF to: 0049e4cb (CONDITIONAL_JUMP)  ; LAB_0049e4cb
    LEA EAX,[ESP + 0xc]                 ; 0049e724
    PUSH EAX                            ; 0049e728
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0049e729
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV ESI,dword ptr [0x00622c18]      ; 0049e72e | g_CDemonSetPtr
    ADD ESP,0x4                         ; 0049e734
    MOV EAX,dword ptr [ESI + 0x14d148]  ; 0049e737 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0xc],EAX       ; 0049e73d
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0049e741
    MOV EDI,0x3ecccccd                  ; 0049e748
    MOV dword ptr [ESP + 0x10],EAX      ; 0049e74d
    LEA EAX,[ESI + 0x14d11c]            ; 0049e751
    MOV dword ptr [ESP + 0x14],EDI      ; 0049e757
    LEA EDI,[ESP + 0x90]                ; 0049e75b
    FLD float ptr [EAX]                 ; 0049e762 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 0049e764 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 0049e767 | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 0049e76a
    FSUB float ptr [ESI + 0x14d110]     ; 0049e76c | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 0049e772
    FSUB float ptr [ESI + 0x14d114]     ; 0049e774 | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 0049e77a
    FSUB float ptr [ESI + 0x14d118]     ; 0049e77c | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 0049e782
    FSTP float ptr [ESP + 0x54]         ; 0049e784
    FXCH                                ; 0049e788
    FSTP float ptr [ESP + 0x58]         ; 0049e78a
    LEA ESI,[ESP + 0x54]                ; 0049e78e
    FSTP float ptr [ESP + 0x5c]         ; 0049e792
    MOVSD ES:EDI,ESI                    ; 0049e796
    MOVSD ES:EDI,ESI                    ; 0049e797
    MOVSD ES:EDI,ESI                    ; 0049e798
    FLD float ptr [ESP + 0x94]          ; 0049e799
    FMUL ST0                            ; 0049e7a0
    FLD float ptr [ESP + 0x90]          ; 0049e7a2
    FMUL ST0                            ; 0049e7a9
    FADDP                               ; 0049e7ab
    FLD float ptr [ESP + 0x98]          ; 0049e7ad
    FMUL ST0                            ; 0049e7b4
    FADDP                               ; 0049e7b6
    FSQRT                               ; 0049e7b8
    FDIVR double ptr [0x005dc8ff]       ; 0049e7ba | DAT_005dc8ff
    FLD float ptr [ESP + 0x90]          ; 0049e7c0
    FXCH                                ; 0049e7c7
    FSTP float ptr [ESP + 0x174]        ; 0049e7c9
    FMUL float ptr [ESP + 0x174]        ; 0049e7d0
    FLD float ptr [ESP + 0x94]          ; 0049e7d7
    FMUL float ptr [ESP + 0x174]        ; 0049e7de
    FLD float ptr [ESP + 0x98]          ; 0049e7e5
    FMUL float ptr [ESP + 0x174]        ; 0049e7ec
    LEA EDI,[ESP + 0x48]                ; 0049e7f3
    LEA ESI,[ESP + 0x84]                ; 0049e7f7
    FXCH ST2                            ; 0049e7fe
    FSTP float ptr [ESP + 0x84]         ; 0049e800
    FSTP float ptr [ESP + 0x88]         ; 0049e807
    FSTP float ptr [ESP + 0x8c]         ; 0049e80e
    MOVSD ES:EDI,ESI                    ; 0049e815
    MOVSD ES:EDI,ESI                    ; 0049e816
    MOVSD ES:EDI,ESI                    ; 0049e817
    LEA EAX,[ESP + 0x48]                ; 0049e818
    LEA ESI,[ESP + 0x18]                ; 0049e81c
    CMP ESI,EAX                         ; 0049e820
    JZ 0x0049e83c                       ; 0049e822
        ;   XREF to: 0049e83c (CONDITIONAL_JUMP)  ; LAB_0049e83c
    MOV EAX,dword ptr [ESP + 0x48]      ; 0049e824
    MOV dword ptr [ESP + 0x18],EAX      ; 0049e828
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0049e82c
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049e830
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049e834
    MOV dword ptr [ESP + 0x20],EAX      ; 0049e838
    MOV EAX,[0x00622c18]                ; 0049e83c | g_CDemonSetPtr
        ;   Label: LAB_0049e83c
    ADD EAX,0x14d138                    ; 0049e841
    PUSH EAX                            ; 0049e846 | g_CDemonSetInstance.collision_impact_position.x
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0049e847
    PUSH EAX                            ; 0049e84e
    LEA ESI,[ESP + 0x74]                ; 0049e84f
    LEA EDI,[ESP + 0xd4]                ; 0049e853
    CALL core_actor.cpp_FUN_00408bb0    ; 0049e85a
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x74]                ; 0049e85f
    ADD ESP,0x8                         ; 0049e863
    MOVSD ES:EDI,ESI                    ; 0049e866
    MOVSD ES:EDI,ESI                    ; 0049e867
    MOVSD ES:EDI,ESI                    ; 0049e868
    LEA EAX,[ESP + 0xcc]                ; 0049e869
    LEA ESI,[ESP + 0x28]                ; 0049e870
    CMP ESI,EAX                         ; 0049e874
    JZ 0x0049e899                       ; 0049e876
        ;   XREF to: 0049e899 (CONDITIONAL_JUMP)  ; LAB_0049e899
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0049e878
    MOV dword ptr [ESP + 0x28],EAX      ; 0049e87f
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0049e883
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049e88a
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0049e88e
    MOV dword ptr [ESP + 0x30],EAX      ; 0049e895
    MOV EDX,0x6b                        ; 0049e899
        ;   Label: LAB_0049e899
    MOV EAX,dword ptr [EBX + 0x56c]     ; 0049e89e
    MOV ECX,0x3f800000                  ; 0049e8a4
    MOV dword ptr [ESP + 0x34],EAX      ; 0049e8a9
    MOV dword ptr [ESP + 0x3c],EDX      ; 0049e8ad
    MOV dword ptr [ESP + 0x38],ECX      ; 0049e8b1
    MOV dword ptr [ESP + 0x40],EBX      ; 0049e8b5
    PUSH EBX                            ; 0049e8b9
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049e8ba
    CALL dword ptr [EAX + 0x94]         ; 0049e8c0
    ADD ESP,0x4                         ; 0049e8c6
    MOV dword ptr [ESP + 0x44],EAX      ; 0049e8c9
    LEA EAX,[ESP + 0xc]                 ; 0049e8cd
    MOV ESI,dword ptr [ESP + 0x178]     ; 0049e8d1
    PUSH EAX                            ; 0049e8d8
    MOV EDI,dword ptr [ESP + 0x17c]     ; 0049e8d9
    MOV ESI,dword ptr [ESI + 0x154]     ; 0049e8e0
    PUSH EDI                            ; 0049e8e6
    CALL dword ptr [ESI + 0x108]        ; 0049e8e7
    MOV EAX,dword ptr [EBX + 0x2e4]     ; 0049e8ed
    ADD ESP,0x8                         ; 0049e8f3
    TEST EAX,EAX                        ; 0049e8f6
    JZ 0x0049e4cb                       ; 0049e8f8
        ;   XREF to: 0049e4cb (CONDITIONAL_JUMP)  ; LAB_0049e4cb
    MOV EAX,[0x00622c18]                ; 0049e8fe | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0049e903 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0049e909
    PUSH EAX                            ; 0049e90a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0049e90b
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0049e910
    JMP 0x0049e966                      ; 0049e913
        ;   XREF to: 0049e966 (UNCONDITIONAL_JUMP)  ; LAB_0049e966
    PUSH EDI                            ; 0049e915
        ;   Label: LAB_0049e915
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40 ; 0049e916
        ;   XREF to: 004e3a40 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0049e91b
    TEST EAX,EAX                        ; 0049e91e
    JZ 0x0049e4cb                       ; 0049e920
        ;   XREF to: 0049e4cb (CONDITIONAL_JUMP)  ; LAB_0049e4cb
    MOV EAX,[0x00622c18]                ; 0049e926 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 0049e92b
    PUSH EAX                            ; 0049e930 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 0049e931
    CALL core_glass.cpp_FUN_004e34b0    ; 0049e932
        ;   XREF to: 004e34b0 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004e34b0()
    ADD ESP,0x8                         ; 0049e937
    JMP 0x0049e966                      ; 0049e93a
        ;   XREF to: 0049e966 (UNCONDITIONAL_JUMP)  ; LAB_0049e966
    MOV ESI,dword ptr [ESP + 0x164]     ; 0049e93c
        ;   Label: LAB_0049e93c
    TEST ESI,ESI                        ; 0049e943
    JNZ 0x0049e95d                      ; 0049e945
        ;   XREF to: 0049e95d (CONDITIONAL_JUMP)  ; LAB_0049e95d
    MOV EDI,dword ptr [ESP + 0x168]     ; 0049e947
    TEST EDI,EDI                        ; 0049e94e
    JZ 0x0049e983                       ; 0049e950
        ;   XREF to: 0049e983 (CONDITIONAL_JUMP)  ; LAB_0049e983
    PUSH EDI                            ; 0049e952
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180 ; 0049e953
        ;   XREF to: 004b9180 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0049e958
    JMP 0x0049e966                      ; 0049e95b
        ;   XREF to: 0049e966 (UNCONDITIONAL_JUMP)  ; LAB_0049e966
    PUSH ESI                            ; 0049e95d
        ;   Label: LAB_0049e95d
    CALL core_crate.cpp_FUN_00449600    ; 0049e95e
        ;   XREF to: 00449600 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_00449600(CCrate * this_ptr)
    ADD ESP,0x4                         ; 0049e963
    MOV ECX,dword ptr [ESP + 0x170]     ; 0049e966
        ;   Label: LAB_0049e966
    INC ECX                             ; 0049e96d
    MOV dword ptr [ESP + 0x170],ECX     ; 0049e96e
    CMP ECX,0x4                         ; 0049e975
    JL 0x0049e48a                       ; 0049e978
        ;   XREF to: 0049e48a (CONDITIONAL_JUMP)  ; LAB_0049e48a
    JMP 0x0049e4cb                      ; 0049e97e
        ;   XREF to: 0049e4cb (UNCONDITIONAL_JUMP)  ; LAB_0049e4cb
    MOV EAX,[0x00622c18]                ; 0049e983 | g_CDemonSetPtr
        ;   Label: LAB_0049e983
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0049e988 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0049e98e
    MOV ECX,dword ptr [EAX + 0x14d134]  ; 0049e98f | g_CDemonSetInstance.ground_type
    PUSH ECX                            ; 0049e995
    LEA ESI,[EAX + 0x14d128]            ; 0049e996
    PUSH ESI                            ; 0049e99c | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 0049e99d
    PUSH EAX                            ; 0049e9a2 | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [0x0061c010]      ; 0049e9a3 | DAT_0061c010
    PUSH ESI                            ; 0049e9a9
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0 ; 0049e9aa
        ;   XREF to: 004b56a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 0049e9af
    JMP 0x0049e4cb                      ; 0049e9b2
        ;   XREF to: 0049e4cb (UNCONDITIONAL_JUMP)  ; LAB_0049e4cb

