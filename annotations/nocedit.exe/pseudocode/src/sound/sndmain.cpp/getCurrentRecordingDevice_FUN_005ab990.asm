; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005ab990(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 at 005aae9c
;
; Referenced Globals:
;   int g_CurrentRecordingDevice = -0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x00681b50]                ; 005ab990 | g_CurrentRecordingDevice
        ;   Label: sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005ab990
    RET                                 ; 005ab995

