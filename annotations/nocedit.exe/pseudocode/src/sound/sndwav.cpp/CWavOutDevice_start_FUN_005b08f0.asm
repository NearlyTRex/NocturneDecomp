; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndwav.cpp_CWavOutDevice_start_FUN_005b08f0(CWavOutDevice * this_ptr)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
;
; Referenced Globals:
;   double DOUBLE_00652387 = 0.333333333333333
;   LPWAVEHDR[8] g_WaveOutHeaders
;   undefined4 DAT_03f6ad5c
;   LPVOID[8] g_WaveOutBuffers
;   int g_WaveOutBitsPerSample
;   int g_WaveOutChannels
;   int g_WaveOutSampleRate
;   int g_WaveOutBufferSize
;   int g_WaveOutNumBuffers
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   sound_sndmain.cpp_startSoundThread_FUN_005abc00
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b08f0
        ;   Label: sound_sndwav.cpp_CWavOutDevice_start_FUN_005b08f0
    PUSH ESI                            ; 005b08f1
    PUSH EDI                            ; 005b08f2
    MOV EDX,dword ptr [0x03f6adc8]      ; 005b08f3 | int g_WaveOutNumBuffers
    XOR ESI,ESI                         ; 005b08f9
    TEST EDX,EDX                        ; 005b08fb
    JLE 0x005b0971                      ; 005b08fd | LAB_005b0971
        ;   XREF to: 005b0971 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 005b08ff
    PUSH 0x20                           ; 005b0901
        ;   Label: LAB_005b0901
    PUSH 0x0                            ; 005b0903
    MOV EDI,dword ptr [EBX + 0x3f6ad58] ; 005b0905 | LPWAVEHDR[8] g_WaveOutHeaders
    PUSH EDI                            ; 005b090b
    CALL crt_memory.c_memset_FUN_005fde40 ; 005b090c | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x3f6ad58] ; 005b0911 | LPWAVEHDR[8] g_WaveOutHeaders
    MOV EAX,dword ptr [EBX + 0x3f6ad98] ; 005b0917 | LPVOID[8] g_WaveOutBuffers
    MOV dword ptr [EDX],EAX             ; 005b091d
    MOV EAX,dword ptr [EBX + 0x3f6ad58] ; 005b091f | LPWAVEHDR[8] g_WaveOutHeaders
    MOV dword ptr [EAX + 0xc],ESI       ; 005b0925
    MOV EAX,[0x03f6adb8]                ; 005b0928 | int g_WaveOutBitsPerSample
    MOV EDX,EAX                         ; 005b092d
    SAR EDX,0x1f                        ; 005b092f
    SHL EDX,0x3                         ; 005b0932
    SBB EAX,EDX                         ; 005b0935
    SAR EAX,0x3                         ; 005b0937
    IMUL EAX,dword ptr [0x03f6adc4]     ; 005b093a | int g_WaveOutBufferSize
    MOV EDX,dword ptr [0x03f6adbc]      ; 005b0941 | int g_WaveOutChannels
    IMUL EDX,EAX                        ; 005b0947
    ADD ESP,0xc                         ; 005b094a
    MOV EAX,dword ptr [EBX + 0x3f6ad58] ; 005b094d | LPWAVEHDR[8] g_WaveOutHeaders
    PUSH ESI                            ; 005b0953
    MOV dword ptr [EAX + 0x4],EDX       ; 005b0954
    CALL sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0 ; 005b0957 | int sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0(int buffer_index)
        ;   XREF to: 005b06c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b095c
    TEST EAX,EAX                        ; 005b095f
    JZ 0x005b09a0                       ; 005b0961 | LAB_005b09a0
        ;   XREF to: 005b09a0 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x03f6adc8]      ; 005b0963 | int g_WaveOutNumBuffers
    INC ESI                             ; 005b0969
    ADD EBX,0x4                         ; 005b096a
    CMP ESI,ECX                         ; 005b096d
    JL 0x005b0901                       ; 005b096f | LAB_005b0901
        ;   XREF to: 005b0901 (CONDITIONAL_JUMP)
    FILD dword ptr [0x03f6adc4]         ; 005b0971 | int g_WaveOutBufferSize
        ;   Label: LAB_005b0971
    FILD dword ptr [0x03f6adc0]         ; 005b0977 | int g_WaveOutSampleRate
    FDIVP                               ; 005b097d
    FMUL double ptr [0x00652387]        ; 005b097f | double DOUBLE_00652387
    SUB ESP,0x8                         ; 005b0985
    FSTP double ptr [ESP]               ; 005b0988
    CALL sound_sndmain.cpp_startSoundThread_FUN_005abc00 ; 005b098b | HANDLE sound_sndmain.cpp_startSoundThread_FUN_005abc00(double latency_seconds)
        ;   XREF to: 005abc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b0990
    TEST EAX,EAX                        ; 005b0993
    JZ 0x005b09a0                       ; 005b0995 | LAB_005b09a0
        ;   XREF to: 005b09a0 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005b0997
    POP EDI                             ; 005b099c
    POP ESI                             ; 005b099d
    POP EBX                             ; 005b099e
    RET                                 ; 005b099f
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b09a0
        ;   Label: LAB_005b09a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b09a4
    PUSH EDX                            ; 005b09a8
    MOV EAX,dword ptr [EAX]             ; 005b09a9
    CALL dword ptr [EAX + 0x8]          ; 005b09ab
    ADD ESP,0x4                         ; 005b09ae
    XOR EAX,EAX                         ; 005b09b1
    POP EDI                             ; 005b09b3
    POP ESI                             ; 005b09b4
    POP EBX                             ; 005b09b5
    RET                                 ; 005b09b6

