; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_sound.cpp_syncChannel3WithChannel0_FUN_005b2d70(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   float g_CurrentVolumeMultiplier
;
; Called Functions:
;   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
;   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
;   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005b2d70
        ;   Label: core_sound.cpp_syncChannel3WithChannel0_FUN_005b2d70
    PUSH 0x0                            ; 005b2d73
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 005b2d75 | int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b2d7a
    TEST EAX,EAX                        ; 005b2d7d
    JZ 0x005b2db9                       ; 005b2d7f | LAB_005b2db9
        ;   XREF to: 005b2db9 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005b2d81
    PUSH 0x3                            ; 005b2d83
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 005b2d85 | void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b2d8a
    PUSH 0x0                            ; 005b2d8d
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 005b2d8f | float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x4],EAX       ; 005b2d94
    FLD float ptr [ESP + 0x4]           ; 005b2d98
    ADD ESP,0x4                         ; 005b2d9c
    FMUL float ptr [0x03f6b7b0]         ; 005b2d9f | float g_CurrentVolumeMultiplier
    SUB ESP,0x4                         ; 005b2da5
    FSTP float ptr [ESP]                ; 005b2da8
    PUSH 0x3                            ; 005b2dab
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 ; 005b2dad | void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b2db2
    ADD ESP,0x4                         ; 005b2db5
    RET                                 ; 005b2db8
    PUSH EAX                            ; 005b2db9
        ;   Label: LAB_005b2db9
    PUSH 0x3                            ; 005b2dba
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 005b2dbc | void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b2dc1
    ADD ESP,0x4                         ; 005b2dc4
    RET                                 ; 005b2dc7

