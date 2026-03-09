; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_005b12e0(CWavInDevice *this_ptr,short *output_buffer,int num_samples)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
; short *          Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   num_samples
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_WavInDevice_poll_queueWa_006524ac
;   LPWAVEHDR[20] g_WaveInHeaders
;   LPVOID[20] g_WaveInBuffers
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
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0
;   sound_sndwav.cpp_writeWavInBuffer_FUN_005b0cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b12e0
        ;   Label: sound_sndwav.cpp_CWavInDevice_poll_FUN_005b12e0
    PUSH ESI                            ; 005b12e1
    PUSH EDI                            ; 005b12e2
    PUSH EBP                            ; 005b12e3
    SUB ESP,0xc                         ; 005b12e4
    MOV EDI,dword ptr [ESP + 0x24]      ; 005b12e7
    MOV ESI,dword ptr [ESP + 0x28]      ; 005b12eb
    MOV EAX,[0x03f6af10]                ; 005b12ef | g_WaveInBitsPerSample
    MOV EDX,EAX                         ; 005b12f4
    SAR EDX,0x1f                        ; 005b12f6
    SHL EDX,0x3                         ; 005b12f9
    SBB EAX,EDX                         ; 005b12fc
    SAR EAX,0x3                         ; 005b12fe
    MOV EDX,dword ptr [0x03f6af14]      ; 005b1301 | g_WaveInChannels
    IMUL EDX,EAX                        ; 005b1307
    MOV dword ptr [ESP + 0x8],EDX       ; 005b130a
    MOV dword ptr [ESP],EDX             ; 005b130e
    MOV EDX,dword ptr [0x03f6af10]      ; 005b1311 | g_WaveInBitsPerSample
    XOR EBP,EBP                         ; 005b1317
    CMP EDX,0x10                        ; 005b1319
    SETZ AL                             ; 005b131c
    AND EAX,0xff                        ; 005b131f
    MOV dword ptr [ESP + 0x4],EAX       ; 005b1324
    MOV EAX,[0x03f6af38]                ; 005b1328 | g_WaveInCurrentBufferIndex
        ;   Label: LAB_005b1328
    CMP dword ptr [EAX*0x4 + 0x3f6aec0],0x0 ; 005b132d | g_WaveInBuffers
    JZ 0x005b142f                       ; 005b1335
        ;   XREF to: 005b142f (CONDITIONAL_JUMP)  ; LAB_005b142f
    MOV EBX,dword ptr [0x03f6af3c]      ; 005b133b | g_WaveInCurrentSampleOffset
    MOV EDX,dword ptr [0x03f6af20]      ; 005b1341 | g_WaveInBufferSizeSamples
    MOV EAX,[0x03f6af30]                ; 005b1347 | g_WaveInRequestedSampleRate
    SUB EDX,EBX                         ; 005b134c
    IMUL EDX,EAX                        ; 005b134e
    MOV ECX,dword ptr [0x03f6af18]      ; 005b1351 | g_WaveInSampleRate
    MOV EAX,EDX                         ; 005b1357
    SAR EDX,0x1f                        ; 005b1359
    IDIV ECX                            ; 005b135c
    MOV EBX,EAX                         ; 005b135e
    CMP EAX,ESI                         ; 005b1360
    JLE 0x005b1366                      ; 005b1362
        ;   XREF to: 005b1366 (CONDITIONAL_JUMP)  ; LAB_005b1366
    MOV EBX,ESI                         ; 005b1364
    TEST EBX,EBX                        ; 005b1366
        ;   Label: LAB_005b1366
    JLE 0x005b13f7                      ; 005b1368
        ;   XREF to: 005b13f7 (CONDITIONAL_JUMP)  ; LAB_005b13f7
    PUSH EBX                            ; 005b136e
    PUSH EDI                            ; 005b136f
    MOV EAX,[0x03f6af34]                ; 005b1370 | g_WaveInStereoRequested
    PUSH EAX                            ; 005b1375
    MOV EDX,dword ptr [0x03f6af30]      ; 005b1376 | g_WaveInRequestedSampleRate
    PUSH EDX                            ; 005b137c
    MOV ECX,dword ptr [0x03f6af2c]      ; 005b137d | g_WaveInRequestedChannels
    PUSH ECX                            ; 005b1383
    MOV EAX,[0x03f6af28]                ; 005b1384 | g_WaveInRequestedBitsPerSample
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005b1389
    PUSH EAX                            ; 005b138d
    MOV EAX,[0x03f6af3c]                ; 005b138e | g_WaveInCurrentSampleOffset
    IMUL EAX,ECX                        ; 005b1393
    MOV EDX,dword ptr [0x03f6af38]      ; 005b1396 | g_WaveInCurrentBufferIndex
    MOV EDX,dword ptr [EDX*0x4 + 0x3f6aec0] ; 005b139c | g_WaveInBuffers
    ADD EAX,EDX                         ; 005b13a3
    PUSH EAX                            ; 005b13a5
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b13a6
    PUSH EAX                            ; 005b13aa
    MOV EDX,dword ptr [0x03f6af18]      ; 005b13ab | g_WaveInSampleRate
    PUSH EDX                            ; 005b13b1
    MOV ECX,dword ptr [0x03f6af14]      ; 005b13b2 | g_WaveInChannels
    PUSH ECX                            ; 005b13b8
    MOV EAX,[0x03f6af10]                ; 005b13b9 | g_WaveInBitsPerSample
    PUSH EAX                            ; 005b13be
    CALL sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0 ; 005b13bf
        ;   XREF to: 005aa7f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0(int src_bit_depth, int src_channels, int src_sample_rate, int src_signed, ...)
    MOV EDX,dword ptr [0x03f6af18]      ; 005b13c4 | g_WaveInSampleRate
    IMUL EDX,EBX                        ; 005b13ca
    ADD ESP,0x2c                        ; 005b13cd
    MOV EAX,dword ptr [ESP]             ; 005b13d0
    IMUL EAX,EBX                        ; 005b13d3
    MOV ECX,dword ptr [0x03f6af30]      ; 005b13d6 | g_WaveInRequestedSampleRate
    ADD EDI,EAX                         ; 005b13dc
    MOV EAX,EDX                         ; 005b13de
    SAR EDX,0x1f                        ; 005b13e0
    IDIV ECX                            ; 005b13e3
    MOV EDX,dword ptr [0x03f6af3c]      ; 005b13e5 | g_WaveInCurrentSampleOffset
    SUB ESI,EBX                         ; 005b13eb
    ADD EDX,EAX                         ; 005b13ed
    ADD EBP,EBX                         ; 005b13ef
    MOV dword ptr [0x03f6af3c],EDX      ; 005b13f1 | g_WaveInCurrentSampleOffset
    TEST ESI,ESI                        ; 005b13f7
        ;   Label: LAB_005b13f7
    JLE 0x005b1425                      ; 005b13f9
        ;   XREF to: 005b1425 (CONDITIONAL_JUMP)  ; LAB_005b1425
    MOV EBX,dword ptr [0x03f6af38]      ; 005b13fb | g_WaveInCurrentBufferIndex
    MOV ECX,dword ptr [0x03f6af24]      ; 005b1401 | g_WaveInNumBuffers
    INC EBX                             ; 005b1407
    CMP EBX,ECX                         ; 005b1408
    JL 0x005b140e                       ; 005b140a
        ;   XREF to: 005b140e (CONDITIONAL_JUMP)  ; LAB_005b140e
    XOR EBX,EBX                         ; 005b140c
    LEA EAX,[EBX*0x4 + 0x0]             ; 005b140e
        ;   Label: LAB_005b140e
    MOV EDX,dword ptr [EAX + 0x3f6ae20] ; 005b1415 | g_WaveInHeaders
    TEST EDX,EDX                        ; 005b141b
    JZ 0x005b142f                       ; 005b141d
        ;   XREF to: 005b142f (CONDITIONAL_JUMP)  ; LAB_005b142f
    TEST byte ptr [EDX + 0x10],0x1      ; 005b141f
    JNZ 0x005b1436                      ; 005b1423
        ;   XREF to: 005b1436 (CONDITIONAL_JUMP)  ; LAB_005b1436
    MOV EAX,EBP                         ; 005b1425
        ;   Label: LAB_005b1425
    ADD ESP,0xc                         ; 005b1427
        ;   Label: LAB_005b1427
    POP EBP                             ; 005b142a
    POP EDI                             ; 005b142b
    POP ESI                             ; 005b142c
    POP EBX                             ; 005b142d
    RET                                 ; 005b142e
    MOV EAX,0xffffffff                  ; 005b142f
        ;   Label: LAB_005b142f
    JMP 0x005b1427                      ; 005b1434
        ;   XREF to: 005b1427 (UNCONDITIONAL_JUMP)  ; LAB_005b1427
    PUSH EBX                            ; 005b1436
        ;   Label: LAB_005b1436
    CALL sound_sndwav.cpp_writeWavInBuffer_FUN_005b0cc0 ; 005b1437
        ;   XREF to: 005b0cc0 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavInBuffer_FUN_005b0cc0(int buffer_index)
    ADD ESP,0x4                         ; 005b143c
    TEST EAX,EAX                        ; 005b143f
    JZ 0x005b1456                       ; 005b1441
        ;   XREF to: 005b1456 (CONDITIONAL_JUMP)  ; LAB_005b1456
    XOR ECX,ECX                         ; 005b1443
    MOV dword ptr [0x03f6af38],EBX      ; 005b1445 | g_WaveInCurrentBufferIndex
    MOV dword ptr [0x03f6af3c],ECX      ; 005b144b | g_WaveInCurrentSampleOffset
    JMP 0x005b1328                      ; 005b1451
        ;   XREF to: 005b1328 (UNCONDITIONAL_JUMP)  ; LAB_005b1328
    PUSH 0x6524ac                       ; 005b1456 | = "WavInDevice::poll - queueWavInBuffer ..."
        ;   Label: LAB_005b1456
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b145b
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    MOV EAX,0xffffffff                  ; 005b1460
    ADD ESP,0x4                         ; 005b1465
    ADD ESP,0xc                         ; 005b1468
    POP EBP                             ; 005b146b
    POP EDI                             ; 005b146c
    POP ESI                             ; 005b146d
    POP EBX                             ; 005b146e
    RET                                 ; 005b146f

