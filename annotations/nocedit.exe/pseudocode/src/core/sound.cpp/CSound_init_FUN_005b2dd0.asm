; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_init_FUN_005b2dd0(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   core_game.cpp_CGame_processHotkeys_FUN_004dcee0 at 004dd448
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e3662
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004dbba1
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEventList g_CEventListInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0326eed8
;   undefined4 DAT_0326eedc
;   undefined4 DAT_0326eee0
;   undefined4 g_CDemonSetInstance.player_on_train
;   CVector3f g_SoundListenerPrev
;   undefined4 g_SoundListenerPrev.y
;   undefined4 g_SoundListenerPrev.z
;   CVector3f CVector3f_03f6af7c
;   undefined4 CVector3f_03f6af7c.y
;   undefined4 CVector3f_03f6af7c.z
;   CVector3f g_SoundListenerOrient
;   ... and 12 more
;
; Called Functions:
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004b0f00
;   core_sound.cpp_CSound_playSound_FUN_005b3a20
;   core_sound.cpp_updateListeners_FUN_005b1870
;   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
;   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
;   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
;   sound_sndmain.cpp_isSoundBusy_FUN_005ab540
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0
;   sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0
;   sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
;   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b2dd0
        ;   Label: core_sound.cpp_CSound_init_FUN_005b2dd0
    SUB ESP,0x10                        ; 005b2dd1
    XOR EDX,EDX                         ; 005b2dd4
    PUSH EDX                            ; 005b2dd6
    PUSH EDX                            ; 005b2dd7
    PUSH EDX                            ; 005b2dd8
    MOV ESI,0x501502f9                  ; 005b2dd9
    PUSH EDX                            ; 005b2dde
    MOV dword ptr [0x03f6af7c],EDX      ; 005b2ddf | CVector3f_03f6af7c
    MOV dword ptr [0x03f6af80],EDX      ; 005b2de5 | CVector3f_03f6af7c.y
    PUSH EDX                            ; 005b2deb
    MOV dword ptr [0x03f6af84],EDX      ; 005b2dec | CVector3f_03f6af7c.z
    MOV dword ptr [0x03f6af70],ESI      ; 005b2df2 | g_SoundListenerPrev
    PUSH EDX                            ; 005b2df8
    MOV dword ptr [0x03f6af74],ESI      ; 005b2df9 | g_SoundListenerPrev.y
    MOV dword ptr [0x03f6af78],ESI      ; 005b2dff | g_SoundListenerPrev.z
    CALL sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0 ; 005b2e05
        ;   XREF to: 005aa1c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0(double x_velocity, double y_velocity, double z_velocity)
    ADD ESP,0x18                        ; 005b2e0a
    CALL core_sound.cpp_updateListeners_FUN_005b1870 ; 005b2e0d
        ;   XREF to: 005b1870 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_updateListeners_FUN_005b1870()
    PUSH dword ptr [0x03f6af90]         ; 005b2e12 | g_SoundListenerOrient.z
    PUSH dword ptr [0x03f6af8c]         ; 005b2e18 | g_SoundListenerOrient.y
    XOR EAX,EAX                         ; 005b2e1e
    PUSH dword ptr [0x03f6af88]         ; 005b2e20 | g_SoundListenerOrient
    MOV [0x03f6af80],EAX                ; 005b2e26 | CVector3f_03f6af7c.y
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0 ; 005b2e2b
        ;   XREF to: 005ab6e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0(float orient_right_x, float orient_right_y, float orient_right_z)
    ADD ESP,0xc                         ; 005b2e30
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 ; 005b2e33
        ;   XREF to: 005aaef0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0()
    CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540 ; 005b2e38
        ;   XREF to: 005ab540 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_005ab540()
    TEST EAX,EAX                        ; 005b2e3d
    JNZ 0x005b2e46                      ; 005b2e3f
        ;   XREF to: 005b2e46 (CONDITIONAL_JUMP)  ; LAB_005b2e46
    ADD ESP,0x10                        ; 005b2e41
    POP ESI                             ; 005b2e44
    RET                                 ; 005b2e45
    PUSH EDI                            ; 005b2e46
        ;   Label: LAB_005b2e46
    PUSH EBX                            ; 005b2e47
    MOV EDX,0x3f800000                  ; 005b2e48
    XOR EBX,EBX                         ; 005b2e4d
    MOV dword ptr [0x03f6b7b0],EDX      ; 005b2e4f | g_CurrentVolumeMultiplier
    PUSH EBX                            ; 005b2e55
    MOV dword ptr [0x03f6b7b4],EDX      ; 005b2e56 | g_TargetVolumeMultiplier
    MOV dword ptr [0x03f6b7b8],EBX      ; 005b2e5c | g_VolumeFadeTimeRemaining
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 005b2e62
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    ADD ESP,0x4                         ; 005b2e67
    TEST EAX,EAX                        ; 005b2e6a
    JZ 0x005b2f5a                       ; 005b2e6c
        ;   XREF to: 005b2f5a (CONDITIONAL_JUMP)  ; LAB_005b2f5a
    PUSH 0x1                            ; 005b2e72
    PUSH 0x3                            ; 005b2e74
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 005b2e76
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 005b2e7b
    PUSH EBX                            ; 005b2e7e
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 005b2e7f
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
    MOV dword ptr [ESP + 0x18],EAX      ; 005b2e84
    FLD float ptr [ESP + 0x18]          ; 005b2e88
    ADD ESP,0x4                         ; 005b2e8c
    FMUL float ptr [0x03f6b7b0]         ; 005b2e8f | g_CurrentVolumeMultiplier
    SUB ESP,0x4                         ; 005b2e95
    FSTP float ptr [ESP]                ; 005b2e98
    PUSH 0x3                            ; 005b2e9b
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 ; 005b2e9d
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
    ADD ESP,0x8                         ; 005b2ea2
        ;   Label: LAB_005b2ea2
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b2ea5
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x3                            ; 005b2eaa
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0 ; 005b2eac
        ;   XREF to: 005a8af0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
    ADD ESP,0x4                         ; 005b2eb1
    PUSH 0x3f6b780                      ; 005b2eb4 | g_SoundAmbientSoundName
    MOV ESI,dword ptr [0x006810c8]      ; 005b2eb9 | g_CDemonSetPtr
    PUSH ESI                            ; 005b2ebf | g_CDemonSetInstance
    MOV EDI,dword ptr [ESP + 0x28]      ; 005b2ec0
    PUSH EDI                            ; 005b2ec4
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 005b2ec5
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 005b2eca
    MOV [0x03f6b7a8],EAX                ; 005b2ecd | g_SoundAmbientSfxHandle
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b2ed2
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    MOV EAX,[0x006810c8]                ; 005b2ed7 | g_CDemonSetInstance | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15aca8],0x0  ; 005b2edc | g_CDemonSetInstance.player_on_train
    JZ 0x005b2f39                       ; 005b2ee3
        ;   XREF to: 005b2f39 (CONDITIONAL_JUMP)  ; LAB_005b2f39
    FLD float ptr [EAX + 0x15ac60]      ; 005b2ee5 | DAT_0326eed8
    FCHS                                ; 005b2eeb
    FSTP float ptr [ESP + 0x8]          ; 005b2eed
    FLD float ptr [EAX + 0x15ac64]      ; 005b2ef1 | DAT_0326eedc
    FCHS                                ; 005b2ef7
    FSTP float ptr [ESP + 0xc]          ; 005b2ef9
    FLD float ptr [EAX + 0x15ac68]      ; 005b2efd | DAT_0326eee0
    FCHS                                ; 005b2f03
    LEA EAX,[ESP + 0x8]                 ; 005b2f05
    FSTP float ptr [ESP + 0x10]         ; 005b2f09
    CMP EAX,0x3f6b85c                   ; 005b2f0d | g_TrainVelocityVector
    JZ 0x005b2f2f                       ; 005b2f12
        ;   XREF to: 005b2f2f (CONDITIONAL_JUMP)  ; LAB_005b2f2f
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b2f14
    MOV [0x03f6b85c],EAX                ; 005b2f18 | g_TrainVelocityVector
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b2f1d
    MOV [0x03f6b860],EAX                ; 005b2f21 | g_TrainVelocityVector.y
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b2f26
    MOV [0x03f6b864],EAX                ; 005b2f2a | g_TrainVelocityVector.z
    MOV dword ptr [0x03f6b86c],0xffffffff ; 005b2f2f | g_TrainLastCameraIndex
        ;   Label: LAB_005b2f2f
    MOV EDX,dword ptr [0x006793d0]      ; 005b2f39 | g_CEventListInstance | g_CEventListPtr
        ;   Label: LAB_005b2f39
    PUSH EDX                            ; 005b2f3f | g_CEventListInstance
    CALL core_event.cpp_CEventList_restartSfxEntries_FUN_004b0f00 ; 005b2f40
        ;   XREF to: 004b0f00 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_restartSfxEntries_FUN_004b0f00(CEventList * this_ptr)
    MOV ECX,0x1                         ; 005b2f45
    ADD ESP,0x4                         ; 005b2f4a
    MOV dword ptr [0x03f6b7ac],ECX      ; 005b2f4d | g_SoundAudioInitialized
    POP EBX                             ; 005b2f53
    POP EDI                             ; 005b2f54
    ADD ESP,0x10                        ; 005b2f55
    POP ESI                             ; 005b2f58
    RET                                 ; 005b2f59
    PUSH EBX                            ; 005b2f5a
        ;   Label: LAB_005b2f5a
    PUSH 0x3                            ; 005b2f5b
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 005b2f5d
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
    JMP 0x005b2ea2                      ; 005b2f62
        ;   XREF to: 005b2ea2 (UNCONDITIONAL_JUMP)  ; LAB_005b2ea2

