; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegFrame *frame_info,SMpegFrame *frame)
;
; Parameters:
; SMpegStereoSubbandSamples * Stack[0x4]:4   input_lr_samples
; SMpegStereoSubbandSamples * Stack[0x8]:4   output_samples
; SMpegScalefactorBandData * Stack[0xc]:4   scalefactor_data
; SMpegFrame *     Stack[0x10]:4   frame_info
; SMpegFrame *     Stack[0x14]:4   frame
; Local Variables:
; undefined4       Stack[-0x2080]:4  local_2080
; undefined4       Stack[-0x207c]:4  local_207c
; float[576]       Stack[-0x2078]:2304  local_2078
; float[576]       Stack[-0x1778]:2304  afStack_1778
; float[575]       Stack[-0xe78]:2300  afStack_e78
; undefined4       Stack[-0x57a]:4  uStack_57a
; int              Stack[-0xf8]:4  local_f8
; int              Stack[-0xf4]:4  local_f4
; int              Stack[-0xf0]:4  local_f0
; int              Stack[-0xec]:4  local_ec
; int              Stack[-0xe8]:4  local_e8
; int              Stack[-0xe4]:4  local_e4
; uint             Stack[-0xe0]:4  local_e0
; int              Stack[-0xdc]:4  local_dc
; int              Stack[-0xd8]:4  local_d8
; int              Stack[-0xd4]:4  local_d4
; int              Stack[-0xd0]:4  local_d0
; int *            Stack[-0xcc]:4  local_cc
; int *            Stack[-0xc8]:4  local_c8
; int *            Stack[-0xc4]:4  local_c4
; int              Stack[-0xc0]:4  local_c0
; int              Stack[-0xbc]:4  local_bc
; int              Stack[-0xb8]:4  local_b8
; int *            Stack[-0xb4]:4  local_b4
; int              Stack[-0xb0]:4  local_b0
; int              Stack[-0xac]:4  local_ac
; int              Stack[-0xa8]:4  local_a8
; int              Stack[-0xa4]:4  local_a4
; int              Stack[-0xa0]:4  local_a0
; int              Stack[-0x9c]:4  local_9c
; int              Stack[-0x98]:4  local_98
; int              Stack[-0x94]:4  local_94
; int              Stack[-0x90]:4  local_90
; int              Stack[-0x8c]:4  local_8c
; int              Stack[-0x88]:4  local_88
; int              Stack[-0x84]:4  local_84
; int              Stack[-0x80]:4  local_80
; int              Stack[-0x7c]:4  local_7c
; int              Stack[-0x78]:4  local_78
; int *            Stack[-0x74]:4  local_74
; int              Stack[-0x70]:4  local_70
; int              Stack[-0x6c]:4  local_6c
; int *            Stack[-0x68]:4  local_68
; int              Stack[-0x64]:4  local_64
; int              Stack[-0x60]:4  local_60
; float[18] *      Stack[-0x5c]:4  local_5c
; SMpegStereoSubbandSamples * Stack[-0x58]:4  local_58
; float *          Stack[-0x54]:4  local_54
; int              Stack[-0x50]:4  local_50
; float[18] *      Stack[-0x4c]:4  local_4c
; float[18] *      Stack[-0x48]:4  local_48
; float[18] *      Stack[-0x44]:4  local_44
; float[18] *      Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 005358d9
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063b05a
;   TerminatedCString s_Error_in_streo_processin_0063b06b
;   double DOUBLE_0063b092 = 0.261799387799149
;   double DOUBLE_0063b09a = 0.707106782373095
;   SMpegLayer3BandIndex[6] g_Layer3BandIndex
;   undefined4 g_Layer3BandIndex[0].l[1]
;   undefined4 g_Layer3BandIndex[0].l[2]
;   undefined4 g_Layer3BandIndex[0].l[3]
;   undefined4 g_Layer3BandIndex[0].l[12]
;   undefined4 g_Layer3BandIndex[0].l[13]
;   undefined4 g_Layer3BandIndex[0].l[20]
;   undefined4 g_Layer3BandIndex[0].l[21]
;   undefined4 g_Layer3BandIndex[0].s[11]
;   undefined4 g_Layer3BandIndex[0].s[12]
;   undefined4 g_Layer3BandIndex[0].s[13]
;   ... and 5 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005325e0
        ;   Label: sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005325e0
    PUSH ESI                            ; 005325e1
    PUSH EDI                            ; 005325e2
    PUSH EBP                            ; 005325e3
    MOV EBP,ESP                         ; 005325e4
    SUB ESP,0x206c                      ; 005325e6
    AND ESP,0xfffffff8                  ; 005325ec
    MOV ECX,dword ptr [EBP + 0x20]      ; 005325ef
    MOV EAX,dword ptr [EBP + 0x24]      ; 005325f2
    MOV EDX,dword ptr [EAX + 0x10]      ; 005325f5
    MOV dword ptr [ESP + 0x1f90],EDX    ; 005325f8
    MOV EDX,dword ptr [EAX]             ; 005325ff
    CMP dword ptr [EDX + 0x1c],0x1      ; 00532601
    JNZ 0x0053286d                      ; 00532605
        ;   XREF to: 0053286d (CONDITIONAL_JUMP)  ; LAB_0053286d
    TEST byte ptr [EDX + 0x20],0x2      ; 0053260b
    JZ 0x0053286d                       ; 0053260f
        ;   XREF to: 0053286d (CONDITIONAL_JUMP)  ; LAB_0053286d
    MOV EDX,0x1                         ; 00532615
    MOV dword ptr [ESP + 0x1f94],EDX    ; 0053261a
        ;   Label: LAB_0053261a
    MOV EDX,dword ptr [EAX]             ; 00532621
    MOV ESI,dword ptr [EDX + 0x1c]      ; 00532623
    CMP ESI,0x1                         ; 00532626
    JNZ 0x00532874                      ; 00532629
        ;   XREF to: 00532874 (CONDITIONAL_JUMP)  ; LAB_00532874
    TEST byte ptr [EDX + 0x20],0x1      ; 0053262f
    JZ 0x00532874                       ; 00532633
        ;   XREF to: 00532874 (CONDITIONAL_JUMP)  ; LAB_00532874
    MOV EDX,ESI                         ; 00532639
    MOV dword ptr [ESP + 0x1fd4],EDX    ; 0053263b
        ;   Label: LAB_0053263b
    MOV EDX,dword ptr [EAX]             ; 00532642
    CMP dword ptr [EDX],0x0             ; 00532644
    SETZ DL                             ; 00532647
    AND EDX,0xff                        ; 0053264a
    MOV dword ptr [ESP + 0x1fa0],EDX    ; 00532650
    MOV EDX,dword ptr [ECX + 0xc]       ; 00532657
    AND EDX,0x1                         ; 0053265a
    CMP EDX,0x1                         ; 0053265d
    JNZ 0x0053287b                      ; 00532660
        ;   XREF to: 0053287b (CONDITIONAL_JUMP)  ; LAB_0053287b
    MOV ESI,0x667f6ee7                  ; 00532666
    MOV EDI,0x3fe6a09e                  ; 0053266b
    MOV dword ptr [ESP],ESI             ; 00532670
    MOV dword ptr [ESP + 0x4],EDI       ; 00532673
    MOV EBX,dword ptr [EAX]             ; 00532677
        ;   Label: LAB_00532677
    MOV EDX,dword ptr [EBX]             ; 00532679
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053267b
    SUB EAX,EDX                         ; 00532682
    MOV EDX,dword ptr [EBX + 0x10]      ; 00532684
    ADD EDX,EAX                         ; 00532687
    MOV dword ptr [ESP + 0x1f8c],EDX    ; 00532689
    XOR EAX,EAX                         ; 00532690
    MOV EDX,0x7                         ; 00532692
    ADD EAX,0x2                         ; 00532697
        ;   Label: LAB_00532697
    MOV word ptr [ESP + EAX*0x1 + 0x1b06],DX ; 0053269a
    CMP EAX,0x480                       ; 005326a2
    JNZ 0x00532697                      ; 005326a7
        ;   XREF to: 00532697 (CONDITIONAL_JUMP)  ; LAB_00532697
    MOV EAX,dword ptr [ESP + 0x1f90]    ; 005326a9
    CMP EAX,0x2                         ; 005326b0
    JZ 0x00532891                       ; 005326b3
        ;   XREF to: 00532891 (CONDITIONAL_JUMP)  ; LAB_00532891
    LEA EAX,[EAX]                       ; 005326b9
    NOP                                 ; 005326bf
    MOV EAX,dword ptr [EBP + 0x18]      ; 005326c0
        ;   Label: LAB_005326c0
    MOV dword ptr [ESP + 0x2024],EAX    ; 005326c3
    ADD EAX,0x1200                      ; 005326ca
    MOV dword ptr [ESP + 0x2028],EAX    ; 005326cf
    MOV ESI,dword ptr [ESP + 0x2024]    ; 005326d6
        ;   Label: LAB_005326d6
    XOR EDX,EDX                         ; 005326dd
    LEA EBX,[ESI + 0x48]                ; 005326df
    IMUL EAX,EDX,0x48                   ; 005326e2
        ;   Label: LAB_005326e2
    LEA ECX,[ESI + EAX*0x1]             ; 005326e5
    MOV EAX,EBX                         ; 005326e8
    MOV dword ptr [ECX],0x0             ; 005326ea
        ;   Label: LAB_005326ea
    ADD ECX,0x4                         ; 005326f0
    CMP ECX,EAX                         ; 005326f3
    JNZ 0x005326ea                      ; 005326f5
        ;   XREF to: 005326ea (CONDITIONAL_JUMP)  ; LAB_005326ea
    INC EDX                             ; 005326f7
    ADD EBX,0x48                        ; 005326f8
    CMP EDX,0x20                        ; 005326fb
    JL 0x005326e2                       ; 005326fe
        ;   XREF to: 005326e2 (CONDITIONAL_JUMP)  ; LAB_005326e2
    MOV EDX,dword ptr [ESP + 0x2024]    ; 00532700
    ADD EDX,0x900                       ; 00532707
    MOV ECX,dword ptr [ESP + 0x2028]    ; 0053270d
    MOV dword ptr [ESP + 0x2024],EDX    ; 00532714
    CMP EDX,ECX                         ; 0053271b
    JNZ 0x005326d6                      ; 0053271d
        ;   XREF to: 005326d6 (CONDITIONAL_JUMP)  ; LAB_005326d6
    CMP dword ptr [ESP + 0x1f90],0x2    ; 0053271f
    JNZ 0x00533457                      ; 00532727
        ;   XREF to: 00533457 (CONDITIONAL_JUMP)  ; LAB_00533457
    XOR ESI,ESI                         ; 0053272d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053272f
    MOV dword ptr [ESP + 0x2060],ESI    ; 00532732
    MOV dword ptr [ESP + 0x203c],EAX    ; 00532739
    MOV EAX,dword ptr [EBP + 0x18]      ; 00532740
    MOV dword ptr [ESP + 0x2044],ESI    ; 00532743
    MOV dword ptr [ESP + 0x2040],EAX    ; 0053274a
    MOV ESI,dword ptr [ESP + 0x2060]    ; 00532751
        ;   Label: LAB_00532751
    IMUL EAX,ESI,0x12                   ; 00532758
    MOV dword ptr [ESP + 0x1fe0],EAX    ; 0053275b
    MOV EAX,dword ptr [ESP + 0x2044]    ; 00532762
    MOV dword ptr [ESP + 0x2030],EAX    ; 00532769
    MOV EAX,dword ptr [ESP + 0x2040]    ; 00532770
    XOR EBX,EBX                         ; 00532777
    MOV dword ptr [ESP + 0x2034],EAX    ; 00532779
    MOV EAX,dword ptr [ESP + 0x203c]    ; 00532780
    XOR ESI,ESI                         ; 00532787
    MOV dword ptr [ESP + 0x2038],EAX    ; 00532789
    MOV EAX,dword ptr [ESP + 0x1fe0]    ; 00532790
        ;   Label: LAB_00532790
    MOV ECX,dword ptr [ESP + 0x2030]    ; 00532797
    MOV EDX,dword ptr [ESP + 0x2034]    ; 0053279e
    ADD EAX,EBX                         ; 005327a5
    MOV DI,word ptr [ESP + ECX*0x1 + 0x1b08] ; 005327a7
    MOV dword ptr [ESP + 0x1f88],EAX    ; 005327af
    MOV EAX,dword ptr [ESP + 0x2038]    ; 005327b6
    ADD EDX,ESI                         ; 005327bd
    ADD EAX,ESI                         ; 005327bf
    CMP DI,0x7                          ; 005327c1
    JNZ 0x005333cc                      ; 005327c5
        ;   XREF to: 005333cc (CONDITIONAL_JUMP)  ; LAB_005333cc
    CMP dword ptr [ESP + 0x1f94],0x0    ; 005327cb
    JZ 0x005333b7                       ; 005327d3
        ;   XREF to: 005333b7 (CONDITIONAL_JUMP)  ; LAB_005333b7
    FLD float ptr [EAX]                 ; 005327d9
    FADD float ptr [EAX + 0x900]        ; 005327db
    FLD double ptr [0x0063b09a]         ; 005327e1 | DOUBLE_0063b09a
    FXCH                                ; 005327e7
    FMUL ST1                            ; 005327e9
    FSTP float ptr [EDX]                ; 005327eb
    FLD float ptr [EAX]                 ; 005327ed
    FSUB float ptr [EAX + 0x900]        ; 005327ef
    FMULP                               ; 005327f5
    FSTP float ptr [EDX + 0x900]        ; 005327f7
        ;   Label: LAB_005327f7
    MOV EDI,dword ptr [ESP + 0x2030]    ; 005327fd
        ;   Label: LAB_005327fd
    INC EBX                             ; 00532804
    ADD EDI,0x2                         ; 00532805
    ADD ESI,0x4                         ; 00532808
    MOV dword ptr [ESP + 0x2030],EDI    ; 0053280b
    CMP EBX,0x12                        ; 00532812
    JL 0x00532790                       ; 00532815
        ;   XREF to: 00532790 (CONDITIONAL_JUMP)  ; LAB_00532790
    MOV EDX,dword ptr [ESP + 0x2040]    ; 0053281b
    MOV ECX,dword ptr [ESP + 0x2044]    ; 00532822
    MOV EBX,dword ptr [ESP + 0x2060]    ; 00532829
    MOV EAX,dword ptr [ESP + 0x203c]    ; 00532830
    ADD EDX,0x48                        ; 00532837
    ADD ECX,0x24                        ; 0053283a
    INC EBX                             ; 0053283d
    ADD EAX,0x48                        ; 0053283e
    MOV dword ptr [ESP + 0x2040],EDX    ; 00532841
    MOV dword ptr [ESP + 0x2044],ECX    ; 00532848
    MOV dword ptr [ESP + 0x2060],EBX    ; 0053284f
    MOV dword ptr [ESP + 0x203c],EAX    ; 00532856
    CMP EBX,0x20                        ; 0053285d
    JL 0x00532751                       ; 00532860
        ;   XREF to: 00532751 (CONDITIONAL_JUMP)  ; LAB_00532751
    MOV ESP,EBP                         ; 00532866
        ;   Label: LAB_00532866
    POP EBP                             ; 00532868
    POP EDI                             ; 00532869
    POP ESI                             ; 0053286a
    POP EBX                             ; 0053286b
    RET                                 ; 0053286c
    XOR EDX,EDX                         ; 0053286d
        ;   Label: LAB_0053286d
    JMP 0x0053261a                      ; 0053286f
        ;   XREF to: 0053261a (UNCONDITIONAL_JUMP)  ; LAB_0053261a
    XOR EDX,EDX                         ; 00532874
        ;   Label: LAB_00532874
    JMP 0x0053263b                      ; 00532876
        ;   XREF to: 0053263b (UNCONDITIONAL_JUMP)  ; LAB_0053263b
    MOV EDX,0x995b2417                  ; 0053287b
        ;   Label: LAB_0053287b
    MOV EBX,0x3feae89f                  ; 00532880
    MOV dword ptr [ESP],EDX             ; 00532885
    MOV dword ptr [ESP + 0x4],EBX       ; 00532888
    JMP 0x00532677                      ; 0053288c
        ;   XREF to: 00532677 (UNCONDITIONAL_JUMP)  ; LAB_00532677
    CMP dword ptr [ESP + 0x1fd4],0x0    ; 00532891
        ;   Label: LAB_00532891
    JZ 0x005326c0                       ; 00532899
        ;   XREF to: 005326c0 (CONDITIONAL_JUMP)  ; LAB_005326c0
    CMP dword ptr [ECX + 0x10],0x0      ; 0053289f
    JNZ 0x00532afc                      ; 005328a3
        ;   XREF to: 00532afc (CONDITIONAL_JUMP)  ; LAB_00532afc
    MOV ECX,0x1f                        ; 005328a9
        ;   Label: LAB_005328a9
    MOV EDX,0x11                        ; 005328ae
    MOV EBX,dword ptr [EBP + 0x14]      ; 005328b3
    XOR EDI,EDI                         ; 005328b6
    ADD EBX,0x8b8                       ; 005328b8
    MOV ESI,EDX                         ; 005328be
    TEST dword ptr [EBX + EDX*0x4 + 0x900],0x7fffffff ; 005328c0
        ;   Label: LAB_005328c0
    JZ 0x0053337b                       ; 005328cb
        ;   XREF to: 0053337b (CONDITIONAL_JUMP)  ; LAB_0053337b
    LEA EAX,[ECX*0x8 + 0x0]             ; 005328d1
    ADD EAX,ECX                         ; 005328d8
    ADD EAX,EAX                         ; 005328da
    LEA EDI,[EAX + EDX*0x1]             ; 005328dc
    MOV EDX,dword ptr [ESP + 0x1f8c]    ; 005328df
        ;   Label: LAB_005328df
    LEA EAX,[EDX*0x8 + 0x0]             ; 005328e6
    ADD EAX,EDX                         ; 005328ed
    SHL EAX,0x2                         ; 005328ef
    ADD EDX,EAX                         ; 005328f2
    SHL EDX,0x2                         ; 005328f4
    XOR ESI,ESI                         ; 005328f7
    MOV ECX,dword ptr [EDX + 0x67e6c8]  ; 005328f9 | g_Layer3BandIndex
    MOV EAX,EDX                         ; 005328ff
    CMP EDI,ECX                         ; 00532901
    JL 0x00532920                       ; 00532903
        ;   XREF to: 00532920 (CONDITIONAL_JUMP)  ; LAB_00532920
    INC ESI                             ; 00532905
        ;   Label: LAB_00532905
    MOV EBX,dword ptr [EAX + 0x67e6cc]  ; 00532906 | g_Layer3BandIndex[0].l[1] | g_Layer3BandIndex[0].l[2]
    ADD EAX,0x4                         ; 0053290c
    CMP EDI,EBX                         ; 0053290f
    JGE 0x00532905                      ; 00532911
        ;   XREF to: 00532905 (CONDITIONAL_JUMP)  ; LAB_00532905
    LEA EAX,[EAX]                       ; 00532913
    LEA EDX,[EDX]                       ; 00532919
    NOP                                 ; 0053291f
    MOV EDX,dword ptr [ESP + 0x1f8c]    ; 00532920
        ;   Label: LAB_00532920
    MOV dword ptr [ESP + 0x1f98],ESI    ; 00532927
    MOV ESI,dword ptr [EAX + 0x67e6c8]  ; 0053292e | g_Layer3BandIndex | g_Layer3BandIndex[0].l[1] | g_Layer3BandIndex[0].l[2]
    LEA EAX,[EDX*0x8 + 0x0]             ; 00532934
    ADD EAX,EDX                         ; 0053293b
    SHL EAX,0x2                         ; 0053293d
    ADD EAX,EDX                         ; 00532940
    MOV EDI,dword ptr [ESP + 0x1f98]    ; 00532942
    SHL EAX,0x2                         ; 00532949
    SHL EDI,0x2                         ; 0053294c
    MOV dword ptr [ESP + 0x1fec],EAX    ; 0053294f
    ADD EAX,EDI                         ; 00532956
    MOV dword ptr [ESP + 0x1ff4],EAX    ; 00532958
    CMP dword ptr [ESP + 0x1f98],0x15   ; 0053295f
    JGE 0x00532a5b                      ; 00532967
        ;   XREF to: 00532a5b (CONDITIONAL_JUMP)  ; LAB_00532a5b
    MOV dword ptr [ESP + 0x1ff8],EDI    ; 0053296d
    MOV EAX,dword ptr [ESP + 0x1ff4]    ; 00532974
        ;   Label: LAB_00532974
    MOV EDI,dword ptr [ESP + 0x1ff4]    ; 0053297b
    MOV EBX,dword ptr [EAX + 0x67e6c8]  ; 00532982 | g_Layer3BandIndex[0].l[1] | g_Layer3BandIndex[0].l[2]
    MOV EDI,dword ptr [EDI + 0x67e6cc]  ; 00532988 | g_Layer3BandIndex[0].l[2] | g_Layer3BandIndex[0].l[3]
    SUB EDI,EBX                         ; 0053298e
    TEST EDI,EDI                        ; 00532990
    JLE 0x00532a21                      ; 00532992
        ;   XREF to: 00532a21 (CONDITIONAL_JUMP)  ; LAB_00532a21
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00532998
    ADD EAX,dword ptr [ESP + 0x1ff8]    ; 0053299b
    LEA EBX,[ESI + ESI*0x1]             ; 005329a2
    MOV dword ptr [ESP + 0x1fd8],EAX    ; 005329a5
    LEA EAX,[ESI*0x4 + 0x0]             ; 005329ac
    MOV dword ptr [ESP + 0x1ff0],EAX    ; 005329b3
    MOV EAX,dword ptr [ESP + 0x1fd8]    ; 005329ba
        ;   Label: LAB_005329ba
    MOV AX,word ptr [EAX + 0xf8]        ; 005329c1
    MOV word ptr [ESP + EBX*0x1 + 0x1b08],AX ; 005329c8
    CMP AX,0x7                          ; 005329d0
    JZ 0x00532a07                       ; 005329d4
        ;   XREF to: 00532a07 (CONDITIONAL_JUMP)  ; LAB_00532a07
    CMP dword ptr [ESP + 0x1fa0],0x0    ; 005329d6
    JZ 0x00533393                       ; 005329de
        ;   XREF to: 00533393 (CONDITIONAL_JUMP)  ; LAB_00533393
    LEA EAX,[ESP + 0x8]                 ; 005329e4
    PUSH EAX                            ; 005329e8
    PUSH ESI                            ; 005329e9
    MOV EAX,dword ptr [ESP + 0xc]       ; 005329ea
    PUSH EAX                            ; 005329ee
    MOV EDX,dword ptr [ESP + 0xc]       ; 005329ef
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x1b12] ; 005329f3
    PUSH EDX                            ; 005329fa
    SAR EAX,0x10                        ; 005329fb
    PUSH EAX                            ; 005329fe
    CALL sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540 ; 005329ff
        ;   XREF to: 00532540 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540(int intensity_position, double ratio, int sample_index, float * ratio_buffer)
    ADD ESP,0x14                        ; 00532a04
    MOV EAX,dword ptr [ESP + 0x1ff0]    ; 00532a07
        ;   Label: LAB_00532a07
    ADD EBX,0x2                         ; 00532a0e
    INC ESI                             ; 00532a11
    ADD EAX,0x4                         ; 00532a12
    DEC EDI                             ; 00532a15
    MOV dword ptr [ESP + 0x1ff0],EAX    ; 00532a16
    TEST EDI,EDI                        ; 00532a1d
    JG 0x005329ba                       ; 00532a1f
        ;   XREF to: 005329ba (CONDITIONAL_JUMP)  ; LAB_005329ba
    MOV EDX,dword ptr [ESP + 0x1ff4]    ; 00532a21
        ;   Label: LAB_00532a21
    MOV ECX,dword ptr [ESP + 0x1ff8]    ; 00532a28
    MOV EBX,dword ptr [ESP + 0x1f98]    ; 00532a2f
    ADD EDX,0x4                         ; 00532a36
    ADD ECX,0x4                         ; 00532a39
    INC EBX                             ; 00532a3c
    MOV dword ptr [ESP + 0x1ff4],EDX    ; 00532a3d
    MOV dword ptr [ESP + 0x1ff8],ECX    ; 00532a44
    MOV dword ptr [ESP + 0x1f98],EBX    ; 00532a4b
    CMP ECX,0x54                        ; 00532a52
    JL 0x00532974                       ; 00532a55
        ;   XREF to: 00532974 (CONDITIONAL_JUMP)  ; LAB_00532974
    MOV EAX,dword ptr [ESP + 0x1fec]    ; 00532a5b
        ;   Label: LAB_00532a5b
    MOV EDI,0x240                       ; 00532a62
    MOV ECX,dword ptr [EAX + 0x67e71c]  ; 00532a67 | g_Layer3BandIndex[0].l[21]
    MOV EDX,dword ptr [ESP + 0x1fec]    ; 00532a6d
    SUB EDI,ECX                         ; 00532a74
    MOV EDX,dword ptr [EDX + 0x67e718]  ; 00532a76 | g_Layer3BandIndex[0].l[20]
    TEST EDI,EDI                        ; 00532a7c
    JLE 0x005326c0                      ; 00532a7e
        ;   XREF to: 005326c0 (CONDITIONAL_JUMP)  ; LAB_005326c0
    LEA EAX,[EDX + EDX*0x1]             ; 00532a84
    MOV dword ptr [ESP + 0x1fdc],EAX    ; 00532a87
    LEA EAX,[ESI*0x4 + 0x0]             ; 00532a8e
    LEA ECX,[ESI + ESI*0x1]             ; 00532a95
    SHL EDX,0x2                         ; 00532a98
    MOV dword ptr [ESP + 0x1ffc],ECX    ; 00532a9b
    FLD float ptr [ESP + EDX*0x1 + 0x1208] ; 00532aa2
        ;   Label: LAB_00532aa2
    FLD float ptr [ESP + EDX*0x1 + 0x8] ; 00532aa9
    MOV EBX,dword ptr [ESP + 0x1fdc]    ; 00532aad
    MOV ECX,dword ptr [ESP + 0x1ffc]    ; 00532ab4
    ADD EAX,0x4                         ; 00532abb
    INC ESI                             ; 00532abe
    DEC EDI                             ; 00532abf
    FSTP float ptr [ESP + EAX*0x1 + 0x4] ; 00532ac0
    FSTP float ptr [ESP + EAX*0x1 + 0x1204] ; 00532ac4
    FLD float ptr [ESP + EDX*0x1 + 0x908] ; 00532acb
    ADD ECX,0x2                         ; 00532ad2
    MOV BX,word ptr [ESP + EBX*0x1 + 0x1b08] ; 00532ad5
    FSTP float ptr [ESP + EAX*0x1 + 0x904] ; 00532add
    MOV dword ptr [ESP + 0x1ffc],ECX    ; 00532ae4
    MOV word ptr [ESP + ECX*0x1 + 0x1b06],BX ; 00532aeb
    TEST EDI,EDI                        ; 00532af3
    JG 0x00532aa2                       ; 00532af5
        ;   XREF to: 00532aa2 (CONDITIONAL_JUMP)  ; LAB_00532aa2
    JMP 0x005326c0                      ; 00532af7
        ;   XREF to: 005326c0 (UNCONDITIONAL_JUMP)  ; LAB_005326c0
    CMP EAX,dword ptr [ECX + 0x14]      ; 00532afc
        ;   Label: LAB_00532afc
    JNZ 0x005328a9                      ; 00532aff
        ;   XREF to: 005328a9 (CONDITIONAL_JUMP)  ; LAB_005328a9
    MOV EDX,dword ptr [ESP + 0x1f8c]    ; 00532b05
    LEA EAX,[EDX*0x8 + 0x0]             ; 00532b0c
    ADD EAX,EDX                         ; 00532b13
    SHL EAX,0x2                         ; 00532b15
    ADD EAX,EDX                         ; 00532b18
    MOV EDI,dword ptr [ECX + 0x18]      ; 00532b1a
    SHL EAX,0x2                         ; 00532b1d
    TEST EDI,EDI                        ; 00532b20
    JZ 0x00533059                       ; 00532b22
        ;   XREF to: 00533059 (CONDITIONAL_JUMP)  ; LAB_00533059
    MOV dword ptr [ESP + 0x1fe8],EAX    ; 00532b28
    MOV dword ptr [ESP + 0x1fac],EAX    ; 00532b2f
    XOR ECX,ECX                         ; 00532b36
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00532b38
    MOV dword ptr [ESP + 0x1fa4],ECX    ; 00532b3b
    MOV dword ptr [ESP + 0x205c],ECX    ; 00532b42
    MOV dword ptr [ESP + 0x2018],EAX    ; 00532b49
    MOV EBX,0x2                         ; 00532b50
        ;   Label: LAB_00532b50
    MOV EAX,dword ptr [ESP + 0x205c]    ; 00532b55
    MOV ESI,0xc                         ; 00532b5c
    INC EAX                             ; 00532b61
    MOV dword ptr [ESP + 0x1fa8],EBX    ; 00532b62
    MOV dword ptr [ESP + 0x1fb0],EAX    ; 00532b69
    MOV EDI,dword ptr [ESP + 0x1fac]    ; 00532b70
        ;   Label: LAB_00532b70
    LEA EAX,[ESI*0x4 + 0x0]             ; 00532b77
    ADD EAX,EDI                         ; 00532b7e
    MOV EBX,dword ptr [EAX + 0x67e728]  ; 00532b80 | g_Layer3BandIndex[0].l[13] | g_Layer3BandIndex[0].s[13]
    MOV EDX,dword ptr [EAX + 0x67e724]  ; 00532b86 | g_Layer3BandIndex[0].l[12] | g_Layer3BandIndex[0].s[12]
    MOV EAX,dword ptr [ESP + 0x1fb0]    ; 00532b8c
    SUB EBX,EDX                         ; 00532b93
    IMUL EAX,EBX                        ; 00532b95
    LEA EDX,[EDX + EDX*0x2]             ; 00532b98
    ADD EAX,EDX                         ; 00532b9b
    LEA ECX,[EAX + -0x1]                ; 00532b9d
    TEST EBX,EBX                        ; 00532ba0
    JLE 0x00532bf4                      ; 00532ba2
        ;   XREF to: 00532bf4 (CONDITIONAL_JUMP)  ; LAB_00532bf4
    MOV EDI,0x12                        ; 00532ba4
        ;   Label: LAB_00532ba4
    MOV EDX,ECX                         ; 00532ba9
    MOV EAX,ECX                         ; 00532bab
    SAR EDX,0x1f                        ; 00532bad
    IDIV EDI                            ; 00532bb0
    IMUL EAX,EAX,0x48                   ; 00532bb2
    MOV dword ptr [ESP + 0x2068],0x12   ; 00532bb5
    MOV EDX,ECX                         ; 00532bc0
    MOV EDI,dword ptr [EBP + 0x14]      ; 00532bc2
    SAR EDX,0x1f                        ; 00532bc5
    ADD EDI,EAX                         ; 00532bc8
    MOV EAX,ECX                         ; 00532bca
    IDIV dword ptr [ESP + 0x2068]       ; 00532bcc
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 00532bd3
    JZ 0x00532bee                       ; 00532bde
        ;   XREF to: 00532bee (CONDITIONAL_JUMP)  ; LAB_00532bee
    MOV dword ptr [ESP + 0x1fa8],ESI    ; 00532be0
    MOV ESI,0xfffffff6                  ; 00532be7
    MOV EBX,ESI                         ; 00532bec
    DEC EBX                             ; 00532bee
        ;   Label: LAB_00532bee
    DEC ECX                             ; 00532bef
    TEST EBX,EBX                        ; 00532bf0
    JG 0x00532ba4                       ; 00532bf2
        ;   XREF to: 00532ba4 (CONDITIONAL_JUMP)  ; LAB_00532ba4
    DEC ESI                             ; 00532bf4
        ;   Label: LAB_00532bf4
    CMP ESI,0x3                         ; 00532bf5
    JGE 0x00532b70                      ; 00532bf8
        ;   XREF to: 00532b70 (CONDITIONAL_JUMP)  ; LAB_00532b70
    MOV EAX,dword ptr [ESP + 0x1fa8]    ; 00532bfe
    INC EAX                             ; 00532c05
    MOV ECX,dword ptr [ESP + 0x1fa4]    ; 00532c06
    MOV dword ptr [ESP + 0x204c],EAX    ; 00532c0d
    CMP EAX,ECX                         ; 00532c14
    JG 0x00532f25                       ; 00532c16
        ;   XREF to: 00532f25 (CONDITIONAL_JUMP)  ; LAB_00532f25
    MOV EAX,dword ptr [ESP + 0x2018]    ; 00532c1c
        ;   Label: LAB_00532c1c
    MOV dword ptr [ESP + 0x1fb4],EAX    ; 00532c23
    MOV EAX,dword ptr [ESP + 0x204c]    ; 00532c2a
    MOV EBX,dword ptr [ESP + 0x1fe8]    ; 00532c31
    SHL EAX,0x2                         ; 00532c38
    ADD EAX,EBX                         ; 00532c3b
    MOV dword ptr [ESP + 0x2014],EAX    ; 00532c3d
    MOV ESI,dword ptr [ESP + 0x204c]    ; 00532c44
        ;   Label: LAB_00532c44
    CMP ESI,0xc                         ; 00532c4b
    JGE 0x00532f55                      ; 00532c4e
        ;   XREF to: 00532f55 (CONDITIONAL_JUMP)  ; LAB_00532f55
    LEA EDX,[ESI*0x4 + 0x0]             ; 00532c54
    MOV EAX,dword ptr [ESP + 0x2014]    ; 00532c5b
    MOV ESI,dword ptr [ESP + 0x2014]    ; 00532c62
    MOV EDI,dword ptr [EAX + 0x67e724]  ; 00532c69 | g_Layer3BandIndex[0].s[13]
    MOV ESI,dword ptr [ESI + 0x67e728]  ; 00532c6f | g_Layer3BandIndex[1].l[0]
    MOV EAX,dword ptr [ESP + 0x205c]    ; 00532c75
    SUB ESI,EDI                         ; 00532c7c
    IMUL EAX,ESI                        ; 00532c7e
    LEA EDI,[EDI + EDI*0x2]             ; 00532c81
    ADD EDI,EAX                         ; 00532c84
    TEST ESI,ESI                        ; 00532c86
    JLE 0x00532d16                      ; 00532c88
        ;   XREF to: 00532d16 (CONDITIONAL_JUMP)  ; LAB_00532d16
    MOV EAX,dword ptr [ESP + 0x1fb4]    ; 00532c8e
    ADD EAX,EDX                         ; 00532c95
    LEA EBX,[EDI + EDI*0x1]             ; 00532c97
    MOV dword ptr [ESP + 0x1fb8],EAX    ; 00532c9a
    LEA EAX,[EDI*0x4 + 0x0]             ; 00532ca1
    MOV dword ptr [ESP + 0x2010],EAX    ; 00532ca8
    MOV EAX,dword ptr [ESP + 0x1fb8]    ; 00532caf
        ;   Label: LAB_00532caf
    MOV AX,word ptr [EAX + 0x154]       ; 00532cb6
    MOV word ptr [ESP + EBX*0x1 + 0x1b08],AX ; 00532cbd
    CMP AX,0x7                          ; 00532cc5
    JZ 0x00532cfc                       ; 00532cc9
        ;   XREF to: 00532cfc (CONDITIONAL_JUMP)  ; LAB_00532cfc
    CMP dword ptr [ESP + 0x1fa0],0x0    ; 00532ccb
    JZ 0x00532f31                       ; 00532cd3
        ;   XREF to: 00532f31 (CONDITIONAL_JUMP)  ; LAB_00532f31
    LEA EAX,[ESP + 0x8]                 ; 00532cd9
    PUSH EAX                            ; 00532cdd
    PUSH EDI                            ; 00532cde
    MOV EDX,dword ptr [ESP + 0xc]       ; 00532cdf
    PUSH EDX                            ; 00532ce3
    MOV ECX,dword ptr [ESP + 0xc]       ; 00532ce4
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x1b12] ; 00532ce8
    PUSH ECX                            ; 00532cef
    SAR EAX,0x10                        ; 00532cf0
    PUSH EAX                            ; 00532cf3
    CALL sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540 ; 00532cf4
        ;   XREF to: 00532540 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540(int intensity_position, double ratio, int sample_index, float * ratio_buffer)
    ADD ESP,0x14                        ; 00532cf9
    MOV EAX,dword ptr [ESP + 0x2010]    ; 00532cfc
        ;   Label: LAB_00532cfc
    ADD EBX,0x2                         ; 00532d03
    INC EDI                             ; 00532d06
    ADD EAX,0x4                         ; 00532d07
    DEC ESI                             ; 00532d0a
    MOV dword ptr [ESP + 0x2010],EAX    ; 00532d0b
    TEST ESI,ESI                        ; 00532d12
    JG 0x00532caf                       ; 00532d14
        ;   XREF to: 00532caf (CONDITIONAL_JUMP)  ; LAB_00532caf
    MOV ECX,dword ptr [ESP + 0x204c]    ; 00532d16
        ;   Label: LAB_00532d16
    MOV EDX,dword ptr [ESP + 0x2014]    ; 00532d1d
    INC ECX                             ; 00532d24
    ADD EDX,0x4                         ; 00532d25
    MOV dword ptr [ESP + 0x204c],ECX    ; 00532d28
    MOV dword ptr [ESP + 0x2014],EDX    ; 00532d2f
    JMP 0x00532c44                      ; 00532d36
        ;   XREF to: 00532c44 (UNCONDITIONAL_JUMP)  ; LAB_00532c44
    MOV EDI,dword ptr [ESP + 0x205c]    ; 00532d3b
        ;   Label: LAB_00532d3b
    MOV ESI,dword ptr [ESP + 0x2018]    ; 00532d42
    INC EDI                             ; 00532d49
    ADD ESI,0x34                        ; 00532d4a
    MOV dword ptr [ESP + 0x205c],EDI    ; 00532d4d
    MOV dword ptr [ESP + 0x2018],ESI    ; 00532d54
    CMP EDI,0x3                         ; 00532d5b
    JL 0x00532b50                       ; 00532d5e
        ;   XREF to: 00532b50 (CONDITIONAL_JUMP)  ; LAB_00532b50
    CMP dword ptr [ESP + 0x1fa4],0x3    ; 00532d64
    JG 0x005326c0                       ; 00532d6c
        ;   XREF to: 005326c0 (CONDITIONAL_JUMP)  ; LAB_005326c0
    MOV ECX,0x2                         ; 00532d72
    MOV EDX,0x11                        ; 00532d77
    MOV EBX,0xffffffff                  ; 00532d7c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00532d81
    MOV dword ptr [ESP + 0x2064],EBX    ; 00532d84
    ADD EDI,0x90                        ; 00532d8b
    MOV EBX,EDX                         ; 00532d91
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 00532d93
        ;   Label: LAB_00532d93
    JZ 0x0053301d                       ; 00532d9e
        ;   XREF to: 0053301d (CONDITIONAL_JUMP)  ; LAB_0053301d
    LEA EAX,[ECX*0x8 + 0x0]             ; 00532da4
    ADD EAX,ECX                         ; 00532dab
    ADD EAX,EAX                         ; 00532dad
    ADD EAX,EDX                         ; 00532daf
    MOV dword ptr [ESP + 0x2064],EAX    ; 00532db1
    MOV EDX,dword ptr [ESP + 0x1f8c]    ; 00532db8
        ;   Label: LAB_00532db8
    LEA EAX,[EDX*0x8 + 0x0]             ; 00532dbf
    ADD EAX,EDX                         ; 00532dc6
    SHL EAX,0x2                         ; 00532dc8
    ADD EDX,EAX                         ; 00532dcb
    SHL EDX,0x2                         ; 00532dcd
    MOV EDI,dword ptr [ESP + 0x2064]    ; 00532dd0
    MOV EAX,EDX                         ; 00532dd7
    MOV EDX,dword ptr [EDX + 0x67e6c8]  ; 00532dd9 | g_Layer3BandIndex
    XOR ESI,ESI                         ; 00532ddf
    CMP EDX,EDI                         ; 00532de1
    JG 0x00532e00                       ; 00532de3
        ;   XREF to: 00532e00 (CONDITIONAL_JUMP)  ; LAB_00532e00
    MOV ECX,dword ptr [ESP + 0x2064]    ; 00532de5
    INC ESI                             ; 00532dec
        ;   Label: LAB_00532dec
    MOV EDX,dword ptr [EAX + 0x67e6cc]  ; 00532ded | g_Layer3BandIndex[0].l[1] | g_Layer3BandIndex[0].l[2]
    ADD EAX,0x4                         ; 00532df3
    CMP EDX,ECX                         ; 00532df6
    JLE 0x00532dec                      ; 00532df8
        ;   XREF to: 00532dec (CONDITIONAL_JUMP)  ; LAB_00532dec
    LEA EAX,[EAX]                       ; 00532dfa
    MOV dword ptr [ESP + 0x2048],ESI    ; 00532e00
        ;   Label: LAB_00532e00
    MOV EBX,dword ptr [ESP + 0x2048]    ; 00532e07
    MOV ESI,dword ptr [EAX + 0x67e6c8]  ; 00532e0e | g_Layer3BandIndex | g_Layer3BandIndex[0].l[1] | g_Layer3BandIndex[0].l[2]
    CMP EBX,0x8                         ; 00532e14
    JGE 0x005326c0                      ; 00532e17
        ;   XREF to: 005326c0 (CONDITIONAL_JUMP)  ; LAB_005326c0
    MOV EDX,dword ptr [ESP + 0x1f8c]    ; 00532e1d
    LEA EAX,[EDX*0x8 + 0x0]             ; 00532e24
    ADD EAX,EDX                         ; 00532e2b
    SHL EAX,0x2                         ; 00532e2d
    ADD EDX,EAX                         ; 00532e30
    SHL EDX,0x2                         ; 00532e32
    LEA EAX,[EBX*0x4 + 0x0]             ; 00532e35
    ADD EAX,EDX                         ; 00532e3c
    MOV dword ptr [ESP + 0x2020],EAX    ; 00532e3e
    MOV EDI,dword ptr [ESP + 0x2020]    ; 00532e45
        ;   Label: LAB_00532e45
    MOV EDX,dword ptr [ESP + 0x2020]    ; 00532e4c
    MOV EDI,dword ptr [EDI + 0x67e6cc]  ; 00532e53 | g_Layer3BandIndex[0].l[1] | g_Layer3BandIndex[0].l[2] | g_Layer3BandIndex[0].l[3]
    MOV ECX,dword ptr [EDX + 0x67e6c8]  ; 00532e59 | g_Layer3BandIndex[0].l[1] | g_Layer3BandIndex[0].l[2]
    MOV EAX,dword ptr [ESP + 0x2048]    ; 00532e5f
    SUB EDI,ECX                         ; 00532e66
    SHL EAX,0x2                         ; 00532e68
    TEST EDI,EDI                        ; 00532e6b
    JLE 0x00532ef7                      ; 00532e6d
        ;   XREF to: 00532ef7 (CONDITIONAL_JUMP)  ; LAB_00532ef7
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00532e73
    LEA EBX,[ESI + ESI*0x1]             ; 00532e76
    ADD EDX,EAX                         ; 00532e79
    LEA EAX,[ESI*0x4 + 0x0]             ; 00532e7b
    MOV dword ptr [ESP + 0x1fbc],EDX    ; 00532e82
    MOV dword ptr [ESP + 0x201c],EAX    ; 00532e89
    MOV EAX,dword ptr [ESP + 0x1fbc]    ; 00532e90
        ;   Label: LAB_00532e90
    MOV AX,word ptr [EAX + 0xf8]        ; 00532e97
    MOV word ptr [ESP + EBX*0x1 + 0x1b08],AX ; 00532e9e
    CMP AX,0x7                          ; 00532ea6
    JZ 0x00532edd                       ; 00532eaa
        ;   XREF to: 00532edd (CONDITIONAL_JUMP)  ; LAB_00532edd
    CMP dword ptr [ESP + 0x1fa0],0x0    ; 00532eac
    JZ 0x00533035                       ; 00532eb4
        ;   XREF to: 00533035 (CONDITIONAL_JUMP)  ; LAB_00533035
    LEA EAX,[ESP + 0x8]                 ; 00532eba
    PUSH EAX                            ; 00532ebe
    PUSH ESI                            ; 00532ebf
    MOV ECX,dword ptr [ESP + 0xc]       ; 00532ec0
    PUSH ECX                            ; 00532ec4
    MOV EAX,dword ptr [ESP + 0xc]       ; 00532ec5
    PUSH EAX                            ; 00532ec9
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x1b16] ; 00532eca
    SAR EAX,0x10                        ; 00532ed1
    PUSH EAX                            ; 00532ed4
    CALL sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540 ; 00532ed5
        ;   XREF to: 00532540 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540(int intensity_position, double ratio, int sample_index, float * ratio_buffer)
    ADD ESP,0x14                        ; 00532eda
    MOV EAX,dword ptr [ESP + 0x201c]    ; 00532edd
        ;   Label: LAB_00532edd
    ADD EBX,0x2                         ; 00532ee4
    INC ESI                             ; 00532ee7
    ADD EAX,0x4                         ; 00532ee8
    DEC EDI                             ; 00532eeb
    MOV dword ptr [ESP + 0x201c],EAX    ; 00532eec
    TEST EDI,EDI                        ; 00532ef3
    JG 0x00532e90                       ; 00532ef5
        ;   XREF to: 00532e90 (CONDITIONAL_JUMP)  ; LAB_00532e90
    MOV EBX,dword ptr [ESP + 0x2020]    ; 00532ef7
        ;   Label: LAB_00532ef7
    MOV EDI,dword ptr [ESP + 0x2048]    ; 00532efe
    ADD EBX,0x4                         ; 00532f05
    INC EDI                             ; 00532f08
    MOV dword ptr [ESP + 0x2020],EBX    ; 00532f09
    MOV dword ptr [ESP + 0x2048],EDI    ; 00532f10
    CMP EDI,0x8                         ; 00532f17
    JGE 0x005326c0                      ; 00532f1a
        ;   XREF to: 005326c0 (CONDITIONAL_JUMP)  ; LAB_005326c0
    JMP 0x00532e45                      ; 00532f20
        ;   XREF to: 00532e45 (UNCONDITIONAL_JUMP)  ; LAB_00532e45
    MOV dword ptr [ESP + 0x1fa4],EAX    ; 00532f25
        ;   Label: LAB_00532f25
    JMP 0x00532c1c                      ; 00532f2c
        ;   XREF to: 00532c1c (UNCONDITIONAL_JUMP)  ; LAB_00532c1c
    FILD word ptr [ESP + EBX*0x1 + 0x1b08] ; 00532f31
        ;   Label: LAB_00532f31
    FMUL double ptr [0x0063b092]        ; 00532f38 | DOUBLE_0063b092
    FPTAN                               ; 00532f3e
    FSTP ST0                            ; 00532f40
    MOV EAX,dword ptr [ESP + 0x2010]    ; 00532f42
    FSTP float ptr [ESP + EAX*0x1 + 0x1208] ; 00532f49
    JMP 0x00532cfc                      ; 00532f50
        ;   XREF to: 00532cfc (UNCONDITIONAL_JUMP)  ; LAB_00532cfc
    MOV EAX,dword ptr [ESP + 0x1fe8]    ; 00532f55
        ;   Label: LAB_00532f55
    MOV ESI,dword ptr [ESP + 0x1fe8]    ; 00532f5c
    MOV EDI,dword ptr [EAX + 0x67e750]  ; 00532f63 | g_Layer3BandIndex[0].s[11]
    MOV ESI,dword ptr [ESI + 0x67e754]  ; 00532f69 | g_Layer3BandIndex[0].s[12]
    MOV EDX,dword ptr [ESP + 0x205c]    ; 00532f6f
    SUB ESI,EDI                         ; 00532f76
    IMUL EDX,ESI                        ; 00532f78
    MOV ECX,dword ptr [ESP + 0x1fe8]    ; 00532f7b
    MOV ESI,dword ptr [ESP + 0x1fe8]    ; 00532f82
    MOV EBX,dword ptr [ECX + 0x67e754]  ; 00532f89 | g_Layer3BandIndex[0].s[12]
    MOV ESI,dword ptr [ESI + 0x67e758]  ; 00532f8f | g_Layer3BandIndex[0].s[13]
    MOV ECX,dword ptr [ESP + 0x205c]    ; 00532f95
    SUB ESI,EBX                         ; 00532f9c
    IMUL ECX,ESI                        ; 00532f9e
    LEA EAX,[EDI + EDI*0x2]             ; 00532fa1
    ADD EDX,EAX                         ; 00532fa4
    ADD EAX,ECX                         ; 00532fa6
    MOV dword ptr [ESP + 0x2054],EAX    ; 00532fa8
    TEST ESI,ESI                        ; 00532faf
    JLE 0x00532d3b                      ; 00532fb1
        ;   XREF to: 00532d3b (CONDITIONAL_JUMP)  ; LAB_00532d3b
    MOV ECX,dword ptr [ESP + 0x2054]    ; 00532fb7
    LEA EDI,[EDX + EDX*0x1]             ; 00532fbe
    SHL EAX,0x2                         ; 00532fc1
    SHL EDX,0x2                         ; 00532fc4
    ADD ECX,ECX                         ; 00532fc7
    FLD float ptr [ESP + EDX*0x1 + 0x1208] ; 00532fc9
        ;   Label: LAB_00532fc9
    FLD float ptr [ESP + EDX*0x1 + 0x8] ; 00532fd0
    ADD EAX,0x4                         ; 00532fd4
    ADD ECX,0x2                         ; 00532fd7
    DEC ESI                             ; 00532fda
    MOV BX,word ptr [ESP + EDI*0x1 + 0x1b08] ; 00532fdb
    FSTP float ptr [ESP + EAX*0x1 + 0x4] ; 00532fe3
    FSTP float ptr [ESP + EAX*0x1 + 0x1204] ; 00532fe7
    MOV word ptr [ESP + ECX*0x1 + 0x1b06],BX ; 00532fee
    MOV EBX,dword ptr [ESP + 0x2054]    ; 00532ff6
    FLD float ptr [ESP + EDX*0x1 + 0x908] ; 00532ffd
    INC EBX                             ; 00533004
    FSTP float ptr [ESP + EAX*0x1 + 0x904] ; 00533005
    MOV dword ptr [ESP + 0x2054],EBX    ; 0053300c
    TEST ESI,ESI                        ; 00533013
    JLE 0x00532d3b                      ; 00533015
        ;   XREF to: 00532d3b (CONDITIONAL_JUMP)  ; LAB_00532d3b
    JMP 0x00532fc9                      ; 0053301b
        ;   XREF to: 00532fc9 (UNCONDITIONAL_JUMP)  ; LAB_00532fc9
    DEC EDX                             ; 0053301d
        ;   Label: LAB_0053301d
    TEST EDX,EDX                        ; 0053301e
    JGE 0x00533028                      ; 00533020
        ;   XREF to: 00533028 (CONDITIONAL_JUMP)  ; LAB_00533028
    SUB EDI,0x48                        ; 00533022
    DEC ECX                             ; 00533025
    MOV EDX,EBX                         ; 00533026
    TEST ECX,ECX                        ; 00533028
        ;   Label: LAB_00533028
    JGE 0x00532d93                      ; 0053302a
        ;   XREF to: 00532d93 (CONDITIONAL_JUMP)  ; LAB_00532d93
    JMP 0x00532db8                      ; 00533030
        ;   XREF to: 00532db8 (UNCONDITIONAL_JUMP)  ; LAB_00532db8
    FILD word ptr [ESP + EBX*0x1 + 0x1b08] ; 00533035
        ;   Label: LAB_00533035
    FMUL double ptr [0x0063b092]        ; 0053303c | DOUBLE_0063b092
    FPTAN                               ; 00533042
    FSTP ST0                            ; 00533044
    MOV EAX,dword ptr [ESP + 0x201c]    ; 00533046
    FSTP float ptr [ESP + EAX*0x1 + 0x1208] ; 0053304d
    JMP 0x00532edd                      ; 00533054
        ;   XREF to: 00532edd (UNCONDITIONAL_JUMP)  ; LAB_00532edd
    MOV dword ptr [ESP + 0x1fe4],EAX    ; 00533059
        ;   Label: LAB_00533059
    MOV dword ptr [ESP + 0x1fc4],EAX    ; 00533060
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00533067
    MOV dword ptr [ESP + 0x1f9c],EDI    ; 0053306a
    MOV dword ptr [ESP + 0x200c],EAX    ; 00533071
    MOV ECX,0xffffffff                  ; 00533078
        ;   Label: LAB_00533078
    MOV EAX,dword ptr [ESP + 0x1f9c]    ; 0053307d
    MOV ESI,0xc                         ; 00533084
    INC EAX                             ; 00533089
    MOV dword ptr [ESP + 0x1fc0],ECX    ; 0053308a
    MOV dword ptr [ESP + 0x1fc8],EAX    ; 00533091
    MOV EBX,dword ptr [ESP + 0x1fc4]    ; 00533098
        ;   Label: LAB_00533098
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053309f
    ADD EAX,EBX                         ; 005330a6
    MOV EBX,dword ptr [EAX + 0x67e728]  ; 005330a8 | g_Layer3BandIndex[0].l[13] | g_Layer3BandIndex[0].s[13]
    MOV EDI,dword ptr [EAX + 0x67e724]  ; 005330ae | g_Layer3BandIndex[0].l[12] | g_Layer3BandIndex[0].s[12]
    MOV EDX,dword ptr [ESP + 0x1fc8]    ; 005330b4
    SUB EBX,EDI                         ; 005330bb
    IMUL EDX,EBX                        ; 005330bd
    LEA EAX,[EDI + EDI*0x2]             ; 005330c0
    ADD EAX,EDX                         ; 005330c3
    LEA ECX,[EAX + -0x1]                ; 005330c5
    TEST EBX,EBX                        ; 005330c8
    JLE 0x0053311c                      ; 005330ca
        ;   XREF to: 0053311c (CONDITIONAL_JUMP)  ; LAB_0053311c
    MOV EDI,0x12                        ; 005330cc
        ;   Label: LAB_005330cc
    MOV EDX,ECX                         ; 005330d1
    MOV EAX,ECX                         ; 005330d3
    SAR EDX,0x1f                        ; 005330d5
    IDIV EDI                            ; 005330d8
    IMUL EAX,EAX,0x48                   ; 005330da
    MOV dword ptr [ESP + 0x2068],0x12   ; 005330dd
    MOV EDX,ECX                         ; 005330e8
    MOV EDI,dword ptr [EBP + 0x14]      ; 005330ea
    SAR EDX,0x1f                        ; 005330ed
    ADD EDI,EAX                         ; 005330f0
    MOV EAX,ECX                         ; 005330f2
    IDIV dword ptr [ESP + 0x2068]       ; 005330f4
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 005330fb
    JZ 0x00533116                       ; 00533106
        ;   XREF to: 00533116 (CONDITIONAL_JUMP)  ; LAB_00533116
    MOV dword ptr [ESP + 0x1fc0],ESI    ; 00533108
    MOV ESI,0xfffffff6                  ; 0053310f
    MOV EBX,ESI                         ; 00533114
    DEC EBX                             ; 00533116
        ;   Label: LAB_00533116
    DEC ECX                             ; 00533117
    TEST EBX,EBX                        ; 00533118
    JG 0x005330cc                       ; 0053311a
        ;   XREF to: 005330cc (CONDITIONAL_JUMP)  ; LAB_005330cc
    DEC ESI                             ; 0053311c
        ;   Label: LAB_0053311c
    TEST ESI,ESI                        ; 0053311d
    JGE 0x00533098                      ; 0053311f
        ;   XREF to: 00533098 (CONDITIONAL_JUMP)  ; LAB_00533098
    MOV EAX,dword ptr [ESP + 0x1fc0]    ; 00533125
    INC EAX                             ; 0053312c
    MOV dword ptr [ESP + 0x2050],EAX    ; 0053312d
    MOV EAX,dword ptr [ESP + 0x200c]    ; 00533134
    MOV ESI,dword ptr [ESP + 0x2050]    ; 0053313b
    MOV dword ptr [ESP + 0x1fcc],EAX    ; 00533142
    SHL ESI,0x2                         ; 00533149
    MOV EAX,dword ptr [ESP + 0x1fe4]    ; 0053314c
    ADD EAX,ESI                         ; 00533153
    MOV dword ptr [ESP + 0x2004],EAX    ; 00533155
    CMP dword ptr [ESP + 0x2050],0xc    ; 0053315c
    JGE 0x0053326b                      ; 00533164
        ;   XREF to: 0053326b (CONDITIONAL_JUMP)  ; LAB_0053326b
    MOV dword ptr [ESP + 0x2008],ESI    ; 0053316a
    MOV EAX,dword ptr [ESP + 0x2004]    ; 00533171
        ;   Label: LAB_00533171
    MOV ESI,dword ptr [ESP + 0x2004]    ; 00533178
    MOV EDI,dword ptr [EAX + 0x67e724]  ; 0053317f | g_Layer3BandIndex[0].s[13] | g_Layer3BandIndex[1].l[0]
    MOV ESI,dword ptr [ESI + 0x67e728]  ; 00533185 | g_Layer3BandIndex[1].l[0] | g_Layer3BandIndex[1].l[1]
    MOV EAX,dword ptr [ESP + 0x1f9c]    ; 0053318b
    SUB ESI,EDI                         ; 00533192
    IMUL EAX,ESI                        ; 00533194
    LEA EDI,[EDI + EDI*0x2]             ; 00533197
    ADD EDI,EAX                         ; 0053319a
    TEST ESI,ESI                        ; 0053319c
    JLE 0x00533231                      ; 0053319e
        ;   XREF to: 00533231 (CONDITIONAL_JUMP)  ; LAB_00533231
    MOV EAX,dword ptr [ESP + 0x1fcc]    ; 005331a4
    ADD EAX,dword ptr [ESP + 0x2008]    ; 005331ab
    LEA EBX,[EDI + EDI*0x1]             ; 005331b2
    MOV dword ptr [ESP + 0x1fd0],EAX    ; 005331b5
    LEA EAX,[EDI*0x4 + 0x0]             ; 005331bc
    MOV dword ptr [ESP + 0x2000],EAX    ; 005331c3
    MOV EAX,dword ptr [ESP + 0x1fd0]    ; 005331ca
        ;   Label: LAB_005331ca
    MOV AX,word ptr [EAX + 0x154]       ; 005331d1
    MOV word ptr [ESP + EBX*0x1 + 0x1b08],AX ; 005331d8
    CMP AX,0x7                          ; 005331e0
    JZ 0x00533217                       ; 005331e4
        ;   XREF to: 00533217 (CONDITIONAL_JUMP)  ; LAB_00533217
    CMP dword ptr [ESP + 0x1fa0],0x0    ; 005331e6
    JZ 0x00533357                       ; 005331ee
        ;   XREF to: 00533357 (CONDITIONAL_JUMP)  ; LAB_00533357
    LEA EAX,[ESP + 0x8]                 ; 005331f4
    PUSH EAX                            ; 005331f8
    PUSH EDI                            ; 005331f9
    MOV EDX,dword ptr [ESP + 0xc]       ; 005331fa
    PUSH EDX                            ; 005331fe
    MOV ECX,dword ptr [ESP + 0xc]       ; 005331ff
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x1b12] ; 00533203
    PUSH ECX                            ; 0053320a
    SAR EAX,0x10                        ; 0053320b
    PUSH EAX                            ; 0053320e
    CALL sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540 ; 0053320f
        ;   XREF to: 00532540 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540(int intensity_position, double ratio, int sample_index, float * ratio_buffer)
    ADD ESP,0x14                        ; 00533214
    MOV EDX,dword ptr [ESP + 0x2000]    ; 00533217
        ;   Label: LAB_00533217
    ADD EBX,0x2                         ; 0053321e
    INC EDI                             ; 00533221
    ADD EDX,0x4                         ; 00533222
    DEC ESI                             ; 00533225
    MOV dword ptr [ESP + 0x2000],EDX    ; 00533226
    TEST ESI,ESI                        ; 0053322d
    JG 0x005331ca                       ; 0053322f
        ;   XREF to: 005331ca (CONDITIONAL_JUMP)  ; LAB_005331ca
    MOV EDX,dword ptr [ESP + 0x2004]    ; 00533231
        ;   Label: LAB_00533231
    MOV ECX,dword ptr [ESP + 0x2008]    ; 00533238
    MOV EBX,dword ptr [ESP + 0x2050]    ; 0053323f
    ADD EDX,0x4                         ; 00533246
    ADD ECX,0x4                         ; 00533249
    INC EBX                             ; 0053324c
    MOV dword ptr [ESP + 0x2004],EDX    ; 0053324d
    MOV dword ptr [ESP + 0x2008],ECX    ; 00533254
    MOV dword ptr [ESP + 0x2050],EBX    ; 0053325b
    CMP ECX,0x30                        ; 00533262
    JL 0x00533171                       ; 00533265
        ;   XREF to: 00533171 (CONDITIONAL_JUMP)  ; LAB_00533171
    MOV EAX,dword ptr [ESP + 0x1fe4]    ; 0053326b
        ;   Label: LAB_0053326b
    MOV ESI,dword ptr [ESP + 0x1fe4]    ; 00533272
    MOV EDI,dword ptr [EAX + 0x67e750]  ; 00533279 | g_Layer3BandIndex[0].s[11]
    MOV ESI,dword ptr [ESI + 0x67e754]  ; 0053327f | g_Layer3BandIndex[0].s[12]
    MOV ECX,dword ptr [ESP + 0x1f9c]    ; 00533285
    SUB ESI,EDI                         ; 0053328c
    IMUL ECX,ESI                        ; 0053328e
    MOV EDX,dword ptr [ESP + 0x1fe4]    ; 00533291
    MOV ESI,dword ptr [ESP + 0x1fe4]    ; 00533298
    MOV EBX,dword ptr [EDX + 0x67e754]  ; 0053329f | g_Layer3BandIndex[0].s[12]
    MOV ESI,dword ptr [ESI + 0x67e758]  ; 005332a5 | g_Layer3BandIndex[0].s[13]
    MOV EDX,dword ptr [ESP + 0x1f9c]    ; 005332ab
    SUB ESI,EBX                         ; 005332b2
    IMUL EDX,ESI                        ; 005332b4
    LEA EAX,[EDI + EDI*0x2]             ; 005332b7
    ADD ECX,EAX                         ; 005332ba
    ADD EAX,EDX                         ; 005332bc
    MOV dword ptr [ESP + 0x2058],EAX    ; 005332be
    TEST ESI,ESI                        ; 005332c5
    JLE 0x00533329                      ; 005332c7
        ;   XREF to: 00533329 (CONDITIONAL_JUMP)  ; LAB_00533329
    MOV EDX,dword ptr [ESP + 0x2058]    ; 005332c9
    LEA EDI,[ECX + ECX*0x1]             ; 005332d0
    SHL EAX,0x2                         ; 005332d3
    SHL ECX,0x2                         ; 005332d6
    ADD EDX,EDX                         ; 005332d9
    FLD float ptr [ESP + ECX*0x1 + 0x1208] ; 005332db
        ;   Label: LAB_005332db
    FLD float ptr [ESP + ECX*0x1 + 0x8] ; 005332e2
    ADD EAX,0x4                         ; 005332e6
    ADD EDX,0x2                         ; 005332e9
    DEC ESI                             ; 005332ec
    MOV BX,word ptr [ESP + EDI*0x1 + 0x1b08] ; 005332ed
    FSTP float ptr [ESP + EAX*0x1 + 0x4] ; 005332f5
    FSTP float ptr [ESP + EAX*0x1 + 0x1204] ; 005332f9
    MOV word ptr [ESP + EDX*0x1 + 0x1b06],BX ; 00533300
    MOV EBX,dword ptr [ESP + 0x2058]    ; 00533308
    FLD float ptr [ESP + ECX*0x1 + 0x908] ; 0053330f
    INC EBX                             ; 00533316
    FSTP float ptr [ESP + EAX*0x1 + 0x904] ; 00533317
    MOV dword ptr [ESP + 0x2058],EBX    ; 0053331e
    TEST ESI,ESI                        ; 00533325
    JG 0x005332db                       ; 00533327
        ;   XREF to: 005332db (CONDITIONAL_JUMP)  ; LAB_005332db
    MOV EDI,dword ptr [ESP + 0x1f9c]    ; 00533329
        ;   Label: LAB_00533329
    MOV ESI,dword ptr [ESP + 0x200c]    ; 00533330
    INC EDI                             ; 00533337
    ADD ESI,0x34                        ; 00533338
    MOV dword ptr [ESP + 0x1f9c],EDI    ; 0053333b
    MOV dword ptr [ESP + 0x200c],ESI    ; 00533342
    CMP EDI,0x3                         ; 00533349
    JGE 0x005326c0                      ; 0053334c
        ;   XREF to: 005326c0 (CONDITIONAL_JUMP)  ; LAB_005326c0
    JMP 0x00533078                      ; 00533352
        ;   XREF to: 00533078 (UNCONDITIONAL_JUMP)  ; LAB_00533078
    FILD word ptr [ESP + EBX*0x1 + 0x1b08] ; 00533357
        ;   Label: LAB_00533357
    FMUL double ptr [0x0063b092]        ; 0053335e | DOUBLE_0063b092
    FPTAN                               ; 00533364
    FSTP ST0                            ; 00533366
    MOV EAX,dword ptr [ESP + 0x2000]    ; 00533368
    FSTP float ptr [ESP + EAX*0x1 + 0x1208] ; 0053336f
    JMP 0x00533217                      ; 00533376
        ;   XREF to: 00533217 (UNCONDITIONAL_JUMP)  ; LAB_00533217
    DEC EDX                             ; 0053337b
        ;   Label: LAB_0053337b
    TEST EDX,EDX                        ; 0053337c
    JGE 0x00533386                      ; 0053337e
        ;   XREF to: 00533386 (CONDITIONAL_JUMP)  ; LAB_00533386
    SUB EBX,0x48                        ; 00533380
    DEC ECX                             ; 00533383
    MOV EDX,ESI                         ; 00533384
    TEST ECX,ECX                        ; 00533386
        ;   Label: LAB_00533386
    JGE 0x005328c0                      ; 00533388
        ;   XREF to: 005328c0 (CONDITIONAL_JUMP)  ; LAB_005328c0
    JMP 0x005328df                      ; 0053338e
        ;   XREF to: 005328df (UNCONDITIONAL_JUMP)  ; LAB_005328df
    FILD word ptr [ESP + EBX*0x1 + 0x1b08] ; 00533393
        ;   Label: LAB_00533393
    FMUL double ptr [0x0063b092]        ; 0053339a | DOUBLE_0063b092
    FPTAN                               ; 005333a0
    FSTP ST0                            ; 005333a2
    MOV EAX,dword ptr [ESP + 0x1ff0]    ; 005333a4
    FSTP float ptr [ESP + EAX*0x1 + 0x1208] ; 005333ab
    JMP 0x00532a07                      ; 005333b2
        ;   XREF to: 00532a07 (UNCONDITIONAL_JUMP)  ; LAB_00532a07
    MOV ECX,dword ptr [EAX]             ; 005333b7
        ;   Label: LAB_005333b7
    MOV dword ptr [EDX],ECX             ; 005333b9
    MOV ECX,dword ptr [EAX + 0x900]     ; 005333bb
    MOV dword ptr [EDX + 0x900],ECX     ; 005333c1
    JMP 0x005327fd                      ; 005333c7
        ;   XREF to: 005327fd (UNCONDITIONAL_JUMP)  ; LAB_005327fd
    CMP dword ptr [ESP + 0x1fd4],0x0    ; 005333cc
        ;   Label: LAB_005333cc
    JZ 0x0053342b                       ; 005333d4
        ;   XREF to: 0053342b (CONDITIONAL_JUMP)  ; LAB_0053342b
    MOV ECX,dword ptr [ESP + 0x1f88]    ; 005333d6
    MOV EDI,dword ptr [ESP + 0x1fa0]    ; 005333dd
    SHL ECX,0x2                         ; 005333e4
    TEST EDI,EDI                        ; 005333e7
    JZ 0x00533401                       ; 005333e9
        ;   XREF to: 00533401 (CONDITIONAL_JUMP)  ; LAB_00533401
    FLD float ptr [EAX]                 ; 005333eb
    FMUL float ptr [ESP + ECX*0x1 + 0x8] ; 005333ed
    FSTP float ptr [EDX]                ; 005333f1
    FLD float ptr [EAX]                 ; 005333f3
    FMUL float ptr [ESP + ECX*0x1 + 0x908] ; 005333f5
    JMP 0x005327f7                      ; 005333fc
        ;   XREF to: 005327f7 (UNCONDITIONAL_JUMP)  ; LAB_005327f7
    FLD1                                ; 00533401
        ;   Label: LAB_00533401
    FADD float ptr [ESP + ECX*0x1 + 0x1208] ; 00533403
    FDIVR float ptr [ESP + ECX*0x1 + 0x1208] ; 0053340a
    FMUL float ptr [EAX]                ; 00533411
    FLD1                                ; 00533413
    FXCH                                ; 00533415
    FSTP float ptr [EDX]                ; 00533417
    FADD float ptr [ESP + ECX*0x1 + 0x1208] ; 00533419
    FLD1                                ; 00533420
    FDIVRP                              ; 00533422
    FMUL float ptr [EAX]                ; 00533424
    JMP 0x005327f7                      ; 00533426
        ;   XREF to: 005327f7 (UNCONDITIONAL_JUMP)  ; LAB_005327f7
    PUSH 0x2f68188                      ; 0053342b | g_CurrentMp3Filename
        ;   Label: LAB_0053342b
    MOV EAX,0x63b05a                    ; 00533430 | = "..\\sound\\mp3.cpp"
    MOV EDX,0x9bd                       ; 00533435
    PUSH 0x63b06b                       ; 0053343a | = "Error in streo processing.  File: %s"
    MOV [0x02f0ca48],EAX                ; 0053343f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00533444 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053344a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0053344f
    JMP 0x005327fd                      ; 00533452
        ;   XREF to: 005327fd (UNCONDITIONAL_JUMP)  ; LAB_005327fd
    MOV ESI,dword ptr [EBP + 0x14]      ; 00533457
        ;   Label: LAB_00533457
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053345a
    XOR EBX,EBX                         ; 0053345d
    ADD ESI,0x48                        ; 0053345f
    MOV dword ptr [ESP + 0x202c],EAX    ; 00533462
    IMUL EAX,EBX,0x48                   ; 00533469
        ;   Label: LAB_00533469
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053346c
    MOV ECX,ESI                         ; 0053346f
    ADD EAX,EDX                         ; 00533471
    MOV EDX,dword ptr [ESP + 0x202c]    ; 00533473
    ADD EDX,0x4                         ; 0053347a
        ;   Label: LAB_0053347a
    FLD float ptr [EAX]                 ; 0053347d
    ADD EAX,0x4                         ; 0053347f
    FSTP float ptr [EDX + -0x4]         ; 00533482
    CMP EAX,ECX                         ; 00533485
    JNZ 0x0053347a                      ; 00533487
        ;   XREF to: 0053347a (CONDITIONAL_JUMP)  ; LAB_0053347a
    MOV ECX,dword ptr [ESP + 0x202c]    ; 00533489
    INC EBX                             ; 00533490
    ADD ECX,0x48                        ; 00533491
    ADD ESI,0x48                        ; 00533494
    MOV dword ptr [ESP + 0x202c],ECX    ; 00533497
    CMP EBX,0x20                        ; 0053349e
    JGE 0x00532866                      ; 005334a1
        ;   XREF to: 00532866 (CONDITIONAL_JUMP)  ; LAB_00532866
    JMP 0x00533469                      ; 005334a7
        ;   XREF to: 00533469 (UNCONDITIONAL_JUMP)  ; LAB_00533469

