; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00527d80(void)
;
;
; XREF[1]:
;   core_sound.cpp_CSound_ctor_FUN_0052dd00 at 0052dd15
;
; Referenced Globals:
;   undefined4 SUB_00527830
;
; Called Functions:
;   sound_sndmain.cpp_enableSfxChannel_FUN_00527410
;   sound_sndmain.cpp_set3DListenerOrient_FUN_00527690
;   sound_sndmain.cpp_set3DListenerPos_FUN_00527610
;   sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0
;   sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527d80
        ;   Label: sound_sndmain.cpp_FUN_00527d80
    XOR EBX,EBX                         ; 00527d81
    PUSH 0x3f800000                     ; 00527d83
        ;   Label: LAB_00527d83
    PUSH EBX                            ; 00527d88
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0 ; 00527d89
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0(int channel_index, float volume)
    ADD ESP,0x8                         ; 00527d8e
    PUSH 0x1                            ; 00527d91
    PUSH EBX                            ; 00527d93
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 00527d94
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00527410(int channel_index, int enable_state)
    INC EBX                             ; 00527d99
    ADD ESP,0x8                         ; 00527d9a
    CMP EBX,0x20                        ; 00527d9d
    JL 0x00527d83                       ; 00527da0
        ;   XREF to: 00527d83 (CONDITIONAL_JUMP)  ; LAB_00527d83
    PUSH 0x3ff00000                     ; 00527da2
    PUSH 0x0                            ; 00527da7
    CALL 0x00527830                     ; 00527da9
        ;   XREF to: 00527830 (UNCONDITIONAL_CALL)  ; SUB_00527830
    ADD ESP,0x8                         ; 00527dae
    PUSH 0x0                            ; 00527db1
    PUSH 0x0                            ; 00527db3
    PUSH 0x0                            ; 00527db5
    PUSH 0x0                            ; 00527db7
    PUSH 0x0                            ; 00527db9
    PUSH 0x0                            ; 00527dbb
    CALL sound_sndmain.cpp_set3DListenerPos_FUN_00527610 ; 00527dbd
        ;   XREF to: 00527610 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerPos_FUN_00527610(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 00527dc2
    PUSH 0x3ff00000                     ; 00527dc5
    PUSH 0x0                            ; 00527dca
    PUSH 0x0                            ; 00527dcc
    PUSH 0x0                            ; 00527dce
    PUSH 0x0                            ; 00527dd0
    PUSH 0x0                            ; 00527dd2
    PUSH 0x0                            ; 00527dd4
    PUSH 0x0                            ; 00527dd6
    PUSH 0x3ff00000                     ; 00527dd8
    PUSH 0x0                            ; 00527ddd
    PUSH 0x0                            ; 00527ddf
    PUSH 0x0                            ; 00527de1
    PUSH 0x0                            ; 00527de3
    PUSH 0x0                            ; 00527de5
    PUSH 0x0                            ; 00527de7
    PUSH 0x0                            ; 00527de9
    PUSH 0x3ff00000                     ; 00527deb
    PUSH 0x0                            ; 00527df0
    CALL sound_sndmain.cpp_set3DListenerOrient_FUN_00527690 ; 00527df2
        ;   XREF to: 00527690 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrient_FUN_00527690(double front_x, double front_y, double front_z, double up_x, ...)
    ADD ESP,0x48                        ; 00527df7
    PUSH 0x0                            ; 00527dfa
    PUSH 0x0                            ; 00527dfc
    PUSH 0x0                            ; 00527dfe
    PUSH 0x0                            ; 00527e00
    PUSH 0x0                            ; 00527e02
    PUSH 0x0                            ; 00527e04
    CALL sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0 ; 00527e06
        ;   XREF to: 005277b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0(double x_velocity, double y_velocity, double z_velocity)
    ADD ESP,0x18                        ; 00527e0b
    POP EBX                             ; 00527e0e
    RET                                 ; 00527e0f

