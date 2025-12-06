; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970(void)
;
;
; XREF[3]:
;   sound_sndmain.cpp_isRecordingStarted_FUN_005ab980 at 005ab980
;   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860 at 005ab865
;   sound_sndmain.cpp_startRecording_FUN_005aba90 at 005aba92
;
; Referenced Globals:
;   IDirectSoundCapture* g_RecordingDeviceInterface
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f69c54],0x0      ; 005ab970 | IDirectSoundCapture * g_RecordingDeviceInterface
        ;   Label: sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970
    SETNZ AL                            ; 005ab977
    AND EAX,0xff                        ; 005ab97a
    RET                                 ; 005ab97f

