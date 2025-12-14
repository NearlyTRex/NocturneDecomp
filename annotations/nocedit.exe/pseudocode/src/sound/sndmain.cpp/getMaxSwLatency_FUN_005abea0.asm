; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0(void)
;
;
; XREF[4]:
;   sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_005ae830 at 005aeaf3
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac044
;   sound_sndmain.cpp_writeIni_FUN_005ac220 at 005ac318
;   sound_sndwav.cpp_CWavOutDevice_setMode_FUN_005b0a30 at 005b0a75
;
; Referenced Globals:
;   float g_MaxSoftwareLatency = 0.5
;
; *****************************************************************************

section .text

    MOV EAX,[0x00681b48]                ; 005abea0 | g_MaxSoftwareLatency
        ;   Label: sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
    RET                                 ; 005abea5

