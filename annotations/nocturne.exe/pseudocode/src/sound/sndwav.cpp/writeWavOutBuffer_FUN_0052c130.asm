; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0052c130(int buffer_index)
;
; Parameters:
; int              Stack[0x4]:4   buffer_index
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_sndwav.cpp_CWavOutDevice_poll_FUN_0052c640 at 0052c697
;   sound_sndwav.cpp_CWavOutDevice_start_FUN_0052c340 at 0052c38c
;
; Referenced Globals:
;   void* PTR_waveOutPrepareHeader_005753fc = 0017588c
;   void* PTR_waveOutUnprepareHeader_00575404 = 001758b4
;   void* PTR_waveOutWrite_00575408 = 001758ce
;   TerminatedCString s_waveOutUnprepareHeader_f_005948bd
;   TerminatedCString s_waveOutPrepareHeader_fai_005948dc
;   TerminatedCString s_waveOutWrite_failed_005948f9
;   undefined4 DAT_02dc93a4
;   undefined4 DAT_02dc9428
;   undefined4 DAT_02dc942c
;   undefined4 DAT_02dc9430
;   undefined4 DAT_02dc9434
;   undefined4 DAT_02dc9438
;
; Called Functions:
;   sound_sndmain.cpp_logSoundError_FUN_00529980
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0
;   waveOutPrepareHeader
;   waveOutUnprepareHeader
;   waveOutWrite
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c130
        ;   Label: sound_sndwav.cpp_writeWavOutBuffer_FUN_0052c130
    PUSH ESI                            ; 0052c131
    PUSH EDI                            ; 0052c132
    PUSH EBP                            ; 0052c133
    SUB ESP,0x24                        ; 0052c134
    MOV EDI,dword ptr [ESP + 0x38]      ; 0052c137
    SHL EDI,0x2                         ; 0052c13b
    CMP dword ptr [EDI + 0x2dc93c8],0x0 ; 0052c13e
    JZ 0x0052c151                       ; 0052c145
        ;   XREF to: 0052c151 (CONDITIONAL_JUMP)  ; LAB_0052c151
    MOV ECX,dword ptr [EDI + 0x2dc93a8] ; 0052c147
    TEST ECX,ECX                        ; 0052c14d
    JNZ 0x0052c15b                      ; 0052c14f
        ;   XREF to: 0052c15b (CONDITIONAL_JUMP)  ; LAB_0052c15b
    XOR EAX,EAX                         ; 0052c151
        ;   Label: LAB_0052c151
    ADD ESP,0x24                        ; 0052c153
    POP EBP                             ; 0052c156
    POP EDI                             ; 0052c157
    POP ESI                             ; 0052c158
    POP EBX                             ; 0052c159
    RET                                 ; 0052c15a
    PUSH 0x20                           ; 0052c15b
        ;   Label: LAB_0052c15b
    PUSH ECX                            ; 0052c15d
    MOV ESI,dword ptr [0x02dc93a4]      ; 0052c15e | DAT_02dc93a4
    PUSH ESI                            ; 0052c164
    CALL dword ptr CS:[0x575404]        ; 0052c165 | PTR_waveOutUnprepareHeader_00575404
    TEST EAX,EAX                        ; 0052c16c
    JNZ 0x0052c249                      ; 0052c16e
        ;   XREF to: 0052c249 (CONDITIONAL_JUMP)  ; LAB_0052c249
    MOV EAX,[0x02dc9428]                ; 0052c174 | DAT_02dc9428
    MOV EDX,EAX                         ; 0052c179
    SAR EDX,0x1f                        ; 0052c17b
    SHL EDX,0x3                         ; 0052c17e
    SBB EAX,EDX                         ; 0052c181
    SAR EAX,0x3                         ; 0052c183
    MOV EBP,EAX                         ; 0052c186
    MOV ESI,EBP                         ; 0052c188
    IMUL EDX,EBP,0x0                    ; 0052c18a
    MOV EBX,dword ptr [0x02dc9430]      ; 0052c18d | DAT_02dc9430
    MOV dword ptr [ESP + 0x20],EDI      ; 0052c193
    SHL EBX,0x2                         ; 0052c197
    XOR EAX,EAX                         ; 0052c19a
    TEST EBX,EBX                        ; 0052c19c
    JLE 0x0052c1c0                      ; 0052c19e
        ;   XREF to: 0052c1c0 (CONDITIONAL_JUMP)  ; LAB_0052c1c0
    MOV EDI,dword ptr [EDI + 0x2dc93c8] ; 0052c1a0
    ADD EAX,0x4                         ; 0052c1a6
        ;   Label: LAB_0052c1a6
    LEA ECX,[EDI + EDX*0x1]             ; 0052c1a9
    ADD EDX,ESI                         ; 0052c1ac
    MOV dword ptr [ESP + EAX*0x1 + -0x4],ECX ; 0052c1ae
    CMP EAX,EBX                         ; 0052c1b2
    JL 0x0052c1a6                       ; 0052c1b4
        ;   XREF to: 0052c1a6 (CONDITIONAL_JUMP)  ; LAB_0052c1a6
    LEA EAX,[EAX]                       ; 0052c1b6
    LEA EDX,[EDX]                       ; 0052c1bc
    MOV EDI,dword ptr [0x02dc9430]      ; 0052c1c0 | DAT_02dc9430
        ;   Label: LAB_0052c1c0
    IMUL EBP,EDI                        ; 0052c1c6
    PUSH EBP                            ; 0052c1c9
    MOV EBP,dword ptr [0x02dc9434]      ; 0052c1ca | DAT_02dc9434
    PUSH EBP                            ; 0052c1d0
    MOV EAX,[0x02dc942c]                ; 0052c1d1 | DAT_02dc942c
    PUSH EAX                            ; 0052c1d6
    PUSH EDI                            ; 0052c1d7
    MOV ECX,dword ptr [0x02dc9428]      ; 0052c1d8 | DAT_02dc9428
    PUSH ECX                            ; 0052c1de
    LEA EAX,[ESP + 0x14]                ; 0052c1df
    PUSH EAX                            ; 0052c1e3
    CALL sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0 ; 0052c1e4
        ;   XREF to: 005294f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0(LPVOID * channel_buffers, int bits_per_sample, int num_channels, int samples_per_sec, ...)
    ADD ESP,0x18                        ; 0052c1e9
    MOV EDX,dword ptr [ESP + 0x20]      ; 0052c1ec
    MOV EDX,dword ptr [EDX + 0x2dc93a8] ; 0052c1f0
    MOV EAX,[0x02dc9438]                ; 0052c1f6 | DAT_02dc9438
    MOV dword ptr [EDX + 0x4],EAX       ; 0052c1fb
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052c1fe
    PUSH 0x20                           ; 0052c202
    MOV EBX,dword ptr [EAX + 0x2dc93a8] ; 0052c204
    PUSH EBX                            ; 0052c20a
    MOV ESI,dword ptr [0x02dc93a4]      ; 0052c20b | DAT_02dc93a4
    PUSH ESI                            ; 0052c211
    CALL dword ptr CS:[0x5753fc]        ; 0052c212 | PTR_waveOutPrepareHeader_005753fc
    TEST EAX,EAX                        ; 0052c219
    JNZ 0x0052c260                      ; 0052c21b
        ;   XREF to: 0052c260 (CONDITIONAL_JUMP)  ; LAB_0052c260
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052c21d
    PUSH 0x20                           ; 0052c221
    MOV EDI,dword ptr [EAX + 0x2dc93a8] ; 0052c223
    PUSH EDI                            ; 0052c229
    MOV EBP,dword ptr [0x02dc93a4]      ; 0052c22a | DAT_02dc93a4
    PUSH EBP                            ; 0052c230
    CALL dword ptr CS:[0x575408]        ; 0052c231 | PTR_waveOutWrite_00575408
    TEST EAX,EAX                        ; 0052c238
    JNZ 0x0052c277                      ; 0052c23a
        ;   XREF to: 0052c277 (CONDITIONAL_JUMP)  ; LAB_0052c277
    MOV EAX,0x1                         ; 0052c23c
    ADD ESP,0x24                        ; 0052c241
    POP EBP                             ; 0052c244
    POP EDI                             ; 0052c245
    POP ESI                             ; 0052c246
    POP EBX                             ; 0052c247
    RET                                 ; 0052c248
    PUSH 0x5948bd                       ; 0052c249 | = "waveOutUnprepareHeader failed!"
        ;   Label: LAB_0052c249
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 0052c24e
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x4                         ; 0052c253
    XOR EAX,EAX                         ; 0052c256
    ADD ESP,0x24                        ; 0052c258
    POP EBP                             ; 0052c25b
    POP EDI                             ; 0052c25c
    POP ESI                             ; 0052c25d
    POP EBX                             ; 0052c25e
    RET                                 ; 0052c25f
    PUSH 0x5948dc                       ; 0052c260 | = "waveOutPrepareHeader failed!"
        ;   Label: LAB_0052c260
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 0052c265
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x4                         ; 0052c26a
    XOR EAX,EAX                         ; 0052c26d
    ADD ESP,0x24                        ; 0052c26f
    POP EBP                             ; 0052c272
    POP EDI                             ; 0052c273
    POP ESI                             ; 0052c274
    POP EBX                             ; 0052c275
    RET                                 ; 0052c276
    PUSH 0x5948f9                       ; 0052c277 | = "waveOutWrite failed!"
        ;   Label: LAB_0052c277
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 0052c27c
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x4                         ; 0052c281
    XOR EAX,EAX                         ; 0052c284
    ADD ESP,0x24                        ; 0052c286
    POP EBP                             ; 0052c289
    POP EDI                             ; 0052c28a
    POP ESI                             ; 0052c28b
    POP EBX                             ; 0052c28c
    RET                                 ; 0052c28d

