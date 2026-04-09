; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(uint sfx_handle,float base_frequency)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; float            Stack[0x8]:4   base_frequency
;
; XREF[4]:
;   core_lightgun.cpp_CLightGun_process_FUN_00506450 at 00506554
;   core_tommygun.cpp_CTommyGun_process_FUN_005de360 at 005de3c4
;   core_turret.cpp_CTurret_process_FUN_005e2430 at 005e256f
;   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 at 005e8327
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

    PUSH EBX                            ; 005a9b40
        ;   Label: sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40
    PUSH 0x1                            ; 005a9b41
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a9b43
    PUSH EDX                            ; 005a9b47
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9b48
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 005a9b4d
    ADD ESP,0x8                         ; 005a9b4f
    TEST EAX,EAX                        ; 005a9b52
    JNZ 0x005a9b58                      ; 005a9b54
        ;   XREF to: 005a9b58 (CONDITIONAL_JUMP)  ; LAB_005a9b58
    POP EBX                             ; 005a9b56
    RET                                 ; 005a9b57
    PUSH ESI                            ; 005a9b58
        ;   Label: LAB_005a9b58
    PUSH 0x0                            ; 005a9b59
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a9b5b
    PUSH EBX                            ; 005a9b5f
    MOV dword ptr [EBX + 0x48],EAX      ; 005a9b60
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005a9b63
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x70]      ; 005a9b68
    ADD ESP,0x8                         ; 005a9b6b
    TEST ECX,ECX                        ; 005a9b6e
    JZ 0x005a9b88                       ; 005a9b70
        ;   XREF to: 005a9b88 (CONDITIONAL_JUMP)  ; LAB_005a9b88
    MOV ESI,dword ptr [0x03f69268]      ; 005a9b72 | g_CSoundDevicePtr
    TEST ESI,ESI                        ; 005a9b78
    JZ 0x005a9b88                       ; 005a9b7a
        ;   XREF to: 005a9b88 (CONDITIONAL_JUMP)  ; LAB_005a9b88
    PUSH 0x10                           ; 005a9b7c
    PUSH EBX                            ; 005a9b7e
    MOV EDX,dword ptr [ESI]             ; 005a9b7f
    PUSH ESI                            ; 005a9b81
    CALL dword ptr [EDX + 0x40]         ; 005a9b82
    ADD ESP,0xc                         ; 005a9b85
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9b88
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a9b88
    MOV EAX,0x1                         ; 005a9b8d
    POP ESI                             ; 005a9b92
    POP EBX                             ; 005a9b93
    RET                                 ; 005a9b94

