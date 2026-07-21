; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0(void)
;
;
; XREF[7]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1fdb
;   core_sound.cpp_CSound_findAllSoundFiles_FUN_0052dd20 at 0052dd5c
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910 at 00523931
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 at 00526c50
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810 at 0052983e
;   sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0 at 0052732b
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 0052681a
;
; Referenced Globals:
;   undefined4 DAT_02dc8320
;
; Called Functions:
;   sound_sndmain.cpp_isSoundSystemActive_FUN_00528480
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_isSoundSystemActive_FUN_00528480 ; 005284f0
        ;   XREF to: 00528480 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSoundSystemActive_FUN_00528480()
        ;   Label: sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0
    TEST EAX,EAX                        ; 005284f5
    JZ 0x005284fe                       ; 005284f7
        ;   XREF to: 005284fe (CONDITIONAL_JUMP)  ; LAB_005284fe
    MOV EAX,[0x02dc8320]                ; 005284f9 | DAT_02dc8320
    RET                                 ; 005284fe
        ;   Label: LAB_005284fe

