; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getCurrentSoundDevice_FUN_00528610(void)
;
;
; XREF[1]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1896
;
; Referenced Globals:
;   int g_CurrentSoundDevice = -0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x005bea74]                ; 00528610 | g_CurrentSoundDevice
        ;   Label: sound_sndmain.cpp_getCurrentSoundDevice_FUN_00528610
    RET                                 ; 00528615

