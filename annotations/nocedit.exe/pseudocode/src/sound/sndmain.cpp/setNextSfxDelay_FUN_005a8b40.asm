; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_005a8b40(double delay_seconds)
;
; Parameters:
; double           Stack[0x4]:8   delay_seconds
;
; XREF[3]:
;   core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_005b3aa0 at 005b3ab0
;   core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0 at 005b3af4
;   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30 at 005b3b40
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.field_20[60]
;   undefined4 g_SfxLastSlot.field_20[64]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a8b40 | g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40
    SHL EAX,0x4                         ; 005a8b45
    MOV EDX,EAX                         ; 005a8b48
    SHL EAX,0x3                         ; 005a8b4a
    SUB EAX,EDX                         ; 005a8b4d
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8b4f
    MOV dword ptr [EAX + 0x3f624f4],EDX ; 005a8b53 | g_SfxLastSlot.field_20[60]
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a8b59
    MOV dword ptr [EAX + 0x3f624f8],EDX ; 005a8b5d | g_SfxLastSlot.field_20[64]
    RET                                 ; 005a8b63

