; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_process_FUN_005b2fd0(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x140]:4  local_140
; float            Stack[-0x13c]:4  local_13c
; float            Stack[-0x138]:4  local_138
; char[100]        Stack[-0x134]:100  local_134
; char[100]        Stack[-0xd0]:100  local_d0
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; STrainNoise *    Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004dab51
;
; Referenced Globals:
;   void* switchdataD_005b2fbc = 005b3692
;   TerminatedCString s_x_0065270a
;   TerminatedCString s_ext_0065270c
;   TerminatedCString s_int_00652710
;   TerminatedCString s_ext_00652714
;   TerminatedCString s_int_00652718
;   TerminatedCString s_trainext_wav_0065271c
;   TerminatedCString s_railnoiz_wav_00652729
;   TerminatedCString s_rail_s_wav_00652736
;   TerminatedCString s_bump_wav_00652742
;   undefined4 s_bump_wav_00652742+1
;   undefined4 s_mp_wav_00652744
;   undefined4 s_p?.wav_00652745
;   TerminatedCString s_s_g_0065274c
;   TerminatedCString s_wind_ctl_wav_0065277e
;   ... and 53 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
;   core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
;   core_sound.cpp_CSound_killSound_FUN_005b3b90
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
;   core_sound.cpp_updateListeners_FUN_005b1870
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdlib.c_rand_FUN_005feb5c
;   crt_string.c__stricmp_FUN_005fe7f0
;   crt_string.c__strnicmp_FUN_005ff070
;   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
;   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2fd0
        ;   Label: core_sound.cpp_CSound_process_FUN_005b2fd0
    PUSH ESI                            ; 005b2fd1
    PUSH EDI                            ; 005b2fd2
    PUSH EBP                            ; 005b2fd3
    MOV EBP,ESP                         ; 005b2fd4
    SUB ESP,0x130                       ; 005b2fd6
    AND ESP,0xfffffff8                  ; 005b2fdc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005b2fdf
    MOV EAX,[0x0067b654]                ; 005b2fe2 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x264]     ; 005b2fe7 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x104],EAX     ; 005b2fed
    FLD float ptr [ESP + 0x104]         ; 005b2ff4
    FMUL double ptr [0x0065279e]        ; 005b2ffb | DOUBLE_0065279e
    MOV dword ptr [ESP + 0x110],EAX     ; 005b3001
    FSTP float ptr [ESP + 0x120]        ; 005b3008
    CALL core_sound.cpp_updateListeners_FUN_005b1870 ; 005b300f
        ;   XREF to: 005b1870 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_updateListeners_FUN_005b1870()
    FLD float ptr [0x03f6af7c]          ; 005b3014 | CVector3f_03f6af7c
    FLD float ptr [ESP + 0x120]         ; 005b301a
    FCHS                                ; 005b3021
    FXCH                                ; 005b3023
    FSUB float ptr [0x03f6af80]         ; 005b3025 | CVector3f_03f6af7c.y
    FXCH                                ; 005b302b
    FSTP float ptr [ESP + 0x108]        ; 005b302d
    FST float ptr [ESP + 0x11c]         ; 005b3034
    FCOMP float ptr [ESP + 0x108]       ; 005b303b
    FNSTSW AX                           ; 005b3042
    SAHF                                ; 005b3044
    JC 0x005b3517                       ; 005b3045
        ;   XREF to: 005b3517 (CONDITIONAL_JUMP)  ; LAB_005b3517
    FLD float ptr [ESP + 0x11c]         ; 005b304b
        ;   Label: LAB_005b304b
    FCOMP float ptr [ESP + 0x120]       ; 005b3052
    FNSTSW AX                           ; 005b3059
    SAHF                                ; 005b305b
    JBE 0x005b306c                      ; 005b305c
        ;   XREF to: 005b306c (CONDITIONAL_JUMP)  ; LAB_005b306c
    MOV EAX,dword ptr [ESP + 0x120]     ; 005b305e
    MOV dword ptr [ESP + 0x11c],EAX     ; 005b3065
    FLD float ptr [0x03f6af80]          ; 005b306c | CVector3f_03f6af7c.y
        ;   Label: LAB_005b306c
    FADD float ptr [ESP + 0x11c]        ; 005b3072
    FST float ptr [0x03f6af80]          ; 005b3079 | CVector3f_03f6af7c.y
    FCOMP double ptr [0x006527a6]       ; 005b307f | DOUBLE_006527a6
    FNSTSW AX                           ; 005b3085
    SAHF                                ; 005b3087
    JBE 0x005b3541                      ; 005b3088
        ;   XREF to: 005b3541 (CONDITIONAL_JUMP)  ; LAB_005b3541
    MOV ESI,dword ptr [0x03f6af68]      ; 005b308e | g_WindSoundHandle
    PUSH ESI                            ; 005b3094
    PUSH EBX                            ; 005b3095
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 005b3096
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 005b309b
    TEST EAX,EAX                        ; 005b309e
    JZ 0x005b352a                       ; 005b30a0
        ;   XREF to: 005b352a (CONDITIONAL_JUMP)  ; LAB_005b352a
    MOV EDI,dword ptr [0x03f6af68]      ; 005b30a6 | g_WindSoundHandle
        ;   Label: LAB_005b30a6
    PUSH dword ptr [0x03f6af80]         ; 005b30ac | CVector3f_03f6af7c.y
    PUSH EDI                            ; 005b30b2
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 ; 005b30b3
        ;   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)
    ADD ESP,0x8                         ; 005b30b8
    XOR EAX,EAX                         ; 005b30bb
        ;   Label: LAB_005b30bb
    MOV dword ptr [ESP + 0x8],EAX       ; 005b30bd
    MOV EAX,[0x006844f0]                ; 005b30c1 | g_CWaterPtr
    FLD float ptr [EAX + 0xc]           ; 005b30c6 | g_CWaterInstance.visible_area_sqft
    FLDZ                                ; 005b30c9
    FCOMPP                              ; 005b30cb
    FNSTSW AX                           ; 005b30cd
    SAHF                                ; 005b30cf
    JNC 0x005b311d                      ; 005b30d0
        ;   XREF to: 005b311d (CONDITIONAL_JUMP)  ; LAB_005b311d
    PUSH 0x4                            ; 005b30d2
    MOV EAX,[0x006810c8]                ; 005b30d4 | g_CDemonSetPtr
    PUSH 0x65278b                       ; 005b30d9 | = "NDUN"
    ADD EAX,0x14d0f0                    ; 005b30de
    PUSH EAX                            ; 005b30e3 | g_CDemonSetInstance.geometry_filename[0]
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 005b30e4
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005b30e9
    TEST EAX,EAX                        ; 005b30ec
    JNZ 0x005b311d                      ; 005b30ee
        ;   XREF to: 005b311d (CONDITIONAL_JUMP)  ; LAB_005b311d
    MOV EAX,[0x006844f0]                ; 005b30f0 | g_CWaterPtr
    FLD float ptr [EAX + 0xc]           ; 005b30f5 | g_CWaterInstance.visible_area_sqft
    FSQRT                               ; 005b30f8
    FMUL double ptr [0x006527ae]        ; 005b30fa | DOUBLE_006527ae
    FADD double ptr [0x006527b6]        ; 005b3100 | DOUBLE_006527b6
    FST float ptr [ESP + 0x8]           ; 005b3106
    FCOMP double ptr [0x006527be]       ; 005b310a | DOUBLE_006527be
    FNSTSW AX                           ; 005b3110
    SAHF                                ; 005b3112
    JBE 0x005b311d                      ; 005b3113
        ;   XREF to: 005b311d (CONDITIONAL_JUMP)  ; LAB_005b311d
    MOV dword ptr [ESP + 0x8],0x3f333333 ; 005b3115
    FLD float ptr [ESP + 0x8]           ; 005b311d
        ;   Label: LAB_005b311d
    FLD float ptr [ESP + 0x120]         ; 005b3121
    FCHS                                ; 005b3128
    FXCH                                ; 005b312a
    FSUB float ptr [0x03f6af84]         ; 005b312c | CVector3f_03f6af7c.z
    FXCH                                ; 005b3132
    FSTP float ptr [ESP + 0x10c]        ; 005b3134
    FST float ptr [ESP + 0x118]         ; 005b313b
    FCOMP float ptr [ESP + 0x10c]       ; 005b3142
    FNSTSW AX                           ; 005b3149
    SAHF                                ; 005b314b
    JNC 0x005b315c                      ; 005b314c
        ;   XREF to: 005b315c (CONDITIONAL_JUMP)  ; LAB_005b315c
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005b314e
    MOV dword ptr [ESP + 0x118],EAX     ; 005b3155
    FLD float ptr [ESP + 0x118]         ; 005b315c
        ;   Label: LAB_005b315c
    FCOMP float ptr [ESP + 0x120]       ; 005b3163
    FNSTSW AX                           ; 005b316a
    SAHF                                ; 005b316c
    JBE 0x005b317d                      ; 005b316d
        ;   XREF to: 005b317d (CONDITIONAL_JUMP)  ; LAB_005b317d
    MOV EAX,dword ptr [ESP + 0x120]     ; 005b316f
    MOV dword ptr [ESP + 0x118],EAX     ; 005b3176
    FLD float ptr [0x03f6af84]          ; 005b317d | CVector3f_03f6af7c.z
        ;   Label: LAB_005b317d
    FADD float ptr [ESP + 0x118]        ; 005b3183
    FST float ptr [0x03f6af84]          ; 005b318a | CVector3f_03f6af7c.z
    FCOMP double ptr [0x006527a6]       ; 005b3190 | DOUBLE_006527a6
    FNSTSW AX                           ; 005b3196
    SAHF                                ; 005b3198
    JBE 0x005b3575                      ; 005b3199
        ;   XREF to: 005b3575 (CONDITIONAL_JUMP)  ; LAB_005b3575
    MOV ESI,dword ptr [0x03f6af6c]      ; 005b319f | g_WaterSoundHandle
    PUSH ESI                            ; 005b31a5
    PUSH EBX                            ; 005b31a6
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 005b31a7
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 005b31ac
    TEST EAX,EAX                        ; 005b31af
    JZ 0x005b355e                       ; 005b31b1
        ;   XREF to: 005b355e (CONDITIONAL_JUMP)  ; LAB_005b355e
    MOV EDI,dword ptr [0x03f6af6c]      ; 005b31b7 | g_WaterSoundHandle
        ;   Label: LAB_005b31b7
    PUSH dword ptr [0x03f6af84]         ; 005b31bd | CVector3f_03f6af7c.z
    PUSH EDI                            ; 005b31c3
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 ; 005b31c4
        ;   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)
    ADD ESP,0x8                         ; 005b31c9
    FLD float ptr [0x03f6b7b8]          ; 005b31cc | g_VolumeFadeTimeRemaining
        ;   Label: LAB_005b31cc
    FCOMP float ptr [ESP + 0x110]       ; 005b31d2
    FNSTSW AX                           ; 005b31d9
    SAHF                                ; 005b31db
    JBE 0x005b3592                      ; 005b31dc
        ;   XREF to: 005b3592 (CONDITIONAL_JUMP)  ; LAB_005b3592
    FLD float ptr [0x03f6b7b4]          ; 005b31e2 | g_TargetVolumeMultiplier
    FSUB float ptr [0x03f6b7b0]         ; 005b31e8 | g_CurrentVolumeMultiplier
    FLD float ptr [ESP + 0x110]         ; 005b31ee
    FLD ST0                             ; 005b31f5
    FDIV float ptr [0x03f6b7b8]         ; 005b31f7 | g_VolumeFadeTimeRemaining
    FMULP ST2                           ; 005b31fd
    FSUBR float ptr [0x03f6b7b8]        ; 005b31ff | g_VolumeFadeTimeRemaining
    FXCH                                ; 005b3205
    FADD float ptr [0x03f6b7b0]         ; 005b3207 | g_CurrentVolumeMultiplier
    FXCH                                ; 005b320d
    FSTP float ptr [0x03f6b7b8]         ; 005b320f | g_VolumeFadeTimeRemaining
    FSTP float ptr [0x03f6b7b0]         ; 005b3215 | g_CurrentVolumeMultiplier
    PUSH 0x0                            ; 005b321b
        ;   Label: LAB_005b321b
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 005b321d
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    ADD ESP,0x4                         ; 005b3222
    TEST EAX,EAX                        ; 005b3225
    JZ 0x005b35aa                       ; 005b3227
        ;   XREF to: 005b35aa (CONDITIONAL_JUMP)  ; LAB_005b35aa
    PUSH 0x1                            ; 005b322d
    PUSH 0x3                            ; 005b322f
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 005b3231
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 005b3236
    PUSH 0x0                            ; 005b3239
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 005b323b
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
    MOV dword ptr [ESP + 0x130],EAX     ; 005b3240
    FLD float ptr [ESP + 0x130]         ; 005b3247
    ADD ESP,0x4                         ; 005b324e
    FMUL float ptr [0x03f6b7b0]         ; 005b3251 | g_CurrentVolumeMultiplier
    SUB ESP,0x4                         ; 005b3257
    FSTP float ptr [ESP]                ; 005b325a
    PUSH 0x3                            ; 005b325d
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 ; 005b325f
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
    ADD ESP,0x8                         ; 005b3264
        ;   Label: LAB_005b3264
    MOV EAX,[0x006810c8]                ; 005b3267 | g_CDemonSetPtr | g_CDemonSetInstance
    CMP dword ptr [EAX + 0x15aca8],0x0  ; 005b326c | g_CDemonSetInstance.player_on_train
    JZ 0x005b3510                       ; 005b3273
        ;   XREF to: 005b3510 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [0x0067b654]      ; 005b3279 | g_CGamePtr | g_CGameInstance
    FLD float ptr [EDX + 0x264]         ; 005b327f | g_CGameInstance.delta_time_float
    MOV ECX,dword ptr [EDX + 0x240]     ; 005b3285 | g_CGameInstance.block_auto_save
    FSTP float ptr [ESP + 0x128]        ; 005b328b
    TEST ECX,ECX                        ; 005b3292
    JNZ 0x005b35b7                      ; 005b3294
        ;   XREF to: 005b35b7 (CONDITIONAL_JUMP)  ; LAB_005b35b7
    MOV EBX,dword ptr [0x03f6b86c]      ; 005b329a | g_TrainLastCameraIndex
    CMP EBX,dword ptr [EAX + 0x15aea4]  ; 005b32a0 | g_CDemonSetInstance.selected_camera_index
    JZ 0x005b3384                       ; 005b32a6
        ;   XREF to: 005b3384 (CONDITIONAL_JUMP)  ; LAB_005b3384
    PUSH EAX                            ; 005b32ac | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005b32ad
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005b32b2
    MOV ESI,dword ptr [0x006810c8]      ; 005b32b5 | g_CDemonSetPtr
    PUSH ESI                            ; 005b32bb | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210 ; 005b32bc
        ;   XREF to: 00574210 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210(CDemonSet * this_ptr)
    MOV EAX,[0x03f6af70]                ; 005b32c1 | g_SoundListenerPrev
    ADD ESP,0x4                         ; 005b32c6
    MOV dword ptr [ESP + 0xec],EAX      ; 005b32c9
    MOV EAX,[0x03f6af74]                ; 005b32d0 | g_SoundListenerPrev.y
    MOV dword ptr [ESP + 0xf0],EAX      ; 005b32d5
    MOV EAX,[0x03f6af78]                ; 005b32dc | g_SoundListenerPrev.z
    MOV dword ptr [ESP + 0xf4],EAX      ; 005b32e1
    MOV EAX,0x41a00000                  ; 005b32e8
    XOR EDI,EDI                         ; 005b32ed
    MOV dword ptr [ESP + 0xd8],EAX      ; 005b32ef
    MOV EAX,dword ptr [ESP + 0xec]      ; 005b32f6
    MOV ECX,dword ptr [0x006810c8]      ; 005b32fd | g_CDemonSetPtr | g_CDemonSetInstance
    MOV dword ptr [ESP + 0xf8],EAX      ; 005b3303
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005b330a
    MOV dword ptr [ESP + 0xd4],EDI      ; 005b3311
    MOV dword ptr [ESP + 0x100],EAX     ; 005b3318
    LEA EAX,[ESP + 0xf8]                ; 005b331f
    MOV dword ptr [ESP + 0xdc],EDI      ; 005b3326
    PUSH EAX                            ; 005b332d
    LEA EAX,[ESP + 0xf0]                ; 005b332e
    FLD float ptr [ESP + 0xf4]          ; 005b3335
    PUSH EAX                            ; 005b333c
    FADD float ptr [0x006527c6]         ; 005b333d | FLOAT_006527c6
    PUSH ECX                            ; 005b3343 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x108]        ; 005b3344
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460 ; 005b334b
        ;   XREF to: 00572460 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 005b3350
    TEST EAX,EAX                        ; 005b3353
    JZ 0x005b35cc                       ; 005b3355
        ;   XREF to: 005b35cc (CONDITIONAL_JUMP)  ; LAB_005b35cc
    MOV dword ptr [0x00681ef0],0x652710 ; 005b335b | g_CurrentTrainMode | = "int"
    MOV EDI,dword ptr [0x006810c8]      ; 005b3365 | g_CDemonSetPtr
        ;   Label: LAB_005b3365
    PUSH EDI                            ; 005b336b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005b336c
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    MOV EAX,[0x006810c8]                ; 005b3371 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aea4]  ; 005b3376 | g_CDemonSetInstance.selected_camera_index
    ADD ESP,0x4                         ; 005b337c
    MOV [0x03f6b86c],EAX                ; 005b337f | g_TrainLastCameraIndex
        ;   Label: LAB_005b337f
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b3384
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_005b3384
    PUSH 0x1                            ; 005b3389
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70 ; 005b338b
        ;   XREF to: 005a8b70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70(uint flags)
    ADD ESP,0x4                         ; 005b3390
    PUSH 0x3                            ; 005b3393
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0 ; 005b3395
        ;   XREF to: 005a8af0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
    ADD ESP,0x4                         ; 005b339a
    PUSH 0x652718                       ; 005b339d | = "int"
    MOV ECX,dword ptr [0x00681ef0]      ; 005b33a2 | g_CurrentTrainMode
    PUSH ECX                            ; 005b33a8 | = "int"
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005b33a9
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005b33ae
    TEST EAX,EAX                        ; 005b33b1
    JNZ 0x005b35db                      ; 005b33b3
        ;   XREF to: 005b35db (CONDITIONAL_JUMP)  ; LAB_005b35db
    MOV EDI,dword ptr [0x03f6b874]      ; 005b33b9 | g_TrainExteriorAmbientHandle
    PUSH EDI                            ; 005b33bf
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b33c0
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    MOV EAX,0x3ecccccd                  ; 005b33c5
    ADD ESP,0x4                         ; 005b33ca
    MOV dword ptr [ESP + 0x4],EAX       ; 005b33cd
    MOV EDX,dword ptr [0x03f6b870]      ; 005b33d1 | g_TrainRailNoiseHandle
        ;   Label: LAB_005b33d1
    PUSH EDX                            ; 005b33d7
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005b33d8
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005b33dd
    TEST EAX,EAX                        ; 005b33e0
    JZ 0x005b3629                       ; 005b33e2
        ;   XREF to: 005b3629 (CONDITIONAL_JUMP)  ; LAB_005b3629
    MOV ECX,dword ptr [0x00681ef0]      ; 005b33e8 | g_CurrentTrainMode
    PUSH ECX                            ; 005b33ee | = "int"
    MOV EBX,dword ptr [0x00681ef4]      ; 005b33ef | g_PreviousTrainMode | = "x"
    PUSH EBX                            ; 005b33f5 | = "x"
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005b33f6
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005b33fb
    TEST EAX,EAX                        ; 005b33fe
    JNZ 0x005b3662                      ; 005b3400
        ;   XREF to: 005b3662 (CONDITIONAL_JUMP)  ; LAB_005b3662
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b3406
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   Label: LAB_005b3406
    MOV EDX,0x41f00000                  ; 005b340b
    MOV EBX,0x3f6b7bc                   ; 005b3410 | g_TrainNoiseArray
    MOV EAX,[0x00681ef0]                ; 005b3415 | g_CurrentTrainMode
    XOR EDI,EDI                         ; 005b341a
    XOR ESI,ESI                         ; 005b341c
    MOV [0x00681ef4],EAX                ; 005b341e | g_PreviousTrainMode
    MOV dword ptr [0x03f6b85c],EDI      ; 005b3423 | g_TrainVelocityVector
    MOV dword ptr [0x03f6b860],EDI      ; 005b3429 | g_TrainVelocityVector.y
    MOV dword ptr [0x03f6b864],EDX      ; 005b342f | g_TrainVelocityVector.z
    MOV dword ptr [ESP + 0x124],EDI     ; 005b3435
    MOV EDI,ESI                         ; 005b343c
        ;   Label: LAB_005b343c
    SHL EDI,0x4                         ; 005b343e
    MOV EAX,dword ptr [EDI + 0x3f6b7c8] ; 005b3441 | g_TrainNoiseArray[0].sfx_handle | g_TrainNoiseArray[1].sfx_handle
    PUSH EAX                            ; 005b3447
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005b3448
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005b344d
    TEST EAX,EAX                        ; 005b3450
    JZ 0x005b3686                       ; 005b3452
        ;   XREF to: 005b3686 (CONDITIONAL_JUMP)  ; LAB_005b3686
    FLD float ptr [ESP + 0x128]         ; 005b3458
    FLD float ptr [0x03f6b85c]          ; 005b345f | g_TrainVelocityVector
    FMUL ST1                            ; 005b3465
    FLD float ptr [0x03f6b860]          ; 005b3467 | g_TrainVelocityVector.y
    FMUL ST2                            ; 005b346d
    FLD float ptr [0x03f6b864]          ; 005b346f | g_TrainVelocityVector.z
    FMULP ST3                           ; 005b3475
    FXCH                                ; 005b3477
    FSTP float ptr [ESP + 0xe0]         ; 005b3479
    FSTP float ptr [ESP + 0xe4]         ; 005b3480
    FSTP float ptr [ESP + 0xe8]         ; 005b3487
    FLD float ptr [EBX]                 ; 005b348e | g_TrainNoiseArray
    FADD float ptr [ESP + 0xe0]         ; 005b3490
    FLD float ptr [EBX + 0x4]           ; 005b3497 | g_TrainNoiseArray[0].position.y
    FXCH                                ; 005b349a
    FSTP float ptr [EBX]                ; 005b349c | g_TrainNoiseArray
    FADD float ptr [ESP + 0xe4]         ; 005b349e
    FLD float ptr [EBX + 0x8]           ; 005b34a5 | g_TrainNoiseArray[0].position.z
    FXCH                                ; 005b34a8
    FSTP float ptr [EBX + 0x4]          ; 005b34aa | g_TrainNoiseArray[0].position.y
    FADD float ptr [ESP + 0xe8]         ; 005b34ad
    FSTP float ptr [EBX + 0x8]          ; 005b34b4 | g_TrainNoiseArray[0].position.z
    FLD float ptr [EDI + 0x3f6b7c4]     ; 005b34b7 | g_TrainNoiseArray[0].position.z
    FABS                                ; 005b34bd
    FCOMP double ptr [0x006527e6]       ; 005b34bf | DOUBLE_006527e6
    FNSTSW AX                           ; 005b34c5
    SAHF                                ; 005b34c7
    JBE 0x005b34d9                      ; 005b34c8
        ;   XREF to: 005b34d9 (CONDITIONAL_JUMP)  ; LAB_005b34d9
    MOV EDX,dword ptr [EDI + 0x3f6b7c8] ; 005b34ca | g_TrainNoiseArray[0].sfx_handle
    PUSH EDX                            ; 005b34d0
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b34d1
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005b34d6
    INC ESI                             ; 005b34d9
        ;   Label: LAB_005b34d9
    ADD EBX,0x10                        ; 005b34da | g_TrainNoiseArray[1].position.x
    CMP ESI,0xa                         ; 005b34dd
    JL 0x005b343c                       ; 005b34e0
        ;   XREF to: 005b343c (CONDITIONAL_JUMP)  ; LAB_005b343c
    FLD float ptr [0x03f6b868]          ; 005b34e6 | g_TrainNoiseCooldown
    FSUB float ptr [ESP + 0x128]        ; 005b34ec
    FST float ptr [0x03f6b868]          ; 005b34f3 | g_TrainNoiseCooldown
    FLDZ                                ; 005b34f9
    FCOMPP                              ; 005b34fb
    FNSTSW AX                           ; 005b34fd
    SAHF                                ; 005b34ff
    JC 0x005b3510                       ; 005b3500
        ;   XREF to: 005b3510 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [ESP + 0x124],0x0     ; 005b3502
    JNZ 0x005b37c1                      ; 005b350a
        ;   XREF to: 005b37c1 (CONDITIONAL_JUMP)  ; LAB_005b37c1
    MOV ESP,EBP                         ; 005b3510
        ;   Label: caseD_4
    POP EBP                             ; 005b3512
    POP EDI                             ; 005b3513
    POP ESI                             ; 005b3514
    POP EBX                             ; 005b3515
    RET                                 ; 005b3516
    MOV EAX,dword ptr [ESP + 0x108]     ; 005b3517
        ;   Label: LAB_005b3517
    MOV dword ptr [ESP + 0x11c],EAX     ; 005b351e
    JMP 0x005b304b                      ; 005b3525
        ;   XREF to: 005b304b (UNCONDITIONAL_JUMP)  ; LAB_005b304b
    PUSH 0x65277e                       ; 005b352a | = "wind-ctl.wav"
        ;   Label: LAB_005b352a
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b352f
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 005b3534
    MOV [0x03f6af68],EAX                ; 005b3537 | g_WindSoundHandle
    JMP 0x005b30a6                      ; 005b353c
        ;   XREF to: 005b30a6 (UNCONDITIONAL_JUMP)  ; LAB_005b30a6
    MOV EDX,dword ptr [0x03f6af68]      ; 005b3541 | g_WindSoundHandle
        ;   Label: LAB_005b3541
    PUSH EDX                            ; 005b3547
    PUSH EBX                            ; 005b3548
    CALL core_sound.cpp_CSound_killSound_FUN_005b3b90 ; 005b3549
        ;   XREF to: 005b3b90 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_005b3b90(CSound * this_ptr, uint sfx_handle)
    XOR ECX,ECX                         ; 005b354e
    ADD ESP,0x8                         ; 005b3550
    MOV dword ptr [0x03f6af80],ECX      ; 005b3553 | CVector3f_03f6af7c.y
    JMP 0x005b30bb                      ; 005b3559
        ;   XREF to: 005b30bb (UNCONDITIONAL_JUMP)  ; LAB_005b30bb
    PUSH 0x652790                       ; 005b355e | = "water-2.wav"
        ;   Label: LAB_005b355e
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b3563
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 005b3568
    MOV [0x03f6af6c],EAX                ; 005b356b | g_WaterSoundHandle
    JMP 0x005b31b7                      ; 005b3570
        ;   XREF to: 005b31b7 (UNCONDITIONAL_JUMP)  ; LAB_005b31b7
    MOV ECX,dword ptr [0x03f6af6c]      ; 005b3575 | g_WaterSoundHandle
        ;   Label: LAB_005b3575
    PUSH ECX                            ; 005b357b
    PUSH EBX                            ; 005b357c
    CALL core_sound.cpp_CSound_killSound_FUN_005b3b90 ; 005b357d
        ;   XREF to: 005b3b90 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_005b3b90(CSound * this_ptr, uint sfx_handle)
    XOR EBX,EBX                         ; 005b3582
    ADD ESP,0x8                         ; 005b3584
    MOV dword ptr [0x03f6af84],EBX      ; 005b3587 | CVector3f_03f6af7c.z
    JMP 0x005b31cc                      ; 005b358d
        ;   XREF to: 005b31cc (UNCONDITIONAL_JUMP)  ; LAB_005b31cc
    FLD float ptr [0x03f6b7b4]          ; 005b3592 | g_TargetVolumeMultiplier
        ;   Label: LAB_005b3592
    XOR EAX,EAX                         ; 005b3598
    FSTP float ptr [0x03f6b7b0]         ; 005b359a | g_CurrentVolumeMultiplier
    MOV [0x03f6b7b8],EAX                ; 005b35a0 | g_VolumeFadeTimeRemaining
    JMP 0x005b321b                      ; 005b35a5
        ;   XREF to: 005b321b (UNCONDITIONAL_JUMP)  ; LAB_005b321b
    PUSH EAX                            ; 005b35aa
        ;   Label: LAB_005b35aa
    PUSH 0x3                            ; 005b35ab
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 005b35ad
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
    JMP 0x005b3264                      ; 005b35b2
        ;   XREF to: 005b3264 (UNCONDITIONAL_JUMP)  ; LAB_005b3264
    MOV EDX,0x65270c                    ; 005b35b7 | = "ext"
        ;   Label: LAB_005b35b7
    MOV EAX,0xffffffff                  ; 005b35bc
    MOV dword ptr [0x00681ef0],EDX      ; 005b35c1 | g_CurrentTrainMode
    JMP 0x005b337f                      ; 005b35c7
        ;   XREF to: 005b337f (UNCONDITIONAL_JUMP)  ; LAB_005b337f
    MOV dword ptr [0x00681ef0],0x652714 ; 005b35cc | g_CurrentTrainMode | = "ext"
        ;   Label: LAB_005b35cc
    JMP 0x005b3365                      ; 005b35d6
        ;   XREF to: 005b3365 (UNCONDITIONAL_JUMP)  ; LAB_005b3365
    MOV ESI,dword ptr [0x03f6b874]      ; 005b35db | g_TrainExteriorAmbientHandle
        ;   Label: LAB_005b35db
    PUSH ESI                            ; 005b35e1
    MOV EBX,0x3f333333                  ; 005b35e2
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005b35e7
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    MOV dword ptr [ESP + 0x8],EBX       ; 005b35ec
    ADD ESP,0x4                         ; 005b35f0
    TEST EAX,EAX                        ; 005b35f3
    JNZ 0x005b33d1                      ; 005b35f5
        ;   XREF to: 005b33d1 (CONDITIONAL_JUMP)  ; LAB_005b33d1
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b35fb
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x3ecccccd                     ; 005b3600
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 005b3605
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
    ADD ESP,0x4                         ; 005b360a
    PUSH 0x65271c                       ; 005b360d | = "trainext.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b3612
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 005b3617
    MOV [0x03f6b874],EAX                ; 005b361a | g_TrainExteriorAmbientHandle
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b361f
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    JMP 0x005b33d1                      ; 005b3624
        ;   XREF to: 005b33d1 (UNCONDITIONAL_JUMP)  ; LAB_005b33d1
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b3629
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_005b3629
    FLD float ptr [ESP + 0x4]           ; 005b362e
    FMUL double ptr [0x006527ce]        ; 005b3632 | DOUBLE_006527ce
    SUB ESP,0x4                         ; 005b3638
    FSTP float ptr [ESP]                ; 005b363b
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 005b363e
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
    ADD ESP,0x4                         ; 005b3643
    PUSH 0x652729                       ; 005b3646 | = "railnoiz.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b364b
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 005b3650
    MOV [0x03f6b870],EAX                ; 005b3653 | g_TrainRailNoiseHandle
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b3658
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    JMP 0x005b3406                      ; 005b365d
        ;   XREF to: 005b3406 (UNCONDITIONAL_JUMP)  ; LAB_005b3406
    FLD float ptr [ESP + 0x4]           ; 005b3662
        ;   Label: LAB_005b3662
    FMUL double ptr [0x006527ce]        ; 005b3666 | DOUBLE_006527ce
    SUB ESP,0x4                         ; 005b366c
    MOV ESI,dword ptr [0x03f6b870]      ; 005b366f | g_TrainRailNoiseHandle
    FSTP float ptr [ESP]                ; 005b3675
    PUSH ESI                            ; 005b3678
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 ; 005b3679
        ;   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)
    ADD ESP,0x8                         ; 005b367e
    JMP 0x005b3406                      ; 005b3681
        ;   XREF to: 005b3406 (UNCONDITIONAL_JUMP)  ; LAB_005b3406
    MOV dword ptr [ESP + 0x124],EBX     ; 005b3686 | g_TrainNoiseArray
        ;   Label: LAB_005b3686
    JMP 0x005b34d9                      ; 005b368d
        ;   XREF to: 005b34d9 (UNCONDITIONAL_JUMP)  ; LAB_005b34d9
    FLD float ptr [ESP + 0x4]           ; 005b3692
        ;   Label: caseD_1
    MOV EDX,dword ptr [0x00681ef0]      ; 005b3696 | g_CurrentTrainMode
    FMUL double ptr [0x006527de]        ; 005b369c | DOUBLE_006527de
    PUSH EDX                            ; 005b36a2 | = "int"
    MOV EAX,0x41c80000                  ; 005b36a3
    PUSH 0x652736                       ; 005b36a8 | = "rail?%s.wav"
    MOV dword ptr [ESP + 0x11c],EAX     ; 005b36ad
    LEA EAX,[ESP + 0x78]                ; 005b36b4
    PUSH EAX                            ; 005b36b8
    FSTP float ptr [ESP + 0xc]          ; 005b36b9
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005b36bd
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005b36c2
    PUSH 0x40000000                     ; 005b36c5
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0x128]     ; 005b36ca
    PUSH 0xc0400000                     ; 005b36d1
    MOV dword ptr [EAX],0x0             ; 005b36d6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005b36dc
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x134],EAX     ; 005b36e1
    FLD float ptr [ESP + 0x134]         ; 005b36e8
    ADD ESP,0x8                         ; 005b36ef
    FMUL float ptr [ESP + 0x114]        ; 005b36f2
    MOV EAX,dword ptr [ESP + 0x124]     ; 005b36f9
    FADD float ptr [0x03f6af78]         ; 005b3700 | g_SoundListenerPrev.z
    MOV dword ptr [EAX + 0x4],0x0       ; 005b3706
    FSTP float ptr [EAX + 0x8]          ; 005b370d
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b3710
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x3                            ; 005b3715
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0 ; 005b3717
        ;   XREF to: 005a8af0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
    ADD ESP,0x4                         ; 005b371c
    PUSH 0x3f6b85c                      ; 005b371f | g_TrainVelocityVector
    CALL sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_005a8a00 ; 005b3724
        ;   XREF to: 005a8a00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_005a8a00(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 005b3729
    FLD float ptr [ESP]                 ; 005b372c
    SUB ESP,0x8                         ; 005b372f
    LEA EAX,[ESP + 0x78]                ; 005b3732
    FSTP double ptr [ESP]               ; 005b3736
    PUSH EAX                            ; 005b3739
    PUSH 0x65274c                       ; 005b373a | = "%s @ %g"
    LEA EAX,[ESP + 0x1c]                ; 005b373f
    PUSH EAX                            ; 005b3743
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005b3744
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 005b3749
    MOV ECX,dword ptr [ESP + 0x124]     ; 005b374c
    PUSH ECX                            ; 005b3753
    LEA EAX,[ESP + 0x10]                ; 005b3754
    PUSH EAX                            ; 005b3758
    PUSH 0x0                            ; 005b3759
    MOV EBX,dword ptr [0x00681ef8]      ; 005b375b | g_CSoundPtr | g_CSoundInstance
    PUSH EBX                            ; 005b3761 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70 ; 005b3762
        ;   XREF to: 005b3a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 005b3767
    MOV EDX,dword ptr [ESP + 0x124]     ; 005b376a
    MOV dword ptr [EDX + 0xc],EAX       ; 005b3771
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b3774
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    MOV ESP,EBP                         ; 005b3779
    POP EBP                             ; 005b377b
    POP EDI                             ; 005b377c
    POP ESI                             ; 005b377d
    POP EBX                             ; 005b377e
    RET                                 ; 005b377f
    FLD float ptr [ESP + 0x4]           ; 005b3780
        ;   Label: caseD_3
    FMUL double ptr [0x006527d6]        ; 005b3784 | DOUBLE_006527d6
    MOV EDI,0x41a00000                  ; 005b378a
    MOV ESI,0x652742                    ; 005b378f | = "bump?.wav"
    MOV dword ptr [ESP + 0x114],EDI     ; 005b3794
    LEA EDI,[ESP + 0x70]                ; 005b379b
    FSTP float ptr [ESP]                ; 005b379f
    PUSH EDI                            ; 005b37a2
    MOV AL,byte ptr [ESI]               ; 005b37a3 | = "bump?.wav" | s_mp_wav_00652744
        ;   Label: LAB_005b37a3
    MOV byte ptr [EDI],AL               ; 005b37a5
    CMP AL,0x0                          ; 005b37a7
    JZ 0x005b37bb                       ; 005b37a9
        ;   XREF to: 005b37bb (CONDITIONAL_JUMP)  ; LAB_005b37bb
    MOV AL,byte ptr [ESI + 0x1]         ; 005b37ab | s_bump_wav_00652742+1 | s_p?.wav_00652745
    ADD ESI,0x2                         ; 005b37ae
    MOV byte ptr [EDI + 0x1],AL         ; 005b37b1
    ADD EDI,0x2                         ; 005b37b4
    CMP AL,0x0                          ; 005b37b7
    JNZ 0x005b37a3                      ; 005b37b9
        ;   XREF to: 005b37a3 (CONDITIONAL_JUMP)  ; LAB_005b37a3
    POP EDI                             ; 005b37bb
        ;   Label: LAB_005b37bb
    JMP 0x005b36c5                      ; 005b37bc
        ;   XREF to: 005b36c5 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x40a00000                     ; 005b37c1
        ;   Label: LAB_005b37c1
    PUSH 0x3f800000                     ; 005b37c6
    MOV EBX,0x41a00000                  ; 005b37cb
    LEA EDI,[ESP + 0x78]                ; 005b37d0
    MOV ESI,0x682118                    ; 005b37d4 | g_TrainSoundFilenameTemplate
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005b37d9
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x134],EAX     ; 005b37de
    MOV ECX,0x19                        ; 005b37e5
    FLD float ptr [ESP + 0x134]         ; 005b37ea
    ADD ESP,0x8                         ; 005b37f1
    FSTP float ptr [0x03f6b868]         ; 005b37f4 | g_TrainNoiseCooldown
    MOV dword ptr [ESP + 0x114],EBX     ; 005b37fa
    MOVSD.REP ES:EDI,ESI                ; 005b3801 | g_TrainSoundFilenameTemplate | g_TrainSoundFilenameTemplate+4
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005b3803
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 005b3808
    MOV EBX,0x5                         ; 005b380a
    SAR EDX,0x1f                        ; 005b380f
    IDIV EBX                            ; 005b3812
    MOV dword ptr [ESP],0x3f800000      ; 005b3814
    CMP EDX,0x4                         ; 005b381b
    JA 0x005b36c5                       ; 005b381e
        ;   XREF to: 005b36c5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x5b2fbc]  ; 005b3824 | caseD_0 | caseD_2 | caseD_4
        ;   Label: switchD

