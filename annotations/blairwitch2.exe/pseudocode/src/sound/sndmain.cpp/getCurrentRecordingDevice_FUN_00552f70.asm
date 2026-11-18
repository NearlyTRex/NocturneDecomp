; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getCurrentRecordingDevice_FUN_00552f70(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005523d0 at 00552452
;
; Referenced Globals:
;   int g_INT_0061bccc = -0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061bccc]                ; 00552f70 | g_INT_0061bccc
        ;   Label: sound_sndmain.cpp_getCurrentRecordingDevice_FUN_00552f70
    RET                                 ; 00552f75

