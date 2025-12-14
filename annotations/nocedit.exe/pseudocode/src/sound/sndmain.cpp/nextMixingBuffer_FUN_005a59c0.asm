; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl undefined sound_sndmain.cpp_nextMixingBuffer_FUN_005a59c0()
;
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064fb9a
;   TerminatedCString s_SfxSlot_kill_must_be_loc_0064fbaf
;   TerminatedCString s_sound_sndmain_cpp_0064fbcf
;   TerminatedCString s_nextMixingBuffer_shouldn_0064fbe4
;   int g_AudioChannelCount = 0x2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_MixBufferReadIndex
;   int g_MixBufferSize
;   int g_NumMixBuffers
;   void*[8] g_ChannelPrimaryBuffers
;   undefined4 g_ChannelPrimaryBuffers[1]
;   int g_SoundLockCount
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
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

