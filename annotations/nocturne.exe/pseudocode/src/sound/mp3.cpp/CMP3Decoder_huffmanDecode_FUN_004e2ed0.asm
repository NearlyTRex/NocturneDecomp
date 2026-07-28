; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0(CMP3Decoder *param_1,char *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004e5200 at 004e5384
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0058b644
;   TerminatedCString s_Illegal_Huffman_code_in_0058b655
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01cd944c
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2ed0
        ;   Label: sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0
    PUSH ESI                            ; 004e2ed1
    PUSH EDI                            ; 004e2ed2
    PUSH EBP                            ; 004e2ed3
    SUB ESP,0x4                         ; 004e2ed4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004e2ed7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e2edb
    MOV EDX,0x1                         ; 004e2edf
    MOV EDI,0x80000000                  ; 004e2ee4
    LEA EAX,[ESI + 0x20]                ; 004e2ee9
    XOR EBX,EBX                         ; 004e2eec
    MOV dword ptr [ESP],EDX             ; 004e2eee
    TEST EAX,EAX                        ; 004e2ef1
    JZ 0x004e300b                       ; 004e2ef3
        ;   XREF to: 004e300b (CONDITIONAL_JUMP)  ; LAB_004e300b
    MOV ECX,dword ptr [ESI + 0x824]     ; 004e2ef9
    TEST ECX,ECX                        ; 004e2eff
    JZ 0x004e3018                       ; 004e2f01
        ;   XREF to: 004e3018 (CONDITIONAL_JUMP)  ; LAB_004e3018
    LEA EAX,[EBX + EBX*0x1]             ; 004e2f07
        ;   Label: LAB_004e2f07
    ADD EAX,ESI                         ; 004e2f0a
    CMP byte ptr [EAX + 0x20],0x0       ; 004e2f0c
    JNZ 0x004e302e                      ; 004e2f10
        ;   XREF to: 004e302e (CONDITIONAL_JUMP)  ; LAB_004e302e
    XOR EBX,EBX                         ; 004e2f16
    MOV BL,byte ptr [EAX + 0x21]        ; 004e2f18
    MOV EDI,dword ptr [ESP + 0x20]      ; 004e2f1b
    SAR EBX,0x4                         ; 004e2f1f
    MOV dword ptr [EDI],EBX             ; 004e2f22
    MOV AL,byte ptr [EAX + 0x21]        ; 004e2f24
    AND AL,0xf                          ; 004e2f27
    MOV EBX,dword ptr [ESP + 0x24]      ; 004e2f29
    AND EAX,0xff                        ; 004e2f2d
    MOV dword ptr [EBX],EAX             ; 004e2f32
    XOR EBX,EBX                         ; 004e2f34
    MOV dword ptr [ESP],EBX             ; 004e2f36
    MOV DH,byte ptr [ESI]               ; 004e2f39
        ;   Label: LAB_004e2f39
    CMP DH,0x33                         ; 004e2f3b
    JNZ 0x004e30b6                      ; 004e2f3e
        ;   XREF to: 004e30b6 (CONDITIONAL_JUMP)  ; LAB_004e30b6
    MOV BL,byte ptr [ESI + 0x1]         ; 004e2f44
    CMP BL,0x32                         ; 004e2f47
    JNZ 0x004e30ae                      ; 004e2f4a
        ;   XREF to: 004e30ae (CONDITIONAL_JUMP)  ; LAB_004e30ae
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e2f50
        ;   Label: LAB_004e2f50
    MOV EAX,dword ptr [EAX]             ; 004e2f54
    SAR EAX,0x3                         ; 004e2f56
    MOV EBX,dword ptr [ESP + 0x28]      ; 004e2f59
    AND EAX,0x1                         ; 004e2f5d
    MOV dword ptr [EBX],EAX             ; 004e2f60
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e2f62
    MOV EAX,dword ptr [EAX]             ; 004e2f66
    SAR EAX,0x2                         ; 004e2f68
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004e2f6b
    AND EAX,0x1                         ; 004e2f6f
    MOV dword ptr [EBX],EAX             ; 004e2f72
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e2f74
    MOV EAX,dword ptr [EAX]             ; 004e2f78
    SAR EAX,0x1                         ; 004e2f7a
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e2f7c
    AND EAX,0x1                         ; 004e2f80
    MOV dword ptr [EBX],EAX             ; 004e2f83
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e2f85
    AND dword ptr [EAX],0x1             ; 004e2f89
    MOV EAX,dword ptr [ESP + 0x28]      ; 004e2f8c
    CMP dword ptr [EAX],0x0             ; 004e2f90
    JZ 0x004e2fa9                       ; 004e2f93
        ;   XREF to: 004e2fa9 (CONDITIONAL_JUMP)  ; LAB_004e2fa9
    PUSH EBP                            ; 004e2f95
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0 ; 004e2f96
        ;   XREF to: 004e2dd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 004e2f9b
    CMP EAX,0x1                         ; 004e2f9e
    JNZ 0x004e2fa9                      ; 004e2fa1
        ;   XREF to: 004e2fa9 (CONDITIONAL_JUMP)  ; LAB_004e2fa9
    MOV EAX,dword ptr [ESP + 0x28]      ; 004e2fa3
    NEG dword ptr [EAX]                 ; 004e2fa7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e2fa9
        ;   Label: LAB_004e2fa9
    CMP dword ptr [EAX],0x0             ; 004e2fad
    JZ 0x004e2fc6                       ; 004e2fb0
        ;   XREF to: 004e2fc6 (CONDITIONAL_JUMP)  ; LAB_004e2fc6
    PUSH EBP                            ; 004e2fb2
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0 ; 004e2fb3
        ;   XREF to: 004e2dd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 004e2fb8
    CMP EAX,0x1                         ; 004e2fbb
    JNZ 0x004e2fc6                      ; 004e2fbe
        ;   XREF to: 004e2fc6 (CONDITIONAL_JUMP)  ; LAB_004e2fc6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e2fc0
    NEG dword ptr [EAX]                 ; 004e2fc4
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e2fc6
        ;   Label: LAB_004e2fc6
    CMP dword ptr [EAX],0x0             ; 004e2fca
    JZ 0x004e2fe3                       ; 004e2fcd
        ;   XREF to: 004e2fe3 (CONDITIONAL_JUMP)  ; LAB_004e2fe3
    PUSH EBP                            ; 004e2fcf
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0 ; 004e2fd0
        ;   XREF to: 004e2dd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 004e2fd5
    CMP EAX,0x1                         ; 004e2fd8
    JNZ 0x004e2fe3                      ; 004e2fdb
        ;   XREF to: 004e2fe3 (CONDITIONAL_JUMP)  ; LAB_004e2fe3
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e2fdd
    NEG dword ptr [EAX]                 ; 004e2fe1
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e2fe3
        ;   Label: LAB_004e2fe3
    CMP dword ptr [EAX],0x0             ; 004e2fe7
    JZ 0x004e3000                       ; 004e2fea
        ;   XREF to: 004e3000 (CONDITIONAL_JUMP)  ; LAB_004e3000
    PUSH EBP                            ; 004e2fec
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0 ; 004e2fed
        ;   XREF to: 004e2dd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 004e2ff2
    CMP EAX,0x1                         ; 004e2ff5
    JNZ 0x004e3000                      ; 004e2ff8
        ;   XREF to: 004e3000 (CONDITIONAL_JUMP)  ; LAB_004e3000
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e2ffa
    NEG dword ptr [EAX]                 ; 004e2ffe
    MOV EAX,dword ptr [ESP]             ; 004e3000
        ;   Label: LAB_004e3000
    ADD ESP,0x4                         ; 004e3003
    POP EBP                             ; 004e3006
    POP EDI                             ; 004e3007
    POP ESI                             ; 004e3008
    POP EBX                             ; 004e3009
    RET                                 ; 004e300a
    MOV EAX,0x2                         ; 004e300b
        ;   Label: LAB_004e300b
    ADD ESP,0x4                         ; 004e3010
    POP EBP                             ; 004e3013
    POP EDI                             ; 004e3014
    POP ESI                             ; 004e3015
    POP EBX                             ; 004e3016
    RET                                 ; 004e3017
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e3018
        ;   Label: LAB_004e3018
    MOV dword ptr [EAX],EBX             ; 004e301c
    MOV EAX,EBX                         ; 004e301e
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e3020
    MOV dword ptr [EBX],ECX             ; 004e3024
    ADD ESP,0x4                         ; 004e3026
    POP EBP                             ; 004e3029
    POP EDI                             ; 004e302a
    POP ESI                             ; 004e302b
    POP EBX                             ; 004e302c
    RET                                 ; 004e302d
    PUSH EBP                            ; 004e302e
        ;   Label: LAB_004e302e
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0 ; 004e302f
        ;   XREF to: 004e2dd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 004e3034
    TEST EAX,EAX                        ; 004e3037
    JZ 0x004e309a                       ; 004e3039
        ;   XREF to: 004e309a (CONDITIONAL_JUMP)  ; LAB_004e309a
    MOV AL,byte ptr [ESI + EBX*0x2 + 0x21] ; 004e303b
        ;   Label: LAB_004e303b
    AND EAX,0xff                        ; 004e303f
    ADD EBX,EAX                         ; 004e3044
    CMP EAX,0xfa                        ; 004e3046
    JGE 0x004e303b                      ; 004e304b
        ;   XREF to: 004e303b (CONDITIONAL_JUMP)  ; LAB_004e303b
    SHR EDI,0x1                         ; 004e304d
        ;   Label: LAB_004e304d
    TEST EDI,EDI                        ; 004e304f
    JNZ 0x004e2f07                      ; 004e3051
        ;   XREF to: 004e2f07 (CONDITIONAL_JUMP)  ; LAB_004e2f07
    CMP EBX,dword ptr [0x01cd944c]      ; 004e3057 | DAT_01cd944c
    JC 0x004e2f07                       ; 004e305d
        ;   XREF to: 004e2f07 (CONDITIONAL_JUMP)  ; LAB_004e2f07
    CMP dword ptr [ESP],0x0             ; 004e3063
    JZ 0x004e2f39                       ; 004e3067
        ;   XREF to: 004e2f39 (CONDITIONAL_JUMP)  ; LAB_004e2f39
    PUSH 0x1cd8b28                      ; 004e306d
    MOV ECX,0x58b644                    ; 004e3072 | = "..\\sound\\mp3.cpp"
    MOV EBX,0x320                       ; 004e3077
    PUSH 0x58b655                       ; 004e307c | = "Illegal Huffman code in data.  File: %s"
    MOV dword ptr [0x01cc4800],ECX      ; 004e3081 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004e3087 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e308d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e3092
    JMP 0x004e2f39                      ; 004e3095
        ;   XREF to: 004e2f39 (UNCONDITIONAL_JUMP)  ; LAB_004e2f39
    MOV AL,byte ptr [ESI + EBX*0x2 + 0x20] ; 004e309a
        ;   Label: LAB_004e309a
    AND EAX,0xff                        ; 004e309e
    ADD EBX,EAX                         ; 004e30a3
    CMP EAX,0xfa                        ; 004e30a5
    JGE 0x004e309a                      ; 004e30aa
        ;   XREF to: 004e309a (CONDITIONAL_JUMP)  ; LAB_004e309a
    JMP 0x004e304d                      ; 004e30ac
        ;   XREF to: 004e304d (UNCONDITIONAL_JUMP)  ; LAB_004e304d
    CMP BL,DH                           ; 004e30ae
        ;   Label: LAB_004e30ae
    JZ 0x004e2f50                       ; 004e30b0
        ;   XREF to: 004e2f50 (CONDITIONAL_JUMP)  ; LAB_004e2f50
    MOV EDI,dword ptr [ESI + 0xc]       ; 004e30b6
        ;   Label: LAB_004e30b6
    TEST EDI,EDI                        ; 004e30b9
    JZ 0x004e30d9                       ; 004e30bb
        ;   XREF to: 004e30d9 (CONDITIONAL_JUMP)  ; LAB_004e30d9
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e30bd
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e30c0
    DEC EAX                             ; 004e30c4
    CMP EAX,dword ptr [EBX]             ; 004e30c5
    JNZ 0x004e30d9                      ; 004e30c7
        ;   XREF to: 004e30d9 (CONDITIONAL_JUMP)  ; LAB_004e30d9
    PUSH EDI                            ; 004e30c9
    PUSH EBP                            ; 004e30ca
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0 ; 004e30cb
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0(CMP3Decoder * this_ptr, uint num_bits)
    MOV EDI,dword ptr [EBX]             ; 004e30d0
    ADD EDI,EAX                         ; 004e30d2
    ADD ESP,0x8                         ; 004e30d4
    MOV dword ptr [EBX],EDI             ; 004e30d7
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e30d9
        ;   Label: LAB_004e30d9
    CMP dword ptr [EAX],0x0             ; 004e30dd
    JZ 0x004e30f6                       ; 004e30e0
        ;   XREF to: 004e30f6 (CONDITIONAL_JUMP)  ; LAB_004e30f6
    PUSH EBP                            ; 004e30e2
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0 ; 004e30e3
        ;   XREF to: 004e2dd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 004e30e8
    CMP EAX,0x1                         ; 004e30eb
    JNZ 0x004e30f6                      ; 004e30ee
        ;   XREF to: 004e30f6 (CONDITIONAL_JUMP)  ; LAB_004e30f6
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e30f0
    NEG dword ptr [EAX]                 ; 004e30f4
    CMP dword ptr [ESI + 0xc],0x0       ; 004e30f6
        ;   Label: LAB_004e30f6
    JZ 0x004e2fe3                       ; 004e30fa
        ;   XREF to: 004e2fe3 (CONDITIONAL_JUMP)  ; LAB_004e2fe3
    MOV EAX,dword ptr [ESI + 0x8]       ; 004e3100
    MOV EBX,dword ptr [ESP + 0x24]      ; 004e3103
    DEC EAX                             ; 004e3107
    CMP EAX,dword ptr [EBX]             ; 004e3108
    JNZ 0x004e2fe3                      ; 004e310a
        ;   XREF to: 004e2fe3 (CONDITIONAL_JUMP)  ; LAB_004e2fe3
    MOV EAX,dword ptr [ESI + 0xc]       ; 004e3110
    PUSH EAX                            ; 004e3113
    PUSH EBP                            ; 004e3114
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0 ; 004e3115
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0(CMP3Decoder * this_ptr, uint num_bits)
    MOV EDX,dword ptr [EBX]             ; 004e311a
    ADD EDX,EAX                         ; 004e311c
    ADD ESP,0x8                         ; 004e311e
    MOV dword ptr [EBX],EDX             ; 004e3121
    JMP 0x004e2fe3                      ; 004e3123
        ;   XREF to: 004e2fe3 (UNCONDITIONAL_JUMP)  ; LAB_004e2fe3

