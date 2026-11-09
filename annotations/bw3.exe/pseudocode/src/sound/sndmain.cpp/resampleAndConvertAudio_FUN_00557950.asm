; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_resampleAndConvertAudio_FUN_00557950(int src_bit_depth,int src_channels,int src_sample_rate,int src_signed,short *src_buffer,int dst_bit_depth,int dst_channels,int dst_sample_rate,int dst_signed,short *dst_buffer,int num_output_samples)
;
; Parameters:
; int              Stack[0x4]:4   src_bit_depth
; int              Stack[0x8]:4   src_channels
; int              Stack[0xc]:4   src_sample_rate
; int              Stack[0x10]:4   src_signed
; short *          Stack[0x14]:4   src_buffer
; int              Stack[0x18]:4   dst_bit_depth
; int              Stack[0x1c]:4   dst_channels
; int              Stack[0x20]:4   dst_sample_rate
; int              Stack[0x24]:4   dst_signed
; short *          Stack[0x28]:4   dst_buffer
; int              Stack[0x2c]:4   num_output_samples
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndwav.cpp_CWavInDevice_poll_FUN_0055e310 at 0055e3ef
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   sound_sndmain.cpp_convert16BitAudioSignedness_FUN_00557930
;   sound_sndmain.cpp_convert8BitAudioSignedness_FUN_00557910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557950
        ;   Label: sound_sndmain.cpp_resampleAndConvertAudio_FUN_00557950
    PUSH ESI                            ; 00557951
    PUSH EDI                            ; 00557952
    PUSH EBP                            ; 00557953
    SUB ESP,0x4c                        ; 00557954
    MOV EDX,dword ptr [ESP + 0x64]      ; 00557957
    MOV ECX,dword ptr [ESP + 0x68]      ; 0055795b
    MOV EDI,dword ptr [ESP + 0x70]      ; 0055795f
    MOV ESI,dword ptr [ESP + 0x78]      ; 00557963
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00557967
    MOV EBX,dword ptr [ESP + 0x88]      ; 0055796b
    CMP EBX,0x1                         ; 00557972
    JL 0x00557a10                       ; 00557975
        ;   XREF to: 00557a10 (CONDITIONAL_JUMP)  ; LAB_00557a10
    CMP ECX,EAX                         ; 0055797b
    JNZ 0x00557a18                      ; 0055797d
        ;   XREF to: 00557a18 (CONDITIONAL_JUMP)  ; LAB_00557a18
    MOV EBP,dword ptr [ESP + 0x60]      ; 00557983
    CMP EBP,dword ptr [ESP + 0x74]      ; 00557987
    JNZ 0x00557a18                      ; 0055798b
        ;   XREF to: 00557a18 (CONDITIONAL_JUMP)  ; LAB_00557a18
    CMP EDX,ESI                         ; 00557991
    JNZ 0x00557a18                      ; 00557993
        ;   XREF to: 00557a18 (CONDITIONAL_JUMP)  ; LAB_00557a18
    CMP EDI,dword ptr [ESP + 0x84]      ; 00557999
    JZ 0x005579d2                       ; 005579a0
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    MOV EDX,EBP                         ; 005579a2
    MOV EAX,EBP                         ; 005579a4
    SAR EDX,0x1f                        ; 005579a6
    SHL EDX,0x3                         ; 005579a9
    SBB EAX,EDX                         ; 005579ac
    SAR EAX,0x3                         ; 005579ae
    MOV ECX,EAX                         ; 005579b1
    IMUL ECX,EBX                        ; 005579b3
    IMUL ECX,ESI                        ; 005579b6
    MOV ESI,EDI                         ; 005579b9
    MOV EDI,dword ptr [ESP + 0x84]      ; 005579bb
    PUSH EDI                            ; 005579c2
    MOV EAX,ECX                         ; 005579c3
    SHR ECX,0x2                         ; 005579c5
    MOVSD.REP ES:EDI,ESI                ; 005579c8
    MOV CL,AL                           ; 005579ca
    AND CL,0x3                          ; 005579cc
    MOVSB.REP ES:EDI,ESI                ; 005579cf
    POP EDI                             ; 005579d1
    CMP dword ptr [ESP + 0x6c],0x0      ; 005579d2
        ;   Label: LAB_005579d2
    JZ 0x005579e3                       ; 005579d7
        ;   XREF to: 005579e3 (CONDITIONAL_JUMP)  ; LAB_005579e3
    CMP dword ptr [ESP + 0x80],0x0      ; 005579d9
    JZ 0x005579f4                       ; 005579e1
        ;   XREF to: 005579f4 (CONDITIONAL_JUMP)  ; LAB_005579f4
    CMP dword ptr [ESP + 0x6c],0x0      ; 005579e3
        ;   Label: LAB_005579e3
    JNZ 0x00557a10                      ; 005579e8
        ;   XREF to: 00557a10 (CONDITIONAL_JUMP)  ; LAB_00557a10
    CMP dword ptr [ESP + 0x80],0x0      ; 005579ea
    JZ 0x00557a10                       ; 005579f2
        ;   XREF to: 00557a10 (CONDITIONAL_JUMP)  ; LAB_00557a10
    CMP dword ptr [ESP + 0x74],0x8      ; 005579f4
        ;   Label: LAB_005579f4
    JNZ 0x00557f44                      ; 005579f9
        ;   XREF to: 00557f44 (CONDITIONAL_JUMP)  ; LAB_00557f44
    PUSH EBX                            ; 005579ff
    MOV EDX,dword ptr [ESP + 0x88]      ; 00557a00
    PUSH EDX                            ; 00557a07
    CALL sound_sndmain.cpp_convert8BitAudioSignedness_FUN_00557910 ; 00557a08
        ;   XREF to: 00557910 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_convert8BitAudioSignedness_FUN_00557910(byte * buffer, int num_bytes)
    ADD ESP,0x8                         ; 00557a0d
    ADD ESP,0x4c                        ; 00557a10
        ;   Label: LAB_00557a10
    POP EBP                             ; 00557a13
    POP EDI                             ; 00557a14
    POP ESI                             ; 00557a15
    POP EBX                             ; 00557a16
    RET                                 ; 00557a17
    MOV dword ptr [ESP + 0x44],ECX      ; 00557a18
        ;   Label: LAB_00557a18
    MOV dword ptr [ESP + 0x48],EAX      ; 00557a1c
    FILD dword ptr [ESP + 0x44]         ; 00557a20
    FILD dword ptr [ESP + 0x48]         ; 00557a24
    FDIVP                               ; 00557a28
    MOV ECX,dword ptr [ESP + 0x60]      ; 00557a2a
    FSTP float ptr [ESP + 0x18]         ; 00557a2e
    CMP ECX,0x8                         ; 00557a32
    JNZ 0x00557cb3                      ; 00557a35
        ;   XREF to: 00557cb3 (CONDITIONAL_JUMP)  ; LAB_00557cb3
    MOV EBP,dword ptr [ESP + 0x74]      ; 00557a3b
    MOV EAX,EDI                         ; 00557a3f
    CMP EBP,ECX                         ; 00557a41
    JNZ 0x00557b6d                      ; 00557a43
        ;   XREF to: 00557b6d (CONDITIONAL_JUMP)  ; LAB_00557b6d
    MOV ECX,dword ptr [ESP + 0x84]      ; 00557a49
    CMP EDX,0x1                         ; 00557a50
    JNZ 0x00557ad7                      ; 00557a53
        ;   XREF to: 00557ad7 (CONDITIONAL_JUMP)  ; LAB_00557ad7
    CMP ESI,EDX                         ; 00557a59
    JNZ 0x00557a95                      ; 00557a5b
        ;   XREF to: 00557a95 (CONDITIONAL_JUMP)  ; LAB_00557a95
    XOR EDX,EDX                         ; 00557a5d
    CMP EDX,EBX                         ; 00557a5f
    JGE 0x005579d2                      ; 00557a61
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    FLD float ptr [ESP + 0x18]          ; 00557a67
    MOV ESI,ECX                         ; 00557a6b
    MOV dword ptr [ESP + 0x48],EDX      ; 00557a6d
        ;   Label: LAB_00557a6d
    FILD dword ptr [ESP + 0x48]         ; 00557a71
    FMUL ST1                            ; 00557a75
    CALL crt_math.c_round_FUN_005a3120  ; 00557a77
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 00557a7c
    MOV EDI,dword ptr [ESP]             ; 00557a7f
    INC ESI                             ; 00557a82
    MOV CL,byte ptr [EDI + EAX*0x1]     ; 00557a83
    INC EDX                             ; 00557a86
    MOV byte ptr [ESI + -0x1],CL        ; 00557a87
    CMP EDX,EBX                         ; 00557a8a
    JL 0x00557a6d                       ; 00557a8c
        ;   XREF to: 00557a6d (CONDITIONAL_JUMP)  ; LAB_00557a6d
    FSTP ST0                            ; 00557a8e
    JMP 0x005579d2                      ; 00557a90
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    XOR ESI,ESI                         ; 00557a95
        ;   Label: LAB_00557a95
    CMP ESI,EBX                         ; 00557a97
    JGE 0x005579d2                      ; 00557a99
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    LEA EDX,[ESI + ESI*0x1]             ; 00557a9f
    FLD float ptr [ESP + 0x18]          ; 00557aa2
    ADD EDX,ECX                         ; 00557aa6
    MOV dword ptr [ESP + 0x44],ESI      ; 00557aa8
        ;   Label: LAB_00557aa8
    FILD dword ptr [ESP + 0x44]         ; 00557aac
    FMUL ST1                            ; 00557ab0
    CALL crt_math.c_round_FUN_005a3120  ; 00557ab2
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x4]         ; 00557ab7
    MOV ECX,dword ptr [ESP + 0x4]       ; 00557abb
    ADD EDX,0x2                         ; 00557abf
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 00557ac2
    MOV byte ptr [EDX + -0x1],CL        ; 00557ac5
    INC ESI                             ; 00557ac8
    MOV byte ptr [EDX + -0x2],CL        ; 00557ac9
    CMP ESI,EBX                         ; 00557acc
    JL 0x00557aa8                       ; 00557ace
        ;   XREF to: 00557aa8 (CONDITIONAL_JUMP)  ; LAB_00557aa8
    FSTP ST0                            ; 00557ad0
    JMP 0x005579d2                      ; 00557ad2
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    CMP ESI,0x1                         ; 00557ad7
        ;   Label: LAB_00557ad7
    JNZ 0x00557b28                      ; 00557ada
        ;   XREF to: 00557b28 (CONDITIONAL_JUMP)  ; LAB_00557b28
    XOR EDX,EDX                         ; 00557adc
    CMP EDX,EBX                         ; 00557ade
    JGE 0x005579d2                      ; 00557ae0
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    FLD float ptr [ESP + 0x18]          ; 00557ae6
    MOV ESI,ECX                         ; 00557aea
    MOV dword ptr [ESP + 0x44],EDX      ; 00557aec
        ;   Label: LAB_00557aec
    FILD dword ptr [ESP + 0x44]         ; 00557af0
    FMUL ST1                            ; 00557af4
    CALL crt_math.c_round_FUN_005a3120  ; 00557af6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 00557afb
    MOV ECX,dword ptr [ESP + 0x8]       ; 00557aff
    MOVSX EDI,byte ptr [EAX + ECX*0x2 + 0x1] ; 00557b03
    MOVSX ECX,byte ptr [EAX + ECX*0x2]  ; 00557b08
    ADD ECX,EDI                         ; 00557b0c
    SAR ECX,0x1                         ; 00557b0e
    MOV dword ptr [ESP + 0x44],ECX      ; 00557b10
    INC ESI                             ; 00557b14
    MOV CL,byte ptr [ESP + 0x44]        ; 00557b15
    INC EDX                             ; 00557b19
    MOV byte ptr [ESI + -0x1],CL        ; 00557b1a
    CMP EDX,EBX                         ; 00557b1d
    JL 0x00557aec                       ; 00557b1f
        ;   XREF to: 00557aec (CONDITIONAL_JUMP)  ; LAB_00557aec
    FSTP ST0                            ; 00557b21
    JMP 0x005579d2                      ; 00557b23
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    XOR EDX,EDX                         ; 00557b28
        ;   Label: LAB_00557b28
    CMP EDX,EBX                         ; 00557b2a
    JGE 0x005579d2                      ; 00557b2c
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    LEA ESI,[EDX + EDX*0x1]             ; 00557b32
    FLD float ptr [ESP + 0x18]          ; 00557b35
    ADD ESI,ECX                         ; 00557b39
    MOV dword ptr [ESP + 0x44],EDX      ; 00557b3b
        ;   Label: LAB_00557b3b
    FILD dword ptr [ESP + 0x44]         ; 00557b3f
    FMUL ST1                            ; 00557b43
    CALL crt_math.c_round_FUN_005a3120  ; 00557b45
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xc]         ; 00557b4a
    MOV EDI,dword ptr [ESP + 0xc]       ; 00557b4e
    MOV CL,byte ptr [EAX + EDI*0x2]     ; 00557b52
    MOV byte ptr [ESI],CL               ; 00557b55
    ADD ESI,0x2                         ; 00557b57
    MOV CL,byte ptr [EAX + EDI*0x2 + 0x1] ; 00557b5a
    INC EDX                             ; 00557b5e
    MOV byte ptr [ESI + -0x1],CL        ; 00557b5f
    CMP EDX,EBX                         ; 00557b62
    JL 0x00557b3b                       ; 00557b64
        ;   XREF to: 00557b3b (CONDITIONAL_JUMP)  ; LAB_00557b3b
    FSTP ST0                            ; 00557b66
    JMP 0x005579d2                      ; 00557b68
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    MOV ECX,dword ptr [ESP + 0x84]      ; 00557b6d
        ;   Label: LAB_00557b6d
    CMP EDX,0x1                         ; 00557b74
    JNZ 0x00557c13                      ; 00557b77
        ;   XREF to: 00557c13 (CONDITIONAL_JUMP)  ; LAB_00557c13
    CMP ESI,EDX                         ; 00557b7d
    JNZ 0x00557bc6                      ; 00557b7f
        ;   XREF to: 00557bc6 (CONDITIONAL_JUMP)  ; LAB_00557bc6
    XOR EDX,EDX                         ; 00557b81
    CMP EDX,EBX                         ; 00557b83
    JGE 0x005579d2                      ; 00557b85
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    LEA ESI,[EDX + EDX*0x1]             ; 00557b8b
    FLD float ptr [ESP + 0x18]          ; 00557b8e
    ADD ESI,ECX                         ; 00557b92
    MOV dword ptr [ESP + 0x44],EDX      ; 00557b94
        ;   Label: LAB_00557b94
    FILD dword ptr [ESP + 0x44]         ; 00557b98
    FMUL ST1                            ; 00557b9c
    CALL crt_math.c_round_FUN_005a3120  ; 00557b9e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x10]        ; 00557ba3
    MOV ECX,dword ptr [ESP + 0x10]      ; 00557ba7
    MOVSX CX,byte ptr [ECX + EAX*0x1]   ; 00557bab
    ADD ESI,0x2                         ; 00557bb0
    SHL ECX,0x8                         ; 00557bb3
    INC EDX                             ; 00557bb6
    MOV word ptr [ESI + -0x2],CX        ; 00557bb7
    CMP EDX,EBX                         ; 00557bbb
    JL 0x00557b94                       ; 00557bbd
        ;   XREF to: 00557b94 (CONDITIONAL_JUMP)  ; LAB_00557b94
    FSTP ST0                            ; 00557bbf
    JMP 0x005579d2                      ; 00557bc1
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    XOR ESI,ESI                         ; 00557bc6
        ;   Label: LAB_00557bc6
    CMP ESI,EBX                         ; 00557bc8
    JGE 0x005579d2                      ; 00557bca
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    LEA EDX,[ESI*0x4 + 0x0]             ; 00557bd0
    FLD float ptr [ESP + 0x18]          ; 00557bd7
    ADD EDX,ECX                         ; 00557bdb
    MOV dword ptr [ESP + 0x48],ESI      ; 00557bdd
        ;   Label: LAB_00557bdd
    FILD dword ptr [ESP + 0x48]         ; 00557be1
    FMUL ST1                            ; 00557be5
    CALL crt_math.c_round_FUN_005a3120  ; 00557be7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x14]        ; 00557bec
    MOV ECX,dword ptr [ESP + 0x14]      ; 00557bf0
    MOVSX CX,byte ptr [ECX + EAX*0x1]   ; 00557bf4
    ADD EDX,0x4                         ; 00557bf9
    SHL ECX,0x8                         ; 00557bfc
    MOV word ptr [EDX + -0x2],CX        ; 00557bff
    INC ESI                             ; 00557c03
    MOV word ptr [EDX + -0x4],CX        ; 00557c04
    CMP ESI,EBX                         ; 00557c08
    JL 0x00557bdd                       ; 00557c0a
        ;   XREF to: 00557bdd (CONDITIONAL_JUMP)  ; LAB_00557bdd
    FSTP ST0                            ; 00557c0c
    JMP 0x005579d2                      ; 00557c0e
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    CMP ESI,0x1                         ; 00557c13
        ;   Label: LAB_00557c13
    JNZ 0x00557c65                      ; 00557c16
        ;   XREF to: 00557c65 (CONDITIONAL_JUMP)  ; LAB_00557c65
    XOR EDX,EDX                         ; 00557c18
    TEST EBX,EBX                        ; 00557c1a
    JLE 0x005579d2                      ; 00557c1c
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    FLD float ptr [ESP + 0x18]          ; 00557c22
    MOV ESI,ECX                         ; 00557c26
    MOV dword ptr [ESP + 0x48],EDX      ; 00557c28
        ;   Label: LAB_00557c28
    FILD dword ptr [ESP + 0x48]         ; 00557c2c
    FMUL ST1                            ; 00557c30
    CALL crt_math.c_round_FUN_005a3120  ; 00557c32
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x1c]        ; 00557c37
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00557c3b
    MOVSX DI,byte ptr [EAX + ECX*0x2 + 0x1] ; 00557c3f
    ADD ESI,0x2                         ; 00557c45
    MOVSX CX,byte ptr [EAX + ECX*0x2]   ; 00557c48
    SHL EDI,0x7                         ; 00557c4d
    SHL ECX,0x7                         ; 00557c50
    INC EDX                             ; 00557c53
    ADD ECX,EDI                         ; 00557c54
    MOV word ptr [ESI + -0x2],CX        ; 00557c56
    CMP EDX,EBX                         ; 00557c5a
    JL 0x00557c28                       ; 00557c5c
        ;   XREF to: 00557c28 (CONDITIONAL_JUMP)  ; LAB_00557c28
    FSTP ST0                            ; 00557c5e
    JMP 0x005579d2                      ; 00557c60
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    XOR ESI,ESI                         ; 00557c65
        ;   Label: LAB_00557c65
    TEST EBX,EBX                        ; 00557c67
    JLE 0x005579d2                      ; 00557c69
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    FLD float ptr [ESP + 0x18]          ; 00557c6f
    MOV EDX,ECX                         ; 00557c73
    MOV dword ptr [ESP + 0x48],ESI      ; 00557c75
        ;   Label: LAB_00557c75
    FILD dword ptr [ESP + 0x48]         ; 00557c79
    FMUL ST1                            ; 00557c7d
    CALL crt_math.c_round_FUN_005a3120  ; 00557c7f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x24]        ; 00557c84
    MOV ECX,dword ptr [ESP + 0x24]      ; 00557c88
    MOVSX DI,byte ptr [EAX + ECX*0x2]   ; 00557c8c
    SHL EDI,0x8                         ; 00557c91
    MOV word ptr [EDX],DI               ; 00557c94
    ADD EDX,0x4                         ; 00557c97
    MOVSX CX,byte ptr [EAX + ECX*0x2 + 0x1] ; 00557c9a
    INC ESI                             ; 00557ca0
    SHL ECX,0x8                         ; 00557ca1
    MOV word ptr [EDX + -0x2],CX        ; 00557ca4
    CMP ESI,EBX                         ; 00557ca8
    JL 0x00557c75                       ; 00557caa
        ;   XREF to: 00557c75 (CONDITIONAL_JUMP)  ; LAB_00557c75
    FSTP ST0                            ; 00557cac
    JMP 0x005579d2                      ; 00557cae
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    MOV EAX,EDI                         ; 00557cb3
        ;   Label: LAB_00557cb3
    CMP dword ptr [ESP + 0x74],0x8      ; 00557cb5
    JNZ 0x00557e10                      ; 00557cba
        ;   XREF to: 00557e10 (CONDITIONAL_JUMP)  ; LAB_00557e10
    CMP EDX,0x1                         ; 00557cc0
    JNZ 0x00557d60                      ; 00557cc3
        ;   XREF to: 00557d60 (CONDITIONAL_JUMP)  ; LAB_00557d60
    CMP ESI,EDX                         ; 00557cc9
    JNZ 0x00557d10                      ; 00557ccb
        ;   XREF to: 00557d10 (CONDITIONAL_JUMP)  ; LAB_00557d10
    XOR EDX,EDX                         ; 00557ccd
    TEST EBX,EBX                        ; 00557ccf
    JLE 0x005579d2                      ; 00557cd1
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    FLD float ptr [ESP + 0x18]          ; 00557cd7
    MOV ESI,dword ptr [ESP + 0x84]      ; 00557cdb
    MOV dword ptr [ESP + 0x44],EDX      ; 00557ce2
        ;   Label: LAB_00557ce2
    FILD dword ptr [ESP + 0x44]         ; 00557ce6
    FMUL ST1                            ; 00557cea
    CALL crt_math.c_round_FUN_005a3120  ; 00557cec
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x28]        ; 00557cf1
    MOV ECX,dword ptr [ESP + 0x28]      ; 00557cf5
    MOVSX ECX,word ptr [EAX + ECX*0x2]  ; 00557cf9
    INC ESI                             ; 00557cfd
    SAR ECX,0x8                         ; 00557cfe
    INC EDX                             ; 00557d01
    MOV byte ptr [ESI + -0x1],CL        ; 00557d02
    CMP EDX,EBX                         ; 00557d05
    JL 0x00557ce2                       ; 00557d07
        ;   XREF to: 00557ce2 (CONDITIONAL_JUMP)  ; LAB_00557ce2
    FSTP ST0                            ; 00557d09
    JMP 0x005579d2                      ; 00557d0b
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    XOR ESI,ESI                         ; 00557d10
        ;   Label: LAB_00557d10
    TEST EBX,EBX                        ; 00557d12
    JLE 0x005579d2                      ; 00557d14
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    FLD float ptr [ESP + 0x18]          ; 00557d1a
    MOV EDX,dword ptr [ESP + 0x84]      ; 00557d1e
    MOV dword ptr [ESP + 0x48],ESI      ; 00557d25
        ;   Label: LAB_00557d25
    FILD dword ptr [ESP + 0x48]         ; 00557d29
    FMUL ST1                            ; 00557d2d
    CALL crt_math.c_round_FUN_005a3120  ; 00557d2f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x2c]        ; 00557d34
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00557d38
    MOVSX ECX,word ptr [EAX + ECX*0x2]  ; 00557d3c
    SAR ECX,0x8                         ; 00557d40
    MOV dword ptr [ESP + 0x44],ECX      ; 00557d43
    ADD EDX,0x2                         ; 00557d47
    MOV CL,byte ptr [ESP + 0x44]        ; 00557d4a
    MOV byte ptr [EDX + -0x1],CL        ; 00557d4e
    INC ESI                             ; 00557d51
    MOV byte ptr [EDX + -0x2],CL        ; 00557d52
    CMP ESI,EBX                         ; 00557d55
    JL 0x00557d25                       ; 00557d57
        ;   XREF to: 00557d25 (CONDITIONAL_JUMP)  ; LAB_00557d25
    FSTP ST0                            ; 00557d59
    JMP 0x005579d2                      ; 00557d5b
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    CMP ESI,0x1                         ; 00557d60
        ;   Label: LAB_00557d60
    JNZ 0x00557db0                      ; 00557d63
        ;   XREF to: 00557db0 (CONDITIONAL_JUMP)  ; LAB_00557db0
    XOR EDX,EDX                         ; 00557d65
    TEST EBX,EBX                        ; 00557d67
    JLE 0x005579d2                      ; 00557d69
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    FLD float ptr [ESP + 0x18]          ; 00557d6f
    MOV ESI,dword ptr [ESP + 0x84]      ; 00557d73
    MOV dword ptr [ESP + 0x48],EDX      ; 00557d7a
        ;   Label: LAB_00557d7a
    FILD dword ptr [ESP + 0x48]         ; 00557d7e
    FMUL ST1                            ; 00557d82
    CALL crt_math.c_round_FUN_005a3120  ; 00557d84
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x30]        ; 00557d89
    MOV ECX,dword ptr [ESP + 0x30]      ; 00557d8d
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 00557d91
    SAR EDI,0x10                        ; 00557d94
    MOVSX ECX,word ptr [EAX + ECX*0x4]  ; 00557d97
    ADD ECX,EDI                         ; 00557d9b
    INC ESI                             ; 00557d9d
    SAR ECX,0x9                         ; 00557d9e
    INC EDX                             ; 00557da1
    MOV byte ptr [ESI + -0x1],CL        ; 00557da2
    CMP EDX,EBX                         ; 00557da5
    JL 0x00557d7a                       ; 00557da7
        ;   XREF to: 00557d7a (CONDITIONAL_JUMP)  ; LAB_00557d7a
    FSTP ST0                            ; 00557da9
    JMP 0x005579d2                      ; 00557dab
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    XOR EDX,EDX                         ; 00557db0
        ;   Label: LAB_00557db0
    TEST EBX,EBX                        ; 00557db2
    JLE 0x005579d2                      ; 00557db4
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    FLD float ptr [ESP + 0x18]          ; 00557dba
    MOV ESI,dword ptr [ESP + 0x84]      ; 00557dbe
    MOV dword ptr [ESP + 0x48],EDX      ; 00557dc5
        ;   Label: LAB_00557dc5
    FILD dword ptr [ESP + 0x48]         ; 00557dc9
    FMUL ST1                            ; 00557dcd
    CALL crt_math.c_round_FUN_005a3120  ; 00557dcf
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x34]        ; 00557dd4
    MOV EDI,dword ptr [ESP + 0x34]      ; 00557dd8
    MOVSX ECX,word ptr [EAX + EDI*0x4]  ; 00557ddc
    SAR ECX,0x8                         ; 00557de0
    MOV dword ptr [ESP + 0x44],ECX      ; 00557de3
    MOV CL,byte ptr [ESP + 0x44]        ; 00557de7
    MOV byte ptr [ESI],CL               ; 00557deb
    MOV ECX,dword ptr [EAX + EDI*0x4]   ; 00557ded
    SAR ECX,0x10                        ; 00557df0
    SAR ECX,0x8                         ; 00557df3
    MOV dword ptr [ESP + 0x44],ECX      ; 00557df6
    ADD ESI,0x2                         ; 00557dfa
    MOV CL,byte ptr [ESP + 0x44]        ; 00557dfd
    INC EDX                             ; 00557e01
    MOV byte ptr [ESI + -0x1],CL        ; 00557e02
    CMP EDX,EBX                         ; 00557e05
    JL 0x00557dc5                       ; 00557e07
        ;   XREF to: 00557dc5 (CONDITIONAL_JUMP)  ; LAB_00557dc5
    FSTP ST0                            ; 00557e09
    JMP 0x005579d2                      ; 00557e0b
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    CMP EDX,0x1                         ; 00557e10
        ;   Label: LAB_00557e10
    JNZ 0x00557ea7                      ; 00557e13
        ;   XREF to: 00557ea7 (CONDITIONAL_JUMP)  ; LAB_00557ea7
    CMP ESI,EDX                         ; 00557e19
    JNZ 0x00557e60                      ; 00557e1b
        ;   XREF to: 00557e60 (CONDITIONAL_JUMP)  ; LAB_00557e60
    XOR EDX,EDX                         ; 00557e1d
    TEST EBX,EBX                        ; 00557e1f
    JLE 0x005579d2                      ; 00557e21
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    FLD float ptr [ESP + 0x18]          ; 00557e27
    MOV ESI,dword ptr [ESP + 0x84]      ; 00557e2b
    MOV dword ptr [ESP + 0x44],EDX      ; 00557e32
        ;   Label: LAB_00557e32
    FILD dword ptr [ESP + 0x44]         ; 00557e36
    FMUL ST1                            ; 00557e3a
    CALL crt_math.c_round_FUN_005a3120  ; 00557e3c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x38]        ; 00557e41
    MOV ECX,dword ptr [ESP + 0x38]      ; 00557e45
    ADD ESI,0x2                         ; 00557e49
    MOV CX,word ptr [EAX + ECX*0x2]     ; 00557e4c
    INC EDX                             ; 00557e50
    MOV word ptr [ESI + -0x2],CX        ; 00557e51
    CMP EDX,EBX                         ; 00557e55
    JL 0x00557e32                       ; 00557e57
        ;   XREF to: 00557e32 (CONDITIONAL_JUMP)  ; LAB_00557e32
    FSTP ST0                            ; 00557e59
    JMP 0x005579d2                      ; 00557e5b
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    XOR ESI,ESI                         ; 00557e60
        ;   Label: LAB_00557e60
    TEST EBX,EBX                        ; 00557e62
    JLE 0x005579d2                      ; 00557e64
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    FLD float ptr [ESP + 0x18]          ; 00557e6a
    MOV EDX,dword ptr [ESP + 0x84]      ; 00557e6e
    MOV dword ptr [ESP + 0x44],ESI      ; 00557e75
        ;   Label: LAB_00557e75
    FILD dword ptr [ESP + 0x44]         ; 00557e79
    FMUL ST1                            ; 00557e7d
    CALL crt_math.c_round_FUN_005a3120  ; 00557e7f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x3c]        ; 00557e84
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00557e88
    ADD EDX,0x4                         ; 00557e8c
    MOV CX,word ptr [EAX + ECX*0x2]     ; 00557e8f
    MOV word ptr [EDX + -0x2],CX        ; 00557e93
    INC ESI                             ; 00557e97
    MOV word ptr [EDX + -0x4],CX        ; 00557e98
    CMP ESI,EBX                         ; 00557e9c
    JL 0x00557e75                       ; 00557e9e
        ;   XREF to: 00557e75 (CONDITIONAL_JUMP)  ; LAB_00557e75
    FSTP ST0                            ; 00557ea0
    JMP 0x005579d2                      ; 00557ea2
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    CMP ESI,0x1                         ; 00557ea7
        ;   Label: LAB_00557ea7
    JNZ 0x00557ef9                      ; 00557eaa
        ;   XREF to: 00557ef9 (CONDITIONAL_JUMP)  ; LAB_00557ef9
    XOR EDX,EDX                         ; 00557eac
    TEST EBX,EBX                        ; 00557eae
    JLE 0x005579d2                      ; 00557eb0
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    FLD float ptr [ESP + 0x18]          ; 00557eb6
    MOV ESI,dword ptr [ESP + 0x84]      ; 00557eba
    MOV dword ptr [ESP + 0x44],EDX      ; 00557ec1
        ;   Label: LAB_00557ec1
    FILD dword ptr [ESP + 0x44]         ; 00557ec5
    FMUL ST1                            ; 00557ec9
    CALL crt_math.c_round_FUN_005a3120  ; 00557ecb
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x40]        ; 00557ed0
    MOV ECX,dword ptr [ESP + 0x40]      ; 00557ed4
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 00557ed8
    SAR EDI,0x10                        ; 00557edb
    MOVSX ECX,word ptr [EAX + ECX*0x4]  ; 00557ede
    ADD ECX,EDI                         ; 00557ee2
    ADD ESI,0x2                         ; 00557ee4
    SAR ECX,0x1                         ; 00557ee7
    INC EDX                             ; 00557ee9
    MOV word ptr [ESI + -0x2],CX        ; 00557eea
    CMP EDX,EBX                         ; 00557eee
    JL 0x00557ec1                       ; 00557ef0
        ;   XREF to: 00557ec1 (CONDITIONAL_JUMP)  ; LAB_00557ec1
    FSTP ST0                            ; 00557ef2
    JMP 0x005579d2                      ; 00557ef4
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    XOR ESI,ESI                         ; 00557ef9
        ;   Label: LAB_00557ef9
    TEST EBX,EBX                        ; 00557efb
    JLE 0x005579d2                      ; 00557efd
        ;   XREF to: 005579d2 (CONDITIONAL_JUMP)  ; LAB_005579d2
    FLD float ptr [ESP + 0x18]          ; 00557f03
    MOV EDX,dword ptr [ESP + 0x84]      ; 00557f07
    MOV dword ptr [ESP + 0x44],ESI      ; 00557f0e
        ;   Label: LAB_00557f0e
    FILD dword ptr [ESP + 0x44]         ; 00557f12
    FMUL ST1                            ; 00557f16
    CALL crt_math.c_round_FUN_005a3120  ; 00557f18
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x20]        ; 00557f1d
    MOV ECX,dword ptr [ESP + 0x20]      ; 00557f21
    MOV DI,word ptr [EAX + ECX*0x4]     ; 00557f25
    MOV word ptr [EDX],DI               ; 00557f29
    ADD EDX,0x4                         ; 00557f2c
    MOV CX,word ptr [EAX + ECX*0x4 + 0x2] ; 00557f2f
    INC ESI                             ; 00557f34
    MOV word ptr [EDX + -0x2],CX        ; 00557f35
    CMP ESI,EBX                         ; 00557f39
    JL 0x00557f0e                       ; 00557f3b
        ;   XREF to: 00557f0e (CONDITIONAL_JUMP)  ; LAB_00557f0e
    FSTP ST0                            ; 00557f3d
    JMP 0x005579d2                      ; 00557f3f
        ;   XREF to: 005579d2 (UNCONDITIONAL_JUMP)  ; LAB_005579d2
    PUSH EBX                            ; 00557f44
        ;   Label: LAB_00557f44
    MOV EAX,dword ptr [ESP + 0x88]      ; 00557f45
    PUSH EAX                            ; 00557f4c
    CALL sound_sndmain.cpp_convert16BitAudioSignedness_FUN_00557930 ; 00557f4d
        ;   XREF to: 00557930 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_convert16BitAudioSignedness_FUN_00557930(short * buffer, int num_samples)
    ADD ESP,0x8                         ; 00557f52
    ADD ESP,0x4c                        ; 00557f55
    POP EBP                             ; 00557f58
    POP EDI                             ; 00557f59
    POP ESI                             ; 00557f5a
    POP EBX                             ; 00557f5b
    RET                                 ; 00557f5c

