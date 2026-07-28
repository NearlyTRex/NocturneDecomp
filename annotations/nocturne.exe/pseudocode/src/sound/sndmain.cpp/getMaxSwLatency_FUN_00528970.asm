; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl sound_sndmain_cpp_getMaxSwLatency_FUN_00528970(void)
;
;
; XREF[4]:
;   sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_0052a450 at 0052a713
;   sound_sndmain.cpp_FUN_005289f0 at 00528b0a
;   sound_sndmain.cpp_writeIni_FUN_00528c80 at 00528d78
;   sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0052c460 at 0052c4a5
;
; Referenced Globals:
;   undefined4 DAT_005bea98
;
; *****************************************************************************

section .text

    MOV EAX,[0x005bea98]                ; 00528970 | DAT_005bea98
        ;   Label: sound_sndmain.cpp_getMaxSwLatency_FUN_00528970
    RET                                 ; 00528975

