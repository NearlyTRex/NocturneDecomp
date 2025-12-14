; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720(void)
;
;
; XREF[4]:
;   sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0 at 005ab7e8
;   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780 at 005ab787
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005abf9a
;   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860 at 005ab878
;
; Referenced Globals:
;   int g_SoundDeviceCount = -0x1
;   int g_RecordingDeviceCount = -0x1
;   SRecordingDeviceInfo[8] g_RecordingDevices
;   undefined4 g_RecordingDevices[1].device_name[0]
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;   sound_sndwav.cpp_enumerateWavInDevice_FUN_005b1560
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005ab720
        ;   Label: sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
    MOV ESI,dword ptr [0x00681b4c]      ; 005ab721 | g_RecordingDeviceCount
    TEST ESI,ESI                        ; 005ab727
    JL 0x005ab735                       ; 005ab729
        ;   XREF to: 005ab735 (CONDITIONAL_JUMP)  ; LAB_005ab735
    MOV EAX,ESI                         ; 005ab72b
    MOV dword ptr [0x00681b4c],ESI      ; 005ab72d | g_RecordingDeviceCount
    POP ESI                             ; 005ab733
    RET                                 ; 005ab734
    PUSH EBX                            ; 005ab735
        ;   Label: LAB_005ab735
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005ab736
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005ab73b
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    XOR ESI,ESI                         ; 005ab740
    XOR EBX,EBX                         ; 005ab742
    IMUL EAX,ESI,0x108                  ; 005ab744
        ;   Label: LAB_005ab744
    ADD EAX,0x3f69414                   ; 005ab74a | g_RecordingDevices
    PUSH EAX                            ; 005ab74f | g_RecordingDevices | g_RecordingDevices[1].device_name[0]
    PUSH EBX                            ; 005ab750
    MOV dword ptr [0x00681b4c],ESI      ; 005ab751 | g_RecordingDeviceCount
    CALL sound_sndwav.cpp_enumerateWavInDevice_FUN_005b1560 ; 005ab757
        ;   XREF to: 005b1560 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_enumerateWavInDevice_FUN_005b1560(UINT device_id, SRecordingDeviceInfo * device_info)
    MOV ESI,dword ptr [0x00681b4c]      ; 005ab75c | g_RecordingDeviceCount
    ADD ESP,0x8                         ; 005ab762
    TEST EAX,EAX                        ; 005ab765
    JZ 0x005ab770                       ; 005ab767
        ;   XREF to: 005ab770 (CONDITIONAL_JUMP)  ; LAB_005ab770
    INC ESI                             ; 005ab769
    INC EBX                             ; 005ab76a
    CMP ESI,0x8                         ; 005ab76b
    JL 0x005ab744                       ; 005ab76e
        ;   XREF to: 005ab744 (CONDITIONAL_JUMP)  ; LAB_005ab744
    MOV EAX,[0x00681b20]                ; 005ab770 | g_SoundDeviceCount
        ;   Label: LAB_005ab770
    POP EBX                             ; 005ab775
    MOV dword ptr [0x00681b4c],ESI      ; 005ab776 | g_RecordingDeviceCount
    POP ESI                             ; 005ab77c
    RET                                 ; 005ab77d

