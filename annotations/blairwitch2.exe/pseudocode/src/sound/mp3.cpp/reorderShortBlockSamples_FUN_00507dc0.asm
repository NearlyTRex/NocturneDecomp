; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_00507dc0(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4)
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050ab73
;
; Referenced Globals:
;   undefined4 DAT_00619398
;   undefined4 DAT_0061939c
;   undefined4 DAT_006193a0
;   undefined4 DAT_006193a4
;   undefined4 DAT_006193a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507dc0
        ;   Label: sound_mp3.cpp_reorderShortBlockSamples_FUN_00507dc0
    PUSH ESI                            ; 00507dc1
    PUSH EDI                            ; 00507dc2
    PUSH EBP                            ; 00507dc3
    SUB ESP,0x58                        ; 00507dc4
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00507dc7
    MOV EDI,dword ptr [ESP + 0x70]      ; 00507dcb
    MOV ECX,dword ptr [ESP + 0x78]      ; 00507dcf
    MOV ECX,dword ptr [ECX]             ; 00507dd3
    MOV EDX,dword ptr [ECX]             ; 00507dd5
    LEA EAX,[EDX*0x4 + 0x0]             ; 00507dd7
    SUB EAX,EDX                         ; 00507dde
    MOV EDX,dword ptr [ECX + 0x10]      ; 00507de0
    LEA EBX,[EDI + 0x48]                ; 00507de3
    ADD EDX,EAX                         ; 00507de6
    XOR ECX,ECX                         ; 00507de8
    MOV dword ptr [ESP],EDX             ; 00507dea
    IMUL EAX,ECX,0x48                   ; 00507ded
        ;   Label: LAB_00507ded
    MOV EDX,EBX                         ; 00507df0
    ADD EAX,EDI                         ; 00507df2
    MOV dword ptr [EAX],0x0             ; 00507df4
        ;   Label: LAB_00507df4
    ADD EAX,0x4                         ; 00507dfa
    CMP EAX,EDX                         ; 00507dfd
    JNZ 0x00507df4                      ; 00507dff
        ;   XREF to: 00507df4 (CONDITIONAL_JUMP)  ; LAB_00507df4
    INC ECX                             ; 00507e01
    ADD EBX,0x48                        ; 00507e02
    CMP ECX,0x20                        ; 00507e05
    JL 0x00507ded                       ; 00507e08
        ;   XREF to: 00507ded (CONDITIONAL_JUMP)  ; LAB_00507ded
    MOV EAX,dword ptr [ESP + 0x74]      ; 00507e0a
    CMP dword ptr [EAX + 0x10],0x0      ; 00507e0e
    JZ 0x00507e1a                       ; 00507e12
        ;   XREF to: 00507e1a (CONDITIONAL_JUMP)  ; LAB_00507e1a
    CMP dword ptr [EAX + 0x14],0x2      ; 00507e14
    JZ 0x00507e5d                       ; 00507e18
        ;   XREF to: 00507e5d (CONDITIONAL_JUMP)  ; LAB_00507e5d
    LEA EBP,[ESI + 0x48]                ; 00507e1a
        ;   Label: LAB_00507e1a
    MOV dword ptr [ESP + 0x10],EDI      ; 00507e1d
    XOR EBX,EBX                         ; 00507e21
    MOV EDI,0x48                        ; 00507e23
    IMUL EAX,EBX,0x48                   ; 00507e28
        ;   Label: LAB_00507e28
    MOV EDX,dword ptr [ESP + 0x10]      ; 00507e2b
    MOV ECX,EBP                         ; 00507e2f
    ADD EAX,ESI                         ; 00507e31
    ADD EDX,0x4                         ; 00507e33
        ;   Label: LAB_00507e33
    FLD float ptr [EAX]                 ; 00507e36
    ADD EAX,0x4                         ; 00507e38
    FSTP float ptr [EDX + -0x4]         ; 00507e3b
    CMP EAX,ECX                         ; 00507e3e
    JNZ 0x00507e33                      ; 00507e40
        ;   XREF to: 00507e33 (CONDITIONAL_JUMP)  ; LAB_00507e33
    MOV EAX,dword ptr [ESP + 0x10]      ; 00507e42
    INC EBX                             ; 00507e46
    ADD EAX,EDI                         ; 00507e47
    ADD EBP,0x48                        ; 00507e49
    MOV dword ptr [ESP + 0x10],EAX      ; 00507e4c
    CMP EBX,0x20                        ; 00507e50
    JL 0x00507e28                       ; 00507e53
        ;   XREF to: 00507e28 (CONDITIONAL_JUMP)  ; LAB_00507e28
    ADD ESP,0x58                        ; 00507e55
        ;   Label: LAB_00507e55
    POP EBP                             ; 00507e58
    POP EDI                             ; 00507e59
    POP ESI                             ; 00507e5a
    POP EBX                             ; 00507e5b
    RET                                 ; 00507e5c
    CMP dword ptr [EAX + 0x18],0x0      ; 00507e5d
        ;   Label: LAB_00507e5d
    JZ 0x00507fdb                       ; 00507e61
        ;   XREF to: 00507fdb (CONDITIONAL_JUMP)  ; LAB_00507fdb
    MOV EBP,0x48                        ; 00507e67
    LEA EAX,[ESI + 0x48]                ; 00507e6c
    MOV dword ptr [ESP + 0x14],EDI      ; 00507e6f
    XOR EBX,EBX                         ; 00507e73
    MOV dword ptr [ESP + 0xc],EAX       ; 00507e75
    IMUL EAX,EBX,0x48                   ; 00507e79
        ;   Label: LAB_00507e79
    MOV EDX,dword ptr [ESP + 0x14]      ; 00507e7c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00507e80
    ADD EAX,ESI                         ; 00507e84
    ADD EDX,0x4                         ; 00507e86
        ;   Label: LAB_00507e86
    FLD float ptr [EAX]                 ; 00507e89
    ADD EAX,0x4                         ; 00507e8b
    FSTP float ptr [EDX + -0x4]         ; 00507e8e
    CMP EAX,ECX                         ; 00507e91
    JNZ 0x00507e86                      ; 00507e93
        ;   XREF to: 00507e86 (CONDITIONAL_JUMP)  ; LAB_00507e86
    MOV ECX,dword ptr [ESP + 0x14]      ; 00507e95
    MOV EDX,dword ptr [ESP + 0xc]       ; 00507e99
    INC EBX                             ; 00507e9d
    ADD ECX,EBP                         ; 00507e9e
    ADD EDX,EBP                         ; 00507ea0
    MOV dword ptr [ESP + 0x14],ECX      ; 00507ea2
    MOV dword ptr [ESP + 0xc],EDX       ; 00507ea6
    CMP EBX,0x2                         ; 00507eaa
    JL 0x00507e79                       ; 00507ead
        ;   XREF to: 00507e79 (CONDITIONAL_JUMP)  ; LAB_00507e79
    MOV EDX,dword ptr [ESP]             ; 00507eaf
    LEA EAX,[EDX*0x8 + 0x0]             ; 00507eb2
    ADD EAX,EDX                         ; 00507eb9
    SHL EAX,0x2                         ; 00507ebb
    ADD EAX,EDX                         ; 00507ebe
    SHL EAX,0x2                         ; 00507ec0
    MOV EDX,dword ptr [EAX + 0x6193a0]  ; 00507ec3 | DAT_006193a0
    MOV ECX,dword ptr [EAX + 0x6193a4]  ; 00507ec9 | DAT_006193a4
    SUB ECX,EDX                         ; 00507ecf
    MOV dword ptr [ESP + 0x34],ECX      ; 00507ed1
    LEA ECX,[EAX + 0xc]                 ; 00507ed5
    ADD EAX,0x34                        ; 00507ed8
    MOV dword ptr [ESP + 0x18],ECX      ; 00507edb
    MOV dword ptr [ESP + 0x4],EAX       ; 00507edf
    XOR EAX,EAX                         ; 00507ee3
        ;   Label: LAB_00507ee3
    LEA EDX,[EDX + EDX*0x2]             ; 00507ee5
    MOV dword ptr [ESP + 0x40],EAX      ; 00507ee8
    MOV dword ptr [ESP + 0x2c],EDX      ; 00507eec
    MOV EAX,dword ptr [ESP + 0x34]      ; 00507ef0
    MOV dword ptr [ESP + 0x38],EDX      ; 00507ef4
    MOV dword ptr [ESP + 0x24],EAX      ; 00507ef8
    MOV EDX,dword ptr [ESP + 0x34]      ; 00507efc
        ;   Label: LAB_00507efc
    TEST EDX,EDX                        ; 00507f00
    JLE 0x00507f92                      ; 00507f02
        ;   XREF to: 00507f92 (CONDITIONAL_JUMP)  ; LAB_00507f92
    MOV EAX,dword ptr [ESP + 0x40]      ; 00507f08
    IMUL EAX,EDX                        ; 00507f0c
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00507f0f
    MOV EDX,dword ptr [ESP + 0x24]      ; 00507f13
    ADD EAX,ECX                         ; 00507f17
    MOV EBX,dword ptr [ESP + 0x38]      ; 00507f19
    ADD EDX,EAX                         ; 00507f1d
    MOV ECX,EAX                         ; 00507f1f
    MOV dword ptr [ESP + 0x4c],EDX      ; 00507f21
    MOV EBP,0x12                        ; 00507f25
        ;   Label: LAB_00507f25
    MOV EDX,ECX                         ; 00507f2a
    MOV EAX,ECX                         ; 00507f2c
    SAR EDX,0x1f                        ; 00507f2e
    IDIV EBP                            ; 00507f31
    IMUL EAX,EAX,0x48                   ; 00507f33
    MOV EDX,ECX                         ; 00507f36
    MOV dword ptr [ESP + 0x54],0x12     ; 00507f38
    SAR EDX,0x1f                        ; 00507f40
    LEA EBP,[ESI + EAX*0x1]             ; 00507f43
    MOV EAX,ECX                         ; 00507f46
    IDIV dword ptr [ESP + 0x54]         ; 00507f48
    SHL EDX,0x2                         ; 00507f4c
    ADD EBP,EDX                         ; 00507f4f
    MOV EAX,EBX                         ; 00507f51
    MOV dword ptr [ESP + 0x50],EBP      ; 00507f53
    MOV EDX,EBX                         ; 00507f57
    MOV EBP,0x12                        ; 00507f59
    SAR EDX,0x1f                        ; 00507f5e
    IDIV EBP                            ; 00507f61
    IMUL EAX,EAX,0x48                   ; 00507f63
    MOV EDX,EBX                         ; 00507f66
    MOV dword ptr [ESP + 0x54],0x12     ; 00507f68
    SAR EDX,0x1f                        ; 00507f70
    LEA EBP,[EDI + EAX*0x1]             ; 00507f73
    MOV EAX,EBX                         ; 00507f76
    IDIV dword ptr [ESP + 0x54]         ; 00507f78
    MOV EAX,dword ptr [ESP + 0x50]      ; 00507f7c
    INC ECX                             ; 00507f80
    FLD float ptr [EAX]                 ; 00507f81
    FSTP float ptr [EBP + EDX*0x4]      ; 00507f83
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00507f87
    ADD EBX,0x3                         ; 00507f8b
    CMP ECX,EBP                         ; 00507f8e
    JL 0x00507f25                       ; 00507f90
        ;   XREF to: 00507f25 (CONDITIONAL_JUMP)  ; LAB_00507f25
    MOV EDX,dword ptr [ESP + 0x40]      ; 00507f92
        ;   Label: LAB_00507f92
    MOV EAX,dword ptr [ESP + 0x38]      ; 00507f96
    INC EDX                             ; 00507f9a
    INC EAX                             ; 00507f9b
    MOV dword ptr [ESP + 0x40],EDX      ; 00507f9c
    MOV dword ptr [ESP + 0x38],EAX      ; 00507fa0
    CMP EDX,0x3                         ; 00507fa4
    JL 0x00507efc                       ; 00507fa7
        ;   XREF to: 00507efc (CONDITIONAL_JUMP)  ; LAB_00507efc
    MOV EBX,dword ptr [ESP + 0x18]      ; 00507fad
    MOV EBP,dword ptr [ESP + 0x4]       ; 00507fb1
    MOV EDX,dword ptr [EBX + 0x619398]  ; 00507fb5 | DAT_006193a4
    MOV EAX,dword ptr [EBX + 0x61939c]  ; 00507fbb | DAT_006193a8
    ADD EBX,0x4                         ; 00507fc1
    SUB EAX,EDX                         ; 00507fc4
    MOV dword ptr [ESP + 0x18],EBX      ; 00507fc6
    MOV dword ptr [ESP + 0x34],EAX      ; 00507fca
    CMP EBX,EBP                         ; 00507fce
    JZ 0x00507e55                       ; 00507fd0
        ;   XREF to: 00507e55 (CONDITIONAL_JUMP)  ; LAB_00507e55
    JMP 0x00507ee3                      ; 00507fd6
        ;   XREF to: 00507ee3 (UNCONDITIONAL_JUMP)  ; LAB_00507ee3
    MOV ECX,dword ptr [ESP]             ; 00507fdb
        ;   Label: LAB_00507fdb
    LEA EAX,[ECX*0x8 + 0x0]             ; 00507fde
    ADD EAX,ECX                         ; 00507fe5
    SHL EAX,0x2                         ; 00507fe7
    ADD EAX,ECX                         ; 00507fea
    SHL EAX,0x2                         ; 00507fec
    XOR EDX,EDX                         ; 00507fef
    MOV dword ptr [ESP + 0x1c],EAX      ; 00507ff1
    MOV ECX,dword ptr [EAX + 0x619398]  ; 00507ff5 | DAT_00619398
    ADD EAX,0x34                        ; 00507ffb
    MOV dword ptr [ESP + 0x30],ECX      ; 00507ffe
    MOV dword ptr [ESP + 0x8],EAX       ; 00508002
    MOV EAX,dword ptr [ESP + 0x30]      ; 00508006
        ;   Label: LAB_00508006
    LEA EDX,[EDX + EDX*0x2]             ; 0050800a
    XOR EBX,EBX                         ; 0050800d
    MOV dword ptr [ESP + 0x28],EDX      ; 0050800f
    MOV dword ptr [ESP + 0x3c],EDX      ; 00508013
    MOV dword ptr [ESP + 0x20],EAX      ; 00508017
    MOV dword ptr [ESP + 0x44],EBX      ; 0050801b
    MOV EBP,dword ptr [ESP + 0x30]      ; 0050801f
        ;   Label: LAB_0050801f
    TEST EBP,EBP                        ; 00508023
    JLE 0x005080b5                      ; 00508025
        ;   XREF to: 005080b5 (CONDITIONAL_JUMP)  ; LAB_005080b5
    MOV EAX,dword ptr [ESP + 0x44]      ; 0050802b
    IMUL EAX,EBP                        ; 0050802f
    MOV EBP,dword ptr [ESP + 0x28]      ; 00508032
    MOV EDX,dword ptr [ESP + 0x20]      ; 00508036
    ADD EAX,EBP                         ; 0050803a
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0050803c
    ADD EDX,EAX                         ; 00508040
    MOV ECX,EAX                         ; 00508042
    MOV dword ptr [ESP + 0x48],EDX      ; 00508044
    MOV EBP,0x12                        ; 00508048
        ;   Label: LAB_00508048
    MOV EDX,ECX                         ; 0050804d
    MOV EAX,ECX                         ; 0050804f
    SAR EDX,0x1f                        ; 00508051
    IDIV EBP                            ; 00508054
    IMUL EAX,EAX,0x48                   ; 00508056
    MOV EDX,ECX                         ; 00508059
    MOV dword ptr [ESP + 0x54],0x12     ; 0050805b
    SAR EDX,0x1f                        ; 00508063
    LEA EBP,[ESI + EAX*0x1]             ; 00508066
    MOV EAX,ECX                         ; 00508069
    IDIV dword ptr [ESP + 0x54]         ; 0050806b
    SHL EDX,0x2                         ; 0050806f
    ADD EBP,EDX                         ; 00508072
    MOV EAX,EBX                         ; 00508074
    MOV dword ptr [ESP + 0x50],EBP      ; 00508076
    MOV EDX,EBX                         ; 0050807a
    MOV EBP,0x12                        ; 0050807c
    SAR EDX,0x1f                        ; 00508081
    IDIV EBP                            ; 00508084
    IMUL EAX,EAX,0x48                   ; 00508086
    MOV EDX,EBX                         ; 00508089
    MOV dword ptr [ESP + 0x54],0x12     ; 0050808b
    SAR EDX,0x1f                        ; 00508093
    LEA EBP,[EDI + EAX*0x1]             ; 00508096
    MOV EAX,EBX                         ; 00508099
    IDIV dword ptr [ESP + 0x54]         ; 0050809b
    MOV EAX,dword ptr [ESP + 0x50]      ; 0050809f
    INC ECX                             ; 005080a3
    ADD EBX,0x3                         ; 005080a4
    FLD float ptr [EAX]                 ; 005080a7
    MOV EAX,dword ptr [ESP + 0x48]      ; 005080a9
    FSTP float ptr [EBP + EDX*0x4]      ; 005080ad
    CMP ECX,EAX                         ; 005080b1
    JL 0x00508048                       ; 005080b3
        ;   XREF to: 00508048 (CONDITIONAL_JUMP)  ; LAB_00508048
    MOV ECX,dword ptr [ESP + 0x44]      ; 005080b5
        ;   Label: LAB_005080b5
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005080b9
    INC ECX                             ; 005080bd
    INC EDX                             ; 005080be
    MOV dword ptr [ESP + 0x44],ECX      ; 005080bf
    MOV dword ptr [ESP + 0x3c],EDX      ; 005080c3
    CMP ECX,0x3                         ; 005080c7
    JL 0x0050801f                       ; 005080ca
        ;   XREF to: 0050801f (CONDITIONAL_JUMP)  ; LAB_0050801f
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005080d0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005080d4
    MOV EDX,dword ptr [EBP + 0x619398]  ; 005080d8 | DAT_00619398
    MOV EAX,dword ptr [EBP + 0x61939c]  ; 005080de | DAT_0061939c
    ADD EBP,0x4                         ; 005080e4
    SUB EAX,EDX                         ; 005080e7
    MOV dword ptr [ESP + 0x1c],EBP      ; 005080e9
    MOV dword ptr [ESP + 0x30],EAX      ; 005080ed
    CMP EBP,ECX                         ; 005080f1
    JZ 0x00507e55                       ; 005080f3
        ;   XREF to: 00507e55 (CONDITIONAL_JUMP)  ; LAB_00507e55
    JMP 0x00508006                      ; 005080f9
        ;   XREF to: 00508006 (UNCONDITIONAL_JUMP)  ; LAB_00508006

