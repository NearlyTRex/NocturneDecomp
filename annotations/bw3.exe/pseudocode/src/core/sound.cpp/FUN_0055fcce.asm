; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sound_cpp_FUN_0055fcce(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf5ec8
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00556db0
;   sound_sndmain.cpp_FUN_00556e30
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20
;   sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0055fcce
        ;   Label: core_sound.cpp_FUN_0055fcce
    SUB ESP,0x4                         ; 0055fcd0
    PUSH 0x0                            ; 0055fcd3
    CALL sound_sndmain.cpp_FUN_00556e30 ; 0055fcd5
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 0055fcda
    TEST EAX,EAX                        ; 0055fcdd
    JZ 0x0055fd19                       ; 0055fcdf
        ;   XREF to: 0055fd19 (CONDITIONAL_JUMP)  ; LAB_0055fd19
    PUSH 0x1                            ; 0055fce1
    PUSH 0x3                            ; 0055fce3
    CALL sound_sndmain.cpp_FUN_00556db0 ; 0055fce5
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556db0(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0055fcea
    PUSH 0x0                            ; 0055fced
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 0055fcef
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20()
    MOV dword ptr [ESP + 0x4],EAX       ; 0055fcf4
    FLD float ptr [ESP + 0x4]           ; 0055fcf8
    ADD ESP,0x4                         ; 0055fcfc
    FMUL float ptr [0x02cf5ec8]         ; 0055fcff | DAT_02cf5ec8
    SUB ESP,0x4                         ; 0055fd05
    FSTP float ptr [ESP]                ; 0055fd08
    PUSH 0x3                            ; 0055fd0b
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 ; 0055fd0d
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90()
    ADD ESP,0x8                         ; 0055fd12
    ADD ESP,0x4                         ; 0055fd15
    RET                                 ; 0055fd18
    PUSH EAX                            ; 0055fd19
        ;   Label: LAB_0055fd19
    PUSH 0x3                            ; 0055fd1a
    CALL sound_sndmain.cpp_FUN_00556db0 ; 0055fd1c
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556db0(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0055fd21
    ADD ESP,0x4                         ; 0055fd24
    RET                                 ; 0055fd27

