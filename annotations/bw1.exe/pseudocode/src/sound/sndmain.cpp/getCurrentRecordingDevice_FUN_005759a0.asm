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
;   undefined4 DAT_0062331c
;
; *****************************************************************************

section .text

    MOV EAX,[0x0062331c]                ; 005759a0 | DAT_0062331c
        ;   Label: sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005759a0
    RET                                 ; 005759a5

