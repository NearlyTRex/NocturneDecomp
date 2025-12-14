; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_freeMixBuffers_FUN_005a5900(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 at 005ab157
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064fb5b
;   TerminatedCString s_sound_sndmain_cpp_0064fb70
;   TerminatedCString s_sound_sndmain_cpp_0064fb85
;   int g_MixBufferReadIndex
;   int g_MixBufferWriteIndex
;   int g_MixBufferSize
;   int g_NumMixBuffers
;   float* g_TertiaryMixBuffer
;   float*[8] g_ChannelTertiaryBuffers
;   undefined4 g_ChannelTertiaryBuffers[1]
;   void* g_PrimaryMixBuffer
;   void*[8] g_ChannelPrimaryBuffers
;   undefined4 g_ChannelPrimaryBuffers[1]
;   float* g_SecondaryMixBuffer
;   float*[8] g_ChannelSecondaryBuffersA
;   ... and 3 more
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5900
        ;   Label: sound_sndmain.cpp_freeMixBuffers_FUN_005a5900
    PUSH EBP                            ; 005a5901
    MOV EDX,dword ptr [0x03f692ac]      ; 005a5902 | g_PrimaryMixBuffer
    TEST EDX,EDX                        ; 005a5908
    JNZ 0x005a597d                      ; 005a590a
        ;   XREF to: 005a597d (CONDITIONAL_JUMP)  ; LAB_005a597d
    PUSH ESI                            ; 005a590c
        ;   Label: LAB_005a590c
    MOV ESI,dword ptr [0x03f692d0]      ; 005a590d | g_SecondaryMixBuffer
    TEST ESI,ESI                        ; 005a5913
    JZ 0x005a5932                       ; 005a5915
        ;   XREF to: 005a5932 (CONDITIONAL_JUMP)  ; LAB_005a5932
    PUSH 0x4c0                          ; 005a5917
    PUSH 0x64fb70                       ; 005a591c | = "..\\sound\\sndmain.cpp"
    PUSH ESI                            ; 005a5921
    XOR EBP,EBP                         ; 005a5922
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005a5924
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005a5929
    MOV dword ptr [0x03f692d0],EBP      ; 005a592c | g_SecondaryMixBuffer
    MOV EAX,[0x03f69288]                ; 005a5932 | g_TertiaryMixBuffer
        ;   Label: LAB_005a5932
    TEST EAX,EAX                        ; 005a5937
    JNZ 0x005a599d                      ; 005a5939
        ;   XREF to: 005a599d (CONDITIONAL_JUMP)  ; LAB_005a599d
    XOR EAX,EAX                         ; 005a593b
        ;   Label: LAB_005a593b
    XOR EDX,EDX                         ; 005a593d
    POP ESI                             ; 005a593f
    ADD EAX,0x4                         ; 005a5940
        ;   Label: LAB_005a5940
    MOV dword ptr [EAX + 0x3f69288],EDX ; 005a5943 | g_ChannelTertiaryBuffers | g_ChannelTertiaryBuffers[1]
    MOV dword ptr [EAX + 0x3f692d0],EDX ; 005a5949 | g_ChannelSecondaryBuffersA | g_ChannelSecondaryBuffersA[1]
    MOV dword ptr [EAX + 0x3f692f0],EDX ; 005a594f | g_ChannelSecondaryBuffersB | g_ChannelSecondaryBuffersB[1]
    MOV dword ptr [EAX + 0x3f692ac],EDX ; 005a5955 | g_ChannelPrimaryBuffers | g_ChannelPrimaryBuffers[1]
    CMP EAX,0x20                        ; 005a595b
    JNZ 0x005a5940                      ; 005a595e
        ;   XREF to: 005a5940 (CONDITIONAL_JUMP)  ; LAB_005a5940
    XOR EBX,EBX                         ; 005a5960
    MOV dword ptr [0x03f69284],EBX      ; 005a5962 | g_NumMixBuffers
    MOV dword ptr [0x03f69278],EBX      ; 005a5968 | g_MixBufferReadIndex
    MOV dword ptr [0x03f6927c],EBX      ; 005a596e | g_MixBufferWriteIndex
    MOV dword ptr [0x03f69280],EBX      ; 005a5974 | g_MixBufferSize
    POP EBP                             ; 005a597a
    POP EBX                             ; 005a597b
    RET                                 ; 005a597c
    PUSH 0x4bc                          ; 005a597d
        ;   Label: LAB_005a597d
    PUSH 0x64fb5b                       ; 005a5982 | = "..\\sound\\sndmain.cpp"
    PUSH EDX                            ; 005a5987
    XOR EBX,EBX                         ; 005a5988
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005a598a
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005a598f
    MOV dword ptr [0x03f692ac],EBX      ; 005a5992 | g_PrimaryMixBuffer
    JMP 0x005a590c                      ; 005a5998
        ;   XREF to: 005a590c (UNCONDITIONAL_JUMP)  ; LAB_005a590c
    PUSH 0x4c4                          ; 005a599d
        ;   Label: LAB_005a599d
    PUSH 0x64fb85                       ; 005a59a2 | = "..\\sound\\sndmain.cpp"
    PUSH EAX                            ; 005a59a7
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005a59a8
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    XOR ECX,ECX                         ; 005a59ad
    ADD ESP,0xc                         ; 005a59af
    MOV dword ptr [0x03f69288],ECX      ; 005a59b2 | g_TertiaryMixBuffer
    JMP 0x005a593b                      ; 005a59b8
        ;   XREF to: 005a593b (UNCONDITIONAL_JUMP)  ; LAB_005a593b

