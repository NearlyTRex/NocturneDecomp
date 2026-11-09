; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl sound_sndmain_cpp_FUN_005591a0(void)
;
;
; XREF[4]:
;   sound_snddx.cpp_FUN_0055b100 at 0055b3c1
;   sound_sndmain.cpp_FUN_00559220 at 0055934c
;   sound_sndmain.cpp_FUN_00559520 at 0055961c
;   sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0055da60 at 0055daa5
;
; Referenced Globals:
;   undefined4 DAT_00604250
;
; *****************************************************************************

section .text

    MOV EAX,[0x00604250]                ; 005591a0 | DAT_00604250
        ;   Label: sound_sndmain.cpp_FUN_005591a0
    RET                                 ; 005591a5

