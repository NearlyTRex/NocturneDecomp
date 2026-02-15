; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(uint flag_mask)
;
; Parameters:
; uint             Stack[0x4]:4   flag_mask
;
; XREF[4]:
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004b0f00 at 004b0f50
;   core_sound.cpp_CSound_configure_FUN_005b3830 at 005b3949
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bdc6e
;   sound_sndmain.cpp_startNonPositionalSfx_FUN_005a9550 at 005a9558
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.field_20[76]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a8b90 | g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90
    SHL EAX,0x4                         ; 005a8b95
    MOV EDX,EAX                         ; 005a8b98
    SHL EAX,0x3                         ; 005a8b9a
    SUB EAX,EDX                         ; 005a8b9d
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8b9f
    OR dword ptr [EAX + 0x3f62504],EDX  ; 005a8ba3 | g_SfxLastSlot.field_20[76]
    RET                                 ; 005a8ba9

