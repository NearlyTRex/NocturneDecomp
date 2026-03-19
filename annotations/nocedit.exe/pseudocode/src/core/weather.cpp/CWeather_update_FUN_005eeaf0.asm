; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_update_FUN_005eeaf0(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x2c]:4  local_2c
; CVector3f        Stack[-0x28]:12  local_28
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e355e
;
; Referenced Globals:
;   TerminatedCString s_noLightningFlash_00657b84
;   TerminatedCString s_rain_wav_1_00657ba6
;   double DOUBLE_00657bb4 = 0.0000152590218966964
;   double DOUBLE_00657bc4 = 15
;   double DOUBLE_00657bcc = 0.100000000000000
;   float FLOAT_00657bd4 = 100
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
;   core_fire.cpp_CFireEffect_createRainDrop_FUN_004c9290
;   core_sound.cpp_CSound_playSound_FUN_005b3a20
;   core_weather.cpp_CWeather_createLightningStrike_FUN_005eeeb0
;   core_weather.cpp_CWeather_createThunder_FUN_005ef140
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eeaf0
        ;   Label: core_weather.cpp_CWeather_update_FUN_005eeaf0
    PUSH ESI                            ; 005eeaf1
    PUSH EDI                            ; 005eeaf2
    PUSH EBP                            ; 005eeaf3
    MOV EBP,ESP                         ; 005eeaf4
    SUB ESP,0x28                        ; 005eeaf6
    AND ESP,0xfffffff8                  ; 005eeaf9
    MOV EAX,[0x0067b654]                ; 005eeafc | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x264]     ; 005eeb01 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x1c],EAX      ; 005eeb07
    MOV dword ptr [ESP + 0x8],EAX       ; 005eeb0b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eeb0f
    CMP dword ptr [EAX + 0x24],0x0      ; 005eeb12
    JNZ 0x005eece7                      ; 005eeb16
        ;   XREF to: 005eece7 (CONDITIONAL_JUMP)  ; LAB_005eece7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eeb1c
        ;   Label: LAB_005eeb1c
    CMP dword ptr [EAX],0x0             ; 005eeb1f
    JZ 0x005eed92                       ; 005eeb22
        ;   XREF to: 005eed92 (CONDITIONAL_JUMP)  ; LAB_005eed92
    XOR ESI,ESI                         ; 005eeb28
    XOR EDI,EDI                         ; 005eeb2a
    XOR EBX,EBX                         ; 005eeb2c
    XOR AH,AH                           ; 005eeb2e
        ;   Label: LAB_005eeb2e
    MOV byte ptr [ESI + 0x3f96a78],AH   ; 005eeb30 | g_WeatherParticleHitGround | g_WeatherParticleHitGround+1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eeb36
    FLD float ptr [EAX + 0x4]           ; 005eeb39
    FMUL float ptr [ESP + 0x8]          ; 005eeb3c
    FSUBR float ptr [EBX + 0x3f95dfc]   ; 005eeb40 | g_WeatherParticlePositions[0].y | g_WeatherParticlePositions[1].y
    FST float ptr [EBX + 0x3f95dfc]     ; 005eeb46 | g_WeatherParticlePositions[0].y | g_WeatherParticlePositions[1].y
    FCOMP float ptr [EDI + 0x3f96758]   ; 005eeb4c | g_WeatherParticleGroundHeights | g_WeatherParticleGroundHeights[1]
    FNSTSW AX                           ; 005eeb52
    SAHF                                ; 005eeb54
    JNC 0x005eebf9                      ; 005eeb55
        ;   XREF to: 005eebf9 (CONDITIONAL_JUMP)  ; LAB_005eebf9
    FLD float ptr [EBX + 0x3f95dfc]     ; 005eeb5b | g_WeatherParticlePositions[0].y | g_WeatherParticlePositions[1].y
    FADD float ptr [0x00657bd4]         ; 005eeb61 | FLOAT_00657bd4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eeb67
    FSTP float ptr [EBX + 0x3f95dfc]    ; 005eeb6a | g_WeatherParticlePositions[0].y | g_WeatherParticlePositions[1].y
    CMP dword ptr [EAX],0x1             ; 005eeb70
    JNZ 0x005eebf9                      ; 005eeb73
        ;   XREF to: 005eebf9 (CONDITIONAL_JUMP)  ; LAB_005eebf9
    MOV EDX,0x3f95df8                   ; 005eeb79 | g_WeatherParticlePositions
    ADD EDX,EBX                         ; 005eeb7e | g_WeatherParticlePositions
    MOV EAX,dword ptr [EDX]             ; 005eeb80 | g_WeatherParticlePositions
    MOV dword ptr [ESP + 0x10],EAX      ; 005eeb82
    LEA EAX,[EDX + 0x4]                 ; 005eeb86 | g_WeatherParticlePositions[0].y
    MOV EAX,dword ptr [EAX]             ; 005eeb89 | g_WeatherParticlePositions[0].y
    MOV dword ptr [ESP + 0x14],EAX      ; 005eeb8b
    LEA EAX,[EDX + 0x8]                 ; 005eeb8f | g_WeatherParticlePositions[0].z
    MOV EAX,dword ptr [EAX]             ; 005eeb92 | g_WeatherParticlePositions[0].z
    MOV dword ptr [ESP + 0x18],EAX      ; 005eeb94
    MOV EAX,dword ptr [EDI + 0x3f96758] ; 005eeb98 | g_WeatherParticleGroundHeights
    PUSH 0x0                            ; 005eeb9e
    MOV dword ptr [ESP + 0x18],EAX      ; 005eeba0
    LEA EAX,[ESP + 0x14]                ; 005eeba4
    PUSH EAX                            ; 005eeba8
    MOV ECX,dword ptr [0x0067a3d0]      ; 005eeba9 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH ECX                            ; 005eebaf | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createRainDrop_FUN_004c9290 ; 005eebb0
        ;   XREF to: 004c9290 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRainDrop_FUN_004c9290(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 005eebb5
    PUSH 0x0                            ; 005eebb8
    LEA EAX,[ESP + 0x14]                ; 005eebba
    PUSH EAX                            ; 005eebbe
    MOV EAX,[0x0067a3d0]                ; 005eebbf | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EAX                            ; 005eebc4 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createRainDrop_FUN_004c9290 ; 005eebc5
        ;   XREF to: 004c9290 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRainDrop_FUN_004c9290(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 005eebca
    PUSH 0x0                            ; 005eebcd
    LEA EAX,[ESP + 0x14]                ; 005eebcf
    PUSH EAX                            ; 005eebd3
    MOV EDX,dword ptr [0x0067a3d0]      ; 005eebd4 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EDX                            ; 005eebda | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createRainDrop_FUN_004c9290 ; 005eebdb
        ;   XREF to: 004c9290 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRainDrop_FUN_004c9290(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 005eebe0
    PUSH 0x0                            ; 005eebe3
    LEA EAX,[ESP + 0x14]                ; 005eebe5
    PUSH EAX                            ; 005eebe9
    MOV ECX,dword ptr [0x0067a3d0]      ; 005eebea | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH ECX                            ; 005eebf0 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createRainDrop_FUN_004c9290 ; 005eebf1
        ;   XREF to: 004c9290 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRainDrop_FUN_004c9290(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 005eebf6
    ADD EBX,0xc                         ; 005eebf9
        ;   Label: LAB_005eebf9
    INC ESI                             ; 005eebfc
    ADD EDI,0x4                         ; 005eebfd
    CMP ESI,0xc8                        ; 005eec00
    JL 0x005eeb2e                       ; 005eec06
        ;   XREF to: 005eeb2e (CONDITIONAL_JUMP)  ; LAB_005eeb2e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eec0c
    MOV EBX,dword ptr [EAX]             ; 005eec0f
    CMP EBX,0x1                         ; 005eec11
    JNZ 0x005eece0                      ; 005eec14
        ;   XREF to: 005eece0 (CONDITIONAL_JUMP)  ; LAB_005eece0
    FLD float ptr [EAX + 0x20]          ; 005eec1a
    FSUB float ptr [ESP + 0x8]          ; 005eec1d
    FST float ptr [EAX + 0x20]          ; 005eec21
    FLDZ                                ; 005eec24
    FCOMPP                              ; 005eec26
    FNSTSW AX                           ; 005eec28
    SAHF                                ; 005eec2a
    JA 0x005eeda8                       ; 005eec2b
        ;   XREF to: 005eeda8 (CONDITIONAL_JUMP)  ; LAB_005eeda8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eec31
    FLD float ptr [EAX + 0x2c]          ; 005eec34
    FSUB float ptr [ESP + 0x8]          ; 005eec37
    FST float ptr [EAX + 0x2c]          ; 005eec3b
    FLDZ                                ; 005eec3e
    FCOMPP                              ; 005eec40
    FNSTSW AX                           ; 005eec42
    SAHF                                ; 005eec44
    JBE 0x005eec84                      ; 005eec45
        ;   XREF to: 005eec84 (CONDITIONAL_JUMP)  ; LAB_005eec84
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eec47
    PUSH dword ptr [EAX + 0x34]         ; 005eec4a
    PUSH 0x3dcccccd                     ; 005eec4d
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005eec52
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eec84
        ;   Label: LAB_005eec84
    FLD float ptr [EAX + 0x34]          ; 005eec87
    FST double ptr [ESP]                ; 005eec8a
    FCOMP double ptr [0x00657bc4]       ; 005eec8d | DOUBLE_00657bc4
    FNSTSW AX                           ; 005eec93
    SAHF                                ; 005eec95
    JNC 0x005eee7c                      ; 005eec96
        ;   XREF to: 005eee7c (CONDITIONAL_JUMP)  ; LAB_005eee7c
    FLD double ptr [ESP]                ; 005eec9c
    FLDLN2                              ; 005eec9f
    FXCH                                ; 005eeca1
    FYL2X                               ; 005eeca3
    FLD float ptr [ESP + 0x8]           ; 005eeca5
    FMUL double ptr [0x00657bcc]        ; 005eeca9 | DOUBLE_00657bcc
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
    MOV ECX,dword ptr [0x03f96b40]      ; 005eecc9 | UINT_03f96b40
        ;   Label: LAB_005eecc9
    PUSH ECX                            ; 005eeccf
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005eecd0
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005eecd5
    TEST EAX,EAX                        ; 005eecd8
    JZ 0x005eee8b                       ; 005eecda
        ;   XREF to: 005eee8b (CONDITIONAL_JUMP)  ; LAB_005eee8b
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
    JA 0x005eed69                       ; 005eecf8
        ;   XREF to: 005eed69 (CONDITIONAL_JUMP)  ; LAB_005eed69
    PUSH 0x657b84                       ; 005eecfa | = "noLightningFlash"
    MOV ECX,dword ptr [0x006793d0]      ; 005eecff | g_CEventListPtr
    PUSH ECX                            ; 005eed05 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005eed06
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005eed0b
    TEST EAX,EAX                        ; 005eed0e
    JNZ 0x005eed69                      ; 005eed10
        ;   XREF to: 005eed69 (CONDITIONAL_JUMP)  ; LAB_005eed69
    MOV EAX,[0x03276acc]                ; 005eed12 | g_CDemonCameraInstance.corona_blend_factor
    MOV dword ptr [ESP + 0x24],EAX      ; 005eed17
    FILD dword ptr [ESP + 0x24]         ; 005eed1b
    FMUL double ptr [0x00657bb4]        ; 005eed1f | DOUBLE_00657bb4
    FSUB float ptr [ESP + 0x1c]         ; 005eed25
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eed29
    FST float ptr [ESP + 0x20]          ; 005eed2c
    FCOMP float ptr [EAX + 0x30]        ; 005eed30
    FNSTSW AX                           ; 005eed33
    SAHF                                ; 005eed35
    JNC 0x005eed53                      ; 005eed36
        ;   XREF to: 005eed53 (CONDITIONAL_JUMP)  ; LAB_005eed53
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eed38
    MOV EAX,dword ptr [EAX + 0x30]      ; 005eed3b
    MOV dword ptr [ESP + 0x20],EAX      ; 005eed3e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eed42
    MOV dword ptr [EAX + 0x24],0x0      ; 005eed45
    MOV dword ptr [EAX + 0x28],0x0      ; 005eed4c
    PUSH dword ptr [ESP + 0x20]         ; 005eed53
        ;   Label: LAB_005eed53
    PUSH 0x32758e4                      ; 005eed57 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0 ; 005eed5c
        ;   XREF to: 004528e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 005eed61
    JMP 0x005eeb1c                      ; 005eed64
        ;   XREF to: 005eeb1c (UNCONDITIONAL_JUMP)  ; LAB_005eeb1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eed69
        ;   Label: LAB_005eed69
    PUSH dword ptr [EAX + 0x30]         ; 005eed6c
    PUSH 0x32758e4                      ; 005eed6f | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0 ; 005eed74
        ;   XREF to: 004528e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 005eed79
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eed7c
    MOV dword ptr [EAX + 0x24],0x0      ; 005eed7f
    MOV dword ptr [EAX + 0x28],0x0      ; 005eed86
    JMP 0x005eeb1c                      ; 005eed8d
        ;   XREF to: 005eeb1c (UNCONDITIONAL_JUMP)  ; LAB_005eeb1c
    MOV ESI,dword ptr [0x03f96b40]      ; 005eed92 | UINT_03f96b40
        ;   Label: LAB_005eed92
    PUSH ESI                            ; 005eed98
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005eed99
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005eed9e
    MOV ESP,EBP                         ; 005eeda1
    POP EBP                             ; 005eeda3
    POP EDI                             ; 005eeda4
    POP ESI                             ; 005eeda5
    POP EBX                             ; 005eeda6
    RET                                 ; 005eeda7
    PUSH 0x3ecccccd                     ; 005eeda8
        ;   Label: LAB_005eeda8
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005eedad
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005eedb2
    TEST EAX,EAX                        ; 005eedb5
    JZ 0x005eedd0                       ; 005eedb7
        ;   XREF to: 005eedd0 (CONDITIONAL_JUMP)  ; LAB_005eedd0
    PUSH EBX                            ; 005eedb9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005eedba
    PUSH 0x3dcccccd                     ; 005eedbd
    PUSH EDX                            ; 005eedc2
    CALL core_weather.cpp_CWeather_createLightningStrike_FUN_005eeeb0 ; 005eedc3
        ;   XREF to: 005eeeb0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_createLightningStrike_FUN_005eeeb0(CWeather * this_ptr, float flash_timer, int play_sound)
    ADD ESP,0xc                         ; 005eedc8
    JMP 0x005eec84                      ; 005eedcb
        ;   XREF to: 005eec84 (UNCONDITIONAL_JUMP)  ; LAB_005eec84
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eedd0
        ;   Label: LAB_005eedd0
    PUSH EAX                            ; 005eedd3
    CALL core_weather.cpp_CWeather_createThunder_FUN_005ef140 ; 005eedd4
        ;   XREF to: 005ef140 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_createThunder_FUN_005ef140(CWeather * this_ptr)
    ADD ESP,0x4                         ; 005eedd9
    JMP 0x005eec84                      ; 005eeddc
        ;   XREF to: 005eec84 (UNCONDITIONAL_JUMP)  ; LAB_005eec84
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eee7c
        ;   Label: LAB_005eee7c
    MOV dword ptr [EAX + 0x34],0x41700000 ; 005eee7f
    JMP 0x005eecc9                      ; 005eee86
        ;   XREF to: 005eecc9 (UNCONDITIONAL_JUMP)  ; LAB_005eecc9
    PUSH 0x657ba6                       ; 005eee8b | = "rain.wav @ .1"
        ;   Label: LAB_005eee8b
    MOV EBX,dword ptr [EBP + 0x14]      ; 005eee90
    PUSH EBX                            ; 005eee93
    MOV ESI,dword ptr [0x00681ef8]      ; 005eee94 | g_CSoundPtr
    PUSH ESI                            ; 005eee9a | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 005eee9b
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 005eeea0
    MOV [0x03f96b40],EAX                ; 005eeea3 | UINT_03f96b40
    MOV ESP,EBP                         ; 005eeea8
    POP EBP                             ; 005eeeaa
    POP EDI                             ; 005eeeab
    POP ESI                             ; 005eeeac
    POP EBX                             ; 005eeead
    RET                                 ; 005eeeae

