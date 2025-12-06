; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
;
; Parameters:
; float            Stack[0x4]:4   volume
;
; XREF[8]:
;   core_charactr.cpp_CCharacter_FUN_0042a830 at 0042abb3
;   core_fire.cpp_CFireball_onCollision_FUN_004c1690 at 004c17a6
;   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 at 00506628
;   core_manpuz.cpp_FUN_0050a4f0 at 0050a5b5
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b3605
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b21f1
;   core_sound.cpp_processTrainSounds_FUN_005b2770 at 005b2a6f
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bdcd4
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.field_20[52]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a8a60 | int g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
    SHL EAX,0x4                         ; 005a8a65
    MOV EDX,EAX                         ; 005a8a68
    SHL EAX,0x3                         ; 005a8a6a
    SUB EAX,EDX                         ; 005a8a6d
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8a6f
    MOV dword ptr [EAX + 0x3f624ec],EDX ; 005a8a73 | g_SfxLastSlot.field_20[52]
    RET                                 ; 005a8a79

