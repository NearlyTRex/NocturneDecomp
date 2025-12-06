; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; int              Stack[0x8]:4   check_hardware_playback
;
; XREF[16]:
;   sound_sndmain.cpp_getSfxOptions_FUN_005a97e0 at 005a97e8
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720 at 005a9732
;   sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0 at 005a96e7
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 at 005a968e
;   sound_sndmain.cpp_killSfx_FUN_005a9c40 at 005a9c47
;   sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40 at 005a9b48
;   sound_sndmain.cpp_setSfxFade_FUN_005a9c70 at 005a9c7a
;   sound_sndmain.cpp_setSfxIsActive_FUN_005a9c10 at 005a9c17
;   sound_sndmain.cpp_setSfxPosition_FUN_005a9820 at 005a9828
;   sound_sndmain.cpp_setSfxTrackedDoublePosition_FUN_005a9910 at 005a9918
;   ... and 6 more
;
; Referenced Globals:
;   CSfxSlot[64] g_SfxSlots
;   undefined4 DAT_03f5db14
;   undefined4 g_SfxSlots[0].field7_0x74
;   undefined4 DAT_03f5db1c
;   CSoundDevice* g_CSoundDevicePtr
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5d00
        ;   Label: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
    PUSH ESI                            ; 005a5d01
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a5d02
    MOV EBX,ESI                         ; 005a5d06
    SHR ESI,0x6                         ; 005a5d08
    AND EBX,0x3f                        ; 005a5d0b
    CMP ESI,0x1                         ; 005a5d0e
    JL 0x005a5d4d                       ; 005a5d11 | LAB_005a5d4d
        ;   XREF to: 005a5d4d (CONDITIONAL_JUMP)
    CMP ESI,0xffffff                    ; 005a5d13
    JGE 0x005a5d4d                      ; 005a5d19 | LAB_005a5d4d
        ;   XREF to: 005a5d4d (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 005a5d1b
    JL 0x005a5d4d                       ; 005a5d1d | LAB_005a5d4d
        ;   XREF to: 005a5d4d (CONDITIONAL_JUMP)
    CMP EBX,0x40                        ; 005a5d1f
    JGE 0x005a5d4d                      ; 005a5d22 | LAB_005a5d4d
        ;   XREF to: 005a5d4d (CONDITIONAL_JUMP)
    LEA EAX,[EBX*0x8 + 0x0]             ; 005a5d24
    ADD EAX,EBX                         ; 005a5d2b
    SHL EAX,0x2                         ; 005a5d2d
    ADD EAX,EBX                         ; 005a5d30
    MOV EBX,0x3f5daa4                   ; 005a5d32 | CSfxSlot[64] g_SfxSlots
    SHL EAX,0x3                         ; 005a5d37
    ADD EBX,EAX                         ; 005a5d3a
    CMP ESI,dword ptr [EBX + 0x74]      ; 005a5d3c | g_SfxSlots[0].field7_0x74
    JNZ 0x005a5d4d                      ; 005a5d3f | LAB_005a5d4d
        ;   XREF to: 005a5d4d (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x10],0x0      ; 005a5d41
    JNZ 0x005a5d52                      ; 005a5d46 | LAB_005a5d52
        ;   XREF to: 005a5d52 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005a5d48
        ;   Label: LAB_005a5d48
    POP ESI                             ; 005a5d4a
    POP EBX                             ; 005a5d4b
    RET                                 ; 005a5d4c
    XOR EAX,EAX                         ; 005a5d4d
        ;   Label: LAB_005a5d4d
    POP ESI                             ; 005a5d4f
    POP EBX                             ; 005a5d50
    RET                                 ; 005a5d51
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005a5d52 | void sound_sndmain.cpp_lockSound_FUN_005abd30()
        ;   Label: LAB_005a5d52
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)
    CMP ESI,dword ptr [EBX + 0x74]      ; 005a5d57 | g_SfxSlots[0].field7_0x74
    JNZ 0x005a5d85                      ; 005a5d5a | LAB_005a5d85
        ;   XREF to: 005a5d85 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x78],0x0      ; 005a5d5c | DAT_03f5db1c
    JZ 0x005a5d85                       ; 005a5d60 | LAB_005a5d85
        ;   XREF to: 005a5d85 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x70],0x0      ; 005a5d62 | DAT_03f5db14
    JZ 0x005a5d48                       ; 005a5d66 | LAB_005a5d48
        ;   XREF to: 005a5d48 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x03f69268]      ; 005a5d68 | CSoundDevice * g_CSoundDevicePtr
    TEST EDX,EDX                        ; 005a5d6e
    JZ 0x005a5d8f                       ; 005a5d70 | LAB_005a5d8f
        ;   XREF to: 005a5d8f (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005a5d72
    MOV ESI,dword ptr [EDX]             ; 005a5d73
    PUSH EDX                            ; 005a5d75
    CALL dword ptr [ESI + 0x50]         ; 005a5d76
    ADD ESP,0x8                         ; 005a5d79
    TEST EAX,EAX                        ; 005a5d7c
    JZ 0x005a5d8f                       ; 005a5d7e | LAB_005a5d8f
        ;   XREF to: 005a5d8f (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005a5d80
    POP ESI                             ; 005a5d82
    POP EBX                             ; 005a5d83
    RET                                 ; 005a5d84
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a5d85 | void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a5d85
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
    XOR EAX,EAX                         ; 005a5d8a
    POP ESI                             ; 005a5d8c
    POP EBX                             ; 005a5d8d
    RET                                 ; 005a5d8e
    PUSH EBX                            ; 005a5d8f
        ;   Label: LAB_005a5d8f
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 ; 005a5d90 | void sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot * slot)
        ;   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a5d95
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a5d98 | void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
    XOR EAX,EAX                         ; 005a5d9d
    POP ESI                             ; 005a5d9f
    POP EBX                             ; 005a5da0
    RET                                 ; 005a5da1

