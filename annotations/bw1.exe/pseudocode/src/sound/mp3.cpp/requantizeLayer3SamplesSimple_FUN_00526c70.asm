; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_00526c70(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined8       Stack[-0x68]:8  local_68
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052b846
;
; Referenced Globals:
;   undefined4 DAT_0061f930
;   undefined4 DAT_0061f9b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526c70
        ;   Label: sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_00526c70
    PUSH ESI                            ; 00526c71
    PUSH EDI                            ; 00526c72
    PUSH EBP                            ; 00526c73
    SUB ESP,0x58                        ; 00526c74
    MOV EAX,dword ptr [ESP + 0x78]      ; 00526c77
    MOV EDX,dword ptr [EAX + 0x10]      ; 00526c7b
    MOV dword ptr [ESP + 0x30],EDX      ; 00526c7e
    MOV EDX,dword ptr [EAX + 0x18]      ; 00526c82
    MOV dword ptr [ESP + 0x8],EDX       ; 00526c85
    MOV EAX,dword ptr [EAX + 0x8]       ; 00526c89
    TEST EDX,EDX                        ; 00526c8c
    JLE 0x00526d98                      ; 00526c8e
        ;   XREF to: 00526d98 (CONDITIONAL_JUMP)  ; LAB_00526d98
    MOV dword ptr [ESP + 0x10],EAX      ; 00526c94
    XOR EBP,EBP                         ; 00526c98
    LEA EAX,[EDX*0x4 + 0x0]             ; 00526c9a
    MOV dword ptr [ESP + 0x14],EBP      ; 00526ca1
    MOV dword ptr [ESP + 0xc],EAX       ; 00526ca5
    MOV EAX,dword ptr [ESP + 0x14]      ; 00526ca9
        ;   Label: LAB_00526ca9
    MOV dword ptr [ESP + 0x20],EAX      ; 00526cad
    MOV EAX,dword ptr [ESP + 0x10]      ; 00526cb1
    MOV ESI,dword ptr [ESP + 0x14]      ; 00526cb5
    MOV dword ptr [ESP + 0x2c],EAX      ; 00526cb9
    MOV EDI,EAX                         ; 00526cbd
    MOV EAX,ESI                         ; 00526cbf
    MOV EDX,dword ptr [ESP + 0x70]      ; 00526cc1
    XOR EAX,ESI                         ; 00526cc5
    MOV dword ptr [ESP + 0x1c],ESI      ; 00526cc7
    MOV dword ptr [ESP + 0x28],EAX      ; 00526ccb
    LEA EAX,[ESI + EDX*0x1]             ; 00526ccf
    MOV dword ptr [ESP + 0x24],EAX      ; 00526cd2
    MOV dword ptr [ESP + 0x18],EAX      ; 00526cd6
    XOR EBP,EBP                         ; 00526cda
        ;   Label: LAB_00526cda
    MOV EAX,dword ptr [ESP + 0x30]      ; 00526cdc
    MOV dword ptr [ESP + 0x4c],EBP      ; 00526ce0
    TEST EAX,EAX                        ; 00526ce4
    JLE 0x00526df4                      ; 00526ce6
        ;   XREF to: 00526df4 (CONDITIONAL_JUMP)  ; LAB_00526df4
    MOV EAX,dword ptr [ESP + 0x24]      ; 00526cec
    MOV ECX,dword ptr [ESP + 0x28]      ; 00526cf0
    MOV dword ptr [ESP + 0x40],EAX      ; 00526cf4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00526cf8
    MOV EBX,dword ptr [ESP + 0x74]      ; 00526cfc
    ADD EAX,ECX                         ; 00526d00
    ADD EAX,EBX                         ; 00526d02
    MOV dword ptr [ESP + 0x34],EAX      ; 00526d04
    LEA EAX,[ECX + ESI*0x1]             ; 00526d08
    MOV EBP,dword ptr [ESP + 0x6c]      ; 00526d0b
    LEA EDX,[EBX + EAX*0x1]             ; 00526d0f
    ADD EAX,EBP                         ; 00526d12
    MOV dword ptr [ESP + 0x3c],EAX      ; 00526d14
    MOV EAX,dword ptr [ESP + 0x18]      ; 00526d18
    MOV dword ptr [ESP + 0x48],EAX      ; 00526d1c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00526d20
    ADD EAX,ECX                         ; 00526d24
    MOV dword ptr [ESP + 0x44],EDX      ; 00526d26
    LEA EDX,[EAX + EBP*0x1]             ; 00526d2a
    ADD EAX,EBX                         ; 00526d2d
    MOV dword ptr [ESP + 0x38],EDX      ; 00526d2f
    MOV dword ptr [ESP + 0x50],EAX      ; 00526d33
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00526d37
        ;   Label: LAB_00526d37
    MOV EBX,dword ptr [ESP + 0x70]      ; 00526d3b
    SHL EAX,0x7                         ; 00526d3f
    ADD EBX,EAX                         ; 00526d42
    MOV EAX,dword ptr [ESP + 0x40]      ; 00526d44
    MOV EBP,dword ptr [EAX]             ; 00526d48
    TEST EBP,EBP                        ; 00526d4a
    JZ 0x00526ebc                       ; 00526d4c
        ;   XREF to: 00526ebc (CONDITIONAL_JUMP)  ; LAB_00526ebc
    XOR EAX,EAX                         ; 00526d52
    LEA EDX,[EBX + ESI*0x1]             ; 00526d54
        ;   Label: LAB_00526d54
    MOV EBP,0x1                         ; 00526d57
    MOV CL,AL                           ; 00526d5c
    MOV EDX,dword ptr [EDX]             ; 00526d5e
    SHL EBP,CL                          ; 00526d60
    SHL EDX,0x4                         ; 00526d62
    MOV ECX,EBP                         ; 00526d65
    CMP ECX,dword ptr [EDX + EDI*0x1]   ; 00526d67
    JNC 0x00526e11                      ; 00526d6a
        ;   XREF to: 00526e11 (CONDITIONAL_JUMP)  ; LAB_00526e11
    INC EAX                             ; 00526d70
    JMP 0x00526d54                      ; 00526d71
        ;   XREF to: 00526d54 (UNCONDITIONAL_JUMP)  ; LAB_00526d54
    MOV ECX,dword ptr [ESP + 0x14]      ; 00526d73
        ;   Label: LAB_00526d73
    MOV EBX,dword ptr [ESP + 0x10]      ; 00526d77
    MOV ESI,dword ptr [ESP + 0xc]       ; 00526d7b
    ADD ECX,0x4                         ; 00526d7f
    ADD EBX,0x100                       ; 00526d82
    MOV dword ptr [ESP + 0x14],ECX      ; 00526d88
    MOV dword ptr [ESP + 0x10],EBX      ; 00526d8c
    CMP ECX,ESI                         ; 00526d90
    JL 0x00526ca9                       ; 00526d92
        ;   XREF to: 00526ca9 (CONDITIONAL_JUMP)  ; LAB_00526ca9
    MOV EDI,dword ptr [ESP + 0x8]       ; 00526d98
        ;   Label: LAB_00526d98
    CMP EDI,0x20                        ; 00526d9c
    JGE 0x00526dec                      ; 00526d9f
        ;   XREF to: 00526dec (CONDITIONAL_JUMP)  ; LAB_00526dec
    MOV EBP,dword ptr [ESP + 0x30]      ; 00526da1
    LEA ESI,[EDI*0x4 + 0x0]             ; 00526da5
    MOV EBX,ESI                         ; 00526dac
        ;   Label: LAB_00526dac
    XOR ECX,ECX                         ; 00526dae
    MOV EDI,dword ptr [ESP + 0x30]      ; 00526db0
        ;   Label: LAB_00526db0
    XOR EDX,EDX                         ; 00526db4
    TEST EDI,EDI                        ; 00526db6
    JLE 0x00526dd3                      ; 00526db8
        ;   XREF to: 00526dd3 (CONDITIONAL_JUMP)  ; LAB_00526dd3
    MOV EDI,dword ptr [ESP + 0x74]      ; 00526dba
    LEA EAX,[EBX + ECX*0x1]             ; 00526dbe
    ADD EAX,EDI                         ; 00526dc1
    INC EDX                             ; 00526dc3
        ;   Label: LAB_00526dc3
    MOV dword ptr [EAX],0x0             ; 00526dc4
    ADD EAX,0x180                       ; 00526dca
    CMP EDX,EBP                         ; 00526dcf
    JL 0x00526dc3                       ; 00526dd1
        ;   XREF to: 00526dc3 (CONDITIONAL_JUMP)  ; LAB_00526dc3
    ADD ECX,0x80                        ; 00526dd3
        ;   Label: LAB_00526dd3
    CMP ECX,0x180                       ; 00526dd9
    JNZ 0x00526db0                      ; 00526ddf
        ;   XREF to: 00526db0 (CONDITIONAL_JUMP)  ; LAB_00526db0
    ADD ESI,0x4                         ; 00526de1
    CMP ESI,0x80                        ; 00526de4
    JL 0x00526dac                       ; 00526dea
        ;   XREF to: 00526dac (CONDITIONAL_JUMP)  ; LAB_00526dac
    ADD ESP,0x58                        ; 00526dec
        ;   Label: LAB_00526dec
    POP EBP                             ; 00526def
    POP EDI                             ; 00526df0
    POP ESI                             ; 00526df1
    POP EBX                             ; 00526df2
    RET                                 ; 00526df3
    MOV EAX,dword ptr [ESP + 0x28]      ; 00526df4
        ;   Label: LAB_00526df4
    ADD EAX,0x80                        ; 00526df8
    MOV dword ptr [ESP + 0x28],EAX      ; 00526dfd
    CMP EAX,0x180                       ; 00526e01
    JZ 0x00526d73                       ; 00526e06
        ;   XREF to: 00526d73 (CONDITIONAL_JUMP)  ; LAB_00526d73
    JMP 0x00526cda                      ; 00526e0c
        ;   XREF to: 00526cda (UNCONDITIONAL_JUMP)  ; LAB_00526cda
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00526e11
        ;   Label: LAB_00526e11
    LEA ECX,[EAX + -0x1]                ; 00526e15
    MOV EDX,dword ptr [EDX]             ; 00526e18
    SHR EDX,CL                          ; 00526e1a
    AND EDX,0x1                         ; 00526e1c
    CMP EDX,0x1                         ; 00526e1f
    JNZ 0x00526ead                      ; 00526e22
        ;   XREF to: 00526ead (CONDITIONAL_JUMP)  ; LAB_00526ead
    MOV EDX,dword ptr [ESP + 0x44]      ; 00526e28
    MOV dword ptr [EDX],0x0             ; 00526e2c
    DEC EAX                             ; 00526e32
        ;   Label: LAB_00526e32
    MOV CL,AL                           ; 00526e33
    MOV EAX,0x1                         ; 00526e35
    SHL EAX,CL                          ; 00526e3a
    MOV ECX,dword ptr [ESP + 0x38]      ; 00526e3c
    LEA EDX,[EAX + -0x1]                ; 00526e40
    MOV EBX,dword ptr [ECX]             ; 00526e43
    XOR EBP,EBP                         ; 00526e45
    AND EDX,EBX                         ; 00526e47
    MOV dword ptr [ESP + 0x4],EBP       ; 00526e49
    MOV dword ptr [ESP],EDX             ; 00526e4d
    MOV dword ptr [ESP + 0x54],EAX      ; 00526e50
    FILD qword ptr [ESP]                ; 00526e54
    FILD dword ptr [ESP + 0x54]         ; 00526e57
    FDIVP                               ; 00526e5b
    MOV EAX,dword ptr [ESP + 0x50]      ; 00526e5d
    FADD float ptr [EAX]                ; 00526e61
    FSTP float ptr [EAX]                ; 00526e63
    MOV EAX,dword ptr [ESP + 0x48]      ; 00526e65
    MOV EAX,dword ptr [EAX]             ; 00526e69
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00526e6b
    SHL EAX,0x4                         ; 00526e6f
    ADD EAX,EDX                         ; 00526e72
    MOV EDX,dword ptr [ESP + 0x50]      ; 00526e74
    MOV EAX,dword ptr [EAX + 0xc]       ; 00526e78
    FLD float ptr [EDX]                 ; 00526e7b
    FLD ST0                             ; 00526e7d
    FADD double ptr [EAX*0x8 + 0x61f9b8] ; 00526e7f | DAT_0061f9b8
    FSTP ST1                            ; 00526e86
    MOV EAX,dword ptr [ESP + 0x48]      ; 00526e88
    FSTP float ptr [EDX]                ; 00526e8c
    MOV EAX,dword ptr [EAX]             ; 00526e8e
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00526e90
    SHL EAX,0x4                         ; 00526e94
    ADD EAX,ECX                         ; 00526e97
    FLD float ptr [EDX]                 ; 00526e99
    MOV EAX,dword ptr [EAX + 0xc]       ; 00526e9b
    FLD ST0                             ; 00526e9e
    FMUL double ptr [EAX*0x8 + 0x61f930] ; 00526ea0 | DAT_0061f930
    FSTP ST1                            ; 00526ea7
    FSTP float ptr [EDX]                ; 00526ea9
    JMP 0x00526ec2                      ; 00526eab
        ;   XREF to: 00526ec2 (UNCONDITIONAL_JUMP)  ; LAB_00526ec2
    MOV EDX,dword ptr [ESP + 0x44]      ; 00526ead
        ;   Label: LAB_00526ead
    MOV dword ptr [EDX],0xbf800000      ; 00526eb1
    JMP 0x00526e32                      ; 00526eb7
        ;   XREF to: 00526e32 (UNCONDITIONAL_JUMP)  ; LAB_00526e32
    MOV EAX,dword ptr [ESP + 0x34]      ; 00526ebc
        ;   Label: LAB_00526ebc
    MOV dword ptr [EAX],EBP             ; 00526ec0
    MOV EDX,dword ptr [ESP + 0x40]      ; 00526ec2
        ;   Label: LAB_00526ec2
    MOV ECX,dword ptr [ESP + 0x34]      ; 00526ec6
    MOV EBX,dword ptr [ESP + 0x44]      ; 00526eca
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00526ece
    MOV EAX,dword ptr [ESP + 0x48]      ; 00526ed2
    ADD EDX,0x80                        ; 00526ed6
    ADD ECX,0x180                       ; 00526edc
    ADD EBX,0x180                       ; 00526ee2
    ADD EBP,0x180                       ; 00526ee8
    ADD EAX,0x80                        ; 00526eee
    MOV dword ptr [ESP + 0x40],EDX      ; 00526ef3
    MOV dword ptr [ESP + 0x34],ECX      ; 00526ef7
    MOV dword ptr [ESP + 0x44],EBX      ; 00526efb
    MOV dword ptr [ESP + 0x3c],EBP      ; 00526eff
    MOV dword ptr [ESP + 0x48],EAX      ; 00526f03
    MOV EDX,dword ptr [ESP + 0x38]      ; 00526f07
    MOV ECX,dword ptr [ESP + 0x50]      ; 00526f0b
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00526f0f
    MOV EBP,dword ptr [ESP + 0x30]      ; 00526f13
    ADD EDX,0x180                       ; 00526f17
    ADD ECX,0x180                       ; 00526f1d
    INC EBX                             ; 00526f23
    MOV dword ptr [ESP + 0x38],EDX      ; 00526f24
    MOV dword ptr [ESP + 0x50],ECX      ; 00526f28
    MOV dword ptr [ESP + 0x4c],EBX      ; 00526f2c
    CMP EBX,EBP                         ; 00526f30
    JGE 0x00526df4                      ; 00526f32
        ;   XREF to: 00526df4 (CONDITIONAL_JUMP)  ; LAB_00526df4
    JMP 0x00526d37                      ; 00526f38
        ;   XREF to: 00526d37 (UNCONDITIONAL_JUMP)  ; LAB_00526d37

