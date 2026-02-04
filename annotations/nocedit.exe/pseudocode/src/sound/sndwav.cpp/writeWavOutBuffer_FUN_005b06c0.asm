; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_005b06c0(int buffer_index)
;
; Parameters:
; int              Stack[0x4]:4   buffer_index
;
; XREF[2]:
;   sound_sndwav.cpp_CWavOutDevice_poll_FUN_005b0c10 at 005b0c67
;   sound_sndwav.cpp_CWavOutDevice_start_FUN_005b08f0 at 005b0957
;
; Referenced Globals:
;   WAVE_OUT_PREPARE_HEADER_FUNC* g_waveOutPrepareHeaderFunc = 00211952
;   WAVE_OUT_UNPREPARE_HEADER_FUNC* g_waveOutUnprepareHeaderFunc = 0021197a
;   WAVE_OUT_WRITE_FUNC* g_waveOutWriteFunc = 00211994
;   TerminatedCString s_waveOutUnprepareHeader_f_0065231f
;   TerminatedCString s_waveOutPrepareHeader_fai_0065233e
;   TerminatedCString s_waveOutWrite_failed_0065235b
;   HWAVEOUT g_WaveOutHandle
;   LPWAVEHDR[8] g_WaveOutHeaders
;   LPVOID[8] g_WaveOutBuffers
;   int g_WaveOutBitsPerSample
;   int g_WaveOutChannels
;   int g_WaveOutSampleRate
;   int g_WaveOutBufferSize
;
; Called Functions:
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90
;   waveOutPrepareHeader
;   waveOutUnprepareHeader
;   waveOutWrite
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b06c0
        ;   Label: sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0
    PUSH ESI                            ; 005b06c1
    PUSH EDI                            ; 005b06c2
    PUSH EBP                            ; 005b06c3
    SUB ESP,0x24                        ; 005b06c4
    MOV EDI,dword ptr [ESP + 0x38]      ; 005b06c7
    SHL EDI,0x2                         ; 005b06cb
    CMP dword ptr [EDI + 0x3f6ad98],0x0 ; 005b06ce | g_WaveOutBuffers
    JZ 0x005b06e1                       ; 005b06d5
        ;   XREF to: 005b06e1 (CONDITIONAL_JUMP)  ; LAB_005b06e1
    MOV ECX,dword ptr [EDI + 0x3f6ad58] ; 005b06d7 | g_WaveOutHeaders
    TEST ECX,ECX                        ; 005b06dd
    JNZ 0x005b06eb                      ; 005b06df
        ;   XREF to: 005b06eb (CONDITIONAL_JUMP)  ; LAB_005b06eb
    XOR EAX,EAX                         ; 005b06e1
        ;   Label: LAB_005b06e1
    ADD ESP,0x24                        ; 005b06e3
    POP EBP                             ; 005b06e6
    POP EDI                             ; 005b06e7
    POP ESI                             ; 005b06e8
    POP EBX                             ; 005b06e9
    RET                                 ; 005b06ea
    PUSH 0x20                           ; 005b06eb
        ;   Label: LAB_005b06eb
    PUSH ECX                            ; 005b06ed
    MOV ESI,dword ptr [0x03f6ad34]      ; 005b06ee | g_WaveOutHandle
    PUSH ESI                            ; 005b06f4
    CALL dword ptr CS:[0x611454]        ; 005b06f5 | g_waveOutUnprepareHeaderFunc
    TEST EAX,EAX                        ; 005b06fc
    JNZ 0x005b07f4                      ; 005b06fe
        ;   XREF to: 005b07f4 (CONDITIONAL_JUMP)  ; LAB_005b07f4
    MOV EAX,[0x03f6adb8]                ; 005b0704 | g_WaveOutBitsPerSample
    MOV EDX,EAX                         ; 005b0709
    SAR EDX,0x1f                        ; 005b070b
    SHL EDX,0x3                         ; 005b070e
    SBB EAX,EDX                         ; 005b0711
    SAR EAX,0x3                         ; 005b0713
    MOV EBP,EAX                         ; 005b0716
    MOV ESI,EBP                         ; 005b0718
    IMUL EDX,EBP,0x0                    ; 005b071a
    MOV EBX,dword ptr [0x03f6adbc]      ; 005b071d | g_WaveOutChannels
    MOV dword ptr [ESP + 0x20],EDI      ; 005b0723
    SHL EBX,0x2                         ; 005b0727
    XOR EAX,EAX                         ; 005b072a
    TEST EBX,EBX                        ; 005b072c
    JLE 0x005b0750                      ; 005b072e
        ;   XREF to: 005b0750 (CONDITIONAL_JUMP)  ; LAB_005b0750
    MOV EDI,dword ptr [EDI + 0x3f6ad98] ; 005b0730 | g_WaveOutBuffers
    ADD EAX,0x4                         ; 005b0736
        ;   Label: LAB_005b0736
    LEA ECX,[EDI + EDX*0x1]             ; 005b0739
    ADD EDX,ESI                         ; 005b073c
    MOV dword ptr [ESP + EAX*0x1 + -0x4],ECX ; 005b073e
    CMP EAX,EBX                         ; 005b0742
    JL 0x005b0736                       ; 005b0744
        ;   XREF to: 005b0736 (CONDITIONAL_JUMP)  ; LAB_005b0736
    LEA EAX,[EAX]                       ; 005b0746
    LEA EDX,[EDX]                       ; 005b074c
    MOV EDI,dword ptr [0x03f6adbc]      ; 005b0750 | g_WaveOutChannels
        ;   Label: LAB_005b0750
    IMUL EBP,EDI                        ; 005b0756
    PUSH EBP                            ; 005b0759
    MOV EBP,dword ptr [0x03f6adc4]      ; 005b075a | g_WaveOutBufferSize
    PUSH EBP                            ; 005b0760
    MOV EAX,[0x03f6adc0]                ; 005b0761 | g_WaveOutSampleRate
    PUSH EAX                            ; 005b0766
    PUSH EDI                            ; 005b0767
    MOV ECX,dword ptr [0x03f6adb8]      ; 005b0768 | g_WaveOutBitsPerSample
    PUSH ECX                            ; 005b076e
    LEA EAX,[ESP + 0x14]                ; 005b076f
    PUSH EAX                            ; 005b0773
    CALL sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90 ; 005b0774
        ;   XREF to: 005aca90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90(LPVOID * channel_buffers, int bits_per_sample, int num_channels, int samples_per_sec, ...)
    MOV EAX,[0x03f6adb8]                ; 005b0779 | g_WaveOutBitsPerSample
    MOV EDX,EAX                         ; 005b077e
    SAR EDX,0x1f                        ; 005b0780
    SHL EDX,0x3                         ; 005b0783
    SBB EAX,EDX                         ; 005b0786
    SAR EAX,0x3                         ; 005b0788
    IMUL EAX,dword ptr [0x03f6adc4]     ; 005b078b | g_WaveOutBufferSize
    IMUL EAX,dword ptr [0x03f6adbc]     ; 005b0792 | g_WaveOutChannels
    ADD ESP,0x18                        ; 005b0799
    MOV EDX,dword ptr [ESP + 0x20]      ; 005b079c
    MOV EDX,dword ptr [EDX + 0x3f6ad58] ; 005b07a0 | g_WaveOutHeaders
    MOV dword ptr [EDX + 0x4],EAX       ; 005b07a6
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b07a9
    PUSH 0x20                           ; 005b07ad
    MOV EDI,dword ptr [EAX + 0x3f6ad58] ; 005b07af | g_WaveOutHeaders
    PUSH EDI                            ; 005b07b5
    MOV EBP,dword ptr [0x03f6ad34]      ; 005b07b6 | g_WaveOutHandle
    PUSH EBP                            ; 005b07bc
    CALL dword ptr CS:[0x61144c]        ; 005b07bd | g_waveOutPrepareHeaderFunc
    TEST EAX,EAX                        ; 005b07c4
    JNZ 0x005b080b                      ; 005b07c6
        ;   XREF to: 005b080b (CONDITIONAL_JUMP)  ; LAB_005b080b
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b07c8
    PUSH 0x20                           ; 005b07cc
    MOV EDX,dword ptr [EAX + 0x3f6ad58] ; 005b07ce | g_WaveOutHeaders
    PUSH EDX                            ; 005b07d4
    MOV ECX,dword ptr [0x03f6ad34]      ; 005b07d5 | g_WaveOutHandle
    PUSH ECX                            ; 005b07db
    CALL dword ptr CS:[0x611458]        ; 005b07dc | g_waveOutWriteFunc
    TEST EAX,EAX                        ; 005b07e3
    JNZ 0x005b0822                      ; 005b07e5
        ;   XREF to: 005b0822 (CONDITIONAL_JUMP)  ; LAB_005b0822
    MOV EAX,0x1                         ; 005b07e7
    ADD ESP,0x24                        ; 005b07ec
    POP EBP                             ; 005b07ef
    POP EDI                             ; 005b07f0
    POP ESI                             ; 005b07f1
    POP EBX                             ; 005b07f2
    RET                                 ; 005b07f3
    PUSH 0x65231f                       ; 005b07f4 | = "waveOutUnprepareHeader failed!"
        ;   Label: LAB_005b07f4
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b07f9
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005b07fe
    XOR EAX,EAX                         ; 005b0801
    ADD ESP,0x24                        ; 005b0803
    POP EBP                             ; 005b0806
    POP EDI                             ; 005b0807
    POP ESI                             ; 005b0808
    POP EBX                             ; 005b0809
    RET                                 ; 005b080a
    PUSH 0x65233e                       ; 005b080b | = "waveOutPrepareHeader failed!"
        ;   Label: LAB_005b080b
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0810
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005b0815
    XOR EAX,EAX                         ; 005b0818
    ADD ESP,0x24                        ; 005b081a
    POP EBP                             ; 005b081d
    POP EDI                             ; 005b081e
    POP ESI                             ; 005b081f
    POP EBX                             ; 005b0820
    RET                                 ; 005b0821
    PUSH 0x65235b                       ; 005b0822 | = "waveOutWrite failed!"
        ;   Label: LAB_005b0822
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0827
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005b082c
    XOR EAX,EAX                         ; 005b082f
    ADD ESP,0x24                        ; 005b0831
    POP EBP                             ; 005b0834
    POP EDI                             ; 005b0835
    POP ESI                             ; 005b0836
    POP EBX                             ; 005b0837
    RET                                 ; 005b0838

