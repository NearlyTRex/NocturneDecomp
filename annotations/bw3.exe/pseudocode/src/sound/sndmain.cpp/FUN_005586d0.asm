; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_005586d0(int enable)
;
; Parameters:
; int              Stack[0x4]:4   enable
;
; XREF[10]:
;   core_menu.cpp_FUN_004e94f0 at 004e9d28
;   core_sound.cpp_FUN_0055fc60 at 0055fc9c
;   sound_snddx.cpp_FUN_0055b100 at 0055b3a9
;   sound_snddx.cpp_FUN_0055b620 at 0055b627
;   sound_sndmain.cpp_FUN_005533b0 at 005533e2
;   sound_sndmain.cpp_FUN_00556240 at 00556489
;   sound_sndmain.cpp_FUN_00556700 at 00556700
;   sound_sndmain.cpp_FUN_00558f20 at 00558f2c
;   sound_sndmain.cpp_FUN_0055a0b0 at 0055a0f6
;   sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 at 00556cdb
;
; Referenced Globals:
;   undefined4 DAT_02cf3288
;
; *****************************************************************************

section .text

    MOV EAX,[0x02cf3288]                ; 005586d0 | DAT_02cf3288
        ;   Label: sound_sndmain.cpp_FUN_005586d0
    RET                                 ; 005586d5

