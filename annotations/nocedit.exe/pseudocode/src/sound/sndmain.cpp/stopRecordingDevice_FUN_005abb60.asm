; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_005abb60(void)
;
;
; XREF[2]:
;   sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930 at 005ab930
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0 at 005aaece
;
; Referenced Globals:
;   IDirectSoundCapture* g_RecordingDeviceInterface
;   int isRecordingStarted
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005abb60
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
        ;   Label: sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60
    MOV EDX,dword ptr [0x03f69c54]      ; 005abb65 | g_RecordingDeviceInterface
    TEST EDX,EDX                        ; 005abb6b
    JZ 0x005abb7e                       ; 005abb6d
        ;   XREF to: 005abb7e (CONDITIONAL_JUMP)  ; LAB_005abb7e
    MOV EAX,EDX                         ; 005abb6f
    PUSH EAX                            ; 005abb71
    MOV EDX,dword ptr [EDX]             ; 005abb72
    CALL dword ptr [EDX + 0x8]          ; 005abb74
    ADD ESP,0x4                         ; 005abb77
    TEST EAX,EAX                        ; 005abb7a
    JZ 0x005abb91                       ; 005abb7c
        ;   XREF to: 005abb91 (CONDITIONAL_JUMP)  ; LAB_005abb91
    XOR ECX,ECX                         ; 005abb7e
        ;   Label: LAB_005abb7e
    MOV dword ptr [0x03f69c58],ECX      ; 005abb80 | isRecordingStarted
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005abb86
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    MOV EAX,0x1                         ; 005abb8b
    RET                                 ; 005abb90
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005abb91
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005abb91
    XOR EAX,EAX                         ; 005abb96
    RET                                 ; 005abb98

