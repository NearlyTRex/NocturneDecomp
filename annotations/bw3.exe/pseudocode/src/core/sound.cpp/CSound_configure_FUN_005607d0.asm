; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_configure_FUN_005607d0(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_menu.cpp_FUN_004e94f0 at 004e9d49
;   core_menu.cpp_FUN_004ea280 at 004ea421
;   core_menu.cpp_showMainGameMenu_FUN_004ea4d0 at 004ea812
;
; Referenced Globals:
;   undefined4 s_splash_mp3_005d5356+1
;   TerminatedCString s_splash_music_22_wav_005d5362
;   undefined4 DAT_005e49d4
;   undefined4 DAT_005e49d8
;   undefined4 DAT_005e49dc
;
; Called Functions:
;   core_sound.cpp_CSound_reset_FUN_00560930
;   sound_sndmain.cpp_enableSoundSystem_FUN_00558050
;   sound_sndmain.cpp_getAudioSampleRate_FUN_00558390
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20
;   sound_sndmain.cpp_isSoundMuted_FUN_00556750
;   sound_sndmain.cpp_popSfxOptions_FUN_00556050
;   sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0
;   sound_sndmain.cpp_set3DListenerOrient_FUN_00557080
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_00558860
;   sound_sndmain.cpp_set3DListenerPos_FUN_00557020
;   sound_sndmain.cpp_set3DListenerVelocity_FUN_00557100
;   sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90
;   sound_sndmain.cpp_setNextSfxFlagBits_FUN_00555f20
;   sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90
;   sound_sndmain.cpp_startSfx_FUN_00556240
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005607d0
        ;   Label: core_sound.cpp_CSound_configure_FUN_005607d0
    PUSH 0x1                            ; 005607d3
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 005607d5
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20(int channel_index)
    MOV dword ptr [ESP + 0x4],EAX       ; 005607da
    FLD float ptr [ESP + 0x4]           ; 005607de
    ADD ESP,0x4                         ; 005607e2
    FCOMP float ptr [0x005e49d4]        ; 005607e5 | DAT_005e49d4
    FNSTSW AX                           ; 005607eb
    SAHF                                ; 005607ed
    JA 0x005608fb                       ; 005607ee
        ;   XREF to: 005608fb (CONDITIONAL_JUMP)  ; LAB_005608fb
    PUSH 0x0                            ; 005607f4
        ;   Label: LAB_005607f4
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 005607f6
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20(int channel_index)
    MOV dword ptr [ESP + 0x4],EAX       ; 005607fb
    FLD float ptr [ESP + 0x4]           ; 005607ff
    ADD ESP,0x4                         ; 00560803
    FCOMP float ptr [0x005e49d8]        ; 00560806 | DAT_005e49d8
    FNSTSW AX                           ; 0056080c
    SAHF                                ; 0056080e
    JBE 0x00560821                      ; 0056080f
        ;   XREF to: 00560821 (CONDITIONAL_JUMP)  ; LAB_00560821
    PUSH dword ptr [0x005e49d8]         ; 00560811 | DAT_005e49d8
    PUSH 0x0                            ; 00560817
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 ; 00560819
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90(int channel_index, float volume)
    ADD ESP,0x8                         ; 0056081e
    PUSH 0x2                            ; 00560821
        ;   Label: LAB_00560821
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 00560823
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20(int channel_index)
    MOV dword ptr [ESP + 0x4],EAX       ; 00560828
    FLD float ptr [ESP + 0x4]           ; 0056082c
    ADD ESP,0x4                         ; 00560830
    FCOMP float ptr [0x005e49dc]        ; 00560833 | DAT_005e49dc
    FNSTSW AX                           ; 00560839
    SAHF                                ; 0056083b
    JBE 0x0056084e                      ; 0056083c
        ;   XREF to: 0056084e (CONDITIONAL_JUMP)  ; LAB_0056084e
    PUSH dword ptr [0x005e49dc]         ; 0056083e | DAT_005e49dc
    PUSH 0x2                            ; 00560844
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 ; 00560846
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90(int channel_index, float volume)
    ADD ESP,0x8                         ; 0056084b
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00556750 ; 0056084e
        ;   XREF to: 00556750 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00556750()
        ;   Label: LAB_0056084e
    TEST EAX,EAX                        ; 00560853
    JNZ 0x005608f7                      ; 00560855
        ;   XREF to: 005608f7 (CONDITIONAL_JUMP)  ; LAB_005608f7
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056085b
    PUSH EDX                            ; 0056085f
    CALL core_sound.cpp_CSound_reset_FUN_00560930 ; 00560860
        ;   XREF to: 00560930 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_reset_FUN_00560930(CSound * this_ptr)
    ADD ESP,0x4                         ; 00560865
    PUSH 0x0                            ; 00560868
    PUSH 0x0                            ; 0056086a
    PUSH 0x0                            ; 0056086c
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_00558860 ; 0056086e
        ;   XREF to: 00558860 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrientRight_FUN_00558860(float orient_right_x, float orient_right_y, float orient_right_z)
    ADD ESP,0xc                         ; 00560873
    PUSH 0x0                            ; 00560876
    PUSH 0x0                            ; 00560878
    PUSH 0x0                            ; 0056087a
    PUSH 0x0                            ; 0056087c
    PUSH 0x0                            ; 0056087e
    PUSH 0x0                            ; 00560880
    CALL sound_sndmain.cpp_set3DListenerPos_FUN_00557020 ; 00560882
        ;   XREF to: 00557020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerPos_FUN_00557020(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 00560887
    PUSH 0x3f800000                     ; 0056088a
    PUSH 0x0                            ; 0056088f
    PUSH 0x0                            ; 00560891
    PUSH 0x0                            ; 00560893
    PUSH 0x3f800000                     ; 00560895
    PUSH 0x0                            ; 0056089a
    PUSH 0x0                            ; 0056089c
    PUSH 0x0                            ; 0056089e
    PUSH 0x3f800000                     ; 005608a0
    CALL sound_sndmain.cpp_set3DListenerOrient_FUN_00557080 ; 005608a5
        ;   XREF to: 00557080 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrient_FUN_00557080(float front_x, float front_y, float front_z, float up_x, ...)
    ADD ESP,0x24                        ; 005608aa
    PUSH 0x0                            ; 005608ad
    PUSH 0x0                            ; 005608af
    PUSH 0x0                            ; 005608b1
    CALL sound_sndmain.cpp_set3DListenerVelocity_FUN_00557100 ; 005608b3
        ;   XREF to: 00557100 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerVelocity_FUN_00557100(float velocity_x, float velocity_y, float velocity_z)
    ADD ESP,0xc                         ; 005608b8
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_00558050 ; 005608bb
        ;   XREF to: 00558050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_enableSoundSystem_FUN_00558050()
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 005608c0
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
    PUSH 0x1                            ; 005608c5
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90 ; 005608c7
        ;   XREF to: 00555e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90(int channel_index)
    ADD ESP,0x4                         ; 005608cc
    PUSH 0x1                            ; 005608cf
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_00555f20 ; 005608d1
        ;   XREF to: 00555f20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlagBits_FUN_00555f20(uint flag_mask)
    ADD ESP,0x4                         ; 005608d6
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_00558390 ; 005608d9
        ;   XREF to: 00558390 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_00558390()
    CMP EAX,0x7530                      ; 005608de
    JLE 0x00560910                      ; 005608e3
        ;   XREF to: 00560910 (CONDITIONAL_JUMP)  ; LAB_00560910
    PUSH 0x5d5357                       ; 005608e5 | s_splash_mp3_005d5356+1
    CALL sound_sndmain.cpp_startSfx_FUN_00556240 ; 005608ea
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00556240(char * filename)
    ADD ESP,0x4                         ; 005608ef
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 005608f2
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    ADD ESP,0x4                         ; 005608f7
        ;   Label: LAB_005608f7
    RET                                 ; 005608fa
    PUSH dword ptr [0x005e49d4]         ; 005608fb | DAT_005e49d4
        ;   Label: LAB_005608fb
    PUSH 0x1                            ; 00560901
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 ; 00560903
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90(int channel_index, float volume)
    ADD ESP,0x8                         ; 00560908
    JMP 0x005607f4                      ; 0056090b
        ;   XREF to: 005607f4 (UNCONDITIONAL_JUMP)  ; LAB_005607f4
    PUSH 0x5d5362                       ; 00560910 | = "splash-music-22.wav"
        ;   Label: LAB_00560910
    CALL sound_sndmain.cpp_startSfx_FUN_00556240 ; 00560915
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00556240(char * filename)
    ADD ESP,0x4                         ; 0056091a
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 0056091d
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    ADD ESP,0x4                         ; 00560922
    RET                                 ; 00560925

