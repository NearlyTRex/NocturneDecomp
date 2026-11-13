; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_0057b1e0(CWavInDevice *this_ptr,short *output_buffer,int num_samples)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
; short *          Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   num_samples
;
; Referenced Globals:
;   TerminatedCString s_WavInDevice_poll_queueWa_005f5894
;   undefined4 DAT_02c829cc
;   undefined4 DAT_02c82a1c
;   undefined4 DAT_02c82a20
;   undefined4 DAT_02c82a24
;   undefined4 DAT_02c82a2c
;   undefined4 DAT_02c82a30
;   undefined4 DAT_02c82a34
;   undefined4 DAT_02c82a38
;   undefined4 DAT_02c82a3c
;   undefined4 DAT_02c82a40
;   undefined4 DAT_02c82a44
;   undefined4 DAT_02c82a48
;
; Called Functions:
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;   sound_sndmain.cpp_resampleAndConvertAudio_FUN_005747f0
;   sound_sndwav.cpp_writeWavInBuffer_FUN_0057abc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b1e0
        ;   Label: sound_sndwav.cpp_CWavInDevice_poll_FUN_0057b1e0
    PUSH ESI                            ; 0057b1e1
    PUSH EDI                            ; 0057b1e2
    PUSH EBP                            ; 0057b1e3
    SUB ESP,0xc                         ; 0057b1e4
    MOV EDI,dword ptr [ESP + 0x24]      ; 0057b1e7
    MOV ESI,dword ptr [ESP + 0x28]      ; 0057b1eb
    MOV EAX,[0x02c82a1c]                ; 0057b1ef | DAT_02c82a1c
    MOV EDX,EAX                         ; 0057b1f4
    SAR EDX,0x1f                        ; 0057b1f6
    SHL EDX,0x3                         ; 0057b1f9
    SBB EAX,EDX                         ; 0057b1fc
    SAR EAX,0x3                         ; 0057b1fe
    MOV EDX,dword ptr [0x02c82a20]      ; 0057b201 | DAT_02c82a20
    IMUL EDX,EAX                        ; 0057b207
    MOV dword ptr [ESP + 0x8],EDX       ; 0057b20a
    MOV dword ptr [ESP],EDX             ; 0057b20e
    MOV EDX,dword ptr [0x02c82a1c]      ; 0057b211 | DAT_02c82a1c
    XOR EBP,EBP                         ; 0057b217
    CMP EDX,0x10                        ; 0057b219
    SETZ AL                             ; 0057b21c
    AND EAX,0xff                        ; 0057b21f
    MOV dword ptr [ESP + 0x4],EAX       ; 0057b224
    MOV EAX,[0x02c82a44]                ; 0057b228 | DAT_02c82a44
        ;   Label: LAB_0057b228
    CMP dword ptr [EAX*0x4 + 0x2c829cc],0x0 ; 0057b22d | DAT_02c829cc
    JZ 0x0057b32f                       ; 0057b235
        ;   XREF to: 0057b32f (CONDITIONAL_JUMP)  ; LAB_0057b32f
    MOV EBX,dword ptr [0x02c82a48]      ; 0057b23b | DAT_02c82a48
    MOV EDX,dword ptr [0x02c82a2c]      ; 0057b241 | DAT_02c82a2c
    MOV EAX,[0x02c82a3c]                ; 0057b247 | DAT_02c82a3c
    SUB EDX,EBX                         ; 0057b24c
    IMUL EDX,EAX                        ; 0057b24e
    MOV ECX,dword ptr [0x02c82a24]      ; 0057b251 | DAT_02c82a24
    MOV EAX,EDX                         ; 0057b257
    SAR EDX,0x1f                        ; 0057b259
    IDIV ECX                            ; 0057b25c
    MOV EBX,EAX                         ; 0057b25e
    CMP EAX,ESI                         ; 0057b260
    JLE 0x0057b266                      ; 0057b262
        ;   XREF to: 0057b266 (CONDITIONAL_JUMP)  ; LAB_0057b266
    MOV EBX,ESI                         ; 0057b264
    TEST EBX,EBX                        ; 0057b266
        ;   Label: LAB_0057b266
    JLE 0x0057b2f7                      ; 0057b268
        ;   XREF to: 0057b2f7 (CONDITIONAL_JUMP)  ; LAB_0057b2f7
    PUSH EBX                            ; 0057b26e
    PUSH EDI                            ; 0057b26f
    MOV EAX,[0x02c82a40]                ; 0057b270 | DAT_02c82a40
    PUSH EAX                            ; 0057b275
    MOV EDX,dword ptr [0x02c82a3c]      ; 0057b276 | DAT_02c82a3c
    PUSH EDX                            ; 0057b27c
    MOV ECX,dword ptr [0x02c82a38]      ; 0057b27d | DAT_02c82a38
    PUSH ECX                            ; 0057b283
    MOV EAX,[0x02c82a34]                ; 0057b284 | DAT_02c82a34
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0057b289
    PUSH EAX                            ; 0057b28d
    MOV EAX,[0x02c82a48]                ; 0057b28e | DAT_02c82a48
    IMUL EAX,ECX                        ; 0057b293
    MOV EDX,dword ptr [0x02c82a44]      ; 0057b296 | DAT_02c82a44
    MOV EDX,dword ptr [EDX*0x4 + 0x2c829cc] ; 0057b29c
    ADD EAX,EDX                         ; 0057b2a3
    PUSH EAX                            ; 0057b2a5
    MOV EAX,dword ptr [ESP + 0x20]      ; 0057b2a6
    PUSH EAX                            ; 0057b2aa
    MOV EDX,dword ptr [0x02c82a24]      ; 0057b2ab | DAT_02c82a24
    PUSH EDX                            ; 0057b2b1
    MOV ECX,dword ptr [0x02c82a20]      ; 0057b2b2 | DAT_02c82a20
    PUSH ECX                            ; 0057b2b8
    MOV EAX,[0x02c82a1c]                ; 0057b2b9 | DAT_02c82a1c
    PUSH EAX                            ; 0057b2be
    CALL sound_sndmain.cpp_resampleAndConvertAudio_FUN_005747f0 ; 0057b2bf
        ;   XREF to: 005747f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_resampleAndConvertAudio_FUN_005747f0(int src_bit_depth, int src_channels, int src_sample_rate, int src_signed, ...)
    MOV EDX,dword ptr [0x02c82a24]      ; 0057b2c4 | DAT_02c82a24
    IMUL EDX,EBX                        ; 0057b2ca
    ADD ESP,0x2c                        ; 0057b2cd
    MOV EAX,dword ptr [ESP]             ; 0057b2d0
    IMUL EAX,EBX                        ; 0057b2d3
    MOV ECX,dword ptr [0x02c82a3c]      ; 0057b2d6 | DAT_02c82a3c
    ADD EDI,EAX                         ; 0057b2dc
    MOV EAX,EDX                         ; 0057b2de
    SAR EDX,0x1f                        ; 0057b2e0
    IDIV ECX                            ; 0057b2e3
    MOV EDX,dword ptr [0x02c82a48]      ; 0057b2e5 | DAT_02c82a48
    SUB ESI,EBX                         ; 0057b2eb
    ADD EDX,EAX                         ; 0057b2ed
    ADD EBP,EBX                         ; 0057b2ef
    MOV dword ptr [0x02c82a48],EDX      ; 0057b2f1 | DAT_02c82a48
    TEST ESI,ESI                        ; 0057b2f7
        ;   Label: LAB_0057b2f7
    JLE 0x0057b325                      ; 0057b2f9
        ;   XREF to: 0057b325 (CONDITIONAL_JUMP)  ; LAB_0057b325
    MOV EBX,dword ptr [0x02c82a44]      ; 0057b2fb | DAT_02c82a44
    MOV ECX,dword ptr [0x02c82a30]      ; 0057b301 | DAT_02c82a30
    INC EBX                             ; 0057b307
    CMP EBX,ECX                         ; 0057b308
    JL 0x0057b30e                       ; 0057b30a
        ;   XREF to: 0057b30e (CONDITIONAL_JUMP)  ; LAB_0057b30e
    XOR EBX,EBX                         ; 0057b30c
    LEA EAX,[EBX*0x4 + 0x0]             ; 0057b30e
        ;   Label: LAB_0057b30e
    MOV EDX,dword ptr [EAX + 0x2c8292c] ; 0057b315
    TEST EDX,EDX                        ; 0057b31b
    JZ 0x0057b32f                       ; 0057b31d
        ;   XREF to: 0057b32f (CONDITIONAL_JUMP)  ; LAB_0057b32f
    TEST byte ptr [EDX + 0x10],0x1      ; 0057b31f
    JNZ 0x0057b336                      ; 0057b323
        ;   XREF to: 0057b336 (CONDITIONAL_JUMP)  ; LAB_0057b336
    MOV EAX,EBP                         ; 0057b325
        ;   Label: LAB_0057b325
    ADD ESP,0xc                         ; 0057b327
        ;   Label: LAB_0057b327
    POP EBP                             ; 0057b32a
    POP EDI                             ; 0057b32b
    POP ESI                             ; 0057b32c
    POP EBX                             ; 0057b32d
    RET                                 ; 0057b32e
    MOV EAX,0xffffffff                  ; 0057b32f
        ;   Label: LAB_0057b32f
    JMP 0x0057b327                      ; 0057b334
        ;   XREF to: 0057b327 (UNCONDITIONAL_JUMP)  ; LAB_0057b327
    PUSH EBX                            ; 0057b336
        ;   Label: LAB_0057b336
    CALL sound_sndwav.cpp_writeWavInBuffer_FUN_0057abc0 ; 0057b337
        ;   XREF to: 0057abc0 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavInBuffer_FUN_0057abc0(int buffer_index)
    ADD ESP,0x4                         ; 0057b33c
    TEST EAX,EAX                        ; 0057b33f
    JZ 0x0057b356                       ; 0057b341
        ;   XREF to: 0057b356 (CONDITIONAL_JUMP)  ; LAB_0057b356
    XOR ECX,ECX                         ; 0057b343
    MOV dword ptr [0x02c82a44],EBX      ; 0057b345 | DAT_02c82a44
    MOV dword ptr [0x02c82a48],ECX      ; 0057b34b | DAT_02c82a48
    JMP 0x0057b228                      ; 0057b351
        ;   XREF to: 0057b228 (UNCONDITIONAL_JUMP)  ; LAB_0057b228
    PUSH 0x5f5894                       ; 0057b356 | = "WavInDevice::poll - queueWavInBuffer ..."
        ;   Label: LAB_0057b356
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 0057b35b
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    MOV EAX,0xffffffff                  ; 0057b360
    ADD ESP,0x4                         ; 0057b365
    ADD ESP,0xc                         ; 0057b368
    POP EBP                             ; 0057b36b
    POP EDI                             ; 0057b36c
    POP ESI                             ; 0057b36d
    POP EBX                             ; 0057b36e
    RET                                 ; 0057b36f

