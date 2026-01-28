; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_005b0f70 (CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate, int *out_samples_per_block)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bits_per_sample
; int              Stack[0xc]:4   channels
; int              Stack[0x10]:4   sample_rate
; int *            Stack[0x14]:4   out_samples_per_block
;
; Referenced Globals:
;   waveInGetDevCapsA* g_waveInGetDevCapsAFunc = 002118b2
;   waveInOpen* g_waveInOpenFunc = 002118c6
;   GlobalAlloc* g_GlobalAllocFunc = 00211fd8
;   GlobalLock* g_GlobalLockFunc = 00211ff4
;   TerminatedCString s_WavInDevice_setMode_Can__00652476
;   UINT g_WaveOutDeviceID = 0xffffffff
;   UINT g_WaveInDeviceID = 0xffffffff
;   SAudioFormatDescriptor[12] g_WaveInFormatTable
;   undefined4 DAT_00681e10
;   undefined4 DAT_00681e14
;   undefined4 DAT_00681e18
;   undefined4 DAT_00681e1c
;   undefined4 DAT_00681e20
;   undefined4 DAT_00681e24
;   undefined4 DAT_00681e28
;   ... and 15 more
;
; Called Functions:
;   GlobalAlloc
;   GlobalLock
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   waveInGetDevCapsA
;   waveInOpen
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0f70
        ;   Label: sound_sndwav.cpp_CWavInDevice_setMode_FUN_005b0f70
    PUSH ESI                            ; 005b0f71
    PUSH EDI                            ; 005b0f72
    PUSH EBP                            ; 005b0f73
    SUB ESP,0x48                        ; 005b0f74
    MOV EDI,dword ptr [0x03f6af2c]      ; 005b0f77 | g_WaveInRequestedSampleRate
    MOV EBP,dword ptr [0x03f6af28]      ; 005b0f7d | g_WaveInRequestedChannels
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005b0f83
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005b0f87
    PUSH EDX                            ; 005b0f8b
    MOV EAX,dword ptr [EAX]             ; 005b0f8c
    CALL dword ptr [EAX]                ; 005b0f8e
    ADD ESP,0x4                         ; 005b0f90
    TEST EAX,EAX                        ; 005b0f93
    JNZ 0x005b0fa5                      ; 005b0f95
        ;   XREF to: 005b0fa5 (CONDITIONAL_JUMP)  ; LAB_005b0fa5
    MOV EDI,dword ptr [0x03f6af2c]      ; 005b0f97 | g_WaveInRequestedSampleRate
        ;   Label: LAB_005b0f97
    ADD ESP,0x48                        ; 005b0f9d
    POP EBP                             ; 005b0fa0
    POP EDI                             ; 005b0fa1
    POP ESI                             ; 005b0fa2
    POP EBX                             ; 005b0fa3
    RET                                 ; 005b0fa4
    PUSH 0x30                           ; 005b0fa5
        ;   Label: LAB_005b0fa5
    LEA EAX,[ESP + 0x4]                 ; 005b0fa7
    PUSH EAX                            ; 005b0fab
    MOV ECX,dword ptr [0x00681e08]      ; 005b0fac | g_WaveInDeviceID
    PUSH ECX                            ; 005b0fb2
    CALL dword ptr CS:[0x611428]        ; 005b0fb3 | g_waveInGetDevCapsAFunc
    TEST EAX,EAX                        ; 005b0fba
    JNZ 0x005b11b0                      ; 005b0fbc
        ;   XREF to: 005b11b0 (CONDITIONAL_JUMP)  ; LAB_005b11b0
    MOV EDI,dword ptr [ESP + 0x64]      ; 005b0fc2
    MOV EAX,dword ptr [ESP + 0x68]      ; 005b0fc6
    MOV EBX,dword ptr [ESP + 0x6c]      ; 005b0fca
    MOV EBP,dword ptr [ESP + 0x60]      ; 005b0fce
    MOV [0x03f6af30],EAX                ; 005b0fd2 | g_WaveInRequestedBitsPerSample
    TEST EBX,EBX                        ; 005b0fd7
    SETNZ AL                            ; 005b0fd9
    AND EAX,0xff                        ; 005b0fdc
    MOV [0x03f6af34],EAX                ; 005b0fe1 | g_WaveInStereoRequested
    MOV EAX,dword ptr [ESP + 0x28]      ; 005b0fe6
    MOV dword ptr [ESP + 0x40],EAX      ; 005b0fea
    MOV EAX,0xffffffff                  ; 005b0fee
        ;   Label: LAB_005b0fee
    MOV ESI,0x1869f                     ; 005b0ff3
    XOR EDX,EDX                         ; 005b0ff8
    XOR EBX,EBX                         ; 005b0ffa
    MOV dword ptr [ESP + 0x44],EAX      ; 005b0ffc
    MOV ECX,dword ptr [ESP + 0x40]      ; 005b1000
        ;   Label: LAB_005b1000
    TEST dword ptr [EBX + 0x681e0c],ECX ; 005b1004 | g_WaveInFormatTable | DAT_00681e1c
    JZ 0x005b1072                       ; 005b100a
        ;   XREF to: 005b1072 (CONDITIONAL_JUMP)  ; LAB_005b1072
    MOV ECX,dword ptr [EBX + 0x681e10]  ; 005b1010 | DAT_00681e10 | DAT_00681e20
    XOR EAX,EAX                         ; 005b1016
    CMP ECX,EBP                         ; 005b1018
    JLE 0x005b1021                      ; 005b101a
        ;   XREF to: 005b1021 (CONDITIONAL_JUMP)  ; LAB_005b1021
    MOV EAX,0x1                         ; 005b101c
    MOV ECX,dword ptr [EBX + 0x681e10]  ; 005b1021 | DAT_00681e10 | DAT_00681e20
        ;   Label: LAB_005b1021
    CMP ECX,EBP                         ; 005b1027
    JGE 0x005b102e                      ; 005b1029
        ;   XREF to: 005b102e (CONDITIONAL_JUMP)  ; LAB_005b102e
    ADD EAX,0x2                         ; 005b102b
    MOV ECX,dword ptr [EBX + 0x681e18]  ; 005b102e | DAT_00681e18 | DAT_00681e28
        ;   Label: LAB_005b102e
    CMP ECX,dword ptr [0x03f6af30]      ; 005b1034 | g_WaveInRequestedBitsPerSample
    JLE 0x005b103d                      ; 005b103a
        ;   XREF to: 005b103d (CONDITIONAL_JUMP)  ; LAB_005b103d
    INC EAX                             ; 005b103c
    MOV ECX,dword ptr [EBX + 0x681e18]  ; 005b103d | DAT_00681e18 | DAT_00681e28
        ;   Label: LAB_005b103d
    CMP ECX,dword ptr [0x03f6af30]      ; 005b1043 | g_WaveInRequestedBitsPerSample
    JGE 0x005b104e                      ; 005b1049
        ;   XREF to: 005b104e (CONDITIONAL_JUMP)  ; LAB_005b104e
    ADD EAX,0x2                         ; 005b104b
    MOV ECX,dword ptr [EBX + 0x681e14]  ; 005b104e | DAT_00681e14 | DAT_00681e24
        ;   Label: LAB_005b104e
    CMP ECX,EDI                         ; 005b1054
    JLE 0x005b105b                      ; 005b1056
        ;   XREF to: 005b105b (CONDITIONAL_JUMP)  ; LAB_005b105b
    ADD EAX,0x2                         ; 005b1058
    MOV ECX,dword ptr [EBX + 0x681e14]  ; 005b105b | DAT_00681e14 | DAT_00681e24
        ;   Label: LAB_005b105b
    CMP ECX,EDI                         ; 005b1061
    JGE 0x005b1068                      ; 005b1063
        ;   XREF to: 005b1068 (CONDITIONAL_JUMP)  ; LAB_005b1068
    ADD EAX,0x3                         ; 005b1065
    CMP EAX,ESI                         ; 005b1068
        ;   Label: LAB_005b1068
    JGE 0x005b1072                      ; 005b106a
        ;   XREF to: 005b1072 (CONDITIONAL_JUMP)  ; LAB_005b1072
    MOV dword ptr [ESP + 0x44],EDX      ; 005b106c
    MOV ESI,EAX                         ; 005b1070
    INC EDX                             ; 005b1072
        ;   Label: LAB_005b1072
    ADD EBX,0x10                        ; 005b1073
    CMP EDX,0xc                         ; 005b1076
    JL 0x005b1000                       ; 005b1079
        ;   XREF to: 005b1000 (CONDITIONAL_JUMP)  ; LAB_005b1000
    MOV EBX,dword ptr [ESP + 0x44]      ; 005b107b
    MOV dword ptr [0x03f6af2c],EDI      ; 005b107f | g_WaveInRequestedSampleRate
    MOV dword ptr [0x03f6af28],EBP      ; 005b1085 | g_WaveInRequestedChannels
    TEST EBX,EBX                        ; 005b108b
    JL 0x005b11c0                       ; 005b108d
        ;   XREF to: 005b11c0 (CONDITIONAL_JUMP)  ; LAB_005b11c0
    MOV EAX,EBX                         ; 005b1093
    SHL EAX,0x4                         ; 005b1095
    MOV EDX,dword ptr [EAX + 0x681e10]  ; 005b1098 | DAT_00681e10
    MOV dword ptr [0x03f6af10],EDX      ; 005b109e | g_WaveInBitsPerSample
    MOV ESI,dword ptr [0x03f6af10]      ; 005b10a4 | g_WaveInBitsPerSample
    MOV EDX,dword ptr [EAX + 0x681e14]  ; 005b10aa | DAT_00681e14
    MOV EAX,dword ptr [EAX + 0x681e18]  ; 005b10b0 | DAT_00681e18
    MOV dword ptr [0x03f6af14],EDX      ; 005b10b6 | g_WaveInChannels
    MOV [0x03f6af18],EAX                ; 005b10bc | g_WaveInSampleRate
    CMP ESI,0x8                         ; 005b10c1
    SETZ AL                             ; 005b10c4
    MOV ECX,0x14                        ; 005b10c7
    AND EAX,0xff                        ; 005b10cc
    MOV EDX,dword ptr [0x03f6af18]      ; 005b10d1 | g_WaveInSampleRate
    MOV [0x03f6af1c],EAX                ; 005b10d7 | g_WaveInIs8Bit
    MOV EAX,EDX                         ; 005b10dc
    SAR EDX,0x1f                        ; 005b10de
    IDIV ECX                            ; 005b10e1
    MOV EDX,dword ptr [0x03f6af18]      ; 005b10e3 | g_WaveInSampleRate
    MOV [0x03f6af20],EAX                ; 005b10e9 | g_WaveInBufferSizeSamples
    ADD EDX,EDX                         ; 005b10ee
    MOV ECX,EAX                         ; 005b10f0
    MOV EAX,EDX                         ; 005b10f2
    SAR EDX,0x1f                        ; 005b10f4
    IDIV ECX                            ; 005b10f7
    MOV [0x03f6af24],EAX                ; 005b10f9 | g_WaveInNumBuffers
    CMP EAX,0x14                        ; 005b10fe
    JLE 0x005b110d                      ; 005b1101
        ;   XREF to: 005b110d (CONDITIONAL_JUMP)  ; LAB_005b110d
    MOV dword ptr [0x03f6af24],0x14     ; 005b1103 | g_WaveInNumBuffers
    MOV ECX,dword ptr [0x03f6af24]      ; 005b110d | g_WaveInNumBuffers
        ;   Label: LAB_005b110d
    MOV dword ptr [0x03f6af2c],EDI      ; 005b1113 | g_WaveInRequestedSampleRate
    MOV dword ptr [0x03f6af28],EBP      ; 005b1119 | g_WaveInRequestedChannels
    XOR ESI,ESI                         ; 005b111f
    TEST ECX,ECX                        ; 005b1121
    JLE 0x005b1162                      ; 005b1123
        ;   XREF to: 005b1162 (CONDITIONAL_JUMP)  ; LAB_005b1162
    XOR EBX,EBX                         ; 005b1125
    MOV EAX,[0x03f6af10]                ; 005b1127 | g_WaveInBitsPerSample
        ;   Label: LAB_005b1127
    MOV EDX,EAX                         ; 005b112c
    SAR EDX,0x1f                        ; 005b112e
    SHL EDX,0x3                         ; 005b1131
    SBB EAX,EDX                         ; 005b1134
    SAR EAX,0x3                         ; 005b1136
    IMUL EAX,dword ptr [0x03f6af20]     ; 005b1139 | g_WaveInBufferSizeSamples
    IMUL EAX,dword ptr [0x03f6af14]     ; 005b1140 | g_WaveInChannels
    PUSH EAX                            ; 005b1147
    PUSH 0x2002                         ; 005b1148
    CALL dword ptr CS:[0x6115cc]        ; 005b114d | g_GlobalAllocFunc
    MOV dword ptr [EBX + 0x3f6ae70],EAX ; 005b1154 | g_WaveInBufferHandles
    TEST EAX,EAX                        ; 005b115a
    JNZ 0x005b11dd                      ; 005b115c
        ;   XREF to: 005b11dd (CONDITIONAL_JUMP)  ; LAB_005b11dd
    CMP ESI,dword ptr [0x03f6af24]      ; 005b1162 | g_WaveInNumBuffers
        ;   Label: LAB_005b1162
    JGE 0x005b123a                      ; 005b1168
        ;   XREF to: 005b123a (CONDITIONAL_JUMP)  ; LAB_005b123a
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005b116e
        ;   Label: LAB_005b116e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005b1172
    PUSH EDX                            ; 005b1176
    MOV EAX,dword ptr [EAX]             ; 005b1177
    CALL dword ptr [EAX]                ; 005b1179
    ADD ESP,0x4                         ; 005b117b
    TEST EAX,EAX                        ; 005b117e
    JZ 0x005b0f97                       ; 005b1180
        ;   XREF to: 005b0f97 (CONDITIONAL_JUMP)  ; LAB_005b0f97
    MOV EAX,dword ptr [ESP + 0x44]      ; 005b1186
    SHL EAX,0x4                         ; 005b118a
    MOV EAX,dword ptr [EAX + 0x681e0c]  ; 005b118d | g_WaveInFormatTable
    MOV ECX,dword ptr [ESP + 0x40]      ; 005b1193
    NOT EAX                             ; 005b1197
    MOV EBP,dword ptr [0x03f6af28]      ; 005b1199 | g_WaveInRequestedChannels
    AND ECX,EAX                         ; 005b119f
    MOV EDI,dword ptr [0x03f6af2c]      ; 005b11a1 | g_WaveInRequestedSampleRate
    MOV dword ptr [ESP + 0x40],ECX      ; 005b11a7
    JMP 0x005b0fee                      ; 005b11ab
        ;   XREF to: 005b0fee (UNCONDITIONAL_JUMP)  ; LAB_005b0fee
    XOR EAX,EAX                         ; 005b11b0
        ;   Label: LAB_005b11b0
    MOV EDI,dword ptr [0x03f6af2c]      ; 005b11b2 | g_WaveInRequestedSampleRate
    ADD ESP,0x48                        ; 005b11b8
    POP EBP                             ; 005b11bb
    POP EDI                             ; 005b11bc
    POP ESI                             ; 005b11bd
    POP EBX                             ; 005b11be
    RET                                 ; 005b11bf
    PUSH 0x652476                       ; 005b11c0 | = "WavInDevice::setMode - Can't set any ..."
        ;   Label: LAB_005b11c0
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b11c5
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005b11ca
    XOR EAX,EAX                         ; 005b11cd
    MOV EDI,dword ptr [0x03f6af2c]      ; 005b11cf | g_WaveInRequestedSampleRate
    ADD ESP,0x48                        ; 005b11d5
    POP EBP                             ; 005b11d8
    POP EDI                             ; 005b11d9
    POP ESI                             ; 005b11da
    POP EBX                             ; 005b11db
    RET                                 ; 005b11dc
    PUSH EAX                            ; 005b11dd
        ;   Label: LAB_005b11dd
    CALL dword ptr CS:[0x6115d4]        ; 005b11de | g_GlobalLockFunc
    MOV dword ptr [EBX + 0x3f6aec0],EAX ; 005b11e5 | g_WaveInBuffers
    TEST EAX,EAX                        ; 005b11eb
    JZ 0x005b1162                       ; 005b11ed
        ;   XREF to: 005b1162 (CONDITIONAL_JUMP)  ; LAB_005b1162
    PUSH 0x20                           ; 005b11f3
    PUSH 0x2002                         ; 005b11f5
    CALL dword ptr CS:[0x6115cc]        ; 005b11fa | g_GlobalAllocFunc
    MOV dword ptr [EBX + 0x3f6add0],EAX ; 005b1201 | g_WaveInHeaderHandles
    TEST EAX,EAX                        ; 005b1207
    JZ 0x005b1162                       ; 005b1209
        ;   XREF to: 005b1162 (CONDITIONAL_JUMP)  ; LAB_005b1162
    MOV EAX,dword ptr [EBX + 0x3f6add0] ; 005b120f | g_WaveInHeaderHandles
    PUSH EAX                            ; 005b1215
    ADD EBX,0x4                         ; 005b1216
    INC ESI                             ; 005b1219
    CALL dword ptr CS:[0x6115d4]        ; 005b121a | g_GlobalLockFunc
    MOV EDX,dword ptr [0x03f6af24]      ; 005b1221 | g_WaveInNumBuffers
    MOV dword ptr [EBX + 0x3f6ae1c],EAX ; 005b1227 | g_WaveInHeaders
    CMP ESI,EDX                         ; 005b122d
    JL 0x005b1127                       ; 005b122f
        ;   XREF to: 005b1127 (CONDITIONAL_JUMP)  ; LAB_005b1127
    JMP 0x005b1162                      ; 005b1235
        ;   XREF to: 005b1162 (UNCONDITIONAL_JUMP)  ; LAB_005b1162
    MOV EDX,0x1                         ; 005b123a
        ;   Label: LAB_005b123a
    MOV AX,[0x03f6af10]                 ; 005b123f | g_WaveInBitsPerSample
    MOV word ptr [ESP + 0x30],DX        ; 005b1245
    MOV word ptr [ESP + 0x3e],AX        ; 005b124a
    XOR EDX,EDX                         ; 005b124f
    MOV AX,[0x03f6af14]                 ; 005b1251 | g_WaveInChannels
    MOV DX,word ptr [ESP + 0x3e]        ; 005b1257
    MOV word ptr [ESP + 0x32],AX        ; 005b125c
    MOV EAX,EDX                         ; 005b1261
    SAR EDX,0x1f                        ; 005b1263
    SHL EDX,0x3                         ; 005b1266
    SBB EAX,EDX                         ; 005b1269
    SAR EAX,0x3                         ; 005b126b
    XOR EDX,EDX                         ; 005b126e
    MOV DX,word ptr [ESP + 0x32]        ; 005b1270
    IMUL EAX,EDX                        ; 005b1275
    MOV word ptr [ESP + 0x3c],AX        ; 005b1278
    MOV EAX,[0x03f6af18]                ; 005b127d | g_WaveInSampleRate
    MOV dword ptr [ESP + 0x34],EAX      ; 005b1282
    XOR EAX,EAX                         ; 005b1286
    MOV EDX,dword ptr [ESP + 0x34]      ; 005b1288
    MOV AX,word ptr [ESP + 0x3c]        ; 005b128c
    IMUL EDX,EAX                        ; 005b1291
    PUSH 0x0                            ; 005b1294
    PUSH 0x0                            ; 005b1296
    PUSH 0x0                            ; 005b1298
    LEA EAX,[ESP + 0x3c]                ; 005b129a
    PUSH EAX                            ; 005b129e
    MOV ESI,dword ptr [0x00681e04]      ; 005b129f | g_WaveOutDeviceID
    PUSH ESI                            ; 005b12a5
    PUSH 0x3f6adcc                      ; 005b12a6 | g_WaveInHandle
    MOV dword ptr [ESP + 0x50],EDX      ; 005b12ab
    CALL dword ptr CS:[0x61142c]        ; 005b12af | g_waveInOpenFunc
    TEST EAX,EAX                        ; 005b12b6
    JNZ 0x005b116e                      ; 005b12b8
        ;   XREF to: 005b116e (CONDITIONAL_JUMP)  ; LAB_005b116e
    MOV EAX,0x1                         ; 005b12be
    MOV EDI,dword ptr [0x03f6af2c]      ; 005b12c3 | g_WaveInRequestedSampleRate
    ADD ESP,0x48                        ; 005b12c9
    POP EBP                             ; 005b12cc
    POP EDI                             ; 005b12cd
    POP ESI                             ; 005b12ce
    POP EBX                             ; 005b12cf
    RET                                 ; 005b12d0

