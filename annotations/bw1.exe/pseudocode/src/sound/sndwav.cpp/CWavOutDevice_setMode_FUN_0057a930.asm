; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0057a930(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bits_per_sample
; int              Stack[0xc]:4   channels
; int              Stack[0x10]:4   sample_rate
; int *            Stack[0x14]:4   out_buffer_size
;
; Referenced Globals:
;   void* PTR_waveOutOpen_005d0484 = 001d09f4
;   void* PTR_GlobalAlloc_005d05dc = 001d0fca
;   void* PTR_GlobalLock_005d05e4 = 001d0fe6
;   TerminatedCString s_waveOutOpen_failed_005f578c
;   undefined4 DAT_006235d4
;   undefined4 DAT_02c82840
;   undefined4 DAT_02c828c4
;   undefined4 DAT_02c828c8
;   undefined4 DAT_02c828cc
;   undefined4 DAT_02c828d0
;   undefined4 DAT_02c828d4
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   GlobalAlloc
;   GlobalLock
;   sound_sndmain.cpp_getMaxSwLatency_FUN_00576030
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;   waveOutOpen
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a930
        ;   Label: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0057a930
    PUSH ESI                            ; 0057a931
    PUSH EDI                            ; 0057a932
    PUSH EBP                            ; 0057a933
    SUB ESP,0x14                        ; 0057a934
    MOV EDI,dword ptr [ESP + 0x28]      ; 0057a937
    PUSH EDI                            ; 0057a93b
    MOV EAX,dword ptr [EDI]             ; 0057a93c
    CALL dword ptr [EAX]                ; 0057a93e
    ADD ESP,0x4                         ; 0057a940
    TEST EAX,EAX                        ; 0057a943
    JNZ 0x0057a94f                      ; 0057a945
        ;   XREF to: 0057a94f (CONDITIONAL_JUMP)  ; LAB_0057a94f
    ADD ESP,0x14                        ; 0057a947
    POP EBP                             ; 0057a94a
    POP EDI                             ; 0057a94b
    POP ESI                             ; 0057a94c
    POP EBX                             ; 0057a94d
    RET                                 ; 0057a94e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0057a94f
        ;   Label: LAB_0057a94f
    MOV [0x02c828c4],EAX                ; 0057a953 | DAT_02c828c4
    MOV EAX,dword ptr [ESP + 0x30]      ; 0057a958
    MOV EDX,0x4                         ; 0057a95c
    MOV [0x02c828c8],EAX                ; 0057a961 | DAT_02c828c8
    MOV EAX,dword ptr [ESP + 0x34]      ; 0057a966
    MOV dword ptr [0x02c828d4],EDX      ; 0057a96a | DAT_02c828d4
    MOV [0x02c828cc],EAX                ; 0057a970 | DAT_02c828cc
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_00576030 ; 0057a975
        ;   XREF to: 00576030 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getMaxSwLatency_FUN_00576030()
    MOV dword ptr [ESP + 0x10],EAX      ; 0057a97a
    FLD float ptr [ESP + 0x10]          ; 0057a97e
    FILD dword ptr [0x02c828cc]         ; 0057a982 | DAT_02c828cc
    FMULP                               ; 0057a988
    FILD dword ptr [0x02c828d4]         ; 0057a98a | DAT_02c828d4
    FDIVP                               ; 0057a990
    CALL crt_math.c_round_FUN_005c03a0  ; 0057a992
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x02c828d0]        ; 0057a997 | DAT_02c828d0
    MOV EAX,[0x02c828d0]                ; 0057a99d | DAT_02c828d0
    ADD EAX,0xf                         ; 0057a9a2
    XOR ESI,ESI                         ; 0057a9a5
    AND AL,0xf0                         ; 0057a9a7
    MOV ECX,dword ptr [0x02c828d4]      ; 0057a9a9 | DAT_02c828d4
    MOV [0x02c828d0],EAX                ; 0057a9af | DAT_02c828d0
    TEST ECX,ECX                        ; 0057a9b4
    JLE 0x0057aa50                      ; 0057a9b6
        ;   XREF to: 0057aa50 (CONDITIONAL_JUMP)  ; LAB_0057aa50
    XOR EBX,EBX                         ; 0057a9bc
    MOV EAX,[0x02c828c4]                ; 0057a9be | DAT_02c828c4
        ;   Label: LAB_0057a9be
    MOV EDX,EAX                         ; 0057a9c3
    SAR EDX,0x1f                        ; 0057a9c5
    SHL EDX,0x3                         ; 0057a9c8
    SBB EAX,EDX                         ; 0057a9cb
    SAR EAX,0x3                         ; 0057a9cd
    IMUL EAX,dword ptr [0x02c828d0]     ; 0057a9d0 | DAT_02c828d0
    IMUL EAX,dword ptr [0x02c828c8]     ; 0057a9d7 | DAT_02c828c8
    PUSH EAX                            ; 0057a9de
    PUSH 0x2002                         ; 0057a9df
    CALL dword ptr CS:[0x5d05dc]        ; 0057a9e4 | PTR_GlobalAlloc_005d05dc
    MOV dword ptr [EBX + 0x2c82884],EAX ; 0057a9eb
    TEST EAX,EAX                        ; 0057a9f1
    JZ 0x0057aadc                       ; 0057a9f3
        ;   XREF to: 0057aadc (CONDITIONAL_JUMP)  ; LAB_0057aadc
    PUSH EAX                            ; 0057a9f9
    CALL dword ptr CS:[0x5d05e4]        ; 0057a9fa | PTR_GlobalLock_005d05e4
    MOV dword ptr [EBX + 0x2c828a4],EAX ; 0057aa01
    TEST EAX,EAX                        ; 0057aa07
    JZ 0x0057aadc                       ; 0057aa09
        ;   XREF to: 0057aadc (CONDITIONAL_JUMP)  ; LAB_0057aadc
    PUSH 0x20                           ; 0057aa0f
    PUSH 0x2002                         ; 0057aa11
    CALL dword ptr CS:[0x5d05dc]        ; 0057aa16 | PTR_GlobalAlloc_005d05dc
    MOV dword ptr [EBX + 0x2c82844],EAX ; 0057aa1d
    TEST EAX,EAX                        ; 0057aa23
    JZ 0x0057aadc                       ; 0057aa25
        ;   XREF to: 0057aadc (CONDITIONAL_JUMP)  ; LAB_0057aadc
    MOV EBP,dword ptr [EBX + 0x2c82844] ; 0057aa2b
    PUSH EBP                            ; 0057aa31
    INC ESI                             ; 0057aa32
    CALL dword ptr CS:[0x5d05e4]        ; 0057aa33 | PTR_GlobalLock_005d05e4
    MOV dword ptr [EBX + 0x2c82864],EAX ; 0057aa3a
    MOV EAX,[0x02c828d4]                ; 0057aa40 | DAT_02c828d4
    ADD EBX,0x4                         ; 0057aa45
    CMP ESI,EAX                         ; 0057aa48
    JL 0x0057a9be                       ; 0057aa4a
        ;   XREF to: 0057a9be (CONDITIONAL_JUMP)  ; LAB_0057a9be
    MOV EDX,0x1                         ; 0057aa50
        ;   Label: LAB_0057aa50
    MOV AX,[0x02c828c4]                 ; 0057aa55 | DAT_02c828c4
    MOV word ptr [ESP],DX               ; 0057aa5b
    MOV word ptr [ESP + 0xe],AX         ; 0057aa5f
    XOR EDX,EDX                         ; 0057aa64
    MOV AX,[0x02c828c8]                 ; 0057aa66 | DAT_02c828c8
    MOV DX,word ptr [ESP + 0xe]         ; 0057aa6c
    MOV word ptr [ESP + 0x2],AX         ; 0057aa71
    MOV EAX,EDX                         ; 0057aa76
    SAR EDX,0x1f                        ; 0057aa78
    SHL EDX,0x3                         ; 0057aa7b
    SBB EAX,EDX                         ; 0057aa7e
    SAR EAX,0x3                         ; 0057aa80
    XOR EDX,EDX                         ; 0057aa83
    MOV DX,word ptr [ESP + 0x2]         ; 0057aa85
    IMUL EAX,EDX                        ; 0057aa8a
    MOV word ptr [ESP + 0xc],AX         ; 0057aa8d
    MOV EAX,[0x02c828cc]                ; 0057aa92 | DAT_02c828cc
    MOV dword ptr [ESP + 0x4],EAX       ; 0057aa97
    XOR EAX,EAX                         ; 0057aa9b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0057aa9d
    MOV AX,word ptr [ESP + 0xc]         ; 0057aaa1
    IMUL EDX,EAX                        ; 0057aaa6
    PUSH 0x0                            ; 0057aaa9
    PUSH 0x0                            ; 0057aaab
    PUSH 0x0                            ; 0057aaad
    LEA EAX,[ESP + 0xc]                 ; 0057aaaf
    PUSH EAX                            ; 0057aab3
    MOV dword ptr [ESP + 0x18],EDX      ; 0057aab4
    MOV EDX,dword ptr [0x006235d4]      ; 0057aab8 | DAT_006235d4
    PUSH EDX                            ; 0057aabe
    PUSH 0x2c82840                      ; 0057aabf | DAT_02c82840
    CALL dword ptr CS:[0x5d0484]        ; 0057aac4 | PTR_waveOutOpen_005d0484
    TEST EAX,EAX                        ; 0057aacb
    JZ 0x0057aaee                       ; 0057aacd
        ;   XREF to: 0057aaee (CONDITIONAL_JUMP)  ; LAB_0057aaee
    PUSH 0x5f578c                       ; 0057aacf | = "waveOutOpen failed"
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 0057aad4
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    ADD ESP,0x4                         ; 0057aad9
    PUSH EDI                            ; 0057aadc
        ;   Label: LAB_0057aadc
    MOV EAX,dword ptr [EDI]             ; 0057aadd
    CALL dword ptr [EAX]                ; 0057aadf
    ADD ESP,0x4                         ; 0057aae1
    XOR EAX,EAX                         ; 0057aae4
    ADD ESP,0x14                        ; 0057aae6
    POP EBP                             ; 0057aae9
    POP EDI                             ; 0057aaea
    POP ESI                             ; 0057aaeb
    POP EBX                             ; 0057aaec
    RET                                 ; 0057aaed
    MOV EDX,dword ptr [ESP + 0x38]      ; 0057aaee
        ;   Label: LAB_0057aaee
    MOV EAX,[0x02c828d0]                ; 0057aaf2 | DAT_02c828d0
    MOV dword ptr [EDX],EAX             ; 0057aaf7
    MOV EAX,0x1                         ; 0057aaf9
    ADD ESP,0x14                        ; 0057aafe
    POP EBP                             ; 0057ab01
    POP EDI                             ; 0057ab02
    POP ESI                             ; 0057ab03
    POP EBX                             ; 0057ab04
    RET                                 ; 0057ab05

