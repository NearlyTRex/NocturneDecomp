; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005586e0(void)
;
;
; XREF[4]:
;   core_menu.cpp_FUN_004e94f0 at 004e9b4a
;   sound_snddx.cpp_getDirectSoundDevice_FUN_0055d470 at 0055d598
;   sound_sndmain.cpp_readIni_FUN_00559220 at 0055931a
;   sound_sndmain.cpp_writeIni_FUN_00559520 at 00559608
;
; Referenced Globals:
;   undefined4 DAT_02cf328c
;
; *****************************************************************************

section .text

    MOV EAX,[0x02cf328c]                ; 005586e0 | DAT_02cf328c
        ;   Label: sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005586e0
    RET                                 ; 005586e5

