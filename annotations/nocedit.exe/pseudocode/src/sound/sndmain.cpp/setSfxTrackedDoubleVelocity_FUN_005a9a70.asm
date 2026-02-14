; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_setSfxTrackedDoubleVelocity_FUN_005a9a70(uint sfx_handle,CVector3d *velocity_source_ptr)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CVector3d *      Stack[0x8]:4   velocity_source_ptr
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

    PUSH EBX                            ; 005a9a70
        ;   Label: sound_sndmain.cpp_setSfxTrackedDoubleVelocity_FUN_005a9a70
    PUSH 0x1                            ; 005a9a71
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a9a73
    PUSH EDX                            ; 005a9a77
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9a78
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 005a9a7d
    ADD ESP,0x8                         ; 005a9a7f
    TEST EAX,EAX                        ; 005a9a82
    JNZ 0x005a9a88                      ; 005a9a84
        ;   XREF to: 005a9a88 (CONDITIONAL_JUMP)  ; LAB_005a9a88
    POP EBX                             ; 005a9a86
    RET                                 ; 005a9a87
    PUSH EDI                            ; 005a9a88
        ;   Label: LAB_005a9a88
    PUSH ESI                            ; 005a9a89
    PUSH 0x0                            ; 005a9a8a
    MOV dword ptr [EAX + 0x40],0x2      ; 005a9a8c
    PUSH EBX                            ; 005a9a93
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a9a94
    MOV ESI,0x1                         ; 005a9a98
    MOV dword ptr [EBX + 0x3c],EAX      ; 005a9a9d
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005a9aa0
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x70]      ; 005a9aa5
    ADD ESP,0x8                         ; 005a9aa8
    TEST ECX,ECX                        ; 005a9aab
    JZ 0x005a9ac7                       ; 005a9aad
        ;   XREF to: 005a9ac7 (CONDITIONAL_JUMP)  ; LAB_005a9ac7
    MOV EDI,dword ptr [0x03f69268]      ; 005a9aaf | g_CSoundDevicePtr
    TEST EDI,EDI                        ; 005a9ab5
    JZ 0x005a9ac7                       ; 005a9ab7
        ;   XREF to: 005a9ac7 (CONDITIONAL_JUMP)  ; LAB_005a9ac7
    PUSH 0x4                            ; 005a9ab9
    PUSH EBX                            ; 005a9abb
    MOV ESI,dword ptr [EDI]             ; 005a9abc
    PUSH EDI                            ; 005a9abe
    CALL dword ptr [ESI + 0x40]         ; 005a9abf
    ADD ESP,0xc                         ; 005a9ac2
    MOV ESI,EAX                         ; 005a9ac5
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9ac7
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a9ac7
    MOV EAX,ESI                         ; 005a9acc
    POP ESI                             ; 005a9ace
    POP EDI                             ; 005a9acf
    POP EBX                             ; 005a9ad0
    RET                                 ; 005a9ad1

