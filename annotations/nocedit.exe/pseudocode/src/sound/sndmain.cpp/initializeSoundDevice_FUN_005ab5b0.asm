; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0(void)
;
;
; XREF[2]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512d12
;   core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00 at 005b2d37
;
; Referenced Globals:
;   int g_CurrentSoundDevice = -0x1
;   undefined4 g_SfxChannelEnabled[26]
;   undefined4 g_SfxChannelEnabled[27]
;   CSoundDevice* g_CSoundDevicePtr
;   int g_HasHardware3DSound
;
; Called Functions:
;   sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440
;   sound_sndmain.cpp_closeSoundDevice_FUN_005ab660
;   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
;   sound_sndwav.cpp_getWavOutDevice_FUN_005b1510
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ab5b0
        ;   Label: sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005ab660 ; 005ab5b1
        ;   XREF to: 005ab660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_005ab660()
    TEST EAX,EAX                        ; 005ab5b6
    JNZ 0x005ab5bc                      ; 005ab5b8
        ;   XREF to: 005ab5bc (CONDITIONAL_JUMP)  ; LAB_005ab5bc
    POP EBP                             ; 005ab5ba
    RET                                 ; 005ab5bb
    MOV EDX,dword ptr [0x00681b24]      ; 005ab5bc | g_CurrentSoundDevice
        ;   Label: LAB_005ab5bc
    PUSH EDX                            ; 005ab5c2
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0 ; 005ab5c3
        ;   XREF to: 005ab4c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0(int device_id)
    MOV ECX,dword ptr [0x00681b24]      ; 005ab5c8 | g_CurrentSoundDevice
    ADD ESP,0x4                         ; 005ab5ce
    TEST ECX,ECX                        ; 005ab5d1
    JL 0x005ab644                       ; 005ab5d3
        ;   XREF to: 005ab644 (CONDITIONAL_JUMP)  ; LAB_005ab644
    LEA EAX,[ECX*0x8 + 0x0]             ; 005ab5d5
    ADD EAX,ECX                         ; 005ab5dc
    SHL EAX,0x2                         ; 005ab5de
    SUB EAX,ECX                         ; 005ab5e1
    SHL EAX,0x3                         ; 005ab5e3
    CMP dword ptr [EAX + 0x3f68aa8],0x0 ; 005ab5e6 | g_SfxChannelEnabled[26]
    JNZ 0x005ab605                      ; 005ab5ed
        ;   XREF to: 005ab605 (CONDITIONAL_JUMP)  ; LAB_005ab605
    PUSH ESI                            ; 005ab5ef
    MOV ESI,dword ptr [EAX + 0x3f68aac] ; 005ab5f0 | g_SfxChannelEnabled[27]
    PUSH ESI                            ; 005ab5f6
    CALL sound_sndwav.cpp_getWavOutDevice_FUN_005b1510 ; 005ab5f7
        ;   XREF to: 005b1510 (UNCONDITIONAL_CALL)  ; CWavOutDevice * sound_sndwav.cpp_getWavOutDevice_FUN_005b1510(UINT device_id)
    ADD ESP,0x4                         ; 005ab5fc
    MOV [0x03f69268],EAX                ; 005ab5ff | g_CSoundDevicePtr
    POP ESI                             ; 005ab604
    MOV EDX,dword ptr [0x00681b24]      ; 005ab605 | g_CurrentSoundDevice
        ;   Label: LAB_005ab605
    LEA EAX,[EDX*0x8 + 0x0]             ; 005ab60b
    ADD EAX,EDX                         ; 005ab612
    SHL EAX,0x2                         ; 005ab614
    SUB EAX,EDX                         ; 005ab617
    SHL EAX,0x3                         ; 005ab619
    CMP dword ptr [EAX + 0x3f68aa8],0x1 ; 005ab61c | g_SfxChannelEnabled[26]
    JNZ 0x005ab639                      ; 005ab623
        ;   XREF to: 005ab639 (CONDITIONAL_JUMP)  ; LAB_005ab639
    MOV EBP,dword ptr [EAX + 0x3f68aac] ; 005ab625 | g_SfxChannelEnabled[27]
    PUSH EBP                            ; 005ab62b
    CALL sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440 ; 005ab62c
        ;   XREF to: 005b0440 (UNCONDITIONAL_CALL)  ; CDirectSoundDevice * sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440(UINT device_id)
    ADD ESP,0x4                         ; 005ab631
    MOV [0x03f69268],EAX                ; 005ab634 | g_CSoundDevicePtr
    MOV EAX,[0x03f69268]                ; 005ab639 | g_CSoundDevicePtr
        ;   Label: LAB_005ab639
    TEST EAX,EAX                        ; 005ab63e
    JNZ 0x005ab648                      ; 005ab640
        ;   XREF to: 005ab648 (CONDITIONAL_JUMP)  ; LAB_005ab648
    POP EBP                             ; 005ab642
    RET                                 ; 005ab643
    XOR EAX,EAX                         ; 005ab644
        ;   Label: LAB_005ab644
    POP EBP                             ; 005ab646
    RET                                 ; 005ab647
    PUSH EAX                            ; 005ab648
        ;   Label: LAB_005ab648
    MOV EDX,dword ptr [EAX]             ; 005ab649
    CALL dword ptr [EDX + 0x14]         ; 005ab64b
    ADD ESP,0x4                         ; 005ab64e
    MOV [0x03f69270],EAX                ; 005ab651 | g_HasHardware3DSound
    MOV EAX,0x1                         ; 005ab656
    POP EBP                             ; 005ab65b
    RET                                 ; 005ab65c

