; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_00506cb0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame)
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
;   sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00507040 at 0050708e
;
; Referenced Globals:
;   undefined4 DAT_006196b0
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506cb0
        ;   Label: sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_00506cb0
    PUSH ESI                            ; 00506cb1
    PUSH EDI                            ; 00506cb2
    PUSH EBP                            ; 00506cb3
    SUB ESP,0x24                        ; 00506cb4
    MOV EDI,dword ptr [ESP + 0x38]      ; 00506cb7
    MOV EDX,dword ptr [ESP + 0x48]      ; 00506cbb
    LEA EAX,[EDX*0x4 + 0x0]             ; 00506cbf
    ADD EAX,EDX                         ; 00506cc6
    MOV EDX,dword ptr [ESP + 0x40]      ; 00506cc8
    SHL EAX,0x5                         ; 00506ccc
    ADD EDX,0x8                         ; 00506ccf
    LEA ECX,[EDX + EAX*0x1]             ; 00506cd2
    MOV EDX,dword ptr [ESP + 0x44]      ; 00506cd5
    LEA EAX,[EDX*0x8 + 0x0]             ; 00506cd9
    ADD EDX,EAX                         ; 00506ce0
    SHL EDX,0x3                         ; 00506ce2
    LEA EAX,[ECX + 0x10]                ; 00506ce5
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00506ce8
    ADD EAX,EDX                         ; 00506cec
    XOR EDX,EDX                         ; 00506cee
    MOV ESI,dword ptr [ESI]             ; 00506cf0
    MOV word ptr [ESP + 0x18],DX        ; 00506cf2
    MOV EDX,dword ptr [EAX + 0x14]      ; 00506cf7
    MOV ECX,dword ptr [EAX + 0xc]       ; 00506cfa
    CMP EDX,0x2                         ; 00506cfd
    JNZ 0x00506d0f                      ; 00506d00
        ;   XREF to: 00506d0f (CONDITIONAL_JUMP)  ; LAB_00506d0f
    CMP dword ptr [EAX + 0x18],0x0      ; 00506d02
    JNZ 0x00506d0f                      ; 00506d06
        ;   XREF to: 00506d0f (CONDITIONAL_JUMP)  ; LAB_00506d0f
    MOV word ptr [ESP + 0x18],0x1       ; 00506d08
    CMP dword ptr [EAX + 0x14],0x2      ; 00506d0f
        ;   Label: LAB_00506d0f
    JNZ 0x00506d22                      ; 00506d13
        ;   XREF to: 00506d22 (CONDITIONAL_JUMP)  ; LAB_00506d22
    CMP dword ptr [EAX + 0x18],0x1      ; 00506d15
    JNZ 0x00506d22                      ; 00506d19
        ;   XREF to: 00506d22 (CONDITIONAL_JUMP)  ; LAB_00506d22
    MOV word ptr [ESP + 0x18],0x2       ; 00506d1b
    MOV EBX,dword ptr [ESI + 0x20]      ; 00506d22
        ;   Label: LAB_00506d22
    CMP EBX,0x1                         ; 00506d25
    JNZ 0x00506d64                      ; 00506d28
        ;   XREF to: 00506d64 (CONDITIONAL_JUMP)  ; LAB_00506d64
    CMP dword ptr [ESP + 0x48],0x1      ; 00506d2a
        ;   Label: LAB_00506d2a
    JNZ 0x00506d69                      ; 00506d2f
        ;   XREF to: 00506d69 (CONDITIONAL_JUMP)  ; LAB_00506d69
    MOV EBP,dword ptr [ESI + 0x20]      ; 00506d31
        ;   Label: LAB_00506d31
    CMP EBP,0x1                         ; 00506d34
    JNZ 0x00506eb1                      ; 00506d37
        ;   XREF to: 00506eb1 (CONDITIONAL_JUMP)  ; LAB_00506eb1
    CMP dword ptr [ESP + 0x48],0x1      ; 00506d3d
        ;   Label: LAB_00506d3d
    JZ 0x00506ebf                       ; 00506d42
        ;   XREF to: 00506ebf (CONDITIONAL_JUMP)  ; LAB_00506ebf
    XOR EBX,EBX                         ; 00506d48
        ;   Label: LAB_00506d48
    MOVSX EAX,BX                        ; 00506d4a
        ;   Label: LAB_00506d4a
    CMP EAX,0x2d                        ; 00506d4d
    JGE 0x00506fbc                      ; 00506d50
        ;   XREF to: 00506fbc (CONDITIONAL_JUMP)  ; LAB_00506fbc
    INC EBX                             ; 00506d56
    MOV dword ptr [EDI + EAX*0x4 + 0x7358],0x0 ; 00506d57
    JMP 0x00506d4a                      ; 00506d62
        ;   XREF to: 00506d4a (UNCONDITIONAL_JUMP)  ; LAB_00506d4a
    CMP EBX,0x3                         ; 00506d64
        ;   Label: LAB_00506d64
    JZ 0x00506d2a                       ; 00506d67
        ;   XREF to: 00506d2a (CONDITIONAL_JUMP)  ; LAB_00506d2a
    MOV EDX,dword ptr [ESP + 0x44]      ; 00506d69
        ;   Label: LAB_00506d69
    LEA EBX,[EDX*0x8 + 0x0]             ; 00506d6d
    ADD EBX,EDX                         ; 00506d74
    MOV EDX,dword ptr [ESP + 0x48]      ; 00506d76
    LEA EAX,[EDX*0x4 + 0x0]             ; 00506d7a
    ADD EAX,EDX                         ; 00506d81
    MOV EBP,dword ptr [ESP + 0x40]      ; 00506d83
    SHL EAX,0x5                         ; 00506d87
    SHL EBX,0x3                         ; 00506d8a
    ADD EBP,EAX                         ; 00506d8d
    ADD EBP,EBX                         ; 00506d8f
    CMP ECX,0x190                       ; 00506d91
    JNC 0x00506def                      ; 00506d97
        ;   XREF to: 00506def (CONDITIONAL_JUMP)  ; LAB_00506def
    MOV EBX,ECX                         ; 00506d99
    MOV EDX,0x5                         ; 00506d9b
    SHR EBX,0x4                         ; 00506da0
    MOV dword ptr [ESP + 0x14],EDX      ; 00506da3
    MOV EAX,EBX                         ; 00506da7
    XOR EDX,EDX                         ; 00506da9
    DIV dword ptr [ESP + 0x14]          ; 00506dab
    MOV dword ptr [ESP],EAX             ; 00506daf
    MOV EAX,0x5                         ; 00506db2
    XOR EDX,EDX                         ; 00506db7
    MOV dword ptr [ESP + 0x14],EAX      ; 00506db9
    MOV EAX,EBX                         ; 00506dbd
    DIV dword ptr [ESP + 0x14]          ; 00506dbf
    MOV EAX,ECX                         ; 00506dc3
    AND EAX,0xf                         ; 00506dc5
    SHR EAX,0x2                         ; 00506dc8
    MOV dword ptr [ESP + 0x8],EAX       ; 00506dcb
    MOV EAX,ECX                         ; 00506dcf
    AND EAX,0x3                         ; 00506dd1
    MOV dword ptr [ESP + 0x4],EDX       ; 00506dd4
    MOV dword ptr [ESP + 0xc],EAX       ; 00506dd8
    XOR EAX,EAX                         ; 00506ddc
    MOV dword ptr [EBP + 0x54],0x0      ; 00506dde
    MOV word ptr [ESP + 0x1c],AX        ; 00506de5
    JMP 0x00506d31                      ; 00506dea
        ;   XREF to: 00506d31 (UNCONDITIONAL_JUMP)  ; LAB_00506d31
    CMP ECX,0x1f4                       ; 00506def
        ;   Label: LAB_00506def
    JNC 0x00506e54                      ; 00506df5
        ;   XREF to: 00506e54 (CONDITIONAL_JUMP)  ; LAB_00506e54
    LEA EAX,[ECX + 0xfffffe70]          ; 00506df7
    XOR EDX,EDX                         ; 00506dfd
    MOV EBX,EAX                         ; 00506dff
    MOV dword ptr [ESP + 0x10],EAX      ; 00506e01
    MOV EAX,0x5                         ; 00506e05
    SHR EBX,0x2                         ; 00506e0a
    MOV dword ptr [ESP + 0x14],EAX      ; 00506e0d
    MOV EAX,EBX                         ; 00506e11
    DIV dword ptr [ESP + 0x14]          ; 00506e13
    MOV EDX,0x5                         ; 00506e17
    MOV dword ptr [ESP],EAX             ; 00506e1c
    MOV dword ptr [ESP + 0x14],EDX      ; 00506e1f
    MOV EAX,EBX                         ; 00506e23
    MOV EBX,dword ptr [ESP + 0x14]      ; 00506e25
    XOR EDX,EDX                         ; 00506e29
    DIV EBX                             ; 00506e2b
    MOV EAX,dword ptr [ESP + 0x10]      ; 00506e2d
    AND EAX,0x3                         ; 00506e31
    MOV EBX,0x1                         ; 00506e34
    MOV dword ptr [ESP + 0x8],EAX       ; 00506e39
    XOR EAX,EAX                         ; 00506e3d
    MOV dword ptr [ESP + 0x4],EDX       ; 00506e3f
    MOV dword ptr [ESP + 0xc],EAX       ; 00506e43
    MOV word ptr [ESP + 0x1c],BX        ; 00506e47
    MOV dword ptr [EBP + 0x54],EAX      ; 00506e4c
    JMP 0x00506d31                      ; 00506e4f
        ;   XREF to: 00506d31 (UNCONDITIONAL_JUMP)  ; LAB_00506d31
    CMP ECX,0x200                       ; 00506e54
        ;   Label: LAB_00506e54
    JNC 0x00506d31                      ; 00506e5a
        ;   XREF to: 00506d31 (CONDITIONAL_JUMP)  ; LAB_00506d31
    MOV EDX,0x3                         ; 00506e60
    LEA EBX,[ECX + 0xfffffe0c]          ; 00506e65
    MOV dword ptr [ESP + 0x14],EDX      ; 00506e6b
    MOV EAX,EBX                         ; 00506e6f
    XOR EDX,EDX                         ; 00506e71
    DIV dword ptr [ESP + 0x14]          ; 00506e73
    MOV dword ptr [ESP],EAX             ; 00506e77
    MOV EAX,0x3                         ; 00506e7a
    XOR EDX,EDX                         ; 00506e7f
    MOV dword ptr [ESP + 0x14],EAX      ; 00506e81
    MOV EAX,EBX                         ; 00506e85
    MOV EBX,dword ptr [ESP + 0x14]      ; 00506e87
    DIV EBX                             ; 00506e8b
    MOV dword ptr [ESP + 0x4],EDX       ; 00506e8d
    XOR EAX,EAX                         ; 00506e91
    MOV EDX,0x2                         ; 00506e93
    MOV dword ptr [ESP + 0x8],EAX       ; 00506e98
    MOV dword ptr [ESP + 0xc],EAX       ; 00506e9c
    MOV word ptr [ESP + 0x1c],DX        ; 00506ea0
    MOV dword ptr [EBP + 0x54],0x1      ; 00506ea5
    JMP 0x00506d31                      ; 00506eac
        ;   XREF to: 00506d31 (UNCONDITIONAL_JUMP)  ; LAB_00506d31
    CMP EBP,0x3                         ; 00506eb1
        ;   Label: LAB_00506eb1
    JZ 0x00506d3d                       ; 00506eb4
        ;   XREF to: 00506d3d (CONDITIONAL_JUMP)  ; LAB_00506d3d
    JMP 0x00506d48                      ; 00506eba
        ;   XREF to: 00506d48 (UNCONDITIONAL_JUMP)  ; LAB_00506d48
    MOV EDX,dword ptr [ESP + 0x44]      ; 00506ebf
        ;   Label: LAB_00506ebf
    LEA EBX,[EDX*0x8 + 0x0]             ; 00506ec3
    ADD EBX,EDX                         ; 00506eca
    MOV EDX,dword ptr [ESP + 0x48]      ; 00506ecc
    LEA EAX,[EDX*0x4 + 0x0]             ; 00506ed0
    ADD EAX,EDX                         ; 00506ed7
    MOV ESI,dword ptr [ESP + 0x40]      ; 00506ed9
    SHL EAX,0x5                         ; 00506edd
    SHL EBX,0x3                         ; 00506ee0
    ADD EAX,ESI                         ; 00506ee3
    SHR ECX,0x1                         ; 00506ee5
    ADD EBX,EAX                         ; 00506ee7
    CMP ECX,0xb4                        ; 00506ee9
    JNC 0x00506f35                      ; 00506eef
        ;   XREF to: 00506f35 (CONDITIONAL_JUMP)  ; LAB_00506f35
    MOV ESI,0x24                        ; 00506ef1
    MOV EAX,ECX                         ; 00506ef6
    XOR EDX,EDX                         ; 00506ef8
    DIV ESI                             ; 00506efa
    MOV dword ptr [ESP],EAX             ; 00506efc
    XOR EDX,EDX                         ; 00506eff
    MOV EAX,ECX                         ; 00506f01
    DIV ESI                             ; 00506f03
    MOV ECX,EDX                         ; 00506f05
    MOV ESI,0x6                         ; 00506f07
    MOV EAX,ECX                         ; 00506f0c
    XOR EDX,EDX                         ; 00506f0e
    DIV ESI                             ; 00506f10
    MOV dword ptr [ESP + 0x4],EAX       ; 00506f12
    XOR EDX,EDX                         ; 00506f16
    MOV EAX,ECX                         ; 00506f18
    DIV ESI                             ; 00506f1a
    XOR ECX,ECX                         ; 00506f1c
    MOV dword ptr [ESP + 0xc],ECX       ; 00506f1e
    MOV dword ptr [ESP + 0x8],EDX       ; 00506f22
    MOV dword ptr [EBX + 0x54],ECX      ; 00506f26
    MOV word ptr [ESP + 0x1c],0x3       ; 00506f29
    JMP 0x00506d48                      ; 00506f30
        ;   XREF to: 00506d48 (UNCONDITIONAL_JUMP)  ; LAB_00506d48
    CMP ECX,0xf4                        ; 00506f35
        ;   Label: LAB_00506f35
    JNC 0x00506f76                      ; 00506f3b
        ;   XREF to: 00506f76 (CONDITIONAL_JUMP)  ; LAB_00506f76
    SUB ECX,0xb4                        ; 00506f3d
    MOV EAX,ECX                         ; 00506f43
    AND EAX,0x3f                        ; 00506f45
    SHR EAX,0x4                         ; 00506f48
    XOR EDX,EDX                         ; 00506f4b
    MOV dword ptr [ESP],EAX             ; 00506f4d
    MOV EAX,ECX                         ; 00506f50
    MOV dword ptr [ESP + 0xc],EDX       ; 00506f52
    AND EAX,0xf                         ; 00506f56
    AND ECX,0x3                         ; 00506f59
    SHR EAX,0x2                         ; 00506f5c
    MOV dword ptr [ESP + 0x8],ECX       ; 00506f5f
    MOV dword ptr [ESP + 0x4],EAX       ; 00506f63
    MOV dword ptr [EBX + 0x54],EDX      ; 00506f67
    MOV word ptr [ESP + 0x1c],0x4       ; 00506f6a
    JMP 0x00506d48                      ; 00506f71
        ;   XREF to: 00506d48 (UNCONDITIONAL_JUMP)  ; LAB_00506d48
    CMP ECX,0xff                        ; 00506f76
        ;   Label: LAB_00506f76
    JNC 0x00506d48                      ; 00506f7c
        ;   XREF to: 00506d48 (CONDITIONAL_JUMP)  ; LAB_00506d48
    MOV ESI,0x3                         ; 00506f82
    SUB ECX,0xf4                        ; 00506f87
    XOR EDX,EDX                         ; 00506f8d
    MOV EAX,ECX                         ; 00506f8f
    DIV ESI                             ; 00506f91
    MOV dword ptr [ESP],EAX             ; 00506f93
    XOR EDX,EDX                         ; 00506f96
    MOV EAX,ECX                         ; 00506f98
    DIV ESI                             ; 00506f9a
    XOR EBP,EBP                         ; 00506f9c
    MOV dword ptr [ESP + 0x8],EBP       ; 00506f9e
    MOV dword ptr [ESP + 0xc],EBP       ; 00506fa2
    MOV dword ptr [ESP + 0x4],EDX       ; 00506fa6
    MOV EDX,0x5                         ; 00506faa
    MOV dword ptr [EBX + 0x54],EBP      ; 00506faf
    MOV word ptr [ESP + 0x1c],DX        ; 00506fb2
    JMP 0x00506d48                      ; 00506fb7
        ;   XREF to: 00506d48 (UNCONDITIONAL_JUMP)  ; LAB_00506d48
    XOR EBX,EBX                         ; 00506fbc
        ;   Label: LAB_00506fbc
    MOV word ptr [ESP + 0x20],BX        ; 00506fbe
    MOV EAX,dword ptr [ESP + 0x1e]      ; 00506fc3
        ;   Label: LAB_00506fc3
    SAR EAX,0x10                        ; 00506fc7
    CMP EAX,0x4                         ; 00506fca
    JGE 0x0050565c                      ; 00506fcd
        ;   XREF to: 0050565c (CONDITIONAL_JUMP)  ; LAB_0050565c
    XOR EBP,EBP                         ; 00506fd3
    XOR ESI,ESI                         ; 00506fd5
    MOV EAX,dword ptr [ESP + 0x1a]      ; 00506fd7
        ;   Label: LAB_00506fd7
    SAR EAX,0x10                        ; 00506fdb
    IMUL EAX,EAX,0x30                   ; 00506fde
    MOV EDX,dword ptr [ESP + 0x16]      ; 00506fe1
    SAR EDX,0x10                        ; 00506fe5
    SHL EDX,0x4                         ; 00506fe8
    ADD EDX,EAX                         ; 00506feb
    MOV EAX,dword ptr [ESP + 0x1e]      ; 00506fed
    SAR EAX,0x10                        ; 00506ff1
    SHL EAX,0x2                         ; 00506ff4
    MOVSX ECX,SI                        ; 00506ff7
    CMP ECX,dword ptr [EDX + EAX*0x1 + 0x6196b0] ; 00506ffa | DAT_006196b0
    JC 0x0050700a                       ; 00507001
        ;   XREF to: 0050700a (CONDITIONAL_JUMP)  ; LAB_0050700a
    INC word ptr [ESP + 0x20]           ; 00507003
    JMP 0x00506fc3                      ; 00507008
        ;   XREF to: 00506fc3 (UNCONDITIONAL_JUMP)  ; LAB_00506fc3
    MOV EDX,dword ptr [ESP + EAX*0x1]   ; 0050700a
        ;   Label: LAB_0050700a
    CMP EBP,EDX                         ; 0050700d
    JNZ 0x0050701d                      ; 0050700f
        ;   XREF to: 0050701d (CONDITIONAL_JUMP)  ; LAB_0050701d
    MOVSX EAX,BX                        ; 00507011
    MOV dword ptr [EDI + EAX*0x4 + 0x7358],EDX ; 00507014
    JMP 0x00507031                      ; 0050701b
        ;   XREF to: 00507031 (UNCONDITIONAL_JUMP)  ; LAB_00507031
    PUSH EDX                            ; 0050701d
        ;   Label: LAB_0050701d
    PUSH EDI                            ; 0050701e
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30 ; 0050701f
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder * this_ptr, uint num_bits)
    MOVSX EDX,BX                        ; 00507024
    ADD ESP,0x8                         ; 00507027
    MOV dword ptr [EDI + EDX*0x4 + 0x7358],EAX ; 0050702a
    INC ESI                             ; 00507031
        ;   Label: LAB_00507031
    INC EBX                             ; 00507032
    JMP 0x00506fd7                      ; 00507033
        ;   XREF to: 00506fd7 (UNCONDITIONAL_JUMP)  ; LAB_00506fd7

