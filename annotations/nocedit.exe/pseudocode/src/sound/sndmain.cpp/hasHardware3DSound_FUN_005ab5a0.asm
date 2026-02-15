; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0(void)
;
;
; XREF[7]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512bc0
;   core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00 at 005b2d3c
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 at 005a6191
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 at 005a9660
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0 at 005acdde
;   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 at 005a9d3b
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a9105
;
; Referenced Globals:
;   int g_HasHardware3DSound
;
; Called Functions:
;   sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530 ; 005ab5a0
        ;   XREF to: 005ab530 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530()
        ;   Label: sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
    TEST EAX,EAX                        ; 005ab5a5
    JZ 0x005ab5ae                       ; 005ab5a7
        ;   XREF to: 005ab5ae (CONDITIONAL_JUMP)  ; LAB_005ab5ae
    MOV EAX,[0x03f69270]                ; 005ab5a9 | g_HasHardware3DSound
    RET                                 ; 005ab5ae
        ;   Label: LAB_005ab5ae

