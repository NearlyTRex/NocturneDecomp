; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_setSfxVelocity_FUN_005a9970 (uint sfx_handle,double vel_x,double vel_y,double vel_z)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; double           Stack[0x8]:8   vel_x
; double           Stack[0x10]:8   vel_y
; double           Stack[0x18]:8   vel_z
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

    PUSH EBX                            ; 005a9970
        ;   Label: sound_sndmain.cpp_setSfxVelocity_FUN_005a9970
    PUSH 0x1                            ; 005a9971
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a9973
    PUSH EDX                            ; 005a9977
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9978
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 005a997d
    ADD ESP,0x8                         ; 005a997f
    TEST EAX,EAX                        ; 005a9982
    JNZ 0x005a9988                      ; 005a9984
        ;   XREF to: 005a9988 (CONDITIONAL_JUMP)  ; LAB_005a9988
    POP EBX                             ; 005a9986
    RET                                 ; 005a9987
    PUSH EDI                            ; 005a9988
        ;   Label: LAB_005a9988
    PUSH ESI                            ; 005a9989
    MOV dword ptr [EBX + 0x3c],0x0      ; 005a998a
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a9991
    MOV dword ptr [EBX + 0x40],0x0      ; 005a9995
    MOV dword ptr [EBX + 0x24],EAX      ; 005a999c
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a999f
    MOV dword ptr [EBX + 0x28],EAX      ; 005a99a3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a99a6
    MOV dword ptr [EBX + 0x2c],EAX      ; 005a99aa
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a99ad
    PUSH 0x0                            ; 005a99b1
    MOV dword ptr [EBX + 0x30],EAX      ; 005a99b3
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a99b6
    PUSH EBX                            ; 005a99ba
    MOV dword ptr [EBX + 0x34],EAX      ; 005a99bb
    MOV EAX,dword ptr [ESP + 0x30]      ; 005a99be
    MOV ESI,0x1                         ; 005a99c2
    MOV dword ptr [EBX + 0x38],EAX      ; 005a99c7
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005a99ca
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x70]      ; 005a99cf
    ADD ESP,0x8                         ; 005a99d2
    TEST ECX,ECX                        ; 005a99d5
    JZ 0x005a99f1                       ; 005a99d7
        ;   XREF to: 005a99f1 (CONDITIONAL_JUMP)  ; LAB_005a99f1
    MOV EDI,dword ptr [0x03f69268]      ; 005a99d9 | g_CSoundDevicePtr
    TEST EDI,EDI                        ; 005a99df
    JZ 0x005a99f1                       ; 005a99e1
        ;   XREF to: 005a99f1 (CONDITIONAL_JUMP)  ; LAB_005a99f1
    PUSH 0x4                            ; 005a99e3
    PUSH EBX                            ; 005a99e5
    MOV ESI,dword ptr [EDI]             ; 005a99e6
    PUSH EDI                            ; 005a99e8
    CALL dword ptr [ESI + 0x40]         ; 005a99e9
    ADD ESP,0xc                         ; 005a99ec
    MOV ESI,EAX                         ; 005a99ef
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a99f1
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a99f1
    MOV EAX,ESI                         ; 005a99f6
    POP ESI                             ; 005a99f8
    POP EDI                             ; 005a99f9
    POP EBX                             ; 005a99fa
    RET                                 ; 005a99fb

