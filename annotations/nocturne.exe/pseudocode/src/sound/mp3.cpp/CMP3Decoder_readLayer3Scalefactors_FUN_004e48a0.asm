; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
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
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e9093
;
; Referenced Globals:
;   undefined4 DAT_005bc058
;   undefined4 DAT_005bc05c
;   undefined4 DAT_005bc060
;   undefined4 DAT_005bc06c
;   undefined4 DAT_005bc070
;   undefined4 DAT_005bc074
;   undefined4 DAT_005bc078
;   undefined4 DAT_005bc0b8
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e48a0
        ;   Label: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0
    PUSH ESI                            ; 004e48a1
    PUSH EDI                            ; 004e48a2
    PUSH EBP                            ; 004e48a3
    SUB ESP,0x58                        ; 004e48a4
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004e48a7
    MOV EBP,dword ptr [ESP + 0x74]      ; 004e48ab
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004e48af
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e48b3
    ADD EAX,EDX                         ; 004e48ba
    LEA EBX,[EBP + 0x8]                 ; 004e48bc
    SHL EAX,0x5                         ; 004e48bf
    MOV EDX,dword ptr [ESP + 0x78]      ; 004e48c2
    ADD EBX,EAX                         ; 004e48c6
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e48c8
    ADD EAX,EDX                         ; 004e48cf
    ADD EBX,0x10                        ; 004e48d1
    SHL EAX,0x3                         ; 004e48d4
    LEA ESI,[EBX + EAX*0x1]             ; 004e48d7
    CMP dword ptr [ESI + 0x10],0x0      ; 004e48da
    JZ 0x004e48ea                       ; 004e48de
        ;   XREF to: 004e48ea (CONDITIONAL_JUMP)  ; LAB_004e48ea
    CMP dword ptr [ESI + 0x14],0x2      ; 004e48e0
    JZ 0x004e49e2                       ; 004e48e4
        ;   XREF to: 004e49e2 (CONDITIONAL_JUMP)  ; LAB_004e49e2
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004e48ea
        ;   Label: LAB_004e48ea
    SHL EAX,0x3                         ; 004e48ee
    MOV EDX,EAX                         ; 004e48f1
    SHL EAX,0x5                         ; 004e48f3
    SUB EAX,EDX                         ; 004e48f6
    MOV EDX,dword ptr [ESP + 0x70]      ; 004e48f8
    ADD EDX,EAX                         ; 004e48fc
    MOV dword ptr [ESP + 0x4],EDX       ; 004e48fe
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004e4902
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e4906
    ADD EAX,EDX                         ; 004e490d
    XOR EBX,EBX                         ; 004e490f
    SHL EAX,0x5                         ; 004e4911
    MOV dword ptr [ESP + 0x30],EBX      ; 004e4914
    ADD EAX,EBP                         ; 004e4918
    MOV dword ptr [ESP + 0x24],EBX      ; 004e491a
    MOV dword ptr [ESP + 0x18],EAX      ; 004e491e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e4922
        ;   Label: LAB_004e4922
    CMP dword ptr [EAX + 0x8],0x0       ; 004e4926
    JNZ 0x004e4c5b                      ; 004e492a
        ;   XREF to: 004e4c5b (CONDITIONAL_JUMP)  ; LAB_004e4c5b
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e4930
        ;   Label: LAB_004e4930
    MOV EBX,dword ptr [ESP + 0x30]      ; 004e4934
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e4938
    MOV ECX,dword ptr [ESP + 0x4]       ; 004e493c
    MOV dword ptr [ESP + 0x38],EAX      ; 004e4940
    MOV EBX,dword ptr [EBX + 0x5bc058]  ; 004e4944 | DAT_005bc058 | DAT_005bc05c
    CMP EDX,0x2                         ; 004e494a
    SETGE byte ptr [ESP + 0x54]         ; 004e494d
    LEA EBP,[EBX*0x4 + 0x0]             ; 004e4952
    MOV EDX,dword ptr [EAX + 0x5bc05c]  ; 004e4959 | DAT_005bc05c | DAT_005bc060
    ADD EBP,ECX                         ; 004e495f
    CMP EBX,EDX                         ; 004e4961
    JGE 0x004e4999                      ; 004e4963
        ;   XREF to: 004e4999 (CONDITIONAL_JUMP)  ; LAB_004e4999
    XOR EAX,EAX                         ; 004e4965
        ;   Label: LAB_004e4965
    MOV AL,byte ptr [ESP + 0x54]        ; 004e4967
    MOV EDX,EAX                         ; 004e496b
    SHL EDX,0x6                         ; 004e496d
    MOV EAX,dword ptr [ESI + 0xc]       ; 004e4970
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x5bc078] ; 004e4973 | DAT_005bc078
    PUSH ECX                            ; 004e497a
    PUSH EDI                            ; 004e497b
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0 ; 004e497c
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0()
    ADD ESP,0x8                         ; 004e4981
    MOV dword ptr [EBP],EAX             ; 004e4984
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e4987
    INC EBX                             ; 004e498b
    MOV EDX,dword ptr [EAX + 0x5bc05c]  ; 004e498c | DAT_005bc05c
    ADD EBP,0x4                         ; 004e4992
    CMP EBX,EDX                         ; 004e4995
    JL 0x004e4965                       ; 004e4997
        ;   XREF to: 004e4965 (CONDITIONAL_JUMP)  ; LAB_004e4965
    MOV EBX,dword ptr [ESP + 0x30]      ; 004e4999
        ;   Label: LAB_004e4999
    MOV EBP,dword ptr [ESP + 0x24]      ; 004e499d
    MOV ECX,dword ptr [ESP + 0x18]      ; 004e49a1
    ADD EBX,0x4                         ; 004e49a5
    INC EBP                             ; 004e49a8
    ADD ECX,0x4                         ; 004e49a9
    MOV dword ptr [ESP + 0x30],EBX      ; 004e49ac
    MOV dword ptr [ESP + 0x24],EBP      ; 004e49b0
    MOV dword ptr [ESP + 0x18],ECX      ; 004e49b4
    CMP EBP,0x4                         ; 004e49b8
    JL 0x004e4922                       ; 004e49bb
        ;   XREF to: 004e4922 (CONDITIONAL_JUMP)  ; LAB_004e4922
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004e49c1
    SHL EAX,0x3                         ; 004e49c5
    MOV EDX,EAX                         ; 004e49c8
    SHL EAX,0x5                         ; 004e49ca
    SUB EAX,EDX                         ; 004e49cd
    ADD EAX,dword ptr [ESP + 0x70]      ; 004e49cf
    MOV dword ptr [EAX + 0x58],0x0      ; 004e49d3
    ADD ESP,0x58                        ; 004e49da
    POP EBP                             ; 004e49dd
    POP EDI                             ; 004e49de
    POP ESI                             ; 004e49df
    POP EBX                             ; 004e49e0
    RET                                 ; 004e49e1
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004e49e2
        ;   Label: LAB_004e49e2
    SHL EAX,0x3                         ; 004e49e6
    MOV EDX,EAX                         ; 004e49e9
    SHL EAX,0x5                         ; 004e49eb
    MOV EBP,dword ptr [ESP + 0x70]      ; 004e49ee
    SUB EAX,EDX                         ; 004e49f2
    ADD EBP,EAX                         ; 004e49f4
    MOV EAX,dword ptr [ESI + 0x18]      ; 004e49f6
    TEST EAX,EAX                        ; 004e49f9
    JZ 0x004e4b50                       ; 004e49fb
        ;   XREF to: 004e4b50 (CONDITIONAL_JUMP)  ; LAB_004e4b50
    MOV EBX,EBP                         ; 004e4a01
    ADD EBP,0x20                        ; 004e4a03
    MOV EAX,dword ptr [ESI + 0xc]       ; 004e4a06
        ;   Label: LAB_004e4a06
    MOV EDX,dword ptr [EAX*0x4 + 0x5bc078] ; 004e4a09 | DAT_005bc078
    PUSH EDX                            ; 004e4a10
    PUSH EDI                            ; 004e4a11
    ADD EBX,0x4                         ; 004e4a12
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0 ; 004e4a15
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0()
    ADD ESP,0x8                         ; 004e4a1a
    MOV dword ptr [EBX + -0x4],EAX      ; 004e4a1d
    CMP EBX,EBP                         ; 004e4a20
    JNZ 0x004e4a06                      ; 004e4a22
        ;   XREF to: 004e4a06 (CONDITIONAL_JUMP)  ; LAB_004e4a06
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004e4a24
    SHL EAX,0x3                         ; 004e4a28
    MOV EBX,0xa8                        ; 004e4a2b
    MOV EDX,EAX                         ; 004e4a30
    SHL EAX,0x5                         ; 004e4a32
    MOV ECX,0x3                         ; 004e4a35
    SUB EAX,EDX                         ; 004e4a3a
    MOV EDX,dword ptr [ESP + 0x70]      ; 004e4a3c
    MOV dword ptr [ESP + 0x14],EBX      ; 004e4a40
    ADD EDX,EAX                         ; 004e4a44
    MOV dword ptr [ESP + 0x2c],ECX      ; 004e4a46
    MOV dword ptr [ESP + 0xc],EDX       ; 004e4a4a
    MOV dword ptr [ESP + 0x8],EDX       ; 004e4a4e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e4a52
        ;   Label: LAB_004e4a52
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e4a56
    MOV EBP,dword ptr [ESP + 0x8]       ; 004e4a5a
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e4a5e
    SHL EAX,0x2                         ; 004e4a62
    ADD EBP,ECX                         ; 004e4a65
    ADD EBX,EAX                         ; 004e4a67
    MOV EAX,dword ptr [ESI + 0xc]       ; 004e4a69
        ;   Label: LAB_004e4a69
    MOV EDX,dword ptr [EAX*0x4 + 0x5bc078] ; 004e4a6c | DAT_005bc078
    PUSH EDX                            ; 004e4a73
    PUSH EDI                            ; 004e4a74
    ADD EBX,0x34                        ; 004e4a75
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0 ; 004e4a78
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0()
    ADD ESP,0x8                         ; 004e4a7d
    MOV dword ptr [EBX + 0x28],EAX      ; 004e4a80
    CMP EBX,EBP                         ; 004e4a83
    JNZ 0x004e4a69                      ; 004e4a85
        ;   XREF to: 004e4a69 (CONDITIONAL_JUMP)  ; LAB_004e4a69
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004e4a87
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e4a8b
    INC EBX                             ; 004e4a8f
    ADD ECX,0x4                         ; 004e4a90
    MOV dword ptr [ESP + 0x2c],EBX      ; 004e4a93
    MOV dword ptr [ESP + 0x14],ECX      ; 004e4a97
    CMP EBX,0x6                         ; 004e4a9b
    JL 0x004e4a52                       ; 004e4a9e
        ;   XREF to: 004e4a52 (CONDITIONAL_JUMP)  ; LAB_004e4a52
    MOV dword ptr [ESP + 0x28],0x6      ; 004e4aa0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004e4aa8
    SHL EAX,0x3                         ; 004e4aac
    MOV EDX,EAX                         ; 004e4aaf
    SHL EAX,0x5                         ; 004e4ab1
    SUB EAX,EDX                         ; 004e4ab4
    MOV EDX,dword ptr [ESP + 0x70]      ; 004e4ab6
    ADD EDX,EAX                         ; 004e4aba
    MOV dword ptr [ESP + 0x10],EDX      ; 004e4abc
    MOV EDX,0xb4                        ; 004e4ac0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e4ac5
    MOV dword ptr [ESP + 0x1c],EDX      ; 004e4ac9
    MOV dword ptr [ESP],EAX             ; 004e4acd
    MOV EBX,dword ptr [ESP + 0x28]      ; 004e4ad0
        ;   Label: LAB_004e4ad0
    MOV ECX,dword ptr [ESP + 0x10]      ; 004e4ad4
    MOV EBP,dword ptr [ESP]             ; 004e4ad8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e4adb
    SHL EBX,0x2                         ; 004e4adf
    ADD EBP,EAX                         ; 004e4ae2
    ADD EBX,ECX                         ; 004e4ae4
    MOV EAX,dword ptr [ESI + 0xc]       ; 004e4ae6
        ;   Label: LAB_004e4ae6
    MOV EDX,dword ptr [EAX*0x4 + 0x5bc0b8] ; 004e4ae9 | DAT_005bc0b8
    PUSH EDX                            ; 004e4af0
    PUSH EDI                            ; 004e4af1
    ADD EBX,0x34                        ; 004e4af2
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0 ; 004e4af5
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0()
    ADD ESP,0x8                         ; 004e4afa
    MOV dword ptr [EBX + 0x28],EAX      ; 004e4afd
    CMP EBX,EBP                         ; 004e4b00
    JNZ 0x004e4ae6                      ; 004e4b02
        ;   XREF to: 004e4ae6 (CONDITIONAL_JUMP)  ; LAB_004e4ae6
    MOV EBX,dword ptr [ESP + 0x28]      ; 004e4b04
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004e4b08
    INC EBX                             ; 004e4b0c
    ADD ECX,0x4                         ; 004e4b0d
    MOV dword ptr [ESP + 0x28],EBX      ; 004e4b10
    MOV dword ptr [ESP + 0x1c],ECX      ; 004e4b14
    CMP EBX,0xc                         ; 004e4b18
    JL 0x004e4ad0                       ; 004e4b1b
        ;   XREF to: 004e4ad0 (CONDITIONAL_JUMP)  ; LAB_004e4ad0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004e4b1d
    SHL EAX,0x3                         ; 004e4b21
    MOV EDX,EAX                         ; 004e4b24
    SHL EAX,0x5                         ; 004e4b26
    SUB EAX,EDX                         ; 004e4b29
    MOV EDX,dword ptr [ESP + 0x70]      ; 004e4b2b
    ADD EDX,EAX                         ; 004e4b2f
    LEA EAX,[EDX + 0x30]                ; 004e4b31
    ADD EDX,0xcc                        ; 004e4b34
    ADD EAX,0x34                        ; 004e4b3a
        ;   Label: LAB_004e4b3a
    MOV dword ptr [EAX + 0x28],0x0      ; 004e4b3d
    CMP EAX,EDX                         ; 004e4b44
    JNZ 0x004e4b3a                      ; 004e4b46
        ;   XREF to: 004e4b3a (CONDITIONAL_JUMP)  ; LAB_004e4b3a
    ADD ESP,0x58                        ; 004e4b48
    POP EBP                             ; 004e4b4b
    POP EDI                             ; 004e4b4c
    POP ESI                             ; 004e4b4d
    POP EBX                             ; 004e4b4e
    RET                                 ; 004e4b4f
    MOV dword ptr [ESP + 0x34],EAX      ; 004e4b50
        ;   Label: LAB_004e4b50
    MOV dword ptr [ESP + 0x20],EAX      ; 004e4b54
    MOV dword ptr [ESP + 0x40],EBP      ; 004e4b58
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e4b5c
        ;   Label: LAB_004e4b5c
    MOV EBP,dword ptr [ESP + 0x34]      ; 004e4b60
    MOV EAX,dword ptr [EAX + 0x5bc06c]  ; 004e4b64 | DAT_005bc06c | DAT_005bc070
    MOV ECX,dword ptr [EBP + 0x5bc070]  ; 004e4b6a | DAT_005bc070 | DAT_005bc074
    MOV dword ptr [ESP + 0x4c],EAX      ; 004e4b70
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e4b74
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004e4b78
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004e4b7c
    MOV dword ptr [ESP + 0x50],EAX      ; 004e4b80
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e4b84
    SHL EBX,0x2                         ; 004e4b88
    MOV dword ptr [ESP + 0x3c],EAX      ; 004e4b8b
    LEA EAX,[EBX + 0x9c]                ; 004e4b8f
    CMP EDX,ECX                         ; 004e4b95
    JGE 0x004e4c06                      ; 004e4b97
        ;   XREF to: 004e4c06 (CONDITIONAL_JUMP)  ; LAB_004e4c06
    ADD EAX,dword ptr [ESP + 0x40]      ; 004e4b99
    MOV dword ptr [ESP + 0x48],EBX      ; 004e4b9d
    MOV dword ptr [ESP + 0x44],EAX      ; 004e4ba1
    MOV EBX,dword ptr [ESP + 0x48]      ; 004e4ba5
        ;   Label: LAB_004e4ba5
    MOV ECX,dword ptr [ESP + 0x40]      ; 004e4ba9
    MOV EBP,dword ptr [ESP + 0x44]      ; 004e4bad
    ADD EBX,ECX                         ; 004e4bb1
    MOV EAX,dword ptr [ESI + 0xc]       ; 004e4bb3
        ;   Label: LAB_004e4bb3
    MOV EDX,dword ptr [ESP + 0x50]      ; 004e4bb6
    SHL EAX,0x2                         ; 004e4bba
    ADD EAX,EDX                         ; 004e4bbd
    MOV ECX,dword ptr [EAX + 0x5bc078]  ; 004e4bbf | DAT_005bc078
    PUSH ECX                            ; 004e4bc5
    PUSH EDI                            ; 004e4bc6
    ADD EBX,0x34                        ; 004e4bc7
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0 ; 004e4bca
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0()
    ADD ESP,0x8                         ; 004e4bcf
    MOV dword ptr [EBX + 0x28],EAX      ; 004e4bd2
    CMP EBX,EBP                         ; 004e4bd5
    JNZ 0x004e4bb3                      ; 004e4bd7
        ;   XREF to: 004e4bb3 (CONDITIONAL_JUMP)  ; LAB_004e4bb3
    MOV EBX,dword ptr [ESP + 0x44]      ; 004e4bd9
    MOV EBP,dword ptr [ESP + 0x48]      ; 004e4bdd
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004e4be1
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e4be5
    ADD EBX,0x4                         ; 004e4be9
    ADD EBP,0x4                         ; 004e4bec
    INC EAX                             ; 004e4bef
    MOV ECX,dword ptr [EDX + 0x5bc070]  ; 004e4bf0 | DAT_005bc070
    MOV dword ptr [ESP + 0x44],EBX      ; 004e4bf6
    MOV dword ptr [ESP + 0x48],EBP      ; 004e4bfa
    MOV dword ptr [ESP + 0x4c],EAX      ; 004e4bfe
    CMP EAX,ECX                         ; 004e4c02
    JL 0x004e4ba5                       ; 004e4c04
        ;   XREF to: 004e4ba5 (CONDITIONAL_JUMP)  ; LAB_004e4ba5
    MOV EBP,dword ptr [ESP + 0x20]      ; 004e4c06
        ;   Label: LAB_004e4c06
    MOV EBX,dword ptr [ESP + 0x34]      ; 004e4c0a
    ADD EBP,0x40                        ; 004e4c0e
    ADD EBX,0x4                         ; 004e4c11
    MOV dword ptr [ESP + 0x20],EBP      ; 004e4c14
    MOV dword ptr [ESP + 0x34],EBX      ; 004e4c18
    CMP EBP,0x80                        ; 004e4c1c
    JNZ 0x004e4b5c                      ; 004e4c22
        ;   XREF to: 004e4b5c (CONDITIONAL_JUMP)  ; LAB_004e4b5c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004e4c28
    SHL EAX,0x3                         ; 004e4c2c
    MOV EDX,EAX                         ; 004e4c2f
    SHL EAX,0x5                         ; 004e4c31
    MOV EBP,dword ptr [ESP + 0x70]      ; 004e4c34
    SUB EAX,EDX                         ; 004e4c38
    ADD EBP,EAX                         ; 004e4c3a
    LEA EBX,[EBP + 0x30]                ; 004e4c3c
    ADD EBP,0xcc                        ; 004e4c3f
    ADD EBX,0x34                        ; 004e4c45
        ;   Label: LAB_004e4c45
    MOV dword ptr [EBX + 0x28],0x0      ; 004e4c48
    CMP EBX,EBP                         ; 004e4c4f
    JNZ 0x004e4c45                      ; 004e4c51
        ;   XREF to: 004e4c45 (CONDITIONAL_JUMP)  ; LAB_004e4c45
    ADD ESP,0x58                        ; 004e4c53
    POP EBP                             ; 004e4c56
    POP EDI                             ; 004e4c57
    POP ESI                             ; 004e4c58
    POP EBX                             ; 004e4c59
    RET                                 ; 004e4c5a
    CMP dword ptr [ESP + 0x78],0x0      ; 004e4c5b
        ;   Label: LAB_004e4c5b
    JZ 0x004e4930                       ; 004e4c60
        ;   XREF to: 004e4930 (CONDITIONAL_JUMP)  ; LAB_004e4930
    JMP 0x004e4999                      ; 004e4c66
        ;   XREF to: 004e4999 (UNCONDITIONAL_JUMP)  ; LAB_004e4999

