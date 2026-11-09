; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_00552f50(void)
;
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_00552e40 at 00552e45
;   sound_sndmain.cpp_isRecordingStarted_FUN_00552f60 at 00552f60
;   sound_sndmain.cpp_startRecording_FUN_00553070 at 00553072
;
; Referenced Globals:
;   undefined4 DAT_02649868
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02649868],0x0      ; 00552f50 | DAT_02649868
        ;   Label: sound_sndmain.cpp_isRecordingSystemActive_FUN_00552f50
    SETNZ AL                            ; 00552f57
    AND EAX,0xff                        ; 00552f5a
    RET                                 ; 00552f5f

