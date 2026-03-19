; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_005b0840(CWavOutDevice *this_ptr)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndwav.cpp_getWavOutDevice_FUN_005b1510 at 005b1518
;
; Referenced Globals:
;   WAVE_OUT_CLOSE_FUNC* g_waveOutCloseFunc = 0021191e
;   GLOBAL_FREE_FUNC* g_GlobalFreeFunc = 00211fe6
;   TerminatedCString s_waveOutClose_failed_00652370
;   HWAVEOUT g_WaveOutHandle
;   HGLOBAL[8] g_WaveOutHeaderHandles
;   undefined4 g_WaveOutHeaderHandles[1]
;   LPWAVEHDR[8] g_WaveOutHeaders
;   undefined4 g_WaveOutHeaders[1]
;   HGLOBAL[8] g_WaveOutBufferHandles
;   undefined4 g_WaveOutBufferHandles[1]
;   LPVOID[8] g_WaveOutBuffers
;   undefined4 g_WaveOutBuffers[1]
;
; Called Functions:
;   GlobalFree
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   waveOutClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0840
        ;   Label: sound_sndwav.cpp_CWavOutDevice_close_FUN_005b0840
    PUSH ESI                            ; 005b0841
    PUSH EDI                            ; 005b0842
    PUSH EBP                            ; 005b0843
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b0844
    PUSH EBX                            ; 005b0848
    MOV EAX,dword ptr [EBX]             ; 005b0849
    MOV ESI,0x1                         ; 005b084b
    CALL dword ptr [EAX + 0x8]          ; 005b0850
    ADD ESP,0x4                         ; 005b0853
    TEST EAX,EAX                        ; 005b0856
    JZ 0x005b08b3                       ; 005b0858
        ;   XREF to: 005b08b3 (CONDITIONAL_JUMP)  ; LAB_005b08b3
    XOR EBX,EBX                         ; 005b085a
        ;   Label: LAB_005b085a
    XOR EDI,EDI                         ; 005b085c
    MOV EDX,dword ptr [EBX + 0x3f6ad78] ; 005b085e | g_WaveOutBufferHandles | g_WaveOutBufferHandles[1]
        ;   Label: LAB_005b085e
    CMP EDI,EDX                         ; 005b0864
    JZ 0x005b0876                       ; 005b0866
        ;   XREF to: 005b0876 (CONDITIONAL_JUMP)  ; LAB_005b0876
    PUSH EDX                            ; 005b0868
    CALL dword ptr CS:[0x6115d0]        ; 005b0869 | g_GlobalFreeFunc
    MOV dword ptr [EBX + 0x3f6ad78],EDI ; 005b0870 | g_WaveOutBufferHandles
    MOV EBP,dword ptr [EBX + 0x3f6ad38] ; 005b0876 | g_WaveOutHeaderHandles | g_WaveOutHeaderHandles[1]
        ;   Label: LAB_005b0876
    MOV dword ptr [EBX + 0x3f6ad98],EDI ; 005b087c | g_WaveOutBuffers | g_WaveOutBuffers[1]
    CMP EDI,EBP                         ; 005b0882
    JZ 0x005b0894                       ; 005b0884
        ;   XREF to: 005b0894 (CONDITIONAL_JUMP)  ; LAB_005b0894
    PUSH EBP                            ; 005b0886
    CALL dword ptr CS:[0x6115d0]        ; 005b0887 | g_GlobalFreeFunc
    MOV dword ptr [EBX + 0x3f6ad38],EDI ; 005b088e | g_WaveOutHeaderHandles
    ADD EBX,0x4                         ; 005b0894
        ;   Label: LAB_005b0894
    MOV dword ptr [EBX + 0x3f6ad54],EDI ; 005b0897 | g_WaveOutHeaders | g_WaveOutHeaders[1]
    CMP EBX,0x20                        ; 005b089d
    JNZ 0x005b085e                      ; 005b08a0
        ;   XREF to: 005b085e (CONDITIONAL_JUMP)  ; LAB_005b085e
    MOV EDX,dword ptr [0x03f6ad34]      ; 005b08a2 | g_WaveOutHandle
    TEST EDX,EDX                        ; 005b08a8
    JNZ 0x005b08b7                      ; 005b08aa
        ;   XREF to: 005b08b7 (CONDITIONAL_JUMP)  ; LAB_005b08b7
    MOV EAX,ESI                         ; 005b08ac
    POP EBP                             ; 005b08ae
    POP EDI                             ; 005b08af
    POP ESI                             ; 005b08b0
    POP EBX                             ; 005b08b1
    RET                                 ; 005b08b2
    XOR ESI,ESI                         ; 005b08b3
        ;   Label: LAB_005b08b3
    JMP 0x005b085a                      ; 005b08b5
        ;   XREF to: 005b085a (UNCONDITIONAL_JUMP)  ; LAB_005b085a
    PUSH EDX                            ; 005b08b7
        ;   Label: LAB_005b08b7
    CALL dword ptr CS:[0x611440]        ; 005b08b8 | g_waveOutCloseFunc
    TEST EAX,EAX                        ; 005b08bf
    JZ 0x005b08d2                       ; 005b08c1
        ;   XREF to: 005b08d2 (CONDITIONAL_JUMP)  ; LAB_005b08d2
    PUSH 0x652370                       ; 005b08c3 | = "waveOutClose failed."
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b08c8
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    XOR ESI,ESI                         ; 005b08cd
    ADD ESP,0x4                         ; 005b08cf
    XOR EBX,EBX                         ; 005b08d2
        ;   Label: LAB_005b08d2
    MOV dword ptr [0x03f6ad34],EBX      ; 005b08d4 | g_WaveOutHandle
    MOV EAX,ESI                         ; 005b08da
    POP EBP                             ; 005b08dc
    POP EDI                             ; 005b08dd
    POP ESI                             ; 005b08de
    POP EBX                             ; 005b08df
    RET                                 ; 005b08e0

