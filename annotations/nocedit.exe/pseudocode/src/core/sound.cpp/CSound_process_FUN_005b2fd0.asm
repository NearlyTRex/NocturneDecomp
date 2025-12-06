; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_sound.cpp_CSound_process_FUN_005b2fd0(CSound * this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x148]:8  local_148
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xcf]:1  local_cf
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
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
;   undefined4 s_ump?.wav_00652743
;   undefined4 s_mp_wav_00652744
;   undefined4 s_p?.wav_00652745
;   TerminatedCString s_s_g_0065274c
;   TerminatedCString s_wind_ctl_wav_0065277e
;   ... and 53 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
;   core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
;   core_sound.cpp_CSound_killSound_FUN_005b3b90
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
;   core_sound.cpp_updateListeners_FUN_005b1870
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdlib.c_rand_FUN_005feb5c
;   crt_string.c_stricmp_FUN_005fe7f0
;   crt_string.c_strnicmp_FUN_005ff070
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
    MOV EAX,[0x0067b654]                ; 005b2fe2 | CGame * g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x264]     ; 005b2fe7 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x104],EAX     ; 005b2fed
    FLD float ptr [ESP + 0x104]         ; 005b2ff4
    FMUL double ptr [0x0065279e]        ; 005b2ffb | double DOUBLE_0065279e
    MOV dword ptr [ESP + 0x110],EAX     ; 005b3001
    FSTP float ptr [ESP + 0x120]        ; 005b3008
    CALL core_sound.cpp_updateListeners_FUN_005b1870 ; 005b300f | void core_sound.cpp_updateListeners_FUN_005b1870()
        ;   XREF to: 005b1870 (UNCONDITIONAL_CALL)
    FLD float ptr [0x03f6af7c]          ; 005b3014 | CVector3f CVector3f_03f6af7c
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
    JC 0x005b3517                       ; 005b3045 | LAB_005b3517
        ;   XREF to: 005b3517 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x11c]         ; 005b304b
        ;   Label: LAB_005b304b
    FCOMP float ptr [ESP + 0x120]       ; 005b3052
    FNSTSW AX                           ; 005b3059
    SAHF                                ; 005b305b
    JBE 0x005b306c                      ; 005b305c | LAB_005b306c
        ;   XREF to: 005b306c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x120]     ; 005b305e
    MOV dword ptr [ESP + 0x11c],EAX     ; 005b3065
    FLD float ptr [0x03f6af80]          ; 005b306c | CVector3f_03f6af7c.y
        ;   Label: LAB_005b306c
    FADD float ptr [ESP + 0x11c]        ; 005b3072
    FST float ptr [0x03f6af80]          ; 005b3079 | CVector3f_03f6af7c.y
    FCOMP double ptr [0x006527a6]       ; 005b307f | double DOUBLE_006527a6
    FNSTSW AX                           ; 005b3085
    SAHF                                ; 005b3087
    JBE 0x005b3541                      ; 005b3088 | LAB_005b3541
        ;   XREF to: 005b3541 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x03f6af68]      ; 005b308e | uint g_WindSoundHandle
    PUSH ESI                            ; 005b3094
    PUSH EBX                            ; 005b3095
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 005b3096 | void core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b309b
    TEST EAX,EAX                        ; 005b309e
    JZ 0x005b352a                       ; 005b30a0 | LAB_005b352a
        ;   XREF to: 005b352a (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x03f6af68]      ; 005b30a6 | uint g_WindSoundHandle
        ;   Label: LAB_005b30a6
    PUSH dword ptr [0x03f6af80]         ; 005b30ac | CVector3f_03f6af7c.y
    PUSH EDI                            ; 005b30b2
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 ; 005b30b3 | int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)
        ;   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b30b8
    XOR EAX,EAX                         ; 005b30bb
        ;   Label: LAB_005b30bb
    MOV dword ptr [ESP + 0x8],EAX       ; 005b30bd
    MOV EAX,[0x006844f0]                ; 005b30c1 | CWater * g_CWaterPtr
    FLD float ptr [EAX + 0xc]           ; 005b30c6 | g_CWaterInstance.visible_area_sqft
    FLDZ                                ; 005b30c9
    FCOMPP                              ; 005b30cb
    FNSTSW AX                           ; 005b30cd
    SAHF                                ; 005b30cf
    JNC 0x005b311d                      ; 005b30d0 | LAB_005b311d
        ;   XREF to: 005b311d (CONDITIONAL_JUMP)
    PUSH 0x4                            ; 005b30d2
    MOV EAX,[0x006810c8]                ; 005b30d4 | CDemonSet * g_CDemonSetPtr
    PUSH 0x65278b                       ; 005b30d9 | = "NDUN" | s_NDUN_0065278b = NDUN
    ADD EAX,0x14d0f0                    ; 005b30de
    PUSH EAX                            ; 005b30e3 | DAT_03261368
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 005b30e4 | int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b30e9
    TEST EAX,EAX                        ; 005b30ec
    JNZ 0x005b311d                      ; 005b30ee | LAB_005b311d
        ;   XREF to: 005b311d (CONDITIONAL_JUMP)
    MOV EAX,[0x006844f0]                ; 005b30f0 | CWater * g_CWaterPtr
    FLD float ptr [EAX + 0xc]           ; 005b30f5 | g_CWaterInstance.visible_area_sqft
    FSQRT                               ; 005b30f8
    FMUL double ptr [0x006527ae]        ; 005b30fa | double DOUBLE_006527ae
    FADD double ptr [0x006527b6]        ; 005b3100 | double DOUBLE_006527b6
    FST float ptr [ESP + 0x8]           ; 005b3106
    FCOMP double ptr [0x006527be]       ; 005b310a | double DOUBLE_006527be
    FNSTSW AX                           ; 005b3110
    SAHF                                ; 005b3112
    JBE 0x005b311d                      ; 005b3113 | LAB_005b311d
        ;   XREF to: 005b311d (CONDITIONAL_JUMP)
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
    JNC 0x005b315c                      ; 005b314c | LAB_005b315c
        ;   XREF to: 005b315c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005b314e
    MOV dword ptr [ESP + 0x118],EAX     ; 005b3155
    FLD float ptr [ESP + 0x118]         ; 005b315c
        ;   Label: LAB_005b315c
    FCOMP float ptr [ESP + 0x120]       ; 005b3163
    FNSTSW AX                           ; 005b316a
    SAHF                                ; 005b316c
    JBE 0x005b317d                      ; 005b316d | LAB_005b317d
        ;   XREF to: 005b317d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x120]     ; 005b316f
    MOV dword ptr [ESP + 0x118],EAX     ; 005b3176
    FLD float ptr [0x03f6af84]          ; 005b317d | CVector3f_03f6af7c.z
        ;   Label: LAB_005b317d
    FADD float ptr [ESP + 0x118]        ; 005b3183
    FST float ptr [0x03f6af84]          ; 005b318a | CVector3f_03f6af7c.z
    FCOMP double ptr [0x006527a6]       ; 005b3190 | double DOUBLE_006527a6
    FNSTSW AX                           ; 005b3196
    SAHF                                ; 005b3198
    JBE 0x005b3575                      ; 005b3199 | LAB_005b3575
        ;   XREF to: 005b3575 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x03f6af6c]      ; 005b319f | uint g_WaterSoundHandle
    PUSH ESI                            ; 005b31a5
    PUSH EBX                            ; 005b31a6
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 005b31a7 | void core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b31ac
    TEST EAX,EAX                        ; 005b31af
    JZ 0x005b355e                       ; 005b31b1 | LAB_005b355e
        ;   XREF to: 005b355e (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x03f6af6c]      ; 005b31b7 | uint g_WaterSoundHandle
        ;   Label: LAB_005b31b7
    PUSH dword ptr [0x03f6af84]         ; 005b31bd | CVector3f_03f6af7c.z
    PUSH EDI                            ; 005b31c3
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 ; 005b31c4 | int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)
        ;   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b31c9
    FLD float ptr [0x03f6b7b8]          ; 005b31cc | float g_VolumeFadeTimeRemaining
        ;   Label: LAB_005b31cc
    FCOMP float ptr [ESP + 0x110]       ; 005b31d2
    FNSTSW AX                           ; 005b31d9
    SAHF                                ; 005b31db
    JBE 0x005b3592                      ; 005b31dc | LAB_005b3592
        ;   XREF to: 005b3592 (CONDITIONAL_JUMP)
    FLD float ptr [0x03f6b7b4]          ; 005b31e2 | float g_TargetVolumeMultiplier
    FSUB float ptr [0x03f6b7b0]         ; 005b31e8 | float g_CurrentVolumeMultiplier
    FLD float ptr [ESP + 0x110]         ; 005b31ee
    FLD ST0                             ; 005b31f5
    FDIV float ptr [0x03f6b7b8]         ; 005b31f7 | float g_VolumeFadeTimeRemaining
    FMULP ST2                           ; 005b31fd
    FSUBR float ptr [0x03f6b7b8]        ; 005b31ff | float g_VolumeFadeTimeRemaining
    FXCH                                ; 005b3205
    FADD float ptr [0x03f6b7b0]         ; 005b3207 | float g_CurrentVolumeMultiplier
    FXCH                                ; 005b320d
    FSTP float ptr [0x03f6b7b8]         ; 005b320f | float g_VolumeFadeTimeRemaining
    FSTP float ptr [0x03f6b7b0]         ; 005b3215 | float g_CurrentVolumeMultiplier
    PUSH 0x0                            ; 005b321b
        ;   Label: LAB_005b321b
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 005b321d | int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b3222
    TEST EAX,EAX                        ; 005b3225
    JZ 0x005b35aa                       ; 005b3227 | LAB_005b35aa
        ;   XREF to: 005b35aa (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005b322d
    PUSH 0x3                            ; 005b322f
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 005b3231 | void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b3236
    PUSH 0x0                            ; 005b3239
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 005b323b | float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x130],EAX     ; 005b3240
    FLD float ptr [ESP + 0x130]         ; 005b3247
    ADD ESP,0x4                         ; 005b324e
    FMUL float ptr [0x03f6b7b0]         ; 005b3251 | float g_CurrentVolumeMultiplier
    SUB ESP,0x4                         ; 005b3257
    FSTP float ptr [ESP]                ; 005b325a
    PUSH 0x3                            ; 005b325d
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 ; 005b325f | void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b3264
        ;   Label: LAB_005b3264
    MOV EAX,[0x006810c8]                ; 005b3267 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15aca8],0x0  ; 005b326c | g_CDemonSetInstance.player_on_train
    JZ 0x005b3510                       ; 005b3273 | caseD_4
        ;   XREF to: 005b3510 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067b654]      ; 005b3279 | CGame g_CGameInstance | CGame * g_CGamePtr
    FLD float ptr [EDX + 0x264]         ; 005b327f | g_CGameInstance.delta_time_float
    MOV ECX,dword ptr [EDX + 0x240]     ; 005b3285 | g_CGameInstance.block_auto_save
    FSTP float ptr [ESP + 0x128]        ; 005b328b
    TEST ECX,ECX                        ; 005b3292
    JNZ 0x005b35b7                      ; 005b3294 | LAB_005b35b7
        ;   XREF to: 005b35b7 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x03f6b86c]      ; 005b329a | int g_TrainLastCameraIndex
    CMP EBX,dword ptr [EAX + 0x15aea4]  ; 005b32a0 | g_CDemonSetInstance.selected_camera_index
    JZ 0x005b3384                       ; 005b32a6 | LAB_005b3384
        ;   XREF to: 005b3384 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005b32ac | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005b32ad | void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b32b2
    MOV ESI,dword ptr [0x006810c8]      ; 005b32b5 | CDemonSet * g_CDemonSetPtr
    PUSH ESI                            ; 005b32bb | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210 ; 005b32bc | void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210(CDemonSet * this_ptr)
        ;   XREF to: 00574210 (UNCONDITIONAL_CALL)
    MOV EAX,[0x03f6af70]                ; 005b32c1 | CVector3f g_SoundListenerPrev
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
    MOV ECX,dword ptr [0x006810c8]      ; 005b32fd | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
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
    FADD float ptr [0x006527c6]         ; 005b333d | float FLOAT_006527c6
    PUSH ECX                            ; 005b3343 | CDemonSet g_CDemonSetInstance
    FSTP float ptr [ESP + 0x108]        ; 005b3344
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460 ; 005b334b | int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
        ;   XREF to: 00572460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b3350
    TEST EAX,EAX                        ; 005b3353
    JZ 0x005b35cc                       ; 005b3355 | LAB_005b35cc
        ;   XREF to: 005b35cc (CONDITIONAL_JUMP)
    MOV dword ptr [0x00681ef0],0x652710 ; 005b335b | char * g_CurrentTrainMode | = "int" | s_int_00652710 = int
    MOV EDI,dword ptr [0x006810c8]      ; 005b3365 | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_005b3365
    PUSH EDI                            ; 005b336b | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005b336c | void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)
    MOV EAX,[0x006810c8]                ; 005b3371 | CDemonSet * g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aea4]  ; 005b3376 | g_CDemonSetInstance.selected_camera_index
    ADD ESP,0x4                         ; 005b337c
    MOV [0x03f6b86c],EAX                ; 005b337f | int g_TrainLastCameraIndex
        ;   Label: LAB_005b337f
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b3384 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_005b3384
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH 0x1                            ; 005b3389
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70 ; 005b338b | void sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70(uint flags)
        ;   XREF to: 005a8b70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b3390
    PUSH 0x3                            ; 005b3393
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0 ; 005b3395 | void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
        ;   XREF to: 005a8af0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b339a
    PUSH 0x652718                       ; 005b339d | = "int" | s_int_00652718 = int
    MOV ECX,dword ptr [0x00681ef0]      ; 005b33a2 | char * g_CurrentTrainMode
    PUSH ECX                            ; 005b33a8 | = "int" | s_int_00652710 = int
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005b33a9 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b33ae
    TEST EAX,EAX                        ; 005b33b1
    JNZ 0x005b35db                      ; 005b33b3 | LAB_005b35db
        ;   XREF to: 005b35db (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x03f6b874]      ; 005b33b9 | uint g_TrainExteriorAmbientHandle
    PUSH EDI                            ; 005b33bf
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b33c0 | int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
    MOV EAX,0x3ecccccd                  ; 005b33c5
    ADD ESP,0x4                         ; 005b33ca
    MOV dword ptr [ESP + 0x4],EAX       ; 005b33cd
    MOV EDX,dword ptr [0x03f6b870]      ; 005b33d1 | uint g_TrainRailNoiseHandle
        ;   Label: LAB_005b33d1
    PUSH EDX                            ; 005b33d7
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005b33d8 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b33dd
    TEST EAX,EAX                        ; 005b33e0
    JZ 0x005b3629                       ; 005b33e2 | LAB_005b3629
        ;   XREF to: 005b3629 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x00681ef0]      ; 005b33e8 | char * g_CurrentTrainMode
    PUSH ECX                            ; 005b33ee | = "int" | s_int_00652710 = int
    MOV EBX,dword ptr [0x00681ef4]      ; 005b33ef | = "x" | char * g_PreviousTrainMode | s_x_0065270a = x
    PUSH EBX                            ; 005b33f5 | = "x" | s_x_0065270a = x
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005b33f6 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b33fb
    TEST EAX,EAX                        ; 005b33fe
    JNZ 0x005b3662                      ; 005b3400 | LAB_005b3662
        ;   XREF to: 005b3662 (CONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b3406 | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   Label: LAB_005b3406
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    MOV EDX,0x41f00000                  ; 005b340b
    MOV EBX,0x3f6b7bc                   ; 005b3410 | STrainNoise[10] g_TrainNoiseArray
    MOV EAX,[0x00681ef0]                ; 005b3415 | char * g_CurrentTrainMode
    XOR EDI,EDI                         ; 005b341a
    XOR ESI,ESI                         ; 005b341c
    MOV [0x00681ef4],EAX                ; 005b341e | char * g_PreviousTrainMode
    MOV dword ptr [0x03f6b85c],EDI      ; 005b3423 | CVector3f g_TrainVelocityVector
    MOV dword ptr [0x03f6b860],EDI      ; 005b3429 | g_TrainVelocityVector.y
    MOV dword ptr [0x03f6b864],EDX      ; 005b342f | g_TrainVelocityVector.z
    MOV dword ptr [ESP + 0x124],EDI     ; 005b3435
    MOV EDI,ESI                         ; 005b343c
        ;   Label: LAB_005b343c
    SHL EDI,0x4                         ; 005b343e
    MOV EAX,dword ptr [EDI + 0x3f6b7c8] ; 005b3441 | DAT_03f6b7c8
    PUSH EAX                            ; 005b3447
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005b3448 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b344d
    TEST EAX,EAX                        ; 005b3450
    JZ 0x005b3686                       ; 005b3452 | LAB_005b3686
        ;   XREF to: 005b3686 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x128]         ; 005b3458
    FLD float ptr [0x03f6b85c]          ; 005b345f | CVector3f g_TrainVelocityVector
    FMUL ST1                            ; 005b3465
    FLD float ptr [0x03f6b860]          ; 005b3467 | g_TrainVelocityVector.y
    FMUL ST2                            ; 005b346d
    FLD float ptr [0x03f6b864]          ; 005b346f | g_TrainVelocityVector.z
    FMULP ST3                           ; 005b3475
    FXCH                                ; 005b3477
    FSTP float ptr [ESP + 0xe0]         ; 005b3479
    FSTP float ptr [ESP + 0xe4]         ; 005b3480
    FSTP float ptr [ESP + 0xe8]         ; 005b3487
    FLD float ptr [EBX]                 ; 005b348e | STrainNoise[10] g_TrainNoiseArray
    FADD float ptr [ESP + 0xe0]         ; 005b3490
    FLD float ptr [EBX + 0x4]           ; 005b3497 | g_TrainNoiseArray[0].position.y
    FXCH                                ; 005b349a
    FSTP float ptr [EBX]                ; 005b349c | STrainNoise[10] g_TrainNoiseArray
    FADD float ptr [ESP + 0xe4]         ; 005b349e
    FLD float ptr [EBX + 0x8]           ; 005b34a5 | g_TrainNoiseArray[0].position.z
    FXCH                                ; 005b34a8
    FSTP float ptr [EBX + 0x4]          ; 005b34aa | g_TrainNoiseArray[0].position.y
    FADD float ptr [ESP + 0xe8]         ; 005b34ad
    FSTP float ptr [EBX + 0x8]          ; 005b34b4 | g_TrainNoiseArray[0].position.z
    FLD float ptr [EDI + 0x3f6b7c4]     ; 005b34b7 | g_TrainNoiseArray[0].position.z
    FABS                                ; 005b34bd
    FCOMP double ptr [0x006527e6]       ; 005b34bf | double DOUBLE_006527e6
    FNSTSW AX                           ; 005b34c5
    SAHF                                ; 005b34c7
    JBE 0x005b34d9                      ; 005b34c8 | LAB_005b34d9
        ;   XREF to: 005b34d9 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EDI + 0x3f6b7c8] ; 005b34ca | DAT_03f6b7c8
    PUSH EDX                            ; 005b34d0
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b34d1 | int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b34d6
    INC ESI                             ; 005b34d9
        ;   Label: LAB_005b34d9
    ADD EBX,0x10                        ; 005b34da | DAT_03f6b7cc
    CMP ESI,0xa                         ; 005b34dd
    JL 0x005b343c                       ; 005b34e0 | LAB_005b343c
        ;   XREF to: 005b343c (CONDITIONAL_JUMP)
    FLD float ptr [0x03f6b868]          ; 005b34e6 | float g_TrainNoiseCooldown
    FSUB float ptr [ESP + 0x128]        ; 005b34ec
    FST float ptr [0x03f6b868]          ; 005b34f3 | float g_TrainNoiseCooldown
    FLDZ                                ; 005b34f9
    FCOMPP                              ; 005b34fb
    FNSTSW AX                           ; 005b34fd
    SAHF                                ; 005b34ff
    JC 0x005b3510                       ; 005b3500 | caseD_4
        ;   XREF to: 005b3510 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x124],0x0     ; 005b3502
    JNZ 0x005b37c1                      ; 005b350a | LAB_005b37c1
        ;   XREF to: 005b37c1 (CONDITIONAL_JUMP)
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
    JMP 0x005b304b                      ; 005b3525 | LAB_005b304b
        ;   XREF to: 005b304b (UNCONDITIONAL_JUMP)
    PUSH 0x65277e                       ; 005b352a | = "wind-ctl.wav" | s_wind_ctl_wav_0065277e = wind-ctl.wav
        ;   Label: LAB_005b352a
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b352f | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b3534
    MOV [0x03f6af68],EAX                ; 005b3537 | uint g_WindSoundHandle
    JMP 0x005b30a6                      ; 005b353c | LAB_005b30a6
        ;   XREF to: 005b30a6 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x03f6af68]      ; 005b3541 | uint g_WindSoundHandle
        ;   Label: LAB_005b3541
    PUSH EDX                            ; 005b3547
    PUSH EBX                            ; 005b3548
    CALL core_sound.cpp_CSound_killSound_FUN_005b3b90 ; 005b3549 | void core_sound.cpp_CSound_killSound_FUN_005b3b90(CSound * this_ptr, uint sfx_handle)
        ;   XREF to: 005b3b90 (UNCONDITIONAL_CALL)
    XOR ECX,ECX                         ; 005b354e
    ADD ESP,0x8                         ; 005b3550
    MOV dword ptr [0x03f6af80],ECX      ; 005b3553 | CVector3f_03f6af7c.y
    JMP 0x005b30bb                      ; 005b3559 | LAB_005b30bb
        ;   XREF to: 005b30bb (UNCONDITIONAL_JUMP)
    PUSH 0x652790                       ; 005b355e | = "water-2.wav" | s_water_2_wav_00652790 = water-2.wav
        ;   Label: LAB_005b355e
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b3563 | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b3568
    MOV [0x03f6af6c],EAX                ; 005b356b | uint g_WaterSoundHandle
    JMP 0x005b31b7                      ; 005b3570 | LAB_005b31b7
        ;   XREF to: 005b31b7 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x03f6af6c]      ; 005b3575 | uint g_WaterSoundHandle
        ;   Label: LAB_005b3575
    PUSH ECX                            ; 005b357b
    PUSH EBX                            ; 005b357c
    CALL core_sound.cpp_CSound_killSound_FUN_005b3b90 ; 005b357d | void core_sound.cpp_CSound_killSound_FUN_005b3b90(CSound * this_ptr, uint sfx_handle)
        ;   XREF to: 005b3b90 (UNCONDITIONAL_CALL)
    XOR EBX,EBX                         ; 005b3582
    ADD ESP,0x8                         ; 005b3584
    MOV dword ptr [0x03f6af84],EBX      ; 005b3587 | CVector3f_03f6af7c.z
    JMP 0x005b31cc                      ; 005b358d | LAB_005b31cc
        ;   XREF to: 005b31cc (UNCONDITIONAL_JUMP)
    FLD float ptr [0x03f6b7b4]          ; 005b3592 | float g_TargetVolumeMultiplier
        ;   Label: LAB_005b3592
    XOR EAX,EAX                         ; 005b3598
    FSTP float ptr [0x03f6b7b0]         ; 005b359a | float g_CurrentVolumeMultiplier
    MOV [0x03f6b7b8],EAX                ; 005b35a0 | float g_VolumeFadeTimeRemaining
    JMP 0x005b321b                      ; 005b35a5 | LAB_005b321b
        ;   XREF to: 005b321b (UNCONDITIONAL_JUMP)
    PUSH EAX                            ; 005b35aa
        ;   Label: LAB_005b35aa
    PUSH 0x3                            ; 005b35ab
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 005b35ad | void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
    JMP 0x005b3264                      ; 005b35b2 | LAB_005b3264
        ;   XREF to: 005b3264 (UNCONDITIONAL_JUMP)
    MOV EDX,0x65270c                    ; 005b35b7 | = "ext" | s_ext_0065270c = ext
        ;   Label: LAB_005b35b7
    MOV EAX,0xffffffff                  ; 005b35bc
    MOV dword ptr [0x00681ef0],EDX      ; 005b35c1 | char * g_CurrentTrainMode
    JMP 0x005b337f                      ; 005b35c7 | LAB_005b337f
        ;   XREF to: 005b337f (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x00681ef0],0x652714 ; 005b35cc | char * g_CurrentTrainMode | = "ext" | s_ext_00652714 = ext
        ;   Label: LAB_005b35cc
    JMP 0x005b3365                      ; 005b35d6 | LAB_005b3365
        ;   XREF to: 005b3365 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x03f6b874]      ; 005b35db | uint g_TrainExteriorAmbientHandle
        ;   Label: LAB_005b35db
    PUSH ESI                            ; 005b35e1
    MOV EBX,0x3f333333                  ; 005b35e2
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005b35e7 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x8],EBX       ; 005b35ec
    ADD ESP,0x4                         ; 005b35f0
    TEST EAX,EAX                        ; 005b35f3
    JNZ 0x005b33d1                      ; 005b35f5 | LAB_005b33d1
        ;   XREF to: 005b33d1 (CONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b35fb | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH 0x3ecccccd                     ; 005b3600
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 005b3605 | void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b360a
    PUSH 0x65271c                       ; 005b360d | = "trainext.wav" | s_trainext_wav_0065271c = trainext.wav
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b3612 | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b3617
    MOV [0x03f6b874],EAX                ; 005b361a | uint g_TrainExteriorAmbientHandle
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b361f | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    JMP 0x005b33d1                      ; 005b3624 | LAB_005b33d1
        ;   XREF to: 005b33d1 (UNCONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b3629 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_005b3629
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    FLD float ptr [ESP + 0x4]           ; 005b362e
    FMUL double ptr [0x006527ce]        ; 005b3632 | double DOUBLE_006527ce
    SUB ESP,0x4                         ; 005b3638
    FSTP float ptr [ESP]                ; 005b363b
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 005b363e | void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b3643
    PUSH 0x652729                       ; 005b3646 | = "railnoiz.wav" | s_railnoiz_wav_00652729 = railnoiz.wav
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b364b | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b3650
    MOV [0x03f6b870],EAX                ; 005b3653 | uint g_TrainRailNoiseHandle
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b3658 | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    JMP 0x005b3406                      ; 005b365d | LAB_005b3406
        ;   XREF to: 005b3406 (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x4]           ; 005b3662
        ;   Label: LAB_005b3662
    FMUL double ptr [0x006527ce]        ; 005b3666 | double DOUBLE_006527ce
    SUB ESP,0x4                         ; 005b366c
    MOV ESI,dword ptr [0x03f6b870]      ; 005b366f | uint g_TrainRailNoiseHandle
    FSTP float ptr [ESP]                ; 005b3675
    PUSH ESI                            ; 005b3678
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 ; 005b3679 | int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)
        ;   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b367e
    JMP 0x005b3406                      ; 005b3681 | LAB_005b3406
        ;   XREF to: 005b3406 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x124],EBX     ; 005b3686 | STrainNoise[10] g_TrainNoiseArray
        ;   Label: LAB_005b3686
    JMP 0x005b34d9                      ; 005b368d | LAB_005b34d9
        ;   XREF to: 005b34d9 (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x4]           ; 005b3692
        ;   Label: caseD_1
    MOV EDX,dword ptr [0x00681ef0]      ; 005b3696 | char * g_CurrentTrainMode
    FMUL double ptr [0x006527de]        ; 005b369c | double DOUBLE_006527de
    PUSH EDX                            ; 005b36a2 | = "int" | s_int_00652710 = int
    MOV EAX,0x41c80000                  ; 005b36a3
    PUSH 0x652736                       ; 005b36a8 | = "rail?%s.wav" | s_rail_s_wav_00652736 = rail?%s.wav
    MOV dword ptr [ESP + 0x11c],EAX     ; 005b36ad
    LEA EAX,[ESP + 0x78]                ; 005b36b4
    PUSH EAX                            ; 005b36b8
    FSTP float ptr [ESP + 0xc]          ; 005b36b9
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005b36bd | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b36c2
    PUSH 0x40000000                     ; 005b36c5
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0x128]     ; 005b36ca
    PUSH 0xc0400000                     ; 005b36d1
    MOV dword ptr [EAX],0x0             ; 005b36d6
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005b36dc | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x134],EAX     ; 005b36e1
    FLD float ptr [ESP + 0x134]         ; 005b36e8
    ADD ESP,0x8                         ; 005b36ef
    FMUL float ptr [ESP + 0x114]        ; 005b36f2
    MOV EAX,dword ptr [ESP + 0x124]     ; 005b36f9
    FADD float ptr [0x03f6af78]         ; 005b3700 | g_SoundListenerPrev.z
    MOV dword ptr [EAX + 0x4],0x0       ; 005b3706
    FSTP float ptr [EAX + 0x8]          ; 005b370d
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b3710 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH 0x3                            ; 005b3715
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0 ; 005b3717 | void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
        ;   XREF to: 005a8af0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b371c
    PUSH 0x3f6b85c                      ; 005b371f | CVector3f g_TrainVelocityVector
    CALL sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00 ; 005b3724 | void sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00(CVector3f * velocity_source_ptr)
        ;   XREF to: 005a8a00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b3729
    FLD float ptr [ESP]                 ; 005b372c
    SUB ESP,0x8                         ; 005b372f
    LEA EAX,[ESP + 0x78]                ; 005b3732
    FSTP double ptr [ESP]               ; 005b3736
    PUSH EAX                            ; 005b3739
    PUSH 0x65274c                       ; 005b373a | = "%s @ %g" | s_s_g_0065274c = %s @ %g
    LEA EAX,[ESP + 0x1c]                ; 005b373f
    PUSH EAX                            ; 005b3743
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005b3744 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005b3749
    MOV ECX,dword ptr [ESP + 0x124]     ; 005b374c
    PUSH ECX                            ; 005b3753
    LEA EAX,[ESP + 0x10]                ; 005b3754
    PUSH EAX                            ; 005b3758
    PUSH 0x0                            ; 005b3759
    MOV EBX,dword ptr [0x00681ef8]      ; 005b375b | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH EBX                            ; 005b3761 | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70 ; 005b3762 | uint core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
        ;   XREF to: 005b3a70 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005b3767
    MOV EDX,dword ptr [ESP + 0x124]     ; 005b376a
    MOV dword ptr [EDX + 0xc],EAX       ; 005b3771
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b3774 | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 005b3779
    POP EBP                             ; 005b377b
    POP EDI                             ; 005b377c
    POP ESI                             ; 005b377d
    POP EBX                             ; 005b377e
    RET                                 ; 005b377f
    FLD float ptr [ESP + 0x4]           ; 005b3780
        ;   Label: caseD_3
    FMUL double ptr [0x006527d6]        ; 005b3784 | double DOUBLE_006527d6
    MOV EDI,0x41a00000                  ; 005b378a
    MOV ESI,0x652742                    ; 005b378f | = "bump?.wav" | s_bump_wav_00652742 = bump?.wav
    MOV dword ptr [ESP + 0x114],EDI     ; 005b3794
    LEA EDI,[ESP + 0x70]                ; 005b379b
    FSTP float ptr [ESP]                ; 005b379f
    PUSH EDI                            ; 005b37a2
    MOV AL,byte ptr [ESI]               ; 005b37a3 | = "bump?.wav" | s_bump_wav_00652742 = bump?.wav
        ;   Label: LAB_005b37a3
    MOV byte ptr [EDI],AL               ; 005b37a5
    CMP AL,0x0                          ; 005b37a7
    JZ 0x005b37bb                       ; 005b37a9 | LAB_005b37bb
        ;   XREF to: 005b37bb (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005b37ab | s_ump?.wav_00652743
    ADD ESI,0x2                         ; 005b37ae
    MOV byte ptr [EDI + 0x1],AL         ; 005b37b1
    ADD EDI,0x2                         ; 005b37b4
    CMP AL,0x0                          ; 005b37b7
    JNZ 0x005b37a3                      ; 005b37b9 | LAB_005b37a3
        ;   XREF to: 005b37a3 (CONDITIONAL_JUMP)
    POP EDI                             ; 005b37bb
        ;   Label: LAB_005b37bb
    JMP 0x005b36c5                      ; 005b37bc | default
        ;   XREF to: 005b36c5 (UNCONDITIONAL_JUMP)
    PUSH 0x40a00000                     ; 005b37c1
        ;   Label: LAB_005b37c1
    PUSH 0x3f800000                     ; 005b37c6
    MOV EBX,0x41a00000                  ; 005b37cb
    LEA EDI,[ESP + 0x78]                ; 005b37d0
    MOV ESI,0x682118                    ; 005b37d4 | char[108] g_TrainSoundFilenameTemplate
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005b37d9 | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x134],EAX     ; 005b37de
    MOV ECX,0x19                        ; 005b37e5
    FLD float ptr [ESP + 0x134]         ; 005b37ea
    ADD ESP,0x8                         ; 005b37f1
    FSTP float ptr [0x03f6b868]         ; 005b37f4 | float g_TrainNoiseCooldown
    MOV dword ptr [ESP + 0x114],EBX     ; 005b37fa
    MOVSD.REP ES:EDI,ESI                ; 005b3801 | char[108] g_TrainSoundFilenameTemplate
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005b3803 | int crt_stdlib.c_rand_FUN_005feb5c()
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 005b3808
    MOV EBX,0x5                         ; 005b380a
    SAR EDX,0x1f                        ; 005b380f
    IDIV EBX                            ; 005b3812
    MOV dword ptr [ESP],0x3f800000      ; 005b3814
    CMP EDX,0x4                         ; 005b381b
    JA 0x005b36c5                       ; 005b381e | default
        ;   XREF to: 005b36c5 (CONDITIONAL_JUMP)
    JMP dword ptr [EDX*0x4 + 0x5b2fbc]  ; 005b3824 | pointer switchdataD_005b2fbc
        ;   Label: switchD

