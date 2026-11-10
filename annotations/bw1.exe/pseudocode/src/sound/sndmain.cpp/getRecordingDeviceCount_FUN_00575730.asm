; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_00575730(void)
;
;
; XREF[4]:
;   sound_sndmain.cpp_findBestRecordingDevice_FUN_005757f0 at 005757f8
;   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00575790 at 00575797
;   sound_sndmain.cpp_readIni_FUN_005760b0 at 00576132
;   sound_sndmain.cpp_selectRecordingDevice_FUN_00575870 at 00575888
;
; Referenced Globals:
;   undefined4 DAT_006232f8
;   undefined4 DAT_00623318
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;   sound_sndwav.cpp_enumerateWavInDevice_FUN_0057b460
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00575730
        ;   Label: sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730
    MOV ESI,dword ptr [0x00623318]      ; 00575731 | DAT_00623318
    TEST ESI,ESI                        ; 00575737
    JL 0x00575745                       ; 00575739
        ;   XREF to: 00575745 (CONDITIONAL_JUMP)  ; LAB_00575745
    MOV EAX,ESI                         ; 0057573b
    MOV dword ptr [0x00623318],ESI      ; 0057573d | DAT_00623318
    POP ESI                             ; 00575743
    RET                                 ; 00575744
    PUSH EBX                            ; 00575745
        ;   Label: LAB_00575745
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00575746
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    CALL sound_sndmain.cpp_FUN_00573e70 ; 0057574b
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    XOR ESI,ESI                         ; 00575750
    XOR EBX,EBX                         ; 00575752
    IMUL EAX,ESI,0x108                  ; 00575754
        ;   Label: LAB_00575754
    ADD EAX,0x2c807f8                   ; 0057575a
    PUSH EAX                            ; 0057575f
    PUSH EBX                            ; 00575760
    MOV dword ptr [0x00623318],ESI      ; 00575761 | DAT_00623318
    CALL sound_sndwav.cpp_enumerateWavInDevice_FUN_0057b460 ; 00575767
        ;   XREF to: 0057b460 (UNCONDITIONAL_CALL)  ; undefined sound_sndwav.cpp_enumerateWavInDevice_FUN_0057b460()
    MOV ESI,dword ptr [0x00623318]      ; 0057576c | DAT_00623318
    ADD ESP,0x8                         ; 00575772
    TEST EAX,EAX                        ; 00575775
    JZ 0x00575780                       ; 00575777
        ;   XREF to: 00575780 (CONDITIONAL_JUMP)  ; LAB_00575780
    INC ESI                             ; 00575779
    INC EBX                             ; 0057577a
    CMP ESI,0x8                         ; 0057577b
    JL 0x00575754                       ; 0057577e
        ;   XREF to: 00575754 (CONDITIONAL_JUMP)  ; LAB_00575754
    MOV EAX,[0x006232f8]                ; 00575780 | DAT_006232f8
        ;   Label: LAB_00575780
    POP EBX                             ; 00575785
    MOV dword ptr [0x00623318],ESI      ; 00575786 | DAT_00623318
    POP ESI                             ; 0057578c
    RET                                 ; 0057578d

