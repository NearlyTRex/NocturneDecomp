; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl sound_sndmain_cpp_getMaxSwLatency_FUN_00576030(void)
;
;
; XREF[4]:
;   sound_snddx.cpp_FUN_00577f90 at 00578251
;   sound_sndmain.cpp_readIni_FUN_005760b0 at 005761dc
;   sound_sndmain.cpp_writeIni_FUN_005763b0 at 005764ac
;   sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0057a930 at 0057a975
;
; Referenced Globals:
;   undefined4 DAT_00623314
;
; *****************************************************************************

section .text

    MOV EAX,[0x00623314]                ; 00576030 | DAT_00623314
        ;   Label: sound_sndmain.cpp_getMaxSwLatency_FUN_00576030
    RET                                 ; 00576035

