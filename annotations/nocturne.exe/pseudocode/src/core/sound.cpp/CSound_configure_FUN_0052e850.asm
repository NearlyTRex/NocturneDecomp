; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_configure_FUN_0052e850(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_menu.cpp_FUN_004d23d0 at 004d26cb
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1b85
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d2328
;
; Referenced Globals:
;   TerminatedCString s_splash_music_44_wav_00594bd6
;   TerminatedCString s_splash_music_22_wav_00594bea
;   float FLOAT_005a22e4 = 0.25
;   float FLOAT_005a22e8 = 0.25
;   float FLOAT_005a22ec = 1
;
; Called Functions:
;   core_sound.cpp_CSound_reset_FUN_0052e9c0
;   sound_sndmain.cpp_enableSoundSystem_FUN_00527e40
;   sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00527380
;   sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_set3DListenerOrient_FUN_00527690
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630
;   sound_sndmain.cpp_set3DListenerPos_FUN_00527610
;   sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0
;   sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0
;   sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270
;   sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0
;   sound_sndmain.cpp_startSfx_FUN_005265a0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0052e850
        ;   Label: core_sound.cpp_CSound_configure_FUN_0052e850
    PUSH 0x1                            ; 0052e853
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 0052e855
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00527380()
    MOV dword ptr [ESP + 0x4],EAX       ; 0052e85a
    FLD float ptr [ESP + 0x4]           ; 0052e85e
    ADD ESP,0x4                         ; 0052e862
    FCOMP float ptr [0x005a22e4]        ; 0052e865 | FLOAT_005a22e4
    FNSTSW AX                           ; 0052e86b
    SAHF                                ; 0052e86d
    JA 0x0052e993                       ; 0052e86e
        ;   XREF to: 0052e993 (CONDITIONAL_JUMP)  ; LAB_0052e993
    PUSH 0x0                            ; 0052e874
        ;   Label: LAB_0052e874
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 0052e876
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00527380()
    MOV dword ptr [ESP + 0x4],EAX       ; 0052e87b
    FLD float ptr [ESP + 0x4]           ; 0052e87f
    ADD ESP,0x4                         ; 0052e883
    FCOMP float ptr [0x005a22e8]        ; 0052e886 | FLOAT_005a22e8
    FNSTSW AX                           ; 0052e88c
    SAHF                                ; 0052e88e
    JBE 0x0052e8a1                      ; 0052e88f
        ;   XREF to: 0052e8a1 (CONDITIONAL_JUMP)  ; LAB_0052e8a1
    PUSH dword ptr [0x005a22e8]         ; 0052e891 | FLOAT_005a22e8
    PUSH 0x0                            ; 0052e897
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0 ; 0052e899
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0()
    ADD ESP,0x8                         ; 0052e89e
    PUSH 0x2                            ; 0052e8a1
        ;   Label: LAB_0052e8a1
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 0052e8a3
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00527380()
    MOV dword ptr [ESP + 0x4],EAX       ; 0052e8a8
    FLD float ptr [ESP + 0x4]           ; 0052e8ac
    ADD ESP,0x4                         ; 0052e8b0
    FCOMP float ptr [0x005a22ec]        ; 0052e8b3 | FLOAT_005a22ec
    FNSTSW AX                           ; 0052e8b9
    SAHF                                ; 0052e8bb
    JBE 0x0052e8ce                      ; 0052e8bc
        ;   XREF to: 0052e8ce (CONDITIONAL_JUMP)  ; LAB_0052e8ce
    PUSH dword ptr [0x005a22ec]         ; 0052e8be | FLOAT_005a22ec
    PUSH 0x2                            ; 0052e8c4
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0 ; 0052e8c6
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0()
    ADD ESP,0x8                         ; 0052e8cb
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0 ; 0052e8ce
        ;   XREF to: 00526ca0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0()
        ;   Label: LAB_0052e8ce
    TEST EAX,EAX                        ; 0052e8d3
    JNZ 0x0052e98f                      ; 0052e8d5
        ;   XREF to: 0052e98f (CONDITIONAL_JUMP)  ; LAB_0052e98f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052e8db
    PUSH EDX                            ; 0052e8df
    CALL core_sound.cpp_CSound_reset_FUN_0052e9c0 ; 0052e8e0
        ;   XREF to: 0052e9c0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_reset_FUN_0052e9c0()
    ADD ESP,0x4                         ; 0052e8e5
    PUSH 0x0                            ; 0052e8e8
    PUSH 0x0                            ; 0052e8ea
    PUSH 0x0                            ; 0052e8ec
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630 ; 0052e8ee
        ;   XREF to: 00528630 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630()
    ADD ESP,0xc                         ; 0052e8f3
    PUSH 0x0                            ; 0052e8f6
    PUSH 0x0                            ; 0052e8f8
    PUSH 0x0                            ; 0052e8fa
    PUSH 0x0                            ; 0052e8fc
    PUSH 0x0                            ; 0052e8fe
    PUSH 0x0                            ; 0052e900
    CALL sound_sndmain.cpp_set3DListenerPos_FUN_00527610 ; 0052e902
        ;   XREF to: 00527610 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_set3DListenerPos_FUN_00527610()
    ADD ESP,0x18                        ; 0052e907
    PUSH 0x3ff00000                     ; 0052e90a
    PUSH 0x0                            ; 0052e90f
    PUSH 0x0                            ; 0052e911
    PUSH 0x0                            ; 0052e913
    PUSH 0x0                            ; 0052e915
    PUSH 0x0                            ; 0052e917
    PUSH 0x0                            ; 0052e919
    PUSH 0x0                            ; 0052e91b
    PUSH 0x3ff00000                     ; 0052e91d
    PUSH 0x0                            ; 0052e922
    PUSH 0x0                            ; 0052e924
    PUSH 0x0                            ; 0052e926
    PUSH 0x0                            ; 0052e928
    PUSH 0x0                            ; 0052e92a
    PUSH 0x0                            ; 0052e92c
    PUSH 0x0                            ; 0052e92e
    PUSH 0x3ff00000                     ; 0052e930
    PUSH 0x0                            ; 0052e935
    CALL sound_sndmain.cpp_set3DListenerOrient_FUN_00527690 ; 0052e937
        ;   XREF to: 00527690 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_set3DListenerOrient_FUN_00527690()
    ADD ESP,0x48                        ; 0052e93c
    PUSH 0x0                            ; 0052e93f
    PUSH 0x0                            ; 0052e941
    PUSH 0x0                            ; 0052e943
    PUSH 0x0                            ; 0052e945
    PUSH 0x0                            ; 0052e947
    PUSH 0x0                            ; 0052e949
    CALL sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0 ; 0052e94b
        ;   XREF to: 005277b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0()
    ADD ESP,0x18                        ; 0052e950
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_00527e40 ; 0052e953
        ;   XREF to: 00527e40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSoundSystem_FUN_00527e40()
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0052e958
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH 0x1                            ; 0052e95d
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0 ; 0052e95f
        ;   XREF to: 005261b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0()
    ADD ESP,0x4                         ; 0052e964
    PUSH 0x1                            ; 0052e967
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270 ; 0052e969
        ;   XREF to: 00526270 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270()
    ADD ESP,0x4                         ; 0052e96e
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0 ; 0052e971
        ;   XREF to: 005281b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0()
    CMP EAX,0x7530                      ; 0052e976
    JLE 0x0052e9a8                      ; 0052e97b
        ;   XREF to: 0052e9a8 (CONDITIONAL_JUMP)  ; LAB_0052e9a8
    PUSH 0x594bd6                       ; 0052e97d | = "splash-music-44.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 0052e982
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_startSfx_FUN_005265a0()
    ADD ESP,0x4                         ; 0052e987
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0052e98a
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    ADD ESP,0x4                         ; 0052e98f
        ;   Label: LAB_0052e98f
    RET                                 ; 0052e992
    PUSH dword ptr [0x005a22e4]         ; 0052e993 | FLOAT_005a22e4
        ;   Label: LAB_0052e993
    PUSH 0x1                            ; 0052e999
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0 ; 0052e99b
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0()
    ADD ESP,0x8                         ; 0052e9a0
    JMP 0x0052e874                      ; 0052e9a3
        ;   XREF to: 0052e874 (UNCONDITIONAL_JUMP)  ; LAB_0052e874
    PUSH 0x594bea                       ; 0052e9a8 | = "splash-music-22.wav"
        ;   Label: LAB_0052e9a8
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 0052e9ad
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_startSfx_FUN_005265a0()
    ADD ESP,0x4                         ; 0052e9b2
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0052e9b5
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    ADD ESP,0x4                         ; 0052e9ba
    RET                                 ; 0052e9bd

