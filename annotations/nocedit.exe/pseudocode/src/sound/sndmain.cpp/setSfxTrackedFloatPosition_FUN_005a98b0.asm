; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005a98b0(uint sfx_handle, CVector3f * position_source_ptr)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CVector3f *      Stack[0x8]:4   position_source_ptr
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_FUN_004c7db0 at 004c7e34
;   core_fire.cpp_CFireEffect_FUN_004c8dd0 at 004c8e32
;
; Referenced Globals:
;   CSoundDevice* g_CSoundDevicePtr
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a98b0
        ;   Label: sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005a98b0
    PUSH 0x1                            ; 005a98b1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a98b3
    PUSH EDX                            ; 005a98b7
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a98b8
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 005a98bd
    ADD ESP,0x8                         ; 005a98bf
    TEST EAX,EAX                        ; 005a98c2
    JNZ 0x005a98c8                      ; 005a98c4
        ;   XREF to: 005a98c8 (CONDITIONAL_JUMP)  ; LAB_005a98c8
    POP EBX                             ; 005a98c6
    RET                                 ; 005a98c7
    PUSH ESI                            ; 005a98c8
        ;   Label: LAB_005a98c8
    PUSH 0x0                            ; 005a98c9
    MOV dword ptr [EAX + 0x20],0x1      ; 005a98cb
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a98d2
    PUSH EBX                            ; 005a98d6
    MOV dword ptr [EBX + 0x1c],EAX      ; 005a98d7
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005a98da
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x70]      ; 005a98df
    ADD ESP,0x8                         ; 005a98e2
    TEST ECX,ECX                        ; 005a98e5
    JZ 0x005a98ff                       ; 005a98e7
        ;   XREF to: 005a98ff (CONDITIONAL_JUMP)  ; LAB_005a98ff
    MOV ESI,dword ptr [0x03f69268]      ; 005a98e9 | g_CSoundDevicePtr
    TEST ESI,ESI                        ; 005a98ef
    JZ 0x005a98ff                       ; 005a98f1
        ;   XREF to: 005a98ff (CONDITIONAL_JUMP)  ; LAB_005a98ff
    PUSH 0x2                            ; 005a98f3
    PUSH EBX                            ; 005a98f5
    MOV EDX,dword ptr [ESI]             ; 005a98f6
    PUSH ESI                            ; 005a98f8
    CALL dword ptr [EDX + 0x40]         ; 005a98f9
    ADD ESP,0xc                         ; 005a98fc
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a98ff
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a98ff
    MOV EAX,0x1                         ; 005a9904
    POP ESI                             ; 005a9909
    POP EBX                             ; 005a990a
    RET                                 ; 005a990b

