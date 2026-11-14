; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSoundBusy_FUN_005586c0(void)
;
;
; XREF[5]:
;   core_sound.cpp_FUN_0055fd30 at 0055fd98
;   sound_sndmain.cpp_enableSoundSystem_FUN_00558050 at 0055806b
;   sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005591b0 at 005591b0
;   sound_sndmain.cpp_setSoundOutputMode_FUN_00558290 at 00558296
;   sound_sndmain.cpp_startSfx_FUN_00556240 at 00556267
;
; Referenced Globals:
;   undefined4 DAT_02cf3284
;
; *****************************************************************************

section .text

    MOV EAX,[0x02cf3284]                ; 005586c0 | DAT_02cf3284
        ;   Label: sound_sndmain.cpp_isSoundBusy_FUN_005586c0
    RET                                 ; 005586c5

