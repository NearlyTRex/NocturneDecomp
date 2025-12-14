; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00(void)
;
;
; XREF[1]:
;   core_sound.cpp_CSound_ctor_FUN_005b2ce0 at 005b2cf5
;
; Called Functions:
;   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
;   sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005ab990
;   sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
;   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860
;   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
;   sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_005aa240
;   sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0
;   sound_sndmain.cpp_set3DListenerPos_FUN_005aa020
;   sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0
;   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aae00
        ;   Label: sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00
    XOR EBX,EBX                         ; 005aae01
    PUSH 0x3f800000                     ; 005aae03
        ;   Label: LAB_005aae03
    PUSH EBX                            ; 005aae08
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 ; 005aae09
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
    ADD ESP,0x8                         ; 005aae0e
    PUSH 0x1                            ; 005aae11
    PUSH EBX                            ; 005aae13
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 005aae14
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
    INC EBX                             ; 005aae19
    ADD ESP,0x8                         ; 005aae1a
    CMP EBX,0x20                        ; 005aae1d
    JL 0x005aae03                       ; 005aae20
        ;   XREF to: 005aae03 (CONDITIONAL_JUMP)  ; LAB_005aae03
    PUSH 0x3ff00000                     ; 005aae22
    PUSH 0x0                            ; 005aae27
    CALL sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_005aa240 ; 005aae29
        ;   XREF to: 005aa240 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_005aa240(double distance_in_feet)
    ADD ESP,0x8                         ; 005aae2e
    PUSH 0x0                            ; 005aae31
    PUSH 0x0                            ; 005aae33
    PUSH 0x0                            ; 005aae35
    PUSH 0x0                            ; 005aae37
    PUSH 0x0                            ; 005aae39
    PUSH 0x0                            ; 005aae3b
    CALL sound_sndmain.cpp_set3DListenerPos_FUN_005aa020 ; 005aae3d
        ;   XREF to: 005aa020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerPos_FUN_005aa020(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 005aae42
    PUSH 0x3ff00000                     ; 005aae45
    PUSH 0x0                            ; 005aae4a
    PUSH 0x0                            ; 005aae4c
    PUSH 0x0                            ; 005aae4e
    PUSH 0x0                            ; 005aae50
    PUSH 0x0                            ; 005aae52
    PUSH 0x0                            ; 005aae54
    PUSH 0x0                            ; 005aae56
    PUSH 0x3ff00000                     ; 005aae58
    PUSH 0x0                            ; 005aae5d
    PUSH 0x0                            ; 005aae5f
    PUSH 0x0                            ; 005aae61
    PUSH 0x0                            ; 005aae63
    PUSH 0x0                            ; 005aae65
    PUSH 0x0                            ; 005aae67
    PUSH 0x0                            ; 005aae69
    PUSH 0x3ff00000                     ; 005aae6b
    PUSH 0x0                            ; 005aae70
    CALL sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0 ; 005aae72
        ;   XREF to: 005aa0a0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0(double front_x, double front_y, double front_z, double up_x, ...)
    ADD ESP,0x48                        ; 005aae77
    PUSH 0x0                            ; 005aae7a
    PUSH 0x0                            ; 005aae7c
    PUSH 0x0                            ; 005aae7e
    PUSH 0x0                            ; 005aae80
    PUSH 0x0                            ; 005aae82
    PUSH 0x0                            ; 005aae84
    CALL sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0 ; 005aae86
        ;   XREF to: 005aa1c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0(double x_velocity, double y_velocity, double z_velocity)
    ADD ESP,0x18                        ; 005aae8b
    CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0 ; 005aae8e
        ;   XREF to: 005ab6c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0()
    PUSH EAX                            ; 005aae93
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0 ; 005aae94
        ;   XREF to: 005ab4c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0(int device_id)
    ADD ESP,0x4                         ; 005aae99
    CALL sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005ab990 ; 005aae9c
        ;   XREF to: 005ab990 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005ab990()
    PUSH EAX                            ; 005aaea1
    CALL sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860 ; 005aaea2
        ;   XREF to: 005ab860 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860(int device_id)
    ADD ESP,0x4                         ; 005aaea7
    POP EBX                             ; 005aaeaa
    RET                                 ; 005aaeab

