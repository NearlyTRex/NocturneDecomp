; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_snddx.cpp_fillStreamBuffer_FUN_005adff0(void)
;
; Local Variables:
; undefined1       Stack[-0x20]:1  local_20
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[2]:
;   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50 at 005aee0f
;   sound_snddx.cpp_CDirectSoundDevice_start_FUN_005ae340 at 005ae3ac
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_Lock_secondary_buffer_00651a8b
;   TerminatedCString s_Unlock_secondary_buffer_00651aa1
;   IDirectSoundBuffer* g_DirectSoundSecondaryBuffer
;   int g_StreamBitsPerSample
;   int g_StreamSampleRate
;   int g_StreamChannelCount
;   int g_StreamSamplesPerBlock
;   int g_StreamBlockSizeBytes
;   int g_StreamBlockCount
;   int g_StreamCurrentBlock
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adff0
        ;   Label: sound_snddx.cpp_fillStreamBuffer_FUN_005adff0
    PUSH ESI                            ; 005adff1
    PUSH EDI                            ; 005adff2
    PUSH EBP                            ; 005adff3
    SUB ESP,0x350                       ; 005adff4
    MOV EDX,dword ptr [0x03f6a9b8]      ; 005adffa | g_DirectSoundSecondaryBuffer
    TEST EDX,EDX                        ; 005ae000
    JNZ 0x005ae011                      ; 005ae002
        ;   XREF to: 005ae011 (CONDITIONAL_JUMP)  ; LAB_005ae011
    XOR EAX,EAX                         ; 005ae004
        ;   Label: LAB_005ae004
    ADD ESP,0x350                       ; 005ae006
        ;   Label: LAB_005ae006
    POP EBP                             ; 005ae00c
    POP EDI                             ; 005ae00d
    POP ESI                             ; 005ae00e
    POP EBX                             ; 005ae00f
    RET                                 ; 005ae010
    PUSH 0x0                            ; 005ae011
        ;   Label: LAB_005ae011
    LEA EAX,[ESP + 0x350]               ; 005ae013
    PUSH EAX                            ; 005ae01a
    LEA EAX,[ESP + 0x348]               ; 005ae01b
    PUSH EAX                            ; 005ae022
    LEA EAX,[ESP + 0x354]               ; 005ae023
    PUSH EAX                            ; 005ae02a
    LEA EAX,[ESP + 0x354]               ; 005ae02b
    MOV EBX,dword ptr [0x03f6a9d4]      ; 005ae032 | g_StreamBlockSizeBytes
    PUSH EAX                            ; 005ae038
    MOV EAX,[0x03f6a9dc]                ; 005ae039 | g_StreamCurrentBlock
    IMUL EAX,EBX                        ; 005ae03e
    PUSH EBX                            ; 005ae041
    PUSH EAX                            ; 005ae042
    MOV ECX,dword ptr [EDX]             ; 005ae043
    PUSH EDX                            ; 005ae045
    CALL dword ptr [ECX + 0x2c]         ; 005ae046
    TEST EAX,EAX                        ; 005ae049
    JNZ 0x005ae13d                      ; 005ae04b
        ;   XREF to: 005ae13d (CONDITIONAL_JUMP)  ; LAB_005ae13d
    CMP dword ptr [ESP + 0x340],0x0     ; 005ae051
    JNZ 0x005ae006                      ; 005ae059
        ;   XREF to: 005ae006 (CONDITIONAL_JUMP)  ; LAB_005ae006
    MOV EAX,dword ptr [ESP + 0x348]     ; 005ae05b
    CMP EAX,dword ptr [0x03f6a9d4]      ; 005ae062 | g_StreamBlockSizeBytes
    JNZ 0x005ae004                      ; 005ae068
        ;   XREF to: 005ae004 (CONDITIONAL_JUMP)  ; LAB_005ae004
    MOV EAX,[0x03f6a9c4]                ; 005ae06a | g_StreamBitsPerSample
    MOV EDX,EAX                         ; 005ae06f
    SAR EDX,0x1f                        ; 005ae071
    SHL EDX,0x3                         ; 005ae074
    SBB EAX,EDX                         ; 005ae077
    SAR EAX,0x3                         ; 005ae079
    MOV ESI,EAX                         ; 005ae07c
    MOV EBX,ESI                         ; 005ae07e
    IMUL EDX,ESI,0x0                    ; 005ae080
    ADD EDX,dword ptr [ESP + 0x344]     ; 005ae083
    MOV ECX,dword ptr [0x03f6a9cc]      ; 005ae08a | g_StreamChannelCount
    SHL ECX,0x2                         ; 005ae090
    XOR EAX,EAX                         ; 005ae093
    TEST ECX,ECX                        ; 005ae095
    JLE 0x005ae0b0                      ; 005ae097
        ;   XREF to: 005ae0b0 (CONDITIONAL_JUMP)  ; LAB_005ae0b0
    MOV dword ptr [ESP + EAX*0x1 + 0x320],EDX ; 005ae099
        ;   Label: LAB_005ae099
    ADD EAX,0x4                         ; 005ae0a0
    ADD EDX,EBX                         ; 005ae0a3
    CMP EAX,ECX                         ; 005ae0a5
    JL 0x005ae099                       ; 005ae0a7
        ;   XREF to: 005ae099 (CONDITIONAL_JUMP)  ; LAB_005ae099
    LEA EAX,[EAX]                       ; 005ae0a9
    NOP                                 ; 005ae0af
    MOV EBX,dword ptr [0x03f6a9cc]      ; 005ae0b0 | g_StreamChannelCount
        ;   Label: LAB_005ae0b0
    IMUL ESI,EBX                        ; 005ae0b6
    PUSH ESI                            ; 005ae0b9
    MOV ESI,dword ptr [0x03f6a9d0]      ; 005ae0ba | g_StreamSamplesPerBlock
    PUSH ESI                            ; 005ae0c0
    MOV EDI,dword ptr [0x03f6a9c8]      ; 005ae0c1 | g_StreamSampleRate
    PUSH EDI                            ; 005ae0c7
    PUSH EBX                            ; 005ae0c8
    MOV EAX,[0x03f6a9c4]                ; 005ae0c9 | g_StreamBitsPerSample
    PUSH EAX                            ; 005ae0ce
    LEA EAX,[ESP + 0x334]               ; 005ae0cf
    PUSH EAX                            ; 005ae0d6
    CALL sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90 ; 005ae0d7
        ;   XREF to: 005aca90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90(LPVOID * channel_buffers, int bits_per_sample, int num_channels, int samples_per_sec, ...)
    MOV EDX,dword ptr [0x03f6a9dc]      ; 005ae0dc | g_StreamCurrentBlock
    MOV ECX,dword ptr [0x03f6a9d8]      ; 005ae0e2 | g_StreamBlockCount
    INC EDX                             ; 005ae0e8
    ADD ESP,0x18                        ; 005ae0e9
    MOV dword ptr [0x03f6a9dc],EDX      ; 005ae0ec | g_StreamCurrentBlock
    CMP EDX,ECX                         ; 005ae0f2
    JL 0x005ae0fe                       ; 005ae0f4
        ;   XREF to: 005ae0fe (CONDITIONAL_JUMP)  ; LAB_005ae0fe
    XOR EBX,EBX                         ; 005ae0f6
    MOV dword ptr [0x03f6a9dc],EBX      ; 005ae0f8 | g_StreamCurrentBlock
    MOV ESI,dword ptr [ESP + 0x34c]     ; 005ae0fe
        ;   Label: LAB_005ae0fe
    PUSH ESI                            ; 005ae105
    MOV EDI,dword ptr [ESP + 0x344]     ; 005ae106
    PUSH EDI                            ; 005ae10d
    MOV EBP,dword ptr [ESP + 0x350]     ; 005ae10e
    PUSH EBP                            ; 005ae115
    MOV ECX,dword ptr [ESP + 0x350]     ; 005ae116
    MOV EAX,[0x03f6a9b8]                ; 005ae11d | g_DirectSoundSecondaryBuffer
    PUSH ECX                            ; 005ae122
    MOV EDX,dword ptr [EAX]             ; 005ae123
    PUSH EAX                            ; 005ae125
    CALL dword ptr [EDX + 0x4c]         ; 005ae126
    TEST EAX,EAX                        ; 005ae129
    JNZ 0x005ae176                      ; 005ae12b
        ;   XREF to: 005ae176 (CONDITIONAL_JUMP)  ; LAB_005ae176
    MOV EAX,0x1                         ; 005ae12d
    ADD ESP,0x350                       ; 005ae132
    POP EBP                             ; 005ae138
    POP EDI                             ; 005ae139
    POP ESI                             ; 005ae13a
    POP EBX                             ; 005ae13b
    RET                                 ; 005ae13c
    PUSH EAX                            ; 005ae13d
        ;   Label: LAB_005ae13d
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005ae13e
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005ae143
    PUSH EAX                            ; 005ae146
    PUSH 0x651a8b                       ; 005ae147 | = "Lock secondary buffer"
    PUSH 0x651a6c                       ; 005ae14c | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005ae151
    PUSH EAX                            ; 005ae155
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ae156
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005ae15b
    MOV EAX,ESP                         ; 005ae15e
    PUSH EAX                            ; 005ae160
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005ae161
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005ae166
    XOR EAX,EAX                         ; 005ae169
    ADD ESP,0x350                       ; 005ae16b
    POP EBP                             ; 005ae171
    POP EDI                             ; 005ae172
    POP ESI                             ; 005ae173
    POP EBX                             ; 005ae174
    RET                                 ; 005ae175
    PUSH EAX                            ; 005ae176
        ;   Label: LAB_005ae176
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005ae177
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005ae17c
    PUSH EAX                            ; 005ae17f
    PUSH 0x651aa1                       ; 005ae180 | = "Unlock secondary buffer"
    PUSH 0x651a6c                       ; 005ae185 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 005ae18a
    PUSH EAX                            ; 005ae191
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ae192
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005ae197
    LEA EAX,[ESP + 0x190]               ; 005ae19a
    PUSH EAX                            ; 005ae1a1
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005ae1a2
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005ae1a7
    XOR EAX,EAX                         ; 005ae1aa
    ADD ESP,0x350                       ; 005ae1ac
    POP EBP                             ; 005ae1b2
    POP EDI                             ; 005ae1b3
    POP ESI                             ; 005ae1b4
    POP EBX                             ; 005ae1b5
    RET                                 ; 005ae1b6

