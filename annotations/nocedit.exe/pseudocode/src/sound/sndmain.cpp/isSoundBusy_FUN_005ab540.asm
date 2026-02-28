; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSoundBusy_FUN_005ab540(void)
;
;
; XREF[8]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 0051251d
;   core_msnedit.cpp_CDemonMission_playSound_FUN_0053eb40 at 0053eb66
;   core_sound.cpp_CSound_init_FUN_005b2dd0 at 005b2e38
;   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 at 005aaf0b
;   sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0 at 005abeb0
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170 at 005ab176
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a8ec3
;   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 at 005ad6d6
;
; Referenced Globals:
;   int g_SoundBusyFlag
;
; Called Functions:
;   sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530 ; 005ab540
        ;   XREF to: 005ab530 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530()
        ;   Label: sound_sndmain.cpp_isSoundBusy_FUN_005ab540
    TEST EAX,EAX                        ; 005ab545
    JZ 0x005ab54e                       ; 005ab547
        ;   XREF to: 005ab54e (CONDITIONAL_JUMP)  ; LAB_005ab54e
    MOV EAX,[0x03f6926c]                ; 005ab549 | g_SoundBusyFlag
    RET                                 ; 005ab54e
        ;   Label: LAB_005ab54e

