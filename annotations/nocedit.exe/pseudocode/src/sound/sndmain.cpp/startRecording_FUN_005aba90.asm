; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_startRecording_FUN_005aba90(void)
;
;
; Referenced Globals:
;   int g_RecordingBitsPerSample = 0x8
;   int g_RecordingChannelCount = 0x1
;   int g_RecordingSampleRate = 0x2b11
;   IDirectSoundCapture* g_RecordingDeviceInterface
;   int isRecordingStarted
;   int g_RecordingSamplesSigned
;
; Called Functions:
;   sound_sndmain.cpp_isRecordingStarted_FUN_005ab980
;   sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aba90
        ;   Label: sound_sndmain.cpp_startRecording_FUN_005aba90
    PUSH ESI                            ; 005aba91
    CALL sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970 ; 005aba92 | int sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970()
        ;   XREF to: 005ab970 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 005aba97
    JNZ 0x005aba9e                      ; 005aba99 | LAB_005aba9e
        ;   XREF to: 005aba9e (CONDITIONAL_JUMP)
    POP ESI                             ; 005aba9b
    POP EBX                             ; 005aba9c
    RET                                 ; 005aba9d
    CALL sound_sndmain.cpp_isRecordingStarted_FUN_005ab980 ; 005aba9e | int sound_sndmain.cpp_isRecordingStarted_FUN_005ab980()
        ;   Label: LAB_005aba9e
        ;   XREF to: 005ab980 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 005abaa3
    JZ 0x005abaaf                       ; 005abaa5 | LAB_005abaaf
        ;   XREF to: 005abaaf (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005abaa7
    POP ESI                             ; 005abaac
    POP EBX                             ; 005abaad
    RET                                 ; 005abaae
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005abaaf | void sound_sndmain.cpp_lockSound_FUN_005abd30()
        ;   Label: LAB_005abaaf
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x03f69c5c]      ; 005abab4 | int g_RecordingSamplesSigned
    PUSH EDX                            ; 005ababa
    MOV ECX,dword ptr [0x00681b5c]      ; 005ababb | int g_RecordingSampleRate
    PUSH ECX                            ; 005abac1
    MOV EBX,dword ptr [0x00681b58]      ; 005abac2 | int g_RecordingChannelCount
    PUSH EBX                            ; 005abac8
    MOV ESI,dword ptr [0x00681b54]      ; 005abac9 | int g_RecordingBitsPerSample
    PUSH ESI                            ; 005abacf
    CALL sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0 ; 005abad0 | int sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0(int bits_per_sample, int channels, int sample_rate, int signed_samples)
        ;   XREF to: 005ab9a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005abad5
    TEST EAX,EAX                        ; 005abad8
    JZ 0x005abb05                       ; 005abada | LAB_005abb05
        ;   XREF to: 005abb05 (CONDITIONAL_JUMP)
    MOV EAX,[0x03f69c54]                ; 005abadc | IDirectSoundCapture * g_RecordingDeviceInterface
    PUSH EAX                            ; 005abae1
    MOV EDX,dword ptr [EAX]             ; 005abae2
    CALL dword ptr [EDX + 0x4]          ; 005abae4
    ADD ESP,0x4                         ; 005abae7
    TEST EAX,EAX                        ; 005abaea
    JZ 0x005abb05                       ; 005abaec | LAB_005abb05
        ;   XREF to: 005abb05 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005abaee
    MOV EDI,0x1                         ; 005abaef
    MOV dword ptr [0x03f69c58],EDI      ; 005abaf4 | int isRecordingStarted
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005abafa | void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
    MOV EAX,EDI                         ; 005abaff
    POP EDI                             ; 005abb01
    POP ESI                             ; 005abb02
    POP EBX                             ; 005abb03
    RET                                 ; 005abb04
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005abb05 | void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005abb05
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
    XOR EAX,EAX                         ; 005abb0a
    POP ESI                             ; 005abb0c
    POP EBX                             ; 005abb0d
    RET                                 ; 005abb0e

