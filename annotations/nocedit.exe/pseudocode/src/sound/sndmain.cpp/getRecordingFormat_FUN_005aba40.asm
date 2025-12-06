; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_getRecordingFormat_FUN_005aba40(int * out_bits_per_sample, int * out_channels, int * out_sample_rate, int * out_signed)
;
; Parameters:
; int *            Stack[0x4]:4   out_bits_per_sample
; int *            Stack[0x8]:4   out_channels
; int *            Stack[0xc]:4   out_sample_rate
; int *            Stack[0x10]:4   out_signed
;
; Referenced Globals:
;   int g_RecordingBitsPerSample = 0x8
;   int g_RecordingChannelCount = 0x1
;   int g_RecordingSampleRate = 0x2b11
;   int g_RecordingSamplesSigned
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aba40
        ;   Label: sound_sndmain.cpp_getRecordingFormat_FUN_005aba40
    MOV EBX,dword ptr [ESP + 0x8]       ; 005aba41
    MOV ECX,dword ptr [ESP + 0x10]      ; 005aba45
    MOV EDX,dword ptr [ESP + 0x14]      ; 005aba49
    TEST EBX,EBX                        ; 005aba4d
    JNZ 0x005aba71                      ; 005aba4f | LAB_005aba71
        ;   XREF to: 005aba71 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0xc]       ; 005aba51
        ;   Label: LAB_005aba51
    TEST EBX,EBX                        ; 005aba55
    JZ 0x005aba60                       ; 005aba57 | LAB_005aba60
        ;   XREF to: 005aba60 (CONDITIONAL_JUMP)
    MOV EAX,[0x00681b58]                ; 005aba59 | int g_RecordingChannelCount
    MOV dword ptr [EBX],EAX             ; 005aba5e
    TEST ECX,ECX                        ; 005aba60
        ;   Label: LAB_005aba60
    JZ 0x005aba6b                       ; 005aba62 | LAB_005aba6b
        ;   XREF to: 005aba6b (CONDITIONAL_JUMP)
    MOV EAX,[0x00681b5c]                ; 005aba64 | int g_RecordingSampleRate
    MOV dword ptr [ECX],EAX             ; 005aba69
    TEST EDX,EDX                        ; 005aba6b
        ;   Label: LAB_005aba6b
    JNZ 0x005aba7a                      ; 005aba6d | LAB_005aba7a
        ;   XREF to: 005aba7a (CONDITIONAL_JUMP)
    POP EBX                             ; 005aba6f
    RET                                 ; 005aba70
    MOV EAX,[0x00681b54]                ; 005aba71 | int g_RecordingBitsPerSample
        ;   Label: LAB_005aba71
    MOV dword ptr [EBX],EAX             ; 005aba76
    JMP 0x005aba51                      ; 005aba78 | LAB_005aba51
        ;   XREF to: 005aba51 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x03f69c5c]                ; 005aba7a | int g_RecordingSamplesSigned
        ;   Label: LAB_005aba7a
    MOV dword ptr [EDX],EAX             ; 005aba7f
    POP EBX                             ; 005aba81
    RET                                 ; 005aba82

