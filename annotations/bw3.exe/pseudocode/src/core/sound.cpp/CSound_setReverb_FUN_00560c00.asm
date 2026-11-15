; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_setReverb_FUN_00560c00(CSound *this_ptr,float volume,float decay_time,float damping)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   volume
; float            Stack[0xc]:4   decay_time
; float            Stack[0x10]:4   damping
;
; XREF[1]:
;   core_sound.cpp_CSound_setReverbPreset_FUN_00560c30 at 00560c5a
;
; Referenced Globals:
;   SReverbSettings g_SoundReverb
;   undefined4 g_SoundReverb.decay_time
;   undefined4 g_SoundReverb.damping
;
; Called Functions:
;   sound_sndmain.cpp_setReverb_FUN_00558860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00560c00
        ;   Label: core_sound.cpp_CSound_setReverb_FUN_00560c00
    MOV [0x02cf56a4],EAX                ; 00560c04 | g_SoundReverb
    MOV EAX,dword ptr [ESP + 0xc]       ; 00560c09
    MOV [0x02cf56a8],EAX                ; 00560c0d | g_SoundReverb.decay_time
    MOV EAX,dword ptr [ESP + 0x10]      ; 00560c12
    PUSH EAX                            ; 00560c16
    PUSH dword ptr [ESP + 0x10]         ; 00560c17
    PUSH dword ptr [ESP + 0x10]         ; 00560c1b
    MOV [0x02cf56ac],EAX                ; 00560c1f | g_SoundReverb.damping
    CALL sound_sndmain.cpp_setReverb_FUN_00558860 ; 00560c24
        ;   XREF to: 00558860 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setReverb_FUN_00558860(float volume, float decay_time, float damping)
    ADD ESP,0xc                         ; 00560c29
    RET                                 ; 00560c2c

