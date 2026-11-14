; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_syncChannel3WithChannel0_FUN_0055a170(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0264bad8
;
; Called Functions:
;   sound_sndmain.cpp_enableSfxChannel_FUN_00551220
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00551190
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0
;   sound_sndmain.cpp_setSfxChannelVol_FUN_00551100
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0055a170
        ;   Label: core_sound.cpp_syncChannel3WithChannel0_FUN_0055a170
    PUSH 0x0                            ; 0055a173
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0 ; 0055a175
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0(int channel_index)
    ADD ESP,0x4                         ; 0055a17a
    TEST EAX,EAX                        ; 0055a17d
    JZ 0x0055a1b9                       ; 0055a17f
        ;   XREF to: 0055a1b9 (CONDITIONAL_JUMP)  ; LAB_0055a1b9
    PUSH 0x1                            ; 0055a181
    PUSH 0x3                            ; 0055a183
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00551220 ; 0055a185
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00551220(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0055a18a
    PUSH 0x0                            ; 0055a18d
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 0055a18f
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00551190(int channel_index)
    MOV dword ptr [ESP + 0x4],EAX       ; 0055a194
    FLD float ptr [ESP + 0x4]           ; 0055a198
    ADD ESP,0x4                         ; 0055a19c
    FMUL float ptr [0x0264bad8]         ; 0055a19f | DAT_0264bad8
    SUB ESP,0x4                         ; 0055a1a5
    FSTP float ptr [ESP]                ; 0055a1a8
    PUSH 0x3                            ; 0055a1ab
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00551100 ; 0055a1ad
        ;   XREF to: 00551100 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00551100(int channel_index, float volume)
    ADD ESP,0x8                         ; 0055a1b2
    ADD ESP,0x4                         ; 0055a1b5
    RET                                 ; 0055a1b8
    PUSH EAX                            ; 0055a1b9
        ;   Label: LAB_0055a1b9
    PUSH 0x3                            ; 0055a1ba
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00551220 ; 0055a1bc
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00551220(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0055a1c1
    ADD ESP,0x4                         ; 0055a1c4
    RET                                 ; 0055a1c7

