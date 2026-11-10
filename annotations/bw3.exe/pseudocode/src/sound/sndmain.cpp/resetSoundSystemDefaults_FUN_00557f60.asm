; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_resetSoundSystemDefaults_FUN_00557f60(void)
;
;
; XREF[1]:
;   core_sound.cpp_CSound_ctor_FUN_0055fc40 at 0055fc55
;
; Referenced Globals:
;   undefined4 DAT_005d3aa2
;   undefined4 DAT_005e4840
;
; Called Functions:
;   sound_sndmain.cpp_enableSfxChannel_FUN_00556db0
;   sound_sndmain.cpp_FUN_00557020
;   sound_sndmain.cpp_FUN_00557080
;   sound_sndmain.cpp_FUN_00557100
;   sound_sndmain.cpp_FUN_00557140
;   sound_sndmain.cpp_FUN_00558840
;   sound_sndmain.cpp_getCurrentRecordingDevice_FUN_00558b10
;   sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0
;   sound_sndmain.cpp_selectSoundDevice_FUN_00558640
;   sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557f60
        ;   Label: sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00557f60
    XOR EBX,EBX                         ; 00557f61
    PUSH 0x3f800000                     ; 00557f63
        ;   Label: LAB_00557f63
    PUSH EBX                            ; 00557f68
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 ; 00557f69
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90()
    ADD ESP,0x8                         ; 00557f6e
    PUSH 0x1                            ; 00557f71
    PUSH EBX                            ; 00557f73
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 00557f74
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
    INC EBX                             ; 00557f79
    ADD ESP,0x8                         ; 00557f7a
    CMP EBX,0x20                        ; 00557f7d
    JL 0x00557f63                       ; 00557f80
        ;   XREF to: 00557f63 (CONDITIONAL_JUMP)  ; LAB_00557f63
    FLD float ptr [0x005e4840]          ; 00557f82 | DAT_005e4840
    FMUL double ptr [0x005d3aa2]        ; 00557f88 | DAT_005d3aa2
    SUB ESP,0x4                         ; 00557f8e
    FSTP float ptr [ESP]                ; 00557f91
    PUSH 0x1                            ; 00557f94
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 ; 00557f96
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90()
    ADD ESP,0x8                         ; 00557f9b
    PUSH 0x3f800000                     ; 00557f9e
    CALL sound_sndmain.cpp_FUN_00557140 ; 00557fa3
        ;   XREF to: 00557140 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00557140()
    ADD ESP,0x4                         ; 00557fa8
    PUSH 0x0                            ; 00557fab
    PUSH 0x0                            ; 00557fad
    PUSH 0x0                            ; 00557faf
    PUSH 0x0                            ; 00557fb1
    PUSH 0x0                            ; 00557fb3
    PUSH 0x0                            ; 00557fb5
    CALL sound_sndmain.cpp_FUN_00557020 ; 00557fb7
        ;   XREF to: 00557020 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00557020()
    ADD ESP,0x18                        ; 00557fbc
    PUSH 0x3f800000                     ; 00557fbf
    PUSH 0x0                            ; 00557fc4
    PUSH 0x0                            ; 00557fc6
    PUSH 0x0                            ; 00557fc8
    PUSH 0x3f800000                     ; 00557fca
    PUSH 0x0                            ; 00557fcf
    PUSH 0x0                            ; 00557fd1
    PUSH 0x0                            ; 00557fd3
    PUSH 0x3f800000                     ; 00557fd5
    CALL sound_sndmain.cpp_FUN_00557080 ; 00557fda
        ;   XREF to: 00557080 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00557080()
    ADD ESP,0x24                        ; 00557fdf
    PUSH 0x0                            ; 00557fe2
    PUSH 0x0                            ; 00557fe4
    PUSH 0x0                            ; 00557fe6
    CALL sound_sndmain.cpp_FUN_00557100 ; 00557fe8
        ;   XREF to: 00557100 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00557100()
    ADD ESP,0xc                         ; 00557fed
    CALL sound_sndmain.cpp_FUN_00558840 ; 00557ff0
        ;   XREF to: 00558840 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00558840()
    PUSH EAX                            ; 00557ff5
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_00558640 ; 00557ff6
        ;   XREF to: 00558640 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_00558640(int device_id)
    ADD ESP,0x4                         ; 00557ffb
    CALL sound_sndmain.cpp_getCurrentRecordingDevice_FUN_00558b10 ; 00557ffe
        ;   XREF to: 00558b10 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getCurrentRecordingDevice_FUN_00558b10()
    PUSH EAX                            ; 00558003
    CALL sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0 ; 00558004
        ;   XREF to: 005589e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0(int device_id)
    ADD ESP,0x4                         ; 00558009
    POP EBX                             ; 0055800c
    RET                                 ; 0055800d

