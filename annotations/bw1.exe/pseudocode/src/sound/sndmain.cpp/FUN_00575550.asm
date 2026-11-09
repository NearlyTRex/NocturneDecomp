; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_00575550(void)
;
;
; XREF[7]:
;   core_dracbrid.cpp_FUN_0047d920 at 0047d956
;   core_menu.cpp_FUN_0050ba70 at 0050c164
;   core_sound.cpp_FUN_0057cc00 at 0057cc68
;   sound_sndmain.cpp_FUN_00576040 at 00576040
;   sound_sndmain.cpp_enableSoundSystem_FUN_00574ee0 at 00574efb
;   sound_sndmain.cpp_setSoundOutputMode_FUN_00575120 at 00575126
;   sound_sndmain.cpp_startSfx_FUN_00572d20 at 00572d53
;
; Referenced Globals:
;   undefined4 DAT_02c80654
;
; *****************************************************************************

section .text

    MOV EAX,[0x02c80654]                ; 00575550 | DAT_02c80654
        ;   Label: sound_sndmain.cpp_FUN_00575550
    RET                                 ; 00575555

