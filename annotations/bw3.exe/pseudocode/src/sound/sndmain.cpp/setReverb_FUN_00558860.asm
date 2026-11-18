; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setReverb_FUN_00558860(float volume,float decay_time,float damping)
;
; Parameters:
; float            Stack[0x4]:4   volume
; float            Stack[0x8]:4   decay_time
; float            Stack[0xc]:4   damping
;
; XREF[3]:
;   core_sound.cpp_CSound_configure_FUN_005607d0 at 0056086e
;   core_sound.cpp_CSound_init_FUN_0055fd30 at 0055fd8b
;   core_sound.cpp_CSound_setReverb_FUN_00560c00 at 00560c24
;
; Referenced Globals:
;   CSoundDevice* g_CSoundDevicePtr
;   SReverbSettings g_CachedReverb
;   undefined4 g_CachedReverb.decay_time
;   undefined4 g_CachedReverb.damping
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00558860
        ;   Label: sound_sndmain.cpp_setReverb_FUN_00558860
    MOV [0x02cf3400],EAX                ; 00558864 | g_CachedReverb
    MOV EAX,dword ptr [ESP + 0x8]       ; 00558869
    MOV [0x02cf3404],EAX                ; 0055886d | g_CachedReverb.decay_time
    MOV EAX,dword ptr [ESP + 0xc]       ; 00558872
    MOV EDX,dword ptr [0x02cf3280]      ; 00558876 | g_CSoundDevicePtr
    MOV [0x02cf3408],EAX                ; 0055887c | g_CachedReverb.damping
    TEST EDX,EDX                        ; 00558881
    JNZ 0x00558886                      ; 00558883
        ;   XREF to: 00558886 (CONDITIONAL_JUMP)  ; LAB_00558886
    RET                                 ; 00558885
    PUSH dword ptr [ESP + 0xc]          ; 00558886
        ;   Label: LAB_00558886
    PUSH dword ptr [ESP + 0xc]          ; 0055888a
    MOV EAX,EDX                         ; 0055888e
    PUSH dword ptr [ESP + 0xc]          ; 00558890
    MOV EDX,dword ptr [EDX]             ; 00558894
    PUSH EAX                            ; 00558896
    CALL dword ptr [EDX + 0x2c]         ; 00558897
    ADD ESP,0x10                        ; 0055889a
    RET                                 ; 0055889d

