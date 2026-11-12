; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lightgun_cpp_CLightGun_process_FUN_004e38d0(CLightGun *this_ptr,float delta_time)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005f95d0
;   undefined4 DAT_005f95d8
;   undefined4 DAT_005f95dc
;   undefined4 DAT_005f95e0
;   undefined4 DAT_005f95e4
;   CFilterCache* g_CFilterCachePtr = 015111a8
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061e8f4
;   undefined4 g_CDemonLightInstance.antialiasing_enabled
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_00447660
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600
;   core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004dcfb0
;   core_lightgun.cpp_FUN_004e2bf0
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630
;   core_weapon.cpp_CWeapon_process_FUN_00589c80
;   core_weather.cpp_CWeather_createLightningStrike_FUN_0058aa30
;   sound_sndmain.cpp_FUN_005506b0
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_FUN_00550f20
;   sound_sndmain.cpp_FUN_00550f50
;   sound_sndmain.cpp_killSfx_FUN_00551050
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_00550290
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e38d0
        ;   Label: core_lightgun.cpp_CLightGun_process_FUN_004e38d0
    PUSH EDI                            ; 004e38d1
    PUSH EBP                            ; 004e38d2
    SUB ESP,0xc                         ; 004e38d3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e38d6
    PUSH dword ptr [ESP + 0x20]         ; 004e38da
    PUSH EBX                            ; 004e38de
    CALL core_weapon.cpp_CWeapon_process_FUN_00589c80 ; 004e38df
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_00589c80(CWeapon * this_ptr, float delta_time)
    MOV EAX,[0x01cedef4]                ; 004e38e4 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004e38e9
    ADD ESP,0x8                         ; 004e38f0
    ADD EAX,0x2437c                     ; 004e38f3
    PUSH dword ptr [0x005f95d0]         ; 004e38f8 | DAT_005f95d0
    PUSH EAX                            ; 004e38fe
    CALL core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004dcfb0 ; 004e38ff
        ;   XREF to: 004dcfb0 (UNCONDITIONAL_CALL)  ; float core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004dcfb0(CInventory * this_ptr, float max_charge)
    MOV dword ptr [ESP + 0x10],EAX      ; 004e3904
    FLD float ptr [ESP + 0x10]          ; 004e3908
    FDIVR float ptr [0x005f95d0]        ; 004e390c | DAT_005f95d0
    ADD ESP,0x8                         ; 004e3912
    FMUL float ptr [ESP + 0x20]         ; 004e3915
    FADD float ptr [EBX + 0x6dc]        ; 004e3919
    FST float ptr [EBX + 0x6dc]         ; 004e391f
    FCOMP float ptr [0x005f95d0]        ; 004e3925 | DAT_005f95d0
    FNSTSW AX                           ; 004e392b
    SAHF                                ; 004e392d
    JA 0x004e3a4e                       ; 004e392e
        ;   XREF to: 004e3a4e (CONDITIONAL_JUMP)  ; LAB_004e3a4e
    FLD float ptr [EBX + 0x6dc]         ; 004e3934
        ;   Label: LAB_004e3934
    FDIV float ptr [0x005f95d0]         ; 004e393a | DAT_005f95d0
    MOV EDX,dword ptr [EBX + 0x430]     ; 004e3940
    FSTP float ptr [EBX + 0x6e0]        ; 004e3946
    CMP EDX,0x2                         ; 004e394c
    JNZ 0x004e3a5e                      ; 004e394f
        ;   XREF to: 004e3a5e (CONDITIONAL_JUMP)  ; LAB_004e3a5e
    PUSH ESI                            ; 004e3955
    FLD float ptr [0x005f95d8]          ; 004e3956 | DAT_005f95d8
    FLD float ptr [0x005f95dc]          ; 004e395c | DAT_005f95dc
    FSUB ST0,ST1                        ; 004e3962
    FMUL float ptr [EBX + 0x6e0]        ; 004e3964
    FLD float ptr [0x005f95e0]          ; 004e396a | DAT_005f95e0
    FLD float ptr [0x005f95e4]          ; 004e3970 | DAT_005f95e4
    FSUB ST0,ST1                        ; 004e3976
    MOV ECX,dword ptr [EBX + 0x6d8]     ; 004e3978
    FMUL float ptr [EBX + 0x6e0]        ; 004e397e
    PUSH ECX                            ; 004e3984
    FXCH ST2                            ; 004e3985
    FADDP ST3,ST0                       ; 004e3987
    FADDP                               ; 004e3989
    FXCH                                ; 004e398b
    FSTP float ptr [ESP + 0xc]          ; 004e398d
    FSTP float ptr [ESP + 0x8]          ; 004e3991
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004e3995
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004e399a
    TEST EAX,EAX                        ; 004e399d
    JZ 0x004e3a7e                       ; 004e399f
        ;   XREF to: 004e3a7e (CONDITIONAL_JUMP)  ; LAB_004e3a7e
    MOV ESI,dword ptr [EBX + 0x6d8]     ; 004e39a5
    PUSH dword ptr [ESP + 0x8]          ; 004e39ab
    PUSH ESI                            ; 004e39af
    CALL sound_sndmain.cpp_FUN_00550f20 ; 004e39b0
        ;   XREF to: 00550f20 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00550f20()
    ADD ESP,0x8                         ; 004e39b5
    MOV EDI,dword ptr [EBX + 0x6d8]     ; 004e39b8
    PUSH dword ptr [ESP + 0x4]          ; 004e39be
    PUSH EDI                            ; 004e39c2
    CALL sound_sndmain.cpp_FUN_00550f50 ; 004e39c3
        ;   XREF to: 00550f50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550f50(uint sfx_handle, float base_frequency)
    ADD ESP,0x8                         ; 004e39c8
    PUSH EBX                            ; 004e39cb
        ;   Label: LAB_004e39cb
    CALL core_lightgun.cpp_FUN_004e2bf0 ; 004e39cc
        ;   XREF to: 004e2bf0 (UNCONDITIONAL_CALL)  ; undefined core_lightgun.cpp_FUN_004e2bf0()
    MOV EBP,dword ptr [EBX + 0x6d4]     ; 004e39d1
    ADD ESP,0x4                         ; 004e39d7
    TEST EBP,EBP                        ; 004e39da
    JZ 0x004e3a28                       ; 004e39dc
        ;   XREF to: 004e3a28 (CONDITIONAL_JUMP)  ; LAB_004e3a28
    PUSH 0x0                            ; 004e39de
    PUSH 0x5dc0c9                       ; 004e39e0
    MOV EDX,dword ptr [0x0060a0b4]      ; 004e39e5 | g_CFilterCachePtr
    MOV EAX,0x1                         ; 004e39eb
    PUSH EDX                            ; 004e39f0
    MOV [0x01cb5620],EAX                ; 004e39f1 | g_CDemonLightInstance.antialiasing_enabled
    CALL core_dfilter.cpp_CFilterCache_getFilter_FUN_00447660 ; 004e39f6
        ;   XREF to: 00447660 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CFilterCache_getFilter_FUN_00447660(CFilterCache * this_ptr, char * filter_name, int blend_filter)
    ADD ESP,0xc                         ; 004e39fb
    PUSH 0x0                            ; 004e39fe
    PUSH 0x0                            ; 004e3a00
    PUSH 0x0                            ; 004e3a02
    PUSH EAX                            ; 004e3a04
    PUSH 0x1cb3950                      ; 004e3a05
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600 ; 004e3a0a
        ;   XREF to: 0044b600 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 004e3a0f
    PUSH 0x0                            ; 004e3a12
    MOV ECX,dword ptr [0x0061e8f4]      ; 004e3a14 | DAT_0061e8f4
    PUSH 0x3dcccccd                     ; 004e3a1a
    PUSH ECX                            ; 004e3a1f
    CALL core_weather.cpp_CWeather_createLightningStrike_FUN_0058aa30 ; 004e3a20
        ;   XREF to: 0058aa30 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_createLightningStrike_FUN_0058aa30(CWeather * this_ptr, float flash_timer, int play_sound)
    ADD ESP,0xc                         ; 004e3a25
    PUSH 0x1cb3950                      ; 004e3a28
        ;   Label: LAB_004e3a28
    MOV ESI,dword ptr [0x0061b5a8]      ; 004e3a2d | g_CDemonSetPtr
    PUSH ESI                            ; 004e3a33
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630 ; 004e3a34
        ;   XREF to: 00530630 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 004e3a39
    MOV dword ptr [EBX + 0x6d4],0x0     ; 004e3a3c
    POP ESI                             ; 004e3a46
    ADD ESP,0xc                         ; 004e3a47
    POP EBP                             ; 004e3a4a
    POP EDI                             ; 004e3a4b
    POP EBX                             ; 004e3a4c
    RET                                 ; 004e3a4d
    MOV EAX,[0x005f95d0]                ; 004e3a4e | DAT_005f95d0
        ;   Label: LAB_004e3a4e
    MOV dword ptr [EBX + 0x6dc],EAX     ; 004e3a53
    JMP 0x004e3934                      ; 004e3a59
        ;   XREF to: 004e3934 (UNCONDITIONAL_JUMP)  ; LAB_004e3934
    MOV EDI,dword ptr [EBX + 0x6d8]     ; 004e3a5e
        ;   Label: LAB_004e3a5e
    PUSH EDI                            ; 004e3a64
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004e3a65
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004e3a6a
    MOV dword ptr [EBX + 0x6d4],0x0     ; 004e3a6d
    ADD ESP,0xc                         ; 004e3a77
    POP EBP                             ; 004e3a7a
    POP EDI                             ; 004e3a7b
    POP EBX                             ; 004e3a7c
    RET                                 ; 004e3a7d
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 004e3a7e
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
        ;   Label: LAB_004e3a7e
    LEA EAX,[EBX + 0x20]                ; 004e3a83
    PUSH EAX                            ; 004e3a86
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170 ; 004e3a87
        ;   XREF to: 00550170 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 004e3a8c
    PUSH dword ptr [ESP + 0x8]          ; 004e3a8f
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_00550270 ; 004e3a93
        ;   XREF to: 00550270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_00550270(float volume)
    ADD ESP,0x4                         ; 004e3a98
    PUSH dword ptr [ESP + 0x4]          ; 004e3a9b
    CALL sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_00550290 ; 004e3a9f
        ;   XREF to: 00550290 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_00550290(float base_frequency)
    ADD ESP,0x4                         ; 004e3aa4
    PUSH 0x5dc0ba                       ; 004e3aa7
    CALL sound_sndmain.cpp_FUN_005506b0 ; 004e3aac
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005506b0()
    ADD ESP,0x4                         ; 004e3ab1
    MOV dword ptr [EBX + 0x6d8],EAX     ; 004e3ab4
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 004e3aba
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    JMP 0x004e39cb                      ; 004e3abf
        ;   XREF to: 004e39cb (UNCONDITIONAL_JUMP)  ; LAB_004e39cb

