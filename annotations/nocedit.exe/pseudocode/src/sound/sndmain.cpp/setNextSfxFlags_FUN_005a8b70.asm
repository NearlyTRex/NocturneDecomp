; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(uint flags)
;
; Parameters:
; uint             Stack[0x4]:4   flags
;
; XREF[5]:
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e439b
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 0051286a
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b338b
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b21d7
;   core_sound.cpp_processTrainSounds_FUN_005b2770 at 005b2895
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.field_20[76]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a8b70 | g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70
    SHL EAX,0x4                         ; 005a8b75
    MOV EDX,EAX                         ; 005a8b78
    SHL EAX,0x3                         ; 005a8b7a
    SUB EAX,EDX                         ; 005a8b7d
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8b7f
    MOV dword ptr [EAX + 0x3f62504],EDX ; 005a8b83 | g_SfxLastSlot.field_20[76]
    RET                                 ; 005a8b89

