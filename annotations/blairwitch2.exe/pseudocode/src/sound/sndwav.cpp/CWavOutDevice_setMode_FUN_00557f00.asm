; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_00557f00(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bits_per_sample
; int              Stack[0xc]:4   channels
; int              Stack[0x10]:4   sample_rate
; int *            Stack[0x14]:4   out_buffer_size
;
; Referenced Globals:
;   void* PTR_waveOutOpen_005c8478 = 001c89dc
;   void* PTR_GlobalAlloc_005c85c8 = 001c8f8e
;   void* PTR_GlobalLock_005c85d0 = 001c8faa
;   TerminatedCString s_waveOutOpen_failed_005ea592
;   undefined4 DAT_0061bf84
;   undefined4 DAT_0264b070
;   undefined4 DAT_0264b0f4
;   undefined4 DAT_0264b0f8
;   undefined4 DAT_0264b0fc
;   undefined4 DAT_0264b100
;   undefined4 DAT_0264b104
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   GlobalAlloc
;   GlobalLock
;   sound_sndmain.cpp_FUN_005549c0
;   sound_sndmain.cpp_getMaxSwLatency_FUN_00553600
;   waveOutOpen
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557f00
        ;   Label: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_00557f00
    PUSH ESI                            ; 00557f01
    PUSH EDI                            ; 00557f02
    PUSH EBP                            ; 00557f03
    SUB ESP,0x14                        ; 00557f04
    MOV EDI,dword ptr [ESP + 0x28]      ; 00557f07
    PUSH EDI                            ; 00557f0b
    MOV EAX,dword ptr [EDI]             ; 00557f0c
    CALL dword ptr [EAX]                ; 00557f0e
    ADD ESP,0x4                         ; 00557f10
    TEST EAX,EAX                        ; 00557f13
    JNZ 0x00557f1f                      ; 00557f15
        ;   XREF to: 00557f1f (CONDITIONAL_JUMP)  ; LAB_00557f1f
    ADD ESP,0x14                        ; 00557f17
    POP EBP                             ; 00557f1a
    POP EDI                             ; 00557f1b
    POP ESI                             ; 00557f1c
    POP EBX                             ; 00557f1d
    RET                                 ; 00557f1e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00557f1f
        ;   Label: LAB_00557f1f
    MOV [0x0264b0f4],EAX                ; 00557f23 | DAT_0264b0f4
    MOV EAX,dword ptr [ESP + 0x30]      ; 00557f28
    MOV EDX,0x4                         ; 00557f2c
    MOV [0x0264b0f8],EAX                ; 00557f31 | DAT_0264b0f8
    MOV EAX,dword ptr [ESP + 0x34]      ; 00557f36
    MOV dword ptr [0x0264b104],EDX      ; 00557f3a | DAT_0264b104
    MOV [0x0264b0fc],EAX                ; 00557f40 | DAT_0264b0fc
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_00553600 ; 00557f45
        ;   XREF to: 00553600 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getMaxSwLatency_FUN_00553600()
    MOV dword ptr [ESP + 0x10],EAX      ; 00557f4a
    FLD float ptr [ESP + 0x10]          ; 00557f4e
    FILD dword ptr [0x0264b0fc]         ; 00557f52 | DAT_0264b0fc
    FMULP                               ; 00557f58
    FILD dword ptr [0x0264b104]         ; 00557f5a | DAT_0264b104
    FDIVP                               ; 00557f60
    CALL crt_math.c_round_FUN_005b7ff0  ; 00557f62
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x0264b100]        ; 00557f67 | DAT_0264b100
    MOV EAX,[0x0264b100]                ; 00557f6d | DAT_0264b100
    ADD EAX,0xf                         ; 00557f72
    XOR ESI,ESI                         ; 00557f75
    AND AL,0xf0                         ; 00557f77
    MOV ECX,dword ptr [0x0264b104]      ; 00557f79 | DAT_0264b104
    MOV [0x0264b100],EAX                ; 00557f7f | DAT_0264b100
    TEST ECX,ECX                        ; 00557f84
    JLE 0x00558020                      ; 00557f86
        ;   XREF to: 00558020 (CONDITIONAL_JUMP)  ; LAB_00558020
    XOR EBX,EBX                         ; 00557f8c
    MOV EAX,[0x0264b0f4]                ; 00557f8e | DAT_0264b0f4
        ;   Label: LAB_00557f8e
    MOV EDX,EAX                         ; 00557f93
    SAR EDX,0x1f                        ; 00557f95
    SHL EDX,0x3                         ; 00557f98
    SBB EAX,EDX                         ; 00557f9b
    SAR EAX,0x3                         ; 00557f9d
    IMUL EAX,dword ptr [0x0264b100]     ; 00557fa0 | DAT_0264b100
    IMUL EAX,dword ptr [0x0264b0f8]     ; 00557fa7 | DAT_0264b0f8
    PUSH EAX                            ; 00557fae
    PUSH 0x2002                         ; 00557faf
    CALL dword ptr CS:[0x5c85c8]        ; 00557fb4 | PTR_GlobalAlloc_005c85c8
    MOV dword ptr [EBX + 0x264b0b4],EAX ; 00557fbb
    TEST EAX,EAX                        ; 00557fc1
    JZ 0x005580ac                       ; 00557fc3
        ;   XREF to: 005580ac (CONDITIONAL_JUMP)  ; LAB_005580ac
    PUSH EAX                            ; 00557fc9
    CALL dword ptr CS:[0x5c85d0]        ; 00557fca | PTR_GlobalLock_005c85d0
    MOV dword ptr [EBX + 0x264b0d4],EAX ; 00557fd1
    TEST EAX,EAX                        ; 00557fd7
    JZ 0x005580ac                       ; 00557fd9
        ;   XREF to: 005580ac (CONDITIONAL_JUMP)  ; LAB_005580ac
    PUSH 0x20                           ; 00557fdf
    PUSH 0x2002                         ; 00557fe1
    CALL dword ptr CS:[0x5c85c8]        ; 00557fe6 | PTR_GlobalAlloc_005c85c8
    MOV dword ptr [EBX + 0x264b074],EAX ; 00557fed
    TEST EAX,EAX                        ; 00557ff3
    JZ 0x005580ac                       ; 00557ff5
        ;   XREF to: 005580ac (CONDITIONAL_JUMP)  ; LAB_005580ac
    MOV EBP,dword ptr [EBX + 0x264b074] ; 00557ffb
    PUSH EBP                            ; 00558001
    INC ESI                             ; 00558002
    CALL dword ptr CS:[0x5c85d0]        ; 00558003 | PTR_GlobalLock_005c85d0
    MOV dword ptr [EBX + 0x264b094],EAX ; 0055800a
    MOV EAX,[0x0264b104]                ; 00558010 | DAT_0264b104
    ADD EBX,0x4                         ; 00558015
    CMP ESI,EAX                         ; 00558018
    JL 0x00557f8e                       ; 0055801a
        ;   XREF to: 00557f8e (CONDITIONAL_JUMP)  ; LAB_00557f8e
    MOV EDX,0x1                         ; 00558020
        ;   Label: LAB_00558020
    MOV AX,[0x0264b0f4]                 ; 00558025 | DAT_0264b0f4
    MOV word ptr [ESP],DX               ; 0055802b
    MOV word ptr [ESP + 0xe],AX         ; 0055802f
    XOR EDX,EDX                         ; 00558034
    MOV AX,[0x0264b0f8]                 ; 00558036 | DAT_0264b0f8
    MOV DX,word ptr [ESP + 0xe]         ; 0055803c
    MOV word ptr [ESP + 0x2],AX         ; 00558041
    MOV EAX,EDX                         ; 00558046
    SAR EDX,0x1f                        ; 00558048
    SHL EDX,0x3                         ; 0055804b
    SBB EAX,EDX                         ; 0055804e
    SAR EAX,0x3                         ; 00558050
    XOR EDX,EDX                         ; 00558053
    MOV DX,word ptr [ESP + 0x2]         ; 00558055
    IMUL EAX,EDX                        ; 0055805a
    MOV word ptr [ESP + 0xc],AX         ; 0055805d
    MOV EAX,[0x0264b0fc]                ; 00558062 | DAT_0264b0fc
    MOV dword ptr [ESP + 0x4],EAX       ; 00558067
    XOR EAX,EAX                         ; 0055806b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055806d
    MOV AX,word ptr [ESP + 0xc]         ; 00558071
    IMUL EDX,EAX                        ; 00558076
    PUSH 0x0                            ; 00558079
    PUSH 0x0                            ; 0055807b
    PUSH 0x0                            ; 0055807d
    LEA EAX,[ESP + 0xc]                 ; 0055807f
    PUSH EAX                            ; 00558083
    MOV dword ptr [ESP + 0x18],EDX      ; 00558084
    MOV EDX,dword ptr [0x0061bf84]      ; 00558088 | DAT_0061bf84
    PUSH EDX                            ; 0055808e
    PUSH 0x264b070                      ; 0055808f | DAT_0264b070
    CALL dword ptr CS:[0x5c8478]        ; 00558094 | PTR_waveOutOpen_005c8478
    TEST EAX,EAX                        ; 0055809b
    JZ 0x005580be                       ; 0055809d
        ;   XREF to: 005580be (CONDITIONAL_JUMP)  ; LAB_005580be
    PUSH 0x5ea592                       ; 0055809f | = "waveOutOpen failed"
    CALL sound_sndmain.cpp_FUN_005549c0 ; 005580a4
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 005580a9
    PUSH EDI                            ; 005580ac
        ;   Label: LAB_005580ac
    MOV EAX,dword ptr [EDI]             ; 005580ad
    CALL dword ptr [EAX]                ; 005580af
    ADD ESP,0x4                         ; 005580b1
    XOR EAX,EAX                         ; 005580b4
    ADD ESP,0x14                        ; 005580b6
    POP EBP                             ; 005580b9
    POP EDI                             ; 005580ba
    POP ESI                             ; 005580bb
    POP EBX                             ; 005580bc
    RET                                 ; 005580bd
    MOV EDX,dword ptr [ESP + 0x38]      ; 005580be
        ;   Label: LAB_005580be
    MOV EAX,[0x0264b100]                ; 005580c2 | DAT_0264b100
    MOV dword ptr [EDX],EAX             ; 005580c7
    MOV EAX,0x1                         ; 005580c9
    ADD ESP,0x14                        ; 005580ce
    POP EBP                             ; 005580d1
    POP EDI                             ; 005580d2
    POP ESI                             ; 005580d3
    POP EBX                             ; 005580d4
    RET                                 ; 005580d5

