; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_005587b0(CWavInDevice *this_ptr,short *output_buffer,int num_samples)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
; short *          Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   num_samples
;
; Referenced Globals:
;   TerminatedCString s_WavInDevice_poll_queueWa_005ea69a
;   int[20] g_WaveInBuffers
;   int g_WaveInBitsPerSample
;   int g_WaveInChannels
;   int g_WaveInSampleRate
;   int g_WaveInBufferSizeSamples
;   int g_WaveInNumBuffers
;   int g_WaveInRequestedBitsPerSample
;   int g_WaveInRequestedChannels
;   int g_WaveInRequestedSampleRate
;   int g_WaveInStereoRequested
;   int g_WaveInCurrentBufferIndex
;   int g_WaveInCurrentSampleOffset
;
; Called Functions:
;   sound_sndmain.cpp_logSoundError_FUN_005549c0
;   sound_sndmain.cpp_resampleAndConvertAudio_FUN_00551dc0
;   sound_sndwav.cpp_writeWavInBuffer_FUN_00558190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005587b0
        ;   Label: sound_sndwav.cpp_CWavInDevice_poll_FUN_005587b0
    PUSH ESI                            ; 005587b1
    PUSH EDI                            ; 005587b2
    PUSH EBP                            ; 005587b3
    SUB ESP,0xc                         ; 005587b4
    MOV EDI,dword ptr [ESP + 0x24]      ; 005587b7
    MOV ESI,dword ptr [ESP + 0x28]      ; 005587bb
    MOV EAX,[0x0264b24c]                ; 005587bf | g_WaveInBitsPerSample
    MOV EDX,EAX                         ; 005587c4
    SAR EDX,0x1f                        ; 005587c6
    SHL EDX,0x3                         ; 005587c9
    SBB EAX,EDX                         ; 005587cc
    SAR EAX,0x3                         ; 005587ce
    MOV EDX,dword ptr [0x0264b250]      ; 005587d1 | g_WaveInChannels
    IMUL EDX,EAX                        ; 005587d7
    MOV dword ptr [ESP + 0x8],EDX       ; 005587da
    MOV dword ptr [ESP],EDX             ; 005587de
    MOV EDX,dword ptr [0x0264b24c]      ; 005587e1 | g_WaveInBitsPerSample
    XOR EBP,EBP                         ; 005587e7
    CMP EDX,0x10                        ; 005587e9
    SETZ AL                             ; 005587ec
    AND EAX,0xff                        ; 005587ef
    MOV dword ptr [ESP + 0x4],EAX       ; 005587f4
    MOV EAX,[0x0264b274]                ; 005587f8 | g_WaveInCurrentBufferIndex
        ;   Label: LAB_005587f8
    CMP dword ptr [EAX*0x4 + 0x264b1fc],0x0 ; 005587fd | g_WaveInBuffers
    JZ 0x005588ff                       ; 00558805
        ;   XREF to: 005588ff (CONDITIONAL_JUMP)  ; LAB_005588ff
    MOV EBX,dword ptr [0x0264b278]      ; 0055880b | g_WaveInCurrentSampleOffset
    MOV EDX,dword ptr [0x0264b25c]      ; 00558811 | g_WaveInBufferSizeSamples
    MOV EAX,[0x0264b26c]                ; 00558817 | g_WaveInRequestedSampleRate
    SUB EDX,EBX                         ; 0055881c
    IMUL EDX,EAX                        ; 0055881e
    MOV ECX,dword ptr [0x0264b254]      ; 00558821 | g_WaveInSampleRate
    MOV EAX,EDX                         ; 00558827
    SAR EDX,0x1f                        ; 00558829
    IDIV ECX                            ; 0055882c
    MOV EBX,EAX                         ; 0055882e
    CMP EAX,ESI                         ; 00558830
    JLE 0x00558836                      ; 00558832
        ;   XREF to: 00558836 (CONDITIONAL_JUMP)  ; LAB_00558836
    MOV EBX,ESI                         ; 00558834
    TEST EBX,EBX                        ; 00558836
        ;   Label: LAB_00558836
    JLE 0x005588c7                      ; 00558838
        ;   XREF to: 005588c7 (CONDITIONAL_JUMP)  ; LAB_005588c7
    PUSH EBX                            ; 0055883e
    PUSH EDI                            ; 0055883f
    MOV EAX,[0x0264b270]                ; 00558840 | g_WaveInStereoRequested
    PUSH EAX                            ; 00558845
    MOV EDX,dword ptr [0x0264b26c]      ; 00558846 | g_WaveInRequestedSampleRate
    PUSH EDX                            ; 0055884c
    MOV ECX,dword ptr [0x0264b268]      ; 0055884d | g_WaveInRequestedChannels
    PUSH ECX                            ; 00558853
    MOV EAX,[0x0264b264]                ; 00558854 | g_WaveInRequestedBitsPerSample
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00558859
    PUSH EAX                            ; 0055885d
    MOV EAX,[0x0264b278]                ; 0055885e | g_WaveInCurrentSampleOffset
    IMUL EAX,ECX                        ; 00558863
    MOV EDX,dword ptr [0x0264b274]      ; 00558866 | g_WaveInCurrentBufferIndex
    MOV EDX,dword ptr [EDX*0x4 + 0x264b1fc] ; 0055886c
    ADD EAX,EDX                         ; 00558873
    PUSH EAX                            ; 00558875
    MOV EAX,dword ptr [ESP + 0x20]      ; 00558876
    PUSH EAX                            ; 0055887a
    MOV EDX,dword ptr [0x0264b254]      ; 0055887b | g_WaveInSampleRate
    PUSH EDX                            ; 00558881
    MOV ECX,dword ptr [0x0264b250]      ; 00558882 | g_WaveInChannels
    PUSH ECX                            ; 00558888
    MOV EAX,[0x0264b24c]                ; 00558889 | g_WaveInBitsPerSample
    PUSH EAX                            ; 0055888e
    CALL sound_sndmain.cpp_resampleAndConvertAudio_FUN_00551dc0 ; 0055888f
        ;   XREF to: 00551dc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_resampleAndConvertAudio_FUN_00551dc0(int src_bit_depth, int src_channels, int src_sample_rate, int src_signed, ...)
    MOV EDX,dword ptr [0x0264b254]      ; 00558894 | g_WaveInSampleRate
    IMUL EDX,EBX                        ; 0055889a
    ADD ESP,0x2c                        ; 0055889d
    MOV EAX,dword ptr [ESP]             ; 005588a0
    IMUL EAX,EBX                        ; 005588a3
    MOV ECX,dword ptr [0x0264b26c]      ; 005588a6 | g_WaveInRequestedSampleRate
    ADD EDI,EAX                         ; 005588ac
    MOV EAX,EDX                         ; 005588ae
    SAR EDX,0x1f                        ; 005588b0
    IDIV ECX                            ; 005588b3
    MOV EDX,dword ptr [0x0264b278]      ; 005588b5 | g_WaveInCurrentSampleOffset
    SUB ESI,EBX                         ; 005588bb
    ADD EDX,EAX                         ; 005588bd
    ADD EBP,EBX                         ; 005588bf
    MOV dword ptr [0x0264b278],EDX      ; 005588c1 | g_WaveInCurrentSampleOffset
    TEST ESI,ESI                        ; 005588c7
        ;   Label: LAB_005588c7
    JLE 0x005588f5                      ; 005588c9
        ;   XREF to: 005588f5 (CONDITIONAL_JUMP)  ; LAB_005588f5
    MOV EBX,dword ptr [0x0264b274]      ; 005588cb | g_WaveInCurrentBufferIndex
    MOV ECX,dword ptr [0x0264b260]      ; 005588d1 | g_WaveInNumBuffers
    INC EBX                             ; 005588d7
    CMP EBX,ECX                         ; 005588d8
    JL 0x005588de                       ; 005588da
        ;   XREF to: 005588de (CONDITIONAL_JUMP)  ; LAB_005588de
    XOR EBX,EBX                         ; 005588dc
    LEA EAX,[EBX*0x4 + 0x0]             ; 005588de
        ;   Label: LAB_005588de
    MOV EDX,dword ptr [EAX + 0x264b15c] ; 005588e5
    TEST EDX,EDX                        ; 005588eb
    JZ 0x005588ff                       ; 005588ed
        ;   XREF to: 005588ff (CONDITIONAL_JUMP)  ; LAB_005588ff
    TEST byte ptr [EDX + 0x10],0x1      ; 005588ef
    JNZ 0x00558906                      ; 005588f3
        ;   XREF to: 00558906 (CONDITIONAL_JUMP)  ; LAB_00558906
    MOV EAX,EBP                         ; 005588f5
        ;   Label: LAB_005588f5
    ADD ESP,0xc                         ; 005588f7
        ;   Label: LAB_005588f7
    POP EBP                             ; 005588fa
    POP EDI                             ; 005588fb
    POP ESI                             ; 005588fc
    POP EBX                             ; 005588fd
    RET                                 ; 005588fe
    MOV EAX,0xffffffff                  ; 005588ff
        ;   Label: LAB_005588ff
    JMP 0x005588f7                      ; 00558904
        ;   XREF to: 005588f7 (UNCONDITIONAL_JUMP)  ; LAB_005588f7
    PUSH EBX                            ; 00558906
        ;   Label: LAB_00558906
    CALL sound_sndwav.cpp_writeWavInBuffer_FUN_00558190 ; 00558907
        ;   XREF to: 00558190 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavInBuffer_FUN_00558190(int buffer_index)
    ADD ESP,0x4                         ; 0055890c
    TEST EAX,EAX                        ; 0055890f
    JZ 0x00558926                       ; 00558911
        ;   XREF to: 00558926 (CONDITIONAL_JUMP)  ; LAB_00558926
    XOR ECX,ECX                         ; 00558913
    MOV dword ptr [0x0264b274],EBX      ; 00558915 | g_WaveInCurrentBufferIndex
    MOV dword ptr [0x0264b278],ECX      ; 0055891b | g_WaveInCurrentSampleOffset
    JMP 0x005587f8                      ; 00558921
        ;   XREF to: 005587f8 (UNCONDITIONAL_JUMP)  ; LAB_005587f8
    PUSH 0x5ea69a                       ; 00558926 | = "WavInDevice::poll - queueWavInBuffer ..."
        ;   Label: LAB_00558926
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 0055892b
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    MOV EAX,0xffffffff                  ; 00558930
    ADD ESP,0x4                         ; 00558935
    ADD ESP,0xc                         ; 00558938
    POP EBP                             ; 0055893b
    POP EDI                             ; 0055893c
    POP ESI                             ; 0055893d
    POP EBX                             ; 0055893e
    RET                                 ; 0055893f

