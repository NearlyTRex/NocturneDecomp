; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_00575980(void)
;
;
; XREF[3]:
;   sound_sndmain.cpp_isRecordingStarted_FUN_00575990 at 00575990
;   sound_sndmain.cpp_selectRecordingDevice_FUN_00575870 at 00575875
;   sound_sndmain.cpp_startRecording_FUN_00575aa0 at 00575aa2
;
; Referenced Globals:
;   undefined4 DAT_02c81038
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c81038],0x0      ; 00575980 | DAT_02c81038
        ;   Label: sound_sndmain.cpp_isRecordingSystemActive_FUN_00575980
    SETNZ AL                            ; 00575987
    AND EAX,0xff                        ; 0057598a
    RET                                 ; 0057598f

