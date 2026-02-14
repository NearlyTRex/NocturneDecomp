; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_setSfxTrackedDoublePosition_FUN_005a9910(uint sfx_handle,CVector3d *position_source_ptr)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CVector3d *      Stack[0x8]:4   position_source_ptr
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

    PUSH EBX                            ; 005a9910
        ;   Label: sound_sndmain.cpp_setSfxTrackedDoublePosition_FUN_005a9910
    PUSH 0x1                            ; 005a9911
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a9913
    PUSH EDX                            ; 005a9917
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9918
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 005a991d
    ADD ESP,0x8                         ; 005a991f
    TEST EAX,EAX                        ; 005a9922
    JNZ 0x005a9928                      ; 005a9924
        ;   XREF to: 005a9928 (CONDITIONAL_JUMP)  ; LAB_005a9928
    POP EBX                             ; 005a9926
    RET                                 ; 005a9927
    PUSH ESI                            ; 005a9928
        ;   Label: LAB_005a9928
    PUSH 0x0                            ; 005a9929
    MOV dword ptr [EAX + 0x20],0x2      ; 005a992b
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a9932
    PUSH EBX                            ; 005a9936
    MOV dword ptr [EBX + 0x1c],EAX      ; 005a9937
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005a993a
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x70]      ; 005a993f
    ADD ESP,0x8                         ; 005a9942
    TEST ECX,ECX                        ; 005a9945
    JZ 0x005a995f                       ; 005a9947
        ;   XREF to: 005a995f (CONDITIONAL_JUMP)  ; LAB_005a995f
    MOV ESI,dword ptr [0x03f69268]      ; 005a9949 | g_CSoundDevicePtr
    TEST ESI,ESI                        ; 005a994f
    JZ 0x005a995f                       ; 005a9951
        ;   XREF to: 005a995f (CONDITIONAL_JUMP)  ; LAB_005a995f
    PUSH 0x2                            ; 005a9953
    PUSH EBX                            ; 005a9955
    MOV EDX,dword ptr [ESI]             ; 005a9956
    PUSH ESI                            ; 005a9958
    CALL dword ptr [EDX + 0x40]         ; 005a9959
    ADD ESP,0xc                         ; 005a995c
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a995f
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a995f
    MOV EAX,0x1                         ; 005a9964
    POP ESI                             ; 005a9969
    POP EBX                             ; 005a996a
    RET                                 ; 005a996b

