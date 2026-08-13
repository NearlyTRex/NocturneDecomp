; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxVelocity_FUN_00526f60(uint sfx_handle,double vel_x,double vel_y,double vel_z)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; double           Stack[0x8]:8   vel_x
; double           Stack[0x10]:8   vel_y
; double           Stack[0x18]:8   vel_z
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

    PUSH EBX                            ; 00526f60
        ;   Label: sound_sndmain.cpp_setSfxVelocity_FUN_00526f60
    PUSH 0x1                            ; 00526f61
    MOV EDX,dword ptr [ESP + 0xc]       ; 00526f63
    PUSH EDX                            ; 00526f67
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00526f68
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 00526f6d
    ADD ESP,0x8                         ; 00526f6f
    TEST EAX,EAX                        ; 00526f72
    JNZ 0x00526f78                      ; 00526f74
        ;   XREF to: 00526f78 (CONDITIONAL_JUMP)  ; LAB_00526f78
    POP EBX                             ; 00526f76
    RET                                 ; 00526f77
    PUSH EDI                            ; 00526f78
        ;   Label: LAB_00526f78
    PUSH ESI                            ; 00526f79
    MOV dword ptr [EBX + 0x3c],0x0      ; 00526f7a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00526f81
    MOV dword ptr [EBX + 0x40],0x0      ; 00526f85
    MOV dword ptr [EBX + 0x24],EAX      ; 00526f8c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00526f8f
    MOV dword ptr [EBX + 0x28],EAX      ; 00526f93
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00526f96
    MOV dword ptr [EBX + 0x2c],EAX      ; 00526f9a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00526f9d
    PUSH 0x0                            ; 00526fa1
    MOV dword ptr [EBX + 0x30],EAX      ; 00526fa3
    MOV EAX,dword ptr [ESP + 0x28]      ; 00526fa6
    PUSH EBX                            ; 00526faa
    MOV dword ptr [EBX + 0x34],EAX      ; 00526fab
    MOV EAX,dword ptr [ESP + 0x30]      ; 00526fae
    MOV ESI,0x1                         ; 00526fb2
    MOV dword ptr [EBX + 0x38],EAX      ; 00526fb7
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 ; 00526fba
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00526fbf
    ADD ESP,0x8                         ; 00526fc2
    TEST ECX,ECX                        ; 00526fc5
    JZ 0x00526fe1                       ; 00526fc7
        ;   XREF to: 00526fe1 (CONDITIONAL_JUMP)  ; LAB_00526fe1
    MOV EDI,dword ptr [0x02dc8318]      ; 00526fc9 | DAT_02dc8318
    TEST EDI,EDI                        ; 00526fcf
    JZ 0x00526fe1                       ; 00526fd1
        ;   XREF to: 00526fe1 (CONDITIONAL_JUMP)  ; LAB_00526fe1
    PUSH 0x4                            ; 00526fd3
    PUSH EBX                            ; 00526fd5
    MOV ESI,dword ptr [EDI]             ; 00526fd6
    PUSH EDI                            ; 00526fd8
    CALL dword ptr [ESI + 0x40]         ; 00526fd9
    ADD ESP,0xc                         ; 00526fdc
    MOV ESI,EAX                         ; 00526fdf
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00526fe1
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_00526fe1
    MOV EAX,ESI                         ; 00526fe6
    POP ESI                             ; 00526fe8
    POP EDI                             ; 00526fe9
    POP EBX                             ; 00526fea
    RET                                 ; 00526feb

