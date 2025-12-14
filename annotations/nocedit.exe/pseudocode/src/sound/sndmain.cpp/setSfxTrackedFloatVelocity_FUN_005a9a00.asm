; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_005a9a00(uint sfx_handle, CVector3f * velocity_source_ptr)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CVector3f *      Stack[0x8]:4   velocity_source_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_FUN_004c7db0 at 004c7e44
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

    PUSH EBX                            ; 005a9a00
        ;   Label: sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_005a9a00
    PUSH 0x1                            ; 005a9a01
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a9a03
    PUSH EDX                            ; 005a9a07
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9a08
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 005a9a0d
    ADD ESP,0x8                         ; 005a9a0f
    TEST EAX,EAX                        ; 005a9a12
    JNZ 0x005a9a18                      ; 005a9a14
        ;   XREF to: 005a9a18 (CONDITIONAL_JUMP)  ; LAB_005a9a18
    POP EBX                             ; 005a9a16
    RET                                 ; 005a9a17
    PUSH EDI                            ; 005a9a18
        ;   Label: LAB_005a9a18
    PUSH ESI                            ; 005a9a19
    PUSH 0x0                            ; 005a9a1a
    MOV dword ptr [EAX + 0x40],0x1      ; 005a9a1c
    PUSH EBX                            ; 005a9a23
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a9a24
    MOV ESI,0x1                         ; 005a9a28
    MOV dword ptr [EBX + 0x3c],EAX      ; 005a9a2d
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005a9a30
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x70]      ; 005a9a35
    ADD ESP,0x8                         ; 005a9a38
    TEST ECX,ECX                        ; 005a9a3b
    JZ 0x005a9a57                       ; 005a9a3d
        ;   XREF to: 005a9a57 (CONDITIONAL_JUMP)  ; LAB_005a9a57
    MOV EDI,dword ptr [0x03f69268]      ; 005a9a3f | g_CSoundDevicePtr
    TEST EDI,EDI                        ; 005a9a45
    JZ 0x005a9a57                       ; 005a9a47
        ;   XREF to: 005a9a57 (CONDITIONAL_JUMP)  ; LAB_005a9a57
    PUSH 0x4                            ; 005a9a49
    PUSH EBX                            ; 005a9a4b
    MOV ESI,dword ptr [EDI]             ; 005a9a4c
    PUSH EDI                            ; 005a9a4e
    CALL dword ptr [ESI + 0x40]         ; 005a9a4f
    ADD ESP,0xc                         ; 005a9a52
    MOV ESI,EAX                         ; 005a9a55
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9a57
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a9a57
    MOV EAX,ESI                         ; 005a9a5c
    POP ESI                             ; 005a9a5e
    POP EDI                             ; 005a9a5f
    POP EBX                             ; 005a9a60
    RET                                 ; 005a9a61

