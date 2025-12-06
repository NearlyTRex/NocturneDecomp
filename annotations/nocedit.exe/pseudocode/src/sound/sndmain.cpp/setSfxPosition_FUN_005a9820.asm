; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_setSfxPosition_FUN_005a9820(uint sfx_handle, double pos_x, double pos_y, double pos_z)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; double           Stack[0x8]:8   pos_x
; double           Stack[0x10]:8   pos_y
; double           Stack[0x18]:8   pos_z
;
; XREF[1]:
;   core_manpuz.cpp_FUN_0050a4f0 at 0050a57b
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

    PUSH EBX                            ; 005a9820
        ;   Label: sound_sndmain.cpp_setSfxPosition_FUN_005a9820
    PUSH 0x1                            ; 005a9821
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a9823
    PUSH EDX                            ; 005a9827
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9828 | CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 005a982d
    ADD ESP,0x8                         ; 005a982f
    TEST EAX,EAX                        ; 005a9832
    JNZ 0x005a9838                      ; 005a9834 | LAB_005a9838
        ;   XREF to: 005a9838 (CONDITIONAL_JUMP)
    POP EBX                             ; 005a9836
    RET                                 ; 005a9837
    PUSH EDI                            ; 005a9838
        ;   Label: LAB_005a9838
    PUSH ESI                            ; 005a9839
    MOV dword ptr [EBX + 0x1c],0x0      ; 005a983a
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a9841
    MOV dword ptr [EBX + 0x20],0x0      ; 005a9845
    MOV dword ptr [EBX + 0x4],EAX       ; 005a984c
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a984f
    MOV dword ptr [EBX + 0x8],EAX       ; 005a9853
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a9856
    MOV dword ptr [EBX + 0xc],EAX       ; 005a985a
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a985d
    PUSH 0x0                            ; 005a9861
    MOV dword ptr [EBX + 0x10],EAX      ; 005a9863
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a9866
    PUSH EBX                            ; 005a986a
    MOV dword ptr [EBX + 0x14],EAX      ; 005a986b
    MOV EAX,dword ptr [ESP + 0x30]      ; 005a986e
    MOV ESI,0x1                         ; 005a9872
    MOV dword ptr [EBX + 0x18],EAX      ; 005a9877
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005a987a | int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX + 0x70]      ; 005a987f
    ADD ESP,0x8                         ; 005a9882
    TEST ECX,ECX                        ; 005a9885
    JZ 0x005a98a1                       ; 005a9887 | LAB_005a98a1
        ;   XREF to: 005a98a1 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x03f69268]      ; 005a9889 | CSoundDevice * g_CSoundDevicePtr
    TEST EDI,EDI                        ; 005a988f
    JZ 0x005a98a1                       ; 005a9891 | LAB_005a98a1
        ;   XREF to: 005a98a1 (CONDITIONAL_JUMP)
    PUSH 0x2                            ; 005a9893
    PUSH EBX                            ; 005a9895
    MOV ESI,dword ptr [EDI]             ; 005a9896
    PUSH EDI                            ; 005a9898
    CALL dword ptr [ESI + 0x40]         ; 005a9899
    ADD ESP,0xc                         ; 005a989c
    MOV ESI,EAX                         ; 005a989f
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a98a1 | void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a98a1
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
    MOV EAX,ESI                         ; 005a98a6
    POP ESI                             ; 005a98a8
    POP EDI                             ; 005a98a9
    POP EBX                             ; 005a98aa
    RET                                 ; 005a98ab

