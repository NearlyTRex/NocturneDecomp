; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *granule_info,int channel,int granule_index,SMpegFrame *frame)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   scalefactor_dest
; SMpegLayer3SideInfo * Stack[0xc]:4   granule_info
; int              Stack[0x10]:4   channel
; int              Stack[0x14]:4   granule_index
; SMpegFrame *     Stack[0x18]:4   frame
; Local Variables:
; int              Stack[-0x54]:4  local_54
; int *            Stack[-0x50]:4  local_50
; int              Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; uint *           Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535823
;
; Referenced Globals:
;   int[5] g_Layer3LongBandGroupCounts
;   undefined4 g_Layer3LongBandGroupCounts[1]
;   undefined4 g_Layer3LongBandGroupCounts[2]
;   int[3] g_Layer3ShortBandGroupCounts
;   undefined4 g_Layer3ShortBandGroupCounts[1]
;   undefined4 g_Layer3ShortBandGroupCounts[2]
;   int[16] g_Layer3ScalefacLengths1
;   int[16] g_Layer3ScalefacLengths2
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530d20
        ;   Label: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
    PUSH ESI                            ; 00530d21
    PUSH EDI                            ; 00530d22
    PUSH EBP                            ; 00530d23
    SUB ESP,0x58                        ; 00530d24
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00530d27
    MOV EBP,dword ptr [ESP + 0x74]      ; 00530d2b
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00530d2f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00530d33
    ADD EAX,EDX                         ; 00530d3a
    LEA EBX,[EBP + 0x8]                 ; 00530d3c
    SHL EAX,0x5                         ; 00530d3f
    MOV EDX,dword ptr [ESP + 0x78]      ; 00530d42
    ADD EBX,EAX                         ; 00530d46
    LEA EAX,[EDX*0x8 + 0x0]             ; 00530d48
    ADD EAX,EDX                         ; 00530d4f
    ADD EBX,0x10                        ; 00530d51
    SHL EAX,0x3                         ; 00530d54
    LEA ESI,[EBX + EAX*0x1]             ; 00530d57
    CMP dword ptr [ESI + 0x10],0x0      ; 00530d5a
    JZ 0x00530d6a                       ; 00530d5e
        ;   XREF to: 00530d6a (CONDITIONAL_JUMP)  ; LAB_00530d6a
    CMP dword ptr [ESI + 0x14],0x2      ; 00530d60
    JZ 0x00530e62                       ; 00530d64
        ;   XREF to: 00530e62 (CONDITIONAL_JUMP)  ; LAB_00530e62
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00530d6a
        ;   Label: LAB_00530d6a
    SHL EAX,0x3                         ; 00530d6e
    MOV EDX,EAX                         ; 00530d71
    SHL EAX,0x5                         ; 00530d73
    SUB EAX,EDX                         ; 00530d76
    MOV EDX,dword ptr [ESP + 0x70]      ; 00530d78
    ADD EDX,EAX                         ; 00530d7c
    MOV dword ptr [ESP + 0x4],EDX       ; 00530d7e
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00530d82
    LEA EAX,[EDX*0x4 + 0x0]             ; 00530d86
    ADD EAX,EDX                         ; 00530d8d
    XOR EBX,EBX                         ; 00530d8f
    SHL EAX,0x5                         ; 00530d91
    MOV dword ptr [ESP + 0x30],EBX      ; 00530d94
    ADD EAX,EBP                         ; 00530d98
    MOV dword ptr [ESP + 0x24],EBX      ; 00530d9a
    MOV dword ptr [ESP + 0x18],EAX      ; 00530d9e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00530da2
        ;   Label: LAB_00530da2
    CMP dword ptr [EAX + 0x8],0x0       ; 00530da6
    JNZ 0x005310db                      ; 00530daa
        ;   XREF to: 005310db (CONDITIONAL_JUMP)  ; LAB_005310db
    MOV EAX,dword ptr [ESP + 0x30]      ; 00530db0
        ;   Label: LAB_00530db0
    MOV EBX,dword ptr [ESP + 0x30]      ; 00530db4
    MOV EDX,dword ptr [ESP + 0x24]      ; 00530db8
    MOV ECX,dword ptr [ESP + 0x4]       ; 00530dbc
    MOV dword ptr [ESP + 0x38],EAX      ; 00530dc0
    MOV EBX,dword ptr [EBX + 0x67e628]  ; 00530dc4 | g_Layer3LongBandGroupCounts | g_Layer3LongBandGroupCounts[1]
    CMP EDX,0x2                         ; 00530dca
    SETGE byte ptr [ESP + 0x54]         ; 00530dcd
    LEA EBP,[EBX*0x4 + 0x0]             ; 00530dd2
    MOV EDX,dword ptr [EAX + 0x67e62c]  ; 00530dd9 | g_Layer3LongBandGroupCounts[1] | g_Layer3LongBandGroupCounts[2]
    ADD EBP,ECX                         ; 00530ddf
    CMP EBX,EDX                         ; 00530de1
    JGE 0x00530e19                      ; 00530de3
        ;   XREF to: 00530e19 (CONDITIONAL_JUMP)  ; LAB_00530e19
    XOR EAX,EAX                         ; 00530de5
        ;   Label: LAB_00530de5
    MOV AL,byte ptr [ESP + 0x54]        ; 00530de7
    MOV EDX,EAX                         ; 00530deb
    SHL EDX,0x6                         ; 00530ded
    MOV EAX,dword ptr [ESI + 0xc]       ; 00530df0
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x67e648] ; 00530df3 | g_Layer3ScalefacLengths1
    PUSH ECX                            ; 00530dfa
    PUSH EDI                            ; 00530dfb
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170 ; 00530dfc
        ;   XREF to: 0052f170 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00530e01
    MOV dword ptr [EBP],EAX             ; 00530e04
    MOV EAX,dword ptr [ESP + 0x38]      ; 00530e07
    INC EBX                             ; 00530e0b
    MOV EDX,dword ptr [EAX + 0x67e62c]  ; 00530e0c | g_Layer3LongBandGroupCounts[1]
    ADD EBP,0x4                         ; 00530e12
    CMP EBX,EDX                         ; 00530e15
    JL 0x00530de5                       ; 00530e17
        ;   XREF to: 00530de5 (CONDITIONAL_JUMP)  ; LAB_00530de5
    MOV EBX,dword ptr [ESP + 0x30]      ; 00530e19
        ;   Label: LAB_00530e19
    MOV EBP,dword ptr [ESP + 0x24]      ; 00530e1d
    MOV ECX,dword ptr [ESP + 0x18]      ; 00530e21
    ADD EBX,0x4                         ; 00530e25
    INC EBP                             ; 00530e28
    ADD ECX,0x4                         ; 00530e29
    MOV dword ptr [ESP + 0x30],EBX      ; 00530e2c
    MOV dword ptr [ESP + 0x24],EBP      ; 00530e30
    MOV dword ptr [ESP + 0x18],ECX      ; 00530e34
    CMP EBP,0x4                         ; 00530e38
    JL 0x00530da2                       ; 00530e3b
        ;   XREF to: 00530da2 (CONDITIONAL_JUMP)  ; LAB_00530da2
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00530e41
    SHL EAX,0x3                         ; 00530e45
    MOV EDX,EAX                         ; 00530e48
    SHL EAX,0x5                         ; 00530e4a
    SUB EAX,EDX                         ; 00530e4d
    ADD EAX,dword ptr [ESP + 0x70]      ; 00530e4f
    MOV dword ptr [EAX + 0x58],0x0      ; 00530e53
    ADD ESP,0x58                        ; 00530e5a
    POP EBP                             ; 00530e5d
    POP EDI                             ; 00530e5e
    POP ESI                             ; 00530e5f
    POP EBX                             ; 00530e60
    RET                                 ; 00530e61
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00530e62
        ;   Label: LAB_00530e62
    SHL EAX,0x3                         ; 00530e66
    MOV EDX,EAX                         ; 00530e69
    SHL EAX,0x5                         ; 00530e6b
    MOV EBP,dword ptr [ESP + 0x70]      ; 00530e6e
    SUB EAX,EDX                         ; 00530e72
    ADD EBP,EAX                         ; 00530e74
    MOV EAX,dword ptr [ESI + 0x18]      ; 00530e76
    TEST EAX,EAX                        ; 00530e79
    JZ 0x00530fd0                       ; 00530e7b
        ;   XREF to: 00530fd0 (CONDITIONAL_JUMP)  ; LAB_00530fd0
    MOV EBX,EBP                         ; 00530e81
    ADD EBP,0x20                        ; 00530e83
    MOV EAX,dword ptr [ESI + 0xc]       ; 00530e86
        ;   Label: LAB_00530e86
    MOV EDX,dword ptr [EAX*0x4 + 0x67e648] ; 00530e89 | g_Layer3ScalefacLengths1
    PUSH EDX                            ; 00530e90
    PUSH EDI                            ; 00530e91
    ADD EBX,0x4                         ; 00530e92
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170 ; 00530e95
        ;   XREF to: 0052f170 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00530e9a
    MOV dword ptr [EBX + -0x4],EAX      ; 00530e9d
    CMP EBX,EBP                         ; 00530ea0
    JNZ 0x00530e86                      ; 00530ea2
        ;   XREF to: 00530e86 (CONDITIONAL_JUMP)  ; LAB_00530e86
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00530ea4
    SHL EAX,0x3                         ; 00530ea8
    MOV EBX,0xa8                        ; 00530eab
    MOV EDX,EAX                         ; 00530eb0
    SHL EAX,0x5                         ; 00530eb2
    MOV ECX,0x3                         ; 00530eb5
    SUB EAX,EDX                         ; 00530eba
    MOV EDX,dword ptr [ESP + 0x70]      ; 00530ebc
    MOV dword ptr [ESP + 0x14],EBX      ; 00530ec0
    ADD EDX,EAX                         ; 00530ec4
    MOV dword ptr [ESP + 0x2c],ECX      ; 00530ec6
    MOV dword ptr [ESP + 0xc],EDX       ; 00530eca
    MOV dword ptr [ESP + 0x8],EDX       ; 00530ece
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00530ed2
        ;   Label: LAB_00530ed2
    MOV EBX,dword ptr [ESP + 0xc]       ; 00530ed6
    MOV EBP,dword ptr [ESP + 0x8]       ; 00530eda
    MOV ECX,dword ptr [ESP + 0x14]      ; 00530ede
    SHL EAX,0x2                         ; 00530ee2
    ADD EBP,ECX                         ; 00530ee5
    ADD EBX,EAX                         ; 00530ee7
    MOV EAX,dword ptr [ESI + 0xc]       ; 00530ee9
        ;   Label: LAB_00530ee9
    MOV EDX,dword ptr [EAX*0x4 + 0x67e648] ; 00530eec | g_Layer3ScalefacLengths1
    PUSH EDX                            ; 00530ef3
    PUSH EDI                            ; 00530ef4
    ADD EBX,0x34                        ; 00530ef5
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170 ; 00530ef8
        ;   XREF to: 0052f170 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00530efd
    MOV dword ptr [EBX + 0x28],EAX      ; 00530f00
    CMP EBX,EBP                         ; 00530f03
    JNZ 0x00530ee9                      ; 00530f05
        ;   XREF to: 00530ee9 (CONDITIONAL_JUMP)  ; LAB_00530ee9
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00530f07
    MOV ECX,dword ptr [ESP + 0x14]      ; 00530f0b
    INC EBX                             ; 00530f0f
    ADD ECX,0x4                         ; 00530f10
    MOV dword ptr [ESP + 0x2c],EBX      ; 00530f13
    MOV dword ptr [ESP + 0x14],ECX      ; 00530f17
    CMP EBX,0x6                         ; 00530f1b
    JL 0x00530ed2                       ; 00530f1e
        ;   XREF to: 00530ed2 (CONDITIONAL_JUMP)  ; LAB_00530ed2
    MOV dword ptr [ESP + 0x28],0x6      ; 00530f20
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00530f28
    SHL EAX,0x3                         ; 00530f2c
    MOV EDX,EAX                         ; 00530f2f
    SHL EAX,0x5                         ; 00530f31
    SUB EAX,EDX                         ; 00530f34
    MOV EDX,dword ptr [ESP + 0x70]      ; 00530f36
    ADD EDX,EAX                         ; 00530f3a
    MOV dword ptr [ESP + 0x10],EDX      ; 00530f3c
    MOV EDX,0xb4                        ; 00530f40
    MOV EAX,dword ptr [ESP + 0x10]      ; 00530f45
    MOV dword ptr [ESP + 0x1c],EDX      ; 00530f49
    MOV dword ptr [ESP],EAX             ; 00530f4d
    MOV EBX,dword ptr [ESP + 0x28]      ; 00530f50
        ;   Label: LAB_00530f50
    MOV ECX,dword ptr [ESP + 0x10]      ; 00530f54
    MOV EBP,dword ptr [ESP]             ; 00530f58
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00530f5b
    SHL EBX,0x2                         ; 00530f5f
    ADD EBP,EAX                         ; 00530f62
    ADD EBX,ECX                         ; 00530f64
    MOV EAX,dword ptr [ESI + 0xc]       ; 00530f66
        ;   Label: LAB_00530f66
    MOV EDX,dword ptr [EAX*0x4 + 0x67e688] ; 00530f69 | g_Layer3ScalefacLengths2
    PUSH EDX                            ; 00530f70
    PUSH EDI                            ; 00530f71
    ADD EBX,0x34                        ; 00530f72
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170 ; 00530f75
        ;   XREF to: 0052f170 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00530f7a
    MOV dword ptr [EBX + 0x28],EAX      ; 00530f7d
    CMP EBX,EBP                         ; 00530f80
    JNZ 0x00530f66                      ; 00530f82
        ;   XREF to: 00530f66 (CONDITIONAL_JUMP)  ; LAB_00530f66
    MOV EBX,dword ptr [ESP + 0x28]      ; 00530f84
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00530f88
    INC EBX                             ; 00530f8c
    ADD ECX,0x4                         ; 00530f8d
    MOV dword ptr [ESP + 0x28],EBX      ; 00530f90
    MOV dword ptr [ESP + 0x1c],ECX      ; 00530f94
    CMP EBX,0xc                         ; 00530f98
    JL 0x00530f50                       ; 00530f9b
        ;   XREF to: 00530f50 (CONDITIONAL_JUMP)  ; LAB_00530f50
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00530f9d
    SHL EAX,0x3                         ; 00530fa1
    MOV EDX,EAX                         ; 00530fa4
    SHL EAX,0x5                         ; 00530fa6
    SUB EAX,EDX                         ; 00530fa9
    MOV EDX,dword ptr [ESP + 0x70]      ; 00530fab
    ADD EDX,EAX                         ; 00530faf
    LEA EAX,[EDX + 0x30]                ; 00530fb1
    ADD EDX,0xcc                        ; 00530fb4
    ADD EAX,0x34                        ; 00530fba
        ;   Label: LAB_00530fba
    MOV dword ptr [EAX + 0x28],0x0      ; 00530fbd
    CMP EAX,EDX                         ; 00530fc4
    JNZ 0x00530fba                      ; 00530fc6
        ;   XREF to: 00530fba (CONDITIONAL_JUMP)  ; LAB_00530fba
    ADD ESP,0x58                        ; 00530fc8
    POP EBP                             ; 00530fcb
    POP EDI                             ; 00530fcc
    POP ESI                             ; 00530fcd
    POP EBX                             ; 00530fce
    RET                                 ; 00530fcf
    MOV dword ptr [ESP + 0x34],EAX      ; 00530fd0
        ;   Label: LAB_00530fd0
    MOV dword ptr [ESP + 0x20],EAX      ; 00530fd4
    MOV dword ptr [ESP + 0x40],EBP      ; 00530fd8
    MOV EAX,dword ptr [ESP + 0x34]      ; 00530fdc
        ;   Label: LAB_00530fdc
    MOV EBP,dword ptr [ESP + 0x34]      ; 00530fe0
    MOV EAX,dword ptr [EAX + 0x67e63c]  ; 00530fe4 | g_Layer3ShortBandGroupCounts | g_Layer3ShortBandGroupCounts[1]
    MOV ECX,dword ptr [EBP + 0x67e640]  ; 00530fea | g_Layer3ShortBandGroupCounts[1] | g_Layer3ShortBandGroupCounts[2]
    MOV dword ptr [ESP + 0x4c],EAX      ; 00530ff0
    MOV EAX,dword ptr [ESP + 0x20]      ; 00530ff4
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00530ff8
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00530ffc
    MOV dword ptr [ESP + 0x50],EAX      ; 00531000
    MOV EAX,dword ptr [ESP + 0x34]      ; 00531004
    SHL EBX,0x2                         ; 00531008
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053100b
    LEA EAX,[EBX + 0x9c]                ; 0053100f
    CMP EDX,ECX                         ; 00531015
    JGE 0x00531086                      ; 00531017
        ;   XREF to: 00531086 (CONDITIONAL_JUMP)  ; LAB_00531086
    ADD EAX,dword ptr [ESP + 0x40]      ; 00531019
    MOV dword ptr [ESP + 0x48],EBX      ; 0053101d
    MOV dword ptr [ESP + 0x44],EAX      ; 00531021
    MOV EBX,dword ptr [ESP + 0x48]      ; 00531025
        ;   Label: LAB_00531025
    MOV ECX,dword ptr [ESP + 0x40]      ; 00531029
    MOV EBP,dword ptr [ESP + 0x44]      ; 0053102d
    ADD EBX,ECX                         ; 00531031
    MOV EAX,dword ptr [ESI + 0xc]       ; 00531033
        ;   Label: LAB_00531033
    MOV EDX,dword ptr [ESP + 0x50]      ; 00531036
    SHL EAX,0x2                         ; 0053103a
    ADD EAX,EDX                         ; 0053103d
    MOV ECX,dword ptr [EAX + 0x67e648]  ; 0053103f | g_Layer3ScalefacLengths1
    PUSH ECX                            ; 00531045
    PUSH EDI                            ; 00531046
    ADD EBX,0x34                        ; 00531047
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170 ; 0053104a
        ;   XREF to: 0052f170 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 0053104f
    MOV dword ptr [EBX + 0x28],EAX      ; 00531052
    CMP EBX,EBP                         ; 00531055
    JNZ 0x00531033                      ; 00531057
        ;   XREF to: 00531033 (CONDITIONAL_JUMP)  ; LAB_00531033
    MOV EBX,dword ptr [ESP + 0x44]      ; 00531059
    MOV EBP,dword ptr [ESP + 0x48]      ; 0053105d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00531061
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00531065
    ADD EBX,0x4                         ; 00531069
    ADD EBP,0x4                         ; 0053106c
    INC EAX                             ; 0053106f
    MOV ECX,dword ptr [EDX + 0x67e640]  ; 00531070 | g_Layer3ShortBandGroupCounts[1]
    MOV dword ptr [ESP + 0x44],EBX      ; 00531076
    MOV dword ptr [ESP + 0x48],EBP      ; 0053107a
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053107e
    CMP EAX,ECX                         ; 00531082
    JL 0x00531025                       ; 00531084
        ;   XREF to: 00531025 (CONDITIONAL_JUMP)  ; LAB_00531025
    MOV EBP,dword ptr [ESP + 0x20]      ; 00531086
        ;   Label: LAB_00531086
    MOV EBX,dword ptr [ESP + 0x34]      ; 0053108a
    ADD EBP,0x40                        ; 0053108e
    ADD EBX,0x4                         ; 00531091
    MOV dword ptr [ESP + 0x20],EBP      ; 00531094
    MOV dword ptr [ESP + 0x34],EBX      ; 00531098
    CMP EBP,0x80                        ; 0053109c
    JNZ 0x00530fdc                      ; 005310a2
        ;   XREF to: 00530fdc (CONDITIONAL_JUMP)  ; LAB_00530fdc
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005310a8
    SHL EAX,0x3                         ; 005310ac
    MOV EDX,EAX                         ; 005310af
    SHL EAX,0x5                         ; 005310b1
    MOV EBP,dword ptr [ESP + 0x70]      ; 005310b4
    SUB EAX,EDX                         ; 005310b8
    ADD EBP,EAX                         ; 005310ba
    LEA EBX,[EBP + 0x30]                ; 005310bc
    ADD EBP,0xcc                        ; 005310bf
    ADD EBX,0x34                        ; 005310c5
        ;   Label: LAB_005310c5
    MOV dword ptr [EBX + 0x28],0x0      ; 005310c8
    CMP EBX,EBP                         ; 005310cf
    JNZ 0x005310c5                      ; 005310d1
        ;   XREF to: 005310c5 (CONDITIONAL_JUMP)  ; LAB_005310c5
    ADD ESP,0x58                        ; 005310d3
    POP EBP                             ; 005310d6
    POP EDI                             ; 005310d7
    POP ESI                             ; 005310d8
    POP EBX                             ; 005310d9
    RET                                 ; 005310da
    CMP dword ptr [ESP + 0x78],0x0      ; 005310db
        ;   Label: LAB_005310db
    JZ 0x00530db0                       ; 005310e0
        ;   XREF to: 00530db0 (CONDITIONAL_JUMP)  ; LAB_00530db0
    JMP 0x00530e19                      ; 005310e6
        ;   XREF to: 00530e19 (UNCONDITIONAL_JUMP)  ; LAB_00530e19

