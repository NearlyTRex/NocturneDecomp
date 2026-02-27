; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60d0]:4  local_60d0
; undefined4       Stack[-0x60cc]:4  local_60cc
; undefined1       Stack[-0x60c8]:1  local_60c8
; undefined1       Stack[-0x4ec8]:1  local_4ec8
; undefined1       Stack[-0x3cc8]:1  local_3cc8
; undefined1       Stack[-0x33c8]:1  local_33c8
; undefined1       Stack[-0x2ac8]:1  local_2ac8
; undefined1       Stack[-0x21c8]:1  local_21c8
; undefined1       Stack[-0x18c8]:1  local_18c8
; undefined1       Stack[-0xfc8]:1  local_fc8
; undefined1       Stack[-0xcc8]:1  local_cc8
; undefined1       Stack[-0x9c8]:1  local_9c8
; undefined1       Stack[-0x6c8]:1  local_6c8
; char             Stack[-0x4d8]:1  local_4d8
; undefined1       Stack[-0x4d0]:1  local_4d0
; undefined1       Stack[-0x4c0]:1  local_4c0
; undefined1       Stack[-0x390]:1  local_390
; undefined1       Stack[-0x290]:1  local_290
; undefined1       Stack[-0x190]:1  local_190
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined8       Stack[-0xc4]:8  local_c4
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
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
; XREF[3]:
;   sound_mp3.cpp_CMP3Decoder_getTotalSamples_FUN_00534d10 at 00534d26
;   sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60 at 00534b44
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0 at 00534cb0
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063ac5a
;   TerminatedCString s_MPEG_Layer_2_pick_table__0063ac6b
;   TerminatedCString s_sound_mp3_cpp_0063aca4
;   TerminatedCString s_js_bound_bad_layer_modex_0063acb5
;   TerminatedCString s_sound_mp3_cpp_0063b2b2
;   TerminatedCString s_Not_enough_main_data_to__0063b2c3
;   void*[4][4] g_MpegLayer2AllocationTables
;   double[2][4] g_MpegSampleRateTable
;   int[2][3][15] g_MpegBitrateTable
;   double[64] g_MpegScalefactorTable
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[256] g_CurrentMp3Filename
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   sound_mp3.cpp_antiAliasingButterfly_FUN_005334b0
;   sound_mp3.cpp_applyScalefactorsToSubbands_FUN_005302f0
;   sound_mp3.cpp_calculateMainDataSize_FUN_00533c50
;   sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
;   sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670
;   sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
;   sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_0052f850
;   sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
;   sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
;   ... and 14 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534d40
        ;   Label: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
    PUSH ESI                            ; 00534d41
    PUSH EDI                            ; 00534d42
    PUSH EBP                            ; 00534d43
    MOV EBP,ESP                         ; 00534d44
    SUB ESP,0x60c0                      ; 00534d46
    AND ESP,0xfffffff8                  ; 00534d4c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00534d4f
    LEA EAX,[ESP + 0x5fc0]              ; 00534d52
    XOR EDX,EDX                         ; 00534d59
    MOV ESI,0xffffffff                  ; 00534d5b
    MOV dword ptr [ESP + 0x6020],EDX    ; 00534d60
    MOV dword ptr [ESP + 0x5ff0],EAX    ; 00534d67
    MOV dword ptr [ESP + 0x5ffc],ESI    ; 00534d6e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00534d75
    MOV dword ptr [ESP + 0x5ff8],EDX    ; 00534d78
    MOV dword ptr [ESP + 0x601c],EDX    ; 00534d7f
    MOV EDX,dword ptr [EAX + 0x533c]    ; 00534d86
    ADD EAX,0x5320                      ; 00534d8c
    TEST EDX,EDX                        ; 00534d91
    JNZ 0x00534df5                      ; 00534d93
        ;   XREF to: 00534df5 (CONDITIONAL_JUMP)  ; LAB_00534df5
    MOV EDX,0xfff                       ; 00534d95
    MOV ESI,0xc                         ; 00534d9a
    MOV ECX,0x1fff                      ; 00534d9f
    MOV EDI,EAX                         ; 00534da4
    MOV dword ptr [ESP + 0x6028],EDX    ; 00534da6
    MOV EDX,dword ptr [EAX + 0xc]       ; 00534dad
    MOV dword ptr [ESP + 0x602c],ECX    ; 00534db0
    AND EDX,0x7                         ; 00534db7
    JNZ 0x00534e00                      ; 00534dba
        ;   XREF to: 00534e00 (CONDITIONAL_JUMP)  ; LAB_00534e00
    PUSH ESI                            ; 00534dbc
        ;   Label: LAB_00534dbc
    PUSH EDI                            ; 00534dbd
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00534dbe
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00534dc3
    MOV ESI,EAX                         ; 00534dc6
    MOV EAX,dword ptr [ESP + 0x602c]    ; 00534dc8
        ;   Label: LAB_00534dc8
    MOV EDX,dword ptr [ESP + 0x6028]    ; 00534dcf
    AND EAX,ESI                         ; 00534dd6
    CMP EAX,EDX                         ; 00534dd8
    JZ 0x00534e13                       ; 00534dda
        ;   XREF to: 00534e13 (CONDITIONAL_JUMP)  ; LAB_00534e13
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00534ddc
    TEST EAX,EAX                        ; 00534ddf
    JNZ 0x00534e13                      ; 00534de1
        ;   XREF to: 00534e13 (CONDITIONAL_JUMP)  ; LAB_00534e13
    PUSH 0x8                            ; 00534de3
    PUSH EDI                            ; 00534de5
    SHL ESI,0x8                         ; 00534de6
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00534de9
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00534dee
    OR ESI,EAX                          ; 00534df1
    JMP 0x00534dc8                      ; 00534df3
        ;   XREF to: 00534dc8 (UNCONDITIONAL_JUMP)  ; LAB_00534dc8
    XOR ESI,ESI                         ; 00534df5
        ;   Label: LAB_00534df5
    MOV EAX,ESI                         ; 00534df7
    MOV ESP,EBP                         ; 00534df9
    POP EBP                             ; 00534dfb
    POP EDI                             ; 00534dfc
    POP ESI                             ; 00534dfd
    POP EBX                             ; 00534dfe
    RET                                 ; 00534dff
    MOV ECX,0x8                         ; 00534e00
        ;   Label: LAB_00534e00
    SUB ECX,EDX                         ; 00534e05
    PUSH ECX                            ; 00534e07
    PUSH EAX                            ; 00534e08
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00534e09
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00534e0e
    JMP 0x00534dbc                      ; 00534e11
        ;   XREF to: 00534dbc (UNCONDITIONAL_JUMP)  ; LAB_00534dbc
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00534e13
        ;   Label: LAB_00534e13
    TEST EAX,EAX                        ; 00534e16
    JNZ 0x00534df5                      ; 00534e18
        ;   XREF to: 00534df5 (CONDITIONAL_JUMP)  ; LAB_00534df5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00534e1a
    MOV ECX,dword ptr [ESP + 0x6020]    ; 00534e1d
    MOV EDX,dword ptr [EAX + 0x532c]    ; 00534e24
    SUB EDX,ECX                         ; 00534e2a
    LEA ESI,[ECX + EDX*0x1]             ; 00534e2c
    LEA EDX,[ESP + 0x5ff0]              ; 00534e2f
    PUSH EDX                            ; 00534e36
    ADD EAX,0x5320                      ; 00534e37
    PUSH EAX                            ; 00534e3c
    MOV dword ptr [ESP + 0x6028],ESI    ; 00534e3d
    CALL sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0 ; 00534e44
        ;   XREF to: 0052f5b0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0(CFileBitStream * this_ptr, SMpegFrameHeader * header_out)
    ADD ESP,0x8                         ; 00534e49
    MOV EDI,dword ptr [ESP + 0x5ff0]    ; 00534e4c
    LEA ESI,[ESP + 0x5ff0]              ; 00534e53
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00534e5a
    XOR ECX,ECX                         ; 00534e5d
    MOV dword ptr [ESP + 0x5ff4],EAX    ; 00534e5f
    CMP EAX,0x3                         ; 00534e66
    SETNZ AL                            ; 00534e69
    MOV CL,AL                           ; 00534e6c
    INC ECX                             ; 00534e6e
    MOV dword ptr [ESP + 0x6000],ECX    ; 00534e6f
    MOV EDX,dword ptr [EDI + 0x4]       ; 00534e76
    CMP EDX,0x2                         ; 00534e79
    JNZ 0x00535370                      ; 00534e7c
        ;   XREF to: 00535370 (CONDITIONAL_JUMP)  ; LAB_00535370
    MOV EAX,dword ptr [ESP + 0x6008]    ; 00534e82
    MOV dword ptr [ESP + 0x6034],EAX    ; 00534e89
    MOV EAX,dword ptr [EDI]             ; 00534e90
    MOV dword ptr [ESP + 0x6044],EAX    ; 00534e92
    LEA EAX,[EDX + -0x1]                ; 00534e99
    MOV dword ptr [ESP + 0x6038],EAX    ; 00534e9c
    MOV EAX,dword ptr [EDI + 0xc]       ; 00534ea3
    MOV EDX,dword ptr [ESP + 0x6044]    ; 00534ea6
    MOV dword ptr [ESP + 0x603c],EAX    ; 00534ead
    LEA EAX,[EDX*0x4 + 0x0]             ; 00534eb4
    SUB EAX,EDX                         ; 00534ebb
    SHL EAX,0x2                         ; 00534ebd
    MOV EDX,EAX                         ; 00534ec0
    SHL EAX,0x4                         ; 00534ec2
    SUB EAX,EDX                         ; 00534ec5
    MOV dword ptr [ESP + 0x60bc],EAX    ; 00534ec7
    MOV EAX,dword ptr [ESP + 0x6038]    ; 00534ece
    SHL EAX,0x2                         ; 00534ed5
    MOV EDX,EAX                         ; 00534ed8
    SHL EAX,0x4                         ; 00534eda
    SUB EAX,EDX                         ; 00534edd
    MOV EDX,dword ptr [ESP + 0x60bc]    ; 00534edf
    ADD EDX,EAX                         ; 00534ee6
    MOV dword ptr [ESP + 0x60bc],EDX    ; 00534ee8
    MOV EDX,dword ptr [ESP + 0x603c]    ; 00534eef
    MOV EAX,dword ptr [ESP + 0x60bc]    ; 00534ef6
    SHL EDX,0x2                         ; 00534efd
    ADD EDX,EAX                         ; 00534f00
    MOV EAX,dword ptr [EDX + 0x67e258]  ; 00534f02 | g_MpegBitrateTable
    MOV EDX,EAX                         ; 00534f08
    SAR EDX,0x1f                        ; 00534f0a
    IDIV ECX                            ; 00534f0d
    MOV ECX,dword ptr [ESP + 0x6044]    ; 00534f0f
    MOV EDX,dword ptr [EDI + 0x10]      ; 00534f16
    SHL ECX,0x5                         ; 00534f19
    SHL EDX,0x3                         ; 00534f1c
    ADD EDX,ECX                         ; 00534f1f
    MOV dword ptr [ESP + 0x6030],ESI    ; 00534f21
    FLD double ptr [EDX + 0x67e218]     ; 00534f28 | g_MpegSampleRateTable
    CALL crt_math.c_round_FUN_005fe6b0  ; 00534f2e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EDX,dword ptr [ESP + 0x6044]    ; 00534f33
    FISTP dword ptr [ESP + 0x6040]      ; 00534f3a
    CMP EDX,0x1                         ; 00534f41
    JNZ 0x00535366                      ; 00534f44
        ;   XREF to: 00535366 (CONDITIONAL_JUMP)  ; LAB_00535366
    CMP dword ptr [ESP + 0x6040],0x30   ; 00534f4a
    JNZ 0x0053531c                      ; 00534f52
        ;   XREF to: 0053531c (CONDITIONAL_JUMP)  ; LAB_0053531c
    CMP EAX,0x38                        ; 00534f58
    JL 0x0053531c                       ; 00534f5b
        ;   XREF to: 0053531c (CONDITIONAL_JUMP)  ; LAB_0053531c
    XOR EAX,EAX                         ; 00534f61
        ;   Label: LAB_00534f61
    MOV EDX,dword ptr [ESP + 0x6030]    ; 00534f63
        ;   Label: LAB_00534f63
    CMP EAX,dword ptr [EDX + 0xc]       ; 00534f6a
    JZ 0x00534f96                       ; 00534f6d
        ;   XREF to: 00534f96 (CONDITIONAL_JUMP)  ; LAB_00534f96
    PUSH 0x2f68188                      ; 00534f6f | g_CurrentMp3Filename
    MOV EAX,0x63ac5a                    ; 00534f74 | = "..\\sound\\mp3.cpp"
    MOV EDX,0x1a2                       ; 00534f79
    PUSH 0x63ac6b                       ; 00534f7e | = "MPEG Layer 2 - pick_table - can't loa..."
    MOV [0x02f0ca48],EAX                ; 00534f83 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00534f88 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00534f8e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00534f93
    MOV EAX,dword ptr [ESP + 0x6034]    ; 00534f96
        ;   Label: LAB_00534f96
    MOV dword ptr [ESI + 0x18],EAX      ; 00534f9d
    MOV ECX,dword ptr [EDI + 0x1c]      ; 00534fa0
        ;   Label: LAB_00534fa0
    CMP ECX,0x1                         ; 00534fa3
    JNZ 0x0053539f                      ; 00534fa6
        ;   XREF to: 0053539f (CONDITIONAL_JUMP)  ; LAB_0053539f
    MOV EAX,dword ptr [EDI + 0x4]       ; 00534fac
    MOV dword ptr [ESP + 0x6048],EAX    ; 00534faf
    MOV EDI,dword ptr [EDI + 0x20]      ; 00534fb6
    CMP EAX,ECX                         ; 00534fb9
    JGE 0x00535380                      ; 00534fbb
        ;   XREF to: 00535380 (CONDITIONAL_JUMP)  ; LAB_00535380
    PUSH 0x2f68188                      ; 00534fc1 | g_CurrentMp3Filename
        ;   Label: LAB_00534fc1
    PUSH EDI                            ; 00534fc6
    MOV EDX,dword ptr [ESP + 0x6050]    ; 00534fc7
    PUSH EDX                            ; 00534fce
    MOV ECX,0x63aca4                    ; 00534fcf | = "..\\sound\\mp3.cpp"
    MOV EAX,0x1b2                       ; 00534fd4
    PUSH 0x63acb5                       ; 00534fd9 | = "js_bound bad layer/modext (%d/%d)  Fi..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00534fde | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00534fe4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00534fe9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 00534fee
    MOV EAX,dword ptr [ESP + 0x6048]    ; 00534ff1
        ;   Label: LAB_00534ff1
    SHL EAX,0x4                         ; 00534ff8
    MOV EAX,dword ptr [EAX + EDI*0x4 + 0x67d820] ; 00534ffb | g_MpegLayer2AllocationTables
    MOV dword ptr [ESI + 0x14],EAX      ; 00535002
        ;   Label: LAB_00535002
    MOV EAX,dword ptr [ESP + 0x6000]    ; 00535005
    MOV dword ptr [ESP + 0x6018],EAX    ; 0053500c
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 00535013
    CMP dword ptr [EAX],0x0             ; 0053501a
    SETNZ AL                            ; 0053501d
    MOV ESI,dword ptr [EBP + 0x14]      ; 00535020
    AND EAX,0xff                        ; 00535023
    MOV EDI,dword ptr [ESP + 0x5fc4]    ; 00535028
    INC EAX                             ; 0053502f
    ADD ESI,0x5320                      ; 00535030
    MOV dword ptr [ESP + 0x6024],EAX    ; 00535036
    CMP EDI,0x2                         ; 0053503d
    JNC 0x00535c0a                      ; 00535040
        ;   XREF to: 00535c0a (CONDITIONAL_JUMP)  ; LAB_00535c0a
    CMP EDI,0x1                         ; 00535046
    JNZ 0x005351e2                      ; 00535049
        ;   XREF to: 005351e2 (CONDITIONAL_JUMP)  ; LAB_005351e2
    LEA EAX,[ESP + 0x5ff0]              ; 0053504f
    PUSH EAX                            ; 00535056
    LEA EAX,[ESP + 0x5e44]              ; 00535057
    PUSH EAX                            ; 0053505e
    MOV EBX,0x20                        ; 0053505f
    MOV EDI,0x180                       ; 00535064
    PUSH ESI                            ; 00535069
    MOV dword ptr [ESP + 0xc],EBX       ; 0053506a
    MOV dword ptr [ESP + 0x10],EDI      ; 0053506e
    CALL sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0 ; 00535072
        ;   XREF to: 0052f7a0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0(CFileBitStream * this_ptr, uint * output_array, SBitAllocationTable * alloc_table)
    ADD ESP,0xc                         ; 00535077
    LEA EAX,[ESP + 0x5ff0]              ; 0053507a
    PUSH EAX                            ; 00535081
    LEA EAX,[ESP + 0x510c]              ; 00535082
    PUSH EAX                            ; 00535089
    LEA EAX,[ESP + 0x5e48]              ; 0053508a
    PUSH EAX                            ; 00535091
    PUSH ESI                            ; 00535092
    CALL sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_0052f850 ; 00535093
        ;   XREF to: 0052f850 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_0052f850(CFileBitStream * this_ptr, SMpegSubbandAllocation * allocation_indices, SMpegSubbandScalefactors * scalefactors, SBitAllocationTable * alloc_info)
    ADD ESP,0x10                        ; 00535098
    XOR EAX,EAX                         ; 0053509b
    MOV dword ptr [ESP + 0x60b0],EAX    ; 0053509d
    MOV dword ptr [ESP + 0x604c],ESI    ; 005350a4
    LEA EAX,[ESP + 0x5ff0]              ; 005350ab
        ;   Label: LAB_005350ab
    PUSH EAX                            ; 005350b2
    LEA EAX,[ESP + 0x5e44]              ; 005350b3
    PUSH EAX                            ; 005350ba
    LEA EAX,[ESP + 0x5410]              ; 005350bb
    PUSH EAX                            ; 005350c2
    MOV EBX,dword ptr [ESP + 0x6058]    ; 005350c3
    PUSH EBX                            ; 005350ca
    CALL sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50 ; 005350cb
        ;   XREF to: 0052fb50 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50(CFileBitStream * this_ptr, SMpegSubbandScalefactors * quantized_samples, SMpegSubbandAllocation * allocation, SBitAllocationTable * alloc_table)
    ADD ESP,0x10                        ; 005350d0
    LEA EAX,[ESP + 0x5ff0]              ; 005350d3
    PUSH EAX                            ; 005350da
    LEA EAX,[ESP + 0x5e44]              ; 005350db
    PUSH EAX                            ; 005350e2
    LEA EAX,[ESP + 0x5710]              ; 005350e3
    PUSH EAX                            ; 005350ea
    LEA EAX,[ESP + 0x5414]              ; 005350eb
    PUSH EAX                            ; 005350f2
    XOR EDI,EDI                         ; 005350f3
    CALL sound_mp3.cpp_requantizeSamples_FUN_005301b0 ; 005350f5
        ;   XREF to: 005301b0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_requantizeSamples_FUN_005301b0(SMpegSubbandScalefactors * quantized_samples, SMpegSubbandScalefactors * dequantized_samples, SMpegSubbandAllocation * allocation, SMpegFrameHeader * header)
    ADD ESP,0x10                        ; 005350fa
    LEA EAX,[ESP + 0x5708]              ; 005350fd
    MOV ESI,dword ptr [ESP + 0x6000]    ; 00535104
    MOV dword ptr [ESP + 0x6050],EAX    ; 0053510b
    LEA EAX,[ESP + 0x5108]              ; 00535112
    MOV dword ptr [ESP + 0x6074],EDI    ; 00535119
    MOV dword ptr [ESP + 0x6054],EAX    ; 00535120
    MOV ECX,EDI                         ; 00535127
        ;   Label: LAB_00535127
    TEST ESI,ESI                        ; 00535129
    JLE 0x00535170                      ; 0053512b
        ;   XREF to: 00535170 (CONDITIONAL_JUMP)  ; LAB_00535170
    MOV EDX,dword ptr [ESP + 0x6074]    ; 0053512d
    MOV EBX,dword ptr [ESP + 0x6054]    ; 00535134
    MOV EAX,dword ptr [ESP + 0x6074]    ; 0053513b
    ADD EDX,EBX                         ; 00535142
    ADD EAX,dword ptr [ESP + 0x6050]    ; 00535144
    FLD float ptr [EAX]                 ; 0053514b
        ;   Label: LAB_0053514b
    MOV EBX,dword ptr [EDX]             ; 0053514d
    FLD ST0                             ; 0053514f
    FMUL double ptr [EBX*0x8 + 0x67e3c0] ; 00535151 | g_MpegScalefactorTable
    ADD EDX,0x180                       ; 00535158
    ADD EAX,0x180                       ; 0053515e
    INC ECX                             ; 00535163
    FSTP ST1                            ; 00535164
    FSTP float ptr [EAX + 0xfffffe80]   ; 00535166
    CMP ECX,ESI                         ; 0053516c
    JL 0x0053514b                       ; 0053516e
        ;   XREF to: 0053514b (CONDITIONAL_JUMP)  ; LAB_0053514b
    MOV EAX,dword ptr [ESP + 0x6074]    ; 00535170
        ;   Label: LAB_00535170
    ADD EAX,0x4                         ; 00535177
    MOV dword ptr [ESP + 0x6074],EAX    ; 0053517a
    CMP EAX,0x80                        ; 00535181
    JNZ 0x00535127                      ; 00535186
        ;   XREF to: 00535127 (CONDITIONAL_JUMP)  ; LAB_00535127
    MOV ECX,dword ptr [ESP + 0x6018]    ; 00535188
    XOR EBX,EBX                         ; 0053518f
    TEST ECX,ECX                        ; 00535191
    JLE 0x005351ca                      ; 00535193
        ;   XREF to: 005351ca (CONDITIONAL_JUMP)  ; LAB_005351ca
    LEA EDI,[ESP + 0x2d08]              ; 00535195
    LEA ESI,[ESP + 0x5708]              ; 0053519c
    PUSH EDI                            ; 005351a3
        ;   Label: LAB_005351a3
    PUSH EBX                            ; 005351a4
    PUSH ESI                            ; 005351a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005351a6
    PUSH EAX                            ; 005351a9
    ADD EDI,0x480                       ; 005351aa
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0 ; 005351b0
        ;   XREF to: 005304f0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)
    ADD ESP,0x10                        ; 005351b5
    INC EBX                             ; 005351b8
    MOV EDX,dword ptr [ESP + 0x6018]    ; 005351b9
    ADD ESI,0x180                       ; 005351c0
    CMP EBX,EDX                         ; 005351c6
    JL 0x005351a3                       ; 005351c8
        ;   XREF to: 005351a3 (CONDITIONAL_JUMP)  ; LAB_005351a3
    MOV ECX,dword ptr [ESP + 0x60b0]    ; 005351ca
        ;   Label: LAB_005351ca
    INC ECX                             ; 005351d1
    MOV dword ptr [ESP + 0x60b0],ECX    ; 005351d2
    CMP ECX,0xc                         ; 005351d9
    JL 0x005350ab                       ; 005351dc
        ;   XREF to: 005350ab (CONDITIONAL_JUMP)  ; LAB_005350ab
    CMP dword ptr [ESP + 0x5fcc],0x0    ; 005351e2
        ;   Label: LAB_005351e2
    JLE 0x00535300                      ; 005351ea
        ;   XREF to: 00535300 (CONDITIONAL_JUMP)  ; LAB_00535300
    MOV EAX,dword ptr [ESP + 0x5fc4]    ; 005351f0
    DEC EAX                             ; 005351f7
    SHL EAX,0x2                         ; 005351f8
    MOV ECX,EAX                         ; 005351fb
    SHL ECX,0x4                         ; 005351fd
    MOV EDX,dword ptr [ESP + 0x5fc0]    ; 00535200
    SUB ECX,EAX                         ; 00535207
    LEA EAX,[EDX*0x4 + 0x0]             ; 00535209
    SUB EAX,EDX                         ; 00535210
    SHL EAX,0x2                         ; 00535212
    MOV EDX,EAX                         ; 00535215
    SHL EAX,0x4                         ; 00535217
    SUB EAX,EDX                         ; 0053521a
    ADD ECX,EAX                         ; 0053521c
    MOV EAX,dword ptr [ESP + 0x5fcc]    ; 0053521e
    MOV EDX,dword ptr [ESP + 0x5fc0]    ; 00535225
    FILD dword ptr [ECX + EAX*0x4 + 0x67e258] ; 0053522c | g_MpegBitrateTable
    MOV EAX,dword ptr [ESP + 0x5fd0]    ; 00535233
    SHL EDX,0x5                         ; 0053523a
    SHL EAX,0x3                         ; 0053523d
    XOR ECX,ECX                         ; 00535240
    ADD EAX,EDX                         ; 00535242
    MOV EDX,dword ptr [ESP + 0x4]       ; 00535244
    MOV dword ptr [ESP + 0x6010],ECX    ; 00535248
    MOV dword ptr [ESP + 0x600c],EDX    ; 0053524f
    FILD qword ptr [ESP + 0x600c]       ; 00535256
    FDIV double ptr [EAX + 0x67e218]    ; 0053525d | g_MpegSampleRateTable
    FMULP                               ; 00535263
    MOV EAX,dword ptr [ESP]             ; 00535265
    MOV dword ptr [ESP + 0x6010],ECX    ; 00535268
    MOV dword ptr [ESP + 0x600c],EAX    ; 0053526f
    FILD qword ptr [ESP + 0x600c]       ; 00535276
    FDIVP                               ; 0053527d
    MOV ESI,dword ptr [ESP + 0x5fd4]    ; 0053527f
    CALL crt_math.c_round_FUN_005fe6b0  ; 00535286
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x6070]      ; 0053528b
    TEST ESI,ESI                        ; 00535292
    JZ 0x0053529d                       ; 00535294
        ;   XREF to: 0053529d (CONDITIONAL_JUMP)  ; LAB_0053529d
    INC dword ptr [ESP + 0x6070]        ; 00535296
    MOV EAX,dword ptr [ESP + 0x6070]    ; 0053529d
        ;   Label: LAB_0053529d
    IMUL EAX,dword ptr [ESP]            ; 005352a4
    MOV ESI,dword ptr [EBP + 0x14]      ; 005352a8
    MOV ECX,dword ptr [ESP + 0x6020]    ; 005352ab
    MOV dword ptr [ESP + 0x6070],EAX    ; 005352b2
    MOV EAX,dword ptr [ESI + 0x532c]    ; 005352b9
    SUB EAX,ECX                         ; 005352bf
    MOV EBX,dword ptr [ESP + 0x6070]    ; 005352c1
    ADD EAX,0xc                         ; 005352c8
    SUB EBX,EAX                         ; 005352cb
    MOV dword ptr [ESP + 0x6070],EBX    ; 005352cd
    ADD ESI,0x5320                      ; 005352d4
    MOV EDI,dword ptr [ESP + 0x6070]    ; 005352da
    XOR EBX,EBX                         ; 005352e1
    TEST EDI,EDI                        ; 005352e3
    JLE 0x00535300                      ; 005352e5
        ;   XREF to: 00535300 (CONDITIONAL_JUMP)  ; LAB_00535300
    PUSH ESI                            ; 005352e7
        ;   Label: LAB_005352e7
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 005352e8
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 005352ed
    INC EBX                             ; 005352f0
    CMP EBX,dword ptr [ESP + 0x6070]    ; 005352f1
    JL 0x005352e7                       ; 005352f8
        ;   XREF to: 005352e7 (CONDITIONAL_JUMP)  ; LAB_005352e7
    LEA EAX,[EAX]                       ; 005352fa
    MOV EDX,dword ptr [ESP + 0x6024]    ; 00535300
        ;   Label: LAB_00535300
    LEA ESI,[EDX*0x8 + 0x0]             ; 00535307
    ADD ESI,EDX                         ; 0053530e
    SHL ESI,0x6                         ; 00535310
    MOV EAX,ESI                         ; 00535313
    MOV ESP,EBP                         ; 00535315
    POP EBP                             ; 00535317
    POP EDI                             ; 00535318
    POP ESI                             ; 00535319
    POP EBX                             ; 0053531a
    RET                                 ; 0053531b
    CMP EAX,0x38                        ; 0053531c
        ;   Label: LAB_0053531c
    JL 0x0053532a                       ; 0053531f
        ;   XREF to: 0053532a (CONDITIONAL_JUMP)  ; LAB_0053532a
    CMP EAX,0x50                        ; 00535321
    JLE 0x00534f61                      ; 00535324
        ;   XREF to: 00534f61 (CONDITIONAL_JUMP)  ; LAB_00534f61
    CMP dword ptr [ESP + 0x6040],0x30   ; 0053532a
        ;   Label: LAB_0053532a
    JZ 0x00535343                       ; 00535332
        ;   XREF to: 00535343 (CONDITIONAL_JUMP)  ; LAB_00535343
    CMP EAX,0x60                        ; 00535334
    JL 0x00535343                       ; 00535337
        ;   XREF to: 00535343 (CONDITIONAL_JUMP)  ; LAB_00535343
    MOV EAX,0x1                         ; 00535339
    JMP 0x00534f63                      ; 0053533e
        ;   XREF to: 00534f63 (UNCONDITIONAL_JUMP)  ; LAB_00534f63
    CMP dword ptr [ESP + 0x6040],0x20   ; 00535343
        ;   Label: LAB_00535343
    JZ 0x0053535c                       ; 0053534b
        ;   XREF to: 0053535c (CONDITIONAL_JUMP)  ; LAB_0053535c
    CMP EAX,0x30                        ; 0053534d
    JG 0x0053535c                       ; 00535350
        ;   XREF to: 0053535c (CONDITIONAL_JUMP)  ; LAB_0053535c
    MOV EAX,0x2                         ; 00535352
    JMP 0x00534f63                      ; 00535357
        ;   XREF to: 00534f63 (UNCONDITIONAL_JUMP)  ; LAB_00534f63
    MOV EAX,0x3                         ; 0053535c
        ;   Label: LAB_0053535c
    JMP 0x00534f63                      ; 00535361
        ;   XREF to: 00534f63 (UNCONDITIONAL_JUMP)  ; LAB_00534f63
    MOV EAX,0x4                         ; 00535366
        ;   Label: LAB_00535366
    JMP 0x00534f63                      ; 0053536b
        ;   XREF to: 00534f63 (UNCONDITIONAL_JUMP)  ; LAB_00534f63
    MOV dword ptr [ESP + 0x6008],0x20   ; 00535370
        ;   Label: LAB_00535370
    JMP 0x00534fa0                      ; 0053537b
        ;   XREF to: 00534fa0 (UNCONDITIONAL_JUMP)  ; LAB_00534fa0
    CMP EAX,0x3                         ; 00535380
        ;   Label: LAB_00535380
    JG 0x00534fc1                       ; 00535383
        ;   XREF to: 00534fc1 (CONDITIONAL_JUMP)  ; LAB_00534fc1
    TEST EDI,EDI                        ; 00535389
    JL 0x00534fc1                       ; 0053538b
        ;   XREF to: 00534fc1 (CONDITIONAL_JUMP)  ; LAB_00534fc1
    CMP EDI,0x3                         ; 00535391
    JG 0x00534fc1                       ; 00535394
        ;   XREF to: 00534fc1 (CONDITIONAL_JUMP)  ; LAB_00534fc1
    JMP 0x00534ff1                      ; 0053539a
        ;   XREF to: 00534ff1 (UNCONDITIONAL_JUMP)  ; LAB_00534ff1
    MOV EAX,dword ptr [ESI + 0x18]      ; 0053539f
        ;   Label: LAB_0053539f
    JMP 0x00535002                      ; 005353a2
        ;   XREF to: 00535002 (UNCONDITIONAL_JUMP)  ; LAB_00535002
    MOV dword ptr [ESP + 0x4],0x480     ; 005353a7
        ;   Label: LAB_005353a7
    LEA EAX,[ESP + 0x5ff0]              ; 005353af
    PUSH EAX                            ; 005353b6
    LEA EAX,[ESP + 0x5e44]              ; 005353b7
    PUSH EAX                            ; 005353be
    MOV EDI,0x8                         ; 005353bf
    PUSH ESI                            ; 005353c4
    MOV dword ptr [ESP + 0xc],EDI       ; 005353c5
    CALL sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670 ; 005353c9
        ;   XREF to: 0052f670 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670(CFileBitStream * this_ptr, SMpegSubbandAllocation * output_allocation, SBitAllocationTable * alloc_table_info)
    ADD ESP,0xc                         ; 005353ce
    LEA EAX,[ESP + 0x5ff0]              ; 005353d1
    PUSH EAX                            ; 005353d8
    LEA EAX,[ESP + 0x510c]              ; 005353d9
    PUSH EAX                            ; 005353e0
    LEA EAX,[ESP + 0x5e48]              ; 005353e1
    PUSH EAX                            ; 005353e8
    LEA EAX,[ESP + 0x5d4c]              ; 005353e9
    PUSH EAX                            ; 005353f0
    PUSH ESI                            ; 005353f1
    CALL sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0 ; 005353f2
        ;   XREF to: 0052f8e0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0(CFileBitStream * this_ptr, SMpegSubbandSCFSI * scfsi_array, SMpegSubbandAllocation * allocation_array, SMpegSubbandScalefactors * scalefactor_array, ...)
    ADD ESP,0x14                        ; 005353f7
    XOR EDX,EDX                         ; 005353fa
    MOV dword ptr [ESP + 0x6014],EDX    ; 005353fc
    MOV dword ptr [ESP + 0x6058],ESI    ; 00535403
    LEA EAX,[ESP + 0x5ff0]              ; 0053540a
        ;   Label: LAB_0053540a
    PUSH EAX                            ; 00535411
    LEA EAX,[ESP + 0x5e44]              ; 00535412
    PUSH EAX                            ; 00535419
    LEA EAX,[ESP + 0x5410]              ; 0053541a
    PUSH EAX                            ; 00535421
    MOV EDI,dword ptr [ESP + 0x6064]    ; 00535422
    PUSH EDI                            ; 00535429
    CALL sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50 ; 0053542a
        ;   XREF to: 0052fc50 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50(CFileBitStream * this_ptr, SMpegSubbandScalefactors * sample_array, SMpegSubbandAllocation * allocation_array, SBitAllocationTable * allocation_table)
    ADD ESP,0x10                        ; 0053542f
    LEA EAX,[ESP + 0x5ff0]              ; 00535432
    PUSH EAX                            ; 00535439
    LEA EAX,[ESP + 0x570c]              ; 0053543a
    PUSH EAX                            ; 00535441
    LEA EAX,[ESP + 0x5e48]              ; 00535442
    PUSH EAX                            ; 00535449
    LEA EAX,[ESP + 0x5414]              ; 0053544a
    PUSH EAX                            ; 00535451
    CALL sound_mp3.cpp_requantizeLayer3Samples_FUN_0052fee0 ; 00535452
        ;   XREF to: 0052fee0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_requantizeLayer3Samples_FUN_0052fee0(int * scalefactor_indices, uint * quantized_samples, float * dequantized_output, SMpegFrame * frame_info)
    ADD ESP,0x10                        ; 00535457
    MOV EAX,dword ptr [ESP + 0x6014]    ; 0053545a
    SAR EAX,0x2                         ; 00535461
    PUSH EAX                            ; 00535464
    LEA EAX,[ESP + 0x5ff4]              ; 00535465
    PUSH EAX                            ; 0053546c
    LEA EAX,[ESP + 0x5110]              ; 0053546d
    PUSH EAX                            ; 00535474
    LEA EAX,[ESP + 0x5714]              ; 00535475
    PUSH EAX                            ; 0053547c
    CALL sound_mp3.cpp_applyScalefactorsToSubbands_FUN_005302f0 ; 0053547d
        ;   XREF to: 005302f0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_applyScalefactorsToSubbands_FUN_005302f0(float * spectral_samples, int * scalefactor_band_indices, SMpegFrame * frame_info, int channel_or_granule_index)
    ADD ESP,0x10                        ; 00535482
    TEST EBX,EBX                        ; 00535485
    JNZ 0x005354a6                      ; 00535487
        ;   XREF to: 005354a6 (CONDITIONAL_JUMP)  ; LAB_005354a6
    MOV EDI,dword ptr [ESP + 0x6014]    ; 00535489
        ;   Label: LAB_00535489
    INC EDI                             ; 00535490
    MOV dword ptr [ESP + 0x6014],EDI    ; 00535491
    CMP EDI,0xc                         ; 00535498
    JL 0x0053540a                       ; 0053549b
        ;   XREF to: 0053540a (CONDITIONAL_JUMP)  ; LAB_0053540a
    JMP 0x005351e2                      ; 005354a1
        ;   XREF to: 005351e2 (UNCONDITIONAL_JUMP)  ; LAB_005351e2
    XOR EAX,EAX                         ; 005354a6
        ;   Label: LAB_005354a6
    MOV dword ptr [ESP + 0x60a8],EAX    ; 005354a8
    MOV dword ptr [ESP + 0x60a4],EAX    ; 005354af
    MOV ECX,dword ptr [ESP + 0x6018]    ; 005354b6
        ;   Label: LAB_005354b6
    XOR ESI,ESI                         ; 005354bd
    TEST ECX,ECX                        ; 005354bf
    JLE 0x00535526                      ; 005354c1
        ;   XREF to: 00535526 (CONDITIONAL_JUMP)  ; LAB_00535526
    MOV EDI,dword ptr [ESP + 0x60a4]    ; 005354c3
    LEA EAX,[ESP + 0x5708]              ; 005354ca
    MOV EDX,dword ptr [ESP + 0x60a8]    ; 005354d1
    ADD EDI,EAX                         ; 005354d8
    LEA EAX,[ESP + 0x2d08]              ; 005354da
    ADD EAX,EDX                         ; 005354e1
    MOV dword ptr [ESP + 0x60a0],EAX    ; 005354e3
    MOV EAX,dword ptr [ESP + 0x60a0]    ; 005354ea
        ;   Label: LAB_005354ea
    PUSH EAX                            ; 005354f1
    PUSH ESI                            ; 005354f2
    PUSH EDI                            ; 005354f3
    MOV EDX,dword ptr [EBP + 0x14]      ; 005354f4
    PUSH EDX                            ; 005354f7
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0 ; 005354f8
        ;   XREF to: 005304f0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)
    ADD ESP,0x10                        ; 005354fd
    INC ESI                             ; 00535500
    MOV ECX,dword ptr [ESP + 0x60a0]    ; 00535501
    ADD EDI,0x180                       ; 00535508
    ADD ECX,0x480                       ; 0053550e
    MOV EAX,dword ptr [ESP + 0x6018]    ; 00535514
    MOV dword ptr [ESP + 0x60a0],ECX    ; 0053551b
    CMP ESI,EAX                         ; 00535522
    JL 0x005354ea                       ; 00535524
        ;   XREF to: 005354ea (CONDITIONAL_JUMP)  ; LAB_005354ea
    MOV ECX,dword ptr [ESP + 0x60a8]    ; 00535526
        ;   Label: LAB_00535526
    MOV EDX,dword ptr [ESP + 0x60a4]    ; 0053552d
    ADD ECX,0x40                        ; 00535534
    ADD EDX,0x80                        ; 00535537
    MOV dword ptr [ESP + 0x60a8],ECX    ; 0053553d
    MOV dword ptr [ESP + 0x60a4],EDX    ; 00535544
    CMP ECX,0xc0                        ; 0053554b
    JNZ 0x005354b6                      ; 00535551
        ;   XREF to: 005354b6 (CONDITIONAL_JUMP)  ; LAB_005354b6
    XOR EDI,EDI                         ; 00535557
    MOV dword ptr [ESP + 0x60ac],EDI    ; 00535559
    MOV dword ptr [ESP + 0x6014],EDI    ; 00535560
    MOV EDI,dword ptr [ESP + 0x60ac]    ; 00535567
        ;   Label: LAB_00535567
    XOR ESI,ESI                         ; 0053556e
    MOV ECX,dword ptr [ESP + 0x6018]    ; 00535570
        ;   Label: LAB_00535570
    XOR EAX,EAX                         ; 00535577
    TEST ECX,ECX                        ; 00535579
    JLE 0x005355a1                      ; 0053557b
        ;   XREF to: 005355a1 (CONDITIONAL_JUMP)  ; LAB_005355a1
    LEA ECX,[ESI + EDI*0x1]             ; 0053557d
    ADD EBX,0x2                         ; 00535580
        ;   Label: LAB_00535580
    MOV DX,word ptr [ESP + ECX*0x1 + 0x2d08] ; 00535583
    INC EAX                             ; 0053558b
    MOV word ptr [EBX + -0x2],DX        ; 0053558c
    MOV EDX,dword ptr [ESP + 0x6018]    ; 00535590
    ADD ECX,0x480                       ; 00535597
    CMP EAX,EDX                         ; 0053559d
    JL 0x00535580                       ; 0053559f
        ;   XREF to: 00535580 (CONDITIONAL_JUMP)  ; LAB_00535580
    ADD ESI,0x2                         ; 005355a1
        ;   Label: LAB_005355a1
    CMP ESI,0x40                        ; 005355a4
    JNZ 0x00535570                      ; 005355a7
        ;   XREF to: 00535570 (CONDITIONAL_JUMP)  ; LAB_00535570
    MOV ECX,dword ptr [ESP + 0x60ac]    ; 005355a9
    ADD ECX,ESI                         ; 005355b0
    MOV dword ptr [ESP + 0x60ac],ECX    ; 005355b2
    CMP ECX,0xc0                        ; 005355b9
    JZ 0x00535489                       ; 005355bf
        ;   XREF to: 00535489 (CONDITIONAL_JUMP)  ; LAB_00535489
    JMP 0x00535567                      ; 005355c5
        ;   XREF to: 00535567 (UNCONDITIONAL_JUMP)  ; LAB_00535567
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 005355c7
        ;   Label: LAB_005355c7
    MOV ECX,0x8                         ; 005355ce
    MOV ESI,dword ptr [EAX]             ; 005355d3
    MOV dword ptr [ESP],ECX             ; 005355d5
    TEST ESI,ESI                        ; 005355d8
    JZ 0x00535739                       ; 005355da
        ;   XREF to: 00535739 (CONDITIONAL_JUMP)  ; LAB_00535739
    MOV dword ptr [ESP + 0x4],0x480     ; 005355e0
    LEA EAX,[ESP + 0x5ff0]              ; 005355e8
        ;   Label: LAB_005355e8
    PUSH EAX                            ; 005355ef
    LEA EAX,[ESP + 0x5bfc]              ; 005355f0
    PUSH EAX                            ; 005355f7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005355f8
    ADD EAX,0x5320                      ; 005355fb
    PUSH EAX                            ; 00535600
    MOV ECX,dword ptr [EBP + 0x14]      ; 00535601
    PUSH ECX                            ; 00535604
    MOV dword ptr [ESP + 0x6074],EAX    ; 00535605
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0 ; 0053560c
        ;   XREF to: 005307a0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0(CMP3Decoder * this_ptr, CFileBitStream * bit_stream, SMpegLayer3SideInfo * side_info_array, SMpegFrame * frame)
    ADD ESP,0x10                        ; 00535611
    LEA ESI,[ESP + 0x5ff0]              ; 00535614
    SUB ESP,0x1c                        ; 0053561b
    MOV ECX,0x7                         ; 0053561e
    MOV EDI,ESP                         ; 00535623
    MOVSD.REP ES:EDI,ESI                ; 00535625
    CALL sound_mp3.cpp_calculateMainDataSize_FUN_00533c50 ; 00535627
        ;   XREF to: 00533c50 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_calculateMainDataSize_FUN_00533c50(SMpegFrame frame_info)
    ADD ESP,0x1c                        ; 0053562c
    MOV ESI,EAX                         ; 0053562f
    TEST EAX,EAX                        ; 00535631
    JLE 0x00535660                      ; 00535633
        ;   XREF to: 00535660 (CONDITIONAL_JUMP)  ; LAB_00535660
    MOV EDI,dword ptr [ESP + 0x6064]    ; 00535635
    PUSH 0x8                            ; 0053563c
        ;   Label: LAB_0053563c
    PUSH 0x8                            ; 0053563e
    PUSH EDI                            ; 00535640
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00535641
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00535646
    PUSH EAX                            ; 00535649
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053564a
    PUSH EDX                            ; 0053564d
    DEC ESI                             ; 0053564e
    CALL sound_mp3.cpp_CMP3Decoder_putByte_FUN_0052f260 ; 0053564f
        ;   XREF to: 0052f260 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_putByte_FUN_0052f260(CMP3Decoder * this_ptr, uint byte_value, uint bits_per_byte)
    ADD ESP,0xc                         ; 00535654
    TEST ESI,ESI                        ; 00535657
    JG 0x0053563c                       ; 00535659
        ;   XREF to: 0053563c (CONDITIONAL_JUMP)  ; LAB_0053563c
    LEA EAX,[EAX]                       ; 0053565b
    MOV ECX,ECX                         ; 0053565e
    MOV ECX,dword ptr [EBP + 0x14]      ; 00535660
        ;   Label: LAB_00535660
    PUSH ECX                            ; 00535663
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160 ; 00535664
        ;   XREF to: 0052f160 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00535669
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053566c
    PUSH EDI                            ; 0053566f
    MOV ESI,EAX                         ; 00535670
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160 ; 00535672
        ;   XREF to: 0052f160 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00535677
    XOR EDX,EDX                         ; 0053567a
    MOV ECX,dword ptr [ESP]             ; 0053567c
    DIV ECX                             ; 0053567f
    SHR ESI,0x3                         ; 00535681
    TEST EDX,EDX                        ; 00535684
    JZ 0x00535697                       ; 00535686
        ;   XREF to: 00535697 (CONDITIONAL_JUMP)  ; LAB_00535697
    MOV EAX,ECX                         ; 00535688
    SUB EAX,EDX                         ; 0053568a
    PUSH EAX                            ; 0053568c
    PUSH EDI                            ; 0053568d
    INC ESI                             ; 0053568e
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170 ; 0053568f
        ;   XREF to: 0052f170 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00535694
    MOV EAX,dword ptr [EBP + 0x14]      ; 00535697
        ;   Label: LAB_00535697
    MOV EAX,dword ptr [EAX + 0x534c]    ; 0053569a
    MOV EDX,dword ptr [ESP + 0x5bf8]    ; 005356a0
    SUB EAX,ESI                         ; 005356a7
    SUB EAX,EDX                         ; 005356a9
    MOV dword ptr [ESP + 0x6060],EAX    ; 005356ab
    CMP ESI,0x1000                      ; 005356b2
    JLE 0x005356dd                      ; 005356b8
        ;   XREF to: 005356dd (CONDITIONAL_JUMP)  ; LAB_005356dd
    MOV ECX,dword ptr [EBP + 0x14]      ; 005356ba
    MOV ESI,dword ptr [ECX + 0x534c]    ; 005356bd
    PUSH 0x1000                         ; 005356c3
    SUB ESI,0x1000                      ; 005356c8
    PUSH ECX                            ; 005356ce
    MOV dword ptr [ECX + 0x534c],ESI    ; 005356cf
    CALL sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_0052f320 ; 005356d5
        ;   XREF to: 0052f320 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_0052f320(CMP3Decoder * this_ptr, int num_bytes)
    ADD ESP,0x8                         ; 005356da
    MOV ECX,0x7                         ; 005356dd
        ;   Label: LAB_005356dd
    SUB ESP,0x1c                        ; 005356e2
    LEA ESI,[ESP + 0x600c]              ; 005356e5
    MOV EDI,ESP                         ; 005356ec
    MOVSD.REP ES:EDI,ESI                ; 005356ee
    CALL sound_mp3.cpp_calculateMainDataSize_FUN_00533c50 ; 005356f0
        ;   XREF to: 00533c50 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_calculateMainDataSize_FUN_00533c50(SMpegFrame frame_info)
    ADD ESP,0x1c                        ; 005356f5
    MOV EDX,dword ptr [EBP + 0x14]      ; 005356f8
    MOV EDI,dword ptr [EDX + 0x534c]    ; 005356fb
    ADD EDI,EAX                         ; 00535701
    MOV EAX,dword ptr [ESP + 0x6060]    ; 00535703
    MOV dword ptr [EDX + 0x534c],EDI    ; 0053570a
    TEST EAX,EAX                        ; 00535710
    JL 0x00535746                       ; 00535712
        ;   XREF to: 00535746 (CONDITIONAL_JUMP)  ; LAB_00535746
    MOV ESI,dword ptr [ESP + 0x6060]    ; 00535714
        ;   Label: LAB_00535714
    TEST ESI,ESI                        ; 0053571b
    JLE 0x00535774                      ; 0053571d
        ;   XREF to: 00535774 (CONDITIONAL_JUMP)  ; LAB_00535774
    PUSH 0x8                            ; 0053571f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00535721
    PUSH EDX                            ; 00535724
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170 ; 00535725
        ;   XREF to: 0052f170 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 0053572a
    LEA ECX,[ESI + -0x1]                ; 0053572d
    MOV dword ptr [ESP + 0x6060],ECX    ; 00535730
    JMP 0x00535714                      ; 00535737
        ;   XREF to: 00535714 (UNCONDITIONAL_JUMP)  ; LAB_00535714
    MOV dword ptr [ESP + 0x4],0x240     ; 00535739
        ;   Label: LAB_00535739
    JMP 0x005355e8                      ; 00535741
        ;   XREF to: 005355e8 (UNCONDITIONAL_JUMP)  ; LAB_005355e8
    MOV EAX,dword ptr [ESP + 0x601c]    ; 00535746
        ;   Label: LAB_00535746
    DEC EAX                             ; 0053574d
    PUSH EAX                            ; 0053574e
    MOV EDX,0x63b2b2                    ; 0053574f | = "..\\sound\\mp3.cpp"
    MOV ECX,0xf9a                       ; 00535754
    PUSH 0x63b2c3                       ; 00535759 | = "Not enough main data to decode frame %d."
    MOV dword ptr [0x02f0ca48],EDX      ; 0053575e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00535764 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053576a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0053576f
    JMP 0x00535714                      ; 00535772
        ;   XREF to: 00535714 (UNCONDITIONAL_JUMP)  ; LAB_00535714
    TEST EBX,EBX                        ; 00535774
        ;   Label: LAB_00535774
    JZ 0x005351e2                       ; 00535776
        ;   XREF to: 005351e2 (CONDITIONAL_JUMP)  ; LAB_005351e2
    XOR EDI,EDI                         ; 0053577c
    MOV EAX,dword ptr [ESP + 0x6024]    ; 0053577e
    MOV dword ptr [ESP + 0x605c],EDI    ; 00535785
    TEST EAX,EAX                        ; 0053578c
    JLE 0x005351e2                      ; 0053578e
        ;   XREF to: 005351e2 (CONDITIONAL_JUMP)  ; LAB_005351e2
    LEA EAX,[ESP + 0x5c10]              ; 00535794
    MOV dword ptr [ESP + 0x609c],EDI    ; 0053579b
    MOV dword ptr [ESP + 0x6098],EAX    ; 005357a2
    MOV EDI,dword ptr [ESP + 0x6018]    ; 005357a9
        ;   Label: LAB_005357a9
    XOR ESI,ESI                         ; 005357b0
    TEST EDI,EDI                        ; 005357b2
    JLE 0x005358b4                      ; 005357b4
        ;   XREF to: 005358b4 (CONDITIONAL_JUMP)  ; LAB_005358b4
    LEA EAX,[ESP + 0x1208]              ; 005357ba
    MOV EDI,dword ptr [ESP + 0x609c]    ; 005357c1
    MOV dword ptr [ESP + 0x6078],EAX    ; 005357c8
    ADD EDI,0x10                        ; 005357cf
    LEA EAX,[ESP + 0x5c00]              ; 005357d2
    ADD EDI,EAX                         ; 005357d9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005357db
        ;   Label: LAB_005357db
    PUSH EDX                            ; 005357de
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160 ; 005357df
        ;   XREF to: 0052f160 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005357e4
    MOV dword ptr [ESP + 0x6068],EAX    ; 005357e7
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 005357ee
    CMP dword ptr [EAX],0x0             ; 005357f5
    JZ 0x00535bdb                       ; 005357f8
        ;   XREF to: 00535bdb (CONDITIONAL_JUMP)  ; LAB_00535bdb
    LEA EAX,[ESP + 0x5ff0]              ; 005357fe
    PUSH EAX                            ; 00535805
    PUSH ESI                            ; 00535806
    MOV ECX,dword ptr [ESP + 0x6064]    ; 00535807
    PUSH ECX                            ; 0053580e
    LEA EAX,[ESP + 0x5c04]              ; 0053580f
    PUSH EAX                            ; 00535816
    LEA EAX,[ESP + 0x5a18]              ; 00535817
    PUSH EAX                            ; 0053581e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053581f
    PUSH EAX                            ; 00535822
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20 ; 00535823
        ;   XREF to: 00530d20 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3SideInfo * granule_info, int channel, ...)
    ADD ESP,0x18                        ; 00535828
        ;   Label: LAB_00535828
    LEA EAX,[ESP + 0x5ff0]              ; 0053582b
    PUSH EAX                            ; 00535832
    MOV EAX,dword ptr [ESP + 0x606c]    ; 00535833
    PUSH EAX                            ; 0053583a
    MOV EDX,dword ptr [ESP + 0x6064]    ; 0053583b
    PUSH EDX                            ; 00535842
    PUSH ESI                            ; 00535843
    LEA EAX,[ESP + 0x5c08]              ; 00535844
    PUSH EAX                            ; 0053584b
    LEA EAX,[ESP + 0x241c]              ; 0053584c
    PUSH EAX                            ; 00535853
    MOV ECX,dword ptr [EBP + 0x14]      ; 00535854
    PUSH ECX                            ; 00535857
    CALL sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680 ; 00535858
        ;   XREF to: 00531680 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680(CMP3Decoder * this_ptr, SMpegSubbandQuantizedSamples * quantized_dest, SMpegLayer3SideInfo * side_info, int channel, ...)
    ADD ESP,0x1c                        ; 0053585d
    LEA EAX,[ESP + 0x5ff0]              ; 00535860
    PUSH EAX                            ; 00535867
    PUSH ESI                            ; 00535868
    PUSH EDI                            ; 00535869
    LEA EAX,[ESP + 0x5a14]              ; 0053586a
    PUSH EAX                            ; 00535871
    MOV EAX,dword ptr [ESP + 0x6088]    ; 00535872
    PUSH EAX                            ; 00535879
    LEA EAX,[ESP + 0x241c]              ; 0053587a
    PUSH EAX                            ; 00535881
    CALL sound_mp3.cpp_requantizeLayer3Samples_FUN_00531d50 ; 00535882
        ;   XREF to: 00531d50 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_requantizeLayer3Samples_FUN_00531d50(SMpegSubbandQuantizedSamples * quantized_samples, SMpegSubbandSamples * output_samples, int * scalefactor_data, SMpegLayer3SideInfo * side_info, ...)
    ADD ESP,0x18                        ; 00535887
    INC ESI                             ; 0053588a
    MOV EDX,dword ptr [ESP + 0x6078]    ; 0053588b
    ADD EDI,0xa0                        ; 00535892
    ADD EDX,0x900                       ; 00535898
    MOV ECX,dword ptr [ESP + 0x6018]    ; 0053589e
    MOV dword ptr [ESP + 0x6078],EDX    ; 005358a5
    CMP ESI,ECX                         ; 005358ac
    JL 0x005357db                       ; 005358ae
        ;   XREF to: 005357db (CONDITIONAL_JUMP)  ; LAB_005357db
    LEA EAX,[ESP + 0x5ff0]              ; 005358b4
        ;   Label: LAB_005358b4
    PUSH EAX                            ; 005358bb
    MOV ESI,dword ptr [ESP + 0x609c]    ; 005358bc
    PUSH ESI                            ; 005358c3
    LEA EAX,[ESP + 0x5a10]              ; 005358c4
    PUSH EAX                            ; 005358cb
    LEA EAX,[ESP + 0x14]                ; 005358cc
    PUSH EAX                            ; 005358d0
    LEA EAX,[ESP + 0x1218]              ; 005358d1
    PUSH EAX                            ; 005358d8
    CALL sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005325e0 ; 005358d9
        ;   XREF to: 005325e0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005325e0(SMpegStereoSubbandSamples * input_lr_samples, SMpegStereoSubbandSamples * output_samples, SMpegScalefactorBandData * scalefactor_data, SMpegFrame * frame_info, ...)
    ADD ESP,0x14                        ; 005358de
    XOR EDI,EDI                         ; 005358e1
    MOV EAX,dword ptr [ESP + 0x6018]    ; 005358e3
    MOV dword ptr [ESP + 0x60b4],EDI    ; 005358ea
    TEST EAX,EAX                        ; 005358f1
    JLE 0x00535b34                      ; 005358f3
        ;   XREF to: 00535b34 (CONDITIONAL_JUMP)  ; LAB_00535b34
    MOV EAX,dword ptr [ESP + 0x609c]    ; 005358f9
    LEA EDX,[ESP + 0x5c00]              ; 00535900
    ADD EAX,0x10                        ; 00535907
    ADD EAX,EDX                         ; 0053590a
    LEA EDX,[ESP + 0x8]                 ; 0053590c
    MOV dword ptr [ESP + 0x6084],EAX    ; 00535910
    MOV dword ptr [ESP + 0x608c],EAX    ; 00535917
    LEA EAX,[ESP + 0x2d08]              ; 0053591e
    MOV dword ptr [ESP + 0x6088],EDX    ; 00535925
    MOV dword ptr [ESP + 0x6090],EAX    ; 0053592c
    LEA EAX,[ESP + 0x5ff0]              ; 00535933
        ;   Label: LAB_00535933
    PUSH EAX                            ; 0053593a
    MOV ESI,dword ptr [ESP + 0x6090]    ; 0053593b
    PUSH ESI                            ; 00535942
    LEA EAX,[ESP + 0x3f10]              ; 00535943
    PUSH EAX                            ; 0053594a
    MOV EDI,dword ptr [ESP + 0x6094]    ; 0053594b
    PUSH EDI                            ; 00535952
    CALL sound_mp3.cpp_reorderShortBlockSamples_FUN_00532200 ; 00535953
        ;   XREF to: 00532200 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_reorderShortBlockSamples_FUN_00532200(SMpegSubbandSamples * input_samples, SMpegSubbandSamples * output_samples, SMpegFrame * frame_info, SMpegFrame * frame)
    ADD ESP,0x10                        ; 00535958
    LEA EAX,[ESP + 0x5ff0]              ; 0053595b
    PUSH EAX                            ; 00535962
    PUSH ESI                            ; 00535963
    LEA EAX,[ESP + 0x3610]              ; 00535964
    PUSH EAX                            ; 0053596b
    LEA EAX,[ESP + 0x3f14]              ; 0053596c
    PUSH EAX                            ; 00535973
    CALL sound_mp3.cpp_antiAliasingButterfly_FUN_005334b0 ; 00535974
        ;   XREF to: 005334b0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_antiAliasingButterfly_FUN_005334b0(float * input_samples, float * output_samples, SMpegFrame * frame_info, SMpegFrameHeader * header)
    ADD ESP,0x10                        ; 00535979
    MOV EAX,dword ptr [ESP + 0x6084]    ; 0053597c
    LEA EDI,[ESP + 0x4808]              ; 00535983
    MOV dword ptr [ESP + 0x606c],EAX    ; 0053598a
    LEA EAX,[ESP + 0x3608]              ; 00535991
    XOR ESI,ESI                         ; 00535998
    MOV dword ptr [ESP + 0x607c],EAX    ; 0053599a
    LEA EAX,[ESP + 0x5ff0]              ; 005359a1
        ;   Label: LAB_005359a1
    PUSH EAX                            ; 005359a8
    MOV EDX,dword ptr [ESP + 0x6070]    ; 005359a9
    PUSH EDX                            ; 005359b0
    MOV ECX,dword ptr [ESP + 0x60bc]    ; 005359b1
    PUSH ECX                            ; 005359b8
    PUSH ESI                            ; 005359b9
    PUSH EDI                            ; 005359ba
    MOV EAX,dword ptr [ESP + 0x6090]    ; 005359bb
    PUSH EAX                            ; 005359c2
    MOV EDX,dword ptr [EBP + 0x14]      ; 005359c3
    PUSH EDX                            ; 005359c6
    CALL sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0 ; 005359c7
        ;   XREF to: 00533ba0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0(CMP3Decoder * this_ptr, float * input_samples, float * output_buffer, int subband_index, ...)
    ADD ESP,0x1c                        ; 005359cc
    MOV ECX,dword ptr [ESP + 0x607c]    ; 005359cf
    INC ESI                             ; 005359d6
    ADD ECX,0x48                        ; 005359d7
    ADD EDI,0x48                        ; 005359da
    MOV dword ptr [ESP + 0x607c],ECX    ; 005359dd
    CMP ESI,0x20                        ; 005359e4
    JL 0x005359a1                       ; 005359e7
        ;   XREF to: 005359a1 (CONDITIONAL_JUMP)  ; LAB_005359a1
    XOR ESI,ESI                         ; 005359e9
    MOV dword ptr [ESP + 0x6080],ESI    ; 005359eb
    MOV dword ptr [ESP + 0x60b8],ESI    ; 005359f2
    MOV EAX,dword ptr [ESP + 0x60b8]    ; 005359f9
        ;   Label: LAB_005359f9
    MOV EDX,EAX                         ; 00535a00
    MOV ESI,0x2                         ; 00535a02
    SAR EDX,0x1f                        ; 00535a07
    IDIV ESI                            ; 00535a0a
    XOR ECX,ECX                         ; 00535a0c
    MOV ESI,dword ptr [ESP + 0x6080]    ; 00535a0e
    MOV EDI,EDX                         ; 00535a15
    TEST EDI,EDI                        ; 00535a17
        ;   Label: LAB_00535a17
    JZ 0x00535a48                       ; 00535a19
        ;   XREF to: 00535a48 (CONDITIONAL_JUMP)  ; LAB_00535a48
    MOV dword ptr [ESP + 0x60bc],0x2    ; 00535a1b
    MOV EDX,ECX                         ; 00535a26
    MOV EAX,ECX                         ; 00535a28
    SAR EDX,0x1f                        ; 00535a2a
    IDIV dword ptr [ESP + 0x60bc]       ; 00535a2d
    TEST EDX,EDX                        ; 00535a34
    JZ 0x00535a48                       ; 00535a36
        ;   XREF to: 00535a48 (CONDITIONAL_JUMP)  ; LAB_00535a48
    FLD float ptr [ESP + ESI*0x1 + 0x4808] ; 00535a38
    FCHS                                ; 00535a3f
    FSTP float ptr [ESP + ESI*0x1 + 0x4808] ; 00535a41
    INC ECX                             ; 00535a48
        ;   Label: LAB_00535a48
    ADD ESI,0x48                        ; 00535a49
    CMP ECX,0x20                        ; 00535a4c
    JL 0x00535a17                       ; 00535a4f
        ;   XREF to: 00535a17 (CONDITIONAL_JUMP)  ; LAB_00535a17
    MOV EDX,dword ptr [ESP + 0x60b8]    ; 00535a51
    MOV EAX,dword ptr [ESP + 0x6080]    ; 00535a58
    INC EDX                             ; 00535a5f
    ADD EAX,0x4                         ; 00535a60
    MOV dword ptr [ESP + 0x60b8],EDX    ; 00535a63
    MOV dword ptr [ESP + 0x6080],EAX    ; 00535a6a
    CMP EDX,0x12                        ; 00535a71
    JL 0x005359f9                       ; 00535a74
        ;   XREF to: 005359f9 (CONDITIONAL_JUMP)  ; LAB_005359f9
    MOV EDI,dword ptr [ESP + 0x6090]    ; 00535a76
    XOR ESI,ESI                         ; 00535a7d
    MOV ECX,ESI                         ; 00535a7f
        ;   Label: LAB_00535a7f
    XOR EAX,EAX                         ; 00535a81
    ADD EAX,0x4                         ; 00535a83
        ;   Label: LAB_00535a83
    FLD float ptr [ESP + ECX*0x1 + 0x4808] ; 00535a86
    ADD ECX,0x48                        ; 00535a8d
    FSTP float ptr [ESP + EAX*0x1 + 0x5f3c] ; 00535a90
    CMP EAX,0x80                        ; 00535a97
    JNZ 0x00535a83                      ; 00535a9c
        ;   XREF to: 00535a83 (CONDITIONAL_JUMP)  ; LAB_00535a83
    PUSH EDI                            ; 00535a9e
    MOV EAX,dword ptr [ESP + 0x60b8]    ; 00535a9f
    PUSH EAX                            ; 00535aa6
    LEA EAX,[ESP + 0x5f48]              ; 00535aa7
    PUSH EAX                            ; 00535aae
    MOV EDX,dword ptr [EBP + 0x14]      ; 00535aaf
    PUSH EDX                            ; 00535ab2
    ADD ESI,0x4                         ; 00535ab3
    ADD EDI,0x40                        ; 00535ab6
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0 ; 00535ab9
        ;   XREF to: 005304f0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)
    ADD ESP,0x10                        ; 00535abe
    CMP ESI,0x48                        ; 00535ac1
    JNZ 0x00535a7f                      ; 00535ac4
        ;   XREF to: 00535a7f (CONDITIONAL_JUMP)  ; LAB_00535a7f
    MOV EDX,dword ptr [ESP + 0x6084]    ; 00535ac6
    MOV ECX,dword ptr [ESP + 0x6088]    ; 00535acd
    MOV ESI,dword ptr [ESP + 0x608c]    ; 00535ad4
    MOV EDI,dword ptr [ESP + 0x6090]    ; 00535adb
    MOV EAX,dword ptr [ESP + 0x60b4]    ; 00535ae2
    ADD EDX,0xa0                        ; 00535ae9
    ADD ECX,0x900                       ; 00535aef
    ADD ESI,0xa0                        ; 00535af5
    ADD EDI,0x480                       ; 00535afb
    INC EAX                             ; 00535b01
    MOV dword ptr [ESP + 0x6084],EDX    ; 00535b02
    MOV dword ptr [ESP + 0x6088],ECX    ; 00535b09
    MOV dword ptr [ESP + 0x608c],ESI    ; 00535b10
    MOV dword ptr [ESP + 0x6090],EDI    ; 00535b17
    MOV EDX,dword ptr [ESP + 0x6018]    ; 00535b1e
    MOV dword ptr [ESP + 0x60b4],EAX    ; 00535b25
    CMP EAX,EDX                         ; 00535b2c
    JL 0x00535933                       ; 00535b2e
        ;   XREF to: 00535933 (CONDITIONAL_JUMP)  ; LAB_00535933
    XOR ECX,ECX                         ; 00535b34
        ;   Label: LAB_00535b34
    MOV dword ptr [ESP + 0x6094],ECX    ; 00535b36
    MOV EDI,dword ptr [ESP + 0x6094]    ; 00535b3d
        ;   Label: LAB_00535b3d
    XOR ESI,ESI                         ; 00535b44
    MOV EAX,dword ptr [ESP + 0x6018]    ; 00535b46
        ;   Label: LAB_00535b46
    XOR ECX,ECX                         ; 00535b4d
    TEST EAX,EAX                        ; 00535b4f
    JLE 0x00535b76                      ; 00535b51
        ;   XREF to: 00535b76 (CONDITIONAL_JUMP)  ; LAB_00535b76
    LEA EAX,[ESI + EDI*0x1]             ; 00535b53
    ADD EBX,0x2                         ; 00535b56
        ;   Label: LAB_00535b56
    MOV DX,word ptr [ESP + EAX*0x1 + 0x2d08] ; 00535b59
    INC ECX                             ; 00535b61
    MOV word ptr [EBX + -0x2],DX        ; 00535b62
    MOV EDX,dword ptr [ESP + 0x6018]    ; 00535b66
    ADD EAX,0x480                       ; 00535b6d
    CMP ECX,EDX                         ; 00535b72
    JL 0x00535b56                       ; 00535b74
        ;   XREF to: 00535b56 (CONDITIONAL_JUMP)  ; LAB_00535b56
    ADD ESI,0x2                         ; 00535b76
        ;   Label: LAB_00535b76
    CMP ESI,0x40                        ; 00535b79
    JNZ 0x00535b46                      ; 00535b7c
        ;   XREF to: 00535b46 (CONDITIONAL_JUMP)  ; LAB_00535b46
    MOV ECX,dword ptr [ESP + 0x6094]    ; 00535b7e
    ADD ECX,ESI                         ; 00535b85
    MOV dword ptr [ESP + 0x6094],ECX    ; 00535b87
    CMP ECX,0x480                       ; 00535b8e
    JNZ 0x00535b3d                      ; 00535b94
        ;   XREF to: 00535b3d (CONDITIONAL_JUMP)  ; LAB_00535b3d
    MOV ESI,dword ptr [ESP + 0x6098]    ; 00535b96
    MOV EDI,dword ptr [ESP + 0x609c]    ; 00535b9d
    MOV EAX,dword ptr [ESP + 0x605c]    ; 00535ba4
    MOV EDX,dword ptr [ESP + 0x6024]    ; 00535bab
    ADD ESI,0x48                        ; 00535bb2
    ADD EDI,0x48                        ; 00535bb5
    INC EAX                             ; 00535bb8
    MOV dword ptr [ESP + 0x6098],ESI    ; 00535bb9
    MOV dword ptr [ESP + 0x609c],EDI    ; 00535bc0
    MOV dword ptr [ESP + 0x605c],EAX    ; 00535bc7
    CMP EAX,EDX                         ; 00535bce
    JGE 0x005351e2                      ; 00535bd0
        ;   XREF to: 005351e2 (CONDITIONAL_JUMP)  ; LAB_005351e2
    JMP 0x005357a9                      ; 00535bd6
        ;   XREF to: 005357a9 (UNCONDITIONAL_JUMP)  ; LAB_005357a9
    LEA EAX,[ESP + 0x5ff0]              ; 00535bdb
        ;   Label: LAB_00535bdb
    PUSH EAX                            ; 00535be2
    PUSH ESI                            ; 00535be3
    MOV EAX,dword ptr [ESP + 0x6064]    ; 00535be4
    PUSH EAX                            ; 00535beb
    LEA EAX,[ESP + 0x5c04]              ; 00535bec
    PUSH EAX                            ; 00535bf3
    LEA EAX,[ESP + 0x5a18]              ; 00535bf4
    PUSH EAX                            ; 00535bfb
    MOV EDX,dword ptr [EBP + 0x14]      ; 00535bfc
    PUSH EDX                            ; 00535bff
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480 ; 00535c00
        ;   XREF to: 00531480 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3SideInfo * granule_info, int channel, ...)
    JMP 0x00535828                      ; 00535c05
        ;   XREF to: 00535828 (UNCONDITIONAL_JUMP)  ; LAB_00535828
    CMP EDI,0x2                         ; 00535c0a
        ;   Label: LAB_00535c0a
    JBE 0x005353a7                      ; 00535c0d
        ;   XREF to: 005353a7 (CONDITIONAL_JUMP)  ; LAB_005353a7
    CMP EDI,0x3                         ; 00535c13
    JZ 0x005355c7                       ; 00535c16
        ;   XREF to: 005355c7 (CONDITIONAL_JUMP)  ; LAB_005355c7
    JMP 0x005351e2                      ; 00535c1c
        ;   XREF to: 005351e2 (UNCONDITIONAL_JUMP)  ; LAB_005351e2

