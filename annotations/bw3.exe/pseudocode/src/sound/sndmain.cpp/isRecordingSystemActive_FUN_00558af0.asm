; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_00558af0(void)
;
;
; XREF[3]:
;   sound_sndmain.cpp_isRecordingStarted_FUN_00558b00 at 00558b00
;   sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0 at 005589e5
;   sound_sndmain.cpp_startRecording_FUN_00558c10 at 00558c12
;
; Referenced Globals:
;   undefined4 DAT_02cf3c68
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf3c68],0x0      ; 00558af0 | DAT_02cf3c68
        ;   Label: sound_sndmain.cpp_isRecordingSystemActive_FUN_00558af0
    SETNZ AL                            ; 00558af7
    AND EAX,0xff                        ; 00558afa
    RET                                 ; 00558aff

