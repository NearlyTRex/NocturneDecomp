; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle,float volume)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; float            Stack[0x8]:4   volume
;
; XREF[7]:
;   core_charactr.cpp_CCharacter_processFire_FUN_0042a830 at 0042a9d5
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ab6bc
;   core_lightgun.cpp_CLightGun_fire_FUN_00505c70 at 0050641b
;   core_lightgun.cpp_CLightGun_process_FUN_00506450 at 00506541
;   core_manpuz.cpp_FUN_0050a4f0 at 0050a589
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b30b3
;   core_sound.cpp_processTrainSounds_FUN_005b2770 at 005b2ae1
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

    PUSH EBX                            ; 005a9ae0
        ;   Label: sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0
    PUSH 0x1                            ; 005a9ae1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a9ae3
    PUSH EDX                            ; 005a9ae7
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9ae8
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 005a9aed
    ADD ESP,0x8                         ; 005a9aef
    TEST EAX,EAX                        ; 005a9af2
    JNZ 0x005a9af8                      ; 005a9af4
        ;   XREF to: 005a9af8 (CONDITIONAL_JUMP)  ; LAB_005a9af8
    POP EBX                             ; 005a9af6
    RET                                 ; 005a9af7
    PUSH EDI                            ; 005a9af8
        ;   Label: LAB_005a9af8
    PUSH ESI                            ; 005a9af9
    PUSH 0x0                            ; 005a9afa
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a9afc
    PUSH EBX                            ; 005a9b00
    MOV ESI,0x1                         ; 005a9b01
    MOV dword ptr [EBX + 0x44],EAX      ; 005a9b06
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005a9b09
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x70]      ; 005a9b0e
    ADD ESP,0x8                         ; 005a9b11
    TEST ECX,ECX                        ; 005a9b14
    JZ 0x005a9b30                       ; 005a9b16
        ;   XREF to: 005a9b30 (CONDITIONAL_JUMP)  ; LAB_005a9b30
    MOV EDI,dword ptr [0x03f69268]      ; 005a9b18 | g_CSoundDevicePtr
    TEST EDI,EDI                        ; 005a9b1e
    JZ 0x005a9b30                       ; 005a9b20
        ;   XREF to: 005a9b30 (CONDITIONAL_JUMP)  ; LAB_005a9b30
    PUSH 0x8                            ; 005a9b22
    PUSH EBX                            ; 005a9b24
    MOV ESI,dword ptr [EDI]             ; 005a9b25
    PUSH EDI                            ; 005a9b27
    CALL dword ptr [ESI + 0x40]         ; 005a9b28
    ADD ESP,0xc                         ; 005a9b2b
    MOV ESI,EAX                         ; 005a9b2e
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9b30
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a9b30
    MOV EAX,ESI                         ; 005a9b35
    POP ESI                             ; 005a9b37
    POP EDI                             ; 005a9b38
    POP EBX                             ; 005a9b39
    RET                                 ; 005a9b3a

