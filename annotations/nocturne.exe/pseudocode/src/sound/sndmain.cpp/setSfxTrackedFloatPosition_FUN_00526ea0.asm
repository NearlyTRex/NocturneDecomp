; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_00526ea0(uint sfx_handle,CVector3f *position_source_ptr)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CVector3f *      Stack[0x8]:4   position_source_ptr
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_createFireball_FUN_0048b270 at 0048b2f4
;   core_fire.cpp_CFireEffect_createToss_FUN_0048c2a0 at 0048c302
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

    PUSH EBX                            ; 00526ea0
        ;   Label: sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00526ea0
    PUSH 0x1                            ; 00526ea1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00526ea3
    PUSH EDX                            ; 00526ea7
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00526ea8
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 00526ead
    ADD ESP,0x8                         ; 00526eaf
    TEST EAX,EAX                        ; 00526eb2
    JNZ 0x00526eb8                      ; 00526eb4
        ;   XREF to: 00526eb8 (CONDITIONAL_JUMP)  ; LAB_00526eb8
    POP EBX                             ; 00526eb6
    RET                                 ; 00526eb7
    PUSH ESI                            ; 00526eb8
        ;   Label: LAB_00526eb8
    PUSH 0x0                            ; 00526eb9
    MOV dword ptr [EAX + 0x20],0x1      ; 00526ebb
    MOV EAX,dword ptr [ESP + 0x14]      ; 00526ec2
    PUSH EBX                            ; 00526ec6
    MOV dword ptr [EBX + 0x1c],EAX      ; 00526ec7
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 ; 00526eca
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00526ecf
    ADD ESP,0x8                         ; 00526ed2
    TEST ECX,ECX                        ; 00526ed5
    JZ 0x00526eef                       ; 00526ed7
        ;   XREF to: 00526eef (CONDITIONAL_JUMP)  ; LAB_00526eef
    MOV ESI,dword ptr [0x02dc8318]      ; 00526ed9 | DAT_02dc8318
    TEST ESI,ESI                        ; 00526edf
    JZ 0x00526eef                       ; 00526ee1
        ;   XREF to: 00526eef (CONDITIONAL_JUMP)  ; LAB_00526eef
    PUSH 0x2                            ; 00526ee3
    PUSH EBX                            ; 00526ee5
    MOV EDX,dword ptr [ESI]             ; 00526ee6
    PUSH ESI                            ; 00526ee8
    CALL dword ptr [EDX + 0x40]         ; 00526ee9
    ADD ESP,0xc                         ; 00526eec
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00526eef
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_00526eef
    MOV EAX,0x1                         ; 00526ef4
    POP ESI                             ; 00526ef9
    POP EBX                             ; 00526efa
    RET                                 ; 00526efb

