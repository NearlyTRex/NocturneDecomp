; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_005ab660(void)
;
;
; XREF[4]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512ca5
;   sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0 at 005ab5b1
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005abf61
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0 at 005aaec9
;
; Referenced Globals:
;   CSfxSample[64] g_SfxSamples
;   undefined4 DAT_03f629ac
;   CSfxSample* g_SfxSamplesEnd
;   CSoundDevice* g_CSoundDevicePtr
;   int g_HasHardware3DSound
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
;   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab660
        ;   Label: sound_sndmain.cpp_closeSoundDevice_FUN_005ab660
    PUSH ESI                            ; 005ab661
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 005ab662
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
    TEST EAX,EAX                        ; 005ab667
    JZ 0x005ab698                       ; 005ab669
        ;   XREF to: 005ab698 (CONDITIONAL_JUMP)  ; LAB_005ab698
    MOV EBX,0x3f6282c                   ; 005ab66b | g_SfxSamples
    LEA ESI,[EBX + 0x6000]              ; 005ab670 | g_SfxSamplesEnd
    PUSH EBX                            ; 005ab676 | g_SfxSamples | DAT_03f629ac
        ;   Label: LAB_005ab676
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005ab677
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
    ADD EBX,0x180                       ; 005ab67c
    ADD ESP,0x4                         ; 005ab682
    CMP EBX,ESI                         ; 005ab685
    JNZ 0x005ab676                      ; 005ab687
        ;   XREF to: 005ab676 (CONDITIONAL_JUMP)  ; LAB_005ab676
    MOV EDX,dword ptr [0x03f69268]      ; 005ab689 | g_CSoundDevicePtr
    TEST EDX,EDX                        ; 005ab68f
    JNZ 0x005ab69b                      ; 005ab691
        ;   XREF to: 005ab69b (CONDITIONAL_JUMP)  ; LAB_005ab69b
    MOV EAX,0x1                         ; 005ab693
    POP ESI                             ; 005ab698
        ;   Label: LAB_005ab698
    POP EBX                             ; 005ab699
    RET                                 ; 005ab69a
    PUSH EDX                            ; 005ab69b
        ;   Label: LAB_005ab69b
    MOV EBX,dword ptr [EDX]             ; 005ab69c
    CALL dword ptr [EBX]                ; 005ab69e
    ADD ESP,0x4                         ; 005ab6a0
    TEST EAX,EAX                        ; 005ab6a3
    JZ 0x005ab698                       ; 005ab6a5
        ;   XREF to: 005ab698 (CONDITIONAL_JUMP)  ; LAB_005ab698
    XOR ECX,ECX                         ; 005ab6a7
    MOV EAX,0x1                         ; 005ab6a9
    MOV dword ptr [0x03f69270],ECX      ; 005ab6ae | g_HasHardware3DSound
    MOV dword ptr [0x03f69268],ECX      ; 005ab6b4 | g_CSoundDevicePtr
    POP ESI                             ; 005ab6ba
    POP EBX                             ; 005ab6bb
    RET                                 ; 005ab6bc

