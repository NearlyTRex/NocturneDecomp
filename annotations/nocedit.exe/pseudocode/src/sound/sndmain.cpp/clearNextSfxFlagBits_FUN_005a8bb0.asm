; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0(uint flag_mask)
;
; Parameters:
; uint             Stack[0x4]:4   flag_mask
;
; XREF[3]:
;   sound_sndmain.cpp_startSfxAtStaticPosition_FUN_005a9580 at 005a958b
;   sound_sndmain.cpp_startSfxTrackedDoublePosition_FUN_005a9620 at 005a9628
;   sound_sndmain.cpp_startSfxTrackedFloatPosition_FUN_005a95e0 at 005a95e8
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.field_20[76]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a8bb0 | g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
    SHL EAX,0x4                         ; 005a8bb5
    MOV EDX,EAX                         ; 005a8bb8
    SHL EAX,0x3                         ; 005a8bba
    SUB EAX,EDX                         ; 005a8bbd
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8bbf
    MOV ECX,dword ptr [EAX + 0x3f62504] ; 005a8bc3 | g_SfxLastSlot.field_20[76]
    NOT EDX                             ; 005a8bc9
    AND ECX,EDX                         ; 005a8bcb
    MOV dword ptr [EAX + 0x3f62504],ECX ; 005a8bcd | g_SfxLastSlot.field_20[76]
    RET                                 ; 005a8bd3

