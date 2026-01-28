; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590(void)
;
;
; XREF[4]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 005124b1
;   sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440 at 005b0568
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac012
;   sound_sndmain.cpp_writeIni_FUN_005ac220 at 005ac304
;
; Referenced Globals:
;   int g_HardwareMixingEnabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x00681b28]                ; 005ab590 | g_HardwareMixingEnabled
        ;   Label: sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590
    RET                                 ; 005ab595

