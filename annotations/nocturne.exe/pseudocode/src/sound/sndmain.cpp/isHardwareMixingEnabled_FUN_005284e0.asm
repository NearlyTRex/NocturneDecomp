; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0(void)
;
;
; XREF[4]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1941
;   sound_snddx.cpp_getDirectSoundDevice_FUN_0052bef0 at 0052c018
;   sound_sndmain.cpp_readIni_FUN_005289f0 at 00528ad8
;   sound_sndmain.cpp_writeIni_FUN_00528c80 at 00528d64
;
; Referenced Globals:
;   undefined4 DAT_005bea78
;
; *****************************************************************************

section .text

    MOV EAX,[0x005bea78]                ; 005284e0 | DAT_005bea78
        ;   Label: sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0
    RET                                 ; 005284e5

