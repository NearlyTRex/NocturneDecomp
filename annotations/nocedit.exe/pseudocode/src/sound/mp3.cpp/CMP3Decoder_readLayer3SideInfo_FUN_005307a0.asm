; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3Granule *side_info_array ,SMpegFrame *frame)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; CFileBitStream * Stack[0x8]:4   bit_stream
; SMpegLayer3Granule * Stack[0xc]:4   side_info_array
; SMpegFrame *     Stack[0x10]:4   frame
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 0053560c
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063ae92
;   TerminatedCString s_Side_info_bad_block_type_0063aea3
;   TerminatedCString s_sound_mp3_cpp_0063aedc
;   TerminatedCString s_Side_info_bad_block_type_0063aeed
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[256] g_CurrentMp3Filename
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005307a0
        ;   Label: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
    PUSH ESI                            ; 005307a1
    PUSH EDI                            ; 005307a2
    PUSH EBP                            ; 005307a3
    SUB ESP,0x4c                        ; 005307a4
    MOV EBX,dword ptr [ESP + 0x64]      ; 005307a7
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005307ab
    MOV EDX,dword ptr [EAX + 0x10]      ; 005307af
    MOV EAX,dword ptr [EAX]             ; 005307b2
    MOV dword ptr [ESP + 0x10],EDX      ; 005307b4
    CMP dword ptr [EAX],0x0             ; 005307b8
    JZ 0x00530ab3                       ; 005307bb
        ;   XREF to: 00530ab3 (CONDITIONAL_JUMP)  ; LAB_00530ab3
    PUSH 0x9                            ; 005307c1
    PUSH EBX                            ; 005307c3
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 005307c4
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 005307c9
    MOV EDX,dword ptr [ESP + 0x68]      ; 005307cc
    MOV ESI,dword ptr [ESP + 0x10]      ; 005307d0
    MOV dword ptr [EDX],EAX             ; 005307d4
    CMP ESI,0x1                         ; 005307d6
    JNZ 0x00530a3c                      ; 005307d9
        ;   XREF to: 00530a3c (CONDITIONAL_JUMP)  ; LAB_00530a3c
    PUSH 0x5                            ; 005307df
    PUSH EBX                            ; 005307e1
        ;   Label: LAB_005307e1
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 005307e2
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 005307e7
    MOV EDX,dword ptr [ESP + 0x68]      ; 005307ea
    MOV dword ptr [EDX + 0x4],EAX       ; 005307ee
    MOV EDI,dword ptr [ESP + 0x10]      ; 005307f1
    XOR EBP,EBP                         ; 005307f5
    TEST EDI,EDI                        ; 005307f7
    JLE 0x0053083b                      ; 005307f9
        ;   XREF to: 0053083b (CONDITIONAL_JUMP)  ; LAB_0053083b
    MOV EAX,dword ptr [ESP + 0x68]      ; 005307fb
    ADD EAX,0x10                        ; 005307ff
    MOV dword ptr [ESP],EAX             ; 00530802
    IMUL EAX,EBP,0xa0                   ; 00530805
        ;   Label: LAB_00530805
    MOV ESI,dword ptr [ESP + 0x68]      ; 0053080b
    MOV EDI,dword ptr [ESP]             ; 0053080f
    ADD ESI,EAX                         ; 00530812
    PUSH EBX                            ; 00530814
        ;   Label: LAB_00530814
    ADD ESI,0x4                         ; 00530815
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 00530818
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0053081d
    MOV dword ptr [ESI + 0x4],EAX       ; 00530820
    CMP ESI,EDI                         ; 00530823
    JNZ 0x00530814                      ; 00530825
        ;   XREF to: 00530814 (CONDITIONAL_JUMP)  ; LAB_00530814
    MOV EAX,dword ptr [ESP]             ; 00530827
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053082a
    ADD EAX,0xa0                        ; 0053082e
    INC EBP                             ; 00530833
    MOV dword ptr [ESP],EAX             ; 00530834
    CMP EBP,EDX                         ; 00530837
    JL 0x00530805                       ; 00530839
        ;   XREF to: 00530805 (CONDITIONAL_JUMP)  ; LAB_00530805
    XOR ECX,ECX                         ; 0053083b
        ;   Label: LAB_0053083b
    MOV dword ptr [ESP + 0x4],ECX       ; 0053083d
    XOR ESI,ESI                         ; 00530841
        ;   Label: LAB_00530841
    MOV EDI,dword ptr [ESP + 0x10]      ; 00530843
    MOV dword ptr [ESP + 0x28],ESI      ; 00530847
    TEST EDI,EDI                        ; 0053084b
    JLE 0x00530a1d                      ; 0053084d
        ;   XREF to: 00530a1d (CONDITIONAL_JUMP)  ; LAB_00530a1d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00530853
    MOV EDX,dword ptr [ESP + 0x68]      ; 00530857
    MOV dword ptr [ESP + 0xc],EAX       ; 0053085b
    MOV dword ptr [ESP + 0x40],EAX      ; 0053085f
    MOV dword ptr [ESP + 0x44],EAX      ; 00530863
    ADD EAX,EDX                         ; 00530867
    MOV dword ptr [ESP + 0x38],EAX      ; 00530869
    MOV dword ptr [ESP + 0x18],EAX      ; 0053086d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00530871
    MOV dword ptr [ESP + 0x30],EAX      ; 00530875
    PUSH 0xc                            ; 00530879
        ;   Label: LAB_00530879
    PUSH EBX                            ; 0053087b
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0053087c
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530881
    IMUL EBP,dword ptr [ESP + 0x28],0xa0 ; 00530884
    PUSH 0x9                            ; 0053088c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0053088e
    PUSH EBX                            ; 00530892
    MOV ESI,dword ptr [ESP + 0x70]      ; 00530893
    MOV dword ptr [EDX + 0x18],EAX      ; 00530897
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0053089a
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0053089f
    PUSH 0x8                            ; 005308a2
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005308a4
    PUSH EBX                            ; 005308a8
    MOV dword ptr [EDX + 0x1c],EAX      ; 005308a9
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 005308ac
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 005308b1
    PUSH 0x4                            ; 005308b4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005308b6
    PUSH EBX                            ; 005308ba
    MOV dword ptr [EDX + 0x20],EAX      ; 005308bb
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 005308be
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 005308c3
    MOV EDX,dword ptr [ESP + 0x38]      ; 005308c6
    PUSH EBX                            ; 005308ca
    MOV dword ptr [EDX + 0x24],EAX      ; 005308cb
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 005308ce
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 005308d3
    MOV EDX,dword ptr [ESP + 0x38]      ; 005308d6
    ADD EBP,ESI                         ; 005308da
    MOV dword ptr [EDX + 0x28],EAX      ; 005308dc
    TEST EAX,EAX                        ; 005308df
    JZ 0x00530a6a                       ; 005308e1
        ;   XREF to: 00530a6a (CONDITIONAL_JUMP)  ; LAB_00530a6a
    PUSH 0x2                            ; 005308e7
    PUSH EBX                            ; 005308e9
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 005308ea
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 005308ef
    MOV EDX,dword ptr [ESP + 0x38]      ; 005308f2
    PUSH EBX                            ; 005308f6
    MOV dword ptr [EDX + 0x2c],EAX      ; 005308f7
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 005308fa
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 005308ff
    MOV EDI,dword ptr [ESP + 0xc]       ; 00530902
    MOV EDX,dword ptr [ESP + 0x38]      ; 00530906
    ADD EDI,EBP                         ; 0053090a
    MOV dword ptr [EDX + 0x30],EAX      ; 0053090c
    MOV ESI,EDI                         ; 0053090f
    ADD EDI,0x8                         ; 00530911
    PUSH 0x5                            ; 00530914
        ;   Label: LAB_00530914
    PUSH EBX                            ; 00530916
    ADD ESI,0x4                         ; 00530917
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0053091a
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0053091f
    MOV dword ptr [ESI + 0x30],EAX      ; 00530922
    CMP ESI,EDI                         ; 00530925
    JNZ 0x00530914                      ; 00530927
        ;   XREF to: 00530914 (CONDITIONAL_JUMP)  ; LAB_00530914
    IMUL EBP,dword ptr [ESP + 0x28],0xa0 ; 00530929
    MOV EDX,dword ptr [ESP + 0x68]      ; 00530931
    XOR ESI,EDI                         ; 00530935
    ADD EBP,EDX                         ; 00530937
    PUSH 0x3                            ; 00530939
        ;   Label: LAB_00530939
    PUSH EBX                            ; 0053093b
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0053093c
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530941
    MOV EDX,dword ptr [ESP + 0x44]      ; 00530944
    ADD EDX,EBP                         ; 00530948
    LEA EDI,[EDX + ESI*0x1]             ; 0053094a
    ADD ESI,0x4                         ; 0053094d
    MOV dword ptr [EDI + 0x40],EAX      ; 00530950
    CMP ESI,0xc                         ; 00530953
    JNZ 0x00530939                      ; 00530956
        ;   XREF to: 00530939 (CONDITIONAL_JUMP)  ; LAB_00530939
    MOV ECX,dword ptr [EDX + 0x2c]      ; 00530958
    TEST ECX,ECX                        ; 0053095b
    JNZ 0x00530a43                      ; 0053095d
        ;   XREF to: 00530a43 (CONDITIONAL_JUMP)  ; LAB_00530a43
    PUSH 0x2f68188                      ; 00530963 | g_CurrentMp3Filename
    MOV EBP,0x63ae92                    ; 00530968 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x660                       ; 0053096d
    PUSH 0x63aea3                       ; 00530972 | = "Side info bad: block_type == 0 in spl..."
    MOV dword ptr [0x02f0ca48],EBP      ; 00530977 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0053097d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00530982
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00530987
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053098a
        ;   Label: LAB_0053098a
    MOV EDX,0x14                        ; 0053098e
    MOV ECX,dword ptr [EAX + 0x4c]      ; 00530993
    MOV EAX,EDX                         ; 00530996
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00530998
    SUB EAX,ECX                         ; 0053099c
    MOV dword ptr [EDX + 0x50],EAX      ; 0053099e
    PUSH EBX                            ; 005309a1
        ;   Label: LAB_005309a1
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 005309a2
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 005309a7
    MOV EDX,dword ptr [ESP + 0x30]      ; 005309aa
    PUSH EBX                            ; 005309ae
    MOV dword ptr [EDX + 0x54],EAX      ; 005309af
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 005309b2
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 005309b7
    MOV EDX,dword ptr [ESP + 0x30]      ; 005309ba
    PUSH EBX                            ; 005309be
    MOV dword ptr [EDX + 0x58],EAX      ; 005309bf
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 005309c2
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 005309c7
    MOV EDX,dword ptr [ESP + 0x30]      ; 005309ca
    MOV EBP,dword ptr [ESP + 0x38]      ; 005309ce
    MOV ECX,dword ptr [ESP + 0x30]      ; 005309d2
    MOV ESI,dword ptr [ESP + 0x28]      ; 005309d6
    MOV EDI,dword ptr [ESP + 0x10]      ; 005309da
    ADD EBP,0xa0                        ; 005309de
    ADD ECX,0xa0                        ; 005309e4
    INC ESI                             ; 005309ea
    MOV dword ptr [EDX + 0x5c],EAX      ; 005309eb
    MOV EAX,dword ptr [ESP + 0x18]      ; 005309ee
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005309f2
    MOV dword ptr [ESP + 0x38],EBP      ; 005309f6
    MOV dword ptr [ESP + 0x30],ECX      ; 005309fa
    MOV dword ptr [ESP + 0x28],ESI      ; 005309fe
    ADD EAX,0xa0                        ; 00530a02
    ADD EDX,0xa0                        ; 00530a07
    MOV dword ptr [ESP + 0x18],EAX      ; 00530a0d
    MOV dword ptr [ESP + 0x1c],EDX      ; 00530a11
    CMP ESI,EDI                         ; 00530a15
    JL 0x00530879                       ; 00530a17
        ;   XREF to: 00530879 (CONDITIONAL_JUMP)  ; LAB_00530879
    MOV EBP,dword ptr [ESP + 0x4]       ; 00530a1d
        ;   Label: LAB_00530a1d
    ADD EBP,0x48                        ; 00530a21
    MOV dword ptr [ESP + 0x4],EBP       ; 00530a24
    CMP EBP,0x90                        ; 00530a28
    JNZ 0x00530841                      ; 00530a2e
        ;   XREF to: 00530841 (CONDITIONAL_JUMP)  ; LAB_00530841
    ADD ESP,0x4c                        ; 00530a34
        ;   Label: LAB_00530a34
    POP EBP                             ; 00530a37
    POP EDI                             ; 00530a38
    POP ESI                             ; 00530a39
    POP EBX                             ; 00530a3a
    RET                                 ; 00530a3b
    PUSH 0x3                            ; 00530a3c
        ;   Label: LAB_00530a3c
    JMP 0x005307e1                      ; 00530a3e
        ;   XREF to: 005307e1 (UNCONDITIONAL_JUMP)  ; LAB_005307e1
    CMP ECX,0x2                         ; 00530a43
        ;   Label: LAB_00530a43
    JNZ 0x00530a5a                      ; 00530a46
        ;   XREF to: 00530a5a (CONDITIONAL_JUMP)  ; LAB_00530a5a
    CMP dword ptr [EDX + 0x30],0x0      ; 00530a48
    JNZ 0x00530a5a                      ; 00530a4c
        ;   XREF to: 00530a5a (CONDITIONAL_JUMP)  ; LAB_00530a5a
    MOV dword ptr [EDX + 0x4c],0x8      ; 00530a4e
    JMP 0x0053098a                      ; 00530a55
        ;   XREF to: 0053098a (UNCONDITIONAL_JUMP)  ; LAB_0053098a
    MOV EAX,dword ptr [ESP + 0x18]      ; 00530a5a
        ;   Label: LAB_00530a5a
    MOV dword ptr [EAX + 0x4c],0x7      ; 00530a5e
    JMP 0x0053098a                      ; 00530a65
        ;   XREF to: 0053098a (UNCONDITIONAL_JUMP)  ; LAB_0053098a
    XOR ESI,ESI                         ; 00530a6a
        ;   Label: LAB_00530a6a
    PUSH 0x5                            ; 00530a6c
        ;   Label: LAB_00530a6c
    PUSH EBX                            ; 00530a6e
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530a6f
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530a74
    MOV EDI,dword ptr [ESP + 0x40]      ; 00530a77
    ADD EDI,EBP                         ; 00530a7b
    LEA EDX,[EDI + ESI*0x1]             ; 00530a7d
    ADD ESI,0x4                         ; 00530a80
    MOV dword ptr [EDX + 0x34],EAX      ; 00530a83
    CMP ESI,0xc                         ; 00530a86
    JNZ 0x00530a6c                      ; 00530a89
        ;   XREF to: 00530a6c (CONDITIONAL_JUMP)  ; LAB_00530a6c
    PUSH 0x4                            ; 00530a8b
    PUSH EBX                            ; 00530a8d
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530a8e
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530a93
    PUSH 0x3                            ; 00530a96
    PUSH EBX                            ; 00530a98
    MOV dword ptr [EDI + 0x4c],EAX      ; 00530a99
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530a9c
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    MOV dword ptr [EDI + 0x2c],0x0      ; 00530aa1
    ADD ESP,0x8                         ; 00530aa8
    MOV dword ptr [EDI + 0x50],EAX      ; 00530aab
    JMP 0x005309a1                      ; 00530aae
        ;   XREF to: 005309a1 (UNCONDITIONAL_JUMP)  ; LAB_005309a1
    PUSH 0x8                            ; 00530ab3
        ;   Label: LAB_00530ab3
    PUSH EBX                            ; 00530ab5
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530ab6
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530abb
    MOV EDX,dword ptr [ESP + 0x68]      ; 00530abe
    MOV ECX,dword ptr [ESP + 0x10]      ; 00530ac2
    MOV dword ptr [EDX],EAX             ; 00530ac6
    CMP ECX,0x1                         ; 00530ac8
    JNZ 0x00530c37                      ; 00530acb
        ;   XREF to: 00530c37 (CONDITIONAL_JUMP)  ; LAB_00530c37
    PUSH ECX                            ; 00530ad1
    PUSH EBX                            ; 00530ad2
        ;   Label: LAB_00530ad2
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530ad3
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530ad8
    MOV EDX,dword ptr [ESP + 0x68]      ; 00530adb
    MOV dword ptr [EDX + 0x4],EAX       ; 00530adf
    XOR ESI,ESI                         ; 00530ae2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00530ae4
    MOV dword ptr [ESP + 0x2c],ESI      ; 00530ae8
    TEST EDI,EDI                        ; 00530aec
    JLE 0x00530a34                      ; 00530aee
        ;   XREF to: 00530a34 (CONDITIONAL_JUMP)  ; LAB_00530a34
    MOV EAX,dword ptr [ESP + 0x68]      ; 00530af4
    MOV dword ptr [ESP + 0x8],ESI       ; 00530af8
    MOV dword ptr [ESP + 0x48],ESI      ; 00530afc
    MOV dword ptr [ESP + 0x3c],ESI      ; 00530b00
    MOV dword ptr [ESP + 0x34],EAX      ; 00530b04
    MOV dword ptr [ESP + 0x14],EAX      ; 00530b08
    MOV dword ptr [ESP + 0x20],EAX      ; 00530b0c
    MOV dword ptr [ESP + 0x24],EAX      ; 00530b10
    PUSH 0xc                            ; 00530b14
        ;   Label: LAB_00530b14
    PUSH EBX                            ; 00530b16
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530b17
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530b1c
    IMUL EBP,dword ptr [ESP + 0x2c],0xa0 ; 00530b1f
    PUSH 0x9                            ; 00530b27
    MOV EDX,dword ptr [ESP + 0x38]      ; 00530b29
    PUSH EBX                            ; 00530b2d
    MOV ESI,dword ptr [ESP + 0x70]      ; 00530b2e
    MOV dword ptr [EDX + 0x18],EAX      ; 00530b32
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530b35
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530b3a
    PUSH 0x8                            ; 00530b3d
    MOV EDX,dword ptr [ESP + 0x38]      ; 00530b3f
    PUSH EBX                            ; 00530b43
    MOV dword ptr [EDX + 0x1c],EAX      ; 00530b44
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530b47
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530b4c
    PUSH 0x9                            ; 00530b4f
    MOV EDX,dword ptr [ESP + 0x38]      ; 00530b51
    PUSH EBX                            ; 00530b55
    MOV dword ptr [EDX + 0x20],EAX      ; 00530b56
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530b59
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530b5e
    MOV EDX,dword ptr [ESP + 0x34]      ; 00530b61
    PUSH EBX                            ; 00530b65
    MOV dword ptr [EDX + 0x24],EAX      ; 00530b66
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 00530b69
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 00530b6e
    MOV EDX,dword ptr [ESP + 0x34]      ; 00530b71
    ADD EBP,ESI                         ; 00530b75
    MOV dword ptr [EDX + 0x28],EAX      ; 00530b77
    TEST EAX,EAX                        ; 00530b7a
    JNZ 0x00530c3e                      ; 00530b7c
        ;   XREF to: 00530c3e (CONDITIONAL_JUMP)  ; LAB_00530c3e
    XOR ESI,ESI                         ; 00530b82
    PUSH 0x5                            ; 00530b84
        ;   Label: LAB_00530b84
    PUSH EBX                            ; 00530b86
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530b87
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530b8c
    MOV EDI,dword ptr [ESP + 0x48]      ; 00530b8f
    ADD EDI,EBP                         ; 00530b93
    LEA EDX,[EDI + ESI*0x1]             ; 00530b95
    ADD ESI,0x4                         ; 00530b98
    MOV dword ptr [EDX + 0x34],EAX      ; 00530b9b
    CMP ESI,0xc                         ; 00530b9e
    JNZ 0x00530b84                      ; 00530ba1
        ;   XREF to: 00530b84 (CONDITIONAL_JUMP)  ; LAB_00530b84
    PUSH 0x4                            ; 00530ba3
    PUSH EBX                            ; 00530ba5
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530ba6
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530bab
    PUSH 0x3                            ; 00530bae
    PUSH EBX                            ; 00530bb0
    MOV dword ptr [EDI + 0x4c],EAX      ; 00530bb1
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530bb4
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    MOV dword ptr [EDI + 0x2c],0x0      ; 00530bb9
    ADD ESP,0x8                         ; 00530bc0
    MOV dword ptr [EDI + 0x50],EAX      ; 00530bc3
    PUSH EBX                            ; 00530bc6
        ;   Label: LAB_00530bc6
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 00530bc7
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 00530bcc
    MOV EDX,dword ptr [ESP + 0x24]      ; 00530bcf
    PUSH EBX                            ; 00530bd3
    MOV dword ptr [EDX + 0x58],EAX      ; 00530bd4
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 00530bd7
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 00530bdc
    MOV EDX,dword ptr [ESP + 0x24]      ; 00530bdf
    MOV EBP,dword ptr [ESP + 0x34]      ; 00530be3
    MOV ECX,dword ptr [ESP + 0x24]      ; 00530be7
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00530beb
    MOV EDI,dword ptr [ESP + 0x10]      ; 00530bef
    ADD EBP,0xa0                        ; 00530bf3
    ADD ECX,0xa0                        ; 00530bf9
    INC ESI                             ; 00530bff
    MOV dword ptr [EDX + 0x5c],EAX      ; 00530c00
    MOV EAX,dword ptr [ESP + 0x14]      ; 00530c03
    MOV EDX,dword ptr [ESP + 0x20]      ; 00530c07
    MOV dword ptr [ESP + 0x34],EBP      ; 00530c0b
    MOV dword ptr [ESP + 0x24],ECX      ; 00530c0f
    MOV dword ptr [ESP + 0x2c],ESI      ; 00530c13
    ADD EAX,0xa0                        ; 00530c17
    ADD EDX,0xa0                        ; 00530c1c
    MOV dword ptr [ESP + 0x14],EAX      ; 00530c22
    MOV dword ptr [ESP + 0x20],EDX      ; 00530c26
    CMP ESI,EDI                         ; 00530c2a
    JGE 0x00530a34                      ; 00530c2c
        ;   XREF to: 00530a34 (CONDITIONAL_JUMP)  ; LAB_00530a34
    JMP 0x00530b14                      ; 00530c32
        ;   XREF to: 00530b14 (UNCONDITIONAL_JUMP)  ; LAB_00530b14
    PUSH 0x2                            ; 00530c37
        ;   Label: LAB_00530c37
    JMP 0x00530ad2                      ; 00530c39
        ;   XREF to: 00530ad2 (UNCONDITIONAL_JUMP)  ; LAB_00530ad2
    PUSH 0x2                            ; 00530c3e
        ;   Label: LAB_00530c3e
    PUSH EBX                            ; 00530c40
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530c41
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530c46
    MOV EDX,dword ptr [ESP + 0x34]      ; 00530c49
    PUSH EBX                            ; 00530c4d
    MOV dword ptr [EDX + 0x2c],EAX      ; 00530c4e
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 00530c51
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 00530c56
    MOV EDI,dword ptr [ESP + 0x8]       ; 00530c59
    MOV EDX,dword ptr [ESP + 0x34]      ; 00530c5d
    ADD EDI,EBP                         ; 00530c61
    MOV dword ptr [EDX + 0x30],EAX      ; 00530c63
    MOV ESI,EDI                         ; 00530c66
    ADD EDI,0x8                         ; 00530c68
    PUSH 0x5                            ; 00530c6b
        ;   Label: LAB_00530c6b
    PUSH EBX                            ; 00530c6d
    ADD ESI,0x4                         ; 00530c6e
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530c71
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530c76
    MOV dword ptr [ESI + 0x30],EAX      ; 00530c79
    CMP ESI,EDI                         ; 00530c7c
    JNZ 0x00530c6b                      ; 00530c7e
        ;   XREF to: 00530c6b (CONDITIONAL_JUMP)  ; LAB_00530c6b
    IMUL EBP,dword ptr [ESP + 0x2c],0xa0 ; 00530c80
    MOV EDX,dword ptr [ESP + 0x68]      ; 00530c88
    XOR ESI,EDI                         ; 00530c8c
    ADD EBP,EDX                         ; 00530c8e
    PUSH 0x3                            ; 00530c90
        ;   Label: LAB_00530c90
    PUSH EBX                            ; 00530c92
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00530c93
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00530c98
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00530c9b
    ADD EDX,EBP                         ; 00530c9f
    LEA EDI,[EDX + ESI*0x1]             ; 00530ca1
    ADD ESI,0x4                         ; 00530ca4
    MOV dword ptr [EDI + 0x40],EAX      ; 00530ca7
    CMP ESI,0xc                         ; 00530caa
    JNZ 0x00530c90                      ; 00530cad
        ;   XREF to: 00530c90 (CONDITIONAL_JUMP)  ; LAB_00530c90
    MOV ECX,dword ptr [EDX + 0x2c]      ; 00530caf
    TEST ECX,ECX                        ; 00530cb2
    JNZ 0x00530cf9                      ; 00530cb4
        ;   XREF to: 00530cf9 (CONDITIONAL_JUMP)  ; LAB_00530cf9
    PUSH 0x2f68188                      ; 00530cb6 | g_CurrentMp3Filename
    MOV EBP,0x63aedc                    ; 00530cbb | = "..\\sound\\mp3.cpp"
    MOV EAX,0x68f                       ; 00530cc0
    PUSH 0x63aeed                       ; 00530cc5 | = "Side info bad: block_type == 0 in spl..."
    MOV dword ptr [0x02f0ca48],EBP      ; 00530cca | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00530cd0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00530cd5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00530cda
    MOV EAX,dword ptr [ESP + 0x20]      ; 00530cdd
        ;   Label: LAB_00530cdd
    MOV EDX,0x14                        ; 00530ce1
    MOV ECX,dword ptr [EAX + 0x4c]      ; 00530ce6
    MOV EAX,EDX                         ; 00530ce9
    MOV EDX,dword ptr [ESP + 0x20]      ; 00530ceb
    SUB EAX,ECX                         ; 00530cef
    MOV dword ptr [EDX + 0x50],EAX      ; 00530cf1
    JMP 0x00530bc6                      ; 00530cf4
        ;   XREF to: 00530bc6 (UNCONDITIONAL_JUMP)  ; LAB_00530bc6
    CMP ECX,0x2                         ; 00530cf9
        ;   Label: LAB_00530cf9
    JNZ 0x00530d0d                      ; 00530cfc
        ;   XREF to: 00530d0d (CONDITIONAL_JUMP)  ; LAB_00530d0d
    CMP dword ptr [EDX + 0x30],0x0      ; 00530cfe
    JNZ 0x00530d0d                      ; 00530d02
        ;   XREF to: 00530d0d (CONDITIONAL_JUMP)  ; LAB_00530d0d
    MOV dword ptr [EDX + 0x4c],0x8      ; 00530d04
    JMP 0x00530cdd                      ; 00530d0b
        ;   XREF to: 00530cdd (UNCONDITIONAL_JUMP)  ; LAB_00530cdd
    MOV EAX,dword ptr [ESP + 0x14]      ; 00530d0d
        ;   Label: LAB_00530d0d
    MOV dword ptr [EAX + 0x4c],0x7      ; 00530d11
    JMP 0x00530cdd                      ; 00530d18
        ;   XREF to: 00530cdd (UNCONDITIONAL_JUMP)  ; LAB_00530cdd

