; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_005a5730(int requested_size,int num_buffers)
;
; Parameters:
; int              Stack[0x4]:4   requested_size
; int              Stack[0x8]:4   num_buffers
;
; XREF[1]:
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170 at 005ab1fa
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064fae7
;   TerminatedCString s_sound_sndmain_cpp_0064fafc
;   TerminatedCString s_sound_sndmain_cpp_0064fb11
;   TerminatedCString s_sound_sndmain_cpp_0064fb26
;   TerminatedCString s_allocMixBuffers_out_of_m_0064fb3b
;   int g_AudioChannelCount = 0x2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_MixBufferReadIndex
;   int g_MixBufferWriteIndex
;   int g_MixBufferSize
;   int g_NumMixBuffers
;   float* g_TertiaryMixBuffer
;   float*[8] g_ChannelTertiaryBuffers
;   undefined4 g_ChannelTertiaryBuffers[1]
;   ... and 7 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5730
        ;   Label: sound_sndmain.cpp_allocMixBuffers_FUN_005a5730
    PUSH ESI                            ; 005a5731
    PUSH EBP                            ; 005a5732
    SUB ESP,0x10                        ; 005a5733
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a5736
    MOV EDX,dword ptr [ESP + 0x24]      ; 005a573a
    MOV EBX,0x1                         ; 005a573e
    MOV dword ptr [0x03f69284],EDX      ; 005a5743 | g_NumMixBuffers
    CMP EAX,EBX                         ; 005a5749
    JLE 0x005a5760                      ; 005a574b
        ;   XREF to: 005a5760 (CONDITIONAL_JUMP)  ; LAB_005a5760
    ADD EBX,EBX                         ; 005a574d
        ;   Label: LAB_005a574d
    CMP EBX,EAX                         ; 005a574f
    JL 0x005a574d                       ; 005a5751
        ;   XREF to: 005a574d (CONDITIONAL_JUMP)  ; LAB_005a574d
    LEA EAX,[EAX]                       ; 005a5753
    LEA EDX,[EDX]                       ; 005a5759
    NOP                                 ; 005a575f
    MOV EAX,[0x03f69284]                ; 005a5760 | g_NumMixBuffers
        ;   Label: LAB_005a5760
    LEA ESI,[EBX*0x4 + 0x0]             ; 005a5765
    IMUL EAX,ESI                        ; 005a576c
    IMUL EAX,dword ptr [0x00681b18]     ; 005a576f | g_AudioChannelCount
    PUSH 0x4a2                          ; 005a5776
    PUSH 0x64fae7                       ; 005a577b | = "..\\sound\\sndmain.cpp"
    XOR EDX,EDX                         ; 005a5780
    PUSH EAX                            ; 005a5782
    MOV EBP,dword ptr [0x03f692ac]      ; 005a5783 | g_PrimaryMixBuffer
    MOV dword ptr [0x03f69278],EDX      ; 005a5789 | g_MixBufferReadIndex
    PUSH EBP                            ; 005a578f
    MOV dword ptr [0x03f6927c],EDX      ; 005a5790 | g_MixBufferWriteIndex
    MOV dword ptr [0x03f69280],EBX      ; 005a5796 | g_MixBufferSize
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 005a579c
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    MOV [0x03f692ac],EAX                ; 005a57a1 | g_PrimaryMixBuffer
    MOV EAX,[0x00681b18]                ; 005a57a6 | g_AudioChannelCount
    IMUL EAX,ESI                        ; 005a57ab
    ADD ESP,0x10                        ; 005a57ae
    PUSH 0x4a3                          ; 005a57b1
    PUSH 0x64fafc                       ; 005a57b6 | = "..\\sound\\sndmain.cpp"
    ADD EAX,EAX                         ; 005a57bb
    PUSH EAX                            ; 005a57bd
    MOV EAX,[0x03f692d0]                ; 005a57be | g_SecondaryMixBuffer
    PUSH EAX                            ; 005a57c3
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 005a57c4
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    IMUL ESI,dword ptr [0x00681b18]     ; 005a57c9 | g_AudioChannelCount
    ADD ESP,0x10                        ; 005a57d0
    PUSH 0x4a4                          ; 005a57d3
    PUSH 0x64fb11                       ; 005a57d8 | = "..\\sound\\sndmain.cpp"
    PUSH ESI                            ; 005a57dd
    MOV ECX,dword ptr [0x03f69288]      ; 005a57de | g_TertiaryMixBuffer
    PUSH ECX                            ; 005a57e4
    MOV [0x03f692d0],EAX                ; 005a57e5 | g_SecondaryMixBuffer
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 005a57ea
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    MOV EBX,dword ptr [0x03f69280]      ; 005a57ef | g_MixBufferSize
    MOV ESI,dword ptr [0x03f692ac]      ; 005a57f5 | g_PrimaryMixBuffer
    ADD ESP,0x10                        ; 005a57fb
    MOV [0x03f69288],EAX                ; 005a57fe | g_TertiaryMixBuffer
    TEST ESI,ESI                        ; 005a5803
    JNZ 0x005a58e5                      ; 005a5805
        ;   XREF to: 005a58e5 (CONDITIONAL_JUMP)  ; LAB_005a58e5
    MOV EBP,0x64fb26                    ; 005a580b | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a580b
    MOV EAX,0x4aa                       ; 005a5810
    PUSH 0x64fb3b                       ; 005a5815 | = "allocMixBuffers - out of memory"
    MOV dword ptr [0x02f0ca48],EBP      ; 005a581a | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005a5820 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a5825
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a582a
    MOV ECX,dword ptr [0x00681b18]      ; 005a582d | g_AudioChannelCount
        ;   Label: LAB_005a582d
    MOV EBX,dword ptr [0x03f69280]      ; 005a5833 | g_MixBufferSize
    XOR EDX,EDX                         ; 005a5839
    TEST ECX,ECX                        ; 005a583b
    JLE 0x005a58d8                      ; 005a583d
        ;   XREF to: 005a58d8 (CONDITIONAL_JUMP)  ; LAB_005a58d8
    PUSH EDI                            ; 005a5843
    LEA EAX,[EBX*0x8 + 0x0]             ; 005a5844
    IMUL ECX,EBX,0x0                    ; 005a584b
    MOV dword ptr [ESP + 0x10],EAX      ; 005a584e
    MOV EDI,dword ptr [ESP + 0x10]      ; 005a5852
    LEA EAX,[EBX*0x4 + 0x0]             ; 005a5856
    MOV dword ptr [ESP + 0xc],EDI       ; 005a585d
    LEA ESI,[ECX + EAX*0x1]             ; 005a5861
    MOV dword ptr [ESP + 0x8],EAX       ; 005a5864
    MOV EDI,ECX                         ; 005a5868
    XOR EAX,EAX                         ; 005a586a
    MOV EBP,EBX                         ; 005a586c
        ;   Label: LAB_005a586c
    IMUL EBP,EDX                        ; 005a586e
    IMUL EBP,dword ptr [0x03f69284]     ; 005a5871 | g_NumMixBuffers
    SHL EBP,0x2                         ; 005a5878
    MOV dword ptr [ESP + 0x4],EBP       ; 005a587b
    MOV EBP,dword ptr [0x03f692ac]      ; 005a587f | g_PrimaryMixBuffer
    ADD EBP,dword ptr [ESP + 0x4]       ; 005a5885
    MOV dword ptr [EAX + 0x3f692b0],EBP ; 005a5889 | g_ChannelPrimaryBuffers | g_ChannelPrimaryBuffers[1]
    MOV EBP,dword ptr [0x03f69288]      ; 005a588f | g_TertiaryMixBuffer
    ADD EBP,ECX                         ; 005a5895
    MOV dword ptr [EAX + 0x3f6928c],EBP ; 005a5897 | g_ChannelTertiaryBuffers | g_ChannelTertiaryBuffers[1]
    MOV EBP,dword ptr [0x03f692d0]      ; 005a589d | g_SecondaryMixBuffer
    MOV dword ptr [ESP + 0x4],EBP       ; 005a58a3
    ADD EBP,EDI                         ; 005a58a7
    MOV dword ptr [EAX + 0x3f692d4],EBP ; 005a58a9 | g_ChannelSecondaryBuffersA | g_ChannelSecondaryBuffersA[1]
    MOV EBP,dword ptr [ESP + 0x4]       ; 005a58af
    ADD EBP,ESI                         ; 005a58b3
    MOV dword ptr [EAX + 0x3f692f4],EBP ; 005a58b5 | g_ChannelSecondaryBuffersB
    ADD ESI,dword ptr [ESP + 0x10]      ; 005a58bb
    ADD EDI,dword ptr [ESP + 0xc]       ; 005a58bf
    MOV EBP,dword ptr [ESP + 0x8]       ; 005a58c3
    INC EDX                             ; 005a58c7
    ADD ECX,EBP                         ; 005a58c8
    MOV EBP,dword ptr [0x00681b18]      ; 005a58ca | g_AudioChannelCount
    ADD EAX,0x4                         ; 005a58d0
    CMP EDX,EBP                         ; 005a58d3
    JL 0x005a586c                       ; 005a58d5
        ;   XREF to: 005a586c (CONDITIONAL_JUMP)  ; LAB_005a586c
    POP EDI                             ; 005a58d7
    MOV dword ptr [0x03f69280],EBX      ; 005a58d8 | g_MixBufferSize
        ;   Label: LAB_005a58d8
    ADD ESP,0x10                        ; 005a58de
    POP EBP                             ; 005a58e1
    POP ESI                             ; 005a58e2
    POP EBX                             ; 005a58e3
    RET                                 ; 005a58e4
    CMP dword ptr [0x03f692d0],0x0      ; 005a58e5 | g_SecondaryMixBuffer
        ;   Label: LAB_005a58e5
    JZ 0x005a580b                       ; 005a58ec
        ;   XREF to: 005a580b (CONDITIONAL_JUMP)  ; LAB_005a580b
    TEST EAX,EAX                        ; 005a58f2
    JZ 0x005a580b                       ; 005a58f4
        ;   XREF to: 005a580b (CONDITIONAL_JUMP)  ; LAB_005a580b
    JMP 0x005a582d                      ; 005a58fa
        ;   XREF to: 005a582d (UNCONDITIONAL_JUMP)  ; LAB_005a582d

