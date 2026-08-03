; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130(uint sfx_handle,float base_frequency)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; float            Stack[0x8]:4   base_frequency
;
; XREF[4]:
;   core_lightgun.cpp_CLightGun_process_FUN_004c79a0 at 004c7aa4
;   core_tommygun.cpp_CTommyGun_process_FUN_005464a0 at 00546504
;   core_turret.cpp_CTurret_process_FUN_005497f0 at 0054992f
;   core_vehicle.cpp_CVehicle_process_FUN_0054eae0 at 0054ef87
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527130
        ;   Label: sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130
    PUSH 0x1                            ; 00527131
    MOV EDX,dword ptr [ESP + 0xc]       ; 00527133
    PUSH EDX                            ; 00527137
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00527138
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 0052713d
    ADD ESP,0x8                         ; 0052713f
    TEST EAX,EAX                        ; 00527142
    JNZ 0x00527148                      ; 00527144
        ;   XREF to: 00527148 (CONDITIONAL_JUMP)  ; LAB_00527148
    POP EBX                             ; 00527146
    RET                                 ; 00527147
    PUSH ESI                            ; 00527148
        ;   Label: LAB_00527148
    PUSH 0x0                            ; 00527149
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052714b
    PUSH EBX                            ; 0052714f
    MOV dword ptr [EBX + 0x48],EAX      ; 00527150
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 ; 00527153
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00527158
    ADD ESP,0x8                         ; 0052715b
    TEST ECX,ECX                        ; 0052715e
    JZ 0x00527178                       ; 00527160
        ;   XREF to: 00527178 (CONDITIONAL_JUMP)  ; LAB_00527178
    MOV ESI,dword ptr [0x02dc8318]      ; 00527162 | DAT_02dc8318
    TEST ESI,ESI                        ; 00527168
    JZ 0x00527178                       ; 0052716a
        ;   XREF to: 00527178 (CONDITIONAL_JUMP)  ; LAB_00527178
    PUSH 0x10                           ; 0052716c
    PUSH EBX                            ; 0052716e
    MOV EDX,dword ptr [ESI]             ; 0052716f
    PUSH ESI                            ; 00527171
    CALL dword ptr [EDX + 0x40]         ; 00527172
    ADD ESP,0xc                         ; 00527175
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00527178
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_00527178
    MOV EAX,0x1                         ; 0052717d
    POP ESI                             ; 00527182
    POP EBX                             ; 00527183
    RET                                 ; 00527184

