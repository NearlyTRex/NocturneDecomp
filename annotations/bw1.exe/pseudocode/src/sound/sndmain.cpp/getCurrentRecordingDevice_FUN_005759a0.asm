; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getCurrentRecordingDevice_FUN_005759a0(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00574e00 at 00574e82
;
; Referenced Globals:
;   int g_INT_0062331c = -0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x0062331c]                ; 005759a0 | g_INT_0062331c
        ;   Label: sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005759a0
    RET                                 ; 005759a5

