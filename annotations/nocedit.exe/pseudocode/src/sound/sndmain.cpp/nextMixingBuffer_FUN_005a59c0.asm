; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_005a59c0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064fb9a
;   TerminatedCString s_SfxSlot_kill_must_be_loc_0064fbaf
;   TerminatedCString s_sound_sndmain_cpp_0064fbcf
;   TerminatedCString s_nextMixingBuffer_shouldn_0064fbe4
;   int g_AudioChannelCount = 0x2
;   int g_AudioSampleRate = 0x5622
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CSfxSlot[64] g_SfxSlots
;   undefined4 g_SfxSlots[1].status
;   int g_SfxLastSlot
;   int g_MixBufferReadIndex
;   int g_MixBufferWriteIndex
;   int g_MixBufferSize
;   int g_NumMixBuffers
;   ... and 4 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_string.c_memmove_FUN_005fe5e0
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a59c0
        ;   Label: sound_sndmain.cpp_nextMixingBuffer_FUN_005a59c0
    PUSH ESI                            ; 005a59c1
    PUSH EDI                            ; 005a59c2
    PUSH EBP                            ; 005a59c3
    SUB ESP,0x30                        ; 005a59c4
    CMP dword ptr [0x03f6940c],0x0      ; 005a59c7 | g_SoundLockCount
    JLE 0x005a5b49                      ; 005a59ce
        ;   XREF to: 005a5b49 (CONDITIONAL_JUMP)  ; LAB_005a5b49
    CMP dword ptr [0x03f69278],0x0      ; 005a59d4 | g_MixBufferReadIndex
        ;   Label: LAB_005a59d4
    JLE 0x005a5a00                      ; 005a59db
        ;   XREF to: 005a5a00 (CONDITIONAL_JUMP)  ; LAB_005a5a00
    MOV EDI,0x64fbcf                    ; 005a59dd | = "..\\sound\\sndmain.cpp"
    MOV EBP,0x4e2                       ; 005a59e2
    PUSH 0x64fbe4                       ; 005a59e7 | = "nextMixingBuffer - shouldn't have any..."
    MOV dword ptr [0x02f0ca48],EDI      ; 005a59ec | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005a59f2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a59f8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a59fd
    MOV ESI,dword ptr [0x03f69280]      ; 005a5a00 | g_MixBufferSize
        ;   Label: LAB_005a5a00
    MOV EAX,[0x00681b18]                ; 005a5a06 | g_AudioChannelCount
    XOR EDI,EDI                         ; 005a5a0b
    SHL ESI,0x2                         ; 005a5a0d
    TEST EAX,EAX                        ; 005a5a10
    JLE 0x005a5a80                      ; 005a5a12
        ;   XREF to: 005a5a80 (CONDITIONAL_JUMP)  ; LAB_005a5a80
    XOR EBX,EBX                         ; 005a5a14
    MOV EAX,[0x03f69284]                ; 005a5a16 | g_NumMixBuffers
        ;   Label: LAB_005a5a16
    DEC EAX                             ; 005a5a1b
    IMUL EAX,ESI                        ; 005a5a1c
    MOV EDX,dword ptr [0x03f69280]      ; 005a5a1f | g_MixBufferSize
    SHL EDX,0x2                         ; 005a5a25
    PUSH EAX                            ; 005a5a28
    MOV EAX,dword ptr [EBX + 0x3f692b0] ; 005a5a29 | g_ChannelPrimaryBuffers | g_ChannelPrimaryBuffers[1]
    ADD EDX,EAX                         ; 005a5a2f
    PUSH EDX                            ; 005a5a31
    PUSH EAX                            ; 005a5a32
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005a5a33
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EAX,[0x03f69284]                ; 005a5a38 | g_NumMixBuffers
    MOV EDX,dword ptr [0x03f69280]      ; 005a5a3d | g_MixBufferSize
    DEC EAX                             ; 005a5a43
    IMUL EAX,EDX                        ; 005a5a44
    ADD ESP,0xc                         ; 005a5a47
    LEA EDX,[EAX*0x4 + 0x0]             ; 005a5a4a
    PUSH ESI                            ; 005a5a51
    MOV EAX,dword ptr [EBX + 0x3f692b0] ; 005a5a52 | g_ChannelPrimaryBuffers | g_ChannelPrimaryBuffers[1]
    PUSH 0x0                            ; 005a5a58
    ADD EAX,EDX                         ; 005a5a5a
        ;   Label: LAB_005a5a5a
    PUSH EAX                            ; 005a5a5c
    ADD EBX,0x4                         ; 005a5a5d
    INC EDI                             ; 005a5a60
    CALL crt_memory.c_memset_FUN_005fde40 ; 005a5a61
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV ECX,dword ptr [0x00681b18]      ; 005a5a66 | g_AudioChannelCount
    ADD ESP,0xc                         ; 005a5a6c
    CMP EDI,ECX                         ; 005a5a6f
    JL 0x005a5a16                       ; 005a5a71
        ;   XREF to: 005a5a16 (CONDITIONAL_JUMP)  ; LAB_005a5a16
    LEA EAX,[EAX]                       ; 005a5a73
    LEA EDX,[EDX]                       ; 005a5a79
    NOP                                 ; 005a5a7f
    MOV EAX,[0x03f69280]                ; 005a5a80 | g_MixBufferSize
        ;   Label: LAB_005a5a80
    MOV dword ptr [ESP + 0x20],EAX      ; 005a5a85
    MOV EAX,[0x00681b18]                ; 005a5a89 | g_AudioChannelCount
    MOV dword ptr [ESP + 0x24],EAX      ; 005a5a8e
    MOV EAX,[0x00681b1c]                ; 005a5a92 | g_AudioSampleRate
    MOV EBX,dword ptr [ESP + 0x24]      ; 005a5a97
    MOV dword ptr [ESP + 0x28],EAX      ; 005a5a9b
    TEST EBX,EBX                        ; 005a5a9f
    JLE 0x005a5ac0                      ; 005a5aa1
        ;   XREF to: 005a5ac0 (CONDITIONAL_JUMP)  ; LAB_005a5ac0
    SHL EBX,0x2                         ; 005a5aa3
    XOR EAX,EAX                         ; 005a5aa6
    ADD EAX,0x4                         ; 005a5aa8
        ;   Label: LAB_005a5aa8
    MOV EDX,dword ptr [EAX + 0x3f692ac] ; 005a5aab | g_ChannelPrimaryBuffers | g_ChannelPrimaryBuffers[1]
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 005a5ab1
    CMP EAX,EBX                         ; 005a5ab5
    JL 0x005a5aa8                       ; 005a5ab7
        ;   XREF to: 005a5aa8 (CONDITIONAL_JUMP)  ; LAB_005a5aa8
    LEA EAX,[EAX]                       ; 005a5ab9
    NOP                                 ; 005a5abf
    FILD dword ptr [0x03f69280]         ; 005a5ac0 | g_MixBufferSize
        ;   Label: LAB_005a5ac0
    FILD dword ptr [0x00681b1c]         ; 005a5ac6 | g_AudioSampleRate
    FDIVP                               ; 005a5acc
    MOV EBX,0x3f5daa4                   ; 005a5ace | g_SfxSlots
    LEA ESI,[EBX + 0x4a00]              ; 005a5ad3 | g_SfxLastSlot
    FSTP float ptr [ESP + 0x2c]         ; 005a5ad9
    PUSH dword ptr [ESP + 0x2c]         ; 005a5add
        ;   Label: LAB_005a5add
    PUSH EBX                            ; 005a5ae1 | g_SfxSlots | g_SfxSlots[1].status
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005a5ae2
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
    ADD EBX,0x128                       ; 005a5ae7 | g_SfxSlots[1].status
    ADD ESP,0x8                         ; 005a5aed
    CMP EBX,ESI                         ; 005a5af0
    JNZ 0x005a5add                      ; 005a5af2
        ;   XREF to: 005a5add (CONDITIONAL_JUMP)  ; LAB_005a5add
    MOV EBX,0x3f5daa4                   ; 005a5af4 | g_SfxSlots
    LEA EBP,[EBX + 0x4a00]              ; 005a5af9 | g_SfxLastSlot
    SUB ESP,0x2c                        ; 005a5aff
        ;   Label: LAB_005a5aff
    MOV EDI,ESP                         ; 005a5b02
    MOV ECX,0xb                         ; 005a5b04
    LEA ESI,[ESP + 0x2c]                ; 005a5b09
    PUSH EBX                            ; 005a5b0d | g_SfxSlots | g_SfxSlots[1].status
    MOVSD.REP ES:EDI,ESI                ; 005a5b0e
    CALL sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0 ; 005a5b10
        ;   XREF to: 005a75e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot * this_ptr, SMixBuffer mix_buffer)
    ADD EBX,0x128                       ; 005a5b15
    ADD ESP,0x30                        ; 005a5b1b
    CMP EBX,EBP                         ; 005a5b1e
    JNZ 0x005a5aff                      ; 005a5b20
        ;   XREF to: 005a5aff (CONDITIONAL_JUMP)  ; LAB_005a5aff
    MOV EAX,[0x03f69280]                ; 005a5b22 | g_MixBufferSize
    MOV EDI,dword ptr [0x03f69320]      ; 005a5b27 | g_MixBufferCount
    XOR ESI,ESI                         ; 005a5b2d
    MOV [0x03f69278],EAX                ; 005a5b2f | g_MixBufferReadIndex
    INC EDI                             ; 005a5b34
    MOV dword ptr [0x03f6927c],ESI      ; 005a5b35 | g_MixBufferWriteIndex
    MOV dword ptr [0x03f69320],EDI      ; 005a5b3b | g_MixBufferCount
    ADD ESP,0x30                        ; 005a5b41
    POP EBP                             ; 005a5b44
    POP EDI                             ; 005a5b45
    POP ESI                             ; 005a5b46
    POP EBX                             ; 005a5b47
    RET                                 ; 005a5b48
    MOV ECX,0x64fb9a                    ; 005a5b49 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a5b49
    MOV EBX,0x4de                       ; 005a5b4e
    PUSH 0x64fbaf                       ; 005a5b53 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a5b58 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005a5b5e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a5b64
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a5b69
    JMP 0x005a59d4                      ; 005a5b6c
        ;   XREF to: 005a59d4 (UNCONDITIONAL_JUMP)  ; LAB_005a59d4

