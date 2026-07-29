; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_process_FUN_0048d0c0(CFlame *this_ptr,float delta_time)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1[12]   Stack[-0x114]:12  local_114
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_processFires_FUN_00416b00 at 00416bed
;   core_crossbow.cpp_CCrossbow_process_FUN_0043cfd0 at 0043d060
;   core_flamecan.cpp_CFlameCan_process_FUN_0048e5a0 at 0048e5f2
;   core_vessel.cpp_CCryptVessel_process_FUN_0054fc60 at 0054ff63
;
; Referenced Globals:
;   TerminatedCString s_torch_wav_f_00581546
;   double DOUBLE_00581557 = 0.5
;   double DOUBLE_0058155f = 16
;   double DOUBLE_00581567 = 1.59978588928241E-314
;   double DOUBLE_0058156f = -0.5
;   double DOUBLE_00581577 = 0.25
;   undefined4 DAT_005b7650
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005be368
;   undefined4 DAT_005bed68
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa7e78
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_FUN_00427730
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_flame.cpp_CFlame_updateGlobe_FUN_0048e230
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0
;   core_sound.cpp_CSound_killSound_FUN_0052ebb0
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048d0c0
        ;   Label: core_flame.cpp_CFlame_process_FUN_0048d0c0
    PUSH ESI                            ; 0048d0c1
    PUSH EDI                            ; 0048d0c2
    PUSH EBP                            ; 0048d0c3
    MOV EBP,ESP                         ; 0048d0c4
    SUB ESP,0xf8                        ; 0048d0c6
    AND ESP,0xfffffff8                  ; 0048d0cc
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048d0cf
    CMP byte ptr [ESI + 0x1b0],0x0      ; 0048d0d2
    JZ 0x0048d164                       ; 0048d0d9
        ;   XREF to: 0048d164 (CONDITIONAL_JUMP)  ; LAB_0048d164
    CMP dword ptr [ESI + 0x1ac],0x0     ; 0048d0df
    JNZ 0x0048d164                      ; 0048d0e6
        ;   XREF to: 0048d164 (CONDITIONAL_JUMP)  ; LAB_0048d164
    LEA EAX,[ESI + 0x1b0]               ; 0048d0ec
    PUSH EAX                            ; 0048d0f2
    MOV ECX,dword ptr [0x005b7650]      ; 0048d0f3 | DAT_005b7650
    PUSH ECX                            ; 0048d0f9
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0048d0fa
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0048d0ff
    TEST EAX,EAX                        ; 0048d102
    JZ 0x0048d164                       ; 0048d104
        ;   XREF to: 0048d164 (CONDITIONAL_JUMP)  ; LAB_0048d164
    MOV EBX,dword ptr [ESI + 0x1a0]     ; 0048d106
    CMP EBX,0x1                         ; 0048d10c
    JZ 0x0048d150                       ; 0048d10f
        ;   XREF to: 0048d150 (CONDITIONAL_JUMP)  ; LAB_0048d150
    CMP EBX,0x3                         ; 0048d111
    JZ 0x0048d150                       ; 0048d114
        ;   XREF to: 0048d150 (CONDITIONAL_JUMP)  ; LAB_0048d150
    LEA EDI,[ESI + 0x20]                ; 0048d116
    XOR EBX,EBX                         ; 0048d119
    PUSH 0xffff                         ; 0048d11b
        ;   Label: LAB_0048d11b
    PUSH 0x1                            ; 0048d120
    PUSH 0x10000                        ; 0048d122
    PUSH 0x4000                         ; 0048d127
    PUSH 0x0                            ; 0048d12c
    PUSH EDI                            ; 0048d12e
    MOV EAX,[0x005b80f0]                ; 0048d12f | DAT_005b80f0
    PUSH EAX                            ; 0048d134
    INC EBX                             ; 0048d135
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 0048d136
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0048d13b
    CMP EBX,0xa                         ; 0048d13e
    JL 0x0048d11b                       ; 0048d141
        ;   XREF to: 0048d11b (CONDITIONAL_JUMP)  ; LAB_0048d11b
    LEA EAX,[EAX]                       ; 0048d143
    LEA EDX,[EDX]                       ; 0048d149
    NOP                                 ; 0048d14f
    MOV dword ptr [ESI + 0x288],0x1     ; 0048d150
        ;   Label: LAB_0048d150
    MOV dword ptr [ESI + 0x1ac],0x1     ; 0048d15a
    CMP byte ptr [ESI + 0x214],0x0      ; 0048d164
        ;   Label: LAB_0048d164
    JZ 0x0048d1d1                       ; 0048d16b
        ;   XREF to: 0048d1d1 (CONDITIONAL_JUMP)  ; LAB_0048d1d1
    CMP dword ptr [ESI + 0x1ac],0x0     ; 0048d16d
    JZ 0x0048d1d1                       ; 0048d174
        ;   XREF to: 0048d1d1 (CONDITIONAL_JUMP)  ; LAB_0048d1d1
    LEA EAX,[ESI + 0x214]               ; 0048d176
    PUSH EAX                            ; 0048d17c
    MOV ECX,dword ptr [0x005b7650]      ; 0048d17d | DAT_005b7650
    PUSH ECX                            ; 0048d183
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0048d184
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0048d189
    TEST EAX,EAX                        ; 0048d18c
    JZ 0x0048d1d1                       ; 0048d18e
        ;   XREF to: 0048d1d1 (CONDITIONAL_JUMP)  ; LAB_0048d1d1
    MOV EBX,dword ptr [ESI + 0x1a0]     ; 0048d190
    MOV dword ptr [ESI + 0x1ac],0x0     ; 0048d196
    CMP EBX,0x3                         ; 0048d1a0
    JZ 0x0048d1d1                       ; 0048d1a3
        ;   XREF to: 0048d1d1 (CONDITIONAL_JUMP)  ; LAB_0048d1d1
    PUSH 0xffff                         ; 0048d1a5
    FLD float ptr [ESI + 0x154]         ; 0048d1aa
    PUSH 0x0                            ; 0048d1b0
    FMUL double ptr [0x00581557]        ; 0048d1b2 | DOUBLE_00581557
    SUB ESP,0x4                         ; 0048d1b8
    LEA EAX,[ESI + 0x20]                ; 0048d1bb
    FSTP float ptr [ESP]                ; 0048d1be
    PUSH EAX                            ; 0048d1c1
    MOV EDI,dword ptr [0x005b80f0]      ; 0048d1c2 | DAT_005b80f0
    PUSH EDI                            ; 0048d1c8
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0 ; 0048d1c9
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0048d1ce
    CMP dword ptr [ESI + 0x1ac],0x0     ; 0048d1d1
        ;   Label: LAB_0048d1d1
    JZ 0x0048d3c5                       ; 0048d1d8
        ;   XREF to: 0048d3c5 (CONDITIONAL_JUMP)  ; LAB_0048d3c5
    FLD float ptr [EBP + 0x18]          ; 0048d1de
    FMUL double ptr [0x0058155f]        ; 0048d1e1 | DOUBLE_0058155f
    FADD float ptr [ESI + 0x15c]        ; 0048d1e7
    FSTP float ptr [ESI + 0x15c]        ; 0048d1ed
    CMP dword ptr [ESI + 0x15c],0x41000000 ; 0048d1f3
    JL 0x0048d211                       ; 0048d1fd
        ;   XREF to: 0048d211 (CONDITIONAL_JUMP)  ; LAB_0048d211
    FLD float ptr [ESI + 0x15c]         ; 0048d1ff
    FADD float ptr [0x00581567]         ; 0048d205 | DOUBLE_00581567
    FSTP float ptr [ESI + 0x15c]        ; 0048d20b
    MOV dword ptr [ESI + 0x30],0x0      ; 0048d211
        ;   Label: LAB_0048d211
    MOV dword ptr [ESI + 0x38],0x0      ; 0048d218
    PUSH ESI                            ; 0048d21f
    MOV dword ptr [ESI + 0x34],0x0      ; 0048d220
    CALL core_flame.cpp_CFlame_updateGlobe_FUN_0048e230 ; 0048d227
        ;   XREF to: 0048e230 (UNCONDITIONAL_CALL)  ; undefined core_flame.cpp_CFlame_updateGlobe_FUN_0048e230()
    MOV ECX,dword ptr [ESI + 0x298]     ; 0048d22c
    ADD ESP,0x4                         ; 0048d232
    TEST ECX,ECX                        ; 0048d235
    JZ 0x0048d458                       ; 0048d237
        ;   XREF to: 0048d458 (CONDITIONAL_JUMP)  ; LAB_0048d458
    MOV EDX,dword ptr [ESI + 0x1a8]     ; 0048d23d
    PUSH EDX                            ; 0048d243
    MOV ECX,dword ptr [0x005bed68]      ; 0048d244 | DAT_005bed68
    PUSH ECX                            ; 0048d24a
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0 ; 0048d24b
        ;   XREF to: 0052eba0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0048d250
    TEST EAX,EAX                        ; 0048d253
    JZ 0x0048d3cc                       ; 0048d255
        ;   XREF to: 0048d3cc (CONDITIONAL_JUMP)  ; LAB_0048d3cc
    CMP dword ptr [ESI + 0x280],0x0     ; 0048d25b
        ;   Label: LAB_0048d25b
    JZ 0x0048d385                       ; 0048d262
        ;   XREF to: 0048d385 (CONDITIONAL_JUMP)  ; LAB_0048d385
    LEA EAX,[ESP + 0x74]                ; 0048d268
    PUSH EAX                            ; 0048d26c
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 0048d26d
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0048d272
    LEA EDI,[ESP + 0x74]                ; 0048d275
    MOV EAX,[0x01cae0e8]                ; 0048d279 | DAT_01cae0e8
    PUSH EDI                            ; 0048d27e
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0048d27f
    PUSH EAX                            ; 0048d286
    MOV EBX,dword ptr [EAX + 0x14c]     ; 0048d287
    CALL dword ptr [EBX + 0x34]         ; 0048d28d
    ADD ESP,0x8                         ; 0048d290
    CMP EAX,0x2                         ; 0048d293
    JNZ 0x0048d385                      ; 0048d296
        ;   XREF to: 0048d385 (CONDITIONAL_JUMP)  ; LAB_0048d385
    MOV EDI,dword ptr [0x01cae0e8]      ; 0048d29c | DAT_01cae0e8
    MOV EDI,dword ptr [EDI*0x4 + 0x1cae0d8] ; 0048d2a2
    LEA EAX,[EDI + 0x20]                ; 0048d2a9
    LEA EBX,[ESI + 0x20]                ; 0048d2ac
    FLD float ptr [EAX]                 ; 0048d2af
    FSUB float ptr [EBX]                ; 0048d2b1
    FSTP float ptr [ESP + 0xc4]         ; 0048d2b3
    FLD float ptr [EAX + 0x4]           ; 0048d2ba
    FSUB float ptr [EBX + 0x4]          ; 0048d2bd
    FSTP float ptr [ESP + 0xc8]         ; 0048d2c0
    FLD float ptr [EAX + 0x8]           ; 0048d2c7
    FSUB float ptr [EBX + 0x8]          ; 0048d2ca
    FLD float ptr [ESP + 0xc8]          ; 0048d2cd
    FXCH                                ; 0048d2d4
    FSTP float ptr [ESP + 0xcc]         ; 0048d2d6
    FCOMP double ptr [0x0058156f]       ; 0048d2dd | DOUBLE_0058156f
    FNSTSW AX                           ; 0048d2e3
    SAHF                                ; 0048d2e5
    JBE 0x0048d385                      ; 0048d2e6
        ;   XREF to: 0048d385 (CONDITIONAL_JUMP)  ; LAB_0048d385
    FLD float ptr [ESP + 0xc8]          ; 0048d2ec
    FCOMP float ptr [ESP + 0x8c]        ; 0048d2f3
    FNSTSW AX                           ; 0048d2fa
    SAHF                                ; 0048d2fc
    JNC 0x0048d385                      ; 0048d2fd
        ;   XREF to: 0048d385 (CONDITIONAL_JUMP)  ; LAB_0048d385
    FLD float ptr [ESI + 0x150]         ; 0048d303
    FADD float ptr [ESI + 0x158]        ; 0048d309
    FMUL double ptr [0x00581577]        ; 0048d30f | DOUBLE_00581577
    CALL crt_math.c_round_FUN_00563a30  ; 0048d315
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0xf0]        ; 0048d31a
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0048d321
    FLD float ptr [ESP + 0xc4]          ; 0048d328
    MOV dword ptr [ESP + 0xf4],EAX      ; 0048d32f
    FABS                                ; 0048d336
    FLD float ptr [ESP + 0x90]          ; 0048d338
    FILD dword ptr [ESP + 0xf4]         ; 0048d33f
    FSTP float ptr [ESP + 0xec]         ; 0048d346
    FADD float ptr [ESP + 0xec]         ; 0048d34d
    FSTP double ptr [ESP]               ; 0048d354
    FCOMP double ptr [ESP]              ; 0048d357
    FNSTSW AX                           ; 0048d35a
    SAHF                                ; 0048d35c
    JNC 0x0048d385                      ; 0048d35d
        ;   XREF to: 0048d385 (CONDITIONAL_JUMP)  ; LAB_0048d385
    FLD float ptr [ESP + 0xcc]          ; 0048d35f
    FABS                                ; 0048d366
    FCOMP double ptr [ESP]              ; 0048d368
    FNSTSW AX                           ; 0048d36b
    SAHF                                ; 0048d36d
    JNC 0x0048d385                      ; 0048d36e
        ;   XREF to: 0048d385 (CONDITIONAL_JUMP)  ; LAB_0048d385
    PUSH 0x1                            ; 0048d370
    PUSH 0x40000000                     ; 0048d372
    PUSH 0x0                            ; 0048d377
    PUSH 0x0                            ; 0048d379
    PUSH EBX                            ; 0048d37b
    PUSH EDI                            ; 0048d37c
    CALL core_charactr.cpp_FUN_00427730 ; 0048d37d
        ;   XREF to: 00427730 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427730(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 0048d382
    CMP dword ptr [ESI + 0x284],0x0     ; 0048d385
        ;   Label: LAB_0048d385
    JZ 0x0048d3c5                       ; 0048d38c
        ;   XREF to: 0048d3c5 (CONDITIONAL_JUMP)  ; LAB_0048d3c5
    CMP dword ptr [ESI + 0x294],0x0     ; 0048d38e
    JL 0x0048d484                       ; 0048d395
        ;   XREF to: 0048d484 (CONDITIONAL_JUMP)  ; LAB_0048d484
    MOV EBX,dword ptr [0x005be368]      ; 0048d39b | DAT_005be368
        ;   Label: LAB_0048d39b
    MOV EAX,dword ptr [ESI + 0x294]     ; 0048d3a1
    CMP EAX,dword ptr [EBX + 0x150bf4]  ; 0048d3a7 | DAT_01fa7e78
    JGE 0x0048d493                      ; 0048d3ad
        ;   XREF to: 0048d493 (CONDITIONAL_JUMP)  ; LAB_0048d493
    MOV EAX,[0x005be368]                ; 0048d3b3 | DAT_005be368 | DAT_01e57284
        ;   Label: LAB_0048d3b3
    CMP dword ptr [EAX + 0x150bf4],0x0  ; 0048d3b8 | DAT_01fa7e78
    JG 0x0048d4a2                       ; 0048d3bf
        ;   XREF to: 0048d4a2 (CONDITIONAL_JUMP)  ; LAB_0048d4a2
    MOV ESP,EBP                         ; 0048d3c5
        ;   Label: LAB_0048d3c5
    POP EBP                             ; 0048d3c7
    POP EDI                             ; 0048d3c8
    POP ESI                             ; 0048d3c9
    POP EBX                             ; 0048d3ca
    RET                                 ; 0048d3cb
    PUSH 0x3f866666                     ; 0048d3cc
        ;   Label: LAB_0048d3cc
    PUSH 0x3f733333                     ; 0048d3d1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048d3d6
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xfc],EAX      ; 0048d3db
    FLD float ptr [ESP + 0xfc]          ; 0048d3e2
    ADD ESP,0x8                         ; 0048d3e9
    SUB ESP,0x8                         ; 0048d3ec
    FSTP double ptr [ESP]               ; 0048d3ef
    PUSH 0x581546                       ; 0048d3f2 | = "torch.wav * %f"
    LEA EAX,[ESP + 0x1c]                ; 0048d3f7
    PUSH EAX                            ; 0048d3fb
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0048d3fc
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0048d401
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0048d404
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH 0x2                            ; 0048d409
    PUSH 0x3f800000                     ; 0048d40b
    PUSH 0x0                            ; 0048d410
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048d412
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x100],EAX     ; 0048d417
    FLD float ptr [ESP + 0x100]         ; 0048d41e
    ADD ESP,0x8                         ; 0048d425
    SUB ESP,0x8                         ; 0048d428
    FSTP double ptr [ESP]               ; 0048d42b
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0 ; 0048d42e
        ;   XREF to: 005262d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 0048d433
    LEA EBX,[ESP + 0x10]                ; 0048d436
    PUSH EBX                            ; 0048d43a
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0048d43b
    PUSH ESI                            ; 0048d441
    CALL dword ptr [EAX + 0x24]         ; 0048d442
    ADD ESP,0x8                         ; 0048d445
    MOV dword ptr [ESI + 0x1a8],EAX     ; 0048d448
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0048d44e
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    JMP 0x0048d25b                      ; 0048d453
        ;   XREF to: 0048d25b (UNCONDITIONAL_JUMP)  ; LAB_0048d25b
    MOV EBX,dword ptr [ESI + 0x1a8]     ; 0048d458
        ;   Label: LAB_0048d458
    TEST EBX,EBX                        ; 0048d45e
    JZ 0x0048d25b                       ; 0048d460
        ;   XREF to: 0048d25b (CONDITIONAL_JUMP)  ; LAB_0048d25b
    PUSH EBX                            ; 0048d466
    MOV EAX,[0x005bed68]                ; 0048d467 | DAT_005bed68
    PUSH EAX                            ; 0048d46c
    CALL core_sound.cpp_CSound_killSound_FUN_0052ebb0 ; 0048d46d
        ;   XREF to: 0052ebb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_0052ebb0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0048d472
    MOV dword ptr [ESI + 0x1a8],0x0     ; 0048d475
    JMP 0x0048d25b                      ; 0048d47f
        ;   XREF to: 0048d25b (UNCONDITIONAL_JUMP)  ; LAB_0048d25b
    MOV dword ptr [ESI + 0x294],0x0     ; 0048d484
        ;   Label: LAB_0048d484
    JMP 0x0048d39b                      ; 0048d48e
        ;   XREF to: 0048d39b (UNCONDITIONAL_JUMP)  ; LAB_0048d39b
    MOV dword ptr [ESI + 0x294],0x0     ; 0048d493
        ;   Label: LAB_0048d493
    JMP 0x0048d3b3                      ; 0048d49d
        ;   XREF to: 0048d3b3 (UNCONDITIONAL_JUMP)  ; LAB_0048d3b3
    MOV EBX,dword ptr [ESI + 0x294]     ; 0048d4a2
        ;   Label: LAB_0048d4a2
    MOV EBX,dword ptr [EAX + EBX*0x4 + 0x150bf8] ; 0048d4a8
    LEA EAX,[ESP + 0x9c]                ; 0048d4af
    PUSH EAX                            ; 0048d4b6
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 0048d4b7
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0048d4bc
    LEA EAX,[ESP + 0x9c]                ; 0048d4bf
    PUSH EAX                            ; 0048d4c6
    MOV EDI,dword ptr [EBX + 0x14c]     ; 0048d4c7
    PUSH EBX                            ; 0048d4cd
    CALL dword ptr [EDI + 0x34]         ; 0048d4ce
    ADD ESP,0x8                         ; 0048d4d1
    CMP EAX,0x2                         ; 0048d4d4
    JNZ 0x0048d5b8                      ; 0048d4d7
        ;   XREF to: 0048d5b8 (CONDITIONAL_JUMP)  ; LAB_0048d5b8
    LEA EAX,[EBX + 0x20]                ; 0048d4dd
    LEA EDI,[ESI + 0x20]                ; 0048d4e0
    FLD float ptr [EAX]                 ; 0048d4e3
    FSUB float ptr [EDI]                ; 0048d4e5
    FSTP float ptr [ESP + 0xd0]         ; 0048d4e7
    FLD float ptr [EAX + 0x4]           ; 0048d4ee
    FSUB float ptr [EDI + 0x4]          ; 0048d4f1
    FSTP float ptr [ESP + 0xd4]         ; 0048d4f4
    FLD float ptr [EAX + 0x8]           ; 0048d4fb
    FSUB float ptr [EDI + 0x8]          ; 0048d4fe
    FSTP float ptr [ESP + 0xd8]         ; 0048d501
    FLD float ptr [ESI + 0x150]         ; 0048d508
    FADD float ptr [ESI + 0x158]        ; 0048d50e
    FMUL double ptr [0x00581577]        ; 0048d514 | DOUBLE_00581577
    FLD float ptr [ESP + 0xd4]          ; 0048d51a
    FXCH                                ; 0048d521
    CALL crt_math.c_round_FUN_00563a30  ; 0048d523
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0xe8]        ; 0048d528
    FCOMP double ptr [0x0058156f]       ; 0048d52f | DOUBLE_0058156f
    FNSTSW AX                           ; 0048d535
    SAHF                                ; 0048d537
    JBE 0x0048d5b8                      ; 0048d538
        ;   XREF to: 0048d5b8 (CONDITIONAL_JUMP)  ; LAB_0048d5b8
    FLD float ptr [ESP + 0xd4]          ; 0048d53e
    FCOMP float ptr [ESP + 0xb4]        ; 0048d545
    FNSTSW AX                           ; 0048d54c
    SAHF                                ; 0048d54e
    JNC 0x0048d5b8                      ; 0048d54f
        ;   XREF to: 0048d5b8 (CONDITIONAL_JUMP)  ; LAB_0048d5b8
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0048d551
    FLD float ptr [ESP + 0xd0]          ; 0048d558
    MOV dword ptr [ESP + 0xf4],EAX      ; 0048d55f
    FABS                                ; 0048d566
    FLD float ptr [ESP + 0xb8]          ; 0048d568
    FILD dword ptr [ESP + 0xf4]         ; 0048d56f
    FSTP float ptr [ESP + 0xe4]         ; 0048d576
    FADD float ptr [ESP + 0xe4]         ; 0048d57d
    FSTP double ptr [ESP + 0x8]         ; 0048d584
    FCOMP double ptr [ESP + 0x8]        ; 0048d588
    FNSTSW AX                           ; 0048d58c
    SAHF                                ; 0048d58e
    JNC 0x0048d5b8                      ; 0048d58f
        ;   XREF to: 0048d5b8 (CONDITIONAL_JUMP)  ; LAB_0048d5b8
    FLD float ptr [ESP + 0xd8]          ; 0048d591
    FABS                                ; 0048d598
    FCOMP double ptr [ESP + 0x8]        ; 0048d59a
    FNSTSW AX                           ; 0048d59e
    SAHF                                ; 0048d5a0
    JNC 0x0048d5b8                      ; 0048d5a1
        ;   XREF to: 0048d5b8 (CONDITIONAL_JUMP)  ; LAB_0048d5b8
    PUSH 0x0                            ; 0048d5a3
    PUSH 0x40000000                     ; 0048d5a5
    PUSH 0x0                            ; 0048d5aa
    PUSH 0x0                            ; 0048d5ac
    PUSH EDI                            ; 0048d5ae
    PUSH EBX                            ; 0048d5af
    CALL core_charactr.cpp_FUN_00427730 ; 0048d5b0
        ;   XREF to: 00427730 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427730(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 0048d5b5
    INC dword ptr [ESI + 0x294]         ; 0048d5b8
        ;   Label: LAB_0048d5b8
    MOV ESP,EBP                         ; 0048d5be
    POP EBP                             ; 0048d5c0
    POP EDI                             ; 0048d5c1
    POP ESI                             ; 0048d5c2
    POP EBX                             ; 0048d5c3
    RET                                 ; 0048d5c4

