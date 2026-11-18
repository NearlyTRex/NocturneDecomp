; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_setReverb_FUN_0055b080(CSound *this_ptr,float volume,float decay_time,float damping)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   volume
; float            Stack[0xc]:4   decay_time
; float            Stack[0x10]:4   damping
;
; XREF[1]:
;   core_sound.cpp_CSound_setReverbPreset_FUN_0055b0b0 at 0055b0da
;
; Referenced Globals:
;   SReverbSettings g_SoundReverb
;   undefined4 g_SoundReverb.decay_time
;   undefined4 g_SoundReverb.damping
;
; Called Functions:
;   sound_sndmain.cpp_setReverb_FUN_00552cc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0055b080
        ;   Label: core_sound.cpp_CSound_setReverb_FUN_0055b080
    MOV [0x0264b2b4],EAX                ; 0055b084 | g_SoundReverb
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055b089
    MOV [0x0264b2b8],EAX                ; 0055b08d | g_SoundReverb.decay_time
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055b092
    PUSH EAX                            ; 0055b096
    PUSH dword ptr [ESP + 0x10]         ; 0055b097
    PUSH dword ptr [ESP + 0x10]         ; 0055b09b
    MOV [0x0264b2bc],EAX                ; 0055b09f | g_SoundReverb.damping
    CALL sound_sndmain.cpp_setReverb_FUN_00552cc0 ; 0055b0a4
        ;   XREF to: 00552cc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setReverb_FUN_00552cc0(float volume, float decay_time, float damping)
    ADD ESP,0xc                         ; 0055b0a9
    RET                                 ; 0055b0ac

