; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sound_cpp_FUN_0057cb9e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c832a8
;
; Called Functions:
;   sound_sndmain.cpp_enableSfxChannel_FUN_00573c50
;   sound_sndmain.cpp_FUN_00573cd0
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0
;   sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0057cb9e
        ;   Label: core_sound.cpp_FUN_0057cb9e
    SUB ESP,0x4                         ; 0057cba0
    PUSH 0x0                            ; 0057cba3
    CALL sound_sndmain.cpp_FUN_00573cd0 ; 0057cba5
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00573cd0(int channel_index)
    ADD ESP,0x4                         ; 0057cbaa
    TEST EAX,EAX                        ; 0057cbad
    JZ 0x0057cbe9                       ; 0057cbaf
        ;   XREF to: 0057cbe9 (CONDITIONAL_JUMP)  ; LAB_0057cbe9
    PUSH 0x1                            ; 0057cbb1
    PUSH 0x3                            ; 0057cbb3
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00573c50 ; 0057cbb5
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00573c50(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0057cbba
    PUSH 0x0                            ; 0057cbbd
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0 ; 0057cbbf
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0()
    MOV dword ptr [ESP + 0x4],EAX       ; 0057cbc4
    FLD float ptr [ESP + 0x4]           ; 0057cbc8
    ADD ESP,0x4                         ; 0057cbcc
    FMUL float ptr [0x02c832a8]         ; 0057cbcf | DAT_02c832a8
    SUB ESP,0x4                         ; 0057cbd5
    FSTP float ptr [ESP]                ; 0057cbd8
    PUSH 0x3                            ; 0057cbdb
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30 ; 0057cbdd
        ;   XREF to: 00573b30 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30()
    ADD ESP,0x8                         ; 0057cbe2
    ADD ESP,0x4                         ; 0057cbe5
    RET                                 ; 0057cbe8
    PUSH EAX                            ; 0057cbe9
        ;   Label: LAB_0057cbe9
    PUSH 0x3                            ; 0057cbea
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00573c50 ; 0057cbec
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00573c50(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0057cbf1
    ADD ESP,0x4                         ; 0057cbf4
    RET                                 ; 0057cbf7

