; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00(CVector3f *velocity_source_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   velocity_source_ptr
;
; XREF[3]:
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b3724
;   core_sound.cpp_processTrainSounds_FUN_005b2770 at 005b2b8a
;   core_vehicle.cpp_CVehicle_FUN_005e8b50 at 005e8b6e
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.field_20[44]
;   undefined4 g_SfxLastSlot.field_20[48]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a8a00 | g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00
    SHL EAX,0x4                         ; 005a8a05
    MOV EDX,EAX                         ; 005a8a08
    SHL EAX,0x3                         ; 005a8a0a
    SUB EAX,EDX                         ; 005a8a0d
    MOV dword ptr [EAX + 0x3f624e8],0x1 ; 005a8a0f | g_SfxLastSlot.field_20[48]
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8a19
    MOV dword ptr [EAX + 0x3f624e4],EDX ; 005a8a1d | g_SfxLastSlot.field_20[44]
    RET                                 ; 005a8a23

