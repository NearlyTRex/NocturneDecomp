; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_process_FUN_004c9c00(CFlame *this_ptr,float delta_time)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; double           Stack[-0xf8]:8  local_f8
; double           Stack[-0xf0]:8  dStack_f0
; SCollisionInfo   Stack[-0x8c]:40  SStack_8c
; SCollisionInfo   Stack[-0x64]:40  SStack_64
; float            Stack[-0x34]:4  fStack_34
; float            Stack[-0x30]:4  fStack_30
; float            Stack[-0x2c]:4  fStack_2c
; float            Stack[-0x28]:4  fStack_28
; float            Stack[-0x24]:4  fStack_24
; float            Stack[-0x20]:4  fStack_20
; float            Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_processFires_FUN_00419e10 at 00419efd
;   core_crossbow.cpp_CCrossbow_process_FUN_00448d30 at 00448dc0
;   core_flamecan.cpp_CFlameCan_process_FUN_004cb390 at 004cb3e2
;   core_vessel.cpp_CCryptVessel_process_FUN_005e91a0 at 005e94a3
;
; Referenced Globals:
;   TerminatedCString s_torch_wav_f_0062a0ef
;   double DOUBLE_0062a0fe = 0.5
;   double DOUBLE_0062a106 = 16
;   float FLOAT_0062a10e = -8
;   double DOUBLE_0062a116 = -0.5
;   double DOUBLE_0062a11e = 0.25
;   CEventList* g_CEventListPtr = 02d05310
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CSound* g_CSoundPtr = 03f6af64
;   CEventList g_CEventListInstance
;   CFireEffect g_CFireEffectInstance
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   CDemonSet g_CDemonSetInstance
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
;   core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0
;   core_flame.cpp_CFlame_updateGlobe_FUN_004cad90
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;   core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
;   core_sound.cpp_CSound_killSound_FUN_005b3b90
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9c00
        ;   Label: core_flame.cpp_CFlame_process_FUN_004c9c00
    PUSH ESI                            ; 004c9c01
    PUSH EDI                            ; 004c9c02
    PUSH EBP                            ; 004c9c03
    MOV EBP,ESP                         ; 004c9c04
    SUB ESP,0xf8                        ; 004c9c06
    AND ESP,0xfffffff8                  ; 004c9c0c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c9c0f
    CMP byte ptr [ESI + 0x1b8],0x0      ; 004c9c12
    JZ 0x004c9ca4                       ; 004c9c19
        ;   XREF to: 004c9ca4 (CONDITIONAL_JUMP)  ; LAB_004c9ca4
    CMP dword ptr [ESI + 0x1b4],0x0     ; 004c9c1f
    JNZ 0x004c9ca4                      ; 004c9c26
        ;   XREF to: 004c9ca4 (CONDITIONAL_JUMP)  ; LAB_004c9ca4
    LEA EAX,[ESI + 0x1b8]               ; 004c9c2c
    PUSH EAX                            ; 004c9c32
    MOV ECX,dword ptr [0x006793d0]      ; 004c9c33 | g_CEventListPtr
    PUSH ECX                            ; 004c9c39 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004c9c3a
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004c9c3f
    TEST EAX,EAX                        ; 004c9c42
    JZ 0x004c9ca4                       ; 004c9c44
        ;   XREF to: 004c9ca4 (CONDITIONAL_JUMP)  ; LAB_004c9ca4
    MOV EBX,dword ptr [ESI + 0x1a8]     ; 004c9c46
    CMP EBX,0x1                         ; 004c9c4c
    JZ 0x004c9c90                       ; 004c9c4f
        ;   XREF to: 004c9c90 (CONDITIONAL_JUMP)  ; LAB_004c9c90
    CMP EBX,0x3                         ; 004c9c51
    JZ 0x004c9c90                       ; 004c9c54
        ;   XREF to: 004c9c90 (CONDITIONAL_JUMP)  ; LAB_004c9c90
    LEA EDI,[ESI + 0x20]                ; 004c9c56
    XOR EBX,EBX                         ; 004c9c59
    PUSH 0xffff                         ; 004c9c5b
        ;   Label: LAB_004c9c5b
    PUSH 0x1                            ; 004c9c60
    PUSH 0x10000                        ; 004c9c62
    PUSH 0x4000                         ; 004c9c67
    PUSH 0x0                            ; 004c9c6c
    PUSH EDI                            ; 004c9c6e
    MOV EAX,[0x0067a3d0]                ; 004c9c6f | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EAX                            ; 004c9c74 | g_CFireEffectInstance
    INC EBX                             ; 004c9c75
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0 ; 004c9c76
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004c9c7b
    CMP EBX,0xa                         ; 004c9c7e
    JL 0x004c9c5b                       ; 004c9c81
        ;   XREF to: 004c9c5b (CONDITIONAL_JUMP)  ; LAB_004c9c5b
    LEA EAX,[EAX]                       ; 004c9c83
    LEA EDX,[EDX]                       ; 004c9c89
    NOP                                 ; 004c9c8f
    MOV dword ptr [ESI + 0x290],0x1     ; 004c9c90
        ;   Label: LAB_004c9c90
    MOV dword ptr [ESI + 0x1b4],0x1     ; 004c9c9a
    CMP byte ptr [ESI + 0x21c],0x0      ; 004c9ca4
        ;   Label: LAB_004c9ca4
    JZ 0x004c9d11                       ; 004c9cab
        ;   XREF to: 004c9d11 (CONDITIONAL_JUMP)  ; LAB_004c9d11
    CMP dword ptr [ESI + 0x1b4],0x0     ; 004c9cad
    JZ 0x004c9d11                       ; 004c9cb4
        ;   XREF to: 004c9d11 (CONDITIONAL_JUMP)  ; LAB_004c9d11
    LEA EAX,[ESI + 0x21c]               ; 004c9cb6
    PUSH EAX                            ; 004c9cbc
    MOV ECX,dword ptr [0x006793d0]      ; 004c9cbd | g_CEventListPtr
    PUSH ECX                            ; 004c9cc3 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004c9cc4
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004c9cc9
    TEST EAX,EAX                        ; 004c9ccc
    JZ 0x004c9d11                       ; 004c9cce
        ;   XREF to: 004c9d11 (CONDITIONAL_JUMP)  ; LAB_004c9d11
    MOV EBX,dword ptr [ESI + 0x1a8]     ; 004c9cd0
    MOV dword ptr [ESI + 0x1b4],0x0     ; 004c9cd6
    CMP EBX,0x3                         ; 004c9ce0
    JZ 0x004c9d11                       ; 004c9ce3
        ;   XREF to: 004c9d11 (CONDITIONAL_JUMP)  ; LAB_004c9d11
    PUSH 0xffff                         ; 004c9ce5
    FLD float ptr [ESI + 0x15c]         ; 004c9cea
    PUSH 0x0                            ; 004c9cf0
    FMUL double ptr [0x0062a0fe]        ; 004c9cf2 | DOUBLE_0062a0fe
    SUB ESP,0x4                         ; 004c9cf8
    LEA EAX,[ESI + 0x20]                ; 004c9cfb
    FSTP float ptr [ESP]                ; 004c9cfe
    PUSH EAX                            ; 004c9d01
    MOV EDI,dword ptr [0x0067a3d0]      ; 004c9d02 | g_CFireEffectPtr
    PUSH EDI                            ; 004c9d08 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 004c9d09
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004c9d0e
    CMP dword ptr [ESI + 0x1b4],0x0     ; 004c9d11
        ;   Label: LAB_004c9d11
    JZ 0x004c9f05                       ; 004c9d18
        ;   XREF to: 004c9f05 (CONDITIONAL_JUMP)  ; LAB_004c9f05
    FLD float ptr [EBP + 0x18]          ; 004c9d1e
    FMUL double ptr [0x0062a106]        ; 004c9d21 | DOUBLE_0062a106
    FADD float ptr [ESI + 0x164]        ; 004c9d27
    FSTP float ptr [ESI + 0x164]        ; 004c9d2d
    CMP dword ptr [ESI + 0x164],0x41000000 ; 004c9d33
    JL 0x004c9d51                       ; 004c9d3d
        ;   XREF to: 004c9d51 (CONDITIONAL_JUMP)  ; LAB_004c9d51
    FLD float ptr [ESI + 0x164]         ; 004c9d3f
    FADD float ptr [0x0062a10e]         ; 004c9d45 | FLOAT_0062a10e
    FSTP float ptr [ESI + 0x164]        ; 004c9d4b
    MOV dword ptr [ESI + 0x30],0x0      ; 004c9d51
        ;   Label: LAB_004c9d51
    MOV dword ptr [ESI + 0x38],0x0      ; 004c9d58
    PUSH ESI                            ; 004c9d5f
    MOV dword ptr [ESI + 0x34],0x0      ; 004c9d60
    CALL core_flame.cpp_CFlame_updateGlobe_FUN_004cad90 ; 004c9d67
        ;   XREF to: 004cad90 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_updateGlobe_FUN_004cad90(CFlame * this_ptr)
    MOV ECX,dword ptr [ESI + 0x2a0]     ; 004c9d6c
    ADD ESP,0x4                         ; 004c9d72
    TEST ECX,ECX                        ; 004c9d75
    JZ 0x004c9f98                       ; 004c9d77
        ;   XREF to: 004c9f98 (CONDITIONAL_JUMP)  ; LAB_004c9f98
    MOV EDX,dword ptr [ESI + 0x1b0]     ; 004c9d7d
    PUSH EDX                            ; 004c9d83
    MOV ECX,dword ptr [0x00681ef8]      ; 004c9d84 | g_CSoundPtr | g_CSoundInstance
    PUSH ECX                            ; 004c9d8a | g_CSoundInstance
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 004c9d8b
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004c9d90
    TEST EAX,EAX                        ; 004c9d93
    JZ 0x004c9f0c                       ; 004c9d95
        ;   XREF to: 004c9f0c (CONDITIONAL_JUMP)  ; LAB_004c9f0c
    CMP dword ptr [ESI + 0x288],0x0     ; 004c9d9b
        ;   Label: LAB_004c9d9b
    JZ 0x004c9ec5                       ; 004c9da2
        ;   XREF to: 004c9ec5 (CONDITIONAL_JUMP)  ; LAB_004c9ec5
    LEA EAX,[ESP + 0x74]                ; 004c9da8
    PUSH EAX                            ; 004c9dac
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 004c9dad
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 004c9db2
    LEA EDI,[ESP + 0x74]                ; 004c9db5
    MOV EAX,[0x02db87d0]                ; 004c9db9 | g_LocalHeroIndex
    PUSH EDI                            ; 004c9dbe
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004c9dbf | g_HeroActors
    PUSH EAX                            ; 004c9dc6
    MOV EBX,dword ptr [EAX + 0x154]     ; 004c9dc7
    CALL dword ptr [EBX + 0x34]         ; 004c9dcd
    ADD ESP,0x8                         ; 004c9dd0
    CMP EAX,0x2                         ; 004c9dd3
    JNZ 0x004c9ec5                      ; 004c9dd6
        ;   XREF to: 004c9ec5 (CONDITIONAL_JUMP)  ; LAB_004c9ec5
    MOV EDI,dword ptr [0x02db87d0]      ; 004c9ddc | g_LocalHeroIndex
    MOV EDI,dword ptr [EDI*0x4 + 0x2db87c0] ; 004c9de2 | g_HeroActors
    LEA EAX,[EDI + 0x20]                ; 004c9de9
    LEA EBX,[ESI + 0x20]                ; 004c9dec
    FLD float ptr [EAX]                 ; 004c9def
    FSUB float ptr [EBX]                ; 004c9df1
    FSTP float ptr [ESP + 0xc4]         ; 004c9df3
    FLD float ptr [EAX + 0x4]           ; 004c9dfa
    FSUB float ptr [EBX + 0x4]          ; 004c9dfd
    FSTP float ptr [ESP + 0xc8]         ; 004c9e00
    FLD float ptr [EAX + 0x8]           ; 004c9e07
    FSUB float ptr [EBX + 0x8]          ; 004c9e0a
    FLD float ptr [ESP + 0xc8]          ; 004c9e0d
    FXCH                                ; 004c9e14
    FSTP float ptr [ESP + 0xcc]         ; 004c9e16
    FCOMP double ptr [0x0062a116]       ; 004c9e1d | DOUBLE_0062a116
    FNSTSW AX                           ; 004c9e23
    SAHF                                ; 004c9e25
    JBE 0x004c9ec5                      ; 004c9e26
        ;   XREF to: 004c9ec5 (CONDITIONAL_JUMP)  ; LAB_004c9ec5
    FLD float ptr [ESP + 0xc8]          ; 004c9e2c
    FCOMP float ptr [ESP + 0x8c]        ; 004c9e33
    FNSTSW AX                           ; 004c9e3a
    SAHF                                ; 004c9e3c
    JNC 0x004c9ec5                      ; 004c9e3d
        ;   XREF to: 004c9ec5 (CONDITIONAL_JUMP)  ; LAB_004c9ec5
    FLD float ptr [ESI + 0x158]         ; 004c9e43
    FADD float ptr [ESI + 0x160]        ; 004c9e49
    FMUL double ptr [0x0062a11e]        ; 004c9e4f | DOUBLE_0062a11e
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c9e55
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xf0]        ; 004c9e5a
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004c9e61
    FLD float ptr [ESP + 0xc4]          ; 004c9e68
    MOV dword ptr [ESP + 0xf4],EAX      ; 004c9e6f
    FABS                                ; 004c9e76
    FLD float ptr [ESP + 0x90]          ; 004c9e78
    FILD dword ptr [ESP + 0xf4]         ; 004c9e7f
    FSTP float ptr [ESP + 0xec]         ; 004c9e86
    FADD float ptr [ESP + 0xec]         ; 004c9e8d
    FSTP double ptr [ESP]               ; 004c9e94
    FCOMP double ptr [ESP]              ; 004c9e97
    FNSTSW AX                           ; 004c9e9a
    SAHF                                ; 004c9e9c
    JNC 0x004c9ec5                      ; 004c9e9d
        ;   XREF to: 004c9ec5 (CONDITIONAL_JUMP)  ; LAB_004c9ec5
    FLD float ptr [ESP + 0xcc]          ; 004c9e9f
    FABS                                ; 004c9ea6
    FCOMP double ptr [ESP]              ; 004c9ea8
    FNSTSW AX                           ; 004c9eab
    SAHF                                ; 004c9ead
    JNC 0x004c9ec5                      ; 004c9eae
        ;   XREF to: 004c9ec5 (CONDITIONAL_JUMP)  ; LAB_004c9ec5
    PUSH 0x1                            ; 004c9eb0
    PUSH 0x40000000                     ; 004c9eb2
    PUSH 0x0                            ; 004c9eb7
    PUSH 0x0                            ; 004c9eb9
    PUSH EBX                            ; 004c9ebb
    PUSH EDI                            ; 004c9ebc
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0 ; 004c9ebd
        ;   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0(CCharacter * this_ptr, CVector3f * position, int fire_type, float spread_rate, ...)
    ADD ESP,0x18                        ; 004c9ec2
    CMP dword ptr [ESI + 0x28c],0x0     ; 004c9ec5
        ;   Label: LAB_004c9ec5
    JZ 0x004c9f05                       ; 004c9ecc
        ;   XREF to: 004c9f05 (CONDITIONAL_JUMP)  ; LAB_004c9f05
    CMP dword ptr [ESI + 0x29c],0x0     ; 004c9ece
    JL 0x004c9fc4                       ; 004c9ed5
        ;   XREF to: 004c9fc4 (CONDITIONAL_JUMP)  ; LAB_004c9fc4
    MOV EBX,dword ptr [0x006810c8]      ; 004c9edb | g_CDemonSetPtr
        ;   Label: LAB_004c9edb
    MOV EAX,dword ptr [ESI + 0x29c]     ; 004c9ee1
    CMP EAX,dword ptr [EBX + 0x150fdc]  ; 004c9ee7 | g_CDemonSetInstance.enemy_count
    JGE 0x004c9fd3                      ; 004c9eed
        ;   XREF to: 004c9fd3 (CONDITIONAL_JUMP)  ; LAB_004c9fd3
    MOV EAX,[0x006810c8]                ; 004c9ef3 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004c9ef3
    CMP dword ptr [EAX + 0x150fdc],0x0  ; 004c9ef8 | g_CDemonSetInstance.enemy_count
    JG 0x004c9fe2                       ; 004c9eff
        ;   XREF to: 004c9fe2 (CONDITIONAL_JUMP)  ; LAB_004c9fe2
    MOV ESP,EBP                         ; 004c9f05
        ;   Label: LAB_004c9f05
    POP EBP                             ; 004c9f07
    POP EDI                             ; 004c9f08
    POP ESI                             ; 004c9f09
    POP EBX                             ; 004c9f0a
    RET                                 ; 004c9f0b
    PUSH 0x3f866666                     ; 004c9f0c
        ;   Label: LAB_004c9f0c
    PUSH 0x3f733333                     ; 004c9f11
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c9f16
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xfc],EAX      ; 004c9f1b
    FLD float ptr [ESP + 0xfc]          ; 004c9f22
    ADD ESP,0x8                         ; 004c9f29
    SUB ESP,0x8                         ; 004c9f2c
    FSTP double ptr [ESP]               ; 004c9f2f
    PUSH 0x62a0ef                       ; 004c9f32 | = "torch.wav * %f"
    LEA EAX,[ESP + 0x1c]                ; 004c9f37
    PUSH EAX                            ; 004c9f3b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004c9f3c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004c9f41
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 004c9f44
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x2                            ; 004c9f49
    PUSH 0x3f800000                     ; 004c9f4b
    PUSH 0x0                            ; 004c9f50
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c9f52
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x100],EAX     ; 004c9f57
    FLD float ptr [ESP + 0x100]         ; 004c9f5e
    ADD ESP,0x8                         ; 004c9f65
    SUB ESP,0x8                         ; 004c9f68
    FSTP double ptr [ESP]               ; 004c9f6b
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0 ; 004c9f6e
        ;   XREF to: 005a8be0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 004c9f73
    LEA EBX,[ESP + 0x10]                ; 004c9f76
    PUSH EBX                            ; 004c9f7a
    MOV EAX,dword ptr [ESI + 0x154]     ; 004c9f7b
    PUSH ESI                            ; 004c9f81
    CALL dword ptr [EAX + 0x24]         ; 004c9f82
    ADD ESP,0x8                         ; 004c9f85
    MOV dword ptr [ESI + 0x1b0],EAX     ; 004c9f88
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 004c9f8e
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    JMP 0x004c9d9b                      ; 004c9f93
        ;   XREF to: 004c9d9b (UNCONDITIONAL_JUMP)  ; LAB_004c9d9b
    MOV EBX,dword ptr [ESI + 0x1b0]     ; 004c9f98
        ;   Label: LAB_004c9f98
    TEST EBX,EBX                        ; 004c9f9e
    JZ 0x004c9d9b                       ; 004c9fa0
        ;   XREF to: 004c9d9b (CONDITIONAL_JUMP)  ; LAB_004c9d9b
    PUSH EBX                            ; 004c9fa6
    MOV EAX,[0x00681ef8]                ; 004c9fa7 | g_CSoundPtr | g_CSoundInstance
    PUSH EAX                            ; 004c9fac | g_CSoundInstance
    CALL core_sound.cpp_CSound_killSound_FUN_005b3b90 ; 004c9fad
        ;   XREF to: 005b3b90 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_005b3b90(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004c9fb2
    MOV dword ptr [ESI + 0x1b0],0x0     ; 004c9fb5
    JMP 0x004c9d9b                      ; 004c9fbf
        ;   XREF to: 004c9d9b (UNCONDITIONAL_JUMP)  ; LAB_004c9d9b
    MOV dword ptr [ESI + 0x29c],0x0     ; 004c9fc4
        ;   Label: LAB_004c9fc4
    JMP 0x004c9edb                      ; 004c9fce
        ;   XREF to: 004c9edb (UNCONDITIONAL_JUMP)  ; LAB_004c9edb
    MOV dword ptr [ESI + 0x29c],0x0     ; 004c9fd3
        ;   Label: LAB_004c9fd3
    JMP 0x004c9ef3                      ; 004c9fdd
        ;   XREF to: 004c9ef3 (UNCONDITIONAL_JUMP)  ; LAB_004c9ef3
    MOV EBX,dword ptr [ESI + 0x29c]     ; 004c9fe2
        ;   Label: LAB_004c9fe2
    MOV EBX,dword ptr [EAX + EBX*0x4 + 0x150fe0] ; 004c9fe8 | g_CDemonSetInstance.enemies[0]
    LEA EAX,[ESP + 0x9c]                ; 004c9fef
    PUSH EAX                            ; 004c9ff6
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 004c9ff7
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 004c9ffc
    LEA EAX,[ESP + 0x9c]                ; 004c9fff
    PUSH EAX                            ; 004ca006
    MOV EDI,dword ptr [EBX + 0x154]     ; 004ca007
    PUSH EBX                            ; 004ca00d
    CALL dword ptr [EDI + 0x34]         ; 004ca00e
    ADD ESP,0x8                         ; 004ca011
    CMP EAX,0x2                         ; 004ca014
    JNZ 0x004ca0f8                      ; 004ca017
        ;   XREF to: 004ca0f8 (CONDITIONAL_JUMP)  ; LAB_004ca0f8
    LEA EAX,[EBX + 0x20]                ; 004ca01d
    LEA EDI,[ESI + 0x20]                ; 004ca020
    FLD float ptr [EAX]                 ; 004ca023
    FSUB float ptr [EDI]                ; 004ca025
    FSTP float ptr [ESP + 0xd0]         ; 004ca027
    FLD float ptr [EAX + 0x4]           ; 004ca02e
    FSUB float ptr [EDI + 0x4]          ; 004ca031
    FSTP float ptr [ESP + 0xd4]         ; 004ca034
    FLD float ptr [EAX + 0x8]           ; 004ca03b
    FSUB float ptr [EDI + 0x8]          ; 004ca03e
    FSTP float ptr [ESP + 0xd8]         ; 004ca041
    FLD float ptr [ESI + 0x158]         ; 004ca048
    FADD float ptr [ESI + 0x160]        ; 004ca04e
    FMUL double ptr [0x0062a11e]        ; 004ca054 | DOUBLE_0062a11e
    FLD float ptr [ESP + 0xd4]          ; 004ca05a
    FXCH                                ; 004ca061
    CALL crt_math.c_round_FUN_005fe6b0  ; 004ca063
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xe8]        ; 004ca068
    FCOMP double ptr [0x0062a116]       ; 004ca06f | DOUBLE_0062a116
    FNSTSW AX                           ; 004ca075
    SAHF                                ; 004ca077
    JBE 0x004ca0f8                      ; 004ca078
        ;   XREF to: 004ca0f8 (CONDITIONAL_JUMP)  ; LAB_004ca0f8
    FLD float ptr [ESP + 0xd4]          ; 004ca07e
    FCOMP float ptr [ESP + 0xb4]        ; 004ca085
    FNSTSW AX                           ; 004ca08c
    SAHF                                ; 004ca08e
    JNC 0x004ca0f8                      ; 004ca08f
        ;   XREF to: 004ca0f8 (CONDITIONAL_JUMP)  ; LAB_004ca0f8
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004ca091
    FLD float ptr [ESP + 0xd0]          ; 004ca098
    MOV dword ptr [ESP + 0xf4],EAX      ; 004ca09f
    FABS                                ; 004ca0a6
    FLD float ptr [ESP + 0xb8]          ; 004ca0a8
    FILD dword ptr [ESP + 0xf4]         ; 004ca0af
    FSTP float ptr [ESP + 0xe4]         ; 004ca0b6
    FADD float ptr [ESP + 0xe4]         ; 004ca0bd
    FSTP double ptr [ESP + 0x8]         ; 004ca0c4
    FCOMP double ptr [ESP + 0x8]        ; 004ca0c8
    FNSTSW AX                           ; 004ca0cc
    SAHF                                ; 004ca0ce
    JNC 0x004ca0f8                      ; 004ca0cf
        ;   XREF to: 004ca0f8 (CONDITIONAL_JUMP)  ; LAB_004ca0f8
    FLD float ptr [ESP + 0xd8]          ; 004ca0d1
    FABS                                ; 004ca0d8
    FCOMP double ptr [ESP + 0x8]        ; 004ca0da
    FNSTSW AX                           ; 004ca0de
    SAHF                                ; 004ca0e0
    JNC 0x004ca0f8                      ; 004ca0e1
        ;   XREF to: 004ca0f8 (CONDITIONAL_JUMP)  ; LAB_004ca0f8
    PUSH 0x0                            ; 004ca0e3
    PUSH 0x40000000                     ; 004ca0e5
    PUSH 0x0                            ; 004ca0ea
    PUSH 0x0                            ; 004ca0ec
    PUSH EDI                            ; 004ca0ee
    PUSH EBX                            ; 004ca0ef
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0 ; 004ca0f0
        ;   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0(CCharacter * this_ptr, CVector3f * position, int fire_type, float spread_rate, ...)
    ADD ESP,0x18                        ; 004ca0f5
    INC dword ptr [ESI + 0x29c]         ; 004ca0f8
        ;   Label: LAB_004ca0f8
    MOV ESP,EBP                         ; 004ca0fe
    POP EBP                             ; 004ca100
    POP EDI                             ; 004ca101
    POP ESI                             ; 004ca102
    POP EBX                             ; 004ca103
    RET                                 ; 004ca104

