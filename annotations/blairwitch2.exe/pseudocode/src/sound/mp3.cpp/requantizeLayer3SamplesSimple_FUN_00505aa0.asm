; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_00505aa0(int param_1,int param_2,int param_3,int param_4)
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a676
;
; Referenced Globals:
;   undefined4 DAT_006184d0
;   undefined4 DAT_00618558
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505aa0
        ;   Label: sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_00505aa0
    PUSH ESI                            ; 00505aa1
    PUSH EDI                            ; 00505aa2
    PUSH EBP                            ; 00505aa3
    SUB ESP,0x58                        ; 00505aa4
    MOV EAX,dword ptr [ESP + 0x78]      ; 00505aa7
    MOV EDX,dword ptr [EAX + 0x10]      ; 00505aab
    MOV dword ptr [ESP + 0x30],EDX      ; 00505aae
    MOV EDX,dword ptr [EAX + 0x18]      ; 00505ab2
    MOV dword ptr [ESP + 0x8],EDX       ; 00505ab5
    MOV EAX,dword ptr [EAX + 0x8]       ; 00505ab9
    TEST EDX,EDX                        ; 00505abc
    JLE 0x00505bc8                      ; 00505abe
        ;   XREF to: 00505bc8 (CONDITIONAL_JUMP)  ; LAB_00505bc8
    MOV dword ptr [ESP + 0x10],EAX      ; 00505ac4
    XOR EBP,EBP                         ; 00505ac8
    LEA EAX,[EDX*0x4 + 0x0]             ; 00505aca
    MOV dword ptr [ESP + 0x14],EBP      ; 00505ad1
    MOV dword ptr [ESP + 0xc],EAX       ; 00505ad5
    MOV EAX,dword ptr [ESP + 0x14]      ; 00505ad9
        ;   Label: LAB_00505ad9
    MOV dword ptr [ESP + 0x20],EAX      ; 00505add
    MOV EAX,dword ptr [ESP + 0x10]      ; 00505ae1
    MOV ESI,dword ptr [ESP + 0x14]      ; 00505ae5
    MOV dword ptr [ESP + 0x2c],EAX      ; 00505ae9
    MOV EDI,EAX                         ; 00505aed
    MOV EAX,ESI                         ; 00505aef
    MOV EDX,dword ptr [ESP + 0x70]      ; 00505af1
    XOR EAX,ESI                         ; 00505af5
    MOV dword ptr [ESP + 0x1c],ESI      ; 00505af7
    MOV dword ptr [ESP + 0x28],EAX      ; 00505afb
    LEA EAX,[ESI + EDX*0x1]             ; 00505aff
    MOV dword ptr [ESP + 0x24],EAX      ; 00505b02
    MOV dword ptr [ESP + 0x18],EAX      ; 00505b06
    XOR EBP,EBP                         ; 00505b0a
        ;   Label: LAB_00505b0a
    MOV EAX,dword ptr [ESP + 0x30]      ; 00505b0c
    MOV dword ptr [ESP + 0x4c],EBP      ; 00505b10
    TEST EAX,EAX                        ; 00505b14
    JLE 0x00505c24                      ; 00505b16
        ;   XREF to: 00505c24 (CONDITIONAL_JUMP)  ; LAB_00505c24
    MOV EAX,dword ptr [ESP + 0x24]      ; 00505b1c
    MOV ECX,dword ptr [ESP + 0x28]      ; 00505b20
    MOV dword ptr [ESP + 0x40],EAX      ; 00505b24
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00505b28
    MOV EBX,dword ptr [ESP + 0x74]      ; 00505b2c
    ADD EAX,ECX                         ; 00505b30
    ADD EAX,EBX                         ; 00505b32
    MOV dword ptr [ESP + 0x34],EAX      ; 00505b34
    LEA EAX,[ECX + ESI*0x1]             ; 00505b38
    MOV EBP,dword ptr [ESP + 0x6c]      ; 00505b3b
    LEA EDX,[EBX + EAX*0x1]             ; 00505b3f
    ADD EAX,EBP                         ; 00505b42
    MOV dword ptr [ESP + 0x3c],EAX      ; 00505b44
    MOV EAX,dword ptr [ESP + 0x18]      ; 00505b48
    MOV dword ptr [ESP + 0x48],EAX      ; 00505b4c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00505b50
    ADD EAX,ECX                         ; 00505b54
    MOV dword ptr [ESP + 0x44],EDX      ; 00505b56
    LEA EDX,[EAX + EBP*0x1]             ; 00505b5a
    ADD EAX,EBX                         ; 00505b5d
    MOV dword ptr [ESP + 0x38],EDX      ; 00505b5f
    MOV dword ptr [ESP + 0x50],EAX      ; 00505b63
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00505b67
        ;   Label: LAB_00505b67
    MOV EBX,dword ptr [ESP + 0x70]      ; 00505b6b
    SHL EAX,0x7                         ; 00505b6f
    ADD EBX,EAX                         ; 00505b72
    MOV EAX,dword ptr [ESP + 0x40]      ; 00505b74
    MOV EBP,dword ptr [EAX]             ; 00505b78
    TEST EBP,EBP                        ; 00505b7a
    JZ 0x00505cec                       ; 00505b7c
        ;   XREF to: 00505cec (CONDITIONAL_JUMP)  ; LAB_00505cec
    XOR EAX,EAX                         ; 00505b82
    LEA EDX,[EBX + ESI*0x1]             ; 00505b84
        ;   Label: LAB_00505b84
    MOV EBP,0x1                         ; 00505b87
    MOV CL,AL                           ; 00505b8c
    MOV EDX,dword ptr [EDX]             ; 00505b8e
    SHL EBP,CL                          ; 00505b90
    SHL EDX,0x4                         ; 00505b92
    MOV ECX,EBP                         ; 00505b95
    CMP ECX,dword ptr [EDX + EDI*0x1]   ; 00505b97
    JNC 0x00505c41                      ; 00505b9a
        ;   XREF to: 00505c41 (CONDITIONAL_JUMP)  ; LAB_00505c41
    INC EAX                             ; 00505ba0
    JMP 0x00505b84                      ; 00505ba1
        ;   XREF to: 00505b84 (UNCONDITIONAL_JUMP)  ; LAB_00505b84
    MOV ECX,dword ptr [ESP + 0x14]      ; 00505ba3
        ;   Label: LAB_00505ba3
    MOV EBX,dword ptr [ESP + 0x10]      ; 00505ba7
    MOV ESI,dword ptr [ESP + 0xc]       ; 00505bab
    ADD ECX,0x4                         ; 00505baf
    ADD EBX,0x100                       ; 00505bb2
    MOV dword ptr [ESP + 0x14],ECX      ; 00505bb8
    MOV dword ptr [ESP + 0x10],EBX      ; 00505bbc
    CMP ECX,ESI                         ; 00505bc0
    JL 0x00505ad9                       ; 00505bc2
        ;   XREF to: 00505ad9 (CONDITIONAL_JUMP)  ; LAB_00505ad9
    MOV EDI,dword ptr [ESP + 0x8]       ; 00505bc8
        ;   Label: LAB_00505bc8
    CMP EDI,0x20                        ; 00505bcc
    JGE 0x00505c1c                      ; 00505bcf
        ;   XREF to: 00505c1c (CONDITIONAL_JUMP)  ; LAB_00505c1c
    MOV EBP,dword ptr [ESP + 0x30]      ; 00505bd1
    LEA ESI,[EDI*0x4 + 0x0]             ; 00505bd5
    MOV EBX,ESI                         ; 00505bdc
        ;   Label: LAB_00505bdc
    XOR ECX,ECX                         ; 00505bde
    MOV EDI,dword ptr [ESP + 0x30]      ; 00505be0
        ;   Label: LAB_00505be0
    XOR EDX,EDX                         ; 00505be4
    TEST EDI,EDI                        ; 00505be6
    JLE 0x00505c03                      ; 00505be8
        ;   XREF to: 00505c03 (CONDITIONAL_JUMP)  ; LAB_00505c03
    MOV EDI,dword ptr [ESP + 0x74]      ; 00505bea
    LEA EAX,[EBX + ECX*0x1]             ; 00505bee
    ADD EAX,EDI                         ; 00505bf1
    INC EDX                             ; 00505bf3
        ;   Label: LAB_00505bf3
    MOV dword ptr [EAX],0x0             ; 00505bf4
    ADD EAX,0x180                       ; 00505bfa
    CMP EDX,EBP                         ; 00505bff
    JL 0x00505bf3                       ; 00505c01
        ;   XREF to: 00505bf3 (CONDITIONAL_JUMP)  ; LAB_00505bf3
    ADD ECX,0x80                        ; 00505c03
        ;   Label: LAB_00505c03
    CMP ECX,0x180                       ; 00505c09
    JNZ 0x00505be0                      ; 00505c0f
        ;   XREF to: 00505be0 (CONDITIONAL_JUMP)  ; LAB_00505be0
    ADD ESI,0x4                         ; 00505c11
    CMP ESI,0x80                        ; 00505c14
    JL 0x00505bdc                       ; 00505c1a
        ;   XREF to: 00505bdc (CONDITIONAL_JUMP)  ; LAB_00505bdc
    ADD ESP,0x58                        ; 00505c1c
        ;   Label: LAB_00505c1c
    POP EBP                             ; 00505c1f
    POP EDI                             ; 00505c20
    POP ESI                             ; 00505c21
    POP EBX                             ; 00505c22
    RET                                 ; 00505c23
    MOV EAX,dword ptr [ESP + 0x28]      ; 00505c24
        ;   Label: LAB_00505c24
    ADD EAX,0x80                        ; 00505c28
    MOV dword ptr [ESP + 0x28],EAX      ; 00505c2d
    CMP EAX,0x180                       ; 00505c31
    JZ 0x00505ba3                       ; 00505c36
        ;   XREF to: 00505ba3 (CONDITIONAL_JUMP)  ; LAB_00505ba3
    JMP 0x00505b0a                      ; 00505c3c
        ;   XREF to: 00505b0a (UNCONDITIONAL_JUMP)  ; LAB_00505b0a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00505c41
        ;   Label: LAB_00505c41
    LEA ECX,[EAX + -0x1]                ; 00505c45
    MOV EDX,dword ptr [EDX]             ; 00505c48
    SHR EDX,CL                          ; 00505c4a
    AND EDX,0x1                         ; 00505c4c
    CMP EDX,0x1                         ; 00505c4f
    JNZ 0x00505cdd                      ; 00505c52
        ;   XREF to: 00505cdd (CONDITIONAL_JUMP)  ; LAB_00505cdd
    MOV EDX,dword ptr [ESP + 0x44]      ; 00505c58
    MOV dword ptr [EDX],0x0             ; 00505c5c
    DEC EAX                             ; 00505c62
        ;   Label: LAB_00505c62
    MOV CL,AL                           ; 00505c63
    MOV EAX,0x1                         ; 00505c65
    SHL EAX,CL                          ; 00505c6a
    MOV ECX,dword ptr [ESP + 0x38]      ; 00505c6c
    LEA EDX,[EAX + -0x1]                ; 00505c70
    MOV EBX,dword ptr [ECX]             ; 00505c73
    XOR EBP,EBP                         ; 00505c75
    AND EDX,EBX                         ; 00505c77
    MOV dword ptr [ESP + 0x4],EBP       ; 00505c79
    MOV dword ptr [ESP],EDX             ; 00505c7d
    MOV dword ptr [ESP + 0x54],EAX      ; 00505c80
    FILD qword ptr [ESP]                ; 00505c84
    FILD dword ptr [ESP + 0x54]         ; 00505c87
    FDIVP                               ; 00505c8b
    MOV EAX,dword ptr [ESP + 0x50]      ; 00505c8d
    FADD float ptr [EAX]                ; 00505c91
    FSTP float ptr [EAX]                ; 00505c93
    MOV EAX,dword ptr [ESP + 0x48]      ; 00505c95
    MOV EAX,dword ptr [EAX]             ; 00505c99
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00505c9b
    SHL EAX,0x4                         ; 00505c9f
    ADD EAX,EDX                         ; 00505ca2
    MOV EDX,dword ptr [ESP + 0x50]      ; 00505ca4
    MOV EAX,dword ptr [EAX + 0xc]       ; 00505ca8
    FLD float ptr [EDX]                 ; 00505cab
    FLD ST0                             ; 00505cad
    FADD double ptr [EAX*0x8 + 0x618558] ; 00505caf | DAT_00618558
    FSTP ST1                            ; 00505cb6
    MOV EAX,dword ptr [ESP + 0x48]      ; 00505cb8
    FSTP float ptr [EDX]                ; 00505cbc
    MOV EAX,dword ptr [EAX]             ; 00505cbe
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00505cc0
    SHL EAX,0x4                         ; 00505cc4
    ADD EAX,ECX                         ; 00505cc7
    FLD float ptr [EDX]                 ; 00505cc9
    MOV EAX,dword ptr [EAX + 0xc]       ; 00505ccb
    FLD ST0                             ; 00505cce
    FMUL double ptr [EAX*0x8 + 0x6184d0] ; 00505cd0 | DAT_006184d0
    FSTP ST1                            ; 00505cd7
    FSTP float ptr [EDX]                ; 00505cd9
    JMP 0x00505cf2                      ; 00505cdb
        ;   XREF to: 00505cf2 (UNCONDITIONAL_JUMP)  ; LAB_00505cf2
    MOV EDX,dword ptr [ESP + 0x44]      ; 00505cdd
        ;   Label: LAB_00505cdd
    MOV dword ptr [EDX],0xbf800000      ; 00505ce1
    JMP 0x00505c62                      ; 00505ce7
        ;   XREF to: 00505c62 (UNCONDITIONAL_JUMP)  ; LAB_00505c62
    MOV EAX,dword ptr [ESP + 0x34]      ; 00505cec
        ;   Label: LAB_00505cec
    MOV dword ptr [EAX],EBP             ; 00505cf0
    MOV EDX,dword ptr [ESP + 0x40]      ; 00505cf2
        ;   Label: LAB_00505cf2
    MOV ECX,dword ptr [ESP + 0x34]      ; 00505cf6
    MOV EBX,dword ptr [ESP + 0x44]      ; 00505cfa
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00505cfe
    MOV EAX,dword ptr [ESP + 0x48]      ; 00505d02
    ADD EDX,0x80                        ; 00505d06
    ADD ECX,0x180                       ; 00505d0c
    ADD EBX,0x180                       ; 00505d12
    ADD EBP,0x180                       ; 00505d18
    ADD EAX,0x80                        ; 00505d1e
    MOV dword ptr [ESP + 0x40],EDX      ; 00505d23
    MOV dword ptr [ESP + 0x34],ECX      ; 00505d27
    MOV dword ptr [ESP + 0x44],EBX      ; 00505d2b
    MOV dword ptr [ESP + 0x3c],EBP      ; 00505d2f
    MOV dword ptr [ESP + 0x48],EAX      ; 00505d33
    MOV EDX,dword ptr [ESP + 0x38]      ; 00505d37
    MOV ECX,dword ptr [ESP + 0x50]      ; 00505d3b
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00505d3f
    MOV EBP,dword ptr [ESP + 0x30]      ; 00505d43
    ADD EDX,0x180                       ; 00505d47
    ADD ECX,0x180                       ; 00505d4d
    INC EBX                             ; 00505d53
    MOV dword ptr [ESP + 0x38],EDX      ; 00505d54
    MOV dword ptr [ESP + 0x50],ECX      ; 00505d58
    MOV dword ptr [ESP + 0x4c],EBX      ; 00505d5c
    CMP EBX,EBP                         ; 00505d60
    JGE 0x00505c24                      ; 00505d62
        ;   XREF to: 00505c24 (CONDITIONAL_JUMP)  ; LAB_00505c24
    JMP 0x00505b67                      ; 00505d68
        ;   XREF to: 00505b67 (UNCONDITIONAL_JUMP)  ; LAB_00505b67

