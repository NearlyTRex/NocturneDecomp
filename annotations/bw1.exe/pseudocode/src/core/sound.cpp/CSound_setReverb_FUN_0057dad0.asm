; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_setReverb_FUN_0057dad0(CSound *this_ptr,float volume,float decay_time,float damping)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   volume
; float            Stack[0xc]:4   decay_time
; float            Stack[0x10]:4   damping
;
; XREF[1]:
;   core_sound.cpp_CSound_setReverbPreset_FUN_0057db00 at 0057db2a
;
; Referenced Globals:
;   SReverbSettings g_SoundReverb
;   undefined4 g_SoundReverb.decay_time
;   undefined4 g_SoundReverb.damping
;
; Called Functions:
;   sound_sndmain.cpp_setReverb_FUN_005756f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0057dad0
        ;   Label: core_sound.cpp_CSound_setReverb_FUN_0057dad0
    MOV [0x02c82a84],EAX                ; 0057dad4 | g_SoundReverb
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057dad9
    MOV [0x02c82a88],EAX                ; 0057dadd | g_SoundReverb.decay_time
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057dae2
    PUSH EAX                            ; 0057dae6
    PUSH dword ptr [ESP + 0x10]         ; 0057dae7
    PUSH dword ptr [ESP + 0x10]         ; 0057daeb
    MOV [0x02c82a8c],EAX                ; 0057daef | g_SoundReverb.damping
    CALL sound_sndmain.cpp_setReverb_FUN_005756f0 ; 0057daf4
        ;   XREF to: 005756f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setReverb_FUN_005756f0(float volume, float decay_time, float damping)
    ADD ESP,0xc                         ; 0057daf9
    RET                                 ; 0057dafc

