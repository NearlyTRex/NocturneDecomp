; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isRecordingStarted_FUN_00552f60(void)
;
;
; XREF[3]:
;   sound_sndmain.cpp_pollRecordingDevice_FUN_005530f0 at 005530f5
;   sound_sndmain.cpp_setRecordingFormat_FUN_00552f80 at 00552f84
;   sound_sndmain.cpp_startRecording_FUN_00553070 at 0055307e
;
; Referenced Globals:
;   undefined4 DAT_0264986c
;
; Called Functions:
;   sound_sndmain.cpp_isRecordingSystemActive_FUN_00552f50
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_isRecordingSystemActive_FUN_00552f50 ; 00552f60
        ;   XREF to: 00552f50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingSystemActive_FUN_00552f50()
        ;   Label: sound_sndmain.cpp_isRecordingStarted_FUN_00552f60
    TEST EAX,EAX                        ; 00552f65
    JZ 0x00552f6e                       ; 00552f67
        ;   XREF to: 00552f6e (CONDITIONAL_JUMP)  ; LAB_00552f6e
    MOV EAX,[0x0264986c]                ; 00552f69 | DAT_0264986c
    RET                                 ; 00552f6e
        ;   Label: LAB_00552f6e

