; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_005b0a30(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bits_per_sample
; int              Stack[0xc]:4   channels
; int              Stack[0x10]:4   sample_rate
; int *            Stack[0x14]:4   out_buffer_size
;
; Referenced Globals:
;   WAVE_OUT_OPEN_FUNC* g_waveOutOpenFunc = 00211944
;   GLOBAL_ALLOC_FUNC* g_GlobalAllocFunc = 00211fd8
;   GLOBAL_LOCK_FUNC* g_GlobalLockFunc = 00211ff4
;   TerminatedCString s_waveOutOpen_failed_006523a4
;   UINT g_WaveOutDeviceID = 0xffffffff
;   HWAVEOUT g_WaveOutHandle
;   HGLOBAL[8] g_WaveOutHeaderHandles
;   LPWAVEHDR[8] g_WaveOutHeaders
;   HGLOBAL[8] g_WaveOutBufferHandles
;   LPVOID[8] g_WaveOutBuffers
;   int g_WaveOutBitsPerSample
;   int g_WaveOutChannels
;   int g_WaveOutSampleRate
;   int g_WaveOutBufferSize
;   int g_WaveOutNumBuffers
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   GlobalAlloc
;   GlobalLock
;   sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   waveOutOpen
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0a30
        ;   Label: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_005b0a30
    PUSH ESI                            ; 005b0a31
    PUSH EDI                            ; 005b0a32
    PUSH EBP                            ; 005b0a33
    SUB ESP,0x14                        ; 005b0a34
    MOV EDI,dword ptr [ESP + 0x28]      ; 005b0a37
    PUSH EDI                            ; 005b0a3b
    MOV EAX,dword ptr [EDI]             ; 005b0a3c
    CALL dword ptr [EAX]                ; 005b0a3e
    ADD ESP,0x4                         ; 005b0a40
    TEST EAX,EAX                        ; 005b0a43
    JNZ 0x005b0a4f                      ; 005b0a45
        ;   XREF to: 005b0a4f (CONDITIONAL_JUMP)  ; LAB_005b0a4f
    ADD ESP,0x14                        ; 005b0a47
    POP EBP                             ; 005b0a4a
    POP EDI                             ; 005b0a4b
    POP ESI                             ; 005b0a4c
    POP EBX                             ; 005b0a4d
    RET                                 ; 005b0a4e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005b0a4f
        ;   Label: LAB_005b0a4f
    MOV [0x03f6adb8],EAX                ; 005b0a53 | g_WaveOutBitsPerSample
    MOV EAX,dword ptr [ESP + 0x30]      ; 005b0a58
    MOV EDX,0x4                         ; 005b0a5c
    MOV [0x03f6adbc],EAX                ; 005b0a61 | g_WaveOutChannels
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b0a66
    MOV dword ptr [0x03f6adc8],EDX      ; 005b0a6a | g_WaveOutNumBuffers
    MOV [0x03f6adc0],EAX                ; 005b0a70 | g_WaveOutSampleRate
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0 ; 005b0a75
        ;   XREF to: 005abea0 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0()
    MOV dword ptr [ESP + 0x10],EAX      ; 005b0a7a
    FLD float ptr [ESP + 0x10]          ; 005b0a7e
    FILD dword ptr [0x03f6adc0]         ; 005b0a82 | g_WaveOutSampleRate
    FMULP                               ; 005b0a88
    FILD dword ptr [0x03f6adc8]         ; 005b0a8a | g_WaveOutNumBuffers
    FDIVP                               ; 005b0a90
    CALL crt_math.c_round_FUN_005fe6b0  ; 005b0a92
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [0x03f6adc4]        ; 005b0a97 | g_WaveOutBufferSize
    MOV EAX,[0x03f6adc4]                ; 005b0a9d | g_WaveOutBufferSize
    ADD EAX,0xf                         ; 005b0aa2
    XOR ESI,ESI                         ; 005b0aa5
    AND AL,0xf0                         ; 005b0aa7
    MOV ECX,dword ptr [0x03f6adc8]      ; 005b0aa9 | g_WaveOutNumBuffers
    MOV [0x03f6adc4],EAX                ; 005b0aaf | g_WaveOutBufferSize
    TEST ECX,ECX                        ; 005b0ab4
    JLE 0x005b0b50                      ; 005b0ab6
        ;   XREF to: 005b0b50 (CONDITIONAL_JUMP)  ; LAB_005b0b50
    XOR EBX,EBX                         ; 005b0abc
    MOV EAX,[0x03f6adb8]                ; 005b0abe | g_WaveOutBitsPerSample
        ;   Label: LAB_005b0abe
    MOV EDX,EAX                         ; 005b0ac3
    SAR EDX,0x1f                        ; 005b0ac5
    SHL EDX,0x3                         ; 005b0ac8
    SBB EAX,EDX                         ; 005b0acb
    SAR EAX,0x3                         ; 005b0acd
    IMUL EAX,dword ptr [0x03f6adc4]     ; 005b0ad0 | g_WaveOutBufferSize
    IMUL EAX,dword ptr [0x03f6adbc]     ; 005b0ad7 | g_WaveOutChannels
    PUSH EAX                            ; 005b0ade
    PUSH 0x2002                         ; 005b0adf
    CALL dword ptr CS:[0x6115cc]        ; 005b0ae4 | g_GlobalAllocFunc
    MOV dword ptr [EBX + 0x3f6ad78],EAX ; 005b0aeb | g_WaveOutBufferHandles
    TEST EAX,EAX                        ; 005b0af1
    JZ 0x005b0bdc                       ; 005b0af3
        ;   XREF to: 005b0bdc (CONDITIONAL_JUMP)  ; LAB_005b0bdc
    PUSH EAX                            ; 005b0af9
    CALL dword ptr CS:[0x6115d4]        ; 005b0afa | g_GlobalLockFunc
    MOV dword ptr [EBX + 0x3f6ad98],EAX ; 005b0b01 | g_WaveOutBuffers
    TEST EAX,EAX                        ; 005b0b07
    JZ 0x005b0bdc                       ; 005b0b09
        ;   XREF to: 005b0bdc (CONDITIONAL_JUMP)  ; LAB_005b0bdc
    PUSH 0x20                           ; 005b0b0f
    PUSH 0x2002                         ; 005b0b11
    CALL dword ptr CS:[0x6115cc]        ; 005b0b16 | g_GlobalAllocFunc
    MOV dword ptr [EBX + 0x3f6ad38],EAX ; 005b0b1d | g_WaveOutHeaderHandles
    TEST EAX,EAX                        ; 005b0b23
    JZ 0x005b0bdc                       ; 005b0b25
        ;   XREF to: 005b0bdc (CONDITIONAL_JUMP)  ; LAB_005b0bdc
    MOV EBP,dword ptr [EBX + 0x3f6ad38] ; 005b0b2b | g_WaveOutHeaderHandles
    PUSH EBP                            ; 005b0b31
    INC ESI                             ; 005b0b32
    CALL dword ptr CS:[0x6115d4]        ; 005b0b33 | g_GlobalLockFunc
    MOV dword ptr [EBX + 0x3f6ad58],EAX ; 005b0b3a | g_WaveOutHeaders
    MOV EAX,[0x03f6adc8]                ; 005b0b40 | g_WaveOutNumBuffers
    ADD EBX,0x4                         ; 005b0b45
    CMP ESI,EAX                         ; 005b0b48
    JL 0x005b0abe                       ; 005b0b4a
        ;   XREF to: 005b0abe (CONDITIONAL_JUMP)  ; LAB_005b0abe
    MOV EDX,0x1                         ; 005b0b50
        ;   Label: LAB_005b0b50
    MOV AX,[0x03f6adb8]                 ; 005b0b55 | g_WaveOutBitsPerSample
    MOV word ptr [ESP],DX               ; 005b0b5b
    MOV word ptr [ESP + 0xe],AX         ; 005b0b5f
    XOR EDX,EDX                         ; 005b0b64
    MOV AX,[0x03f6adbc]                 ; 005b0b66 | g_WaveOutChannels
    MOV DX,word ptr [ESP + 0xe]         ; 005b0b6c
    MOV word ptr [ESP + 0x2],AX         ; 005b0b71
    MOV EAX,EDX                         ; 005b0b76
    SAR EDX,0x1f                        ; 005b0b78
    SHL EDX,0x3                         ; 005b0b7b
    SBB EAX,EDX                         ; 005b0b7e
    SAR EAX,0x3                         ; 005b0b80
    XOR EDX,EDX                         ; 005b0b83
    MOV DX,word ptr [ESP + 0x2]         ; 005b0b85
    IMUL EAX,EDX                        ; 005b0b8a
    MOV word ptr [ESP + 0xc],AX         ; 005b0b8d
    MOV EAX,[0x03f6adc0]                ; 005b0b92 | g_WaveOutSampleRate
    MOV dword ptr [ESP + 0x4],EAX       ; 005b0b97
    XOR EAX,EAX                         ; 005b0b9b
    MOV EDX,dword ptr [ESP + 0x4]       ; 005b0b9d
    MOV AX,word ptr [ESP + 0xc]         ; 005b0ba1
    IMUL EDX,EAX                        ; 005b0ba6
    PUSH 0x0                            ; 005b0ba9
    PUSH 0x0                            ; 005b0bab
    PUSH 0x0                            ; 005b0bad
    LEA EAX,[ESP + 0xc]                 ; 005b0baf
    PUSH EAX                            ; 005b0bb3
    MOV dword ptr [ESP + 0x18],EDX      ; 005b0bb4
    MOV EDX,dword ptr [0x00681e04]      ; 005b0bb8 | g_WaveOutDeviceID
    PUSH EDX                            ; 005b0bbe
    PUSH 0x3f6ad34                      ; 005b0bbf | g_WaveOutHandle
    CALL dword ptr CS:[0x611448]        ; 005b0bc4 | g_waveOutOpenFunc
    TEST EAX,EAX                        ; 005b0bcb
    JZ 0x005b0bee                       ; 005b0bcd
        ;   XREF to: 005b0bee (CONDITIONAL_JUMP)  ; LAB_005b0bee
    PUSH 0x6523a4                       ; 005b0bcf | = "waveOutOpen failed"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0bd4
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005b0bd9
    PUSH EDI                            ; 005b0bdc
        ;   Label: LAB_005b0bdc
    MOV EAX,dword ptr [EDI]             ; 005b0bdd
    CALL dword ptr [EAX]                ; 005b0bdf
        ;   Label: prt_5b0bdf_d91e5264
    ADD ESP,0x4                         ; 005b0be1
    XOR EAX,EAX                         ; 005b0be4
    ADD ESP,0x14                        ; 005b0be6
    POP EBP                             ; 005b0be9
    POP EDI                             ; 005b0bea
    POP ESI                             ; 005b0beb
    POP EBX                             ; 005b0bec
    RET                                 ; 005b0bed
    MOV EDX,dword ptr [ESP + 0x38]      ; 005b0bee
        ;   Label: LAB_005b0bee
    MOV EAX,[0x03f6adc4]                ; 005b0bf2 | g_WaveOutBufferSize
    MOV dword ptr [EDX],EAX             ; 005b0bf7
    MOV EAX,0x1                         ; 005b0bf9
    ADD ESP,0x14                        ; 005b0bfe
    POP EBP                             ; 005b0c01
    POP EDI                             ; 005b0c02
    POP ESI                             ; 005b0c03
    POP EBX                             ; 005b0c04
    RET                                 ; 005b0c05

