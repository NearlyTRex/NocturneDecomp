; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxPosition_FUN_00573760(uint sfx_handle,double pos_x,double pos_y,double pos_z)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; double           Stack[0x8]:8   pos_x
; double           Stack[0x10]:8   pos_y
; double           Stack[0x18]:8   pos_z
;
; XREF[1]:
;   core_manpuz.cpp_updateGemHumChannel_FUN_005057c0 at 0050584b
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0056fa10
;   sound_sndmain.cpp_unlockSound_FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00573760
        ;   Label: sound_sndmain.cpp_setSfxPosition_FUN_00573760
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573762
    PUSH EDX                            ; 00573766
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0056fa10 ; 00573767
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0056fa10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 0057376c
    TEST EAX,EAX                        ; 0057376f
    JNZ 0x00573774                      ; 00573771
        ;   XREF to: 00573774 (CONDITIONAL_JUMP)  ; LAB_00573774
    RET                                 ; 00573773
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573774
        ;   Label: LAB_00573774
    MOV dword ptr [EAX + 0x1c],0x0      ; 00573778
    MOV dword ptr [EAX + 0x4],EDX       ; 0057377f
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573782
    MOV dword ptr [EAX + 0x8],EDX       ; 00573786
    MOV EDX,dword ptr [ESP + 0x10]      ; 00573789
    MOV dword ptr [EAX + 0xc],EDX       ; 0057378d
    MOV EDX,dword ptr [ESP + 0x14]      ; 00573790
    MOV dword ptr [EAX + 0x10],EDX      ; 00573794
    MOV EDX,dword ptr [ESP + 0x18]      ; 00573797
    MOV dword ptr [EAX + 0x14],EDX      ; 0057379b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0057379e
    MOV dword ptr [EAX + 0x18],EDX      ; 005737a2
    MOV DL,byte ptr [EAX + 0x118]       ; 005737a5
    MOV dword ptr [EAX + 0x20],0x0      ; 005737ab
    OR DL,0x2                           ; 005737b2
    MOV byte ptr [EAX + 0x118],DL       ; 005737b5
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 005737bb
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
    MOV EAX,0x1                         ; 005737c0
    RET                                 ; 005737c5

