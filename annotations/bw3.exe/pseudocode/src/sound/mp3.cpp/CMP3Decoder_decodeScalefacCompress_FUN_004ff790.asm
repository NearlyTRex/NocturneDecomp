; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_004ff790(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   scalefactor_dest
; SMpegLayer3SideInfo * Stack[0xc]:4   side_info
; int              Stack[0x10]:4   channel
; int              Stack[0x14]:4   granule
; SMpegFrame *     Stack[0x18]:4   frame
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1e]:4  local_1e
; undefined4       Stack[-0x1a]:4  local_1a
; undefined4       Stack[-0x16]:4  local_16
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004ffb20 at 004ffb6e
;
; Referenced Globals:
;   undefined4 DAT_006019e0
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff790
        ;   Label: sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_004ff790
    PUSH ESI                            ; 004ff791
    PUSH EDI                            ; 004ff792
    PUSH EBP                            ; 004ff793
    SUB ESP,0x24                        ; 004ff794
    MOV EDI,dword ptr [ESP + 0x38]      ; 004ff797
    MOV EDX,dword ptr [ESP + 0x48]      ; 004ff79b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ff79f
    ADD EAX,EDX                         ; 004ff7a6
    MOV EDX,dword ptr [ESP + 0x40]      ; 004ff7a8
    SHL EAX,0x5                         ; 004ff7ac
    ADD EDX,0x8                         ; 004ff7af
    LEA ECX,[EDX + EAX*0x1]             ; 004ff7b2
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ff7b5
    LEA EAX,[EDX*0x8 + 0x0]             ; 004ff7b9
    ADD EDX,EAX                         ; 004ff7c0
    SHL EDX,0x3                         ; 004ff7c2
    LEA EAX,[ECX + 0x10]                ; 004ff7c5
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004ff7c8
    ADD EAX,EDX                         ; 004ff7cc
    XOR EDX,EDX                         ; 004ff7ce
    MOV ESI,dword ptr [ESI]             ; 004ff7d0
    MOV word ptr [ESP + 0x18],DX        ; 004ff7d2
    MOV EDX,dword ptr [EAX + 0x14]      ; 004ff7d7
    MOV ECX,dword ptr [EAX + 0xc]       ; 004ff7da
    CMP EDX,0x2                         ; 004ff7dd
    JNZ 0x004ff7ef                      ; 004ff7e0
        ;   XREF to: 004ff7ef (CONDITIONAL_JUMP)  ; LAB_004ff7ef
    CMP dword ptr [EAX + 0x18],0x0      ; 004ff7e2
    JNZ 0x004ff7ef                      ; 004ff7e6
        ;   XREF to: 004ff7ef (CONDITIONAL_JUMP)  ; LAB_004ff7ef
    MOV word ptr [ESP + 0x18],0x1       ; 004ff7e8
    CMP dword ptr [EAX + 0x14],0x2      ; 004ff7ef
        ;   Label: LAB_004ff7ef
    JNZ 0x004ff802                      ; 004ff7f3
        ;   XREF to: 004ff802 (CONDITIONAL_JUMP)  ; LAB_004ff802
    CMP dword ptr [EAX + 0x18],0x1      ; 004ff7f5
    JNZ 0x004ff802                      ; 004ff7f9
        ;   XREF to: 004ff802 (CONDITIONAL_JUMP)  ; LAB_004ff802
    MOV word ptr [ESP + 0x18],0x2       ; 004ff7fb
    MOV EBX,dword ptr [ESI + 0x20]      ; 004ff802
        ;   Label: LAB_004ff802
    CMP EBX,0x1                         ; 004ff805
    JNZ 0x004ff844                      ; 004ff808
        ;   XREF to: 004ff844 (CONDITIONAL_JUMP)  ; LAB_004ff844
    CMP dword ptr [ESP + 0x48],0x1      ; 004ff80a
        ;   Label: LAB_004ff80a
    JNZ 0x004ff849                      ; 004ff80f
        ;   XREF to: 004ff849 (CONDITIONAL_JUMP)  ; LAB_004ff849
    MOV EBP,dword ptr [ESI + 0x20]      ; 004ff811
        ;   Label: LAB_004ff811
    CMP EBP,0x1                         ; 004ff814
    JNZ 0x004ff991                      ; 004ff817
        ;   XREF to: 004ff991 (CONDITIONAL_JUMP)  ; LAB_004ff991
    CMP dword ptr [ESP + 0x48],0x1      ; 004ff81d
        ;   Label: LAB_004ff81d
    JZ 0x004ff99f                       ; 004ff822
        ;   XREF to: 004ff99f (CONDITIONAL_JUMP)  ; LAB_004ff99f
    XOR EBX,EBX                         ; 004ff828
        ;   Label: LAB_004ff828
    MOVSX EAX,BX                        ; 004ff82a
        ;   Label: LAB_004ff82a
    CMP EAX,0x2d                        ; 004ff82d
    JGE 0x004ffa9c                      ; 004ff830
        ;   XREF to: 004ffa9c (CONDITIONAL_JUMP)  ; LAB_004ffa9c
    INC EBX                             ; 004ff836
    MOV dword ptr [EDI + EAX*0x4 + 0x7358],0x0 ; 004ff837
    JMP 0x004ff82a                      ; 004ff842
        ;   XREF to: 004ff82a (UNCONDITIONAL_JUMP)  ; LAB_004ff82a
    CMP EBX,0x3                         ; 004ff844
        ;   Label: LAB_004ff844
    JZ 0x004ff80a                       ; 004ff847
        ;   XREF to: 004ff80a (CONDITIONAL_JUMP)  ; LAB_004ff80a
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ff849
        ;   Label: LAB_004ff849
    LEA EBX,[EDX*0x8 + 0x0]             ; 004ff84d
    ADD EBX,EDX                         ; 004ff854
    MOV EDX,dword ptr [ESP + 0x48]      ; 004ff856
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ff85a
    ADD EAX,EDX                         ; 004ff861
    MOV EBP,dword ptr [ESP + 0x40]      ; 004ff863
    SHL EAX,0x5                         ; 004ff867
    SHL EBX,0x3                         ; 004ff86a
    ADD EBP,EAX                         ; 004ff86d
    ADD EBP,EBX                         ; 004ff86f
    CMP ECX,0x190                       ; 004ff871
    JNC 0x004ff8cf                      ; 004ff877
        ;   XREF to: 004ff8cf (CONDITIONAL_JUMP)  ; LAB_004ff8cf
    MOV EBX,ECX                         ; 004ff879
    MOV EDX,0x5                         ; 004ff87b
    SHR EBX,0x4                         ; 004ff880
    MOV dword ptr [ESP + 0x14],EDX      ; 004ff883
    MOV EAX,EBX                         ; 004ff887
    XOR EDX,EDX                         ; 004ff889
    DIV dword ptr [ESP + 0x14]          ; 004ff88b
    MOV dword ptr [ESP],EAX             ; 004ff88f
    MOV EAX,0x5                         ; 004ff892
    XOR EDX,EDX                         ; 004ff897
    MOV dword ptr [ESP + 0x14],EAX      ; 004ff899
    MOV EAX,EBX                         ; 004ff89d
    DIV dword ptr [ESP + 0x14]          ; 004ff89f
    MOV EAX,ECX                         ; 004ff8a3
    AND EAX,0xf                         ; 004ff8a5
    SHR EAX,0x2                         ; 004ff8a8
    MOV dword ptr [ESP + 0x8],EAX       ; 004ff8ab
    MOV EAX,ECX                         ; 004ff8af
    AND EAX,0x3                         ; 004ff8b1
    MOV dword ptr [ESP + 0x4],EDX       ; 004ff8b4
    MOV dword ptr [ESP + 0xc],EAX       ; 004ff8b8
    XOR EAX,EAX                         ; 004ff8bc
    MOV dword ptr [EBP + 0x54],0x0      ; 004ff8be
    MOV word ptr [ESP + 0x1c],AX        ; 004ff8c5
    JMP 0x004ff811                      ; 004ff8ca
        ;   XREF to: 004ff811 (UNCONDITIONAL_JUMP)  ; LAB_004ff811
    CMP ECX,0x1f4                       ; 004ff8cf
        ;   Label: LAB_004ff8cf
    JNC 0x004ff934                      ; 004ff8d5
        ;   XREF to: 004ff934 (CONDITIONAL_JUMP)  ; LAB_004ff934
    LEA EAX,[ECX + 0xfffffe70]          ; 004ff8d7
    XOR EDX,EDX                         ; 004ff8dd
    MOV EBX,EAX                         ; 004ff8df
    MOV dword ptr [ESP + 0x10],EAX      ; 004ff8e1
    MOV EAX,0x5                         ; 004ff8e5
    SHR EBX,0x2                         ; 004ff8ea
    MOV dword ptr [ESP + 0x14],EAX      ; 004ff8ed
    MOV EAX,EBX                         ; 004ff8f1
    DIV dword ptr [ESP + 0x14]          ; 004ff8f3
    MOV EDX,0x5                         ; 004ff8f7
    MOV dword ptr [ESP],EAX             ; 004ff8fc
    MOV dword ptr [ESP + 0x14],EDX      ; 004ff8ff
    MOV EAX,EBX                         ; 004ff903
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ff905
    XOR EDX,EDX                         ; 004ff909
    DIV EBX                             ; 004ff90b
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ff90d
    AND EAX,0x3                         ; 004ff911
    MOV EBX,0x1                         ; 004ff914
    MOV dword ptr [ESP + 0x8],EAX       ; 004ff919
    XOR EAX,EAX                         ; 004ff91d
    MOV dword ptr [ESP + 0x4],EDX       ; 004ff91f
    MOV dword ptr [ESP + 0xc],EAX       ; 004ff923
    MOV word ptr [ESP + 0x1c],BX        ; 004ff927
    MOV dword ptr [EBP + 0x54],EAX      ; 004ff92c
    JMP 0x004ff811                      ; 004ff92f
        ;   XREF to: 004ff811 (UNCONDITIONAL_JUMP)  ; LAB_004ff811
    CMP ECX,0x200                       ; 004ff934
        ;   Label: LAB_004ff934
    JNC 0x004ff811                      ; 004ff93a
        ;   XREF to: 004ff811 (CONDITIONAL_JUMP)  ; LAB_004ff811
    MOV EDX,0x3                         ; 004ff940
    LEA EBX,[ECX + 0xfffffe0c]          ; 004ff945
    MOV dword ptr [ESP + 0x14],EDX      ; 004ff94b
    MOV EAX,EBX                         ; 004ff94f
    XOR EDX,EDX                         ; 004ff951
    DIV dword ptr [ESP + 0x14]          ; 004ff953
    MOV dword ptr [ESP],EAX             ; 004ff957
    MOV EAX,0x3                         ; 004ff95a
    XOR EDX,EDX                         ; 004ff95f
    MOV dword ptr [ESP + 0x14],EAX      ; 004ff961
    MOV EAX,EBX                         ; 004ff965
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ff967
    DIV EBX                             ; 004ff96b
    MOV dword ptr [ESP + 0x4],EDX       ; 004ff96d
    XOR EAX,EAX                         ; 004ff971
    MOV EDX,0x2                         ; 004ff973
    MOV dword ptr [ESP + 0x8],EAX       ; 004ff978
    MOV dword ptr [ESP + 0xc],EAX       ; 004ff97c
    MOV word ptr [ESP + 0x1c],DX        ; 004ff980
    MOV dword ptr [EBP + 0x54],0x1      ; 004ff985
    JMP 0x004ff811                      ; 004ff98c
        ;   XREF to: 004ff811 (UNCONDITIONAL_JUMP)  ; LAB_004ff811
    CMP EBP,0x3                         ; 004ff991
        ;   Label: LAB_004ff991
    JZ 0x004ff81d                       ; 004ff994
        ;   XREF to: 004ff81d (CONDITIONAL_JUMP)  ; LAB_004ff81d
    JMP 0x004ff828                      ; 004ff99a
        ;   XREF to: 004ff828 (UNCONDITIONAL_JUMP)  ; LAB_004ff828
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ff99f
        ;   Label: LAB_004ff99f
    LEA EBX,[EDX*0x8 + 0x0]             ; 004ff9a3
    ADD EBX,EDX                         ; 004ff9aa
    MOV EDX,dword ptr [ESP + 0x48]      ; 004ff9ac
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ff9b0
    ADD EAX,EDX                         ; 004ff9b7
    MOV ESI,dword ptr [ESP + 0x40]      ; 004ff9b9
    SHL EAX,0x5                         ; 004ff9bd
    SHL EBX,0x3                         ; 004ff9c0
    ADD EAX,ESI                         ; 004ff9c3
    SHR ECX,0x1                         ; 004ff9c5
    ADD EBX,EAX                         ; 004ff9c7
    CMP ECX,0xb4                        ; 004ff9c9
    JNC 0x004ffa15                      ; 004ff9cf
        ;   XREF to: 004ffa15 (CONDITIONAL_JUMP)  ; LAB_004ffa15
    MOV ESI,0x24                        ; 004ff9d1
    MOV EAX,ECX                         ; 004ff9d6
    XOR EDX,EDX                         ; 004ff9d8
    DIV ESI                             ; 004ff9da
    MOV dword ptr [ESP],EAX             ; 004ff9dc
    XOR EDX,EDX                         ; 004ff9df
    MOV EAX,ECX                         ; 004ff9e1
    DIV ESI                             ; 004ff9e3
    MOV ECX,EDX                         ; 004ff9e5
    MOV ESI,0x6                         ; 004ff9e7
    MOV EAX,ECX                         ; 004ff9ec
    XOR EDX,EDX                         ; 004ff9ee
    DIV ESI                             ; 004ff9f0
    MOV dword ptr [ESP + 0x4],EAX       ; 004ff9f2
    XOR EDX,EDX                         ; 004ff9f6
    MOV EAX,ECX                         ; 004ff9f8
    DIV ESI                             ; 004ff9fa
    XOR ECX,ECX                         ; 004ff9fc
    MOV dword ptr [ESP + 0xc],ECX       ; 004ff9fe
    MOV dword ptr [ESP + 0x8],EDX       ; 004ffa02
    MOV dword ptr [EBX + 0x54],ECX      ; 004ffa06
    MOV word ptr [ESP + 0x1c],0x3       ; 004ffa09
    JMP 0x004ff828                      ; 004ffa10
        ;   XREF to: 004ff828 (UNCONDITIONAL_JUMP)  ; LAB_004ff828
    CMP ECX,0xf4                        ; 004ffa15
        ;   Label: LAB_004ffa15
    JNC 0x004ffa56                      ; 004ffa1b
        ;   XREF to: 004ffa56 (CONDITIONAL_JUMP)  ; LAB_004ffa56
    SUB ECX,0xb4                        ; 004ffa1d
    MOV EAX,ECX                         ; 004ffa23
    AND EAX,0x3f                        ; 004ffa25
    SHR EAX,0x4                         ; 004ffa28
    XOR EDX,EDX                         ; 004ffa2b
    MOV dword ptr [ESP],EAX             ; 004ffa2d
    MOV EAX,ECX                         ; 004ffa30
    MOV dword ptr [ESP + 0xc],EDX       ; 004ffa32
    AND EAX,0xf                         ; 004ffa36
    AND ECX,0x3                         ; 004ffa39
    SHR EAX,0x2                         ; 004ffa3c
    MOV dword ptr [ESP + 0x8],ECX       ; 004ffa3f
    MOV dword ptr [ESP + 0x4],EAX       ; 004ffa43
    MOV dword ptr [EBX + 0x54],EDX      ; 004ffa47
    MOV word ptr [ESP + 0x1c],0x4       ; 004ffa4a
    JMP 0x004ff828                      ; 004ffa51
        ;   XREF to: 004ff828 (UNCONDITIONAL_JUMP)  ; LAB_004ff828
    CMP ECX,0xff                        ; 004ffa56
        ;   Label: LAB_004ffa56
    JNC 0x004ff828                      ; 004ffa5c
        ;   XREF to: 004ff828 (CONDITIONAL_JUMP)  ; LAB_004ff828
    MOV ESI,0x3                         ; 004ffa62
    SUB ECX,0xf4                        ; 004ffa67
    XOR EDX,EDX                         ; 004ffa6d
    MOV EAX,ECX                         ; 004ffa6f
    DIV ESI                             ; 004ffa71
    MOV dword ptr [ESP],EAX             ; 004ffa73
    XOR EDX,EDX                         ; 004ffa76
    MOV EAX,ECX                         ; 004ffa78
    DIV ESI                             ; 004ffa7a
    XOR EBP,EBP                         ; 004ffa7c
    MOV dword ptr [ESP + 0x8],EBP       ; 004ffa7e
    MOV dword ptr [ESP + 0xc],EBP       ; 004ffa82
    MOV dword ptr [ESP + 0x4],EDX       ; 004ffa86
    MOV EDX,0x5                         ; 004ffa8a
    MOV dword ptr [EBX + 0x54],EBP      ; 004ffa8f
    MOV word ptr [ESP + 0x1c],DX        ; 004ffa92
    JMP 0x004ff828                      ; 004ffa97
        ;   XREF to: 004ff828 (UNCONDITIONAL_JUMP)  ; LAB_004ff828
    XOR EBX,EBX                         ; 004ffa9c
        ;   Label: LAB_004ffa9c
    MOV word ptr [ESP + 0x20],BX        ; 004ffa9e
    MOV EAX,dword ptr [ESP + 0x1e]      ; 004ffaa3
        ;   Label: LAB_004ffaa3
    SAR EAX,0x10                        ; 004ffaa7
    CMP EAX,0x4                         ; 004ffaaa
    JGE 0x004fe13c                      ; 004ffaad
        ;   XREF to: 004fe13c (CONDITIONAL_JUMP)  ; LAB_004fe13c
    XOR EBP,EBP                         ; 004ffab3
    XOR ESI,ESI                         ; 004ffab5
    MOV EAX,dword ptr [ESP + 0x1a]      ; 004ffab7
        ;   Label: LAB_004ffab7
    SAR EAX,0x10                        ; 004ffabb
    IMUL EAX,EAX,0x30                   ; 004ffabe
    MOV EDX,dword ptr [ESP + 0x16]      ; 004ffac1
    SAR EDX,0x10                        ; 004ffac5
    SHL EDX,0x4                         ; 004ffac8
    ADD EDX,EAX                         ; 004ffacb
    MOV EAX,dword ptr [ESP + 0x1e]      ; 004ffacd
    SAR EAX,0x10                        ; 004ffad1
    SHL EAX,0x2                         ; 004ffad4
    MOVSX ECX,SI                        ; 004ffad7
    CMP ECX,dword ptr [EDX + EAX*0x1 + 0x6019e0] ; 004ffada | DAT_006019e0
    JC 0x004ffaea                       ; 004ffae1
        ;   XREF to: 004ffaea (CONDITIONAL_JUMP)  ; LAB_004ffaea
    INC word ptr [ESP + 0x20]           ; 004ffae3
    JMP 0x004ffaa3                      ; 004ffae8
        ;   XREF to: 004ffaa3 (UNCONDITIONAL_JUMP)  ; LAB_004ffaa3
    MOV EDX,dword ptr [ESP + EAX*0x1]   ; 004ffaea
        ;   Label: LAB_004ffaea
    CMP EBP,EDX                         ; 004ffaed
    JNZ 0x004ffafd                      ; 004ffaef
        ;   XREF to: 004ffafd (CONDITIONAL_JUMP)  ; LAB_004ffafd
    MOVSX EAX,BX                        ; 004ffaf1
    MOV dword ptr [EDI + EAX*0x4 + 0x7358],EDX ; 004ffaf4
    JMP 0x004ffb11                      ; 004ffafb
        ;   XREF to: 004ffb11 (UNCONDITIONAL_JUMP)  ; LAB_004ffb11
    PUSH EDX                            ; 004ffafd
        ;   Label: LAB_004ffafd
    PUSH EDI                            ; 004ffafe
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810 ; 004ffaff
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810(CMP3Decoder * this_ptr, uint num_bits)
    MOVSX EDX,BX                        ; 004ffb04
    ADD ESP,0x8                         ; 004ffb07
    MOV dword ptr [EDI + EDX*0x4 + 0x7358],EAX ; 004ffb0a
    INC ESI                             ; 004ffb11
        ;   Label: LAB_004ffb11
    INC EBX                             ; 004ffb12
    JMP 0x004ffab7                      ; 004ffb13
        ;   XREF to: 004ffab7 (UNCONDITIONAL_JUMP)  ; LAB_004ffab7

