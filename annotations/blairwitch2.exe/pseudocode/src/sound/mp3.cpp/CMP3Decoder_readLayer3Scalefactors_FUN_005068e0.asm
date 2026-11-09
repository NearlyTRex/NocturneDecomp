; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_005068e0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule_index,SMpegFrame *frame)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   scalefactor_dest
; SMpegLayer3SideInfo * Stack[0xc]:4   side_info
; int              Stack[0x10]:4   channel
; int              Stack[0x14]:4   granule_index
; SMpegFrame *     Stack[0x18]:4   frame
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050aa40
;
; Referenced Globals:
;   undefined4 DAT_00619298
;   undefined4 DAT_0061929c
;   undefined4 DAT_006192a0
;   undefined4 DAT_006192ac
;   undefined4 DAT_006192b0
;   undefined4 DAT_006192b4
;   undefined4 DAT_006192b8
;   undefined4 DAT_006192f8
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005068e0
        ;   Label: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_005068e0
    PUSH ESI                            ; 005068e1
    PUSH EDI                            ; 005068e2
    PUSH EBP                            ; 005068e3
    SUB ESP,0x58                        ; 005068e4
    MOV EDI,dword ptr [ESP + 0x6c]      ; 005068e7
    MOV EBP,dword ptr [ESP + 0x74]      ; 005068eb
    MOV EDX,dword ptr [ESP + 0x7c]      ; 005068ef
    LEA EAX,[EDX*0x4 + 0x0]             ; 005068f3
    ADD EAX,EDX                         ; 005068fa
    LEA EBX,[EBP + 0x8]                 ; 005068fc
    SHL EAX,0x5                         ; 005068ff
    MOV EDX,dword ptr [ESP + 0x78]      ; 00506902
    ADD EBX,EAX                         ; 00506906
    LEA EAX,[EDX*0x8 + 0x0]             ; 00506908
    ADD EAX,EDX                         ; 0050690f
    ADD EBX,0x10                        ; 00506911
    SHL EAX,0x3                         ; 00506914
    LEA ESI,[EBX + EAX*0x1]             ; 00506917
    CMP dword ptr [ESI + 0x10],0x0      ; 0050691a
    JZ 0x0050692a                       ; 0050691e
        ;   XREF to: 0050692a (CONDITIONAL_JUMP)  ; LAB_0050692a
    CMP dword ptr [ESI + 0x14],0x2      ; 00506920
    JZ 0x00506a22                       ; 00506924
        ;   XREF to: 00506a22 (CONDITIONAL_JUMP)  ; LAB_00506a22
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0050692a
        ;   Label: LAB_0050692a
    SHL EAX,0x3                         ; 0050692e
    MOV EDX,EAX                         ; 00506931
    SHL EAX,0x5                         ; 00506933
    SUB EAX,EDX                         ; 00506936
    MOV EDX,dword ptr [ESP + 0x70]      ; 00506938
    ADD EDX,EAX                         ; 0050693c
    MOV dword ptr [ESP + 0x4],EDX       ; 0050693e
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00506942
    LEA EAX,[EDX*0x4 + 0x0]             ; 00506946
    ADD EAX,EDX                         ; 0050694d
    XOR EBX,EBX                         ; 0050694f
    SHL EAX,0x5                         ; 00506951
    MOV dword ptr [ESP + 0x30],EBX      ; 00506954
    ADD EAX,EBP                         ; 00506958
    MOV dword ptr [ESP + 0x24],EBX      ; 0050695a
    MOV dword ptr [ESP + 0x18],EAX      ; 0050695e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00506962
        ;   Label: LAB_00506962
    CMP dword ptr [EAX + 0x8],0x0       ; 00506966
    JNZ 0x00506c9b                      ; 0050696a
        ;   XREF to: 00506c9b (CONDITIONAL_JUMP)  ; LAB_00506c9b
    MOV EAX,dword ptr [ESP + 0x30]      ; 00506970
        ;   Label: LAB_00506970
    MOV EBX,dword ptr [ESP + 0x30]      ; 00506974
    MOV EDX,dword ptr [ESP + 0x24]      ; 00506978
    MOV ECX,dword ptr [ESP + 0x4]       ; 0050697c
    MOV dword ptr [ESP + 0x38],EAX      ; 00506980
    MOV EBX,dword ptr [EBX + 0x619298]  ; 00506984 | DAT_00619298 | DAT_0061929c
    CMP EDX,0x2                         ; 0050698a
    SETGE byte ptr [ESP + 0x54]         ; 0050698d
    LEA EBP,[EBX*0x4 + 0x0]             ; 00506992
    MOV EDX,dword ptr [EAX + 0x61929c]  ; 00506999 | DAT_0061929c | DAT_006192a0
    ADD EBP,ECX                         ; 0050699f
    CMP EBX,EDX                         ; 005069a1
    JGE 0x005069d9                      ; 005069a3
        ;   XREF to: 005069d9 (CONDITIONAL_JUMP)  ; LAB_005069d9
    XOR EAX,EAX                         ; 005069a5
        ;   Label: LAB_005069a5
    MOV AL,byte ptr [ESP + 0x54]        ; 005069a7
    MOV EDX,EAX                         ; 005069ab
    SHL EDX,0x6                         ; 005069ad
    MOV EAX,dword ptr [ESI + 0xc]       ; 005069b0
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x6192b8] ; 005069b3 | DAT_006192b8
    PUSH ECX                            ; 005069ba
    PUSH EDI                            ; 005069bb
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30 ; 005069bc
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 005069c1
    MOV dword ptr [EBP],EAX             ; 005069c4
    MOV EAX,dword ptr [ESP + 0x38]      ; 005069c7
    INC EBX                             ; 005069cb
    MOV EDX,dword ptr [EAX + 0x61929c]  ; 005069cc | DAT_0061929c
    ADD EBP,0x4                         ; 005069d2
    CMP EBX,EDX                         ; 005069d5
    JL 0x005069a5                       ; 005069d7
        ;   XREF to: 005069a5 (CONDITIONAL_JUMP)  ; LAB_005069a5
    MOV EBX,dword ptr [ESP + 0x30]      ; 005069d9
        ;   Label: LAB_005069d9
    MOV EBP,dword ptr [ESP + 0x24]      ; 005069dd
    MOV ECX,dword ptr [ESP + 0x18]      ; 005069e1
    ADD EBX,0x4                         ; 005069e5
    INC EBP                             ; 005069e8
    ADD ECX,0x4                         ; 005069e9
    MOV dword ptr [ESP + 0x30],EBX      ; 005069ec
    MOV dword ptr [ESP + 0x24],EBP      ; 005069f0
    MOV dword ptr [ESP + 0x18],ECX      ; 005069f4
    CMP EBP,0x4                         ; 005069f8
    JL 0x00506962                       ; 005069fb
        ;   XREF to: 00506962 (CONDITIONAL_JUMP)  ; LAB_00506962
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00506a01
    SHL EAX,0x3                         ; 00506a05
    MOV EDX,EAX                         ; 00506a08
    SHL EAX,0x5                         ; 00506a0a
    SUB EAX,EDX                         ; 00506a0d
    ADD EAX,dword ptr [ESP + 0x70]      ; 00506a0f
    MOV dword ptr [EAX + 0x58],0x0      ; 00506a13
    ADD ESP,0x58                        ; 00506a1a
    POP EBP                             ; 00506a1d
    POP EDI                             ; 00506a1e
    POP ESI                             ; 00506a1f
    POP EBX                             ; 00506a20
    RET                                 ; 00506a21
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00506a22
        ;   Label: LAB_00506a22
    SHL EAX,0x3                         ; 00506a26
    MOV EDX,EAX                         ; 00506a29
    SHL EAX,0x5                         ; 00506a2b
    MOV EBP,dword ptr [ESP + 0x70]      ; 00506a2e
    SUB EAX,EDX                         ; 00506a32
    ADD EBP,EAX                         ; 00506a34
    MOV EAX,dword ptr [ESI + 0x18]      ; 00506a36
    TEST EAX,EAX                        ; 00506a39
    JZ 0x00506b90                       ; 00506a3b
        ;   XREF to: 00506b90 (CONDITIONAL_JUMP)  ; LAB_00506b90
    MOV EBX,EBP                         ; 00506a41
    ADD EBP,0x20                        ; 00506a43
    MOV EAX,dword ptr [ESI + 0xc]       ; 00506a46
        ;   Label: LAB_00506a46
    MOV EDX,dword ptr [EAX*0x4 + 0x6192b8] ; 00506a49 | DAT_006192b8
    PUSH EDX                            ; 00506a50
    PUSH EDI                            ; 00506a51
    ADD EBX,0x4                         ; 00506a52
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30 ; 00506a55
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00506a5a
    MOV dword ptr [EBX + -0x4],EAX      ; 00506a5d
    CMP EBX,EBP                         ; 00506a60
    JNZ 0x00506a46                      ; 00506a62
        ;   XREF to: 00506a46 (CONDITIONAL_JUMP)  ; LAB_00506a46
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00506a64
    SHL EAX,0x3                         ; 00506a68
    MOV EBX,0xa8                        ; 00506a6b
    MOV EDX,EAX                         ; 00506a70
    SHL EAX,0x5                         ; 00506a72
    MOV ECX,0x3                         ; 00506a75
    SUB EAX,EDX                         ; 00506a7a
    MOV EDX,dword ptr [ESP + 0x70]      ; 00506a7c
    MOV dword ptr [ESP + 0x14],EBX      ; 00506a80
    ADD EDX,EAX                         ; 00506a84
    MOV dword ptr [ESP + 0x2c],ECX      ; 00506a86
    MOV dword ptr [ESP + 0xc],EDX       ; 00506a8a
    MOV dword ptr [ESP + 0x8],EDX       ; 00506a8e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00506a92
        ;   Label: LAB_00506a92
    MOV EBX,dword ptr [ESP + 0xc]       ; 00506a96
    MOV EBP,dword ptr [ESP + 0x8]       ; 00506a9a
    MOV ECX,dword ptr [ESP + 0x14]      ; 00506a9e
    SHL EAX,0x2                         ; 00506aa2
    ADD EBP,ECX                         ; 00506aa5
    ADD EBX,EAX                         ; 00506aa7
    MOV EAX,dword ptr [ESI + 0xc]       ; 00506aa9
        ;   Label: LAB_00506aa9
    MOV EDX,dword ptr [EAX*0x4 + 0x6192b8] ; 00506aac | DAT_006192b8
    PUSH EDX                            ; 00506ab3
    PUSH EDI                            ; 00506ab4
    ADD EBX,0x34                        ; 00506ab5
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30 ; 00506ab8
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00506abd
    MOV dword ptr [EBX + 0x28],EAX      ; 00506ac0
    CMP EBX,EBP                         ; 00506ac3
    JNZ 0x00506aa9                      ; 00506ac5
        ;   XREF to: 00506aa9 (CONDITIONAL_JUMP)  ; LAB_00506aa9
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00506ac7
    MOV ECX,dword ptr [ESP + 0x14]      ; 00506acb
    INC EBX                             ; 00506acf
    ADD ECX,0x4                         ; 00506ad0
    MOV dword ptr [ESP + 0x2c],EBX      ; 00506ad3
    MOV dword ptr [ESP + 0x14],ECX      ; 00506ad7
    CMP EBX,0x6                         ; 00506adb
    JL 0x00506a92                       ; 00506ade
        ;   XREF to: 00506a92 (CONDITIONAL_JUMP)  ; LAB_00506a92
    MOV dword ptr [ESP + 0x28],0x6      ; 00506ae0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00506ae8
    SHL EAX,0x3                         ; 00506aec
    MOV EDX,EAX                         ; 00506aef
    SHL EAX,0x5                         ; 00506af1
    SUB EAX,EDX                         ; 00506af4
    MOV EDX,dword ptr [ESP + 0x70]      ; 00506af6
    ADD EDX,EAX                         ; 00506afa
    MOV dword ptr [ESP + 0x10],EDX      ; 00506afc
    MOV EDX,0xb4                        ; 00506b00
    MOV EAX,dword ptr [ESP + 0x10]      ; 00506b05
    MOV dword ptr [ESP + 0x1c],EDX      ; 00506b09
    MOV dword ptr [ESP],EAX             ; 00506b0d
    MOV EBX,dword ptr [ESP + 0x28]      ; 00506b10
        ;   Label: LAB_00506b10
    MOV ECX,dword ptr [ESP + 0x10]      ; 00506b14
    MOV EBP,dword ptr [ESP]             ; 00506b18
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00506b1b
    SHL EBX,0x2                         ; 00506b1f
    ADD EBP,EAX                         ; 00506b22
    ADD EBX,ECX                         ; 00506b24
    MOV EAX,dword ptr [ESI + 0xc]       ; 00506b26
        ;   Label: LAB_00506b26
    MOV EDX,dword ptr [EAX*0x4 + 0x6192f8] ; 00506b29 | DAT_006192f8
    PUSH EDX                            ; 00506b30
    PUSH EDI                            ; 00506b31
    ADD EBX,0x34                        ; 00506b32
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30 ; 00506b35
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00506b3a
    MOV dword ptr [EBX + 0x28],EAX      ; 00506b3d
    CMP EBX,EBP                         ; 00506b40
    JNZ 0x00506b26                      ; 00506b42
        ;   XREF to: 00506b26 (CONDITIONAL_JUMP)  ; LAB_00506b26
    MOV EBX,dword ptr [ESP + 0x28]      ; 00506b44
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00506b48
    INC EBX                             ; 00506b4c
    ADD ECX,0x4                         ; 00506b4d
    MOV dword ptr [ESP + 0x28],EBX      ; 00506b50
    MOV dword ptr [ESP + 0x1c],ECX      ; 00506b54
    CMP EBX,0xc                         ; 00506b58
    JL 0x00506b10                       ; 00506b5b
        ;   XREF to: 00506b10 (CONDITIONAL_JUMP)  ; LAB_00506b10
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00506b5d
    SHL EAX,0x3                         ; 00506b61
    MOV EDX,EAX                         ; 00506b64
    SHL EAX,0x5                         ; 00506b66
    SUB EAX,EDX                         ; 00506b69
    MOV EDX,dword ptr [ESP + 0x70]      ; 00506b6b
    ADD EDX,EAX                         ; 00506b6f
    LEA EAX,[EDX + 0x30]                ; 00506b71
    ADD EDX,0xcc                        ; 00506b74
    ADD EAX,0x34                        ; 00506b7a
        ;   Label: LAB_00506b7a
    MOV dword ptr [EAX + 0x28],0x0      ; 00506b7d
    CMP EAX,EDX                         ; 00506b84
    JNZ 0x00506b7a                      ; 00506b86
        ;   XREF to: 00506b7a (CONDITIONAL_JUMP)  ; LAB_00506b7a
    ADD ESP,0x58                        ; 00506b88
    POP EBP                             ; 00506b8b
    POP EDI                             ; 00506b8c
    POP ESI                             ; 00506b8d
    POP EBX                             ; 00506b8e
    RET                                 ; 00506b8f
    MOV dword ptr [ESP + 0x34],EAX      ; 00506b90
        ;   Label: LAB_00506b90
    MOV dword ptr [ESP + 0x20],EAX      ; 00506b94
    MOV dword ptr [ESP + 0x40],EBP      ; 00506b98
    MOV EAX,dword ptr [ESP + 0x34]      ; 00506b9c
        ;   Label: LAB_00506b9c
    MOV EBP,dword ptr [ESP + 0x34]      ; 00506ba0
    MOV EAX,dword ptr [EAX + 0x6192ac]  ; 00506ba4 | DAT_006192ac | DAT_006192b0
    MOV ECX,dword ptr [EBP + 0x6192b0]  ; 00506baa | DAT_006192b0 | DAT_006192b4
    MOV dword ptr [ESP + 0x4c],EAX      ; 00506bb0
    MOV EAX,dword ptr [ESP + 0x20]      ; 00506bb4
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00506bb8
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00506bbc
    MOV dword ptr [ESP + 0x50],EAX      ; 00506bc0
    MOV EAX,dword ptr [ESP + 0x34]      ; 00506bc4
    SHL EBX,0x2                         ; 00506bc8
    MOV dword ptr [ESP + 0x3c],EAX      ; 00506bcb
    LEA EAX,[EBX + 0x9c]                ; 00506bcf
    CMP EDX,ECX                         ; 00506bd5
    JGE 0x00506c46                      ; 00506bd7
        ;   XREF to: 00506c46 (CONDITIONAL_JUMP)  ; LAB_00506c46
    ADD EAX,dword ptr [ESP + 0x40]      ; 00506bd9
    MOV dword ptr [ESP + 0x48],EBX      ; 00506bdd
    MOV dword ptr [ESP + 0x44],EAX      ; 00506be1
    MOV EBX,dword ptr [ESP + 0x48]      ; 00506be5
        ;   Label: LAB_00506be5
    MOV ECX,dword ptr [ESP + 0x40]      ; 00506be9
    MOV EBP,dword ptr [ESP + 0x44]      ; 00506bed
    ADD EBX,ECX                         ; 00506bf1
    MOV EAX,dword ptr [ESI + 0xc]       ; 00506bf3
        ;   Label: LAB_00506bf3
    MOV EDX,dword ptr [ESP + 0x50]      ; 00506bf6
    SHL EAX,0x2                         ; 00506bfa
    ADD EAX,EDX                         ; 00506bfd
    MOV ECX,dword ptr [EAX + 0x6192b8]  ; 00506bff | DAT_006192b8
    PUSH ECX                            ; 00506c05
    PUSH EDI                            ; 00506c06
    ADD EBX,0x34                        ; 00506c07
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30 ; 00506c0a
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00506c0f
    MOV dword ptr [EBX + 0x28],EAX      ; 00506c12
    CMP EBX,EBP                         ; 00506c15
    JNZ 0x00506bf3                      ; 00506c17
        ;   XREF to: 00506bf3 (CONDITIONAL_JUMP)  ; LAB_00506bf3
    MOV EBX,dword ptr [ESP + 0x44]      ; 00506c19
    MOV EBP,dword ptr [ESP + 0x48]      ; 00506c1d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00506c21
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00506c25
    ADD EBX,0x4                         ; 00506c29
    ADD EBP,0x4                         ; 00506c2c
    INC EAX                             ; 00506c2f
    MOV ECX,dword ptr [EDX + 0x6192b0]  ; 00506c30 | DAT_006192b0
    MOV dword ptr [ESP + 0x44],EBX      ; 00506c36
    MOV dword ptr [ESP + 0x48],EBP      ; 00506c3a
    MOV dword ptr [ESP + 0x4c],EAX      ; 00506c3e
    CMP EAX,ECX                         ; 00506c42
    JL 0x00506be5                       ; 00506c44
        ;   XREF to: 00506be5 (CONDITIONAL_JUMP)  ; LAB_00506be5
    MOV EBP,dword ptr [ESP + 0x20]      ; 00506c46
        ;   Label: LAB_00506c46
    MOV EBX,dword ptr [ESP + 0x34]      ; 00506c4a
    ADD EBP,0x40                        ; 00506c4e
    ADD EBX,0x4                         ; 00506c51
    MOV dword ptr [ESP + 0x20],EBP      ; 00506c54
    MOV dword ptr [ESP + 0x34],EBX      ; 00506c58
    CMP EBP,0x80                        ; 00506c5c
    JNZ 0x00506b9c                      ; 00506c62
        ;   XREF to: 00506b9c (CONDITIONAL_JUMP)  ; LAB_00506b9c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00506c68
    SHL EAX,0x3                         ; 00506c6c
    MOV EDX,EAX                         ; 00506c6f
    SHL EAX,0x5                         ; 00506c71
    MOV EBP,dword ptr [ESP + 0x70]      ; 00506c74
    SUB EAX,EDX                         ; 00506c78
    ADD EBP,EAX                         ; 00506c7a
    LEA EBX,[EBP + 0x30]                ; 00506c7c
    ADD EBP,0xcc                        ; 00506c7f
    ADD EBX,0x34                        ; 00506c85
        ;   Label: LAB_00506c85
    MOV dword ptr [EBX + 0x28],0x0      ; 00506c88
    CMP EBX,EBP                         ; 00506c8f
    JNZ 0x00506c85                      ; 00506c91
        ;   XREF to: 00506c85 (CONDITIONAL_JUMP)  ; LAB_00506c85
    ADD ESP,0x58                        ; 00506c93
    POP EBP                             ; 00506c96
    POP EDI                             ; 00506c97
    POP ESI                             ; 00506c98
    POP EBX                             ; 00506c99
    RET                                 ; 00506c9a
    CMP dword ptr [ESP + 0x78],0x0      ; 00506c9b
        ;   Label: LAB_00506c9b
    JZ 0x00506970                       ; 00506ca0
        ;   XREF to: 00506970 (CONDITIONAL_JUMP)  ; LAB_00506970
    JMP 0x005069d9                      ; 00506ca6
        ;   XREF to: 005069d9 (UNCONDITIONAL_JUMP)  ; LAB_005069d9

