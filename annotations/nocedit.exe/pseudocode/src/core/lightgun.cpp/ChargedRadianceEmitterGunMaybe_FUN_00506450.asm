; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450()
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_cre_charge_wav_006314fa
;   TerminatedCString s_lgunmask_raw_00631509
;   double DOUBLE_00631516 = 100
;   undefined4 DAT_00660a40
;   undefined4 DAT_00660a48
;   undefined4 DAT_00660a4c
;   undefined4 DAT_00660a50
;   undefined4 DAT_00660a54
;   CFilterCache* g_CFilterCachePtr = 020a4c08
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CWeather* g_CWeatherPtr = 03f95dc0
;   CFilterCache g_CFilterCacheInstance
;   CDemonLight g_CDemonLightInstance
;   undefined4 g_CDemonLightInstance.antialiasing_enabled
;   CHero*[4] g_HeroActors
;   ... and 3 more
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
;   core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
;   core_lightgun.cpp_FUN_00505ac0
;   core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
;   core_weapon.cpp_CWeapon_process_FUN_005ee110
;   core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0
;   crt_math.c_round_FUN_005fe6b0
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
;   sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506450
        ;   Label: core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450
    PUSH EBP                            ; 00506451
    SUB ESP,0xc                         ; 00506452
    MOV EBX,dword ptr [ESP + 0x18]      ; 00506455
    PUSH dword ptr [ESP + 0x1c]         ; 00506459
    PUSH EBX                            ; 0050645d
    CALL core_weapon.cpp_CWeapon_process_FUN_005ee110 ; 0050645e | void core_weapon.cpp_CWeapon_process_FUN_005ee110(CWeapon * this_ptr)
        ;   XREF to: 005ee110 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02db87d0]                ; 00506463 | int g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00506468 | CHero *[4] g_HeroActors
    ADD ESP,0x8                         ; 0050646f
    ADD EAX,0x1f738                     ; 00506472
    PUSH dword ptr [0x00660a40]         ; 00506477 | undefined4 DAT_00660a40
    PUSH EAX                            ; 0050647d
    CALL core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0 ; 0050647e | float core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0(CInventory * inventory_ptr, float max_charge)
        ;   XREF to: 004ffda0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x10],EAX      ; 00506483
    FLD float ptr [ESP + 0x10]          ; 00506487
    FDIVR float ptr [0x00660a40]        ; 0050648b | undefined4 DAT_00660a40
    ADD ESP,0x8                         ; 00506491
    FMUL float ptr [ESP + 0x1c]         ; 00506494
    FADD float ptr [EBX + 0x580]        ; 00506498
    FST float ptr [EBX + 0x580]         ; 0050649e
    FCOMP float ptr [0x00660a40]        ; 005064a4 | undefined4 DAT_00660a40
    FNSTSW AX                           ; 005064aa
    SAHF                                ; 005064ac
    JA 0x005065e4                       ; 005064ad | LAB_005065e4
        ;   XREF to: 005065e4 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x580]         ; 005064b3
        ;   Label: LAB_005064b3
    FDIV float ptr [0x00660a40]         ; 005064b9 | undefined4 DAT_00660a40
    FST float ptr [EBX + 0x584]         ; 005064bf
    FMUL double ptr [0x00631516]        ; 005064c5 | double DOUBLE_00631516
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 005064cb
    CALL crt_math.c_round_FUN_005fe6b0  ; 005064d1 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBX + 0x568]       ; 005064d6
    CMP EDX,0x2                         ; 005064dc
    JNZ 0x005065f4                      ; 005064df | LAB_005065f4
        ;   XREF to: 005065f4 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005064e5
    PUSH ESI                            ; 005064e6
    FLD float ptr [0x00660a48]          ; 005064e7 | undefined4 DAT_00660a48
    FLD float ptr [0x00660a4c]          ; 005064ed | DAT_00660a4c
    FSUB ST0,ST1                        ; 005064f3
    FMUL float ptr [EBX + 0x584]        ; 005064f5
    FLD float ptr [0x00660a50]          ; 005064fb | DAT_00660a50
    FLD float ptr [0x00660a54]          ; 00506501 | DAT_00660a54
    FSUB ST0,ST1                        ; 00506507
    MOV ECX,dword ptr [EBX + 0x57c]     ; 00506509
    FMUL float ptr [EBX + 0x584]        ; 0050650f
    PUSH ECX                            ; 00506515
    FXCH ST2                            ; 00506516
    FADDP ST3,ST0                       ; 00506518
    FADDP                               ; 0050651a
    FXCH                                ; 0050651c
    FSTP float ptr [ESP + 0xc]          ; 0050651e
    FSTP float ptr [ESP + 0x10]         ; 00506522
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00506526 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050652b
    TEST EAX,EAX                        ; 0050652e
    JZ 0x00506613                       ; 00506530 | LAB_00506613
        ;   XREF to: 00506613 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBX + 0x57c]     ; 00506536
    PUSH dword ptr [ESP + 0x8]          ; 0050653c
    PUSH ESI                            ; 00506540
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 ; 00506541 | int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)
        ;   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00506546
    MOV EDI,dword ptr [EBX + 0x57c]     ; 00506549
    PUSH dword ptr [ESP + 0xc]          ; 0050654f
    PUSH EDI                            ; 00506553
    CALL sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40 ; 00506554 | int sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40(uint sfx_handle, float base_frequency)
        ;   XREF to: 005a9b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00506559
    PUSH EBX                            ; 0050655c
        ;   Label: LAB_0050655c
    CALL core_lightgun.cpp_FUN_00505ac0 ; 0050655d | undefined core_lightgun.cpp_FUN_00505ac0()
        ;   XREF to: 00505ac0 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [EBX + 0x578]     ; 00506562
    ADD ESP,0x4                         ; 00506568
    TEST EBP,EBP                        ; 0050656b
    JZ 0x00506659                       ; 0050656d | LAB_00506659
        ;   XREF to: 00506659 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00506573
    PUSH 0x631509                       ; 00506575 | = "lgunmask.raw" | s_lgunmask_raw_00631509 = lgunmask.raw
    MOV ECX,dword ptr [0x0066efcc]      ; 0050657a | CFilterCache g_CFilterCacheInstance | CFilterCache * g_CFilterCachePtr
    MOV EDX,0x1                         ; 00506580
    PUSH ECX                            ; 00506585 | CFilterCache g_CFilterCacheInstance
    MOV dword ptr [0x02d807c0],EDX      ; 00506586 | g_CDemonLightInstance.antialiasing_enabled
    CALL core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060 ; 0050658c | CDemonFilter * core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060(CFilterCache * this_ptr, char * filter_name, char * filter_filename, int enable_init)
        ;   XREF to: 00470060 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00506591
    PUSH 0x0                            ; 00506594
    PUSH 0x0                            ; 00506596
    PUSH 0x0                            ; 00506598
    PUSH EAX                            ; 0050659a
    PUSH 0x2d7eaf0                      ; 0050659b | CDemonLight g_CDemonLightInstance
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770 ; 005065a0 | void core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
        ;   XREF to: 00474770 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005065a5
    PUSH 0x0                            ; 005065a8
    MOV ESI,dword ptr [0x006848fc]      ; 005065aa | CWeather * g_CWeatherPtr
    PUSH 0x3dcccccd                     ; 005065b0
    PUSH ESI                            ; 005065b5 | CWeather g_CWeatherInstance
    CALL core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0 ; 005065b6 | undefined core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0()
        ;   XREF to: 005eeeb0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005065bb
    PUSH 0x2d7eaf0                      ; 005065be | CDemonLight g_CDemonLightInstance
        ;   Label: LAB_005065be
    MOV EDI,dword ptr [0x006810c8]      ; 005065c3 | CDemonSet * g_CDemonSetPtr
    PUSH EDI                            ; 005065c9 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090 ; 005065ca | void core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(CDemonSet * this_ptr)
        ;   XREF to: 0056d090 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005065cf
    MOV dword ptr [EBX + 0x578],0x0     ; 005065d2
    POP ESI                             ; 005065dc
    POP EDI                             ; 005065dd
    ADD ESP,0xc                         ; 005065de
    POP EBP                             ; 005065e1
    POP EBX                             ; 005065e2
    RET                                 ; 005065e3
    MOV EAX,[0x00660a40]                ; 005065e4 | undefined4 DAT_00660a40
        ;   Label: LAB_005065e4
    MOV dword ptr [EBX + 0x580],EAX     ; 005065e9
    JMP 0x005064b3                      ; 005065ef | LAB_005064b3
        ;   XREF to: 005064b3 (UNCONDITIONAL_JUMP)
    MOV EBP,dword ptr [EBX + 0x57c]     ; 005065f4
        ;   Label: LAB_005065f4
    PUSH EBP                            ; 005065fa
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005065fb | int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506600
    MOV dword ptr [EBX + 0x578],0x0     ; 00506603
    ADD ESP,0xc                         ; 0050660d
    POP EBP                             ; 00506610
    POP EBX                             ; 00506611
    RET                                 ; 00506612
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 00506613 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_00506613
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    LEA EAX,[EBX + 0x20]                ; 00506618
    PUSH EAX                            ; 0050661b
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940 ; 0050661c | void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(CVector3f * position_source_ptr)
        ;   XREF to: 005a8940 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506621
    PUSH dword ptr [ESP + 0x8]          ; 00506624
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 00506628 | void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050662d
    PUSH dword ptr [ESP + 0xc]          ; 00506630
    CALL sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80 ; 00506634 | void sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80(float base_frequency)
        ;   XREF to: 005a8a80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506639
    PUSH 0x6314fa                       ; 0050663c | = "cre-charge.wav" | s_cre_charge_wav_006314fa = cre-charge.wav
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 00506641 | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506646
    MOV dword ptr [EBX + 0x57c],EAX     ; 00506649
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 0050664f | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    JMP 0x0050655c                      ; 00506654 | LAB_0050655c
        ;   XREF to: 0050655c (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d807c0],EBP      ; 00506659 | g_CDemonLightInstance.antialiasing_enabled
        ;   Label: LAB_00506659
    JMP 0x005065be                      ; 0050665f | LAB_005065be
        ;   XREF to: 005065be (UNCONDITIONAL_JUMP)

