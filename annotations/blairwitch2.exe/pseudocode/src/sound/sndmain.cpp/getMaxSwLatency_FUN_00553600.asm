; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_sndmain_cpp_getMaxSwLatency_FUN_00553600(void)
;
;
; XREF[4]:
;   sound_snddx.cpp_FUN_00555560 at 00555821
;   sound_sndmain.cpp_readIni_FUN_00553680 at 005537ac
;   sound_sndmain.cpp_writeIni_FUN_00553980 at 00553a7c
;   sound_sndwav.cpp_CWavOutDevice_setMode_FUN_00557f00 at 00557f45
;
; Referenced Globals:
;   undefined4 DAT_0061bcc4
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061bcc4]                ; 00553600 | DAT_0061bcc4
        ;   Label: sound_sndmain.cpp_getMaxSwLatency_FUN_00553600
    RET                                 ; 00553605

