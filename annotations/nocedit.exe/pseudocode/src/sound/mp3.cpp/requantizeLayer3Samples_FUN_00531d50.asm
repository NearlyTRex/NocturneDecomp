; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3SideInfo *side_info,int channel_index,SMpegFrame *frame)
;
; Parameters:
; SMpegSubbandQuantizedSamples * Stack[0x4]:4   quantized_samples
; SMpegSubbandSamples * Stack[0x8]:4   output_samples
; int *            Stack[0xc]:4   scalefactor_data
; SMpegLayer3SideInfo * Stack[0x10]:4   side_info
; int              Stack[0x14]:4   channel_index
; SMpegFrame *     Stack[0x18]:4   frame
; Local Variables:
; int *            Stack[-0x70]:4  local_70
; float *          Stack[-0x6c]:4  local_6c
; int              Stack[-0x68]:4  local_68
; float *          Stack[-0x64]:4  local_64
; int              Stack[-0x44]:4  local_44
; float *          Stack[-0x3c]:4  local_3c
; float *          Stack[-0x38]:4  local_38
; int *            Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; float *          Stack[-0x20]:4  local_20
; float *          Stack[-0x1c]:4  local_1c
; float *          Stack[-0x18]:4  local_18
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535882
;
; Referenced Globals:
;   double DOUBLE_0063b042 = 0.25
;   double DOUBLE_0063b04a = 1.33333333333333
;   double DOUBLE_0063b052 = 2
;   undefined4 DAT_0067e180
;   undefined4 DAT_0067e184
;   undefined4 g_Layer3BandIndex[0].l[1]
;   undefined4 g_Layer3BandIndex[0].l[2]
;   undefined4 DAT_0067e6dc
;   undefined4 DAT_0067e6e8
;   undefined4 DAT_0067e728
;   undefined4 DAT_0067e72c
;   undefined4 DAT_0067e730
;   undefined4 DAT_0067e734
;   undefined4 DAT_0067e738
;   int g_MpegRequantTablesInitialized
;   ... and 2 more
;
; Called Functions:
;   crt_math.c_pow_FUN_005ffd76
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531d50
        ;   Label: sound_mp3.cpp_requantizeLayer3Samples_FUN_00531d50
    PUSH ESI                            ; 00531d51
    PUSH EDI                            ; 00531d52
    PUSH EBP                            ; 00531d53
    MOV EBP,ESP                         ; 00531d54
    SUB ESP,0x68                        ; 00531d56
    AND ESP,0xfffffff8                  ; 00531d59
    MOV ECX,dword ptr [EBP + 0x20]      ; 00531d5c
    MOV EBX,dword ptr [EBP + 0x28]      ; 00531d5f
    MOV EBX,dword ptr [EBX]             ; 00531d62
    MOV EDX,dword ptr [EBX]             ; 00531d64
    XOR ESI,ESI                         ; 00531d66
    LEA EAX,[EDX*0x4 + 0x0]             ; 00531d68
    MOV EDI,dword ptr [EBX + 0x10]      ; 00531d6f
    SUB EAX,EDX                         ; 00531d72
    MOV EDX,dword ptr [ECX + 0x10]      ; 00531d74
    ADD EDI,EAX                         ; 00531d77
    TEST EDX,EDX                        ; 00531d79
    JZ 0x00531faf                       ; 00531d7b
        ;   XREF to: 00531faf (CONDITIONAL_JUMP)  ; LAB_00531faf
    CMP dword ptr [ECX + 0x14],0x2      ; 00531d81
    JNZ 0x00531faf                      ; 00531d85
        ;   XREF to: 00531faf (CONDITIONAL_JUMP)  ; LAB_00531faf
    LEA EAX,[EDI*0x8 + 0x0]             ; 00531d8b
    ADD EAX,EDI                         ; 00531d92
    SHL EAX,0x2                         ; 00531d94
    LEA EDX,[EDI + EAX*0x1]             ; 00531d97
    MOV EAX,dword ptr [ECX + 0x18]      ; 00531d9a
    SHL EDX,0x2                         ; 00531d9d
    TEST EAX,EAX                        ; 00531da0
    JZ 0x00531f85                       ; 00531da2
        ;   XREF to: 00531f85 (CONDITIONAL_JUMP)  ; LAB_00531f85
    MOV EAX,dword ptr [EDX + 0x67e6cc]  ; 00531da8 | g_Layer3BandIndex[0].l[1]
    MOV dword ptr [ESP + 0x5c],EAX      ; 00531dae
        ;   Label: LAB_00531dae
    MOV EDX,dword ptr [0x02f45984]      ; 00531db2 | g_MpegRequantTablesInitialized
        ;   Label: LAB_00531db2
    TEST EDX,EDX                        ; 00531db8
    JZ 0x00531fc9                       ; 00531dba
        ;   XREF to: 00531fc9 (CONDITIONAL_JUMP)  ; LAB_00531fc9
    XOR EAX,EAX                         ; 00531dc0
        ;   Label: LAB_00531dc0
    MOV dword ptr [ESP + 0x34],EAX      ; 00531dc2
    MOV EAX,dword ptr [EBP + 0x24]      ; 00531dc6
    SHL EAX,0x3                         ; 00531dc9
    MOV EDX,EAX                         ; 00531dcc
    SHL EAX,0x5                         ; 00531dce
    SUB EAX,EDX                         ; 00531dd1
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00531dd3
    ADD EDX,EAX                         ; 00531dd6
    LEA EAX,[EDI*0x8 + 0x0]             ; 00531dd8
    ADD EAX,EDI                         ; 00531ddf
    SHL EAX,0x2                         ; 00531de1
    ADD EAX,EDI                         ; 00531de4
    SHL EAX,0x2                         ; 00531de6
    MOV dword ptr [ESP + 0x20],EDX      ; 00531de9
    MOV dword ptr [ESP + 0x54],EAX      ; 00531ded
    MOV dword ptr [ESP + 0x1c],EAX      ; 00531df1
    MOV EAX,dword ptr [EBP + 0x18]      ; 00531df5
    MOV dword ptr [ESP + 0x18],EDX      ; 00531df8
    MOV dword ptr [ESP + 0x14],EAX      ; 00531dfc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00531e00
    XOR EDX,EDX                         ; 00531e03
    MOV dword ptr [ESP + 0x8],EAX       ; 00531e05
    MOV EAX,dword ptr [ESP + 0x54]      ; 00531e09
    MOV dword ptr [ESP + 0xc],EDX       ; 00531e0d
    ADD EAX,0xc                         ; 00531e11
    MOV dword ptr [ESP + 0x10],EDX      ; 00531e14
    MOV dword ptr [ESP + 0x38],EAX      ; 00531e18
    MOV EAX,dword ptr [ESP + 0xc]       ; 00531e1c
        ;   Label: LAB_00531e1c
    MOV dword ptr [ESP + 0x58],EAX      ; 00531e20
    MOV dword ptr [ESP + 0x40],EAX      ; 00531e24
    MOV EAX,dword ptr [ESP + 0x14]      ; 00531e28
    MOV dword ptr [ESP + 0x3c],EAX      ; 00531e2c
    MOV dword ptr [ESP + 0x44],EAX      ; 00531e30
    MOV dword ptr [ESP + 0x60],EAX      ; 00531e34
    MOV EAX,dword ptr [ESP + 0x8]       ; 00531e38
    MOV EDX,dword ptr [ESP + 0x10]      ; 00531e3c
    MOV dword ptr [ESP + 0x48],EAX      ; 00531e40
    MOV EAX,dword ptr [EBP + 0x18]      ; 00531e44
    ADD EAX,EDX                         ; 00531e47
    MOV dword ptr [ESP + 0x30],EAX      ; 00531e49
    MOV dword ptr [ESP + 0x28],EAX      ; 00531e4d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00531e51
    ADD EAX,EDX                         ; 00531e54
    XOR EDI,EDI                         ; 00531e56
    MOV dword ptr [ESP + 0x2c],EAX      ; 00531e58
    MOV dword ptr [ESP + 0x24],EAX      ; 00531e5c
    MOV EAX,dword ptr [ESP + 0x58]      ; 00531e60
        ;   Label: LAB_00531e60
    CMP EAX,dword ptr [ESP + 0x5c]      ; 00531e64
    JNZ 0x00531ee0                      ; 00531e68
        ;   XREF to: 00531ee0 (CONDITIONAL_JUMP)  ; LAB_00531ee0
    CMP dword ptr [ECX + 0x10],0x0      ; 00531e6a
    JZ 0x00532077                       ; 00531e6e
        ;   XREF to: 00532077 (CONDITIONAL_JUMP)  ; LAB_00532077
    CMP dword ptr [ECX + 0x14],0x2      ; 00531e74
    JNZ 0x00532077                      ; 00531e78
        ;   XREF to: 00532077 (CONDITIONAL_JUMP)  ; LAB_00532077
    INC ESI                             ; 00531e7e
    MOV EAX,dword ptr [ESP + 0x54]      ; 00531e7f
    LEA EBX,[ESI*0x4 + 0x0]             ; 00531e83
    MOV EDX,dword ptr [ECX + 0x18]      ; 00531e8a
    ADD EBX,EAX                         ; 00531e8d
    TEST EDX,EDX                        ; 00531e8f
    JZ 0x00532050                       ; 00531e91
        ;   XREF to: 00532050 (CONDITIONAL_JUMP)  ; LAB_00532050
    MOV EDX,dword ptr [ESP + 0x54]      ; 00531e97
    MOV EAX,dword ptr [ESP + 0x58]      ; 00531e9b
    CMP EAX,dword ptr [EDX + 0x67e6e8]  ; 00531e9f | DAT_0067e6e8
    JNZ 0x0053203f                      ; 00531ea5
        ;   XREF to: 0053203f (CONDITIONAL_JUMP)  ; LAB_0053203f
    MOV EAX,dword ptr [EDX + 0x67e734]  ; 00531eab | DAT_0067e734
    LEA EAX,[EAX + EAX*0x2]             ; 00531eb1
    MOV EDX,dword ptr [ESP + 0x38]      ; 00531eb4
    MOV dword ptr [ESP + 0x5c],EAX      ; 00531eb8
    MOV EAX,dword ptr [ESP + 0x38]      ; 00531ebc
    MOV EBX,dword ptr [EDX + 0x67e724]  ; 00531ec0 | DAT_0067e730
    MOV EAX,dword ptr [EAX + 0x67e728]  ; 00531ec6 | DAT_0067e734
    SUB EAX,EBX                         ; 00531ecc
    MOV ESI,0x3                         ; 00531ece
    MOV dword ptr [ESP + 0x50],EAX      ; 00531ed3
    MOV EAX,EBX                         ; 00531ed7
    IMUL EAX,ESI                        ; 00531ed9
    MOV dword ptr [ESP + 0x4c],EAX      ; 00531edc
        ;   Label: LAB_00531edc
    MOV EAX,dword ptr [ESP + 0x24]      ; 00531ee0
        ;   Label: LAB_00531ee0
    MOV EDX,dword ptr [EDI + EAX*0x1]   ; 00531ee4
    TEST EDX,EDX                        ; 00531ee7
    JNZ 0x00532094                      ; 00531ee9
        ;   XREF to: 00532094 (CONDITIONAL_JUMP)  ; LAB_00532094
    MOV EAX,dword ptr [ESP + 0x30]      ; 00531eef
    MOV dword ptr [EDI + EAX*0x1],EDX   ; 00531ef3
    MOV EAX,dword ptr [ESP + 0x58]      ; 00531ef6
        ;   Label: LAB_00531ef6
    MOV EDX,dword ptr [ESP + 0x40]      ; 00531efa
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00531efe
    ADD EDI,0x4                         ; 00531f02
    INC EAX                             ; 00531f05
    INC EDX                             ; 00531f06
    ADD EBX,0x4                         ; 00531f07
    MOV dword ptr [ESP + 0x58],EAX      ; 00531f0a
    MOV dword ptr [ESP + 0x40],EDX      ; 00531f0e
    MOV dword ptr [ESP + 0x3c],EBX      ; 00531f12
    MOV EAX,dword ptr [ESP + 0x44]      ; 00531f16
    MOV EDX,dword ptr [ESP + 0x60]      ; 00531f1a
    MOV EBX,dword ptr [ESP + 0x48]      ; 00531f1e
    ADD EAX,0x4                         ; 00531f22
    ADD EDX,0x4                         ; 00531f25
    ADD EBX,0x4                         ; 00531f28
    MOV dword ptr [ESP + 0x44],EAX      ; 00531f2b
    MOV dword ptr [ESP + 0x60],EDX      ; 00531f2f
    MOV dword ptr [ESP + 0x48],EBX      ; 00531f33
    CMP EDI,0x48                        ; 00531f37
    JNZ 0x00531e60                      ; 00531f3a
        ;   XREF to: 00531e60 (CONDITIONAL_JUMP)  ; LAB_00531e60
    MOV EDI,dword ptr [ESP + 0xc]       ; 00531f40
    MOV EAX,dword ptr [ESP + 0x10]      ; 00531f44
    MOV EDX,dword ptr [ESP + 0x14]      ; 00531f48
    MOV EBX,dword ptr [ESP + 0x8]       ; 00531f4c
    ADD EDI,0x12                        ; 00531f50
    ADD EAX,0x48                        ; 00531f53
    ADD EDX,0x48                        ; 00531f56
    ADD EBX,0x48                        ; 00531f59
    MOV dword ptr [ESP + 0xc],EDI       ; 00531f5c
    MOV dword ptr [ESP + 0x10],EAX      ; 00531f60
    MOV EDI,dword ptr [ESP + 0x34]      ; 00531f64
    MOV dword ptr [ESP + 0x14],EDX      ; 00531f68
    INC EDI                             ; 00531f6c
    MOV dword ptr [ESP + 0x8],EBX       ; 00531f6d
    MOV dword ptr [ESP + 0x34],EDI      ; 00531f71
    CMP EDI,0x20                        ; 00531f75
    JL 0x00531e1c                       ; 00531f78
        ;   XREF to: 00531e1c (CONDITIONAL_JUMP)  ; LAB_00531e1c
    MOV ESP,EBP                         ; 00531f7e
    POP EBP                             ; 00531f80
    POP EDI                             ; 00531f81
    POP ESI                             ; 00531f82
    POP EBX                             ; 00531f83
    RET                                 ; 00531f84
    MOV EAX,dword ptr [EDX + 0x67e728]  ; 00531f85 | DAT_0067e728
        ;   Label: LAB_00531f85
    MOV dword ptr [ESP + 0x64],EAX      ; 00531f8b
    MOV EBX,dword ptr [ESP + 0x64]      ; 00531f8f
    SHL EAX,0x2                         ; 00531f93
    SUB EAX,EBX                         ; 00531f96
    MOV dword ptr [ESP + 0x5c],EAX      ; 00531f98
    MOV EAX,dword ptr [EDX + 0x67e728]  ; 00531f9c | DAT_0067e728
    MOV dword ptr [ESP + 0x4c],ESI      ; 00531fa2
    MOV dword ptr [ESP + 0x50],EAX      ; 00531fa6
    JMP 0x00531db2                      ; 00531faa
        ;   XREF to: 00531db2 (UNCONDITIONAL_JUMP)  ; LAB_00531db2
    LEA EAX,[EDI*0x8 + 0x0]             ; 00531faf
        ;   Label: LAB_00531faf
    ADD EAX,EDI                         ; 00531fb6
    SHL EAX,0x2                         ; 00531fb8
    ADD EAX,EDI                         ; 00531fbb
    MOV EAX,dword ptr [EAX*0x4 + 0x67e6cc] ; 00531fbd | g_Layer3BandIndex[0].l[1]
    JMP 0x00531dae                      ; 00531fc4
        ;   XREF to: 00531dae (UNCONDITIONAL_JUMP)  ; LAB_00531dae
    XOR EBX,EBX                         ; 00531fc9
        ;   Label: LAB_00531fc9
    FLD double ptr [0x0063b04a]         ; 00531fcb | DOUBLE_0063b04a
    MOV dword ptr [ESP + 0x64],EDX      ; 00531fd1
        ;   Label: LAB_00531fd1
    FLD ST0                             ; 00531fd5
    FILD dword ptr [ESP + 0x64]         ; 00531fd7
    CALL crt_math.c_pow_FUN_005ffd76    ; 00531fdb
        ;   XREF to: 005ffd76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_pow_FUN_005ffd76(float10 base, float10 exp)
    ADD EBX,0x8                         ; 00531fe0
    INC EDX                             ; 00531fe3
    FSTP double ptr [EBX + 0x2f45980]   ; 00531fe4 | g_MpegRequantPowerTable
    CMP EDX,0xc8                        ; 00531fea
    JL 0x00531fd1                       ; 00531ff0
        ;   XREF to: 00531fd1 (CONDITIONAL_JUMP)  ; LAB_00531fd1
    FSTP ST0                            ; 00531ff2
    XOR EDX,EDX                         ; 00531ff4
    XOR EBX,EBX                         ; 00531ff6
    FLD double ptr [0x0063b052]         ; 00531ff8 | DOUBLE_0063b052
    FLD double ptr [0x0063b042]         ; 00531ffe | DOUBLE_0063b042
    MOV EAX,EDX                         ; 00532004
        ;   Label: LAB_00532004
    NEG EAX                             ; 00532006
    MOV dword ptr [ESP + 0x64],EAX      ; 00532008
    FILD dword ptr [ESP + 0x64]         ; 0053200c
    FMUL ST1                            ; 00532010
    FLD ST2                             ; 00532012
    CALL crt_math.c_pow_FUN_005ffd76    ; 00532014
        ;   XREF to: 005ffd76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_pow_FUN_005ffd76(float10 base, float10 exp)
    ADD EBX,0x8                         ; 00532019
    INC EDX                             ; 0053201c
    FSTP double ptr [EBX + 0x2f45fc0]   ; 0053201d | g_MpegRequantGainTable
    CMP EDX,0xc8                        ; 00532023
    JL 0x00532004                       ; 00532029
        ;   XREF to: 00532004 (CONDITIONAL_JUMP)  ; LAB_00532004
    FSTP ST0                            ; 0053202b
    MOV EBX,0x1                         ; 0053202d
    FSTP ST0                            ; 00532032
    MOV dword ptr [0x02f45984],EBX      ; 00532034 | g_MpegRequantTablesInitialized
    JMP 0x00531dc0                      ; 0053203a
        ;   XREF to: 00531dc0 (UNCONDITIONAL_JUMP)  ; LAB_00531dc0
    JGE 0x00532050                      ; 0053203f
        ;   XREF to: 00532050 (CONDITIONAL_JUMP)  ; LAB_00532050
        ;   Label: LAB_0053203f
    MOV EAX,dword ptr [EBX + 0x67e6cc]  ; 00532041 | g_Layer3BandIndex[0].l[2]
    MOV dword ptr [ESP + 0x5c],EAX      ; 00532047
    JMP 0x00531ee0                      ; 0053204b
        ;   XREF to: 00531ee0 (UNCONDITIONAL_JUMP)  ; LAB_00531ee0
    MOV EAX,dword ptr [EBX + 0x67e728]  ; 00532050 | DAT_0067e72c | DAT_0067e738
        ;   Label: LAB_00532050
    LEA EAX,[EAX + EAX*0x2]             ; 00532056
    MOV EDX,dword ptr [EBX + 0x67e724]  ; 00532059 | DAT_0067e728 | DAT_0067e734
    MOV dword ptr [ESP + 0x5c],EAX      ; 0053205f
    MOV EAX,dword ptr [EBX + 0x67e728]  ; 00532063 | DAT_0067e72c | DAT_0067e738
    SUB EAX,EDX                         ; 00532069
    MOV dword ptr [ESP + 0x50],EAX      ; 0053206b
    LEA EAX,[EDX + EDX*0x2]             ; 0053206f
    JMP 0x00531edc                      ; 00532072
        ;   XREF to: 00531edc (UNCONDITIONAL_JUMP)  ; LAB_00531edc
    INC ESI                             ; 00532077
        ;   Label: LAB_00532077
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00532078
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053207c
    ADD EAX,EDX                         ; 00532083
    MOV EAX,dword ptr [EAX + 0x67e6cc]  ; 00532085 | g_Layer3BandIndex[0].l[2] | DAT_0067e6dc
    MOV dword ptr [ESP + 0x5c],EAX      ; 0053208b
    JMP 0x00531ee0                      ; 0053208f
        ;   XREF to: 00531ee0 (UNCONDITIONAL_JUMP)  ; LAB_00531ee0
    MOV EBX,dword ptr [ECX + 0x8]       ; 00532094
        ;   Label: LAB_00532094
    MOV EAX,dword ptr [ECX + 0x10]      ; 00532097
    SUB EBX,0xd2                        ; 0053209a
    TEST EAX,EAX                        ; 005320a0
    JZ 0x0053218e                       ; 005320a2
        ;   XREF to: 0053218e (CONDITIONAL_JUMP)  ; LAB_0053218e
    CMP dword ptr [ECX + 0x14],0x2      ; 005320a8
    JNZ 0x00532177                      ; 005320ac
        ;   XREF to: 00532177 (CONDITIONAL_JUMP)  ; LAB_00532177
    CMP dword ptr [ECX + 0x18],0x0      ; 005320b2
    JNZ 0x00532177                      ; 005320b6
        ;   XREF to: 00532177 (CONDITIONAL_JUMP)  ; LAB_00532177
    MOV EDX,dword ptr [ESP + 0x40]      ; 005320bc
        ;   Label: LAB_005320bc
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005320c0
    SUB EDX,EAX                         ; 005320c4
    MOV EAX,EDX                         ; 005320c6
    SAR EDX,0x1f                        ; 005320c8
    IDIV dword ptr [ESP + 0x50]         ; 005320cb
    MOV dword ptr [ESP + 0x64],EAX      ; 005320cf
    MOV EAX,dword ptr [ECX + EAX*0x4 + 0x28] ; 005320d3
    SHL EAX,0x3                         ; 005320d7
    MOV EDX,dword ptr [ESP + 0x64]      ; 005320da
    SUB EBX,EAX                         ; 005320de
    IMUL EAX,EDX,0x34                   ; 005320e0
    MOV EDX,dword ptr [ESP + 0x20]      ; 005320e3
    ADD EDX,EAX                         ; 005320e7
    LEA EAX,[ESI*0x4 + 0x0]             ; 005320e9
    ADD EDX,EAX                         ; 005320f0
    MOV EAX,dword ptr [ECX + 0x40]      ; 005320f2
    INC EAX                             ; 005320f5
    ADD EAX,EAX                         ; 005320f6
    NEG EAX                             ; 005320f8
    IMUL EAX,dword ptr [EDX + 0x5c]     ; 005320fa
    ADD EBX,EAX                         ; 005320fe
        ;   Label: LAB_005320fe
    TEST EBX,EBX                        ; 00532100
    JLE 0x005321c7                      ; 00532102
        ;   XREF to: 005321c7 (CONDITIONAL_JUMP)  ; LAB_005321c7
    MOV dword ptr [ESP + 0x64],EBX      ; 00532108
        ;   Label: LAB_00532108
    FILD dword ptr [ESP + 0x64]         ; 0053210c
    FMUL double ptr [0x0063b042]        ; 00532110 | DOUBLE_0063b042
    FLD double ptr [0x0063b052]         ; 00532116 | DOUBLE_0063b052
    CALL crt_math.c_pow_FUN_005ffd76    ; 0053211c
        ;   XREF to: 005ffd76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_pow_FUN_005ffd76(float10 base, float10 exp)
    MOV EAX,dword ptr [ESP + 0x44]      ; 00532121
    FSTP float ptr [EAX]                ; 00532125
        ;   Label: LAB_00532125
    MOV EAX,dword ptr [ESP + 0x48]      ; 00532127
    MOV EAX,dword ptr [EAX]             ; 0053212b
    CDQ                                 ; 0053212d
    XOR EAX,EDX                         ; 0053212e
    SUB EAX,EDX                         ; 00532130
    CMP EAX,0xc8                        ; 00532132
    JL 0x005321e5                       ; 00532137
        ;   XREF to: 005321e5 (CONDITIONAL_JUMP)  ; LAB_005321e5
    MOV dword ptr [ESP + 0x64],EAX      ; 0053213d
    FLD double ptr [0x0063b04a]         ; 00532141 | DOUBLE_0063b04a
    FILD dword ptr [ESP + 0x64]         ; 00532147
    CALL crt_math.c_pow_FUN_005ffd76    ; 0053214b
        ;   XREF to: 005ffd76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_pow_FUN_005ffd76(float10 base, float10 exp)
    MOV EAX,dword ptr [ESP + 0x60]      ; 00532150
    FMUL float ptr [EAX]                ; 00532154
    FSTP float ptr [EAX]                ; 00532156
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00532158
        ;   Label: LAB_00532158
    CMP dword ptr [EDI + EAX*0x1],0x0   ; 0053215c
    JGE 0x00531ef6                      ; 00532160
        ;   XREF to: 00531ef6 (CONDITIONAL_JUMP)  ; LAB_00531ef6
    MOV EAX,dword ptr [ESP + 0x28]      ; 00532166
    FLD float ptr [EDI + EAX*0x1]       ; 0053216a
    FCHS                                ; 0053216d
    FSTP float ptr [EDI + EAX*0x1]      ; 0053216f
    JMP 0x00531ef6                      ; 00532172
        ;   XREF to: 00531ef6 (UNCONDITIONAL_JUMP)  ; LAB_00531ef6
    CMP dword ptr [ECX + 0x14],0x2      ; 00532177
        ;   Label: LAB_00532177
    JNZ 0x0053218e                      ; 0053217b
        ;   XREF to: 0053218e (CONDITIONAL_JUMP)  ; LAB_0053218e
    CMP dword ptr [ECX + 0x18],0x0      ; 0053217d
    JZ 0x0053218e                       ; 00532181
        ;   XREF to: 0053218e (CONDITIONAL_JUMP)  ; LAB_0053218e
    CMP dword ptr [ESP + 0x34],0x2      ; 00532183
    JGE 0x005320bc                      ; 00532188
        ;   XREF to: 005320bc (CONDITIONAL_JUMP)  ; LAB_005320bc
    MOV EDX,dword ptr [ECX + 0x3c]      ; 0053218e
        ;   Label: LAB_0053218e
    LEA EAX,[ESI*0x4 + 0x0]             ; 00532191
    IMUL EDX,dword ptr [EAX + 0x67e174] ; 00532198 | DAT_0067e180 | DAT_0067e184
    MOV dword ptr [ESP + 0x64],EDX      ; 0053219f
    ADD EAX,dword ptr [ESP + 0x18]      ; 005321a3
    MOV EDX,dword ptr [ESP + 0x64]      ; 005321a7
    MOV EAX,dword ptr [EAX]             ; 005321ab
    ADD EAX,EDX                         ; 005321ad
    MOV dword ptr [ESP + 0x64],EAX      ; 005321af
    MOV EAX,dword ptr [ECX + 0x40]      ; 005321b3
    INC EAX                             ; 005321b6
    ADD EAX,EAX                         ; 005321b7
    MOV EDX,dword ptr [ESP + 0x64]      ; 005321b9
    NEG EAX                             ; 005321bd
    IMUL EAX,EDX                        ; 005321bf
    JMP 0x005320fe                      ; 005321c2
        ;   XREF to: 005320fe (UNCONDITIONAL_JUMP)  ; LAB_005320fe
    CMP EBX,0xffffff38                  ; 005321c7
        ;   Label: LAB_005321c7
    JLE 0x00532108                      ; 005321cd
        ;   XREF to: 00532108 (CONDITIONAL_JUMP)  ; LAB_00532108
    NEG EBX                             ; 005321d3
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005321d5
    FLD double ptr [EBX*0x8 + 0x2f45fc8] ; 005321d9 | g_MpegRequantGainTable
    JMP 0x00532125                      ; 005321e0
        ;   XREF to: 00532125 (UNCONDITIONAL_JUMP)  ; LAB_00532125
    MOV EDX,dword ptr [ESP + 0x60]      ; 005321e5
        ;   Label: LAB_005321e5
    FLD float ptr [EDX]                 ; 005321e9
    FLD ST0                             ; 005321eb
    FMUL double ptr [EAX*0x8 + 0x2f45988] ; 005321ed | g_MpegRequantPowerTable
    FSTP ST1                            ; 005321f4
    FSTP float ptr [EDX]                ; 005321f6
    JMP 0x00532158                      ; 005321f8
        ;   XREF to: 00532158 (UNCONDITIONAL_JUMP)  ; LAB_00532158

