; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_syncChannel3WithChannel0_FUN_0052dd90(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   undefined4 DAT_02dc9c98
;
; Called Functions:
;   sound_sndmain.cpp_enableSfxChannel_FUN_00527410
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00527380
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490
;   sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0052dd90
        ;   Label: core_sound.cpp_syncChannel3WithChannel0_FUN_0052dd90
    PUSH 0x0                            ; 0052dd93
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 0052dd95
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490(int channel_index)
    ADD ESP,0x4                         ; 0052dd9a
    TEST EAX,EAX                        ; 0052dd9d
    JZ 0x0052ddd9                       ; 0052dd9f
        ;   XREF to: 0052ddd9 (CONDITIONAL_JUMP)  ; LAB_0052ddd9
    PUSH 0x1                            ; 0052dda1
    PUSH 0x3                            ; 0052dda3
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 0052dda5
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00527410(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0052ddaa
    PUSH 0x0                            ; 0052ddad
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 0052ddaf
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00527380(int channel_index)
    MOV dword ptr [ESP + 0x4],EAX       ; 0052ddb4
    FLD float ptr [ESP + 0x4]           ; 0052ddb8
    ADD ESP,0x4                         ; 0052ddbc
    FMUL float ptr [0x02dc9c98]         ; 0052ddbf | DAT_02dc9c98
    SUB ESP,0x4                         ; 0052ddc5
    FSTP float ptr [ESP]                ; 0052ddc8
    PUSH 0x3                            ; 0052ddcb
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0 ; 0052ddcd
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0(int channel_index, float volume)
    ADD ESP,0x8                         ; 0052ddd2
    ADD ESP,0x4                         ; 0052ddd5
    RET                                 ; 0052ddd8
    PUSH EAX                            ; 0052ddd9
        ;   Label: LAB_0052ddd9
    PUSH 0x3                            ; 0052ddda
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 0052dddc
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00527410(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0052dde1
    ADD ESP,0x4                         ; 0052dde4
    RET                                 ; 0052dde7

