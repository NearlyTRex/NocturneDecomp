; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70(CWavInDevice * this_ptr)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndwav.cpp_getWavInDevice_FUN_005b1600 at 005b1608
;
; Referenced Globals:
;   waveInClose* waveInClose = 002118a4
;   GlobalFree* GlobalFree = 00211fe6
;   TerminatedCString s_waveInClose_failed_0065243a
;   HWAVEIN g_WaveInHandle
;   HGLOBAL[20] g_WaveInHeaderHandles
;   undefined4 DAT_03f6add4
;   LPWAVEHDR[20] g_WaveInHeaders
;   undefined4 DAT_03f6ae24
;   HGLOBAL[20] g_WaveInBufferHandles
;   undefined4 DAT_03f6ae74
;   LPVOID[20] g_WaveInBuffers
;   undefined4 DAT_03f6aec4
;
; Called Functions:
;   GlobalFree
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   waveInClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0d70
        ;   Label: sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70
    PUSH ESI                            ; 005b0d71
    PUSH EDI                            ; 005b0d72
    PUSH EBP                            ; 005b0d73
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b0d74
    PUSH EBX                            ; 005b0d78
    MOV EAX,dword ptr [EBX]             ; 005b0d79
    MOV ESI,0x1                         ; 005b0d7b
    CALL dword ptr [EAX + 0x8]          ; 005b0d80
    ADD ESP,0x4                         ; 005b0d83
    TEST EAX,EAX                        ; 005b0d86
    JZ 0x005b0de3                       ; 005b0d88 | LAB_005b0de3
        ;   XREF to: 005b0de3 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 005b0d8a
        ;   Label: LAB_005b0d8a
    XOR EDI,EDI                         ; 005b0d8c
    MOV EDX,dword ptr [EBX + 0x3f6ae70] ; 005b0d8e | HGLOBAL[20] g_WaveInBufferHandles
        ;   Label: LAB_005b0d8e
    CMP EDI,EDX                         ; 005b0d94
    JZ 0x005b0da6                       ; 005b0d96 | LAB_005b0da6
        ;   XREF to: 005b0da6 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 005b0d98
    CALL dword ptr CS:[0x6115d0]        ; 005b0d99 | GlobalFree * GlobalFree
    MOV dword ptr [EBX + 0x3f6ae70],EDI ; 005b0da0 | HGLOBAL[20] g_WaveInBufferHandles
    MOV EBP,dword ptr [EBX + 0x3f6add0] ; 005b0da6 | HGLOBAL[20] g_WaveInHeaderHandles
        ;   Label: LAB_005b0da6
    MOV dword ptr [EBX + 0x3f6aec0],EDI ; 005b0dac | LPVOID[20] g_WaveInBuffers
    CMP EDI,EBP                         ; 005b0db2
    JZ 0x005b0dc4                       ; 005b0db4 | LAB_005b0dc4
        ;   XREF to: 005b0dc4 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 005b0db6
    CALL dword ptr CS:[0x6115d0]        ; 005b0db7 | GlobalFree * GlobalFree
    MOV dword ptr [EBX + 0x3f6add0],EDI ; 005b0dbe | HGLOBAL[20] g_WaveInHeaderHandles
    ADD EBX,0x4                         ; 005b0dc4
        ;   Label: LAB_005b0dc4
    MOV dword ptr [EBX + 0x3f6ae1c],EDI ; 005b0dc7 | LPWAVEHDR[20] g_WaveInHeaders
    CMP EBX,0x50                        ; 005b0dcd
    JNZ 0x005b0d8e                      ; 005b0dd0 | LAB_005b0d8e
        ;   XREF to: 005b0d8e (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x03f6adcc]      ; 005b0dd2 | HWAVEIN g_WaveInHandle
    TEST EDX,EDX                        ; 005b0dd8
    JNZ 0x005b0de7                      ; 005b0dda | LAB_005b0de7
        ;   XREF to: 005b0de7 (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 005b0ddc
    POP EBP                             ; 005b0dde
    POP EDI                             ; 005b0ddf
    POP ESI                             ; 005b0de0
    POP EBX                             ; 005b0de1
    RET                                 ; 005b0de2
    XOR ESI,ESI                         ; 005b0de3
        ;   Label: LAB_005b0de3
    JMP 0x005b0d8a                      ; 005b0de5 | LAB_005b0d8a
        ;   XREF to: 005b0d8a (UNCONDITIONAL_JUMP)
    PUSH EDX                            ; 005b0de7
        ;   Label: LAB_005b0de7
    CALL dword ptr CS:[0x611424]        ; 005b0de8 | waveInClose * waveInClose
    TEST EAX,EAX                        ; 005b0def
    JZ 0x005b0e02                       ; 005b0df1 | LAB_005b0e02
        ;   XREF to: 005b0e02 (CONDITIONAL_JUMP)
    PUSH 0x65243a                       ; 005b0df3 | = "waveInClose failed." | s_waveInClose_failed_0065243a = waveInClose failed.
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0df8 | void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)
    XOR ESI,ESI                         ; 005b0dfd
    ADD ESP,0x4                         ; 005b0dff
    XOR EBX,EBX                         ; 005b0e02
        ;   Label: LAB_005b0e02
    MOV dword ptr [0x03f6adcc],EBX      ; 005b0e04 | HWAVEIN g_WaveInHandle
    MOV EAX,ESI                         ; 005b0e0a
    POP EBP                             ; 005b0e0c
    POP EDI                             ; 005b0e0d
    POP ESI                             ; 005b0e0e
    POP EBX                             ; 005b0e0f
    RET                                 ; 005b0e10

