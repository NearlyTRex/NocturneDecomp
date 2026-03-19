; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_005b0c10(CWavOutDevice *this_ptr,short *output_buffer,int num_samples)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
; short *          Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   num_samples
;
; Referenced Globals:
;   TerminatedCString s_WavOutDevice_poll_NULL_p_006523b7
;   TerminatedCString s_WavOutDevice_poll_sendWa_006523db
;   LPWAVEHDR[8] g_WaveOutHeaders
;   undefined4 g_WaveOutHeaders[1]
;   LPVOID[8] g_WaveOutBuffers
;   undefined4 g_WaveOutBuffers[1]
;   int g_WaveOutNumBuffers
;
; Called Functions:
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0c10
        ;   Label: sound_sndwav.cpp_CWavOutDevice_poll_FUN_005b0c10
    PUSH ESI                            ; 005b0c11
    PUSH EDI                            ; 005b0c12
    PUSH EBP                            ; 005b0c13
    MOV EDI,0x1                         ; 005b0c14
    MOV EDX,dword ptr [0x03f6adc8]      ; 005b0c19 | g_WaveOutNumBuffers
    XOR ESI,ESI                         ; 005b0c1f
    TEST EDX,EDX                        ; 005b0c21
    JLE 0x005b0c4e                      ; 005b0c23
        ;   XREF to: 005b0c4e (CONDITIONAL_JUMP)  ; LAB_005b0c4e
    XOR EBX,EBX                         ; 005b0c25
    MOV EBP,dword ptr [EBX + 0x3f6ad58] ; 005b0c27 | g_WaveOutHeaders | g_WaveOutHeaders[1]
        ;   Label: LAB_005b0c27
    TEST EBP,EBP                        ; 005b0c2d
    JZ 0x005b0c55                       ; 005b0c2f
        ;   XREF to: 005b0c55 (CONDITIONAL_JUMP)  ; LAB_005b0c55
    CMP dword ptr [EBX + 0x3f6ad98],0x0 ; 005b0c31 | g_WaveOutBuffers | g_WaveOutBuffers[1]
    JZ 0x005b0c55                       ; 005b0c38
        ;   XREF to: 005b0c55 (CONDITIONAL_JUMP)  ; LAB_005b0c55
    TEST byte ptr [EBP + 0x10],0x1      ; 005b0c3a
    JNZ 0x005b0c66                      ; 005b0c3e
        ;   XREF to: 005b0c66 (CONDITIONAL_JUMP)  ; LAB_005b0c66
    MOV ECX,dword ptr [0x03f6adc8]      ; 005b0c40 | g_WaveOutNumBuffers
        ;   Label: LAB_005b0c40
    INC ESI                             ; 005b0c46
    ADD EBX,0x4                         ; 005b0c47
    CMP ESI,ECX                         ; 005b0c4a
    JL 0x005b0c27                       ; 005b0c4c
        ;   XREF to: 005b0c27 (CONDITIONAL_JUMP)  ; LAB_005b0c27
    MOV EAX,EDI                         ; 005b0c4e
        ;   Label: LAB_005b0c4e
    POP EBP                             ; 005b0c50
    POP EDI                             ; 005b0c51
    POP ESI                             ; 005b0c52
    POP EBX                             ; 005b0c53
    RET                                 ; 005b0c54
    PUSH 0x6523b7                       ; 005b0c55 | = "WavOutDevice::poll - NULL pointer??"
        ;   Label: LAB_005b0c55
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0c5a
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    XOR EDI,EDI                         ; 005b0c5f
    ADD ESP,0x4                         ; 005b0c61
    JMP 0x005b0c4e                      ; 005b0c64
        ;   XREF to: 005b0c4e (UNCONDITIONAL_JUMP)  ; LAB_005b0c4e
    PUSH ESI                            ; 005b0c66
        ;   Label: LAB_005b0c66
    CALL sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0 ; 005b0c67
        ;   XREF to: 005b06c0 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0(int buffer_index)
    ADD ESP,0x4                         ; 005b0c6c
    TEST EAX,EAX                        ; 005b0c6f
    JNZ 0x005b0c40                      ; 005b0c71
        ;   XREF to: 005b0c40 (CONDITIONAL_JUMP)  ; LAB_005b0c40
    PUSH 0x6523db                       ; 005b0c73 | = "WavOutDevice::poll - sendWavOutBuffer..."
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0c78
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    XOR EDI,EDI                         ; 005b0c7d
    ADD ESP,0x4                         ; 005b0c7f
    MOV EAX,EDI                         ; 005b0c82
    POP EBP                             ; 005b0c84
    POP EDI                             ; 005b0c85
    POP ESI                             ; 005b0c86
    POP EBX                             ; 005b0c87
    RET                                 ; 005b0c88

