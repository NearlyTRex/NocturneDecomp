; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_004e5d80(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame)
;
; Parameters:
; SMpegSubbandSamples * Stack[0x4]:4   input_samples
; SMpegSubbandSamples * Stack[0x8]:4   output_samples
; SMpegLayer3GranuleInfo * Stack[0xc]:4   granule
; SMpegFrame *     Stack[0x10]:4   frame
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e91c3
;
; Referenced Globals:
;   undefined4 DAT_005bc158
;   undefined4 DAT_005bc15c
;   undefined4 DAT_005bc160
;   undefined4 DAT_005bc164
;   undefined4 DAT_005bc168
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5d80
        ;   Label: sound_mp3.cpp_reorderShortBlockSamples_FUN_004e5d80
    PUSH ESI                            ; 004e5d81
    PUSH EDI                            ; 004e5d82
    PUSH EBP                            ; 004e5d83
    SUB ESP,0x58                        ; 004e5d84
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004e5d87
    MOV EDI,dword ptr [ESP + 0x70]      ; 004e5d8b
    MOV ECX,dword ptr [ESP + 0x78]      ; 004e5d8f
    MOV ECX,dword ptr [ECX]             ; 004e5d93
    MOV EDX,dword ptr [ECX]             ; 004e5d95
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e5d97
    SUB EAX,EDX                         ; 004e5d9e
    MOV EDX,dword ptr [ECX + 0x10]      ; 004e5da0
    LEA EBX,[EDI + 0x48]                ; 004e5da3
    ADD EDX,EAX                         ; 004e5da6
    XOR ECX,ECX                         ; 004e5da8
    MOV dword ptr [ESP],EDX             ; 004e5daa
    IMUL EAX,ECX,0x48                   ; 004e5dad
        ;   Label: LAB_004e5dad
    MOV EDX,EBX                         ; 004e5db0
    ADD EAX,EDI                         ; 004e5db2
    MOV dword ptr [EAX],0x0             ; 004e5db4
        ;   Label: LAB_004e5db4
    ADD EAX,0x4                         ; 004e5dba
    CMP EAX,EDX                         ; 004e5dbd
    JNZ 0x004e5db4                      ; 004e5dbf
        ;   XREF to: 004e5db4 (CONDITIONAL_JUMP)  ; LAB_004e5db4
    INC ECX                             ; 004e5dc1
    ADD EBX,0x48                        ; 004e5dc2
    CMP ECX,0x20                        ; 004e5dc5
    JL 0x004e5dad                       ; 004e5dc8
        ;   XREF to: 004e5dad (CONDITIONAL_JUMP)  ; LAB_004e5dad
    MOV EAX,dword ptr [ESP + 0x74]      ; 004e5dca
    CMP dword ptr [EAX + 0x10],0x0      ; 004e5dce
    JZ 0x004e5dda                       ; 004e5dd2
        ;   XREF to: 004e5dda (CONDITIONAL_JUMP)  ; LAB_004e5dda
    CMP dword ptr [EAX + 0x14],0x2      ; 004e5dd4
    JZ 0x004e5e1d                       ; 004e5dd8
        ;   XREF to: 004e5e1d (CONDITIONAL_JUMP)  ; LAB_004e5e1d
    LEA EBP,[ESI + 0x48]                ; 004e5dda
        ;   Label: LAB_004e5dda
    MOV dword ptr [ESP + 0x10],EDI      ; 004e5ddd
    XOR EBX,EBX                         ; 004e5de1
    MOV EDI,0x48                        ; 004e5de3
    IMUL EAX,EBX,0x48                   ; 004e5de8
        ;   Label: LAB_004e5de8
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e5deb
    MOV ECX,EBP                         ; 004e5def
    ADD EAX,ESI                         ; 004e5df1
    ADD EDX,0x4                         ; 004e5df3
        ;   Label: LAB_004e5df3
    FLD float ptr [EAX]                 ; 004e5df6
    ADD EAX,0x4                         ; 004e5df8
    FSTP float ptr [EDX + -0x4]         ; 004e5dfb
    CMP EAX,ECX                         ; 004e5dfe
    JNZ 0x004e5df3                      ; 004e5e00
        ;   XREF to: 004e5df3 (CONDITIONAL_JUMP)  ; LAB_004e5df3
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e5e02
    INC EBX                             ; 004e5e06
    ADD EAX,EDI                         ; 004e5e07
    ADD EBP,0x48                        ; 004e5e09
    MOV dword ptr [ESP + 0x10],EAX      ; 004e5e0c
    CMP EBX,0x20                        ; 004e5e10
    JL 0x004e5de8                       ; 004e5e13
        ;   XREF to: 004e5de8 (CONDITIONAL_JUMP)  ; LAB_004e5de8
    ADD ESP,0x58                        ; 004e5e15
        ;   Label: LAB_004e5e15
    POP EBP                             ; 004e5e18
    POP EDI                             ; 004e5e19
    POP ESI                             ; 004e5e1a
    POP EBX                             ; 004e5e1b
    RET                                 ; 004e5e1c
    CMP dword ptr [EAX + 0x18],0x0      ; 004e5e1d
        ;   Label: LAB_004e5e1d
    JZ 0x004e5f9b                       ; 004e5e21
        ;   XREF to: 004e5f9b (CONDITIONAL_JUMP)  ; LAB_004e5f9b
    MOV EBP,0x48                        ; 004e5e27
    LEA EAX,[ESI + 0x48]                ; 004e5e2c
    MOV dword ptr [ESP + 0x14],EDI      ; 004e5e2f
    XOR EBX,EBX                         ; 004e5e33
    MOV dword ptr [ESP + 0xc],EAX       ; 004e5e35
    IMUL EAX,EBX,0x48                   ; 004e5e39
        ;   Label: LAB_004e5e39
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e5e3c
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e5e40
    ADD EAX,ESI                         ; 004e5e44
    ADD EDX,0x4                         ; 004e5e46
        ;   Label: LAB_004e5e46
    FLD float ptr [EAX]                 ; 004e5e49
    ADD EAX,0x4                         ; 004e5e4b
    FSTP float ptr [EDX + -0x4]         ; 004e5e4e
    CMP EAX,ECX                         ; 004e5e51
    JNZ 0x004e5e46                      ; 004e5e53
        ;   XREF to: 004e5e46 (CONDITIONAL_JUMP)  ; LAB_004e5e46
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e5e55
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e5e59
    INC EBX                             ; 004e5e5d
    ADD ECX,EBP                         ; 004e5e5e
    ADD EDX,EBP                         ; 004e5e60
    MOV dword ptr [ESP + 0x14],ECX      ; 004e5e62
    MOV dword ptr [ESP + 0xc],EDX       ; 004e5e66
    CMP EBX,0x2                         ; 004e5e6a
    JL 0x004e5e39                       ; 004e5e6d
        ;   XREF to: 004e5e39 (CONDITIONAL_JUMP)  ; LAB_004e5e39
    MOV EDX,dword ptr [ESP]             ; 004e5e6f
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e5e72
    ADD EAX,EDX                         ; 004e5e79
    SHL EAX,0x2                         ; 004e5e7b
    ADD EAX,EDX                         ; 004e5e7e
    SHL EAX,0x2                         ; 004e5e80
    MOV EDX,dword ptr [EAX + 0x5bc160]  ; 004e5e83 | DAT_005bc160
    MOV ECX,dword ptr [EAX + 0x5bc164]  ; 004e5e89 | DAT_005bc164
    SUB ECX,EDX                         ; 004e5e8f
    MOV dword ptr [ESP + 0x34],ECX      ; 004e5e91
    LEA ECX,[EAX + 0xc]                 ; 004e5e95
    ADD EAX,0x34                        ; 004e5e98
    MOV dword ptr [ESP + 0x18],ECX      ; 004e5e9b
    MOV dword ptr [ESP + 0x4],EAX       ; 004e5e9f
    XOR EAX,EAX                         ; 004e5ea3
        ;   Label: LAB_004e5ea3
    LEA EDX,[EDX + EDX*0x2]             ; 004e5ea5
    MOV dword ptr [ESP + 0x40],EAX      ; 004e5ea8
    MOV dword ptr [ESP + 0x2c],EDX      ; 004e5eac
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e5eb0
    MOV dword ptr [ESP + 0x38],EDX      ; 004e5eb4
    MOV dword ptr [ESP + 0x24],EAX      ; 004e5eb8
    MOV EDX,dword ptr [ESP + 0x34]      ; 004e5ebc
        ;   Label: LAB_004e5ebc
    TEST EDX,EDX                        ; 004e5ec0
    JLE 0x004e5f52                      ; 004e5ec2
        ;   XREF to: 004e5f52 (CONDITIONAL_JUMP)  ; LAB_004e5f52
    MOV EAX,dword ptr [ESP + 0x40]      ; 004e5ec8
    IMUL EAX,EDX                        ; 004e5ecc
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004e5ecf
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e5ed3
    ADD EAX,ECX                         ; 004e5ed7
    MOV EBX,dword ptr [ESP + 0x38]      ; 004e5ed9
    ADD EDX,EAX                         ; 004e5edd
    MOV ECX,EAX                         ; 004e5edf
    MOV dword ptr [ESP + 0x4c],EDX      ; 004e5ee1
    MOV EBP,0x12                        ; 004e5ee5
        ;   Label: LAB_004e5ee5
    MOV EDX,ECX                         ; 004e5eea
    MOV EAX,ECX                         ; 004e5eec
    SAR EDX,0x1f                        ; 004e5eee
    IDIV EBP                            ; 004e5ef1
    IMUL EAX,EAX,0x48                   ; 004e5ef3
    MOV EDX,ECX                         ; 004e5ef6
    MOV dword ptr [ESP + 0x54],0x12     ; 004e5ef8
    SAR EDX,0x1f                        ; 004e5f00
    LEA EBP,[ESI + EAX*0x1]             ; 004e5f03
    MOV EAX,ECX                         ; 004e5f06
    IDIV dword ptr [ESP + 0x54]         ; 004e5f08
    SHL EDX,0x2                         ; 004e5f0c
    ADD EBP,EDX                         ; 004e5f0f
    MOV EAX,EBX                         ; 004e5f11
    MOV dword ptr [ESP + 0x50],EBP      ; 004e5f13
    MOV EDX,EBX                         ; 004e5f17
    MOV EBP,0x12                        ; 004e5f19
    SAR EDX,0x1f                        ; 004e5f1e
    IDIV EBP                            ; 004e5f21
    IMUL EAX,EAX,0x48                   ; 004e5f23
    MOV EDX,EBX                         ; 004e5f26
    MOV dword ptr [ESP + 0x54],0x12     ; 004e5f28
    SAR EDX,0x1f                        ; 004e5f30
    LEA EBP,[EDI + EAX*0x1]             ; 004e5f33
    MOV EAX,EBX                         ; 004e5f36
    IDIV dword ptr [ESP + 0x54]         ; 004e5f38
    MOV EAX,dword ptr [ESP + 0x50]      ; 004e5f3c
    INC ECX                             ; 004e5f40
    FLD float ptr [EAX]                 ; 004e5f41
    FSTP float ptr [EBP + EDX*0x4]      ; 004e5f43
    MOV EBP,dword ptr [ESP + 0x4c]      ; 004e5f47
    ADD EBX,0x3                         ; 004e5f4b
    CMP ECX,EBP                         ; 004e5f4e
    JL 0x004e5ee5                       ; 004e5f50
        ;   XREF to: 004e5ee5 (CONDITIONAL_JUMP)  ; LAB_004e5ee5
    MOV EDX,dword ptr [ESP + 0x40]      ; 004e5f52
        ;   Label: LAB_004e5f52
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e5f56
    INC EDX                             ; 004e5f5a
    INC EAX                             ; 004e5f5b
    MOV dword ptr [ESP + 0x40],EDX      ; 004e5f5c
    MOV dword ptr [ESP + 0x38],EAX      ; 004e5f60
    CMP EDX,0x3                         ; 004e5f64
    JL 0x004e5ebc                       ; 004e5f67
        ;   XREF to: 004e5ebc (CONDITIONAL_JUMP)  ; LAB_004e5ebc
    MOV EBX,dword ptr [ESP + 0x18]      ; 004e5f6d
    MOV EBP,dword ptr [ESP + 0x4]       ; 004e5f71
    MOV EDX,dword ptr [EBX + 0x5bc158]  ; 004e5f75 | DAT_005bc164
    MOV EAX,dword ptr [EBX + 0x5bc15c]  ; 004e5f7b | DAT_005bc168
    ADD EBX,0x4                         ; 004e5f81
    SUB EAX,EDX                         ; 004e5f84
    MOV dword ptr [ESP + 0x18],EBX      ; 004e5f86
    MOV dword ptr [ESP + 0x34],EAX      ; 004e5f8a
    CMP EBX,EBP                         ; 004e5f8e
    JZ 0x004e5e15                       ; 004e5f90
        ;   XREF to: 004e5e15 (CONDITIONAL_JUMP)  ; LAB_004e5e15
    JMP 0x004e5ea3                      ; 004e5f96
        ;   XREF to: 004e5ea3 (UNCONDITIONAL_JUMP)  ; LAB_004e5ea3
    MOV ECX,dword ptr [ESP]             ; 004e5f9b
        ;   Label: LAB_004e5f9b
    LEA EAX,[ECX*0x8 + 0x0]             ; 004e5f9e
    ADD EAX,ECX                         ; 004e5fa5
    SHL EAX,0x2                         ; 004e5fa7
    ADD EAX,ECX                         ; 004e5faa
    SHL EAX,0x2                         ; 004e5fac
    XOR EDX,EDX                         ; 004e5faf
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e5fb1
    MOV ECX,dword ptr [EAX + 0x5bc158]  ; 004e5fb5 | DAT_005bc158
    ADD EAX,0x34                        ; 004e5fbb
    MOV dword ptr [ESP + 0x30],ECX      ; 004e5fbe
    MOV dword ptr [ESP + 0x8],EAX       ; 004e5fc2
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e5fc6
        ;   Label: LAB_004e5fc6
    LEA EDX,[EDX + EDX*0x2]             ; 004e5fca
    XOR EBX,EBX                         ; 004e5fcd
    MOV dword ptr [ESP + 0x28],EDX      ; 004e5fcf
    MOV dword ptr [ESP + 0x3c],EDX      ; 004e5fd3
    MOV dword ptr [ESP + 0x20],EAX      ; 004e5fd7
    MOV dword ptr [ESP + 0x44],EBX      ; 004e5fdb
    MOV EBP,dword ptr [ESP + 0x30]      ; 004e5fdf
        ;   Label: LAB_004e5fdf
    TEST EBP,EBP                        ; 004e5fe3
    JLE 0x004e6075                      ; 004e5fe5
        ;   XREF to: 004e6075 (CONDITIONAL_JUMP)  ; LAB_004e6075
    MOV EAX,dword ptr [ESP + 0x44]      ; 004e5feb
    IMUL EAX,EBP                        ; 004e5fef
    MOV EBP,dword ptr [ESP + 0x28]      ; 004e5ff2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e5ff6
    ADD EAX,EBP                         ; 004e5ffa
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004e5ffc
    ADD EDX,EAX                         ; 004e6000
    MOV ECX,EAX                         ; 004e6002
    MOV dword ptr [ESP + 0x48],EDX      ; 004e6004
    MOV EBP,0x12                        ; 004e6008
        ;   Label: LAB_004e6008
    MOV EDX,ECX                         ; 004e600d
    MOV EAX,ECX                         ; 004e600f
    SAR EDX,0x1f                        ; 004e6011
    IDIV EBP                            ; 004e6014
    IMUL EAX,EAX,0x48                   ; 004e6016
    MOV EDX,ECX                         ; 004e6019
    MOV dword ptr [ESP + 0x54],0x12     ; 004e601b
    SAR EDX,0x1f                        ; 004e6023
    LEA EBP,[ESI + EAX*0x1]             ; 004e6026
    MOV EAX,ECX                         ; 004e6029
    IDIV dword ptr [ESP + 0x54]         ; 004e602b
    SHL EDX,0x2                         ; 004e602f
    ADD EBP,EDX                         ; 004e6032
    MOV EAX,EBX                         ; 004e6034
    MOV dword ptr [ESP + 0x50],EBP      ; 004e6036
    MOV EDX,EBX                         ; 004e603a
    MOV EBP,0x12                        ; 004e603c
    SAR EDX,0x1f                        ; 004e6041
    IDIV EBP                            ; 004e6044
    IMUL EAX,EAX,0x48                   ; 004e6046
    MOV EDX,EBX                         ; 004e6049
    MOV dword ptr [ESP + 0x54],0x12     ; 004e604b
    SAR EDX,0x1f                        ; 004e6053
    LEA EBP,[EDI + EAX*0x1]             ; 004e6056
    MOV EAX,EBX                         ; 004e6059
    IDIV dword ptr [ESP + 0x54]         ; 004e605b
    MOV EAX,dword ptr [ESP + 0x50]      ; 004e605f
    INC ECX                             ; 004e6063
    ADD EBX,0x3                         ; 004e6064
    FLD float ptr [EAX]                 ; 004e6067
    MOV EAX,dword ptr [ESP + 0x48]      ; 004e6069
    FSTP float ptr [EBP + EDX*0x4]      ; 004e606d
    CMP ECX,EAX                         ; 004e6071
    JL 0x004e6008                       ; 004e6073
        ;   XREF to: 004e6008 (CONDITIONAL_JUMP)  ; LAB_004e6008
    MOV ECX,dword ptr [ESP + 0x44]      ; 004e6075
        ;   Label: LAB_004e6075
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e6079
    INC ECX                             ; 004e607d
    INC EDX                             ; 004e607e
    MOV dword ptr [ESP + 0x44],ECX      ; 004e607f
    MOV dword ptr [ESP + 0x3c],EDX      ; 004e6083
    CMP ECX,0x3                         ; 004e6087
    JL 0x004e5fdf                       ; 004e608a
        ;   XREF to: 004e5fdf (CONDITIONAL_JUMP)  ; LAB_004e5fdf
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004e6090
    MOV ECX,dword ptr [ESP + 0x8]       ; 004e6094
    MOV EDX,dword ptr [EBP + 0x5bc158]  ; 004e6098 | DAT_005bc158
    MOV EAX,dword ptr [EBP + 0x5bc15c]  ; 004e609e | DAT_005bc15c
    ADD EBP,0x4                         ; 004e60a4
    SUB EAX,EDX                         ; 004e60a7
    MOV dword ptr [ESP + 0x1c],EBP      ; 004e60a9
    MOV dword ptr [ESP + 0x30],EAX      ; 004e60ad
    CMP EBP,ECX                         ; 004e60b1
    JZ 0x004e5e15                       ; 004e60b3
        ;   XREF to: 004e5e15 (CONDITIONAL_JUMP)  ; LAB_004e5e15
    JMP 0x004e5fc6                      ; 004e60b9
        ;   XREF to: 004e5fc6 (UNCONDITIONAL_JUMP)  ; LAB_004e5fc6

