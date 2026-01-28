; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_005b0e20(CWavInDevice *this_ptr)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   waveInStart* g_waveInStartFunc = 002118f8
;   TerminatedCString s_waveInStart_failed_0065244e
;   HWAVEIN g_WaveInHandle
;   LPWAVEHDR[20] g_WaveInHeaders
;   undefined4 DAT_03f6ae24
;   LPVOID[20] g_WaveInBuffers
;   int g_WaveInBitsPerSample
;   int g_WaveInChannels
;   int g_WaveInBufferSizeSamples
;   int g_WaveInNumBuffers
;   int g_WaveInCurrentBufferIndex
;   int g_WaveInCurrentSampleOffset
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   sound_sndwav.cpp_writeWavInBuffer_FUN_005b0cc0
;   waveInStart
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0e20
        ;   Label: sound_sndwav.cpp_CWavInDevice_start_FUN_005b0e20
    PUSH ESI                            ; 005b0e21
    PUSH EDI                            ; 005b0e22
    PUSH EBP                            ; 005b0e23
    MOV EDI,dword ptr [ESP + 0x14]      ; 005b0e24
    MOV EDX,dword ptr [0x03f6af24]      ; 005b0e28 | g_WaveInNumBuffers
    XOR ESI,ESI                         ; 005b0e2e
    TEST EDX,EDX                        ; 005b0e30
    JLE 0x005b0ea4                      ; 005b0e32
        ;   XREF to: 005b0ea4 (CONDITIONAL_JUMP)  ; LAB_005b0ea4
    XOR EBX,EBX                         ; 005b0e34
    PUSH 0x20                           ; 005b0e36
        ;   Label: LAB_005b0e36
    PUSH 0x0                            ; 005b0e38
    MOV EBP,dword ptr [EBX + 0x3f6ae20] ; 005b0e3a | g_WaveInHeaders | DAT_03f6ae24
    PUSH EBP                            ; 005b0e40
    CALL crt_memory.c_memset_FUN_005fde40 ; 005b0e41
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EDX,dword ptr [EBX + 0x3f6ae20] ; 005b0e46 | g_WaveInHeaders
    MOV EAX,dword ptr [EBX + 0x3f6aec0] ; 005b0e4c | g_WaveInBuffers
    MOV dword ptr [EDX],EAX             ; 005b0e52
    MOV EAX,dword ptr [EBX + 0x3f6ae20] ; 005b0e54 | g_WaveInHeaders
    MOV dword ptr [EAX + 0xc],ESI       ; 005b0e5a
    MOV EAX,[0x03f6af10]                ; 005b0e5d | g_WaveInBitsPerSample
    MOV EDX,EAX                         ; 005b0e62
    SAR EDX,0x1f                        ; 005b0e64
    SHL EDX,0x3                         ; 005b0e67
    SBB EAX,EDX                         ; 005b0e6a
    SAR EAX,0x3                         ; 005b0e6c
    IMUL EAX,dword ptr [0x03f6af20]     ; 005b0e6f | g_WaveInBufferSizeSamples
    IMUL EAX,dword ptr [0x03f6af14]     ; 005b0e76 | g_WaveInChannels
    ADD ESP,0xc                         ; 005b0e7d
    MOV EDX,dword ptr [EBX + 0x3f6ae20] ; 005b0e80 | g_WaveInHeaders
    PUSH ESI                            ; 005b0e86
    MOV dword ptr [EDX + 0x4],EAX       ; 005b0e87
    CALL sound_sndwav.cpp_writeWavInBuffer_FUN_005b0cc0 ; 005b0e8a
        ;   XREF to: 005b0cc0 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavInBuffer_FUN_005b0cc0(int buffer_index)
    ADD ESP,0x4                         ; 005b0e8f
    TEST EAX,EAX                        ; 005b0e92
    JZ 0x005b0ed5                       ; 005b0e94
        ;   XREF to: 005b0ed5 (CONDITIONAL_JUMP)  ; LAB_005b0ed5
    MOV ECX,dword ptr [0x03f6af24]      ; 005b0e96 | g_WaveInNumBuffers
    INC ESI                             ; 005b0e9c
    ADD EBX,0x4                         ; 005b0e9d
    CMP ESI,ECX                         ; 005b0ea0
    JL 0x005b0e36                       ; 005b0ea2
        ;   XREF to: 005b0e36 (CONDITIONAL_JUMP)  ; LAB_005b0e36
    MOV EAX,[0x03f6af24]                ; 005b0ea4 | g_WaveInNumBuffers
        ;   Label: LAB_005b0ea4
    DEC EAX                             ; 005b0ea9
    MOV EBX,dword ptr [0x03f6adcc]      ; 005b0eaa | g_WaveInHandle
    MOV [0x03f6af38],EAX                ; 005b0eb0 | g_WaveInCurrentBufferIndex
    MOV EAX,[0x03f6af20]                ; 005b0eb5 | g_WaveInBufferSizeSamples
    PUSH EBX                            ; 005b0eba
    MOV [0x03f6af3c],EAX                ; 005b0ebb | g_WaveInCurrentSampleOffset
    CALL dword ptr CS:[0x611438]        ; 005b0ec0 | g_waveInStartFunc
    TEST EAX,EAX                        ; 005b0ec7
    JNZ 0x005b0ee5                      ; 005b0ec9
        ;   XREF to: 005b0ee5 (CONDITIONAL_JUMP)  ; LAB_005b0ee5
    MOV EAX,0x1                         ; 005b0ecb
    POP EBP                             ; 005b0ed0
    POP EDI                             ; 005b0ed1
    POP ESI                             ; 005b0ed2
    POP EBX                             ; 005b0ed3
    RET                                 ; 005b0ed4
    PUSH EDI                            ; 005b0ed5
        ;   Label: LAB_005b0ed5
    MOV EAX,dword ptr [EDI]             ; 005b0ed6
    CALL dword ptr [EAX + 0x8]          ; 005b0ed8
    ADD ESP,0x4                         ; 005b0edb
    XOR EAX,EAX                         ; 005b0ede
    POP EBP                             ; 005b0ee0
    POP EDI                             ; 005b0ee1
    POP ESI                             ; 005b0ee2
    POP EBX                             ; 005b0ee3
    RET                                 ; 005b0ee4
    PUSH 0x65244e                       ; 005b0ee5 | = "waveInStart failed!"
        ;   Label: LAB_005b0ee5
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0eea
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005b0eef
    MOV EAX,dword ptr [EDI]             ; 005b0ef2
    PUSH EDI                            ; 005b0ef4
    CALL dword ptr [EAX + 0x8]          ; 005b0ef5
    ADD ESP,0x4                         ; 005b0ef8
    XOR EAX,EAX                         ; 005b0efb
    POP EBP                             ; 005b0efd
    POP EDI                             ; 005b0efe
    POP ESI                             ; 005b0eff
    POP EBX                             ; 005b0f00
    RET                                 ; 005b0f01

