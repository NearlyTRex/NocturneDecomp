; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_00550f20(uint sfx_handle,float volume)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; float            Stack[0x8]:4   volume
;
; XREF[7]:
;   core_charactr.cpp_CCharacter_processFire_FUN_00425fb0 at 00426155
;   core_event.cpp_FUN_00489670 at 0048b34a
;   core_lightgun.cpp_CLightGun_fire_FUN_004e2e70 at 004e389c
;   core_lightgun.cpp_CLightGun_process_FUN_004e38d0 at 004e39b0
;   core_manpuz.cpp_updateGemHumChannel_FUN_004e6b20 at 004e6bb9
;   core_sound.cpp_CSound_process_FUN_0055a3c0 at 0055a4a3
;   core_sound.cpp_FUN_00559b50 at 00559ee8
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0
;   sound_sndmain.cpp_unlockSound_FUN_00551440
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00550f20
        ;   Label: sound_sndmain.cpp_setSfxVolume_FUN_00550f20
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550f22
    PUSH EDX                            ; 00550f26
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0 ; 00550f27
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00550f2c
    TEST EAX,EAX                        ; 00550f2f
    JNZ 0x00550f34                      ; 00550f31
        ;   XREF to: 00550f34 (CONDITIONAL_JUMP)  ; LAB_00550f34
    RET                                 ; 00550f33
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550f34
        ;   Label: LAB_00550f34
    MOV dword ptr [EAX + 0x38],EDX      ; 00550f38
    OR byte ptr [EAX + 0x118],0x8       ; 00550f3b
    CALL sound_sndmain.cpp_unlockSound_FUN_00551440 ; 00550f42
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00551440()
    MOV EAX,0x1                         ; 00550f47
    RET                                 ; 00550f4c

