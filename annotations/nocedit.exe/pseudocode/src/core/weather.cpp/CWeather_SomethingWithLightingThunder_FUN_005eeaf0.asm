; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0()
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e355e
;
; Referenced Globals:
;   TerminatedCString s_noLightningFlash_00657b84
;   TerminatedCString s_rain_wav_1_00657ba6
;   undefined4 DAT_00657bb4
;   undefined4 DAT_00657bc4
;   undefined4 DAT_00657bcc
;   undefined4 DAT_00657bd4
;   CEventList* g_CEventListPtr = 02d05310
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGame* g_CGamePtr = 02d81a9c
;   CSound* g_CSoundPtr = 03f6af64
;   CEventList g_CEventListInstance
;   CFireEffect g_CFireEffectInstance
;   undefined4 g_CGameInstance.delta_time_float
;   CDemonCamera g_CDemonCameraInstance
;   undefined4 g_CDemonCameraInstance.corona_blend_factor
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_fire.cpp_CFireEffect_FUN_004c9290
;   core_sound.cpp_CSound_playSound_FUN_005b3a20
;   core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0
;   core_weather.cpp_CWeather_SomethingWithThunder_FUN_005ef140
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eeaf0
        ;   Label: core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0
    PUSH ESI                            ; 005eeaf1
    PUSH EDI                            ; 005eeaf2
    PUSH EBP                            ; 005eeaf3
    MOV EBP,ESP                         ; 005eeaf4
    SUB ESP,0x28                        ; 005eeaf6
    AND ESP,0xfffffff8                  ; 005eeaf9
    MOV EAX,[0x0067b654]                ; 005eeafc | CGame * g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x264]     ; 005eeb01 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x1c],EAX      ; 005eeb07
    MOV dword ptr [ESP + 0x8],EAX       ; 005eeb0b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eeb0f
    CMP dword ptr [EAX + 0x24],0x0      ; 005eeb12
    JNZ 0x005eece7                      ; 005eeb16 | LAB_005eece7
        ;   XREF to: 005eece7 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eeb1c
        ;   Label: LAB_005eeb1c
    CMP dword ptr [EAX],0x0             ; 005eeb1f
    JZ 0x005eed92                       ; 005eeb22 | LAB_005eed92
        ;   XREF to: 005eed92 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005eeb28
    XOR EDI,EDI                         ; 005eeb2a
    XOR EBX,EBX                         ; 005eeb2c
    XOR AH,AH                           ; 005eeb2e
        ;   Label: LAB_005eeb2e
    MOV byte ptr [ESI + 0x3f96a78],AH   ; 005eeb30 | undefined1 DAT_03f96a78 | DAT_03f96a79
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eeb36
    FLD float ptr [EAX + 0x4]           ; 005eeb39
    FMUL float ptr [ESP + 0x8]          ; 005eeb3c
    FSUBR float ptr [EBX + 0x3f95dfc]   ; 005eeb40 | DAT_03f95dfc
    FST float ptr [EBX + 0x3f95dfc]     ; 005eeb46 | DAT_03f95dfc
    FCOMP float ptr [EDI + 0x3f96758]   ; 005eeb4c | undefined4 DAT_03f96758 | DAT_03f9675c
    FNSTSW AX                           ; 005eeb52
    SAHF                                ; 005eeb54
    JNC 0x005eebf9                      ; 005eeb55 | LAB_005eebf9
        ;   XREF to: 005eebf9 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x3f95dfc]     ; 005eeb5b | DAT_03f95dfc
    FADD float ptr [0x00657bd4]         ; 005eeb61 | DAT_00657bd4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eeb67
    FSTP float ptr [EBX + 0x3f95dfc]    ; 005eeb6a | DAT_03f95dfc
    CMP dword ptr [EAX],0x1             ; 005eeb70
    JNZ 0x005eebf9                      ; 005eeb73 | LAB_005eebf9
        ;   XREF to: 005eebf9 (CONDITIONAL_JUMP)
    MOV EDX,0x3f95df8                   ; 005eeb79 | CVector3f[200] DAT_03f95df8
    ADD EDX,EBX                         ; 005eeb7e | CVector3f[200] DAT_03f95df8
    MOV EAX,dword ptr [EDX]             ; 005eeb80 | CVector3f[200] DAT_03f95df8
    MOV dword ptr [ESP + 0x10],EAX      ; 005eeb82
    LEA EAX,[EDX + 0x4]                 ; 005eeb86 | DAT_03f95dfc
    MOV EAX,dword ptr [EAX]             ; 005eeb89 | DAT_03f95dfc
    MOV dword ptr [ESP + 0x14],EAX      ; 005eeb8b
    LEA EAX,[EDX + 0x8]                 ; 005eeb8f | DAT_03f95e00
    MOV EAX,dword ptr [EAX]             ; 005eeb92 | DAT_03f95e00
    MOV dword ptr [ESP + 0x18],EAX      ; 005eeb94
    MOV EAX,dword ptr [EDI + 0x3f96758] ; 005eeb98 | undefined4 DAT_03f96758
    PUSH 0x0                            ; 005eeb9e
    MOV dword ptr [ESP + 0x18],EAX      ; 005eeba0
    LEA EAX,[ESP + 0x14]                ; 005eeba4
    PUSH EAX                            ; 005eeba8
    MOV ECX,dword ptr [0x0067a3d0]      ; 005eeba9 | CFireEffect g_CFireEffectInstance | CFireEffect * g_CFireEffectPtr
    PUSH ECX                            ; 005eebaf | CFireEffect g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c9290 ; 005eebb0 | void core_fire.cpp_CFireEffect_FUN_004c9290(CFireEffect * this_ptr)
        ;   XREF to: 004c9290 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005eebb5
    PUSH 0x0                            ; 005eebb8
    LEA EAX,[ESP + 0x14]                ; 005eebba
    PUSH EAX                            ; 005eebbe
    MOV EAX,[0x0067a3d0]                ; 005eebbf | CFireEffect g_CFireEffectInstance | CFireEffect * g_CFireEffectPtr
    PUSH EAX                            ; 005eebc4 | CFireEffect g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c9290 ; 005eebc5 | void core_fire.cpp_CFireEffect_FUN_004c9290(CFireEffect * this_ptr)
        ;   XREF to: 004c9290 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005eebca
    PUSH 0x0                            ; 005eebcd
    LEA EAX,[ESP + 0x14]                ; 005eebcf
    PUSH EAX                            ; 005eebd3
    MOV EDX,dword ptr [0x0067a3d0]      ; 005eebd4 | CFireEffect g_CFireEffectInstance | CFireEffect * g_CFireEffectPtr
    PUSH EDX                            ; 005eebda | CFireEffect g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c9290 ; 005eebdb | void core_fire.cpp_CFireEffect_FUN_004c9290(CFireEffect * this_ptr)
        ;   XREF to: 004c9290 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005eebe0
    PUSH 0x0                            ; 005eebe3
    LEA EAX,[ESP + 0x14]                ; 005eebe5
    PUSH EAX                            ; 005eebe9
    MOV ECX,dword ptr [0x0067a3d0]      ; 005eebea | CFireEffect g_CFireEffectInstance | CFireEffect * g_CFireEffectPtr
    PUSH ECX                            ; 005eebf0 | CFireEffect g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c9290 ; 005eebf1 | void core_fire.cpp_CFireEffect_FUN_004c9290(CFireEffect * this_ptr)
        ;   XREF to: 004c9290 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005eebf6
    ADD EBX,0xc                         ; 005eebf9
        ;   Label: LAB_005eebf9
    INC ESI                             ; 005eebfc
    ADD EDI,0x4                         ; 005eebfd
    CMP ESI,0xc8                        ; 005eec00
    JL 0x005eeb2e                       ; 005eec06 | LAB_005eeb2e
        ;   XREF to: 005eeb2e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eec0c
    MOV EBX,dword ptr [EAX]             ; 005eec0f
    CMP EBX,0x1                         ; 005eec11
    JNZ 0x005eece0                      ; 005eec14 | LAB_005eece0
        ;   XREF to: 005eece0 (CONDITIONAL_JUMP)
    FLD float ptr [EAX + 0x20]          ; 005eec1a
    FSUB float ptr [ESP + 0x8]          ; 005eec1d
    FST float ptr [EAX + 0x20]          ; 005eec21
    FLDZ                                ; 005eec24
    FCOMPP                              ; 005eec26
    FNSTSW AX                           ; 005eec28
    SAHF                                ; 005eec2a
    JA 0x005eeda8                       ; 005eec2b | LAB_005eeda8
        ;   XREF to: 005eeda8 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eec31
    FLD float ptr [EAX + 0x2c]          ; 005eec34
    FSUB float ptr [ESP + 0x8]          ; 005eec37
    FST float ptr [EAX + 0x2c]          ; 005eec3b
    FLDZ                                ; 005eec3e
    FCOMPP                              ; 005eec40
    FNSTSW AX                           ; 005eec42
    SAHF                                ; 005eec44
    JBE 0x005eec84                      ; 005eec45 | LAB_005eec84
        ;   XREF to: 005eec84 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eec47
    PUSH dword ptr [EAX + 0x34]         ; 005eec4a
    PUSH 0x3dcccccd                     ; 005eec4d
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005eec52 | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eec84
        ;   Label: LAB_005eec84
    FLD float ptr [EAX + 0x34]          ; 005eec87
    FST double ptr [ESP]                ; 005eec8a
    FCOMP double ptr [0x00657bc4]       ; 005eec8d | DAT_00657bc4
    FNSTSW AX                           ; 005eec93
    SAHF                                ; 005eec95
    JNC 0x005eee7c                      ; 005eec96 | LAB_005eee7c
        ;   XREF to: 005eee7c (CONDITIONAL_JUMP)
    FLD double ptr [ESP]                ; 005eec9c
    FLDLN2                              ; 005eec9f
    FXCH                                ; 005eeca1
    FYL2X                               ; 005eeca3
    FLD float ptr [ESP + 0x8]           ; 005eeca5
    FMUL double ptr [0x00657bcc]        ; 005eeca9 | DAT_00657bcc
    FADDP                               ; 005eecaf
    FLD1                                ; 005eecb1
    FLDL2E                              ; 005eecb3
    FMUL ST2                            ; 005eecb5
    FST ST2                             ; 005eecb7
    FPREM                               ; 005eecb9
    F2XM1                               ; 005eecbb
    FADDP                               ; 005eecbd
    FSCALE                              ; 005eecbf
    FSTP ST1                            ; 005eecc1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eecc3
    FSTP float ptr [EAX + 0x34]         ; 005eecc6
    MOV ECX,dword ptr [0x03f96b40]      ; 005eecc9 | undefined4 DAT_03f96b40
        ;   Label: LAB_005eecc9
    PUSH ECX                            ; 005eeccf
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005eecd0 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005eecd5
    TEST EAX,EAX                        ; 005eecd8
    JZ 0x005eee8b                       ; 005eecda | LAB_005eee8b
        ;   XREF to: 005eee8b (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 005eece0
        ;   Label: LAB_005eece0
    POP EBP                             ; 005eece2
    POP EDI                             ; 005eece3
    POP ESI                             ; 005eece4
    POP EBX                             ; 005eece5
    RET                                 ; 005eece6
    FLD float ptr [EAX + 0x28]          ; 005eece7
        ;   Label: LAB_005eece7
    FSUB float ptr [ESP + 0x1c]         ; 005eecea
    FST float ptr [EAX + 0x28]          ; 005eecee
    FLDZ                                ; 005eecf1
    FCOMPP                              ; 005eecf3
    FNSTSW AX                           ; 005eecf5
    SAHF                                ; 005eecf7
    JA 0x005eed69                       ; 005eecf8 | LAB_005eed69
        ;   XREF to: 005eed69 (CONDITIONAL_JUMP)
    PUSH 0x657b84                       ; 005eecfa | = "noLightningFlash" | s_noLightningFlash_00657b84 = noLightningFlash
    MOV ECX,dword ptr [0x006793d0]      ; 005eecff | CEventList * g_CEventListPtr
    PUSH ECX                            ; 005eed05 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005eed06 | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005eed0b
    TEST EAX,EAX                        ; 005eed0e
    JNZ 0x005eed69                      ; 005eed10 | LAB_005eed69
        ;   XREF to: 005eed69 (CONDITIONAL_JUMP)
    MOV EAX,[0x03276acc]                ; 005eed12 | g_CDemonCameraInstance.corona_blend_factor
    MOV dword ptr [ESP + 0x24],EAX      ; 005eed17
    FILD dword ptr [ESP + 0x24]         ; 005eed1b
    FMUL double ptr [0x00657bb4]        ; 005eed1f | DAT_00657bb4
    FSUB float ptr [ESP + 0x1c]         ; 005eed25
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eed29
    FST float ptr [ESP + 0x20]          ; 005eed2c
    FCOMP float ptr [EAX + 0x30]        ; 005eed30
    FNSTSW AX                           ; 005eed33
    SAHF                                ; 005eed35
    JNC 0x005eed53                      ; 005eed36 | LAB_005eed53
        ;   XREF to: 005eed53 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eed38
    MOV EAX,dword ptr [EAX + 0x30]      ; 005eed3b
    MOV dword ptr [ESP + 0x20],EAX      ; 005eed3e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eed42
    MOV dword ptr [EAX + 0x24],0x0      ; 005eed45
    MOV dword ptr [EAX + 0x28],0x0      ; 005eed4c
    PUSH dword ptr [ESP + 0x20]         ; 005eed53
        ;   Label: LAB_005eed53
    PUSH 0x32758e4                      ; 005eed57 | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0 ; 005eed5c | void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera * this_ptr, float intensity)
        ;   XREF to: 004528e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005eed61
    JMP 0x005eeb1c                      ; 005eed64 | LAB_005eeb1c
        ;   XREF to: 005eeb1c (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eed69
        ;   Label: LAB_005eed69
    PUSH dword ptr [EAX + 0x30]         ; 005eed6c
    PUSH 0x32758e4                      ; 005eed6f | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0 ; 005eed74 | void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera * this_ptr, float intensity)
        ;   XREF to: 004528e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005eed79
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eed7c
    MOV dword ptr [EAX + 0x24],0x0      ; 005eed7f
    MOV dword ptr [EAX + 0x28],0x0      ; 005eed86
    JMP 0x005eeb1c                      ; 005eed8d | LAB_005eeb1c
        ;   XREF to: 005eeb1c (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x03f96b40]      ; 005eed92 | undefined4 DAT_03f96b40
        ;   Label: LAB_005eed92
    PUSH ESI                            ; 005eed98
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005eed99 | int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005eed9e
    MOV ESP,EBP                         ; 005eeda1
    POP EBP                             ; 005eeda3
    POP EDI                             ; 005eeda4
    POP ESI                             ; 005eeda5
    POP EBX                             ; 005eeda6
    RET                                 ; 005eeda7
    PUSH 0x3ecccccd                     ; 005eeda8
        ;   Label: LAB_005eeda8
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005eedad | int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005eedb2
    TEST EAX,EAX                        ; 005eedb5
    JZ 0x005eedd0                       ; 005eedb7 | LAB_005eedd0
        ;   XREF to: 005eedd0 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005eedb9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005eedba
    PUSH 0x3dcccccd                     ; 005eedbd
    PUSH EDX                            ; 005eedc2
    CALL core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0 ; 005eedc3 | undefined core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0()
        ;   XREF to: 005eeeb0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005eedc8
    JMP 0x005eec84                      ; 005eedcb | LAB_005eec84
        ;   XREF to: 005eec84 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eedd0
        ;   Label: LAB_005eedd0
    PUSH EAX                            ; 005eedd3
    CALL core_weather.cpp_CWeather_SomethingWithThunder_FUN_005ef140 ; 005eedd4 | undefined core_weather.cpp_CWeather_SomethingWithThunder_FUN_005ef140()
        ;   XREF to: 005ef140 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005eedd9
    JMP 0x005eec84                      ; 005eeddc | LAB_005eec84
        ;   XREF to: 005eec84 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eee7c
        ;   Label: LAB_005eee7c
    MOV dword ptr [EAX + 0x34],0x41700000 ; 005eee7f
    JMP 0x005eecc9                      ; 005eee86 | LAB_005eecc9
        ;   XREF to: 005eecc9 (UNCONDITIONAL_JUMP)
    PUSH 0x657ba6                       ; 005eee8b | = "rain.wav @ .1" | s_rain_wav_1_00657ba6 = rain.wav @ .1
        ;   Label: LAB_005eee8b
    MOV EBX,dword ptr [EBP + 0x14]      ; 005eee90
    PUSH EBX                            ; 005eee93
    MOV ESI,dword ptr [0x00681ef8]      ; 005eee94 | CSound * g_CSoundPtr
    PUSH ESI                            ; 005eee9a | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 005eee9b | void core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005eeea0
    MOV [0x03f96b40],EAX                ; 005eeea3 | undefined4 DAT_03f96b40
    MOV ESP,EBP                         ; 005eeea8
    POP EBP                             ; 005eeeaa
    POP EDI                             ; 005eeeab
    POP ESI                             ; 005eeeac
    POP EBX                             ; 005eeead
    RET                                 ; 005eeeae

