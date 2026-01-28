; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_005ab210(int *bits_per_sample,int *channels,int *sample_rate)
;
; Parameters:
; int *            Stack[0x4]:4   bits_per_sample
; int *            Stack[0x8]:4   channels
; int *            Stack[0xc]:4   sample_rate
;
; XREF[2]:
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac09b
;   sound_sndmain.cpp_writeIni_FUN_005ac220 at 005ac2ba
;
; Referenced Globals:
;   int g_AudioBitsPerSample = 0x10
;   int g_AudioChannelCount = 0x2
;   int g_AudioSampleRate = 0x5622
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab210
        ;   Label: sound_sndmain.cpp_getAudioFormat_FUN_005ab210
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ab211
    MOV ECX,dword ptr [ESP + 0xc]       ; 005ab215
    MOV EDX,dword ptr [ESP + 0x10]      ; 005ab219
    TEST EBX,EBX                        ; 005ab21d
    JNZ 0x005ab232                      ; 005ab21f
        ;   XREF to: 005ab232 (CONDITIONAL_JUMP)  ; LAB_005ab232
    TEST ECX,ECX                        ; 005ab221
        ;   Label: LAB_005ab221
    JZ 0x005ab22c                       ; 005ab223
        ;   XREF to: 005ab22c (CONDITIONAL_JUMP)  ; LAB_005ab22c
    MOV EAX,[0x00681b18]                ; 005ab225 | g_AudioChannelCount
    MOV dword ptr [ECX],EAX             ; 005ab22a
    TEST EDX,EDX                        ; 005ab22c
        ;   Label: LAB_005ab22c
    JNZ 0x005ab23b                      ; 005ab22e
        ;   XREF to: 005ab23b (CONDITIONAL_JUMP)  ; LAB_005ab23b
    POP EBX                             ; 005ab230
    RET                                 ; 005ab231
    MOV EAX,[0x00681b14]                ; 005ab232 | g_AudioBitsPerSample
        ;   Label: LAB_005ab232
    MOV dword ptr [EBX],EAX             ; 005ab237
    JMP 0x005ab221                      ; 005ab239
        ;   XREF to: 005ab221 (UNCONDITIONAL_JUMP)  ; LAB_005ab221
    MOV EAX,[0x00681b1c]                ; 005ab23b | g_AudioSampleRate
        ;   Label: LAB_005ab23b
    MOV dword ptr [EDX],EAX             ; 005ab240
    POP EBX                             ; 005ab242
    RET                                 ; 005ab243

