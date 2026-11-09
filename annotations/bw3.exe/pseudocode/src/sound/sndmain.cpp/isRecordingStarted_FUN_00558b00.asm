; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isRecordingStarted_FUN_00558b00(void)
;
;
; XREF[3]:
;   sound_sndmain.cpp_pollRecordingDevice_FUN_00558c90 at 00558c95
;   sound_sndmain.cpp_setRecordingFormat_FUN_00558b20 at 00558b24
;   sound_sndmain.cpp_startRecording_FUN_00558c10 at 00558c1e
;
; Referenced Globals:
;   undefined4 DAT_02cf3c6c
;
; Called Functions:
;   sound_sndmain.cpp_isRecordingSystemActive_FUN_00558af0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_isRecordingSystemActive_FUN_00558af0 ; 00558b00
        ;   XREF to: 00558af0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingSystemActive_FUN_00558af0()
        ;   Label: sound_sndmain.cpp_isRecordingStarted_FUN_00558b00
    TEST EAX,EAX                        ; 00558b05
    JZ 0x00558b0e                       ; 00558b07
        ;   XREF to: 00558b0e (CONDITIONAL_JUMP)  ; LAB_00558b0e
    MOV EAX,[0x02cf3c6c]                ; 00558b09 | DAT_02cf3c6c
    RET                                 ; 00558b0e
        ;   Label: LAB_00558b0e

