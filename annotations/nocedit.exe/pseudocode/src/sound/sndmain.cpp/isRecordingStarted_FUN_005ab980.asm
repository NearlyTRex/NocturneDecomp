; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isRecordingStarted_FUN_005ab980(void)
;
;
; XREF[3]:
;   sound_sndmain.cpp_getRecordingDeviceCaps_FUN_005abb10 at 005abb15
;   sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0 at 005ab9a4
;   sound_sndmain.cpp_startRecording_FUN_005aba90 at 005aba9e
;
; Referenced Globals:
;   int isRecordingStarted
;
; Called Functions:
;   sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970 ; 005ab980
        ;   XREF to: 005ab970 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970()
        ;   Label: sound_sndmain.cpp_isRecordingStarted_FUN_005ab980
    TEST EAX,EAX                        ; 005ab985
    JZ 0x005ab98e                       ; 005ab987
        ;   XREF to: 005ab98e (CONDITIONAL_JUMP)  ; LAB_005ab98e
    MOV EAX,[0x03f69c58]                ; 005ab989 | isRecordingStarted
    RET                                 ; 005ab98e
        ;   Label: LAB_005ab98e

