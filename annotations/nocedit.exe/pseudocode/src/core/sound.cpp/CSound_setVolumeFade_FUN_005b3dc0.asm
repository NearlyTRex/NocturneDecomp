; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_005b3dc0 (CSound *this_ptr,float target_volume,float fade_time)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   target_volume
; float            Stack[0xc]:4   fade_time
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ab545
;
; Referenced Globals:
;   float g_TargetVolumeMultiplier
;   float g_VolumeFadeTimeRemaining
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005b3dc0
        ;   Label: core_sound.cpp_CSound_setVolumeFade_FUN_005b3dc0
    MOV [0x03f6b7b4],EAX                ; 005b3dc4 | g_TargetVolumeMultiplier
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b3dc9
    MOV [0x03f6b7b8],EAX                ; 005b3dcd | g_VolumeFadeTimeRemaining
    RET                                 ; 005b3dd2

