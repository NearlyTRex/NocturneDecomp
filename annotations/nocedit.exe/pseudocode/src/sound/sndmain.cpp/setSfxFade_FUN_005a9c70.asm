; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_setSfxFade_FUN_005a9c70(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; float            Stack[0x8]:4   target_volume
; float            Stack[0xc]:4   fade_duration
; int              Stack[0x10]:4   stop_after_fade
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ab6ab
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bdd07
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005a9c70
        ;   Label: sound_sndmain.cpp_setSfxFade_FUN_005a9c70
    PUSH 0x1                            ; 005a9c73
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a9c75
    PUSH EDX                            ; 005a9c79
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9c7a
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 005a9c7f
    TEST EAX,EAX                        ; 005a9c82
    JNZ 0x005a9c8a                      ; 005a9c84
        ;   XREF to: 005a9c8a (CONDITIONAL_JUMP)  ; LAB_005a9c8a
    ADD ESP,0x4                         ; 005a9c86
    RET                                 ; 005a9c89
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a9c8a
        ;   Label: LAB_005a9c8a
    MOV dword ptr [EAX + 0x10c],EDX     ; 005a9c8e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a9c94
    MOV dword ptr [EAX + 0x110],EDX     ; 005a9c98
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a9c9e
    MOV dword ptr [ESP],EDX             ; 005a9ca2
    FILD dword ptr [ESP]                ; 005a9ca5
    FSTP float ptr [EAX + 0x114]        ; 005a9ca8
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9cae
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    MOV EAX,0x1                         ; 005a9cb3
    ADD ESP,0x4                         ; 005a9cb8
    RET                                 ; 005a9cbb

