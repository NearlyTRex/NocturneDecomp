; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_resampleAndConvertAudio_FUN_005aa7f0(int src_bit_depth,int src_channels,int src_sample_rate,int src_signed,short *src_buffer,int dst_bit_depth,int dst_channels,int dst_sample_rate,int dst_signed,short *dst_buffer,int num_output_samples)
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
;   sound_sndwav.cpp_CWavInDevice_poll_FUN_005b12e0 at 005b13bf
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   sound_sndmain.cpp_convert16BitAudioSignedness_FUN_005aa7d0
;   sound_sndmain.cpp_convert8BitAudioSignedness_FUN_005aa7b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa7f0
        ;   Label: sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0
    PUSH ESI                            ; 005aa7f1
    PUSH EDI                            ; 005aa7f2
    PUSH EBP                            ; 005aa7f3
    SUB ESP,0x4c                        ; 005aa7f4
    MOV EDX,dword ptr [ESP + 0x64]      ; 005aa7f7
    MOV ECX,dword ptr [ESP + 0x68]      ; 005aa7fb
    MOV EDI,dword ptr [ESP + 0x70]      ; 005aa7ff
    MOV ESI,dword ptr [ESP + 0x78]      ; 005aa803
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005aa807
    MOV EBX,dword ptr [ESP + 0x88]      ; 005aa80b
    CMP EBX,0x1                         ; 005aa812
    JL 0x005aa8b0                       ; 005aa815
        ;   XREF to: 005aa8b0 (CONDITIONAL_JUMP)  ; LAB_005aa8b0
    CMP ECX,EAX                         ; 005aa81b
    JNZ 0x005aa8b8                      ; 005aa81d
        ;   XREF to: 005aa8b8 (CONDITIONAL_JUMP)  ; LAB_005aa8b8
    MOV EBP,dword ptr [ESP + 0x60]      ; 005aa823
    CMP EBP,dword ptr [ESP + 0x74]      ; 005aa827
    JNZ 0x005aa8b8                      ; 005aa82b
        ;   XREF to: 005aa8b8 (CONDITIONAL_JUMP)  ; LAB_005aa8b8
    CMP EDX,ESI                         ; 005aa831
    JNZ 0x005aa8b8                      ; 005aa833
        ;   XREF to: 005aa8b8 (CONDITIONAL_JUMP)  ; LAB_005aa8b8
    CMP EDI,dword ptr [ESP + 0x84]      ; 005aa839
    JZ 0x005aa872                       ; 005aa840
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    MOV EDX,EBP                         ; 005aa842
    MOV EAX,EBP                         ; 005aa844
    SAR EDX,0x1f                        ; 005aa846
    SHL EDX,0x3                         ; 005aa849
    SBB EAX,EDX                         ; 005aa84c
    SAR EAX,0x3                         ; 005aa84e
    MOV ECX,EAX                         ; 005aa851
    IMUL ECX,EBX                        ; 005aa853
    IMUL ECX,ESI                        ; 005aa856
    MOV ESI,EDI                         ; 005aa859
    MOV EDI,dword ptr [ESP + 0x84]      ; 005aa85b
    PUSH EDI                            ; 005aa862
    MOV EAX,ECX                         ; 005aa863
    SHR ECX,0x2                         ; 005aa865
    MOVSD.REP ES:EDI,ESI                ; 005aa868
    MOV CL,AL                           ; 005aa86a
    AND CL,0x3                          ; 005aa86c
    MOVSB.REP ES:EDI,ESI                ; 005aa86f
    POP EDI                             ; 005aa871
    CMP dword ptr [ESP + 0x6c],0x0      ; 005aa872
        ;   Label: LAB_005aa872
    JZ 0x005aa883                       ; 005aa877
        ;   XREF to: 005aa883 (CONDITIONAL_JUMP)  ; LAB_005aa883
    CMP dword ptr [ESP + 0x80],0x0      ; 005aa879
    JZ 0x005aa894                       ; 005aa881
        ;   XREF to: 005aa894 (CONDITIONAL_JUMP)  ; LAB_005aa894
    CMP dword ptr [ESP + 0x6c],0x0      ; 005aa883
        ;   Label: LAB_005aa883
    JNZ 0x005aa8b0                      ; 005aa888
        ;   XREF to: 005aa8b0 (CONDITIONAL_JUMP)  ; LAB_005aa8b0
    CMP dword ptr [ESP + 0x80],0x0      ; 005aa88a
    JZ 0x005aa8b0                       ; 005aa892
        ;   XREF to: 005aa8b0 (CONDITIONAL_JUMP)  ; LAB_005aa8b0
    CMP dword ptr [ESP + 0x74],0x8      ; 005aa894
        ;   Label: LAB_005aa894
    JNZ 0x005aade4                      ; 005aa899
        ;   XREF to: 005aade4 (CONDITIONAL_JUMP)  ; LAB_005aade4
    PUSH EBX                            ; 005aa89f
    MOV EDX,dword ptr [ESP + 0x88]      ; 005aa8a0
    PUSH EDX                            ; 005aa8a7
    CALL sound_sndmain.cpp_convert8BitAudioSignedness_FUN_005aa7b0 ; 005aa8a8
        ;   XREF to: 005aa7b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_convert8BitAudioSignedness_FUN_005aa7b0(byte * buffer, int num_bytes)
    ADD ESP,0x8                         ; 005aa8ad
    ADD ESP,0x4c                        ; 005aa8b0
        ;   Label: LAB_005aa8b0
    POP EBP                             ; 005aa8b3
    POP EDI                             ; 005aa8b4
    POP ESI                             ; 005aa8b5
    POP EBX                             ; 005aa8b6
    RET                                 ; 005aa8b7
    MOV dword ptr [ESP + 0x44],ECX      ; 005aa8b8
        ;   Label: LAB_005aa8b8
    MOV dword ptr [ESP + 0x48],EAX      ; 005aa8bc
    FILD dword ptr [ESP + 0x44]         ; 005aa8c0
    FILD dword ptr [ESP + 0x48]         ; 005aa8c4
    FDIVP                               ; 005aa8c8
    MOV ECX,dword ptr [ESP + 0x60]      ; 005aa8ca
    FSTP float ptr [ESP + 0x18]         ; 005aa8ce
    CMP ECX,0x8                         ; 005aa8d2
    JNZ 0x005aab53                      ; 005aa8d5
        ;   XREF to: 005aab53 (CONDITIONAL_JUMP)  ; LAB_005aab53
    MOV EBP,dword ptr [ESP + 0x74]      ; 005aa8db
    MOV EAX,EDI                         ; 005aa8df
    CMP EBP,ECX                         ; 005aa8e1
    JNZ 0x005aaa0d                      ; 005aa8e3
        ;   XREF to: 005aaa0d (CONDITIONAL_JUMP)  ; LAB_005aaa0d
    MOV ECX,dword ptr [ESP + 0x84]      ; 005aa8e9
    CMP EDX,0x1                         ; 005aa8f0
    JNZ 0x005aa977                      ; 005aa8f3
        ;   XREF to: 005aa977 (CONDITIONAL_JUMP)  ; LAB_005aa977
    CMP ESI,EDX                         ; 005aa8f9
    JNZ 0x005aa935                      ; 005aa8fb
        ;   XREF to: 005aa935 (CONDITIONAL_JUMP)  ; LAB_005aa935
    XOR EDX,EDX                         ; 005aa8fd
    CMP EDX,EBX                         ; 005aa8ff
    JGE 0x005aa872                      ; 005aa901
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    FLD float ptr [ESP + 0x18]          ; 005aa907
    MOV ESI,ECX                         ; 005aa90b
    MOV dword ptr [ESP + 0x48],EDX      ; 005aa90d
        ;   Label: LAB_005aa90d
    FILD dword ptr [ESP + 0x48]         ; 005aa911
    FMUL ST1                            ; 005aa915
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aa917
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 005aa91c
    MOV EDI,dword ptr [ESP]             ; 005aa91f
    INC ESI                             ; 005aa922
    MOV CL,byte ptr [EDI + EAX*0x1]     ; 005aa923
    INC EDX                             ; 005aa926
    MOV byte ptr [ESI + -0x1],CL        ; 005aa927
    CMP EDX,EBX                         ; 005aa92a
    JL 0x005aa90d                       ; 005aa92c
        ;   XREF to: 005aa90d (CONDITIONAL_JUMP)  ; LAB_005aa90d
    FSTP ST0                            ; 005aa92e
    JMP 0x005aa872                      ; 005aa930
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    XOR ESI,ESI                         ; 005aa935
        ;   Label: LAB_005aa935
    CMP ESI,EBX                         ; 005aa937
    JGE 0x005aa872                      ; 005aa939
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    LEA EDX,[ESI + ESI*0x1]             ; 005aa93f
    FLD float ptr [ESP + 0x18]          ; 005aa942
    ADD EDX,ECX                         ; 005aa946
    MOV dword ptr [ESP + 0x44],ESI      ; 005aa948
        ;   Label: LAB_005aa948
    FILD dword ptr [ESP + 0x44]         ; 005aa94c
    FMUL ST1                            ; 005aa950
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aa952
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x4]         ; 005aa957
    MOV ECX,dword ptr [ESP + 0x4]       ; 005aa95b
    ADD EDX,0x2                         ; 005aa95f
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 005aa962
    MOV byte ptr [EDX + -0x1],CL        ; 005aa965
    INC ESI                             ; 005aa968
    MOV byte ptr [EDX + -0x2],CL        ; 005aa969
    CMP ESI,EBX                         ; 005aa96c
    JL 0x005aa948                       ; 005aa96e
        ;   XREF to: 005aa948 (CONDITIONAL_JUMP)  ; LAB_005aa948
    FSTP ST0                            ; 005aa970
    JMP 0x005aa872                      ; 005aa972
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    CMP ESI,0x1                         ; 005aa977
        ;   Label: LAB_005aa977
    JNZ 0x005aa9c8                      ; 005aa97a
        ;   XREF to: 005aa9c8 (CONDITIONAL_JUMP)  ; LAB_005aa9c8
    XOR EDX,EDX                         ; 005aa97c
    CMP EDX,EBX                         ; 005aa97e
    JGE 0x005aa872                      ; 005aa980
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    FLD float ptr [ESP + 0x18]          ; 005aa986
    MOV ESI,ECX                         ; 005aa98a
    MOV dword ptr [ESP + 0x44],EDX      ; 005aa98c
        ;   Label: LAB_005aa98c
    FILD dword ptr [ESP + 0x44]         ; 005aa990
    FMUL ST1                            ; 005aa994
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aa996
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 005aa99b
    MOV ECX,dword ptr [ESP + 0x8]       ; 005aa99f
    MOVSX EDI,byte ptr [EAX + ECX*0x2 + 0x1] ; 005aa9a3
    MOVSX ECX,byte ptr [EAX + ECX*0x2]  ; 005aa9a8
    ADD ECX,EDI                         ; 005aa9ac
    SAR ECX,0x1                         ; 005aa9ae
    MOV dword ptr [ESP + 0x44],ECX      ; 005aa9b0
    INC ESI                             ; 005aa9b4
    MOV CL,byte ptr [ESP + 0x44]        ; 005aa9b5
    INC EDX                             ; 005aa9b9
    MOV byte ptr [ESI + -0x1],CL        ; 005aa9ba
    CMP EDX,EBX                         ; 005aa9bd
    JL 0x005aa98c                       ; 005aa9bf
        ;   XREF to: 005aa98c (CONDITIONAL_JUMP)  ; LAB_005aa98c
    FSTP ST0                            ; 005aa9c1
    JMP 0x005aa872                      ; 005aa9c3
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    XOR EDX,EDX                         ; 005aa9c8
        ;   Label: LAB_005aa9c8
    CMP EDX,EBX                         ; 005aa9ca
    JGE 0x005aa872                      ; 005aa9cc
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    LEA ESI,[EDX + EDX*0x1]             ; 005aa9d2
    FLD float ptr [ESP + 0x18]          ; 005aa9d5
    ADD ESI,ECX                         ; 005aa9d9
    MOV dword ptr [ESP + 0x44],EDX      ; 005aa9db
        ;   Label: LAB_005aa9db
    FILD dword ptr [ESP + 0x44]         ; 005aa9df
    FMUL ST1                            ; 005aa9e3
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aa9e5
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc]         ; 005aa9ea
    MOV EDI,dword ptr [ESP + 0xc]       ; 005aa9ee
    MOV CL,byte ptr [EAX + EDI*0x2]     ; 005aa9f2
    MOV byte ptr [ESI],CL               ; 005aa9f5
    ADD ESI,0x2                         ; 005aa9f7
    MOV CL,byte ptr [EAX + EDI*0x2 + 0x1] ; 005aa9fa
    INC EDX                             ; 005aa9fe
    MOV byte ptr [ESI + -0x1],CL        ; 005aa9ff
    CMP EDX,EBX                         ; 005aaa02
    JL 0x005aa9db                       ; 005aaa04
        ;   XREF to: 005aa9db (CONDITIONAL_JUMP)  ; LAB_005aa9db
    FSTP ST0                            ; 005aaa06
    JMP 0x005aa872                      ; 005aaa08
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    MOV ECX,dword ptr [ESP + 0x84]      ; 005aaa0d
        ;   Label: LAB_005aaa0d
    CMP EDX,0x1                         ; 005aaa14
    JNZ 0x005aaab3                      ; 005aaa17
        ;   XREF to: 005aaab3 (CONDITIONAL_JUMP)  ; LAB_005aaab3
    CMP ESI,EDX                         ; 005aaa1d
    JNZ 0x005aaa66                      ; 005aaa1f
        ;   XREF to: 005aaa66 (CONDITIONAL_JUMP)  ; LAB_005aaa66
    XOR EDX,EDX                         ; 005aaa21
    CMP EDX,EBX                         ; 005aaa23
    JGE 0x005aa872                      ; 005aaa25
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    LEA ESI,[EDX + EDX*0x1]             ; 005aaa2b
    FLD float ptr [ESP + 0x18]          ; 005aaa2e
    ADD ESI,ECX                         ; 005aaa32
    MOV dword ptr [ESP + 0x44],EDX      ; 005aaa34
        ;   Label: LAB_005aaa34
    FILD dword ptr [ESP + 0x44]         ; 005aaa38
    FMUL ST1                            ; 005aaa3c
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aaa3e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x10]        ; 005aaa43
    MOV ECX,dword ptr [ESP + 0x10]      ; 005aaa47
    MOVSX CX,byte ptr [ECX + EAX*0x1]   ; 005aaa4b
    ADD ESI,0x2                         ; 005aaa50
    SHL ECX,0x8                         ; 005aaa53
    INC EDX                             ; 005aaa56
    MOV word ptr [ESI + -0x2],CX        ; 005aaa57
    CMP EDX,EBX                         ; 005aaa5b
    JL 0x005aaa34                       ; 005aaa5d
        ;   XREF to: 005aaa34 (CONDITIONAL_JUMP)  ; LAB_005aaa34
    FSTP ST0                            ; 005aaa5f
    JMP 0x005aa872                      ; 005aaa61
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    XOR ESI,ESI                         ; 005aaa66
        ;   Label: LAB_005aaa66
    CMP ESI,EBX                         ; 005aaa68
    JGE 0x005aa872                      ; 005aaa6a
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    LEA EDX,[ESI*0x4 + 0x0]             ; 005aaa70
    FLD float ptr [ESP + 0x18]          ; 005aaa77
    ADD EDX,ECX                         ; 005aaa7b
    MOV dword ptr [ESP + 0x48],ESI      ; 005aaa7d
        ;   Label: LAB_005aaa7d
    FILD dword ptr [ESP + 0x48]         ; 005aaa81
    FMUL ST1                            ; 005aaa85
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aaa87
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x14]        ; 005aaa8c
    MOV ECX,dword ptr [ESP + 0x14]      ; 005aaa90
    MOVSX CX,byte ptr [ECX + EAX*0x1]   ; 005aaa94
    ADD EDX,0x4                         ; 005aaa99
    SHL ECX,0x8                         ; 005aaa9c
    MOV word ptr [EDX + -0x2],CX        ; 005aaa9f
    INC ESI                             ; 005aaaa3
    MOV word ptr [EDX + -0x4],CX        ; 005aaaa4
    CMP ESI,EBX                         ; 005aaaa8
    JL 0x005aaa7d                       ; 005aaaaa
        ;   XREF to: 005aaa7d (CONDITIONAL_JUMP)  ; LAB_005aaa7d
    FSTP ST0                            ; 005aaaac
    JMP 0x005aa872                      ; 005aaaae
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    CMP ESI,0x1                         ; 005aaab3
        ;   Label: LAB_005aaab3
    JNZ 0x005aab05                      ; 005aaab6
        ;   XREF to: 005aab05 (CONDITIONAL_JUMP)  ; LAB_005aab05
    XOR EDX,EDX                         ; 005aaab8
    TEST EBX,EBX                        ; 005aaaba
    JLE 0x005aa872                      ; 005aaabc
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    FLD float ptr [ESP + 0x18]          ; 005aaac2
    MOV ESI,ECX                         ; 005aaac6
    MOV dword ptr [ESP + 0x48],EDX      ; 005aaac8
        ;   Label: LAB_005aaac8
    FILD dword ptr [ESP + 0x48]         ; 005aaacc
    FMUL ST1                            ; 005aaad0
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aaad2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x1c]        ; 005aaad7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005aaadb
    MOVSX DI,byte ptr [EAX + ECX*0x2 + 0x1] ; 005aaadf
    ADD ESI,0x2                         ; 005aaae5
    MOVSX CX,byte ptr [EAX + ECX*0x2]   ; 005aaae8
    SHL EDI,0x7                         ; 005aaaed
    SHL ECX,0x7                         ; 005aaaf0
    INC EDX                             ; 005aaaf3
    ADD ECX,EDI                         ; 005aaaf4
    MOV word ptr [ESI + -0x2],CX        ; 005aaaf6
    CMP EDX,EBX                         ; 005aaafa
    JL 0x005aaac8                       ; 005aaafc
        ;   XREF to: 005aaac8 (CONDITIONAL_JUMP)  ; LAB_005aaac8
    FSTP ST0                            ; 005aaafe
    JMP 0x005aa872                      ; 005aab00
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    XOR ESI,ESI                         ; 005aab05
        ;   Label: LAB_005aab05
    TEST EBX,EBX                        ; 005aab07
    JLE 0x005aa872                      ; 005aab09
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    FLD float ptr [ESP + 0x18]          ; 005aab0f
    MOV EDX,ECX                         ; 005aab13
    MOV dword ptr [ESP + 0x48],ESI      ; 005aab15
        ;   Label: LAB_005aab15
    FILD dword ptr [ESP + 0x48]         ; 005aab19
    FMUL ST1                            ; 005aab1d
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aab1f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x24]        ; 005aab24
    MOV ECX,dword ptr [ESP + 0x24]      ; 005aab28
    MOVSX DI,byte ptr [EAX + ECX*0x2]   ; 005aab2c
    SHL EDI,0x8                         ; 005aab31
    MOV word ptr [EDX],DI               ; 005aab34
    ADD EDX,0x4                         ; 005aab37
    MOVSX CX,byte ptr [EAX + ECX*0x2 + 0x1] ; 005aab3a
    INC ESI                             ; 005aab40
    SHL ECX,0x8                         ; 005aab41
    MOV word ptr [EDX + -0x2],CX        ; 005aab44
    CMP ESI,EBX                         ; 005aab48
    JL 0x005aab15                       ; 005aab4a
        ;   XREF to: 005aab15 (CONDITIONAL_JUMP)  ; LAB_005aab15
    FSTP ST0                            ; 005aab4c
    JMP 0x005aa872                      ; 005aab4e
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    MOV EAX,EDI                         ; 005aab53
        ;   Label: LAB_005aab53
    CMP dword ptr [ESP + 0x74],0x8      ; 005aab55
    JNZ 0x005aacb0                      ; 005aab5a
        ;   XREF to: 005aacb0 (CONDITIONAL_JUMP)  ; LAB_005aacb0
    CMP EDX,0x1                         ; 005aab60
    JNZ 0x005aac00                      ; 005aab63
        ;   XREF to: 005aac00 (CONDITIONAL_JUMP)  ; LAB_005aac00
    CMP ESI,EDX                         ; 005aab69
    JNZ 0x005aabb0                      ; 005aab6b
        ;   XREF to: 005aabb0 (CONDITIONAL_JUMP)  ; LAB_005aabb0
    XOR EDX,EDX                         ; 005aab6d
    TEST EBX,EBX                        ; 005aab6f
    JLE 0x005aa872                      ; 005aab71
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    FLD float ptr [ESP + 0x18]          ; 005aab77
    MOV ESI,dword ptr [ESP + 0x84]      ; 005aab7b
    MOV dword ptr [ESP + 0x44],EDX      ; 005aab82
        ;   Label: LAB_005aab82
    FILD dword ptr [ESP + 0x44]         ; 005aab86
    FMUL ST1                            ; 005aab8a
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aab8c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x28]        ; 005aab91
    MOV ECX,dword ptr [ESP + 0x28]      ; 005aab95
    MOVSX ECX,word ptr [EAX + ECX*0x2]  ; 005aab99
    INC ESI                             ; 005aab9d
    SAR ECX,0x8                         ; 005aab9e
    INC EDX                             ; 005aaba1
    MOV byte ptr [ESI + -0x1],CL        ; 005aaba2
    CMP EDX,EBX                         ; 005aaba5
    JL 0x005aab82                       ; 005aaba7
        ;   XREF to: 005aab82 (CONDITIONAL_JUMP)  ; LAB_005aab82
    FSTP ST0                            ; 005aaba9
    JMP 0x005aa872                      ; 005aabab
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    XOR ESI,ESI                         ; 005aabb0
        ;   Label: LAB_005aabb0
    TEST EBX,EBX                        ; 005aabb2
    JLE 0x005aa872                      ; 005aabb4
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    FLD float ptr [ESP + 0x18]          ; 005aabba
    MOV EDX,dword ptr [ESP + 0x84]      ; 005aabbe
    MOV dword ptr [ESP + 0x48],ESI      ; 005aabc5
        ;   Label: LAB_005aabc5
    FILD dword ptr [ESP + 0x48]         ; 005aabc9
    FMUL ST1                            ; 005aabcd
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aabcf
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x2c]        ; 005aabd4
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005aabd8
    MOVSX ECX,word ptr [EAX + ECX*0x2]  ; 005aabdc
    SAR ECX,0x8                         ; 005aabe0
    MOV dword ptr [ESP + 0x44],ECX      ; 005aabe3
    ADD EDX,0x2                         ; 005aabe7
    MOV CL,byte ptr [ESP + 0x44]        ; 005aabea
    MOV byte ptr [EDX + -0x1],CL        ; 005aabee
    INC ESI                             ; 005aabf1
    MOV byte ptr [EDX + -0x2],CL        ; 005aabf2
    CMP ESI,EBX                         ; 005aabf5
    JL 0x005aabc5                       ; 005aabf7
        ;   XREF to: 005aabc5 (CONDITIONAL_JUMP)  ; LAB_005aabc5
    FSTP ST0                            ; 005aabf9
    JMP 0x005aa872                      ; 005aabfb
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    CMP ESI,0x1                         ; 005aac00
        ;   Label: LAB_005aac00
    JNZ 0x005aac50                      ; 005aac03
        ;   XREF to: 005aac50 (CONDITIONAL_JUMP)  ; LAB_005aac50
    XOR EDX,EDX                         ; 005aac05
    TEST EBX,EBX                        ; 005aac07
    JLE 0x005aa872                      ; 005aac09
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    FLD float ptr [ESP + 0x18]          ; 005aac0f
    MOV ESI,dword ptr [ESP + 0x84]      ; 005aac13
    MOV dword ptr [ESP + 0x48],EDX      ; 005aac1a
        ;   Label: LAB_005aac1a
    FILD dword ptr [ESP + 0x48]         ; 005aac1e
    FMUL ST1                            ; 005aac22
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aac24
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x30]        ; 005aac29
    MOV ECX,dword ptr [ESP + 0x30]      ; 005aac2d
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 005aac31
    SAR EDI,0x10                        ; 005aac34
    MOVSX ECX,word ptr [EAX + ECX*0x4]  ; 005aac37
    ADD ECX,EDI                         ; 005aac3b
    INC ESI                             ; 005aac3d
    SAR ECX,0x9                         ; 005aac3e
    INC EDX                             ; 005aac41
    MOV byte ptr [ESI + -0x1],CL        ; 005aac42
    CMP EDX,EBX                         ; 005aac45
    JL 0x005aac1a                       ; 005aac47
        ;   XREF to: 005aac1a (CONDITIONAL_JUMP)  ; LAB_005aac1a
    FSTP ST0                            ; 005aac49
    JMP 0x005aa872                      ; 005aac4b
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    XOR EDX,EDX                         ; 005aac50
        ;   Label: LAB_005aac50
    TEST EBX,EBX                        ; 005aac52
    JLE 0x005aa872                      ; 005aac54
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    FLD float ptr [ESP + 0x18]          ; 005aac5a
    MOV ESI,dword ptr [ESP + 0x84]      ; 005aac5e
    MOV dword ptr [ESP + 0x48],EDX      ; 005aac65
        ;   Label: LAB_005aac65
    FILD dword ptr [ESP + 0x48]         ; 005aac69
    FMUL ST1                            ; 005aac6d
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aac6f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x34]        ; 005aac74
    MOV EDI,dword ptr [ESP + 0x34]      ; 005aac78
    MOVSX ECX,word ptr [EAX + EDI*0x4]  ; 005aac7c
    SAR ECX,0x8                         ; 005aac80
    MOV dword ptr [ESP + 0x44],ECX      ; 005aac83
    MOV CL,byte ptr [ESP + 0x44]        ; 005aac87
    MOV byte ptr [ESI],CL               ; 005aac8b
    MOV ECX,dword ptr [EAX + EDI*0x4]   ; 005aac8d
    SAR ECX,0x10                        ; 005aac90
    SAR ECX,0x8                         ; 005aac93
    MOV dword ptr [ESP + 0x44],ECX      ; 005aac96
    ADD ESI,0x2                         ; 005aac9a
    MOV CL,byte ptr [ESP + 0x44]        ; 005aac9d
    INC EDX                             ; 005aaca1
    MOV byte ptr [ESI + -0x1],CL        ; 005aaca2
    CMP EDX,EBX                         ; 005aaca5
    JL 0x005aac65                       ; 005aaca7
        ;   XREF to: 005aac65 (CONDITIONAL_JUMP)  ; LAB_005aac65
    FSTP ST0                            ; 005aaca9
    JMP 0x005aa872                      ; 005aacab
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    CMP EDX,0x1                         ; 005aacb0
        ;   Label: LAB_005aacb0
    JNZ 0x005aad47                      ; 005aacb3
        ;   XREF to: 005aad47 (CONDITIONAL_JUMP)  ; LAB_005aad47
    CMP ESI,EDX                         ; 005aacb9
    JNZ 0x005aad00                      ; 005aacbb
        ;   XREF to: 005aad00 (CONDITIONAL_JUMP)  ; LAB_005aad00
    XOR EDX,EDX                         ; 005aacbd
    TEST EBX,EBX                        ; 005aacbf
    JLE 0x005aa872                      ; 005aacc1
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    FLD float ptr [ESP + 0x18]          ; 005aacc7
    MOV ESI,dword ptr [ESP + 0x84]      ; 005aaccb
    MOV dword ptr [ESP + 0x44],EDX      ; 005aacd2
        ;   Label: LAB_005aacd2
    FILD dword ptr [ESP + 0x44]         ; 005aacd6
    FMUL ST1                            ; 005aacda
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aacdc
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x38]        ; 005aace1
    MOV ECX,dword ptr [ESP + 0x38]      ; 005aace5
    ADD ESI,0x2                         ; 005aace9
    MOV CX,word ptr [EAX + ECX*0x2]     ; 005aacec
    INC EDX                             ; 005aacf0
    MOV word ptr [ESI + -0x2],CX        ; 005aacf1
    CMP EDX,EBX                         ; 005aacf5
    JL 0x005aacd2                       ; 005aacf7
        ;   XREF to: 005aacd2 (CONDITIONAL_JUMP)  ; LAB_005aacd2
    FSTP ST0                            ; 005aacf9
    JMP 0x005aa872                      ; 005aacfb
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    XOR ESI,ESI                         ; 005aad00
        ;   Label: LAB_005aad00
    TEST EBX,EBX                        ; 005aad02
    JLE 0x005aa872                      ; 005aad04
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    FLD float ptr [ESP + 0x18]          ; 005aad0a
    MOV EDX,dword ptr [ESP + 0x84]      ; 005aad0e
    MOV dword ptr [ESP + 0x44],ESI      ; 005aad15
        ;   Label: LAB_005aad15
    FILD dword ptr [ESP + 0x44]         ; 005aad19
    FMUL ST1                            ; 005aad1d
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aad1f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x3c]        ; 005aad24
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005aad28
    ADD EDX,0x4                         ; 005aad2c
    MOV CX,word ptr [EAX + ECX*0x2]     ; 005aad2f
    MOV word ptr [EDX + -0x2],CX        ; 005aad33
    INC ESI                             ; 005aad37
    MOV word ptr [EDX + -0x4],CX        ; 005aad38
    CMP ESI,EBX                         ; 005aad3c
    JL 0x005aad15                       ; 005aad3e
        ;   XREF to: 005aad15 (CONDITIONAL_JUMP)  ; LAB_005aad15
    FSTP ST0                            ; 005aad40
    JMP 0x005aa872                      ; 005aad42
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    CMP ESI,0x1                         ; 005aad47
        ;   Label: LAB_005aad47
    JNZ 0x005aad99                      ; 005aad4a
        ;   XREF to: 005aad99 (CONDITIONAL_JUMP)  ; LAB_005aad99
    XOR EDX,EDX                         ; 005aad4c
    TEST EBX,EBX                        ; 005aad4e
    JLE 0x005aa872                      ; 005aad50
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    FLD float ptr [ESP + 0x18]          ; 005aad56
    MOV ESI,dword ptr [ESP + 0x84]      ; 005aad5a
    MOV dword ptr [ESP + 0x44],EDX      ; 005aad61
        ;   Label: LAB_005aad61
    FILD dword ptr [ESP + 0x44]         ; 005aad65
    FMUL ST1                            ; 005aad69
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aad6b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x40]        ; 005aad70
    MOV ECX,dword ptr [ESP + 0x40]      ; 005aad74
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 005aad78
    SAR EDI,0x10                        ; 005aad7b
    MOVSX ECX,word ptr [EAX + ECX*0x4]  ; 005aad7e
    ADD ECX,EDI                         ; 005aad82
    ADD ESI,0x2                         ; 005aad84
    SAR ECX,0x1                         ; 005aad87
    INC EDX                             ; 005aad89
    MOV word ptr [ESI + -0x2],CX        ; 005aad8a
    CMP EDX,EBX                         ; 005aad8e
    JL 0x005aad61                       ; 005aad90
        ;   XREF to: 005aad61 (CONDITIONAL_JUMP)  ; LAB_005aad61
    FSTP ST0                            ; 005aad92
    JMP 0x005aa872                      ; 005aad94
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    XOR ESI,ESI                         ; 005aad99
        ;   Label: LAB_005aad99
    TEST EBX,EBX                        ; 005aad9b
    JLE 0x005aa872                      ; 005aad9d
        ;   XREF to: 005aa872 (CONDITIONAL_JUMP)  ; LAB_005aa872
    FLD float ptr [ESP + 0x18]          ; 005aada3
    MOV EDX,dword ptr [ESP + 0x84]      ; 005aada7
    MOV dword ptr [ESP + 0x44],ESI      ; 005aadae
        ;   Label: LAB_005aadae
    FILD dword ptr [ESP + 0x44]         ; 005aadb2
    FMUL ST1                            ; 005aadb6
    CALL crt_math.c_round_FUN_005fe6b0  ; 005aadb8
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x20]        ; 005aadbd
    MOV ECX,dword ptr [ESP + 0x20]      ; 005aadc1
    MOV DI,word ptr [EAX + ECX*0x4]     ; 005aadc5
    MOV word ptr [EDX],DI               ; 005aadc9
    ADD EDX,0x4                         ; 005aadcc
    MOV CX,word ptr [EAX + ECX*0x4 + 0x2] ; 005aadcf
    INC ESI                             ; 005aadd4
    MOV word ptr [EDX + -0x2],CX        ; 005aadd5
    CMP ESI,EBX                         ; 005aadd9
    JL 0x005aadae                       ; 005aaddb
        ;   XREF to: 005aadae (CONDITIONAL_JUMP)  ; LAB_005aadae
    FSTP ST0                            ; 005aaddd
    JMP 0x005aa872                      ; 005aaddf
        ;   XREF to: 005aa872 (UNCONDITIONAL_JUMP)  ; LAB_005aa872
    PUSH EBX                            ; 005aade4
        ;   Label: LAB_005aade4
    MOV EAX,dword ptr [ESP + 0x88]      ; 005aade5
    PUSH EAX                            ; 005aadec
    CALL sound_sndmain.cpp_convert16BitAudioSignedness_FUN_005aa7d0 ; 005aaded
        ;   XREF to: 005aa7d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_convert16BitAudioSignedness_FUN_005aa7d0(short * buffer, int num_samples)
    ADD ESP,0x8                         ; 005aadf2
    ADD ESP,0x4c                        ; 005aadf5
    POP EBP                             ; 005aadf8
    POP EDI                             ; 005aadf9
    POP ESI                             ; 005aadfa
    POP EBX                             ; 005aadfb
    RET                                 ; 005aadfc

