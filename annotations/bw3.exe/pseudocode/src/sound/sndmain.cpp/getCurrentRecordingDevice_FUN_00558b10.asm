; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getCurrentRecordingDevice_FUN_00558b10(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00557f60 at 00557ffe
;
; Referenced Globals:
;   int g_CurrentRecordingDevice = -0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x00604258]                ; 00558b10 | g_CurrentRecordingDevice
        ;   Label: sound_sndmain.cpp_getCurrentRecordingDevice_FUN_00558b10
    RET                                 ; 00558b15

