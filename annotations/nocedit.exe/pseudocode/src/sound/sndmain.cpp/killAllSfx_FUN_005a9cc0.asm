; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_killAllSfx_FUN_005a9cc0(void)
;
;
; XREF[2]:
;   sound_sndmain.cpp_freeAllSamples_FUN_005aa660 at 005aa66c
;   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 at 005ab130
;
; Referenced Globals:
;   CSfxSlot[64] g_SfxSlots
;   undefined4 g_SfxSlots[1].status
;   int g_SfxLastSlot
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9cc0
        ;   Label: sound_sndmain.cpp_killAllSfx_FUN_005a9cc0
    PUSH ESI                            ; 005a9cc1
    MOV EBX,0x3f5daa4                   ; 005a9cc2 | g_SfxSlots
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005a9cc7
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
    LEA ESI,[EBX + 0x4a00]              ; 005a9ccc | g_SfxLastSlot
    PUSH EBX                            ; 005a9cd2 | g_SfxSlots | g_SfxSlots[1].status
        ;   Label: LAB_005a9cd2
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 ; 005a9cd3
        ;   XREF to: 005a7e60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot * slot)
    ADD EBX,0x128                       ; 005a9cd8
    ADD ESP,0x4                         ; 005a9cde
    CMP EBX,ESI                         ; 005a9ce1
    JNZ 0x005a9cd2                      ; 005a9ce3
        ;   XREF to: 005a9cd2 (CONDITIONAL_JUMP)  ; LAB_005a9cd2
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9ce5
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    POP ESI                             ; 005a9cea
    POP EBX                             ; 005a9ceb
    RET                                 ; 005a9cec

