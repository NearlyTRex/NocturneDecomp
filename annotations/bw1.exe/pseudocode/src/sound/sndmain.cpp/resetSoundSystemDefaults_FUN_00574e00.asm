; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_resetSoundSystemDefaults_FUN_00574e00(void)
;
;
; XREF[1]:
;   core_sound.cpp_CSound_ctor_FUN_0057cb10 at 0057cb25
;
; Called Functions:
;   sound_sndmain.cpp_enableSfxChannel_FUN_00573c50
;   sound_sndmain.cpp_FUN_00573ec0
;   sound_sndmain.cpp_FUN_00573f20
;   sound_sndmain.cpp_FUN_00573fa0
;   sound_sndmain.cpp_FUN_00573fe0
;   sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005759a0
;   sound_sndmain.cpp_getCurrentSoundDevice_FUN_005756d0
;   sound_sndmain.cpp_selectRecordingDevice_FUN_00575870
;   sound_sndmain.cpp_selectSoundDevice_FUN_005754d0
;   sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574e00
        ;   Label: sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00574e00
    XOR EBX,EBX                         ; 00574e01
    PUSH 0x3f800000                     ; 00574e03
        ;   Label: LAB_00574e03
    PUSH EBX                            ; 00574e08
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30 ; 00574e09
        ;   XREF to: 00573b30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30(int channel_index, float volume)
    ADD ESP,0x8                         ; 00574e0e
    PUSH 0x1                            ; 00574e11
    PUSH EBX                            ; 00574e13
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00573c50 ; 00574e14
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00573c50(int channel_index, int enable_state)
    INC EBX                             ; 00574e19
    ADD ESP,0x8                         ; 00574e1a
    CMP EBX,0x20                        ; 00574e1d
    JL 0x00574e03                       ; 00574e20
        ;   XREF to: 00574e03 (CONDITIONAL_JUMP)  ; LAB_00574e03
    PUSH 0x3f800000                     ; 00574e22
    CALL sound_sndmain.cpp_FUN_00573fe0 ; 00574e27
        ;   XREF to: 00573fe0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573fe0()
    ADD ESP,0x4                         ; 00574e2c
    PUSH 0x0                            ; 00574e2f
    PUSH 0x0                            ; 00574e31
    PUSH 0x0                            ; 00574e33
    PUSH 0x0                            ; 00574e35
    PUSH 0x0                            ; 00574e37
    PUSH 0x0                            ; 00574e39
    CALL sound_sndmain.cpp_FUN_00573ec0 ; 00574e3b
        ;   XREF to: 00573ec0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573ec0()
    ADD ESP,0x18                        ; 00574e40
    PUSH 0x3f800000                     ; 00574e43
    PUSH 0x0                            ; 00574e48
    PUSH 0x0                            ; 00574e4a
    PUSH 0x0                            ; 00574e4c
    PUSH 0x3f800000                     ; 00574e4e
    PUSH 0x0                            ; 00574e53
    PUSH 0x0                            ; 00574e55
    PUSH 0x0                            ; 00574e57
    PUSH 0x3f800000                     ; 00574e59
    CALL sound_sndmain.cpp_FUN_00573f20 ; 00574e5e
        ;   XREF to: 00573f20 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573f20()
    ADD ESP,0x24                        ; 00574e63
    PUSH 0x0                            ; 00574e66
    PUSH 0x0                            ; 00574e68
    PUSH 0x0                            ; 00574e6a
    CALL sound_sndmain.cpp_FUN_00573fa0 ; 00574e6c
        ;   XREF to: 00573fa0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573fa0()
    ADD ESP,0xc                         ; 00574e71
    CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_005756d0 ; 00574e74
        ;   XREF to: 005756d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getCurrentSoundDevice_FUN_005756d0()
    PUSH EAX                            ; 00574e79
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_005754d0 ; 00574e7a
        ;   XREF to: 005754d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_005754d0(int device_id)
    ADD ESP,0x4                         ; 00574e7f
    CALL sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005759a0 ; 00574e82
        ;   XREF to: 005759a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005759a0()
    PUSH EAX                            ; 00574e87
    CALL sound_sndmain.cpp_selectRecordingDevice_FUN_00575870 ; 00574e88
        ;   XREF to: 00575870 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectRecordingDevice_FUN_00575870(int device_id)
    ADD ESP,0x4                         ; 00574e8d
    POP EBX                             ; 00574e90
    RET                                 ; 00574e91

