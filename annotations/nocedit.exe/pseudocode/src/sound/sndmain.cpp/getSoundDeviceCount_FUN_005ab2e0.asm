; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(void)
;
;
; XREF[6]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512411
;   sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0 at 005ab3d8
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370 at 005ab377
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005abf66
;   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0 at 005ab4d8
;   sound_sndmain.cpp_writeIni_FUN_005ac220 at 005ac24e
;
; Referenced Globals:
;   int g_SoundDeviceCount = -0x1
;   SSoundDeviceInfo[8] g_SoundDevices
;   undefined4 g_SoundDevices[1].device_name[0]
;   undefined4 g_SoundDevices[2].device_name[0]
;
; Called Functions:
;   sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;   sound_sndwav.cpp_enumerateWavOutDevice_FUN_005b1470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab2e0
        ;   Label: sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
    MOV EBX,dword ptr [0x00681b20]      ; 005ab2e1 | g_SoundDeviceCount
    TEST EBX,EBX                        ; 005ab2e7
    JL 0x005ab2f5                       ; 005ab2e9
        ;   XREF to: 005ab2f5 (CONDITIONAL_JUMP)  ; LAB_005ab2f5
    MOV EAX,EBX                         ; 005ab2eb
    MOV dword ptr [0x00681b20],EBX      ; 005ab2ed | g_SoundDeviceCount
    POP EBX                             ; 005ab2f3
    RET                                 ; 005ab2f4
    PUSH ESI                            ; 005ab2f5
        ;   Label: LAB_005ab2f5
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005ab2f6
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005ab2fb
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    XOR EBX,EBX                         ; 005ab300
    XOR ESI,ESI                         ; 005ab302
    IMUL EAX,EBX,0x118                  ; 005ab304
        ;   Label: LAB_005ab304
    ADD EAX,0x3f689a8                   ; 005ab30a | g_SoundDevices
    PUSH EAX                            ; 005ab30f | g_SoundDevices | g_SoundDevices[1].device_name[0]
    PUSH ESI                            ; 005ab310
    MOV dword ptr [0x00681b20],EBX      ; 005ab311 | g_SoundDeviceCount
    CALL sound_sndwav.cpp_enumerateWavOutDevice_FUN_005b1470 ; 005ab317
        ;   XREF to: 005b1470 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_enumerateWavOutDevice_FUN_005b1470(UINT device_id, SSoundDeviceInfo * device_info)
    MOV EBX,dword ptr [0x00681b20]      ; 005ab31c | g_SoundDeviceCount
    ADD ESP,0x8                         ; 005ab322
    TEST EAX,EAX                        ; 005ab325
    JZ 0x005ab330                       ; 005ab327
        ;   XREF to: 005ab330 (CONDITIONAL_JUMP)  ; LAB_005ab330
    INC EBX                             ; 005ab329
    INC ESI                             ; 005ab32a
    CMP EBX,0x8                         ; 005ab32b
    JL 0x005ab304                       ; 005ab32e
        ;   XREF to: 005ab304 (CONDITIONAL_JUMP)  ; LAB_005ab304
    XOR ESI,ESI                         ; 005ab330
        ;   Label: LAB_005ab330
    CMP EBX,0x8                         ; 005ab332
    JGE 0x005ab363                      ; 005ab335
        ;   XREF to: 005ab363 (CONDITIONAL_JUMP)  ; LAB_005ab363
    IMUL EAX,EBX,0x118                  ; 005ab337
        ;   Label: LAB_005ab337
    ADD EAX,0x3f689a8                   ; 005ab33d | g_SoundDevices
    PUSH EAX                            ; 005ab342 | g_SoundDevices | g_SoundDevices[1].device_name[0] | g_SoundDevices[2].device_name[0]
    PUSH ESI                            ; 005ab343
    MOV dword ptr [0x00681b20],EBX      ; 005ab344 | g_SoundDeviceCount
    CALL sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390 ; 005ab34a
        ;   XREF to: 005b0390 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390(UINT device_id, SSoundDeviceInfo * device_info)
    MOV EBX,dword ptr [0x00681b20]      ; 005ab34f | g_SoundDeviceCount
    ADD ESP,0x8                         ; 005ab355
    TEST EAX,EAX                        ; 005ab358
    JZ 0x005ab363                       ; 005ab35a
        ;   XREF to: 005ab363 (CONDITIONAL_JUMP)  ; LAB_005ab363
    INC EBX                             ; 005ab35c
    INC ESI                             ; 005ab35d
    CMP EBX,0x8                         ; 005ab35e
    JL 0x005ab337                       ; 005ab361
        ;   XREF to: 005ab337 (CONDITIONAL_JUMP)  ; LAB_005ab337
    MOV EAX,EBX                         ; 005ab363
        ;   Label: LAB_005ab363
    POP ESI                             ; 005ab365
    MOV dword ptr [0x00681b20],EBX      ; 005ab366 | g_SoundDeviceCount
    POP EBX                             ; 005ab36c
    RET                                 ; 005ab36d

