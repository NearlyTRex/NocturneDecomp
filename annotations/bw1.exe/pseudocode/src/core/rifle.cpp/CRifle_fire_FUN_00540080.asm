; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_rifle_cpp_CRifle_fire_FUN_00540080(CRifle *this_ptr)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_shotgun_noammo_wav_005edc3a+1
;   TerminatedCString s_rifle_silencer_wav_005edc4e
;   undefined4 DAT_005edc67
;   undefined4 DAT_005edc6f
;   undefined4 DAT_005edc77
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
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
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_crate.cpp_FUN_00449600
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40
;   core_glass.cpp_FUN_004e34b0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
;   core_setcolid.cpp_FUN_00557300
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540080
        ;   Label: core_rifle.cpp_CRifle_fire_FUN_00540080
    PUSH ESI                            ; 00540081
    PUSH EDI                            ; 00540082
    PUSH EBP                            ; 00540083
    MOV EBP,ESP                         ; 00540084
    SUB ESP,0x158                       ; 00540086
    AND ESP,0xfffffff8                  ; 0054008c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054008f
    PUSH EBX                            ; 00540092
    MOV EAX,dword ptr [EBX + 0x154]     ; 00540093
    LEA ESI,[ESP + 0x120]               ; 00540099
    LEA EDI,[ESP + 0xa8]                ; 005400a0
    CALL dword ptr [EAX + 0xe0]         ; 005400a7
    ADD ESP,0x4                         ; 005400ad
    LEA EAX,[ESP + 0xa4]                ; 005400b0
    LEA ESI,[ESP + 0x11c]               ; 005400b7
    PUSH EAX                            ; 005400be
    MOVSD ES:EDI,ESI                    ; 005400bf
    MOVSD ES:EDI,ESI                    ; 005400c0
    MOVSD ES:EDI,ESI                    ; 005400c1
    PUSH EBX                            ; 005400c2
    LEA ESI,[ESP + 0x58]                ; 005400c3
    CALL core_actor.cpp_FUN_00408b40    ; 005400c7
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005400cc
    LEA EDI,[ESP + 0xd4]                ; 005400cf
    LEA ESI,[ESP + 0x50]                ; 005400d6
    PUSH EBX                            ; 005400da
    MOVSD ES:EDI,ESI                    ; 005400db
    MOVSD ES:EDI,ESI                    ; 005400dc
    MOVSD ES:EDI,ESI                    ; 005400dd
    CALL core_weapon.cpp_CWeapon_fire_FUN_005adde0 ; 005400de
        ;   XREF to: 005adde0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005adde0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005400e3
    TEST EAX,EAX                        ; 005400e6
    JZ 0x00540417                       ; 005400e8
        ;   XREF to: 00540417 (CONDITIONAL_JUMP)  ; LAB_00540417
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 005400ee
    MOV dword ptr [ESP + 0x94],EAX      ; 005400f4
    LEA EAX,[ESP + 0x8c]                ; 005400fb
    LEA ESI,[ESP + 0x74]                ; 00540102
    PUSH EAX                            ; 00540106
    LEA EDI,[ESP + 0xfc]                ; 00540107
    XOR ECX,ECX                         ; 0054010e
    PUSH EBX                            ; 00540110
    MOV dword ptr [ESP + 0x94],ECX      ; 00540111
    MOV dword ptr [ESP + 0x98],ECX      ; 00540118
    CALL core_actor.cpp_FUN_00408ac0    ; 0054011f
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 00540124
    LEA ESI,[ESP + 0x74]                ; 00540127
    FLD float ptr [ESP + 0xd4]          ; 0054012b
    FLD float ptr [ESP + 0xd8]          ; 00540132
    MOVSD ES:EDI,ESI                    ; 00540139
    MOVSD ES:EDI,ESI                    ; 0054013a
    MOVSD ES:EDI,ESI                    ; 0054013b
    FLD float ptr [ESP + 0xdc]          ; 0054013c
    LEA EDI,[ESP + 0xe0]                ; 00540143
    LEA ESI,[ESP + 0xb0]                ; 0054014a
    FXCH ST2                            ; 00540151
    FADD float ptr [ESP + 0xf8]         ; 00540153
    FXCH                                ; 0054015a
    FADD float ptr [ESP + 0xfc]         ; 0054015c
    FXCH ST2                            ; 00540163
    FADD float ptr [ESP + 0x100]        ; 00540165
    FXCH                                ; 0054016c
    FSTP float ptr [ESP + 0xb0]         ; 0054016e
    FXCH                                ; 00540175
    FSTP float ptr [ESP + 0xb4]         ; 00540177
    FSTP float ptr [ESP + 0xb8]         ; 0054017e
    MOVSD ES:EDI,ESI                    ; 00540185
    MOVSD ES:EDI,ESI                    ; 00540186
    MOVSD ES:EDI,ESI                    ; 00540187
    FLD float ptr [EBX + 0x2e8]         ; 00540188
    FDIVR double ptr [0x005edc67]       ; 0054018e | DAT_005edc67
    FLD float ptr [ESP + 0xf8]          ; 00540194
    FXCH                                ; 0054019b
    FSTP float ptr [ESP + 0x138]        ; 0054019d
    FMUL float ptr [ESP + 0x138]        ; 005401a4
    FLD float ptr [ESP + 0xfc]          ; 005401ab
    FMUL float ptr [ESP + 0x138]        ; 005401b2
    FLD float ptr [ESP + 0x100]         ; 005401b9
    FMUL float ptr [ESP + 0x138]        ; 005401c0
    FLD float ptr [ESP + 0xd4]          ; 005401c7
    FLD float ptr [ESP + 0xd8]          ; 005401ce
    LEA EDI,[ESP + 0xec]                ; 005401d5
    LEA ESI,[ESP + 0x128]               ; 005401dc
    FXCH ST4                            ; 005401e3
    FSTP float ptr [ESP + 0x128]        ; 005401e5
    FXCH ST2                            ; 005401ec
    FSTP float ptr [ESP + 0x12c]        ; 005401ee
    FSTP float ptr [ESP + 0x130]        ; 005401f5
    MOVSD ES:EDI,ESI                    ; 005401fc
    MOVSD ES:EDI,ESI                    ; 005401fd
    MOVSD ES:EDI,ESI                    ; 005401fe
    FLD float ptr [ESP + 0xdc]          ; 005401ff
    LEA EDI,[ESP + 0x5c]                ; 00540206
    LEA ESI,[ESP + 0x104]               ; 0054020a
    FXCH                                ; 00540211
    FSUB float ptr [ESP + 0xec]         ; 00540213
    FXCH ST2                            ; 0054021a
    FSUB float ptr [ESP + 0xf0]         ; 0054021c
    FXCH                                ; 00540223
    FSUB float ptr [ESP + 0xf4]         ; 00540225
    FXCH ST2                            ; 0054022c
    FSTP float ptr [ESP + 0x104]        ; 0054022e
    FSTP float ptr [ESP + 0x108]        ; 00540235
    FSTP float ptr [ESP + 0x10c]        ; 0054023c
    MOVSD ES:EDI,ESI                    ; 00540243
    MOVSD ES:EDI,ESI                    ; 00540244
    MOVSD ES:EDI,ESI                    ; 00540245
    MOV EDI,dword ptr [0x00622c18]      ; 00540246 | g_CDemonSetPtr
    PUSH EDI                            ; 0054024c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0054024d
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00540252
    PUSH 0x1                            ; 00540255
    MOV EAX,[0x00622c18]                ; 00540257 | g_CDemonSetPtr
    PUSH EAX                            ; 0054025c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 0054025d
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00540262
    PUSH EBX                            ; 00540265
    MOV EDX,dword ptr [0x00622c18]      ; 00540266 | g_CDemonSetPtr
    PUSH EDX                            ; 0054026c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0054026d
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x304]     ; 00540272
    ADD ESP,0x8                         ; 00540278
    TEST ECX,ECX                        ; 0054027b
    JNZ 0x00540436                      ; 0054027d
        ;   XREF to: 00540436 (CONDITIONAL_JUMP)  ; LAB_00540436
    XOR EAX,EAX                         ; 00540283
        ;   Label: LAB_00540283
    MOV dword ptr [ESP + 0x148],EAX     ; 00540285
    LEA EAX,[ESP + 0xe0]                ; 0054028c
        ;   Label: LAB_0054028c
    PUSH EAX                            ; 00540293
    LEA EAX,[ESP + 0x60]                ; 00540294
    PUSH EAX                            ; 00540298
    MOV EDX,dword ptr [0x00622c18]      ; 00540299 | g_CDemonSetPtr
    PUSH EDX                            ; 0054029f | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 005402a0
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x160],EAX     ; 005402a5
    FLD float ptr [ESP + 0x160]         ; 005402ac
    ADD ESP,0xc                         ; 005402b3
    FLDZ                                ; 005402b6
    FXCH                                ; 005402b8
    FSTP double ptr [ESP]               ; 005402ba
    FCOMP double ptr [ESP]              ; 005402bd
    FNSTSW AX                           ; 005402c0
    SAHF                                ; 005402c2
    JA 0x00540463                       ; 005402c3
        ;   XREF to: 00540463 (CONDITIONAL_JUMP)  ; LAB_00540463
    FLD1                                ; 005402c9
    FCOMP double ptr [ESP]              ; 005402cb
    FNSTSW AX                           ; 005402ce
    SAHF                                ; 005402d0
    JC 0x00540463                       ; 005402d1
        ;   XREF to: 00540463 (CONDITIONAL_JUMP)  ; LAB_00540463
    MOV ECX,dword ptr [0x007c637c]      ; 005402d7 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 005402dd | g_CDemonSetPtr
    PUSH ECX                            ; 005402e2
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 005402e3 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 005402e9
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005402ea
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 005402ef
    MOV dword ptr [ESP + 0x150],EAX     ; 005402f2
    TEST EAX,EAX                        ; 005402f9
    JZ 0x0054031a                       ; 005402fb
        ;   XREF to: 0054031a (CONDITIONAL_JUMP)  ; LAB_0054031a
    PUSH EAX                            ; 005402fd
    MOV ESI,dword ptr [EAX + 0x154]     ; 005402fe
    CALL dword ptr [ESI + 0x10c]        ; 00540304
    ADD ESP,0x4                         ; 0054030a
    TEST EAX,EAX                        ; 0054030d
    JLE 0x0054031a                      ; 0054030f
        ;   XREF to: 0054031a (CONDITIONAL_JUMP)  ; LAB_0054031a
    XOR EDI,EDI                         ; 00540311
    MOV dword ptr [ESP + 0x150],EDI     ; 00540313
    MOV EAX,[0x01cd0dfc]                ; 0054031a | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0054031a
    PUSH EAX                            ; 0054031f
    MOV EAX,[0x00622c18]                ; 00540320 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00540325 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0054032b
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0054032c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV ECX,dword ptr [0x02c8ae44]      ; 00540331 | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 00540337
    MOV EDI,EAX                         ; 0054033a
    MOV EAX,[0x00622c18]                ; 0054033c | g_CDemonSetPtr
    PUSH ECX                            ; 00540341
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 00540342 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 00540348
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00540349
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0054034e
    MOV ESI,EAX                         ; 00540351
    MOV dword ptr [ESP + 0x13c],EAX     ; 00540353
    MOV EAX,[0x007dc6d8]                ; 0054035a | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 0054035f
    MOV EAX,[0x00622c18]                ; 00540360 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00540365 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0054036b
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0054036c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x14c],EAX     ; 00540371
    ADD ESP,0x8                         ; 00540378
    MOV ECX,dword ptr [0x01cc4184]      ; 0054037b | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 00540381 | g_CDemonSetPtr
    PUSH ECX                            ; 00540386
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00540387 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0054038d
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0054038e
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x148],EAX     ; 00540393
    ADD ESP,0x8                         ; 0054039a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054039d
    PUSH EBX                            ; 005403a3
    CALL dword ptr [EAX + 0xec]         ; 005403a4
    MOV dword ptr [ESP + 0x158],EAX     ; 005403aa
    FLD float ptr [ESP + 0x158]         ; 005403b1
    ADD ESP,0x4                         ; 005403b8
    MOV ECX,dword ptr [ESP + 0x150]     ; 005403bb
    FSTP float ptr [ESP + 0x134]        ; 005403c2
    TEST ECX,ECX                        ; 005403c9
    JZ 0x005406f0                       ; 005403cb
        ;   XREF to: 005406f0 (CONDITIONAL_JUMP)  ; LAB_005406f0
    PUSH ECX                            ; 005403d1
    MOV EAX,dword ptr [ECX + 0x154]     ; 005403d2
    CALL dword ptr [EAX + 0xe0]         ; 005403d8
    ADD ESP,0x4                         ; 005403de
    TEST EAX,EAX                        ; 005403e1
    JZ 0x005404e5                       ; 005403e3
        ;   XREF to: 005404e5 (CONDITIONAL_JUMP)  ; LAB_005404e5
    CMP dword ptr [ESP + 0x148],0x0     ; 005403e9
    JNZ 0x00540463                      ; 005403f1
        ;   XREF to: 00540463 (CONDITIONAL_JUMP)  ; LAB_00540463
    MOV EDX,dword ptr [EBX + 0x568]     ; 005403f3
    MOV EAX,[0x00622c18]                ; 005403f9 | g_CDemonSetPtr
    INC EDX                             ; 005403fe
    PUSH EAX                            ; 005403ff | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x568],EDX     ; 00540400
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00540406
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054040b
    XOR EAX,EAX                         ; 0054040e
        ;   Label: LAB_0054040e
    MOV ESP,EBP                         ; 00540410
    POP EBP                             ; 00540412
    POP EDI                             ; 00540413
    POP ESI                             ; 00540414
    POP EBX                             ; 00540415
    RET                                 ; 00540416
    LEA EAX,[ESP + 0xd4]                ; 00540417
        ;   Label: LAB_00540417
    PUSH EAX                            ; 0054041e
    PUSH 0x5edc3b                       ; 0054041f | s_shotgun_noammo_wav_005edc3a+1
    PUSH EBX                            ; 00540424
    MOV EDX,dword ptr [0x006236b8]      ; 00540425 | DAT_006236b8
    PUSH EDX                            ; 0054042b
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 0054042c
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00540431
    JMP 0x0054040e                      ; 00540434
        ;   XREF to: 0054040e (UNCONDITIONAL_JUMP)  ; LAB_0054040e
    PUSH ECX                            ; 00540436
        ;   Label: LAB_00540436
    MOV EDI,dword ptr [0x00622c18]      ; 00540437 | g_CDemonSetPtr
    PUSH EDI                            ; 0054043d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0054043e
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00540443
    JMP 0x00540283                      ; 00540446
        ;   XREF to: 00540283 (UNCONDITIONAL_JUMP)  ; LAB_00540283
    MOV ECX,dword ptr [ESP + 0x148]     ; 0054044b
        ;   Label: LAB_0054044b
    INC ECX                             ; 00540452
    MOV dword ptr [ESP + 0x148],ECX     ; 00540453
    CMP ECX,0x4                         ; 0054045a
    JL 0x0054028c                       ; 0054045d
        ;   XREF to: 0054028c (CONDITIONAL_JUMP)  ; LAB_0054028c
    MOV ECX,dword ptr [0x00622c18]      ; 00540463 | g_CDemonSetPtr
        ;   Label: LAB_00540463
    PUSH ECX                            ; 00540469 | g_CDemonSetInstance
    LEA EDI,[ESP + 0xc0]                ; 0054046a
    LEA ESI,[ESP + 0xd8]                ; 00540471
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00540478
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054047d
    LEA EAX,[EBX + 0x3c]                ; 00540480
    MOVSD ES:EDI,ESI                    ; 00540483
    MOVSD ES:EDI,ESI                    ; 00540484
    MOVSD ES:EDI,ESI                    ; 00540485
    PUSH EAX                            ; 00540486
    FLD float ptr [ESP + 0xc4]          ; 00540487
    LEA EAX,[ESP + 0xc0]                ; 0054048e
    MOV ESI,dword ptr [0x0061c010]      ; 00540495 | DAT_0061c010
    PUSH EAX                            ; 0054049b
    FADD float ptr [0x005edc6f]         ; 0054049c | DAT_005edc6f
    PUSH ESI                            ; 005404a2
    FSTP float ptr [ESP + 0xcc]         ; 005404a3
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70 ; 005404aa
        ;   XREF to: 004b5a70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 005404af
    LEA EAX,[ESP + 0xd4]                ; 005404b2
    PUSH EAX                            ; 005404b9
    PUSH 0x5edc4e                       ; 005404ba | = "rifle-silencer.wav"
    PUSH EBX                            ; 005404bf
    MOV EDI,dword ptr [0x006236b8]      ; 005404c0 | DAT_006236b8
    PUSH EDI                            ; 005404c6
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 005404c7
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 005404cc
    ADD ESP,0x10                        ; 005404d1
    MOV dword ptr [EBX + 0x300],0x3fc00000 ; 005404d4
    MOV ESP,EBP                         ; 005404de
    POP EBP                             ; 005404e0
    POP EDI                             ; 005404e1
    POP ESI                             ; 005404e2
    POP EBX                             ; 005404e3
    RET                                 ; 005404e4
    LEA EAX,[ESP + 0x8]                 ; 005404e5
        ;   Label: LAB_005404e5
    PUSH EAX                            ; 005404e9
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005404ea
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV EAX,[0x00622c18]                ; 005404ef | g_CDemonSetPtr
    ADD ESP,0x4                         ; 005404f4
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 005404f7 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0x8],EAX       ; 005404fd
    PUSH EBX                            ; 00540501
    MOV EAX,dword ptr [EBX + 0x154]     ; 00540502
    CALL dword ptr [EAX + 0xec]         ; 00540508
    MOV dword ptr [ESP + 0x158],EAX     ; 0054050e
    MOV EDI,0x3ecccccd                  ; 00540515
    FLD float ptr [ESP + 0x158]         ; 0054051a
    MOV EAX,[0x00622c18]                ; 00540521 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 00540526
    LEA ESI,[EAX + 0x14d11c]            ; 00540529
    MOV dword ptr [ESP + 0x10],EDI      ; 0054052f
    FSTP float ptr [ESP + 0xc]          ; 00540533
    FLD float ptr [ESI + 0x4]           ; 00540537 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [ESI + 0x8]           ; 0054053a | g_CDemonSetInstance.ray_target.z
    FLD float ptr [ESI]                 ; 0054053d | g_CDemonSetInstance.ray_target.x
    LEA EDI,[ESP + 0x44]                ; 0054053f
    LEA ESI,[ESP + 0x110]               ; 00540543
    FSUB float ptr [EAX + 0x14d110]     ; 0054054a | g_CDemonSetInstance.ray_origin.x
    FXCH ST2                            ; 00540550
    FSUB float ptr [EAX + 0x14d114]     ; 00540552 | g_CDemonSetInstance.ray_origin.y
    FXCH                                ; 00540558
    FSUB float ptr [EAX + 0x14d118]     ; 0054055a | g_CDemonSetInstance.ray_origin.z
    FXCH ST2                            ; 00540560
    FSTP float ptr [ESP + 0x110]        ; 00540562
    FSTP float ptr [ESP + 0x114]        ; 00540569
    FSTP float ptr [ESP + 0x118]        ; 00540570
    MOVSD ES:EDI,ESI                    ; 00540577
    MOVSD ES:EDI,ESI                    ; 00540578
    MOVSD ES:EDI,ESI                    ; 00540579
    FLD float ptr [ESP + 0x48]          ; 0054057a
    FMUL ST0                            ; 0054057e
    FLD float ptr [ESP + 0x44]          ; 00540580
    FMUL ST0                            ; 00540584
    FADDP                               ; 00540586
    FLD float ptr [ESP + 0x4c]          ; 00540588
    FMUL ST0                            ; 0054058c
    FADDP                               ; 0054058e
    FSQRT                               ; 00540590
    FDIVR double ptr [0x005edc77]       ; 00540592 | DAT_005edc77
    FLD float ptr [ESP + 0x44]          ; 00540598
    FXCH                                ; 0054059c
    FSTP float ptr [ESP + 0x14c]        ; 0054059e
    FMUL float ptr [ESP + 0x14c]        ; 005405a5
    FLD float ptr [ESP + 0x48]          ; 005405ac
    FMUL float ptr [ESP + 0x14c]        ; 005405b0
    FLD float ptr [ESP + 0x4c]          ; 005405b7
    FMUL float ptr [ESP + 0x14c]        ; 005405bb
    LEA EDI,[ESP + 0x80]                ; 005405c2
    LEA ESI,[ESP + 0x68]                ; 005405c9
    FXCH ST2                            ; 005405cd
    FSTP float ptr [ESP + 0x68]         ; 005405cf
    FSTP float ptr [ESP + 0x6c]         ; 005405d3
    FSTP float ptr [ESP + 0x70]         ; 005405d7
    MOVSD ES:EDI,ESI                    ; 005405db
    MOVSD ES:EDI,ESI                    ; 005405dc
    MOVSD ES:EDI,ESI                    ; 005405dd
    LEA EAX,[ESP + 0x80]                ; 005405de
    LEA ESI,[ESP + 0x14]                ; 005405e5
    CMP ESI,EAX                         ; 005405e9
    JZ 0x0054060e                       ; 005405eb
        ;   XREF to: 0054060e (CONDITIONAL_JUMP)  ; LAB_0054060e
    MOV EAX,dword ptr [ESP + 0x80]      ; 005405ed
    MOV dword ptr [ESP + 0x14],EAX      ; 005405f4
    MOV EAX,dword ptr [ESP + 0x84]      ; 005405f8
    MOV dword ptr [ESP + 0x18],EAX      ; 005405ff
    MOV EAX,dword ptr [ESP + 0x88]      ; 00540603
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054060a
    MOV EAX,[0x00622c18]                ; 0054060e | g_CDemonSetPtr
        ;   Label: LAB_0054060e
    ADD EAX,0x14d138                    ; 00540613
    PUSH EAX                            ; 00540618 | g_CDemonSetInstance.collision_impact_position.x
    MOV EAX,dword ptr [ESP + 0x154]     ; 00540619
    PUSH EAX                            ; 00540620
    LEA ESI,[ESP + 0xa0]                ; 00540621
    LEA EDI,[ESP + 0xd0]                ; 00540628
    CALL core_actor.cpp_FUN_00408bb0    ; 0054062f
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xa0]                ; 00540634
    ADD ESP,0x8                         ; 0054063b
    MOVSD ES:EDI,ESI                    ; 0054063e
    MOVSD ES:EDI,ESI                    ; 0054063f
    MOVSD ES:EDI,ESI                    ; 00540640
    LEA EAX,[ESP + 0xc8]                ; 00540641
    LEA ESI,[ESP + 0x24]                ; 00540648
    CMP ESI,EAX                         ; 0054064c
    JZ 0x00540671                       ; 0054064e
        ;   XREF to: 00540671 (CONDITIONAL_JUMP)  ; LAB_00540671
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00540650
    MOV dword ptr [ESP + 0x24],EAX      ; 00540657
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0054065b
    MOV dword ptr [ESP + 0x28],EAX      ; 00540662
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00540666
    MOV dword ptr [ESP + 0x2c],EAX      ; 0054066d
    MOV EDX,0x65                        ; 00540671
        ;   Label: LAB_00540671
    MOV EAX,dword ptr [EBX + 0x56c]     ; 00540676
    MOV ECX,0x3e19999a                  ; 0054067c
    MOV dword ptr [ESP + 0x30],EAX      ; 00540681
    MOV dword ptr [ESP + 0x38],EDX      ; 00540685
    MOV dword ptr [ESP + 0x34],ECX      ; 00540689
    MOV dword ptr [ESP + 0x3c],EBX      ; 0054068d
    PUSH EBX                            ; 00540691
    MOV EAX,dword ptr [EBX + 0x154]     ; 00540692
    CALL dword ptr [EAX + 0x94]         ; 00540698
    ADD ESP,0x4                         ; 0054069e
    MOV dword ptr [ESP + 0x40],EAX      ; 005406a1
    LEA EAX,[ESP + 0x8]                 ; 005406a5
    MOV ESI,dword ptr [ESP + 0x150]     ; 005406a9
    PUSH EAX                            ; 005406b0
    MOV EDI,dword ptr [ESP + 0x154]     ; 005406b1
    MOV ESI,dword ptr [ESI + 0x154]     ; 005406b8
    PUSH EDI                            ; 005406be
    CALL dword ptr [ESI + 0x108]        ; 005406bf
    MOV EAX,dword ptr [EBX + 0x2e4]     ; 005406c5
    ADD ESP,0x8                         ; 005406cb
    TEST EAX,EAX                        ; 005406ce
    JZ 0x00540463                       ; 005406d0
        ;   XREF to: 00540463 (CONDITIONAL_JUMP)  ; LAB_00540463
    MOV EAX,[0x00622c18]                ; 005406d6 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005406db | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 005406e1
    PUSH EAX                            ; 005406e2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005406e3
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005406e8
    JMP 0x0054044b                      ; 005406eb
        ;   XREF to: 0054044b (UNCONDITIONAL_JUMP)  ; LAB_0054044b
    TEST EDI,EDI                        ; 005406f0
        ;   Label: LAB_005406f0
    JNZ 0x00540724                      ; 005406f2
        ;   XREF to: 00540724 (CONDITIONAL_JUMP)  ; LAB_00540724
    TEST ESI,ESI                        ; 005406f4
    JNZ 0x0054074e                      ; 005406f6
        ;   XREF to: 0054074e (CONDITIONAL_JUMP)  ; LAB_0054074e
    MOV ESI,dword ptr [ESP + 0x144]     ; 005406f8
    TEST ESI,ESI                        ; 005406ff
    JNZ 0x00540791                      ; 00540701
        ;   XREF to: 00540791 (CONDITIONAL_JUMP)  ; LAB_00540791
    MOV EDI,dword ptr [ESP + 0x140]     ; 00540707
    TEST EDI,EDI                        ; 0054070e
    JZ 0x0054079f                       ; 00540710
        ;   XREF to: 0054079f (CONDITIONAL_JUMP)  ; LAB_0054079f
    PUSH EDI                            ; 00540716
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180 ; 00540717
        ;   XREF to: 004b9180 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0054071c
    JMP 0x0054044b                      ; 0054071f
        ;   XREF to: 0054044b (UNCONDITIONAL_JUMP)  ; LAB_0054044b
    PUSH EDI                            ; 00540724
        ;   Label: LAB_00540724
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40 ; 00540725
        ;   XREF to: 004e3a40 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0054072a
    TEST EAX,EAX                        ; 0054072d
    JZ 0x00540463                       ; 0054072f
        ;   XREF to: 00540463 (CONDITIONAL_JUMP)  ; LAB_00540463
    MOV EAX,[0x00622c18]                ; 00540735 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 0054073a
    PUSH EAX                            ; 0054073f | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 00540740
    CALL core_glass.cpp_FUN_004e34b0    ; 00540741
        ;   XREF to: 004e34b0 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004e34b0()
    ADD ESP,0x8                         ; 00540746
    JMP 0x0054044b                      ; 00540749
        ;   XREF to: 0054044b (UNCONDITIONAL_JUMP)  ; LAB_0054044b
    PUSH ESI                            ; 0054074e
        ;   Label: LAB_0054074e
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0 ; 0054074f
        ;   XREF to: 0059bdd0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 00540754
    PUSH EBX                            ; 00540757
    PUSH ESI                            ; 00540758
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0 ; 00540759
        ;   XREF to: 0059bdf0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0054075e
    TEST EAX,EAX                        ; 00540761
    JZ 0x00540775                       ; 00540763
        ;   XREF to: 00540775 (CONDITIONAL_JUMP)  ; LAB_00540775
    PUSH dword ptr [ESP + 0x134]        ; 00540765
    PUSH ESI                            ; 0054076c
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30 ; 0054076d
        ;   XREF to: 0059be30 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 00540772
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00540775
        ;   Label: LAB_00540775
    PUSH EDX                            ; 0054077c
    MOV ECX,dword ptr [0x00622c18]      ; 0054077d | g_CDemonSetPtr
    PUSH ECX                            ; 00540783 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00540784
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00540789
    JMP 0x0054044b                      ; 0054078c
        ;   XREF to: 0054044b (UNCONDITIONAL_JUMP)  ; LAB_0054044b
    PUSH ESI                            ; 00540791
        ;   Label: LAB_00540791
    CALL core_crate.cpp_FUN_00449600    ; 00540792
        ;   XREF to: 00449600 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_00449600(CCrate * this_ptr)
    ADD ESP,0x4                         ; 00540797
    JMP 0x0054044b                      ; 0054079a
        ;   XREF to: 0054044b (UNCONDITIONAL_JUMP)  ; LAB_0054044b
    MOV EAX,[0x00622c18]                ; 0054079f | g_CDemonSetPtr
        ;   Label: LAB_0054079f
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005407a4 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 005407aa
    MOV ECX,dword ptr [EAX + 0x14d134]  ; 005407ab | g_CDemonSetInstance.ground_type
    PUSH ECX                            ; 005407b1
    LEA ESI,[EAX + 0x14d128]            ; 005407b2
    PUSH ESI                            ; 005407b8 | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 005407b9
    PUSH EAX                            ; 005407be | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [0x0061c010]      ; 005407bf | DAT_0061c010
    PUSH ESI                            ; 005407c5
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0 ; 005407c6
        ;   XREF to: 004b56a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 005407cb
    JMP 0x00540463                      ; 005407ce
        ;   XREF to: 00540463 (UNCONDITIONAL_JUMP)  ; LAB_00540463

