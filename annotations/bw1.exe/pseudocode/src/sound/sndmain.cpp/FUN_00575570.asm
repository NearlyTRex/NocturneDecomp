; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_00575570(void)
;
;
; XREF[4]:
;   core_menu.cpp_FUN_0050ba70 at 0050c0f8
;   sound_snddx.cpp_getDirectSoundDevice_FUN_0057a340 at 0057a468
;   sound_sndmain.cpp_FUN_005760b0 at 005761aa
;   sound_sndmain.cpp_FUN_005763b0 at 00576498
;
; Referenced Globals:
;   undefined4 DAT_00623300
;
; *****************************************************************************

section .text

    MOV EAX,[0x00623300]                ; 00575570 | DAT_00623300
        ;   Label: sound_sndmain.cpp_FUN_00575570
    RET                                 ; 00575575

