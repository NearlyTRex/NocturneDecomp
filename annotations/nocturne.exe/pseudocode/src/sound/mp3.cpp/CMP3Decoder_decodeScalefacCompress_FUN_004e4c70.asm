; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_004e4c70(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame)
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
;   sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004e5000 at 004e504e
;
; Referenced Globals:
;   undefined4 DAT_005bc470
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4c70
        ;   Label: sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_004e4c70
    PUSH ESI                            ; 004e4c71
    PUSH EDI                            ; 004e4c72
    PUSH EBP                            ; 004e4c73
    SUB ESP,0x24                        ; 004e4c74
    MOV EDI,dword ptr [ESP + 0x38]      ; 004e4c77
    MOV EDX,dword ptr [ESP + 0x48]      ; 004e4c7b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e4c7f
    ADD EAX,EDX                         ; 004e4c86
    MOV EDX,dword ptr [ESP + 0x40]      ; 004e4c88
    SHL EAX,0x5                         ; 004e4c8c
    ADD EDX,0x8                         ; 004e4c8f
    LEA ECX,[EDX + EAX*0x1]             ; 004e4c92
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e4c95
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e4c99
    ADD EDX,EAX                         ; 004e4ca0
    SHL EDX,0x3                         ; 004e4ca2
    LEA EAX,[ECX + 0x10]                ; 004e4ca5
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004e4ca8
    ADD EAX,EDX                         ; 004e4cac
    XOR EDX,EDX                         ; 004e4cae
    MOV ESI,dword ptr [ESI]             ; 004e4cb0
    MOV word ptr [ESP + 0x18],DX        ; 004e4cb2
    MOV EDX,dword ptr [EAX + 0x14]      ; 004e4cb7
    MOV ECX,dword ptr [EAX + 0xc]       ; 004e4cba
    CMP EDX,0x2                         ; 004e4cbd
    JNZ 0x004e4ccf                      ; 004e4cc0
        ;   XREF to: 004e4ccf (CONDITIONAL_JUMP)  ; LAB_004e4ccf
    CMP dword ptr [EAX + 0x18],0x0      ; 004e4cc2
    JNZ 0x004e4ccf                      ; 004e4cc6
        ;   XREF to: 004e4ccf (CONDITIONAL_JUMP)  ; LAB_004e4ccf
    MOV word ptr [ESP + 0x18],0x1       ; 004e4cc8
    CMP dword ptr [EAX + 0x14],0x2      ; 004e4ccf
        ;   Label: LAB_004e4ccf
    JNZ 0x004e4ce2                      ; 004e4cd3
        ;   XREF to: 004e4ce2 (CONDITIONAL_JUMP)  ; LAB_004e4ce2
    CMP dword ptr [EAX + 0x18],0x1      ; 004e4cd5
    JNZ 0x004e4ce2                      ; 004e4cd9
        ;   XREF to: 004e4ce2 (CONDITIONAL_JUMP)  ; LAB_004e4ce2
    MOV word ptr [ESP + 0x18],0x2       ; 004e4cdb
    MOV EBX,dword ptr [ESI + 0x20]      ; 004e4ce2
        ;   Label: LAB_004e4ce2
    CMP EBX,0x1                         ; 004e4ce5
    JNZ 0x004e4d24                      ; 004e4ce8
        ;   XREF to: 004e4d24 (CONDITIONAL_JUMP)  ; LAB_004e4d24
    CMP dword ptr [ESP + 0x48],0x1      ; 004e4cea
        ;   Label: LAB_004e4cea
    JNZ 0x004e4d29                      ; 004e4cef
        ;   XREF to: 004e4d29 (CONDITIONAL_JUMP)  ; LAB_004e4d29
    MOV EBP,dword ptr [ESI + 0x20]      ; 004e4cf1
        ;   Label: LAB_004e4cf1
    CMP EBP,0x1                         ; 004e4cf4
    JNZ 0x004e4e71                      ; 004e4cf7
        ;   XREF to: 004e4e71 (CONDITIONAL_JUMP)  ; LAB_004e4e71
    CMP dword ptr [ESP + 0x48],0x1      ; 004e4cfd
        ;   Label: LAB_004e4cfd
    JZ 0x004e4e7f                       ; 004e4d02
        ;   XREF to: 004e4e7f (CONDITIONAL_JUMP)  ; LAB_004e4e7f
    XOR EBX,EBX                         ; 004e4d08
        ;   Label: LAB_004e4d08
    MOVSX EAX,BX                        ; 004e4d0a
        ;   Label: LAB_004e4d0a
    CMP EAX,0x2d                        ; 004e4d0d
    JGE 0x004e4f7c                      ; 004e4d10
        ;   XREF to: 004e4f7c (CONDITIONAL_JUMP)  ; LAB_004e4f7c
    INC EBX                             ; 004e4d16
    MOV dword ptr [EDI + EAX*0x4 + 0x7358],0x0 ; 004e4d17
    JMP 0x004e4d0a                      ; 004e4d22
        ;   XREF to: 004e4d0a (UNCONDITIONAL_JUMP)  ; LAB_004e4d0a
    CMP EBX,0x3                         ; 004e4d24
        ;   Label: LAB_004e4d24
    JZ 0x004e4cea                       ; 004e4d27
        ;   XREF to: 004e4cea (CONDITIONAL_JUMP)  ; LAB_004e4cea
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e4d29
        ;   Label: LAB_004e4d29
    LEA EBX,[EDX*0x8 + 0x0]             ; 004e4d2d
    ADD EBX,EDX                         ; 004e4d34
    MOV EDX,dword ptr [ESP + 0x48]      ; 004e4d36
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e4d3a
    ADD EAX,EDX                         ; 004e4d41
    MOV EBP,dword ptr [ESP + 0x40]      ; 004e4d43
    SHL EAX,0x5                         ; 004e4d47
    SHL EBX,0x3                         ; 004e4d4a
    ADD EBP,EAX                         ; 004e4d4d
    ADD EBP,EBX                         ; 004e4d4f
    CMP ECX,0x190                       ; 004e4d51
    JNC 0x004e4daf                      ; 004e4d57
        ;   XREF to: 004e4daf (CONDITIONAL_JUMP)  ; LAB_004e4daf
    MOV EBX,ECX                         ; 004e4d59
    MOV EDX,0x5                         ; 004e4d5b
    SHR EBX,0x4                         ; 004e4d60
    MOV dword ptr [ESP + 0x14],EDX      ; 004e4d63
    MOV EAX,EBX                         ; 004e4d67
    XOR EDX,EDX                         ; 004e4d69
    DIV dword ptr [ESP + 0x14]          ; 004e4d6b
    MOV dword ptr [ESP],EAX             ; 004e4d6f
    MOV EAX,0x5                         ; 004e4d72
    XOR EDX,EDX                         ; 004e4d77
    MOV dword ptr [ESP + 0x14],EAX      ; 004e4d79
    MOV EAX,EBX                         ; 004e4d7d
    DIV dword ptr [ESP + 0x14]          ; 004e4d7f
    MOV EAX,ECX                         ; 004e4d83
    AND EAX,0xf                         ; 004e4d85
    SHR EAX,0x2                         ; 004e4d88
    MOV dword ptr [ESP + 0x8],EAX       ; 004e4d8b
    MOV EAX,ECX                         ; 004e4d8f
    AND EAX,0x3                         ; 004e4d91
    MOV dword ptr [ESP + 0x4],EDX       ; 004e4d94
    MOV dword ptr [ESP + 0xc],EAX       ; 004e4d98
    XOR EAX,EAX                         ; 004e4d9c
    MOV dword ptr [EBP + 0x54],0x0      ; 004e4d9e
    MOV word ptr [ESP + 0x1c],AX        ; 004e4da5
    JMP 0x004e4cf1                      ; 004e4daa
        ;   XREF to: 004e4cf1 (UNCONDITIONAL_JUMP)  ; LAB_004e4cf1
    CMP ECX,0x1f4                       ; 004e4daf
        ;   Label: LAB_004e4daf
    JNC 0x004e4e14                      ; 004e4db5
        ;   XREF to: 004e4e14 (CONDITIONAL_JUMP)  ; LAB_004e4e14
    LEA EAX,[ECX + 0xfffffe70]          ; 004e4db7
    XOR EDX,EDX                         ; 004e4dbd
    MOV EBX,EAX                         ; 004e4dbf
    MOV dword ptr [ESP + 0x10],EAX      ; 004e4dc1
    MOV EAX,0x5                         ; 004e4dc5
    SHR EBX,0x2                         ; 004e4dca
    MOV dword ptr [ESP + 0x14],EAX      ; 004e4dcd
    MOV EAX,EBX                         ; 004e4dd1
    DIV dword ptr [ESP + 0x14]          ; 004e4dd3
    MOV EDX,0x5                         ; 004e4dd7
    MOV dword ptr [ESP],EAX             ; 004e4ddc
    MOV dword ptr [ESP + 0x14],EDX      ; 004e4ddf
    MOV EAX,EBX                         ; 004e4de3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e4de5
    XOR EDX,EDX                         ; 004e4de9
    DIV EBX                             ; 004e4deb
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e4ded
    AND EAX,0x3                         ; 004e4df1
    MOV EBX,0x1                         ; 004e4df4
    MOV dword ptr [ESP + 0x8],EAX       ; 004e4df9
    XOR EAX,EAX                         ; 004e4dfd
    MOV dword ptr [ESP + 0x4],EDX       ; 004e4dff
    MOV dword ptr [ESP + 0xc],EAX       ; 004e4e03
    MOV word ptr [ESP + 0x1c],BX        ; 004e4e07
    MOV dword ptr [EBP + 0x54],EAX      ; 004e4e0c
    JMP 0x004e4cf1                      ; 004e4e0f
        ;   XREF to: 004e4cf1 (UNCONDITIONAL_JUMP)  ; LAB_004e4cf1
    CMP ECX,0x200                       ; 004e4e14
        ;   Label: LAB_004e4e14
    JNC 0x004e4cf1                      ; 004e4e1a
        ;   XREF to: 004e4cf1 (CONDITIONAL_JUMP)  ; LAB_004e4cf1
    MOV EDX,0x3                         ; 004e4e20
    LEA EBX,[ECX + 0xfffffe0c]          ; 004e4e25
    MOV dword ptr [ESP + 0x14],EDX      ; 004e4e2b
    MOV EAX,EBX                         ; 004e4e2f
    XOR EDX,EDX                         ; 004e4e31
    DIV dword ptr [ESP + 0x14]          ; 004e4e33
    MOV dword ptr [ESP],EAX             ; 004e4e37
    MOV EAX,0x3                         ; 004e4e3a
    XOR EDX,EDX                         ; 004e4e3f
    MOV dword ptr [ESP + 0x14],EAX      ; 004e4e41
    MOV EAX,EBX                         ; 004e4e45
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e4e47
    DIV EBX                             ; 004e4e4b
    MOV dword ptr [ESP + 0x4],EDX       ; 004e4e4d
    XOR EAX,EAX                         ; 004e4e51
    MOV EDX,0x2                         ; 004e4e53
    MOV dword ptr [ESP + 0x8],EAX       ; 004e4e58
    MOV dword ptr [ESP + 0xc],EAX       ; 004e4e5c
    MOV word ptr [ESP + 0x1c],DX        ; 004e4e60
    MOV dword ptr [EBP + 0x54],0x1      ; 004e4e65
    JMP 0x004e4cf1                      ; 004e4e6c
        ;   XREF to: 004e4cf1 (UNCONDITIONAL_JUMP)  ; LAB_004e4cf1
    CMP EBP,0x3                         ; 004e4e71
        ;   Label: LAB_004e4e71
    JZ 0x004e4cfd                       ; 004e4e74
        ;   XREF to: 004e4cfd (CONDITIONAL_JUMP)  ; LAB_004e4cfd
    JMP 0x004e4d08                      ; 004e4e7a
        ;   XREF to: 004e4d08 (UNCONDITIONAL_JUMP)  ; LAB_004e4d08
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e4e7f
        ;   Label: LAB_004e4e7f
    LEA EBX,[EDX*0x8 + 0x0]             ; 004e4e83
    ADD EBX,EDX                         ; 004e4e8a
    MOV EDX,dword ptr [ESP + 0x48]      ; 004e4e8c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e4e90
    ADD EAX,EDX                         ; 004e4e97
    MOV ESI,dword ptr [ESP + 0x40]      ; 004e4e99
    SHL EAX,0x5                         ; 004e4e9d
    SHL EBX,0x3                         ; 004e4ea0
    ADD EAX,ESI                         ; 004e4ea3
    SHR ECX,0x1                         ; 004e4ea5
    ADD EBX,EAX                         ; 004e4ea7
    CMP ECX,0xb4                        ; 004e4ea9
    JNC 0x004e4ef5                      ; 004e4eaf
        ;   XREF to: 004e4ef5 (CONDITIONAL_JUMP)  ; LAB_004e4ef5
    MOV ESI,0x24                        ; 004e4eb1
    MOV EAX,ECX                         ; 004e4eb6
    XOR EDX,EDX                         ; 004e4eb8
    DIV ESI                             ; 004e4eba
    MOV dword ptr [ESP],EAX             ; 004e4ebc
    XOR EDX,EDX                         ; 004e4ebf
    MOV EAX,ECX                         ; 004e4ec1
    DIV ESI                             ; 004e4ec3
    MOV ECX,EDX                         ; 004e4ec5
    MOV ESI,0x6                         ; 004e4ec7
    MOV EAX,ECX                         ; 004e4ecc
    XOR EDX,EDX                         ; 004e4ece
    DIV ESI                             ; 004e4ed0
    MOV dword ptr [ESP + 0x4],EAX       ; 004e4ed2
    XOR EDX,EDX                         ; 004e4ed6
    MOV EAX,ECX                         ; 004e4ed8
    DIV ESI                             ; 004e4eda
    XOR ECX,ECX                         ; 004e4edc
    MOV dword ptr [ESP + 0xc],ECX       ; 004e4ede
    MOV dword ptr [ESP + 0x8],EDX       ; 004e4ee2
    MOV dword ptr [EBX + 0x54],ECX      ; 004e4ee6
    MOV word ptr [ESP + 0x1c],0x3       ; 004e4ee9
    JMP 0x004e4d08                      ; 004e4ef0
        ;   XREF to: 004e4d08 (UNCONDITIONAL_JUMP)  ; LAB_004e4d08
    CMP ECX,0xf4                        ; 004e4ef5
        ;   Label: LAB_004e4ef5
    JNC 0x004e4f36                      ; 004e4efb
        ;   XREF to: 004e4f36 (CONDITIONAL_JUMP)  ; LAB_004e4f36
    SUB ECX,0xb4                        ; 004e4efd
    MOV EAX,ECX                         ; 004e4f03
    AND EAX,0x3f                        ; 004e4f05
    SHR EAX,0x4                         ; 004e4f08
    XOR EDX,EDX                         ; 004e4f0b
    MOV dword ptr [ESP],EAX             ; 004e4f0d
    MOV EAX,ECX                         ; 004e4f10
    MOV dword ptr [ESP + 0xc],EDX       ; 004e4f12
    AND EAX,0xf                         ; 004e4f16
    AND ECX,0x3                         ; 004e4f19
    SHR EAX,0x2                         ; 004e4f1c
    MOV dword ptr [ESP + 0x8],ECX       ; 004e4f1f
    MOV dword ptr [ESP + 0x4],EAX       ; 004e4f23
    MOV dword ptr [EBX + 0x54],EDX      ; 004e4f27
    MOV word ptr [ESP + 0x1c],0x4       ; 004e4f2a
    JMP 0x004e4d08                      ; 004e4f31
        ;   XREF to: 004e4d08 (UNCONDITIONAL_JUMP)  ; LAB_004e4d08
    CMP ECX,0xff                        ; 004e4f36
        ;   Label: LAB_004e4f36
    JNC 0x004e4d08                      ; 004e4f3c
        ;   XREF to: 004e4d08 (CONDITIONAL_JUMP)  ; LAB_004e4d08
    MOV ESI,0x3                         ; 004e4f42
    SUB ECX,0xf4                        ; 004e4f47
    XOR EDX,EDX                         ; 004e4f4d
    MOV EAX,ECX                         ; 004e4f4f
    DIV ESI                             ; 004e4f51
    MOV dword ptr [ESP],EAX             ; 004e4f53
    XOR EDX,EDX                         ; 004e4f56
    MOV EAX,ECX                         ; 004e4f58
    DIV ESI                             ; 004e4f5a
    XOR EBP,EBP                         ; 004e4f5c
    MOV dword ptr [ESP + 0x8],EBP       ; 004e4f5e
    MOV dword ptr [ESP + 0xc],EBP       ; 004e4f62
    MOV dword ptr [ESP + 0x4],EDX       ; 004e4f66
    MOV EDX,0x5                         ; 004e4f6a
    MOV dword ptr [EBX + 0x54],EBP      ; 004e4f6f
    MOV word ptr [ESP + 0x1c],DX        ; 004e4f72
    JMP 0x004e4d08                      ; 004e4f77
        ;   XREF to: 004e4d08 (UNCONDITIONAL_JUMP)  ; LAB_004e4d08
    XOR EBX,EBX                         ; 004e4f7c
        ;   Label: LAB_004e4f7c
    MOV word ptr [ESP + 0x20],BX        ; 004e4f7e
    MOV EAX,dword ptr [ESP + 0x1e]      ; 004e4f83
        ;   Label: LAB_004e4f83
    SAR EAX,0x10                        ; 004e4f87
    CMP EAX,0x4                         ; 004e4f8a
    JGE 0x004e361c                      ; 004e4f8d
        ;   XREF to: 004e361c (CONDITIONAL_JUMP)  ; LAB_004e361c
    XOR EBP,EBP                         ; 004e4f93
    XOR ESI,ESI                         ; 004e4f95
    MOV EAX,dword ptr [ESP + 0x1a]      ; 004e4f97
        ;   Label: LAB_004e4f97
    SAR EAX,0x10                        ; 004e4f9b
    IMUL EAX,EAX,0x30                   ; 004e4f9e
    MOV EDX,dword ptr [ESP + 0x16]      ; 004e4fa1
    SAR EDX,0x10                        ; 004e4fa5
    SHL EDX,0x4                         ; 004e4fa8
    ADD EDX,EAX                         ; 004e4fab
    MOV EAX,dword ptr [ESP + 0x1e]      ; 004e4fad
    SAR EAX,0x10                        ; 004e4fb1
    SHL EAX,0x2                         ; 004e4fb4
    MOVSX ECX,SI                        ; 004e4fb7
    CMP ECX,dword ptr [EDX + EAX*0x1 + 0x5bc470] ; 004e4fba | DAT_005bc470
    JC 0x004e4fca                       ; 004e4fc1
        ;   XREF to: 004e4fca (CONDITIONAL_JUMP)  ; LAB_004e4fca
    INC word ptr [ESP + 0x20]           ; 004e4fc3
    JMP 0x004e4f83                      ; 004e4fc8
        ;   XREF to: 004e4f83 (UNCONDITIONAL_JUMP)  ; LAB_004e4f83
    MOV EDX,dword ptr [ESP + EAX*0x1]   ; 004e4fca
        ;   Label: LAB_004e4fca
    CMP EBP,EDX                         ; 004e4fcd
    JNZ 0x004e4fdd                      ; 004e4fcf
        ;   XREF to: 004e4fdd (CONDITIONAL_JUMP)  ; LAB_004e4fdd
    MOVSX EAX,BX                        ; 004e4fd1
    MOV dword ptr [EDI + EAX*0x4 + 0x7358],EDX ; 004e4fd4
    JMP 0x004e4ff1                      ; 004e4fdb
        ;   XREF to: 004e4ff1 (UNCONDITIONAL_JUMP)  ; LAB_004e4ff1
    PUSH EDX                            ; 004e4fdd
        ;   Label: LAB_004e4fdd
    PUSH EDI                            ; 004e4fde
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0 ; 004e4fdf
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0(CMP3Decoder * this_ptr, uint num_bits)
    MOVSX EDX,BX                        ; 004e4fe4
    ADD ESP,0x8                         ; 004e4fe7
    MOV dword ptr [EDI + EDX*0x4 + 0x7358],EAX ; 004e4fea
    INC ESI                             ; 004e4ff1
        ;   Label: LAB_004e4ff1
    INC EBX                             ; 004e4ff2
    JMP 0x004e4f97                      ; 004e4ff3
        ;   XREF to: 004e4f97 (UNCONDITIONAL_JUMP)  ; LAB_004e4f97

