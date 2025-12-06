; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512aa1
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 00513341
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512ef2
;
; Referenced Globals:
;   TerminatedCString s_splash_music_44_wav_006527ee
;   TerminatedCString s_splash_music_22_wav_00652802
;   float g_MenuChannel1MaxVolume = 0.25
;   float g_MenuChannel0MaxVolume = 0.25
;   float g_MenuChannel2MaxVolume = 1
;
; Called Functions:
;   core_sound.cpp_CSound_reset_FUN_005b39a0
;   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
;   sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
;   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
;   sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0
;   sound_sndmain.cpp_set3DListenerPos_FUN_005aa020
;   sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0
;   sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
;   sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90
;   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005b3830
        ;   Label: core_sound.cpp_CSound_configure_FUN_005b3830
    PUSH 0x1                            ; 005b3833
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 005b3835 | float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x4],EAX       ; 005b383a
    FLD float ptr [ESP + 0x4]           ; 005b383e
    ADD ESP,0x4                         ; 005b3842
    FCOMP float ptr [0x00663310]        ; 005b3845 | float g_MenuChannel1MaxVolume
    FNSTSW AX                           ; 005b384b
    SAHF                                ; 005b384d
    JA 0x005b3973                       ; 005b384e | LAB_005b3973
        ;   XREF to: 005b3973 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005b3854
        ;   Label: LAB_005b3854
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 005b3856 | float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x4],EAX       ; 005b385b
    FLD float ptr [ESP + 0x4]           ; 005b385f
    ADD ESP,0x4                         ; 005b3863
    FCOMP float ptr [0x00663314]        ; 005b3866 | float g_MenuChannel0MaxVolume
    FNSTSW AX                           ; 005b386c
    SAHF                                ; 005b386e
    JBE 0x005b3881                      ; 005b386f | LAB_005b3881
        ;   XREF to: 005b3881 (CONDITIONAL_JUMP)
    PUSH dword ptr [0x00663314]         ; 005b3871 | float g_MenuChannel0MaxVolume
    PUSH 0x0                            ; 005b3877
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 ; 005b3879 | void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b387e
    PUSH 0x2                            ; 005b3881
        ;   Label: LAB_005b3881
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 005b3883 | float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x4],EAX       ; 005b3888
    FLD float ptr [ESP + 0x4]           ; 005b388c
    ADD ESP,0x4                         ; 005b3890
    FCOMP float ptr [0x00663318]        ; 005b3893 | float g_MenuChannel2MaxVolume
    FNSTSW AX                           ; 005b3899
    SAHF                                ; 005b389b
    JBE 0x005b38ae                      ; 005b389c | LAB_005b38ae
        ;   XREF to: 005b38ae (CONDITIONAL_JUMP)
    PUSH dword ptr [0x00663318]         ; 005b389e | float g_MenuChannel2MaxVolume
    PUSH 0x2                            ; 005b38a4
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 ; 005b38a6 | void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b38ab
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0 ; 005b38ae | int sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0()
        ;   Label: LAB_005b38ae
        ;   XREF to: 005a96b0 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 005b38b3
    JNZ 0x005b396f                      ; 005b38b5 | LAB_005b396f
        ;   XREF to: 005b396f (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b38bb
    PUSH EDX                            ; 005b38bf
    CALL core_sound.cpp_CSound_reset_FUN_005b39a0 ; 005b38c0 | void core_sound.cpp_CSound_reset_FUN_005b39a0(CSound * this_ptr)
        ;   XREF to: 005b39a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b38c5
    PUSH 0x0                            ; 005b38c8
    PUSH 0x0                            ; 005b38ca
    PUSH 0x0                            ; 005b38cc
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0 ; 005b38ce | void sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0(float orient_right_x, float orient_right_y, float orient_right_z)
        ;   XREF to: 005ab6e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b38d3
    PUSH 0x0                            ; 005b38d6
    PUSH 0x0                            ; 005b38d8
    PUSH 0x0                            ; 005b38da
    PUSH 0x0                            ; 005b38dc
    PUSH 0x0                            ; 005b38de
    PUSH 0x0                            ; 005b38e0
    CALL sound_sndmain.cpp_set3DListenerPos_FUN_005aa020 ; 005b38e2 | void sound_sndmain.cpp_set3DListenerPos_FUN_005aa020(double pos_x, double pos_y, double pos_z)
        ;   XREF to: 005aa020 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005b38e7
    PUSH 0x3ff00000                     ; 005b38ea
    PUSH 0x0                            ; 005b38ef
    PUSH 0x0                            ; 005b38f1
    PUSH 0x0                            ; 005b38f3
    PUSH 0x0                            ; 005b38f5
    PUSH 0x0                            ; 005b38f7
    PUSH 0x0                            ; 005b38f9
    PUSH 0x0                            ; 005b38fb
    PUSH 0x3ff00000                     ; 005b38fd
    PUSH 0x0                            ; 005b3902
    PUSH 0x0                            ; 005b3904
    PUSH 0x0                            ; 005b3906
    PUSH 0x0                            ; 005b3908
    PUSH 0x0                            ; 005b390a
    PUSH 0x0                            ; 005b390c
    PUSH 0x0                            ; 005b390e
    PUSH 0x3ff00000                     ; 005b3910
    PUSH 0x0                            ; 005b3915
    CALL sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0 ; 005b3917 | void sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0(double front_x, double front_y, double front_z, double up_x, ...)
        ;   XREF to: 005aa0a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x48                        ; 005b391c
    PUSH 0x0                            ; 005b391f
    PUSH 0x0                            ; 005b3921
    PUSH 0x0                            ; 005b3923
    PUSH 0x0                            ; 005b3925
    PUSH 0x0                            ; 005b3927
    PUSH 0x0                            ; 005b3929
    CALL sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0 ; 005b392b | void sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0(double x_velocity, double y_velocity, double z_velocity)
        ;   XREF to: 005aa1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005b3930
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 ; 005b3933 | int sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0()
        ;   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b3938 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH 0x1                            ; 005b393d
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0 ; 005b393f | void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
        ;   XREF to: 005a8af0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b3944
    PUSH 0x1                            ; 005b3947
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90 ; 005b3949 | void sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90(uint flag_mask)
        ;   XREF to: 005a8b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b394e
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260 ; 005b3951 | int sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260()
        ;   XREF to: 005ab260 (UNCONDITIONAL_CALL)
    CMP EAX,0x7530                      ; 005b3956
    JLE 0x005b3988                      ; 005b395b | LAB_005b3988
        ;   XREF to: 005b3988 (CONDITIONAL_JUMP)
    PUSH 0x6527ee                       ; 005b395d | = "splash-music-44.wav" | s_splash_music_44_wav_006527ee = splash-music-44.wav
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b3962 | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b3967
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b396a | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b396f
        ;   Label: LAB_005b396f
    RET                                 ; 005b3972
    PUSH dword ptr [0x00663310]         ; 005b3973 | float g_MenuChannel1MaxVolume
        ;   Label: LAB_005b3973
    PUSH 0x1                            ; 005b3979
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 ; 005b397b | void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b3980
    JMP 0x005b3854                      ; 005b3983 | LAB_005b3854
        ;   XREF to: 005b3854 (UNCONDITIONAL_JUMP)
    PUSH 0x652802                       ; 005b3988 | = "splash-music-22.wav" | s_splash_music_22_wav_00652802 = splash-music-22.wav
        ;   Label: LAB_005b3988
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005b398d | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b3992
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b3995 | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b399a
    RET                                 ; 005b399d

