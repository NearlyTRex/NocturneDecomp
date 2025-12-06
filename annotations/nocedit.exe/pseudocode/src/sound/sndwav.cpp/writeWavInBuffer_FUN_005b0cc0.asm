; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndwav.cpp_writeWavInBuffer_FUN_005b0cc0(int buffer_index)
;
; Parameters:
; int              Stack[0x4]:4   buffer_index
;
; XREF[2]:
;   sound_sndwav.cpp_CWavInDevice_poll_FUN_005b12e0 at 005b1437
;   sound_sndwav.cpp_CWavInDevice_start_FUN_005b0e20 at 005b0e8a
;
; Referenced Globals:
;   waveInAddBuffer* waveInAddBuffer = 00211892
;   waveInPrepareHeader* waveInPrepareHeader = 002118d4
;   TerminatedCString s_waveOutPrepareHeader_fai_00652408
;   TerminatedCString s_waveOutWrite_failed_00652425
;   HWAVEIN g_WaveInHandle
;   LPWAVEHDR[20] g_WaveInHeaders
;   LPVOID[20] g_WaveInBuffers
;   int g_WaveInBitsPerSample
;   int g_WaveInChannels
;   int g_WaveInBufferSizeSamples
;
; Called Functions:
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   waveInAddBuffer
;   waveInPrepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0cc0
        ;   Label: sound_sndwav.cpp_writeWavInBuffer_FUN_005b0cc0
    PUSH EDI                            ; 005b0cc1
    PUSH EBP                            ; 005b0cc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b0cc3
    SHL EBX,0x2                         ; 005b0cc7
    CMP dword ptr [EBX + 0x3f6aec0],0x0 ; 005b0cca | LPVOID[20] g_WaveInBuffers
    JZ 0x005b0cdd                       ; 005b0cd1 | LAB_005b0cdd
        ;   XREF to: 005b0cdd (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x3f6ae20] ; 005b0cd3 | LPWAVEHDR[20] g_WaveInHeaders
    TEST ECX,ECX                        ; 005b0cd9
    JNZ 0x005b0ce3                      ; 005b0cdb | LAB_005b0ce3
        ;   XREF to: 005b0ce3 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005b0cdd
        ;   Label: LAB_005b0cdd
    POP EBP                             ; 005b0cdf
    POP EDI                             ; 005b0ce0
    POP EBX                             ; 005b0ce1
    RET                                 ; 005b0ce2
    MOV EAX,[0x03f6af10]                ; 005b0ce3 | int g_WaveInBitsPerSample
        ;   Label: LAB_005b0ce3
    MOV EDX,EAX                         ; 005b0ce8
    SAR EDX,0x1f                        ; 005b0cea
    SHL EDX,0x3                         ; 005b0ced
    SBB EAX,EDX                         ; 005b0cf0
    SAR EAX,0x3                         ; 005b0cf2
    IMUL EAX,dword ptr [0x03f6af20]     ; 005b0cf5 | int g_WaveInBufferSizeSamples
    MOV EDX,dword ptr [0x03f6af14]      ; 005b0cfc | int g_WaveInChannels
    IMUL EDX,EAX                        ; 005b0d02
    MOV dword ptr [ECX + 0x4],EDX       ; 005b0d05
    PUSH 0x20                           ; 005b0d08
    MOV EDI,dword ptr [EBX + 0x3f6ae20] ; 005b0d0a | LPWAVEHDR[20] g_WaveInHeaders
    PUSH EDI                            ; 005b0d10
    MOV EBP,dword ptr [0x03f6adcc]      ; 005b0d11 | HWAVEIN g_WaveInHandle
    PUSH EBP                            ; 005b0d17
    CALL dword ptr CS:[0x611430]        ; 005b0d18 | waveInPrepareHeader * waveInPrepareHeader
    TEST EAX,EAX                        ; 005b0d1f
    JNZ 0x005b0d47                      ; 005b0d21 | LAB_005b0d47
        ;   XREF to: 005b0d47 (CONDITIONAL_JUMP)
    PUSH 0x20                           ; 005b0d23
    MOV EAX,dword ptr [EBX + 0x3f6ae20] ; 005b0d25 | LPWAVEHDR[20] g_WaveInHeaders
    PUSH EAX                            ; 005b0d2b
    MOV EDX,dword ptr [0x03f6adcc]      ; 005b0d2c | HWAVEIN g_WaveInHandle
    PUSH EDX                            ; 005b0d32
    CALL dword ptr CS:[0x611420]        ; 005b0d33 | waveInAddBuffer * waveInAddBuffer
    TEST EAX,EAX                        ; 005b0d3a
    JNZ 0x005b0d5a                      ; 005b0d3c | LAB_005b0d5a
        ;   XREF to: 005b0d5a (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005b0d3e
    POP EBP                             ; 005b0d43
    POP EDI                             ; 005b0d44
    POP EBX                             ; 005b0d45
    RET                                 ; 005b0d46
    PUSH 0x652408                       ; 005b0d47 | = "waveOutPrepareHeader failed!" | s_waveOutPrepareHeader_fai_00652408 = waveOutPrepareHeader failed!
        ;   Label: LAB_005b0d47
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0d4c | void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b0d51
    XOR EAX,EAX                         ; 005b0d54
    POP EBP                             ; 005b0d56
    POP EDI                             ; 005b0d57
    POP EBX                             ; 005b0d58
    RET                                 ; 005b0d59
    PUSH 0x652425                       ; 005b0d5a | = "waveOutWrite failed!" | s_waveOutWrite_failed_00652425 = waveOutWrite failed!
        ;   Label: LAB_005b0d5a
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0d5f | void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b0d64
    XOR EAX,EAX                         ; 005b0d67
    POP EBP                             ; 005b0d69
    POP EDI                             ; 005b0d6a
    POP EBX                             ; 005b0d6b
    RET                                 ; 005b0d6c

