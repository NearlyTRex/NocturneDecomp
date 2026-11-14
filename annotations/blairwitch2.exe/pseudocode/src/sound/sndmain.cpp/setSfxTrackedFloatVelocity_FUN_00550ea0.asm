; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_00550ea0(uint sfx_handle,CVector3f *velocity_source_ptr)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CVector3f *      Stack[0x8]:4   velocity_source_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createFireball_FUN_0049d500 at 0049d594
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0
;   sound_sndmain.cpp_unlockSound_FUN_00551440
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00550ea0
        ;   Label: sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_00550ea0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550ea2
    PUSH EDX                            ; 00550ea6
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0 ; 00550ea7
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00550eac
    TEST EAX,EAX                        ; 00550eaf
    JNZ 0x00550eb4                      ; 00550eb1
        ;   XREF to: 00550eb4 (CONDITIONAL_JUMP)  ; LAB_00550eb4
    RET                                 ; 00550eb3
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550eb4
        ;   Label: LAB_00550eb4
    MOV dword ptr [EAX + 0x30],EDX      ; 00550eb8
    MOV DL,byte ptr [EAX + 0x118]       ; 00550ebb
    MOV dword ptr [EAX + 0x34],0x1      ; 00550ec1
    OR DL,0x4                           ; 00550ec8
    MOV byte ptr [EAX + 0x118],DL       ; 00550ecb
    CALL sound_sndmain.cpp_unlockSound_FUN_00551440 ; 00550ed1
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00551440()
    MOV EAX,0x1                         ; 00550ed6
    RET                                 ; 00550edb

