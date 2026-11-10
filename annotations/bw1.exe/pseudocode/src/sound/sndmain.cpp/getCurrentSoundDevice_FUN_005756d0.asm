; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getCurrentSoundDevice_FUN_005756d0(void)
;
;
; XREF[2]:
;   core_menu.cpp_FUN_0050ba70 at 0050c04d
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00574e00 at 00574e74
;
; Referenced Globals:
;   undefined4 DAT_006232fc
;
; *****************************************************************************

section .text

    MOV EAX,[0x006232fc]                ; 005756d0 | DAT_006232fc
        ;   Label: sound_sndmain.cpp_getCurrentSoundDevice_FUN_005756d0
    RET                                 ; 005756d5

