; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxTrackedDoublePosition_FUN_00526f00(uint sfx_handle,CVector3d *position_source_ptr)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CVector3d *      Stack[0x8]:4   position_source_ptr
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

    PUSH EBX                            ; 00526f00
        ;   Label: sound_sndmain.cpp_setSfxTrackedDoublePosition_FUN_00526f00
    PUSH 0x1                            ; 00526f01
    MOV EDX,dword ptr [ESP + 0xc]       ; 00526f03
    PUSH EDX                            ; 00526f07
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00526f08
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 00526f0d
    ADD ESP,0x8                         ; 00526f0f
    TEST EAX,EAX                        ; 00526f12
    JNZ 0x00526f18                      ; 00526f14
        ;   XREF to: 00526f18 (CONDITIONAL_JUMP)  ; LAB_00526f18
    POP EBX                             ; 00526f16
    RET                                 ; 00526f17
    PUSH ESI                            ; 00526f18
        ;   Label: LAB_00526f18
    PUSH 0x0                            ; 00526f19
    MOV dword ptr [EAX + 0x20],0x2      ; 00526f1b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00526f22
    PUSH EBX                            ; 00526f26
    MOV dword ptr [EBX + 0x1c],EAX      ; 00526f27
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 ; 00526f2a
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00526f2f
    ADD ESP,0x8                         ; 00526f32
    TEST ECX,ECX                        ; 00526f35
    JZ 0x00526f4f                       ; 00526f37
        ;   XREF to: 00526f4f (CONDITIONAL_JUMP)  ; LAB_00526f4f
    MOV ESI,dword ptr [0x02dc8318]      ; 00526f39 | DAT_02dc8318
    TEST ESI,ESI                        ; 00526f3f
    JZ 0x00526f4f                       ; 00526f41
        ;   XREF to: 00526f4f (CONDITIONAL_JUMP)  ; LAB_00526f4f
    PUSH 0x2                            ; 00526f43
    PUSH EBX                            ; 00526f45
    MOV EDX,dword ptr [ESI]             ; 00526f46
    PUSH ESI                            ; 00526f48
    CALL dword ptr [EDX + 0x40]         ; 00526f49
    ADD ESP,0xc                         ; 00526f4c
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00526f4f
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_00526f4f
    MOV EAX,0x1                         ; 00526f54
    POP ESI                             ; 00526f59
    POP EBX                             ; 00526f5a
    RET                                 ; 00526f5b

