; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00575560(int enable)
;
; Parameters:
; int              Stack[0x4]:4   enable
;
; XREF[10]:
;   core_menu.cpp_FUN_0050ba70 at 0050c805
;   core_sound.cpp_FUN_0057cb30 at 0057cb6c
;   sound_snddx.cpp_FUN_00577f90 at 00578239
;   sound_snddx.cpp_FUN_005784b0 at 005784b7
;   sound_sndmain.cpp_FUN_0056feb0 at 0056fee2
;   sound_sndmain.cpp_FUN_005735a0 at 005735a0
;   sound_sndmain.cpp_FUN_00575db0 at 00575dbc
;   sound_sndmain.cpp_FUN_00576f40 at 00576f86
;   sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30 at 00573b7b
;   sound_sndmain.cpp_startSfx_FUN_00572d20 at 00572f67
;
; Referenced Globals:
;   undefined4 DAT_02c80658
;
; *****************************************************************************

section .text

    MOV EAX,[0x02c80658]                ; 00575560 | DAT_02c80658
        ;   Label: sound_sndmain.cpp_FUN_00575560
    RET                                 ; 00575565

