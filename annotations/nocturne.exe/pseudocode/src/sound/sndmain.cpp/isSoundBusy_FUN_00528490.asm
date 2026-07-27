; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_sndmain_cpp_isSoundBusy_FUN_00528490(void)
;
;
; XREF[7]:
;   core_dracbrid.cpp_FUN_0045ab40 at 0045ab77
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d19ad
;   core_sound.cpp_CSound_init_FUN_0052ddf0 at 0052de58
;   sound_sndmain.cpp_enableSoundSystem_FUN_00527e40 at 00527e5b
;   sound_sndmain.cpp_setMaxSwSoundLatency_FUN_00528980 at 00528980
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0 at 005280c6
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 005265d3
;
; Referenced Globals:
;   undefined4 DAT_02dc831c
;
; Called Functions:
;   sound_sndmain.cpp_isSoundSystemActive_FUN_00528480
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_isSoundSystemActive_FUN_00528480 ; 00528490
        ;   XREF to: 00528480 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSoundSystemActive_FUN_00528480()
        ;   Label: sound_sndmain.cpp_isSoundBusy_FUN_00528490
    TEST EAX,EAX                        ; 00528495
    JZ 0x0052849e                       ; 00528497
        ;   XREF to: 0052849e (CONDITIONAL_JUMP)  ; LAB_0052849e
    MOV EAX,[0x02dc831c]                ; 00528499 | DAT_02dc831c
    RET                                 ; 0052849e
        ;   Label: LAB_0052849e

