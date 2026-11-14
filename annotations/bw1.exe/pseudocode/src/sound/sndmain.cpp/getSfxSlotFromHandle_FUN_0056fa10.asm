; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSlot * __cdecl sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0056fa10(uint sfx_handle,int check_hardware_playback)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; int              Stack[0x8]:4   check_hardware_playback
;
; XREF[11]:
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660 at 00573672
;   sound_sndmain.cpp_getSfxSampleInfo_FUN_00573620 at 00573627
;   sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 at 005735b1
;   sound_sndmain.cpp_killSfx_FUN_00573a80 at 00573a87
;   sound_sndmain.cpp_setSfxBaseFrequency_FUN_00573980 at 00573987
;   sound_sndmain.cpp_setSfxFade_FUN_00573ab0 at 00573aba
;   sound_sndmain.cpp_setSfxPosition_FUN_00573760 at 00573767
;   sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005737d0 at 005737d7
;   sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_005738d0 at 005738d7
;   sound_sndmain.cpp_setSfxUserData_FUN_005739e0 at 00573a1a
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_02c74650
;   undefined4 DAT_02c80650
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;   sound_sndmain.cpp_unlockSound_FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fa10
        ;   Label: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0056fa10
    PUSH ESI                            ; 0056fa11
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056fa12
    MOV EBX,ESI                         ; 0056fa16
    SHR ESI,0x6                         ; 0056fa18
    AND EBX,0x3f                        ; 0056fa1b
    CMP ESI,0x1                         ; 0056fa1e
    JL 0x0056fa5d                       ; 0056fa21
        ;   XREF to: 0056fa5d (CONDITIONAL_JUMP)  ; LAB_0056fa5d
    CMP ESI,0xffffff                    ; 0056fa23
    JGE 0x0056fa5d                      ; 0056fa29
        ;   XREF to: 0056fa5d (CONDITIONAL_JUMP)  ; LAB_0056fa5d
    TEST EBX,EBX                        ; 0056fa2b
    JL 0x0056fa5d                       ; 0056fa2d
        ;   XREF to: 0056fa5d (CONDITIONAL_JUMP)  ; LAB_0056fa5d
    CMP EBX,0x40                        ; 0056fa2f
    JGE 0x0056fa5d                      ; 0056fa32
        ;   XREF to: 0056fa5d (CONDITIONAL_JUMP)  ; LAB_0056fa5d
    LEA EAX,[EBX*0x8 + 0x0]             ; 0056fa34
    ADD EAX,EBX                         ; 0056fa3b
    SHL EAX,0x3                         ; 0056fa3d
    SUB EAX,EBX                         ; 0056fa40
    MOV EBX,0x2c745ec                   ; 0056fa42
    SHL EAX,0x2                         ; 0056fa47
    ADD EBX,EAX                         ; 0056fa4a
    CMP ESI,dword ptr [EBX + 0x64]      ; 0056fa4c | DAT_02c74650
    JNZ 0x0056fa5d                      ; 0056fa4f
        ;   XREF to: 0056fa5d (CONDITIONAL_JUMP)  ; LAB_0056fa5d
    CMP dword ptr [ESP + 0x10],0x0      ; 0056fa51
    JNZ 0x0056fa62                      ; 0056fa56
        ;   XREF to: 0056fa62 (CONDITIONAL_JUMP)  ; LAB_0056fa62
    MOV EAX,EBX                         ; 0056fa58
        ;   Label: LAB_0056fa58
    POP ESI                             ; 0056fa5a
    POP EBX                             ; 0056fa5b
    RET                                 ; 0056fa5c
    XOR EAX,EAX                         ; 0056fa5d
        ;   Label: LAB_0056fa5d
    POP ESI                             ; 0056fa5f
    POP EBX                             ; 0056fa60
    RET                                 ; 0056fa61
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 0056fa62
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
        ;   Label: LAB_0056fa62
    CMP ESI,dword ptr [EBX + 0x64]      ; 0056fa67 | DAT_02c74650
    JNZ 0x0056fa90                      ; 0056fa6a
        ;   XREF to: 0056fa90 (CONDITIONAL_JUMP)  ; LAB_0056fa90
    CMP dword ptr [EBX + 0x68],0x0      ; 0056fa6c
    JZ 0x0056fa90                       ; 0056fa70
        ;   XREF to: 0056fa90 (CONDITIONAL_JUMP)  ; LAB_0056fa90
    CMP dword ptr [EBX + 0x60],0x0      ; 0056fa72
    JZ 0x0056fa58                       ; 0056fa76
        ;   XREF to: 0056fa58 (CONDITIONAL_JUMP)  ; LAB_0056fa58
    MOV EDX,dword ptr [0x02c80650]      ; 0056fa78 | DAT_02c80650
    TEST EDX,EDX                        ; 0056fa7e
    JZ 0x0056fa9a                       ; 0056fa80
        ;   XREF to: 0056fa9a (CONDITIONAL_JUMP)  ; LAB_0056fa9a
    TEST byte ptr [EBX + 0x11b],0x40    ; 0056fa82
    JZ 0x0056faad                       ; 0056fa89
        ;   XREF to: 0056faad (CONDITIONAL_JUMP)  ; LAB_0056faad
    MOV EAX,EBX                         ; 0056fa8b
    POP ESI                             ; 0056fa8d
    POP EBX                             ; 0056fa8e
    RET                                 ; 0056fa8f
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 0056fa90
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
        ;   Label: LAB_0056fa90
    XOR EAX,EAX                         ; 0056fa95
    POP ESI                             ; 0056fa97
    POP EBX                             ; 0056fa98
    RET                                 ; 0056fa99
    PUSH EBX                            ; 0056fa9a
        ;   Label: LAB_0056fa9a
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70 ; 0056fa9b
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0056faa0
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 0056faa3
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
    XOR EAX,EAX                         ; 0056faa8
    POP ESI                             ; 0056faaa
    POP EBX                             ; 0056faab
    RET                                 ; 0056faac
    PUSH EBX                            ; 0056faad
        ;   Label: LAB_0056faad
    MOV ESI,dword ptr [EDX]             ; 0056faae
    PUSH EDX                            ; 0056fab0
    CALL dword ptr [ESI + 0x54]         ; 0056fab1
    ADD ESP,0x8                         ; 0056fab4
    TEST EAX,EAX                        ; 0056fab7
    JNZ 0x0056fa58                      ; 0056fab9
        ;   XREF to: 0056fa58 (CONDITIONAL_JUMP)  ; LAB_0056fa58
    PUSH EBX                            ; 0056fabb
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70 ; 0056fabc
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0056fac1
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 0056fac4
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
    XOR EAX,EAX                         ; 0056fac9
    POP ESI                             ; 0056facb
    POP EBX                             ; 0056facc
    RET                                 ; 0056facd

