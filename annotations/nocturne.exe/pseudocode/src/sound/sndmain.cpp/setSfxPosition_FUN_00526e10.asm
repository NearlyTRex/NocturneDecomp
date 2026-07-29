; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxPosition_FUN_00526e10(uint sfx_handle,double pos_x,double pos_y,double pos_z)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; double           Stack[0x8]:8   pos_x
; double           Stack[0x10]:8   pos_y
; double           Stack[0x18]:8   pos_z
;
; XREF[1]:
;   core_manpuz.cpp_updateGemHumChannel_FUN_004caef0 at 004caf7b
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

    PUSH EBX                            ; 00526e10
        ;   Label: sound_sndmain.cpp_setSfxPosition_FUN_00526e10
    PUSH 0x1                            ; 00526e11
    MOV EDX,dword ptr [ESP + 0xc]       ; 00526e13
    PUSH EDX                            ; 00526e17
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00526e18
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0()
    MOV EBX,EAX                         ; 00526e1d
    ADD ESP,0x8                         ; 00526e1f
    TEST EAX,EAX                        ; 00526e22
    JNZ 0x00526e28                      ; 00526e24
        ;   XREF to: 00526e28 (CONDITIONAL_JUMP)  ; LAB_00526e28
    POP EBX                             ; 00526e26
    RET                                 ; 00526e27
    PUSH EDI                            ; 00526e28
        ;   Label: LAB_00526e28
    PUSH ESI                            ; 00526e29
    MOV dword ptr [EBX + 0x1c],0x0      ; 00526e2a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00526e31
    MOV dword ptr [EBX + 0x20],0x0      ; 00526e35
    MOV dword ptr [EBX + 0x4],EAX       ; 00526e3c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00526e3f
    MOV dword ptr [EBX + 0x8],EAX       ; 00526e43
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00526e46
    MOV dword ptr [EBX + 0xc],EAX       ; 00526e4a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00526e4d
    PUSH 0x0                            ; 00526e51
    MOV dword ptr [EBX + 0x10],EAX      ; 00526e53
    MOV EAX,dword ptr [ESP + 0x28]      ; 00526e56
    PUSH EBX                            ; 00526e5a
    MOV dword ptr [EBX + 0x14],EAX      ; 00526e5b
    MOV EAX,dword ptr [ESP + 0x30]      ; 00526e5e
    MOV ESI,0x1                         ; 00526e62
    MOV dword ptr [EBX + 0x18],EAX      ; 00526e67
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 ; 00526e6a
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00526e6f
    ADD ESP,0x8                         ; 00526e72
    TEST ECX,ECX                        ; 00526e75
    JZ 0x00526e91                       ; 00526e77
        ;   XREF to: 00526e91 (CONDITIONAL_JUMP)  ; LAB_00526e91
    MOV EDI,dword ptr [0x02dc8318]      ; 00526e79 | DAT_02dc8318
    TEST EDI,EDI                        ; 00526e7f
    JZ 0x00526e91                       ; 00526e81
        ;   XREF to: 00526e91 (CONDITIONAL_JUMP)  ; LAB_00526e91
    PUSH 0x2                            ; 00526e83
    PUSH EBX                            ; 00526e85
    MOV ESI,dword ptr [EDI]             ; 00526e86
    PUSH EDI                            ; 00526e88
    CALL dword ptr [ESI + 0x40]         ; 00526e89
    ADD ESP,0xc                         ; 00526e8c
    MOV ESI,EAX                         ; 00526e8f
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00526e91
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_00526e91
    MOV EAX,ESI                         ; 00526e96
    POP ESI                             ; 00526e98
    POP EDI                             ; 00526e99
    POP EBX                             ; 00526e9a
    RET                                 ; 00526e9b

