; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_setReverb_FUN_005b3c90(CSound *this_ptr,float volume,float decay_time,float damping)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   volume
; float            Stack[0xc]:4   decay_time
; float            Stack[0x10]:4   damping
;
; XREF[1]:
;   core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0 at 005b3cea
;
; Referenced Globals:
;   SReverbSettings g_SoundReverb
;   undefined4 g_SoundReverb.decay_time
;   undefined4 g_SoundReverb.damping
;
; Called Functions:
;   sound_sndmain.cpp_setReverb_FUN_005ab6e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005b3c90
        ;   Label: core_sound.cpp_CSound_setReverb_FUN_005b3c90
    MOV [0x03f6af88],EAX                ; 005b3c94 | g_SoundReverb
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b3c99
    MOV [0x03f6af8c],EAX                ; 005b3c9d | g_SoundReverb.decay_time
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b3ca2
    PUSH EAX                            ; 005b3ca6
    PUSH dword ptr [ESP + 0x10]         ; 005b3ca7
    PUSH dword ptr [ESP + 0x10]         ; 005b3cab
    MOV [0x03f6af90],EAX                ; 005b3caf | g_SoundReverb.damping
    CALL sound_sndmain.cpp_setReverb_FUN_005ab6e0 ; 005b3cb4
        ;   XREF to: 005ab6e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setReverb_FUN_005ab6e0(float volume, float decay_time, float damping)
    ADD ESP,0xc                         ; 005b3cb9
    RET                                 ; 005b3cbc

