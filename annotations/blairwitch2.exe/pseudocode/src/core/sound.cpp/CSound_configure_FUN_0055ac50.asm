; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_configure_FUN_0055ac50(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_menu.cpp_FUN_004ed260 at 004edb4a
;   core_menu.cpp_FUN_004ee1a0 at 004ee34d
;   core_menu.cpp_showMainGameMenu_FUN_004ee3f0 at 004ee732
;
; Referenced Globals:
;   undefined4 s_XBLAIRMENU_wav_005ea903+1
;   TerminatedCString s_XBLAIRMENU_wav_005ea913
;   undefined4 DAT_005fbdb4
;   undefined4 DAT_005fbdb8
;   undefined4 DAT_005fbdbc
;
; Called Functions:
;   core_sound.cpp_CSound_reset_FUN_0055adb0
;   sound_sndmain.cpp_enableSoundSystem_FUN_005524b0
;   sound_sndmain.cpp_getAudioSampleRate_FUN_005527f0
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00551190
;   sound_sndmain.cpp_isSoundMuted_FUN_00550bc0
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_set3DListenerOrient_FUN_005514f0
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_00552cc0
;   sound_sndmain.cpp_set3DListenerPos_FUN_00551490
;   sound_sndmain.cpp_set3DListenerVelocity_FUN_00551570
;   sound_sndmain.cpp_setNextSfxChannel_FUN_00550310
;   sound_sndmain.cpp_setNextSfxFlagBits_FUN_005503a0
;   sound_sndmain.cpp_setSfxChannelVol_FUN_00551100
;   sound_sndmain.cpp_startSfx_FUN_005506b0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0055ac50
        ;   Label: core_sound.cpp_CSound_configure_FUN_0055ac50
    PUSH 0x1                            ; 0055ac53
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 0055ac55
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00551190(int channel_index)
    MOV dword ptr [ESP + 0x4],EAX       ; 0055ac5a
    FLD float ptr [ESP + 0x4]           ; 0055ac5e
    ADD ESP,0x4                         ; 0055ac62
    FCOMP float ptr [0x005fbdb4]        ; 0055ac65 | DAT_005fbdb4
    FNSTSW AX                           ; 0055ac6b
    SAHF                                ; 0055ac6d
    JA 0x0055ad7b                       ; 0055ac6e
        ;   XREF to: 0055ad7b (CONDITIONAL_JUMP)  ; LAB_0055ad7b
    PUSH 0x0                            ; 0055ac74
        ;   Label: LAB_0055ac74
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 0055ac76
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00551190(int channel_index)
    MOV dword ptr [ESP + 0x4],EAX       ; 0055ac7b
    FLD float ptr [ESP + 0x4]           ; 0055ac7f
    ADD ESP,0x4                         ; 0055ac83
    FCOMP float ptr [0x005fbdb8]        ; 0055ac86 | DAT_005fbdb8
    FNSTSW AX                           ; 0055ac8c
    SAHF                                ; 0055ac8e
    JBE 0x0055aca1                      ; 0055ac8f
        ;   XREF to: 0055aca1 (CONDITIONAL_JUMP)  ; LAB_0055aca1
    PUSH dword ptr [0x005fbdb8]         ; 0055ac91 | DAT_005fbdb8
    PUSH 0x0                            ; 0055ac97
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00551100 ; 0055ac99
        ;   XREF to: 00551100 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00551100(int channel_index, float volume)
    ADD ESP,0x8                         ; 0055ac9e
    PUSH 0x2                            ; 0055aca1
        ;   Label: LAB_0055aca1
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 0055aca3
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00551190(int channel_index)
    MOV dword ptr [ESP + 0x4],EAX       ; 0055aca8
    FLD float ptr [ESP + 0x4]           ; 0055acac
    ADD ESP,0x4                         ; 0055acb0
    FCOMP float ptr [0x005fbdbc]        ; 0055acb3 | DAT_005fbdbc
    FNSTSW AX                           ; 0055acb9
    SAHF                                ; 0055acbb
    JBE 0x0055acce                      ; 0055acbc
        ;   XREF to: 0055acce (CONDITIONAL_JUMP)  ; LAB_0055acce
    PUSH dword ptr [0x005fbdbc]         ; 0055acbe | DAT_005fbdbc
    PUSH 0x2                            ; 0055acc4
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00551100 ; 0055acc6
        ;   XREF to: 00551100 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00551100(int channel_index, float volume)
    ADD ESP,0x8                         ; 0055accb
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00550bc0 ; 0055acce
        ;   XREF to: 00550bc0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00550bc0()
        ;   Label: LAB_0055acce
    TEST EAX,EAX                        ; 0055acd3
    JNZ 0x0055ad77                      ; 0055acd5
        ;   XREF to: 0055ad77 (CONDITIONAL_JUMP)  ; LAB_0055ad77
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055acdb
    PUSH EDX                            ; 0055acdf
    CALL core_sound.cpp_CSound_reset_FUN_0055adb0 ; 0055ace0
        ;   XREF to: 0055adb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_reset_FUN_0055adb0(CSound * this_ptr)
    ADD ESP,0x4                         ; 0055ace5
    PUSH 0x0                            ; 0055ace8
    PUSH 0x0                            ; 0055acea
    PUSH 0x0                            ; 0055acec
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_00552cc0 ; 0055acee
        ;   XREF to: 00552cc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrientRight_FUN_00552cc0(float orient_right_x, float orient_right_y, float orient_right_z)
    ADD ESP,0xc                         ; 0055acf3
    PUSH 0x0                            ; 0055acf6
    PUSH 0x0                            ; 0055acf8
    PUSH 0x0                            ; 0055acfa
    PUSH 0x0                            ; 0055acfc
    PUSH 0x0                            ; 0055acfe
    PUSH 0x0                            ; 0055ad00
    CALL sound_sndmain.cpp_set3DListenerPos_FUN_00551490 ; 0055ad02
        ;   XREF to: 00551490 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerPos_FUN_00551490(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 0055ad07
    PUSH 0x3f800000                     ; 0055ad0a
    PUSH 0x0                            ; 0055ad0f
    PUSH 0x0                            ; 0055ad11
    PUSH 0x0                            ; 0055ad13
    PUSH 0x3f800000                     ; 0055ad15
    PUSH 0x0                            ; 0055ad1a
    PUSH 0x0                            ; 0055ad1c
    PUSH 0x0                            ; 0055ad1e
    PUSH 0x3f800000                     ; 0055ad20
    CALL sound_sndmain.cpp_set3DListenerOrient_FUN_005514f0 ; 0055ad25
        ;   XREF to: 005514f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrient_FUN_005514f0(float front_x, float front_y, float front_z, float up_x, ...)
    ADD ESP,0x24                        ; 0055ad2a
    PUSH 0x0                            ; 0055ad2d
    PUSH 0x0                            ; 0055ad2f
    PUSH 0x0                            ; 0055ad31
    CALL sound_sndmain.cpp_set3DListenerVelocity_FUN_00551570 ; 0055ad33
        ;   XREF to: 00551570 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerVelocity_FUN_00551570(float velocity_x, float velocity_y, float velocity_z)
    ADD ESP,0xc                         ; 0055ad38
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005524b0 ; 0055ad3b
        ;   XREF to: 005524b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_enableSoundSystem_FUN_005524b0()
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 0055ad40
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH 0x1                            ; 0055ad45
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00550310 ; 0055ad47
        ;   XREF to: 00550310 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00550310(int channel_index)
    ADD ESP,0x4                         ; 0055ad4c
    PUSH 0x1                            ; 0055ad4f
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_005503a0 ; 0055ad51
        ;   XREF to: 005503a0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlagBits_FUN_005503a0(uint flag_mask)
    ADD ESP,0x4                         ; 0055ad56
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005527f0 ; 0055ad59
        ;   XREF to: 005527f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_005527f0()
    CMP EAX,0x7530                      ; 0055ad5e
    JLE 0x0055ad90                      ; 0055ad63
        ;   XREF to: 0055ad90 (CONDITIONAL_JUMP)  ; LAB_0055ad90
    PUSH 0x5ea904                       ; 0055ad65 | s_XBLAIRMENU_wav_005ea903+1
    CALL sound_sndmain.cpp_startSfx_FUN_005506b0 ; 0055ad6a
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005506b0(char * filename)
    ADD ESP,0x4                         ; 0055ad6f
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 0055ad72
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    ADD ESP,0x4                         ; 0055ad77
        ;   Label: LAB_0055ad77
    RET                                 ; 0055ad7a
    PUSH dword ptr [0x005fbdb4]         ; 0055ad7b | DAT_005fbdb4
        ;   Label: LAB_0055ad7b
    PUSH 0x1                            ; 0055ad81
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00551100 ; 0055ad83
        ;   XREF to: 00551100 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00551100(int channel_index, float volume)
    ADD ESP,0x8                         ; 0055ad88
    JMP 0x0055ac74                      ; 0055ad8b
        ;   XREF to: 0055ac74 (UNCONDITIONAL_JUMP)  ; LAB_0055ac74
    PUSH 0x5ea913                       ; 0055ad90 | = "XBLAIRMENU.wav"
        ;   Label: LAB_0055ad90
    CALL sound_sndmain.cpp_startSfx_FUN_005506b0 ; 0055ad95
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005506b0(char * filename)
    ADD ESP,0x4                         ; 0055ad9a
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 0055ad9d
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    ADD ESP,0x4                         ; 0055ada2
    RET                                 ; 0055ada5

