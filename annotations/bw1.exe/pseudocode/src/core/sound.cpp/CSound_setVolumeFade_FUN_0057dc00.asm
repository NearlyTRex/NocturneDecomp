; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0057dc00(CSound *this_ptr,float target_volume,float fade_time)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   target_volume
; float            Stack[0xc]:4   fade_time
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_004a1d00 at 004a38d9
;
; Referenced Globals:
;   float g_TargetVolumeMultiplier
;   float g_VolumeFadeTimeRemaining
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0057dc00
        ;   Label: core_sound.cpp_CSound_setVolumeFade_FUN_0057dc00
    MOV [0x02c832ac],EAX                ; 0057dc04 | g_TargetVolumeMultiplier
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057dc09
    MOV [0x02c832b0],EAX                ; 0057dc0d | g_VolumeFadeTimeRemaining
    RET                                 ; 0057dc12

