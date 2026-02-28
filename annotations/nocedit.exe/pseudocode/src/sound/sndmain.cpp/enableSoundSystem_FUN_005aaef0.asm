; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0(void)
;
;
; XREF[9]:
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e40f9
;   core_msnedit.cpp_CDemonMission_FUN_0053eb40 at 0053eb61
;   core_setedit.cpp_CDemonSet_showFogEditor_FUN_00580730 at 00580f86
;   core_skeledit.cpp_CDeformableModel_FUN_0058c190 at 0058d1f4
;   core_skeledit.cpp_CLodMesh_FUN_00589c20 at 00589e8c
;   core_skeledit.cpp_FUN_00589b10 at 00589b1b
;   core_sound.cpp_CSound_configure_FUN_005b3830 at 005b3933
;   core_sound.cpp_CSound_init_FUN_005b2dd0 at 005b2e33
;   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 at 005ad6d1
;
; Referenced Globals:
;   int g_AudioBitsPerSample = 0x10
;   int g_AudioChannelCount = 0x2
;   int g_AudioSampleRate = 0x5622
;   double g_Cached3DDistanceFactor = 1
;   undefined4 g_Cached3DDistanceFactor+4
;   CVector3d g_Cached3DListenerPos
;   undefined4 g_Cached3DListenerPos.x+4
;   undefined4 g_Cached3DListenerPos.y
;   undefined4 g_Cached3DListenerPos.y+4
;   undefined4 g_Cached3DListenerPos.z
;   undefined4 g_Cached3DListenerPos.z+4
;   CVector3d g_Cached3DListenerVelocity
;   undefined4 g_Cached3DListenerVelocity.x+4
;   undefined4 g_Cached3DListenerVelocity.y
;   undefined4 g_Cached3DListenerVelocity.y+4
;   ... and 32 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   sound_sndmain.cpp_isSoundBusy_FUN_005ab540
;   sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0
;   sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aaef0
        ;   Label: sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
    PUSH ESI                            ; 005aaef1
    PUSH EDI                            ; 005aaef2
    PUSH EBP                            ; 005aaef3
    CALL sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530 ; 005aaef4
        ;   XREF to: 005ab530 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530()
    TEST EAX,EAX                        ; 005aaef9
    JNZ 0x005aaf02                      ; 005aaefb
        ;   XREF to: 005aaf02 (CONDITIONAL_JUMP)  ; LAB_005aaf02
    POP EBP                             ; 005aaefd
    POP EDI                             ; 005aaefe
    POP ESI                             ; 005aaeff
    POP EBX                             ; 005aaf00
    RET                                 ; 005aaf01
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0 ; 005aaf02
        ;   XREF to: 005a96b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0()
        ;   Label: LAB_005aaf02
    TEST EAX,EAX                        ; 005aaf07
    JNZ 0x005aaf1e                      ; 005aaf09
        ;   XREF to: 005aaf1e (CONDITIONAL_JUMP)  ; LAB_005aaf1e
    CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540 ; 005aaf0b
        ;   XREF to: 005ab540 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_005ab540()
    TEST EAX,EAX                        ; 005aaf10
    JZ 0x005aaf28                       ; 005aaf12
        ;   XREF to: 005aaf28 (CONDITIONAL_JUMP)  ; LAB_005aaf28
    MOV EAX,0x1                         ; 005aaf14
    POP EBP                             ; 005aaf19
    POP EDI                             ; 005aaf1a
    POP ESI                             ; 005aaf1b
    POP EBX                             ; 005aaf1c
    RET                                 ; 005aaf1d
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 005aaf1e
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
        ;   Label: LAB_005aaf1e
    POP EBP                             ; 005aaf23
    POP EDI                             ; 005aaf24
    POP ESI                             ; 005aaf25
    POP EBX                             ; 005aaf26
    RET                                 ; 005aaf27
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005aaf28
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
        ;   Label: LAB_005aaf28
    MOV EDX,dword ptr [0x00681b1c]      ; 005aaf2d | g_AudioSampleRate
    PUSH EDX                            ; 005aaf33
    MOV ECX,dword ptr [0x00681b18]      ; 005aaf34 | g_AudioChannelCount
    PUSH ECX                            ; 005aaf3a
    MOV EBX,dword ptr [0x00681b14]      ; 005aaf3b | g_AudioBitsPerSample
    PUSH EBX                            ; 005aaf41
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170 ; 005aaf42
        ;   XREF to: 005ab170 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 005aaf47
    TEST EAX,EAX                        ; 005aaf4a
    JZ 0x005ab119                       ; 005aaf4c
        ;   XREF to: 005ab119 (CONDITIONAL_JUMP)  ; LAB_005ab119
    CMP dword ptr [0x03f69284],0x0      ; 005aaf52 | g_NumMixBuffers
    JLE 0x005aafa0                      ; 005aaf59
        ;   XREF to: 005aafa0 (CONDITIONAL_JUMP)  ; LAB_005aafa0
    MOV EDI,dword ptr [0x00681b18]      ; 005aaf5b | g_AudioChannelCount
    XOR EBX,EBX                         ; 005aaf61
    TEST EDI,EDI                        ; 005aaf63
    JLE 0x005aafa0                      ; 005aaf65
        ;   XREF to: 005aafa0 (CONDITIONAL_JUMP)  ; LAB_005aafa0
    XOR ESI,ESI                         ; 005aaf67
    MOV EAX,[0x03f69280]                ; 005aaf69 | g_MixBufferSize
        ;   Label: LAB_005aaf69
    IMUL EAX,dword ptr [0x03f69284]     ; 005aaf6e | g_NumMixBuffers
    SHL EAX,0x2                         ; 005aaf75
    PUSH EAX                            ; 005aaf78
    PUSH 0x0                            ; 005aaf79
    MOV EAX,dword ptr [ESI + 0x3f692b0] ; 005aaf7b | g_ChannelPrimaryBuffers | g_ChannelPrimaryBuffers[1]
    PUSH EAX                            ; 005aaf81
    ADD ESI,0x4                         ; 005aaf82
    INC EBX                             ; 005aaf85
    CALL crt_memory.c_memset_FUN_005fde40 ; 005aaf86
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EDX,dword ptr [0x00681b18]      ; 005aaf8b | g_AudioChannelCount
    ADD ESP,0xc                         ; 005aaf91
    CMP EBX,EDX                         ; 005aaf94
    JL 0x005aaf69                       ; 005aaf96
        ;   XREF to: 005aaf69 (CONDITIONAL_JUMP)  ; LAB_005aaf69
    LEA EAX,[EAX]                       ; 005aaf98
    MOV EDX,EDX                         ; 005aaf9e
    MOV ESI,dword ptr [0x03f68844]      ; 005aafa0 | g_Cached3DListenerPos.z+4
        ;   Label: LAB_005aafa0
    PUSH ESI                            ; 005aafa6
    MOV EDI,dword ptr [0x03f68840]      ; 005aafa7 | g_Cached3DListenerPos.z
    PUSH EDI                            ; 005aafad
    MOV EBP,dword ptr [0x03f6883c]      ; 005aafae | g_Cached3DListenerPos.y+4
    XOR ECX,ECX                         ; 005aafb4
    PUSH EBP                            ; 005aafb6
    MOV EDX,dword ptr [0x03f68838]      ; 005aafb7 | g_Cached3DListenerPos.y
    MOV dword ptr [0x03f69278],ECX      ; 005aafbd | g_MixBufferReadIndex
    PUSH EDX                            ; 005aafc3
    MOV dword ptr [0x03f6927c],ECX      ; 005aafc4 | g_MixBufferWriteIndex
    MOV ECX,dword ptr [0x03f68834]      ; 005aafca | g_Cached3DListenerPos.x+4
    PUSH ECX                            ; 005aafd0
    MOV ESI,dword ptr [0x03f68830]      ; 005aafd1 | g_Cached3DListenerPos
    MOV EAX,[0x03f69268]                ; 005aafd7 | g_CSoundDevicePtr
    PUSH ESI                            ; 005aafdc
    MOV EBX,dword ptr [EAX]             ; 005aafdd
    PUSH EAX                            ; 005aafdf
    CALL dword ptr [EBX + 0x18]         ; 005aafe0
    ADD ESP,0x1c                        ; 005aafe3
    MOV EDI,dword ptr [0x03f688a4]      ; 005aafe6 | g_Cached3DListenerOrientRight.z+4
    PUSH EDI                            ; 005aafec
    MOV EBP,dword ptr [0x03f688a0]      ; 005aafed | g_Cached3DListenerOrientRight.z
    PUSH EBP                            ; 005aaff3
    MOV EDX,dword ptr [0x03f6889c]      ; 005aaff4 | g_Cached3DListenerOrientRight.y+4
    PUSH EDX                            ; 005aaffa
    MOV ECX,dword ptr [0x03f68898]      ; 005aaffb | g_Cached3DListenerOrientRight.y
    PUSH ECX                            ; 005ab001
    MOV ESI,dword ptr [0x03f68894]      ; 005ab002 | g_Cached3DListenerOrientRight.x+4
    PUSH ESI                            ; 005ab008
    MOV EDI,dword ptr [0x03f68890]      ; 005ab009 | g_Cached3DListenerOrientRight
    PUSH EDI                            ; 005ab00f
    MOV EBP,dword ptr [0x03f6888c]      ; 005ab010 | g_Cached3DListenerOrientUp.z+4
    PUSH EBP                            ; 005ab016
    MOV EDX,dword ptr [0x03f68888]      ; 005ab017 | g_Cached3DListenerOrientUp.z
    PUSH EDX                            ; 005ab01d
    MOV ECX,dword ptr [0x03f68884]      ; 005ab01e | g_Cached3DListenerOrientUp.y+4
    PUSH ECX                            ; 005ab024
    MOV ESI,dword ptr [0x03f68880]      ; 005ab025 | g_Cached3DListenerOrientUp.y
    PUSH ESI                            ; 005ab02b
    MOV EDI,dword ptr [0x03f6887c]      ; 005ab02c | g_Cached3DListenerOrientUp.x+4
    PUSH EDI                            ; 005ab032
    MOV EBP,dword ptr [0x03f68878]      ; 005ab033 | g_Cached3DListenerOrientUp
    PUSH EBP                            ; 005ab039
    MOV EDX,dword ptr [0x03f68874]      ; 005ab03a | g_Cached3DListenerOrientFront.z+4
    PUSH EDX                            ; 005ab040
    MOV ECX,dword ptr [0x03f68870]      ; 005ab041 | g_Cached3DListenerOrientFront.z
    PUSH ECX                            ; 005ab047
    MOV ESI,dword ptr [0x03f6886c]      ; 005ab048 | g_Cached3DListenerOrientFront.y+4
    PUSH ESI                            ; 005ab04e
    MOV EDI,dword ptr [0x03f68868]      ; 005ab04f | g_Cached3DListenerOrientFront.y
    PUSH EDI                            ; 005ab055
    MOV EBP,dword ptr [0x03f68864]      ; 005ab056 | g_Cached3DListenerOrientFront.x+4
    PUSH EBP                            ; 005ab05c
    MOV EDX,dword ptr [0x03f68860]      ; 005ab05d | g_Cached3DListenerOrientFront
    MOV EAX,[0x03f69268]                ; 005ab063 | g_CSoundDevicePtr
    PUSH EDX                            ; 005ab068
    MOV EBX,dword ptr [EAX]             ; 005ab069
    PUSH EAX                            ; 005ab06b
    CALL dword ptr [EBX + 0x1c]         ; 005ab06c
    ADD ESP,0x4c                        ; 005ab06f
    MOV ECX,dword ptr [0x03f6885c]      ; 005ab072 | g_Cached3DListenerVelocity.z+4
    PUSH ECX                            ; 005ab078
    MOV ESI,dword ptr [0x03f68858]      ; 005ab079 | g_Cached3DListenerVelocity.z
    PUSH ESI                            ; 005ab07f
    MOV EDI,dword ptr [0x03f68854]      ; 005ab080 | g_Cached3DListenerVelocity.y+4
    PUSH EDI                            ; 005ab086
    MOV EBP,dword ptr [0x03f68850]      ; 005ab087 | g_Cached3DListenerVelocity.y
    PUSH EBP                            ; 005ab08d
    MOV EDX,dword ptr [0x03f6884c]      ; 005ab08e | g_Cached3DListenerVelocity.x+4
    PUSH EDX                            ; 005ab094
    MOV ECX,dword ptr [0x03f68848]      ; 005ab095 | g_Cached3DListenerVelocity
    MOV EAX,[0x03f69268]                ; 005ab09b | g_CSoundDevicePtr
    PUSH ECX                            ; 005ab0a0
    MOV EBX,dword ptr [EAX]             ; 005ab0a1
    PUSH EAX                            ; 005ab0a3
    CALL dword ptr [EBX + 0x20]         ; 005ab0a4
    ADD ESP,0x1c                        ; 005ab0a7
    MOV ESI,dword ptr [0x00681b34]      ; 005ab0aa | g_Cached3DDistanceFactor+4
    PUSH ESI                            ; 005ab0b0
    MOV EDI,dword ptr [0x00681b30]      ; 005ab0b1 | g_Cached3DDistanceFactor
    MOV EAX,[0x03f69268]                ; 005ab0b7 | g_CSoundDevicePtr
    PUSH EDI                            ; 005ab0bc
    MOV EBX,dword ptr [EAX]             ; 005ab0bd
    PUSH EAX                            ; 005ab0bf
    CALL dword ptr [EBX + 0x24]         ; 005ab0c0
    ADD ESP,0xc                         ; 005ab0c3
    PUSH dword ptr [0x03f693f0]         ; 005ab0c6 | g_DeferredOrientRight.z
    MOV EAX,[0x03f69268]                ; 005ab0cc | g_CSoundDevicePtr
    PUSH dword ptr [0x03f693ec]         ; 005ab0d1 | g_DeferredOrientRight.y
    MOV EBX,dword ptr [EAX]             ; 005ab0d7
    PUSH dword ptr [0x03f693e8]         ; 005ab0d9 | g_DeferredOrientRight
    PUSH EAX                            ; 005ab0df
    CALL dword ptr [EBX + 0x28]         ; 005ab0e0
    ADD ESP,0x10                        ; 005ab0e3
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 005ab0e6
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV [0x03f69410],EAX                ; 005ab0eb | g_SoundStartTime
    MOV EAX,[0x03f69268]                ; 005ab0f0 | g_CSoundDevicePtr
    PUSH EAX                            ; 005ab0f5
    MOV EBX,dword ptr [EAX]             ; 005ab0f6
    CALL dword ptr [EBX + 0x4]          ; 005ab0f8
    ADD ESP,0x4                         ; 005ab0fb
    TEST EAX,EAX                        ; 005ab0fe
    JZ 0x005ab119                       ; 005ab100
        ;   XREF to: 005ab119 (CONDITIONAL_JUMP)  ; LAB_005ab119
    MOV EBP,0x1                         ; 005ab102
    MOV dword ptr [0x03f6926c],EBP      ; 005ab107 | g_SoundBusyFlag
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005ab10d
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    MOV EAX,EBP                         ; 005ab112
    POP EBP                             ; 005ab114
    POP EDI                             ; 005ab115
    POP ESI                             ; 005ab116
    POP EBX                             ; 005ab117
    RET                                 ; 005ab118
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005ab119
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005ab119
    XOR EAX,EAX                         ; 005ab11e
    POP EBP                             ; 005ab120
    POP EDI                             ; 005ab121
    POP ESI                             ; 005ab122
    POP EBX                             ; 005ab123
    RET                                 ; 005ab124

