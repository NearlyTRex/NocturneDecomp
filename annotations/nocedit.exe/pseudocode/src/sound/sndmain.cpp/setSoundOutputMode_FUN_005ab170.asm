; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample,int channels,int sample_rate)
;
; Parameters:
; int              Stack[0x4]:4   bits_per_sample
; int              Stack[0x8]:4   channels
; int              Stack[0xc]:4   sample_rate
;
; XREF[7]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512cca
;   core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00 at 005b2d4f
;   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 at 005aaf42
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac0fd
;   sound_sndmain.cpp_setAudioBitDepth_FUN_005ab280 at 005ab291
;   sound_sndmain.cpp_setAudioChannelCount_FUN_005ab2a0 at 005ab2b1
;   sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0 at 005ab2d1
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650c17
;   TerminatedCString s_setSoundOutputMode_can_t_00650c2c
;   int g_AudioBitsPerSample = 0x10
;   int g_AudioChannelCount = 0x2
;   int g_AudioSampleRate = 0x5622
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CSoundDevice* g_CSoundDevicePtr
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_allocMixBuffers_FUN_005a5730
;   sound_sndmain.cpp_isSoundBusy_FUN_005ab540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab170
        ;   Label: sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
    PUSH EDI                            ; 005ab171
    PUSH EBP                            ; 005ab172
    SUB ESP,0x4                         ; 005ab173
    CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540 ; 005ab176
        ;   XREF to: 005ab540 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_005ab540()
    TEST EAX,EAX                        ; 005ab17b
    JNZ 0x005ab1b0                      ; 005ab17d
        ;   XREF to: 005ab1b0 (CONDITIONAL_JUMP)  ; LAB_005ab1b0
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ab17f
        ;   Label: LAB_005ab17f
    MOV [0x00681b14],EAX                ; 005ab183 | g_AudioBitsPerSample
    MOV EAX,dword ptr [ESP + 0x18]      ; 005ab188
    MOV [0x00681b18],EAX                ; 005ab18c | g_AudioChannelCount
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005ab191
    MOV EBX,dword ptr [0x03f69268]      ; 005ab195 | g_CSoundDevicePtr
    MOV [0x00681b1c],EAX                ; 005ab19b | g_AudioSampleRate
    TEST EBX,EBX                        ; 005ab1a0
    JNZ 0x005ab1d5                      ; 005ab1a2
        ;   XREF to: 005ab1d5 (CONDITIONAL_JUMP)  ; LAB_005ab1d5
    MOV EAX,0x1                         ; 005ab1a4
        ;   Label: LAB_005ab1a4
    ADD ESP,0x4                         ; 005ab1a9
        ;   Label: LAB_005ab1a9
    POP EBP                             ; 005ab1ac
    POP EDI                             ; 005ab1ad
    POP EBX                             ; 005ab1ae
    RET                                 ; 005ab1af
    MOV EDX,0x650c17                    ; 005ab1b0 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005ab1b0
    MOV ECX,0x128c                      ; 005ab1b5
    PUSH 0x650c2c                       ; 005ab1ba | = "setSoundOutputMode - can't do this wh..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005ab1bf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005ab1c5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ab1cb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ab1d0
    JMP 0x005ab17f                      ; 005ab1d3
        ;   XREF to: 005ab17f (UNCONDITIONAL_JUMP)  ; LAB_005ab17f
    MOV ECX,ESP                         ; 005ab1d5
        ;   Label: LAB_005ab1d5
    PUSH ECX                            ; 005ab1d7
    PUSH EAX                            ; 005ab1d8
    MOV EDI,dword ptr [ESP + 0x20]      ; 005ab1d9
    PUSH EDI                            ; 005ab1dd
    MOV EBP,dword ptr [ESP + 0x20]      ; 005ab1de
    PUSH EBP                            ; 005ab1e2
    MOV EDX,dword ptr [EBX]             ; 005ab1e3
    PUSH EBX                            ; 005ab1e5
    CALL dword ptr [EDX + 0xc]          ; 005ab1e6
    ADD ESP,0x14                        ; 005ab1e9
    TEST EAX,EAX                        ; 005ab1ec
    JZ 0x005ab1a9                       ; 005ab1ee
        ;   XREF to: 005ab1a9 (CONDITIONAL_JUMP)  ; LAB_005ab1a9
    MOV EAX,dword ptr [ESP]             ; 005ab1f0
    TEST EAX,EAX                        ; 005ab1f3
    JLE 0x005ab1a4                      ; 005ab1f5
        ;   XREF to: 005ab1a4 (CONDITIONAL_JUMP)  ; LAB_005ab1a4
    PUSH 0x4                            ; 005ab1f7
    PUSH EAX                            ; 005ab1f9
    CALL sound_sndmain.cpp_allocMixBuffers_FUN_005a5730 ; 005ab1fa
        ;   XREF to: 005a5730 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_allocMixBuffers_FUN_005a5730(int requested_size, int num_buffers)
    ADD ESP,0x8                         ; 005ab1ff
    MOV EAX,0x1                         ; 005ab202
    ADD ESP,0x4                         ; 005ab207
    POP EBP                             ; 005ab20a
    POP EDI                             ; 005ab20b
    POP EBX                             ; 005ab20c
    RET                                 ; 005ab20d

