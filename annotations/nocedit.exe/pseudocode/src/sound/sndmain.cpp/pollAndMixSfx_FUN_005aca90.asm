; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)
;
; Parameters:
; LPVOID *         Stack[0x4]:4   channel_buffers
; int              Stack[0x8]:4   bits_per_sample
; int              Stack[0xc]:4   num_channels
; int              Stack[0x10]:4   samples_per_sec
; int              Stack[0x14]:4   samples_per_block
; int              Stack[0x18]:4   block_align
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_snddx.cpp_fillStreamBuffer_FUN_005adff0 at 005ae0d7
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0 at 005b0774
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064fb9a
;   TerminatedCString s_SfxSlot_kill_must_be_loc_0064fbaf
;   TerminatedCString s_sound_sndmain_cpp_0064fbcf
;   TerminatedCString s_nextMixingBuffer_shouldn_0064fbe4
;   TerminatedCString s_sound_sndmain_cpp_0065101f
;   TerminatedCString s_pollSfx_must_be_locked_00651034
;   int g_AudioBitsPerSample = 0x10
;   int g_AudioChannelCount = 0x2
;   int g_AudioSampleRate = 0x5622
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CSfxSlot[64] g_SfxSlots
;   undefined4 g_SfxSlots[1].status
;   int g_SfxLastSlot
;   int g_MixBufferReadIndex
;   ... and 7 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_string.c_memmove_FUN_005fe5e0
;   sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530
;   sound_sndmain.cpp_convertMixBufToOutput_FUN_005a5b80
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aca90
        ;   Label: sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90
    PUSH ESI                            ; 005aca91
    PUSH EDI                            ; 005aca92
    PUSH EBP                            ; 005aca93
    SUB ESP,0x5c                        ; 005aca94
    CMP dword ptr [0x03f6940c],0x0      ; 005aca97 | g_SoundLockCount
    JLE 0x005acd4b                      ; 005aca9e
        ;   XREF to: 005acd4b (CONDITIONAL_JUMP)  ; LAB_005acd4b
    MOV ESI,dword ptr [ESP + 0x78]      ; 005acaa4
        ;   Label: LAB_005acaa4
    TEST ESI,ESI                        ; 005acaa8
    JLE 0x005acac9                      ; 005acaaa
        ;   XREF to: 005acac9 (CONDITIONAL_JUMP)  ; LAB_005acac9
    LEA EDX,[ESI*0x4 + 0x0]             ; 005acaac
    XOR EAX,EAX                         ; 005acab3
    CMP dword ptr [EAX + 0x3f692b0],0x0 ; 005acab5 | g_ChannelPrimaryBuffers | g_ChannelPrimaryBuffers[1]
        ;   Label: LAB_005acab5
    JZ 0x005acd9b                       ; 005acabc
        ;   XREF to: 005acd9b (CONDITIONAL_JUMP)  ; LAB_005acd9b
    ADD EAX,0x4                         ; 005acac2
    CMP EAX,EDX                         ; 005acac5
    JL 0x005acab5                       ; 005acac7
        ;   XREF to: 005acab5 (CONDITIONAL_JUMP)  ; LAB_005acab5
    MOV EAX,dword ptr [ESP + 0x74]      ; 005acac9
        ;   Label: LAB_005acac9
    CMP EAX,dword ptr [0x00681b14]      ; 005acacd | g_AudioBitsPerSample
    JNZ 0x005acd9b                      ; 005acad3
        ;   XREF to: 005acd9b (CONDITIONAL_JUMP)  ; LAB_005acd9b
    MOV EAX,dword ptr [ESP + 0x78]      ; 005acad9
    CMP EAX,dword ptr [0x00681b18]      ; 005acadd | g_AudioChannelCount
    JNZ 0x005acd9b                      ; 005acae3
        ;   XREF to: 005acd9b (CONDITIONAL_JUMP)  ; LAB_005acd9b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005acae9
    CMP EAX,dword ptr [0x00681b1c]      ; 005acaed | g_AudioSampleRate
    JNZ 0x005acd9b                      ; 005acaf3
        ;   XREF to: 005acd9b (CONDITIONAL_JUMP)  ; LAB_005acd9b
    CALL sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530 ; 005acaf9
        ;   XREF to: 005a5530 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530()
    MOV ECX,dword ptr [ESP + 0x78]      ; 005acafe
    XOR EAX,EAX                         ; 005acb02
    TEST ECX,ECX                        ; 005acb04
    JLE 0x005acb20                      ; 005acb06
        ;   XREF to: 005acb20 (CONDITIONAL_JUMP)  ; LAB_005acb20
    MOV EDX,dword ptr [ESP + 0x70]      ; 005acb08
    INC EAX                             ; 005acb0c
        ;   Label: LAB_005acb0c
    MOV ESI,dword ptr [EDX]             ; 005acb0d
    MOV dword ptr [ESP + EAX*0x4 + 0x28],ESI ; 005acb0f
    MOV ESI,dword ptr [ESP + 0x78]      ; 005acb13
    ADD EDX,0x4                         ; 005acb17
    CMP EAX,ESI                         ; 005acb1a
    JL 0x005acb0c                       ; 005acb1c
        ;   XREF to: 005acb0c (CONDITIONAL_JUMP)  ; LAB_005acb0c
    MOV EAX,EAX                         ; 005acb1e
    MOV EAX,dword ptr [ESP + 0x78]      ; 005acb20
        ;   Label: LAB_005acb20
    SHL EAX,0x2                         ; 005acb24
    MOV dword ptr [ESP + 0x4c],EAX      ; 005acb27
    MOV EAX,0x3f5daa4                   ; 005acb2b | g_SfxSlots
    ADD EAX,0x4a00                      ; 005acb30 | g_SfxLastSlot
    MOV dword ptr [ESP + 0x54],EAX      ; 005acb35 | g_SfxLastSlot
    MOV dword ptr [ESP + 0x50],EAX      ; 005acb39 | g_SfxLastSlot
    CMP dword ptr [ESP + 0x80],0x0      ; 005acb3d
        ;   Label: LAB_005acb3d
    JLE 0x005acd9b                      ; 005acb45
        ;   XREF to: 005acd9b (CONDITIONAL_JUMP)  ; LAB_005acd9b
    CMP dword ptr [0x03f69278],0x1      ; 005acb4b | g_MixBufferReadIndex
    JGE 0x005accb3                      ; 005acb52
        ;   XREF to: 005accb3 (CONDITIONAL_JUMP)  ; LAB_005accb3
    CMP dword ptr [0x03f6940c],0x0      ; 005acb58 | g_SoundLockCount
    JLE 0x005acd73                      ; 005acb5f
        ;   XREF to: 005acd73 (CONDITIONAL_JUMP)  ; LAB_005acd73
    CMP dword ptr [0x03f69278],0x0      ; 005acb65 | g_MixBufferReadIndex
        ;   Label: LAB_005acb65
    JLE 0x005acb91                      ; 005acb6c
        ;   XREF to: 005acb91 (CONDITIONAL_JUMP)  ; LAB_005acb91
    MOV ESI,0x64fbcf                    ; 005acb6e | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x4e2                       ; 005acb73
    PUSH 0x64fbe4                       ; 005acb78 | = "nextMixingBuffer - shouldn't have any..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005acb7d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005acb83 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005acb89
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005acb8e
    MOV ESI,dword ptr [0x03f69280]      ; 005acb91 | g_MixBufferSize
        ;   Label: LAB_005acb91
    MOV EBP,dword ptr [0x00681b18]      ; 005acb97 | g_AudioChannelCount
    XOR EDI,EDI                         ; 005acb9d
    SHL ESI,0x2                         ; 005acb9f
    TEST EBP,EBP                        ; 005acba2
    JLE 0x005acc01                      ; 005acba4
        ;   XREF to: 005acc01 (CONDITIONAL_JUMP)  ; LAB_005acc01
    XOR EBX,EBX                         ; 005acba6
    MOV EAX,[0x03f69284]                ; 005acba8 | g_NumMixBuffers
        ;   Label: LAB_005acba8
    DEC EAX                             ; 005acbad
    IMUL EAX,ESI                        ; 005acbae
    MOV EDX,dword ptr [0x03f69280]      ; 005acbb1 | g_MixBufferSize
    SHL EDX,0x2                         ; 005acbb7
    PUSH EAX                            ; 005acbba
    MOV EAX,dword ptr [EBX + 0x3f692b0] ; 005acbbb | g_ChannelPrimaryBuffers | g_ChannelPrimaryBuffers[1]
    ADD EDX,EAX                         ; 005acbc1
    PUSH EDX                            ; 005acbc3
    PUSH EAX                            ; 005acbc4
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005acbc5
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EAX,[0x03f69284]                ; 005acbca | g_NumMixBuffers
    MOV EDX,dword ptr [0x03f69280]      ; 005acbcf | g_MixBufferSize
    DEC EAX                             ; 005acbd5
    IMUL EAX,EDX                        ; 005acbd6
    ADD ESP,0xc                         ; 005acbd9
    PUSH ESI                            ; 005acbdc
    SHL EAX,0x2                         ; 005acbdd
    MOV EDX,dword ptr [EBX + 0x3f692b0] ; 005acbe0 | g_ChannelPrimaryBuffers
    PUSH 0x0                            ; 005acbe6
    ADD EAX,EDX                         ; 005acbe8
    PUSH EAX                            ; 005acbea
    ADD EBX,0x4                         ; 005acbeb
    INC EDI                             ; 005acbee
    CALL crt_memory.c_memset_FUN_005fde40 ; 005acbef
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV ECX,dword ptr [0x00681b18]      ; 005acbf4 | g_AudioChannelCount
    ADD ESP,0xc                         ; 005acbfa
    CMP EDI,ECX                         ; 005acbfd
    JL 0x005acba8                       ; 005acbff
        ;   XREF to: 005acba8 (CONDITIONAL_JUMP)  ; LAB_005acba8
    MOV EAX,[0x03f69280]                ; 005acc01 | g_MixBufferSize
        ;   Label: LAB_005acc01
    MOV dword ptr [ESP + 0x20],EAX      ; 005acc06
    MOV EAX,[0x00681b18]                ; 005acc0a | g_AudioChannelCount
    MOV dword ptr [ESP + 0x24],EAX      ; 005acc0f
    MOV EAX,[0x00681b1c]                ; 005acc13 | g_AudioSampleRate
    MOV EBX,dword ptr [ESP + 0x24]      ; 005acc18
    MOV dword ptr [ESP + 0x28],EAX      ; 005acc1c
    TEST EBX,EBX                        ; 005acc20
    JLE 0x005acc3a                      ; 005acc22
        ;   XREF to: 005acc3a (CONDITIONAL_JUMP)  ; LAB_005acc3a
    SHL EBX,0x2                         ; 005acc24
    XOR EAX,EAX                         ; 005acc27
    ADD EAX,0x4                         ; 005acc29
        ;   Label: LAB_005acc29
    MOV EDX,dword ptr [EAX + 0x3f692ac] ; 005acc2c | g_ChannelPrimaryBuffers | g_ChannelPrimaryBuffers[1]
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 005acc32
    CMP EAX,EBX                         ; 005acc36
    JL 0x005acc29                       ; 005acc38
        ;   XREF to: 005acc29 (CONDITIONAL_JUMP)  ; LAB_005acc29
    FILD dword ptr [0x03f69280]         ; 005acc3a | g_MixBufferSize
        ;   Label: LAB_005acc3a
    FILD dword ptr [0x00681b1c]         ; 005acc40 | g_AudioSampleRate
    FDIVP                               ; 005acc46
    MOV EBX,0x3f5daa4                   ; 005acc48 | g_SfxSlots
    MOV ESI,dword ptr [ESP + 0x50]      ; 005acc4d
    FSTP float ptr [ESP + 0x58]         ; 005acc51
    PUSH dword ptr [ESP + 0x58]         ; 005acc55
        ;   Label: LAB_005acc55
    PUSH EBX                            ; 005acc59 | g_SfxSlots | g_SfxSlots[1].status
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005acc5a
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
    ADD EBX,0x128                       ; 005acc5f | g_SfxSlots[1].status
    ADD ESP,0x8                         ; 005acc65
    CMP EBX,ESI                         ; 005acc68
    JNZ 0x005acc55                      ; 005acc6a
        ;   XREF to: 005acc55 (CONDITIONAL_JUMP)  ; LAB_005acc55
    MOV EBX,0x3f5daa4                   ; 005acc6c | g_SfxSlots
    SUB ESP,0x2c                        ; 005acc71
        ;   Label: LAB_005acc71
    MOV EDI,ESP                         ; 005acc74
    MOV ECX,0xb                         ; 005acc76
    LEA ESI,[ESP + 0x2c]                ; 005acc7b
    PUSH EBX                            ; 005acc7f | g_SfxSlots | g_SfxSlots[1].status
    MOVSD.REP ES:EDI,ESI                ; 005acc80
    CALL sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0 ; 005acc82
        ;   XREF to: 005a75e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot * this_ptr, SMixBuffer mix_buffer)
    ADD ESP,0x30                        ; 005acc87
    ADD EBX,0x128                       ; 005acc8a
    CMP EBX,dword ptr [ESP + 0x54]      ; 005acc90
    JNZ 0x005acc71                      ; 005acc94
        ;   XREF to: 005acc71 (CONDITIONAL_JUMP)  ; LAB_005acc71
    MOV EAX,[0x03f69280]                ; 005acc96 | g_MixBufferSize
    MOV [0x03f69278],EAX                ; 005acc9b | g_MixBufferReadIndex
    MOV EAX,[0x03f69320]                ; 005acca0 | g_MixBufferCount
    XOR EBP,EBP                         ; 005acca5
    INC EAX                             ; 005acca7
    MOV dword ptr [0x03f6927c],EBP      ; 005acca8 | g_MixBufferWriteIndex
    MOV [0x03f69320],EAX                ; 005accae | g_MixBufferCount
    MOV EDX,dword ptr [ESP + 0x80]      ; 005accb3
        ;   Label: LAB_005accb3
    MOV ESI,dword ptr [0x03f69278]      ; 005accba | g_MixBufferReadIndex
    CMP ESI,EDX                         ; 005accc0
    JLE 0x005accc6                      ; 005accc2
        ;   XREF to: 005accc6 (CONDITIONAL_JUMP)  ; LAB_005accc6
    MOV ESI,EDX                         ; 005accc4
    CMP dword ptr [ESP + 0x78],0x0      ; 005accc6
        ;   Label: LAB_005accc6
    JLE 0x005acd1a                      ; 005acccb
        ;   XREF to: 005acd1a (CONDITIONAL_JUMP)  ; LAB_005acd1a
    MOV EDI,dword ptr [ESP + 0x84]      ; 005acccd
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005accd4
    XOR EBX,EBX                         ; 005accd8
    IMUL EDI,ESI                        ; 005accda
    MOV EAX,dword ptr [ESP + 0x84]      ; 005accdd
        ;   Label: LAB_005accdd
    PUSH EAX                            ; 005acce4
    MOV EDX,dword ptr [ESP + 0x78]      ; 005acce5
    PUSH ESI                            ; 005acce9
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x34] ; 005accea
    MOV EAX,[0x03f6927c]                ; 005accee | g_MixBufferWriteIndex
    PUSH EDX                            ; 005accf3
    SHL EAX,0x2                         ; 005accf4
    MOV EDX,dword ptr [EBX + 0x3f692b0] ; 005accf7 | g_ChannelPrimaryBuffers | g_ChannelPrimaryBuffers[1]
    PUSH ECX                            ; 005accfd
    ADD EAX,EDX                         ; 005accfe
    PUSH EAX                            ; 005acd00
    CALL sound_sndmain.cpp_convertMixBufToOutput_FUN_005a5b80 ; 005acd01
        ;   XREF to: 005a5b80 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_convertMixBufToOutput_FUN_005a5b80(float * input_samples, void * output_buffer, int bits_per_sample, int num_samples, ...)
    ADD ESP,0x14                        ; 005acd06
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x2c] ; 005acd09
    ADD EBX,0x4                         ; 005acd0d
    ADD EAX,EDI                         ; 005acd10
    MOV dword ptr [ESP + EBX*0x1 + 0x28],EAX ; 005acd12
    CMP EBX,EBP                         ; 005acd16
    JL 0x005accdd                       ; 005acd18
        ;   XREF to: 005accdd (CONDITIONAL_JUMP)  ; LAB_005accdd
    MOV EBX,dword ptr [ESP + 0x80]      ; 005acd1a
        ;   Label: LAB_005acd1a
    MOV EDI,dword ptr [0x03f69278]      ; 005acd21 | g_MixBufferReadIndex
    MOV EBP,dword ptr [0x03f6927c]      ; 005acd27 | g_MixBufferWriteIndex
    SUB EDI,ESI                         ; 005acd2d
    ADD EBP,ESI                         ; 005acd2f
    SUB EBX,ESI                         ; 005acd31
    MOV dword ptr [0x03f69278],EDI      ; 005acd33 | g_MixBufferReadIndex
    MOV dword ptr [0x03f6927c],EBP      ; 005acd39 | g_MixBufferWriteIndex
    MOV dword ptr [ESP + 0x80],EBX      ; 005acd3f
    JMP 0x005acb3d                      ; 005acd46
        ;   XREF to: 005acb3d (UNCONDITIONAL_JUMP)  ; LAB_005acb3d
    MOV ECX,0x65101f                    ; 005acd4b | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005acd4b
    MOV EBX,0x16ce                      ; 005acd50
    PUSH 0x651034                       ; 005acd55 | = "pollSfx - must be locked!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005acd5a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005acd60 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005acd66
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005acd6b
    JMP 0x005acaa4                      ; 005acd6e
        ;   XREF to: 005acaa4 (UNCONDITIONAL_JUMP)  ; LAB_005acaa4
    MOV EDX,0x64fb9a                    ; 005acd73 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005acd73
    MOV ECX,0x4de                       ; 005acd78
    PUSH 0x64fbaf                       ; 005acd7d | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x02f0ca48],EDX      ; 005acd82 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005acd88 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005acd8e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005acd93
    JMP 0x005acb65                      ; 005acd96
        ;   XREF to: 005acb65 (UNCONDITIONAL_JUMP)  ; LAB_005acb65
    ADD ESP,0x5c                        ; 005acd9b
        ;   Label: LAB_005acd9b
    POP EBP                             ; 005acd9e
    POP EDI                             ; 005acd9f
    POP ESI                             ; 005acda0
    POP EBX                             ; 005acda1
    RET                                 ; 005acda2

